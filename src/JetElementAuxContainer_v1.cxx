// Local include(s):
#include "xAODTrigL1Calo/versions/JetElementAuxContainer_v1.h"
        
namespace xAOD {

  JetElementAuxContainer_v1::JetElementAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( phi );
    AUX_VARIABLE( eta );
    AUX_VARIABLE( key );
    AUX_VARIABLE( peak );
    AUX_VARIABLE( emEnergyVec );
    AUX_VARIABLE( hadEnergyVec );
    AUX_VARIABLE( emErrorVec );
    AUX_VARIABLE( hadErrorVec );
    AUX_VARIABLE( linkErrorVec );      
  }
  
} // namespace xAOD
