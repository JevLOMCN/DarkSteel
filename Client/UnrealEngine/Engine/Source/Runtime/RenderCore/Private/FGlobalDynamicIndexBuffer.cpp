// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Allocate @ 145d118d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGlobalDynamicIndexBufferAllocation * __thiscall
FGlobalDynamicIndexBuffer::Allocate
          (FGlobalDynamicIndexBuffer *this,
          FGlobalDynamicIndexBufferAllocation *__return_storage_ptr__,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FIndexBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FGlobalDynamicIndexBufferAllocation *pFVar8;
  TDynamicBuffer<FIndexBuffer> *pTVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  uint uVar13;
  
  if ((this->RHICmdList == (FRHICommandListBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHICmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x400,
                         L"FGlobalDynamicIndexBuffer was not initialized prior to calling Allocate."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FGlobalDynamicIndexBufferAllocation *)(*pcVar4)();
    return pFVar8;
  }
  __return_storage_ptr__->Buffer = (uchar *)0x0;
  __return_storage_ptr__->IndexBuffer = (FIndexBuffer *)0x0;
  __return_storage_ptr__->FirstIndex = 0;
  if ((param_2 - 2 & 0xfffffffd) != 0) {
    return __return_storage_ptr__;
  }
  uVar13 = param_1 * param_2;
  lVar11 = 8;
  if (param_2 != 2) {
    lVar11 = 0x18;
  }
  pFVar12 = (ForAnyElementType *)((longlong)&this->RHICmdList + lVar11);
  iVar7 = *(int *)&pFVar12[1].Data;
  if (iVar7 != 0) {
    uVar6 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar6 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FGlobalDynamicIndexBufferAllocation *)(*pcVar4)();
      return pFVar8;
    }
    pFVar2 = pFVar12->Data;
    uVar10 = *(int *)&pFVar12[1].Data - 1;
    uVar6 = 0;
    if ((int)uVar10 < *(int *)&pFVar12[1].Data) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FGlobalDynamicIndexBufferAllocation *)(*pcVar4)();
      return pFVar8;
    }
    if (*(int *)(*(longlong *)(pFVar2 + (longlong)(int)uVar10 * 8) + 0x34) + uVar13 <=
        *(uint *)(*(longlong *)(pFVar12->Data + (longlong)*(int *)&pFVar12[1].Data * 8 + -8) + 0x30)
       ) goto LAB_145d11a69;
  }
  pTVar9 = TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::Acquire
                     ((TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *)&GDynamicIndexBufferPool,
                      this->RHICmdList,uVar13,param_2);
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  iVar7 = *(int *)&pFVar12[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar12,piVar1);
  }
  *(int *)&pFVar12[1].Data = iVar7 + 1;
  *(TDynamicBuffer<FIndexBuffer> **)(pFVar12->Data + (longlong)iVar7 * 8) = pTVar9;
LAB_145d11a69:
  uVar10 = *(int *)&pFVar12[1].Data - 1;
  uVar6 = 0;
  if ((int)uVar10 < *(int *)&pFVar12[1].Data) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FGlobalDynamicIndexBufferAllocation *)(*pcVar4)();
    return pFVar8;
  }
  pFVar3 = *(FIndexBuffer **)(pFVar12->Data + (longlong)*(int *)&pFVar12[1].Data * 8 + -8);
  if (((uint)pFVar3[1]._padding_ < *(int *)((longlong)&pFVar3[1]._padding_ + 4) + uVar13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexBuffer->AllocatedByteCount + SizeInBytes <= IndexBuffer->BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x416,
                         L"Global index buffer allocation failed: BufferSize=%d BufferStride=%d AllocatedByteCount=%d SizeInBytes=%d"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FGlobalDynamicIndexBufferAllocation *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)((longlong)&pFVar3[1]._padding_ + 4);
  __return_storage_ptr__->IndexBuffer = pFVar3;
  __return_storage_ptr__->Buffer = (uchar *)((ulonglong)uVar6 + pFVar3[1]._padding_);
  __return_storage_ptr__->FirstIndex = uVar6 / param_2;
  *(uint *)((longlong)&pFVar3[1]._padding_ + 4) = (uVar13 + 0xf & 0xfffffff0) + uVar6;
  return __return_storage_ptr__;
}

// Commit @ 145d14160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGlobalDynamicIndexBuffer::Commit(FGlobalDynamicIndexBuffer *this)

{
  TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> *pTVar1;
  TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> local_28;
  TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> local_18;
  
  if (this->RHICmdList != (FRHICommandListBase *)0x0) {
    pTVar1 = TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int>::
             TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int><TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_&,TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&this->IndexBuffers16);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::Forfeit
              ((TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *)&GDynamicIndexBufferPool,
               this->RHICmdList,&local_28);
    pTVar1 = TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int>::
             TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int><TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_&,TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&this->IndexBuffers32);
    local_28.DataPtr = pTVar1->DataPtr;
    local_28.ArrayNum = pTVar1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::Forfeit
              ((TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *)&GDynamicIndexBufferPool,
               this->RHICmdList,&local_28);
    (this->IndexBuffers16).ArrayNum = 0;
    if ((this->IndexBuffers16).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->IndexBuffers16).AllocatorInstance,0,&(this->IndexBuffers16).ArrayMax)
      ;
    }
    (this->IndexBuffers32).ArrayNum = 0;
    if ((this->IndexBuffers32).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->IndexBuffers32).AllocatorInstance,0,&(this->IndexBuffers32).ArrayMax)
      ;
    }
  }
  return;
}

