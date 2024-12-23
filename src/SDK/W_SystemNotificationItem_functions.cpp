#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SystemNotificationItem

#include "Basic.hpp"

#include "W_SystemNotificationItem_classes.hpp"
#include "W_SystemNotificationItem_parameters.hpp"


namespace SDK
{

// Function W_SystemNotificationItem.W_SystemNotificationItem_C.ExecuteUbergraph_W_SystemNotificationItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SystemNotificationItem_C::ExecuteUbergraph_W_SystemNotificationItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SystemNotificationItem_C", "ExecuteUbergraph_W_SystemNotificationItem");

	Params::W_SystemNotificationItem_C_ExecuteUbergraph_W_SystemNotificationItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SystemNotificationItem.W_SystemNotificationItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SystemNotificationItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SystemNotificationItem_C", "Tick");

	Params::W_SystemNotificationItem_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

