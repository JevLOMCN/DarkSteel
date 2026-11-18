// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 4

// ~FRHITransientHeapCache @ 1446cf880

void __thiscall FRHITransientHeapCache::~FRHITransientHeapCache(FRHITransientHeapCache *this)

{
  int *piVar1;
  TArray<FRHITransientHeap_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->LiveList;
  this->_padding_ = (longlong)&___7FRHITransientHeapCache__6B_;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->LiveList).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar3) break;
    puVar5 = *(undefined8 **)pFVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->LiveList).ArrayMax;
  (this->LiveList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446cf96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// Acquire @ 1446d0d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRHITransientHeap * __thiscall
FRHITransientHeapCache::Acquire
          (FRHITransientHeapCache *this,ulong64 param_1,ERHITransientHeapFlags param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FRHITransientHeap *pFVar6;
  ulonglong uVar7;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  FLLMScope local_res8 [2];
  FName local_68;
  FMemScope local_60;
  ulonglong local_58;
  uint local_50;
  ERHITransientHeapFlags local_4c;
  uint local_48;
  uint local_44;
  ulong64 uVar8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar10 = (this->FreeList).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar10 < (this->FreeList).ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRHITransientHeap *)(*pcVar2)();
        return pFVar6;
      }
      pFVar6 = *(FRHITransientHeap **)((this->FreeList).AllocatorInstance.Data + lVar11);
      if ((param_1 <= (pFVar6->Allocator).Capacity - (pFVar6->Allocator).UsedSize) &&
         (((pFVar6->Initializer).Flags & param_2) != 0)) {
        TArray<FRHITransientHeap_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->FreeList,uVar10,Default);
        goto LAB_1446d0f6b;
      }
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  local_58 = (this->Initializer).MinimumHeapSize;
  uVar8 = 1;
  if (param_1 != 0) {
    uVar8 = param_1;
  }
  uVar7 = uVar8 - 1;
  lVar11 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  cVar9 = (char)lVar11;
  if (uVar7 == 0) {
    cVar9 = -1;
  }
  local_50 = (this->Initializer).HeapAlignment;
  uVar7 = 1L << (0x40U - ('?' - cVar9) & 0x3f);
  bVar3 = (this->Initializer).bSupportsAllHeapFlags;
  if (local_58 < uVar7) {
    local_58 = uVar7;
  }
  if (GNumExplicitGPUsForRendering < 2) {
    local_4c = param_2;
    if (bVar3 != false) {
      local_4c = AllowAll;
    }
  }
  else {
    local_4c = param_2;
    if ((bVar3 != false) && (param_2 != AllowNNEBuffers)) {
      local_4c = AllowRenderTargets|AllowTextures|AllowBuffers;
    }
  }
  local_48 = (this->Initializer).TextureCacheSize;
  local_44 = (this->Initializer).BufferCacheSize;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_RHITransientResources.UniqueName,false,None,Default,true);
  local_68 = LLMTagDeclaration_RHITransientResources.UniqueName;
  FMemScope::FMemScope(&local_60,&local_68,true);
  pFVar6 = (FRHITransientHeap *)(**(code **)(this->_padding_ + 0x10))(this,&local_58);
  if ((pFVar6 == (FRHITransientHeap *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x23f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRHITransientHeap *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = (this->LiveList).ArrayNum;
  piVar1 = &(this->LiveList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->LiveList).AllocatorInstance,piVar1);
  }
  (this->LiveList).ArrayNum = iVar5 + 1;
  *(FRHITransientHeap **)((this->LiveList).AllocatorInstance.Data + (longlong)iVar5 * 8) = pFVar6;
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res8);
LAB_1446d0f6b:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar6;
}

// Forfeit @ 1446dc3f0

