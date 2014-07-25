// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_TRIGGERTOWER_V2_H
#define XAODTRIGL1CALO_VERSIONS_TRIGGERTOWER_V2_H

// EDM include(s):
#include "AthLinks/ElementLink.h"
#include "AthContainers/AuxElement.h"

namespace xAOD {

  /// Description of TriggerTower_v1
  ///
  /// @author John Morris <john.morris@cern.ch>
  ///
  /// $Revision$
  /// $Date$  
  ///  
  /// Trigger towers are the inputs to all other parts of the calorimeter trigger.
  /// They are formed by analogue summation of cells (represented in simulation
  /// by LArTTL1 and TileTTL1 objects). The L1Calo PreProcessor digitizes these,
  /// performs Bunch-Crossing IDentification, final calibration and reduction
  /// to 8 bit words.
  ///   
  /// The TriggerTower class represents the output of the PreProcessor.
  /// Each TriggerTower object actually contains information from a pair of
  /// trigger towers, one EM and one Hadronic, sharing the same eta, phi
  /// coordinates. This is convenient for algorithm emulation, though it does
  /// not represent the readout arrangement.
  ///    
  /// For each tower, the TriggerTower contains the final ET (LUT output)
  /// as well as a vector of ADC data (at 25ns intervals) from which it was
  /// formed, plus error flags and raw BCID output. As the PreProcessor
  /// readout can read variable numbers of slices of all of these data, the
  /// internal storage is in std::vectors, and methods exist to return all
  /// slices as well as just the data corresponding to the triggered crossing.
  ///
  
  class TriggerTower_v2 : public SG::AuxElement{
    public:
      // Default constructor
      TriggerTower_v2();
      
      /// Fill tower with all information
      void initialize(const unsigned int& coolId,const unsigned int& layer,const float& eta,const float& phi,
                      const std::vector<unsigned int>& lut_cp,const std::vector<unsigned int>& lut_jep,
                      const std::vector<unsigned int>& correction,const std::vector<unsigned int>& bcidVec,
                      const std::vector<unsigned int>& adc,const std::vector<unsigned int>& bcidExt,
                      const unsigned int& error,
                      const unsigned int& peak,
                      const unsigned int adcPeak);

      // Tower identifiers
      
      /// get coolId
      unsigned int coolId() const;
      /// set coolID
      void setCoolId(unsigned int);
      
      /// get layer
      unsigned int layer() const;
      /// set layer
      void setLayer(unsigned int);
      
      
      /// get eta
      float eta() const;
      /// set eta
      void setEta(float);
      
      /// get phi
      float phi() const;
      /// set phi
      void setPhi(float); 


      // Quantities with same number of slices as LUT data
      
      /// get lut_cp
      const std::vector<unsigned int>& lut_cp() const;
      /// set lut_cp
      void setLut_cp(const std::vector<unsigned int>&);
      
      /// get lut_jep
      const std::vector<unsigned int>& lut_jep() const;
      /// set lut_jep
      void setLut_jep(const std::vector<unsigned int>&);      
      
      /// get correction
      const std::vector<unsigned int>& correction() const;
      /// set correction
      void setCorrection(const std::vector<unsigned int>&);  
      
      /// get bcidVec
      const std::vector<unsigned int>& bcidVec() const;
      /// set bcidVec
      void setBcidVec(const std::vector<unsigned int>&);      
      

      // Quantities with same number of slices as ADC data
      
      /// get adc
      const std::vector<unsigned int>& adc() const;
      /// set adc
      void setAdc(const std::vector<unsigned int>&);    
      
      /// get bcidExt
      const std::vector<unsigned int>& bcidExt() const;
      /// set bcidExt
      void setBcidExt(const std::vector<unsigned int>&);       
      

      // One error word/tower/event
      
      /// get error
      unsigned int error() const;
      /// set error
      void setError(unsigned int);

      // Not part of readout, but to extract "peak" slice from vectors
      
      /// get peak
      unsigned int peak() const;
      /// set peak
      void setPeak(unsigned int);
      
      /// get adcPeak
      unsigned int adcPeak() const;
      /// set adcPeak
      void setAdcPeak(unsigned int);
      
      
      /// get cpET from peak of lut_cp
      unsigned int cpET() const;
      
      /// get jepET from peak of lut_jep
      unsigned int jepET() const;
      
      

      /// Is tower saturated?
      bool isCpSaturated() const;
      bool isJepSaturated() const;
    
    private:
      static const unsigned int m_saturation = 255;
  
  }; // class TriggerTower_v2
} // namespace xAOD

// Set up a CLID for the class:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::TriggerTower_v2 , 264277039 , 1 )
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_TRIGGERTOWER_V2_H
