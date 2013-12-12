#ifndef XAODTRIGL1CALO_VERSIONS_CMMJETHITSAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMJETHITSAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"


namespace xAOD{

  class CMMJetHitsAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    CMMJetHitsAuxContainer_v1();

  private:
    std::vector<int> crate;
    std::vector<int> dataID;
    std::vector<int> peak;
    std::vector<std::vector<unsigned int> > hitsVec;
    std::vector<std::vector<int> > errorVec;

    
  }; // class CMMCPHitsAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMJetHitsAuxContainer_v1 , 1273190538 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CMMJetHitsAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMJETHITSAUXCONTAINER_V1_H
