#ifndef XAODTRIGL1CALO_VERSIONS_JEMHITS_V1_H
#define XAODTRIGL1CALO_VERSIONS_JEMHITS_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a JEMHits
   ///
   /// This is a first stab at how a JEMHits could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-03 
   ///
   class JEMHits_v1 : public SG::AuxElement{
   public:
     // Default constructor
     JEMHits_v1();
          
     int crate() const;
     void setCrate(int);
     
     int module() const;
     void setModule(int);

     int peak() const;
     void setPeak(int);     
     
     const std::vector<unsigned int>& jetHitsVec() const;     
     void setJetHitsVec(const std::vector<unsigned int>&);
     // backwards compatability with TrigT1CaloEvent
     inline void addJetHits(const std::vector<unsigned int>&  hits) {this->setJetHitsVec(hits);}
     
     unsigned int forward() const;
     unsigned int JetHits() const;
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JEMHits_v1 , 106316946 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_JEMHITS_V1_H
