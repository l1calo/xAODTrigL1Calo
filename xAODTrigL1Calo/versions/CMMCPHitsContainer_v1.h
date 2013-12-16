// Dear emacs, this is -*- c++ -*-
// $Id$
#ifndef XAODTRIGL1CALO_VERSIONS_CMMCPHITSCONTAINER_V1_H
#define XAODTRIGL1CALO_VERSIONS_CMMCPHITSCONTAINER_V1_H

// EDM include(s):
#include "AthContainers/DataVector.h"

// Local include(s):
#include "xAODTrigL1Calo/versions/CMMCPHits_v1.h"

namespace xAOD {
   /// Define the CMMCPHits as a simple DataVector
   typedef DataVector< xAOD::CMMCPHits_v1 > CMMCPHitsContainer_v1;
}

// Set up a CLID for the container:
#ifndef XAOD_STANDALONE
#include "SGTools/CLASS_DEF.h"
  CLASS_DEF( xAOD::CMMCPHitsContainer_v1 , 1296557234 , 1 )
#endif // not XAOD_STANDALONE

#endif // XAODTRIGL1CALO_VERSIONS_CMMCPHITSCONTAINER_V1_H