void __thiscall
FRHITransientHeapCache::Forfeit
          (FRHITransientHeapCache *this,TArrayView<FRHITransientHeap_*_const,int> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<FRHITransientHeap_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_38 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = param_1->ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->LiveList).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->LiveList).AllocatorInstance,(this->LiveList).ArrayNum,piVar1);
  }
  uVar8 = uVar8 - 1;
  if (-1 < (int)uVar8) {
    pTVar2 = &this->FreeList;
    lVar9 = (longlong)(int)uVar8 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38[0] = *(longlong *)(lVar9 + (longlong)param_1->DataPtr);
      if ((*(longlong *)(local_38[0] + 0x30) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Heap->IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                             ,0x24d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulong64 *)(local_38[0] + 0x70) = this->GarbageCollectCycle;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this->FreeList).ArrayMax * 8))
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
      iVar7 = (this->FreeList).ArrayNum;
      if (iVar7 == (this->FreeList).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,&(this->FreeList).ArrayMax);
      }
      (this->FreeList).ArrayNum = iVar7 + 1;
      lVar9 = lVar9 + -8;
      uVar8 = uVar8 - 1;
      *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
    } while (-1 < (int)uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446dc5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GarbageCollect @ 1446dcfa0

void __thiscall FRHITransientHeapCache::GarbageCollect(FRHITransientHeapCache *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  TArray<FRHITransientHeap_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulong64 uVar19;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong local_res18;
  ulong64 local_res20;
  undefined8 *local_58 [3];
  
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  local_res20 = 0;
  local_res10 = 0;
  if (0 < (this->FreeList).ArrayNum) {
    local_res18 = 0;
    do {
      lVar18 = local_res18;
      uVar11 = local_res10;
      pTVar10 = &this->FreeList;
      uVar12 = ~local_res10;
      uVar15 = uVar12 >> 0x1f;
      uVar6 = 0;
      if ((int)local_res10 < (this->FreeList).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58[0] = *(undefined8 **)((pTVar10->AllocatorInstance).Data + lVar18);
      if ((ulonglong)(this->Initializer).GarbageCollectLatency + local_58[0][0xe] <=
          this->GarbageCollectCycle) {
        uVar6 = 0;
        if ((int)uVar11 < (this->FreeList).ArrayNum) {
          uVar6 = uVar15;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
        iVar8 = (this->FreeList).ArrayNum + uVar12;
        if (iVar8 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->FreeList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar10->AllocatorInstance,(this->FreeList).ArrayNum,
                   &(this->FreeList).ArrayMax);
        pFVar2 = (this->LiveList).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < pFVar2 + (longlong)(this->LiveList).ArrayMax * 8)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (this->LiveList).ArrayNum;
        puVar17 = local_58[0];
        if (iVar8 != 0) {
          pFVar2 = (this->LiveList).AllocatorInstance.Data;
          iVar9 = 0;
          lVar18 = 0;
          bVar4 = *(undefined8 **)pFVar2 != local_58[0];
          iVar13 = 0;
          do {
            iVar14 = iVar13;
            do {
              lVar18 = lVar18 + 1;
              iVar14 = iVar14 + 1;
              if (iVar8 <= lVar18) break;
            } while (bVar4 == (*(undefined8 **)(pFVar2 + lVar18 * 8) != puVar17));
            if (bVar4 != false) {
              if (iVar9 != iVar13) {
                memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar13 * 8,
                        (longlong)(iVar14 - iVar13) << 3);
                puVar17 = local_58[0];
              }
              iVar9 = iVar9 + (iVar14 - iVar13);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar13 = iVar14;
          } while (lVar18 < iVar8);
          (this->LiveList).ArrayNum = iVar9;
          lVar18 = local_res18;
          uVar11 = local_res10;
        }
        uVar11 = uVar11 - 1;
        lVar18 = lVar18 + -8;
        if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)(puVar17);
        }
      }
      local_res10 = uVar11 + 1;
      local_res18 = lVar18 + 8;
    } while ((int)local_res10 < (this->FreeList).ArrayNum);
  }
  pFVar16 = (this->LiveList).AllocatorInstance.Data;
  iVar8 = (this->LiveList).ArrayNum;
  pFVar2 = pFVar16 + (longlong)iVar8 * 8;
  uVar19 = local_res20;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FRHITransientHeap_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar2) break;
    lVar7 = 0x80;
    lVar18 = *(longlong *)pFVar16;
    if ((this->Initializer).bSupportsVirtualMapping == false) {
      lVar7 = 0x28;
    }
    uVar19 = uVar19 + *(longlong *)(lVar7 + lVar18);
    pFVar16 = pFVar16 + 8;
    *(undefined8 *)(lVar18 + 0x80) = 0;
  }
  lVar18 = (longlong)(this->LiveList).ArrayNum;
  if ((__GTraceCounterTransientMemoryRangeCount.Value != lVar18) &&
     (__GTraceCounterTransientMemoryRangeCount.Value = lVar18, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientMemoryRangeCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar5 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientMemoryRangeCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterTransientMemoryRangeCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientMemoryRangeCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientMemoryRangeCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientMemoryRangeCount.CounterId._0_2_ = uVar5;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientMemoryRangeCount.CounterId._0_2_,
               __GTraceCounterTransientMemoryRangeCount.Value);
  }
  FRHITransientMemoryStats::Submit(&this->Stats,uVar19);
  this->GarbageCollectCycle = this->GarbageCollectCycle + 1;
                    /* WARNING: Could not recover jumptable at 0x0001446dd380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

