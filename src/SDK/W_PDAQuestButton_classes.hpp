#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PDAQuestButton

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PDAQuestButton.W_PDAQuestButton_C
// 0x0000 (0x0340 - 0x0340)
class UW_PDAQuestButton_C final : public UPDAQuestButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PDAQuestButton_C">();
	}
	static class UW_PDAQuestButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PDAQuestButton_C>();
	}
};
static_assert(alignof(UW_PDAQuestButton_C) == 0x000008, "Wrong alignment on UW_PDAQuestButton_C");
static_assert(sizeof(UW_PDAQuestButton_C) == 0x000340, "Wrong size on UW_PDAQuestButton_C");

}
