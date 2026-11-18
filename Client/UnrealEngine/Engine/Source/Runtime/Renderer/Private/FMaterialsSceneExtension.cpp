// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// InitExtension @ 14501dda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::InitExtension(FMaterialsSceneExtension *this,FScene *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar2 = SP_NumPlatforms;
  }
  else {
    EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = UseNanite(EVar2,true,true);
  SetEnabled(this,bVar1);
  return;
}

// CreateUpdater @ 14501ddf0

ISceneExtensionUpdater * __thiscall
Nanite::FMaterialsSceneExtension::CreateUpdater(FMaterialsSceneExtension *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  ISceneExtensionUpdater *pIVar4;
  
  pIVar4 = ::operator_new(0x48);
  if (pIVar4 == (ISceneExtensionUpdater *)0x0) {
    return (ISceneExtensionUpdater *)0x0;
  }
  pIVar4[1] = (ISceneExtensionUpdater)this;
  *pIVar4 = (ISceneExtensionUpdater)&___7FUpdater_FMaterialsSceneExtension_Nanite__6B_;
  pIVar4[2] = (ISceneExtensionUpdater)0x0;
  *(undefined4 *)(pIVar4 + 3) = 0;
  pIVar4[4] = (ISceneExtensionUpdater)0x0;
  *(undefined4 *)(pIVar4 + 5) = 0;
  pIVar4[6] = (ISceneExtensionUpdater)0x0;
  pIVar4[7] = (ISceneExtensionUpdater)0x0;
  pTVar2 = CVarNaniteMaterialBufferAsyncUpdates.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (ISceneExtensionUpdater *)(*pcVar1)();
      return pIVar4;
    }
  }
  *(bool *)(pIVar4 + 8) = pTVar2->ShadowedValue[1];
  *(undefined2 *)&pIVar4[8].field_0x1 = 0;
  return pIVar4;
}

// CreateRenderer @ 14501dea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
Nanite::FMaterialsSceneExtension::CreateRenderer
          (FMaterialsSceneExtension *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  if ((this->MaterialBuffers).Ptr != (FMaterialBuffers *)0x0) {
    pIVar1 = ::operator_new(0x18);
    if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
      pIVar1->SceneRendererInternal = param_1;
      pIVar1->_padding_ = (longlong)&___7FRenderer_FMaterialsSceneExtension_Nanite__6B_;
      pIVar1[1]._padding_ = (longlong)this;
      return pIVar1;
    }
  }
  return (ISceneExtensionRenderer *)0x0;
}

// ~FMaterialsSceneExtension @ 145038490

