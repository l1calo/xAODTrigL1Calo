#ifndef XAODTRIGL1CALO_VERSIONS_CMMROI_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMROI_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a CMMRoI
   ///
   /// This is a first stab at how a CMMRoI could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-10
   ///
   class CMMRoI_v1 : public SG::AuxElement{
   public:
      // Default constructor
      CMMRoI_v1();
      
      uint32_t jetEtRoiWord() const;
      void setJetEtRoiWord(uint32_t);
      
      uint32_t energyRoiWord0() const;
      void setEnergyRoiWord0(uint32_t);
      
      uint32_t energyRoiWord1() const;
      void setEnergyRoiWord1(uint32_t);     
      
      uint32_t energyRoiWord2() const;
      void setEnergyRoiWord2(uint32_t); 
      
      /// Set RoI word with ID check
      bool setRoiWord(uint32_t roiWord);
     
      /// Return Jet-ET hits
      int jetEtHits()         const;
      /// Return Sum-ET hits
      int sumEtHits()         const;
      /// Return Missing-ET hits
      int missingEtHits()     const;
      /// Return Missing-ET-Sig hits
      int missingEtSigHits()  const;
      /// Return Ex
      int ex()                const;
      /// Return Ey
      int ey()                const;
      /// Return Et
      int et()                const;
      /// Return Jet-ET error flag (bit 1 Parity)
      int jetEtError()        const;
      /// Return Sum-ET error flag (bit 1 Parity)
      int sumEtError()        const;
      /// Return Missing-ET error flag (bit 1 Parity)
      int missingEtError()    const;
      /// Return Missing-ET-Sig error flag (bit 1 Parity)
      int missingEtSigError() const;
      /// Return Ex error flags (bit 0 Overflow, bit 1 Parity)
      int exError()           const;
      /// Return Ey error flags (bit 0 Overflow, bit 1 Parity)
      int eyError()           const;
      /// Return Et error flags (bit 0 Overflow, bit 1 Parity)
      int etError()           const;        
      /// Return Energy parity error (0/1)
      int parity(uint32_t roiWord) const;
      /// Return Energy overflow flag (0/1)
      int overflow(uint32_t roiWord) const;    
     
    private:
      
      //  RoI word IDs
      static const int s_jetEtWordIdVal       = 0x5;
      static const int s_wordIdVal0           = 0x4;
      static const int s_wordIdVal1           = 0x6;
      static const int s_wordIdVal2           = 0x5;
      //  Data locations
      static const int s_jetEtWordIdBit       = 29;
      static const int s_wordIdBit            = 28;
      static const int s_jetEtHitsBit         = 0;
      static const int s_sumEtHitsBit         = 16;
      static const int s_missingEtHitsBit     = 16;
      static const int s_missingEtSigHitsBit  = 16;
      static const int s_energyBit            = 0;
      static const int s_jetEtParityBit       = 28;
      static const int s_parityBit            = 27;
      static const int s_overflowBit          = 15;
      //  Data masks
      static const int s_jetEtWordIdMask      = 0x7;
      static const int s_wordIdMask           = 0xf;
      static const int s_jetEtHitsMask        = 0xf;
      static const int s_sumEtHitsMask        = 0xff;
      static const int s_missingEtHitsMask    = 0xff;
      static const int s_missingEtSigHitsMask = 0xff;
      static const int s_energyMask           = 0x7fff;     
         
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMRoI_v1 , 260993336 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMROI_V1_H
