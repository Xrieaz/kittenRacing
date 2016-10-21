#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtrudeShape
struct  ExtrudeShape_t1791658780  : public Il2CppObject
{
public:
	// UnityEngine.Vector2[] ExtrudeShape::verts
	Vector2U5BU5D_t4024180168* ___verts_0;
	// UnityEngine.Vector2[] ExtrudeShape::normals
	Vector2U5BU5D_t4024180168* ___normals_1;
	// System.Single[] ExtrudeShape::uCoords
	SingleU5BU5D_t2316563989* ___uCoords_2;
	// System.Int32[] ExtrudeShape::lines
	Int32U5BU5D_t3230847821* ___lines_3;

public:
	inline static int32_t get_offset_of_verts_0() { return static_cast<int32_t>(offsetof(ExtrudeShape_t1791658780, ___verts_0)); }
	inline Vector2U5BU5D_t4024180168* get_verts_0() const { return ___verts_0; }
	inline Vector2U5BU5D_t4024180168** get_address_of_verts_0() { return &___verts_0; }
	inline void set_verts_0(Vector2U5BU5D_t4024180168* value)
	{
		___verts_0 = value;
		Il2CppCodeGenWriteBarrier(&___verts_0, value);
	}

	inline static int32_t get_offset_of_normals_1() { return static_cast<int32_t>(offsetof(ExtrudeShape_t1791658780, ___normals_1)); }
	inline Vector2U5BU5D_t4024180168* get_normals_1() const { return ___normals_1; }
	inline Vector2U5BU5D_t4024180168** get_address_of_normals_1() { return &___normals_1; }
	inline void set_normals_1(Vector2U5BU5D_t4024180168* value)
	{
		___normals_1 = value;
		Il2CppCodeGenWriteBarrier(&___normals_1, value);
	}

	inline static int32_t get_offset_of_uCoords_2() { return static_cast<int32_t>(offsetof(ExtrudeShape_t1791658780, ___uCoords_2)); }
	inline SingleU5BU5D_t2316563989* get_uCoords_2() const { return ___uCoords_2; }
	inline SingleU5BU5D_t2316563989** get_address_of_uCoords_2() { return &___uCoords_2; }
	inline void set_uCoords_2(SingleU5BU5D_t2316563989* value)
	{
		___uCoords_2 = value;
		Il2CppCodeGenWriteBarrier(&___uCoords_2, value);
	}

	inline static int32_t get_offset_of_lines_3() { return static_cast<int32_t>(offsetof(ExtrudeShape_t1791658780, ___lines_3)); }
	inline Int32U5BU5D_t3230847821* get_lines_3() const { return ___lines_3; }
	inline Int32U5BU5D_t3230847821** get_address_of_lines_3() { return &___lines_3; }
	inline void set_lines_3(Int32U5BU5D_t3230847821* value)
	{
		___lines_3 = value;
		Il2CppCodeGenWriteBarrier(&___lines_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
