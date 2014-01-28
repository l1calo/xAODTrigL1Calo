// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CPMROI_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMROI_V1_H

extern "C" {
#   include <stdint.h>
}

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {
 
  /// Description of CPMRoI_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$  

  class CPMRoI_v1 : public SG::AuxElement{
    public:
      // Default constructor
      CPMRoI_v1();
      
      /// get roiWord
      uint32_t roiWord() const;
      /// set roiWord
      void setRoiWord(uint32_t);     
          
      /// Return crate number (0-1)
      int crate()    const;
      /// Return CPM number (1-14)
      int cpm()      const;
      /// Return CP chip number (0-7)
      int chip()     const;
      /// Return location (RoI local coords) (0-7)
      int location() const;
      /// Return hit thresholds map
      int hits()     const;
      /// Return error flags (bit 0 Saturation, bit 1 Parity)
      int error()    const;
      /// Return parity error flag (0/1)
      int parity()     const;
      /// Return saturation flag (0/1)
      int saturation() const;      
    
    private:
      /// RoI word ID
      static const int s_wordIdVal       = 0x0;
      //  Data locations
      static const int s_wordIdBit       = 30;
      static const int s_crateBit        = 28;
      static const int s_cpmBit          = 24;
      static const int s_chipBit         = 21;
      static const int s_locationBit     = 18;
      static const int s_parityBit       = 17;
      static const int s_saturationBit   = 16;
      static const int s_hitsBit         = 0;
      //  Data masks
      static const int s_wordIdMask      = 0x3;
      static const int s_crateMask       = 0x3;
      static const int s_cpmMask         = 0xf;
      static const int s_chipMask        = 0x7;
      static const int s_locationMask    = 0x7;
      static const int s_parityMask      = 0x1;
      static const int s_saturationMask  = 0x1;
      static const int s_hitsMask        = 0xffff;     

   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMRoI_v1 , 5414895 , 1 )
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_CPMROI_V1_H
