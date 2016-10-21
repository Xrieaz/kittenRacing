#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WheelCollider
struct WheelCollider_t2281208037;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AxleInfo
struct  AxleInfo_t3927289054  : public Il2CppObject
{
public:
	// UnityEngine.WheelCollider AxleInfo::leftWheel
	WheelCollider_t2281208037 * ___leftWheel_0;
	// UnityEngine.WheelCollider AxleInfo::rightWheel
	WheelCollider_t2281208037 * ___rightWheel_1;
	// System.Boolean AxleInfo::motor
	bool ___motor_2;
	// System.Boolean AxleInfo::steering
	bool ___steering_3;

public:
	inline static int32_t get_offset_of_leftWheel_0() { return static_cast<int32_t>(offsetof(AxleInfo_t3927289054, ___leftWheel_0)); }
	inline WheelCollider_t2281208037 * get_leftWheel_0() const { return ___leftWheel_0; }
	inline WheelCollider_t2281208037 ** get_address_of_leftWheel_0() { return &___leftWheel_0; }
	inline void set_leftWheel_0(WheelCollider_t2281208037 * value)
	{
		___leftWheel_0 = value;
		Il2CppCodeGenWriteBarrier(&___leftWheel_0, value);
	}

	inline static int32_t get_offset_of_rightWheel_1() { return static_cast<int32_t>(offsetof(AxleInfo_t3927289054, ___rightWheel_1)); }
	inline WheelCollider_t2281208037 * get_rightWheel_1() const { return ___rightWheel_1; }
	inline WheelCollider_t2281208037 ** get_address_of_rightWheel_1() { return &___rightWheel_1; }
	inline void set_rightWheel_1(WheelCollider_t2281208037 * value)
	{
		___rightWheel_1 = value;
		Il2CppCodeGenWriteBarrier(&___rightWheel_1, value);
	}

	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(AxleInfo_t3927289054, ___motor_2)); }
	inline bool get_motor_2() const { return ___motor_2; }
	inline bool* get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(bool value)
	{
		___motor_2 = value;
	}

	inline static int32_t get_offset_of_steering_3() { return static_cast<int32_t>(offsetof(AxleInfo_t3927289054, ___steering_3)); }
	inline bool get_steering_3() const { return ___steering_3; }
	inline bool* get_address_of_steering_3() { return &___steering_3; }
	inline void set_steering_3(bool value)
	{
		___steering_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
