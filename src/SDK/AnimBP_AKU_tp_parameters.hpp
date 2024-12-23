#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_AKU_tp

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_AKU_tp.AnimBP_AKU_tp_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_AKU_tp_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_AKU_tp_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_AKU_tp_C_AnimGraph");
static_assert(sizeof(AnimBP_AKU_tp_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_AKU_tp_C_AnimGraph");
static_assert(offsetof(AnimBP_AKU_tp_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AnimBP_AKU_tp_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AnimBP_AKU_tp.AnimBP_AKU_tp_C.ExecuteUbergraph_AnimBP_AKU_tp
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp) == 0x000004, "Wrong alignment on AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp");
static_assert(sizeof(AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp) == 0x000004, "Wrong size on AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp");
static_assert(offsetof(AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp, EntryPoint) == 0x000000, "Member 'AnimBP_AKU_tp_C_ExecuteUbergraph_AnimBP_AKU_tp::EntryPoint' has a wrong offset!");

}

