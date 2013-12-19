// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CPMTower_v1.h"

namespace xAOD{  
  
  CPMTower_v1::CPMTower_v1() :
    SG::AuxElement()
  {        
  }
  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CPMTower_v1 , std::vector<int> , em_energy , setEm_energy )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CPMTower_v1 , std::vector<int> , had_energy , setHad_energy )    
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CPMTower_v1 , std::vector<int> , em_error , setEm_error )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CPMTower_v1 , std::vector<int> , had_error , setHad_error )     
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CPMTower_v1 , float , eta , setEta )   
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CPMTower_v1 , float , phi , setPhi )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CPMTower_v1 , int , peak , setPeak )  
 
  /** return the final ET values using the in algorithms */
  int CPMTower_v1::emEnergy() const
  {
    return this->em_energy().at( this->peak() );
  }
  
  int CPMTower_v1::hadEnergy() const
  {
    return this->had_energy().at( this->peak() );
  }

  /** return the ET values for a specified slice */
  int CPMTower_v1::emSliceEnergy(int slice) const
  {
    if (slice >= 0 && slice < (int)this->em_energy().size()) return this->em_energy().at( slice );
    else return 0;    
  }
  
  int CPMTower_v1::hadSliceEnergy(int slice) const
  {
    if (slice >= 0 && slice < (int)this->had_energy().size()) return this->had_energy().at( slice );
    else return 0;        
  }

  /** return references to the vectors containing the ET values. */
  const std::vector<int> CPMTower_v1::emEnergyVec() const
  {
    return this->em_energy();
  }
  
  const std::vector<int> CPMTower_v1::hadEnergyVec() const
  {
    return this->had_energy();
  }
        
  /** Utilities to report on status of tower */   
  int CPMTower_v1::emError() const
  {
    return this->em_error().at( this->peak() );
  }
  
  int CPMTower_v1::hadError() const
  {
    return this->had_error().at( this->peak() );
  }
  
  int CPMTower_v1::emSliceError(int slice) const
  {
    if (slice >= 0 && slice < (int)this->em_error().size()) return this->em_error().at( slice );
    else return 0;      
  }
  
  int CPMTower_v1::hadSliceError(int slice) const
  {
    if (slice >= 0 && slice < (int)this->had_error().size()) return this->had_error().at( slice );
    else return 0;      
  }
  
  const std::vector<int> CPMTower_v1::emErrorVec() const
  {
    return this->em_error();
  }
  
  const std::vector<int> CPMTower_v1::hadErrorVec() const
  {
    return this->had_error();
  }
   
} // namespace xAOD
