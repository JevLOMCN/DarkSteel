// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// Allocate @ 145d11b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGlobalDynamicVertexBufferAllocation * __thiscall
FGlobalDynamicVertexBuffer::Allocate
          (FGlobalDynamicVertexBuffer *this,
          FGlobalDynamicVertexBufferAllocation *__return_storage_ptr__,uint param_1)

{
  TArray<TDynamicBuffer<FVertexBuffer>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FVertexBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FGlobalDynamicVertexBufferAllocation *pFVar9;
  TDynamicBuffer<FVertexBuffer> *pTVar10;
  uint uVar11;
  
  if (this->RHICmdList == (FRHICommandListBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHICmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                       ,0x3db,
                       L"FGlobalDynamicVertexBuffer was not initialized prior to calling Allocate.")
    ;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGlobalDynamicVertexBufferAllocation *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (this->VertexBuffers).ArrayNum;
  pTVar1 = &this->VertexBuffers;
  __return_storage_ptr__->Buffer = (uchar *)0x0;
  __return_storage_ptr__->VertexBuffer = (FVertexBuffer *)0x0;
  __return_storage_ptr__->VertexOffset = 0;
  if (iVar8 != 0) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FGlobalDynamicVertexBufferAllocation *)(*pcVar5)();
        return pFVar9;
      }
    }
    iVar8 = (this->VertexBuffers).ArrayNum;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    uVar11 = iVar8 - 1;
    uVar7 = 0;
    if ((int)uVar11 < iVar8) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FGlobalDynamicVertexBufferAllocation *)(*pcVar5)();
        return pFVar9;
      }
    }
    if (*(int *)(*(longlong *)(pFVar3 + (longlong)(int)uVar11 * 8) + 0x34) + param_1 <=
        *(uint *)(*(longlong *)
                   ((pTVar1->AllocatorInstance).Data +
                   (longlong)(this->VertexBuffers).ArrayNum * 8 + -8) + 0x30)) goto LAB_145d11ceb;
  }
  pTVar10 = TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::Acquire
                      ((TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_> *)
                       &GDynamicVertexBufferPool,this->RHICmdList,param_1,0);
  piVar2 = &(this->VertexBuffers).ArrayMax;
  iVar8 = (this->VertexBuffers).ArrayNum;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
    (this->VertexBuffers).ArrayNum = iVar8;
  }
  (this->VertexBuffers).ArrayNum = iVar8 + 1;
  *(TDynamicBuffer<FVertexBuffer> **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       pTVar10;
LAB_145d11ceb:
  iVar8 = (this->VertexBuffers).ArrayNum;
  uVar11 = iVar8 - 1;
  uVar7 = 0;
  if ((int)uVar11 < iVar8) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGlobalDynamicVertexBufferAllocation *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar4 = *(FVertexBuffer **)
            ((pTVar1->AllocatorInstance).Data + (longlong)(this->VertexBuffers).ArrayNum * 8 + -8);
  if ((uint)pFVar4[1]._padding_ < *(int *)((longlong)&pFVar4[1]._padding_ + 4) + param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBuffer->AllocatedByteCount + SizeInBytes <= VertexBuffer->BufferSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                       ,0x3e6,
                       L"Global vertex buffer allocation failed: BufferSize=%d AllocatedByteCount=%d SizeInBytes=%d"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGlobalDynamicVertexBufferAllocation *)(*pcVar5)();
      return pFVar9;
    }
  }
  uVar7 = *(uint *)((longlong)&pFVar4[1]._padding_ + 4);
  __return_storage_ptr__->VertexBuffer = pFVar4;
  __return_storage_ptr__->Buffer = (uchar *)((ulonglong)uVar7 + pFVar4[1]._padding_);
  __return_storage_ptr__->VertexOffset = uVar7;
  *(uint *)((longlong)&pFVar4[1]._padding_ + 4) = (param_1 + 0xf & 0xfffffff0) + uVar7;
  return __return_storage_ptr__;
}

// Commit @ 145d14390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGlobalDynamicVertexBuffer::Commit(FGlobalDynamicVertexBuffer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<TDynamicBuffer<FVertexBuffer>_*_const,int> local_18;
  
  if (this->RHICmdList != (FRHICommandListBase *)0x0) {
    pFVar2 = (this->VertexBuffers).AllocatorInstance.Data;
    iVar1 = (this->VertexBuffers).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar1;
    local_18.DataPtr = (TDynamicBuffer<FVertexBuffer> **)pFVar2;
    TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::Forfeit
              ((TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_> *)&GDynamicVertexBufferPool,
               this->RHICmdList,&local_18);
    (this->VertexBuffers).ArrayNum = 0;
    if ((this->VertexBuffers).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->VertexBuffers).AllocatorInstance,0,&(this->VertexBuffers).ArrayMax);
    }
  }
  return;
}

// IsRenderAlarmLoggingEnabled @ 145d44af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(FGlobalDynamicVertexBuffer *this)

{
  if ((0 < GMaxVertexBytesAllocatedPerFrame) &&
     ((ulonglong)(longlong)GMaxVertexBytesAllocatedPerFrame <=
      (ulonglong)(uint)GDynamicVertexBufferPool._104_4_)) {
    return true;
  }
  return false;
}

