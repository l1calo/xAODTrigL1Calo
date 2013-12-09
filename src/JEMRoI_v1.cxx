// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/JEMRoI_v1.h"

namespace xAOD{  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMRoI_v1 , uint32_t , roiWord , setRoiWord )  
    
  JEMRoI_v1::JEMRoI_v1() :
    SG::AuxElement()
  {        
  }
  
  /// Return crate number (0-1)
  int JEMRoI_v1::crate()    const
  {
    return (this->roiWord() >> s_crateBit) & s_crateMask;    
  }
  
  /// Return JEM number (0-15)
  int JEMRoI_v1::jem()      const
  {
    return (this->roiWord() >> s_jemBit) & s_jemMask;    
  }
  
  /// Return RoI frame number (0-7)
  int JEMRoI_v1::frame()    const
  {
    return (this->roiWord() >> s_frameBit) & s_frameMask;    
  }
  
  /// Return location (RoI local coords) (0-3)
  int JEMRoI_v1::location() const
  {
    return (this->roiWord() >> s_locationBit) & s_locationMask;    
  }
  
  /// Return forward jet flag (0/1)
  int JEMRoI_v1::forward()  const
  {
    return (this->roiWord() >> s_forwardBit) & s_forwardMask;       
  }
  
  /// Return Jet hit map (8 bits Main or 4 bits Forward)
  int JEMRoI_v1::hits()     const
  {
    int hits(0);
    if(this->forward()){
      hits = (this->roiWord() >> s_forwardHitsBit) & s_forwardHitsMask;
    }
    else{
      hits = (this->roiWord() >> s_mainHitsBit)    & s_mainHitsMask;
    }
    return hits;    
  }
  
  /// Return error flags (bit 0 Saturation, bit 1 Parity)
  int JEMRoI_v1::error()    const
  {
    return (this->parity() << 1) | this->saturation();    
  }
  
  /// Return parity error flag (0/1)
  int JEMRoI_v1::parity()     const
  {
    return (this->roiWord() >> s_parityBit) & s_parityMask;    
  }
  
  /// Return saturation flag (0/1)
  int JEMRoI_v1::saturation() const
  {
    return (this->roiWord() >> s_saturationBit) & s_saturationMask;    
  }
  
} // namespace xAOD
