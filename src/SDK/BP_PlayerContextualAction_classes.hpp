#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerContextualAction

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerContextualAction.BP_PlayerContextualAction_C
// 0x0010 (0x02C8 - 0x02B8)
class ABP_PlayerContextualAction_C final : public APlayerContextualAction
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   InteractVolume;                                    // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerContextualAction_C">();
	}
	static class ABP_PlayerContextualAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerContextualAction_C>();
	}
};
static_assert(alignof(ABP_PlayerContextualAction_C) == 0x000008, "Wrong alignment on ABP_PlayerContextualAction_C");
static_assert(sizeof(ABP_PlayerContextualAction_C) == 0x0002C8, "Wrong size on ABP_PlayerContextualAction_C");
static_assert(offsetof(ABP_PlayerContextualAction_C, Arrow) == 0x0002B8, "Member 'ABP_PlayerContextualAction_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PlayerContextualAction_C, InteractVolume) == 0x0002C0, "Member 'ABP_PlayerContextualAction_C::InteractVolume' has a wrong offset!");

}
