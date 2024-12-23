#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TilingGridBack

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TilingGridBack.TilingGridBack_C
// 0x0048 (0x02E0 - 0x0298)
class UTilingGridBack_C final : public UTilingGridBack
{
public:
	class UImage*                                 Center;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DownCenter;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DownLeft;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DownRight;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftCenter;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightCenter;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopCenter;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopLeft;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopRight;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TilingGridBack_C">();
	}
	static class UTilingGridBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTilingGridBack_C>();
	}
};
static_assert(alignof(UTilingGridBack_C) == 0x000008, "Wrong alignment on UTilingGridBack_C");
static_assert(sizeof(UTilingGridBack_C) == 0x0002E0, "Wrong size on UTilingGridBack_C");
static_assert(offsetof(UTilingGridBack_C, Center) == 0x000298, "Member 'UTilingGridBack_C::Center' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, DownCenter) == 0x0002A0, "Member 'UTilingGridBack_C::DownCenter' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, DownLeft) == 0x0002A8, "Member 'UTilingGridBack_C::DownLeft' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, DownRight) == 0x0002B0, "Member 'UTilingGridBack_C::DownRight' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, LeftCenter) == 0x0002B8, "Member 'UTilingGridBack_C::LeftCenter' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, RightCenter) == 0x0002C0, "Member 'UTilingGridBack_C::RightCenter' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, TopCenter) == 0x0002C8, "Member 'UTilingGridBack_C::TopCenter' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, TopLeft) == 0x0002D0, "Member 'UTilingGridBack_C::TopLeft' has a wrong offset!");
static_assert(offsetof(UTilingGridBack_C, TopRight) == 0x0002D8, "Member 'UTilingGridBack_C::TopRight' has a wrong offset!");

}

