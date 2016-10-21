#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.ProceduralMaterial
struct ProceduralMaterial_t3619291528;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t211873335;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TrackBuildRTexture_Types4087176694.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRTexture
struct  TrackBuildRTexture_t1839788396  : public MonoBehaviour_t667441552
{
public:
	// System.String TrackBuildRTexture::customName
	String_t* ___customName_2;
	// System.Boolean TrackBuildRTexture::tiled
	bool ___tiled_3;
	// System.Boolean TrackBuildRTexture::patterned
	bool ___patterned_4;
	// System.Boolean TrackBuildRTexture::flipped
	bool ___flipped_5;
	// TrackBuildRTexture/Types TrackBuildRTexture::type
	int32_t ___type_6;
	// UnityEngine.Vector2 TrackBuildRTexture::_tileUnitUV
	Vector2_t4282066565  ____tileUnitUV_7;
	// UnityEngine.Vector2 TrackBuildRTexture::_textureUnitSize
	Vector2_t4282066565  ____textureUnitSize_8;
	// System.Int32 TrackBuildRTexture::tiledX
	int32_t ___tiledX_9;
	// System.Int32 TrackBuildRTexture::tiledY
	int32_t ___tiledY_10;
	// UnityEngine.Vector2 TrackBuildRTexture::maxUVTile
	Vector2_t4282066565  ___maxUVTile_11;
	// UnityEngine.Vector2 TrackBuildRTexture::minWorldUnits
	Vector2_t4282066565  ___minWorldUnits_12;
	// UnityEngine.Vector2 TrackBuildRTexture::maxWorldUnits
	Vector2_t4282066565  ___maxWorldUnits_13;
	// UnityEngine.Material TrackBuildRTexture::material
	Material_t3870600107 * ___material_14;
	// UnityEngine.ProceduralMaterial TrackBuildRTexture::_proceduralMaterial
	ProceduralMaterial_t3619291528 * ____proceduralMaterial_15;
	// UnityEngine.Material TrackBuildRTexture::_userMaterial
	Material_t3870600107 * ____userMaterial_16;
	// UnityEngine.PhysicMaterial TrackBuildRTexture::_physicMaterial
	PhysicMaterial_t211873335 * ____physicMaterial_17;
	// System.Boolean TrackBuildRTexture::isDirty
	bool ___isDirty_18;

public:
	inline static int32_t get_offset_of_customName_2() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___customName_2)); }
	inline String_t* get_customName_2() const { return ___customName_2; }
	inline String_t** get_address_of_customName_2() { return &___customName_2; }
	inline void set_customName_2(String_t* value)
	{
		___customName_2 = value;
		Il2CppCodeGenWriteBarrier(&___customName_2, value);
	}

	inline static int32_t get_offset_of_tiled_3() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___tiled_3)); }
	inline bool get_tiled_3() const { return ___tiled_3; }
	inline bool* get_address_of_tiled_3() { return &___tiled_3; }
	inline void set_tiled_3(bool value)
	{
		___tiled_3 = value;
	}

	inline static int32_t get_offset_of_patterned_4() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___patterned_4)); }
	inline bool get_patterned_4() const { return ___patterned_4; }
	inline bool* get_address_of_patterned_4() { return &___patterned_4; }
	inline void set_patterned_4(bool value)
	{
		___patterned_4 = value;
	}

	inline static int32_t get_offset_of_flipped_5() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___flipped_5)); }
	inline bool get_flipped_5() const { return ___flipped_5; }
	inline bool* get_address_of_flipped_5() { return &___flipped_5; }
	inline void set_flipped_5(bool value)
	{
		___flipped_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of__tileUnitUV_7() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ____tileUnitUV_7)); }
	inline Vector2_t4282066565  get__tileUnitUV_7() const { return ____tileUnitUV_7; }
	inline Vector2_t4282066565 * get_address_of__tileUnitUV_7() { return &____tileUnitUV_7; }
	inline void set__tileUnitUV_7(Vector2_t4282066565  value)
	{
		____tileUnitUV_7 = value;
	}

	inline static int32_t get_offset_of__textureUnitSize_8() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ____textureUnitSize_8)); }
	inline Vector2_t4282066565  get__textureUnitSize_8() const { return ____textureUnitSize_8; }
	inline Vector2_t4282066565 * get_address_of__textureUnitSize_8() { return &____textureUnitSize_8; }
	inline void set__textureUnitSize_8(Vector2_t4282066565  value)
	{
		____textureUnitSize_8 = value;
	}

	inline static int32_t get_offset_of_tiledX_9() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___tiledX_9)); }
	inline int32_t get_tiledX_9() const { return ___tiledX_9; }
	inline int32_t* get_address_of_tiledX_9() { return &___tiledX_9; }
	inline void set_tiledX_9(int32_t value)
	{
		___tiledX_9 = value;
	}

	inline static int32_t get_offset_of_tiledY_10() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___tiledY_10)); }
	inline int32_t get_tiledY_10() const { return ___tiledY_10; }
	inline int32_t* get_address_of_tiledY_10() { return &___tiledY_10; }
	inline void set_tiledY_10(int32_t value)
	{
		___tiledY_10 = value;
	}

	inline static int32_t get_offset_of_maxUVTile_11() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___maxUVTile_11)); }
	inline Vector2_t4282066565  get_maxUVTile_11() const { return ___maxUVTile_11; }
	inline Vector2_t4282066565 * get_address_of_maxUVTile_11() { return &___maxUVTile_11; }
	inline void set_maxUVTile_11(Vector2_t4282066565  value)
	{
		___maxUVTile_11 = value;
	}

	inline static int32_t get_offset_of_minWorldUnits_12() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___minWorldUnits_12)); }
	inline Vector2_t4282066565  get_minWorldUnits_12() const { return ___minWorldUnits_12; }
	inline Vector2_t4282066565 * get_address_of_minWorldUnits_12() { return &___minWorldUnits_12; }
	inline void set_minWorldUnits_12(Vector2_t4282066565  value)
	{
		___minWorldUnits_12 = value;
	}

	inline static int32_t get_offset_of_maxWorldUnits_13() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___maxWorldUnits_13)); }
	inline Vector2_t4282066565  get_maxWorldUnits_13() const { return ___maxWorldUnits_13; }
	inline Vector2_t4282066565 * get_address_of_maxWorldUnits_13() { return &___maxWorldUnits_13; }
	inline void set_maxWorldUnits_13(Vector2_t4282066565  value)
	{
		___maxWorldUnits_13 = value;
	}

	inline static int32_t get_offset_of_material_14() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___material_14)); }
	inline Material_t3870600107 * get_material_14() const { return ___material_14; }
	inline Material_t3870600107 ** get_address_of_material_14() { return &___material_14; }
	inline void set_material_14(Material_t3870600107 * value)
	{
		___material_14 = value;
		Il2CppCodeGenWriteBarrier(&___material_14, value);
	}

	inline static int32_t get_offset_of__proceduralMaterial_15() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ____proceduralMaterial_15)); }
	inline ProceduralMaterial_t3619291528 * get__proceduralMaterial_15() const { return ____proceduralMaterial_15; }
	inline ProceduralMaterial_t3619291528 ** get_address_of__proceduralMaterial_15() { return &____proceduralMaterial_15; }
	inline void set__proceduralMaterial_15(ProceduralMaterial_t3619291528 * value)
	{
		____proceduralMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&____proceduralMaterial_15, value);
	}

	inline static int32_t get_offset_of__userMaterial_16() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ____userMaterial_16)); }
	inline Material_t3870600107 * get__userMaterial_16() const { return ____userMaterial_16; }
	inline Material_t3870600107 ** get_address_of__userMaterial_16() { return &____userMaterial_16; }
	inline void set__userMaterial_16(Material_t3870600107 * value)
	{
		____userMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&____userMaterial_16, value);
	}

	inline static int32_t get_offset_of__physicMaterial_17() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ____physicMaterial_17)); }
	inline PhysicMaterial_t211873335 * get__physicMaterial_17() const { return ____physicMaterial_17; }
	inline PhysicMaterial_t211873335 ** get_address_of__physicMaterial_17() { return &____physicMaterial_17; }
	inline void set__physicMaterial_17(PhysicMaterial_t211873335 * value)
	{
		____physicMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&____physicMaterial_17, value);
	}

	inline static int32_t get_offset_of_isDirty_18() { return static_cast<int32_t>(offsetof(TrackBuildRTexture_t1839788396, ___isDirty_18)); }
	inline bool get_isDirty_18() const { return ___isDirty_18; }
	inline bool* get_address_of_isDirty_18() { return &___isDirty_18; }
	inline void set_isDirty_18(bool value)
	{
		___isDirty_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
