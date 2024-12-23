#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Player_AK74

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_Player_AK74.AnimBP_Player_AK74_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_1;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_2;                                  // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_3;                                  // 0x000E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_4;                                  // 0x000F(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData, __ByteProperty_1) == 0x00000C, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData::__ByteProperty_1' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData, __ByteProperty_2) == 0x00000D, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData::__ByteProperty_2' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x00000E, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData, __ByteProperty_4) == 0x00000F, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedMutableData::__ByteProperty_4' has a wrong offset!");

// ScriptStruct AnimBP_Player_AK74.AnimBP_Player_AK74_C.AnimBlueprintGeneratedConstantData
// 0x01F7 (0x01F8 - 0x0001)
struct AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      __AnimSequenceBase_252;                            // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_253;                            // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_254;                            // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_255;                            // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_256;                            // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_257;                            // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<float>                                 __ArrayProperty_258;                               // 0x0038(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_259;                               // 0x0048(0x0010)(BlueprintVisible)
	TArray<float>                                 __ArrayProperty_260;                               // 0x0058(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<float>                                 __ArrayProperty_261;                               // 0x0068(0x0010)(BlueprintVisible, EditFixedSize)
	class UBlendProfile*                          __BlendProfile_262;                                // 0x0078(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_263;                                  // 0x0080(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_264;                                // 0x0088(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_265;                                // 0x0089(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_266;                               // 0x0090(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_267;                               // 0x00A0(0x0010)(BlueprintVisible)
	class FName                                   __NameProperty_268;                                // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_269;                            // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ESequenceEvalReinit                           __ByteProperty_270;                                // 0x00C0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_271;                                // 0x00C1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_272;                               // 0x00C4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_273;                            // 0x00C8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_274;                                // 0x00D0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_275;                                // 0x00D1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_276;                                // 0x00D2(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D3[0x1];                                       // 0x00D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_277;                                // 0x00D4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERefPoseType                                  __ByteProperty_278;                                // 0x00DC(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_279;                              // 0x00E0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_Tag                     AnimBlueprintExtension_Tag;                        // 0x0100(0x0060)()
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0160(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x01E0(0x0018)()
};
static_assert(alignof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData) == 0x0001F8, "Wrong size on AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_252) == 0x000008, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_252' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_253) == 0x000010, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_253' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_254) == 0x000018, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_254' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_255) == 0x000020, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_255' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_256) == 0x000028, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_256' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_257) == 0x000030, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_257' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ArrayProperty_258) == 0x000038, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ArrayProperty_258' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ArrayProperty_259) == 0x000048, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ArrayProperty_259' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ArrayProperty_260) == 0x000058, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ArrayProperty_260' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ArrayProperty_261) == 0x000068, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ArrayProperty_261' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __BlendProfile_262) == 0x000078, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__BlendProfile_262' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __CurveFloat_263) == 0x000080, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__CurveFloat_263' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __EnumProperty_264) == 0x000088, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__EnumProperty_264' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __EnumProperty_265) == 0x000089, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__EnumProperty_265' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ArrayProperty_266) == 0x000090, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ArrayProperty_266' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ArrayProperty_267) == 0x0000A0, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ArrayProperty_267' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __NameProperty_268) == 0x0000B0, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__NameProperty_268' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_269) == 0x0000B8, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_269' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ByteProperty_270) == 0x0000C0, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ByteProperty_270' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __BoolProperty_271) == 0x0000C1, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__BoolProperty_271' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __FloatProperty_272) == 0x0000C4, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__FloatProperty_272' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_273) == 0x0000C8, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_273' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __BoolProperty_274) == 0x0000D0, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__BoolProperty_274' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __EnumProperty_275) == 0x0000D1, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__EnumProperty_275' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ByteProperty_276) == 0x0000D2, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ByteProperty_276' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __NameProperty_277) == 0x0000D4, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__NameProperty_277' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __ByteProperty_278) == 0x0000DC, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__ByteProperty_278' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, __StructProperty_279) == 0x0000E0, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::__StructProperty_279' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Tag) == 0x000100, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Tag' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000160, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001E0, "Member 'AnimBP_Player_AK74::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

