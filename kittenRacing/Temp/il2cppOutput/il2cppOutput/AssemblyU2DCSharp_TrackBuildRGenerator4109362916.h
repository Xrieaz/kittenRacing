#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TrackBuildRTrack
struct TrackBuildRTrack_t4140821980;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRGenerator
struct  TrackBuildRGenerator_t4109362916  : public MonoBehaviour_t667441552
{
public:
	// TrackBuildRTrack TrackBuildRGenerator::track
	TrackBuildRTrack_t4140821980 * ___track_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TrackBuildRGenerator::meshHolders
	List_1_t747900261 * ___meshHolders_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TrackBuildRGenerator::colliderHolders
	List_1_t747900261 * ___colliderHolders_4;

public:
	inline static int32_t get_offset_of_track_2() { return static_cast<int32_t>(offsetof(TrackBuildRGenerator_t4109362916, ___track_2)); }
	inline TrackBuildRTrack_t4140821980 * get_track_2() const { return ___track_2; }
	inline TrackBuildRTrack_t4140821980 ** get_address_of_track_2() { return &___track_2; }
	inline void set_track_2(TrackBuildRTrack_t4140821980 * value)
	{
		___track_2 = value;
		Il2CppCodeGenWriteBarrier(&___track_2, value);
	}

	inline static int32_t get_offset_of_meshHolders_3() { return static_cast<int32_t>(offsetof(TrackBuildRGenerator_t4109362916, ___meshHolders_3)); }
	inline List_1_t747900261 * get_meshHolders_3() const { return ___meshHolders_3; }
	inline List_1_t747900261 ** get_address_of_meshHolders_3() { return &___meshHolders_3; }
	inline void set_meshHolders_3(List_1_t747900261 * value)
	{
		___meshHolders_3 = value;
		Il2CppCodeGenWriteBarrier(&___meshHolders_3, value);
	}

	inline static int32_t get_offset_of_colliderHolders_4() { return static_cast<int32_t>(offsetof(TrackBuildRGenerator_t4109362916, ___colliderHolders_4)); }
	inline List_1_t747900261 * get_colliderHolders_4() const { return ___colliderHolders_4; }
	inline List_1_t747900261 ** get_address_of_colliderHolders_4() { return &___colliderHolders_4; }
	inline void set_colliderHolders_4(List_1_t747900261 * value)
	{
		___colliderHolders_4 = value;
		Il2CppCodeGenWriteBarrier(&___colliderHolders_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
