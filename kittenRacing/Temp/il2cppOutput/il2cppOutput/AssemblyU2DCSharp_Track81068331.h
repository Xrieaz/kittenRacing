#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<Bezier3D>
struct List_1_t3465955456;
// Bezier3D
struct Bezier3D_t2097769904;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Track
struct  Track_t81068331  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Track::segmentPrefab
	GameObject_t3674682005 * ___segmentPrefab_2;
	// System.Collections.Generic.List`1<Bezier3D> Track::segments
	List_1_t3465955456 * ___segments_3;
	// Bezier3D Track::lastSegment
	Bezier3D_t2097769904 * ___lastSegment_4;

public:
	inline static int32_t get_offset_of_segmentPrefab_2() { return static_cast<int32_t>(offsetof(Track_t81068331, ___segmentPrefab_2)); }
	inline GameObject_t3674682005 * get_segmentPrefab_2() const { return ___segmentPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_segmentPrefab_2() { return &___segmentPrefab_2; }
	inline void set_segmentPrefab_2(GameObject_t3674682005 * value)
	{
		___segmentPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___segmentPrefab_2, value);
	}

	inline static int32_t get_offset_of_segments_3() { return static_cast<int32_t>(offsetof(Track_t81068331, ___segments_3)); }
	inline List_1_t3465955456 * get_segments_3() const { return ___segments_3; }
	inline List_1_t3465955456 ** get_address_of_segments_3() { return &___segments_3; }
	inline void set_segments_3(List_1_t3465955456 * value)
	{
		___segments_3 = value;
		Il2CppCodeGenWriteBarrier(&___segments_3, value);
	}

	inline static int32_t get_offset_of_lastSegment_4() { return static_cast<int32_t>(offsetof(Track_t81068331, ___lastSegment_4)); }
	inline Bezier3D_t2097769904 * get_lastSegment_4() const { return ___lastSegment_4; }
	inline Bezier3D_t2097769904 ** get_address_of_lastSegment_4() { return &___lastSegment_4; }
	inline void set_lastSegment_4(Bezier3D_t2097769904 * value)
	{
		___lastSegment_4 = value;
		Il2CppCodeGenWriteBarrier(&___lastSegment_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
