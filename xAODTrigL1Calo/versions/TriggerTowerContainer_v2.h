// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERCONTAINER_V2_H
#define XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERCONTAINER_V2_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/TriggerTower_v2.h"

namespace xAOD {
   /// Define the TriggerTower as a simple DataVector
   typedef DataVector< xAOD::TriggerTower_v2 > TriggerTowerContainer_v2;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::TriggerTowerContainer_v2 , 1174216565 , 1 )
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERCONTAINER_V2_H
