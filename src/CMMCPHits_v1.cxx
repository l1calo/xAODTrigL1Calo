// $Id$

// EDM includes(s):
#include "xAODCore/AuxStoreAccessorMacros.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMCPHits_v1.h"

namespace xAOD{  

  CMMCPHits_v1::CMMCPHits_v1() :
    SG::AuxElement()
  {        
  }

  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1, int, crate, setCrate )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1, int, dataID, setDataID )
  AUXSTORE_PRIMITIVE_SETTER_AND_GETTER( CMMCPHits_v1, int, peak, setPeak )
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMCPHits_v1, std::vector<unsigned int>,
                                     hitsVec0, setHitsVec0 )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMCPHits_v1, std::vector<unsigned int>,
                                     hitsVec1, setHitsVec1 )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMCPHits_v1, std::vector<int>,
                                     errorVec0, setErrorVec0 )  
  AUXSTORE_OBJECT_SETTER_AND_GETTER( CMMCPHits_v1, std::vector<int>,
                                     errorVec1, setErrorVec1 )

  void CMMCPHits_v1::addHits(const std::vector<unsigned int>& hits0,
                             const std::vector<unsigned int>& hits1,
                             const std::vector<int>& error0,
                             const std::vector<int>& error1)
  {
    this->setHitsVec0( hits0 );
    this->setHitsVec1( hits1 );
    this->setErrorVec0( error0 );
    this->setErrorVec1( error1 );
  }

  unsigned int CMMCPHits_v1::hitWord0() const
  {
    // Remember that at(...) is slower than [...]. But in return it throws
    // a kind-of-useful exception when using a wrong index. Question is if
    // it can happen here...
    return this->hitsVec0().at( this->peak() ); 
  }

  unsigned int CMMCPHits_v1::hitWord1() const
  {
    return this->hitsVec1().at( this->peak() );
  }

  int CMMCPHits_v1::error0() const
  {
    return this->errorVec0().at( this->peak() ); 
  }

  int CMMCPHits_v1::error1() const
  {
    return this->errorVec1().at( this->peak() );
  }  

} // namespace xAOD
