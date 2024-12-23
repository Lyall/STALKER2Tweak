#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Hint_Console

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_Hint_Console.W_Hint_Console_C.ExecuteUbergraph_W_Hint_Console
// 0x0030 (0x0030 - 0x0000)
struct W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsSingleClick;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console) == 0x000008, "Wrong alignment on W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console");
static_assert(sizeof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console) == 0x000030, "Wrong size on W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console");
static_assert(offsetof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console, EntryPoint) == 0x000000, "Member 'W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console, K2Node_Event_IsSingleClick) == 0x000004, "Member 'W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console::K2Node_Event_IsSingleClick' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console, Temp_bool_Variable) == 0x000018, "Member 'W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console, K2Node_Select_Default) == 0x000020, "Member 'W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'W_Hint_Console_C_ExecuteUbergraph_W_Hint_Console::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function W_Hint_Console.W_Hint_Console_C.GetAllBackgroundsImage
// 0x0020 (0x0020 - 0x0000)
struct W_Hint_Console_C_GetAllBackgroundsImage final
{
public:
	TArray<class UImageWidget*>                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UImageWidget*>                   K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(W_Hint_Console_C_GetAllBackgroundsImage) == 0x000008, "Wrong alignment on W_Hint_Console_C_GetAllBackgroundsImage");
static_assert(sizeof(W_Hint_Console_C_GetAllBackgroundsImage) == 0x000020, "Wrong size on W_Hint_Console_C_GetAllBackgroundsImage");
static_assert(offsetof(W_Hint_Console_C_GetAllBackgroundsImage, ReturnValue) == 0x000000, "Member 'W_Hint_Console_C_GetAllBackgroundsImage::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_GetAllBackgroundsImage, K2Node_MakeArray_Array) == 0x000010, "Member 'W_Hint_Console_C_GetAllBackgroundsImage::K2Node_MakeArray_Array' has a wrong offset!");

// Function W_Hint_Console.W_Hint_Console_C.GetAllFirstPlanImage
// 0x0020 (0x0020 - 0x0000)
struct W_Hint_Console_C_GetAllFirstPlanImage final
{
public:
	TArray<class UImageWidget*>                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UImageWidget*>                   K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(W_Hint_Console_C_GetAllFirstPlanImage) == 0x000008, "Wrong alignment on W_Hint_Console_C_GetAllFirstPlanImage");
static_assert(sizeof(W_Hint_Console_C_GetAllFirstPlanImage) == 0x000020, "Wrong size on W_Hint_Console_C_GetAllFirstPlanImage");
static_assert(offsetof(W_Hint_Console_C_GetAllFirstPlanImage, ReturnValue) == 0x000000, "Member 'W_Hint_Console_C_GetAllFirstPlanImage::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Hint_Console_C_GetAllFirstPlanImage, K2Node_MakeArray_Array) == 0x000010, "Member 'W_Hint_Console_C_GetAllFirstPlanImage::K2Node_MakeArray_Array' has a wrong offset!");

// Function W_Hint_Console.W_Hint_Console_C.PlayHintAnimation_1
// 0x0001 (0x0001 - 0x0000)
struct W_Hint_Console_C_PlayHintAnimation_1 final
{
public:
	bool                                          IsSingleClick;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Hint_Console_C_PlayHintAnimation_1) == 0x000001, "Wrong alignment on W_Hint_Console_C_PlayHintAnimation_1");
static_assert(sizeof(W_Hint_Console_C_PlayHintAnimation_1) == 0x000001, "Wrong size on W_Hint_Console_C_PlayHintAnimation_1");
static_assert(offsetof(W_Hint_Console_C_PlayHintAnimation_1, IsSingleClick) == 0x000000, "Member 'W_Hint_Console_C_PlayHintAnimation_1::IsSingleClick' has a wrong offset!");

}

