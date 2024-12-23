#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InstActorToSpawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InstActorToSpawn.BP_InstActorToSpawn_C
// 0x0010 (0x02A8 - 0x0298)
class ABP_InstActorToSpawn_C final : public AActor
{
public:
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InstActorToSpawn_C">();
	}
	static class ABP_InstActorToSpawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InstActorToSpawn_C>();
	}
};
static_assert(alignof(ABP_InstActorToSpawn_C) == 0x000008, "Wrong alignment on ABP_InstActorToSpawn_C");
static_assert(sizeof(ABP_InstActorToSpawn_C) == 0x0002A8, "Wrong size on ABP_InstActorToSpawn_C");
static_assert(offsetof(ABP_InstActorToSpawn_C, InstancedStaticMesh) == 0x000298, "Member 'ABP_InstActorToSpawn_C::InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_InstActorToSpawn_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_InstActorToSpawn_C::DefaultSceneRoot' has a wrong offset!");

}

