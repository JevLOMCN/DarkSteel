// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147130db0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_WithPayload::InstantTest
          (FArchetypeEntityCollection_WithPayload *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TArrayView<FStructArrayView,int> *pTVar6;
  FMassGenericPayloadView *pFVar7;
  TArrayView<FMassEntityHandle_const_,int> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  char *pcVar11;
  TArrayView<FStructArrayView,int> *pTVar12;
  undefined1 *puVar13;
  int local_3b4;
  int local_3b0;
  char local_3ac [12];
  TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_> local_3a0;
  int local_390;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_388;
  int local_378;
  TArray<int,TSizedDefaultAllocator<32>_> local_370;
  uint local_360;
  uint local_35c;
  uint local_358;
  int local_354;
  int local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_338;
  uint local_330;
  uint local_32c;
  int local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  int local_310;
  int local_30c;
  longlong *local_308;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_2f0;
  TCheckedPointerIterator<int,int,0> local_2e0;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2a8;
  FScriptContainerElement *local_2a0;
  int *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong local_288;
  longlong local_280;
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  longlong local_220;
  longlong local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  undefined8 *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  longlong local_1a0;
  longlong local_198;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  int *local_178;
  TArrayView<FMassEntityHandle_const_,int> *local_170;
  FMassEntityManager *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  undefined4 local_148;
  undefined4 local_144;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FAutomationTestBase *local_120;
  int local_118;
  FTestFragment_Int local_114;
  int local_110;
  undefined4 local_108;
  undefined4 local_104;
  FString local_f8;
  TArrayView<FStructArrayView,int> local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  FMassGenericPayloadView local_98;
  TArrayView<FMassEntityHandle_const_,int> local_88;
  TCheckedPointerIterator<int,int,0> local_78;
  FStructArrayView local_60;
  TArrayView<FStructArrayView,int> local_48;
  FMassGenericPayloadView local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  local_328 = *(int *)&this->field_0x98;
  local_2fc = *(int *)&this->field_0x98;
  local_2f4 = (int)(__real_3fe3333333333333 * (double)local_2fc);
  local_300 = local_328;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_388.AllocatorInstance);
  local_388.ArrayNum = 0;
  local_388.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_388.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3a0.AllocatorInstance);
  local_3a0.ArrayNum = 0;
  local_3a0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3a0.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_370.AllocatorInstance);
  local_370.ArrayNum = 0;
  local_370.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_370.AllocatorInstance);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,local_328,&local_370.AllocatorInstance,&local_370.ArrayNum,&local_370.ArrayMax);
  for (local_3b4 = 0; local_2f8 = local_370.ArrayNum, local_3b4 < local_370.ArrayNum;
      local_3b4 = local_3b4 + 1) {
    local_32c = (uint)(-1 < local_3b4);
    local_330 = (uint)(local_3b4 < local_370.ArrayNum);
    if (-1 >= local_3b4 || local_3b4 >= local_370.ArrayNum) {
      local_108 = 0;
      local_104 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_2c0 = local_370.AllocatorInstance.Data + (longlong)local_3b4 * 4;
    *(int *)local_2c0 = local_3b4;
  }
  FGenericPlatformMath::SRandInit(local_328);
  Algo::RandomShuffle<TArray<int,TSizedDefaultAllocator<32>_>_&>(&local_370);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_370,local_2f4,Default);
  local_338 = &local_370;
  TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
            (&local_2e0,&local_370.ArrayNum,(int *)local_370.AllocatorInstance.Data);
  local_2a8 = (local_338->AllocatorInstance).Data;
  local_310 = local_338->ArrayNum;
  local_2a0 = local_2a8;
  TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
            (&local_78,&local_338->ArrayNum,(int *)(local_2a8 + (longlong)local_310 * 4));
  while( true ) {
    if (*local_2e0.CurrentNum != local_2e0.InitialNum) {
      pcVar11 = local_3ac;
      for (lVar9 = 1; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pcVar11 = '\0';
        pcVar11 = pcVar11 + 1;
      }
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3ac);
    }
    local_3ac[1] = local_2e0.Ptr != local_78.Ptr;
    local_360 = (uint)(byte)local_3ac[1];
    if (!(bool)local_3ac[1]) break;
    local_298 = local_2e0.Ptr;
    local_390 = *local_2e0.Ptr;
    local_308 = (longlong *)&this->field_0x90;
    local_358 = (uint)(-1 < local_390);
    bVar4 = local_390 < *(int *)&this->field_0x98;
    local_35c = (uint)bVar4;
    if (-1 >= local_390 || !bVar4) {
      local_290 = 0;
      local_28c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_288 = *local_308;
    local_320 = (FScriptContainerElement *)(local_288 + (longlong)local_390 * 8);
    local_270 = local_388.AllocatorInstance.Data;
    local_268 = local_388.AllocatorInstance.Data;
    local_260 = local_388.AllocatorInstance.Data;
    local_280 = local_288;
    local_278 = local_320;
    if (local_388.AllocatorInstance.Data <= local_320) {
      local_258 = local_388.AllocatorInstance.Data;
      local_250 = local_388.AllocatorInstance.Data;
      local_248 = local_388.AllocatorInstance.Data;
      if (local_320 < local_388.AllocatorInstance.Data + (longlong)local_388.ArrayMax * 8) {
        local_240 = 0;
        local_23c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_220 = (longlong)local_388.ArrayNum;
        local_218 = (longlong)local_388.ArrayMax;
        local_238 = local_388.AllocatorInstance.Data;
        local_230 = local_388.AllocatorInstance.Data;
        local_228 = local_388.AllocatorInstance.Data;
        local_210 = local_388.AllocatorInstance.Data;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
    }
    if (local_388.ArrayNum == local_388.ArrayMax) {
      local_388.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_388.AllocatorInstance,&local_388.ArrayMax);
    }
    local_354 = local_388.ArrayNum;
    local_208 = local_388.AllocatorInstance.Data;
    local_200 = local_388.AllocatorInstance.Data + (longlong)local_388.ArrayNum * 8;
    local_388.ArrayNum = local_388.ArrayNum + 1;
    local_1f8 = ::operator_new(8,local_200);
    *local_1f8 = *(undefined8 *)local_320;
    local_118 = local_354;
    local_318 = (FScriptContainerElement *)
                FTestFragment_Int::FTestFragment_Int(&local_114,local_390);
    local_1f0 = local_3a0.AllocatorInstance.Data;
    local_1e8 = local_3a0.AllocatorInstance.Data;
    local_1e0 = local_3a0.AllocatorInstance.Data;
    if (local_3a0.AllocatorInstance.Data <= local_318) {
      local_1d8 = local_3a0.AllocatorInstance.Data;
      local_1d0 = local_3a0.AllocatorInstance.Data;
      local_1c8 = local_3a0.AllocatorInstance.Data;
      if (local_318 < local_3a0.AllocatorInstance.Data + (longlong)local_3a0.ArrayMax * 4) {
        local_1c0 = 0;
        local_1bc = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_1a0 = (longlong)local_3a0.ArrayNum;
        local_198 = (longlong)local_3a0.ArrayMax;
        local_1b8 = local_3a0.AllocatorInstance.Data;
        local_1b0 = local_3a0.AllocatorInstance.Data;
        local_1a8 = local_3a0.AllocatorInstance.Data;
        local_190 = local_3a0.AllocatorInstance.Data;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
    }
    if (local_3a0.ArrayNum == local_3a0.ArrayMax) {
      local_3a0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_3a0.AllocatorInstance,&local_3a0.ArrayMax);
    }
    local_350 = local_3a0.ArrayNum;
    local_188 = local_3a0.AllocatorInstance.Data;
    local_180 = local_3a0.AllocatorInstance.Data + (longlong)local_3a0.ArrayNum * 4;
    local_3a0.ArrayNum = local_3a0.ArrayNum + 1;
    local_178 = ::operator_new(4,local_180);
    *local_178 = *(int *)local_318;
    local_110 = local_350;
    local_2e0.Ptr = local_2e0.Ptr + 1;
  }
  FStructArrayView::FStructArrayView<FTestFragment_Int>(&local_60,&local_3a0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2f0.AllocatorInstance);
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2f0.AllocatorInstance);
  pTVar6 = MakeArrayView<FStructArrayView>(&local_48,&local_60,1);
  pTVar12 = &local_e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar12->DataPtr = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar6->DataPtr + 1);
    pTVar12 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar12->DataPtr + 1);
  }
  pFVar7 = FMassGenericPayloadView::FMassGenericPayloadView(&local_38,&local_e8);
  puVar10 = local_d8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&(pFVar7->Content).DataPtr;
    pFVar7 = (FMassGenericPayloadView *)((longlong)&(pFVar7->Content).DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_d8;
  puVar13 = local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  local_170 = &local_28;
  pTVar8 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_170,&local_388);
  puVar10 = local_c8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
    pTVar8 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_c8;
  puVar13 = local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  local_168 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  puVar10 = local_b8;
  pFVar7 = &local_98;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&(pFVar7->Content).DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pFVar7 = (FMassGenericPayloadView *)((longlong)&(pFVar7->Content).DataPtr + 1);
  }
  puVar10 = local_a8;
  pTVar8 = &local_88;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar8->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar8 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
  }
  FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
            (local_168,&local_88,FoldDuplicates,&local_98,&local_2f0);
  local_3b0 = 1;
  while( true ) {
    local_30c = local_3a0.ArrayNum;
    if (local_3a0.ArrayNum <= local_3b0) {
      local_3ac[4] = 1;
      TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_2f0);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_370);
      TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_3a0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_388);
      return (bool)local_3ac[4];
    }
    local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_348 = (uint)(-1 < local_3b0);
    local_34c = (uint)(local_3b0 < local_3a0.ArrayNum);
    if (-1 >= local_3b0 || local_3b0 >= local_3a0.ArrayNum) {
      local_160 = 0;
      local_15c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_158 = local_3a0.AllocatorInstance.Data;
    local_150 = local_3a0.AllocatorInstance.Data;
    local_130 = local_3a0.AllocatorInstance.Data + (longlong)local_3b0 * 4;
    local_378 = local_3b0 + -1;
    local_340 = (uint)(-1 < local_378);
    local_344 = (uint)(local_378 < local_3a0.ArrayNum);
    if (-1 >= local_378 || local_378 >= local_3a0.ArrayNum) {
      local_148 = 0;
      local_144 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_140 = local_3a0.AllocatorInstance.Data;
    local_138 = local_3a0.AllocatorInstance.Data;
    local_128 = local_3a0.AllocatorInstance.Data + (longlong)local_378 * 4;
    iVar1 = *(int *)local_128;
    iVar2 = *(int *)local_130;
    ::FString::FString(&local_f8,"Items in Payload should be arranged in an ascending manner");
    bVar4 = FAutomationTestBase::TestTrue(local_120,&local_f8,iVar1 <= iVar2);
    local_3ac[2] = !bVar4;
    local_33c = (uint)(byte)local_3ac[2];
    ::FString::~FString(&local_f8);
    if (local_3ac[2] != '\0') break;
    local_3b0 = local_3b0 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  local_3ac[3] = 0;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_2f0);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_370);
  TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>::
  ~TArray<FTestFragment_Int,TSizedDefaultAllocator<32>_>(&local_3a0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_388);
  return (bool)local_3ac[3];
}

