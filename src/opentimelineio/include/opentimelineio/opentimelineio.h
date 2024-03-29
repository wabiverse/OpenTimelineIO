#ifndef __OPENTIMELINEIO_H__
#define __OPENTIMELINEIO_H__

#include "opentimelineio/algo/editAlgorithm.h"
#include "opentimelineio/any.h"
#include "opentimelineio/anyDictionary.h"
#include "opentimelineio/anyVector.h"
#include "opentimelineio/clip.h"
#include "opentimelineio/composable.h"
#include "opentimelineio/composition.h"
#include "opentimelineio/deserialization.h"
#include "opentimelineio/effect.h"
#include "opentimelineio/errorStatus.h"
#include "opentimelineio/externalReference.h"
#include "opentimelineio/freezeFrame.h"
#include "opentimelineio/gap.h"
#include "opentimelineio/generatorReference.h"
#include "opentimelineio/imageSequenceReference.h"
#include "opentimelineio/item.h"
#include "opentimelineio/linearTimeWarp.h"
#include "opentimelineio/marker.h"
#include "opentimelineio/mediaReference.h"
#include "opentimelineio/missingReference.h"
#include "opentimelineio/optional.h"
#include "opentimelineio/safely_typed_any.h"
#include "opentimelineio/serializableCollection.h"
#include "opentimelineio/serializableObject.h"
#include "opentimelineio/serializableObjectWithMetadata.h"
#include "opentimelineio/serialization.h"
#include "opentimelineio/stack.h"
#include "opentimelineio/stackAlgorithm.h"
#include "opentimelineio/stringUtils.h"
#include "opentimelineio/timeEffect.h"
#include "opentimelineio/timeline.h"
#include "opentimelineio/track.h"
#include "opentimelineio/trackAlgorithm.h"
#include "opentimelineio/transition.h"
#include "opentimelineio/typeRegistry.h"
#include "opentimelineio/unknownSchema.h"
#include "opentimelineio/vectorIndexing.h"
#include "opentimelineio/version.h"

#endif // __OPENTIMELINEIO_H__
