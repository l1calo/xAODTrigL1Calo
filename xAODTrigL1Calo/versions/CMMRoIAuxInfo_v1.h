// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMROIAUXINFO_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMROIAUXINFO_V1_H

// STL include(s):
extern "C" {
#   include <stdint.h>
}
#include <vector>

// EDM include(s):
#include "xAODCore/AuxInfoBase.h"

namespace xAOD{
  
  /// AuxInfo for CMMRoI_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$    

  class CMMRoIAuxInfo_v1 : public AuxInfoBase {
  public:
    // Default constructor
    CMMRoIAuxInfo_v1();

  private:
    uint32_t jetEtRoiWord;
    uint32_t energyRoiWord0;
    uint32_t energyRoiWord1;
    uint32_t energyRoiWord2;    
    
  }; // class CMMRoIAuxInfo_v1  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMRoIAuxInfo_v1 , 43864765 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CMMRoIAuxInfo_v1 , xAOD::AuxInfoBase );
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_CMMROIAUXINFO_V1_H
