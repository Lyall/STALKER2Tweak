#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_viper_tp

#include "Basic.hpp"

#include "AnimBP_viper_tp_classes.hpp"
#include "AnimBP_viper_tp_parameters.hpp"


namespace SDK
{

// Function AnimBP_viper_tp.AnimBP_viper_tp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_viper_tp_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_viper_tp_C", "AnimGraph");

	Params::AnimBP_viper_tp_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_viper_tp.AnimBP_viper_tp_C.ExecuteUbergraph_AnimBP_viper_tp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_viper_tp_C::ExecuteUbergraph_AnimBP_viper_tp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_viper_tp_C", "ExecuteUbergraph_AnimBP_viper_tp");

	Params::AnimBP_viper_tp_C_ExecuteUbergraph_AnimBP_viper_tp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
