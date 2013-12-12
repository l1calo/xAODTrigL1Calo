#ifndef XAODTRIGL1CALO_VERSIONS_CMMCPHITS_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMCPHITS_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a CMMCPHits
   ///
   /// This is a first stab at how a CMMCPHits could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-10
   ///
   class CMMCPHits_v1 : public SG::AuxElement{
   public:
     // Default constructor
     CMMCPHits_v1();
     
     int crate() const;
     void setCrate(int);
     
     int dataID() const;
     void setDataID(int);
     
     int peak() const;
     void setPeak(int);
     
     std::vector<unsigned int> hitsVec0() const;
     void setHitsVec0(std::vector<unsigned int>);
     
     std::vector<unsigned int> hitsVec1() const;
     void setHitsVec1(std::vector<unsigned int>);  
     
     std::vector<int> errorVec0() const;
     void setErrorVec0(std::vector<int>);
     
     std::vector<int> errorVec1() const;
     void setErrorVec1(std::vector<int>);        
     
     void addHits(const std::vector<unsigned int>& hits0,
                  const std::vector<unsigned int>& hits1,
                  const std::vector<int>& error0,
                  const std::vector<int>& error1); 
     
     unsigned int HitWord0() const;
     unsigned int HitWord1() const;
     int Error0()  const;
     int Error1()  const;     
          
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMCPHits_v1 , 1938820 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMCPHITS_V1_H
