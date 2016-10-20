#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TrackBuildR
struct TrackBuildR_t2436769967;
// TrackBuildRTrack
struct TrackBuildRTrack_t4140821980;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRMonitor
struct  TrackBuildRMonitor_t198957483  : public MonoBehaviour_t667441552
{
public:
	// TrackBuildR TrackBuildRMonitor::track
	TrackBuildR_t2436769967 * ___track_2;
	// TrackBuildRTrack TrackBuildRMonitor::trackData
	TrackBuildRTrack_t4140821980 * ___trackData_3;

public:
	inline static int32_t get_offset_of_track_2() { return static_cast<int32_t>(offsetof(TrackBuildRMonitor_t198957483, ___track_2)); }
	inline TrackBuildR_t2436769967 * get_track_2() const { return ___track_2; }
	inline TrackBuildR_t2436769967 ** get_address_of_track_2() { return &___track_2; }
	inline void set_track_2(TrackBuildR_t2436769967 * value)
	{
		___track_2 = value;
		Il2CppCodeGenWriteBarrier(&___track_2, value);
	}

	inline static int32_t get_offset_of_trackData_3() { return static_cast<int32_t>(offsetof(TrackBuildRMonitor_t198957483, ___trackData_3)); }
	inline TrackBuildRTrack_t4140821980 * get_trackData_3() const { return ___trackData_3; }
	inline TrackBuildRTrack_t4140821980 ** get_address_of_trackData_3() { return &___trackData_3; }
	inline void set_trackData_3(TrackBuildRTrack_t4140821980 * value)
	{
		___trackData_3 = value;
		Il2CppCodeGenWriteBarrier(&___trackData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
