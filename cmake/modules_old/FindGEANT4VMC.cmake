 ################################################################################
 #    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    #
 #                                                                              #
 #              This software is distributed under the terms of the             #
 #              GNU Lesser General Public Licence (LGPL) version 3,             #
 #                  copied verbatim in the file "LICENSE"                       #
 ################################################################################
# - Try to find GEANT4VMC
# Once done this will define
#
#  GEANT4VMC_FOUND - system has GEANT4VMC
#  GEANT4VMC_INCLUDE_DIR - the GEANT4VMC include directory
#  GEANT4VMC_LIBRARIES - The libraries needed to use GEANT4VMC
#  GEANT4VMC_DEFINITIONS - Compiler switches required for using GEANT4VMC
#

if (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR)
  SET (GEANT4VMC_INCLUDE_DIR GEANT4VMC_INCLUDE_DIR-NOTFOUND)
  SET (GEANT4VMC_LIB_DIR GEANT4VMC_LIB_DIR-NOTFOUND)
  SET (GEANT4VMC_PLISTS_LIB_DIR GEANT4VMC_PLISTS_LIB_DIR-NOTFOUND)
endif (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR)

#MESSAGE(STATUS "Looking for GEANT4VMC...")

FIND_PATH(GEANT4VMC_INCLUDE_DIR NAMES TG4G3Units.h PATHS
  ${SIMPATH}/transport/geant4_vmc/include/geant4vmc
  ${SIMPATH}/transport/geant4_vmc/include
  ${SIMPATH}/include/geant4vmc
  ${GEANT4_VMC_ROOT}/include/geant4vmc
   NO_DEFAULT_PATH
)


FIND_PATH(GEANT4VMC_MACRO_DIR NAMES g4libs.C PATHS
  ${SIMPATH}/transport/macro
  ${SIMPATH}/transport/geant4_vmc/examples/macro/
  ${SIMPATH}/transport/geant4_vmc/examples/macro/
  ${SIMPATH}/share/geant4_vmc/macro/
  ${GEANT4_VMC_ROOT}/share/examples/macro/
  NO_DEFAULT_PATH
)

FIND_PATH(GEANT4VMC_LIBRARY_DIR NAMES libgeant4vmc.so libgeant4vmc.dylib PATHS
  ${SIMPATH}/transport/geant4_vmc/lib/tgt_linux
  ${SIMPATH}/transport/geant4_vmc/lib/tgt_linuxicc
  ${SIMPATH}/transport/geant4_vmc/lib/tgt_linuxx8664gcc
  ${SIMPATH}/transport/geant4_vmc/lib
  ${SIMPATH}/lib
  ${GEANT4_VMC_ROOT}/lib/
  NO_DEFAULT_PATH
)

SUBDIRLIST (SUBDIRS ${GEANT4VMC_LIBRARY_DIR})

FOREACH(subdir ${SUBDIRS})
  SET(fullpath_subdir ${GEANT4VMC_LIBRARY_DIR}/${subdir})
  FIND_PATH(GEANT4VMC_CONFIG_DIR NAMES Geant4VMCConfigVersion.cmake PATHS ${fullpath_subdir})
  if(EXISTS ${GEANT4VMC_CONFIG_DIR}/Geant4VMCConfigVersion.cmake)
      include(${GEANT4VMC_CONFIG_DIR}/Geant4VMCConfig.cmake)
      include(${GEANT4VMC_CONFIG_DIR}/Geant4VMCConfigVersion.cmake)
      set(GEANT4VMC_VERSION ${PACKAGE_VERSION})
      set(GEANT4VMC_ROOT ${GEANT4VMC_LIBRARY_DIR})
   endif()
ENDFOREACH()


# check for existence of header file, which is needed in FairRunConfiguration
# The file is only present in old versions of VMC
FIND_FILE(GEANT4_MODULAR_PHYSICS_LIST TG4ModularPhysicsList.h PATHS
  ${GEANT4VMC_INCLUDE_DIR}
  NO_DEFAULT_PATH
)

if (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR)
  if (NOT GEANT4VMC_FIND_QUIETLY)
    MESSAGE(STATUS "Looking for GEANT4VMC... - found  ${GEANT4VMC_LIBRARY_DIR}")
  endif (NOT GEANT4VMC_FIND_QUIETLY)
else (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR)
  if (GEANT4VMC_FIND_REQUIRED)
    message(FATAL_ERROR "Looking for GEANT4VMC... - Not found ")
  endif (GEANT4VMC_FIND_REQUIRED)
endif (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR)



if (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR AND VGM_LIBRARY_DIR)
   set(GEANT4VMC_FOUND TRUE)
endif (GEANT4VMC_INCLUDE_DIR AND GEANT4VMC_LIBRARY_DIR AND VGM_LIBRARY_DIR)

if (GEANT4VMC_FOUND)
  SET(LD_LIBRARY_PATH ${LD_LIBRARY_PATH} ${GEANT4VMC_LIBRARY_DIR}
      ${VGM_LIBRARY_DIR})
endif (GEANT4VMC_FOUND)
