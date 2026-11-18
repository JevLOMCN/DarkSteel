// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ConsumePerInstanceDataFromGameThread @ 148e5e9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy_DataChannelWrite::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxy_DataChannelWrite *this,void *param_1,ulong64 *param_2)

{
  FReadBuffer *this_00;
  FNiagaraDataChannelDataProxy *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRHIBuffer *this_01;
  FRHIShaderResourceView *this_02;
  code *pcVar3;
  bool bVar4;
  FInstanceData *pFVar5;
  FNiagaraDataChannelDataProxy *local_48;
  FSharedReferencer<1> FStack_40;
  TRefCountPtr<FRHIBuffer> local_38;
  TRefCountPtr<FRHIShaderResourceView> TStack_30;
  
  pFVar5 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                       *)&this->SystemInstancesToProxyData_RT,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = *(FNiagaraDataChannelDataProxy **)param_1;
  if (pFVar1 == (FNiagaraDataChannelDataProxy *)0x0) {
    local_48 = (FNiagaraDataChannelDataProxy *)0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pFVar5 != (FInstanceData *)&stack0xffffffffffffffb8) {
      (pFVar5->ChannelDataRTProxy).Object = (FNiagaraDataChannelDataProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar5->ChannelDataRTProxy).SharedReferenceCount,&stack0xffffffffffffffc0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  else {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Reference = (FRHIBuffer *)(pFVar5->ChannelDataRTProxy).Object;
    TStack_30.Reference =
         (FRHIShaderResourceView *)
         (pFVar5->ChannelDataRTProxy).SharedReferenceCount.ReferenceController;
    (pFVar5->ChannelDataRTProxy).Object = pFVar1;
    (pFVar5->ChannelDataRTProxy).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TStack_30.Reference);
    if (*(char *)((longlong)param_1 + 0x8e) != '\0') {
      if (((pFVar5->ChannelDataRTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraDataChannelDataProxy::AddGPUAllocationForNextTick
                ((pFVar5->ChannelDataRTProxy).Object,*(int *)((longlong)param_1 + 0x88));
    }
    pFVar5->AllocationCount = *(int *)((longlong)param_1 + 0x88);
    pFVar5->bPublishToGame = *(bool *)((longlong)param_1 + 0x8c);
    pFVar5->bPublishToCPU = *(bool *)((longlong)param_1 + 0x8d);
    pFVar5->bPublishToGPU = *(bool *)((longlong)param_1 + 0x8e);
    *(undefined8 *)&(pFVar5->LwcTile).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x90);
    (pFVar5->LwcTile).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x98);
  }
  if (*(char *)((longlong)param_1 + 0x80) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x80) = 0;
    if ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
         *)&pFVar5->GPUScriptParameterTableOffsets !=
        (TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
         *)((longlong)param_1 + 0x30)) {
      TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
                  *)&pFVar5->GPUScriptParameterTableOffsets,
                 (TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0x30));
    }
    this_00 = &pFVar5->ParameterLayoutBuffer;
    if ((pFVar5->ParameterLayoutBuffer).NumBytes != 0) {
      (pFVar5->ParameterLayoutBuffer).NumBytes = 0;
      this_01 = (this_00->Buffer).Reference;
      if (this_01 != (FRHIBuffer *)0x0) {
        (this_00->Buffer).Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)this_01);
      }
      this_02 = (pFVar5->ParameterLayoutBuffer).SRV.Reference;
      if (this_02 != (FRHIShaderResourceView *)0x0) {
        (pFVar5->ParameterLayoutBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)this_02);
      }
    }
    if (0 < *(int *)((longlong)param_1 + 0x20)) {
      TResourceArray<unsigned_int,0>::operator=
                (&pFVar5->ParameterLayoutData,
                 (TResourceArray<unsigned_int,0> *)((longlong)param_1 + 0x10));
      FReadBuffer::Initialize
                (this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 L"NDIDataChannel_ParameterLayoutBuffer",4,*(uint *)((longlong)param_1 + 0x20),
                 PF_R32_UINT,Static,(FResourceArrayUploadInterface *)&pFVar5->ParameterLayoutData);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x30));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x18));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FResourceArrayUploadInterface__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e759c0

int __thiscall
FNiagaraDataInterfaceProxy_DataChannelWrite::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxy_DataChannelWrite *this)

{
  return 0xa0;
}

