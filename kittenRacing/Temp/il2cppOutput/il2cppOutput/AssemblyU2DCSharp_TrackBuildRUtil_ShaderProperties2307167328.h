#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRUtil.ShaderProperties
struct  ShaderProperties_t2307167328  : public Il2CppObject
{
public:

public:
};

struct ShaderProperties_t2307167328_StaticFields
{
public:
	// System.String[] TrackBuildRUtil.ShaderProperties::NAMES
	StringU5BU5D_t4054002952* ___NAMES_0;
	// System.String[] TrackBuildRUtil.ShaderProperties::PROPERTIES
	StringU5BU5D_t4054002952* ___PROPERTIES_1;

public:
	inline static int32_t get_offset_of_NAMES_0() { return static_cast<int32_t>(offsetof(ShaderProperties_t2307167328_StaticFields, ___NAMES_0)); }
	inline StringU5BU5D_t4054002952* get_NAMES_0() const { return ___NAMES_0; }
	inline StringU5BU5D_t4054002952** get_address_of_NAMES_0() { return &___NAMES_0; }
	inline void set_NAMES_0(StringU5BU5D_t4054002952* value)
	{
		___NAMES_0 = value;
		Il2CppCodeGenWriteBarrier(&___NAMES_0, value);
	}

	inline static int32_t get_offset_of_PROPERTIES_1() { return static_cast<int32_t>(offsetof(ShaderProperties_t2307167328_StaticFields, ___PROPERTIES_1)); }
	inline StringU5BU5D_t4054002952* get_PROPERTIES_1() const { return ___PROPERTIES_1; }
	inline StringU5BU5D_t4054002952** get_address_of_PROPERTIES_1() { return &___PROPERTIES_1; }
	inline void set_PROPERTIES_1(StringU5BU5D_t4054002952* value)
	{
		___PROPERTIES_1 = value;
		Il2CppCodeGenWriteBarrier(&___PROPERTIES_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
