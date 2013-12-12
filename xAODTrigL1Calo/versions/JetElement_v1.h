#ifndef XAODTRIGL1CALO_VERSIONS_JETELEMENT_V1_H
#define XAODTRIGL1CALO_VERSIONS_JETELEMENT_V1_H

#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

   /// Description of a JetElement
   ///
   /// This is a first stab at how a JetElement could behave in the
   /// xAOD EDM. Just brainstorming for now.
   ///
   /// @author John Morris <john.morris@cern.ch>
   ///
   /// $Date: 2013-12-10
   ///
   class JetElement_v1 : public SG::AuxElement{
   public:
      // Default constructor
      JetElement_v1();
      
      float phi() const;
      void setPhi(float);
      
      float eta() const;
      void setEta(float); 
      
      unsigned int key() const;
      void setKey(unsigned int);
      
      int peak() const;
      void setPeak(int);
      
      std::vector<int> emEnergyVec() const;
      void setEmEnergyVec(std::vector<int>);
      
      std::vector<int> hadEnergyVec() const;
      void setHadEnergyVec(std::vector<int>); 
      
      std::vector<int> emErrorVec() const;
      void setEmErrorVec(std::vector<int>);
      
      std::vector<int> hadErrorVec() const;
      void setHadErrorVec(std::vector<int>);      
    
      std::vector<int> linkErrorVec() const;
      void setLinkErrorVec(std::vector<int>); 
     
      /** Add ET to triggered time slice */
      void addEnergy(int emEnergy, int hadEnergy);
      /* Add ET values to specified slice */
      void addSlice(int slice, int emEnergy, int hadEnergy,int emError, int hadError, int linkError);

      /** Return ET for peak slice */   
      int emEnergy()  const;
      int hadEnergy() const;
      int energy()    const;

      /** return the ET values for a specified slice */
      int emSliceEnergy(int slice) const;
      int hadSliceEnergy(int slice) const;
      int sliceEnergy(int slice) const;

      /** Error codes and utility information */
      bool isSaturated()    const;
      bool isEmSaturated()  const;
      bool isHadSaturated() const; 
      int emError()   const;
      int hadError()  const;
      int linkError() const;
      
   private:
      static const int m_saturationThreshold = 1023;
      static const int m_layerSaturationThreshold = 511;     
   };
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::JetElement_v1 , 165900946 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_JETELEMENT_V1_H
