// Local include(s):
#include "xAODTrigL1Calo/versions/RODHeaderAuxContainer_v1.h"
        
namespace xAOD {

  RODHeaderAuxContainer_v1::RODHeaderAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( version );
    AUX_VARIABLE( sourceId );
    AUX_VARIABLE( run ); 
    AUX_VARIABLE( lvl1Id );
    AUX_VARIABLE( bcId );  
    AUX_VARIABLE( trigType );
    AUX_VARIABLE( detType );    
    AUX_VARIABLE( statusWords );  
    AUX_VARIABLE( payloadSize );    
  }  
} // namespace xAOD
