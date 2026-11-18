// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Allocate @ 147cd4310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSortManager::FDynamicValueBuffer::Allocate
          (FDynamicValueBuffer *this,FRHICommandListBase *param_1,FAllocationInfo *param_2,
          FSettings *param_3,int param_4,EGPUSortFlags param_5)

{
  int *piVar1;
  float fVar2;
  ForElementType<void_*> FVar3;
  FValueBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FValueBuffer *this_01;
  FValueBuffer *pFVar7;
  ForElementType<void_*> FVar8;
  int iVar9;
  int iVar10;
  FValueBuffer *local_38;
  FValueBuffer *local_30;
  
  iVar9 = (this->ValueBuffers).Array.ArrayNum;
  if (iVar9 == 0) {
    iVar9 = param_3->MinBufferSize;
    iVar10 = (int)((float)param_4 * param_3->BufferSlack);
    pFVar7 = ::operator_new(0x60);
    if (pFVar7 == (FValueBuffer *)0x0) {
      local_30 = (FValueBuffer *)0x0;
    }
    else {
      if (iVar10 < iVar9) {
        iVar10 = iVar9;
      }
      local_30 = FValueBuffer::FValueBuffer(pFVar7,param_1,iVar10,0,param_3);
    }
    FValueBuffer::Allocate(local_30,param_2,param_4,param_5);
    FVar3 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<void_*>)this;
    if (FVar3 != (ForElementType<void_*>)0x0) {
      FVar8 = FVar3;
    }
    if ((ulonglong)FVar8 <= &local_30) {
      FVar8 = (ForElementType<void_*>)this;
      if (FVar3 != (ForElementType<void_*>)0x0) {
        FVar8 = FVar3;
      }
      if ((&local_30 <
           (FValueBuffer **)((longlong)FVar8 + (longlong)(this->ValueBuffers).Array.ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar9 = (this->ValueBuffers).Array.ArrayNum;
    piVar1 = &(this->ValueBuffers).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                        (0x808,(ForElementType<void_*> *)this,piVar1);
    }
    (this->ValueBuffers).Array.ArrayNum = iVar9 + 1;
    FVar3 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<void_*>)0x0) {
      this = (FDynamicValueBuffer *)FVar3;
    }
  }
  else {
    pFVar7 = (FValueBuffer *)0x0;
    uVar6 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar6 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<void_*>)this;
    if (FVar3 != (ForElementType<void_*>)0x0) {
      FVar8 = FVar3;
    }
    this_00 = *(FValueBuffer **)
               ((int *)((longlong)FVar8 + -8) + (longlong)(this->ValueBuffers).Array.ArrayNum * 2);
    iVar9 = this_00->UsedCount + param_4;
    if (iVar9 <= this_00->AllocatedCount) {
      FValueBuffer::Allocate(this_00,param_2,param_4,param_5);
      return;
    }
    fVar2 = param_3->BufferSlack;
    this_01 = ::operator_new(0x60);
    if (this_01 != (FValueBuffer *)0x0) {
      pFVar7 = FValueBuffer::FValueBuffer
                         (this_01,param_1,(int)((float)iVar9 * fVar2),this_00->UsedCount,param_3);
    }
    FValueBuffer::Allocate(pFVar7,param_2,param_4,param_5);
    FVar3 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<void_*>)this;
    if (FVar3 != (ForElementType<void_*>)0x0) {
      FVar8 = FVar3;
    }
    local_38 = pFVar7;
    if ((ulonglong)FVar8 <= &local_38) {
      FVar8 = (ForElementType<void_*>)this;
      if (FVar3 != (ForElementType<void_*>)0x0) {
        FVar8 = FVar3;
      }
      if ((&local_38 <
           (FValueBuffer **)((longlong)FVar8 + (longlong)(this->ValueBuffers).Array.ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar9 = (this->ValueBuffers).Array.ArrayNum;
    piVar1 = &(this->ValueBuffers).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                        (0x808,(ForElementType<void_*> *)this,piVar1);
    }
    (this->ValueBuffers).Array.ArrayNum = iVar9 + 1;
    FVar3 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
    local_30 = local_38;
    if (FVar3 != (ForElementType<void_*>)0x0) {
      this = (FDynamicValueBuffer *)FVar3;
    }
  }
  *(FValueBuffer **)((longlong)this + (longlong)iVar9 * 8) = local_30;
  return;
}

// GetAllocatedCount @ 147cfa7c0

int __thiscall FGPUSortManager::FDynamicValueBuffer::GetAllocatedCount(FDynamicValueBuffer *this)

{
  ForElementType<void_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<void_*> FVar6;
  
  iVar4 = (this->ValueBuffers).Array.ArrayNum;
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = 0;
  if ((int)(iVar4 - 1U) < iVar4) {
    uVar5 = ~(iVar4 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  FVar1 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<void_*>)this;
  if (FVar1 != (ForElementType<void_*>)0x0) {
    FVar6 = FVar1;
  }
  return *(int *)(*(longlong *)
                   ((int *)((longlong)FVar6 + -8) +
                   (longlong)(this->ValueBuffers).Array.ArrayNum * 2) + 0x58);
}

// GetUsedCount @ 147d10070

int __thiscall FGPUSortManager::FDynamicValueBuffer::GetUsedCount(FDynamicValueBuffer *this)

{
  ForElementType<void_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<void_*> FVar6;
  
  iVar4 = (this->ValueBuffers).Array.ArrayNum;
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = 0;
  if ((int)(iVar4 - 1U) < iVar4) {
    uVar5 = ~(iVar4 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  FVar1 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<void_*>)this;
  if (FVar1 != (ForElementType<void_*>)0x0) {
    FVar6 = FVar1;
  }
  return *(int *)(*(longlong *)
                   ((int *)((longlong)FVar6 + -8) +
                   (longlong)(this->ValueBuffers).Array.ArrayNum * 2) + 0x5c);
}

// ReleaseRHI @ 147d21260

void __thiscall FGPUSortManager::FDynamicValueBuffer::ReleaseRHI(FDynamicValueBuffer *this)

{
  int iVar1;
  ForElementType<void_*> FVar2;
  TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined1 local_res8 [8];
  
  FVar2 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
  iVar1 = (this->ValueBuffers).Array.ArrayNum;
  pTVar3 = &this->ValueBuffers;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    this = (FDynamicValueBuffer *)FVar2;
  }
  FVar2 = (ForElementType<void_*>)((longlong)this + (longlong)iVar1 * 8);
  while( true ) {
    if ((pTVar3->Array).ArrayNum != iVar1) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<void_*>)this == FVar2) break;
    FValueBuffer::ReleaseRHI(*(FValueBuffer **)this);
    this = (FDynamicValueBuffer *)((longlong)this + 8);
  }
  return;
}

