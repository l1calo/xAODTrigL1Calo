// Local include(s):
#include "xAODTrigL1Calo/versions/CPMRoIAuxContainer_v1.h"
        
namespace xAOD {

  CPMRoIAuxContainer_v1::CPMRoIAuxContainer_v1() :
    AuxContainerBase() 
  {
    AUX_VARIABLE( roiWord ); 
  }
  
} // namespace xAOD
