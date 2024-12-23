#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AI_Bloodsucker

#include "Basic.hpp"

#include "BP_AI_Bloodsucker_classes.hpp"
#include "BP_AI_Bloodsucker_parameters.hpp"


namespace SDK
{

// Function BP_AI_Bloodsucker.BP_AI_Bloodsucker_C.ExecuteUbergraph_BP_AI_Bloodsucker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AI_Bloodsucker_C::ExecuteUbergraph_BP_AI_Bloodsucker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_Bloodsucker_C", "ExecuteUbergraph_BP_AI_Bloodsucker");

	Params::BP_AI_Bloodsucker_C_ExecuteUbergraph_BP_AI_Bloodsucker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_Bloodsucker.BP_AI_Bloodsucker_C.OnGameplayEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UGameplayEventData*               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AI_Bloodsucker_C::OnGameplayEvent(const struct FGameplayTag& EventTag, const class UGameplayEventData* EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_Bloodsucker_C", "OnGameplayEvent");

	Params::BP_AI_Bloodsucker_C_OnGameplayEvent Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AI_Bloodsucker.BP_AI_Bloodsucker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AI_Bloodsucker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AI_Bloodsucker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

