// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// operator() @ 148ea80f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FNiagaraGpuReadbackManager *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  TArrayView<FRHITransitionInfo_const_,int> local_d8;
  FRHITransitionInfo local_c8;
  FRHITransitionInfo local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_c8.field1_0x8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 0x18);
  local_c8.AccessBefore = *(ERHIAccess *)((longlong)this + 0x20);
  local_d8.ArrayNum = 1;
  local_d8.DataPtr = &local_c8;
  local_c8._padding_._0_4_ = 0xffffffff;
  local_c8._padding_._4_2_ = 0xffff;
  local_c8.Type = Buffer;
  local_c8.AccessAfter = CopySrc;
  local_c8.Flags = None;
  local_c8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_d8,None);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  this_00 = *(FNiagaraGpuReadbackManager **)((longlong)this + 0x10);
  uVar2 = *(undefined8 *)((longlong)this + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_7__PostSimulate_FNDISimpleCounterProxy__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_30[1] = uVar2;
  local_30[2] = uVar3;
  local_30[3] = lVar1;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                  ::Call;
  }
  FNiagaraGpuReadbackManager::EnqueueReadback
            (this_00,(FRHICommandList *)param_1,*(FRHIBuffer **)((longlong)this + 0x18),
             *(int *)(*(longlong *)this + 8) << 2,4,
             (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_58
            );
  local_98.field1_0x8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 0x18);
  local_98.AccessAfter = *(ERHIAccess *)((longlong)this + 0x20);
  local_d8.DataPtr = &local_98;
  local_d8.ArrayNum = 1;
  local_68.ArrayNum = 1;
  local_68._12_4_ = local_d8._12_4_;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = Buffer;
  local_98.AccessBefore = CopySrc;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  local_68.DataPtr = local_d8.DataPtr;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_68,None);
  return;
}

// operator() @ 148ea8270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FNDISimpleCounterProxy::PreStage'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  local_res8 = *(undefined4 *)((longlong)this + 8);
  local_resc = *(undefined4 *)((longlong)this + 0xc);
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_38.AccessBefore = *(ERHIAccess *)((longlong)this + 0x10);
  local_48.ArrayNum = 1;
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = UAV;
  local_38.AccessAfter = UAVCompute;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  local_48.DataPtr = (FRHITransitionInfo *)&local_res8;
  local_48.ArrayNum = 1;
  NiagaraClearCounts::ClearCountsUInt
            ((FRHICommandList *)param_1,*(FRHIUnorderedAccessView **)this,
             (TArrayView<TTuple<unsigned_int,unsigned_int>_const_,int> *)&local_48);
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_38.AccessAfter = *(ERHIAccess *)((longlong)this + 0x10);
  local_48.ArrayNum = 1;
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.Type = UAV;
  local_38.AccessBefore = UAVCompute;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  return;
}

// ConsumePerInstanceDataFromGameThread @ 148eaefd0

