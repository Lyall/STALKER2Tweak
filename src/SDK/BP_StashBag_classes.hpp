#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StashBag

#include "Basic.hpp"

#include "BP_StaticItemContainer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StashBag.BP_StashBag_C
// 0x0000 (0x0400 - 0x0400)
class ABP_StashBag_C final : public ABP_StaticItemContainer_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StashBag_C">();
	}
	static class ABP_StashBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StashBag_C>();
	}
};
static_assert(alignof(ABP_StashBag_C) == 0x000008, "Wrong alignment on ABP_StashBag_C");
static_assert(sizeof(ABP_StashBag_C) == 0x000400, "Wrong size on ABP_StashBag_C");

}

