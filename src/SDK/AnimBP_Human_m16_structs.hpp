#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Human_m16

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_Human_m16.AnimBP_Human_m16_C.AnimBlueprintGeneratedConstantData
// 0x0127 (0x0128 - 0x0001)
struct AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_87;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      __AnimSequenceBase_88;                             // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_89;                             // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_90;                             // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ESequenceEvalReinit                           __ByteProperty_91;                                 // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_92;                                 // 0x0029(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_93;                                // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_94;                             // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_95;                                 // 0x0038(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_96;                                 // 0x0039(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_97;                                 // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_98;                               // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                          __BlendProfile_99;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_100;                                  // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_101;                                // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_102;                                // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_103;                                // 0x007A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_104;                               // 0x0080(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0090(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0110(0x0018)()
};
static_assert(alignof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData) == 0x000128, "Wrong size on AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __NameProperty_87) == 0x000004, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__NameProperty_87' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_88) == 0x000010, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_88' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_89) == 0x000018, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_89' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_90) == 0x000020, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_90' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __ByteProperty_91) == 0x000028, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__ByteProperty_91' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __BoolProperty_92) == 0x000029, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__BoolProperty_92' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __FloatProperty_93) == 0x00002C, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__FloatProperty_93' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_94) == 0x000030, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_94' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __EnumProperty_95) == 0x000038, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__EnumProperty_95' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __ByteProperty_96) == 0x000039, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__ByteProperty_96' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __NameProperty_97) == 0x00003C, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__NameProperty_97' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __StructProperty_98) == 0x000048, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__StructProperty_98' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __BlendProfile_99) == 0x000068, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__BlendProfile_99' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __CurveFloat_100) == 0x000070, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__CurveFloat_100' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __BoolProperty_101) == 0x000078, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__BoolProperty_101' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __EnumProperty_102) == 0x000079, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__EnumProperty_102' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __EnumProperty_103) == 0x00007A, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__EnumProperty_103' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, __ArrayProperty_104) == 0x000080, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::__ArrayProperty_104' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000090, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000110, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AnimBP_Human_m16.AnimBP_Human_m16_C.AnimBlueprintGeneratedMutableData
// 0x0003 (0x0004 - 0x0001)
struct AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong size on AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000003, "Member 'AnimBP_Human_m16::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");

}
