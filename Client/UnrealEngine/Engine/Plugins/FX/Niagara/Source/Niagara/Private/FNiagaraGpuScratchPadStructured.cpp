// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// Alloc @ 14902d070

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocation * __thiscall
FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Alloc
          (FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace> *this,
          FAllocation *__return_storage_ptr__,FRHICommandListBase *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  FRWBufferStructured *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FRWBufferStructured *this_00;
  FAllocation *pFVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res20 [8];
  FRWBufferStructured *local_78;
  FScriptContainerElement *local_70;
  int *piStack_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  
  pFVar13 = (this->Buffers).Array.AllocatorInstance.Data;
  piVar1 = &(this->Buffers).Array.ArrayNum;
  iVar8 = *piVar1;
  this_00 = (FRWBufferStructured *)0x0;
  local_60 = CONCAT44(uStack_44,iVar8);
  pFVar4 = pFVar13 + (longlong)iVar8 * 8;
  local_70 = pFVar13;
  piStack_68 = piVar1;
  local_58 = pFVar13;
  piStack_50 = piVar1;
  local_48 = iVar8;
  while( true ) {
    if (*piVar1 != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
      ;
    }
    if (pFVar13 == pFVar4) break;
    pFVar3 = *(FRWBufferStructured **)pFVar13;
    if (*(int *)&pFVar3[1].Buffer.Reference + param_2 < pFVar3->NumBytes >> 5) {
      this_00 = pFVar3;
    }
    pFVar13 = pFVar13 + 8;
  }
  if (this_00 == (FRWBufferStructured *)0x0) {
    local_70 = pFVar13;
    this_00 = ::operator_new(0x28);
    if (this_00 == (FRWBufferStructured *)0x0) {
      this_00 = (FRWBufferStructured *)0x0;
    }
    else {
      *(undefined8 *)&this_00->NumBytes = 0;
      this_00[1].Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->Buffer).Reference = (FRHIBuffer *)0x0;
      (this_00->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->SRV).Reference = (FRHIShaderResourceView *)0x0;
    }
    pFVar4 = (this->Buffers).Array.AllocatorInstance.Data;
    local_78 = this_00;
    if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Buffers).Array.ArrayMax * 8
       )) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FAllocation *)(*pcVar6)();
        return pFVar10;
      }
    }
    iVar8 = (this->Buffers).Array.ArrayNum;
    piVar1 = &(this->Buffers).Array.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->Buffers,piVar1);
    }
    (this->Buffers).Array.ArrayNum = iVar8 + 1;
    *(FRWBufferStructured **)((this->Buffers).Array.AllocatorInstance.Data + (longlong)iVar8 * 8) =
         local_78;
    uVar11 = param_2;
    if (param_2 < this->MinBucketSize) {
      uVar11 = this->MinBucketSize;
    }
    uVar9 = 1;
    if (uVar11 != 0) {
      uVar9 = uVar11;
    }
    uVar2 = (ulonglong)(uVar9 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    if ((this->DebugName).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
    }
    FRWBufferStructured::Initialize
              (this_00,param_1,pwVar12,0x20,1 << ((byte)lVar5 & 0x1f),this->BufferUsageFlags,false,
               false,this->CurrentAccess);
    this->NumAllocatedBytes = this->NumAllocatedBytes + this_00->NumBytes;
  }
  uVar11 = *(uint *)&this_00[1].Buffer.Reference;
  __return_storage_ptr__->Offset = uVar11;
  *(uint *)&this_00[1].Buffer.Reference = uVar11 + param_2;
  this->NumUsedBytes = this->NumUsedBytes + param_2 * 0x20;
  __return_storage_ptr__->Buffer = this_00;
  return __return_storage_ptr__;
}

