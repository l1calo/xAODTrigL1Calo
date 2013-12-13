// $Id$

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMCPHitsAuxContainer_v1.h"

namespace xAOD {

  CMMCPHitsAuxContainer_v1::CMMCPHitsAuxContainer_v1() :
    AuxContainerBase()
  {
    AUX_VARIABLE( crate );
    AUX_VARIABLE( dataID );
    AUX_VARIABLE( peak );
    AUX_VARIABLE( hitsVec0 );
    AUX_VARIABLE( hitsVec1 );
    AUX_VARIABLE( errorVec0 );
    AUX_VARIABLE( errorVec1 );
  }

} // namespace xAOD
