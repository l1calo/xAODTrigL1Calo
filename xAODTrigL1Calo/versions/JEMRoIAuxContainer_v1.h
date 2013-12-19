// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_JEMROIAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_JEMROIAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"

namespace xAOD{
  
  /// AuxContainer for JEMRoI_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$      

  class JEMRoIAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    JEMRoIAuxContainer_v1();

  private:
    std::vector<uint32_t> roiWord;
        
  }; // class JEMRoIAuxContainer_v1 
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JEMRoIAuxContainer_v1 , 1206477288 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::JEMRoIAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_JEMROIAUXCONTAINER_V1_H
