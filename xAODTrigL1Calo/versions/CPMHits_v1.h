#ifndef XAODTRIGL1CALO_VERSIONS_CPMHITS_V1_H
#define XAODTRIGL1CALO_VERSIONS_CPMHITS_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a CPMHits
   ///
   /// This is a first stab at how a CPMHits could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-09
   ///
   class CPMHits_v1 : public SG::AuxElement{
   public:
     // Default constructor
     CPMHits_v1();
          
     int crate() const;
     void setCrate(int);
     
     int module() const;
     void setModule(int);

     int peak() const;
     void setPeak(int);     
     
     std::vector<unsigned int> hitsVec0() const;     
     void setHitsVec0(std::vector<unsigned int>);
     
     std::vector<unsigned int> hitsVec1() const;     
     void setHitsVec1(std::vector<unsigned int>);     
     
     // backwards compatability with TrigT1CaloEvent
     void addHits(const std::vector<unsigned int>&  hits0,const std::vector<unsigned int>&  hits1);
          
     unsigned int HitWord0() const;
     unsigned int HitWord1() const;

   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CPMHits_v1 , 39223308 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CPMHITS_V1_H