void __thiscall
Nanite::FMaterialsSceneExtension::~FMaterialsSceneExtension(FMaterialsSceneExtension *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  FScriptContainerElement *pFVar6;
  FUploader *pFVar7;
  FMaterialBuffers *pFVar8;
  undefined8 *puVar9;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar10;
  longlong lVar11;
  FMaterialsSceneExtension *pFVar12;
  
  pFVar12 = this + 1;
  lVar11 = 6;
  do {
    pFVar5 = pFVar12[-1].TaskHandles.Elements[5].Pimpl.Reference;
    pFVar12 = (FMaterialsSceneExtension *)(pFVar12[-1].TaskHandles.Elements + 5);
    lVar11 = lVar11 + -1;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar5->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  } while (lVar11 != 0);
  pFVar6 = (this->DebugViewData).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar7 = (this->MaterialUploader).Ptr;
  if (pFVar7 != (FUploader *)0x0) {
    pFVar6 = (pFVar7->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->MaterialDataUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->PrimitiveDataUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pFVar7,0x60);
  }
  pFVar8 = (this->MaterialBuffers).Ptr;
  if (pFVar8 != (FMaterialBuffers *)0x0) {
    puVar9 = *(undefined8 **)&(pFVar8->MaterialDataBuffer).field_0x18;
    if (puVar9 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar9 + 1);
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    puVar9 = *(undefined8 **)&(pFVar8->PrimitiveDataBuffer).field_0x18;
    if (puVar9 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar9 + 1);
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    ::operator_delete(pFVar8,0x40);
  }
  TSparseArray<Nanite::FMaterialsSceneExtension::FPrimitiveData,FDefaultSparseArrayAllocator>::
  ~TSparseArray<Nanite::FMaterialsSceneExtension::FPrimitiveData,FDefaultSparseArrayAllocator>
            (&this->PrimitiveData);
  FVar10 = (this->MaterialBufferAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  FVar10 = (this->MaterialBufferAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  this->_padding_ = (longlong)&___7ISceneExtension__6B_;
  return;
}

// CreateDebugViewModeBuffer @ 14504f170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
Nanite::FMaterialsSceneExtension::CreateDebugViewModeBuffer
          (FMaterialsSceneExtension *this,FRDGBuilder *param_1)

{
  int iVar1;
  FTaskBase *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGBuffer *pFVar5;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  this_00 = (this->TaskHandles).Elements[5].Pimpl.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  iVar1 = (this->DebugViewData).ArrayNum;
  if (0 < iVar1) {
    local_20.NumElements = (uint)(iVar1 * 0xc) >> 2;
    local_20.BytesPerElement = 4;
    local_20._12_4_ = uStack_2c;
    local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_20.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar5 = FRDGBuilder::CreateBuffer(param_1,&local_20,L"Nanite.DebugViewDataBuffer",None);
    pFVar2 = (this->DebugViewData).AllocatorInstance.Data;
    iVar1 = (this->DebugViewData).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRDGBuffer *)(*pcVar3)();
        return pFVar5;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar5,pFVar2,(longlong)iVar1 * 0xc,None);
    return pFVar5;
  }
  pFVar5 = FSystemTextures::GetDefaultByteAddressBuffer
                     ((FSystemTextures *)&GSystemTextures,param_1,4);
  return pFVar5;
}

// FinishMaterialBufferUpload @ 145061580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::FinishMaterialBufferUpload
          (FMaterialsSceneExtension *this,FRDGBuilder *param_1,FNaniteMaterialsParameters *param_2)

