#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Bezier3D
struct Bezier3D_t2097769904;
// OrientedPoint[]
struct OrientedPointU5BU5D_t3230427557;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bezier3D
struct  Bezier3D_t2097769904  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 Bezier3D::p1
	Vector3_t4282066566  ___p1_2;
	// UnityEngine.Vector3 Bezier3D::p2
	Vector3_t4282066566  ___p2_3;
	// UnityEngine.Vector3 Bezier3D::p3
	Vector3_t4282066566  ___p3_4;
	// UnityEngine.Vector3 Bezier3D::p4
	Vector3_t4282066566  ___p4_5;
	// System.Single Bezier3D::rotationP1
	float ___rotationP1_6;
	// System.Single Bezier3D::rotationP4
	float ___rotationP4_7;
	// System.Int32 Bezier3D::segments
	int32_t ___segments_8;
	// Bezier3D Bezier3D::prevSegment
	Bezier3D_t2097769904 * ___prevSegment_9;
	// Bezier3D Bezier3D::nextSegment
	Bezier3D_t2097769904 * ___nextSegment_10;
	// OrientedPoint[] Bezier3D::m_path
	OrientedPointU5BU5D_t3230427557* ___m_path_11;

public:
	inline static int32_t get_offset_of_p1_2() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___p1_2)); }
	inline Vector3_t4282066566  get_p1_2() const { return ___p1_2; }
	inline Vector3_t4282066566 * get_address_of_p1_2() { return &___p1_2; }
	inline void set_p1_2(Vector3_t4282066566  value)
	{
		___p1_2 = value;
	}

	inline static int32_t get_offset_of_p2_3() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___p2_3)); }
	inline Vector3_t4282066566  get_p2_3() const { return ___p2_3; }
	inline Vector3_t4282066566 * get_address_of_p2_3() { return &___p2_3; }
	inline void set_p2_3(Vector3_t4282066566  value)
	{
		___p2_3 = value;
	}

	inline static int32_t get_offset_of_p3_4() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___p3_4)); }
	inline Vector3_t4282066566  get_p3_4() const { return ___p3_4; }
	inline Vector3_t4282066566 * get_address_of_p3_4() { return &___p3_4; }
	inline void set_p3_4(Vector3_t4282066566  value)
	{
		___p3_4 = value;
	}

	inline static int32_t get_offset_of_p4_5() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___p4_5)); }
	inline Vector3_t4282066566  get_p4_5() const { return ___p4_5; }
	inline Vector3_t4282066566 * get_address_of_p4_5() { return &___p4_5; }
	inline void set_p4_5(Vector3_t4282066566  value)
	{
		___p4_5 = value;
	}

	inline static int32_t get_offset_of_rotationP1_6() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___rotationP1_6)); }
	inline float get_rotationP1_6() const { return ___rotationP1_6; }
	inline float* get_address_of_rotationP1_6() { return &___rotationP1_6; }
	inline void set_rotationP1_6(float value)
	{
		___rotationP1_6 = value;
	}

	inline static int32_t get_offset_of_rotationP4_7() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___rotationP4_7)); }
	inline float get_rotationP4_7() const { return ___rotationP4_7; }
	inline float* get_address_of_rotationP4_7() { return &___rotationP4_7; }
	inline void set_rotationP4_7(float value)
	{
		___rotationP4_7 = value;
	}

	inline static int32_t get_offset_of_segments_8() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___segments_8)); }
	inline int32_t get_segments_8() const { return ___segments_8; }
	inline int32_t* get_address_of_segments_8() { return &___segments_8; }
	inline void set_segments_8(int32_t value)
	{
		___segments_8 = value;
	}

	inline static int32_t get_offset_of_prevSegment_9() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___prevSegment_9)); }
	inline Bezier3D_t2097769904 * get_prevSegment_9() const { return ___prevSegment_9; }
	inline Bezier3D_t2097769904 ** get_address_of_prevSegment_9() { return &___prevSegment_9; }
	inline void set_prevSegment_9(Bezier3D_t2097769904 * value)
	{
		___prevSegment_9 = value;
		Il2CppCodeGenWriteBarrier(&___prevSegment_9, value);
	}

	inline static int32_t get_offset_of_nextSegment_10() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___nextSegment_10)); }
	inline Bezier3D_t2097769904 * get_nextSegment_10() const { return ___nextSegment_10; }
	inline Bezier3D_t2097769904 ** get_address_of_nextSegment_10() { return &___nextSegment_10; }
	inline void set_nextSegment_10(Bezier3D_t2097769904 * value)
	{
		___nextSegment_10 = value;
		Il2CppCodeGenWriteBarrier(&___nextSegment_10, value);
	}

	inline static int32_t get_offset_of_m_path_11() { return static_cast<int32_t>(offsetof(Bezier3D_t2097769904, ___m_path_11)); }
	inline OrientedPointU5BU5D_t3230427557* get_m_path_11() const { return ___m_path_11; }
	inline OrientedPointU5BU5D_t3230427557** get_address_of_m_path_11() { return &___m_path_11; }
	inline void set_m_path_11(OrientedPointU5BU5D_t3230427557* value)
	{
		___m_path_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_path_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
