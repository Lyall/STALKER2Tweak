#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FireType

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FireType.W_FireType_C
// 0x0000 (0x02A0 - 0x02A0)
class UW_FireType_C final : public UFireTypeWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FireType_C">();
	}
	static class UW_FireType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FireType_C>();
	}
};
static_assert(alignof(UW_FireType_C) == 0x000008, "Wrong alignment on UW_FireType_C");
static_assert(sizeof(UW_FireType_C) == 0x0002A0, "Wrong size on UW_FireType_C");

}

