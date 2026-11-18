// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147136db0

/* WARNING: Removing unreachable block (ram,0x000147137072) */
/* WARNING: Removing unreachable block (ram,0x0001471372b0) */
/* WARNING: Removing unreachable block (ram,0x0001471373e6) */
/* WARNING: Removing unreachable block (ram,0x000147137513) */
/* WARNING: Removing unreachable block (ram,0x00014713784d) */
/* WARNING: Removing unreachable block (ram,0x00014713798c) */
/* WARNING: Removing unreachable block (ram,0x000147137c39) */
/* WARNING: Removing unreachable block (ram,0x000147137d7f) */
/* WARNING: Removing unreachable block (ram,0x0001471380e1) */
/* WARNING: Removing unreachable block (ram,0x000147138227) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::FArchetypeGroup_Remove::InstantTest(FArchetypeGroup_Remove *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  TArrayView<FMassEntityHandle_const_,int> *pTVar5;
  FArchetypeGroupID *pFVar6;
  FArchetypeGroupHandle *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_5d8;
  bool local_5c8;
  char local_5c7;
  undefined1 local_5c6;
  bool local_5c5;
  char local_5c4;
  undefined1 local_5c3;
  char local_5c2;
  undefined1 local_5c1;
  bool local_5c0;
  char local_5bf;
  undefined1 local_5be;
  bool local_5bd;
  char local_5bc;
  undefined1 local_5bb;
  char local_5ba;
  undefined1 local_5b9;
  undefined1 local_5b8;
  FArchetypeGroupType local_5b4;
  FArchetypeGroupType local_5b0;
  undefined4 local_5ac;
  uint local_5a8;
  undefined4 local_5a4;
  uint local_5a0;
  undefined4 local_59c;
  uint local_598;
  undefined4 local_594;
  uint local_590;
  uint local_58c;
  uint local_588;
  undefined4 local_584;
  uint local_580;
  undefined4 local_57c;
  uint local_578;
  uint local_574;
  undefined4 local_570;
  uint local_56c;
  undefined4 local_568;
  uint local_564;
  uint local_560;
  uint local_55c;
  undefined4 local_558;
  uint local_554;
  undefined4 local_550;
  uint local_54c;
  uint local_548;
  FMassArchetypeHandle local_540;
  uint local_530;
  uint local_52c;
  uint local_528;
  uint local_524;
  FArchetypeGroupType local_520;
  uint local_51c;
  FArchetypeGroupType local_518;
  uint local_514;
  FArchetypeGroupType local_510;
  uint local_50c;
  FArchetypeGroupType local_508;
  FMassArchetypeHandle local_500;
  uint local_4f0;
  FMassArchetypeHandle local_4e8;
  FArchetypeGroups *local_4d8;
  FArchetypeGroups *local_4d0;
  FMassArchetypeHandle local_4c8;
  FMassArchetypeHandle local_4b8;
  FName *local_4a8;
  FName local_4a0;
  FMassEntityManager *local_498;
  FMassEntityManager *local_490;
  TArrayView<FMassEntityHandle_const_,int> *local_488;
  FArchetypeGroupID *local_480;
  FArchetypeGroupHandle local_478;
  FArchetypeGroupHandle local_470;
  FMassEntityManager *local_468;
  undefined4 local_460;
  undefined4 local_45c;
  FMassEntityHandle *local_458;
  FMassEntityHandle *local_450;
  FMassEntityHandle *local_448;
  FMassEntityHandle local_440;
  FMassEntityManager *local_438;
  TArrayView<FMassEntityHandle_const_,int> *local_430;
  FArchetypeGroupID *local_428;
  FArchetypeGroupHandle local_420;
  FArchetypeGroupHandle local_418;
  FMassEntityManager *local_410;
  undefined4 local_408;
  undefined4 local_404;
  FMassEntityHandle *local_400;
  FMassEntityHandle *local_3f8;
  FMassEntityHandle *local_3f0;
  FMassEntityHandle local_3e8;
  FMassEntityManager *local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  FMassEntityHandle *local_3d0;
  FMassEntityHandle *local_3c8;
  FMassEntityHandle *local_3c0;
  FMassEntityHandle local_3b8;
  FMassEntityHandle local_3b0;
  FMassEntityManager *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  FMassEntityHandle *local_398;
  FMassEntityHandle *local_390;
  FMassEntityHandle *local_388;
  FMassEntityHandle local_380;
  FMassEntityManager *local_378;
  FMassEntityManager *local_370;
  FAutomationTestBase *local_368;
  FAutomationTestBase *local_360;
  undefined4 local_358;
  undefined4 local_354;
  FMassEntityHandle *local_350;
  FMassEntityHandle *local_348;
  FMassEntityHandle *local_340;
  FMassEntityHandle local_338;
  FMassEntityHandle local_330;
  FMassEntityManager *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  FMassEntityHandle *local_318;
  FMassEntityHandle *local_310;
  FMassEntityHandle *local_308;
  FMassEntityHandle local_300;
  FMassEntityManager *local_2f8;
  FMassArchetypeHandle *local_2f0;
  FMassArchetypeHandle *local_2e8;
  FAutomationTestBase *local_2e0;
  FMassArchetypeHandle *local_2d8;
  FMassArchetypeHandle *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  FMassEntityHandle *local_2c0;
  FMassEntityHandle *local_2b8;
  FMassEntityHandle *local_2b0;
  FMassEntityHandle local_2a8;
  FMassEntityHandle local_2a0;
  FMassEntityManager *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  FMassEntityHandle *local_288;
  FMassEntityHandle *local_280;
  FMassEntityHandle *local_278;
  FMassEntityHandle local_270;
  FMassEntityManager *local_268;
  FMassEntityManager *local_260;
  FAutomationTestBase *local_258;
  FAutomationTestBase *local_250;
  undefined4 local_248;
  undefined4 local_244;
  FMassEntityHandle *local_240;
  undefined4 local_238;
  FMassEntityHandle *local_230;
  FMassEntityHandle local_228;
  FMassEntityHandle local_220;
  FMassEntityManager *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FMassEntityHandle *local_208;
  FMassEntityHandle *local_200;
  FMassEntityHandle *local_1f8;
  FMassEntityHandle local_1f0;
  FMassEntityManager *local_1e8;
  FMassArchetypeHandle *local_1e0;
  FMassArchetypeHandle *local_1d8;
  FAutomationTestBase *local_1d0;
  FMassArchetypeHandle *local_1c8;
  FMassArchetypeHandle *local_1c0;
  FArchetypeGroupID local_1b8;
  FArchetypeGroupID local_1b4;
  FName *local_1b0;
  FMassEntityHandle *local_1a8;
  FName local_1a0;
  FMassEntityManager *local_198;
  FMassArchetypeHandle local_190;
  FMassArchetypeHandle local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FName local_110;
  FName local_108;
  FArchetypeGroupHandle local_100;
  FArchetypeGroupHandle local_f8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  TArrayView<FMassEntityHandle_const_,int> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  TArrayView<FMassEntityHandle_const_,int> local_88;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  FMassArchetypeHandle local_58;
  FMassArchetypeHandle local_48;
  FMassArchetypeHandle local_38;
  FMassArchetypeHandle local_28;
  
  local_238 = 0x68d;
  local_198 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1b0 = &local_110;
  pFVar4 = ::FName::FName(local_1b0,L"TestGroupA");
  local_1a0 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_198,(FName)&local_5b0);
  local_498 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_4a8 = &local_108;
  pFVar4 = ::FName::FName(local_4a8,L"TestGroupB");
  local_4a0 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_498,(FName)&local_5b4);
  FMassArchetypeHandle::FMassArchetypeHandle(&local_540,(FMassArchetypeHandle *)&this->field_0x60);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_5d8.AllocatorInstance);
  local_5d8.ArrayNum = 0;
  local_5d8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_5d8.AllocatorInstance);
  local_490 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_490,&local_f0,&local_540,2,&local_5d8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f0);
  local_468 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_488 = &local_78;
  pTVar5 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_488,&local_5d8);
  puVar9 = local_e0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_e0;
  puVar10 = local_d0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_480 = &local_1b8;
  pFVar6 = FArchetypeGroupID::FArchetypeGroupID(local_480,0x68d);
  local_4f0 = pFVar6->ID;
  local_530 = local_5b0.Identifier;
  pFVar7 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_100,local_5b0,(FArchetypeGroupID)local_4f0);
  local_478 = *pFVar7;
  puVar9 = local_d0;
  pTVar5 = &local_b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  local_470 = local_478;
  FMassEntityManager::BatchGroupEntities(local_468,local_478,&local_b8);
  local_438 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_5ac = 1;
  local_548 = (uint)(0 < local_5d8.ArrayNum);
  if (local_548 == 0) {
    local_460 = 0;
    local_45c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_458 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_450 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_448 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_440 = *(FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_438,&local_500,local_440);
  local_410 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_430 = &local_68;
  pTVar5 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_430,&local_5d8);
  puVar9 = local_a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_a8;
  puVar10 = local_98;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_428 = &local_1b4;
  pFVar6 = FArchetypeGroupID::FArchetypeGroupID(local_428,0x68d);
  local_52c = pFVar6->ID;
  local_528 = local_5b4.Identifier;
  pFVar7 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_f8,local_5b4,(FArchetypeGroupID)local_52c);
  local_420 = *pFVar7;
  puVar9 = local_98;
  pTVar5 = &local_88;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  local_418 = local_420;
  FMassEntityManager::BatchGroupEntities(local_410,local_420,&local_88);
  local_3e0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_5a4 = 1;
  local_5a8 = (uint)(0 < local_5d8.ArrayNum);
  if (local_5a8 == 0) {
    local_408 = 0;
    local_404 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_400 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3f8 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3f0 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3e8 = *(FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_3e0,&local_4e8,local_3e8);
  local_3a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_524 = local_5b0.Identifier;
  local_520.Identifier = local_5b0.Identifier;
  local_59c = 1;
  local_5a0 = (uint)(0 < local_5d8.ArrayNum);
  if (local_5a0 == 0) {
    local_3d8 = 0;
    local_3d4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_3d0 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3c8 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3c0 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3b8 = *(FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_3b0 = local_3b8;
  FMassEntityManager::RemoveEntityFromGroupType(local_3a8,local_3b8,local_520);
  local_378 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_594 = 1;
  local_598 = (uint)(0 < local_5d8.ArrayNum);
  if (local_598 == 0) {
    local_3a0 = 0;
    local_39c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_398 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_390 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_388 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  local_380 = *(FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_378,&local_4c8,local_380);
  local_370 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_4d0 = FMassEntityManager::GetGroupsForArchetype(local_370,&local_4c8);
  local_368 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_5c8 = FArchetypeGroups::ContainsType(local_4d0,local_5b4);
  ::FString::FString(&local_170,"After removing group A from AB entity it\'s still in group B");
  bVar2 = FAutomationTestBase::TestTrue(local_368,&local_170,local_5c8);
  local_5c7 = !bVar2;
  local_590 = (uint)(byte)local_5c7;
  ::FString::~FString(&local_170);
  if (local_5c7 == '\0') {
    local_360 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_5c5 = FArchetypeGroups::ContainsType(local_4d0,local_5b0);
    ::FString::FString(&local_160,"After removing group A from AB entity it\'s still in group A");
    bVar2 = FAutomationTestBase::TestFalse(local_360,&local_160,local_5c5);
    local_5c4 = !bVar2;
    local_58c = (uint)(byte)local_5c4;
    ::FString::~FString(&local_160);
    if (local_5c4 == '\0') {
      local_328 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_51c = local_5b4.Identifier;
      local_518.Identifier = local_5b4.Identifier;
      local_584 = 1;
      local_588 = (uint)(0 < local_5d8.ArrayNum);
      if (local_588 == 0) {
        local_358 = 0;
        local_354 = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_350 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_348 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_340 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_338 = *(FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_330 = local_338;
      FMassEntityManager::RemoveEntityFromGroupType(local_328,local_338,local_518);
      local_2f8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_57c = 1;
      local_580 = (uint)(0 < local_5d8.ArrayNum);
      if (local_580 == 0) {
        local_320 = 0;
        local_31c = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_318 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_310 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_308 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      local_300 = *(FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
      FMassEntityManager::GetArchetypeForEntity(local_2f8,&local_190,local_300);
      local_2e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2f0 = &local_58;
      local_2d8 = FMassArchetypeHandle::FMassArchetypeHandle(local_2f0,&local_540);
      local_2e8 = &local_48;
      local_2d0 = FMassArchetypeHandle::FMassArchetypeHandle(local_2e8,&local_190);
      ::FString::FString(&local_150,
                         "The archetype after removing the entity from both groups; and the original archetype, scenario 1"
                        );
      bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_150,local_2d0,local_2d8,local_2e0);
      local_5c2 = !bVar2;
      local_578 = (uint)(byte)local_5c2;
      ::FString::~FString(&local_150);
      if (local_5c2 == '\0') {
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_190);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_4c8);
        local_298 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_514 = local_5b4.Identifier;
        local_510.Identifier = local_5b4.Identifier;
        local_570 = 1;
        local_574 = (uint)(1 < local_5d8.ArrayNum);
        if (local_574 == 0) {
          local_2c8 = 0;
          local_2c4 = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_2c0 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
        local_2b8 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
        local_2b0 = (FMassEntityHandle *)(local_5d8.AllocatorInstance.Data + 8);
        local_2a8 = *local_2b0;
        local_2a0 = local_2a8;
        FMassEntityManager::RemoveEntityFromGroupType(local_298,local_2a8,local_510);
        local_268 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_568 = 1;
        local_56c = (uint)(1 < local_5d8.ArrayNum);
        if (local_56c == 0) {
          local_290 = 0;
          local_28c = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_288 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
        local_280 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
        local_278 = (FMassEntityHandle *)(local_5d8.AllocatorInstance.Data + 8);
        local_270 = *local_278;
        FMassEntityManager::GetArchetypeForEntity(local_268,&local_4b8,local_270);
        local_260 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_4d8 = FMassEntityManager::GetGroupsForArchetype(local_260,&local_4b8);
        local_258 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_5c0 = FArchetypeGroups::ContainsType(local_4d8,local_5b4);
        ::FString::FString(&local_140,"After removing group B from AB entity it\'s still in group B"
                          );
        bVar2 = FAutomationTestBase::TestFalse(local_258,&local_140,local_5c0);
        local_5bf = !bVar2;
        local_564 = (uint)(byte)local_5bf;
        ::FString::~FString(&local_140);
        if (local_5bf == '\0') {
          local_250 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_5bd = FArchetypeGroups::ContainsType(local_4d8,local_5b0);
          ::FString::FString(&local_130,
                             "After removing group B from AB entity it\'s still in group A");
          bVar2 = FAutomationTestBase::TestTrue(local_250,&local_130,local_5bd);
          local_5bc = !bVar2;
          local_560 = (uint)(byte)local_5bc;
          ::FString::~FString(&local_130);
          if (local_5bc == '\0') {
            local_218 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_50c = local_5b0.Identifier;
            local_508.Identifier = local_5b0.Identifier;
            local_558 = 1;
            local_55c = (uint)(1 < local_5d8.ArrayNum);
            if (local_55c == 0) {
              local_248 = 0;
              local_244 = 0;
              Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            local_240 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
            local_1a8 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
            local_230 = (FMassEntityHandle *)(local_5d8.AllocatorInstance.Data + 8);
            local_228 = *local_230;
            local_220 = local_228;
            FMassEntityManager::RemoveEntityFromGroupType(local_218,local_228,local_508);
            local_1e8 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_550 = 1;
            local_554 = (uint)(1 < local_5d8.ArrayNum);
            if (local_554 == 0) {
              local_210 = 0;
              local_20c = 0;
              Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            local_208 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
            local_200 = (FMassEntityHandle *)local_5d8.AllocatorInstance.Data;
            local_1f8 = (FMassEntityHandle *)(local_5d8.AllocatorInstance.Data + 8);
            local_1f0 = *local_1f8;
            FMassEntityManager::GetArchetypeForEntity(local_1e8,&local_180,local_1f0);
            local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_1e0 = &local_38;
            local_1c8 = FMassArchetypeHandle::FMassArchetypeHandle(local_1e0,&local_540);
            local_1d8 = &local_28;
            local_1c0 = FMassArchetypeHandle::FMassArchetypeHandle(local_1d8,&local_180);
            ::FString::FString(&local_120,
                               "The archetype after removing the entity from both groups; and the original archetype, scenario 2"
                              );
            bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                              (&local_120,local_1c0,local_1c8,local_1d0);
            local_5ba = !bVar2;
            local_54c = (uint)(byte)local_5ba;
            ::FString::~FString(&local_120);
            if (local_5ba == '\0') {
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_180);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_4b8);
              local_5b8 = 1;
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
              local_5c6 = local_5b8;
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_5b9 = 0;
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_180);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_4b8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
              local_5c6 = local_5b9;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_5bb = 0;
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_4b8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
            local_5c6 = local_5bb;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_5be = 0;
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_4b8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
          local_5c6 = local_5be;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_5c1 = 0;
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_190);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_4c8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
        local_5c6 = local_5c1;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_5c3 = 0;
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_4c8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
      local_5c6 = local_5c3;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_5c6 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_4c8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_4e8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_500);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_5d8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_540);
  }
  return (bool)local_5c6;
}

