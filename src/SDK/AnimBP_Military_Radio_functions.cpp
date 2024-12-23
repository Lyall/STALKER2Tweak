#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Military_Radio

#include "Basic.hpp"

#include "AnimBP_Military_Radio_classes.hpp"
#include "AnimBP_Military_Radio_parameters.hpp"


namespace SDK
{

// Function AnimBP_Military_Radio.AnimBP_Military_Radio_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_Military_Radio_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Military_Radio_C", "AnimGraph");

	Params::AnimBP_Military_Radio_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_Military_Radio.AnimBP_Military_Radio_C.ExecuteUbergraph_AnimBP_Military_Radio
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Military_Radio_C::ExecuteUbergraph_AnimBP_Military_Radio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Military_Radio_C", "ExecuteUbergraph_AnimBP_Military_Radio");

	Params::AnimBP_Military_Radio_C_ExecuteUbergraph_AnimBP_Military_Radio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

