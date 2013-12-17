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
      
      /// get crate number
      int crate() const;
      /// set crate number
      void setCrate(int);
            
      /// get dataID
      int dataID() const;
      /// set dataID
      void setDataID(int);
      
      /// get peak
      int peak() const;
      /// set peak
      void setPeak(int);
      
      /// get EtVec - Et for all time slices
      std::vector<unsigned int> EtVec() const;
      /// set EtVec  - Et for all time slices
      void setEtVec(std::vector<unsigned int>);
      
      /// get ExVec - Ex for all time slices
      std::vector<unsigned int> ExVec() const;
      /// set ExVec - Ex for all time slices
      void setExVec(std::vector<unsigned int>);

      /// get EyVec - Ey for all time slices      
      std::vector<unsigned int> EyVec() const;
      /// set EyVec - Ey for all time slices      
      void setEyVec(std::vector<unsigned int>);      
      
      /// get EtErrorVec - Et Error for all time slices
      std::vector<int> EtErrorVec() const;
      /// set EtErrorVec - Et Error for all time slices
      void setEtErrorVec(std::vector<int>);
      
      /// get ExErrorVec - Ex Error for all time slices
      std::vector<int> ExErrorVec() const;
      /// set ExErrorVec - Ex Error for all time slices
      void setExErrorVec(std::vector<int>);

      /// get EyErrorVec - Ey Error for all time slices
      std::vector<int> EyErrorVec() const;
      /// set EyErrorVec - Ey Error for all time slices
      void setEyErrorVec(std::vector<int>);  
      
      // add Et. Internally calls setEtVec(Et); setEtErrorVec(EtError);
      void addEt(const std::vector<unsigned int>& Et,const std::vector<int>& EtError);
      // add Ex. Internally calls setExVec(Ex); setExErrorVec(ExError);
      void addEx(const std::vector<unsigned int>& Ex,const std::vector<int>& ExError);
      // add Ey. Internally calls setEyVec(Ey); setEyErrorVec(EyError);
      void addEy(const std::vector<unsigned int>& Ey,const std::vector<int>& EyError);

      // get Et for EtVec[peak] - time slice that (hopefully) contains the collision
      unsigned int Et() const;
      // get Ex for ExVec[peak] - time slice that (hopefully) contains the collision
      unsigned int Ex() const;
      // get Ey for EyVec[peak] - time slice that (hopefully) contains the collision
      unsigned int Ey() const;
      // get EtError for EtErrorVec[peak] - time slice that (hopefully) contains the collision
      int EtError() const;
      // get ExError for ExErrorVec[peak] - time slice that (hopefully) contains the collision
      int ExError() const;
      // get EyError for EyErrorVec[peak] - time slice that (hopefully) contains the collision
      int EyError() const;              
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMEtSums_v1 , 19676884 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMEtSums_V1_H
