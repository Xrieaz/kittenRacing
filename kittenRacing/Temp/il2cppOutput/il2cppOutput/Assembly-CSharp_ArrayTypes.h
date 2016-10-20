#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// TrackBuildRPoint
struct TrackBuildRPoint_t4137046561;
// TrackBuildRTexture
struct TrackBuildRTexture_t1839788396;
// TrackBuildRUtil.DynamicMeshGenericMultiMaterial
struct DynamicMeshGenericMultiMaterial_t290085731;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_TrackBuildRPoint4137046561.h"
#include "AssemblyU2DCSharp_TrackBuildRTexture1839788396.h"
#include "AssemblyU2DCSharp_TrackBuildRUtil_DynamicMeshGeneri290085731.h"

#pragma once
// TrackBuildRPoint[]
struct TrackBuildRPointU5BU5D_t3804963900  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TrackBuildRPoint_t4137046561 * m_Items[1];

public:
	inline TrackBuildRPoint_t4137046561 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TrackBuildRPoint_t4137046561 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TrackBuildRPoint_t4137046561 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// TrackBuildRTexture[]
struct TrackBuildRTextureU5BU5D_t1271193445  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TrackBuildRTexture_t1839788396 * m_Items[1];

public:
	inline TrackBuildRTexture_t1839788396 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TrackBuildRTexture_t1839788396 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TrackBuildRTexture_t1839788396 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// TrackBuildRUtil.DynamicMeshGenericMultiMaterial[]
struct DynamicMeshGenericMultiMaterialU5BU5D_t3944666034  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DynamicMeshGenericMultiMaterial_t290085731 * m_Items[1];

public:
	inline DynamicMeshGenericMultiMaterial_t290085731 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DynamicMeshGenericMultiMaterial_t290085731 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DynamicMeshGenericMultiMaterial_t290085731 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
