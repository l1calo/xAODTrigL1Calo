// $Id$

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/TriggerTower_v2.h"

namespace xAOD{  

  TriggerTower_v2::TriggerTower_v2() :
    SG::AuxElement()
  {        
  }
  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( TriggerTower_v2 , std::vector<unsigned int> , lut_cp , setLut_cp )
  AUXSTORE_OBJECT_SETTER_AND_GETTER( TriggerTower_v2 , std::vector<unsigned int> , lut_jep , setLut_jep )
  AUXSTORE_OBJECT_SETTER_AND_GETTER( TriggerTower_v2 , std::vector<unsigned int> , correction , setCorrection )
  AUXSTORE_OBJECT_SETTER_AND_GETTER( TriggerTower_v2 , std::vector<unsigned int> , bcidVec , setBcidVec )
  AUXSTORE_OBJECT_SETTER_AND_GETTER( TriggerTower_v2 , std::vector<unsigned int> , adc , setAdc )
  AUXSTORE_OBJECT_SETTER_AND_GETTER( TriggerTower_v2 , std::vector<unsigned int> , bcidExt , setBcidExt )                                                                                                                                    
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, unsigned int , coolId , setCoolId )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, unsigned int , layer , setLayer )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, float , eta , setEta )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, float , phi , setPhi )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, unsigned int , error , setError )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, unsigned int , peak , setPeak )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( TriggerTower_v2, unsigned int , adcPeak , setAdcPeak )  
  
  
  /// Fill tower with all information
  void TriggerTower_v2::initialize(const unsigned int& coolId,const unsigned int& layer,const float& eta,const float& phi,
                                   const std::vector<unsigned int>& lut_cp,const std::vector<unsigned int>& lut_jep,
                                   const std::vector<unsigned int>& correction,const std::vector<unsigned int>& bcidVec,
                                   const std::vector<unsigned int>& adc,const std::vector<unsigned int>& bcidExt,
                                   const unsigned int& error,
                                   const unsigned int& peak,
                                   const unsigned int adcPeak)
  {
    this->setCoolId( coolId );
    this->setLayer( layer );
    this->setEta( eta );
    this->setPhi( phi );
    this->setLut_cp( lut_cp );
    this->setLut_jep( lut_jep );
    this->setCorrection( correction );
    this->setBcidVec( bcidVec );
    this->setAdc( adc );
    this->setBcidExt( bcidExt );
    this->setError( error );
    this->setPeak( peak );
    this->setAdcPeak( adcPeak );
  }
    
  /// get cpET from peak of lut_cp
  unsigned int TriggerTower_v2::cpET() const
  {
    return this->lut_cp()[ this->peak() ];
  }
  
  /// get jepET from peak of lut_jep
  unsigned int TriggerTower_v2::jepET() const
  {
    return this->lut_jep()[ this->peak() ];
  }
  
  /// Is tower saturated?
    // return true if the TriggerTower is saturated
    // i.e. it has an energy greater than the saturation threshold
    // otherwise, return false;
      
  bool TriggerTower_v2::isCpSaturated() const
  {
    if( this->cpET() >= m_saturation ){
      return true;
    }
    return false;    
  }
  
  bool TriggerTower_v2::isJepSaturated() const
  {    
    if( this->jepET() >= m_saturation ){
      return true;
    }
    return false;    
  }  

} // namespace xAOD
