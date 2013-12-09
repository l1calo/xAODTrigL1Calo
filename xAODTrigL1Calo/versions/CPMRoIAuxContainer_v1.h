#ifndef XAODTRIGL1CALO_VERSIONS_CPMROIAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMROIAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"


namespace xAOD{

  class CPMRoIAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    CPMRoIAuxContainer_v1();

  private:
    std::vector<uint32_t> roiWord;
    
  }; // class CPMRoIAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMRoIAuxContainer_v1 , 1321216362 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CPMRoIAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMROIAUXCONTAINER_V1_H
