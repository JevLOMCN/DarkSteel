// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// SetResourceCollection @ 145ab9130

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
FWorkGraphShaderBundleBinder::SetResourceCollection
          (FWorkGraphShaderBundleBinder *this,FRHIResourceCollection *param_1,uint param_2)

{
  int *piVar1;
  EShaderFrequency EVar2;
  FD3D12CommandContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((param_1 == (FRHIResourceCollection *)0x0) || ((&param_1[1]._padding_)[this->GPUIndex] == 0))
  {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)((&param_1[1]._padding_)[this->GPUIndex] + 0x80);
  }
  if (this->bBindlessResources == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bBindlessResources",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x1da,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (this->bBindlessResources == false) {
      return;
    }
  }
  EVar2 = this->Frequency;
  pFVar3 = this->Context;
  iVar6 = (pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayNum;
  piVar1 = &(pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].
                              AllocatorInstance,piVar1);
  }
  (pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].ArrayNum = iVar6 + 1;
  *(undefined8 *)
   (*(longlong *)
     &(pFVar3->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar2].AllocatorInstance +
   (longlong)iVar6 * 8) = uVar7;
  return;
}

// SetSRV @ 145ab91f0

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
FWorkGraphShaderBundleBinder::SetSRV
          (FWorkGraphShaderBundleBinder *this,FRHIShaderResourceView *param_1,uint param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  FD3D12ShaderResourceView *pFVar5;
  FD3D12ShaderResourceView *pFVar6;
  
  uVar2 = (ulonglong)param_2;
  pFVar6 = (FD3D12ShaderResourceView *)0x0;
  if (((param_1 == (FRHIShaderResourceView *)0x0) ||
      (pFVar6 = *(FD3D12ShaderResourceView **)
                 (&param_1[4].field_0x10 + (ulonglong)this->GPUIndex * 8),
      pFVar6 == (FD3D12ShaderResourceView *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SRV != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                         ,0x1aa,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->bBindlessResources == false) {
    if ((pFVar6->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = *(uint *)((longlong)&pFVar6->_padding_ + 4);
    this->LocalSRVs[uVar2].ptr = pFVar6->_padding_;
    this->SRVVersions[uVar2] = uVar3;
    this->BoundSRVMask = this->BoundSRVMask | 1L << (uVar2 & 0x3f);
  }
  pFVar5 = (FD3D12ShaderResourceView *)&pFVar6->_padding_;
  if (pFVar6 == (FD3D12ShaderResourceView *)0x0) {
    pFVar5 = (FD3D12ShaderResourceView *)0x0;
  }
  FShaderBundleBinderOps::AddResourceTransition(this->BinderOps,pFVar5);
  return;
}

// SetTexture @ 145ab9690

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
FWorkGraphShaderBundleBinder::SetTexture
          (FWorkGraphShaderBundleBinder *this,FRHITexture *param_1,uint param_2)

{
  uint uVar1;
  FD3D12ShaderResourceView *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  
  uVar1 = this->GPUIndex;
  uVar4 = (ulonglong)param_2;
  if (param_1 != (FRHITexture *)0x0) {
    lVar6 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (lVar6 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x200 + (ulonglong)uVar1 * 8);
      goto LAB_145ab96c7;
    }
  }
  lVar6 = 0;
LAB_145ab96c7:
  pFVar2 = *(FD3D12ShaderResourceView **)(lVar6 + 0x240);
  if (pFVar2 == (FD3D12ShaderResourceView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SRV != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x1ba,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bBindlessResources == false) {
    if (pFVar2->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0x103,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1 = *(uint *)((longlong)&pFVar2->_padding_ + 4);
    this->LocalSRVs[uVar4].ptr = pFVar2->_padding_;
    this->SRVVersions[uVar4] = uVar1;
    this->BoundSRVMask = this->BoundSRVMask | 1L << (uVar4 & 0x3f);
  }
  FShaderBundleBinderOps::AddResourceTransition(this->BinderOps,pFVar2);
  return;
}

