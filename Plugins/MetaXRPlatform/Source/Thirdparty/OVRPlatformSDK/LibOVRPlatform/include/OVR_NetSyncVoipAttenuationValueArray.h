/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_NETSYNCVOIPATTENUATIONVALUEARRAY_H
#define OVR_NETSYNCVOIPATTENUATIONVALUEARRAY_H

#include "OVR_Platform_Defs.h"
#include "OVR_NetSyncVoipAttenuationValue.h"
#include <stddef.h>

/// \file
/// Represents a paginated list of ::ovrNetSyncVoipAttenuationValueHandle
/// elements. It allows you to easily access and manipulate the elements in the
/// paginated list, such as the size of the list and if there is a next page of
/// elements available.
typedef struct ovrNetSyncVoipAttenuationValueArray *ovrNetSyncVoipAttenuationValueArrayHandle;

/// Access the indexed element in this list. Note that the index is zero-based,
/// so the first element has an index of 0.
OVRP_PUBLIC_FUNCTION(ovrNetSyncVoipAttenuationValueHandle) ovr_NetSyncVoipAttenuationValueArray_GetElement(const ovrNetSyncVoipAttenuationValueArrayHandle obj, size_t index);

/// The number of elements contained within this list. This is not equal to the
/// total number of elements across multiple pages.
OVRP_PUBLIC_FUNCTION(size_t) ovr_NetSyncVoipAttenuationValueArray_GetSize(const ovrNetSyncVoipAttenuationValueArrayHandle obj);


#endif
