// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// SetResourceCollection @ 145ab8f10

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
FD3D12BindlessConstantSetter::SetResourceCollection
          (FD3D12BindlessConstantSetter *this,FRHIResourceCollection *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  EShaderFrequency EVar3;
  longlong lVar4;
  undefined8 uVar5;
  FD3D12CommandContext *pFVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 local_res10 [8];
  
  if (param_1 == (FRHIResourceCollection *)0x0) {
    return;
  }
  lVar4 = (&param_1[1]._padding_)[this->GpuIndex];
  if (lVar4 == 0) {
    return;
  }
  EVar3 = this->Frequency;
  uVar5 = *(undefined8 *)(lVar4 + 0x80);
  pFVar6 = this->Context;
  iVar9 = (pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].ArrayNum;
  piVar1 = &(pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].
                              AllocatorInstance,piVar1);
  }
  (pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].ArrayNum = iVar9 + 1;
  *(undefined8 *)
   (*(longlong *)
     &(pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs[EVar3].AllocatorInstance +
   (longlong)iVar9 * 8) = uVar5;
  iVar9 = *(int *)(lVar4 + 0x98);
  pFVar6 = this->Context;
  _Src = *(void **)(lVar4 + 0x90);
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = (pFVar6->StateCache).PipelineState.Common.QueuedBindlessSRVs + this->Frequency;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar9 == 0) goto LAB_145ab9070;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar9,&pTVar13->AllocatorInstance,&pTVar13->ArrayNum,&pTVar13->ArrayMax);
  memcpy((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 8,_Src,(longlong)iVar9 << 3);
LAB_145ab9070:
  plVar12 = *(longlong **)(lVar4 + 0xa0);
  iVar9 = *(int *)(lVar4 + 0xa8);
  plVar2 = plVar12 + iVar9;
  while( true ) {
    if (*(int *)(lVar4 + 0xa8) != iVar9) {
      `TCheckedPointerIterator<FD3D12RHITextureReference_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar12 == plVar2) break;
    if (((longlong *)*plVar12 != (longlong *)0x0) &&
       (lVar11 = (**(code **)(*(longlong *)*plVar12 + 0x48))(), lVar11 != 0)) {
      EVar3 = this->Frequency;
      uVar5 = *(undefined8 *)(lVar11 + 0x240);
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
       (longlong)iVar10 * 8) = uVar5;
    }
    plVar12 = plVar12 + 1;
  }
  return;
}

