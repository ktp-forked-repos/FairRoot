/*
 * FairMCEntry.h
 *
 *  Created on: Dec 22, 2009
 *      Author: stockman
 */

#ifndef FAIRMCENTRY_H_
#define FAIRMCENTRY_H_

#include "FairMultiLinkedData.h"        // for FairMultiLinkedData

#include "FairLink.h"                   // for FairLink

#include "Riosfwd.h"                    // for ostream
#include "Rtypes.h"                     // for Int_t, FairMCEntry::Class, etc

#include <iostream>                     // for ostream
#include <set>                          // for set

class FairMCEntry : public FairMultiLinkedData
{
  public:
    FairMCEntry();
    FairMCEntry(std::set<FairLink> links, Int_t source = -1, Int_t pos = -1)
      : FairMultiLinkedData(links),
        fSource(source),
        fPos(pos) {
      SetPersistanceCheck(kFALSE);
    }

    FairMCEntry(FairMultiLinkedData links, Int_t source = -1, Int_t pos = -1)
      : FairMultiLinkedData(links),
        fSource(source),
        fPos(pos) {
      SetPersistanceCheck(kFALSE);
    }

    void SetSource(Int_t source) {fSource = source;}
    void SetPos(Int_t pos) {fPos = pos;}

    Int_t GetSource() const {return fSource;}
    Int_t GetPos() const {return fPos;}

    void RemoveType(Int_t type);

    virtual ~FairMCEntry();

    virtual void Print(std::ostream& out) {
      out << *this;
    }

    friend std::ostream& operator<< (std::ostream& out, const FairMCEntry& link) {
      ((FairMultiLinkedData)link).print(out);
      return out;
    }

  private:
    Int_t fSource;
    Int_t fPos;

    ClassDef(FairMCEntry, 1);
};

#endif
