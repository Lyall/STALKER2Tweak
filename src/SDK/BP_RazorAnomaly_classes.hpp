#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RazorAnomaly

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RazorAnomaly.BP_RazorAnomaly_C
// 0x0008 (0x0428 - 0x0420)
class ABP_RazorAnomaly_C final : public ARazorAnomaly
{
public:
	class UNiagaraComponent*                      NS_IronWind_Flare;                                 // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RazorAnomaly_C">();
	}
	static class ABP_RazorAnomaly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RazorAnomaly_C>();
	}
};
static_assert(alignof(ABP_RazorAnomaly_C) == 0x000008, "Wrong alignment on ABP_RazorAnomaly_C");
static_assert(sizeof(ABP_RazorAnomaly_C) == 0x000428, "Wrong size on ABP_RazorAnomaly_C");
static_assert(offsetof(ABP_RazorAnomaly_C, NS_IronWind_Flare) == 0x000420, "Member 'ABP_RazorAnomaly_C::NS_IronWind_Flare' has a wrong offset!");

}

