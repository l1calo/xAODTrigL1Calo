// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CPMHits_v1.h"

namespace xAOD{  
  
  CPMHits_v1::CPMHits_v1() :
    SG::AuxElement()
  {        
  }
       
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CPMHits_v1 , int , crate , setCrate )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CPMHits_v1 , int , module , setModule )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CPMHits_v1 , int , peak , setPeak )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CPMHits_v1 , std::vector<unsigned int> , hitsVec0 , setHitsVec0 )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CPMHits_v1 , std::vector<unsigned int> , hitsVec1 , setHitsVec1 )  
  
  void CPMHits_v1::addHits(const std::vector<unsigned int>&  hits0,const std::vector<unsigned int>&  hits1)
  {
    this->setHitsVec0( hits0 );
    this->setHitsVec1( hits1 );
  }
          
  unsigned int CPMHits_v1::HitWord0() const
  {
    return this->hitsVec0().at( this->peak() ); 
  }
  
  unsigned int CPMHits_v1::HitWord1() const
  {
    return this->hitsVec1().at( this->peak() );
  }
  
} // namespace xAOD