// SkrinkAndReset @ 147d2e510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGPUSortManager::FDynamicValueBuffer::SkrinkAndReset
          (FDynamicValueBuffer *this,FRHICommandListBase *param_1,FSettings *param_2)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FValueBuffer *this_00;
  ForElementType<void_*> FVar8;
  uint uVar9;
  float fVar10;
  FValueBuffer *local_38 [4];
  
  iVar5 = GetUsedCount(this);
  if (iVar5 < 1) {
    this->NumFramesRequiringShrinking = this->NumFramesRequiringShrinking + 1;
    if (param_2->FrameCountBeforeShrinking < this->NumFramesRequiringShrinking) {
      TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
      ::Empty(&this->ValueBuffers,0);
    }
  }
  else {
    iVar6 = GetAllocatedCount(this);
    TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&this->ValueBuffers,0,(this->ValueBuffers).Array.ArrayNum + -1,Default);
    fVar10 = (float)iVar5 * param_2->BufferSlack;
    if (fVar10 <= (float)param_2->MinBufferSize) {
      fVar10 = (float)param_2->MinBufferSize;
    }
    if ((float)iVar6 <= fVar10 * param_2->BufferSlack) {
      this->NumFramesRequiringShrinking = 0;
    }
    else {
      iVar5 = this->NumFramesRequiringShrinking + 1;
      this->NumFramesRequiringShrinking = iVar5;
      if (param_2->FrameCountBeforeShrinking < iVar5) {
        TIndirectArray<FGPUSortManager::FValueBuffer,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        ::Empty(&this->ValueBuffers,0);
        this_00 = ::operator_new(0x60);
        local_38[0] = (FValueBuffer *)0x0;
        if (this_00 != (FValueBuffer *)0x0) {
          local_38[0] = FValueBuffer::FValueBuffer(this_00,param_1,(int)fVar10,0,param_2);
        }
        FVar2 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<void_*>)this;
        if (FVar2 != (ForElementType<void_*>)0x0) {
          FVar8 = FVar2;
        }
        if ((ulonglong)FVar8 <= local_38) {
          FVar8 = (ForElementType<void_*>)this;
          if (FVar2 != (ForElementType<void_*>)0x0) {
            FVar8 = FVar2;
          }
          if ((local_38 <
               (FValueBuffer **)
               ((longlong)FVar8 + (longlong)(this->ValueBuffers).Array.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (this->ValueBuffers).Array.ArrayNum;
        piVar1 = &(this->ValueBuffers).Array.ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                            (0x808,(ForElementType<void_*> *)this,piVar1);
        }
        (this->ValueBuffers).Array.ArrayNum = iVar5 + 1;
        FVar2 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<void_*>)this;
        if (FVar2 != (ForElementType<void_*>)0x0) {
          FVar8 = FVar2;
        }
        *(FValueBuffer **)((longlong)FVar8 + (longlong)iVar5 * 8) = local_38[0];
      }
    }
    iVar5 = (this->ValueBuffers).Array.ArrayNum;
    uVar9 = iVar5 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar5) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar2 = (this->ValueBuffers).Array.AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<void_*>)this;
    if (FVar2 != (ForElementType<void_*>)0x0) {
      FVar8 = FVar2;
    }
    *(undefined4 *)
     (*(longlong *)
       ((int *)((longlong)FVar8 + -8) + (longlong)(this->ValueBuffers).Array.ArrayNum * 2) + 0x5c) =
         0;
  }
  this->CurrentSortBatchId = -1;
  return;
}

