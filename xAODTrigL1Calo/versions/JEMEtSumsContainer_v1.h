// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_JEMETSUMSCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_JEMETSUMSCONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"
// Local include(s):
#include "xAODTrigL1Calo/versions/JEMEtSums_v1.h"

namespace xAOD {
   /// Define the JEMEtSums as a simple DataVector
   typedef DataVector< xAOD::JEMEtSums_v1 > JEMEtSumsContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JEMEtSumsContainer_v1 , 1236231083 , 1 )
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_JEMETSUMSCONTAINER_V1_H
  