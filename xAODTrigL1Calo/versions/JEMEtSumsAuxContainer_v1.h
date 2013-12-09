#ifndef XAODTRIGL1CALO_VERSIONS_JEMETSUMSAUXCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_JEMETSUMSAUXCONTAINER_V1_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"


namespace xAOD{

  class JEMEtSumsAuxContainer_v1 : public AuxContainerBase {
  public:
    // Default constructor
    JEMEtSumsAuxContainer_v1();

  private:
    std::vector<int> crate;
    std::vector<int> module;
    std::vector<int> peak;
    std::vector<std::vector<unsigned int> > EtVec;
    std::vector<std::vector<unsigned int> > ExVec;
    std::vector<std::vector<unsigned int> > EyVec;
    
  }; // class JEMEtSumsAuxContainer_v1
  
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JEMEtSumsAuxContainer_v1 , 1312707594 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::JEMEtSumsAuxContainer_v1 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_JEMETSUMSAUXCONTAINER_V1_H
