// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_RODHEADER_V1_H
#define XAODTRIGL1CALO_VERSIONS_RODHEADER_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

  /// Description of RODHeader_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$  
  
  class RODHeader_v1 : public SG::AuxElement{
    public:
      // Default constructor
      RODHeader_v1();

      /// get version
      unsigned int version() const;
      /// set version
      void setVersion(unsigned int);

      /// get sourceId
      unsigned int sourceId() const;
      /// set sourceId
      void setSourceId(unsigned int);

      /// get run
      unsigned int run() const;
      /// set run
      void setRun(unsigned int);

      /// get lvl1Id
      unsigned int lvl1Id() const;
      /// set lvl1Id
      void setLvl1Id(unsigned int);
      
      /// get bcid
      unsigned int bcid() const;
      /// set bcid
      void setBcid(unsigned int);
      
      /// get trigType
      unsigned int trigType() const;
      /// set trigType
      void setTrigType(unsigned int);

      /// get detType
      unsigned int detType() const;
      /// set detType
      void setDetType(unsigned int);
      
      /// get statusWords
      const std::vector<unsigned int>& statusWords() const;
      /// set statusWords
      void setStatusWords(const std::vector<unsigned int>&);

      /// get payloadSize
      unsigned int payloadSize() const;
      /// set payloadSize
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
