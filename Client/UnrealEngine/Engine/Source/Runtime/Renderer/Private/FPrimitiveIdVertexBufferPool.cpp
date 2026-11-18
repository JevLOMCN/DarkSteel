// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ReleaseRHI @ 144ed22f0

void __thiscall FPrimitiveIdVertexBufferPool::ReleaseRHI(FPrimitiveIdVertexBufferPool *this)

{
  int *piVar1;
  
  DestructItems<FPrimitiveIdVertexBufferPoolEntry,int>
            ((FPrimitiveIdVertexBufferPoolEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Entries).AllocatorInstance,0,piVar1);
  }
  return;
}

// FPrimitiveIdVertexBufferPool @ 144eef3a0

FPrimitiveIdVertexBufferPool * __thiscall
FPrimitiveIdVertexBufferPool::FPrimitiveIdVertexBufferPool(FPrimitiveIdVertexBufferPool *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FPrimitiveIdVertexBufferPool__6B_;
  this->DiscardId = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AllocationCS,4000);
  return this;
}

// ~FPrimitiveIdVertexBufferPool @ 144ef0ef0

void __thiscall
FPrimitiveIdVertexBufferPool::~FPrimitiveIdVertexBufferPool(FPrimitiveIdVertexBufferPool *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->Entries).ArrayNum;
  this->_padding_ = (longlong)&___7FPrimitiveIdVertexBufferPool__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Entries.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                       ,0x3a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AllocationCS);
  DestructItems<FPrimitiveIdVertexBufferPoolEntry,int>
            ((FPrimitiveIdVertexBufferPoolEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// Allocate @ 144ef7600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPrimitiveIdVertexBufferPoolEntry * __thiscall
FPrimitiveIdVertexBufferPool::Allocate
          (FPrimitiveIdVertexBufferPool *this,
          FPrimitiveIdVertexBufferPoolEntry *__return_storage_ptr__,FRHICommandList *param_1,
          int param_2)

{
  int *piVar1;
  TArray<FPrimitiveIdVertexBufferPoolEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  TRefCountPtr<FRHIBuffer> *pTVar3;
  FRHIBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FPrimitiveIdVertexBufferPoolEntry *pFVar8;
  TRefCountPtr<FRHIBuffer> TVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong local_d8;
  undefined1 local_88 [40];
  FName FStack_60;
  FName local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar13 = 0;
  if (&this->AllocationCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AllocationCS);
  uVar14 = 0xffffffff;
  uVar10 = param_2 + 0x3ffU & 0xfffffc00;
  if (0 < (this->Entries).ArrayNum) {
    piVar1 = &(this->Entries).ArrayNum;
    local_d8 = 0xfffffffffffffff0;
    uVar15 = uVar13;
    do {
      uVar17 = (uint)uVar13;
      uVar16 = ~uVar17 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar17 < *piVar1) {
        uVar6 = uVar16;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
        return pFVar8;
      }
      uVar6 = 0;
      if (*(uint *)((this->Entries).AllocatorInstance.Data + uVar15 + 4) != this->DiscardId) {
        uVar7 = uVar6;
        if ((int)uVar17 < *piVar1) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
          return pFVar8;
        }
        if ((int)uVar10 <= *(int *)((this->Entries).AllocatorInstance.Data + uVar15)) {
          if (uVar14 != 0xffffffff) {
            uVar7 = uVar6;
            if ((int)uVar14 < *piVar1) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
              return pFVar8;
            }
            pFVar12 = (this->Entries).AllocatorInstance.Data;
            uVar7 = uVar6;
            if ((int)uVar17 < *piVar1) {
              uVar7 = uVar16;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
              return pFVar8;
            }
            if (*(int *)(pFVar12 + local_d8) <=
                *(int *)((this->Entries).AllocatorInstance.Data + uVar15)) goto LAB_144ef784d;
          }
          uVar14 = uVar6;
          if ((int)uVar17 < *piVar1) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
            return pFVar8;
          }
          uVar14 = uVar17;
          local_d8 = uVar15;
          if (*(uint *)((this->Entries).AllocatorInstance.Data + uVar15) == uVar10) break;
        }
      }
LAB_144ef784d:
      uVar13 = (ulonglong)(uVar17 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar17 + 1) < (this->Entries).ArrayNum);
    if (-1 < (int)uVar14) {
      pTVar2 = &this->Entries;
      uVar17 = ~uVar14 >> 0x1f;
      uVar10 = uVar6;
      if ((int)uVar14 < (this->Entries).ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
        return pFVar8;
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      __return_storage_ptr__->BufferSize = *(int *)pFVar12;
      __return_storage_ptr__->LastDiscardId = *(uint *)(pFVar12 + 4);
      (__return_storage_ptr__->BufferRHI).Reference = (FRHIBuffer *)0x0;
      (__return_storage_ptr__->BufferRHI).Reference = *(FRHIBuffer **)(pFVar12 + 8);
      *(undefined8 *)(pFVar12 + 8) = 0;
      __return_storage_ptr__->LastDiscardId = this->DiscardId;
      if ((int)uVar14 < (this->Entries).ArrayNum) {
        uVar6 = uVar17;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPrimitiveIdVertexBufferPoolEntry *)(*pcVar4)();
        return pFVar8;
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      if (*(FRHIResource **)(pFVar12 + 8) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pFVar12 + 8));
      }
      iVar11 = (this->Entries).ArrayNum + ~uVar14;
      if (iVar11 != 0) {
        memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar11 << 4);
      }
      piVar1 = &(this->Entries).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar2->AllocatorInstance,(this->Entries).ArrayNum,
                 &(this->Entries).ArrayMax);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->AllocationCS);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->BufferSize = 0;
  __return_storage_ptr__->LastDiscardId = 0;
  pTVar3 = &__return_storage_ptr__->BufferRHI;
  pTVar3->Reference = (FRHIBuffer *)0x0;
  __return_storage_ptr__->LastDiscardId = this->DiscardId;
  __return_storage_ptr__->BufferSize = uVar10;
  local_88._16_8_ = ZEXT48(uVar10);
  local_88._24_8_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x204114);
  local_58.ComparisonIndex.Value = 8;
  local_58.Number = 0;
  uStack_50 = 0;
  local_88._32_8_ = L"FPrimitiveIdVertexBufferPool";
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  local_48 = 0;
  TVar9 = FRHICommandListBase::CreateBuffer
                    ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_88);
  if ((FRHIBuffer *)pTVar3 != TVar9.Reference) {
    this_00 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)local_88._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88._0_8_);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->AllocationCS);
  return __return_storage_ptr__;
}

