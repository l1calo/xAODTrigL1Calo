// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMETSUMSAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMETSUMSAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"


namespace xAOD{
  
  /// AuxContainer for CMMEtSums
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$  

  class CMMEtSumsAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    CMMEtSumsAuxContainer_v1();

  private:
    std::vector<int> crate;
    std::vector<int> dataID;
    std::vector<int> peak;
    std::vector<std::vector<unsigned int> > EtVec;
    std::vector<std::vector<unsigned int> > ExVec;
    std::vector<std::vector<unsigned int> > EyVec;
    std::vector<std::vector<int> > EtErrorVec;
    std::vector<std::vector<int> > ExErrorVec;
    std::vector<std::vector<int> > EyErrorVec;

    
  }; // class CMMEtSumsAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMEtSumsAuxContainer_v1 , 1259127533 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CMMEtSumsAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMETSUMSAUXCONTAINER_V1_H
