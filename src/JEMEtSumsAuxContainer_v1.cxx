// Local include(s):
#include "xAODTrigL1Calo/versions/JEMEtSumsAuxContainer_v1.h"
        
namespace xAOD {

  JEMEtSumsAuxContainer_v1::JEMEtSumsAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( crate );
    AUX_VARIABLE( module );
    AUX_VARIABLE( peak ); 
    AUX_VARIABLE( EtVec );
    AUX_VARIABLE( ExVec );
    AUX_VARIABLE( EyVec );    
  }
  
} // namespace xAOD
