#ifndef XAODTRIGL1CALO_VERSIONS_CPMTOWERAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMTOWERAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"


namespace xAOD{

  class CPMTowerAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    CPMTowerAuxContainer_v1();

  private:
    std::vector<std::vector<int> > em_energy;
    std::vector<std::vector<int> > had_energy;
    std::vector<std::vector<int> > em_error;
    std::vector<std::vector<int> > had_error;
    std::vector<float> phi;
    std::vector<float> eta;
    std::vector<int> peak;  
    
  }; // class CPMTowerAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMTowerAuxContainer_v1 , 1095086643 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::CPMTowerAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMTOWERAUXCONTAINER_V1_H
