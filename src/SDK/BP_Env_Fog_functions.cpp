#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Env_Fog

#include "Basic.hpp"

#include "BP_Env_Fog_classes.hpp"
#include "BP_Env_Fog_parameters.hpp"


namespace SDK
{

// Function BP_Env_Fog.BP_Env_Fog_C.ExecuteUbergraph_BP_Env_Fog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Env_Fog_C::ExecuteUbergraph_BP_Env_Fog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Env_Fog_C", "ExecuteUbergraph_BP_Env_Fog");

	Params::BP_Env_Fog_C_ExecuteUbergraph_BP_Env_Fog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Env_Fog.BP_Env_Fog_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Env_Fog_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Env_Fog_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
