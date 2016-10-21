#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// Track
struct Track_t81068331;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaypointController
struct  WaypointController_t1905243805  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> WaypointController::m_arrayOfWaypoints
	List_1_t1355284822 * ___m_arrayOfWaypoints_2;
	// Track WaypointController::m_track
	Track_t81068331 * ___m_track_3;

public:
	inline static int32_t get_offset_of_m_arrayOfWaypoints_2() { return static_cast<int32_t>(offsetof(WaypointController_t1905243805, ___m_arrayOfWaypoints_2)); }
	inline List_1_t1355284822 * get_m_arrayOfWaypoints_2() const { return ___m_arrayOfWaypoints_2; }
	inline List_1_t1355284822 ** get_address_of_m_arrayOfWaypoints_2() { return &___m_arrayOfWaypoints_2; }
	inline void set_m_arrayOfWaypoints_2(List_1_t1355284822 * value)
	{
		___m_arrayOfWaypoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_arrayOfWaypoints_2, value);
	}

	inline static int32_t get_offset_of_m_track_3() { return static_cast<int32_t>(offsetof(WaypointController_t1905243805, ___m_track_3)); }
	inline Track_t81068331 * get_m_track_3() const { return ___m_track_3; }
	inline Track_t81068331 ** get_address_of_m_track_3() { return &___m_track_3; }
	inline void set_m_track_3(Track_t81068331 * value)
	{
		___m_track_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_track_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
