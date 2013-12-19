#ifndef XAODTRIGL1CALO_VERSIONS_JEMETSUMS_V1_H
#define XAODTRIGL1CALO_VERSIONS_JEMETSUMS_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a JEMEtSums
   ///
   /// This is a first stab at how a JEMEtSums could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-09 
   ///
   class JEMEtSums_v1 : public SG::AuxElement{
   public:
     // Default constructor
     JEMEtSums_v1();
     
     int crate() const;
     void setCrate(int);
     
     int module() const;
     void setModule(int);

     int peak() const;
     void setPeak(int); 

     const std::vector<unsigned int>& etVec() const;     
     void setEtVec(const std::vector<unsigned int>&);      
          
     const std::vector<unsigned int>& exVec() const;     
     void setExVec(const std::vector<unsigned int>&); 
     
     const std::vector<unsigned int>& eyVec() const;     
     void setEyVec(const std::vector<unsigned int>&);  
     
     unsigned int forward() const;
     unsigned int Et() const;
     unsigned int Ex() const;
     unsigned int Ey() const;
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JEMEtSums_v1 , 168396611 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_JEMETSUMS_V1_H
