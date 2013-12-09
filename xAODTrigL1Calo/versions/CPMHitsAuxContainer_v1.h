#ifndef XAODTRIGL1CALO_VERSIONS_CPMHITSAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMHITSAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"


namespace xAOD{

  class CPMHitsAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    CPMHitsAuxContainer_v1();

  private:
    std::vector<int> crate;
    std::vector<int> module;
    std::vector<int> peak;
    std::vector<std::vector<unsigned int> > hitsVec0;
    std::vector<std::vector<unsigned int> > hitsVec1;  
    
  }; // class CPMHitsAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMHitsAuxContainer_v1 , 1140834529 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CPMHitsAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMHITSAUXCONTAINER_V1_H
