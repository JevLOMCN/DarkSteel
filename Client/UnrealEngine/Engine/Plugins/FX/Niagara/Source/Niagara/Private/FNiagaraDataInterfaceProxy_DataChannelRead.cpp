// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ConsumePerInstanceDataFromGameThread @ 148e5e7a0

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
FNiagaraDataInterfaceProxy_DataChannelRead::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxy_DataChannelRead *this,void *param_1,ulong64 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FNiagaraDataChannelDataProxy *pFVar6;
  void *_Src;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FInstanceData *pFVar10;
  
  pFVar10 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
                        *)&this->SystemInstancesToProxyData_RT,
                       (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  bVar9 = IsInRenderingThread();
  if (!bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  pFVar6 = *(FNiagaraDataChannelDataProxy **)param_1;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (pFVar10->ChannelDataRTProxy).SharedReferenceCount.ReferenceController;
  (pFVar10->ChannelDataRTProxy).Object = pFVar6;
  (pFVar10->ChannelDataRTProxy).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  puVar2 = (undefined8 *)((longlong)param_1 + 0x90);
  pTVar3 = &pFVar10->NDCSpawnData;
  pFVar10->bReadPrevFrame = *(bool *)((longlong)param_1 + 0x10);
  pFVar10->NDCElementCountAtSpawn = *(int *)((longlong)param_1 + 0xa0);
  if (pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)puVar2) {
    iVar4 = *(int *)((longlong)param_1 + 0x98);
    piVar1 = &(pFVar10->NDCSpawnData).ArrayMax;
    _Src = (void *)*puVar2;
    (pFVar10->NDCSpawnData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  pFVar10->NDCSpawnDataBuffer = (FRDGBuffer *)0x0;
  if (*(char *)((longlong)param_1 + 0x88) != '\0') {
    if ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
         *)&pFVar10->GPUScriptParameterTableOffsets !=
        (TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
         *)((longlong)param_1 + 0x38)) {
      TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
                  *)&pFVar10->GPUScriptParameterTableOffsets,
                 (TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0x38));
    }
    if ((pFVar10->ParameterLayoutBuffer).NumBytes != 0) {
      (pFVar10->ParameterLayoutBuffer).NumBytes = 0;
      this_00 = (pFVar10->ParameterLayoutBuffer).Buffer.Reference;
      if (this_00 != (FRHIBuffer *)0x0) {
        (pFVar10->ParameterLayoutBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)this_00);
      }
      this_01 = (pFVar10->ParameterLayoutBuffer).SRV.Reference;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        (pFVar10->ParameterLayoutBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (0 < *(int *)((longlong)param_1 + 0x28)) {
      TResourceArray<unsigned_int,0>::operator=
                (&pFVar10->ParameterLayoutData,
                 (TResourceArray<unsigned_int,0> *)((longlong)param_1 + 0x18));
      FReadBuffer::Initialize
                (&pFVar10->ParameterLayoutBuffer,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 L"NDIDataChannel_ParameterLayoutBuffer",4,*(uint *)((longlong)param_1 + 0x28),
                 PF_R32_UINT,Static,(FResourceArrayUploadInterface *)&pFVar10->ParameterLayoutData);
    }
  }
  if ((void *)*puVar2 != (void *)0x0) {
    FMemory::Free((void *)*puVar2);
  }
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x38));
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x20));
  *(undefined ***)((longlong)param_1 + 0x18) = &___7FResourceArrayUploadInterface__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// GetDispatchArgs @ 148e68cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy_DataChannelRead::GetDispatchArgs
          (FNiagaraDataInterfaceProxy_DataChannelRead *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstanceData *this_00;
  FNiagaraDataChannelDataProxy *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  TIntVector3<int>_u_0 local_18;
  
  this_00 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if ((this_00 != (FInstanceData *)0x0) &&
     ((this_00->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0)) {
    if (this_00->bReadPrevFrame == false) {
      pFVar3 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
      pFVar4 = (pFVar3->CurrFrameData).Reference;
      if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
        if (((int)pFVar4->_padding_ == -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
        if (((int)pFVar4->_padding_ < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + -1;
        UNLOCK();
      }
    }
    else {
      pFVar3 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
      pFVar4 = (pFVar3->PrevFrameData).Reference;
    }
    if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
      local_18._s_0.X = pFVar4->NumInstancesAllocated;
      local_18._s_0.Y = 1;
      local_18._s_0.Z = 1;
      FNDIGpuComputeDispatchArgsGenContext::SetDirect
                (param_1,(TIntVector3<int> *)&local_18._s_0,0xffffffff);
    }
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e759b0

int __thiscall
FNiagaraDataInterfaceProxy_DataChannelRead::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxy_DataChannelRead *this)

{
  return 0xa8;
}

// PostSimulate @ 148e776e0

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

void __thiscall
FNiagaraDataInterfaceProxy_DataChannelRead::PostSimulate
          (FNiagaraDataInterfaceProxy_DataChannelRead *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstanceData *pFVar3;
  FNiagaraGPUInstanceCountManager *this_00;
  
  pFVar3 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if ((pFVar3 != (FInstanceData *)0x0) &&
     ((pFVar3->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0)) {
    if ((pFVar3->GPUBuffer).Reference != (FNiagaraDataBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData->GPUBuffer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                         ,0x8e3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->bFinalPostSimulate != false) {
      pFVar3->NDCSpawnDataBuffer = (FRDGBuffer *)0x0;
      this_00 = FNDIGpuComputePostSimulateContext::GetInstanceCountManager(param_1);
      FNiagaraGPUInstanceCountManager::FreeEntry(this_00,&pFVar3->ConsumeInstanceCountOffset);
      pFVar3->ConsumeInstanceCountOffset = 0xffffffff;
    }
  }
  return;
}

// PostStage @ 148e77890

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
FNiagaraDataInterfaceProxy_DataChannelRead::PostStage
          (FNiagaraDataInterfaceProxy_DataChannelRead *this,FNDIGpuComputePostStageContext *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FInstanceData *this_00;
  FNiagaraDataChannelDataProxy *this_01;
  
  uVar4 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  this_00 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,uVar4);
  if (((this_00 != (FInstanceData *)0x0) &&
      ((this_00->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0)) &&
     ((this_00->GPUBuffer).Reference != (FNiagaraDataBuffer *)0x0)) {
    this_01 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy);
    FNiagaraDataChannelDataProxy::EndReadAccess
              (this_01,*(FRDGBuilder **)param_1,this_00->bReadPrevFrame == false);
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

// PreStage @ 148e78670

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
FNiagaraDataInterfaceProxy_DataChannelRead::PreStage
          (FNiagaraDataInterfaceProxy_DataChannelRead *this,FNDIGpuComputePreStageContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  FInstanceData *this_00;
  FNiagaraDataChannelDataProxy *this_01;
  TRefCountPtr<FNiagaraDataBuffer> TVar5;
  FNiagaraGPUInstanceCountManager *this_02;
  FRDGBuffer *pFVar6;
  longlong local_res8;
  uint *puVar7;
  
  uVar4 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  this_00 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,uVar4);
  if (this_00 != (FInstanceData *)0x0) {
    if (((this_00->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0) &&
       ((this_00->GPUBuffer).Reference == (FNiagaraDataBuffer *)0x0)) {
      this_01 = TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->(&this_00->ChannelDataRTProxy)
      ;
      TVar5 = FNiagaraDataChannelDataProxy::PrepareForReadAccess
                        (this_01,(FRDGBuilder *)&local_res8,SUB81(*(undefined8 *)param_1,0));
      TRefCountPtr<FNiagaraDataBuffer>::operator=
                (&this_00->GPUBuffer,(TRefCountPtr<FNiagaraDataBuffer> *)TVar5.Reference);
      if (local_res8 != 0) {
        if (*(int *)(local_res8 + 8) < 1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        LOCK();
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + -1;
        UNLOCK();
      }
    }
    if (this_00->ConsumeInstanceCountOffset == 0xffffffff) {
      this_02 = FNDIGpuComputePrePostStageContext::GetInstanceCountManager
                          ((FNDIGpuComputePrePostStageContext *)param_1);
      uVar3 = FNiagaraGPUInstanceCountManager::AcquireEntry(this_02);
      this_00->ConsumeInstanceCountOffset = uVar3;
    }
    if (this_00->NDCSpawnDataBuffer == (FRDGBuffer *)0x0) {
      uVar3 = (this_00->NDCSpawnData).ArrayNum;
      puVar7 = (uint *)(this_00->NDCSpawnData).AllocatorInstance.Data;
      if ((int)uVar3 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      bVar2 = uVar3 != 0;
      if (bVar2) {
        uVar4 = (longlong)(int)uVar3 << 2;
      }
      else {
        uVar4 = 4;
        uVar3 = 1;
        puVar7 = &`class_FRDGBuffer*___ptr64___cdecl_CreateUploadBuffer<int>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<int_const_,int>,ERDGInitialDataFlags)'
                  ::__l2::DummyElement;
      }
      pFVar6 = CreateUploadBuffer(*(FRDGBuilder **)param_1,L"Niagara_NDCReadDI_NDCSpawnData",4,uVar3
                                  ,puVar7,uVar4,!bVar2);
      this_00->NDCSpawnDataBuffer = pFVar6;
    }
  }
  return;
}

