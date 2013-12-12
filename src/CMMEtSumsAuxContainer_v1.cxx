// Local include(s):
#include "xAODTrigL1Calo/versions/CMMEtSumsAuxContainer_v1.h"
        
namespace xAOD {

  CMMEtSumsAuxContainer_v1::CMMEtSumsAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( crate );
    AUX_VARIABLE( dataID );
    AUX_VARIABLE( peak ); 
    AUX_VARIABLE( EtVec );
    AUX_VARIABLE( ExVec );  
    AUX_VARIABLE( EyVec );
    AUX_VARIABLE( EtErrorVec );
    AUX_VARIABLE( ExErrorVec );  
    AUX_VARIABLE( EyErrorVec );   
  }
  
} // namespace xAOD
