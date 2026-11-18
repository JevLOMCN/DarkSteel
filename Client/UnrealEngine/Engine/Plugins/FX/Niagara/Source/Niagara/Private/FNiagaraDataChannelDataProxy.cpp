// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 16

// ~FNiagaraDataChannelDataProxy @ 1490b7a20

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
FNiagaraDataChannelDataProxy::~FNiagaraDataChannelDataProxy(FNiagaraDataChannelDataProxy *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FNiagaraDataSet *this_00;
  TReferenceControllerBase<1> *pTVar5;
  FNiagaraDataBuffer *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 local_18 [2];
  
  this_00 = this->GPUDataSet;
  if (this_00 != (FNiagaraDataSet *)0x0) {
    FNiagaraDataSet::~FNiagaraDataSet(this_00);
    ::operator_delete(this_00,0xc0);
  }
  this->GPUDataSet = (FNiagaraDataSet *)0x0;
  if (&this->Owner != (TWeakPtr<FNiagaraDataChannelData,1> *)local_18) {
    pTVar5 = (this->Owner).WeakReferenceCount.ReferenceController;
    (this->Owner).Object = (FNiagaraDataChannelData *)0x0;
    (this->Owner).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  pFVar6 = (this->CurrFrameData).Reference;
  if (pFVar6 != (FNiagaraDataBuffer *)0x0) {
    (this->CurrFrameData).Reference = (FNiagaraDataBuffer *)0x0;
    if ((int)pFVar6->_padding_ < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsBeingRead()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x2c,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + -1;
    UNLOCK();
  }
  pFVar6 = (this->PrevFrameData).Reference;
  if (pFVar6 != (FNiagaraDataBuffer *)0x0) {
    (this->PrevFrameData).Reference = (FNiagaraDataBuffer *)0x0;
    if ((int)pFVar6->_padding_ < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsBeingRead()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x2c,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + -1;
    UNLOCK();
  }
  this->bNeedsPrevFrameData = false;
  DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
            ((TRefCountPtr<FNiagaraDataBuffer> *)(this->PendingCPUBuffers).AllocatorInstance.Data,
             (this->PendingCPUBuffers).ArrayNum);
  piVar2 = &(this->PendingCPUBuffers).ArrayMax;
  (this->PendingCPUBuffers).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingCPUBuffers).AllocatorInstance,0,piVar2);
  }
  DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
            ((TRefCountPtr<FNiagaraDataBuffer> *)(this->CurrentCPUBuffers).AllocatorInstance.Data,
             (this->CurrentCPUBuffers).ArrayNum);
  piVar2 = &(this->CurrentCPUBuffers).ArrayMax;
  (this->CurrentCPUBuffers).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CurrentCPUBuffers).AllocatorInstance,0,piVar2);
  }
  this->PendingGPUAllocations = 0;
  this->CurrentGPUAllocation = 0;
  pFVar7 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<FNDCGpuReadbackInfo,int>
            ((FNDCGpuReadbackInfo *)(this->PendingGPUReadbackBuffers).AllocatorInstance.Data,
             (this->PendingGPUReadbackBuffers).ArrayNum);
  pFVar7 = (this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
            ((TRefCountPtr<FNiagaraDataBuffer> *)(this->CurrentCPUBuffers).AllocatorInstance.Data,
             (this->CurrentCPUBuffers).ArrayNum);
  pFVar7 = (this->CurrentCPUBuffers).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
            ((TRefCountPtr<FNiagaraDataBuffer> *)(this->PendingCPUBuffers).AllocatorInstance.Data,
             (this->PendingCPUBuffers).ArrayNum);
  pFVar7 = (this->PendingCPUBuffers).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LayoutInfo).SharedReferenceCount.ReferenceController);
  pFVar6 = (this->PrevFrameData).Reference;
  if (pFVar6 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar6->_padding_ < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsBeingRead()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x2c,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + -1;
    UNLOCK();
  }
  pFVar6 = (this->CurrFrameData).Reference;
  if (pFVar6 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar6->_padding_ < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsBeingRead()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x2c,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + -1;
    UNLOCK();
  }
  pTVar5 = (this->Owner).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// operator() @ 1490bddb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraDataChannelDataProxy::AddTransition'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  code *pcVar2;
  FRHIUnorderedAccessView **ppFVar3;
  bool bVar4;
  TArrayView<FRHIUnorderedAccessView_*_const,int> *pTVar5;
  IRHIComputeContext *pIVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined **ppuVar8;
  FRHITransitionInfo *pFVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  FRHIUnorderedAccessView **local_78;
  undefined8 uStack_70;
  FRHIUnorderedAccessView **local_68;
  undefined8 uStack_60;
  FRHIUnorderedAccessView **local_58;
  undefined8 uStack_50;
  FRHIUnorderedAccessView **local_48;
  undefined8 uStack_40;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_38;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_28 [2];
  
  iVar1 = *(int *)((longlong)this + 0x128);
  pFVar9 = this;
  if (*(FRHITransitionInfo **)((longlong)this + 0x120) != (FRHITransitionInfo *)0x0) {
    pFVar9 = *(FRHITransitionInfo **)((longlong)this + 0x120);
  }
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88._12_4_ = uStack_ac;
  local_88.ArrayNum = iVar1;
  local_88.DataPtr = pFVar9;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
  if (*(int *)((longlong)this + 0x130) == 0x400) {
    pTVar5 = TArrayView<FRHIUnorderedAccessView_*_const,int>::
             TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
                       (&local_38,
                        (TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                        ((longlong)this + 0x138));
    ppFVar3 = pTVar5->DataPtr;
    uStack_70 = *(undefined8 *)&pTVar5->ArrayNum;
    local_68 = ppFVar3;
    uStack_60 = uStack_70;
    if ((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) {
      pIVar6 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_78 = ppFVar3;
      (**(code **)(pIVar6->_padding_ + 0x80))(pIVar6,&local_78);
      return;
    }
    iVar1 = (int)uStack_70;
    _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(ulonglong)(uint)(iVar1 * 8),8);
    memcpy(_Dst,ppFVar3,(ulonglong)(uint)(iVar1 * 8));
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    puVar10 = puVar7 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar7;
    *(undefined8 **)&param_1->field_0x30 = puVar10;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppuVar8 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
    uVar11 = CONCAT44(uStack_9c,iVar1);
  }
  else {
    pTVar5 = TArrayView<FRHIUnorderedAccessView_*_const,int>::
             TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
                       (local_28,(TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                                 ((longlong)this + 0x138));
    ppFVar3 = pTVar5->DataPtr;
    uStack_50 = *(undefined8 *)&pTVar5->ArrayNum;
    local_48 = ppFVar3;
    uStack_40 = uStack_50;
    if ((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) {
      pIVar6 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_58 = ppFVar3;
      (**(code **)(pIVar6->_padding_ + 0x90))(pIVar6,&local_58);
      return;
    }
    iVar1 = (int)uStack_50;
    _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(ulonglong)(uint)(iVar1 * 8),8);
    memcpy(_Dst,ppFVar3,(ulonglong)(uint)(iVar1 * 8));
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    puVar10 = puVar7 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar7;
    *(undefined8 **)&param_1->field_0x30 = puVar10;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppuVar8 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
    uVar11 = CONCAT44(uStack_8c,iVar1);
  }
  puVar7[2] = _Dst;
  puVar7[3] = uVar11;
  *puVar7 = ppuVar8;
  *puVar10 = 0;
  return;
}

// operator() @ 1490c1170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNiagaraDataChannelDataProxy::EndFrame'::__l35::<lambda_1>::operator()
          (void *this,TSharedRef<FNiagaraDataBufferReadback,1> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraDataSet *this_00;
  FRHIUnorderedAccessView *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined8 uVar8;
  ForAnyElementType _Src;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  FNiagaraDataBuffer *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  FNiagaraDataBuffer *pFVar15;
  bool bVar16;
  undefined1 local_res8 [16];
  undefined1 local_68 [16];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined8 local_4c;
  undefined4 local_44;
  FString local_40;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pFVar12 = (FNiagaraDataBuffer *)0x0;
  pFVar15 = pFVar12;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar4->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1490c1504;
      }
      LOCK();
      aVar9 = pTVar4->SharedReferenceCount;
      bVar16 = aVar7 == aVar9;
      if (bVar16) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar16);
    pFVar15 = *(FNiagaraDataBuffer **)this;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pFVar15 != (FNiagaraDataBuffer *)0x0) {
    if ((*(longlong *)&(pFVar15->GPUBufferInt).OwnerName.Number == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = *(uint *)((longlong)this + 0x20);
    uVar10 = FNiagaraDataSetCompiledData::GetLayoutHash
                       ((FNiagaraDataSetCompiledData *)
                        (*(longlong *)&(pFVar15->GPUBufferInt).OwnerName.Number + 0x10));
    if (uVar3 == uVar10) {
      local_50 = *(undefined1 *)((longlong)this + 0x11);
      local_4f = *(undefined1 *)((longlong)this + 0x10);
      local_68._0_8_ = 0;
      local_68._8_8_ = 0;
      local_4c = *(undefined8 *)((longlong)this + 0x14);
      local_44 = *(undefined4 *)((longlong)this + 0x1c);
      local_58 = (TReferenceControllerBase<1> *)0x0;
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      local_4e = 0;
      bVar16 = IsInGameThread();
      if ((!bVar16) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                              ,0x191,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(FNiagaraDataSet **)&(pFVar15->FloatData).ArrayNum;
      if (this_00 != (FNiagaraDataSet *)0x0) {
        pFVar12 = FNiagaraDataSet::AllocateBuffer(this_00);
      }
      FNiagaraDataBufferReadback::ReadResultsToDataBuffer(param_1->Object,pFVar12);
      LOCK();
      bVar16 = (int)pFVar12->_padding_ == -1;
      if (bVar16) {
        *(undefined4 *)&pFVar12->_padding_ = 1;
      }
      UNLOCK();
      if (!bVar16) {
        local_res8[0] = 0;
        `FNiagaraDataBuffer::UnlockForRead'::__l2::<lambda_1>::operator()(local_res8);
      }
      uVar8 = local_68._0_8_;
      if (local_68._0_8_ != 0) {
        piVar1 = (int *)(local_68._0_8_ + 8);
        local_68._0_8_ = pFVar12;
        if ((*piVar1 < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsBeingRead()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x2c,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + -1;
        UNLOCK();
        pFVar12 = (FNiagaraDataBuffer *)local_68._0_8_;
      }
      local_68._0_8_ = pFVar12;
      ::FString::operator=(&local_40,L"NDC GPU Readback");
      bVar16 = IsInGameThread();
      if ((!bVar16) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                              ,0x186,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pFVar15->GPUBufferFloat).UAV.Reference;
      if (((pFVar5 <= (FRHIUnorderedAccessView *)local_68) &&
          (local_68 <
           (undefined1 *)
           ((longlong)*(int *)((longlong)&(pFVar15->GPUBufferFloat).SRV.Reference + 4) * 0x38 +
           (longlong)pFVar5))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)&(pFVar15->GPUBufferFloat).SRV.Reference;
      piVar1 = (int *)((longlong)&(pFVar15->GPUBufferFloat).SRV.Reference + 4);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)&(pFVar15->GPUBufferFloat).UAV,piVar1);
      }
      uVar8 = local_68._0_8_;
      *(int *)&(pFVar15->GPUBufferFloat).SRV.Reference = iVar11 + 1;
      puVar13 = (undefined8 *)
                ((longlong)iVar11 * 0x38 + (longlong)(pFVar15->GPUBufferFloat).UAV.Reference);
      *puVar13 = 0;
      *puVar13 = local_68._0_8_;
      if ((FNiagaraDataBuffer *)local_68._0_8_ != (FNiagaraDataBuffer *)0x0) {
        if (((int)*(longlong *)(local_68._0_8_ + 8) == -1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsBeingWritten()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x26,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        *(int *)(uVar8 + 8) = (int)*(longlong *)(uVar8 + 8) + 1;
        UNLOCK();
      }
      _Src.Data = local_40.Data.AllocatorInstance.Data;
      puVar13[1] = local_68._8_8_;
      puVar13[2] = local_58;
      if (local_58 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = (ForAnyElementType *)(puVar13 + 5);
      *(undefined1 *)(puVar13 + 3) = local_50;
      *(undefined1 *)((longlong)puVar13 + 0x19) = local_4f;
      *(undefined1 *)((longlong)puVar13 + 0x1a) = local_4e;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = local_4c;
      *(undefined4 *)((longlong)puVar13 + 0x24) = local_44;
      pFVar2->Data = (FScriptContainerElement *)0x0;
      lVar14 = (longlong)local_40.Data.ArrayNum;
      *(int *)(puVar13 + 6) = local_40.Data.ArrayNum;
      if (local_40.Data.ArrayNum == 0) {
        *(int *)((longlong)puVar13 + 0x34) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_40.Data.ArrayNum,0,pFVar2,local_40.Data.ArrayNum,
                   (int *)((longlong)puVar13 + 0x34));
        memcpy(pFVar2->Data,_Src.Data,lVar14 * 2);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      uVar8 = local_68._0_8_;
      if ((FNiagaraDataBuffer *)local_68._0_8_ != (FNiagaraDataBuffer *)0x0) {
        if (((int)*(longlong *)(local_68._0_8_ + 8) < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsBeingRead()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x2c,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        *(int *)(uVar8 + 8) = (int)*(longlong *)(uVar8 + 8) + -1;
        UNLOCK();
      }
    }
  }
LAB_1490c1504:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddBuffersFromCPU @ 1490cb160

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
FNiagaraDataChannelDataProxy::AddBuffersFromCPU
          (FNiagaraDataChannelDataProxy *this,
          TArray<TRefCountPtr<FNiagaraDataBuffer>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TRefCountPtr<FNiagaraDataBuffer>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->PendingCPUBuffers;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->PendingCPUBuffers).ArrayNum,
                       &(this->PendingCPUBuffers).ArrayMax);
    ConstructItems<TRefCountPtr<FNiagaraDataBuffer>,TRefCountPtr<FNiagaraDataBuffer>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,
               (TRefCountPtr<FNiagaraDataBuffer> *)(param_1->AllocatorInstance).Data,iVar2);
  }
  this->bHasPendingCpuUpdate = true;
  return;
}

// AddGPUAllocationForNextTick @ 1490cb280

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
FNiagaraDataChannelDataProxy::AddGPUAllocationForNextTick
          (FNiagaraDataChannelDataProxy *this,int param_1)

{
  this->PendingGPUAllocations = this->PendingGPUAllocations + param_1;
  return;
}

// AddTransition @ 1490cb510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FNiagaraDataChannelDataProxy::AddTransition
          (FNiagaraDataChannelDataProxy *this,FRDGBuilder *param_1,ERHIAccess param_2,
          ERHIAccess param_3,FNiagaraDataBuffer *param_4)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  int iVar3;
  FRDGEventName *pFVar4;
  void *this_00;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraDataChannelDataProxy::AddTransition(FRDGBuilder_&,ERHIAccess,ERHIAccess,FNiagaraDataBuffer_*)_::_5_::<lambda_1>_>
  *pTVar5;
  ForElementType<FRHITransitionInfo> FVar6;
  longlong lVar7;
  FRHITransitionInfo *pFVar8;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  FRDGEventName local_2b0;
  FRHITransitionInfo local_298;
  undefined4 local_268;
  undefined2 local_264;
  FRHIUnorderedAccessView *local_260;
  undefined1 local_258;
  ERHIAccess local_254;
  ERHIAccess local_250;
  undefined1 local_24c;
  undefined1 local_240;
  FRHITransitionInfo *local_178;
  int local_170;
  undefined4 local_16c;
  <lambda_1> local_168;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (param_4 != (FNiagaraDataBuffer *)0x0) {
    local_298.field1_0x8 = (FRHITransitionInfo_u_8)(param_4->GPUBufferFloat).UAV.Reference;
    local_260 = (param_4->GPUBufferInt).UAV.Reference;
    local_298._padding_._4_2_ = 0xffff;
    local_264 = 0xffff;
    local_178 = (FRHITransitionInfo *)0x0;
    local_16c = 6;
    local_298._padding_._0_4_ = 0xffffffff;
    local_298.Type = UAV;
    local_298.Flags = None;
    local_298.CommitInfo.bIsSet = false;
    local_170 = 2;
    local_268 = 0xffffffff;
    local_258 = 3;
    local_24c = 0;
    local_240 = 0;
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0 = 0;
    local_298.AccessBefore = param_2;
    local_298.AccessAfter = param_3;
    local_254 = param_2;
    local_250 = param_3;
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_2c8,(int *)((longlong)&local_2c0 + 4));
    iVar3 = iVar2 + 1;
    *(FRHIUnorderedAccessView **)(local_2c8.Data + (longlong)iVar2 * 8) =
         (param_4->GPUBufferFloat).UAV.Reference;
    if (iVar3 == local_2c0._4_4_) {
      local_2c0._0_4_ = iVar3;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_2c8,(int *)((longlong)&local_2c0 + 4));
    }
    iVar2 = local_170;
    local_2c0 = CONCAT44(local_2c0._4_4_,iVar3 + 1);
    local_168.Transitions.AllocatorInstance.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
    *(FRHIUnorderedAccessView **)(local_2c8.Data + (longlong)iVar3 * 8) =
         (param_4->GPUBufferInt).UAV.Reference;
    local_168.Transitions.ArrayNum = local_170;
    pFVar8 = &local_298;
    if (local_178 != (FRHITransitionInfo *)0x0) {
      pFVar8 = local_178;
    }
    if (local_170 == 0) {
      local_168.Transitions.ArrayMax = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,local_170,0,(ForElementType<FRHITransitionInfo> *)&local_168,local_170,
                 &local_168.Transitions.ArrayMax);
      FVar6 = (ForElementType<FRHITransitionInfo>)&local_168;
      if (local_168.Transitions.AllocatorInstance.SecondaryData !=
          (ForElementType<FRHITransitionInfo>)0x0) {
        FVar6 = local_168.Transitions.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>((void *)FVar6,pFVar8,iVar2);
    }
    _Src.Data = local_2c8.Data;
    lVar7 = (longlong)(int)local_2c0;
    local_168.UAVsToOverlap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.UAVsToOverlap.ArrayNum = (int)local_2c0;
    local_168.AccessAfter = param_3;
    if ((int)local_2c0 == 0) {
      local_168.UAVsToOverlap.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_2c0,0,&local_168.UAVsToOverlap.AllocatorInstance,(int)local_2c0,
                 &local_168.UAVsToOverlap.ArrayMax);
      memcpy(local_168.UAVsToOverlap.AllocatorInstance.Data,_Src.Data,lVar7 << 3);
    }
    pFVar4 = FRDGEventName::FRDGEventName(&local_2b0,1,L"NDC Proxy - Transition Buffers");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x2d0,8);
    pTVar5 = TRDGEmptyLambdaPass<`FNiagaraDataChannelDataProxy::AddTransition'::__l5::<lambda_1>_>::
             TRDGEmptyLambdaPass<_FNiagaraDataChannelDataProxy::AddTransition_::__l5::<lambda_1>_>
                       (this_00,pFVar4,NeverCull,&local_168);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar3 = (param_1->Passes).Array.ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar3 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar5;
    *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
    if (local_2b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2b0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_168.UAVsToOverlap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.UAVsToOverlap.AllocatorInstance.Data);
    }
    if (local_168.Transitions.AllocatorInstance.SecondaryData !=
        (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_168.Transitions.AllocatorInstance.SecondaryData);
    }
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    if (local_178 != (FRHITransitionInfo *)0x0) {
      FMemory::Free(local_178);
    }
  }
  return;
}

// AllocateBufferForCPU @ 1490cba30

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

TRefCountPtr<FNiagaraDataBuffer> __thiscall
FNiagaraDataChannelDataProxy::AllocateBufferForCPU
          (FNiagaraDataChannelDataProxy *this,FRDGBuilder *param_1,Type param_2,int param_3,
          bool param_4,bool param_5,TVector<float> *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  FNiagaraDataBuffer *this_00;
  TRefCountPtr<FNiagaraDataBuffer> TVar8;
  undefined4 in_register_00000084;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined3 in_stack_00000029;
  undefined8 *in_stack_00000040;
  
  this_00 = FNiagaraDataSet::AllocateBuffer(this->GPUDataSet);
  FNiagaraDataBuffer::AllocateGPU
            (this_00,(FRHICommandListBase *)
                     ((FRDGBuilder *)CONCAT44(in_register_00000084,param_2))->_padding_,_param_4,
             param_3,L"NDC GPU Buffers for CPU");
  LOCK();
  bVar9 = (int)this_00->_padding_ == -1;
  if (bVar9) {
    *(undefined4 *)&this_00->_padding_ = 1;
  }
  UNLOCK();
  if (!bVar9) {
    local_res8[0] = 0;
    `FNiagaraDataBuffer::UnlockForRead'::__l2::<lambda_1>::operator()(local_res8);
  }
  param_1->_padding_ = (longlong)this_00;
  if ((param_6._0_1_ != (FScriptContainerElement)0x0) || (param_5)) {
    iVar7 = (this->PendingGPUReadbackBuffers).ArrayNum;
    piVar1 = &(this->PendingGPUReadbackBuffers).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->PendingGPUReadbackBuffers).AllocatorInstance,piVar1);
    }
    (this->PendingGPUReadbackBuffers).ArrayNum = iVar7 + 1;
    pFVar2 = (this->PendingGPUReadbackBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
    DefaultConstructItems<FNDCGpuReadbackInfo,int>(pFVar2,1);
    lVar4 = param_1->_padding_;
    lVar5 = *(longlong *)pFVar2;
    if (lVar5 != lVar4) {
      *(longlong *)pFVar2 = lVar4;
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 8) == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          TVar8.Reference = (FNiagaraDataBuffer *)(*pcVar6)();
          return (TRefCountPtr<FNiagaraDataBuffer>)TVar8.Reference;
        }
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        if ((*(int *)(lVar5 + 8) < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          TVar8.Reference = (FNiagaraDataBuffer *)(*pcVar6)();
          return (TRefCountPtr<FNiagaraDataBuffer>)TVar8.Reference;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
        UNLOCK();
      }
    }
    pFVar2[8] = param_6._0_1_;
    pFVar2[9] = (FScriptContainerElement)param_5;
    uVar3 = *(undefined4 *)(in_stack_00000040 + 1);
    *(undefined8 *)(pFVar2 + 0xc) = *in_stack_00000040;
    *(undefined4 *)(pFVar2 + 0x14) = uVar3;
  }
  AddTransition(this,(FRDGBuilder *)CONCAT44(in_register_00000084,param_2),SRVMask,UAVCompute,
                this_00);
  return (TRefCountPtr<FNiagaraDataBuffer>)(FNiagaraDataBuffer *)param_1;
}

// BeginFrame @ 1490cd100

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
FNiagaraDataChannelDataProxy::BeginFrame
          (FNiagaraDataChannelDataProxy *this,FNiagaraGpuComputeDispatchInterface *param_1,
          FRHICommandListImmediate *param_2)

{
  FNiagaraGPUInstanceCountManager *this_00;
  int *piVar1;
  TArray<TRefCountPtr<FNiagaraDataBuffer>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TRefCountPtr<FNiagaraDataBuffer>,TSizedDefaultAllocator<32>_> *pTVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  int iVar5;
  longlong lVar6;
  FNDCGpuReadbackInfo *pFVar7;
  FNiagaraDataBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FNiagaraGpuComputeDispatchInterface *pFVar11;
  FRHICommandListBase *pFVar12;
  bool bVar13;
  FNiagaraDataBuffer *pFVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FNiagaraGpuComputeDispatchInterface *local_res10;
  FRHICommandListBase *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  uint local_64;
  uint local_60 [2];
  longlong local_58 [3];
  
  local_res10 = param_1;
  local_res18 = (FRHICommandListBase *)param_2;
  if ((this->GPUDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GPUDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                          ,0x25a,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((((this->GPUDataSet->CompiledData).StructPtr)->SimTarget != GPUComputeSim) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GPUDataSet->GetSimTarget() == ENiagaraSimTarget::GPUComputeSim",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                          ,0x25b,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((this->DispatchInterfaceForDebuggingOnly != param_1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("DispatchInterfaceForDebuggingOnly == DispatchInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                          ,0x25d,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                          ,0x6a,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar5 = (this->PendingGPUReadbackBuffers).ArrayNum;
  this_00 = &param_1->GPUInstanceCounterManager;
  pFVar16 = (this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
  pFVar9 = pFVar16 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->PendingGPUReadbackBuffers).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNDCGpuReadbackInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar9) break;
    local_60[0] = *(uint *)(*(longlong *)pFVar16 + 0x5c);
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FNiagaraGPUInstanceCountManager::FreeEntry(this_00,local_60);
    lVar6 = *(longlong *)pFVar16;
    pFVar16 = pFVar16 + 0x18;
    *(undefined4 *)(lVar6 + 0x5c) = 0xffffffff;
  }
  piVar1 = &(this->PendingGPUReadbackBuffers).ArrayMax;
  pFVar7 = (FNDCGpuReadbackInfo *)(this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
  iVar5 = (this->PendingGPUReadbackBuffers).ArrayNum;
  if ((this->PendingGPUReadbackBuffers).ArrayMax < 0) {
    DestructItems<FNDCGpuReadbackInfo,int>(pFVar7,iVar5);
    (this->PendingGPUReadbackBuffers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PendingGPUReadbackBuffers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNDCGpuReadbackInfo,int>(pFVar7,iVar5);
    (this->PendingGPUReadbackBuffers).ArrayNum = 0;
  }
  uVar18 = 0;
  if (NiagaraRollbackCVars::NDC::bRetainGPUDataIfPendingCpuUpdate == false) {
    pTVar2 = &this->PendingCPUBuffers;
    pTVar3 = &this->CurrentCPUBuffers;
    if (pTVar3 != pTVar2) {
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                ((TRefCountPtr<FNiagaraDataBuffer> *)(pTVar3->AllocatorInstance).Data,
                 (this->CurrentCPUBuffers).ArrayNum);
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CurrentCPUBuffers).ArrayNum = (this->PendingCPUBuffers).ArrayNum;
      (this->CurrentCPUBuffers).ArrayMax = (this->PendingCPUBuffers).ArrayMax;
      (this->PendingCPUBuffers).ArrayNum = 0;
      (this->PendingCPUBuffers).ArrayMax = 0;
    }
  }
  else if (this->bHasPendingCpuUpdate == false) {
    if ((this->CurrentGPUAllocation == 0) && (this->PendingGPUAllocations == 0)) {
      return;
    }
  }
  else {
    pTVar2 = &this->PendingCPUBuffers;
    pTVar3 = &this->CurrentCPUBuffers;
    if (pTVar3 != pTVar2) {
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                ((TRefCountPtr<FNiagaraDataBuffer> *)(pTVar3->AllocatorInstance).Data,
                 (this->CurrentCPUBuffers).ArrayNum);
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CurrentCPUBuffers).ArrayNum = (this->PendingCPUBuffers).ArrayNum;
      (this->CurrentCPUBuffers).ArrayMax = (this->PendingCPUBuffers).ArrayMax;
      (this->PendingCPUBuffers).ArrayNum = 0;
      (this->PendingCPUBuffers).ArrayMax = 0;
    }
  }
  this->bHasPendingCpuUpdate = false;
  if (this->bNeedsPrevFrameData != false) {
    pFVar14 = (this->PrevFrameData).Reference;
    (this->PrevFrameData).Reference = (this->CurrFrameData).Reference;
    (this->CurrFrameData).Reference = pFVar14;
  }
  pFVar16 = (this->CurrentCPUBuffers).AllocatorInstance.Data;
  iVar5 = (this->CurrentCPUBuffers).ArrayNum;
  pFVar9 = pFVar16 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->CurrentCPUBuffers).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == pFVar9) break;
    uVar18 = uVar18 + *(int *)(*(longlong *)pFVar16 + 0x124);
    pFVar16 = pFVar16 + 8;
  }
  iVar5 = this->PendingGPUAllocations;
  pTVar4 = &this->CurrFrameData;
  this->CurrentGPUAllocation = iVar5;
  this->PendingGPUAllocations = 0;
  uVar17 = iVar5 + uVar18;
  if (uVar17 == 0) {
    pFVar14 = pTVar4->Reference;
    if (pFVar14 != (FNiagaraDataBuffer *)0x0) {
      pTVar4->Reference = (FNiagaraDataBuffer *)0x0;
      if (((int)pFVar14->_padding_ < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBeingRead()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x2c,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + -1;
      UNLOCK();
    }
  }
  else {
    if (pTVar4->Reference == (FNiagaraDataBuffer *)0x0) {
      pFVar14 = FNiagaraDataSet::AllocateBuffer(this->GPUDataSet);
      LOCK();
      bVar13 = (int)pFVar14->_padding_ == -1;
      if (bVar13) {
        *(undefined4 *)&pFVar14->_padding_ = 1;
      }
      UNLOCK();
      if (!bVar13) {
        local_68[0] = 0;
        `FNiagaraDataBuffer::UnlockForRead'::__l2::<lambda_1>::operator()(local_68);
      }
      if (pTVar4 == (TRefCountPtr<FNiagaraDataBuffer> *)local_58) {
        if (pFVar14 != (FNiagaraDataBuffer *)0x0) {
          if (((int)pFVar14->_padding_ < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsBeingRead()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                  ,0x2c,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + -1;
          UNLOCK();
        }
      }
      else {
        pFVar8 = pTVar4->Reference;
        pTVar4->Reference = pFVar14;
        if (pFVar8 != (FNiagaraDataBuffer *)0x0) {
          if (((int)pFVar8->_padding_ < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsBeingRead()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                  ,0x2c,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + -1;
          UNLOCK();
        }
      }
    }
    local_64 = ((this->CurrFrameData).Reference)->GPUInstanceCountBufferOffset;
    FNiagaraGPUInstanceCountManager::FreeEntry(this_00,&local_64);
    pFVar12 = local_res18;
    pFVar11 = local_res10;
    if ((this->DebugName).Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
    }
    FNiagaraDataBuffer::AllocateGPU
              ((this->CurrFrameData).Reference,local_res18,uVar17,local_res10->FeatureLevel,pwVar15)
    ;
    if ((this->DebugName).Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
    }
    FNiagaraDataBuffer::PushCPUBuffersToGPU
              ((this->CurrFrameData).Reference,&this->CurrentCPUBuffers,true,
               (FRHICommandList *)pFVar12,pFVar11->FeatureLevel,pwVar15,false);
    pFVar14 = (this->CurrFrameData).Reference;
    if ((pFVar14->NumInstancesAllocated < uVar17) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumInstances <= NumInstancesAllocated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x9c,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar14->NumInstances = uVar17;
    if (NiagaraRollbackCVars::NDC::bRetainGPUDataIfPendingCpuUpdate == false) {
      piVar1 = &(this->CurrentCPUBuffers).ArrayMax;
      pFVar9 = (this->CurrentCPUBuffers).AllocatorInstance.Data;
      iVar5 = (this->CurrentCPUBuffers).ArrayNum;
      if ((this->CurrentCPUBuffers).ArrayMax < 0) {
        DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                  ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar9,iVar5);
        (this->CurrentCPUBuffers).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->CurrentCPUBuffers).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                  ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar9,iVar5);
        (this->CurrentCPUBuffers).ArrayNum = 0;
      }
    }
    local_64 = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
                         (this_00,(FRHICommandListImmediate *)pFVar12);
    ((this->CurrFrameData).Reference)->GPUInstanceCountBufferOffset = local_64;
    if (uVar18 != 0) {
      FNiagaraGPUInstanceCountManager::AddInstanceCountInitTask(this_00,local_64,uVar18);
    }
  }
  return;
}

// EndFrame @ 1490efce0

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
FNiagaraDataChannelDataProxy::EndFrame
          (FNiagaraDataChannelDataProxy *this,FNiagaraGpuComputeDispatchInterface *param_1,
          FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FNiagaraGPUInstanceCountManager *pFVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNiagaraDataChannelData *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FNiagaraGpuReadbackManager *pFVar12;
  FNDCGpuReadbackInfo *pFVar13;
  code *pcVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  TReferenceControllerBase<1> *pTVar22;
  FNiagaraDataBufferReadback *this_00;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  FNiagaraGpuComputeDispatchInterface *local_res10;
  FRHICommandListImmediate *local_res18;
  FScriptContainerElement local_res20;
  longlong local_a8;
  FScriptContainerElement *local_a0;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  undefined8 local_64;
  undefined4 local_5c;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (this->GPUDataSet == (FNiagaraDataSet *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("GPUDataSet",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                        ,0x2b4,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (((this->GPUDataSet->CompiledData).StructPtr)->SimTarget != GPUComputeSim) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("GPUDataSet->GetSimTarget() == ENiagaraSimTarget::GPUComputeSim",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                        ,0x2b5,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (this->DispatchInterfaceForDebuggingOnly != param_1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("DispatchInterfaceForDebuggingOnly == DispatchInterface",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                        ,0x2b8,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (this->CurrBufferAccessCounts != 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrBufferAccessCounts == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                        ,699,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  uVar7 = (this->PendingGPUReadbackBuffers).ArrayNum;
  uVar21 = (ulonglong)(int)uVar7;
  pFVar23 = (this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
  local_a0 = pFVar23 + uVar21 * 0x18;
  do {
    pFVar15 = local_a0;
    pTVar22 = (TReferenceControllerBase<1> *)0x0;
    if ((this->PendingGPUReadbackBuffers).ArrayNum != (int)uVar21) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNDCGpuReadbackInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar23 == pFVar15) {
      pFVar13 = (FNDCGpuReadbackInfo *)(this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
      piVar1 = &(this->PendingGPUReadbackBuffers).ArrayMax;
      iVar4 = (this->PendingGPUReadbackBuffers).ArrayNum;
      if (-1 < (this->PendingGPUReadbackBuffers).ArrayMax) {
        DestructItems<FNDCGpuReadbackInfo,int>(pFVar13,iVar4);
        (this->PendingGPUReadbackBuffers).ArrayNum = 0;
        return;
      }
      DestructItems<FNDCGpuReadbackInfo,int>(pFVar13,iVar4);
      (this->PendingGPUReadbackBuffers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->PendingGPUReadbackBuffers).AllocatorInstance,0,piVar1);
      }
      return;
    }
    if ((pFVar23[8] == (FScriptContainerElement)0x0) && (pFVar23[9] == (FScriptContainerElement)0x0)
       ) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReadbackInfo.bPublishToCPU || ReadbackInfo.bPublishToGame",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                          ,0x2c2,L"");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    local_res20 = pFVar23[8];
    FVar6 = pFVar23[9];
    if ((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    uVar17 = FNiagaraDataSetCompiledData::GetLayoutHash(&((this->LayoutInfo).Object)->CompiledData);
    pTVar8 = (this->Owner).WeakReferenceCount.ReferenceController;
    pFVar9 = (this->Owner).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_64 = *(undefined8 *)(pFVar23 + 0xc);
    local_5c = *(undefined4 *)(pFVar23 + 0x14);
    pTVar18 = ::operator_new(0x90);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      this_00 = (FNiagaraDataBufferReadback *)&DAT_00000010;
LAB_1490eff8f:
      if (((this_00->_padding_ == 0) || (*(longlong *)&this_00->_padding_ == 0)) ||
         (*(int *)(*(longlong *)&this_00->_padding_ + 8) < 1)) {
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_00->_padding_ = (longlong)this_00;
        if (pTVar22 != *(TReferenceControllerBase<1> **)&this_00->_padding_) {
          if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar10 = *(longlong **)&this_00->_padding_;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          *(TReferenceControllerBase<1> **)&this_00->_padding_ = pTVar22;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
      }
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) goto LAB_1490efff4;
    }
    else {
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFNiagaraDataBufferReadback___00_SharedPointerInternals__6B_
      ;
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18[2]._padding_ = 0;
      pTVar18[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[1]._padding_ = 0;
      pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[3]._padding_ = 0;
      pTVar18[4]._padding_ = 0;
      pTVar18[5]._padding_ = 0;
      pTVar18[6]._padding_ = 0;
      this_00 = (FNiagaraDataBufferReadback *)(pTVar18 + 1);
      pTVar18[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[7]._padding_ = 0;
      pTVar18[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[8]._padding_ = 0;
      pTVar22 = pTVar18;
      if (this_00 != (FNiagaraDataBufferReadback *)0x0) goto LAB_1490eff8f;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
LAB_1490efff4:
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    if (this_00 == (FNiagaraDataBufferReadback *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnReadbackComplete,(FWriteAccessScope *)&local_98);
    local_80 = &(this_00->OnReadbackComplete).field_0x8;
    puVar19 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_80);
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VFNiagaraDataBufferReadback___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar20 = FDelegateHandle::GenerateNewID();
      puVar19[2] = uVar20;
      *puVar19 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNiagaraDataBufferReadback,1>),FDefaultDelegateUserPolicy,`FNiagaraDataChannelDataProxy::EndFrame'::`35'::<lambda_1>_>
                  ::_vftable_;
      puVar19[3] = pFVar9;
      puVar19[4] = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(FScriptContainerElement *)(puVar19 + 5) = local_res20;
      *(FScriptContainerElement *)((longlong)puVar19 + 0x29) = FVar6;
      *(undefined8 *)((longlong)puVar19 + 0x2c) = local_64;
      *(undefined4 *)((longlong)puVar19 + 0x34) = local_5c;
      *(uint *)(puVar19 + 7) = uVar17;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (this_00 == (FNiagaraDataBufferReadback *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    bVar16 = IsInParallelRenderingThread();
    if (!bVar16) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                          ,0x6a,L"");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    lVar11 = *(longlong *)pFVar23;
    pFVar12 = (local_res10->GpuReadbackManagerPtr).Ptr;
    pFVar2 = &local_res10->GPUInstanceCounterManager;
    local_a8 = lVar11;
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 8) == -1) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsBeingWritten()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x26,L"");
        if (bVar16) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    FNiagaraDataBufferReadback::EnqueueReadback
              (this_00,(FRHICommandList *)local_res18,(FNiagaraDataBuffer *)&local_a8,pFVar12,pFVar2
              );
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar8->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    uVar21 = (ulonglong)uVar7;
    pFVar23 = pFVar23 + 0x18;
  } while( true );
}

// EndReadAccess @ 1490f0e40

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
FNiagaraDataChannelDataProxy::EndReadAccess
          (FNiagaraDataChannelDataProxy *this,FRDGBuilder *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x346,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2) {
    if (this->CurrBufferAccessCounts < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrBufferAccessCounts > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0x349,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->CurrBufferAccessCounts = this->CurrBufferAccessCounts + -1;
  }
  return;
}

// EndWriteAccess @ 1490f1e50

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
FNiagaraDataChannelDataProxy::EndWriteAccess
          (FNiagaraDataChannelDataProxy *this,FRDGBuilder *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x314,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (-1 < this->CurrBufferAccessCounts) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrBufferAccessCounts < 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x316,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &this->CurrBufferAccessCounts;
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    AddTransition(this,param_1,UAVCompute,SRVMask,(this->CurrFrameData).Reference);
  }
  return;
}

// OnAddedToDispatcher @ 149119bc0

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
FNiagaraDataChannelDataProxy::OnAddedToDispatcher
          (FNiagaraDataChannelDataProxy *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  this->DispatchInterfaceForDebuggingOnly = param_1;
  return;
}

// OnRemovedFromDispatcher @ 14911a680

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
FNiagaraDataChannelDataProxy::OnRemovedFromDispatcher
          (FNiagaraDataChannelDataProxy *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  FNiagaraGPUInstanceCountManager *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNiagaraDataBuffer *pFVar4;
  longlong lVar5;
  FNDCGpuReadbackInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  if (this->DispatchInterfaceForDebuggingOnly != param_1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatchInterfaceForDebuggingOnly == ComputeDispatchInterface",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x236,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (this->CurrFrameData).Reference;
  this_00 = &param_1->GPUInstanceCounterManager;
  if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
    local_res10[0] = pFVar4->GPUInstanceCountBufferOffset;
    FNiagaraGPUInstanceCountManager::FreeEntry(this_00,local_res10);
    ((this->CurrFrameData).Reference)->GPUInstanceCountBufferOffset = 0xffffffff;
  }
  pFVar4 = (this->PrevFrameData).Reference;
  if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
    local_res18[0] = pFVar4->GPUInstanceCountBufferOffset;
    FNiagaraGPUInstanceCountManager::FreeEntry(this_00,local_res18);
    ((this->PrevFrameData).Reference)->GPUInstanceCountBufferOffset = 0xffffffff;
  }
  iVar3 = (this->PendingGPUReadbackBuffers).ArrayNum;
  pFVar9 = (this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->PendingGPUReadbackBuffers).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNDCGpuReadbackInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    if (*(longlong *)pFVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReadbackInfo.Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0x24b,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_res20[0] = *(uint *)(*(longlong *)pFVar9 + 0x5c);
    bVar8 = IsInParallelRenderingThread();
    if (!bVar8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FNiagaraGPUInstanceCountManager::FreeEntry(this_00,local_res20);
    lVar5 = *(longlong *)pFVar9;
    pFVar9 = pFVar9 + 0x18;
    *(undefined4 *)(lVar5 + 0x5c) = 0xffffffff;
  }
  piVar1 = &(this->PendingGPUReadbackBuffers).ArrayMax;
  pFVar6 = (FNDCGpuReadbackInfo *)(this->PendingGPUReadbackBuffers).AllocatorInstance.Data;
  iVar3 = (this->PendingGPUReadbackBuffers).ArrayNum;
  if (-1 < (this->PendingGPUReadbackBuffers).ArrayMax) {
    DestructItems<FNDCGpuReadbackInfo,int>(pFVar6,iVar3);
    (this->PendingGPUReadbackBuffers).ArrayNum = 0;
    return;
  }
  DestructItems<FNDCGpuReadbackInfo,int>(pFVar6,iVar3);
  (this->PendingGPUReadbackBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PendingGPUReadbackBuffers).AllocatorInstance,0,piVar1);
  }
  return;
}

// PrepareForReadAccess @ 149124b00

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

TRefCountPtr<FNiagaraDataBuffer> __thiscall
FNiagaraDataChannelDataProxy::PrepareForReadAccess
          (FNiagaraDataChannelDataProxy *this,FRDGBuilder *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FNiagaraDataBuffer> TVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  char in_R9B;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0x323,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FNiagaraDataBuffer *)(*pcVar1)();
    return (TRefCountPtr<FNiagaraDataBuffer>)TVar3.Reference;
  }
  if (in_R9B == '\0') {
    pTVar4 = &this->PrevFrameData;
  }
  else {
    pTVar4 = &this->CurrFrameData;
    if ((this->CurrFrameData).Reference == (FNiagaraDataBuffer *)0x0) {
      param_1->_padding_ = 0;
      return (TRefCountPtr<FNiagaraDataBuffer>)(FNiagaraDataBuffer *)param_1;
    }
    if (this->CurrBufferAccessCounts < 0) {
      if ((this->bWarnedAboutSameStageRW == false) &&
         (this->bWarnedAboutSameStageRW = true, 2 < (byte)LogNiagara._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      param_1->_padding_ = 0;
      return (TRefCountPtr<FNiagaraDataBuffer>)(FNiagaraDataBuffer *)param_1;
    }
    this->CurrBufferAccessCounts = this->CurrBufferAccessCounts + 1;
  }
  TRefCountPtr<FNiagaraDataBuffer>::TRefCountPtr<FNiagaraDataBuffer>
            ((TRefCountPtr<FNiagaraDataBuffer> *)param_1,pTVar4);
  return (TRefCountPtr<FNiagaraDataBuffer>)(FNiagaraDataBuffer *)param_1;
}

// PrepareForWriteAccess @ 149124bf0

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

TRefCountPtr<FNiagaraDataBuffer> __thiscall
FNiagaraDataChannelDataProxy::PrepareForWriteAccess
          (FNiagaraDataChannelDataProxy *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FNiagaraDataBuffer> TVar3;
  FNiagaraDataBuffer *pFVar4;
  FRDGBuilder *in_R8;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0x2f3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FNiagaraDataBuffer *)(*pcVar1)();
    return (TRefCountPtr<FNiagaraDataBuffer>)TVar3.Reference;
  }
  pFVar4 = (this->CurrFrameData).Reference;
  if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
    if (0 < this->CurrBufferAccessCounts) {
      if ((this->bWarnedAboutSameStageRW == false) &&
         (this->bWarnedAboutSameStageRW = true, 2 < (byte)LogNiagara._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      param_1->_padding_ = 0;
      return (TRefCountPtr<FNiagaraDataBuffer>)(FNiagaraDataBuffer *)param_1;
    }
    if (this->CurrBufferAccessCounts == 0) {
      AddTransition(this,in_R8,SRVMask,UAVCompute,pFVar4);
      pFVar4 = (this->CurrFrameData).Reference;
    }
    this->CurrBufferAccessCounts = this->CurrBufferAccessCounts + -1;
  }
  param_1->_padding_ = (longlong)pFVar4;
  if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
    if (((int)pFVar4->_padding_ == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsBeingWritten()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x26,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FNiagaraDataBuffer *)(*pcVar1)();
      return (TRefCountPtr<FNiagaraDataBuffer>)TVar3.Reference;
    }
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<FNiagaraDataBuffer>)(FNiagaraDataBuffer *)param_1;
}

// Reset @ 14912b760

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

void __thiscall FNiagaraDataChannelDataProxy::Reset(FNiagaraDataChannelDataProxy *this)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->PrevFrameData).Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    (this->PrevFrameData).Reference = (FNiagaraDataBuffer *)0x0;
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
  return;
}

