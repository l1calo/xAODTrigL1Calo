// Local include(s):
#include "xAODTrigL1Calo/versions/CMMRoIAuxInfo_v1.h"
        
namespace xAOD {

  CMMRoIAuxInfo_v1::CMMRoIAuxInfo_v1() :
    AuxInfoBase() 
  {
    AUX_VARIABLE( jetEtRoiWord );
    AUX_VARIABLE( energyRoiWord0 ); 
    AUX_VARIABLE( energyRoiWord1 ); 
    AUX_VARIABLE( energyRoiWord2 );     
  }
  
} // namespace xAOD
