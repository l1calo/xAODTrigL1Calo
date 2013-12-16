// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMETSUMS_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMETSUMS_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a CMMEtSums
   ///
   /// This is a first stab at how a CMMEtSums could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Revision$
   /// $Date$  
   ///
   class CMMEtSums_v1 : public SG::AuxElement{
   public:
      // Default constructor
      CMMEtSums_v1();
      
      int crate() const;
      void setCrate(int);
      
      int dataID() const;
      void setDataID(int);
      
      int peak() const;
      void setPeak(int);
      
      std::vector<unsigned int> EtVec() const;
      void setEtVec(std::vector<unsigned int>);
      
      std::vector<unsigned int> ExVec() const;
      void setExVec(std::vector<unsigned int>);

      std::vector<unsigned int> EyVec() const;
      void setEyVec(std::vector<unsigned int>);      
      
      std::vector<int> EtErrorVec() const;
      void setEtErrorVec(std::vector<int>);
      
      std::vector<int> ExErrorVec() const;
      void setExErrorVec(std::vector<int>);

      std::vector<int> EyErrorVec() const;
      void setEyErrorVec(std::vector<int>);  
      
      
      void addEt(const std::vector<unsigned int>& Et,const std::vector<int>& EtError);
      void addEx(const std::vector<unsigned int>& Ex,const std::vector<int>& ExError);
      void addEy(const std::vector<unsigned int>& Ey,const std::vector<int>& EyError);

      unsigned int Et() const;
      unsigned int Ex() const;
      unsigned int Ey() const;
      int EtError() const;
      int ExError() const;
      int EyError() const;     
        
          
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMEtSums_v1 , 19676884 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMEtSums_V1_H
