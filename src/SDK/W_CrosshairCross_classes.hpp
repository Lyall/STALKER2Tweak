#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CrosshairCross

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CrosshairCross.W_CrosshairCross_C
// 0x0000 (0x02F8 - 0x02F8)
class UW_CrosshairCross_C final : public UCrosshairWidgetCross
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CrosshairCross_C">();
	}
	static class UW_CrosshairCross_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CrosshairCross_C>();
	}
};
static_assert(alignof(UW_CrosshairCross_C) == 0x000008, "Wrong alignment on UW_CrosshairCross_C");
static_assert(sizeof(UW_CrosshairCross_C) == 0x0002F8, "Wrong size on UW_CrosshairCross_C");

}

