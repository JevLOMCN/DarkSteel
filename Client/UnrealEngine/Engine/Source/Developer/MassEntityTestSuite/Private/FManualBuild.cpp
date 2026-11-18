// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14716efa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014716f56c) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::CreationContext::FManualBuild::InstantTest(FManualBuild *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FStructArrayView,int> *pTVar4;
  FMassGenericPayloadView *pFVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  UScriptStruct *pUVar7;
  FCreationContext *this_00;
  longlong lVar8;
  undefined1 *puVar9;
  TArrayView<FStructArrayView,int> *pTVar10;
  undefined1 *puVar11;
  FMassArchetypeCreationParams *pFVar12;
  FMassArchetypeSharedFragmentValues *pFVar13;
  undefined1 auStackY_418 [32];
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> local_3c0;
  int local_3b0;
  int local_3ac;
  TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_> local_3a8;
  int local_398;
  uint local_394;
  undefined4 local_390;
  uint local_38c;
  uint local_388;
  FScriptContainerElement *local_380;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_378;
  int local_368;
  int local_364;
  int local_360;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_358;
  FScriptContainerElement *local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  longlong local_300;
  longlong local_2f8;
  FScriptContainerElement *local_2f0;
  FScriptContainerElement *local_2e8;
  FScriptContainerElement *local_2e0;
  float *local_2d8;
  FMassEntityManager *local_2d0;
  FMassEntityManager *local_2c8;
  TArrayView<FMassEntityHandle_const_,int> *local_2c0;
  FMassEntityManager *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FMassArchetypeEntityCollectionWithPayload *local_2a0;
  FMassArchetypeEntityCollectionWithPayload *local_298;
  FMassArchetypeEntityCollectionWithPayload *local_290;
  FMassArchetypeCreationParams *local_288;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *local_280;
  FMassArchetypeEntityCollectionWithPayload *local_278;
  FMassEntityManager *local_270;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_268;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_260;
  FAutomationTestBase *local_258;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_250;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_248;
  FAutomationTestBase *local_240;
  FMassEntityManager *local_238;
  FMassEntityManager *local_230;
  FCreationContext *local_228;
  FAutomationTestBase *local_220;
  undefined4 local_218;
  FTestFragment_Float local_214;
  int local_210;
  FScriptContainerElement *local_208;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_200;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_1f0;
  FString local_1e0;
  FString local_1d0;
  TArrayView<FStructArrayView,int> local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  FMassGenericPayloadView local_168;
  TArrayView<FMassEntityHandle_const_,int> local_158;
  FMassArchetypeCreationParams local_148;
  FStructArrayView local_138;
  TArrayView<FMassEntityHandle_const_,int> local_120;
  TArrayView<FStructArrayView,int> local_110;
  FMassGenericPayloadView local_100;
  TArrayView<FMassEntityHandle_const_,int> local_f0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_e0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_d0;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_c0;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_218 = 7;
  local_3ac = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3c0.AllocatorInstance);
  local_3c0.ArrayNum = 0;
  local_3c0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3c0.AllocatorInstance);
  local_3b0 = 0;
  do {
    if (6 < local_3b0) {
      local_2d0 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityManager::GetOrMakeCreationContext(local_2d0,&local_358);
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_378.AllocatorInstance);
      local_378.ArrayNum = 0;
      local_378.ArrayMax =
           TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                     (&local_378.AllocatorInstance);
      local_2c8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityManager::BatchReserveEntities(local_2c8,&local_120,7,&local_378);
      FStructArrayView::FStructArrayView<FTestFragment_Float>(&local_138,&local_3c0);
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_3a8.AllocatorInstance);
      local_3a8.ArrayNum = 0;
      local_3a8.ArrayMax =
           TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                     (&local_3a8.AllocatorInstance);
      pTVar4 = MakeArrayView<FStructArrayView>(&local_110,&local_138,1);
      pTVar10 = &local_1b8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)&pTVar10->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
        pTVar4 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar4->DataPtr + 1);
        pTVar10 = (TArrayView<FStructArrayView,int> *)((longlong)&pTVar10->DataPtr + 1);
      }
      pFVar5 = FMassGenericPayloadView::FMassGenericPayloadView(&local_100,&local_1b8);
      puVar9 = local_1a8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *(undefined1 *)&(pFVar5->Content).DataPtr;
        pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
        puVar9 = puVar9 + 1;
      }
      puVar9 = local_1a8;
      puVar11 = local_188;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      local_2c0 = &local_f0;
      pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
               TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                         (local_2c0,&local_378);
      puVar9 = local_198;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *(undefined1 *)&pTVar6->DataPtr;
        pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
        puVar9 = puVar9 + 1;
      }
      puVar9 = local_198;
      puVar11 = local_178;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      local_2b8 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      puVar9 = local_188;
      pFVar5 = &local_168;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)&(pFVar5->Content).DataPtr = *puVar9;
        puVar9 = puVar9 + 1;
        pFVar5 = (FMassGenericPayloadView *)((longlong)&(pFVar5->Content).DataPtr + 1);
      }
      puVar9 = local_178;
      pTVar6 = &local_158;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)&pTVar6->DataPtr = *puVar9;
        puVar9 = puVar9 + 1;
        pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
      }
      FMassArchetypeEntityCollectionWithPayload::CreateEntityRangesWithPayload
                (local_2b8,&local_158,NoDuplicates,&local_168,&local_3a8);
      local_368 = local_3a8.ArrayNum;
      if (1 < local_3a8.ArrayNum) {
        local_2b0 = 0;
        local_2ac = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityCollections.Num() <= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassCreationContextTest.cpp"
                           ,0x69,
                           L"We expect TargetEntities to only contain archetype-less entities, ones that need to be built"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_270 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      pFVar12 = &local_148;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)&pFVar12->ChunkMemorySize = 0;
        pFVar12 = (FMassArchetypeCreationParams *)((longlong)&pFVar12->ChunkMemorySize + 1);
      }
      local_288 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_148);
      pFVar13 = &local_98;
      for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)&pFVar13->HashCache = 0;
        pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
      }
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
      pUVar7 = FTestFragment_Float::StaticStruct();
      local_280 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  ::
                  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            (&local_c0,pUVar7);
      local_390 = 1;
      local_394 = (uint)(0 < local_3a8.ArrayNum);
      if (local_394 == 0) {
        local_2a8 = 0;
        local_2a4 = 0;
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
      local_2a0 = (FMassArchetypeEntityCollectionWithPayload *)local_3a8.AllocatorInstance.Data;
      local_298 = (FMassArchetypeEntityCollectionWithPayload *)local_3a8.AllocatorInstance.Data;
      local_290 = (FMassArchetypeEntityCollectionWithPayload *)local_3a8.AllocatorInstance.Data;
      local_278 = (FMassArchetypeEntityCollectionWithPayload *)local_3a8.AllocatorInstance.Data;
      FMassEntityManager::BatchBuildEntities
                (local_270,&local_200,
                 (FMassArchetypeEntityCollectionWithPayload *)local_3a8.AllocatorInstance.Data,
                 local_280,&local_98,local_288);
      TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
      ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                (&local_c0);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
      local_258 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_268 = &local_e0;
      local_250 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
                  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_268,&local_200);
      local_260 = &local_d0;
      local_248 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
                  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_260,&local_358);
      ::FString::FString(&local_1e0,L"Creating entities should return the original context");
      bVar2 = FTestHelpers::
              TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_>
                        (&local_1e0,local_248,local_250,local_258);
      local_38c = (uint)!bVar2;
      ::FString::~FString(&local_1e0);
      if (!bVar2) {
        AITestSuite::ConditionallyBreakOnTestFail();
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_200);
        TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_3a8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_358);
        TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
        ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_3c0);
        bVar2 = false;
      }
      else {
        local_3ac = local_3ac + 1;
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_200);
        local_240 = FAITestBase::GetTestRunner((FAITestBase *)this);
        this_00 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_358);
        bVar2 = ObserverManager::FCreationContext::DebugAreEntityCollectionsUpToDate(this_00);
        bVar2 = FAutomationTestBase::TestTrue
                          (local_240,
                           L"CreationContext\'s entity collection should be still valid at this moment since we only added one entity collection/array"
                           ,bVar2);
        if (bVar2) {
          local_228 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->
                                (&local_358);
          local_238 = *(FMassEntityManager **)&this->field_0x28;
          local_230 = local_238;
          ObserverManager::FCreationContext::GetEntityCollections(local_228,&local_1f0,local_238);
          local_220 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_364 = local_1f0.ArrayNum;
          local_360 = local_1f0.ArrayNum;
          ::FString::FString(&local_1d0,
                             L"We expect the number of resulting collections to match expectations")
          ;
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_1d0,local_360,local_3ac,local_220);
          local_388 = (uint)!bVar2;
          ::FString::~FString(&local_1d0);
          if (!bVar2) {
            AITestSuite::ConditionallyBreakOnTestFail();
            TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_1f0);
            TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>
                      (&local_3a8);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
            TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
            ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_358);
            TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
            ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_3c0);
            bVar2 = false;
          }
          else {
            TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_1f0);
            TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>
                      (&local_3a8);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
            TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
            ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_358);
            TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
            ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_3c0);
            bVar2 = true;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollectionWithPayload,TSizedDefaultAllocator<32>_>(&local_3a8)
          ;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
          ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_358);
          TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
          ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_3c0);
          bVar2 = false;
        }
      }
      return bVar2;
    }
    local_380 = (FScriptContainerElement *)
                FTestFragment_Float::FTestFragment_Float(&local_214,(float)local_3b0);
    local_208 = local_3c0.AllocatorInstance.Data;
    local_348 = local_3c0.AllocatorInstance.Data;
    local_340 = local_3c0.AllocatorInstance.Data;
    if (local_3c0.AllocatorInstance.Data <= local_380) {
      local_338 = local_3c0.AllocatorInstance.Data;
      local_330 = local_3c0.AllocatorInstance.Data;
      local_328 = local_3c0.AllocatorInstance.Data;
      if (local_380 < local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayMax * 4) {
        local_320 = 0;
        local_31c = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_300 = (longlong)local_3c0.ArrayNum;
        local_2f8 = (longlong)local_3c0.ArrayMax;
        local_318 = local_3c0.AllocatorInstance.Data;
        local_310 = local_3c0.AllocatorInstance.Data;
        local_308 = local_3c0.AllocatorInstance.Data;
        local_2f0 = local_3c0.AllocatorInstance.Data;
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
    if (local_3c0.ArrayNum == local_3c0.ArrayMax) {
      local_3c0.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_3c0.AllocatorInstance,&local_3c0.ArrayMax);
    }
    local_398 = local_3c0.ArrayNum;
    local_2e8 = local_3c0.AllocatorInstance.Data;
    local_2e0 = local_3c0.AllocatorInstance.Data + (longlong)local_3c0.ArrayNum * 4;
    local_3c0.ArrayNum = local_3c0.ArrayNum + 1;
    local_2d8 = ::operator_new(4,local_2e0);
    *local_2d8 = *(float *)local_380;
    local_210 = local_398;
    local_3b0 = local_3b0 + 1;
  } while( true );
}

