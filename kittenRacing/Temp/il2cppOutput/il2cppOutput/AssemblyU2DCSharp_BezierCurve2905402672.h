#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierCurve
struct  BezierCurve_t2905402672  : public Il2CppObject
{
public:
	// System.Single[] BezierCurve::sampledLengths
	SingleU5BU5D_t2316563989* ___sampledLengths_0;
	// UnityEngine.Vector3[] BezierCurve::points
	Vector3U5BU5D_t215400611* ___points_1;
	// System.Single BezierCurve::step
	float ___step_2;
	// System.Single BezierCurve::rotationP1
	float ___rotationP1_3;
	// System.Single BezierCurve::rotationP4
	float ___rotationP4_4;
	// System.Collections.Generic.List`1<System.Int32> BezierCurve::meshLines
	List_1_t2522024052 * ___meshLines_5;

public:
	inline static int32_t get_offset_of_sampledLengths_0() { return static_cast<int32_t>(offsetof(BezierCurve_t2905402672, ___sampledLengths_0)); }
	inline SingleU5BU5D_t2316563989* get_sampledLengths_0() const { return ___sampledLengths_0; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledLengths_0() { return &___sampledLengths_0; }
	inline void set_sampledLengths_0(SingleU5BU5D_t2316563989* value)
	{
		___sampledLengths_0 = value;
		Il2CppCodeGenWriteBarrier(&___sampledLengths_0, value);
	}

	inline static int32_t get_offset_of_points_1() { return static_cast<int32_t>(offsetof(BezierCurve_t2905402672, ___points_1)); }
	inline Vector3U5BU5D_t215400611* get_points_1() const { return ___points_1; }
	inline Vector3U5BU5D_t215400611** get_address_of_points_1() { return &___points_1; }
	inline void set_points_1(Vector3U5BU5D_t215400611* value)
	{
		___points_1 = value;
		Il2CppCodeGenWriteBarrier(&___points_1, value);
	}

	inline static int32_t get_offset_of_step_2() { return static_cast<int32_t>(offsetof(BezierCurve_t2905402672, ___step_2)); }
	inline float get_step_2() const { return ___step_2; }
	inline float* get_address_of_step_2() { return &___step_2; }
	inline void set_step_2(float value)
	{
		___step_2 = value;
	}

	inline static int32_t get_offset_of_rotationP1_3() { return static_cast<int32_t>(offsetof(BezierCurve_t2905402672, ___rotationP1_3)); }
	inline float get_rotationP1_3() const { return ___rotationP1_3; }
	inline float* get_address_of_rotationP1_3() { return &___rotationP1_3; }
	inline void set_rotationP1_3(float value)
	{
		___rotationP1_3 = value;
	}

	inline static int32_t get_offset_of_rotationP4_4() { return static_cast<int32_t>(offsetof(BezierCurve_t2905402672, ___rotationP4_4)); }
	inline float get_rotationP4_4() const { return ___rotationP4_4; }
	inline float* get_address_of_rotationP4_4() { return &___rotationP4_4; }
	inline void set_rotationP4_4(float value)
	{
		___rotationP4_4 = value;
	}

	inline static int32_t get_offset_of_meshLines_5() { return static_cast<int32_t>(offsetof(BezierCurve_t2905402672, ___meshLines_5)); }
	inline List_1_t2522024052 * get_meshLines_5() const { return ___meshLines_5; }
	inline List_1_t2522024052 ** get_address_of_meshLines_5() { return &___meshLines_5; }
	inline void set_meshLines_5(List_1_t2522024052 * value)
	{
		___meshLines_5 = value;
		Il2CppCodeGenWriteBarrier(&___meshLines_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
