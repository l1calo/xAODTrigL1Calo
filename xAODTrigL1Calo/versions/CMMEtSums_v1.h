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
      const std::vector<unsigned int>& etVec() const;
      /// set EtVec  - Et for all time slices
      void setEtVec(const std::vector<unsigned int>&);

      /// get ExVec - Ex for all time slices
      const std::vector<unsigned int>& exVec() const;
      /// set ExVec - Ex for all time slices
      void setExVec(const std::vector<unsigned int>&);

      /// get EyVec - Ey for all time slices      
      const std::vector<unsigned int>& eyVec() const;
      /// set EyVec - Ey for all time slices      
      void setEyVec(const std::vector<unsigned int>&);      

      /// get EtErrorVec - Et Error for all time slices
      const std::vector<int>& etErrorVec() const;
      /// set EtErrorVec - Et Error for all time slices
      void setEtErrorVec(const std::vector<int>&);

      /// get ExErrorVec - Ex Error for all time slices
      const std::vector<int>& exErrorVec() const;
      /// set ExErrorVec - Ex Error for all time slices
      void setExErrorVec(const std::vector<int>&);

      /// get EyErrorVec - Ey Error for all time slices
      const std::vector<int>& eyErrorVec() const;
      /// set EyErrorVec - Ey Error for all time slices
      void setEyErrorVec(const std::vector<int>&);  

      // add Et. Internally calls setEtVec(Et); setEtErrorVec(EtError);
      void addEt(const std::vector<unsigned int>& Et,const std::vector<int>& EtError);
      // add Ex. Internally calls setExVec(Ex); setExErrorVec(ExError);
      void addEx(const std::vector<unsigned int>& Ex,const std::vector<int>& ExError);
      // add Ey. Internally calls setEyVec(Ey); setEyErrorVec(EyError);
      void addEy(const std::vector<unsigned int>& Ey,const std::vector<int>& EyError);

      // get Et for EtVec[peak] - time slice that (hopefully) contains the collision
      unsigned int et() const;
      // get Ex for ExVec[peak] - time slice that (hopefully) contains the collision
      unsigned int ex() const;
      // get Ey for EyVec[peak] - time slice that (hopefully) contains the collision
      unsigned int ey() const;
      // get EtError for EtErrorVec[peak] - time slice that (hopefully) contains the collision
      int etError() const;
      // get ExError for ExErrorVec[peak] - time slice that (hopefully) contains the collision
      int exError() const;
      // get EyError for EyErrorVec[peak] - time slice that (hopefully) contains the collision
      int eyError() const; 

      /// Backwards Compatibility with Trigger/TrigT1/TrigT1CaloEvent
      /// Run1 EDM did not strictly follow cammelCaps
      /// See above for description
      inline const std::vector<unsigned int>& EtVec() const {return this->etVec();}
      inline const std::vector<unsigned int>& ExVec() const {return this->exVec();}
      inline const std::vector<unsigned int>& EyVec() const {return this->eyVec();}
      inline const std::vector<int>& EtErrorVec() const {return this->etErrorVec();}
      inline const std::vector<int>& ExErrorVec() const {return this->exErrorVec();}
      inline const std::vector<int>& EyErrorVec() const {return this->eyErrorVec();}
      inline unsigned int Et() const {return this->et();}
      inline unsigned int Ex() const {return this->ex();}
      inline unsigned int Ey() const {return this->ey();}
      inline int EtError() const {return this->etError();}
      inline int ExError() const {return this->exError();}
      inline int EyError() const {return this->eyError();}
      
  };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMEtSums_v1 , 19676884 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMEtSums_V1_H