void __thiscall
FNDISimpleCounterProxy::ConsumePerInstanceDataFromGameThread
          (FNDISimpleCounterProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// GetDispatchArgs @ 148ebcf70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDISimpleCounterProxy::GetDispatchArgs
          (FNDISimpleCounterProxy *this,FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FNDISimpleCounterInstanceData_RenderThread *pFVar1;
  TIntVector3<unsigned_int>_u_0 local_28;
  TTuple<FRDGBuffer_*,unsigned_int> local_18;
  
  pFVar1 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)&this->PerInstanceData_RenderThread,param_1->SystemInstanceID);
  if (pFVar1 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) {
    local_28._s_0.X = pFVar1->CountOffset;
    local_28._4_8_ = 0xffffffffffffffff;
    FNDIGpuComputeDispatchArgsGenContext::CreateIndirect
              (param_1,&local_18,(TIntVector3<unsigned_int> *)&local_28._s_0);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8f30

int __thiscall
FNDISimpleCounterProxy::PerInstanceDataPassedToRenderThreadSize(FNDISimpleCounterProxy *this)

{
  return 0;
}

// PostSimulate @ 148ecb800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDISimpleCounterProxy::PostSimulate
          (FNDISimpleCounterProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  int *piVar1;
  ulong64 uVar2;
  FNiagaraGpuComputeDispatchInterface *this_00;
  FRDGBuilder *this_01;
  int iVar3;
  FNiagaraGPUInstanceCountManager *this_02;
  FRWBuffer *pFVar4;
  FRDGEventName *pFVar5;
  void *this_03;
  TRDGEmptyLambdaPass<_public:_virtual_void___cdecl_FNDISimpleCounterProxy::PostSimulate(FNDIGpuComputePostSimulateContext_const_&)_::_8_::<lambda_1>_>
  *pTVar6;
  ERHIAccess EVar7;
  FRDGEventName local_68;
  <lambda_1> local_50;
  
  if (((this->GpuSyncMode == SyncBoth) || (this->GpuSyncMode == SyncGpuToCpu)) &&
     (param_1->bFinalPostSimulate != false)) {
    uVar2 = param_1->SystemInstanceID;
    local_50.InstanceData =
         TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
         ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                 *)&this->PerInstanceData_RenderThread,uVar2);
    if (local_50.InstanceData != (FNDISimpleCounterInstanceData_RenderThread *)0x0) {
      this_00 = (FNiagaraGpuComputeDispatchInterface *)param_1->_padding_;
      this_02 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager(this_00);
      local_50.ReadbackManager = (this_00->GpuReadbackManagerPtr).Ptr;
      EVar7 = UAVCompute;
      if (*(char *)((longlong)&this_00[1]._padding_ + 1) != '\0') {
        EVar7 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
      }
      local_50.SystemInstanceID = uVar2;
      pFVar4 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer(this_02);
      local_50.CountBuffer.Reference = (pFVar4->Buffer).Reference;
      if (local_50.CountBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_50.CountBuffer.Reference);
      }
      local_50.CountRHIAccess = EVar7;
      local_50.Proxy = this;
      pFVar5 = FRDGEventName::FRDGEventName(&local_68,1,L"NiagaraSimpleCounter::PostStage");
      this_01 = (FRDGBuilder *)param_1->_padding_;
      FRDGUserValidation::ValidateAddPass(&this_01->UserValidation,pFVar5,None);
      FRDGBuilder::FlushAccessModeQueue(this_01);
      this_03 = FMemStackBase::Alloc((FMemStackBase *)&this_01->_padding_,0x1b8,8);
      pTVar6 = TRDGEmptyLambdaPass<`FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>_>::
               TRDGEmptyLambdaPass<_FNDISimpleCounterProxy::PostSimulate_::__l8::<lambda_1>_>
                         (this_03,pFVar5,NeverCull,&local_50);
      piVar1 = &(this_01->Passes).Array.ArrayMax;
      iVar3 = (this_01->Passes).Array.ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,(ForElementType<FRDGPass_*> *)&this_01->Passes,piVar1);
      }
      (this_01->Passes).Array.ArrayNum = iVar3 + 1;
      (this_01->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar6;
      *(int *)&pTVar6->field_0x4c = (this_01->Passes).Array.ArrayNum + -1;
      FRDGBuilder::SetupEmptyPass(this_01,(FRDGPass *)pTVar6);
      if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_50.CountBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_50.CountBuffer.Reference);
      }
    }
  }
  return;
}

// PreStage @ 148ecc0b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FNDISimpleCounterProxy::PreStage
          (FNDISimpleCounterProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  FRDGBuilder *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FNDISimpleCounterInstanceData_RenderThread *pFVar8;
  FRWBuffer *pFVar9;
  FRDGEventName *pFVar10;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_virtual_void___cdecl_FNDISimpleCounterProxy::PreStage(FNDIGpuComputePreStageContext_const_&)_::_8_::<lambda_1>_>
  *pTVar11;
  ERHIAccess EVar12;
  <lambda_1> local_48;
  FRDGEventName local_30;
  
  uVar7 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar8 = TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_RenderThread,0>_>
                   *)&this->PerInstanceData_RenderThread,uVar7);
  if ((pFVar8 != (FNDISimpleCounterInstanceData_RenderThread *)0x0) &&
     ((pFVar8->CountValue).bIsSet != false)) {
    lVar3 = *(longlong *)&param_1->field_0x8;
    bVar5 = IsInParallelRenderingThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer
                       ((FNiagaraGPUInstanceCountManager *)(lVar3 + 0x48));
    uVar2 = pFVar8->CountOffset;
    EVar12 = UAVCompute;
    if (*(char *)(*(longlong *)&param_1->field_0x8 + 0x250) != '\0') {
      EVar12 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
    }
    if ((pFVar8->CountValue).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_48.CountBufferUAV.Reference = (pFVar9->UAV).Reference;
    iVar6 = (pFVar8->CountValue).TypedValue;
    if (local_48.CountBufferUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_48.CountBufferUAV.Reference);
    }
    local_48.CountOffset = uVar2;
    local_48.CountValue = iVar6;
    local_48.CountRHIAccess = EVar12;
    pFVar10 = FRDGEventName::FRDGEventName(&local_30,1,L"NiagaraSimpleCounter::PreStage");
    this_00 = *(FRDGBuilder **)param_1;
    FRDGUserValidation::ValidateAddPass(&this_00->UserValidation,pFVar10,None);
    FRDGBuilder::FlushAccessModeQueue(this_00);
    this_01 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x1a0,8);
    pTVar11 = TRDGEmptyLambdaPass<`FNDISimpleCounterProxy::PreStage'::__l8::<lambda_1>_>::
              TRDGEmptyLambdaPass<_FNDISimpleCounterProxy::PreStage_::__l8::<lambda_1>_>
                        (this_01,pFVar10,NeverCull,&local_48);
    piVar1 = &(this_00->Passes).Array.ArrayMax;
    iVar6 = (this_00->Passes).Array.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&this_00->Passes,piVar1);
    }
    (this_00->Passes).Array.ArrayNum = iVar6 + 1;
    (this_00->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar11;
    *(int *)&pTVar11->field_0x4c = (this_00->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(this_00,(FRDGPass *)pTVar11);
    if (local_30.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_48.CountBufferUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_48.CountBufferUAV.Reference);
    }
    if ((pFVar8->CountValue).bIsSet != false) {
      (pFVar8->CountValue).bIsSet = false;
    }
  }
  return;
}

