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

      unsigned int version() const;
      void setVersion(unsigned int);

      unsigned int sourceId() const;
      void setSourceId(unsigned int);

      unsigned int run() const;
      void setRun(unsigned int);

      unsigned int lvl1Id() const;
      void setLvl1Id(unsigned int);
     
      unsigned int bcid() const;
      void setBcid(unsigned int);
      
      unsigned int trigType() const;
      void setTrigType(unsigned int);

      unsigned int detType() const;
      void setDetType(unsigned int);
      
      const std::vector<unsigned int>& statusWords() const;
      void setStatusWords(const std::vector<unsigned int>&);

      unsigned int payloadSize() const;
      void setPayloadSize(unsigned int);
      
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
