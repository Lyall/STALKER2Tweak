#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RegionPanel

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RegionPanel.W_RegionPanel_C
// 0x0000 (0x02A8 - 0x02A8)
class UW_RegionPanel_C final : public UPDARegionPanel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RegionPanel_C">();
	}
	static class UW_RegionPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RegionPanel_C>();
	}
};
static_assert(alignof(UW_RegionPanel_C) == 0x000008, "Wrong alignment on UW_RegionPanel_C");
static_assert(sizeof(UW_RegionPanel_C) == 0x0002A8, "Wrong size on UW_RegionPanel_C");

}

