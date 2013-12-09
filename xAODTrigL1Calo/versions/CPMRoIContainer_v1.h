#ifndef XAODTRIGL1CALO_VERSIONS_CPMROICONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMROICONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CPMRoI_v1.h"

namespace xAOD {
   /// Define the CPMRoI as a simple DataVector
   typedef DataVector< xAOD::CPMRoI_v1 > CPMRoIContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMRoIContainer_v1 , 1274067747 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMROICONTAINER_V1_H