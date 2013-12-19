// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMEtSums_v1.h"

namespace xAOD{ 
  
  CMMEtSums_v1::CMMEtSums_v1() :
    SG::AuxElement()
  {        
  }  
  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMEtSums_v1 , int , crate , setCrate )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMEtSums_v1 , int , dataID , setDataID )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMEtSums_v1 , int , peak , setPeak )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMEtSums_v1 , std::vector<unsigned int> , EtVec , setEtVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMEtSums_v1 , std::vector<unsigned int> , ExVec , setExVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMEtSums_v1 , std::vector<unsigned int> , EyVec , setEyVec )    
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMEtSums_v1 , std::vector<int> , EtErrorVec , setEtErrorVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMEtSums_v1 , std::vector<int> , ExErrorVec , setExErrorVec )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMEtSums_v1 , std::vector<int> , EyErrorVec , setEyErrorVec )    
    
  void CMMEtSums_v1::addEt(const std::vector<unsigned int>& Et,const std::vector<int>& EtError)
  {
    this->setEtVec( Et );
    this->setEtErrorVec( EtError );
  }
  
  void CMMEtSums_v1::addEx(const std::vector<unsigned int>& Ex,const std::vector<int>& ExError)
  {
    this->setExVec( Ex );
    this->setExErrorVec( ExError );    
  }
  
  void CMMEtSums_v1::addEy(const std::vector<unsigned int>& Ey,const std::vector<int>& EyError)
  {
    this->setEyVec( Ey );
    this->setEyErrorVec( EyError );    
  }

  unsigned int CMMEtSums_v1::Et() const
  {
    return this->EtVec().at( this->peak() );
  }
  
  unsigned int CMMEtSums_v1::Ex() const
  {
    return this->ExVec().at( this->peak() );
  }
  
  unsigned int CMMEtSums_v1::Ey() const
  {
    return this->EyVec().at( this->peak() );
  }
  
  int CMMEtSums_v1::EtError() const
  {
    return this->EtErrorVec().at( this->peak() );
  }
  
  int CMMEtSums_v1::ExError() const
  {
    return this->ExErrorVec().at( this->peak() );
  }
  
  int CMMEtSums_v1::EyError() const
  {
   return this->EyErrorVec().at( this->peak() ); 
  }
  
} // namespace xAOD
