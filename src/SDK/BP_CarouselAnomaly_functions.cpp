#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarouselAnomaly

#include "Basic.hpp"

#include "BP_CarouselAnomaly_classes.hpp"
#include "BP_CarouselAnomaly_parameters.hpp"


namespace SDK
{

// Function BP_CarouselAnomaly.BP_CarouselAnomaly_C.OnIdleStateStarted
// (Event, Public, BlueprintEvent)

void ABP_CarouselAnomaly_C::OnIdleStateStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarouselAnomaly_C", "OnIdleStateStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarouselAnomaly.BP_CarouselAnomaly_C.OnActivationStateStarted
// (Event, Public, BlueprintEvent)

void ABP_CarouselAnomaly_C::OnActivationStateStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarouselAnomaly_C", "OnActivationStateStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarouselAnomaly.BP_CarouselAnomaly_C.ExecuteUbergraph_BP_CarouselAnomaly
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CarouselAnomaly_C::ExecuteUbergraph_BP_CarouselAnomaly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarouselAnomaly_C", "ExecuteUbergraph_BP_CarouselAnomaly");

	Params::BP_CarouselAnomaly_C_ExecuteUbergraph_BP_CarouselAnomaly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

