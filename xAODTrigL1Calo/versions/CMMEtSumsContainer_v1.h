// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMETSUMSCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMETSUMSCONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMEtSums_v1.h"

namespace xAOD {
   /// Define the CMMEtSums as a simple DataVector
   typedef DataVector< xAOD::CMMEtSums_v1 > CMMEtSumsContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMEtSumsContainer_v1 , 1175845346 , 1 )
#endif // not XAOD_STANDALONE
#endif // XAODTRIGL1CALO_VERSIONS_CMMETSUMSCONTAINER_V1_H
  