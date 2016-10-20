#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TrackBuildRTrack
struct TrackBuildRTrack_t4140821980;
// TrackBuildRGenerator
struct TrackBuildRGenerator_t4109362916;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TrackBuildR_modes2747951568.h"
#include "AssemblyU2DCSharp_TrackBuildR_pointModes2160026848.h"
#include "AssemblyU2DCSharp_TrackBuildR_boundaryModes181435334.h"
#include "AssemblyU2DCSharp_TrackBuildR_textureModes1628507189.h"
#include "AssemblyU2DCSharp_TrackBuildR_stuntModes562036150.h"
#include "AssemblyU2DCSharp_TrackBuildR_terrainModes2491125339.h"
#include "AssemblyU2DCSharp_TrackBuildR_fileTypes2859507453.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildR
struct  TrackBuildR_t2436769967  : public MonoBehaviour_t667441552
{
public:
	// System.Single TrackBuildR::version
	float ___version_3;
	// TrackBuildRTrack TrackBuildR::track
	TrackBuildRTrack_t4140821980 * ___track_4;
	// TrackBuildRGenerator TrackBuildR::generator
	TrackBuildRGenerator_t4109362916 * ___generator_5;
	// UnityEngine.GameObject TrackBuildR::trackEditorPreview
	GameObject_t3674682005 * ___trackEditorPreview_6;
	// TrackBuildR/modes TrackBuildR::mode
	int32_t ___mode_7;
	// TrackBuildR/pointModes TrackBuildR::pointMode
	int32_t ___pointMode_8;
	// TrackBuildR/boundaryModes TrackBuildR::boundaryMode
	int32_t ___boundaryMode_9;
	// TrackBuildR/textureModes TrackBuildR::textureMode
	int32_t ___textureMode_10;
	// TrackBuildR/stuntModes TrackBuildR::stuntMode
	int32_t ___stuntMode_11;
	// TrackBuildR/terrainModes TrackBuildR::terrainMode
	int32_t ___terrainMode_12;
	// TrackBuildR/fileTypes TrackBuildR::fileType
	int32_t ___fileType_13;
	// System.String TrackBuildR::exportFilename
	String_t* ___exportFilename_14;
	// System.Boolean TrackBuildR::copyTexturesIntoExportFolder
	bool ___copyTexturesIntoExportFolder_15;
	// System.Boolean TrackBuildR::exportCollider
	bool ___exportCollider_16;
	// System.Boolean TrackBuildR::createPrefabOnExport
	bool ___createPrefabOnExport_17;
	// System.Single TrackBuildR::previewPercentage
	float ___previewPercentage_18;
	// System.Boolean TrackBuildR::previewForward
	bool ___previewForward_19;
	// System.Single TrackBuildR::previewStartPoint
	float ___previewStartPoint_20;

public:
	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___version_3)); }
	inline float get_version_3() const { return ___version_3; }
	inline float* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(float value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_track_4() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___track_4)); }
	inline TrackBuildRTrack_t4140821980 * get_track_4() const { return ___track_4; }
	inline TrackBuildRTrack_t4140821980 ** get_address_of_track_4() { return &___track_4; }
	inline void set_track_4(TrackBuildRTrack_t4140821980 * value)
	{
		___track_4 = value;
		Il2CppCodeGenWriteBarrier(&___track_4, value);
	}

	inline static int32_t get_offset_of_generator_5() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___generator_5)); }
	inline TrackBuildRGenerator_t4109362916 * get_generator_5() const { return ___generator_5; }
	inline TrackBuildRGenerator_t4109362916 ** get_address_of_generator_5() { return &___generator_5; }
	inline void set_generator_5(TrackBuildRGenerator_t4109362916 * value)
	{
		___generator_5 = value;
		Il2CppCodeGenWriteBarrier(&___generator_5, value);
	}

	inline static int32_t get_offset_of_trackEditorPreview_6() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___trackEditorPreview_6)); }
	inline GameObject_t3674682005 * get_trackEditorPreview_6() const { return ___trackEditorPreview_6; }
	inline GameObject_t3674682005 ** get_address_of_trackEditorPreview_6() { return &___trackEditorPreview_6; }
	inline void set_trackEditorPreview_6(GameObject_t3674682005 * value)
	{
		___trackEditorPreview_6 = value;
		Il2CppCodeGenWriteBarrier(&___trackEditorPreview_6, value);
	}

	inline static int32_t get_offset_of_mode_7() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___mode_7)); }
	inline int32_t get_mode_7() const { return ___mode_7; }
	inline int32_t* get_address_of_mode_7() { return &___mode_7; }
	inline void set_mode_7(int32_t value)
	{
		___mode_7 = value;
	}

	inline static int32_t get_offset_of_pointMode_8() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___pointMode_8)); }
	inline int32_t get_pointMode_8() const { return ___pointMode_8; }
	inline int32_t* get_address_of_pointMode_8() { return &___pointMode_8; }
	inline void set_pointMode_8(int32_t value)
	{
		___pointMode_8 = value;
	}

	inline static int32_t get_offset_of_boundaryMode_9() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___boundaryMode_9)); }
	inline int32_t get_boundaryMode_9() const { return ___boundaryMode_9; }
	inline int32_t* get_address_of_boundaryMode_9() { return &___boundaryMode_9; }
	inline void set_boundaryMode_9(int32_t value)
	{
		___boundaryMode_9 = value;
	}

	inline static int32_t get_offset_of_textureMode_10() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___textureMode_10)); }
	inline int32_t get_textureMode_10() const { return ___textureMode_10; }
	inline int32_t* get_address_of_textureMode_10() { return &___textureMode_10; }
	inline void set_textureMode_10(int32_t value)
	{
		___textureMode_10 = value;
	}

	inline static int32_t get_offset_of_stuntMode_11() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___stuntMode_11)); }
	inline int32_t get_stuntMode_11() const { return ___stuntMode_11; }
	inline int32_t* get_address_of_stuntMode_11() { return &___stuntMode_11; }
	inline void set_stuntMode_11(int32_t value)
	{
		___stuntMode_11 = value;
	}

	inline static int32_t get_offset_of_terrainMode_12() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___terrainMode_12)); }
	inline int32_t get_terrainMode_12() const { return ___terrainMode_12; }
	inline int32_t* get_address_of_terrainMode_12() { return &___terrainMode_12; }
	inline void set_terrainMode_12(int32_t value)
	{
		___terrainMode_12 = value;
	}

	inline static int32_t get_offset_of_fileType_13() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___fileType_13)); }
	inline int32_t get_fileType_13() const { return ___fileType_13; }
	inline int32_t* get_address_of_fileType_13() { return &___fileType_13; }
	inline void set_fileType_13(int32_t value)
	{
		___fileType_13 = value;
	}

	inline static int32_t get_offset_of_exportFilename_14() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___exportFilename_14)); }
	inline String_t* get_exportFilename_14() const { return ___exportFilename_14; }
	inline String_t** get_address_of_exportFilename_14() { return &___exportFilename_14; }
	inline void set_exportFilename_14(String_t* value)
	{
		___exportFilename_14 = value;
		Il2CppCodeGenWriteBarrier(&___exportFilename_14, value);
	}

	inline static int32_t get_offset_of_copyTexturesIntoExportFolder_15() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___copyTexturesIntoExportFolder_15)); }
	inline bool get_copyTexturesIntoExportFolder_15() const { return ___copyTexturesIntoExportFolder_15; }
	inline bool* get_address_of_copyTexturesIntoExportFolder_15() { return &___copyTexturesIntoExportFolder_15; }
	inline void set_copyTexturesIntoExportFolder_15(bool value)
	{
		___copyTexturesIntoExportFolder_15 = value;
	}

	inline static int32_t get_offset_of_exportCollider_16() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___exportCollider_16)); }
	inline bool get_exportCollider_16() const { return ___exportCollider_16; }
	inline bool* get_address_of_exportCollider_16() { return &___exportCollider_16; }
	inline void set_exportCollider_16(bool value)
	{
		___exportCollider_16 = value;
	}

	inline static int32_t get_offset_of_createPrefabOnExport_17() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___createPrefabOnExport_17)); }
	inline bool get_createPrefabOnExport_17() const { return ___createPrefabOnExport_17; }
	inline bool* get_address_of_createPrefabOnExport_17() { return &___createPrefabOnExport_17; }
	inline void set_createPrefabOnExport_17(bool value)
	{
		___createPrefabOnExport_17 = value;
	}

	inline static int32_t get_offset_of_previewPercentage_18() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___previewPercentage_18)); }
	inline float get_previewPercentage_18() const { return ___previewPercentage_18; }
	inline float* get_address_of_previewPercentage_18() { return &___previewPercentage_18; }
	inline void set_previewPercentage_18(float value)
	{
		___previewPercentage_18 = value;
	}

	inline static int32_t get_offset_of_previewForward_19() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___previewForward_19)); }
	inline bool get_previewForward_19() const { return ___previewForward_19; }
	inline bool* get_address_of_previewForward_19() { return &___previewForward_19; }
	inline void set_previewForward_19(bool value)
	{
		___previewForward_19 = value;
	}

	inline static int32_t get_offset_of_previewStartPoint_20() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967, ___previewStartPoint_20)); }
	inline float get_previewStartPoint_20() const { return ___previewStartPoint_20; }
	inline float* get_address_of_previewStartPoint_20() { return &___previewStartPoint_20; }
	inline void set_previewStartPoint_20(float value)
	{
		___previewStartPoint_20 = value;
	}
};

struct TrackBuildR_t2436769967_StaticFields
{
public:
	// System.Single TrackBuildR::VERSION_NUMBER
	float ___VERSION_NUMBER_2;

public:
	inline static int32_t get_offset_of_VERSION_NUMBER_2() { return static_cast<int32_t>(offsetof(TrackBuildR_t2436769967_StaticFields, ___VERSION_NUMBER_2)); }
	inline float get_VERSION_NUMBER_2() const { return ___VERSION_NUMBER_2; }
	inline float* get_address_of_VERSION_NUMBER_2() { return &___VERSION_NUMBER_2; }
	inline void set_VERSION_NUMBER_2(float value)
	{
		___VERSION_NUMBER_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
