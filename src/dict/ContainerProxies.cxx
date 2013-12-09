// xAOD include(s):
#include "xAODCore/AddDVProxy.h"
       
// Local include(s):
#include "xAODTrigL1Calo/versions/JEMHitsContainer_v1.h"
#include "xAODTrigL1Calo/versions/JEMEtSumsContainer_v1.h"
#include "xAODTrigL1Calo/versions/JEMRoIContainer_v1.h"

#include "xAODTrigL1Calo/versions/CPMHitsContainer_v1.h"
#include "xAODTrigL1Calo/versions/CPMTowerContainer_v1.h"
#include "xAODTrigL1Calo/versions/CPMRoIContainer_v1.h"

// Set up the collection proxies:
ADD_NS_DV_PROXY( xAOD, JEMHitsContainer_v1 );
ADD_NS_DV_PROXY( xAOD, JEMEtSumsContainer_v1 );
ADD_NS_DV_PROXY( xAOD, JEMRoIContainer_v1 );

ADD_NS_DV_PROXY( xAOD, CPMHitsContainer_v1 );
ADD_NS_DV_PROXY( xAOD, CPMTowerContainer_v1 );
ADD_NS_DV_PROXY( xAOD, CPMRoIContainer_v1 );
