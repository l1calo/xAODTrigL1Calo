// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMJetHits_v1.h"

namespace xAOD{  
  
  CMMJetHits_v1::CMMJetHits_v1() :
    SG::AuxElement()
  {        
  }
  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMJetHits_v1 , int , crate , setCrate )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMJetHits_v1 , int , dataID , setDataID )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMJetHits_v1 , int , peak , setPeak )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMJetHits_v1 , std::vector<unsigned int> , hitsVec , setHitsVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMJetHits_v1 , std::vector<int> , errorVec , setErrorVec )  
  
  void CMMJetHits_v1::addHits(const std::vector<unsigned int>& hits,const std::vector<int>& error)
  {
    this->setHitsVec( hits );
    this->setErrorVec( error );

  }
              
  unsigned int CMMJetHits_v1::Hits() const
  {
    return this->hitsVec().at( this->peak() ); 
  }
    
  int CMMJetHits_v1::Error() const
  {
    return this->errorVec().at( this->peak() ); 
  }
  
  
} // namespace xAOD
