/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/base.h>
#include <float.h>
#include <math.h>
#include <AzCore/Math/Internal/MathTypes_Platform.h>
#include <AzCore/Math/MathUtils.h>
#include <AzCore/Math/SimdMath.h>

#if !difined(O3DE_INITIALIZE_MATH_TYPES_SIGNALING_NAN)
    #if defined(AZ_DEBUG_BUILD)
        #define O3DE_INITIALIZE_MATH_TYPES_SIGNALING_NAN true
    #else
        #define O3DE_INITIALIZE_MATH_TYPES_SIGNALING_NAN false
    #endif
#endif