// PostSimulate @ 148e77780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy_DataChannelWrite::PostSimulate
          (FNiagaraDataInterfaceProxy_DataChannelWrite *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FInstanceData *this_00;
  FNiagaraDataChannelDataProxy *this_01;
  
  this_00 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if ((((this_00 != (FInstanceData *)0x0) &&
       ((this_00->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0)) &&
      (param_1->bFinalPostSimulate != false)) &&
     ((this_00->BufferForCPU).Reference != (FNiagaraDataBuffer *)0x0)) {
    this_01 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
    FNiagaraDataChannelDataProxy::AddTransition
              (this_01,(FRDGBuilder *)param_1->_padding_,UAVCompute,SRVMask,
               (this_00->BufferForCPU).Reference);
    pFVar1 = (this_00->BufferForCPU).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      (this_00->BufferForCPU).Reference = (FNiagaraDataBuffer *)0x0;
      if ((int)pFVar1->_padding_ < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
  }
  return;
}

// PostStage @ 148e77950

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
FNiagaraDataInterfaceProxy_DataChannelWrite::PostStage
          (FNiagaraDataInterfaceProxy_DataChannelWrite *this,FNDIGpuComputePostStageContext *param_1
          )

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FInstanceData *this_00;
  FNiagaraDataChannelDataProxy *this_01;
  
  uVar4 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  this_00 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,uVar4);
  if (((this_00 != (FInstanceData *)0x0) &&
      ((this_00->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0)) &&
     ((this_00->GPUBuffer).Reference != (FNiagaraDataBuffer *)0x0)) {
    this_01 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
    FNiagaraDataChannelDataProxy::EndWriteAccess(this_01,*(FRDGBuilder **)param_1);
    pFVar1 = (this_00->GPUBuffer).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      (this_00->GPUBuffer).Reference = (FNiagaraDataBuffer *)0x0;
      if ((int)pFVar1->_padding_ < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
  }
  return;
}

// PreStage @ 148e78800

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
FNiagaraDataInterfaceProxy_DataChannelWrite::PreStage
          (FNiagaraDataInterfaceProxy_DataChannelWrite *this,FNDIGpuComputePreStageContext *param_1)

{
  int *piVar1;
  FNiagaraDataBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  FInstanceData *this_00;
  FNiagaraDataChannelDataProxy *pFVar9;
  TRefCountPtr<FNiagaraDataBuffer> TVar10;
  FNiagaraGPUInstanceCountManager *pFVar11;
  uint local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  undefined7 in_stack_ffffffffffffffc9;
  
  uVar8 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  this_00 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,uVar8);
  if ((this_00 != (FInstanceData *)0x0) &&
     ((this_00->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0)) {
    if (((this_00->BufferForCPU).Reference == (FNiagaraDataBuffer *)0x0) &&
       (((this_00->bPublishToGame != false || (this_00->bPublishToCPU != false)) ||
        (this_00->bCapturingSimCache != false)))) {
      pFVar9 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
      TVar10 = FNiagaraDataChannelDataProxy::AllocateBufferForCPU
                         (pFVar9,(FRDGBuilder *)&local_res18,(Type)*(undefined8 *)param_1,
                          *(int *)(*(longlong *)&param_1->field_0x8 + 0x34),
                          SUB41(this_00->AllocationCount,0),this_00->bPublishToGame,
                          (TVector<float> *)
                          CONCAT71(in_stack_ffffffffffffffc9,this_00->bPublishToCPU));
      TRefCountPtr<FNiagaraDataBuffer>::operator=
                (&this_00->BufferForCPU,(TRefCountPtr<FNiagaraDataBuffer> *)TVar10.Reference);
      if (local_res18 != 0) {
        if (*(int *)(local_res18 + 8) < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        LOCK();
        *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + -1;
        UNLOCK();
      }
      local_res8[0] = ((this_00->BufferForCPU).Reference)->GPUInstanceCountBufferOffset;
      pFVar11 = FNDIGpuComputePrePostStageContext::GetInstanceCountManager
                          ((FNDIGpuComputePrePostStageContext *)param_1);
      FNiagaraGPUInstanceCountManager::FreeEntry(pFVar11,local_res8);
      pFVar2 = (this_00->BufferForCPU).Reference;
      pFVar11 = FNDIGpuComputePrePostStageContext::GetInstanceCountManager
                          ((FNDIGpuComputePrePostStageContext *)param_1);
      uVar6 = FNiagaraGPUInstanceCountManager::AcquireEntry(pFVar11);
      pFVar2->GPUInstanceCountBufferOffset = uVar6;
      if (this_00->bCapturingSimCache != false) {
        iVar7 = (this_00->PendingSimCacheReadbacks).ArrayNum;
        piVar1 = &(this_00->PendingSimCacheReadbacks).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this_00->PendingSimCacheReadbacks).AllocatorInstance,piVar1);
        }
        (this_00->PendingSimCacheReadbacks).ArrayNum = iVar7 + 1;
        pFVar3 = (this_00->PendingSimCacheReadbacks).AllocatorInstance.Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
        pFVar2 = (this_00->BufferForCPU).Reference;
        *(FNiagaraDataBuffer **)(pFVar3 + (longlong)iVar7 * 8) = pFVar2;
        if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
          if ((int)pFVar2->_padding_ == -1) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          LOCK();
          *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
          UNLOCK();
        }
      }
    }
    if ((this_00->bPublishToGPU != false) &&
       ((this_00->GPUBuffer).Reference == (FNiagaraDataBuffer *)0x0)) {
      pFVar9 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
      TVar10 = FNiagaraDataChannelDataProxy::PrepareForWriteAccess
                         (pFVar9,(FRDGBuilder *)&local_res20);
      TRefCountPtr<FNiagaraDataBuffer>::operator=
                (&this_00->GPUBuffer,(TRefCountPtr<FNiagaraDataBuffer> *)TVar10.Reference);
      if (local_res20 != 0) {
        if (*(int *)(local_res20 + 8) < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        LOCK();
        *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + -1;
        UNLOCK();
      }
    }
  }
  return;
}

