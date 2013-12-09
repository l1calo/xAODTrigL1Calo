#ifndef XAODTRIGL1CALO_VERSIONS_CPMTOWERCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMTOWERCONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CPMTower_v1.h"

namespace xAOD {
   /// Define the CPMHits as a simple DataVector
   typedef DataVector< xAOD::CPMTower_v1 > CPMTowerContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMTowerContainer_v1 , 1267839700 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMTOWERCONTAINER_V1_H