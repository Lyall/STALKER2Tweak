#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldMapScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_WorldMapScene.BP_WorldMapScene_C.ExecuteUbergraph_BP_WorldMapScene
// 0x0188 (0x0188 - 0x0000)
struct BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InScale;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsEnabled;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_InUV;                                 // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InBrightness;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Event_InOffset;                             // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0090(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_OrthoWidth_ImplicitCast;        // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene) == 0x000008, "Wrong alignment on BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene");
static_assert(sizeof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene) == 0x000188, "Wrong size on BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, EntryPoint) == 0x000000, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, K2Node_Event_InScale) == 0x000004, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::K2Node_Event_InScale' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, K2Node_Event_bIsEnabled) == 0x000008, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::K2Node_Event_bIsEnabled' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, K2Node_Event_InUV) == 0x000010, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::K2Node_Event_InUV' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, K2Node_Event_InBrightness) == 0x000028, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::K2Node_Event_InBrightness' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, K2Node_Event_InOffset) == 0x000030, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::K2Node_Event_InOffset' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_BreakVector2D_X) == 0x000040, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000050, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000070, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_MakeVector_ReturnValue) == 0x000078, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000090, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000178, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene, K2Node_VariableSet_OrthoWidth_ImplicitCast) == 0x000180, "Member 'BP_WorldMapScene_C_ExecuteUbergraph_BP_WorldMapScene::K2Node_VariableSet_OrthoWidth_ImplicitCast' has a wrong offset!");

// Function BP_WorldMapScene.BP_WorldMapScene_C.SetCaptureEveryFrame
// 0x0001 (0x0001 - 0x0000)
struct BP_WorldMapScene_C_SetCaptureEveryFrame final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldMapScene_C_SetCaptureEveryFrame) == 0x000001, "Wrong alignment on BP_WorldMapScene_C_SetCaptureEveryFrame");
static_assert(sizeof(BP_WorldMapScene_C_SetCaptureEveryFrame) == 0x000001, "Wrong size on BP_WorldMapScene_C_SetCaptureEveryFrame");
static_assert(offsetof(BP_WorldMapScene_C_SetCaptureEveryFrame, bIsEnabled) == 0x000000, "Member 'BP_WorldMapScene_C_SetCaptureEveryFrame::bIsEnabled' has a wrong offset!");

// Function BP_WorldMapScene.BP_WorldMapScene_C.SetMouseUV
// 0x0018 (0x0018 - 0x0000)
struct BP_WorldMapScene_C_SetMouseUV final
{
public:
	struct FVector                                InUV;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldMapScene_C_SetMouseUV) == 0x000008, "Wrong alignment on BP_WorldMapScene_C_SetMouseUV");
static_assert(sizeof(BP_WorldMapScene_C_SetMouseUV) == 0x000018, "Wrong size on BP_WorldMapScene_C_SetMouseUV");
static_assert(offsetof(BP_WorldMapScene_C_SetMouseUV, InUV) == 0x000000, "Member 'BP_WorldMapScene_C_SetMouseUV::InUV' has a wrong offset!");

// Function BP_WorldMapScene.BP_WorldMapScene_C.SetNotSelectedAreaBrightness
// 0x0004 (0x0004 - 0x0000)
struct BP_WorldMapScene_C_SetNotSelectedAreaBrightness final
{
public:
	float                                         InBrightness;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldMapScene_C_SetNotSelectedAreaBrightness) == 0x000004, "Wrong alignment on BP_WorldMapScene_C_SetNotSelectedAreaBrightness");
static_assert(sizeof(BP_WorldMapScene_C_SetNotSelectedAreaBrightness) == 0x000004, "Wrong size on BP_WorldMapScene_C_SetNotSelectedAreaBrightness");
static_assert(offsetof(BP_WorldMapScene_C_SetNotSelectedAreaBrightness, InBrightness) == 0x000000, "Member 'BP_WorldMapScene_C_SetNotSelectedAreaBrightness::InBrightness' has a wrong offset!");

// Function BP_WorldMapScene.BP_WorldMapScene_C.SetOffset
// 0x0010 (0x0010 - 0x0000)
struct BP_WorldMapScene_C_SetOffset final
{
public:
	struct FVector2D                              InOffset;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldMapScene_C_SetOffset) == 0x000008, "Wrong alignment on BP_WorldMapScene_C_SetOffset");
static_assert(sizeof(BP_WorldMapScene_C_SetOffset) == 0x000010, "Wrong size on BP_WorldMapScene_C_SetOffset");
static_assert(offsetof(BP_WorldMapScene_C_SetOffset, InOffset) == 0x000000, "Member 'BP_WorldMapScene_C_SetOffset::InOffset' has a wrong offset!");

// Function BP_WorldMapScene.BP_WorldMapScene_C.SetScale
// 0x0004 (0x0004 - 0x0000)
struct BP_WorldMapScene_C_SetScale final
{
public:
	float                                         InScale;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldMapScene_C_SetScale) == 0x000004, "Wrong alignment on BP_WorldMapScene_C_SetScale");
static_assert(sizeof(BP_WorldMapScene_C_SetScale) == 0x000004, "Wrong size on BP_WorldMapScene_C_SetScale");
static_assert(offsetof(BP_WorldMapScene_C_SetScale, InScale) == 0x000000, "Member 'BP_WorldMapScene_C_SetScale::InScale' has a wrong offset!");

}