// Alloc @ 14902d2b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocation * __thiscall
FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Alloc
          (FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult> *this,
          FAllocation *__return_storage_ptr__,FRHICommandListBase *param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  FRWBufferStructured *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FRWBufferStructured *this_00;
  FAllocation *pFVar10;
  uint uVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res20 [8];
  FRWBufferStructured *local_78;
  FScriptContainerElement *local_70;
  int *piStack_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  
  pFVar13 = (this->Buffers).Array.AllocatorInstance.Data;
  piVar1 = &(this->Buffers).Array.ArrayNum;
  iVar8 = *piVar1;
  this_00 = (FRWBufferStructured *)0x0;
  local_60 = CONCAT44(uStack_44,iVar8);
  pFVar4 = pFVar13 + (longlong)iVar8 * 8;
  local_70 = pFVar13;
  piStack_68 = piVar1;
  local_58 = pFVar13;
  piStack_50 = piVar1;
  local_48 = iVar8;
  while( true ) {
    if (*piVar1 != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
      ;
    }
    if (pFVar13 == pFVar4) break;
    pFVar3 = *(FRWBufferStructured **)pFVar13;
    if (*(int *)&pFVar3[1].Buffer.Reference + param_2 < pFVar3->NumBytes >> 5) {
      this_00 = pFVar3;
    }
    pFVar13 = pFVar13 + 8;
  }
  if (this_00 == (FRWBufferStructured *)0x0) {
    local_70 = pFVar13;
    this_00 = ::operator_new(0x28);
    if (this_00 == (FRWBufferStructured *)0x0) {
      this_00 = (FRWBufferStructured *)0x0;
    }
    else {
      *(undefined8 *)&this_00->NumBytes = 0;
      this_00[1].Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->Buffer).Reference = (FRHIBuffer *)0x0;
      (this_00->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
      (this_00->SRV).Reference = (FRHIShaderResourceView *)0x0;
    }
    pFVar4 = (this->Buffers).Array.AllocatorInstance.Data;
    local_78 = this_00;
    if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)(this->Buffers).Array.ArrayMax * 8
       )) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FAllocation *)(*pcVar6)();
        return pFVar10;
      }
    }
    iVar8 = (this->Buffers).Array.ArrayNum;
    piVar1 = &(this->Buffers).Array.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->Buffers,piVar1);
    }
    (this->Buffers).Array.ArrayNum = iVar8 + 1;
    *(FRWBufferStructured **)((this->Buffers).Array.AllocatorInstance.Data + (longlong)iVar8 * 8) =
         local_78;
    uVar11 = param_2;
    if (param_2 < this->MinBucketSize) {
      uVar11 = this->MinBucketSize;
    }
    uVar9 = 1;
    if (uVar11 != 0) {
      uVar9 = uVar11;
    }
    uVar2 = (ulonglong)(uVar9 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    if ((this->DebugName).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
    }
    FRWBufferStructured::Initialize
              (this_00,param_1,pwVar12,0x20,1 << ((byte)lVar5 & 0x1f),this->BufferUsageFlags,false,
               false,this->CurrentAccess);
    this->NumAllocatedBytes = this->NumAllocatedBytes + this_00->NumBytes;
  }
  uVar11 = *(uint *)&this_00[1].Buffer.Reference;
  __return_storage_ptr__->Offset = uVar11;
  *(uint *)&this_00[1].Buffer.Reference = uVar11 + param_2;
  this->NumUsedBytes = this->NumUsedBytes + param_2 * 0x20;
  __return_storage_ptr__->Buffer = this_00;
  return __return_storage_ptr__;
}

// Reset @ 149063d80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Reset
          (FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Buffers).Array.ArrayNum;
  pFVar4 = (this->Buffers).Array.AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Buffers).Array.ArrayNum != iVar2) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    pFVar4 = pFVar4 + 8;
    *(undefined4 *)(lVar3 + 0x20) = 0;
  }
  this->NumUsedBytes = 0;
  return;
}

// Reset @ 149063e30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Reset
          (FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Buffers).Array.ArrayNum;
  pFVar4 = (this->Buffers).Array.AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Buffers).Array.ArrayNum != iVar2) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    pFVar4 = pFVar4 + 8;
    *(undefined4 *)(lVar3 + 0x20) = 0;
  }
  this->NumUsedBytes = 0;
  return;
}

// Transition @ 14906c650

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Transition
          (FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace> *this,FRHICommandList *param_1,
          ERHIAccess param_2,ERHIAccess param_3,EResourceTransitionFlags param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ForElementType<FRHITransitionInfo> FVar8;
  bool *pbVar9;
  FRHITransitionInfo *pFVar10;
  undefined1 local_res8 [8];
  FRHICommandList *local_res10;
  ERHIAccess local_res18;
  ERHIAccess local_res20;
  ForElementType<FRHITransitionInfo> local_a8;
  int local_a0;
  int local_9c;
  FRHITransitionInfo *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  int local_78;
  undefined4 uStack_74;
  FRHITransitionInfo *local_68;
  int *piStack_60;
  undefined8 local_58;
  
  uVar1 = (this->Buffers).Array.ArrayNum;
  this->CurrentAccess = param_3;
  local_a0 = 0;
  local_a8.Data = (FRHITransitionInfo *)0x0;
  local_9c = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
              (0x30,8,uVar1,&local_a8,0,&local_9c);
  }
  iVar2 = (this->Buffers).Array.ArrayNum;
  local_88._8_8_ = &(this->Buffers).Array.ArrayNum;
  pFVar10 = (FRHITransitionInfo *)(this->Buffers).Array.AllocatorInstance.Data;
  plVar5 = &pFVar10->_padding_;
  local_58 = CONCAT44(uStack_74,iVar2);
  FVar8.Data = local_a8.Data;
  local_88._0_8_ = pFVar10;
  local_78 = iVar2;
  local_68 = pFVar10;
  piStack_60 = (int *)local_88._8_8_;
  while( true ) {
    iVar7 = local_a0;
    if (*piStack_60 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == (FRHITransitionInfo *)(plVar5 + iVar2)) break;
    lVar3 = pFVar10->_padding_;
    if (iVar7 == local_9c) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                        (0x830,&local_a8,&local_9c);
      FVar8.Data = local_a8.Data;
    }
    local_a0 = iVar7 + 1;
    pFVar10 = (FRHITransitionInfo *)&pFVar10->field1_0x8;
    FVar8.Data[iVar7].field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar3 + 8);
    FVar8.Data[iVar7].AccessBefore = local_res18;
    FVar8.Data[iVar7].AccessAfter = local_res20;
    FVar8.Data[iVar7].Flags = param_4;
    *(undefined4 *)&FVar8.Data[iVar7]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&FVar8.Data[iVar7]._padding_ + 4) = 0xffff;
    FVar8.Data[iVar7].Type = UAV;
    FVar8.Data[iVar7].CommitInfo.bIsSet = false;
  }
  local_98 = FVar8.Data;
  local_68 = pFVar10;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_88._12_4_ = uStack_8c;
  local_88._8_4_ = iVar7;
  local_88._0_8_ = local_98;
  iStack_90 = iVar7;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)local_res10,
             (TArrayView<FRHITransitionInfo_const_,int> *)local_88,None);
  if (FVar8.Data != (FRHITransitionInfo *)0x0) {
    pbVar9 = &FVar8.Data[-1].CommitInfo.bIsSet;
    MemoryTrace_Free((ulong64)pbVar9,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pbVar9,FMalloc,true);
    }
    pbVar9 = pbVar9 + -(ulonglong)*(uint *)pbVar9;
    LOCK();
    iVar2 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(pbVar9 + 0x40);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)pbVar9,0,0);
      if (lVar3 - (longlong)pbVar9 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,pbVar9);
        return;
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pbVar9);
    }
  }
  return;
}

