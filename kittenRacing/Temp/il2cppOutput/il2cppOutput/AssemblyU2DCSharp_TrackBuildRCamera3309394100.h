#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRCamera
struct  TrackBuildRCamera_t3309394100  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform TrackBuildRCamera::target
	Transform_t1659122786 * ___target_2;
	// System.Single TrackBuildRCamera::distance
	float ___distance_3;
	// System.Single TrackBuildRCamera::height
	float ___height_4;
	// UnityEngine.Vector3 TrackBuildRCamera::modifyAngle
	Vector3_t4282066566  ___modifyAngle_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TrackBuildRCamera_t3309394100, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(TrackBuildRCamera_t3309394100, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(TrackBuildRCamera_t3309394100, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_modifyAngle_5() { return static_cast<int32_t>(offsetof(TrackBuildRCamera_t3309394100, ___modifyAngle_5)); }
	inline Vector3_t4282066566  get_modifyAngle_5() const { return ___modifyAngle_5; }
	inline Vector3_t4282066566 * get_address_of_modifyAngle_5() { return &___modifyAngle_5; }
	inline void set_modifyAngle_5(Vector3_t4282066566  value)
	{
		___modifyAngle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
