#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoseSearchLocomotion

#include "Basic.hpp"

#include "PoseSearchLocomotion_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "PoseSearch_structs.hpp"


namespace SDK
{

// Class PoseSearchLocomotion.PoseSearchLocomotionDescriptor
// 0x0010 (0x0038 - 0x0028)
class UPoseSearchLocomotionDescriptor final : public UObject
{
public:
	TArray<struct FPoseSearchLocomotionMoveData>  Container;                                         // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchLocomotionDescriptor">();
	}
	static class UPoseSearchLocomotionDescriptor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchLocomotionDescriptor>();
	}
};
static_assert(alignof(UPoseSearchLocomotionDescriptor) == 0x000008, "Wrong alignment on UPoseSearchLocomotionDescriptor");
static_assert(sizeof(UPoseSearchLocomotionDescriptor) == 0x000038, "Wrong size on UPoseSearchLocomotionDescriptor");
static_assert(offsetof(UPoseSearchLocomotionDescriptor, Container) == 0x000028, "Member 'UPoseSearchLocomotionDescriptor::Container' has a wrong offset!");

// Class PoseSearchLocomotion.PoseSearchLocomotionSettings
// 0x0218 (0x0240 - 0x0028)
class UPoseSearchLocomotionSettings final : public UObject
{
public:
	struct FMotionMatchingSettings                MotionMatchingSettings;                            // 0x0028(0x0030)(Edit, Config, NoDestructor, NativeAccessSpecifierPrivate)
	struct FPoseSearchLocomotionTrajectorySettings TrajectorySettings;                                // 0x0058(0x0060)(Edit, Config, NativeAccessSpecifierPrivate)
	struct FPoseSearchLocomotionMovementSettings  MovementSettings;                                  // 0x00B8(0x0188)(Edit, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PoseSearchLocomotionSettings">();
	}
	static class UPoseSearchLocomotionSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseSearchLocomotionSettings>();
	}
};
static_assert(alignof(UPoseSearchLocomotionSettings) == 0x000008, "Wrong alignment on UPoseSearchLocomotionSettings");
static_assert(sizeof(UPoseSearchLocomotionSettings) == 0x000240, "Wrong size on UPoseSearchLocomotionSettings");
static_assert(offsetof(UPoseSearchLocomotionSettings, MotionMatchingSettings) == 0x000028, "Member 'UPoseSearchLocomotionSettings::MotionMatchingSettings' has a wrong offset!");
static_assert(offsetof(UPoseSearchLocomotionSettings, TrajectorySettings) == 0x000058, "Member 'UPoseSearchLocomotionSettings::TrajectorySettings' has a wrong offset!");
static_assert(offsetof(UPoseSearchLocomotionSettings, MovementSettings) == 0x0000B8, "Member 'UPoseSearchLocomotionSettings::MovementSettings' has a wrong offset!");

}