{
  int *piVar1;
  int iVar2;
  FRHIGPUMask FVar3;
  int iVar4;
  undefined8 *puVar5;
  FRHIComputeCommandList *this_00;
  FUploader *pFVar6;
  FMaterialBuffers *this_01;
  FScriptContainerElement *pFVar7;
  FNaniteMaterialsParameters *pFVar8;
  undefined1 uVar9;
  FRDGBuffer *pFVar10;
  FRDGBuffer *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBuffer **ppFVar13;
  longlong lVar14;
  undefined1 auStackY_a8 [32];
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_78;
  FNaniteMaterialsParameters *local_68;
  FRDGBufferSRVDesc local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if ((this->MaterialBuffers).Ptr != (FMaterialBuffers *)0x0) {
    local_60._padding_ = (longlong)(this->TaskHandles).Elements[2].Pimpl.Reference;
    if ((FTaskBase *)local_60._padding_ != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_60._padding_)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_60._padding_)->RefCount + 1);
      UNLOCK();
    }
    local_60._padding_ = (longlong)(this->TaskHandles).Elements[3].Pimpl.Reference;
    if ((FTaskBase *)local_60._padding_ != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_60._padding_)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_60._padding_)->RefCount + 1);
      UNLOCK();
    }
    local_60._padding_ = (longlong)(this->TaskHandles).Elements[4].Pimpl.Reference;
    if ((FTaskBase *)local_60._padding_ != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_60._padding_)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_60._padding_)->RefCount + 1);
      UNLOCK();
    }
    local_78.DataPtr = (FTaskHandle *)&local_60;
    lVar14 = 3;
    local_78.ArrayNum = 3;
    local_68 = param_2;
    UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (&local_78,(FTimespan)0x7fffffffffffffff);
    ppFVar13 = &local_60.Buffer;
    do {
      puVar5 = &ppFVar13[-1]->_padding_;
      ppFVar13 = ppFVar13 + -1;
      lVar14 = lVar14 + -1;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    } while (lVar14 != 0);
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    iVar2 = *(int *)&(this->PrimitiveData).field_0x8;
    lVar14 = 0x18;
    if ((this->MaterialBufferAllocator).bGrowOnly == false) {
      lVar14 = 0x14;
    }
    FVar3.GPUMask = *(uint *)&this_00->field_0x29c;
    iVar4 = *(int *)((this->MaterialBufferAllocator).FreeSpans.AllocatorInstance.InlineData +
                    lVar14 + -0x20);
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    pFVar6 = (this->MaterialUploader).Ptr;
    this_01 = (this->MaterialBuffers).Ptr;
    if (pFVar6 == (FUploader *)0x0) {
      pFVar10 = UE::RendererPrivateUtils::Implementation::
                TPersistentBuffer<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                ::ResizeBufferIfNeeded(&this_01->PrimitiveDataBuffer,param_1,iVar2 + 1);
      pFVar11 = UE::RendererPrivateUtils::Implementation::
                TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                ::ResizeBufferIfNeeded
                          (&((this->MaterialBuffers).Ptr)->MaterialDataBuffer,param_1,iVar4);
    }
    else {
      local_78.DataPtr = (FTaskHandle *)0x0;
      local_78.ArrayNum = 0;
      pFVar10 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                ::ResizeAndUploadTo(&pFVar6->PrimitiveDataUploader,param_1,
                                    &this_01->PrimitiveDataBuffer,iVar2 + 1,
                                    (FScatterInfo *)&local_78);
      local_78.DataPtr = (FTaskHandle *)0x0;
      local_78.ArrayNum = 0;
      pFVar11 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
                ::ResizeAndUploadTo(&((this->MaterialUploader).Ptr)->MaterialDataUploader,param_1,
                                    &((this->MaterialBuffers).Ptr)->MaterialDataBuffer,iVar4,
                                    (FScatterInfo *)&local_78);
      pFVar6 = (this->MaterialUploader).Ptr;
      (this->MaterialUploader).Ptr = (FUploader *)0x0;
      if (pFVar6 != (FUploader *)0x0) {
        pFVar7 = (pFVar6->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar7 = (pFVar6->MaterialDataUploader).UploadData.Values.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar7 = (pFVar6->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar7 = (pFVar6->PrimitiveDataUploader).UploadData.Values.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        ::operator_delete(pFVar6,0x60);
      }
    }
    pFVar8 = local_68;
    if (local_68 != (FNaniteMaterialsParameters *)0x0) {
      local_60._padding_._0_4_ = 0xffffffff;
      local_60._padding_ = 0;
      uVar9 = 0;
      if (((pFVar10->Desc).Usage & DrawIndirect) != None) {
        uVar9 = 0x1c;
      }
      local_60._padding_ = CONCAT71((int7)((ulonglong)local_60._padding_ >> 8),uVar9) & 0xffffffff;
      local_60.Buffer = pFVar10;
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_60);
      pFVar8->PrimitiveMaterialData = pFVar12;
      uVar9 = 0;
      local_60._padding_ = CONCAT44(local_60._padding_._4_4_,0xffffffff);
      local_60._padding_ = 0;
      if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
        uVar9 = 0x1c;
      }
      local_60._padding_ = CONCAT71((int7)((ulonglong)local_60._padding_ >> 8),uVar9) & 0xffffffff;
      local_60.Buffer = pFVar11;
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_60);
      pFVar8->MaterialData = pFVar12;
    }
    FRHIComputeCommandList::SetGPUMask(this_00,FVar3);
  }
  return;
}

