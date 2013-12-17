// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMCPHITSAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMCPHITSAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"

namespace xAOD{

  /// AuxContainer for CMMCPHits_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$
  ///
  class CMMCPHitsAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    CMMCPHitsAuxContainer_v1();

  private:
    std::vector<int> crate;
    std::vector<int> dataID;
    std::vector<int> peak;
    std::vector<std::vector<unsigned int> > hitsVec0;
    std::vector<std::vector<unsigned int> > hitsVec1;
    std::vector<std::vector<int> > errorVec0;
    std::vector<std::vector<int> > errorVec1; 
    
  }; // class CMMCPHitsAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMCPHitsAuxContainer_v1 , 1316880349 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CMMCPHitsAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMCPHITSAUXCONTAINER_V1_H
