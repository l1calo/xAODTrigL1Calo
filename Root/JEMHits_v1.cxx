// $Id$

// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/JEMHits_v1.h"

namespace xAOD{  
  
  JEMHits_v1::JEMHits_v1() :
    SG::AuxElement()
  {        
  }
  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMHits_v1 , int , crate , setCrate )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMHits_v1 , int , module , setModule )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JEMHits_v1 , int , peak , setPeak )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( JEMHits_v1 , std::vector<unsigned int> , jetHitsVec , setJetHitsVec )  
    
  unsigned int JEMHits_v1::forward() const
  {
    unsigned int result(0);
    int mod = this->module();
    if( ((mod%8) == 0)  || ((mod%8) == 7) ){
      result = 1;
    }
    return result;
  }
  
  unsigned int JEMHits_v1::jetHits() const
  {
    return this->jetHitsVec()[ this->peak() ];
  }
    
} // namespace xAOD
