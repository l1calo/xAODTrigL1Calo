#ifndef XAODTRIGL1CALO_VERSIONS_RODHEADER_V1_H
#define XAODTRIGL1CALO_VERSIONS_RODHEADER_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a RODHeader
   ///
   /// This is a first stab at how a RODHeader could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-10
   ///
   class RODHeader_v1 : public SG::AuxElement{
   public:
      // Default constructor
      RODHeader_v1();

      uint32_t version() const;
      void setVersion(uint32_t);

      uint32_t sourceId() const;
      void setSourceId(uint32_t);

      uint32_t run() const;
      void setRun(uint32_t);

      uint32_t lvl1Id() const;
      void setLvl1Id(uint32_t);
     
      uint32_t bcid() const;
      void setBcid(uint32_t);
      
      uint32_t trigType() const;
      void setTrigType(uint32_t);

      uint32_t detType() const;
      void setDetType(uint32_t);
      
      std::vector<uint32_t> statusWords() const;
      void setStatusWords(std::vector<uint32_t>);

      uint32_t payloadSize() const;
      void setPayloadSize(uint32_t);
      
      // Header data
      int majorVersion()  const;
      int minorVersion()  const;
      int sourceID()      const;
      int subDetectorID() const;
      int moduleID()      const;
      int crate()         const;
      int sLink()         const;
      int dataType()      const;
      int runType()       const;
      int runNumber()     const;
      int extendedL1ID()  const;
      int ecrID()         const;
      int l1ID()          const;
      int bunchCrossing() const;
      int l1TriggerType() const;
      int detEventType()  const;
      int orbitCount()    const;
      int stepNumber()    const;
      int stepType()      const;

      // Status bits - word 1
      bool bcnMismatch()        const;
      bool gLinkTimeout()       const;
      bool dataTransportError() const;
      bool rodFifoOverflow()    const;
      bool lvdsLinkError()      const;
      bool cmmParityError()     const;
      bool gLinkError()         const;
      // Status bits - word 2
      bool limitedRoISet()      const;
      bool triggerTypeTimeout() const;      
         
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::RODHeader_v1 , 225437582 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_RODHEADER_V1_H
