// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14712fb10

/* WARNING: Removing unreachable block (ram,0x00014713098a) */
/* WARNING: Removing unreachable block (ram,0x000147130b92) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_TrivialDuplicatesWithPayload::
InstantTest(FArchetypeEntityCollection_TrivialDuplicatesWithPayload *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FStructArrayView,int> *pTVar4;
  FMassGenericPayloadView *pFVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  FArchetypeEntityRange *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  TArrayView<FStructArrayView,int> *pTVar10;
  undefined1 *puVar11;
  TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> local_4f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_4e8;
  char local_4d8;
  undefined1 local_4d7;
  char local_4d6;
  undefined1 local_4d5;
  char local_4d4;
  undefined1 local_4d3;
  undefined1 local_4d2;
  int local_4d0;
  int local_4c8;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_4c0;
  uint local_4b0;
  uint local_4ac;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  uint local_49c;
  uint local_498;
  int local_494;
  int local_490;
  uint local_48c;
  uint local_488;
  undefined4 local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  undefined4 local_474;
  FScriptContainerElement *local_470;
  FScriptContainerElement *local_468;
  FScriptContainerElement *local_460;
  FScriptContainerElement *local_458;
  undefined4 local_450;
  int local_44c;
  int local_448;
  int local_444;
  int local_440;
  int local_43c;
  int local_438;
  longlong *local_430;
  longlong *local_428;
  FTestFragment_Int local_420;
  int local_41c;
  int local_418;
  FTestFragment_Int local_414;
  int local_410;
  FMassEntityManager *local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  longlong local_3f8;
  longlong local_3f0;
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  FScriptContainerElement *local_3d8;
  FScriptContainerElement *local_3d0;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  longlong local_390;
  longlong local_388;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  FScriptContainerElement *local_370;
  undefined8 *local_368;
  FScriptContainerElement *local_360;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  FScriptContainerElement *local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  longlong local_310;
  longlong local_308;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  FScriptContainerElement *local_2f0;
  int *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  longlong local_2d8;
  longlong local_2d0;
  FScriptContainerElement *local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  FScriptContainerElement *local_2a8;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  longlong local_270;
  longlong local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  undefined8 *local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  int *local_1c8;
  TArrayView<FMassEntityHandle_const_,int> *local_1c0;
  FMassEntityManager *local_1b8;
  FAutomationTestBase *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  FMassArchetypeEntityCollectionWithPayload *local_1a0;
  FMassArchetypeEntityCollectionWithPayload *local_198;
  FMassArchetypeEntityCollectionWithPayload *local_190;
  FMassArchetypeEntityCollection *local_188;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_180;
  FAutomationTestBase *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  FMassArchetypeEntityCollectionWithPayload *local_168;
  FMassArchetypeEntityCollectionWithPayload *local_160;
  FMassArchetypeEntityCollectionWithPayload *local_158;
  FMassArchetypeEntityCollection *local_150;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_148;
  FAutomationTestBase *local_140;
  undefined4 local_138;
  int local_134;
  int local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  TArrayView<FStructArrayView,int> local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  FMassGenericPayloadView local_a8;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  FStructArrayView local_88;
  TArrayView<FStructArrayView,int> local_70;
  FMassGenericPayloadView local_60;
  TArrayView<FMassEntityHandle_const_,int> local_50;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_40;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_30 [2];
  
  local_408 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_4a0 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                        (local_408,(FMassArchetypeHandle *)&this->field_0x50);
  local_450 = *(undefined4 *)&this->field_0x98;
  local_44c = *(int *)&this->field_0x98;
  local_134 = (int)(__real_3fe3333333333333 * (double)local_44c);
  local_138 = local_450;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_4e8.AllocatorInstance);
  local_4e8.ArrayNum = 0;
  local_4e8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_4e8.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_4f8.AllocatorInstance);
  local_4f8.ArrayNum = 0;
  local_4f8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_4f8.AllocatorInstance);
  local_430 = (longlong *)&this->field_0x90;
  local_4d0 = local_4a0 + 0x14;
  local_4ac = (uint)(-1 < local_4d0);
  bVar2 = local_4d0 < *(int *)&this->field_0x98;
  local_4b0 = (uint)bVar2;
  if (-1 >= local_4d0 || !bVar2) {
    local_400 = 0;
    local_3fc = 0;
    UE::Core::Private::FormatStringSan::
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
  local_3f8 = *local_430;
  local_470 = (FScriptContainerElement *)(local_3f8 + (longlong)local_4d0 * 8);
  local_3e0 = local_4e8.AllocatorInstance.Data;
  local_3d8 = local_4e8.AllocatorInstance.Data;
  local_3d0 = local_4e8.AllocatorInstance.Data;
  local_3f0 = local_3f8;
  local_3e8 = local_470;
  if (local_4e8.AllocatorInstance.Data <= local_470) {
    local_3c8 = local_4e8.AllocatorInstance.Data;
    local_3c0 = local_4e8.AllocatorInstance.Data;
    local_3b8 = local_4e8.AllocatorInstance.Data;
    if (local_470 < local_4e8.AllocatorInstance.Data + (longlong)local_4e8.ArrayMax * 8) {
      local_3b0 = 0;
      local_3ac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_390 = (longlong)local_4e8.ArrayNum;
      local_388 = (longlong)local_4e8.ArrayMax;
      local_3a8 = local_4e8.AllocatorInstance.Data;
      local_3a0 = local_4e8.AllocatorInstance.Data;
      local_398 = local_4e8.AllocatorInstance.Data;
      local_380 = local_4e8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_4e8.ArrayNum == local_4e8.ArrayMax) {
    local_4e8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_4e8.AllocatorInstance,&local_4e8.ArrayMax);
  }
  local_4a8 = local_4e8.ArrayNum;
  local_378 = local_4e8.AllocatorInstance.Data;
  local_370 = local_4e8.AllocatorInstance.Data + (longlong)local_4e8.ArrayNum * 8;
  local_4e8.ArrayNum = local_4e8.ArrayNum + 1;
  local_368 = ::operator_new(8,local_370);
  *local_368 = *(undefined8 *)local_470;
  local_130 = local_4a8;
  local_468 = (FScriptContainerElement *)FTestFragment_Int::FTestFragment_Int(&local_420,0);
  local_360 = local_4f8.AllocatorInstance.Data;
  local_358 = local_4f8.AllocatorInstance.Data;
  local_350 = local_4f8.AllocatorInstance.Data;
  if (local_4f8.AllocatorInstance.Data <= local_468) {
    local_348 = local_4f8.AllocatorInstance.Data;
    local_340 = local_4f8.AllocatorInstance.Data;
    local_338 = local_4f8.AllocatorInstance.Data;
    if (local_468 < local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayMax * 4) {
      local_330 = 0;
      local_32c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_310 = (longlong)local_4f8.ArrayNum;
      local_308 = (longlong)local_4f8.ArrayMax;
      local_328 = local_4f8.AllocatorInstance.Data;
      local_320 = local_4f8.AllocatorInstance.Data;
      local_318 = local_4f8.AllocatorInstance.Data;
      local_300 = local_4f8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_4f8.ArrayNum == local_4f8.ArrayMax) {
    local_4f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_4f8.AllocatorInstance,&local_4f8.ArrayMax);
  }
  local_4a4 = local_4f8.ArrayNum;
  local_2f8 = local_4f8.AllocatorInstance.Data;
  local_2f0 = local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayNum * 4;
  local_4f8.ArrayNum = local_4f8.ArrayNum + 1;
  local_2e8 = ::operator_new(4,local_2f0);
  *local_2e8 = *(int *)local_468;
  local_41c = local_4a4;
  local_428 = (longlong *)&this->field_0x90;
  local_4c8 = local_4a0 + 0x14;
  local_498 = (uint)(-1 < local_4c8);
  bVar2 = local_4c8 < *(int *)&this->field_0x98;
  local_49c = (uint)bVar2;
  if (-1 >= local_4c8 || !bVar2) {
    local_2e0 = 0;
    local_2dc = 0;
    UE::Core::Private::FormatStringSan::
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
  local_2d8 = *local_428;
  local_460 = (FScriptContainerElement *)(local_2d8 + (longlong)local_4c8 * 8);
  local_2c0 = local_4e8.AllocatorInstance.Data;
  local_2b8 = local_4e8.AllocatorInstance.Data;
  local_2b0 = local_4e8.AllocatorInstance.Data;
  local_2d0 = local_2d8;
  local_2c8 = local_460;
  if (local_4e8.AllocatorInstance.Data <= local_460) {
    local_2a8 = local_4e8.AllocatorInstance.Data;
    local_2a0 = local_4e8.AllocatorInstance.Data;
    local_298 = local_4e8.AllocatorInstance.Data;
    if (local_460 < local_4e8.AllocatorInstance.Data + (longlong)local_4e8.ArrayMax * 8) {
      local_290 = 0;
      local_28c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_270 = (longlong)local_4e8.ArrayNum;
      local_268 = (longlong)local_4e8.ArrayMax;
      local_288 = local_4e8.AllocatorInstance.Data;
      local_280 = local_4e8.AllocatorInstance.Data;
      local_278 = local_4e8.AllocatorInstance.Data;
      local_260 = local_4e8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_4e8.ArrayNum == local_4e8.ArrayMax) {
    local_4e8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_4e8.AllocatorInstance,&local_4e8.ArrayMax);
  }
  local_494 = local_4e8.ArrayNum;
  local_258 = local_4e8.AllocatorInstance.Data;
  local_250 = local_4e8.AllocatorInstance.Data + (longlong)local_4e8.ArrayNum * 8;
  local_4e8.ArrayNum = local_4e8.ArrayNum + 1;
  local_248 = ::operator_new(8,local_250);
  *local_248 = *(undefined8 *)local_460;
  local_418 = local_494;
  local_458 = (FScriptContainerElement *)FTestFragment_Int::FTestFragment_Int(&local_414,1);
  local_240 = local_4f8.AllocatorInstance.Data;
  local_238 = local_4f8.AllocatorInstance.Data;
  local_230 = local_4f8.AllocatorInstance.Data;
  if (local_4f8.AllocatorInstance.Data <= local_458) {
    local_228 = local_4f8.AllocatorInstance.Data;
    local_220 = local_4f8.AllocatorInstance.Data;
    local_218 = local_4f8.AllocatorInstance.Data;
    if (local_458 < local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayMax * 4) {
      local_210 = 0;
      local_20c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1f0 = (longlong)local_4f8.ArrayNum;
      local_1e8 = (longlong)local_4f8.ArrayMax;
      local_208 = local_4f8.AllocatorInstance.Data;
      local_200 = local_4f8.AllocatorInstance.Data;
      local_1f8 = local_4f8.AllocatorInstance.Data;
      local_1e0 = local_4f8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  if (local_4f8.ArrayNum == local_4f8.ArrayMax) {
    local_4f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_4f8.AllocatorInstance,&local_4f8.ArrayMax);
  }
  local_490 = local_4f8.ArrayNum;
  local_1d8 = local_4f8.AllocatorInstance.Data;
  local_1d0 = local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayNum * 4;
  local_4f8.ArrayNum = local_4f8.ArrayNum + 1;
  local_1c8 = ::operator_new(4,local_1d0);
  *local_1c8 = *(int *)local_458;
  local_410 = local_490;
  FStructArrayView::FStructArrayView<FTestFragment_Int>(&local_88,&local_4f8);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_4c0.AllocatorInstance);
  local_4c0.ArrayNum = 0;
  local_4c0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_4c0.AllocatorInstance);
  pTVar4 = MakeArrayView<FStructArrayView>(&local_70,&local_88,1);
  pTVar10 = &local_f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar10->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar10 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar10->DataPtr + 1);
  }
  pFVar5 = FMassGenericPayloadView::FMassGenericPayloadView(&local_60,&local_f8);
  puVar9 = local_e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&(pFVar5->Content).DataPtr;
    pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_e8;
  puVar11 = local_c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_1c0 = &local_50;
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_1c0,&local_4e8);
  puVar9 = local_d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_d8;
  puVar11 = local_b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_1b8 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  puVar9 = local_c8;
  pFVar5 = &local_a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&(pFVar5->Content).DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
  }
  puVar9 = local_b8;
  pTVar6 = &local_98;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (local_1b8,&local_98,FoldDuplicates,&local_a8,&local_4c0);
  local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_448 = local_4c0.ArrayNum;
  local_444 = local_4c0.ArrayNum;
  ::FString::FString(&local_128,L"We expect only a single result");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_128,local_444,1,local_1b0);
  local_4d8 = !bVar2;
  local_478 = (uint)(byte)local_4d8;
  ::FString::~FString(&local_128);
  if (local_4d8 == '\0') {
    local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_474 = 1;
    local_47c = (uint)(0 < local_4c0.ArrayNum);
    if (local_47c == 0) {
      local_1a8 = 0;
      local_1a4 = 0;
      UE::Core::Private::FormatStringSan::
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
    local_1a0 = (FMassArchetypeEntityCollectionWithPayload *)local_4c0.AllocatorInstance.Data;
    local_198 = (FMassArchetypeEntityCollectionWithPayload *)local_4c0.AllocatorInstance.Data;
    local_190 = (FMassArchetypeEntityCollectionWithPayload *)local_4c0.AllocatorInstance.Data;
    local_188 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                          ((FMassArchetypeEntityCollectionWithPayload *)
                           local_4c0.AllocatorInstance.Data);
    local_180 = FMassArchetypeEntityCollection::GetRanges(local_188,&local_40);
    local_440 = local_180->ArrayNum;
    local_43c = local_440;
    ::FString::FString(&local_118,L"We expect only a single resulting range");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_118,local_43c,1,local_178);
    local_4d6 = !bVar2;
    local_48c = (uint)(byte)local_4d6;
    ::FString::~FString(&local_118);
    if (local_4d6 == '\0') {
      local_140 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_484 = 1;
      local_488 = (uint)(0 < local_4c0.ArrayNum);
      if (local_488 == 0) {
        local_170 = 0;
        local_16c = 0;
        UE::Core::Private::FormatStringSan::
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
      local_168 = (FMassArchetypeEntityCollectionWithPayload *)local_4c0.AllocatorInstance.Data;
      local_160 = (FMassArchetypeEntityCollectionWithPayload *)local_4c0.AllocatorInstance.Data;
      local_158 = (FMassArchetypeEntityCollectionWithPayload *)local_4c0.AllocatorInstance.Data;
      local_150 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                            ((FMassArchetypeEntityCollectionWithPayload *)
                             local_4c0.AllocatorInstance.Data);
      local_148 = FMassArchetypeEntityCollection::GetRanges(local_150,local_30);
      pFVar7 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](local_148,0);
      local_438 = pFVar7->Length;
      ::FString::FString(&local_108,L"We expect only a single entity in the resulting range");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_108,local_438,1,local_140);
      local_4d4 = !bVar2;
      local_480 = (uint)(byte)local_4d4;
      ::FString::~FString(&local_108);
      if (local_4d4 == '\0') {
        local_4d2 = 1;
        TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_4c0);
        TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
        ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_4f8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e8);
        local_4d7 = local_4d2;
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_4d3 = 0;
        TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_4c0);
        TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
        ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_4f8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e8);
        local_4d7 = local_4d3;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_4d5 = 0;
      TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_4c0);
      TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_4f8);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e8);
      local_4d7 = local_4d5;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_4d7 = 0;
    TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_4c0);
    TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
    ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_4f8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_4e8);
  }
  return (bool)local_4d7;
}