// PostBuildNaniteShadingCommands @ 14506e740

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::PostBuildNaniteShadingCommands
          (FMaterialsSceneExtension *this,FRDGBuilder *param_1,FTaskHandle *param_2,Type param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned___int64> aVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  <lambda_1> *p<Var8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_res8;
  <lambda_1> local_38;
  undefined4 local_28;
  atomic<UE::Tasks::Private::FTaskBase_*> local_20;
  atomic<unsigned___int64> local_18;
  
  pTVar6 = CVarNaniteMaterialBufferAsyncUpdates.Ref;
  if (((this->MaterialBuffers).Ptr != (FMaterialBuffers *)0x0) && (param_3 == BasePass)) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res8.Reference = (param_2->Pimpl).Reference;
    bVar7 = pTVar6->ShadowedValue[1];
    if (local_res8.Reference != (FTaskBase *)0x0) {
      LOCK();
      (local_res8.Reference)->RefCount =
           (atomic<unsigned_int>)((int)(local_res8.Reference)->RefCount + 1);
      UNLOCK();
    }
    aVar3 = (atomic<unsigned___int64>)(param_2->Pimpl).Reference;
    local_38.BuildDependency.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)&local_res8;
    local_28 = 1;
    if (aVar3 != (atomic<unsigned___int64>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)aVar3 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)aVar3 + 0x30) + 1);
      UNLOCK();
    }
    local_20 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    local_18 = aVar3;
    FRDGBuilder::
    AddSetupTask<_Nanite::FMaterialsSceneExtension::PostBuildNaniteShadingCommands_::__l2::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,&local_38,(FPipe *)&stack0xffffffffffffffe0,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,(char)&local_38 + 8,
               true,bVar7);
    p<Var8 = (<lambda_1> *)((this->TaskHandles).Elements + 5);
    if (p<Var8 != &local_38) {
      pFVar4 = ((TRefCountPtr<UE::Tasks::Private::FTaskBase> *)&p<Var8->__this)->Reference;
      ((TRefCountPtr<UE::Tasks::Private::FTaskBase> *)&p<Var8->__this)->Reference =
           (FTaskBase *)local_38.__this;
      local_38.__this = (FMaterialsSceneExtension *)0x0;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if (local_38.__this != (FMaterialsSceneExtension *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)
               ((longlong)
                ((local_38.__this)->MaterialBufferAllocator).FreeSpans.AllocatorInstance.InlineData
               + 0x10);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)(local_38.__this)->_padding_)(local_38.__this,1);
      }
    }
    if (aVar3 != (atomic<unsigned___int64>)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)((longlong)aVar3 + 0x30);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)aVar3)(aVar3,1);
      }
    }
    if (local_res8.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &(local_res8.Reference)->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)(local_res8.Reference)->_padding_)(local_res8.Reference,1);
      }
    }
  }
  return;
}

// ProcessBufferDefragmentation @ 14506f4e0

