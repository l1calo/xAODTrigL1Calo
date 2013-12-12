// System include(s):
#include <cmath>

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/RODHeader_v1.h"

namespace xAOD{  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , version , setVersion )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , sourceId , setSourceId )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , run , setRun )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , lvl1Id , setLvl1Id )    
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , bcid , setBcid )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , trigType , setTrigType )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , detType , setDetType )  
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , std::vector<uint32_t> , statusWords , setStatusWords )    
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( RODHeader_v1 , uint32_t , payloadSize , setPayloadSize )  
 
  
  RODHeader_v1::RODHeader_v1() :
    SG::AuxElement()
  {        
  }
  
  // Header data
  int RODHeader_v1::majorVersion()  const
  {
    return (this->version() >> 16) & 0xffff;
  }
  
  int RODHeader_v1::minorVersion()  const  
  {
    return this->version() & 0xffff;
  }
  
  int RODHeader_v1::sourceID()      const
  {
    return this->sourceId();
  }
    
  int RODHeader_v1::subDetectorID() const  
  {
    return (this->sourceId() >> 16) & 0xff;
  }
  
  int RODHeader_v1::moduleID()      const  
  {
    return this->sourceId() & 0xffff; 
  }
  
  int RODHeader_v1::crate()         const  
  {
    return this->sourceId() & 0xf; 
  }
  
  int RODHeader_v1::sLink()         const  
  {
    return (this->sourceId() >> 4) & 0x3; 
  }
  
  int RODHeader_v1::dataType()      const  
  {
   return (this->sourceId() >> 7) & 0x1; 
  }
  
  int RODHeader_v1::runType()       const  
  {
    return (this->run() >> 24) & 0xff;  
  }
  
  int RODHeader_v1::runNumber()     const  
  {
    return this->run() & 0xffffff;  
  }
  
  int RODHeader_v1::extendedL1ID()  const  
  {
    return this->lvl1Id();
  }
  
  int RODHeader_v1::ecrID()         const  
  {
    return (this->lvl1Id() >> 24) & 0xff;  
  }
  
  int RODHeader_v1::l1ID()          const  
  {
    return this->lvl1Id() & 0xffffff;  
  }
  
  int RODHeader_v1::bunchCrossing() const  
  {
    return this->bcid();
  }
  
  int RODHeader_v1::l1TriggerType() const  
  {
    return this->trigType();
  }
  
  int RODHeader_v1::detEventType()  const  
  {
    return this->detType();
  }
  
  int RODHeader_v1::orbitCount()    const  
  {
    return (this->detType() >> 16) & 0xffff;  
  }
  
  int RODHeader_v1::stepNumber()    const  
  {
    return (this->detType() >> 4) & 0xfff;  
  }
  
  int RODHeader_v1::stepType()      const  
  {
    return this->detType() & 0xf;  
  }
  

  // Status bits - word 1
  bool RODHeader_v1::bcnMismatch()        const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x1;  
  }
  
  bool RODHeader_v1::gLinkTimeout()       const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x4;  
  }
  
  bool RODHeader_v1::dataTransportError() const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x8;  
  }
  
  bool RODHeader_v1::rodFifoOverflow()    const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x10;  
  }
  
  bool RODHeader_v1::lvdsLinkError()      const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x10000;  
  }
  
  bool RODHeader_v1::cmmParityError()     const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x20000;  
  }
  
  bool RODHeader_v1::gLinkError()         const  
  {
    return (this->statusWords().empty()) ? false : this->statusWords().at(0) & 0x40000;  
  }
  
  // Status bits - word 2
  bool RODHeader_v1::limitedRoISet()      const  
  {
    return (this->statusWords().size() < 2) ? false : this->statusWords().at(1) & 0x2;  
  }
  
  bool RODHeader_v1::triggerTypeTimeout() const  
  {
    return (this->statusWords().size() < 2) ? false : this->statusWords().at(1) & 0x10000;  
  }
       
      
} // namespace xAOD
