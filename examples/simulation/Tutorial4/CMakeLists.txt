 ################################################################################
 #    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    #
 #                                                                              #
 #              This software is distributed under the terms of the             #
 #              GNU Lesser General Public Licence (LGPL) version 3,             #
 #                  copied verbatim in the file "LICENSE"                       #
 ################################################################################
Add_Subdirectory(src)
Add_Subdirectory(macros)

Install(DIRECTORY gconfig parameters macros/analysis
        DESTINATION share/fairbase/examples/simulation/Tutorial4
        PATTERN ".svn" EXCLUDE
       )
