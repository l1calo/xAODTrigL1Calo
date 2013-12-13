// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMCPHITS_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMCPHITS_V1_H

// EDM include(s):
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
   /// $Revision$
   /// $Date$
   ///
   class CMMCPHits_v1 : public SG::AuxElement{
   public:
     // Default constructor
     CMMCPHits_v1();

     /// Some description for the property
     int crate() const;
     /// Description of what is being set here
     void setCrate(int);

     /// Some description for the property
     int dataID() const;
     /// Description of what is being set here
     void setDataID(int);

     /// Some description for the property
     int peak() const;
     /// Description of what is being set here
     void setPeak(int);

     /// Some description for the property
     const std::vector<unsigned int>& hitsVec0() const;
     /// Description of what is being set here
     void setHitsVec0(const std::vector<unsigned int>&);

     /// Some description for the property
     const std::vector<unsigned int>& hitsVec1() const;
     /// Description of what is being set here
     void setHitsVec1(const std::vector<unsigned int>&);  

     /// Some description for the property
     const std::vector<int>& errorVec0() const;
     /// Description of what is being set here
     void setErrorVec0(const std::vector<int>&);

     /// Some description for the property
     const std::vector<int>& errorVec1() const;
     /// Description of what is being set here
     void setErrorVec1(const std::vector<int>&);        

     /// Some description for this function
     void addHits(const std::vector<unsigned int>& hits0,
                  const std::vector<unsigned int>& hits1,
                  const std::vector<int>& error0,
                  const std::vector<int>& error1); 

     /// Some description for this function
     unsigned int hitWord0() const;
     /// Some description for this function
     unsigned int hitWord1() const;
     /// Some description for this function
     int error0() const;
     /// Some description for this function
     int error1() const;

   }; // class CMMCPHits_v1

} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMCPHits_v1 , 1938820 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMCPHITS_V1_H
