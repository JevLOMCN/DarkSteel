// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14712eb10

/* WARNING: Removing unreachable block (ram,0x00014712f4ba) */
/* WARNING: Removing unreachable block (ram,0x00014712f6c2) */
/* WARNING: Removing unreachable block (ram,0x00014712f8ae) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_MultiDuplicatesWithPayload::
InstantTest(FArchetypeEntityCollection_MultiDuplicatesWithPayload *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FStructArrayView,int> *pTVar4;
  FMassGenericPayloadView *pFVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  FArchetypeEntityRange *pFVar7;
  FTestFragment_Int *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  TArrayView<FStructArrayView,int> *pTVar11;
  undefined1 *puVar12;
  TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> local_418;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_408;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_3e8;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  uint local_3cc;
  uint local_3c8;
  undefined4 local_3c4;
  uint local_3c0;
  uint local_3bc;
  undefined4 local_3b8;
  uint local_3b4;
  uint local_3b0;
  undefined4 local_3ac;
  uint local_3a8;
  int local_3a4;
  uint local_3a0;
  uint local_39c;
  FScriptContainerElement *local_398;
  FScriptContainerElement *local_390;
  int local_388;
  undefined4 local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  longlong *local_360;
  undefined4 local_358;
  int local_354;
  FTestFragment_Int local_350;
  int local_34c;
  FMassEntityManager *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  longlong local_338;
  longlong local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  FScriptContainerElement *local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  undefined8 *local_2a8;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  longlong local_250;
  longlong local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  int *local_228;
  TArrayView<FMassEntityHandle_const_,int> *local_220;
  FMassEntityManager *local_218;
  FAutomationTestBase *local_210;
  undefined4 local_208;
  undefined4 local_204;
  FMassArchetypeEntityCollectionWithPayload *local_200;
  FMassArchetypeEntityCollectionWithPayload *local_1f8;
  FMassArchetypeEntityCollectionWithPayload *local_1f0;
  FMassArchetypeEntityCollection *local_1e8;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_1e0;
  FAutomationTestBase *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  FMassArchetypeEntityCollectionWithPayload *local_1c8;
  FMassArchetypeEntityCollectionWithPayload *local_1c0;
  FMassArchetypeEntityCollectionWithPayload *local_1b8;
  FMassArchetypeEntityCollection *local_1b0;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *local_1a8;
  FAutomationTestBase *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FMassArchetypeEntityCollectionWithPayload *local_190;
  FMassArchetypeEntityCollectionWithPayload *local_188;
  FMassArchetypeEntityCollectionWithPayload *local_180;
  FMassGenericPayloadViewSlice *local_178;
  FStructArrayView *local_170;
  FAutomationTestBase *local_168;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TArrayView<FStructArrayView,int> local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  FMassGenericPayloadView local_b8;
  TArrayView<FMassEntityHandle_const_,int> local_a8;
  FStructArrayView local_98;
  TArrayView<FStructArrayView,int> local_80;
  FMassGenericPayloadView local_70;
  TArrayView<FMassEntityHandle_const_,int> local_60;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_50;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_40;
  FStructArrayView local_30;
  
  local_348 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_368 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                        (local_348,(FMassArchetypeHandle *)&this->field_0x50);
  local_384 = *(undefined4 *)&this->field_0x98;
  local_36c = *(int *)&this->field_0x98;
  local_15c = (int)(__real_3fe3333333333333 * (double)local_36c);
  local_160 = local_384;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_408.AllocatorInstance);
  local_408.ArrayNum = 0;
  local_408.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_408.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_418.AllocatorInstance);
  local_418.ArrayNum = 0;
  local_418.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_418.AllocatorInstance);
  local_158 = 3;
  local_358 = 4;
  local_3a4 = 0;
  for (local_3d8 = 0; local_3d8 < 4; local_3d8 = local_3d8 + 1) {
    for (local_3f8 = 0; local_3f8 < 3; local_3f8 = local_3f8 + 1) {
      local_360 = (longlong *)&this->field_0x90;
      local_3f0 = local_368 + 0x14 + local_3f8;
      local_39c = (uint)(-1 < local_3f0);
      bVar2 = local_3f0 < *(int *)&this->field_0x98;
      local_3a0 = (uint)bVar2;
      if (-1 >= local_3f0 || !bVar2) {
        local_340 = 0;
        local_33c = 0;
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
      local_338 = *local_360;
      local_398 = (FScriptContainerElement *)(local_338 + (longlong)local_3f0 * 8);
      local_320 = local_408.AllocatorInstance.Data;
      local_318 = local_408.AllocatorInstance.Data;
      local_310 = local_408.AllocatorInstance.Data;
      local_330 = local_338;
      local_328 = local_398;
      if (local_408.AllocatorInstance.Data <= local_398) {
        local_308 = local_408.AllocatorInstance.Data;
        local_300 = local_408.AllocatorInstance.Data;
        local_2f8 = local_408.AllocatorInstance.Data;
        if (local_398 < local_408.AllocatorInstance.Data + (longlong)local_408.ArrayMax * 8) {
          local_2f0 = 0;
          local_2ec = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_2d0 = (longlong)local_408.ArrayNum;
          local_2c8 = (longlong)local_408.ArrayMax;
          local_2e8 = local_408.AllocatorInstance.Data;
          local_2e0 = local_408.AllocatorInstance.Data;
          local_2d8 = local_408.AllocatorInstance.Data;
          local_2c0 = local_408.AllocatorInstance.Data;
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
      if (local_408.ArrayNum == local_408.ArrayMax) {
        local_408.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_408.AllocatorInstance,&local_408.ArrayMax);
      }
      local_3d4 = local_408.ArrayNum;
      local_2b8 = local_408.AllocatorInstance.Data;
      local_2b0 = local_408.AllocatorInstance.Data + (longlong)local_408.ArrayNum * 8;
      local_408.ArrayNum = local_408.ArrayNum + 1;
      local_2a8 = ::operator_new(8,local_2b0);
      *local_2a8 = *(undefined8 *)local_398;
      local_354 = local_3d4;
      local_390 = (FScriptContainerElement *)
                  FTestFragment_Int::FTestFragment_Int(&local_350,local_3f8);
      local_2a0 = local_418.AllocatorInstance.Data;
      local_298 = local_418.AllocatorInstance.Data;
      local_290 = local_418.AllocatorInstance.Data;
      if (local_418.AllocatorInstance.Data <= local_390) {
        local_288 = local_418.AllocatorInstance.Data;
        local_280 = local_418.AllocatorInstance.Data;
        local_278 = local_418.AllocatorInstance.Data;
        if (local_390 < local_418.AllocatorInstance.Data + (longlong)local_418.ArrayMax * 4) {
          local_270 = 0;
          local_26c = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_250 = (longlong)local_418.ArrayNum;
          local_248 = (longlong)local_418.ArrayMax;
          local_268 = local_418.AllocatorInstance.Data;
          local_260 = local_418.AllocatorInstance.Data;
          local_258 = local_418.AllocatorInstance.Data;
          local_240 = local_418.AllocatorInstance.Data;
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
      if (local_418.ArrayNum == local_418.ArrayMax) {
        local_418.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_418.AllocatorInstance,&local_418.ArrayMax);
      }
      local_3d0 = local_418.ArrayNum;
      local_238 = local_418.AllocatorInstance.Data;
      local_230 = local_418.AllocatorInstance.Data + (longlong)local_418.ArrayNum * 4;
      local_418.ArrayNum = local_418.ArrayNum + 1;
      local_228 = ::operator_new(4,local_230);
      *local_228 = *(int *)local_390;
      local_34c = local_3d0;
    }
    local_3a4 = local_3a4 + 1;
  }
  FStructArrayView::FStructArrayView<FTestFragment_Int>(&local_98,&local_418);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3e8.AllocatorInstance);
  local_3e8.ArrayNum = 0;
  local_3e8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3e8.AllocatorInstance);
  pTVar4 = MakeArrayView<FStructArrayView>(&local_80,&local_98,1);
  pTVar11 = &local_108;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  pFVar5 = FMassGenericPayloadView::FMassGenericPayloadView(&local_70,&local_108);
  puVar10 = local_f8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&(pFVar5->Content).DataPtr;
    pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_f8;
  puVar12 = local_d8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  local_220 = &local_60;
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_220,&local_408);
  puVar10 = local_e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_e8;
  puVar12 = local_c8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  local_218 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  puVar10 = local_d8;
  pFVar5 = &local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&(pFVar5->Content).DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
  }
  puVar10 = local_c8;
  pTVar6 = &local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (local_218,&local_a8,FoldDuplicates,&local_b8,&local_3e8);
  local_210 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_388 = local_3e8.ArrayNum;
  local_370 = local_3e8.ArrayNum;
  ::FString::FString(&local_150,L"We expect only a single result");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_150,local_370,1,local_210);
  local_3cc = (uint)!bVar2;
  ::FString::~FString(&local_150);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_3e8);
    TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
    ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_418);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_408);
    bVar2 = false;
  }
  else {
    local_1d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_3c4 = 1;
    local_3c8 = (uint)(0 < local_3e8.ArrayNum);
    if (local_3c8 == 0) {
      local_208 = 0;
      local_204 = 0;
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
    local_200 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
    local_1f8 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
    local_1f0 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
    local_1e8 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                          ((FMassArchetypeEntityCollectionWithPayload *)
                           local_3e8.AllocatorInstance.Data);
    local_1e0 = FMassArchetypeEntityCollection::GetRanges(local_1e8,&local_50);
    local_380 = local_1e0->ArrayNum;
    local_37c = local_380;
    ::FString::FString(&local_140,L"We expect only a single resulting range");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_140,local_37c,1,local_1d8);
    local_3c0 = (uint)!bVar2;
    ::FString::~FString(&local_140);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_3e8);
      TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_418);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_408);
      bVar2 = false;
    }
    else {
      local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_3b8 = 1;
      local_3bc = (uint)(0 < local_3e8.ArrayNum);
      if (local_3bc == 0) {
        local_1d0 = 0;
        local_1cc = 0;
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
      local_1c8 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
      local_1c0 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
      local_1b8 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
      local_1b0 = FMassArchetypeEntityCollectionWithPayload::GetEntityCollection
                            ((FMassArchetypeEntityCollectionWithPayload *)
                             local_3e8.AllocatorInstance.Data);
      local_1a8 = FMassArchetypeEntityCollection::GetRanges(local_1b0,&local_40);
      pFVar7 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](local_1a8,0);
      local_378 = pFVar7->Length;
      ::FString::FString(&local_130,L"We expect exatly NumUniques entities in the resulting range");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_130,local_378,3,local_1a0);
      local_3b4 = (uint)!bVar2;
      ::FString::~FString(&local_130);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_3e8);
        TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
        ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_418);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_408);
        bVar2 = false;
      }
      else {
        local_3ac = 1;
        local_3b0 = (uint)(0 < local_3e8.ArrayNum);
        if (local_3b0 == 0) {
          local_198 = 0;
          local_194 = 0;
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
        local_190 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
        local_188 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
        local_180 = (FMassArchetypeEntityCollectionWithPayload *)local_3e8.AllocatorInstance.Data;
        local_178 = FMassArchetypeEntityCollectionWithPayload::GetPayload
                              ((FMassArchetypeEntityCollectionWithPayload *)
                               local_3e8.AllocatorInstance.Data);
        for (local_3f4 = 0; local_3f4 < 3; local_3f4 = local_3f4 + 1) {
          local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_170 = FMassGenericPayloadViewSlice::operator[](local_178,&local_30,0);
          pFVar8 = FStructArrayView::GetAt<FTestFragment_Int>(local_170,local_3f4);
          local_374 = pFVar8->Value;
          ::FString::FString(&local_120,"The surviving payload value should match the expected");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_120,local_374,local_3f4,local_168);
          local_3a8 = (uint)!bVar2;
          ::FString::~FString(&local_120);
          if (!bVar2) {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>
                      (&local_3e8);
            TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
            ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_418);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_408);
            return false;
          }
        }
        TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_3e8);
        TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
        ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_418);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_408);
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

