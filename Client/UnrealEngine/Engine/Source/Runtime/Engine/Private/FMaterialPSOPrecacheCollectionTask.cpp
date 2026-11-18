// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1483fb8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FMaterialPSOPrecacheCollectionTask::DoTask
          (FMaterialPSOPrecacheCollectionTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar4;
  UObject *pUVar5;
  FMaterialShaderMap *this_00;
  FTaskBase *pFVar6;
  longlong lVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  int iVar10;
  bool bVar11;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar12;
  FWriteBuffer *pFVar13;
  ForElementType<FPSOPrecacheRequestResult> FVar14;
  ForElementType<FPSOPrecacheRequestResult> FVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_118 [32];
  undefined1 local_e7 [7];
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> local_e0;
  FLLMScope local_d0;
  FLLMScope local_cc;
  FLLMScope local_c8 [2];
  FMemScope local_c0;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> local_b8;
  FTaskTagScope local_a8;
  TArray<FPSOPrecacheRequestResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_98;
  TLogScope<0> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FLLMScope::FLLMScope(local_c8,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_cc,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_d0,AssetClasses,Default);
  bVar16 = -1 < MetadataChannel->Enabled;
  if (bVar16) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_48);
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId593,"FMaterialPSOPrecacheCollectionTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
               ,0x251);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId593);
  }
  FODSCManager::SuspendODSCForceRecompile();
  if (this->RequestLifecycleID == GMaterialPSORequestManager.LifecycleID) {
    FTaskTagScope::FTaskTagScope(&local_a8,EParallelGameThread);
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    this_00 = (((this->PrecacheParams).Material)->GameThreadShaderMap).Reference;
    if (this_00 != (FMaterialShaderMap *)0x0) {
      pTVar12 = FMaterialShaderMap::CollectPSOPrecacheData(this_00,&local_b8,&this->PrecacheParams);
      if (&local_e0 != pTVar12) {
        DestructItems<FPSOPrecacheData,int>((FPSOPrecacheData *)0x0,0);
        local_e0.AllocatorInstance.Data = (pTVar12->AllocatorInstance).Data;
        (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = pTVar12->ArrayNum;
        local_e0.ArrayMax = pTVar12->ArrayMax;
        pTVar12->ArrayNum = 0;
        pTVar12->ArrayMax = 0;
      }
      DestructItems<FPSOPrecacheData,int>
                ((FPSOPrecacheData *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if ((FPSOPrecacheData *)local_b8.AllocatorInstance.Data != (FPSOPrecacheData *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
    RequestPrecachePSOs(&local_98,MeshPass,&local_e0);
    FMaterialPSORequestManager::MarkCollectionComplete
              (&GMaterialPSORequestManager,&this->PrecacheParams,&local_e0,&local_98,
               this->RequestLifecycleID);
    pTVar4 = this->MaterialInterface;
    pUVar5 = pTVar4->Object;
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
      pTVar4->Object = (UObject *)0x0;
    }
    iVar10 = local_98.ArrayNum;
    if (0 < local_98.ArrayNum) {
      FVar15 = (ForElementType<FPSOPrecacheRequestResult>)&local_98;
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FPSOPrecacheRequestResult>)0x0
         ) {
        FVar15 = local_98.AllocatorInstance.SecondaryData;
      }
      FVar14 = (ForElementType<FPSOPrecacheRequestResult>)
               ((longlong)local_98.ArrayNum * 0x10 + (longlong)FVar15);
      while( true ) {
        if (local_98.ArrayNum != iVar10) {
          local_e7[0] = 0;
          `TCheckedPointerIterator<FPSOPrecacheRequestResult,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_e7);
        }
        if (FVar15 == FVar14) break;
        if (((*(byte *)FVar15 & 3) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                                ,0x276,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar3 = (FTaskBase *)((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar15 + 8))->Reference;
        pFVar6 = (FTaskBase *)(this->CollectionGraphEvent).Reference;
        if (pFVar3 == (FTaskBase *)0x0) {
LAB_1483fbc05:
          FVar15 = (ForElementType<FPSOPrecacheRequestResult>)((longlong)FVar15 + 0x10);
        }
        else {
          if (((pFVar6->NumLocks == (atomic<unsigned_int>)0x0) ||
              (0x7fffffff < (uint)pFVar6->NumLocks)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                  ,0xe3,
                                  L"Prerequisites can be added only before the task is launched"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          LOCK();
          paVar1 = &pFVar6->NumLocks;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((0x7fffffff < (int)aVar2 + 1U) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrevNumLocks + 1 < ExecutionFlag",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                  ,0xea,L"Max number of task prerequisites reached: %d"), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar11 = UE::Tasks::Private::FTaskBase::AddSubsequent(pFVar3,pFVar6);
          if (bVar11) {
            LOCK();
            pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
            UNLOCK();
            UE::Tasks::Private::FTaskBase::
            FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                      (&pFVar6->Prerequisites,pFVar3);
            goto LAB_1483fbc05;
          }
          LOCK();
          pFVar6->NumLocks = (atomic<unsigned_int>)((int)pFVar6->NumLocks + -1);
          UNLOCK();
          FVar15 = (ForElementType<FPSOPrecacheRequestResult>)((longlong)FVar15 + 0x10);
        }
      }
    }
    pFVar3 = (FTaskBase *)(this->CollectionGraphEvent).Reference;
    if (pFVar3->ExtendedPriority == TaskEvent) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar3,0);
    FVar15 = (ForElementType<FPSOPrecacheRequestResult>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FPSOPrecacheRequestResult>)0x0)
    {
      FVar15 = local_98.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPSOPrecacheRequestResult,int>
              ((FPSOPrecacheRequestResult *)FVar15,local_98.ArrayNum);
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FPSOPrecacheRequestResult>)0x0)
    {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    FVar9.Data = local_e0.AllocatorInstance.Data;
    DestructItems<FPSOPrecacheData,int>
              ((FPSOPrecacheData *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    if ((FPSOPrecacheData *)FVar9.Data != (FPSOPrecacheData *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    FTaskTagScope::~FTaskTagScope(&local_a8);
  }
  else {
    pFVar3 = (FTaskBase *)(this->CollectionGraphEvent).Reference;
    if (pFVar3->ExtendedPriority == TaskEvent) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar3,0);
    pTVar4 = this->MaterialInterface;
    pUVar5 = pTVar4->Object;
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
      pTVar4->Object = (UObject *)0x0;
    }
  }
  FODSCManager::ResumeODSCForceRecompile();
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar7 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar13 = *(FWriteBuffer **)(lVar7 + 0x20);
    if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
      pFVar13 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar13->Cursor = '\n';
    pFVar13->Cursor = pFVar13->Cursor + 1;
    pFVar13->Committed = pFVar13->Cursor;
  }
  FLLMScope::~FLLMScope(&local_d0);
  FLLMScope::~FLLMScope(&local_cc);
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_c8);
  return;
}

