// Local include(s):
#include "xAODTrigL1Calo/versions/JEMHitsAuxContainer_v1.h"
        
namespace xAOD {

  JEMHitsAuxContainer_v1::JEMHitsAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( crate );
    AUX_VARIABLE( module );
    AUX_VARIABLE( peak ); 
    AUX_VARIABLE( jetHitsVec );
  }
  
} // namespace xAOD
