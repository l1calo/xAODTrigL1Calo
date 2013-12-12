// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/JetElement_v1.h"

namespace xAOD{  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , float , phi , setPhi )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , float , eta , setEta )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , unsigned int , key , setKey )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , int , peak , setPeak )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , std::vector<int> , emEnergyVec , setEmEnergyVec )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , std::vector<int> , hadEnergyVec , setHadEnergyVec )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , std::vector<int> , emErrorVec , setEmErrorVec )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , std::vector<int> , hadErrorVec , setHadErrorVec )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( JetElement_v1 , std::vector<int> , linkErrorVec , setLinkErrorVec )    
  
  JetElement_v1::JetElement_v1() :
    SG::AuxElement()
  {        
  }
  
  /** Add ET to triggered time slice */
  /** this will add energy to the JE. It's really intended for
     JetElementMaker to use when creating JEs. */
  void JetElement_v1::addEnergy(int emEnergy, int hadEnergy)
  {

  }
  
  /* Add ET values to specified slice */
  /** add data for one timeslice. Used by bytestream converter. */
  void JetElement_v1::addSlice(int slice, int emEnergy, int hadEnergy,int emError, int hadError, int linkError)
  {
    
  }

  /** Return ET for peak slice */   
  int JetElement_v1::emEnergy()  const
  {
    if( this->emEnergyVec().at( this->peak() ) < m_layerSaturationThreshold) {
      return this->emEnergyVec().at( this->peak() );
    }
    return m_layerSaturationThreshold;    
  }
  
  int JetElement_v1::hadEnergy() const
  {
    if( this->hadEnergyVec().at( this->peak() ) < m_layerSaturationThreshold) {
      return this->hadEnergyVec().at( this->peak() );
    }
    return m_layerSaturationThreshold;      
  }
  
  int JetElement_v1::energy()    const
  {
    
    if( ( this->emEnergy()  >= m_layerSaturationThreshold ) ||
        ( this->hadEnergy() >= m_layerSaturationThreshold ) ||
        ( ( this->emEnergy() + this->hadEnergy() ) >= m_saturationThreshold ) ){
          return m_saturationThreshold;
    }
    return this->emEnergy() + this->hadEnergy();  
  }

  /** return the ET values for a specified slice */
  int JetElement_v1::emSliceEnergy(int slice) const
  {
    if( slice >= 0 && slice < (int)this->emEnergyVec().size() ) {
      if( this->emEnergyVec().at(slice) < m_layerSaturationThreshold ) {
        return this->emEnergyVec().at(slice);
      }
      return m_layerSaturationThreshold;
    }
    return 0;    
  }
  
  int JetElement_v1::hadSliceEnergy(int slice) const
  {
    if( slice >= 0 && slice < (int)this->hadEnergyVec().size() ) {
      if( this->hadEnergyVec().at(slice) < m_layerSaturationThreshold ) {
        return this->hadEnergyVec().at(slice);
      }
      return m_layerSaturationThreshold;
    }
    return 0;     
  }
  
  int JetElement_v1::sliceEnergy(int slice) const
  {
    if( ( this->emSliceEnergy(slice)  >= m_layerSaturationThreshold ) ||
        ( this->hadSliceEnergy(slice) >= m_layerSaturationThreshold ) ||
        ( ( this->emSliceEnergy(slice) + this->hadSliceEnergy(slice) ) >= m_saturationThreshold ) ){
          return m_saturationThreshold;
       }
    return this->emSliceEnergy(slice) + this->hadSliceEnergy(slice); 
  }
  

  /** Error codes and utility information */
  bool JetElement_v1::isSaturated()    const
  {
    if( this->energy() == m_saturationThreshold ){
      return true;
    }
    return false;
  }
  
  bool JetElement_v1::isEmSaturated()  const
  {
    if( this->emEnergy() == m_layerSaturationThreshold ){
      return true;
    }
    return false;
  }
  
  bool JetElement_v1::isHadSaturated() const
  {
    if( this->hadEnergy() == m_layerSaturationThreshold ){
      return true;
    }
    return false;    
  }
  
  int JetElement_v1::emError()   const
  {
    return this->emErrorVec().at( this->peak() );
  }
  
  int JetElement_v1::hadError()  const
  {
    return this->hadErrorVec().at( this->peak() );
  }
  
  int JetElement_v1::linkError() const
  {
    return this->linkErrorVec().at( this->peak() );
  }
  
} // namespace xAOD
