// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERAUXCONTAINER_V2_H
#define XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERAUXCONTAINER_V2_H

// STL include(s):
#include <vector>

// EDM include(s):
#include "xAODCore/AuxContainerBase.h"

namespace xAOD{

  /// AuxContainer for TriggerTower_v2
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$
  ///
  class TriggerTowerAuxContainer_v2 : public AuxContainerBase {
  public:
    // Default constructor
    TriggerTowerAuxContainer_v2();
    
  private:
    
    // Tower identifiers
    std::vector<unsigned int> coolId;
    std::vector<unsigned int> layer;
    std::vector<float> eta;
    std::vector<float> phi;

    // Quantities with same number of slices as LUT data
    std::vector<std::vector<unsigned int> > lut_cp;
    std::vector<std::vector<unsigned int> > lut_jep;
    std::vector<std::vector<unsigned int> > correction;
    std::vector<std::vector<unsigned int> > bcidVec;

    // Quantities with same number of slices as ADC data
    std::vector<std::vector<unsigned int> > adc;
    std::vector<std::vector<unsigned int> > bcidExt;

    // One error word/tower/event
    std::vector<unsigned int> error;

    // Not part of readout, but to extract "peak" slice from vectors
    std::vector<unsigned int> peak;
    std::vector<unsigned int> adcPeak;     

    
  }; // class TriggerTowerAuxContainer_v2 
} // namespace xAOD

// Set up a CLID and StoreGate inheritance for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::TriggerTowerAuxContainer_v2 , 1086692910 , 1 ) 
      
#include "SGTools/BaseInfo.h"
  SG_BASE( xAOD::TriggerTowerAuxContainer_v2 , xAOD::AuxContainerBase );
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_TRIGGERTOWERAUXCONTAINER_V2_H
