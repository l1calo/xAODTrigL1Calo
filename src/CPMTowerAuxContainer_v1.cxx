// Local include(s):
#include "xAODTrigL1Calo/versions/CPMTowerAuxContainer_v1.h"
        
namespace xAOD {

  CPMTowerAuxContainer_v1::CPMTowerAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( em_energy );
    AUX_VARIABLE( had_energy );
    AUX_VARIABLE( em_error ); 
    AUX_VARIABLE( had_error );
    AUX_VARIABLE( eta );
    AUX_VARIABLE( phi );
    AUX_VARIABLE( peak );    
  }
  
} // namespace xAOD
