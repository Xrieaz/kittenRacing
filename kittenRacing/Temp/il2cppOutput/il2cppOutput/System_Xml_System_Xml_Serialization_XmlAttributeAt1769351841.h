﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlAttributeAttribute
struct  XmlAttributeAttribute_t1769351841  : public Attribute_t2523058482
{
public:
	// System.String System.Xml.Serialization.XmlAttributeAttribute::attributeName
	String_t* ___attributeName_0;

public:
	inline static int32_t get_offset_of_attributeName_0() { return static_cast<int32_t>(offsetof(XmlAttributeAttribute_t1769351841, ___attributeName_0)); }
	inline String_t* get_attributeName_0() const { return ___attributeName_0; }
	inline String_t** get_address_of_attributeName_0() { return &___attributeName_0; }
	inline void set_attributeName_0(String_t* value)
	{
		___attributeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___attributeName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
