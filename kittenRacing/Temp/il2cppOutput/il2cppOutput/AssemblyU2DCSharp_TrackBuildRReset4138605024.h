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
// TrackBuildRTrack
struct TrackBuildRTrack_t4140821980;
// UnityEngine.BoxCollider[]
struct BoxColliderU5BU5D_t3443516536;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRReset
struct  TrackBuildRReset_t4138605024  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform TrackBuildRReset::target
	Transform_t1659122786 * ___target_2;
	// TrackBuildRTrack TrackBuildRReset::track
	TrackBuildRTrack_t4140821980 * ___track_3;
	// UnityEngine.BoxCollider[] TrackBuildRReset::noTrackingAreas
	BoxColliderU5BU5D_t3443516536* ___noTrackingAreas_4;
	// System.Single TrackBuildRReset::resetHeight
	float ___resetHeight_5;
	// System.Single TrackBuildRReset::maxDistance
	float ___maxDistance_6;
	// System.Single TrackBuildRReset::resetDistance
	float ___resetDistance_7;
	// UnityEngine.Rigidbody TrackBuildRReset::targetRigidBody
	Rigidbody_t3346577219 * ___targetRigidBody_8;
	// System.Single TrackBuildRReset::nearestPercent
	float ___nearestPercent_9;
	// UnityEngine.Vector3 TrackBuildRReset::nearestPostion
	Vector3_t4282066566  ___nearestPostion_10;
	// UnityEngine.Vector3 TrackBuildRReset::nearestDirection
	Vector3_t4282066566  ___nearestDirection_11;
	// System.Boolean TrackBuildRReset::insideIgnore
	bool ___insideIgnore_12;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_track_3() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___track_3)); }
	inline TrackBuildRTrack_t4140821980 * get_track_3() const { return ___track_3; }
	inline TrackBuildRTrack_t4140821980 ** get_address_of_track_3() { return &___track_3; }
	inline void set_track_3(TrackBuildRTrack_t4140821980 * value)
	{
		___track_3 = value;
		Il2CppCodeGenWriteBarrier(&___track_3, value);
	}

	inline static int32_t get_offset_of_noTrackingAreas_4() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___noTrackingAreas_4)); }
	inline BoxColliderU5BU5D_t3443516536* get_noTrackingAreas_4() const { return ___noTrackingAreas_4; }
	inline BoxColliderU5BU5D_t3443516536** get_address_of_noTrackingAreas_4() { return &___noTrackingAreas_4; }
	inline void set_noTrackingAreas_4(BoxColliderU5BU5D_t3443516536* value)
	{
		___noTrackingAreas_4 = value;
		Il2CppCodeGenWriteBarrier(&___noTrackingAreas_4, value);
	}

	inline static int32_t get_offset_of_resetHeight_5() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___resetHeight_5)); }
	inline float get_resetHeight_5() const { return ___resetHeight_5; }
	inline float* get_address_of_resetHeight_5() { return &___resetHeight_5; }
	inline void set_resetHeight_5(float value)
	{
		___resetHeight_5 = value;
	}

	inline static int32_t get_offset_of_maxDistance_6() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___maxDistance_6)); }
	inline float get_maxDistance_6() const { return ___maxDistance_6; }
	inline float* get_address_of_maxDistance_6() { return &___maxDistance_6; }
	inline void set_maxDistance_6(float value)
	{
		___maxDistance_6 = value;
	}

	inline static int32_t get_offset_of_resetDistance_7() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___resetDistance_7)); }
	inline float get_resetDistance_7() const { return ___resetDistance_7; }
	inline float* get_address_of_resetDistance_7() { return &___resetDistance_7; }
	inline void set_resetDistance_7(float value)
	{
		___resetDistance_7 = value;
	}

	inline static int32_t get_offset_of_targetRigidBody_8() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___targetRigidBody_8)); }
	inline Rigidbody_t3346577219 * get_targetRigidBody_8() const { return ___targetRigidBody_8; }
	inline Rigidbody_t3346577219 ** get_address_of_targetRigidBody_8() { return &___targetRigidBody_8; }
	inline void set_targetRigidBody_8(Rigidbody_t3346577219 * value)
	{
		___targetRigidBody_8 = value;
		Il2CppCodeGenWriteBarrier(&___targetRigidBody_8, value);
	}

	inline static int32_t get_offset_of_nearestPercent_9() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___nearestPercent_9)); }
	inline float get_nearestPercent_9() const { return ___nearestPercent_9; }
	inline float* get_address_of_nearestPercent_9() { return &___nearestPercent_9; }
	inline void set_nearestPercent_9(float value)
	{
		___nearestPercent_9 = value;
	}

	inline static int32_t get_offset_of_nearestPostion_10() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___nearestPostion_10)); }
	inline Vector3_t4282066566  get_nearestPostion_10() const { return ___nearestPostion_10; }
	inline Vector3_t4282066566 * get_address_of_nearestPostion_10() { return &___nearestPostion_10; }
	inline void set_nearestPostion_10(Vector3_t4282066566  value)
	{
		___nearestPostion_10 = value;
	}

	inline static int32_t get_offset_of_nearestDirection_11() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___nearestDirection_11)); }
	inline Vector3_t4282066566  get_nearestDirection_11() const { return ___nearestDirection_11; }
	inline Vector3_t4282066566 * get_address_of_nearestDirection_11() { return &___nearestDirection_11; }
	inline void set_nearestDirection_11(Vector3_t4282066566  value)
	{
		___nearestDirection_11 = value;
	}

	inline static int32_t get_offset_of_insideIgnore_12() { return static_cast<int32_t>(offsetof(TrackBuildRReset_t4138605024, ___insideIgnore_12)); }
	inline bool get_insideIgnore_12() const { return ___insideIgnore_12; }
	inline bool* get_address_of_insideIgnore_12() { return &___insideIgnore_12; }
	inline void set_insideIgnore_12(bool value)
	{
		___insideIgnore_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
