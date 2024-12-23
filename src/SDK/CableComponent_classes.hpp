#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CableComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class CableComponent.CableActor
// 0x0008 (0x02A0 - 0x0298)
class ACableActor final : public AActor
{
public:
	class UCableComponent*                        CableComponent;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableActor">();
	}
	static class ACableActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACableActor>();
	}
};
static_assert(alignof(ACableActor) == 0x000008, "Wrong alignment on ACableActor");
static_assert(sizeof(ACableActor) == 0x0002A0, "Wrong size on ACableActor");
static_assert(offsetof(ACableActor, CableComponent) == 0x000298, "Member 'ACableActor::CableComponent' has a wrong offset!");

// Class CableComponent.CableComponent
// 0x00B0 (0x0650 - 0x05A0)
class UCableComponent final : public UMeshComponent
{
public:
	bool                                          bAttachStart;                                      // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAttachEnd;                                        // 0x0599(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59A[0x6];                                      // 0x059A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComponentReference                    AttachEndTo;                                       // 0x05A0(0x0028)(Edit, NativeAccessSpecifierPublic)
	class FName                                   AttachEndToSocketName;                             // 0x05C8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndLocation;                                       // 0x05D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableLength;                                       // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSegments;                                       // 0x05EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubstepTime;                                       // 0x05F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SolverIterations;                                  // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableStiffness;                                  // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSubstepping;                                   // 0x05F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipCableUpdateWhenNotVisible;                    // 0x05FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipCableUpdateWhenNotOwnerRecentlyRendered;      // 0x05FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x05FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5FD[0x3];                                      // 0x05FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionFriction;                                 // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_604[0x4];                                      // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CableForce;                                        // 0x0608(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableGravityScale;                                 // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableWidth;                                        // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSides;                                          // 0x0628(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileMaterial;                                      // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_630[0x20];                                     // 0x0630(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName);
	void SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName);

	class AActor* GetAttachedActor() const;
	class USceneComponent* GetAttachedComponent() const;
	void GetCableParticleLocations(TArray<struct FVector>* Locations) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableComponent">();
	}
	static class UCableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCableComponent>();
	}
};
static_assert(alignof(UCableComponent) == 0x000010, "Wrong alignment on UCableComponent");
static_assert(sizeof(UCableComponent) == 0x000650, "Wrong size on UCableComponent");
static_assert(offsetof(UCableComponent, bAttachStart) == 0x000598, "Member 'UCableComponent::bAttachStart' has a wrong offset!");
static_assert(offsetof(UCableComponent, bAttachEnd) == 0x000599, "Member 'UCableComponent::bAttachEnd' has a wrong offset!");
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x0005A0, "Member 'UCableComponent::AttachEndTo' has a wrong offset!");
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x0005C8, "Member 'UCableComponent::AttachEndToSocketName' has a wrong offset!");
static_assert(offsetof(UCableComponent, EndLocation) == 0x0005D0, "Member 'UCableComponent::EndLocation' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableLength) == 0x0005E8, "Member 'UCableComponent::CableLength' has a wrong offset!");
static_assert(offsetof(UCableComponent, NumSegments) == 0x0005EC, "Member 'UCableComponent::NumSegments' has a wrong offset!");
static_assert(offsetof(UCableComponent, SubstepTime) == 0x0005F0, "Member 'UCableComponent::SubstepTime' has a wrong offset!");
static_assert(offsetof(UCableComponent, SolverIterations) == 0x0005F4, "Member 'UCableComponent::SolverIterations' has a wrong offset!");
static_assert(offsetof(UCableComponent, bEnableStiffness) == 0x0005F8, "Member 'UCableComponent::bEnableStiffness' has a wrong offset!");
static_assert(offsetof(UCableComponent, bUseSubstepping) == 0x0005F9, "Member 'UCableComponent::bUseSubstepping' has a wrong offset!");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotVisible) == 0x0005FA, "Member 'UCableComponent::bSkipCableUpdateWhenNotVisible' has a wrong offset!");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotOwnerRecentlyRendered) == 0x0005FB, "Member 'UCableComponent::bSkipCableUpdateWhenNotOwnerRecentlyRendered' has a wrong offset!");
static_assert(offsetof(UCableComponent, bEnableCollision) == 0x0005FC, "Member 'UCableComponent::bEnableCollision' has a wrong offset!");
static_assert(offsetof(UCableComponent, CollisionFriction) == 0x000600, "Member 'UCableComponent::CollisionFriction' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableForce) == 0x000608, "Member 'UCableComponent::CableForce' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableGravityScale) == 0x000620, "Member 'UCableComponent::CableGravityScale' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableWidth) == 0x000624, "Member 'UCableComponent::CableWidth' has a wrong offset!");
static_assert(offsetof(UCableComponent, NumSides) == 0x000628, "Member 'UCableComponent::NumSides' has a wrong offset!");
static_assert(offsetof(UCableComponent, TileMaterial) == 0x00062C, "Member 'UCableComponent::TileMaterial' has a wrong offset!");

}

