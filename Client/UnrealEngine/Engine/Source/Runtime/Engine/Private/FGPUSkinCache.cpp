// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// FGPUSkinCache @ 147c2c580

/* WARNING: Removing unreachable block (ram,0x000147c2c6e1) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FGPUSkinCache * __thiscall
FGPUSkinCache::FGPUSkinCache(FGPUSkinCache *this,Type param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FGPUSkinCache *pFVar4;
  EShaderPlatform EVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)0x0;
  (this->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocations).ArrayNum = 0;
  (this->Allocations).ArrayMax = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  *(undefined8 *)&(this->PendingProcessRTGeometryEntries).Elements = 0;
  *(undefined8 *)&(this->PendingProcessRTGeometryEntries).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingProcessRTGeometryEntries).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingProcessRTGeometryEntries).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingProcessRTGeometryEntries).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingProcessRTGeometryEntries).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingProcessRTGeometryEntries).Elements.field_0x34 = 0;
  (this->PendingProcessRTGeometryEntries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingProcessRTGeometryEntries).HashSize = 0;
  (this->BatchDispatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchDispatches).ArrayNum = 0;
  (this->BatchDispatches).ArrayMax = 0;
  this->UsedMemoryInBytes = 0;
  this->FlushCounter = 0;
  if (param_1 == Num) {
    EVar5 = SP_NumPlatforms;
  }
  else {
    EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  if ((GSkinCacheDynamicMeshBounds == 1) ||
     ((GSkinCacheDynamicMeshBounds == 2 && (bVar2 = DoesPlatformSupportNanite(EVar5,true), bVar2))))
  {
    puVar3 = ::operator_new(0x130);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = UE::Core::Private::PimplPtr::DeleterFunc<FDynamicMeshBoundsBuffer>;
      puVar3[1] = 0;
      memset(puVar3 + 2,0,0x118);
      FSpanAllocator::FSpanAllocator((FSpanAllocator *)(puVar3 + 2),false);
      puVar3[0x1d] = 0;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = 0;
      *(undefined4 *)(puVar3 + 0x20) = 0;
      puVar3[0x23] = 0;
      *(undefined4 *)(puVar3 + 0x24) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x124) = 0x80;
      puVar6 = puVar3;
    }
    (this->DynamicMeshBoundsBuffer).Ptr = (FDynamicMeshBoundsBuffer *)(puVar6 + 2);
  }
  else {
    (this->DynamicMeshBoundsBuffer).Ptr = (FDynamicMeshBoundsBuffer *)0x0;
  }
  (this->StagingBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingBuffers).ArrayNum = 0;
  (this->StagingBuffers).ArrayMax = 0;
  this->CurrentStagingBufferIndex = 0;
  this->FeatureLevel = param_1;
  this->World = param_2;
  this->TransitionFence = 0;
  if ((param_2 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x47c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FGPUSkinCache *)(*pcVar1)();
    return pFVar4;
  }
  if (((GSkinCacheRecomputeTangents == 1) && (GStoreDuplicatedVerticesForRecomputeTangents == 0)) &&
     (2 < (byte)LogSkinCache._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
  }
  return this;
}

// ~FGPUSkinCache @ 147c31010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUSkinCache::~FGPUSkinCache(FGPUSkinCache *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMeshBoundsBuffer *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  Cleanup(this);
  DestructItems<FGPUSkinCache::FSkinCacheRWBuffer,int>
            ((FSkinCacheRWBuffer *)(this->StagingBuffers).AllocatorInstance.Data,
             (this->StagingBuffers).ArrayNum);
  pFVar1 = (this->StagingBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->DynamicMeshBoundsBuffer).Ptr;
  if (pFVar2 != (FDynamicMeshBoundsBuffer *)0x0) {
    (*(code *)pFVar2[-1].SlotsToClearMask.AllocatorInstance.SecondaryData)
              (&pFVar2[-1].SlotsToClearMask.AllocatorInstance.SecondaryData);
  }
  pFVar1 = (this->BatchDispatches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PendingProcessRTGeometryEntries).HashSize = 0;
  FVar3 = (this->PendingProcessRTGeometryEntries).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGPUSkinCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGPUSkinCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingProcessRTGeometryEntries).Elements);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Allocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 147c335c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  TArrayView<FRHITransitionInfo_const_,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (FRHITransitionInfo *)0x0;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_2,&local_18,Graphics,AsyncCompute,None);
  return;
}

// operator() @ 147c33600

void __thiscall
`FGPUSkinCache::DrawVisualizationInfoText'::__l5::<lambda_1>::operator()
          (void *this,FString *param_1,FColor *param_2)

{
  FScreenMessageWriter *this_00;
  FText *pFVar1;
  FLinearColor_u_0 local_28;
  FText local_18;
  
  this_00 = *(FScreenMessageWriter **)this;
  local_28._s_0.R = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.R];
  local_28._s_0.G = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.G];
  local_28._s_0.B = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.B];
  local_28._s_0.A = (float)(param_2->field0_0x0)._s_0.A * __real_3b808081;
  pFVar1 = FText::FromString(&local_18,param_1);
  FScreenMessageWriter::DrawLine(this_00,pFVar1,10,(FLinearColor *)&local_28._s_0);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 147c336a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRHITransition *local_res8;
  TArrayView<FRHITransition_const_*,int> local_18;
  
  if (*(longlong *)(*(longlong *)this + 0xb0) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskData->AsyncComputeTransition",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x661,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ArrayNum = 1;
  local_res8 = *(FRHITransition **)(*(longlong *)this + 0xb0);
  local_18.DataPtr = &local_res8;
  FRHIComputeCommandList::EndTransitions((FRHIComputeCommandList *)param_2,&local_18);
  return;
}

// AddAsyncComputeSignal @ 147c34c70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl FGPUSkinCache::AddAsyncComputeSignal(FRDGBuilder *param_1)

{
  int *piVar1;
  int iVar2;
  FTaskData *pFVar3;
  FRDGEventName *pFVar4;
  void *this;
  TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeSignal(FRDGBuilder_&)_::_5_::<lambda_1>_>
  *pTVar5;
  <lambda_1> local_res8 [8];
  FRDGEventName local_28;
  
  pFVar3 = FRDGBlackboard::GetMutable<FGPUSkinCache::FTaskData>(&param_1->Blackboard);
  if (((pFVar3 != (FTaskData *)0x0) && (pFVar3->bSignalPassAdded == false)) &&
     (pFVar3->Pipeline == AsyncCompute)) {
    pFVar4 = FRDGEventName::FRDGEventName(&local_28,1,L"GPUSkinCache_AsyncComputeSignal");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
    pTVar5 = TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>_>::
             TRDGEmptyLambdaPass<_FGPUSkinCache::AddAsyncComputeSignal_::__l5::<lambda_1>_>
                       (this,pFVar4,NeverCull,local_res8);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar2 = (param_1->Passes).Array.ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar2 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar5;
    *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
    if (local_28.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar3->bSignalPassAdded = true;
  }
  return;
}

// AddAsyncComputeWait @ 147c34d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl FGPUSkinCache::AddAsyncComputeWait(FRDGBuilder *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  int iVar6;
  FTaskData *pFVar7;
  FRDGEventName *pFVar8;
  void *this;
  TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeWait(FRDGBuilder_&)_::_11_::<lambda_1>_>
  *pTVar9;
  bool bVar10;
  <lambda_1> local_res8;
  longlong local_28;
  FRDGEventName local_20;
  
  pFVar7 = FRDGBlackboard::GetMutable<FGPUSkinCache::FTaskData>(&param_1->Blackboard);
  if (pFVar7 != (FTaskData *)0x0) {
    pFVar3 = &pFVar7->SetupTask;
    if ((pFVar3->Pimpl).Reference != (FTaskBase *)0x0) {
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1624,"FGPUSkinCache::EndDispatch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                   ,0x658);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1624);
      }
      pFVar5 = (pFVar3->Pimpl).Reference;
      if (pFVar5 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(pFVar5);
      }
      if (pFVar3 != (FTaskHandle *)&local_28) {
        pFVar5 = (pFVar3->Pimpl).Reference;
        (pFVar3->Pimpl).Reference = (FTaskBase *)0x0;
        if (pFVar5 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &pFVar5->RefCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar5->_padding_)(pFVar5,1);
          }
        }
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if ((pFVar7->bWaitPassAdded == false) && (pFVar7->Pipeline == AsyncCompute)) {
      local_res8.TaskData = pFVar7;
      pFVar8 = FRDGEventName::FRDGEventName(&local_20,1,L"GPUSkinCache_AsyncComputeWait");
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar8,None);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
      pTVar9 = TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>_>::
               TRDGEmptyLambdaPass<_FGPUSkinCache::AddAsyncComputeWait_::__l11::<lambda_1>_>
                         (this,pFVar8,NeverCull,&local_res8);
      piVar2 = &(param_1->Passes).Array.ArrayMax;
      iVar6 = (param_1->Passes).Array.ArrayNum;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
      }
      (param_1->Passes).Array.ArrayNum = iVar6 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar9;
      *(int *)&pTVar9->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
      FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar9);
      if (local_20.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_20.FormattedEventName.Data.AllocatorInstance.Data);
      }
      pFVar7->bWaitPassAdded = true;
    }
  }
  return;
}

// AllocateDynamicMeshBoundsSlot @ 147c356e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FGPUSkinCache::AllocateDynamicMeshBoundsSlot(FGPUSkinCache *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FDynamicMeshBoundsBuffer *this_01;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x468,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this_01 = (this->DynamicMeshBoundsBuffer).Ptr;
  if (this_01 != (FDynamicMeshBoundsBuffer *)0x0) {
    iVar3 = FSpanAllocator::Allocate(&this_01->Allocator,param_1);
    this_00 = &this_01->SlotsToClearMask;
    lVar5 = 8;
    if ((this_01->Allocator).bGrowOnly == false) {
      lVar5 = 4;
    }
    iVar6 = *(int *)((this_01->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar5 + -0x10) -
            (this_01->SlotsToClearMask).NumBits;
    if (0 < iVar6) {
      iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar6);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar4,iVar6,false);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar3,param_1,true);
    return iVar3;
  }
  return -1;
}

// CVarSinkFunction @ 147c3a210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FGPUSkinCache::CVarSinkFunction(void)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  ForAnyElementType _Src;
  bool bVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FRenderCommandList *this;
  UClass *pUVar14;
  undefined ***pppuVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStackY_178 [32];
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_138;
  TObjectIterator<USkinnedMeshComponent> local_128;
  TObjectIterator<USkinnedMeshComponent> local_110;
  code *local_f8 [2];
  undefined **local_e8;
  int iStack_e0;
  uint uStack_dc;
  float local_d8;
  int iStack_d4;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8 [3];
  undefined ***local_a0;
  FGlobalComponentRecreateRenderStateContext local_98;
  ulonglong local_38;
  
  pTVar4 = CVarEnableGPUSkinCache.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar8 = IsInParallelGameThread();
  lVar18 = 0;
  if (bVar8) {
LAB_147c3a264:
    lVar13 = lVar18;
  }
  else {
    bVar8 = IsInGameThread();
    lVar13 = 4;
    if (bVar8) goto LAB_147c3a264;
  }
  pTVar5 = CVarGPUSkinCacheRecomputeTangents.Ref;
  uVar16 = (uint)(*(int *)((longlong)pTVar4->ShadowedValue + lVar13) != 0);
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_147c3a28d:
    lVar13 = lVar18;
  }
  else {
    bVar8 = IsInGameThread();
    lVar13 = 4;
    if (bVar8) goto LAB_147c3a28d;
  }
  pTVar7 = CVarGPUSkinCacheSceneMemoryLimitInMB.Ref;
  iVar12 = *(int *)((longlong)pTVar5->ShadowedValue + lVar13);
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_147c3a2b0:
    lVar13 = lVar18;
  }
  else {
    bVar8 = IsInGameThread();
    lVar13 = 4;
    if (bVar8) goto LAB_147c3a2b0;
  }
  pTVar6 = CVarGPUSkinNumTangentIntermediateBuffers.Ref;
  fVar1 = *(float *)((longlong)pTVar7->ShadowedValue + lVar13);
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), lVar13 = 4, bVar8)) {
    lVar13 = lVar18;
  }
  pTVar3 = CVarSkipCompilingGPUSkinVF.Ref;
  iVar19 = (int)*(float *)((longlong)pTVar6->ShadowedValue + lVar13);
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    lVar13 = 1;
    if (!bVar8) goto LAB_147c3a2fc;
  }
  lVar13 = lVar18;
LAB_147c3a2fc:
  bVar8 = pTVar3->ShadowedValue[lVar13];
  if (GEnableGPUSkinCacheShaders == 0) {
    iVar12 = 0;
    uVar16 = 0;
  }
  else if (((GRHIGlobals.IsRHIInitialized != false) &&
           (bVar9 = IsGPUSkinCacheRayTracingSupported(), bVar9)) &&
          (bVar9 = IsRayTracingEnabled(), bVar9)) {
    uVar16 = 1;
  }
  if (((bVar8 != false) && (GEnableGPUSkinCache != 0)) &&
     ((uVar16 == 0 && (uVar16 = 1, 2 < (byte)LogSkinCache._0_1_)))) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
  }
  if (((uVar16 != GEnableGPUSkinCache) || (iVar12 != GSkinCacheRecomputeTangents)) ||
     ((fVar1 != GSkinCacheSceneMemoryLimitInMB || (iVar19 != GNumTangentIntermediateBuffers)))) {
    if (((iVar12 == 1) && (GStoreDuplicatedVerticesForRecomputeTangents == 0)) &&
       (2 < (byte)LogSkinCache._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
    }
    local_e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FGPUSkinCache::CVarSinkFunction'::`37'::<lambda_1>,1,0>::
                _vftable_;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGPUSkinCache::CVarSinkFunction'::__l37::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
    local_d0 = (undefined ***)0x0;
    iStack_e0 = iVar12;
    uStack_dc = uVar16;
    local_d8 = fVar1;
    iStack_d4 = iVar19;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      if ((GRenderCommandPipeMode != All) ||
         (bVar8 = FRenderCommandPipe::
                  Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>_>
                            (&UE::RenderCommandPipe::SkeletalMesh,
                             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_f8), !bVar8))
      {
        local_b8[1]._4_4_ = uStack_dc;
        local_b8[1]._0_4_ = iStack_e0;
        local_b8[2]._4_4_ = iStack_d4;
        local_b8[2]._0_4_ = local_d8;
        local_c8[0] = local_f8[0];
        local_a0 = local_d0;
        local_d0 = (undefined ***)0x0;
        local_b8[0] = local_e8;
        local_f8[0] = (code *)0x0;
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>_>_::__l2::<lambda_1>_>
                  ((<lambda_1> *)local_c8);
        if (local_c8[0] != (code *)0x0) {
          pppuVar15 = (undefined ***)(local_c8 + 2);
          if (local_a0 != (undefined ***)0x0) {
            pppuVar15 = local_a0;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
    }
    else {
      FRenderCommandList::
      Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>,TUniqueFunction<void___cdecl(FRHICommandList_&)>_>
                (this,&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_f8);
    }
    if (local_f8[0] != (code *)0x0) {
      pppuVar15 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar15 = local_d0;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_110.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ObjectArray.ArrayNum = 0;
    local_110.ObjectArray.ArrayMax = 0;
    local_110.Index = 0xffffffff;
    EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar14 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar14,&local_110.ObjectArray,true,RF_ClassDefaultObject,
                      EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<USkinnedMeshComponent>::Advance(&local_110);
    _Src.Data = local_110.ObjectArray.AllocatorInstance.Data;
    lVar18 = (longlong)local_110.ObjectArray.ArrayNum;
    local_128.ObjectArray.ArrayNum = local_110.ObjectArray.ArrayNum;
    local_128.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_110.ObjectArray.ArrayNum == 0) {
      local_128.ObjectArray.ArrayMax = 0;
      uVar16 = local_110.Index;
      uVar17 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_110.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_128,
                 local_110.ObjectArray.ArrayNum,&local_128.ObjectArray.ArrayMax);
      memcpy(local_128.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar18 << 3);
      uVar16 = local_110.Index;
      uVar17 = local_110.ObjectArray.ArrayNum;
    }
    while (local_128.Index = uVar16, uVar16 != uVar17) {
      uVar11 = 0;
      if ((int)uVar16 < local_128.ObjectArray.ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar18 = *(longlong *)
                (local_128.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
      if ((*(byte *)(lVar18 + 0x98) & 3) == 3) {
        iVar12 = local_138.ArrayNum;
        if (local_138.ArrayNum == local_138.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_138.AllocatorInstance,&local_138.ArrayMax);
        }
        local_138.ArrayNum = iVar12 + 1;
        *(longlong *)(local_138.AllocatorInstance.Data + (longlong)iVar12 * 8) = lVar18;
      }
      TObjectIterator<USkinnedMeshComponent>::Advance(&local_128);
      uVar16 = local_128.Index;
    }
    if (local_128.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.ObjectArray.AllocatorInstance.Data);
    }
    if (local_110.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.ObjectArray.AllocatorInstance.Data);
    }
    FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext
              (&local_98,&local_138);
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
              (&local_98);
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  return;
}

// Cleanup @ 147c3c1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUSkinCache::Cleanup(FGPUSkinCache *this)

{
  int iVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (this->StagingBuffers).ArrayNum) {
    do {
      uVar7 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar7 < (this->StagingBuffers).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (this->StagingBuffers).AllocatorInstance.Data + uVar10;
      *(undefined4 *)(pFVar8 + 0x18) = 0;
      pFVar2 = *(FRHIResource **)pFVar8;
      if (pFVar2 != (FRHIResource *)0x0) {
        *(undefined8 *)pFVar8 = 0;
        FRHIResource::Release(pFVar2);
      }
      pFVar2 = *(FRHIResource **)(pFVar8 + 8);
      if (pFVar2 != (FRHIResource *)0x0) {
        *(undefined8 *)(pFVar8 + 8) = 0;
        FRHIResource::Release(pFVar2);
      }
      pFVar2 = *(FRHIResource **)(pFVar8 + 0x10);
      if (pFVar2 != (FRHIResource *)0x0) {
        *(undefined8 *)(pFVar8 + 0x10) = 0;
        FRHIResource::Release(pFVar2);
      }
      uVar9 = (ulonglong)(uVar7 + 1);
      *(undefined4 *)(pFVar8 + 0x30) = 0;
      uVar10 = uVar10 + 0x38;
    } while ((int)(uVar7 + 1) < (this->StagingBuffers).ArrayNum);
  }
  iVar1 = (this->Entries).ArrayNum;
  while( true ) {
    if (iVar1 < 1) {
      if (((this->Allocations).ArrayNum != 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5887358856585018220>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                             ,0x494,"Allocations.Num() == 0"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      return;
    }
    iVar1 = (this->Entries).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    lVar6 = (longlong)(this->Entries).ArrayNum;
    pFVar8 = (this->Entries).AllocatorInstance.Data;
    if (*(FGPUSkinCacheEntry **)(pFVar8 + lVar6 * 8 + -8) != (FGPUSkinCacheEntry *)0x0) {
      Dequeue(*(FGPUSkinCacheEntry **)(pFVar8 + lVar6 * 8 + -8));
      ReleaseSkinCacheEntry(*(FGPUSkinCacheEntry **)(pFVar8 + lVar6 * 8 + -8));
      *(undefined8 *)(pFVar8 + lVar6 * 8 + -8) = 0;
    }
    iVar1 = (this->Entries).ArrayNum;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Dequeue @ 147c42050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGPUSkinCache::Dequeue(FGPUSkinCacheEntry *param_1)

{
  int *piVar1;
  int iVar2;
  FGPUSkinCache *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if (param_1 != (FGPUSkinCacheEntry *)0x0) {
    pFVar3 = param_1->SkinCache;
    if ((pFVar3 == (FGPUSkinCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SkinCache",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                           ,0x94a,
                           L"Attempting to dequeue a skin cache entry not linked to a parent skin cache"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator>::Remove
              (&pFVar3->PendingProcessRTGeometryEntries,param_1);
    if (param_1->bQueuedForDispatch != false) {
      uVar11 = 0;
      if (0 < (pFVar3->BatchDispatches).ArrayNum) {
        lVar12 = 0;
        do {
          uVar10 = ~uVar11 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar11 < (pFVar3->BatchDispatches).ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pFVar3->BatchDispatches).AllocatorInstance.Data;
          if (*(FGPUSkinCacheEntry **)(pFVar4 + lVar12) == param_1) {
            uVar7 = *(uint *)(pFVar4 + lVar12 + 8);
            uVar8 = 0;
            if ((int)uVar7 < (param_1->DispatchData).ArrayNum) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)
             ((param_1->DispatchData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x140 + 0xdc)
                 = 0;
            uVar7 = 0;
            if ((int)uVar11 < (pFVar3->BatchDispatches).ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar2 = (pFVar3->BatchDispatches).ArrayNum;
            pFVar4 = (pFVar3->BatchDispatches).AllocatorInstance.Data;
            iVar9 = iVar2 + ~uVar11;
            if (1 < iVar9) {
              iVar9 = 1;
            }
            if (iVar9 != 0) {
              memmove(pFVar4 + lVar12,pFVar4 + (longlong)(iVar2 - iVar9) * 0x10,(longlong)iVar9 << 4
                     );
            }
            piVar1 = &(pFVar3->BatchDispatches).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(pFVar3->BatchDispatches).AllocatorInstance,
                       (pFVar3->BatchDispatches).ArrayNum,&(pFVar3->BatchDispatches).ArrayMax);
          }
          else {
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 0x10;
          }
        } while ((int)uVar11 < (pFVar3->BatchDispatches).ArrayNum);
      }
      param_1->bQueuedForDispatch = false;
    }
  }
  return;
}

// Dispatch @ 147c430c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FTaskHandle __thiscall
FGPUSkinCache::Dispatch
          (FGPUSkinCache *this,FRDGBuilder *param_1,FTaskHandle *param_2,ERHIPipeline param_3)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  int iVar6;
  atomic<unsigned___int64> aVar7;
  longlong *plVar8;
  FTaskBase *pFVar9;
  undefined1 auStackY_e8 [32];
  EShaderPlatform local_a8 [4];
  undefined1 local_a0 [8];
  undefined1 local_98 [24];
  FSharedReferencer<1> local_80;
  code *local_78;
  undefined8 local_68;
  atomic<unsigned___int64> aStack_60;
  FTaskBase *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->FeatureLevel == Num) {
    local_a8[0] = SP_NumPlatforms;
  }
  else {
    local_a8[0] = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
  }
  aVar7 = (atomic<unsigned___int64>)
          FRDGBlackboard::
          Create<FGPUSkinCache::FTaskData,FRDGBuilder_&,enum_EShaderPlatform,enum_ERHIPipeline_&>
                    ((FRDGBlackboard *)(param_2 + 0x29),(FRDGBuilder *)param_2,local_a8,
                     &stack0x00000028);
  local_98._0_8_ = this;
  local_98._8_8_ = aVar7;
  FRDGBuilder::
  AddSetupTask<_FGPUSkinCache::Dispatch_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
            ((FRDGBuilder *)param_2,(<lambda_1> *)local_a0,(FPipe *)local_98,(FTaskHandle *)0x0,
             param_3,false,*(bool *)((longlong)aVar7 + 0xb8));
  pFVar3 = (FTaskHandle *)((longlong)aVar7 + 0xa0);
  if (pFVar3 != (FTaskHandle *)local_a0) {
    pFVar5 = (pFVar3->Pimpl).Reference;
    pFVar9 = (FTaskBase *)0x0;
    (pFVar3->Pimpl).Reference = (FTaskBase *)local_a0;
    local_a0 = (undefined1  [8])pFVar9;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar5->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if (local_a0 != (undefined1  [8])0x0) {
    LOCK();
    paVar1 = &((FTaskBase *)local_a0)->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)((FTaskBase *)local_a0)->_padding_)(local_a0,1);
    }
  }
  local_98._16_8_ = this;
  local_80.ReferenceController = (TReferenceControllerBase<1> *)aVar7;
  FRDGBuilder::
  AddSetupTask<_FGPUSkinCache::Dispatch_::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>
            ((FRDGBuilder *)param_2,(<lambda_2> *)local_98,(FPipe *)(local_98 + 0x10),
             (FTaskHandle *)0x0,(ETaskPriority)pFVar3,true,*(bool *)((longlong)aVar7 + 0xb8));
  if ((atomic<UE::Tasks::Private::FTaskBase_*>)local_98._0_8_ !=
      (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    LOCK();
    piVar2 = (int *)(local_98._0_8_ + 0x30);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)local_98._0_8_)(local_98._0_8_,1);
    }
  }
  if (*(ERHIPipeline *)((longlong)aVar7 + 0xa8) == AsyncCompute) {
    *(undefined1 *)&param_2[0x31].Pimpl.Reference = 0;
    iVar6 = *(int *)&param_2[200].Pimpl.Reference;
    piVar2 = (int *)((longlong)&param_2[200].Pimpl.Reference + 4);
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FGPUSkinCache::Dispatch'::`5'::<lambda_3>,1,0>::_vftable_;
    local_58 = param_2[0x18].Pimpl.Reference;
    local_50 = (longlong *)0x0;
    aStack_60 = aVar7;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FGPUSkinCache::Dispatch'::__l5::<lambda_3>,void>::Call;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
                        (0x1030,(ForElementType<TUniqueFunction<void___cdecl(void)>_> *)
                                (param_2 + 199),piVar2);
    }
    *(int *)&param_2[200].Pimpl.Reference = iVar6 + 1;
    plVar8 = (longlong *)
             ((longlong)&(param_2[199].Pimpl.Reference)->Prerequisites +
             (longlong)iVar6 * 0x30 + -0x58);
    *plVar8 = (longlong)local_78;
    plVar8[5] = (longlong)local_50;
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_68._4_4_;
    *(undefined4 *)(plVar8 + 3) = aStack_60._0_4_;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = aStack_60._4_4_;
    plVar8[4] = (longlong)local_58;
    if ((*plVar8 == 0) && (local_78 != (code *)0x0)) {
      plVar8 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar8 = local_50;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  param_1->_padding_ = 0;
  pFVar5 = (pFVar3->Pimpl).Reference;
  param_1->_padding_ = (longlong)pFVar5;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
    UNLOCK();
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// DispatchPassExecute @ 147c438f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FGPUSkinCache::DispatchPassExecute(FGPUSkinCache *this,FTaskData *param_1)

{
  TArray<FGPUSkinCache::FSortedDispatchEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  <unnamed_type_RecomputeTangents> *p<Var2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ERHIAccess EVar10;
  int *piVar11;
  undefined8 *puVar12;
  FDynamicMeshBoundsBuffer *pFVar13;
  FShaderMapResource *pFVar14;
  code *pcVar15;
  FGPUSkinCacheCS *this_00;
  FTaskData *pFVar16;
  FGPUSkinCache *pFVar17;
  TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *pTVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  atomic<unsigned_int> aVar25;
  TStatId TVar26;
  TArrayView<FRHIUnorderedAccessView_*_const,int> *pTVar27;
  FRHIBreadcrumbAllocator *pFVar28;
  FRHIBreadcrumbNode *pFVar29;
  ulonglong uVar30;
  TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
  *pTVar31;
  FShaderType *pFVar32;
  FName FVar33;
  atomic<FRHIShader_*> aVar34;
  FShaderMapPointerTable *pFVar35;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
  *pTVar36;
  FThreadStats *pFVar37;
  atomic<FRHIShader_*> aVar38;
  FShaderParametersMetadata *pFVar39;
  IRHIComputeContext *pIVar40;
  longlong lVar41;
  FRHICommandBase *pFVar42;
  FRHIComputeShader *pFVar43;
  FRHIBatchedShaderUnbinds *pFVar44;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  FScriptContainerElement *pFVar45;
  FRHIViewableResource *pFVar46;
  longlong lVar47;
  FRHITransitionInfo *pFVar48;
  TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *pTVar49;
  bool *pbVar50;
  FScriptContainerElement *pFVar51;
  char cVar52;
  char cVar53;
  uint uVar54;
  longlong lVar55;
  uint *puVar56;
  uchar auVar57 [8];
  uchar auVar58 [8];
  FShader *this_03;
  FTaskData *pFVar59;
  longlong lVar60;
  FRHIUnorderedAccessView *pFVar61;
  FRHICommandListBase *pFVar62;
  ForElementType<FRHITransitionInfo> FVar63;
  ERHIPipeline EVar64;
  uint uVar65;
  FNameEntryId FVar66;
  wchar_t *pwVar67;
  bool bVar68;
  bool bVar69;
  undefined1 auStackY_688 [32];
  FIdentityFunctor local_606 [2];
  uint local_604;
  FShader *local_600;
  FRHICommandListBase *local_5f8;
  undefined1 local_5f0;
  undefined1 local_5ef;
  bool local_5ee [6];
  longlong local_5e8;
  TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable> local_5d8;
  ForElementType<FRHITransitionInfo> local_5c8;
  undefined8 local_5c0;
  FTaskData *local_5b8;
  FGPUSkinCache *local_5b0;
  FRHIUnorderedAccessView *local_5a8;
  TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> local_5a0;
  undefined1 local_590 [8];
  FName local_588;
  TArray<FRHITransitionInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_580;
  int local_570;
  int local_568;
  uint uStack_564;
  undefined8 local_560;
  TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> local_558;
  TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> local_548;
  uint local_538;
  uint local_534;
  uint local_530;
  uint local_52c;
  uint local_528;
  longlong local_520;
  TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> local_508;
  uint local_4f8;
  uint uStack_4f4;
  uint local_4f0;
  uint uStack_4ec;
  FScriptContainerElement *local_4e8;
  TArray<FRHITransitionInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_4e0;
  FRHITransitionInfo local_4d0;
  FName local_4a0;
  FRHITransition *local_498;
  FDebugName local_490;
  FName local_480;
  FStatMessage local_478;
  FStatMessage local_468;
  FGlobalShaderMap *local_458;
  FRHIBreadcrumbScope local_450;
  char local_440;
  FAddVertexAttributeDesc local_438;
  FRHITransientAliasingInfo *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  FScriptContainerElement *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3c8;
  FScriptContainerElement *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  FScriptContainerElement *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FRHITransitionInfo *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FRHITransitionInfo *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  char *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  wchar_t *pwStack_340;
  char *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  wchar_t *pwStack_320;
  FRHIBreadcrumbScope local_318;
  char local_308;
  FRHIBreadcrumbScope local_300;
  char local_2f0;
  FRHITransitionCreateInfo local_2e8;
  TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
  local_2c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2b8;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_2a8;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_298;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_288;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_278;
  TArrayView<FRHITransitionInfo_const_,int> local_268;
  TArrayView<FRHITransition_const_*,int> local_258;
  TArrayView<FRHITransition_const_*,int> local_248;
  TArrayView<FRHITrackedAccessInfo_const_,int> local_238;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_228 [3];
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_1f8;
  FString local_1e8;
  undefined1 local_1d8 [16];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c8;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_198;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_188;
  FScopedCapture local_178;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FRHIUnorderedAccessView *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_688;
  bVar68 = -1 < CpuChannel->Enabled;
  local_5b8 = param_1;
  local_5b0 = this;
  if (bVar68) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1804,"FGPUSkinCache::DispatchPassExecute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,0x70c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1804);
  }
  uVar54 = (this->BatchDispatches).ArrayNum;
  lVar55 = (longlong)(int)uVar54;
  if ((uVar54 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_GPUSkinCache_TotalNumChunks,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_GPUSkinCache_TotalNumChunks,1> *)
                        &StatPtr_STAT_GPUSkinCache_TotalNumChunks);
    local_588 = *(FName *)(TVar26.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_588,Add,lVar55,false);
  }
  local_5f8 = (FRHICommandListBase *)param_1->RHICmdList;
  if (((int)uVar54 < 1) || (GNumDispatchesToCapture < 1)) {
    bVar69 = false;
  }
  else {
    bVar69 = true;
  }
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_178,bVar69,(FRHICommandList *)local_5f8,(wchar_t *)0x0,(wchar_t *)0x0);
  pTVar1 = &param_1->SortedDispatches;
  GNumDispatchesToCapture = GNumDispatchesToCapture - (uint)bVar69;
  if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
  }
  if ((param_1->SortedDispatches).ArrayMax < (int)uVar54) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar54,&pTVar1->AllocatorInstance,(param_1->SortedDispatches).ArrayNum,
               &(param_1->SortedDispatches).ArrayMax);
  }
  bVar69 = -1 < CpuChannel->Enabled;
  if (bVar69) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1816,"BuildSortedDispatchList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,0x718);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1816);
  }
  pFVar17 = local_5b0;
  uVar65 = 0;
  pFVar59 = param_1;
  local_5e8 = lVar55;
  if (0 < (int)uVar54) {
    lVar55 = 0;
    do {
      uVar54 = 0;
      if ((int)uVar65 < (pFVar17->BatchDispatches).ArrayNum) {
        uVar54 = ~uVar65 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar45 = (pFVar17->BatchDispatches).AllocatorInstance.Data;
      uVar54 = *(uint *)(pFVar45 + lVar55 + 8);
      lVar60 = *(longlong *)(pFVar45 + lVar55);
      uVar21 = 0;
      if ((int)uVar54 < *(int *)(lVar60 + 0x20)) {
        uVar21 = ~uVar54 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if ((*(byte *)((longlong)(int)uVar54 * 0x140 + 0x35 + *(longlong *)(lVar60 + 0x18)) & 3) != 0)
      {
        cVar3 = *(char *)((longlong)(int)uVar54 * 0x140 + 0x34 + *(longlong *)(lVar60 + 0x18));
        cVar4 = *(char *)(lVar60 + 0x38);
        cVar53 = *(char *)(lVar60 + 0x39);
        if (cVar4 == '\x02') {
          cVar53 = '\0';
          uVar54 = 0;
        }
        else {
          uVar54 = (uint)(cVar4 == '\x01');
        }
        iVar23 = 0;
        cVar52 = '\0';
        if (cVar4 != '\x02') {
          cVar52 = *(char *)(lVar60 + 0x3a);
        }
        iVar24 = 2;
        if (cVar4 != '\x02') {
          iVar24 = iVar23;
        }
        iVar22 = 0;
        if (cVar3 == '\x02') {
          iVar22 = iVar23;
          iVar23 = 1;
        }
        else if (cVar3 == '\x01') {
          iVar22 = 1;
          iVar23 = 0;
        }
        piVar11 = &(param_1->SortedDispatches).ArrayMax;
        pFVar45 = (pTVar1->AllocatorInstance).Data;
        local_568 = (-(uint)(cVar53 != '\0') & 2) +
                    (iVar23 + (iVar22 + uVar54 * 4 + iVar24) * 2) * 4 + (uint)(cVar52 != '\0');
        uStack_564 = uVar65;
        if (((pFVar45 <= (FScriptContainerElement *)&local_568) &&
            ((FScriptContainerElement *)&local_568 < pFVar45 + (longlong)*piVar11 * 8)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar23 = (param_1->SortedDispatches).ArrayNum;
        if (iVar23 == *piVar11) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar1->AllocatorInstance,piVar11);
        }
        (param_1->SortedDispatches).ArrayNum = iVar23 + 1;
        *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 8) =
             CONCAT44(uStack_564,local_568);
      }
      uVar65 = uVar65 + 1;
      lVar55 = lVar55 + 0x10;
      local_5e8 = local_5e8 + -1;
    } while (local_5e8 != 0);
    local_5e8 = 0;
    pFVar59 = local_5b8;
  }
  AlgoImpl::
  IntroSortInternal<FGPUSkinCache::FSortedDispatchEntry,int,FIdentityFunctor,_FGPUSkinCache::DispatchPassExecute_::__l10::<lambda_1>_>
            ((FSortedDispatchEntry *)(pTVar1->AllocatorInstance).Data,
             (param_1->SortedDispatches).ArrayNum,local_606[0],(<lambda_1>)local_606[0]);
  if (bVar69) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar69 = -1 < CpuChannel->Enabled;
  if (bVar69) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1847,"UpdateVertexFactoryDeclarations",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,0x737);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1847);
  }
  pFVar17 = local_5b0;
  iVar23 = (local_5b0->BatchDispatches).ArrayNum;
  pFVar45 = (local_5b0->BatchDispatches).AllocatorInstance.Data;
  pFVar51 = pFVar45 + (longlong)iVar23 * 0x10;
  while( true ) {
    pFVar61 = (FRHIUnorderedAccessView *)0x0;
    if ((pFVar17->BatchDispatches).ArrayNum != iVar23) {
      local_5f0 = 0;
      `TCheckedPointerIterator<FGPUSkinCache::FDispatchEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_5f0);
    }
    if (pFVar45 == pFVar51) break;
    uVar54 = *(uint *)(pFVar45 + 8);
    piVar11 = *(int **)pFVar45;
    pFVar62 = (FRHICommandListBase *)pFVar59->RHICmdList;
    uVar65 = 0;
    if ((int)uVar54 < piVar11[8]) {
      uVar65 = ~uVar54 >> 0x1f;
    }
    if ((uVar65 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    lVar55 = *(longlong *)(piVar11 + 6);
    lVar47 = (longlong)(int)uVar54 * 0x140;
    puVar12 = *(undefined8 **)(lVar47 + 0xe8 + lVar55);
    lVar60 = *(longlong *)(lVar47 + 0xf0 + lVar55);
    local_438.SRVs.Elements[0] = (FRHIShaderResourceView *)puVar12[2];
    local_438.SRVs.Elements[1] = local_438.SRVs.Elements[0];
    if (lVar60 != 0) {
      local_438.SRVs.Elements[1] = *(FRHIShaderResourceView **)(lVar60 + 0x10);
    }
    local_438.StreamBuffers.Elements[2] = (FRHIBuffer *)0x0;
    local_438.SRVs.Elements[3] = (FRHIShaderResourceView *)0x0;
    local_438.SRVs.Elements[4] = (FRHIShaderResourceView *)0x0;
    if (*piVar11 == 0) {
      local_438.FrameNumber = *(uint *)(*(longlong *)(lVar47 + 0x20 + lVar55) + 0x150);
    }
    else {
      local_438.FrameNumber = 0;
    }
    local_438.StreamBuffers.Elements[0] = (FRHIBuffer *)*puVar12;
    puVar12 = *(undefined8 **)(lVar47 + 0xe0 + lVar55);
    local_438.StreamBuffers.Elements[1] = (FRHIBuffer *)*puVar12;
    local_438.SRVs.Elements[2] = (FRHIShaderResourceView *)puVar12[2];
    FGPUSkinPassthroughVertexFactory::SetVertexAttributes
              (*(FGPUSkinPassthroughVertexFactory **)(piVar11 + 0xc),pFVar62,
               *(FGPUBaseSkinVertexFactory **)(lVar47 + 0x20 + lVar55),&local_438);
    pFVar45 = pFVar45 + 0x10;
    pFVar59 = local_5b8;
  }
  if (bVar69) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar13 = (pFVar17->DynamicMeshBoundsBuffer).Ptr;
  local_5a8 = pFVar61;
  if ((pFVar13 != (FDynamicMeshBoundsBuffer *)0x0) &&
     (local_5a8 = (pFVar13->MeshBoundsBuffer).UAV.Reference,
     local_5a8 == (FRHIUnorderedAccessView *)0x0)) {
    local_5a8 = (GBlackFloat4StructuredBufferWithSRV->UnorderedAccessViewRHI).Reference;
  }
  uVar54 = (pFVar59->Transitions).Skinning.Write.ArrayNum + 1;
  local_580.AllocatorInstance.Data = (FRHITransitionInfo *)0x0;
  local_580.ArrayNum = 0;
  local_580.ArrayMax = 0;
  if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
  }
  iVar23 = 0;
  if (0 < (int)uVar54) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
              (0x30,8,uVar54,&local_580.AllocatorInstance,0,&local_580.ArrayMax);
    pFVar61 = (FRHIUnorderedAccessView *)(local_580._8_8_ & 0xffffffff);
    iVar23 = local_580.ArrayMax;
  }
  pFVar16 = local_5b8;
  iVar24 = (int)pFVar61;
  pTVar49 = &(local_5b8->Transitions).Skinning.Overlap;
  piVar11 = &(local_5b8->Transitions).Skinning.Overlap.ArrayMax;
  if ((local_5b8->Transitions).Skinning.Overlap.ArrayMax < (int)uVar54) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar54,&pTVar49->AllocatorInstance,
               (local_5b8->Transitions).Skinning.Overlap.ArrayNum,piVar11);
  }
  if (local_5a8 != (FRHIUnorderedAccessView *)0x0) {
    if (iVar24 == iVar23) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                         (0x830,&local_580.AllocatorInstance,&local_580.ArrayMax);
    }
    local_580.ArrayNum = iVar24 + 1;
    local_580.AllocatorInstance.Data[iVar24].field1_0x8.Resource = (FRHIResource *)local_5a8;
    *(undefined4 *)&local_580.AllocatorInstance.Data[iVar24]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&local_580.AllocatorInstance.Data[iVar24]._padding_ + 4) = 0xffff;
    local_580.AllocatorInstance.Data[iVar24].Type = UAV;
    local_580.AllocatorInstance.Data[iVar24].AccessBefore = None;
    local_580.AllocatorInstance.Data[iVar24].AccessAfter = UAVCompute;
    local_580.AllocatorInstance.Data[iVar24].Flags = None;
    local_580.AllocatorInstance.Data[iVar24].CommitInfo.bIsSet = false;
    pFVar45 = (pTVar49->AllocatorInstance).Data;
    if (((pFVar45 <= (FScriptContainerElement *)&local_5a8) &&
        ((FScriptContainerElement *)&local_5a8 < pFVar45 + (longlong)*piVar11 * 8)) &&
       (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar69)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar23 = (pFVar16->Transitions).Skinning.Overlap.ArrayNum;
    if (iVar23 == (pFVar16->Transitions).Skinning.Overlap.ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar49->AllocatorInstance,piVar11);
    }
    (pFVar16->Transitions).Skinning.Overlap.ArrayNum = iVar23 + 1;
    *(FRHIUnorderedAccessView **)((pTVar49->AllocatorInstance).Data + (longlong)iVar23 * 8) =
         local_5a8;
  }
  pFVar16 = local_5b8;
  TransitionBufferUAVs
            (local_5b0,local_5b8->RHICmdList,&local_580,&(pFVar59->Transitions).Skinning.Write,
             pTVar49);
  pTVar27 = TArrayView<FRHIUnorderedAccessView_*_const,int>::
            TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
                      (&local_188,&(pFVar16->Transitions).Skinning.Overlap);
  pFVar62 = local_5f8;
  local_1f8.DataPtr = pTVar27->DataPtr;
  local_1f8.ArrayNum = pTVar27->ArrayNum;
  local_1f8._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
  FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)local_5f8,&local_1f8);
  if (local_580.AllocatorInstance.Data != (FRHITransitionInfo *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_580.AllocatorInstance.Data);
  }
  bVar69 = -1 < CpuChannel->Enabled;
  if (bVar69) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1874,"GPUSkinCache_UpdateSkinningBatches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,0x752);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1874);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_358 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp";
    pwStack_340 = L"GPUSkinCache_UpdateSkinningBatches";
    uStack_350 = 0x753;
    ::Desc._padding_ = CONCAT44(uStack_34c,0x753);
    local_348 = 0;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_ = 0;
    ::Desc._padding_ = (longlong)u_GPUSkinCache_Up;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FGPUSkinCache::DispatchPassExecute'::__l30::<lambda_2>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar28 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar62);
  pFVar29 = FMemStackBase::Alloc(&pFVar28->Inner,0x50,8);
  pFVar29->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar29->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar29->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar29->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar29->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar29->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar29->Allocator = pFVar28;
  pFVar29->TraceCpuSpecId = 0;
  pFVar29->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar54 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar29->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar29->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar29->ID = uVar54;
  pFVar29->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar29[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar19 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar19)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar25 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar25;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar62 = local_5f8;
  pFVar29->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_318,(FRHIComputeCommandList *)local_5f8,pFVar29);
  pFVar17 = local_5b0;
  local_308 = '\x01';
  local_458 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [(int)local_5b0->FeatureLevel]);
  pFVar59 = local_5b8;
  this_03 = (FShader *)0x0;
  local_5d8.ShaderContent = (FGPUSkinCacheCS *)0x0;
  local_528 = (local_5b8->SortedDispatches).ArrayNum;
  uVar30 = (ulonglong)(int)local_528;
  pFVar45 = (local_5b8->SortedDispatches).AllocatorInstance.Data;
  local_570 = -1;
  local_5d8.ShaderMap = (FShaderMapBase *)0x0;
  local_518 = (TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *)
              (pFVar45 + uVar30 * 8);
  local_600 = (FShader *)0x0;
  while( true ) {
    pTVar18 = local_518;
    iVar23 = local_570;
    local_4e8 = pFVar45;
    if ((pFVar59->SortedDispatches).ArrayNum != (int)uVar30) {
      local_5ef = 0;
      `TCheckedPointerIterator<FGPUSkinCache::FSortedDispatchEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_5ef);
    }
    if ((TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *)pFVar45 ==
        pTVar18) break;
    if (*(int *)pFVar45 != iVar23) {
      bVar19 = -1 < CpuChannel->Enabled;
      if (bVar19) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1887,"ChangeShader",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                   ,0x75f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1887);
      }
      local_570 = *(int *)pFVar45;
      pTVar31 = TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
                ::
                TShaderPermutationDomain<FGPUSkinCacheCS::FBoneWeight16Dim,FGPUSkinCacheCS::FBoneIndex16Dim,FGPUSkinCacheCS::FApexClothDim,FGPUSkinCacheCS::FMorphBlendDim,FGPUSkinCacheCS::FUnlimitedBoneInfluencesDim,FGPUSkinCacheCS::FExtraBoneInfluencesDim>
                          (&local_2c0,local_570);
      bVar20 = (pTVar31->Tail).Tail.Tail.Tail.Tail.DimensionValue;
      bVar5 = (pTVar31->Tail).Tail.Tail.Tail.DimensionValue;
      bVar6 = (pTVar31->Tail).Tail.Tail.DimensionValue;
      bVar7 = (pTVar31->Tail).Tail.DimensionValue;
      bVar8 = (pTVar31->Tail).DimensionValue;
      aVar38 = (atomic<FRHIShader_*>)0x0;
      bVar9 = pTVar31->DimensionValue;
      pFVar32 = (FShaderType *)FGPUSkinCacheCS::GetStaticType();
      FGlobalShaderMap::GetShader
                (local_458,&local_3c8,pFVar32,
                 (-(uint)(bVar5 != false) & 0x10) + (-(uint)(bVar20 != false) & 0x20) +
                 (-(uint)(bVar6 != false) & 8) + (-(uint)(bVar7 != false) & 4) +
                 (-(uint)(bVar8 != false) & 2) + (uint)(bVar9 != false));
      if (local_3c8.ShaderContent == (FShader *)0x0) {
        FVar33 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1d8);
        ::FName::ToString((FName *)FVar33,&local_1e8);
        FGPUSkinCacheCS::GetStaticType();
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (bVar20) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      FGPUSkinCacheCS::GetStaticType();
      local_5d8.ShaderContent = (FGPUSkinCacheCS *)local_3c8.ShaderContent;
      local_5d8.ShaderMap = local_3c8.ShaderMap;
      if ((local_3c8.ShaderContent == (FShader *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x764,L""), bVar20)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      this_00 = local_5d8.ShaderContent;
      local_600 = (FShader *)local_5d8.ShaderContent;
      aVar34 = aVar38;
      if ((FShader *)local_5d8.ShaderContent != (FShader *)0x0) {
        pFVar14 = ((local_5d8.ShaderMap)->Resource).Reference;
        if ((pFVar14 == (FShaderMapResource *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x426,L""), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar23 = *(int *)&this_00->field_0xd4;
        aVar34 = (pFVar14->RHIShaders).Ptr[iVar23];
        if (((aVar34 == (atomic<FRHIShader_*>)0x0) &&
            (aVar34 = (atomic<FRHIShader_*>)
                      FShaderMapResource::CreateShaderOrCrash(pFVar14,iVar23,true),
            aVar34 == (atomic<FRHIShader_*>)0x0)) && (aVar34 = aVar38, 4 < (byte)LogShaders._0_1_))
        {
          pFVar35 = FShaderMapBase::GetPointerTable(local_5d8.ShaderMap);
          FShader::GetType((FShader *)this_00,pFVar35);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
      }
      SetComputePipelineState((FRHIComputeCommandList *)local_5f8,(FRHIComputeShader *)aVar34);
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    uVar54 = *(uint *)(pFVar45 + 4);
    uVar65 = 0;
    if ((int)uVar54 < (pFVar17->BatchDispatches).ArrayNum) {
      uVar65 = ~uVar54 >> 0x1f;
    }
    if ((uVar65 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar45 = (pFVar17->BatchDispatches).AllocatorInstance.Data;
    uVar65 = *(uint *)(pFVar45 + (longlong)(int)uVar54 * 0x10 + 8);
    piVar11 = *(int **)(pFVar45 + (longlong)(int)uVar54 * 0x10);
    uVar54 = 0;
    if ((int)uVar65 < piVar11[8]) {
      uVar54 = ~uVar65 >> 0x1f;
    }
    if ((uVar54 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    local_440 = '\0';
    lVar55 = *(longlong *)(piVar11 + 6);
    lVar60 = (longlong)(int)uVar65 * 0x140;
    local_520 = *(longlong *)(lVar55 + 0x20 + lVar60) + 0x140;
    local_5e8 = lVar55;
    bVar19 = GetEmitDrawEvents();
    if (bVar19) {
      local_5ee[0] = *(longlong *)(piVar11 + 0x16) != 0;
      if (*(longlong *)(piVar11 + 10) == 0) {
        FDebugName::FDebugName(&local_490);
      }
      else {
        FDebugName::FDebugName(&local_490,*(FName *)(*(longlong *)(piVar11 + 10) + 0x40));
      }
      pwVar67 = L"";
      local_538 = (uint)*(byte *)(lVar55 + 0x34 + lVar60);
      local_534 = (uint)*(byte *)(piVar11 + 0xe);
      local_530 = (uint)*(byte *)((longlong)piVar11 + 0x3a);
      local_52c = (uint)*(byte *)((longlong)piVar11 + 0x39);
      if (*piVar11 == 1) {
        pwVar67 = L"[RT]";
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_1a8 = 0;
        uStack_1a4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_1ac);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_SkinCacheDispat;
        ::Desc._padding_ = (longlong)u__sSkinning_d_d_;
        ::Desc._padding_._0_4_ = 0x77b;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FGPUSkinCache::DispatchPassExecute'::__l49::<lambda_3>::
               operator()<wchar_t_const_(&)[1],int,int,int,int,FDebugName,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,bool,unsigned_int_&>'
               ::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      puVar56 = (uint *)(lVar55 + 0x4c + lVar60);
      pFVar28 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)local_5f8);
      pTVar36 = FMemStackBase::Alloc(&pFVar28->Inner,0x90,8);
      pTVar36 = UE::RHI::Breadcrumbs::Private::
                TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
                ::
                TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_><wchar_t_const_(&)[1],int_&,int_&,int_&,int_&,FDebugName_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,bool_&,unsigned_int_&>
                          (pTVar36,pFVar28,&::Desc,(wchar_t (*) [1])pwVar67,(int *)&local_52c,
                           (int *)&local_530,(int *)&local_534,(int *)&local_538,&local_490,
                           piVar11 + 0x1a,(uint *)(local_5e8 + 0x30 + lVar60),
                           (uint *)(local_5e8 + 0x40 + lVar60),(uint *)(local_5e8 + 0x48 + lVar60),
                           puVar56,local_5ee,(uint *)(local_5e8 + 0x80 + lVar60));
      FRHIBreadcrumbScope::FRHIBreadcrumbScope
                (&local_450,(FRHIComputeCommandList *)local_5f8,(FRHIBreadcrumbNode *)pTVar36);
      local_440 = '\x01';
      lVar55 = local_5e8;
    }
    else {
      puVar56 = (uint *)(lVar60 + 0x4c + lVar55);
    }
    local_604 = *puVar56 + 0x3f >> 6;
    if ((((*(longlong *)(lVar55 + 0x108 + lVar60) == 0) ||
         (lVar47 = *(longlong *)(lVar55 + 0x110 + lVar60), lVar47 == 0)) &&
        (lVar47 = *(longlong *)(lVar55 + 0xe0 + lVar60), lVar55 = local_5e8, lVar47 == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("TangentBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                            ,0x780,L""), lVar55 = local_5e8, bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    lVar41 = local_520;
    uStack_80 = 0;
    local_98 = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_138 = *puVar56;
    local_134 = *(undefined4 *)(lVar55 + 0x48 + lVar60);
    local_130 = *(undefined4 *)(lVar55 + 0x40 + lVar60);
    local_12c = *(undefined4 *)(lVar55 + 0x3c + lVar60);
    local_128 = piVar11[0xf];
    local_124 = *(undefined4 *)(lVar55 + 0x44 + lVar60);
    local_120 = piVar11[0x10];
    local_a8 = GNullVertexBuffer._40_8_;
    if (*(longlong *)(piVar11 + 0x12) != 0) {
      local_a8 = *(longlong *)(piVar11 + 0x12);
    }
    uStack_a0 = *(undefined8 *)(piVar11 + 0x14);
    local_88 = *(undefined8 *)(lVar55 + 0x70 + lVar60);
    uStack_90 = *(undefined8 *)(lVar55 + 0x58 + lVar60);
    local_ac = *(undefined4 *)(lVar55 + 0x130 + lVar60);
    local_58 = local_5a8;
    uStack_60 = *(undefined8 *)(lVar47 + 8);
    cVar3 = *(char *)(lVar55 + 0x34 + lVar60);
    if (cVar3 == '\x01') {
      uStack_80 = *(undefined8 *)(piVar11 + 0x16);
      local_11c = *(undefined4 *)(lVar55 + 0x80 + lVar60);
    }
    else if (cVar3 == '\x02') {
      local_78 = *(undefined8 *)(piVar11 + 0x18);
      uStack_70 = *(undefined8 *)(lVar55 + 0x78 + lVar60);
      local_118 = *(undefined4 *)(lVar55 + 0x84 + lVar60);
      local_114 = *(undefined4 *)(lVar55 + 0x88 + lVar60);
      puVar12 = (undefined8 *)(lVar55 + 0x90 + lVar60);
      local_108 = *puVar12;
      uStack_100 = puVar12[1];
      puVar12 = (undefined8 *)(lVar55 + 0xa0 + lVar60);
      local_f8 = *puVar12;
      uStack_f0 = puVar12[1];
      puVar12 = (undefined8 *)(lVar55 + 0xb0 + lVar60);
      local_e8 = *puVar12;
      uStack_e0 = puVar12[1];
      puVar12 = (undefined8 *)(lVar55 + 0xc0 + lVar60);
      local_d8 = *puVar12;
      uStack_d0 = puVar12[1];
      local_c8 = *(undefined4 *)(lVar55 + 0x8c + lVar60);
      local_b8 = *(undefined8 *)(lVar55 + 0xd0 + lVar60);
      local_b0 = *(undefined4 *)(lVar55 + 0xd8 + lVar60);
    }
    this_03 = local_600;
    pFVar62 = local_5f8;
    uVar54 = local_604;
    if ((*(byte *)(lVar55 + 0x35 + lVar60) & 2) != 0) {
      uVar54 = *(int *)(local_520 + 0x50) - *(int *)(local_520 + 0x4c);
      lVar47 = ((ulonglong)(uVar54 < 2) ^ (ulonglong)*(uint *)(local_520 + 0x48)) + 1;
      lVar55 = local_520 + lVar47 * 0x18;
      if (*(longlong *)(local_520 + lVar47 * 0x18) == 0) {
        if ((1 < uVar54) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("bPrevious",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                ,0xfe,
                                L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                               ), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar47 = (ulonglong)*(uint *)(lVar41 + 0x48) + 1;
        lVar55 = lVar41 + lVar47 * 0x18;
        if ((*(longlong *)(lVar41 + lVar47 * 0x18) == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Output->VertexBufferRHI.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                ,0x101,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      lVar47 = local_5e8;
      local_98 = *(undefined8 *)(lVar55 + 8);
      if ((*(longlong *)(local_5e8 + 0xf0 + lVar60) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PreviousPositionBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x29e,L""), bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_68 = *(undefined8 *)(*(longlong *)(lVar47 + 0xf0 + lVar60) + 8);
      uVar54 = local_604 << 6;
      auVar57[4] = '\0';
      auVar57[5] = '\0';
      auVar57[6] = '\0';
      auVar57[7] = '\0';
      auVar57[0] = (char)uVar54;
      auVar57[1] = (char)(uVar54 >> 8);
      auVar57[2] = (char)(uVar54 >> 0x10);
      auVar57[3] = (char)(uVar54 >> 0x18);
      if (((local_604 & 0x3ffffff) != 0) && (FThreadStats::bPrimaryEnable != false)) {
        TVar26 = FThreadSafeStaticStatInner<FStat_STAT_GPUSkinCache_TotalNumVertices,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_GPUSkinCache_TotalNumVertices,1>
                             *)&StatPtr_STAT_GPUSkinCache_TotalNumVertices);
        FVar33 = *(FName *)(TVar26.StatIdPtr)->Name;
        FVar66 = FVar33.ComparisonIndex.Value;
        uVar54 = FVar33.Number;
        local_4f8 = FVar66.Value;
        uStack_4f4 = uVar54;
        if ((FVar33 != (FName)0x0) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar37 = FThreadStats::GetThreadStats();
          local_478.NameAndInfo.Number = uVar54 & 0xffffafff | 0xa000;
          local_4a0 = FVar33;
          local_478.StatData.Pad = auVar57;
          local_478.NameAndInfo.Index.Value = FVar66.Value;
          FThreadStats::AddStatMessage(pFVar37,&local_478);
          FStatsTrace::Add(&local_4a0,(long64)auVar57);
          if (pFVar37->ScopeCount == 0) {
            FThreadStats::Flush(pFVar37,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar37,false,false);
          }
        }
      }
      this_03 = local_600;
      uVar54 = local_604;
      aVar38 = (atomic<FRHIShader_*>)0x0;
      if (local_600 != (FShader *)0x0) {
        pFVar14 = ((local_5d8.ShaderMap)->Resource).Reference;
        if ((pFVar14 == (FShaderMapResource *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x426,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        aVar38 = (pFVar14->RHIShaders).Ptr[this_03->ResourceIndex];
        if ((aVar38 == (atomic<FRHIShader_*>)0x0) &&
           (aVar38 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar14,this_03->ResourceIndex,true),
           aVar38 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            pFVar35 = FShaderMapBase::GetPointerTable(local_5d8.ShaderMap);
            FShader::GetType(this_03,pFVar35);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar38 = (atomic<FRHIShader_*>)0x0;
        }
      }
      pFVar39 = FGPUSkinCacheCS::FParameters::FTypeInfo::GetStructMetadata();
      local_1c8.ShaderContent = (FShader *)local_5d8.ShaderContent;
      local_1c8.ShaderMap = local_5d8.ShaderMap;
      ValidateShaderParameters(&local_1c8,pFVar39,&local_138);
      pFVar62 = local_5f8;
      ::SetShaderParameters
                ((FRHICommandList *)local_5f8,(FRHIComputeShader *)aVar38,&this_03->Bindings,pFVar39
                 ,&local_138);
      if ((GRHICommandList.bLatchedBypass == false) ||
         ((pFVar62->PersistentState).bImmediate == '\0')) {
        pFVar42 = FMemStackBase::Alloc(&pFVar62->MemManager,0x20,8);
        pFVar62->NumCommands = pFVar62->NumCommands + 1;
        *pFVar62->CommandLink = pFVar42;
        pFVar62->CommandLink = &pFVar42->Next;
        pFVar42->Next = (FRHICommandBase *)0x0;
        pFVar42->_padding_ = (longlong)&___7FRHICommandDispatchComputeShader__6B_;
        *(uint *)&pFVar42[1]._padding_ = uVar54;
        *(undefined4 *)((longlong)&pFVar42[1]._padding_ + 4) = 1;
        *(undefined4 *)&pFVar42[1].Next = 1;
        lVar55 = local_5e8;
      }
      else {
        pIVar40 = FRHICommandListBase::GetComputeContext(pFVar62);
        (**(code **)(pIVar40->_padding_ + 0x18))(pIVar40,uVar54);
        lVar55 = local_5e8;
      }
    }
    lVar47 = local_520;
    if ((*(byte *)(lVar55 + 0x35 + lVar60) & 1) != 0) {
      lVar41 = (ulonglong)*(uint *)(local_520 + 0x48) + 1;
      lVar55 = local_520 + lVar41 * 0x18;
      if (*(longlong *)(local_520 + lVar41 * 0x18) == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("bPrevious",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                            ,0xfe,
                            L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                           );
        if (bVar19) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar41 = (ulonglong)*(uint *)(lVar47 + 0x48) + 1;
        lVar55 = lVar47 + lVar41 * 0x18;
        if ((*(longlong *)(lVar47 + lVar41 * 0x18) == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Output->VertexBufferRHI.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                ,0x101,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      lVar47 = local_5e8;
      local_98 = *(undefined8 *)(lVar55 + 8);
      if ((*(longlong *)(local_5e8 + 0xe8 + lVar60) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PositionBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x2a4,L""), bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_68 = *(undefined8 *)(*(longlong *)(lVar47 + 0xe8 + lVar60) + 8);
      uVar65 = uVar54 << 6;
      auVar58[4] = '\0';
      auVar58[5] = '\0';
      auVar58[6] = '\0';
      auVar58[7] = '\0';
      auVar58[0] = (char)uVar65;
      auVar58[1] = (char)(uVar65 >> 8);
      auVar58[2] = (char)(uVar65 >> 0x10);
      auVar58[3] = (char)(uVar65 >> 0x18);
      if (((uVar54 & 0x3ffffff) != 0) && (FThreadStats::bPrimaryEnable != false)) {
        TVar26 = FThreadSafeStaticStatInner<FStat_STAT_GPUSkinCache_TotalNumVertices,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_GPUSkinCache_TotalNumVertices,1>
                             *)&StatPtr_STAT_GPUSkinCache_TotalNumVertices);
        FVar33 = *(FName *)(TVar26.StatIdPtr)->Name;
        FVar66 = FVar33.ComparisonIndex.Value;
        uVar65 = FVar33.Number;
        uVar54 = local_604;
        local_4f0 = FVar66.Value;
        uStack_4ec = uVar65;
        if ((FVar33 != (FName)0x0) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar37 = FThreadStats::GetThreadStats();
          local_468.NameAndInfo.Number = uVar65 & 0xffffafff | 0xa000;
          local_480 = FVar33;
          local_468.StatData.Pad = auVar58;
          local_468.NameAndInfo.Index.Value = FVar66.Value;
          FThreadStats::AddStatMessage(pFVar37,&local_468);
          FStatsTrace::Add(&local_480,(long64)auVar58);
          if (pFVar37->ScopeCount == 0) {
            FThreadStats::Flush(pFVar37,false,false);
            uVar54 = local_604;
          }
          else {
            uVar54 = local_604;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar37,false,false);
              uVar54 = local_604;
            }
          }
        }
      }
      this_03 = local_600;
      aVar38 = (atomic<FRHIShader_*>)0x0;
      if (local_600 != (FShader *)0x0) {
        pFVar14 = ((local_5d8.ShaderMap)->Resource).Reference;
        if ((pFVar14 == (FShaderMapResource *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x426,L""), bVar19)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        aVar38 = (pFVar14->RHIShaders).Ptr[this_03->ResourceIndex];
        if ((aVar38 == (atomic<FRHIShader_*>)0x0) &&
           (aVar38 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar14,this_03->ResourceIndex,true),
           aVar38 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            pFVar35 = FShaderMapBase::GetPointerTable(local_5d8.ShaderMap);
            FShader::GetType(this_03,pFVar35);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar38 = (atomic<FRHIShader_*>)0x0;
        }
      }
      pFVar39 = FGPUSkinCacheCS::FParameters::FTypeInfo::GetStructMetadata();
      local_2b8.ShaderContent = (FShader *)local_5d8.ShaderContent;
      local_2b8.ShaderMap = local_5d8.ShaderMap;
      ValidateShaderParameters(&local_2b8,pFVar39,&local_138);
      pFVar62 = local_5f8;
      ::SetShaderParameters
                ((FRHICommandList *)local_5f8,(FRHIComputeShader *)aVar38,&this_03->Bindings,pFVar39
                 ,&local_138);
      if ((GRHICommandList.bLatchedBypass == false) ||
         ((pFVar62->PersistentState).bImmediate == '\0')) {
        pFVar42 = FMemStackBase::Alloc(&pFVar62->MemManager,0x20,8);
        pFVar62->NumCommands = pFVar62->NumCommands + 1;
        *pFVar62->CommandLink = pFVar42;
        pFVar62->CommandLink = &pFVar42->Next;
        pFVar42->Next = (FRHICommandBase *)0x0;
        pFVar42->_padding_ = (longlong)&___7FRHICommandDispatchComputeShader__6B_;
        *(uint *)&pFVar42[1]._padding_ = uVar54;
        *(undefined4 *)((longlong)&pFVar42[1]._padding_ + 4) = 1;
        *(undefined4 *)&pFVar42[1].Next = 1;
        lVar55 = local_5e8;
      }
      else {
        pIVar40 = FRHICommandListBase::GetComputeContext(pFVar62);
        (**(code **)(pIVar40->_padding_ + 0x18))(pIVar40,uVar54);
        lVar55 = local_5e8;
      }
    }
    if ((*(longlong *)(lVar55 + 0xf0 + lVar60) == *(longlong *)(lVar55 + 0xe8 + lVar60)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("DispatchData.PreviousPositionBuffer != DispatchData.PositionBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                            ,0x7ba,L""), bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (local_440 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_450);
    }
    pFVar45 = local_4e8 + 8;
    uVar30 = (ulonglong)local_528;
  }
  if ((this_03 != (FShader *)0x0) &&
     (pFVar43 = TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable>::GetComputeShader(&local_5d8)
     , pFVar62 = local_5f8, GRHIGlobals.NeedsShaderUnbinds != false)) {
    pFVar44 = FRHICommandListBase::GetScratchShaderUnbinds(local_5f8);
    if (((this_03->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    UnsetShaderUAVs(pFVar44,&this_03->Bindings);
    pFVar62 = local_5f8;
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)local_5f8,pFVar43,pFVar44);
  }
  if (local_308 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_318);
  }
  if (bVar69) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar59 = local_5b8;
  pTVar27 = TArrayView<FRHIUnorderedAccessView_*_const,int>::
            TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
                      (&local_198,&(local_5b8->Transitions).Skinning.Overlap);
  local_2a8.DataPtr = pTVar27->DataPtr;
  local_2a8.ArrayNum = pTVar27->ArrayNum;
  local_2a8._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
  FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)pFVar62,&local_2a8);
  p<Var2 = &(pFVar59->Transitions).RecomputeTangents;
  local_518 = &p<Var2->Write;
  if ((pFVar59->Transitions).RecomputeTangents.Read.ArrayNum != 0) {
    local_558.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.ArrayNum = 0;
    local_558.ArrayMax = 0;
    TransitionBuffers(pFVar17,(FRHICommandList *)pFVar62,
                      &(pFVar59->Transitions).RecomputeTangents.Read,SRVCompute);
    TransitionBufferUAVs(pFVar17,(FRHICommandList *)pFVar62,&p<Var2->Write,&local_558);
    iStack_3b0 = local_558.ArrayNum;
    local_3b8 = local_558.AllocatorInstance.Data;
    if ((local_558.ArrayNum < 0) &&
       (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar69)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    local_228[0]._12_4_ = uStack_3ac;
    local_228[0].ArrayNum = iStack_3b0;
    local_228[0].DataPtr = (FRHIUnorderedAccessView **)local_3b8;
    FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)pFVar62,local_228);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_330 = 0x7cd;
      local_338 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp";
      ::Desc._padding_ = CONCAT44(uStack_32c,0x7cd);
      local_328 = 0;
      pwStack_320 = L"GPUSkinCache_RecomputeTangentsBatches";
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_ = 0;
      ::Desc._padding_ = (longlong)u_GPUSkinCache_Re;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FGPUSkinCache::DispatchPassExecute'::__l102::<lambda_5>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar28 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar62);
    pFVar29 = FMemStackBase::Alloc(&pFVar28->Inner,0x50,8);
    pFVar29->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar29->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar29->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar29->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar29->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar29->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar29->Allocator = pFVar28;
    pFVar29->TraceCpuSpecId = 0;
    pFVar29->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar54 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar29->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar29->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar29->ID = uVar54;
    pFVar29->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar29[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar69 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar69)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar25 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar25;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar29->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_300,(FRHIComputeCommandList *)pFVar62,pFVar29);
    local_2f0 = '\x01';
    local_588.ComparisonIndex.Value = 0;
    local_588.Number = 0;
    local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a0.ArrayNum = 0;
    local_5a0.ArrayMax = 0;
    if (GRecomputeTangentsParallelDispatch != 0) {
      uVar54 = (pFVar59->TangentDispatches).ArrayNum;
      if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
      }
      if (0 < (int)uVar54) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar54,&local_5a0.AllocatorInstance,0,&local_5a0.ArrayMax);
      }
    }
    pFVar16 = local_5b8;
    pFVar45 = (pFVar59->TangentDispatches).AllocatorInstance.Data;
    iVar23 = (pFVar59->TangentDispatches).ArrayNum;
    pFVar51 = pFVar45 + (longlong)iVar23 * 0x10;
    while( true ) {
      if ((pFVar16->TangentDispatches).ArrayNum != iVar23) {
        local_5ee[1] = false;
        `TCheckedPointerIterator<FGPUSkinCache::FDispatchEntry,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_5ee + 1);
      }
      if (pFVar45 == pFVar51) break;
      DispatchUpdateSkinTangentsTrianglePass
                (pFVar17,(FRHICommandList *)pFVar62,*(FGPUSkinCacheEntry **)pFVar45,
                 *(int *)(pFVar45 + 8),(FSkinCacheRWBuffer **)&local_588);
      if (GRecomputeTangentsParallelDispatch == 0) {
        DispatchUpdateSkinTangentsVertexPass
                  (pFVar17,(FRHICommandList *)pFVar62,*(FGPUSkinCacheEntry **)pFVar45,
                   *(int *)(pFVar45 + 8),(FSkinCacheRWBuffer **)&local_588);
        pFVar45 = pFVar45 + 0x10;
      }
      else {
        uVar54 = *(uint *)(pFVar45 + 8);
        lVar55 = *(longlong *)pFVar45;
        uVar65 = 0;
        if ((int)uVar54 < *(int *)(lVar55 + 0x20)) {
          uVar65 = ~uVar54 >> 0x1f;
        }
        if ((uVar65 == 0) &&
           (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar69)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar55 = *(longlong *)(lVar55 + 0x18);
        if ((*(longlong *)((longlong)(int)uVar54 * 0x140 + 0xe0 + lVar55) == 0) &&
           (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                               ("TangentBuffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                ,0x2aa,L""), bVar69)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        local_560 = *(undefined8 *)((longlong)(int)uVar54 * 0x140 + 0xe0 + lVar55);
        if (((local_5a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_560) &&
            ((FScriptContainerElement *)&local_560 <
             local_5a0.AllocatorInstance.Data + (longlong)local_5a0.ArrayMax * 8)) &&
           (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar69)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar24 = local_5a0.ArrayNum;
        if (local_5a0.ArrayNum == local_5a0.ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5a0.AllocatorInstance,&local_5a0.ArrayMax);
        }
        local_5a0.ArrayNum = iVar24 + 1;
        pFVar45 = pFVar45 + 0x10;
        *(undefined8 *)(local_5a0.AllocatorInstance.Data + (longlong)iVar24 * 8) = local_560;
        pFVar62 = local_5f8;
      }
    }
    if (GRecomputeTangentsParallelDispatch != 0) {
      local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_548.ArrayNum = 0;
      local_548.ArrayMax = 0;
      TransitionBuffers(pFVar17,(FRHICommandList *)pFVar62,local_518,UAVCompute);
      local_4e0.AllocatorInstance.Data = (FRHITransitionInfo *)0x0;
      local_4e0.ArrayNum = 0;
      local_4e0.ArrayMax = 0;
      TransitionBufferUAVs(pFVar17,(FRHICommandList *)pFVar62,&local_4e0,&local_5a0,&local_548);
      if (local_4e0.AllocatorInstance.Data != (FRHITransitionInfo *)0x0) {
        pbVar50 = &local_4e0.AllocatorInstance.Data[-1].CommitInfo.bIsSet;
        MemoryTrace_Free((ulong64)pbVar50,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this_01 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this_01 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this_01,Default,pbVar50,FMalloc,true);
        }
        pbVar50 = pbVar50 + -(ulonglong)*(uint *)pbVar50;
        LOCK();
        iVar23 = *(int *)pbVar50;
        *(int *)pbVar50 = *(int *)pbVar50 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          lVar55 = *(longlong *)(pbVar50 + 0x40);
          MemoryTrace_UnmarkAllocAsHeap((ulong64)pbVar50,0,0);
          if (lVar55 - (longlong)pbVar50 == 0x10000) {
            this_02 = FPageAllocator::Get();
            FPageAllocator::Free(this_02,pbVar50);
          }
          else {
            (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pbVar50);
          }
        }
      }
      iVar23 = local_548.ArrayNum;
      local_3a8 = local_548.AllocatorInstance.Data;
      if ((local_548.ArrayNum < 0) &&
         (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar69)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iStack_3a0 = iVar23;
      local_298._12_4_ = uStack_39c;
      local_298.ArrayNum = iVar23;
      local_298.DataPtr = (FRHIUnorderedAccessView **)local_3a8;
      FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)pFVar62,&local_298);
      pFVar59 = local_5b8;
      pFVar62 = local_5f8;
      iVar23 = (local_5b8->TangentDispatches).ArrayNum;
      pFVar45 = (local_5b8->TangentDispatches).AllocatorInstance.Data;
      pFVar51 = pFVar45 + (longlong)iVar23 * 0x10;
      while( true ) {
        if ((pFVar59->TangentDispatches).ArrayNum != iVar23) {
          local_5ee[2] = false;
          `TCheckedPointerIterator<FGPUSkinCache::FDispatchEntry,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_5ee + 2);
        }
        if (pFVar45 == pFVar51) break;
        DispatchUpdateSkinTangentsVertexPass
                  (pFVar17,(FRHICommandList *)pFVar62,*(FGPUSkinCacheEntry **)pFVar45,
                   *(int *)(pFVar45 + 8),(FSkinCacheRWBuffer **)&local_588);
        pFVar45 = pFVar45 + 0x10;
      }
      iVar23 = local_548.ArrayNum;
      local_398 = local_548.AllocatorInstance.Data;
      if ((local_548.ArrayNum < 0) &&
         (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar69)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iStack_390 = iVar23;
      local_288._12_4_ = uStack_38c;
      local_288.ArrayNum = iVar23;
      local_288.DataPtr = (FRHIUnorderedAccessView **)local_398;
      FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)pFVar62,&local_288);
      if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.AllocatorInstance.Data);
      }
    }
    if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.AllocatorInstance.Data);
    }
    if (local_2f0 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_300);
    }
    iVar23 = local_558.ArrayNum;
    local_388 = local_558.AllocatorInstance.Data;
    if ((local_558.ArrayNum < 0) &&
       (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar69)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iStack_380 = iVar23;
    local_278._12_4_ = uStack_37c;
    local_278.ArrayNum = iVar23;
    local_278.DataPtr = (FRHIUnorderedAccessView **)local_388;
    FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)pFVar62,&local_278);
    if (local_558.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.AllocatorInstance.Data);
    }
  }
  pFVar48 = (FRHITransitionInfo *)0x0;
  local_5c8.Data = (FRHITransitionInfo *)0x0;
  local_5c0 = 0;
  bVar69 = -1 < CpuChannel->Enabled;
  if (bVar69) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2042,"TransitionAllToReadable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,0x7fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2042);
  }
  uVar65 = local_5b0->TransitionFence + 1;
  local_5b0->TransitionFence = uVar65;
  uVar54 = (local_5b8->Transitions).FinalRead.ArrayNum + 1;
  if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
  }
  FVar63.Data = pFVar48;
  if (0 < (int)uVar54) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
              (0x30,8,uVar54,&local_5c8,0,(int *)((longlong)&local_5c0 + 4));
    pFVar48 = (FRHITransitionInfo *)(local_5c0 & 0xffffffff);
    FVar63.Data = local_5c8.Data;
  }
  iVar23 = (int)pFVar48;
  if (local_5a8 != (FRHIUnorderedAccessView *)0x0) {
    if (iVar23 == local_5c0._4_4_) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                         (0x830,&local_5c8,(int *)((longlong)&local_5c0 + 4));
      FVar63.Data = local_5c8.Data;
    }
    pFVar48 = (FRHITransitionInfo *)(ulonglong)(iVar23 + 1U);
    local_5c0 = CONCAT44(local_5c0._4_4_,iVar23 + 1U);
    *(undefined4 *)&FVar63.Data[iVar23]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&FVar63.Data[iVar23]._padding_ + 4) = 0xffff;
    FVar63.Data[iVar23].field1_0x8.Resource = (FRHIResource *)local_5a8;
    FVar63.Data[iVar23].Type = UAV;
    FVar63.Data[iVar23].AccessBefore = UAVCompute;
    FVar63.Data[iVar23].AccessAfter = SRVMask;
    FVar63.Data[iVar23].Flags = None;
    FVar63.Data[iVar23].CommitInfo.bIsSet = false;
  }
  pFVar59 = local_5b8;
  pFVar51 = (local_5b8->Transitions).FinalRead.AllocatorInstance.Data;
  iVar23 = (local_5b8->Transitions).FinalRead.ArrayNum;
  pFVar45 = pFVar51 + (longlong)iVar23 * 8;
  while( true ) {
    iVar24 = (int)pFVar48;
    if ((pFVar59->Transitions).FinalRead.ArrayNum != iVar23) {
      local_606[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FGPUSkinCache::FSkinCacheRWBuffer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_606);
    }
    if (pFVar51 == pFVar45) break;
    lVar55 = *(longlong *)pFVar51;
    uVar54 = *(uint *)(lVar55 + 0x34);
    *(uint *)(lVar55 + 0x34) = uVar65;
    if ((uVar54 != uVar65) &&
       (EVar10 = *(ERHIAccess *)(lVar55 + 0x30), EVar10 != (SRVMask|VertexOrIndexBuffer))) {
      *(undefined4 *)(lVar55 + 0x30) = 0x78;
      local_4d0._padding_._4_2_ = 0xffff;
      local_4d0.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar55 + 8);
      local_4d0._padding_._0_4_ = 0xffffffff;
      local_4d0.Type = UAV;
      local_4d0.AccessAfter = SRVMask|VertexOrIndexBuffer;
      local_4d0.Flags = None;
      local_4d0.CommitInfo.bIsSet = false;
      local_4d0.AccessBefore = EVar10;
      if ((FVar63.Data <= &local_4d0) &&
         ((&local_4d0 < FVar63.Data + local_5c0._4_4_ &&
          (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar19)))) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if (iVar24 == local_5c0._4_4_) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                           (0x830,&local_5c8,(int *)((longlong)&local_5c0 + 4));
        FVar63.Data = local_5c8.Data;
      }
      pFVar48 = (FRHITransitionInfo *)(ulonglong)(iVar24 + 1U);
      local_5c0 = CONCAT44(local_5c0._4_4_,iVar24 + 1U);
      FRHITransitionInfo::FRHITransitionInfo(FVar63.Data + iVar24,&local_4d0);
    }
    pFVar51 = pFVar51 + 8;
  }
  if (pFVar59->Pipeline != Graphics) {
    if ((pFVar59->Pipeline != AsyncCompute) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskData.Pipeline == ERHIPipeline::AsyncCompute",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                            ,0x818,L""), bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar23 = 0;
    local_3e8 = (FRHITransientAliasingInfo *)0x0;
    iStack_3e0 = 0;
    local_368 = FVar63.Data;
    if ((iVar24 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    local_2e8.AliasingInfos._12_4_ = uStack_3dc;
    local_2e8.AliasingInfos.ArrayNum = iStack_3e0;
    local_2e8.TransitionInfos._12_4_ = uStack_35c;
    local_2e8.TransitionInfos.ArrayNum = iVar24;
    local_2e8.SrcPipelines = AsyncCompute;
    local_2e8.DstPipelines = All;
    local_2e8.Flags = None;
    local_2e8.TransitionInfos.DataPtr = local_368;
    local_2e8.AliasingInfos.DataPtr = local_3e8;
    iStack_360 = iVar24;
    local_498 = RHICreateTransition(&local_2e8);
    pFVar62 = local_5f8;
    pFVar59->AsyncComputeTransition = local_498;
    local_508.AllocatorInstance.Data = (FScriptContainerElement *)&local_498;
    local_508.ArrayNum = 1;
    local_258._12_4_ = local_508.ArrayMax;
    local_258.ArrayNum = 1;
    local_258.DataPtr = (FRHITransition **)local_508.AllocatorInstance.Data;
    FRHIComputeCommandList::BeginTransitions((FRHIComputeCommandList *)local_5f8,&local_258);
    local_508.AllocatorInstance.Data = (FScriptContainerElement *)pFVar59->AsyncComputeTransition;
    local_518 = &local_508;
    uStack_510 = 1;
    local_248._12_4_ = uStack_50c;
    local_248.ArrayNum = 1;
    local_248.DataPtr = (FRHITransition **)local_518;
    FRHIComputeCommandList::EndTransitions((FRHIComputeCommandList *)pFVar62,&local_248);
    if ((iVar24 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar45 = FMemStackBase::Alloc(&pFVar62->MemManager,(longlong)iVar24 << 4,8);
    pFVar48 = FVar63.Data;
    local_508.AllocatorInstance.Data = pFVar45;
    if (FVar63.Data != FVar63.Data + iVar24) {
      do {
        if ((((short)pFVar48->_padding_ != -1) ||
            (*(short *)((longlong)&pFVar48->_padding_ + 2) != -1)) ||
           (*(short *)((longlong)&pFVar48->_padding_ + 4) != -1)) {
          `FRHIComputeCommandList::SetTrackedAccess'::__l6::<lambda_1>::operator()(local_590);
        }
        pFVar46 = GetViewableResource(pFVar48);
        pFVar51 = pFVar45;
        if (pFVar46 != (FRHIViewableResource *)0x0) {
          iVar23 = iVar23 + 1;
          pFVar51 = pFVar45 + 0x10;
          *(ERHIAccess *)pFVar45 = pFVar48->AccessAfter;
          pFVar45[4] = (FScriptContainerElement)0x3;
          *(FRHIViewableResource **)(pFVar45 + 8) = pFVar46;
        }
        pFVar48 = pFVar48 + 1;
        pFVar45 = pFVar51;
      } while (pFVar48 != FVar63.Data + iVar24);
      if (0 < iVar23) {
        local_3d8 = local_508.AllocatorInstance.Data;
        local_238._12_4_ = uStack_3cc;
        local_238.ArrayNum = iVar23;
        local_238.DataPtr = (FRHITrackedAccessInfo *)local_508.AllocatorInstance.Data;
        iStack_3d0 = iVar23;
        FRHIComputeCommandList::SetTrackedAccess((FRHIComputeCommandList *)local_5f8,&local_238);
      }
    }
    goto LAB_147c45fb0;
  }
  bVar19 = IsGPUSkinCacheRayTracingSupported();
  if (bVar19) {
    bVar19 = FRDGBuilder::IsImmediateMode();
    EVar64 = All;
    if (bVar19) goto LAB_147c45d0d;
  }
  else {
LAB_147c45d0d:
    EVar64 = Graphics;
  }
  local_378 = FVar63.Data;
  if ((iVar24 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_268._12_4_ = uStack_36c;
  local_268.ArrayNum = iVar24;
  local_268.DataPtr = local_378;
  iStack_370 = iVar24;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)local_5f8,&local_268,Graphics,EVar64,None);
LAB_147c45fb0:
  if (bVar69) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (FVar63.Data != (FRHITransitionInfo *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FVar63.Data);
  }
  (local_5b0->BatchDispatches).ArrayNum = 0;
  if ((local_5b0->BatchDispatches).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(local_5b0->BatchDispatches).AllocatorInstance,0,
               &(local_5b0->BatchDispatches).ArrayMax);
  }
  RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_178);
  if (bVar68) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DispatchPassSetup @ 147c46070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUSkinCache::DispatchPassSetup(FGPUSkinCache *this,FTaskData *param_1)

{
  TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator> *pTVar1;
  <unnamed_type_RecomputeTangents> *p<Var2;
  FDynamicMeshBoundsBuffer *pFVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  undefined1 *puVar7;
  FRHICommandList *pFVar8;
  FGPUSkinCacheEntry *this_00;
  FSkeletalMeshRenderData *pFVar9;
  FDynamicMeshBoundsBlackboardStruct *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  FRHIShaderResourceView *pFVar13;
  undefined4 uVar14;
  FTaskData *pFVar15;
  TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator> *pTVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumBuffers> FVar25;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingBuffers> FVar28;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingDispatches> FVar29;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumDispatches> FVar30;
  FDynamicMeshBoundsShaderParameters *pFVar31;
  ulonglong uVar32;
  ForElementType<unsigned_int> FVar33;
  ulonglong *puVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong *puVar39;
  longlong lVar40;
  FScriptContainerElement *pFVar41;
  uint uVar42;
  undefined1 *puVar43;
  uint *puVar44;
  <unnamed_type_Skinning> *p<Var45;
  TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *pTVar46;
  undefined1 *puVar47;
  FGPUSkinCache *this_01;
  ulonglong *puVar48;
  ulonglong *puVar49;
  <unnamed_type_Transitions> *p<Var50;
  uchar auVar51 [8];
  bool bVar52;
  undefined1 auStackY_258 [32];
  ulonglong local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  int local_1e4;
  int local_1e0;
  int local_1dc;
  FTaskData *local_1d8;
  ulonglong local_1d0;
  FGPUSkinCache *local_1c8;
  int local_1c0;
  uint local_1bc;
  ulonglong local_1b8;
  TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> local_1b0;
  int local_1a0;
  <unnamed_type_Transitions> *local_198;
  int *local_190;
  FScriptContainerElement *local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  int local_160;
  FStatMessage local_158;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator> *local_118
  ;
  int iStack_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FDynamicMeshBoundsShaderParameters local_98 [2];
  undefined4 local_6c;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar52 = -1 < CpuChannel->Enabled;
  local_1d8 = param_1;
  local_1c8 = this;
  if (bVar52) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1642,"FGPUSkinCache::DispatchPassSetup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,0x66a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1642);
  }
  uVar35 = (this->BatchDispatches).ArrayNum;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  if ((param_1->DynamicMeshBoundsBlackboardStruct != (FDynamicMeshBoundsBlackboardStruct *)0x0) &&
     (pFVar3 = (this->DynamicMeshBoundsBuffer).Ptr, pFVar3 != (FDynamicMeshBoundsBuffer *)0x0)) {
    lVar20 = 8;
    if ((pFVar3->Allocator).bGrowOnly == false) {
      lVar20 = 4;
    }
    local_68.NumBits =
         *(int *)((pFVar3->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar20 + -0x10);
    uVar42 = local_68.NumBits + 0x1f;
    uVar38 = uVar42 >> 5;
    if (uVar42 >> 5 != 0) {
      if (4 < uVar38) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_68.AllocatorInstance,0,uVar38,4);
        local_68.MaxBits = uVar38 << 5;
      }
      FVar33 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar33 = local_68.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar33,0,(ulonglong)uVar38 << 2);
      uVar42 = local_68.NumBits & 0x8000001f;
      if ((int)uVar42 < 0) {
        uVar42 = (uVar42 - 1 | 0xffffffe0) + 1;
      }
      if (uVar42 != 0) {
        FVar33 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar33 = local_68.AllocatorInstance.SecondaryData;
        }
        puVar44 = (uint *)((longlong)FVar33 +
                          (longlong)
                          ((int)(local_68.NumBits + (local_68.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar44 = *puVar44 & 0xffffffffU >> (0x20U - (char)uVar42 & 0x1f);
      }
    }
  }
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  piVar4 = &(param_1->TangentDispatches).ArrayMax;
  if (*piVar4 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar35,(ForAnyElementType *)param_1,(param_1->TangentDispatches).ArrayNum,
               piVar4);
  }
  uVar42 = uVar35 * 2;
  p<Var50 = &param_1->Transitions;
  local_198 = p<Var50;
  if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
  }
  piVar4 = &(param_1->Transitions).FinalRead.ArrayMax;
  if (*piVar4 < (int)uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar42,(ForAnyElementType *)p<Var50,(param_1->Transitions).FinalRead.ArrayNum,
               piVar4);
  }
  p<Var45 = &(param_1->Transitions).Skinning;
  if ((param_1->Transitions).Skinning.Write.ArrayMax < (int)uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar42,(ForAnyElementType *)p<Var45,
               (param_1->Transitions).Skinning.Write.ArrayNum,
               &(param_1->Transitions).Skinning.Write.ArrayMax);
  }
  pTVar46 = &(param_1->Transitions).RecomputeTangents.Read;
  if ((param_1->Transitions).RecomputeTangents.Read.ArrayMax < (int)uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar42,&pTVar46->AllocatorInstance,
               (param_1->Transitions).RecomputeTangents.Read.ArrayNum,
               &(param_1->Transitions).RecomputeTangents.Read.ArrayMax);
  }
  if (GRecomputeTangentsParallelDispatch != 0) {
    if ((param_1->Transitions).RecomputeTangents.Write.ArrayMax < (int)uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar35,(ForAnyElementType *)&(param_1->Transitions).RecomputeTangents,
                 (param_1->Transitions).RecomputeTangents.Write.ArrayNum,
                 &(param_1->Transitions).RecomputeTangents.Write.ArrayMax);
    }
  }
  local_1e4 = 0;
  local_1dc = 0;
  local_1e0 = 0;
  local_1b8 = CONCAT44(local_1b8._4_4_,1);
  local_1bc = (local_1c8->BatchDispatches).ArrayNum;
  uVar32 = (ulonglong)(int)local_1bc;
  pFVar41 = (local_1c8->BatchDispatches).AllocatorInstance.Data;
  local_188 = pFVar41 + uVar32 * 0x10;
  while( true ) {
    pFVar5 = local_188;
    if ((local_1c8->BatchDispatches).ArrayNum != (int)uVar32) {
      local_1e8 = 0;
      `TCheckedPointerIterator<FGPUSkinCache::FDispatchEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e8);
    }
    if (pFVar41 == pFVar5) break;
    piVar4 = *(int **)pFVar41;
    *(undefined1 *)((longlong)piVar4 + 0x3b) = 0;
    uVar35 = *(uint *)(pFVar41 + 8);
    uVar42 = 0;
    if ((int)uVar35 < piVar4[8]) {
      uVar42 = ~uVar35 >> 0x1f;
    }
    local_190 = piVar4;
    if ((uVar42 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar39 = (ulonglong *)((longlong)(int)uVar35 * 0x140 + *(longlong *)(piVar4 + 6));
    *(undefined1 *)((longlong)puVar39 + 0x35) = 0;
    puVar39[0x1e] = 0;
    *(undefined4 *)((longlong)puVar39 + 0xdc) = 0;
    if ((local_68.NumBits != 0) && (iVar19 = (int)puVar39[0x26], -1 < iVar19)) {
      if ((local_68.NumBits <= iVar19) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar33 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar33 = local_68.AllocatorInstance.SecondaryData;
      }
      iVar18 = iVar19;
      if (iVar19 < 0) {
        iVar18 = iVar19 + 0x1f;
      }
      puVar44 = (uint *)((longlong)FVar33 + (longlong)(iVar18 >> 5) * 4);
      *puVar44 = *puVar44 | (int)local_1b8 << ((byte)iVar19 & 0x1f);
    }
    if ((*(byte *)(*puVar39 + 0x118) & 4) == 0) {
      puVar39[0x1d] = *puVar39;
      *(byte *)((longlong)puVar39 + 0x35) = *(byte *)((longlong)puVar39 + 0x35) | 1;
      iVar19 = (param_1->Transitions).Skinning.Write.ArrayNum;
      if (iVar19 == (param_1->Transitions).Skinning.Write.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)p<Var45,&(p<Var45->Write).ArrayMax);
        (p<Var45->Write).ArrayNum = iVar19;
      }
      pFVar5 = (p<Var45->Write).AllocatorInstance.Data;
      (p<Var45->Write).ArrayNum = iVar19 + 1;
      *(ulonglong *)(pFVar5 + (longlong)iVar19 * 8) = puVar39[0x1d];
      iVar19 = (p<Var50->FinalRead).ArrayNum;
      if (iVar19 == (p<Var50->FinalRead).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)p<Var50,&(p<Var50->FinalRead).ArrayMax);
      }
      (p<Var50->FinalRead).ArrayNum = iVar19 + 1;
      *(ulonglong *)((p<Var50->FinalRead).AllocatorInstance.Data + (longlong)iVar19 * 8) =
           puVar39[0x1d];
    }
    else {
      uVar32 = puVar39[4];
      lVar40 = uVar32 + 0x140;
      lVar20 = (ulonglong)*(uint *)(uVar32 + 0x188) + 1;
      local_1f0 = lVar40 + lVar20 * 0x18;
      if (*(longlong *)(lVar40 + lVar20 * 0x18) == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("bPrevious",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                            ,0xfe,
                            L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                           );
        if (bVar17) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar20 = (ulonglong)*(uint *)(uVar32 + 0x188) + 1;
        local_1f0 = lVar40 + lVar20 * 0x18;
        if ((*(longlong *)(lVar40 + lVar20 * 0x18) == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Output->VertexBufferRHI.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                ,0x101,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      local_1c0 = *(int *)(uVar32 + 400);
      puVar48 = puVar39 + 2;
      uVar22 = 0;
      puVar49 = puVar39 + 1;
      puVar21 = puVar48;
      puVar34 = puVar49;
      uVar36 = uVar22;
      uVar23 = uVar22;
      do {
        if (((int)*puVar34 == local_1c0) && (*puVar21 == local_1f0)) {
          uVar22 = (longlong)(int)uVar23 * 0x38 + *puVar39;
          break;
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        uVar36 = uVar36 + 1;
        puVar34 = (ulonglong *)((longlong)puVar34 + 4);
        puVar21 = puVar21 + 1;
      } while ((longlong)uVar36 < 2);
      puVar39[0x1d] = uVar22;
      uVar35 = *(int *)(uVar32 + 400) - *(int *)(uVar32 + 0x18c);
      lVar20 = ((ulonglong)(uVar35 < 2) ^ (ulonglong)*(uint *)(uVar32 + 0x188)) + 1;
      uVar36 = lVar40 + lVar20 * 0x18;
      if (*(longlong *)(lVar40 + lVar20 * 0x18) == 0) {
        if ((1 < uVar35) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("bPrevious",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                ,0xfe,
                                L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar20 = (ulonglong)*(uint *)(uVar32 + 0x188) + 1;
        uVar36 = lVar40 + lVar20 * 0x18;
        if ((*(longlong *)(lVar40 + lVar20 * 0x18) == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Output->VertexBufferRHI.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                ,0x101,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      param_1 = local_1d8;
      iVar19 = *(int *)(uVar32 + 0x18c);
      uVar22 = 0;
      uVar32 = uVar22;
      uVar23 = uVar22;
      do {
        if (((int)*puVar49 == iVar19) && (*puVar48 == uVar36)) {
          uVar37 = (longlong)(int)uVar23 * 0x38 + *puVar39;
          break;
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        uVar32 = uVar32 + 1;
        puVar49 = (ulonglong *)((longlong)puVar49 + 4);
        puVar48 = puVar48 + 1;
        uVar37 = uVar22;
      } while ((longlong)uVar32 < 2);
      uVar32 = puVar39[0x1d];
      puVar39[0x1e] = uVar37;
      if ((uVar32 == 0) || (p<Var50 = local_198, uVar32 == uVar37)) {
        uVar32 = *puVar39;
        uVar23 = (ulonglong)(uVar37 == uVar32);
        *(int *)((longlong)puVar39 + uVar23 * 4 + 8) = local_1c0;
        puVar39[uVar23 + 2] = local_1f0;
        if (uVar37 == uVar32) {
          uVar22 = 0x38;
        }
        puVar39[0x1d] = uVar22 + *puVar39;
        *(byte *)((longlong)puVar39 + 0x35) = *(byte *)((longlong)puVar39 + 0x35) | 1;
        iVar18 = (local_1d8->Transitions).Skinning.Write.ArrayNum;
        if (iVar18 == (local_1d8->Transitions).Skinning.Write.ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&(local_1d8->Transitions).Skinning,
                              &(local_1d8->Transitions).Skinning.Write.ArrayMax);
          (param_1->Transitions).Skinning.Write.ArrayNum = iVar18;
        }
        pFVar5 = (param_1->Transitions).Skinning.Write.AllocatorInstance.Data;
        p<Var50 = &param_1->Transitions;
        (param_1->Transitions).Skinning.Write.ArrayNum = iVar18 + 1;
        *(ulonglong *)(pFVar5 + (longlong)iVar18 * 8) = puVar39[0x1d];
        iVar18 = (param_1->Transitions).FinalRead.ArrayNum;
        if (iVar18 == (param_1->Transitions).FinalRead.ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)p<Var50,
                              &(param_1->Transitions).FinalRead.ArrayMax);
        }
        (param_1->Transitions).FinalRead.ArrayNum = iVar18 + 1;
        *(ulonglong *)((p<Var50->FinalRead).AllocatorInstance.Data + (longlong)iVar18 * 8) =
             puVar39[0x1d];
        uVar32 = puVar39[0x1d];
      }
      lVar20 = 0;
      if (puVar39[0x1e] == 0) {
        uVar23 = *puVar39;
        uVar22 = (ulonglong)(uVar32 == uVar23);
        *(int *)((longlong)puVar39 + uVar22 * 4 + 8) = iVar19;
        p<Var45 = &(param_1->Transitions).Skinning;
        puVar39[uVar22 + 2] = uVar36;
        if (uVar32 == uVar23) {
          lVar20 = 0x38;
        }
        puVar39[0x1e] = lVar20 + *puVar39;
        *(byte *)((longlong)puVar39 + 0x35) = *(byte *)((longlong)puVar39 + 0x35) | 2;
        iVar19 = (param_1->Transitions).Skinning.Write.ArrayNum;
        if (iVar19 == (param_1->Transitions).Skinning.Write.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)p<Var45,
                              &(param_1->Transitions).Skinning.Write.ArrayMax);
          (param_1->Transitions).Skinning.Write.ArrayNum = iVar19;
        }
        pFVar5 = (p<Var45->Write).AllocatorInstance.Data;
        (param_1->Transitions).Skinning.Write.ArrayNum = iVar19 + 1;
        *(ulonglong *)(pFVar5 + (longlong)iVar19 * 8) = puVar39[0x1e];
        iVar19 = (p<Var50->FinalRead).ArrayNum;
        if (iVar19 == (p<Var50->FinalRead).ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)p<Var50,&(p<Var50->FinalRead).ArrayMax);
        }
        (p<Var50->FinalRead).ArrayNum = iVar19 + 1;
        *(ulonglong *)((p<Var50->FinalRead).AllocatorInstance.Data + (longlong)iVar19 * 8) =
             puVar39[0x1e];
      }
      p<Var45 = &(param_1->Transitions).Skinning;
      pTVar46 = &(param_1->Transitions).RecomputeTangents.Read;
    }
    if ((puVar39[0x1e] == puVar39[0x1d]) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("DispatchData.PreviousPositionBuffer != DispatchData.PositionBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                            ,0x6be,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar36 = *puVar39;
    uVar32 = uVar36 + 0x70;
    if (uVar36 == 0) {
      uVar32 = 0;
    }
    puVar39[0x1c] = uVar32;
    if ((*(byte *)((longlong)puVar39 + 0x35) & 1) != 0) {
      if ((puVar39[0x1f] & 3) != 0) {
        *(byte *)((longlong)puVar39 + 0x35) = *(byte *)((longlong)puVar39 + 0x35) | 4;
      }
      if ((puVar39[0x1f] & 2) != 0) {
        if (uVar36 == 0) {
          puVar39[0x22] = 0;
          puVar39[0x23] = 0;
LAB_147c4694d:
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("DispatchData.RecomputeTangents.IntermediateTangentBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x6ce,L"");
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          uVar32 = uVar36 + 0xa8;
          if ((*(byte *)(uVar36 + 0x118) & 2) == 0) {
            uVar32 = 0;
          }
          puVar39[0x22] = uVar32;
          uVar23 = uVar36 + 0xe0;
          if (*(int *)(uVar36 + 0x120) == 0) {
            uVar23 = 0;
          }
          puVar39[0x23] = uVar23;
          if (uVar32 == 0) goto LAB_147c4694d;
        }
        iVar19 = (param_1->Transitions).Skinning.Write.ArrayNum;
        if (iVar19 == (param_1->Transitions).Skinning.Write.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)p<Var45,&(p<Var45->Write).ArrayMax);
          (p<Var45->Write).ArrayNum = iVar19;
        }
        pFVar5 = (p<Var45->Write).AllocatorInstance.Data;
        (p<Var45->Write).ArrayNum = iVar19 + 1;
        *(ulonglong *)(pFVar5 + (longlong)iVar19 * 8) = puVar39[0x22];
        iVar19 = (param_1->Transitions).RecomputeTangents.Read.ArrayNum;
        if (iVar19 == (param_1->Transitions).RecomputeTangents.Read.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar46->AllocatorInstance,&pTVar46->ArrayMax);
          pTVar46->ArrayNum = iVar19;
        }
        pFVar5 = (pTVar46->AllocatorInstance).Data;
        pTVar46->ArrayNum = iVar19 + 1;
        *(ulonglong *)(pFVar5 + (longlong)iVar19 * 8) = puVar39[0x22];
        iVar19 = (param_1->Transitions).RecomputeTangents.Read.ArrayNum;
        if (iVar19 == (param_1->Transitions).RecomputeTangents.Read.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar46->AllocatorInstance,&pTVar46->ArrayMax);
          pTVar46->ArrayNum = iVar19;
        }
        pTVar46->ArrayNum = iVar19 + 1;
        *(ulonglong *)((pTVar46->AllocatorInstance).Data + (longlong)iVar19 * 8) = puVar39[0x1d];
        if (GRecomputeTangentsParallelDispatch != 0) {
          p<Var2 = &(param_1->Transitions).RecomputeTangents;
          if ((puVar39[0x23] == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RecomputeTangents.IntermediateAccumulatedTangentBuffer",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                  ,0x2b6,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_1d0 = puVar39[0x23];
          pFVar5 = (p<Var2->Write).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_1d0) &&
              ((FScriptContainerElement *)&local_1d0 <
               pFVar5 + (longlong)(param_1->Transitions).RecomputeTangents.Write.ArrayMax * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar19 = (param_1->Transitions).RecomputeTangents.Write.ArrayNum;
          piVar4 = &(param_1->Transitions).RecomputeTangents.Write.ArrayMax;
          if (iVar19 == *piVar4) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)p<Var2,piVar4);
          }
          (param_1->Transitions).RecomputeTangents.Write.ArrayNum = iVar19 + 1;
          *(ulonglong *)((p<Var2->Write).AllocatorInstance.Data + (longlong)iVar19 * 8) = local_1d0;
        }
        iVar19 = (param_1->TangentDispatches).ArrayNum;
        if (iVar19 == (param_1->TangentDispatches).ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)param_1,
                              &(param_1->TangentDispatches).ArrayMax);
        }
        (param_1->TangentDispatches).ArrayNum = iVar19 + 1;
        uVar12 = *(undefined8 *)(pFVar41 + 8);
        pFVar5 = (param_1->TangentDispatches).AllocatorInstance.Data + (longlong)iVar19 * 0x10;
        *(undefined8 *)pFVar5 = *(undefined8 *)pFVar41;
        *(undefined8 *)(pFVar5 + 8) = uVar12;
      }
      iVar19 = (param_1->Transitions).Skinning.Write.ArrayNum;
      if (iVar19 == (param_1->Transitions).Skinning.Write.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)p<Var45,&(p<Var45->Write).ArrayMax);
        (p<Var45->Write).ArrayNum = iVar19;
      }
      pFVar5 = (p<Var45->Write).AllocatorInstance.Data;
      (p<Var45->Write).ArrayNum = iVar19 + 1;
      *(ulonglong *)(pFVar5 + (longlong)iVar19 * 8) = puVar39[0x1c];
      iVar19 = (p<Var50->FinalRead).ArrayNum;
      if (iVar19 == (p<Var50->FinalRead).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)p<Var50,&(p<Var50->FinalRead).ArrayMax);
      }
      (p<Var50->FinalRead).ArrayNum = iVar19 + 1;
      *(ulonglong *)((p<Var50->FinalRead).AllocatorInstance.Data + (longlong)iVar19 * 8) =
           puVar39[0x1c];
    }
    iVar18 = (uint)(puVar39[0x23] != 0) + (uint)(puVar39[0x22] != 0) + (uint)(puVar39[0x1e] != 0) +
             (uint)(puVar39[0x1d] != 0) + (uint)(puVar39[0x1c] != 0);
    local_1e4 = local_1e4 + iVar18;
    iVar19 = 0;
    if (*local_190 == 1) {
      iVar19 = iVar18;
    }
    uVar32 = (ulonglong)local_1bc;
    local_1e0 = local_1e0 + iVar19;
    local_1dc = local_1dc + (uint)(*local_190 == 1);
    pFVar41 = pFVar41 + 0x10;
  }
  auVar51 = (uchar  [8])(longlong)local_1e4;
  if ((local_1e4 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar25 = StatPtr_STAT_GPUSkinCache_NumBuffers;
    if (StatPtr_STAT_GPUSkinCache_NumBuffers ==
        (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumBuffers>)0x0) {
      pFVar24 = ::FName::FName(&local_a8,"STAT_GPUSkinCache_NumBuffers");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumBuffers>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumBuffers,
                          *pFVar24,L"Num Buffers","STATGROUP_GPUSkinCache","STATCAT_Advanced",
                          L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar25;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar26 == (FThreadStats *)0x0) {
        pFVar27 = FThreadStatsPool::Get();
        pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
      }
      local_158.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_180 = FVar6;
      local_158.StatData.Pad = auVar51;
      local_158.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar26,&local_158);
      FStatsTrace::Add(&local_180,(long64)auVar51);
      if (pFVar26->ScopeCount == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  auVar51 = (uchar  [8])(longlong)local_1e0;
  if ((local_1e0 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar28 = StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers;
    if (StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers ==
        (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingBuffers>)0x0) {
      pFVar24 = ::FName::FName(&local_a0,"STAT_GPUSkinCache_NumRayTracingBuffers");
      FVar28 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingBuffers>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers,*pFVar24,
                          L"Num RayTracing Buffers","STATGROUP_GPUSkinCache","STATCAT_Advanced",
                          L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar28;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar26 == (FThreadStats *)0x0) {
        pFVar27 = FThreadStatsPool::Get();
        pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
      }
      local_148.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_178 = FVar6;
      local_148.StatData.Pad = auVar51;
      local_148.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar26,&local_148);
      FStatsTrace::Add(&local_178,(long64)auVar51);
      if (pFVar26->ScopeCount == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  auVar51 = (uchar  [8])(longlong)local_1dc;
  if ((local_1dc != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar29 = StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches;
    if (StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches ==
        (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingDispatches>)0x0) {
      pFVar24 = ::FName::FName(&local_b8,"STAT_GPUSkinCache_NumRayTracingDispatches");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingDispatches>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches,*pFVar24,
                          L"Num RayTracing Dispatches","STATGROUP_GPUSkinCache","STATCAT_Advanced",
                          L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar29;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar26 == (FThreadStats *)0x0) {
        pFVar27 = FThreadStatsPool::Get();
        pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
      }
      local_138.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_170 = FVar6;
      local_138.StatData.Pad = auVar51;
      local_138.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar26,&local_138);
      FStatsTrace::Add(&local_170,(long64)auVar51);
      if (pFVar26->ScopeCount == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  this_01 = local_1c8;
  auVar51 = (uchar  [8])(longlong)(local_1c8->BatchDispatches).ArrayNum;
  if ((auVar51 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar30 = StatPtr_STAT_GPUSkinCache_NumDispatches;
    if (StatPtr_STAT_GPUSkinCache_NumDispatches ==
        (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumDispatches>)0x0) {
      pFVar24 = ::FName::FName(&local_b0,"STAT_GPUSkinCache_NumDispatches");
      FVar30 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumDispatches>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumDispatches,
                          *pFVar24,L"Num Dispatches","STATGROUP_GPUSkinCache","STATCAT_Advanced",
                          L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar30;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar26 == (FThreadStats *)0x0) {
        pFVar27 = FThreadStatsPool::Get();
        pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
      }
      local_128.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_168 = FVar6;
      local_128.StatData.Pad = auVar51;
      local_128.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar26,&local_128);
      FStatsTrace::Add(&local_168,(long64)auVar51);
      if (pFVar26->ScopeCount == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  if (0 < GSkinCachePrintMemorySummary) {
    GSkinCachePrintMemorySummary = GSkinCachePrintMemorySummary + -1;
    PrintMemorySummary(this_01);
  }
  bVar17 = IsGPUSkinCacheRayTracingSupported();
  if ((bVar17) && (bVar17 = IsRayTracingEnabled(), bVar17)) {
    iVar19 = *(int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x28;
    local_108 = &(this_01->PendingProcessRTGeometryEntries).Elements.field_0x10;
    iStack_110 = 0;
    pTVar1 = &this_01->PendingProcessRTGeometryEntries;
    local_f8 = 0;
    iStack_fc = 0;
    if (iVar19 != 0) {
      puVar44 = *(uint **)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x20;
      if (puVar44 == (uint *)0x0) {
        puVar44 = (uint *)local_108;
      }
      uVar35 = *puVar44;
      while (uVar35 == 0) {
        lVar20 = (longlong)iStack_110;
        local_f8 = local_f8 + 0x20;
        iStack_110 = iStack_110 + 1;
        iStack_fc = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110)
        goto LAB_147c47250;
        uVar35 = puVar44[lVar20 + 1];
      }
      local_1b8 = (ulonglong)(-uVar35 & uVar35);
      uVar32 = local_1b8 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_160 = (int)lVar20;
      iStack_fc = local_f8 + -1 + local_160;
      if (iVar19 < iStack_fc) {
        iStack_fc = iVar19;
      }
    }
LAB_147c47250:
    uVar35 = *(uint *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x28;
    uStack_10c = (undefined4)local_1b8;
    uStack_f4 = local_6c;
    iStack_f0 = *(int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x8 -
                *(int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x34;
    puVar47 = &(this_01->PendingProcessRTGeometryEntries).Elements.field_0x10;
    uStack_100 = 0xffffffff;
    uVar42 = uVar35 & 0xffffffe0;
    TStack_e0.CurrentBitIndex = iStack_fc;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
    iVar18 = (int)uVar35 >> 5;
    TStack_e0._28_4_ = local_6c;
    TStack_e0.BaseBitIndex = local_f8;
    uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
    local_118 = pTVar1;
    local_e8 = pTVar1;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
    if ((((int)uVar35 < 0) || (iVar19 < (int)uVar35)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar15 = local_1d8;
    uVar38 = *(uint *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x28;
    if (uVar35 != uVar38) {
      puVar7 = *(undefined1 **)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x20;
      puVar43 = puVar47;
      if (puVar7 != (undefined1 *)0x0) {
        puVar43 = puVar7;
      }
      uVar35 = -1 << ((byte)uVar35 & 0x1f) & *(uint *)(puVar43 + (longlong)iVar18 * 4);
      while (uVar35 == 0) {
        lVar20 = (longlong)iVar18;
        uVar42 = uVar42 + 0x20;
        iVar18 = iVar18 + 1;
        uVar35 = uVar38;
        if ((int)((uVar38 - 1) + ((int)(uVar38 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_147c47370;
        uVar35 = *(uint *)(puVar43 + lVar20 * 4 + 4);
      }
      uVar32 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1a0 = (int)lVar20;
      uVar35 = local_1a0 + -1 + uVar42;
      if ((int)uVar38 < (int)uVar35) {
        uVar35 = uVar38;
      }
    }
LAB_147c47370:
    while( true ) {
      pTVar16 = local_e8;
      if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
          (int)uStack_c0) {
        local_1e7[0] = 0;
        `TSparseArray<TSparseSetElement<FGPUSkinCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
      }
      if (((TStack_e0.CurrentBitIndex == uVar35) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar47)) &&
         (this_01 = local_1c8, pTVar16 == pTVar1)) break;
      pFVar8 = pFVar15->RHICmdList;
      this_00 = *(FGPUSkinCacheEntry **)
                 (*(longlong *)&pTVar16->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x10);
      bVar17 = IsGPUSkinCacheRayTracingSupported();
      if (((!bVar17) || (bVar17 = IsRayTracingEnabled(), !bVar17)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsGPUSkinCacheRayTracingSupported() && IsRayTracingEnabled()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x930,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (((this_00 != (FGPUSkinCacheEntry *)0x0) &&
          (this_00->GPUSkin != (FSkeletalMeshObject *)0x0)) &&
         (this_00->GPUSkin->bSupportRayTracing != false)) {
        local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.ArrayNum = 0;
        local_1b0.ArrayMax = 0;
        FGPUSkinCacheEntry::GetRayTracingSegmentVertexBuffers(this_00,&local_1b0);
        uVar42 = this_00->LOD;
        pFVar9 = this_00->GPUSkin->SkeletalMeshRenderData;
        if (((pFVar9->LODRenderData).Array.ArrayNum <= (int)uVar42) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("LODIndex < SkelMeshRenderData.LODRenderData.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                ,0x939,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar38 = 0;
        if ((int)uVar42 < (pFVar9->LODRenderData).Array.ArrayNum) {
          uVar38 = ~uVar42 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (**(code **)(this_00->GPUSkin->_padding_ + 0x100))
                  (this_00->GPUSkin,pFVar8,
                   *(undefined8 *)
                    ((pFVar9->LODRenderData).Array.AllocatorInstance.Data +
                    (longlong)(int)uVar42 * 8),uVar42);
        DestructItems<TRefCountPtr<FRHIBuffer>,int>
                  ((TRefCountPtr<FRHIBuffer> *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
        if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.AllocatorInstance.Data);
        }
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
  }
  if (*(int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x8 !=
      *(int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x34) {
    TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator>::
    UnhashElements(&this_01->PendingProcessRTGeometryEntries);
    iVar19 = *(int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0xc;
    *(undefined4 *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x8 = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this_01->PendingProcessRTGeometryEntries,0,
                 (int *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0xc);
    }
    *(undefined4 *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x34 = 0;
    *(undefined4 *)&(this_01->PendingProcessRTGeometryEntries).Elements.field_0x28 = 0;
  }
  pFVar15 = local_1d8;
  if ((local_1d8->DynamicMeshBoundsBlackboardStruct != (FDynamicMeshBoundsBlackboardStruct *)0x0) &&
     (pFVar3 = (this_01->DynamicMeshBoundsBuffer).Ptr, pFVar3 != (FDynamicMeshBoundsBuffer *)0x0)) {
    pFVar31 = FDynamicMeshBoundsBuffer::Update(pFVar3,local_98,local_1d8->RHICmdList,&local_68);
    uVar14 = *(undefined4 *)&pFVar31->field_0x4;
    pFVar13 = pFVar31->DynamicMeshBoundsBuffer;
    pFVar10 = pFVar15->DynamicMeshBoundsBlackboardStruct;
    (pFVar10->Parameters).DynamicMeshBoundsMax = pFVar31->DynamicMeshBoundsMax;
    *(undefined4 *)&(pFVar10->Parameters).field_0x4 = uVar14;
    (pFVar10->Parameters).DynamicMeshBoundsBuffer = pFVar13;
    pFVar15->DynamicMeshBoundsBlackboardStruct->bInitialized = true;
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (bVar52) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DispatchUpdateSkinTangentsTrianglePass @ 147c47620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FGPUSkinCache::DispatchUpdateSkinTangentsTrianglePass
          (FGPUSkinCache *this,FRHICommandList *param_1,FGPUSkinCacheEntry *param_2,int param_3,
          FSkinCacheRWBuffer **param_4)

{
  TArray<FGPUSkinCache::FSkinCacheRWBuffer,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FSkeletalMeshRenderData *pFVar3;
  FRHIResource *pFVar4;
  FRHIBuffer *this_01;
  FRHIUnorderedAccessView *this_02;
  FRHIShaderResourceView *this_03;
  FRHIResource *pFVar5;
  code *pcVar6;
  FRecomputeTangentsPerTriangleCS *pFVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FGlobalShaderMap *this_04;
  FShaderType *pFVar14;
  FName FVar15;
  FRHIBreadcrumbAllocator *pFVar16;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
  *pTVar17;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents> FVar18;
  FRHIComputeShader *pFVar19;
  FShaderParametersMetadata *pFVar20;
  FRHIBatchedShaderUnbinds *pFVar21;
  uint uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FSkinCacheRWBuffer *pFVar25;
  FRHICommandListBase *pFVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  FNameEntryId FVar30;
  longlong lVar31;
  wchar_t *pwVar32;
  uchar auVar33 [8];
  uchar auVar34 [8];
  bool local_res8 [8];
  FRHICommandListBase *local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_230 [2];
  uint local_228;
  uint uStack_224;
  TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable> local_218;
  TIntVector4<unsigned_int>_u_0 local_208;
  FName local_1f8;
  FName local_1f0;
  FDebugName local_1e8;
  FStatMessage local_1d8;
  FStatMessage local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  FRHIBreadcrumbScope local_168;
  char local_158;
  FRHITransitionInfo local_148;
  undefined4 local_118;
  undefined2 local_114;
  FRHIUnorderedAccessView *local_110;
  undefined1 local_108;
  ERHIAccess local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f0;
  FRHITransitionInfo *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  FName local_c8;
  undefined1 local_c0 [8];
  FName local_b8 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  FString local_98;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar9 = 0;
  if (param_3 < (param_2->DispatchData).ArrayNum) {
    uVar9 = (uint)~param_3 >> 0x1f;
  }
  local_res10 = (FRHICommandListBase *)param_1;
  local_res20[0] = param_3;
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_230[0] = param_2->LOD;
  lVar23 = (longlong)(int)local_230[0];
  pFVar2 = (param_2->DispatchData).AllocatorInstance.Data;
  pFVar3 = param_2->GPUSkin->SkeletalMeshRenderData;
  uVar9 = 0;
  if ((int)local_230[0] < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar9 = ~local_230[0] >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar23 = *(longlong *)((pFVar3->LODRenderData).Array.AllocatorInstance.Data + lVar23 * 8);
  if (GRecomputeTangentsParallelDispatch == 0) {
    uVar29 = (ulonglong)GNumTangentIntermediateBuffers;
    this_00 = &this->StagingBuffers;
    iVar28 = (this->StagingBuffers).ArrayNum;
    if (iVar28 != GNumTangentIntermediateBuffers) {
      if (GNumTangentIntermediateBuffers < iVar28) {
        lVar31 = uVar29 * 0x38;
        do {
          uVar22 = (uint)uVar29;
          uVar9 = 0;
          if ((int)uVar22 < (this->StagingBuffers).ArrayNum) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar24 = (this_00->AllocatorInstance).Data + lVar31;
          *(undefined4 *)(pFVar24 + 0x18) = 0;
          pFVar4 = *(FRHIResource **)pFVar24;
          if (pFVar4 != (FRHIResource *)0x0) {
            *(undefined8 *)pFVar24 = 0;
            FRHIResource::Release(pFVar4);
          }
          pFVar4 = *(FRHIResource **)(pFVar24 + 8);
          if (pFVar4 != (FRHIResource *)0x0) {
            *(undefined8 *)(pFVar24 + 8) = 0;
            FRHIResource::Release(pFVar4);
          }
          pFVar4 = *(FRHIResource **)(pFVar24 + 0x10);
          if (pFVar4 != (FRHIResource *)0x0) {
            *(undefined8 *)(pFVar24 + 0x10) = 0;
            FRHIResource::Release(pFVar4);
          }
          uVar29 = (ulonglong)(uVar22 + 1);
          *(undefined4 *)(pFVar24 + 0x30) = 0;
          lVar31 = lVar31 + 0x38;
        } while ((int)(uVar22 + 1) < (this->StagingBuffers).ArrayNum);
      }
      TArray<FGPUSkinCache::FSkinCacheRWBuffer,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,GNumTangentIntermediateBuffers,No);
    }
    iVar28 = (this->StagingBuffers).ArrayNum;
    iVar1 = *(int *)(pFVar2 + (longlong)param_3 * 0x140 + 0x4c);
    uVar22 = (this->CurrentStagingBufferIndex + 1) % iVar28;
    uVar27 = iVar1 << 3;
    this->CurrentStagingBufferIndex = uVar22;
    uVar9 = 0;
    if ((int)uVar22 < iVar28) {
      uVar9 = ~uVar22 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar25 = (FSkinCacheRWBuffer *)
              ((this_00->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x38);
    *param_4 = pFVar25;
    pFVar26 = local_res10;
    if ((ulonglong)(pFVar25->Buffer).NumBytes < (ulonglong)uVar27 << 2) {
      (pFVar25->Buffer).NumBytes = 0;
      this_01 = (pFVar25->Buffer).Buffer.Reference;
      if (this_01 != (FRHIBuffer *)0x0) {
        (pFVar25->Buffer).Buffer.Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)this_01);
      }
      this_02 = (pFVar25->Buffer).UAV.Reference;
      if (this_02 != (FRHIUnorderedAccessView *)0x0) {
        (pFVar25->Buffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
        FRHIResource::Release((FRHIResource *)this_02);
      }
      this_03 = (pFVar25->Buffer).SRV.Reference;
      if (this_03 != (FRHIShaderResourceView *)0x0) {
        (pFVar25->Buffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)this_03);
      }
      pFVar25->AccessState = None;
      FRWBuffer::Initialize
                (&(*param_4)->Buffer,local_res10,L"SkinTangentIntermediate",4,uVar27,PF_R32_SINT,
                 UAVCompute,UnorderedAccess,(FResourceArrayUploadInterface *)0x0);
      (**(code **)(GDynamicRHI->_padding_ + 0x208))
                (GDynamicRHI,local_res10,((*param_4)->Buffer).UAV.Reference,
                 L"SkinTangentIntermediate");
      FVar11 = StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed;
      if (StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed ==
          (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed>)0x0) {
        pFVar10 = ::FName::FName(&local_c8,"STAT_GPUSkinCache_TangentsIntermediateMemUsed");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed,*pFVar10,
                            L"Intermediate buffer for Recompute Tangents","STATGROUP_GPUSkinCache",
                            "STATCAT_Advanced",L"GPU Skin Cache",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar15 = *(FName *)FVar11;
      uVar9 = iVar1 << 5;
      auVar33[4] = '\0';
      auVar33[5] = '\0';
      auVar33[6] = '\0';
      auVar33[7] = '\0';
      auVar33[0] = (char)uVar9;
      auVar33[1] = (char)(uVar9 >> 8);
      auVar33[2] = (char)(uVar9 >> 0x10);
      auVar33[3] = (char)(uVar9 >> 0x18);
      FVar30 = FVar15.ComparisonIndex.Value;
      uVar9 = FVar15.Number;
      local_228 = FVar30.Value;
      uStack_224 = uVar9;
      if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        local_1d8.NameAndInfo.Number = uVar9 & 0xffff8fff | 0x8000;
        local_1f8 = FVar15;
        local_1d8.StatData.Pad = auVar33;
        local_1d8.NameAndInfo.Index.Value = FVar30.Value;
        FThreadStats::AddStatMessage(pFVar12,&local_1d8);
        FStatsTrace::Set(&local_1f8,(long64)auVar33);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
      pFVar26 = local_res10;
      local_208._0_8_ = 0;
      local_208._8_8_ = 0;
      FRHIComputeCommandList::ClearUAVUint
                ((FRHIComputeCommandList *)local_res10,((*param_4)->Buffer).UAV.Reference,
                 (TIntVector4<unsigned_int> *)&local_208._s_0);
    }
    if ((*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x108) == 0) ||
       (lVar31 = *(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x110), lVar31 == 0)) {
      lVar31 = *(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe0);
    }
    local_148.AccessBefore = *(ERHIAccess *)(lVar31 + 0x30);
    *(undefined4 *)(lVar31 + 0x30) = 0x10;
    local_148.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar31 + 8);
    pFVar25 = *param_4;
    local_148._padding_._0_4_ = 0xffffffff;
    local_148._padding_._4_2_ = 0xffff;
    local_148.Type = UAV;
    local_148.AccessAfter = SRVCompute;
    local_148.Flags = None;
    local_148.CommitInfo.bIsSet = false;
    local_104 = pFVar25->AccessState;
    local_110 = (pFVar25->Buffer).UAV.Reference;
    pFVar25->AccessState = UAVCompute;
    local_e8 = &local_148;
    uStack_e0 = 2;
    local_a8._12_4_ = uStack_dc;
    local_a8.ArrayNum = 2;
    local_118 = 0xffffffff;
    local_114 = 0xffff;
    local_108 = 3;
    local_100 = 0x400;
    local_fc = 0;
    local_f0 = 0;
    local_a8.DataPtr = local_e8;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)pFVar26,&local_a8,AllowDecayPipelines);
  }
  this_04 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel]);
  local_res8[0] = *(bool *)(lVar23 + 0xe0);
  if (GUseDuplicatedVerticesForRecomputeTangents != 0) {
    lVar31 = (longlong)(int)local_res20[0];
    uVar9 = 0;
    if ((int)local_res20[0] < *(int *)(lVar23 + 0x18)) {
      uVar9 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(lVar31 * 0x118 + 0x90 + *(longlong *)(lVar23 + 0x10)) != 0) {
      iVar28 = 1;
      goto LAB_147c47c15;
    }
  }
  iVar28 = 0;
LAB_147c47c15:
  bVar8 = local_res8[0] != false;
  pFVar14 = (FShaderType *)FRecomputeTangentsPerTriangleCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_04,&local_d8,pFVar14,iVar28 + (-(uint)bVar8 & 2));
  if (local_d8.ShaderContent == (FShader *)0x0) {
    FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c0);
    ::FName::ToString((FName *)FVar15,&local_98);
    FRecomputeTangentsPerTriangleCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FRecomputeTangentsPerTriangleCS::GetStaticType();
  local_218.ShaderContent = (FRecomputeTangentsPerTriangleCS *)local_d8.ShaderContent;
  local_218.ShaderMap = local_d8.ShaderMap;
  if ((local_d8.ShaderContent == (FShader *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x554,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_158 = '\0';
  bVar8 = GetEmitDrawEvents();
  pFVar26 = local_res10;
  if (bVar8) {
    local_res18[0] = (uint)param_2->BoneInfluenceType;
    if (param_2->GPUSkin == (FSkeletalMeshObject *)0x0) {
      FDebugName::FDebugName(&local_1e8);
    }
    else {
      FDebugName::FDebugName(&local_1e8,param_2->GPUSkin->DebugName);
    }
    pwVar32 = L"";
    if (param_2->Mode == RayTracing) {
      pwVar32 = L"[RT]";
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_68 = 0;
      uStack_64 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_6c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SkinTangents_Pe;
      ::Desc._padding_ = (longlong)u__sTangentsTri__;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x55f;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FGPUSkinCache::DispatchUpdateSkinTangentsTrianglePass'::__l29::<lambda_1>::
             operator()<wchar_t_const_(&)[1],FDebugName,int_const_&,int_&,unsigned_int_&,unsigned_int_&,int,bool_const_&>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar26 = local_res10;
    pFVar16 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)local_res10);
    pTVar17 = FMemStackBase::Alloc(&pFVar16->Inner,0x80,8);
    pTVar17 = UE::RHI::Breadcrumbs::Private::
              TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
              ::
              TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_><wchar_t_const_(&)[1],FDebugName_&,int_const_&,int_&,unsigned_int_&,unsigned_int_&,int_&,bool_const_&>
                        (pTVar17,pFVar16,&::Desc,(wchar_t (*) [1])pwVar32,&local_1e8,
                         (int *)local_230,(int *)local_res20,
                         (uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0xfc),
                         (uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0x100),(int *)local_res18,
                         local_res8);
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&local_168,(FRHIComputeCommandList *)pFVar26,(FRHIBreadcrumbNode *)pTVar17);
    local_158 = '\x01';
  }
  if ((char)iVar28 != '\0') {
    lVar31 = (longlong)(int)local_res20[0];
    uVar9 = 0;
    if ((int)local_res20[0] < *(int *)(lVar23 + 0x18)) {
      uVar9 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = *(FRHIResource **)(pFVar2 + (longlong)param_3 * 0x140 + 0x128);
    pFVar5 = *(FRHIResource **)(lVar31 * 0x118 + 0x90 + *(longlong *)(lVar23 + 0x10));
    if (pFVar4 != pFVar5) {
      *(FRHIResource **)(pFVar2 + (longlong)param_3 * 0x140 + 0x128) = pFVar5;
      if (pFVar5 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar5);
      }
      if (pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar4);
      }
    }
    lVar31 = (longlong)(int)local_res20[0];
    uVar9 = 0;
    if ((int)local_res20[0] < *(int *)(lVar23 + 0x18)) {
      uVar9 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = *(FRHIResource **)(pFVar2 + (longlong)param_3 * 0x140 + 0x120);
    pFVar5 = *(FRHIResource **)(lVar31 * 0x118 + 0xa8 + *(longlong *)(lVar23 + 0x10));
    if (pFVar4 != pFVar5) {
      *(FRHIResource **)(pFVar2 + (longlong)param_3 * 0x140 + 0x120) = pFVar5;
      if (pFVar5 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar5);
      }
      if (pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar4);
      }
    }
  }
  auVar34[4] = '\0';
  auVar34[5] = '\0';
  auVar34[6] = '\0';
  auVar34[7] = '\0';
  auVar34._0_4_ = *(uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0x100);
  if ((auVar34 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar18 = StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents;
    if (StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents ==
        (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents>)0x0) {
      pFVar10 = ::FName::FName(local_b8,"STAT_GPUSkinCache_NumTrianglesForRecomputeTangents");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents,*pFVar10,
                          L"Num Triangles for Recompute Tangents","STATGROUP_GPUSkinCache",
                          "STATCAT_Advanced",L"GPU Skin Cache",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar15 = *(FName *)FVar18;
    if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      local_1c8.NameAndInfo.Number = FVar15.Number & 0xffffafff | 0xa000;
      local_1f0 = FVar15;
      local_1c8.StatData.Pad = auVar34;
      local_1c8.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar12,&local_1c8);
      FStatsTrace::Add(&local_1f0,(long64)auVar34);
      if (pFVar12->ScopeCount == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable>::GetComputeShader
            (&local_218);
  pFVar19 = TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_218);
  SetComputePipelineState((FRHIComputeCommandList *)pFVar26,pFVar19);
  local_180 = 0;
  local_178 = 0;
  local_1b8 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x100);
  local_1b4 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x48);
  local_1a0 = *(undefined8 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x108);
  local_1a8 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0xfc);
  local_1b0 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x40);
  local_1ac = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x50);
  if ((*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PositionBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x2a4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_188 = *(undefined8 *)(*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe8) + 0x10);
  if ((*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x108) == 0) ||
     (lVar23 = *(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x110), lVar23 == 0)) {
    lVar23 = *(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe0);
  }
  local_190 = *(undefined8 *)(lVar23 + 0x10);
  local_198 = *(undefined8 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x60);
  if (((GRecomputeTangentsParallelDispatch != 0) &&
      (param_4 = (FSkinCacheRWBuffer **)(pFVar2 + (longlong)param_3 * 0x140 + 0x118),
      *param_4 == (FSkinCacheRWBuffer *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecomputeTangents.IntermediateAccumulatedTangentBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x2b6,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_170 = *(undefined8 *)((longlong)*param_4 + 8);
  local_1a4 = (*(uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0xf8) >> 2) *
              GRecomputeTangentsParallelDispatch;
  if (*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x128) != 0) {
    local_178 = *(undefined8 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x120);
    local_180 = *(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x128);
  }
  pFVar19 = TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_218);
  pFVar20 = FRecomputeTangentsPerTriangleCS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar7 = local_218.ShaderContent;
  local_88.ShaderContent = (FShader *)local_218.ShaderContent;
  local_88.ShaderMap = local_218.ShaderMap;
  ValidateShaderParameters(&local_88,pFVar20,&local_1b8);
  ::SetShaderParameters
            ((FRHICommandList *)pFVar26,pFVar19,(FShaderParameterBindings *)pFVar7,pFVar20,
             &local_1b8);
  DispatchComputeShader
            ((FRHIComputeCommandList *)pFVar26,(FShader *)pFVar7,
             *(int *)(pFVar2 + (longlong)param_3 * 0x140 + 0x100) + 0x3fU >> 6,1,1);
  pFVar19 = TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_218);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar21 = FRHICommandListBase::GetScratchShaderUnbinds(pFVar26);
    if ((((FShaderParameterBindings *)&pFVar7->field_0x0)->RootParameterBufferIndex != 0xffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UnsetShaderUAVs(pFVar21,(FShaderParameterBindings *)pFVar7);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)pFVar26,pFVar19,pFVar21);
  }
  if (local_158 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_168);
  }
  return;
}

// DispatchUpdateSkinTangentsVertexPass @ 147c483b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSkinCache::DispatchUpdateSkinTangentsVertexPass
          (FGPUSkinCache *this,FRHICommandList *param_1,FGPUSkinCacheEntry *param_2,int param_3,
          FSkinCacheRWBuffer **param_4)

{
  char cVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FSkinCacheRWBuffer *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
  *pTVar9;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar10;
  FName this_02;
  FRHIComputeShader *pFVar11;
  FShaderParametersMetadata *pFVar12;
  FRHIBatchedShaderUnbinds *pFVar13;
  wchar_t *pwVar14;
  undefined1 local_res8 [8];
  int local_res20 [2];
  TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable> local_198;
  FDebugName local_188;
  FRHIBreadcrumbScope local_178;
  char local_168;
  FRHITransitionInfo local_158;
  undefined4 local_128;
  undefined2 local_124;
  FRHIUnorderedAccessView *local_120;
  undefined1 local_118;
  ERHIAccess local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_100;
  FRHITransitionInfo *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_cc;
  int local_c8;
  FRHIResource *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FString local_88;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar7 = 0;
  if (param_3 < (param_2->DispatchData).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  local_res20[0] = param_3;
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_168 = '\0';
  pFVar2 = (param_2->DispatchData).AllocatorInstance.Data;
  bVar6 = GetEmitDrawEvents();
  if (bVar6) {
    if (param_2->GPUSkin == (FSkeletalMeshObject *)0x0) {
      FDebugName::FDebugName(&local_188);
    }
    else {
      FDebugName::FDebugName(&local_188,param_2->GPUSkin->DebugName);
    }
    pwVar14 = L"";
    if (param_2->Mode == RayTracing) {
      pwVar14 = L"[RT]";
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x4fc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_58 = 0;
      uStack_54 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_5c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SkinTangents_Pe;
      ::Desc._padding_ = (longlong)u__sTangentsVerte;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FGPUSkinCache::DispatchUpdateSkinTangentsVertexPass'::__l7::<lambda_1>::
             operator()<wchar_t_const_(&)[1],FDebugName,int_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pTVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x78,8);
    pTVar9 = UE::RHI::Breadcrumbs::Private::
             TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
             ::
             TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_><wchar_t_const_(&)[1],FDebugName_&,int_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&>
                       (pTVar9,pFVar8,&::Desc,(wchar_t (*) [1])pwVar14,&local_188,&param_2->LOD,
                        local_res20,(uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0x40),
                        (uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0x48),
                        (uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0x4c));
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&local_178,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar9);
    local_168 = '\x01';
  }
  if (GRecomputeTangentsParallelDispatch == 0) {
    if ((*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe0) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TangentBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                           ,0x2aa,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe0);
    uStack_f0 = 2;
    local_158.AccessBefore = *(ERHIAccess *)(lVar3 + 0x30);
    local_158.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x30) = 0x400;
    pFVar4 = *param_4;
    local_158._padding_._0_4_ = 0xffffffff;
    local_158._padding_._4_2_ = 0xffff;
    local_158.Type = UAV;
    local_158.AccessAfter = UAVCompute;
    local_158.Flags = None;
    local_158.CommitInfo.bIsSet = false;
    local_114 = pFVar4->AccessState;
    local_120 = (pFVar4->Buffer).UAV.Reference;
    pFVar4->AccessState = UAVCompute;
    local_f8 = &local_158;
    local_98._12_4_ = uStack_ec;
    local_98.ArrayNum = 2;
    local_128 = 0xffffffff;
    local_124 = 0xffff;
    local_118 = 3;
    local_110 = 0x400;
    local_10c = 0;
    local_100 = 0;
    local_98.DataPtr = local_f8;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,&local_98,AllowDecayPipelines);
  }
  cVar1 = *(char *)(*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x28) + 0xf);
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel]);
  pFVar10 = (FShaderType *)FRecomputeTangentsPerVertexCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_e8,pFVar10,(uint)(cVar1 != '\x03'));
  if (local_e8.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_02,&local_88);
    FRecomputeTangentsPerVertexCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FRecomputeTangentsPerVertexCS::GetStaticType();
  local_198.ShaderContent = (FRecomputeTangentsPerVertexCS *)local_e8.ShaderContent;
  local_198.ShaderMap = local_e8.ShaderMap;
  pFVar11 = TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_198);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar11);
  local_d4 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x48);
  local_d8 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x4c);
  local_d0 = *(undefined4 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x40);
  local_cc = (uint)*(byte *)(*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x28) + 0xf);
  if (*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x110) == 0) {
    local_c0 = (FRHIResource *)0x0;
  }
  else {
    this_00 = *(FRHIResource **)(*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0x110) + 0x10);
    local_c0 = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
      FRHIResource::Release(this_00);
    }
  }
  local_b8 = *(undefined8 *)(pFVar2 + (longlong)param_3 * 0x140 + 0x68);
  if (((GRecomputeTangentsParallelDispatch != 0) &&
      (param_4 = (FSkinCacheRWBuffer **)(pFVar2 + (longlong)param_3 * 0x140 + 0x118),
      *param_4 == (FSkinCacheRWBuffer *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecomputeTangents.IntermediateAccumulatedTangentBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x2b6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_b0 = *(undefined8 *)((longlong)*param_4 + 8);
  local_c8 = (*(uint *)(pFVar2 + (longlong)param_3 * 0x140 + 0xf8) >> 2) *
             GRecomputeTangentsParallelDispatch;
  if ((*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe0) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TangentBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x2aa,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8 = *(undefined8 *)(*(longlong *)(pFVar2 + (longlong)param_3 * 0x140 + 0xe0) + 8);
  pFVar11 = TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_198);
  pFVar12 = FRecomputeTangentsPerVertexCS::FParameters::FTypeInfo::GetStructMetadata();
  local_78.ShaderContent = local_e8.ShaderContent;
  local_78.ShaderMap = local_e8.ShaderMap;
  ValidateShaderParameters(&local_78,pFVar12,&local_d8);
  ::SetShaderParameters(param_1,pFVar11,&(local_e8.ShaderContent)->Bindings,pFVar12,&local_d8);
  DispatchComputeShader
            ((FRHIComputeCommandList *)param_1,local_e8.ShaderContent,
             *(int *)(pFVar2 + (longlong)param_3 * 0x140 + 0x4c) + 0x3fU >> 6,1,1);
  pFVar11 = TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_198);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar13 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((((local_e8.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar13,&(local_e8.ShaderContent)->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar11,pFVar13);
  }
  if (local_168 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_178);
  }
  return;
}

// DrawVisualizationInfoText @ 147c4c440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUSkinCache::DrawVisualizationInfoText
          (FGPUSkinCache *this,FName *param_1,FScreenMessageWriter *param_2)

{
  FModeType FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  longlong lVar5;
  UEngine *pUVar6;
  bool bVar7;
  uint uVar8;
  FGPUSkinCacheVisualizationData *this_00;
  FText *pFVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_288;
  FColor_u_0 local_284;
  FScreenMessageWriter *local_280;
  longlong local_278;
  FLinearColor_u_0 local_270;
  FLinearColor_u_0 local_260;
  FLinearColor_u_0 local_250;
  FLinearColor_u_0 local_240;
  FLinearColor_u_0 local_230;
  FLinearColor_u_0 local_220;
  FLinearColor_u_0 local_210;
  FLinearColor_u_0 local_200;
  FLinearColor_u_0 local_1f0;
  UEngine *local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88 [6];
  
  this_00 = GetGPUSkinCacheVisualizationData();
  bVar7 = FGPUSkinCacheVisualizationData::IsActive(this_00);
  if (bVar7) {
    FVar1 = this_00->ActiveVisualizationModeType;
    local_280 = param_2;
    if (FVar1 == Overview) {
      ::FString::FString(&local_1d8,L"Skin Cache Visualization - Overview");
      fVar15 = __real_3b808081;
      local_270._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      local_270._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      local_270._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      local_270._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
      pFVar9 = FText::FromString(&local_118,&local_1d8);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_270._s_0);
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_1c8,L"Non SK mesh");
      local_260._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      local_260._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      local_260._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      local_260._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar15;
      pFVar9 = FText::FromString(&local_108,&local_1c8);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_260._s_0);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      fVar16 = __real_437f0000;
      fVar17 = __real_3f000000;
      fVar4 = __real_3f800000;
      fVar14 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.A;
      fVar18 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.G;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar18) {
        fVar18 = __real_3f800000;
      }
      fVar12 = fVar14 * __real_437f0000 + __real_3f000000;
      fVar18 = fVar18 * __real_437f0000 + __real_3f000000;
      fVar14 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.B;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
      fVar13 = fVar14 * __real_437f0000 + __real_3f000000;
      fVar14 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.R;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
      fVar14 = fVar14 * __real_437f0000 + __real_3f000000;
      ::FString::FString(&local_1b8,L"SK Skin Cache Excluded");
      local_250._s_0.R = FLinearColor::sRGBToLinearTable[(int)fVar14 & 0xff];
      local_250._s_0.G = FLinearColor::sRGBToLinearTable[(int)fVar18 & 0xff];
      local_250._s_0.B = FLinearColor::sRGBToLinearTable[(int)fVar13 & 0xff];
      local_250._s_0.A = (float)((int)fVar12 & 0xff) * fVar15;
      pFVar9 = FText::FromString(&local_f8,&local_1b8);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_250._s_0);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      fVar14 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.A;
      fVar18 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.B;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      if (fVar4 <= fVar18) {
        fVar18 = fVar4;
      }
      fVar12 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.G;
      fVar13 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.R;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (fVar4 <= fVar12) {
        fVar12 = fVar4;
      }
      if (fVar4 <= fVar13) {
        fVar13 = fVar4;
      }
      ::FString::FString(&local_1a8,L"SK Skin Cache Included");
      local_240._s_0.R = FLinearColor::sRGBToLinearTable[(int)(fVar13 * fVar16 + fVar17) & 0xff];
      local_240._s_0.G = FLinearColor::sRGBToLinearTable[(int)(fVar12 * fVar16 + fVar17) & 0xff];
      local_240._s_0.B = FLinearColor::sRGBToLinearTable[(int)(fVar18 * fVar16 + fVar17) & 0xff];
      local_240._s_0.A = (float)((int)(fVar14 * fVar16 + fVar17) & 0xff) * fVar15;
      pFVar9 = FText::FromString(&local_e8,&local_1a8);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_240._s_0);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      fVar14 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.A;
      fVar18 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.B;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      if (fVar4 <= fVar18) {
        fVar18 = fVar4;
      }
      fVar12 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.G;
      fVar13 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.R;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (fVar4 <= fVar12) {
        fVar12 = fVar4;
      }
      if (fVar4 <= fVar13) {
        fVar13 = fVar4;
      }
      ::FString::FString(&local_198,L"SK Recompute Tangent ON");
      local_230._s_0.R = FLinearColor::sRGBToLinearTable[(int)(fVar13 * fVar16 + fVar17) & 0xff];
      local_230._s_0.G = FLinearColor::sRGBToLinearTable[(int)(fVar12 * fVar16 + fVar17) & 0xff];
      local_230._s_0.B = FLinearColor::sRGBToLinearTable[(int)(fVar18 * fVar16 + fVar17) & 0xff];
      local_230._s_0.A = (float)((int)(fVar14 * fVar16 + fVar17) & 0xff) * fVar15;
      pFVar9 = FText::FromString(&local_d8,&local_198);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_230._s_0);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
    else if (FVar1 == Memory) {
      ::FString::PrintfImpl(&local_a8,L"0 - %fMB");
      ::FString::FString(&local_188,L"Skin Cache Visualization - Memory");
      fVar15 = __real_3b808081;
      local_220._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      local_220._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      local_220._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      local_220._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
      pFVar9 = FText::FromString(&local_c8,&local_188);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_220._s_0);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_178,L"Total Used: %.2fMB");
      local_210._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      local_210._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      local_210._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      local_210._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar15;
      pFVar9 = FText::FromString(&local_b8,&local_178);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_210._s_0);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      fVar17 = __real_437f0000;
      fVar4 = __real_3f000000;
      fVar18 = __real_3f800000;
      fVar15 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.B;
      fVar14 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.R;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (__real_3f800000 <= fVar15) {
        fVar15 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
      fVar16 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.G;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      local_res20[0]._0_1_ = (undefined1)(int)(fVar15 * __real_437f0000 + __real_3f000000);
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      fVar15 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.A;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      local_res20[0]._1_1_ = (undefined1)(int)(fVar16 * __real_437f0000 + __real_3f000000);
      if (__real_3f800000 <= fVar15) {
        fVar15 = __real_3f800000;
      }
      local_res20[0]._2_1_ = (undefined1)(int)(fVar14 * __real_437f0000 + __real_3f000000);
      local_res20[0]._3_1_ = (undefined1)(int)(fVar15 * __real_437f0000 + __real_3f000000);
      ::FString::PrintfImpl(&local_168,L"Low: < %.2fMB");
      `FGPUSkinCache::DrawVisualizationInfoText'::__l5::<lambda_1>::operator()
                (&local_280,&local_168,(FColor *)&local_res20[0]._s_0);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      fVar15 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.B;
      fVar14 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.G;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      fVar16 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.R;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      local_288._s_0.B = (uchar)(int)(fVar15 * fVar17 + fVar4);
      fVar15 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.A;
      if (fVar18 <= fVar16) {
        fVar16 = fVar18;
      }
      local_288._s_0.G = (uchar)(int)(fVar14 * fVar17 + fVar4);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      local_288._s_0.R = (uchar)(int)(fVar16 * fVar17 + fVar4);
      local_288._s_0.A = (uchar)(int)(fVar15 * fVar17 + fVar4);
      ::FString::PrintfImpl(&local_158,L"Mid: %.2f - %.2fMB");
      `FGPUSkinCache::DrawVisualizationInfoText'::__l5::<lambda_1>::operator()
                (&local_280,&local_158,(FColor *)&local_288._s_0);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      fVar15 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.B;
      fVar14 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.G;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      fVar16 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.R;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      local_284._s_0.B = (uchar)(int)(fVar15 * fVar17 + fVar4);
      fVar15 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.A;
      if (fVar18 <= fVar16) {
        fVar16 = fVar18;
      }
      local_284._s_0.G = (uchar)(int)(fVar14 * fVar17 + fVar4);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      local_284._s_0.R = (uchar)(int)(fVar16 * fVar17 + fVar4);
      local_284._s_0.A = (uchar)(int)(fVar15 * fVar17 + fVar4);
      ::FString::PrintfImpl(&local_148,L"High: > %.2fMB");
      `FGPUSkinCache::DrawVisualizationInfoText'::__l5::<lambda_1>::operator()
                (&local_280,&local_148,(FColor *)&local_284._s_0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    else if (FVar1 == RayTracingLODOffset) {
      ::FString::FString(&local_138,L"Skin Cache Visualization - RayTracingLODOffset");
      fVar15 = __real_3b808081;
      local_200._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      local_200._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      local_200._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      local_200._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
      pFVar9 = FText::FromString(&local_98,&local_138);
      FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_200._s_0);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      fVar4 = __real_437f0000;
      fVar18 = __real_3f000000;
      fVar14 = __real_3f800000;
      uVar11 = 0;
      local_1e0 = GEngine;
      iVar10 = (GEngine->GPUSkinCacheVisualizationRayTracingLODOffsetColors).ArrayNum;
      if (0 < iVar10) {
        local_278 = 0;
        do {
          pUVar6 = local_1e0;
          lVar5 = local_278;
          uVar8 = 0;
          if ((int)uVar11 < iVar10) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (pUVar6->GPUSkinCacheVisualizationRayTracingLODOffsetColors).AllocatorInstance.
                   Data;
          fVar17 = *(float *)(pFVar2 + lVar5 + 0xc);
          fVar16 = *(float *)(pFVar2 + lVar5 + 8);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          if (fVar14 <= fVar17) {
            fVar17 = fVar14;
          }
          if (fVar14 <= fVar16) {
            fVar16 = fVar14;
          }
          fVar12 = *(float *)(pFVar2 + lVar5 + 4);
          fVar13 = *(float *)(pFVar2 + lVar5);
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (fVar14 <= fVar12) {
            fVar12 = fVar14;
          }
          if (fVar14 <= fVar13) {
            fVar13 = fVar14;
          }
          ::FString::PrintfImpl(&local_128,L"RT_LOD == Raster_LOD %s %d");
          local_1f0._s_0.R = FLinearColor::sRGBToLinearTable[(int)(fVar13 * fVar4 + fVar18) & 0xff];
          local_1f0._s_0.G = FLinearColor::sRGBToLinearTable[(int)(fVar12 * fVar4 + fVar18) & 0xff];
          local_1f0._s_0.B = FLinearColor::sRGBToLinearTable[(int)(fVar16 * fVar4 + fVar18) & 0xff];
          local_1f0._s_0.A = (float)((int)(fVar17 * fVar4 + fVar18) & 0xff) * fVar15;
          pFVar9 = FText::FromString(local_88,&local_128);
          FScreenMessageWriter::DrawLine(param_2,pFVar9,10,(FLinearColor *)&local_1f0._s_0);
          if (local_88[0].TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88[0].TextData.Reference + 0x10))();
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          uVar11 = uVar11 + 1;
          local_278 = local_278 + 0x10;
          iVar10 = (local_1e0->GPUSkinCacheVisualizationRayTracingLODOffsetColors).ArrayNum;
        } while ((int)uVar11 < iVar10);
      }
    }
  }
  return;
}

// GetDispatchPipeline @ 147c563e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

ERHIPipeline __cdecl FGPUSkinCache::GetDispatchPipeline(FRDGBuilder *param_1)

{
  bool bVar1;
  ERHIPipeline EVar2;
  
  bVar1 = FSkeletalMeshUpdater::IsEnabled();
  if (((!bVar1) || (GSkinCacheAsyncCompute == false)) ||
     (EVar2 = AsyncCompute, param_1->bSupportsAsyncCompute == false)) {
    EVar2 = Graphics;
  }
  return EVar2;
}

// GetPositionBuffer @ 147c59c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRWBuffer * __cdecl
FGPUSkinCache::GetPositionBuffer(FRDGBuilder *param_1,FGPUSkinCacheEntry *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRWBuffer *pFVar4;
  
  if (param_2 == (FGPUSkinCacheEntry *)0x0) {
    return (FRWBuffer *)0x0;
  }
  uVar3 = 0;
  if ((int)param_3 < (param_2->DispatchData).ArrayNum) {
    uVar3 = ~param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRWBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FRWBuffer **)
          ((param_2->DispatchData).AllocatorInstance.Data + (longlong)(int)param_3 * 0x140 + 0xe8);
}

// GetPreviousPositionBuffer @ 147c59d40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRWBuffer * __cdecl
FGPUSkinCache::GetPreviousPositionBuffer
          (FRDGBuilder *param_1,FGPUSkinCacheEntry *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRWBuffer *pFVar4;
  
  if (param_2 == (FGPUSkinCacheEntry *)0x0) {
    return (FRWBuffer *)0x0;
  }
  uVar3 = 0;
  if ((int)param_3 < (param_2->DispatchData).ArrayNum) {
    uVar3 = ~param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRWBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FRWBuffer **)
          ((param_2->DispatchData).AllocatorInstance.Data + (longlong)(int)param_3 * 0x140 + 0xf0);
}

// GetSkeletalMeshObjectDebugName @ 147c5acc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDebugName * __thiscall
FGPUSkinCache::GetSkeletalMeshObjectDebugName
          (FGPUSkinCache *this,FDebugName *__return_storage_ptr__,FSkeletalMeshObject *param_1)

{
  if (param_1 == (FSkeletalMeshObject *)0x0) {
    FDebugName::FDebugName(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FDebugName::FDebugName(__return_storage_ptr__,param_1->DebugName);
  return __return_storage_ptr__;
}

// GetSkeletalMeshObjectName @ 147c5ad00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FGPUSkinCache::GetSkeletalMeshObjectName
          (FGPUSkinCache *this,FString *__return_storage_ptr__,FSkeletalMeshObject *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,L"None");
  if (param_1 != (FSkeletalMeshObject *)0x0) {
    pFVar2 = ::FName::ToString(&param_1->DebugName,&local_18);
    if (__return_storage_ptr__ != pFVar2) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetTangentBuffer @ 147c5ca90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRWBuffer * __cdecl
FGPUSkinCache::GetTangentBuffer(FRDGBuilder *param_1,FGPUSkinCacheEntry *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRWBuffer *pFVar4;
  
  if (param_2 == (FGPUSkinCacheEntry *)0x0) {
    return (FRWBuffer *)0x0;
  }
  uVar3 = 0;
  if ((int)param_3 < (param_2->DispatchData).ArrayNum) {
    uVar3 = ~param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRWBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FRWBuffer **)
          ((param_2->DispatchData).AllocatorInstance.Data + (longlong)(int)param_3 * 0x140 + 0xe0);
}

// GetVisualizationDebugColor @ 147c5e410

/* WARNING: Removing unreachable block (ram,0x000147c5e790) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FColor __cdecl
FGPUSkinCache::GetVisualizationDebugColor
          (FName *param_1,FGPUSkinCacheEntry *param_2,FGPUSkinCacheEntry *param_3,uint param_4)

{
  FModeType FVar1;
  EGPUSkinCacheBufferBits EVar2;
  FRWBuffersAllocation *pFVar3;
  code *pcVar4;
  UEngine *pUVar5;
  bool bVar6;
  FColor_u_0 FVar7;
  uint uVar8;
  int iVar9;
  FGPUSkinCacheVisualizationData *this;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 in_register_0000008c;
  FGPUSkinCacheEntry *pFVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  uint in_stack_00000028;
  
  pFVar14 = (FGPUSkinCacheEntry *)CONCAT44(in_register_0000008c,param_4);
  this = GetGPUSkinCacheVisualizationData();
  bVar6 = FGPUSkinCacheVisualizationData::IsActive(this);
  if (bVar6) {
    FVar1 = this->ActiveVisualizationModeType;
    if (FVar1 == Overview) {
      if (param_3 == (FGPUSkinCacheEntry *)0x0) {
LAB_147c5e5de:
        fVar16 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.A;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if (__real_3f800000 <= fVar16) {
          fVar16 = __real_3f800000;
        }
        fVar17 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.R;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        uVar13 = (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xff;
        if (__real_3f800000 <= fVar17) {
          fVar17 = __real_3f800000;
        }
        fVar16 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.G;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        uVar10 = (int)(fVar17 * __real_437f0000 + __real_3f000000) & 0xff;
        if (__real_3f800000 <= fVar16) {
          fVar16 = __real_3f800000;
        }
        uVar8 = (uint)(fVar16 * __real_437f0000 + __real_3f000000);
        fVar16 = (GEngine->GPUSkinCacheVisualizationExcludedColor).field0_0x0._s_0.B;
      }
      else {
        uVar13 = 0;
        if ((int)in_stack_00000028 < (param_3->DispatchData).ArrayNum) {
          uVar13 = ~in_stack_00000028 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar7.Bits = (*pcVar4)();
          return (FColor_u_0)(FColor_u_0)FVar7._s_0;
        }
        if (*(longlong *)
             ((param_3->DispatchData).AllocatorInstance.Data +
             (longlong)(int)in_stack_00000028 * 0x140 + 0x108) == 0) {
          if (param_3 == (FGPUSkinCacheEntry *)0x0) goto LAB_147c5e5de;
          fVar16 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.A;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          fVar17 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.R;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          uVar13 = (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar17) {
            fVar17 = __real_3f800000;
          }
          fVar16 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.G;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          uVar10 = (int)(fVar17 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          uVar8 = (uint)(fVar16 * __real_437f0000 + __real_3f000000);
          fVar16 = (GEngine->GPUSkinCacheVisualizationIncludedColor).field0_0x0._s_0.B;
        }
        else {
          fVar16 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.A;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          fVar17 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.R;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          uVar13 = (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar17) {
            fVar17 = __real_3f800000;
          }
          fVar16 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.G;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          uVar10 = (int)(fVar17 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          uVar8 = (uint)(fVar16 * __real_437f0000 + __real_3f000000);
          fVar16 = (GEngine->GPUSkinCacheVisualizationRecomputeTangentsColor).field0_0x0._s_0.B;
        }
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      (param_1->ComparisonIndex).Value =
           ((uVar13 << 8 | uVar10) << 8 | uVar8 & 0xff) << 8 |
           (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xffU;
      goto LAB_147c5ea18;
    }
    if (FVar1 == Memory) {
      uVar12 = 0;
      uVar15 = uVar12;
      if ((param_3 != (FGPUSkinCacheEntry *)0x0) &&
         (pFVar3 = param_3->PositionAllocation, pFVar3 != (FRWBuffersAllocation *)0x0)) {
        uVar13 = (pFVar3->Initializer).NumVertices;
        EVar2 = (pFVar3->Initializer).BufferBits;
        iVar9 = uVar13 * GPixelFormats[(pFVar3->Initializer).TangentFormat].BlockBytes;
        iVar11 = iVar9 * 2;
        if ((EVar2 & IntermediateTangents) == None) {
          iVar11 = iVar9;
        }
        uVar15 = (ulonglong)
                 ((iVar11 + ((EVar2 >> 2 & 1) + 1) * uVar13 * 6 +
                  (pFVar3->Initializer).IntermediateAccumulatedTangentsSize * 0x10) * 2);
      }
      if ((pFVar14 != (FGPUSkinCacheEntry *)0x0) && (pFVar14 != param_3)) {
        pFVar3 = pFVar14->PositionAllocation;
        if (pFVar3 != (FRWBuffersAllocation *)0x0) {
          uVar13 = (pFVar3->Initializer).NumVertices;
          EVar2 = (pFVar3->Initializer).BufferBits;
          iVar9 = uVar13 * GPixelFormats[(pFVar3->Initializer).TangentFormat].BlockBytes;
          iVar11 = iVar9 * 2;
          if ((EVar2 & IntermediateTangents) == None) {
            iVar11 = iVar9;
          }
          uVar12 = (ulonglong)
                   ((iVar11 + ((EVar2 >> 2 & 1) + 1) * uVar13 * 6 +
                    (pFVar3->Initializer).IntermediateAccumulatedTangentsSize * 0x10) * 2);
        }
        uVar15 = uVar15 + uVar12;
      }
      if (GEngine->GPUSkinCacheVisualizationLowMemoryThresholdInMB <=
          (float)uVar15 * __real_35800000) {
        if (GEngine->GPUSkinCacheVisualizationHighMemoryThresholdInMB <=
            (float)uVar15 * __real_35800000) {
          fVar16 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.A;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          fVar17 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.R;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          uVar13 = (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar17) {
            fVar17 = __real_3f800000;
          }
          fVar16 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.G;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          uVar10 = (int)(fVar17 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          uVar8 = (uint)(fVar16 * __real_437f0000 + __real_3f000000);
          fVar16 = (GEngine->GPUSkinCacheVisualizationHighMemoryColor).field0_0x0._s_0.B;
        }
        else {
          fVar16 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.A;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          fVar17 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.R;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          uVar13 = (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar17) {
            fVar17 = __real_3f800000;
          }
          fVar16 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.G;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          uVar10 = (int)(fVar17 * __real_437f0000 + __real_3f000000) & 0xff;
          if (__real_3f800000 <= fVar16) {
            fVar16 = __real_3f800000;
          }
          uVar8 = (uint)(fVar16 * __real_437f0000 + __real_3f000000);
          fVar16 = (GEngine->GPUSkinCacheVisualizationMidMemoryColor).field0_0x0._s_0.B;
        }
      }
      else {
        fVar16 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.A;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if (__real_3f800000 <= fVar16) {
          fVar16 = __real_3f800000;
        }
        fVar17 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.R;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        uVar13 = (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xff;
        if (__real_3f800000 <= fVar17) {
          fVar17 = __real_3f800000;
        }
        fVar16 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.G;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        uVar10 = (int)(fVar17 * __real_437f0000 + __real_3f000000) & 0xff;
        if (__real_3f800000 <= fVar16) {
          fVar16 = __real_3f800000;
        }
        uVar8 = (uint)(fVar16 * __real_437f0000 + __real_3f000000);
        fVar16 = (GEngine->GPUSkinCacheVisualizationLowMemoryColor).field0_0x0._s_0.B;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      (param_1->ComparisonIndex).Value =
           ((uVar13 << 8 | uVar10) << 8 | uVar8 & 0xff) << 8 |
           (int)(fVar16 * __real_437f0000 + __real_3f000000) & 0xffU;
      goto LAB_147c5ea18;
    }
    if (FVar1 == RayTracingLODOffset) {
      if ((param_3 == (FGPUSkinCacheEntry *)0x0) || (pFVar14 == (FGPUSkinCacheEntry *)0x0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = pFVar14->LOD - param_3->LOD;
        if (((int)uVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODOffset >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                               ,0xa8f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar7.Bits = (*pcVar4)();
          return (FColor_u_0)(FColor_u_0)FVar7._s_0;
        }
      }
      pUVar5 = GEngine;
      iVar11 = (GEngine->GPUSkinCacheVisualizationRayTracingLODOffsetColors).ArrayNum;
      if (0 < iVar11) {
        if (((int)uVar13 < 0) || (iVar11 <= (int)uVar13)) {
          uVar13 = iVar11 - 1;
        }
        uVar10 = 0;
        if ((int)uVar13 < iVar11) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar7.Bits = (*pcVar4)();
          return (FColor_u_0)(FColor_u_0)FVar7._s_0;
        }
        FLinearColor::QuantizeRound
                  ((FLinearColor *)
                   ((pUVar5->GPUSkinCacheVisualizationRayTracingLODOffsetColors).AllocatorInstance.
                    Data + (longlong)(int)uVar13 * 0x10));
        goto LAB_147c5ea18;
      }
    }
  }
  (param_1->ComparisonIndex).Value = (uint)FColor::White.field0_0x0;
LAB_147c5ea18:
  return (FColor)SUB84(param_1,0);
}

// InvalidateAllEntries @ 147c68850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FGPUSkinCache::InvalidateAllEntries(FGPUSkinCache *this)

{
  FRHIResource *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  uVar11 = 0;
  uVar9 = uVar11;
  uVar12 = uVar11;
  if (0 < (this->Entries).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->Entries).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(*(longlong *)((this->Entries).AllocatorInstance.Data + uVar12) + 0x68) =
           0xffffffff;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar8 + 1) < (this->Entries).ArrayNum);
  }
  uVar9 = uVar11;
  if (0 < (this->StagingBuffers).ArrayNum) {
    do {
      uVar8 = (uint)uVar11;
      uVar5 = 0;
      if ((int)uVar8 < (this->StagingBuffers).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->StagingBuffers).AllocatorInstance.Data + uVar9;
      *(undefined4 *)(pFVar10 + 0x18) = 0;
      pFVar1 = *(FRHIResource **)pFVar10;
      if (pFVar1 != (FRHIResource *)0x0) {
        *(undefined8 *)pFVar10 = 0;
        FRHIResource::Release(pFVar1);
      }
      pFVar1 = *(FRHIResource **)(pFVar10 + 8);
      if (pFVar1 != (FRHIResource *)0x0) {
        *(undefined8 *)(pFVar10 + 8) = 0;
        FRHIResource::Release(pFVar1);
      }
      pFVar1 = *(FRHIResource **)(pFVar10 + 0x10);
      if (pFVar1 != (FRHIResource *)0x0) {
        *(undefined8 *)(pFVar10 + 0x10) = 0;
        FRHIResource::Release(pFVar1);
      }
      uVar11 = (ulonglong)(uVar8 + 1);
      *(undefined4 *)(pFVar10 + 0x30) = 0;
      uVar9 = uVar9 + 0x38;
    } while ((int)(uVar8 + 1) < (this->StagingBuffers).ArrayNum);
  }
  TArray<FGPUSkinCache::FSkinCacheRWBuffer,TSizedDefaultAllocator<32>_>::SetNum
            (&this->StagingBuffers,0,No);
  FVar7 = StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed;
  if (StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_GPUSkinCache_TangentsIntermediateMemUsed");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed,*pFVar6,
                       L"Intermediate buffer for Recompute Tangents","STATGROUP_GPUSkinCache",
                       "STATCAT_Advanced",L"GPU Skin Cache",true,false,ST_int64,false,false,
                       MCR_Physical);
  }
  FVar2 = *(FName *)FVar7;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar2;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_38.StatData.Pad[0] = '\0';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Set(&local_res8,0);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// IsEntryValid @ 147c68f20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FGPUSkinCache::IsEntryValid(FGPUSkinCacheEntry *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if (param_1 != (FGPUSkinCacheEntry *)0x0) {
    uVar4 = 0;
    if (param_2 < (param_1->DispatchData).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    if (*(int *)((param_1->DispatchData).AllocatorInstance.Data + (longlong)param_2 * 0x140 + 0x30)
        == param_2) {
      return true;
    }
  }
  return false;
}

// IsGPUSkinCacheRayTracingSupported @ 147c690d0

bool __cdecl FGPUSkinCache::IsGPUSkinCacheRayTracingSupported(void)

{
  bool bVar1;
  int iVar2;
  IConsoleManager *pIVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar3 + 0xc0))
                         (pIVar3,L"r.RayTracing.Geometry.SupportSkeletalMeshes",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      iVar2 = (**(code **)(*(longlong *)::CVar + 200))();
      SupportSkeletalMeshes = iVar2 != 0;
      _Init_thread_footer(&::_TSS1);
    }
  }
  bVar1 = IsRayTracingAllowed();
  if (((bVar1) && (SupportSkeletalMeshes != false)) && (GEnableGPUSkinCache != 0)) {
    return true;
  }
  return false;
}

// PrintMemorySummary @ 147c742d0

/* WARNING: Removing unreachable block (ram,0x000147c7471f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUSkinCache::PrintMemorySummary(FGPUSkinCache *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulong64 uVar16;
  uint local_res18;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  ulong64 local_a8;
  longlong local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  if (3 < (byte)LogSkinCache._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
  }
  uVar12 = 0;
  local_a8 = 0;
  local_res18 = 0;
  if (0 < (this->Entries).ArrayNum) {
    local_a0 = 0;
    uVar16 = uVar12;
    do {
      lVar1 = local_a0;
      uVar14 = 0;
      uVar15 = (uint)uVar16;
      uVar5 = 0;
      if ((int)uVar15 < (this->Entries).ArrayNum) {
        uVar5 = ~uVar15 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((this->Entries).AllocatorInstance.Data + lVar1);
      if (lVar1 != 0) {
        ::FString::FString(&local_e8,L"");
        uVar11 = uVar14;
        uVar13 = uVar14;
        if (0 < *(int *)(lVar1 + 0x20)) {
          do {
            uVar10 = (uint)uVar11;
            uVar5 = 0;
            if ((int)uVar10 < *(int *)(lVar1 + 0x20)) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(longlong *)(uVar13 + 0x108 + *(longlong *)(lVar1 + 0x18)) != 0) {
              iVar8 = *(int *)(uVar13 + 0x30 + *(longlong *)(lVar1 + 0x18));
              if (local_e8.Data.ArrayNum < 2) {
                local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_98.Data.ArrayNum = 0;
                local_98.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_98,iVar8);
                ::FString::ConcatCF(&local_c8,L"[Section]",&local_98);
                if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                local_e8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
                local_e8.Data.ArrayNum = local_c8.Data.ArrayNum;
                local_e8.Data.ArrayMax = local_c8.Data.ArrayMax;
                local_c8.Data.ArrayNum = 0;
                local_c8.Data.ArrayMax = 0;
                local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FVar9.Data = local_98.Data.AllocatorInstance.Data;
              }
              else {
                local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88.Data.ArrayNum = 0;
                local_88.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_88,iVar8);
                ::FString::ConcatFC(&local_78,&local_e8,L"/");
                ::FString::ConcatFF(&local_b8,&local_78,&local_88);
                if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
                local_e8.Data.ArrayNum = local_b8.Data.ArrayNum;
                local_e8.Data.ArrayMax = local_b8.Data.ArrayMax;
                local_b8.Data.ArrayNum = 0;
                local_b8.Data.ArrayMax = 0;
                local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FVar9.Data = local_88.Data.AllocatorInstance.Data;
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  FVar9.Data = local_88.Data.AllocatorInstance.Data;
                }
              }
              if (FVar9.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar9.Data);
              }
            }
            uVar11 = (ulonglong)(uVar10 + 1);
            uVar13 = uVar13 + 0x140;
          } while ((int)(uVar10 + 1) < *(int *)(lVar1 + 0x20));
        }
        if (local_e8.Data.ArrayNum < 2) {
          ::FString::operator=(&local_e8,L"Off");
        }
        lVar2 = *(longlong *)(lVar1 + 8);
        if (lVar2 != 0) {
          iVar6 = *(int *)(lVar2 + 0x11c) * GPixelFormats[*(byte *)(lVar2 + 0x124)].BlockBytes;
          iVar8 = iVar6 * 2;
          if ((*(byte *)(lVar2 + 0x118) & 2) == 0) {
            iVar8 = iVar6;
          }
          uVar14 = (ulonglong)
                   ((iVar8 + ((*(byte *)(lVar2 + 0x118) >> 2 & 1) + 1) * *(int *)(lVar2 + 0x11c) * 6
                    + *(int *)(lVar2 + 0x120) * 0x10) * 2);
        }
        if (3 < (byte)LogSkinCache._0_1_) {
          lVar1 = *(longlong *)(lVar1 + 0x28);
          ::FString::FString(&local_d8,L"None");
          if (lVar1 != 0) {
            pFVar7 = ::FName::ToString((FName *)(lVar1 + 0x40),local_68);
            if (&local_d8 != pFVar7) {
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              local_d8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
              (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_d8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
              local_d8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
              (pFVar7->Data).ArrayNum = 0;
              (pFVar7->Data).ArrayMax = 0;
            }
            if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
            }
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
          uVar15 = local_res18;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        uVar12 = local_a8 + uVar14;
        local_a8 = uVar12;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      local_res18 = uVar15 + 1;
      uVar16 = (ulong64)local_res18;
      local_a0 = local_a0 + 8;
    } while ((int)local_res18 < (this->Entries).ArrayNum);
  }
  if ((uVar12 != this->UsedMemoryInBytes) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5887358856585016749>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0xa53,"TotalMemInBytes == UsedMemoryInBytes"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (3 < (byte)LogSkinCache._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
  }
  if (3 < (byte)LogSkinCache._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
  }
  return;
}

// ProcessEntry @ 147c74e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUSkinCache::ProcessEntry
          (FGPUSkinCache *this,FRHICommandList *param_1,FProcessEntryInputs *param_2,
          FGPUSkinCacheEntry **param_3)

{
  int *piVar1;
  uint *puVar2;
  ERHIPipeline EVar3;
  ERHIAccess EVar4;
  EGPUSkinCacheEntryMode EVar5;
  FSkeletalMeshRenderData *pFVar6;
  FGPUSkinCacheEntry *pFVar7;
  longlong lVar8;
  FMorphVertexBuffer *pFVar9;
  FScriptContainerElement *pFVar10;
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *pFVar11;
  FClothSimulData *pFVar12;
  FSkeletalMeshVertexClothBuffer *pFVar13;
  FRHIResource *this_01;
  FGPUBaseSkinVertexFactory *pFVar14;
  FSkeletalMeshObject *pFVar15;
  code *pcVar16;
  undefined8 uVar17;
  FRHICommandListBase *this_02;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  FRecomputeTangentSection FVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumSectionsProcessed> FVar26;
  FThreadStats *pFVar27;
  FThreadStatsPool *pFVar28;
  ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection> FVar29;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed> FVar30;
  FRWBuffersAllocation *pFVar31;
  FName FVar32;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar33;
  TRefCountPtr<FRHIShaderResourceView> *pTVar34;
  FVertexBufferAndSRV *pFVar35;
  FScriptContainerElement *pFVar36;
  FString *pFVar37;
  int iVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  longlong *plVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  uchar auVar45 [8];
  FRHIResource *this_03;
  FRHIResource *this_04;
  FVertexBufferAndSRV *pFVar46;
  int iVar47;
  FRWBuffersAllocation *pFVar48;
  FProcessEntrySection *pFVar49;
  EGPUSkinCacheBufferBits EVar50;
  FGPUSkinCache *pFVar51;
  longlong lVar52;
  ulonglong uVar53;
  uint uVar54;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar55;
  undefined1 auStackY_328 [32];
  FRWBuffersAllocation *local_2a0;
  FGPUSkinCache *local_298;
  FLLMScope local_290 [2];
  FRWBuffersAllocationInitializer local_288;
  FString local_278;
  int local_268;
  FProcessEntrySection *local_260;
  FRHICommandListBase *local_258;
  undefined **local_250;
  FResourceArrayUploadInterface local_248;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_240;
  undefined8 local_238;
  undefined1 local_230;
  FRHIResource *local_228;
  FRHIResource *local_220;
  undefined8 local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  int local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  wchar_t *local_1f8;
  FResourceArrayUploadInterface *pFStack_1f0;
  ERHIAccess local_1e8;
  ERHIBufferInitAction EStack_1e4;
  FName FStack_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FStatMessage local_1c0;
  FStatMessage local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  FMemScope local_190;
  FGPUSkinCacheEntry *local_188;
  FRHIResource *local_180;
  FRHIResource *pFStack_178;
  FName local_168;
  FName local_160;
  FString local_158;
  undefined1 local_148 [8];
  longlong local_140;
  FRHIBufferCreateDesc local_138;
  ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection> local_f8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [48];
  FRHICommandListBase *local_78;
  FRHIBuffer *local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_298 = this;
  local_258 = (FRHICommandListBase *)param_1;
  if (this->FlushCounter < GGPUSkinCacheFlushCounter) {
    this->FlushCounter = GGPUSkinCacheFlushCounter;
    InvalidateAllEntries(this);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar26 = StatPtr_STAT_GPUSkinCache_NumSectionsProcessed;
    if (StatPtr_STAT_GPUSkinCache_NumSectionsProcessed ==
        (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumSectionsProcessed>)0x0) {
      pFVar25 = ::FName::FName(&local_168,"STAT_GPUSkinCache_NumSectionsProcessed");
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumSectionsProcessed>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_GPUSkinCache_NumSectionsProcessed,*pFVar25,
                          L"Num Sections Processed","STATGROUP_GPUSkinCache","STATCAT_Advanced",
                          L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar26;
    if (((FVar32 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar27 == (FThreadStats *)0x0) {
        pFVar28 = FThreadStatsPool::Get();
        pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
      }
      local_1c0.NameAndInfo.Number = FVar32.Number & 0xffffafff | 0xa000;
      local_1c0.StatData.Pad[0] = '\x01';
      local_1c0.StatData.Pad[1] = '\0';
      local_1c0.StatData.Pad[2] = '\0';
      local_1c0.StatData.Pad[3] = '\0';
      local_1c0.StatData.Pad[4] = '\0';
      local_1c0.StatData.Pad[5] = '\0';
      local_1c0.StatData.Pad[6] = '\0';
      local_1c0.StatData.Pad[7] = '\0';
      local_1d0 = FVar32;
      local_1c0.NameAndInfo.Index.Value = FVar32.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar27,&local_1c0);
      FStatsTrace::Add(&local_1d0,1);
      if (pFVar27->ScopeCount == 0) {
        FThreadStats::Flush(pFVar27,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar27,false,false);
      }
    }
  }
  uVar54 = param_2->LODIndex;
  pFVar6 = param_2->Skin->SkeletalMeshRenderData;
  uVar44 = 0;
  if ((int)uVar54 < (pFVar6->LODRenderData).Array.ArrayNum) {
    uVar44 = ~uVar54 >> 0x1f;
  }
  if ((uVar44 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  lVar52 = *(longlong *)
            ((pFVar6->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar54 * 8);
  local_268 = (**(code **)(param_2->Skin->_padding_ + 0x120))(param_2->Skin,param_2->LODIndex);
  pFVar7 = *param_3;
  if (pFVar7 != (FGPUSkinCacheEntry *)0x0) {
    if ((pFVar7->GPUSkin == param_2->Skin) && (pFVar7->LOD == param_2->LODIndex)) {
      if (pFVar7->TargetVertexFactory == param_2->TargetVertexFactory) {
        bVar18 = false;
        local_f8.SecondaryData = (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0;
        uVar54 = 0;
        local_b0 = 0;
        EVar50 = None;
        local_ac = 0x10;
        goto LAB_147c754c1;
      }
    }
    else {
      pFVar51 = pFVar7->SkinCache;
      if ((pFVar51 == (FGPUSkinCache *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SkinCache",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x94a,
                              L"Attempting to dequeue a skin cache entry not linked to a parent skin cache"
                             ), bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator>::
      Remove(&pFVar51->PendingProcessRTGeometryEntries,pFVar7);
      if (pFVar7->bQueuedForDispatch != false) {
        uVar54 = 0;
        if (0 < (pFVar51->BatchDispatches).ArrayNum) {
          lVar43 = 0;
          do {
            uVar44 = ~uVar54 >> 0x1f;
            uVar39 = 0;
            if ((int)uVar54 < (pFVar51->BatchDispatches).ArrayNum) {
              uVar39 = uVar44;
            }
            if ((uVar39 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pFVar10 = (pFVar51->BatchDispatches).AllocatorInstance.Data;
            if (*(FGPUSkinCacheEntry **)(pFVar10 + lVar43) == pFVar7) {
              uVar39 = *(uint *)(pFVar10 + lVar43 + 8);
              uVar23 = 0;
              if ((int)uVar39 < (pFVar7->DispatchData).ArrayNum) {
                uVar23 = ~uVar39 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              *(undefined4 *)
               ((pFVar7->DispatchData).AllocatorInstance.Data + (longlong)(int)uVar39 * 0x140 + 0xdc
               ) = 0;
              uVar39 = 0;
              if ((int)uVar54 < (pFVar51->BatchDispatches).ArrayNum) {
                uVar39 = uVar44;
              }
              if ((uVar39 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              iVar38 = (pFVar51->BatchDispatches).ArrayNum;
              pFVar10 = (pFVar51->BatchDispatches).AllocatorInstance.Data;
              iVar47 = iVar38 + ~uVar54;
              if (1 < iVar47) {
                iVar47 = 1;
              }
              if (iVar47 != 0) {
                memmove(pFVar10 + lVar43,pFVar10 + (longlong)(iVar38 - iVar47) * 0x10,
                        (longlong)iVar47 << 4);
              }
              piVar1 = &(pFVar51->BatchDispatches).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&(pFVar51->BatchDispatches).AllocatorInstance,
                         (pFVar51->BatchDispatches).ArrayNum,&(pFVar51->BatchDispatches).ArrayMax);
            }
            else {
              uVar54 = uVar54 + 1;
              lVar43 = lVar43 + 0x10;
            }
          } while ((int)uVar54 < (pFVar51->BatchDispatches).ArrayNum);
        }
        pFVar7->bQueuedForDispatch = false;
      }
      ReleaseSkinCacheEntry(*param_3);
      *param_3 = (FGPUSkinCacheEntry *)0x0;
    }
  }
  local_f8.SecondaryData = (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0;
  EVar50 = None;
  local_b0 = 0;
  uVar54 = 0;
  local_ac = 0x10;
  if (param_2->Mode == Raster) {
    if (0 < GSkinCacheRecomputeTangents) {
      uVar44 = *(uint *)(lVar52 + 0x18);
      if ((int)uVar44 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar44);
      }
      if (0x10 < (int)uVar44) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>_>
                  (4,4,uVar44,&local_f8,0,&local_ac);
      }
      uVar44 = 0;
      if (0 < *(int *)(lVar52 + 0x18)) {
        lVar43 = 0;
        do {
          iVar38 = local_b0;
          if (local_b0 == local_ac) {
            iVar38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>_>
                               (0x404,&local_f8,&local_ac);
          }
          local_b0 = iVar38 + 1;
          FVar29 = (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)&local_f8;
          if (local_f8.SecondaryData !=
              (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0) {
            FVar29 = local_f8.SecondaryData;
          }
          *(undefined4 *)((longlong)FVar29 + (longlong)iVar38 * 4) = 0;
          uVar39 = 0;
          if ((int)uVar44 < *(int *)(lVar52 + 0x18)) {
            uVar39 = ~uVar44 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          lVar8 = *(longlong *)(lVar52 + 0x10);
          if (*(longlong *)(lVar52 + 0x28) == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IndexBuffer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                ,0x51,L"");
            if (bVar18) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            if (*(longlong *)(lVar52 + 0x28) != 0) goto LAB_147c75457;
          }
          else {
LAB_147c75457:
            if (((GSkinCacheRecomputeTangents == 1) || (*(char *)(lVar43 + 0xc + lVar8) != '\0')) &&
               (puVar2 = (uint *)((longlong)FVar29 + (longlong)iVar38 * 4), *puVar2 = *puVar2 | 1,
               *(byte *)(lVar43 + 0xf + lVar8) < 3)) {
              EVar50 = IntermediateTangents;
              *(uint *)((longlong)FVar29 + (longlong)iVar38 * 4) = uVar54 * 4 | 3;
              uVar54 = uVar54 + *(int *)(lVar43 + 0x48 + lVar8);
            }
          }
          uVar44 = uVar44 + 1;
          lVar43 = lVar43 + 0x118;
        } while ((int)uVar44 < *(int *)(lVar52 + 0x18));
      }
    }
    EVar50 = EVar50 | PositionPrevious;
  }
  bVar18 = true;
LAB_147c754c1:
  pFVar48 = (FRWBuffersAllocation *)0x0;
  pFVar51 = local_298;
  if ((*param_3 == (FGPUSkinCacheEntry *)0x0) || (param_2->bRecreating == false)) {
    bVar20 = false;
    if (*param_3 == (FGPUSkinCacheEntry *)0x0) {
      if (((uVar54 != 0) && ((EVar50 & IntermediateTangents) == None)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IntermediateAccumulatedTangentBufferSize || EnumHasAnyFlags(BufferBits, EGPUSkinCacheBufferBits::IntermediateTangents)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                              ,0x869,L""), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar42 = (ulonglong)GMaxRHIShaderPlatform;
      uVar44 = param_2->TargetVertexFactory->NumVertices;
      local_288.BufferBits = EVar50;
      local_288.NumVertices = uVar44;
      local_288.IntermediateAccumulatedTangentsSize = uVar54;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar42].bContainsValidPlatformInfo == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xc1,L""), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar51 = local_298;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar42].Language == LANGUAGE_OpenGL) {
        local_288.TangentFormat = PF_R16G16B16A16_SINT;
        iVar38 = GPixelFormats[0x23].BlockBytes;
      }
      else if (GPixelFormats[param_2->TargetVertexFactory->TangentFormat].BlockBytes == 4) {
        local_288.TangentFormat = PF_R8G8B8A8_SNORM;
        iVar38 = GPixelFormats[0x3d].BlockBytes;
      }
      else {
        local_288.TangentFormat = PF_R16G16B16A16_SNORM;
        iVar38 = GPixelFormats[0x3f].BlockBytes;
      }
      iVar47 = iVar38 * uVar44 * 2;
      if ((EVar50 & IntermediateTangents) == None) {
        iVar47 = iVar38 * uVar44;
      }
      uVar54 = (iVar47 + (((EVar50 & PositionPrevious) != None) + 1) * uVar44 * 6 + uVar54 * 0x10) *
               2;
      auVar45[4] = '\0';
      auVar45[5] = '\0';
      auVar45[6] = '\0';
      auVar45[7] = '\0';
      auVar45._0_4_ = uVar54;
      *(ulong64 *)
       ((TArray<FGPUSkinCache::FDispatchEntry,TSizedDefaultAllocator<32>_> *)
        (&local_298->PendingProcessRTGeometryEntries + 1) + 1) =
           *(ulong64 *)
            ((TArray<FGPUSkinCache::FDispatchEntry,TSizedDefaultAllocator<32>_> *)
             (&local_298->PendingProcessRTGeometryEntries + 1) + 1) + (longlong)auVar45;
      if (uVar54 != 0) {
        FVar30 = StatPtr_STAT_GPUSkinCache_TotalMemUsed;
        if (StatPtr_STAT_GPUSkinCache_TotalMemUsed ==
            (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed>)0x0) {
          pFVar25 = ::FName::FName(&local_160,"STAT_GPUSkinCache_TotalMemUsed");
          FVar30 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_TotalMemUsed,
                              *pFVar25,L"Total Memory Bytes Used","STATGROUP_GPUSkinCache",
                              "STATCAT_Advanced",L"GPU Skin Cache",true,false,ST_int64,false,false,
                              MCR_Physical);
        }
        FVar32 = *(FName *)FVar30;
        if (((FVar32 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar27 == (FThreadStats *)0x0) {
            pFVar28 = FThreadStatsPool::Get();
            pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
          }
          local_1b0.NameAndInfo.Number = FVar32.Number & 0xffffafff | 0xa000;
          local_1c8 = FVar32;
          local_1b0.StatData.Pad = auVar45;
          local_1b0.NameAndInfo.Index.Value = FVar32.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar27,&local_1b0);
          FStatsTrace::Add(&local_1c8,(long64)auVar45);
          if (pFVar27->ScopeCount == 0) {
            FThreadStats::Flush(pFVar27,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar27,false,false);
          }
        }
      }
      pFVar31 = ::operator_new(0x128);
      local_2a0 = pFVar48;
      if (pFVar31 != (FRWBuffersAllocation *)0x0) {
        FVar32 = FSkeletalMeshObject::GetAssetPathName(param_2->Skin,(int)local_148);
        local_2a0 = FRWBuffersAllocation::FRWBuffersAllocation
                              (pFVar31,(FRHICommandList *)local_258,&local_288,(FName *)FVar32);
      }
      pFVar10 = (pFVar51->Allocations).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_2a0) &&
          ((FScriptContainerElement *)&local_2a0 <
           pFVar10 + (longlong)(pFVar51->Allocations).ArrayMax * 8)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar38 = (pFVar51->Allocations).ArrayNum;
      piVar1 = &(pFVar51->Allocations).ArrayMax;
      if (iVar38 == *piVar1) {
        iVar38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar51,piVar1);
      }
      (pFVar51->Allocations).ArrayNum = iVar38 + 1;
      *(FRWBuffersAllocation **)
       ((pFVar51->Allocations).AllocatorInstance.Data + (longlong)iVar38 * 8) = local_2a0;
      pFVar31 = ::operator_new(0x70);
      if (pFVar31 != (FRWBuffersAllocation *)0x0) {
        puVar2 = &pFVar31->PositionBuffers[0].Buffer.ClassName.Number;
        pFVar15 = param_2->Skin;
        pFVar25 = &pFVar31->PositionBuffers[0].Buffer.OwnerName;
        EVar4 = param_2->LODIndex;
        EVar5 = param_2->Mode;
        pFVar31->PositionBuffers[0].Buffer.UAV.Reference = (FRHIUnorderedAccessView *)local_2a0;
        *puVar2 = 0;
        (pFVar25->ComparisonIndex).Value = 0;
        *(EGPUSkinCacheEntryMode *)&pFVar31->PositionBuffers[0].Buffer.Buffer.Reference = EVar5;
        pFVar31->PositionBuffers[0].Buffer.NumBytes = 0;
        pFVar31->PositionBuffers[0].Buffer.ClassName.ComparisonIndex = 0;
        pFVar31->PositionBuffers[1].Buffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
        pFVar31->PositionBuffers[1].Buffer.NumBytes = 0;
        pFVar31->PositionBuffers[1].Buffer.ClassName.ComparisonIndex = 0;
        *(FSkeletalMeshObject **)&pFVar31->PositionBuffers[0].Buffer.OwnerName.Number = pFVar15;
        pFVar31->PositionBuffers[0].Buffer.SRV.Reference = (FRHIShaderResourceView *)pFVar51;
        pFVar31->PositionBuffers[0].AccessState = None;
        pFVar31->PositionBuffers[0].LastTransitionFence = 0;
        *(undefined1 *)&pFVar31->PositionBuffers[1].Buffer.Buffer.Reference = 0;
        *(undefined1 *)((longlong)&pFVar31->PositionBuffers[1].Buffer.Buffer.Reference + 3) = 0;
        *(undefined8 *)&pFVar31->PositionBuffers[1].Buffer.ClassName.Number = 0;
        *(undefined8 *)&pFVar31->PositionBuffers[1].Buffer.OwnerName.Number = 0;
        pFVar31->PositionBuffers[1].AccessState = EVar4;
        pTVar33 = FSkeletalMeshObject::GetRenderSections(pFVar15,EVar4);
        iVar38 = pTVar33->ArrayNum;
        iVar47 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x140,0x10,iVar38,
                            (ForAnyElementType *)&pFVar31->PositionBuffers[0].Buffer.NumBytes,
                            (int *)puVar2,(int *)pFVar25);
        DefaultConstructItems<FGPUSkinCacheEntry::FSectionDispatchData,int>
                  ((void *)((longlong)iVar47 * 0x140 +
                           *(longlong *)&pFVar31->PositionBuffers[0].Buffer.NumBytes),iVar38);
        FGPUSkinCacheEntry::UpdateSkinWeightBuffer((FGPUSkinCacheEntry *)pFVar31);
        pFVar48 = pFVar31;
      }
      *param_3 = (FGPUSkinCacheEntry *)pFVar48;
      *(FSkeletalMeshObject **)&pFVar48->PositionBuffers[0].Buffer.OwnerName.Number = param_2->Skin;
      pFVar10 = (pFVar51->Entries).AllocatorInstance.Data;
      if (((pFVar10 <= param_3) && (param_3 < pFVar10 + (longlong)(pFVar51->Entries).ArrayMax * 8))
         && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar38 = (pFVar51->Entries).ArrayNum;
      piVar1 = &(pFVar51->Entries).ArrayMax;
      if (iVar38 == *piVar1) {
        iVar38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar51->Entries).AllocatorInstance,piVar1);
      }
      (pFVar51->Entries).ArrayNum = iVar38 + 1;
      bVar20 = false;
      *(FGPUSkinCacheEntry **)((pFVar51->Entries).AllocatorInstance.Data + (longlong)iVar38 * 8) =
           *param_3;
    }
  }
  else {
    bVar20 = true;
  }
  pFVar49 = (param_2->Sections).DataPtr;
  local_260 = pFVar49 + (param_2->Sections).ArrayNum;
  if (pFVar49 != local_260) {
    do {
      uVar54 = pFVar49->SectionIndex;
      lVar52 = (longlong)(int)uVar54;
      if (bVar18) {
        FVar24 = (FRecomputeTangentSection)0x0;
        if (local_b0 != 0) {
          uVar44 = 0;
          if ((int)uVar54 < local_b0) {
            uVar44 = ~uVar54 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          FVar29 = (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)&local_f8;
          if (local_f8.SecondaryData !=
              (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0) {
            FVar29 = local_f8.SecondaryData;
          }
          FVar24 = *(FRecomputeTangentSection *)((longlong)FVar29 + lVar52 * 4);
        }
        if (local_268 < 0) {
          iVar38 = -1;
        }
        else {
          iVar38 = local_268 + uVar54;
        }
        FGPUSkinCacheEntry::SetupSection
                  (*param_3,uVar54,pFVar49->Section,pFVar49->SourceVertexFactory,FVar24,iVar38);
      }
      pFVar7 = *param_3;
      uVar44 = 0;
      if ((int)uVar54 < (pFVar7->DispatchData).ArrayNum) {
        uVar44 = ~uVar54 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar9 = param_2->MorphVertexBuffer;
      pFVar10 = (pFVar7->DispatchData).AllocatorInstance.Data;
      if (pFVar9 != (FMorphVertexBuffer *)0x0) {
        pFVar40 = (pFVar9->SectionIds).AllocatorInstance.Data;
        pFVar36 = pFVar40 + (longlong)(pFVar9->SectionIds).ArrayNum * 4;
        for (; pFVar40 != pFVar36; pFVar40 = pFVar40 + 4) {
          if (*(uint *)pFVar40 == uVar54) {
            (*param_3)->MorphBuffer = (param_2->MorphVertexBuffer->SRVValue).Reference;
            if (((*param_3)->MorphBuffer == (FRHIShaderResourceView *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InOutEntry->MorphBuffer",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                    ,0x8a6,L""), bVar19)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            *(uint *)(pFVar10 + lVar52 * 0x140 + 0x80) = pFVar49->Section->BaseVertexIndex;
            pFVar10[lVar52 * 0x140 + 0x34] = (FScriptContainerElement)0x1;
            break;
          }
        }
      }
      if ((param_2->ClothVertexBuffer != (FSkeletalMeshVertexClothBuffer *)0x0) &&
         (pFVar49->ClothSimulationData != (FClothSimulData *)0x0)) {
        this_00 = (param_2->ClothVertexBuffer->VertexBufferSRV).Reference;
        if (this_00 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
        }
        pTVar34 = &(*param_3)->ClothBuffer;
        if (pTVar34 != (TRefCountPtr<FRHIShaderResourceView> *)&local_140) {
          pFVar11 = pTVar34->Reference;
          pTVar34->Reference = this_00;
          this_00 = pFVar11;
        }
        if (this_00 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
        if ((((*param_3)->ClothBuffer).Reference == (FRHIShaderResourceView *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InOutEntry->ClothBuffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                ,0x8af,L""), bVar19)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar12 = pFVar49->ClothSimulationData;
        uVar42 = 0;
        local_250 = &TSkeletalMeshVertexData<UE::Math::TVector<float>_>::
                     _vftable__for__FSkeletalMeshVertexDataInterface__;
        local_240.Packed = 0;
        local_248 = (FResourceArrayUploadInterface)
                    &TSkeletalMeshVertexData<UE::Math::TVector<float>_>::
                     _vftable__for__TResourceArray<UE::Math::TVector<float>,0>__;
        local_238 = 0;
        local_230 = 1;
        local_180 = (FRHIResource *)0x0;
        pFStack_178 = (FRHIResource *)0x0;
        if ((pFVar12->Positions).ArrayNum == 0) {
          this_03 = local_180;
          this_04 = pFStack_178;
          if (1 < (byte)LogSkinCache._0_1_) {
            pFVar15 = param_2->Skin;
            ::FString::FString(&local_278,L"None");
            if (pFVar15 != (FSkeletalMeshObject *)0x0) {
              pFVar37 = ::FName::ToString(&pFVar15->DebugName,&local_158);
              if (&local_278 != pFVar37) {
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
                local_278.Data.AllocatorInstance.Data = (pFVar37->Data).AllocatorInstance.Data;
                (pFVar37->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_278.Data.ArrayNum = (pFVar37->Data).ArrayNum;
                local_278.Data.ArrayMax = (pFVar37->Data).ArrayMax;
                (pFVar37->Data).ArrayNum = 0;
                (pFVar37->Data).ArrayMax = 0;
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSkinCache);
            this_03 = local_180;
            this_04 = pFStack_178;
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
              this_03 = local_180;
              this_04 = pFStack_178;
            }
          }
        }
        else {
          bVar19 = -1 < CpuChannel->Enabled;
          if (bVar19) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId2231,"SetupCloth",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x8b7);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2231);
          }
          lVar43 = *(longlong *)(pFVar10 + lVar52 * 0x140 + 0x28);
          iVar38 = *(int *)(lVar43 + 0x30);
          uVar44 = 0;
          if (iVar38 != 0) {
            if ((iVar38 < 1) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar44 = *(uint *)(*(longlong *)(lVar43 + 0x28) + 8);
          }
          if ((uVar44 % *(uint *)(pFVar10 + lVar52 * 0x140 + 0x4c) != 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumWrapDeformerWeights % SectionDispatchData.NumVertices == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                  ,0x8bb,L""), bVar21)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          *(uint *)(pFVar10 + lVar52 * 0x140 + 0x8c) =
               uVar44 / *(uint *)(pFVar10 + lVar52 * 0x140 + 0x4c);
          if (((pFVar12->Positions).ArrayNum != (pFVar12->Normals).ArrayNum) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ClothSimulationData->Positions.Num() == ClothSimulationData->Normals.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                  ,0x8be,L""), bVar21)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          TSkeletalMeshVertexData<UE::Math::TVector<float>_>::ResizeBuffer
                    ((TSkeletalMeshVertexData<UE::Math::TVector<float>_> *)&local_250,
                     (pFVar12->Positions).ArrayNum * 2);
          if ((int)uVar54 < (param_2->ClothVertexBuffer->ClothIndexMapping).ArrayNum) {
            if (((pFVar12->LODIndex == -1) || (param_2->LODIndex < pFVar12->LODIndex)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ClothSimulationData->LODIndex != INDEX_NONE && ClothSimulationData->LODIndex <= Inputs.LODIndex"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                    ,0x8c3,L""), bVar21)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pFVar13 = param_2->ClothVertexBuffer;
            uVar44 = 0;
            if ((int)uVar54 < (pFVar13->ClothIndexMapping).ArrayNum) {
              uVar44 = ~uVar54 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pFVar36 = (pFVar13->ClothIndexMapping).AllocatorInstance.Data;
            uVar44 = *(uint *)(pFVar10 + lVar52 * 0x140 + 0x4c);
            iVar38 = *(int *)(pFVar36 + lVar52 * 0xc + 4);
            uVar39 = *(uint *)(pFVar36 + lVar52 * 0xc + 8);
            iVar47 = (param_2->LODIndex - pFVar12->LODIndex) * uVar39 + iVar38;
            if (uVar44 == 0) {
              uVar39 = 1;
            }
            else {
              uVar39 = uVar39 / uVar44;
            }
            if (uVar39 * uVar44 + iVar47 <= param_2->ClothVertexBuffer->NumVertices) {
              iVar38 = iVar47;
            }
            *(int *)(pFVar10 + lVar52 * 0x140 + 0x84) = iVar38;
          }
          if ((int)local_238 < 1) {
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar21) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          TVar55 = local_240;
          if ((local_240.Packed & 1) != 0) {
            TVar55.UnfrozenPtr =
                 (FScriptContainerElement *)
                 ((longlong)&local_240 + ((longlong)local_240.Packed >> 0x18));
          }
          if (((ulonglong)(uint)((int)local_238 * 0xc) !=
               (longlong)(pFVar12->Positions).ArrayNum * 0x18) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stride * VertexAndNormalData.GetNumVertices() == sizeof(FVector3f) * 2 * ClothSimulationData->Positions.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                                  ,0x8d8,L""), bVar21)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar38 = (pFVar12->Positions).ArrayNum;
          uVar53 = uVar42;
          if (0 < iVar38) {
            do {
              uVar39 = (uint)uVar42;
              uVar44 = 0;
              if ((int)uVar39 < iVar38) {
                uVar44 = ~uVar39 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pFVar36 = (pFVar12->Positions).AllocatorInstance.Data;
              *(undefined8 *)TVar55.UnfrozenPtr = *(undefined8 *)(pFVar36 + uVar53);
              *(undefined4 *)(TVar55.Packed + 8) = *(undefined4 *)(pFVar36 + uVar53 + 8);
              uVar44 = 0;
              if ((int)uVar39 < (pFVar12->Normals).ArrayNum) {
                uVar44 = ~uVar39 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pFVar36 = (pFVar12->Normals).AllocatorInstance.Data;
              uVar42 = (ulonglong)(uVar39 + 1);
              *(undefined8 *)(TVar55.Packed + 0xc) = *(undefined8 *)(pFVar36 + uVar53);
              *(undefined4 *)(TVar55.Packed + 0x14) = *(undefined4 *)(pFVar36 + uVar53 + 8);
              TVar55.UnfrozenPtr = (FScriptContainerElement *)(TVar55.Packed + 0x18);
              iVar38 = (pFVar12->Positions).ArrayNum;
              uVar53 = uVar53 + 0xc;
            } while ((int)(uVar39 + 1) < iVar38);
          }
          iVar38 = (**(code **)((longlong)local_248 + 0x10))(&local_248);
          iStack_1fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
          local_1f8 = L"ClothPositionAndNormalsBuffer";
          pFStack_1f0 = &local_248;
          uStack_204 = 0;
          FStack_1e0.ComparisonIndex.Value = 0;
          FStack_1e0.Number = 0;
          local_1d8.ComparisonIndex.Value = 0;
          local_1d8.Number = 0;
          uStack_200 = 0x4101;
          EStack_1e4 = ResourceArray;
          local_208 = iVar38;
          local_1e8 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
          this_02 = local_258;
          local_138._padding_ = CONCAT44(uStack_204,local_208);
          local_138._padding_ = CONCAT44(iStack_1fc,uStack_200);
          local_138.InitAction = EStack_1e4;
          local_138.InitialState = local_1e8;
          local_138.DebugName = local_1f8;
          local_138.InitialData = pFStack_1f0;
          local_138.OwnerName = local_1d8;
          local_138.ClassName = FStack_1e0;
          if (iVar38 == 0) {
            FRHICommandListBase::InvalidBufferFatalError(local_258,&local_138);
          }
          if ((local_138.InitAction == Initializer) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x327,
                                  L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                                 ), bVar21)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          EVar3 = this_02->ActivePipelines;
          if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x2a5,L""), bVar21)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          bVar21 = this_02->ActivePipelines == None;
          if (bVar21) {
            FRHICommandListBase::SwitchPipeline(this_02,Graphics);
          }
          (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_a8);
          FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_a8);
          if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHIBuffer *)0x0)) {
            FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_a8);
          }
          if (local_a8._0_8_ != 0) {
            plVar41 = (longlong *)(local_a8 + 0x10);
            if ((longlong *)local_a8._40_8_ != (longlong *)0x0) {
              plVar41 = (longlong *)local_a8._40_8_;
            }
            (**(code **)(*plVar41 + 0x10))();
          }
          if (bVar21) {
            FRHICommandListBase::SwitchPipeline(this_02,None);
          }
          this_03 = local_228;
          uStack_198 = 0;
          local_228 = (FRHIResource *)0x0;
          local_1a0 = 0x11100;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                            ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
            _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FLLMScope::FLLMScope
                    (local_290,
                     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                     ::__l2::LLMScope_Name977,false,None,Default,true);
          FMemScope::FMemScope
                    (&local_190,
                     &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_220,this_02,this_03);
          FMemScope::~FMemScope(&local_190);
          FLLMScope::~FLLMScope(local_290);
          this_04 = local_220;
          this_01 = *(FRHIResource **)(pFVar10 + lVar52 * 0x140 + 0x78);
          local_220 = (FRHIResource *)0x0;
          if (this_01 != this_04) {
            *(FRHIResource **)(pFVar10 + lVar52 * 0x140 + 0x78) = this_04;
            if (this_04 != (FRHIResource *)0x0) {
              FRHIResource::AddRef(this_04);
            }
            if (this_01 != (FRHIResource *)0x0) {
              FRHIResource::Release(this_01);
            }
          }
          pFVar10[lVar52 * 0x140 + 0x34] = (FScriptContainerElement)0x2;
          if (bVar19) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        uVar17 = *(undefined8 *)((pFVar49->ClothToLocal).M[0] + 2);
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0x90) =
             *(undefined8 *)(pFVar49->ClothToLocal).M[0];
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0x98) = uVar17;
        uVar17 = *(undefined8 *)((pFVar49->ClothToLocal).M[1] + 2);
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0xa0) =
             *(undefined8 *)(pFVar49->ClothToLocal).M[1];
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0xa8) = uVar17;
        uVar17 = *(undefined8 *)((pFVar49->ClothToLocal).M[2] + 2);
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0xb0) =
             *(undefined8 *)(pFVar49->ClothToLocal).M[2];
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0xb8) = uVar17;
        uVar17 = *(undefined8 *)((pFVar49->ClothToLocal).M[3] + 2);
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0xc0) =
             *(undefined8 *)(pFVar49->ClothToLocal).M[3];
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 200) = uVar17;
        *(float *)(pFVar10 + lVar52 * 0x140 + 0x88) = param_2->ClothBlendWeight;
        *(undefined8 *)(pFVar10 + lVar52 * 0x140 + 0xd0) =
             *(undefined8 *)&(param_2->ClothWorldScale).field0_0x0;
        *(float *)(pFVar10 + lVar52 * 0x140 + 0xd8) = (param_2->ClothWorldScale).field0_0x0._s_0.Z;
        FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                  ((FMemoryImageAllocatorBase *)&local_240.Frozen);
        local_248 = (FResourceArrayUploadInterface)&___7FResourceArrayUploadInterface__6B_;
        local_250 = &___7FSkeletalMeshVertexDataInterface__6B_;
        if (this_04 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_04);
        }
        if (this_03 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_03);
        }
      }
      if ((bVar20) && (param_2->Mode == Raster)) {
        pFVar14 = pFVar49->SourceVertexFactory;
        uVar44 = (pFVar14->ShaderData).PreviousRevisionNumber;
        uVar39 = (pFVar14->ShaderData).CurrentRevisionNumber - uVar44;
        uVar42 = (ulonglong)(pFVar14->ShaderData).CurrentBuffer;
        pFVar46 = (pFVar14->ShaderData).BoneBuffer.Elements + (uVar39 < 2 ^ uVar42);
        pFVar35 = pFVar46;
        if ((uVar39 < 2) && ((pFVar46->VertexBufferRHI).Reference == (FRHIBuffer *)0x0)) {
          pFVar35 = (pFVar14->ShaderData).BoneBuffer.Elements + uVar42;
        }
        if ((pFVar35->VertexBufferRHI).Reference != (FRHIBuffer *)0x0) {
          if ((pFVar46->VertexBufferRHI).Reference == (FRHIBuffer *)0x0) {
            if ((1 < uVar39) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("bPrevious",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                    ,0xfe,
                                    L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                                   ), bVar19)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar39 = (pFVar14->ShaderData).CurrentBuffer;
            pFVar46 = (pFVar14->ShaderData).BoneBuffer.Elements + uVar39;
            if (((pFVar14->ShaderData).BoneBuffer.Elements[uVar39].VertexBufferRHI.Reference ==
                 (FRHIBuffer *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Output->VertexBufferRHI.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                    ,0x101,L""), bVar19)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          lVar43 = 0;
          pFVar36 = pFVar10 + lVar52 * 0x140 + 8;
          do {
            if (*(uint *)pFVar36 == uVar44) {
              *(FVertexBufferAndSRV **)(pFVar10 + lVar43 * 8 + lVar52 * 0x140 + 0x10) = pFVar46;
              break;
            }
            lVar43 = lVar43 + 1;
            pFVar36 = pFVar36 + 4;
          } while (lVar43 < 2);
        }
      }
      pFVar51 = local_298;
      uVar44 = param_2->CurrentRevisionNumber;
      if (*(int *)(pFVar10 + lVar52 * 0x140 + 0xdc) == 0) {
        *(uint *)(pFVar10 + lVar52 * 0x140 + 0xdc) = uVar44;
        local_218 = *param_3;
        pFVar10 = (local_298->BatchDispatches).AllocatorInstance.Data;
        uStack_210 = uVar54;
        if (((pFVar10 <= (FScriptContainerElement *)&local_218) &&
            ((FScriptContainerElement *)&local_218 <
             pFVar10 + (longlong)(local_298->BatchDispatches).ArrayMax * 0x10)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar38 = (pFVar51->BatchDispatches).ArrayNum;
        piVar1 = &(pFVar51->BatchDispatches).ArrayMax;
        if (iVar38 == *piVar1) {
          iVar38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pFVar51->BatchDispatches).AllocatorInstance,piVar1);
        }
        (pFVar51->BatchDispatches).ArrayNum = iVar38 + 1;
        pFVar10 = (pFVar51->BatchDispatches).AllocatorInstance.Data + (longlong)iVar38 * 0x10;
        *(undefined4 *)pFVar10 = (undefined4)local_218;
        *(undefined4 *)(pFVar10 + 4) = local_218._4_4_;
        *(uint *)(pFVar10 + 8) = uStack_210;
        *(undefined4 *)(pFVar10 + 0xc) = uStack_20c;
      }
      else {
        pFVar7 = *param_3;
        uVar39 = 0;
        if ((int)uVar54 < (pFVar7->DispatchData).ArrayNum) {
          uVar39 = ~uVar54 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar54 = *(uint *)((pFVar7->DispatchData).AllocatorInstance.Data +
                          (longlong)(int)uVar54 * 0x140 + 0xdc);
        if (uVar44 < uVar54) {
          uVar44 = uVar54;
        }
        *(uint *)(pFVar10 + lVar52 * 0x140 + 0xdc) = uVar44;
        pFVar51 = local_298;
      }
      pFVar49 = pFVar49 + 1;
    } while (pFVar49 != local_260);
  }
  (*param_3)->TargetVertexFactory = param_2->TargetVertexFactory;
  (*param_3)->bQueuedForDispatch = true;
  cVar22 = (**(code **)(param_2->Skin->_padding_ + 0xf0))();
  if ((cVar22 == '\0') || (param_2->Mode == RayTracing)) {
    TSet<FGPUSkinCacheEntry_*,DefaultKeyFuncs<FGPUSkinCacheEntry_*,0>,FDefaultSetAllocator>::
    Emplace<FGPUSkinCacheEntry_*_const_&>
              (&pFVar51->PendingProcessRTGeometryEntries,&local_188,(bool *)param_3);
  }
  if (local_f8.SecondaryData != (ForElementType<FGPUSkinCacheEntry::FRecomputeTangentSection>)0x0) {
    FMemory::Free((void *)local_f8.SecondaryData);
  }
  return;
}

// ProcessRayTracingGeometryToUpdate @ 147c766f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUSkinCache::ProcessRayTracingGeometryToUpdate
          (FGPUSkinCache *this,FRHICommandList *param_1,FGPUSkinCacheEntry *param_2)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> local_18;
  
  bVar4 = IsGPUSkinCacheRayTracingSupported();
  if (bVar4) {
    bVar4 = IsRayTracingEnabled();
    if (bVar4) goto LAB_147c76738;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsGPUSkinCacheRayTracingSupported() && IsRayTracingEnabled()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                     ,0x930,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_147c76738:
  if (((param_2 != (FGPUSkinCacheEntry *)0x0) && (param_2->GPUSkin != (FSkeletalMeshObject *)0x0))
     && (param_2->GPUSkin->bSupportRayTracing != false)) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FGPUSkinCacheEntry::GetRayTracingSegmentVertexBuffers(param_2,&local_18);
    uVar1 = param_2->LOD;
    pFVar2 = param_2->GPUSkin->SkeletalMeshRenderData;
    if ((pFVar2->LODRenderData).Array.ArrayNum <= (int)uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODIndex < SkelMeshRenderData.LODRenderData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x939,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = 0;
    if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(param_2->GPUSkin->_padding_ + 0x100))
              (param_2->GPUSkin,param_1,
               *(undefined8 *)
                ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8),
               uVar1,&local_18);
    DestructItems<TRefCountPtr<FRHIBuffer>,int>
              ((TRefCountPtr<FRHIBuffer> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// Release @ 147c7ae30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGPUSkinCache::Release(FGPUSkinCacheEntry **param_1)

{
  if (*param_1 != (FGPUSkinCacheEntry *)0x0) {
    Dequeue(*param_1);
    ReleaseSkinCacheEntry(*param_1);
    *param_1 = (FGPUSkinCacheEntry *)0x0;
  }
  return;
}

// ReleaseDynamicMeshBoundsSlot @ 147c7ae70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUSkinCache::ReleaseDynamicMeshBoundsSlot(FGPUSkinCache *this,int param_1,int param_2)

{
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  FDynamicMeshBoundsBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar7;
  int local_18;
  int iStack_14;
  
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x46e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->DynamicMeshBoundsBuffer).Ptr;
  if (pFVar3 != (FDynamicMeshBoundsBuffer *)0x0) {
    bVar5 = IsInParallelRenderingThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x3fe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar7 = (pFVar3->Allocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    pTVar1 = &(pFVar3->Allocator).PendingFreeSpans;
    if (FVar7 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
    }
    local_18 = param_1;
    iStack_14 = param_2;
    if (((ulonglong)FVar7 <= &local_18) &&
       (&local_18 <
        (int *)((longlong)FVar7 + (longlong)(pFVar3->Allocator).PendingFreeSpans.ArrayMax * 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar3->Allocator).PendingFreeSpans.ArrayNum;
    piVar2 = &(pFVar3->Allocator).PendingFreeSpans.ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                        (0x408,&pTVar1->AllocatorInstance,piVar2);
    }
    (pFVar3->Allocator).PendingFreeSpans.ArrayNum = iVar6 + 1;
    FVar7 = (pFVar3->Allocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FVar7 = (ForElementType<FSpanAllocator::FLinearAllocation>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar7 + (longlong)iVar6 * 8) = CONCAT44(iStack_14,local_18);
    (pFVar3->Allocator).CurrentSize = (pFVar3->Allocator).CurrentSize - param_2;
  }
  return;
}

// ReleaseSkinCacheEntry @ 147c7b040

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __cdecl FGPUSkinCache::ReleaseSkinCacheEntry(FGPUSkinCacheEntry *param_1)

{
  int *piVar1;
  EGPUSkinCacheBufferBits EVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed> FVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  int iVar11;
  FRWBuffersAllocation *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FGPUSkinCache *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar19;
  ulonglong uVar20;
  uchar auVar21 [8];
  bool local_res8;
  FName local_res10;
  FGPUSkinCache *local_res18;
  FName local_res20;
  FRWBuffersAllocation *local_68;
  FStatMessage local_60 [2];
  ulonglong uVar18;
  
  local_68 = param_1->PositionAllocation;
  pFVar15 = param_1->SkinCache;
  uVar13 = 0;
  local_res18 = pFVar15;
  if (local_68 != (FRWBuffersAllocation *)0x0) {
    uVar17 = (local_68->Initializer).NumVertices;
    EVar2 = (local_68->Initializer).BufferBits;
    iVar8 = uVar17 * GPixelFormats[(local_68->Initializer).TangentFormat].BlockBytes;
    iVar11 = iVar8 * 2;
    if ((EVar2 & IntermediateTangents) == None) {
      iVar11 = iVar8;
    }
    uVar17 = (iVar11 + ((EVar2 >> 2 & 1) + 1) * uVar17 * 6 +
             (local_68->Initializer).IntermediateAccumulatedTangentsSize * 0x10) * 2;
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21._0_4_ = uVar17;
    pFVar15->UsedMemoryInBytes = pFVar15->UsedMemoryInBytes - (longlong)auVar21;
    if (uVar17 != 0) {
      FVar10 = StatPtr_STAT_GPUSkinCache_TotalMemUsed;
      if (StatPtr_STAT_GPUSkinCache_TotalMemUsed ==
          (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed>)0x0) {
        pFVar9 = ::FName::FName(&local_res20,"STAT_GPUSkinCache_TotalMemUsed");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_TotalMemUsed,
                            *pFVar9,L"Total Memory Bytes Used","STATGROUP_GPUSkinCache",
                            "STATCAT_Advanced",L"GPU Skin Cache",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar3 = *(FName *)FVar10;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        local_60[0].NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res10 = FVar3;
        local_60[0].StatData.Pad = auVar21;
        local_60[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this,local_60);
        FStatsTrace::Add(&local_res10,-(longlong)auVar21);
        if (this->ScopeCount == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
    pFVar4 = (pFVar15->Allocations).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar4 + (longlong)(pFVar15->Allocations).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (pFVar15->Allocations).ArrayNum;
    if (iVar11 != 0) {
      pFVar4 = (pFVar15->Allocations).AllocatorInstance.Data;
      local_res8 = *(FRWBuffersAllocation **)pFVar4 != local_68;
      pFVar12 = local_68;
      uVar18 = uVar13;
      uVar20 = uVar13;
      do {
        uVar16 = (uint)uVar18;
        uVar17 = uVar16;
        do {
          uVar13 = uVar13 + 1;
          uVar17 = uVar17 + 1;
          uVar18 = (ulonglong)uVar17;
          if ((longlong)iVar11 <= (longlong)uVar13) break;
        } while (local_res8 == (*(FRWBuffersAllocation **)(pFVar4 + uVar13 * 8) != pFVar12));
        if (local_res8 != false) {
          uVar19 = (uint)uVar20;
          if (uVar19 != uVar16) {
            memmove(pFVar4 + (longlong)(int)uVar19 * 8,pFVar4 + (longlong)(int)uVar16 * 8,
                    (longlong)(int)(uVar17 - uVar16) << 3);
            pFVar12 = local_68;
          }
          uVar20 = (ulonglong)(uVar19 + (uVar17 - uVar16));
        }
        local_res8 = (bool)(local_res8 ^ 1);
      } while ((longlong)uVar13 < (longlong)iVar11);
      (local_res18->Allocations).ArrayNum = (int)uVar20;
      pFVar15 = local_res18;
    }
    pFVar12 = local_68;
    if (local_68 != (FRWBuffersAllocation *)0x0) {
      FRWBuffersAllocation::~FRWBuffersAllocation(local_68);
      ::operator_delete(pFVar12,0x128);
    }
    param_1->PositionAllocation = (FRWBuffersAllocation *)0x0;
  }
  pFVar4 = (pFVar15->Entries).AllocatorInstance.Data;
  iVar11 = (pFVar15->Entries).ArrayNum;
  pFVar14 = pFVar4;
  do {
    if (pFVar14 == pFVar4 + (longlong)iVar11 * 8) {
LAB_147c7b455:
      if ((param_1->PositionAllocation != (FRWBuffersAllocation *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!PositionAllocation",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                             ,0x259,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->ClothBuffer).Reference;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
      pFVar5 = (param_1->InputWeightLookupStreamSRV).Reference;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
      pFVar5 = (param_1->InputWeightStreamSRV).Reference;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
      DestructItems<FGPUSkinCacheEntry::FSectionDispatchData,int>
                ((FSectionDispatchData *)(param_1->DispatchData).AllocatorInstance.Data,
                 (param_1->DispatchData).ArrayNum);
      pFVar4 = (param_1->DispatchData).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(param_1,0x70);
      return;
    }
    if (*(FGPUSkinCacheEntry **)pFVar14 == param_1) {
      uVar17 = (uint)((longlong)pFVar14 - (longlong)pFVar4 >> 3);
      if (uVar17 != 0xffffffff) {
        uVar16 = 0;
        if ((int)(uVar17 + 1) <= iVar11) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (pFVar15->Entries).ArrayNum;
        pFVar4 = (pFVar15->Entries).AllocatorInstance.Data;
        iVar11 = iVar8 + ~uVar17;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar17 * 8,pFVar4 + (longlong)(iVar8 - iVar11) * 8,
                  (longlong)iVar11 << 3);
        }
        piVar1 = &(pFVar15->Entries).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_147c7b455;
    }
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// SetEntryGPUSkin @ 147c802d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FGPUSkinCache::SetEntryGPUSkin(FGPUSkinCacheEntry *param_1,FSkeletalMeshObject *param_2)

{
  if (param_1 != (FGPUSkinCacheEntry *)0x0) {
    Dequeue(param_1);
    param_1->TargetVertexFactory = (FGPUSkinPassthroughVertexFactory *)0x0;
    param_1->GPUSkin = param_2;
  }
  return;
}

// TransitionBufferUAVs @ 147c8aa00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUSkinCache::TransitionBufferUAVs
          (FGPUSkinCache *this,FRHICommandList *param_1,
          TArray<FRHITransitionInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *param_2,TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FRHITransitionInfo *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  FRHITransitionInfo local_a8;
  uint local_78;
  uint local_74;
  int *local_70;
  FScriptContainerElement *local_68;
  FRHITransitionInfo *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  
  if ((param_3->ArrayNum != 0) || (param_2->ArrayNum != 0)) {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1451,"TransitionBufferUAVs",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                 ,0x5ab);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1451);
    }
    local_78 = this->TransitionFence + 1;
    this->TransitionFence = local_78;
    local_70 = &param_3->ArrayNum;
    uVar3 = *local_70;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_2->ArrayMax;
    if (param_2->ArrayMax < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,uVar3,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    uVar3 = param_3->ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar2 = &param_4->ArrayMax;
    if (param_4->ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&param_4->AllocatorInstance,param_4->ArrayNum,piVar2);
    }
    uVar3 = local_78;
    pFVar12 = (param_3->AllocatorInstance).Data;
    local_74 = *local_70;
    uVar10 = (ulonglong)(int)local_74;
    local_68 = pFVar12 + uVar10 * 8;
    while( true ) {
      pFVar6 = local_68;
      if (*local_70 != (int)uVar10) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<FGPUSkinCache::FSkinCacheRWBuffer_*_const,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_b8);
      }
      if (pFVar12 == pFVar6) break;
      lVar5 = *(longlong *)pFVar12;
      uVar4 = *(uint *)(lVar5 + 0x34);
      *(uint *)(lVar5 + 0x34) = uVar3;
      if (uVar4 != uVar3) {
        local_a8.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar5 + 8);
        local_a8.AccessBefore = *(ERHIAccess *)(lVar5 + 0x30);
        *(undefined4 *)(lVar5 + 0x30) = 0x400;
        pFVar11 = (param_2->AllocatorInstance).Data;
        local_a8._padding_._0_4_ = 0xffffffff;
        local_a8._padding_._4_2_ = 0xffff;
        local_a8.Type = UAV;
        local_a8.AccessAfter = UAVCompute;
        local_a8.Flags = None;
        local_a8.CommitInfo.bIsSet = false;
        if (((pFVar11 <= &local_a8) && (&local_a8 < pFVar11 + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                            (0x830,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar9 + 1;
        pFVar11 = (param_2->AllocatorInstance).Data + iVar9;
        *(undefined4 *)&pFVar11->_padding_ = (undefined4)local_a8._padding_;
        *(undefined2 *)((longlong)&pFVar11->_padding_ + 4) = local_a8._padding_._4_2_;
        pFVar11->field1_0x8 = local_a8.field1_0x8;
        pFVar11->field1_0x8 = local_a8.field1_0x8;
        pFVar11->field1_0x8 = local_a8.field1_0x8;
        pFVar11->field1_0x8 = local_a8.field1_0x8;
        pFVar11->field1_0x8 = local_a8.field1_0x8;
        pFVar11->field1_0x8 = local_a8.field1_0x8;
        pFVar11->Type = local_a8.Type;
        pFVar11->AccessBefore = local_a8.AccessBefore;
        pFVar11->AccessAfter = local_a8.AccessAfter;
        (pFVar11->CommitInfo).bIsSet = false;
        pFVar11->Flags = local_a8.Flags;
        (pFVar11->CommitInfo).bIsSet = local_a8.CommitInfo.bIsSet;
        if (local_a8.CommitInfo.bIsSet != false) {
          (pFVar11->CommitInfo).TypedValue.SizeInBytes = local_a8.CommitInfo.TypedValue.SizeInBytes;
        }
        local_b0 = *(undefined8 *)(lVar5 + 8);
        pFVar6 = (param_4->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_b0) &&
            ((FScriptContainerElement *)&local_b0 < pFVar6 + (longlong)*piVar2 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = param_4->ArrayNum;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_4->AllocatorInstance,piVar2);
        }
        param_4->ArrayNum = iVar9 + 1;
        *(undefined8 *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_b0;
      }
      pFVar12 = pFVar12 + 8;
      uVar10 = (ulonglong)local_74;
    }
    iVar9 = param_2->ArrayNum;
    pFVar11 = (param_2->AllocatorInstance).Data;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = iVar9;
    local_58 = pFVar11;
    iStack_50 = iVar9;
    local_48.DataPtr = pFVar11;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,&local_48,AllowDecayPipelines);
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// TransitionBufferUAVs @ 147c8adf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUSkinCache::TransitionBufferUAVs
          (FGPUSkinCache *this,FRHICommandList *param_1,
          TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong lVar2;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  bool *pbVar3;
  TArray<FRHITransitionInfo,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_18;
  
  local_18.AllocatorInstance.Data = (FRHITransitionInfo *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TransitionBufferUAVs(this,param_1,&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FRHITransitionInfo *)0x0) {
    pbVar3 = &local_18.AllocatorInstance.Data[-1].CommitInfo.bIsSet;
    MemoryTrace_Free((ulong64)pbVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pbVar3,FMalloc,true);
    }
    pbVar3 = pbVar3 + -(ulonglong)*(uint *)pbVar3;
    LOCK();
    iVar1 = *(int *)pbVar3;
    *(int *)pbVar3 = *(int *)pbVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(pbVar3 + 0x40);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)pbVar3,0,0);
      if (lVar2 - (longlong)pbVar3 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,pbVar3);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000147c8aec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pbVar3);
      return;
    }
  }
  return;
}

// TransitionBuffers @ 147c8aee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUSkinCache::TransitionBuffers
          (FGPUSkinCache *this,FRHICommandList *param_1,
          TArray<FGPUSkinCache::FSkinCacheRWBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          ERHIAccess param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForElementType<FRHITransitionInfo> FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_a8 [8];
  FScriptContainerElement *local_a0;
  ForElementType<FRHITransitionInfo> local_98;
  undefined8 local_90;
  FRHITransitionInfo *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  
  if (param_2->ArrayNum != 0) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1421,"TransitionBuffers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                 ,0x58d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1421);
    }
    uVar9 = this->TransitionFence + 1;
    this->TransitionFence = uVar9;
    uVar7 = 0;
    uVar1 = param_2->ArrayNum;
    local_98.Data = (FRHITransitionInfo *)0x0;
    local_90 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,uVar1,&local_98,0,(int *)((longlong)&local_90 + 4));
      uVar7 = local_90 & 0xffffffff;
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    local_a0 = pFVar10 + (longlong)iVar2 * 8;
    FVar8.Data = local_98.Data;
    while( true ) {
      iVar6 = (int)uVar7;
      if (param_2->ArrayNum != iVar2) {
        local_a8[0] = 0;
        `TCheckedPointerIterator<FGPUSkinCache::FSkinCacheRWBuffer_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_a8);
      }
      if (pFVar10 == local_a0) break;
      lVar3 = *(longlong *)pFVar10;
      uVar1 = *(uint *)(lVar3 + 0x34);
      *(uint *)(lVar3 + 0x34) = uVar9;
      if ((uVar1 != uVar9) &&
         (((param_3 & UAVMask) != None || (*(ERHIAccess *)(lVar3 + 0x30) != param_3)))) {
        local_68.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar3 + 8);
        local_68.AccessBefore = *(ERHIAccess *)(lVar3 + 0x30);
        *(ERHIAccess *)(lVar3 + 0x30) = param_3;
        local_68._padding_._0_4_ = 0xffffffff;
        local_68._padding_._4_2_ = 0xffff;
        local_68.Type = UAV;
        local_68.Flags = None;
        local_68.CommitInfo.bIsSet = false;
        local_68.AccessAfter = param_3;
        if ((FVar8.Data <= &local_68) &&
           ((&local_68 < FVar8.Data + local_90._4_4_ &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar6 == local_90._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                            (0x830,&local_98,(int *)((longlong)&local_90 + 4));
          FVar8.Data = local_98.Data;
        }
        uVar7 = (ulonglong)(iVar6 + 1U);
        local_90 = CONCAT44(local_90._4_4_,iVar6 + 1U);
        *(undefined4 *)&FVar8.Data[iVar6]._padding_ = (undefined4)local_68._padding_;
        *(undefined2 *)((longlong)&FVar8.Data[iVar6]._padding_ + 4) = local_68._padding_._4_2_;
        FVar8.Data[iVar6].field1_0x8 = local_68.field1_0x8;
        FVar8.Data[iVar6].field1_0x8 = local_68.field1_0x8;
        FVar8.Data[iVar6].field1_0x8 = local_68.field1_0x8;
        FVar8.Data[iVar6].field1_0x8 = local_68.field1_0x8;
        FVar8.Data[iVar6].field1_0x8 = local_68.field1_0x8;
        FVar8.Data[iVar6].field1_0x8 = local_68.field1_0x8;
        FVar8.Data[iVar6].Type = local_68.Type;
        FVar8.Data[iVar6].AccessBefore = local_68.AccessBefore;
        FVar8.Data[iVar6].AccessAfter = local_68.AccessAfter;
        FVar8.Data[iVar6].CommitInfo.bIsSet = false;
        FVar8.Data[iVar6].Flags = local_68.Flags;
        FVar8.Data[iVar6].CommitInfo.bIsSet = local_68.CommitInfo.bIsSet;
        if (local_68.CommitInfo.bIsSet != false) {
          FVar8.Data[iVar6].CommitInfo.TypedValue.SizeInBytes =
               local_68.CommitInfo.TypedValue.SizeInBytes;
        }
      }
      pFVar10 = pFVar10 + 8;
    }
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar6;
    local_88 = FVar8.Data;
    iStack_80 = iVar6;
    local_78.DataPtr = FVar8.Data;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,&local_78,AllowDecayPipelines);
    if (FVar8.Data != (FRHITransitionInfo *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FVar8.Data);
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// UpdateSkinWeightBuffer @ 147c8efd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGPUSkinCache::UpdateSkinWeightBuffer(FGPUSkinCacheEntry *param_1)

{
  if (param_1 != (FGPUSkinCacheEntry *)0x0) {
    Dequeue(param_1);
    FGPUSkinCacheEntry::UpdateSkinWeightBuffer(param_1);
  }
  return;
}

