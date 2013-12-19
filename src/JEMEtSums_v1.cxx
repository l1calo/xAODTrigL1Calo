// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/JEMEtSums_v1.h"

namespace xAOD{  
  
  JEMEtSums_v1::JEMEtSums_v1() :
    SG::AuxElement()
  {        
  }
  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMEtSums_v1 , int , crate , setCrate )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMEtSums_v1 , int , module , setModule )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMEtSums_v1 , int , peak , setPeak )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( JEMEtSums_v1 , std::vector<unsigned int> , etVec , setEtVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( JEMEtSums_v1 , std::vector<unsigned int> , exVec , setExVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( JEMEtSums_v1 , std::vector<unsigned int> , eyVec , setEyVec )  
    
  unsigned int JEMEtSums_v1::forward() const
  {
    unsigned int result(0);
    int mod = this->module();
    if( ((mod%8) == 0)  || ((mod%8) == 7) ){
      result = 1;
    }
    return result;
  }
  
    unsigned int JEMEtSums_v1::Et() const
    {
      return this->etVec().at( this->peak() );  
    }
    
    unsigned int JEMEtSums_v1::Ex() const
    {
      return this->exVec().at( this->peak() ); 
    }
    
    unsigned int JEMEtSums_v1::Ey() const
    {
      return this->eyVec().at( this->peak() ); 
    }
  
} // namespace xAOD
