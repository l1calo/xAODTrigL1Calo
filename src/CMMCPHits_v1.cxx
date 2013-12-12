// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMCPHits_v1.h"

namespace xAOD{  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , int , crate , setCrate )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , int , dataID , setDataID )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , int , peak , setPeak )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , std::vector<unsigned int> , hitsVec0 , setHitsVec0 )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , std::vector<unsigned int> , hitsVec1 , setHitsVec1 )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , std::vector<int> , errorVec0 , setErrorVec0 )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1 , std::vector<int> , errorVec1 , setErrorVec1 )
  
  CMMCPHits_v1::CMMCPHits_v1() :
    SG::AuxElement()
  {        
  }
  
  void CMMCPHits_v1::addHits(const std::vector<unsigned int>& hits0,
                             const std::vector<unsigned int>& hits1,
                             const std::vector<int>& error0,
                             const std::vector<int>& error1)
  {
    this->setHitsVec0( hits0 );
    this->setHitsVec1( hits1 );
    this->setErrorVec0( error0 );
    this->setErrorVec1( error1 );
  }
    
          
  unsigned int CMMCPHits_v1::HitWord0() const
  {
    return this->hitsVec0().at( this->peak() ); 
  }
  
  unsigned int CMMCPHits_v1::HitWord1() const
  {
    return this->hitsVec1().at( this->peak() );
  }
  
  int CMMCPHits_v1::Error0() const
  {
    return this->errorVec0().at( this->peak() ); 
  }
  
  int CMMCPHits_v1::Error1() const
  {
    return this->errorVec1().at( this->peak() );
  }  
  
} // namespace xAOD
