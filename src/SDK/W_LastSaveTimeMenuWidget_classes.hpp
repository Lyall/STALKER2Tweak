#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LastSaveTimeMenuWidget

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LastSaveTimeMenuWidget.W_LastSaveTimeMenuWidget_C
// 0x0008 (0x0298 - 0x0290)
class UW_LastSaveTimeMenuWidget_C final : public ULastSaveTimeMenuWidget
{
public:
	class UW_Text_C*                              LastSaveHint;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LastSaveTimeMenuWidget_C">();
	}
	static class UW_LastSaveTimeMenuWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LastSaveTimeMenuWidget_C>();
	}
};
static_assert(alignof(UW_LastSaveTimeMenuWidget_C) == 0x000008, "Wrong alignment on UW_LastSaveTimeMenuWidget_C");
static_assert(sizeof(UW_LastSaveTimeMenuWidget_C) == 0x000298, "Wrong size on UW_LastSaveTimeMenuWidget_C");
static_assert(offsetof(UW_LastSaveTimeMenuWidget_C, LastSaveHint) == 0x000290, "Member 'UW_LastSaveTimeMenuWidget_C::LastSaveHint' has a wrong offset!");

}
