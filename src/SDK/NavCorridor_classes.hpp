#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavCorridor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "NavCorridor_structs.hpp"


namespace SDK
{

// Class NavCorridor.NavCorridorTestingComponent
// 0x0120 (0x06D0 - 0x05B0)
class UNavCorridorTestingComponent final : public UDebugDrawComponent
{
public:
	struct FNavAgentProperties                    NavAgentProps;                                     // 0x05B0(0x0038)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x05E8(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bFindCorridorToGoal;                               // 0x05F0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bFollowPathOnGoalCorridor;                         // 0x05F1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5F2[0x2];                                      // 0x05F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FollowLookAheadDistance;                           // 0x05F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                 GoalActor;                                         // 0x05F8(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ANavigationData*                        NavData;                                           // 0x0600(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavCorridorParams                     CorridorParams;                                    // 0x0608(0x0018)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                          bUpdateParametersFromWidth;                        // 0x0620(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_621[0x3];                                      // 0x0621(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PathOffset;                                        // 0x0624(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PathfindingTimeUs;                                 // 0x0628(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         CorridorTimeUs;                                    // 0x062C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_630[0xA0];                                     // 0x0630(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavCorridorTestingComponent">();
	}
	static class UNavCorridorTestingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavCorridorTestingComponent>();
	}
};
static_assert(alignof(UNavCorridorTestingComponent) == 0x000010, "Wrong alignment on UNavCorridorTestingComponent");
static_assert(sizeof(UNavCorridorTestingComponent) == 0x0006D0, "Wrong size on UNavCorridorTestingComponent");
static_assert(offsetof(UNavCorridorTestingComponent, NavAgentProps) == 0x0005B0, "Member 'UNavCorridorTestingComponent::NavAgentProps' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, FilterClass) == 0x0005E8, "Member 'UNavCorridorTestingComponent::FilterClass' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, bFindCorridorToGoal) == 0x0005F0, "Member 'UNavCorridorTestingComponent::bFindCorridorToGoal' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, bFollowPathOnGoalCorridor) == 0x0005F1, "Member 'UNavCorridorTestingComponent::bFollowPathOnGoalCorridor' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, FollowLookAheadDistance) == 0x0005F4, "Member 'UNavCorridorTestingComponent::FollowLookAheadDistance' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, GoalActor) == 0x0005F8, "Member 'UNavCorridorTestingComponent::GoalActor' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, NavData) == 0x000600, "Member 'UNavCorridorTestingComponent::NavData' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, CorridorParams) == 0x000608, "Member 'UNavCorridorTestingComponent::CorridorParams' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, bUpdateParametersFromWidth) == 0x000620, "Member 'UNavCorridorTestingComponent::bUpdateParametersFromWidth' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, PathOffset) == 0x000624, "Member 'UNavCorridorTestingComponent::PathOffset' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, PathfindingTimeUs) == 0x000628, "Member 'UNavCorridorTestingComponent::PathfindingTimeUs' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, CorridorTimeUs) == 0x00062C, "Member 'UNavCorridorTestingComponent::CorridorTimeUs' has a wrong offset!");

// Class NavCorridor.NavCorridorTestingActor
// 0x0008 (0x02A0 - 0x0298)
class ANavCorridorTestingActor final : public AActor
{
public:
	class UNavCorridorTestingComponent*           DebugComp;                                         // 0x0298(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavCorridorTestingActor">();
	}
	static class ANavCorridorTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavCorridorTestingActor>();
	}
};
static_assert(alignof(ANavCorridorTestingActor) == 0x000008, "Wrong alignment on ANavCorridorTestingActor");
static_assert(sizeof(ANavCorridorTestingActor) == 0x0002A0, "Wrong size on ANavCorridorTestingActor");
static_assert(offsetof(ANavCorridorTestingActor, DebugComp) == 0x000298, "Member 'ANavCorridorTestingActor::DebugComp' has a wrong offset!");

}

