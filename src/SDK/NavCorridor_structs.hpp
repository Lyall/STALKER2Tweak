#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavCorridor

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NavCorridor.NavCorridorParams
// 0x0018 (0x0018 - 0x0000)
struct FNavCorridorParams final
{
public:
	float                                         Width;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ObstacleTaperAngle;                                // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmallSectorThreshold;                              // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LargeSectorThreshold;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SimplifyEdgeThreshold;                             // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimplifyFlipPortals;                              // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimplifyConvexPortals;                            // 0x0015(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimplifyConcavePortals;                           // 0x0016(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavCorridorParams) == 0x000004, "Wrong alignment on FNavCorridorParams");
static_assert(sizeof(FNavCorridorParams) == 0x000018, "Wrong size on FNavCorridorParams");
static_assert(offsetof(FNavCorridorParams, Width) == 0x000000, "Member 'FNavCorridorParams::Width' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, ObstacleTaperAngle) == 0x000004, "Member 'FNavCorridorParams::ObstacleTaperAngle' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, SmallSectorThreshold) == 0x000008, "Member 'FNavCorridorParams::SmallSectorThreshold' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, LargeSectorThreshold) == 0x00000C, "Member 'FNavCorridorParams::LargeSectorThreshold' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, SimplifyEdgeThreshold) == 0x000010, "Member 'FNavCorridorParams::SimplifyEdgeThreshold' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, bSimplifyFlipPortals) == 0x000014, "Member 'FNavCorridorParams::bSimplifyFlipPortals' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, bSimplifyConvexPortals) == 0x000015, "Member 'FNavCorridorParams::bSimplifyConvexPortals' has a wrong offset!");
static_assert(offsetof(FNavCorridorParams, bSimplifyConcavePortals) == 0x000016, "Member 'FNavCorridorParams::bSimplifyConcavePortals' has a wrong offset!");

}
