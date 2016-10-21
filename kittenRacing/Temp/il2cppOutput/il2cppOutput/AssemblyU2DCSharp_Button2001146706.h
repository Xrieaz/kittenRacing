#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Button_Side4158116372.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Button
struct  Button_t2001146706  : public MonoBehaviour_t667441552
{
public:
	// Button/Side Button::sideOfScreen
	int32_t ___sideOfScreen_2;
	// UnityEngine.UI.Image Button::m_Image
	Image_t538875265 * ___m_Image_3;

public:
	inline static int32_t get_offset_of_sideOfScreen_2() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___sideOfScreen_2)); }
	inline int32_t get_sideOfScreen_2() const { return ___sideOfScreen_2; }
	inline int32_t* get_address_of_sideOfScreen_2() { return &___sideOfScreen_2; }
	inline void set_sideOfScreen_2(int32_t value)
	{
		___sideOfScreen_2 = value;
	}

	inline static int32_t get_offset_of_m_Image_3() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___m_Image_3)); }
	inline Image_t538875265 * get_m_Image_3() const { return ___m_Image_3; }
	inline Image_t538875265 ** get_address_of_m_Image_3() { return &___m_Image_3; }
	inline void set_m_Image_3(Image_t538875265 * value)
	{
		___m_Image_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
