#ifndef XAODTRIGL1CALO_XAODTRIGL1CALOCALOEVENTDICT_H
#define XAODTRIGL1CALO_XAODTRIGL1CALOCALOEVENTDICT_H

// System include(s):
#include <vector>

// EDM include(s):
#include "AthLinks/ElementLink.h"
#include "AthLinks/ElementLinkVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/JEMHits_v1.h"
#include "xAODTrigL1Calo/versions/JEMHitsContainer_v1.h"
#include "xAODTrigL1Calo/versions/JEMHitsAuxContainer_v1.h"

#include "xAODTrigL1Calo/versions/JEMEtSums_v1.h"
#include "xAODTrigL1Calo/versions/JEMEtSumsContainer_v1.h"
#include "xAODTrigL1Calo/versions/JEMEtSumsAuxContainer_v1.h"

#include "xAODTrigL1Calo/versions/JEMRoI_v1.h"
#include "xAODTrigL1Calo/versions/JEMRoIContainer_v1.h"
#include "xAODTrigL1Calo/versions/JEMRoIAuxContainer_v1.h"

#include "xAODTrigL1Calo/versions/CPMHits_v1.h"
#include "xAODTrigL1Calo/versions/CPMHitsContainer_v1.h"
#include "xAODTrigL1Calo/versions/CPMHitsAuxContainer_v1.h"

#include "xAODTrigL1Calo/versions/CPMTower_v1.h"
#include "xAODTrigL1Calo/versions/CPMTowerContainer_v1.h"
#include "xAODTrigL1Calo/versions/CPMTowerAuxContainer_v1.h"

#include "xAODTrigL1Calo/versions/CPMRoI_v1.h"
#include "xAODTrigL1Calo/versions/CPMRoIContainer_v1.h"
#include "xAODTrigL1Calo/versions/CPMRoIAuxContainer_v1.h"

#ifdef __GCCXML__
namespace {
   struct GCCXML_DUMMY_INSTANTIATION {
      
      // JEMHits    
      // Container(s):
      xAOD::JEMHitsContainer_v1 JEMHits_c1;
      // Element link(s):
      ElementLink< xAOD::JEMHitsContainer_v1 > JEMHits_el1;
      std::vector< ElementLink< xAOD::JEMHitsContainer_v1 > > JEMHits_el2;
      // Element link vector(s):
      ElementLinkVector< xAOD::JEMHitsContainer_v1 > JEMHits_elv1;
      std::vector< ElementLinkVector< xAOD::JEMHitsContainer_v1 > > JEMHits_elv2;
      
      // JEMEtSums
      // Container(s):
      xAOD::JEMEtSumsContainer_v1 JEMEtSums_c1;
      // Element link(s):
      ElementLink< xAOD::JEMEtSumsContainer_v1 > JEMEtSums_el1;
      std::vector< ElementLink< xAOD::JEMEtSumsContainer_v1 > > JEMEtSums_el2;
      // Element link vector(s):
      ElementLinkVector< xAOD::JEMEtSumsContainer_v1 > JEMEtSums_elv1;
      std::vector< ElementLinkVector< xAOD::JEMEtSumsContainer_v1 > > JEMEtSums_elv2;      
 
      // JEMRoI    
      // Container(s):
      xAOD::JEMRoIContainer_v1 JEMRoI_c1;
      // Element link(s):
      ElementLink< xAOD::JEMRoIContainer_v1 > JEMRoI_el1;
      std::vector< ElementLink< xAOD::JEMRoIContainer_v1 > > JEMRoI_el2;
      // Element link vector(s):
      ElementLinkVector< xAOD::JEMRoIContainer_v1 > JEMRoI_elv1;
      std::vector< ElementLinkVector< xAOD::JEMRoIContainer_v1 > > JEMRoI_elv2;  
      
      
      // CPMHits    
      // Container(s):
      xAOD::CPMHitsContainer_v1 CPMHits_c1;
      // Element link(s):
      ElementLink< xAOD::CPMHitsContainer_v1 > CPMHits_el1;
      std::vector< ElementLink< xAOD::CPMHitsContainer_v1 > > CPMHits_el2;
      // Element link vector(s):
      ElementLinkVector< xAOD::CPMHitsContainer_v1 > CPMHits_elv1;
      std::vector< ElementLinkVector< xAOD::CPMHitsContainer_v1 > > CPMHits_elv2; 
      
      // CPMTower    
      // Container(s):
      xAOD::CPMTowerContainer_v1 CPMTower_c1;
      // Element link(s):
      ElementLink< xAOD::CPMTowerContainer_v1 > CPMTower_el1;
      std::vector< ElementLink< xAOD::CPMTowerContainer_v1 > > CPMTower_el2;
      // Element link vector(s):
      ElementLinkVector< xAOD::CPMTowerContainer_v1 > CPMTower_elv1;
      std::vector< ElementLinkVector< xAOD::CPMTowerContainer_v1 > > CPMTower_elv2;    
      
      // CPMRoI    
      // Container(s):
      xAOD::CPMRoIContainer_v1 CPMRoI_c1;
      // Element link(s):
      ElementLink< xAOD::CPMRoIContainer_v1 > CPMRoI_el1;
      std::vector< ElementLink< xAOD::CPMRoIContainer_v1 > > CPMRoI_el2;
      // Element link vector(s):
      ElementLinkVector< xAOD::CPMRoIContainer_v1 > CPMRoI_elv1;
      std::vector< ElementLinkVector< xAOD::CPMRoIContainer_v1 > > CPMRoI_elv2;         
   };
}
#endif // __GCCXML__
#endif // XAODTRIGL1CALO_XAODTRIGL1CALOCALOEVENTDICT_H
