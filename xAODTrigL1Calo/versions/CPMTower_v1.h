#ifndef XAODTRIGL1CALO_VERSIONS_CPMTOWER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMTOWER_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a CPMTower
   ///
   /// This is a first stab at how a CPMTower could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-09
   ///
   class CPMTower_v1 : public SG::AuxElement{
   public:
    // Default constructor
    CPMTower_v1();
    
    const std::vector<int>& em_energy() const;
    void setEm_energy(const std::vector<int>&);
    
    const std::vector<int>& had_energy() const;
    void setHad_energy(const std::vector<int>&);  
    
    const std::vector<int>& em_error() const;
    void setEm_error(const std::vector<int>&);
    
    const std::vector<int>& had_error() const;
    void setHad_error(const std::vector<int>&);      
        
    float eta() const;
    void setEta(float);
    
    float phi() const;
    void setPhi(float);

    int peak() const;
    void setPeak(int);     
     
           
    /** return the final ET values using the in algorithms */
    int emEnergy() const;
    int hadEnergy() const;

    /** return the ET values for a specified slice */
    int emSliceEnergy(int slice) const;
    int hadSliceEnergy(int slice) const;

    /** return references to the vectors containing the ET values. */
    const std::vector<int> emEnergyVec() const;
    const std::vector<int> hadEnergyVec() const;
          
    /** Utilities to report on status of tower */   
    int emError() const;
    int hadError() const;
    int emSliceError(int slice) const;
    int hadSliceError(int slice) const;
    const std::vector<int> emErrorVec() const;
    const std::vector<int> hadErrorVec() const;     

   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMTower_v1 , 14223686 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMTOWER_V1_H
