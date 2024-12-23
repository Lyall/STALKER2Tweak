#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DropBodyHint

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DropBodyHint.DropBodyHint_C
// 0x0008 (0x0280 - 0x0278)
class UDropBodyHint_C final : public UWidgetBase
{
public:
	class UW_HintInputController_C*               W_HintInputController;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DropBodyHint_C">();
	}
	static class UDropBodyHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDropBodyHint_C>();
	}
};
static_assert(alignof(UDropBodyHint_C) == 0x000008, "Wrong alignment on UDropBodyHint_C");
static_assert(sizeof(UDropBodyHint_C) == 0x000280, "Wrong size on UDropBodyHint_C");
static_assert(offsetof(UDropBodyHint_C, W_HintInputController) == 0x000278, "Member 'UDropBodyHint_C::W_HintInputController' has a wrong offset!");

}

