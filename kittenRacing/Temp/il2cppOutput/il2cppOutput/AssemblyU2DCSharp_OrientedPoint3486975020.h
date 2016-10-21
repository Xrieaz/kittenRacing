#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrientedPoint
struct  OrientedPoint_t3486975020 
{
public:
	// UnityEngine.Vector3 OrientedPoint::position
	Vector3_t4282066566  ___position_0;
	// UnityEngine.Quaternion OrientedPoint::rotation
	Quaternion_t1553702882  ___rotation_1;
	// System.Single OrientedPoint::vCoordinate
	float ___vCoordinate_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(OrientedPoint_t3486975020, ___position_0)); }
	inline Vector3_t4282066566  get_position_0() const { return ___position_0; }
	inline Vector3_t4282066566 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t4282066566  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(OrientedPoint_t3486975020, ___rotation_1)); }
	inline Quaternion_t1553702882  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t1553702882 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t1553702882  value)
	{
		___rotation_1 = value;
	}

	inline static int32_t get_offset_of_vCoordinate_2() { return static_cast<int32_t>(offsetof(OrientedPoint_t3486975020, ___vCoordinate_2)); }
	inline float get_vCoordinate_2() const { return ___vCoordinate_2; }
	inline float* get_address_of_vCoordinate_2() { return &___vCoordinate_2; }
	inline void set_vCoordinate_2(float value)
	{
		___vCoordinate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OrientedPoint
struct OrientedPoint_t3486975020_marshaled_pinvoke
{
	Vector3_t4282066566_marshaled_pinvoke ___position_0;
	Quaternion_t1553702882_marshaled_pinvoke ___rotation_1;
	float ___vCoordinate_2;
};
// Native definition for marshalling of: OrientedPoint
struct OrientedPoint_t3486975020_marshaled_com
{
	Vector3_t4282066566_marshaled_com ___position_0;
	Quaternion_t1553702882_marshaled_com ___rotation_1;
	float ___vCoordinate_2;
};
