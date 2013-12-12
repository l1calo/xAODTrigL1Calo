#ifndef XAODTRIGL1CALO_VERSIONS_RODHEADERCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_RODHEADERCONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/RODHeader_v1.h"

namespace xAOD {
   /// Define the RODHeader as a simple DataVector
   typedef DataVector< xAOD::RODHeader_v1 > RODHeaderContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::RODHeaderContainer_v1 , 1152973036 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_RODHEADERCONTAINER_V1_H