bool __thiscall
Nanite::FMaterialsSceneExtension::ProcessBufferDefragmentation(FMaterialsSceneExtension *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<bool> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  FSpanAllocator::Consolidate(&this->MaterialBufferAllocator);
  pTVar7 = CVarNaniteMaterialBufferDefrag.Ref;
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  bVar9 = pTVar7->ShadowedValue[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), pTVar6 = CVarNaniteMaterialDataBufferMinSizeBytes.Ref,
     ::_TSS0 == -1)) {
    bVar11 = IsInParallelRenderingThread();
    if ((!bVar11) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    MinMaterialBufferSizeDwords =
         (int)(pTVar6->ShadowedValue[1] + (pTVar6->ShadowedValue[1] >> 0x1f & 3U)) >> 2;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar8 = CVarNaniteMaterialBufferDefragLowWaterMark.Ref;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  lVar12 = 0x18;
  if ((this->MaterialBufferAllocator).bGrowOnly == false) {
    lVar12 = 0x14;
  }
  iVar13 = *(int *)((this->MaterialBufferAllocator).FreeSpans.AllocatorInstance.InlineData +
                   lVar12 + -0x20);
  iVar15 = 1;
  if (iVar13 != 0) {
    iVar15 = iVar13;
  }
  uVar1 = (ulonglong)(iVar15 - 1) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar13 = 1 << ((byte)lVar12 & 0x1f);
  local_res10 = (undefined4)lVar12;
  if (bVar9 != false) {
    bVar9 = GNaniteMaterialBufferForceDefrag != 0;
    if (GNaniteMaterialBufferForceDefrag == 1) {
      GNaniteMaterialBufferForceDefrag = 0;
    }
    if ((bVar9) ||
       ((MinMaterialBufferSizeDwords < iVar13 &&
        ((this->MaterialBufferAllocator).CurrentSize <=
         (int)(longlong)((float)iVar13 * pTVar8->ShadowedValue[1]))))) {
      FSpanAllocator::Reset(&this->MaterialBufferAllocator);
      uStack_84 = 1;
      iVar13 = *(int *)&(this->PrimitiveData).field_0x28;
      puVar2 = &(this->PrimitiveData).field_0x10;
      local_88 = 0;
      iStack_74 = 0;
      iStack_70 = 0;
      if (iVar13 != 0) {
        puVar17 = *(uint **)&(this->PrimitiveData).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar2;
        }
        uVar14 = *puVar17;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar14 == 0) {
          iStack_70 = iStack_70 + 0x20;
          lVar12 = (longlong)local_88;
          local_88 = local_88 + 1;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88)
          goto LAB_14506f6eb;
          uVar14 = puVar17[lVar12 + 1];
        }
        uStack_84 = -uVar14 & uVar14;
        uVar1 = (ulonglong)uStack_84 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res18 = (int)lVar12;
        iStack_74 = local_res18 + -1 + iStack_70;
        if (iVar13 < iStack_74) {
LAB_14506f6eb:
          iStack_74 = iVar13;
        }
      }
      uVar14 = *(uint *)&(this->PrimitiveData).field_0x28;
      local_40 = *(int *)&(this->PrimitiveData).field_0x8 -
                 *(int *)&(this->PrimitiveData).field_0x34;
      local_60._padding_ = CONCAT44(uStack_84,local_88);
      iVar15 = (int)uVar14 >> 5;
      local_60.CurrentBitIndex = iStack_74;
      local_60.UnvisitedBitMask = 0xffffffff;
      local_60._28_4_ = uStack_6c;
      local_60.BaseBitIndex = iStack_70;
      uVar18 = uVar14 & 0xffffffe0;
      local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar14 < 0) || (iVar13 < (int)uVar14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar3 = *(uint *)&(this->PrimitiveData).field_0x28;
      if (uVar14 != uVar3) {
        puVar16 = *(undefined1 **)&(this->PrimitiveData).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar2;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
        while (uVar14 == 0) {
          lVar12 = (longlong)iVar15;
          uVar18 = uVar18 + 0x20;
          iVar15 = iVar15 + 1;
          uVar14 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14506f7d0;
          uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar14 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar14) {
          uVar14 = uVar3;
        }
      }
LAB_14506f7d0:
      while( true ) {
        if (*(int *)&(this->PrimitiveData).field_0x8 - *(int *)&(this->PrimitiveData).field_0x34 !=
            local_40) {
          `TSparseArray<Nanite::FMaterialsSceneExtension::FPrimitiveData,FDefaultSparseArrayAllocator>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar12 = (longlong)local_60.CurrentBitIndex;
        if ((local_60.CurrentBitIndex == uVar14) &&
           (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
        lVar4 = *(longlong *)&this->PrimitiveData;
        if (*(int *)(lVar4 + 8 + lVar12 * 0x18) != -1) {
          *(undefined4 *)(lVar4 + 8 + lVar12 * 0x18) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0xc + lVar12 * 0x18) = 0;
        }
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
      }
      return true;
    }
  }
  return false;
}

// SetEnabled @ 145077610

void __thiscall
Nanite::FMaterialsSceneExtension::SetEnabled(FMaterialsSceneExtension *this,bool param_1)

{
  int *piVar1;
  TUniquePtr<Nanite::FMaterialsSceneExtension::FMaterialBuffers,TDefaultDelete<Nanite::FMaterialsSceneExtension::FMaterialBuffers>_>
  *pTVar2;
  int iVar3;
  FMaterialBuffers *pFVar4;
  undefined8 *puVar5;
  FMaterialBuffers *pFVar6;
  undefined8 local_18 [2];
  
  pTVar2 = &this->MaterialBuffers;
  pFVar6 = pTVar2->Ptr;
  if (param_1 != (pFVar6 != (FMaterialBuffers *)0x0)) {
    if (param_1) {
      pFVar6 = ::operator_new(0x40);
      if (pFVar6 == (FMaterialBuffers *)0x0) {
        pFVar6 = (FMaterialBuffers *)0x0;
      }
      else {
        pFVar6 = FMaterialBuffers::FMaterialBuffers(pFVar6);
      }
      if (pTVar2 == (TUniquePtr<Nanite::FMaterialsSceneExtension::FMaterialBuffers,TDefaultDelete<Nanite::FMaterialsSceneExtension::FMaterialBuffers>_>
                     *)local_18) {
        if (pFVar6 != (FMaterialBuffers *)0x0) {
          puVar5 = *(undefined8 **)&(pFVar6->MaterialDataBuffer).field_0x18;
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          puVar5 = *(undefined8 **)&(pFVar6->PrimitiveDataBuffer).field_0x18;
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          ::operator_delete(pFVar6,0x40);
        }
      }
      else {
        pFVar4 = pTVar2->Ptr;
        pTVar2->Ptr = pFVar6;
        if (pFVar4 != (FMaterialBuffers *)0x0) {
          puVar5 = *(undefined8 **)&(pFVar4->MaterialDataBuffer).field_0x18;
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          puVar5 = *(undefined8 **)&(pFVar4->PrimitiveDataBuffer).field_0x18;
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          ::operator_delete(pFVar4,0x40);
        }
      }
    }
    else {
      pTVar2->Ptr = (FMaterialBuffers *)0x0;
      if (pFVar6 != (FMaterialBuffers *)0x0) {
        puVar5 = *(undefined8 **)&(pFVar6->MaterialDataBuffer).field_0x18;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        puVar5 = *(undefined8 **)&(pFVar6->PrimitiveDataBuffer).field_0x18;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        ::operator_delete(pFVar6,0x40);
      }
      FSpanAllocator::Reset(&this->MaterialBufferAllocator);
      *(undefined4 *)&(this->PrimitiveData).field_0x8 = 0;
      if (*(int *)&(this->PrimitiveData).field_0xc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->PrimitiveData,0,
                   (int *)&(this->PrimitiveData).field_0xc);
      }
      *(undefined4 *)&(this->PrimitiveData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->PrimitiveData).field_0x34 = 0;
      piVar1 = &(this->DebugViewData).ArrayMax;
      *(undefined4 *)&(this->PrimitiveData).field_0x28 = 0;
      (this->DebugViewData).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,2,0,&(this->DebugViewData).AllocatorInstance,0,piVar1);
      }
    }
  }
  return;
}

// ShouldCreateExtension @ 14507a1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl Nanite::FMaterialsSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    bVar1 = DoesRuntimeSupportNanite(SP_NumPlatforms,true,true);
    return bVar1;
  }
  bVar1 = DoesRuntimeSupportNanite
                    (GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8],true,
                     true);
  return bVar1;
}

