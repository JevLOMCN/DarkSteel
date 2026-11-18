// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146245320

EAutomationTestFlags __thiscall
FAutoRTFMMovieSceneTests::GetTestFlags(FAutoRTFMMovieSceneTests *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 146245370

bool __thiscall FAutoRTFMMovieSceneTests::IsStressTest(FAutoRTFMMovieSceneTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146245380

uint __thiscall FAutoRTFMMovieSceneTests::GetRequiredDeviceNum(FAutoRTFMMovieSceneTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 146245390

FString * __thiscall
FAutoRTFMMovieSceneTests::GetTestSourceFileName
          (FAutoRTFMMovieSceneTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\AutoRTFM\\AutoRTFMMovieSceneTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1462453c0

int __thiscall FAutoRTFMMovieSceneTests::GetTestSourceFileLine(FAutoRTFMMovieSceneTests *this)

{
  return 0x19;
}

// GetTests @ 1462453d0

/* WARNING: Removing unreachable block (ram,0x0001462454bd) */
/* WARNING: Removing unreachable block (ram,0x000146245588) */

void __thiscall
FAutoRTFMMovieSceneTests::GetTests
          (FAutoRTFMMovieSceneTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + Movie Scene");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1462455b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutoRTFMMovieSceneTests::RunTest(FAutoRTFMMovieSceneTests *this,FString *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAutoRTFMMovieSceneTests *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FTaskID FVar9;
  longlong lVar10;
  undefined1 auStackY_8b8 [32];
  FTaskID local_840;
  FAutomationEvent local_838;
  FAutomationEvent local_800;
  FAutoRTFMMovieSceneTests *local_7c8;
  FString local_7c0;
  undefined1 local_7b0 [16];
  FString local_7a0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_790;
  byte local_780;
  code *local_778;
  undefined1 local_770;
  undefined1 local_760 [80];
  void *local_710;
  undefined4 local_708;
  FMutualInclusivityGraph local_700;
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> local_648;
  TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator> local_610 [6];
  FEntitySystemScheduler local_4c0;
  FEntityManager local_300;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_7c8 = this;
  bVar6 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar6) {
    FMyTask::WasHit = 0;
    UE::MovieScene::FComponentRegistry::FComponentRegistry((FComponentRegistry *)local_760);
    UE::MovieScene::FEntityManager::FEntityManager(&local_300);
    UE::MovieScene::FEntitySystemScheduler::FEntitySystemScheduler(&local_4c0,&local_300);
    UE::MovieScene::FEntitySystemScheduler::BeginConstruction(&local_4c0);
    pTVar3 = _UNK_150651568;
    pTVar2 = ___xmm_00000000000000000000000000000010;
    lVar10 = 10;
    FVar9.Index = -1;
    do {
      local_780 = local_780 & 0xe0;
      local_790.Object = (ITaskContext *)0x0;
      local_790.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
      local_770 = 0;
      local_778 = `UE::MovieScene::FEntitySystemScheduler::AddTask<FMyTask>'::__l2::FExecute::
                  Execute;
      pTVar8 = ::operator_new(0x18);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        local_7b0._0_8_ = pTVar2;
        local_7b0._8_8_ = pTVar3;
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar8->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_UFMyTask___00_SharedPointerInternals__6B_;
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8[1]._padding_ = (longlong)&___7FMyTask__6B_;
        if (pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar6) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        local_7b0._0_8_ = pTVar8 + 1;
        local_7b0._8_8_ = pTVar8;
      }
      UE::MovieScene::FEntitySystemScheduler::AddTask
                (&local_4c0,(FTaskParams *)&local_840,&local_790,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_7b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      if (FVar9.Index != -1) {
        UE::MovieScene::FEntitySystemScheduler::AddPrerequisite(&local_4c0,FVar9,local_840);
      }
      lVar10 = lVar10 + -1;
      FVar9.Index = local_840.Index;
    } while (lVar10 != 0);
    UE::MovieScene::FEntitySystemScheduler::EndConstruction(&local_4c0);
    UE::MovieScene::FEntitySystemScheduler::ExecuteTasks(&local_4c0);
    ::FString::PrintfImpl(&local_7a0,L"FAILED: %s:%u");
    FVar5.Data = local_7a0.Data.AllocatorInstance.Data;
    pFVar4 = local_7c8;
    local_800.Type = Info;
    local_800.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_800.Message.Data.ArrayNum = local_7a0.Data.ArrayNum;
    if (local_7a0.Data.ArrayNum == 0) {
      local_800.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7a0.Data.ArrayNum,0,(ForAnyElementType *)&local_800.Message,
                 local_7a0.Data.ArrayNum,&local_800.Message.Data.ArrayMax);
      memcpy(local_800.Message.Data.AllocatorInstance.Data,FVar5.Data,
             (longlong)local_7a0.Data.ArrayNum * 2);
    }
    local_800.Artifact.A = 0;
    local_800.Artifact.B = 0;
    local_800.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_800.Context.Data.ArrayNum = 0;
    local_800.Context.Data.ArrayMax = 0;
    local_800.Artifact.C = 0;
    local_800.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&pFVar4->field_0x30,&local_800,0,true);
    if (local_800.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Context.Data.AllocatorInstance.Data);
    }
    if (local_800.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Message.Data.AllocatorInstance.Data);
    }
    if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
    }
    UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(&local_4c0);
    UE::MovieScene::FEntityManager::~FEntityManager(&local_300);
    TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>::
    ~TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>(local_610);
    TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>::
    ~TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>(&local_648);
    UE::MovieScene::FMutualInclusivityGraph::~FMutualInclusivityGraph(&local_700);
    local_708 = 0;
    if (local_710 != (void *)0x0) {
      FMemory::Free(local_710);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_760 + 0x10));
    DestructItems<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_760._0_8_,
               local_760._8_4_);
    if ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_760._0_8_ !=
        (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)0x0) {
      FMemory::Free((void *)local_760._0_8_);
    }
    bVar6 = false;
  }
  else {
    ::FString::FString(&local_7c0,L"SKIPPED \'FAutoRTFMMovieSceneTests\' test. AutoRTFM disabled.");
    FVar5.Data = local_7c0.Data.AllocatorInstance.Data;
    local_838.Type = Info;
    local_838.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_7c0.Data.ArrayNum == 0) {
      local_838.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7c0.Data.ArrayNum,0,(ForAnyElementType *)&local_838.Message,
                 local_7c0.Data.ArrayNum,&local_838.Message.Data.ArrayMax);
      memcpy(local_838.Message.Data.AllocatorInstance.Data,FVar5.Data,
             (longlong)local_7c0.Data.ArrayNum * 2);
    }
    local_838.Artifact.A = 0;
    local_838.Artifact.B = 0;
    local_838.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_838.Context.Data.ArrayNum = 0;
    local_838.Context.Data.ArrayMax = 0;
    local_838.Artifact.C = 0;
    local_838.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_838,0,true);
    if (local_838.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Context.Data.AllocatorInstance.Data);
    }
    if (local_838.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Message.Data.AllocatorInstance.Data);
    }
    if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
  }
  return bVar6;
}

// GetBeautifiedTestName @ 146245a00

FString * __thiscall
FAutoRTFMMovieSceneTests::GetBeautifiedTestName
          (FAutoRTFMMovieSceneTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + Movie Scene");
  return __return_storage_ptr__;
}

