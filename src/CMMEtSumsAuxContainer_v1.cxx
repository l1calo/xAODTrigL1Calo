// $Id$

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMEtSumsAuxContainer_v1.h"
        
namespace xAOD {

  CMMEtSumsAuxContainer_v1::CMMEtSumsAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( crate );
    AUX_VARIABLE( dataID );
    AUX_VARIABLE( peak ); 
    AUX_VARIABLE( etVec );
    AUX_VARIABLE( exVec );  
    AUX_VARIABLE( eyVec );
    AUX_VARIABLE( etErrorVec );
    AUX_VARIABLE( exErrorVec );  
    AUX_VARIABLE( eyErrorVec );   
  }
  
} // namespace xAOD
