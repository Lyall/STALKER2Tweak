#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TaskIcon

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TaskIcon.W_TaskIcon_C
// 0x0000 (0x02A8 - 0x02A8)
class UW_TaskIcon_C final : public UTaskIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TaskIcon_C">();
	}
	static class UW_TaskIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TaskIcon_C>();
	}
};
static_assert(alignof(UW_TaskIcon_C) == 0x000008, "Wrong alignment on UW_TaskIcon_C");
static_assert(sizeof(UW_TaskIcon_C) == 0x0002A8, "Wrong size on UW_TaskIcon_C");

}

