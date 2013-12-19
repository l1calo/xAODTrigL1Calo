// $Id$

// Local include(s):
#include "xAODTrigL1Calo/versions/CPMTowerAuxContainer_v1.h"
        
namespace xAOD {

  CPMTowerAuxContainer_v1::CPMTowerAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( emEnergyVec );
    AUX_VARIABLE( hadEnergyVec  );
    AUX_VARIABLE( emErrorVec  ); 
    AUX_VARIABLE( hadErrorVec  );
    AUX_VARIABLE( eta );
    AUX_VARIABLE( phi );
    AUX_VARIABLE( peak );    
  }
  
} // namespace xAOD
