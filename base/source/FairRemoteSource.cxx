// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                          FairRemoteSource                         -----
// -----                    Created 12.04.2013 by D.Kresan                 -----
// -----------------------------------------------------------------------------
#include <iostream>
using namespace std;

#include "TSocket.h"

#include "MRevBuffer.h"
#include "FairRemoteSource.h"


FairRemoteSource::FairRemoteSource(char* node)
  : FairSource()
{
  fBuffer = new MRevBuffer(1);
  fNode = node;
}


FairRemoteSource::~FairRemoteSource()
{
  delete fBuffer;
}


Bool_t FairRemoteSource::Init()
{
  if(! FairSource::Init()) {
    return kFALSE;
  }

  fBuffer->RevStatus(0);
  fSocket = fBuffer->RevOpen(fNode, 6003, 1000000);
  fBuffer->RevStatus(0);
  if(! fSocket) {
    return kFALSE;
  }
  return kTRUE;
}


Bool_t FairRemoteSource::ReadEvent()
{
  fREvent = fBuffer->RevGet(fSocket, 0, 0);
  fBuffer->RevStatus(0);
  if(! fREvent) {
    return kFALSE;
  }

  for(Int_t i = 0; i < fREvent->nSubEvt; i++) {
    if(! Unpack(fREvent->pSubEvt[i], fREvent->subEvtSize[i],
                fREvent->subEvtType[i], fREvent->subEvtSubType[i])) {
      return kFALSE;
    }
  }

  return kTRUE;
}


void FairRemoteSource::Close()
{
  fBuffer->RevClose(fSocket);
  fBuffer->RevStatus(0);
}


ClassImp(FairRemoteSource)

