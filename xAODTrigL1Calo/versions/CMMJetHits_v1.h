#ifndef XAODTRIGL1CALO_VERSIONS_CMMJETHITS_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMJETHITS_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a CMMJetHits
   ///
   /// This is a first stab at how a CMMJetHits could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-10
   ///
   class CMMJetHits_v1 : public SG::AuxElement{
   public:
     // Default constructor
     CMMJetHits_v1();
     
     int crate() const;
     void setCrate(int);
     
     int dataID() const;
     void setDataID(int);
     
     int peak() const;
     void setPeak(int);
     
     std::vector<unsigned int> hitsVec() const;
     void setHitsVec(std::vector<unsigned int>);
         
     std::vector<int> errorVec() const;
     void setErrorVec(std::vector<int>);
           
     
     void addHits(const std::vector<unsigned int>& hits,const std::vector<int>& error);     
     unsigned int Hits() const;
     int Error()  const;          
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMJetHits_v1 , 207472471 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMJETHITS_V1_H