// DiscardAll @ 144f01d20

void __thiscall FPrimitiveIdVertexBufferPool::DiscardAll(FPrimitiveIdVertexBufferPool *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lpCriticalSection = &this->AllocationCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->DiscardId = this->DiscardId + 1;
  uVar4 = 0;
  if (0 < (this->Entries).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Entries).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this->DiscardId - *(int *)((this->Entries).AllocatorInstance.Data + lVar5 + 4) < 0x3e9) {
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
      }
      else {
        uVar3 = 0;
        if ((int)uVar4 < (this->Entries).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FPrimitiveIdVertexBufferPoolEntry,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Entries,uVar4);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Entries).AllocatorInstance,(this->Entries).ArrayNum,
                   &(this->Entries).ArrayMax);
      }
    } while ((int)uVar4 < (this->Entries).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000144f01e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReturnToFreeList @ 144f277b0

void __thiscall
FPrimitiveIdVertexBufferPool::ReturnToFreeList
          (FPrimitiveIdVertexBufferPool *this,FPrimitiveIdVertexBufferPoolEntry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FPrimitiveIdVertexBufferPoolEntry *pFVar2;
  FRHIBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  lpCriticalSection = &this->AllocationCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (FPrimitiveIdVertexBufferPoolEntry *)(this->Entries).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Entries).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar6 = (this->Entries).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(int *)pFVar6 = param_1->BufferSize;
  *(uint *)(pFVar6 + 4) = param_1->LastDiscardId;
  *(undefined8 *)(pFVar6 + 8) = 0;
  *(FRHIBuffer **)(pFVar6 + 8) = (param_1->BufferRHI).Reference;
  (param_1->BufferRHI).Reference = (FRHIBuffer *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (param_1->BufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

