#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerIdentity

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerIdentity.W_PlayerIdentity_C
// 0x0000 (0x02A0 - 0x02A0)
class UW_PlayerIdentity_C final : public UPlayerIdentityWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerIdentity_C">();
	}
	static class UW_PlayerIdentity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerIdentity_C>();
	}
};
static_assert(alignof(UW_PlayerIdentity_C) == 0x000008, "Wrong alignment on UW_PlayerIdentity_C");
static_assert(sizeof(UW_PlayerIdentity_C) == 0x0002A0, "Wrong size on UW_PlayerIdentity_C");

}

