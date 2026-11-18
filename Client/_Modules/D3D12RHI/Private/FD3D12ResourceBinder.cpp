// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// SetResourceCollection @ 1459d9210

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12ResourceBinder::SetResourceCollection
          (FD3D12ResourceBinder *this,FRHIResourceCollection *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  EShaderFrequency EVar3;
  int iVar4;
  longlong lVar5;
  FD3D12CommandContext *pFVar6;
  void *_Src;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 local_res8 [8];
  
  if (this->bBindlessResources == false) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x256,L"");
    if (!bVar9) {
      return;
    }
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (param_1 == (FRHIResourceCollection *)0x0) {
    return;
  }
  lVar5 = (&param_1[1]._padding_)[this->GpuIndex];
  if (lVar5 == 0) {
    return;
  }
  FD3D12StateCache::QueueBindlessSRV
            (&this->Context->StateCache,this->Frequency,*(FD3D12ShaderResourceView **)(lVar5 + 0x80)
            );
  iVar4 = *(int *)(lVar5 + 0x98);
  pFVar6 = this->Context;
  _Src = *(void **)(lVar5 + 0x90);
  if ((iVar4 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar13 = (pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs + this->Frequency;
  if (iVar4 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (iVar4 == 0) goto LAB_1459d9346;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar4,&pTVar13->AllocatorInstance,&pTVar13->ArrayNum,&pTVar13->ArrayMax);
  memcpy((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 8,_Src,(longlong)iVar4 << 3);
LAB_1459d9346:
  plVar12 = *(longlong **)(lVar5 + 0xa0);
  iVar4 = *(int *)(lVar5 + 0xa8);
  plVar2 = plVar12 + iVar4;
  while( true ) {
    if (*(int *)(lVar5 + 0xa8) != iVar4) {
      `TCheckedPointerIterator<FD3D12RHITextureReference_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar12 == plVar2) break;
    if (((longlong *)*plVar12 != (longlong *)0x0) &&
       (lVar11 = (**(code **)(*(longlong *)*plVar12 + 0x48))(), lVar11 != 0)) {
      EVar3 = this->Frequency;
      uVar7 = *(undefined8 *)(lVar11 + 0x240);
      pFVar6 = this->Context;
      iVar10 = (pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].ArrayNum;
      piVar1 = &(pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                   [EVar3].AllocatorInstance,piVar1);
      }
      (pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].ArrayNum = iVar10 + 1;
      *(undefined8 *)
       (*(longlong *)
         &(pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].AllocatorInstance +
       (longlong)iVar10 * 8) = uVar7;
    }
    plVar12 = plVar12 + 1;
  }
  return;
}

// SetSRV @ 1459d9af0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12ResourceBinder::SetSRV
          (FD3D12ResourceBinder *this,FRHIShaderResourceView *param_1,uint param_2)

{
  int *piVar1;
  EShaderFrequency EVar2;
  FD3D12CommandContext *pFVar3;
  int iVar4;
  FD3D12ShaderResourceView *pFVar5;
  FD3D12ShaderResourceView *pFVar6;
  FD3D12ShaderResourceView *pFVar7;
  
  pFVar7 = (FD3D12ShaderResourceView *)0x0;
  pFVar5 = pFVar7;
  if (param_1 != (FRHIShaderResourceView *)0x0) {
    pFVar5 = *(FD3D12ShaderResourceView **)(&param_1[4].field_0x10 + (ulonglong)this->GpuIndex * 8);
  }
  pFVar3 = this->Context;
  if (this->bBindlessResources == false) {
    pFVar6 = (FD3D12ShaderResourceView *)&pFVar5->_padding_;
    if (pFVar5 == (FD3D12ShaderResourceView *)0x0) {
      pFVar6 = pFVar7;
    }
    FD3D12StateCache::SetShaderResourceView(&pFVar3->StateCache,this->Frequency,pFVar6,param_2);
    return;
  }
  EVar2 = this->Frequency;
  pFVar6 = (FD3D12ShaderResourceView *)&pFVar5->_padding_;
  if (pFVar5 == (FD3D12ShaderResourceView *)0x0) {
    pFVar6 = pFVar7;
  }
  iVar4 = (pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayNum;
  piVar1 = &(pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].
                              AllocatorInstance,piVar1);
  }
  (pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayNum = iVar4 + 1;
  *(FD3D12ShaderResourceView **)
   (*(longlong *)
     &(pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].AllocatorInstance +
   (longlong)iVar4 * 8) = pFVar6;
  return;
}

// SetSampler @ 1459d9d30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12ResourceBinder::SetSampler(FD3D12ResourceBinder *this,FRHISamplerState *param_1,uint param_2)

{
  FD3D12CommandContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_1 == (FRHISamplerState *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(&param_1[1].field_0x10 + (ulonglong)this->GpuIndex * 8);
  }
  if (this->bBindlessSamplers == false) {
    pFVar1 = this->Context;
    uVar4 = (ulonglong)this->Frequency;
    if ((0x1f < param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SamplerIndex < 32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                           ,0x20d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)
         ((longlong)((pFVar1->StateCache).PipelineState.Common.SamplerCache.States + uVar4) +
         (ulonglong)param_2 * 8) != lVar5) {
      *(longlong *)
       ((longlong)((pFVar1->StateCache).PipelineState.Common.SamplerCache.States + uVar4) +
       (ulonglong)param_2 * 8) = lVar5;
      *(uint *)((longlong)
                ((FD3D12SamplerStateCache *)
                (&(pFVar1->StateCache).PipelineState.Common.UAVCache + 1))->States +
               uVar4 * 4 + 0xffffffffffffffe8) =
           *(uint *)((longlong)
                     ((FD3D12SamplerStateCache *)
                     (&(pFVar1->StateCache).PipelineState.Common.UAVCache + 1))->States +
                    uVar4 * 4 + 0xffffffffffffffe8) | 1 << (param_2 & 0x1f);
    }
  }
  return;
}

// SetTexture @ 1459daf60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12ResourceBinder::SetTexture(FD3D12ResourceBinder *this,FRHITexture *param_1,uint param_2)

{
  int *piVar1;
  EShaderFrequency EVar2;
  uint uVar3;
  FD3D12CommandContext *pFVar4;
  int iVar5;
  longlong lVar6;
  FD3D12ShaderResourceView *pFVar7;
  
  uVar3 = this->GpuIndex;
  if (param_1 != (FRHITexture *)0x0) {
    lVar6 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x200 + (ulonglong)uVar3 * 8), lVar6 != 0)) {
      pFVar7 = *(FD3D12ShaderResourceView **)(lVar6 + 0x240);
      goto LAB_1459dafa3;
    }
  }
  pFVar7 = (FD3D12ShaderResourceView *)0x0;
LAB_1459dafa3:
  EVar2 = this->Frequency;
  pFVar4 = this->Context;
  if (this->bBindlessResources != false) {
    iVar5 = (pFVar4->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayNum;
    piVar1 = &(pFVar4->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar4->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].
                                AllocatorInstance,piVar1);
    }
    (pFVar4->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayNum = iVar5 + 1;
    *(FD3D12ShaderResourceView **)
     (*(longlong *)
       &(pFVar4->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].AllocatorInstance +
     (longlong)iVar5 * 8) = pFVar7;
    return;
  }
  FD3D12StateCache::SetShaderResourceView(&pFVar4->StateCache,EVar2,pFVar7,param_2);
  return;
}

