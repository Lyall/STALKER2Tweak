#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Player

#include "Basic.hpp"

#include "AnimBP_Player_classes.hpp"
#include "AnimBP_Player_parameters.hpp"


namespace SDK
{

// Function AnimBP_Player.AnimBP_Player_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_Player_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Player_C", "AnimGraph");

	Params::AnimBP_Player_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_Player.AnimBP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_05285C2F425ECCC38AFEEB800CD5B678
// (BlueprintEvent)

void UAnimBP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_05285C2F425ECCC38AFEEB800CD5B678()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_05285C2F425ECCC38AFEEB800CD5B678");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Player.AnimBP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_455A955A4FF0ACD0F0DA7FA7DBC9FF10
// (BlueprintEvent)

void UAnimBP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_455A955A4FF0ACD0F0DA7FA7DBC9FF10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_455A955A4FF0ACD0F0DA7FA7DBC9FF10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Player.AnimBP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_A4341EF6424105223C87C39D835F9459
// (BlueprintEvent)

void UAnimBP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_A4341EF6424105223C87C39D835F9459()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Player_AnimGraphNode_TransitionResult_A4341EF6424105223C87C39D835F9459");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Player.AnimBP_Player_C.ExecuteUbergraph_AnimBP_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Player_C::ExecuteUbergraph_AnimBP_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Player_C", "ExecuteUbergraph_AnimBP_Player");

	Params::AnimBP_Player_C_ExecuteUbergraph_AnimBP_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
