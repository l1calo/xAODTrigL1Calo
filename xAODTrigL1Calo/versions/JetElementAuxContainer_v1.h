// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_JETELEMENTAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_JETELEMENTAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"

namespace xAOD{
  
  /// AuxContainer for JetElement_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$    

  class JetElementAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    JetElementAuxContainer_v1();

  private:
    std::vector<float> phi;
    std::vector<float> eta;
    std::vector<unsigned int> key;
    std::vector<int>    peak;
    std::vector<std::vector<int> > emEnergyVec;
    std::vector<std::vector<int> > hadEnergyVec;
    std::vector<std::vector<int> > emErrorVec;
    std::vector<std::vector<int> > hadErrorVec;
    std::vector<std::vector<int> > linkErrorVec;
    
  }; // class JetElementAuxContainer_v1 
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JetElementAuxContainer_v1 , 1134519579 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::JetElementAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_JETELEMENTAUXCONTAINER_V1_H
