// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERCONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/TriggerTower_v1.h"

namespace xAOD {
   /// Define the TriggerTower as a simple DataVector
   typedef DataVector< xAOD::TriggerTower_v1 > TriggerTowerContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::TriggerTowerContainer_v1 , 1174216566 , 1 )
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERCONTAINER_V1_H
