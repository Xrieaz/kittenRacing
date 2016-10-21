#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierCurve
struct BezierCurve_t2905402672;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_OrientedPoint3486975020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierCurve/<GeneratePath>c__Iterator0
struct  U3CGeneratePathU3Ec__Iterator0_t223781606  : public Il2CppObject
{
public:
	// System.Single BezierCurve/<GeneratePath>c__Iterator0::subDivisions
	float ___subDivisions_0;
	// System.Single BezierCurve/<GeneratePath>c__Iterator0::<step>__0
	float ___U3CstepU3E__0_1;
	// System.Single BezierCurve/<GeneratePath>c__Iterator0::<f>__1
	float ___U3CfU3E__1_2;
	// System.Int32 BezierCurve/<GeneratePath>c__Iterator0::$PC
	int32_t ___U24PC_3;
	// OrientedPoint BezierCurve/<GeneratePath>c__Iterator0::$current
	OrientedPoint_t3486975020  ___U24current_4;
	// System.Single BezierCurve/<GeneratePath>c__Iterator0::<$>subDivisions
	float ___U3CU24U3EsubDivisions_5;
	// BezierCurve BezierCurve/<GeneratePath>c__Iterator0::<>f__this
	BezierCurve_t2905402672 * ___U3CU3Ef__this_6;

public:
	inline static int32_t get_offset_of_subDivisions_0() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___subDivisions_0)); }
	inline float get_subDivisions_0() const { return ___subDivisions_0; }
	inline float* get_address_of_subDivisions_0() { return &___subDivisions_0; }
	inline void set_subDivisions_0(float value)
	{
		___subDivisions_0 = value;
	}

	inline static int32_t get_offset_of_U3CstepU3E__0_1() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___U3CstepU3E__0_1)); }
	inline float get_U3CstepU3E__0_1() const { return ___U3CstepU3E__0_1; }
	inline float* get_address_of_U3CstepU3E__0_1() { return &___U3CstepU3E__0_1; }
	inline void set_U3CstepU3E__0_1(float value)
	{
		___U3CstepU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CfU3E__1_2() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___U3CfU3E__1_2)); }
	inline float get_U3CfU3E__1_2() const { return ___U3CfU3E__1_2; }
	inline float* get_address_of_U3CfU3E__1_2() { return &___U3CfU3E__1_2; }
	inline void set_U3CfU3E__1_2(float value)
	{
		___U3CfU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___U24current_4)); }
	inline OrientedPoint_t3486975020  get_U24current_4() const { return ___U24current_4; }
	inline OrientedPoint_t3486975020 * get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(OrientedPoint_t3486975020  value)
	{
		___U24current_4 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EsubDivisions_5() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___U3CU24U3EsubDivisions_5)); }
	inline float get_U3CU24U3EsubDivisions_5() const { return ___U3CU24U3EsubDivisions_5; }
	inline float* get_address_of_U3CU24U3EsubDivisions_5() { return &___U3CU24U3EsubDivisions_5; }
	inline void set_U3CU24U3EsubDivisions_5(float value)
	{
		___U3CU24U3EsubDivisions_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_6() { return static_cast<int32_t>(offsetof(U3CGeneratePathU3Ec__Iterator0_t223781606, ___U3CU3Ef__this_6)); }
	inline BezierCurve_t2905402672 * get_U3CU3Ef__this_6() const { return ___U3CU3Ef__this_6; }
	inline BezierCurve_t2905402672 ** get_address_of_U3CU3Ef__this_6() { return &___U3CU3Ef__this_6; }
	inline void set_U3CU3Ef__this_6(BezierCurve_t2905402672 * value)
	{
		___U3CU3Ef__this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