// Transition @ 14906c8e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Transition
          (FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult> *this,
          FRHICommandList *param_1,ERHIAccess param_2,ERHIAccess param_3,
          EResourceTransitionFlags param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ForElementType<FRHITransitionInfo> FVar8;
  bool *pbVar9;
  FRHITransitionInfo *pFVar10;
  undefined1 local_res8 [8];
  FRHICommandList *local_res10;
  ERHIAccess local_res18;
  ERHIAccess local_res20;
  ForElementType<FRHITransitionInfo> local_a8;
  int local_a0;
  int local_9c;
  FRHITransitionInfo *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  int local_78;
  undefined4 uStack_74;
  FRHITransitionInfo *local_68;
  int *piStack_60;
  undefined8 local_58;
  
  uVar1 = (this->Buffers).Array.ArrayNum;
  this->CurrentAccess = param_3;
  local_a0 = 0;
  local_a8.Data = (FRHITransitionInfo *)0x0;
  local_9c = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
              (0x30,8,uVar1,&local_a8,0,&local_9c);
  }
  iVar2 = (this->Buffers).Array.ArrayNum;
  local_88._8_8_ = &(this->Buffers).Array.ArrayNum;
  pFVar10 = (FRHITransitionInfo *)(this->Buffers).Array.AllocatorInstance.Data;
  plVar5 = &pFVar10->_padding_;
  local_58 = CONCAT44(uStack_74,iVar2);
  FVar8.Data = local_a8.Data;
  local_88._0_8_ = pFVar10;
  local_78 = iVar2;
  local_68 = pFVar10;
  piStack_60 = (int *)local_88._8_8_;
  while( true ) {
    iVar7 = local_a0;
    if (*piStack_60 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == (FRHITransitionInfo *)(plVar5 + iVar2)) break;
    lVar3 = pFVar10->_padding_;
    if (iVar7 == local_9c) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                        (0x830,&local_a8,&local_9c);
      FVar8.Data = local_a8.Data;
    }
    local_a0 = iVar7 + 1;
    pFVar10 = (FRHITransitionInfo *)&pFVar10->field1_0x8;
    FVar8.Data[iVar7].field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar3 + 8);
    FVar8.Data[iVar7].AccessBefore = local_res18;
    FVar8.Data[iVar7].AccessAfter = local_res20;
    FVar8.Data[iVar7].Flags = param_4;
    *(undefined4 *)&FVar8.Data[iVar7]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&FVar8.Data[iVar7]._padding_ + 4) = 0xffff;
    FVar8.Data[iVar7].Type = UAV;
    FVar8.Data[iVar7].CommitInfo.bIsSet = false;
  }
  local_98 = FVar8.Data;
  local_68 = pFVar10;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_88._12_4_ = uStack_8c;
  local_88._8_4_ = iVar7;
  local_88._0_8_ = local_98;
  iStack_90 = iVar7;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)local_res10,
             (TArrayView<FRHITransitionInfo_const_,int> *)local_88,None);
  if (FVar8.Data != (FRHITransitionInfo *)0x0) {
    pbVar9 = &FVar8.Data[-1].CommitInfo.bIsSet;
    MemoryTrace_Free((ulong64)pbVar9,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pbVar9,FMalloc,true);
    }
    pbVar9 = pbVar9 + -(ulonglong)*(uint *)pbVar9;
    LOCK();
    iVar2 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(pbVar9 + 0x40);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)pbVar9,0,0);
      if (lVar3 - (longlong)pbVar9 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,pbVar9);
        return;
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pbVar9);
    }
  }
  return;
}

