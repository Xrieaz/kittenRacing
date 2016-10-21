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

// CameraController
struct  CameraController_t3473169601  : public MonoBehaviour_t667441552
{
public:
	// System.Single CameraController::followSpeed
	float ___followSpeed_2;
	// System.Single CameraController::rotationSpeed
	float ___rotationSpeed_3;
	// UnityEngine.Transform CameraController::target
	Transform_t1659122786 * ___target_4;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t4282066566  ___offset_5;
	// UnityEngine.Transform CameraController::cam
	Transform_t1659122786 * ___cam_6;

public:
	inline static int32_t get_offset_of_followSpeed_2() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___followSpeed_2)); }
	inline float get_followSpeed_2() const { return ___followSpeed_2; }
	inline float* get_address_of_followSpeed_2() { return &___followSpeed_2; }
	inline void set_followSpeed_2(float value)
	{
		___followSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___target_4)); }
	inline Transform_t1659122786 * get_target_4() const { return ___target_4; }
	inline Transform_t1659122786 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t1659122786 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___offset_5)); }
	inline Vector3_t4282066566  get_offset_5() const { return ___offset_5; }
	inline Vector3_t4282066566 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t4282066566  value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___cam_6)); }
	inline Transform_t1659122786 * get_cam_6() const { return ___cam_6; }
	inline Transform_t1659122786 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Transform_t1659122786 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
