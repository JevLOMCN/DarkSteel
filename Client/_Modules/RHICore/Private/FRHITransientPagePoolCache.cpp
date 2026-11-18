// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 6

// ~FRHITransientPagePoolCache @ 1446cf980

void __thiscall
FRHITransientPagePoolCache::~FRHITransientPagePoolCache(FRHITransientPagePoolCache *this)

{
  int *piVar1;
  TArray<FRHITransientPagePool_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FRHITransientPagePool *pFVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FRHITransientPagePoolCache__6B_;
  pFVar5 = this->FastPagePool;
  if (pFVar5 != (FRHITransientPagePool *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pTVar2 = &this->LiveList;
  this->FastPagePool = (FRHITransientPagePool *)0x0;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->LiveList).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    puVar6 = *(undefined8 **)pFVar7;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    pFVar7 = pFVar7 + 8;
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
                    /* WARNING: Could not recover jumptable at 0x0001446cfa99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// Acquire @ 1446d0fb0

FRHITransientPagePool * __thiscall
FRHITransientPagePoolCache::Acquire(FRHITransientPagePoolCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRHITransientPagePool *pFVar5;
  ulonglong uVar6;
  int iVar7;
  FLLMScope local_res8 [2];
  undefined4 local_res10;
  uint local_res14;
  FName local_res18;
  FMemScope local_res20;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = (this->FreeList).ArrayNum;
  if (iVar4 == 0) {
    FLLMScope::FLLMScope
              (local_res8,LLMTagDeclaration_RHITransientResources.UniqueName,false,None,Default,true
              );
    local_res18 = LLMTagDeclaration_RHITransientResources.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    local_res14 = (this->Initializer).PageSize;
    if (((this->LiveList).ArrayNum != 0) ||
       (uVar6 = (this->Initializer).PoolSizeFirst, uVar6 <= (this->Initializer).PoolSize)) {
      uVar6 = (this->Initializer).PoolSize;
    }
    local_res10 = (undefined4)(uVar6 / local_res14);
    pFVar5 = (FRHITransientPagePool *)(**(code **)(this->_padding_ + 0x18))(this,&local_res10);
    if (pFVar5 == (FRHITransientPagePool *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PagePool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x528,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRHITransientPagePool *)(*pcVar2)();
        return pFVar5;
      }
    }
    piVar1 = &(this->LiveList).ArrayMax;
    this->TotalMemoryCapacity =
         this->TotalMemoryCapacity +
         (ulonglong)((pFVar5->Allocator).PageSize * (pFVar5->Allocator).MaxPageCount);
    iVar4 = (this->LiveList).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->LiveList).AllocatorInstance,piVar1);
    }
    (this->LiveList).ArrayNum = iVar4 + 1;
    *(FRHITransientPagePool **)((this->LiveList).AllocatorInstance.Data + (longlong)iVar4 * 8) =
         pFVar5;
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
  }
  else {
    if (iVar4 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRHITransientPagePool *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->FreeList).ArrayNum;
    iVar7 = iVar4 + -1;
    pFVar5 = *(FRHITransientPagePool **)
              ((this->FreeList).AllocatorInstance.Data + (longlong)iVar4 * 8 + -8);
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar5;
}

// CreateFastPagePool @ 1446d6530

FRHITransientPagePool * __thiscall
FRHITransientPagePoolCache::CreateFastPagePool(FRHITransientPagePoolCache *this)

{
  return (FRHITransientPagePool *)0x0;
}

// Forfeit @ 1446dc620

void __thiscall
FRHITransientPagePoolCache::Forfeit
          (FRHITransientPagePoolCache *this,TArrayView<FRHITransientPagePool_*_const,int> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FRHITransientPagePool_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar7) {
    pTVar1 = &this->FreeList;
    lVar8 = (longlong)(int)uVar7 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38[0] = *(longlong *)(lVar8 + (longlong)param_1->DataPtr);
      if ((*(int *)(local_38[0] + 100) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PagePool->IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                             ,0x549,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(ulong64 *)(local_38[0] + 0x90) = this->GarbageCollectCycle;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->FreeList).ArrayNum;
      if (iVar6 == (this->FreeList).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(this->FreeList).ArrayMax);
      }
      (this->FreeList).ArrayNum = iVar6 + 1;
      lVar8 = lVar8 + -8;
      uVar7 = uVar7 - 1;
      *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_38[0];
    } while (-1 < (int)uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446dc7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GarbageCollect @ 1446dd3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRHITransientPagePoolCache::GarbageCollect(FRHITransientPagePoolCache *this)

{
  int *piVar1;
  TArray<FRHITransientPagePool_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FRHITransientPagePool_*> FVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<FRHITransientPagePool_*> FVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStackY_138 [32];
  byte local_e8 [8];
  longlong local_e0;
  uint local_d8;
  FRHITransientPagePoolCache *local_d0;
  ForElementType<FRHITransientPagePool_*> local_c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d0 = this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"TransientPagePoolCache::GarbageCollect");
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1361,"TransientPagePoolCache::GarbageCollect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
               ,0x551);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1361);
  }
  local_3c = 0x10;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_c8.SecondaryData = (ForElementType<FRHITransientPagePool_*>)0x0;
  local_40 = 0;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  uVar13 = 0;
  if (0 < (this->FreeList).ArrayNum) {
    lVar15 = 0;
    pTVar2 = &this->FreeList;
    do {
      local_d8 = ~uVar13;
      uVar16 = local_d8 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->FreeList).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_e0 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar15);
      if ((ulonglong)(this->Initializer).GarbageCollectLatency + *(longlong *)(local_e0 + 0x90) <=
          this->GarbageCollectCycle) {
        this->TotalMemoryCapacity =
             this->TotalMemoryCapacity -
             (ulonglong)(uint)(*(int *)(local_e0 + 0x60) * *(int *)(local_e0 + 0x5c));
        uVar9 = 0;
        if ((int)uVar13 < (this->FreeList).ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 8;
        iVar14 = local_d8 + (this->FreeList).ArrayNum;
        if (iVar14 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar14 << 3);
        }
        piVar1 = &(this->FreeList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->FreeList).ArrayNum,
                   &(this->FreeList).ArrayMax);
        pFVar3 = (this->LiveList).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < pFVar3 + (longlong)(this->LiveList).ArrayMax * 8
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = (this->LiveList).ArrayNum;
        lVar15 = local_e0;
        if (iVar14 != 0) {
          pFVar3 = (this->LiveList).AllocatorInstance.Data;
          iVar11 = 0;
          local_e8[0] = *(longlong *)pFVar3 != local_e0;
          lVar10 = 0;
          iVar17 = 0;
          do {
            iVar18 = iVar17;
            do {
              lVar10 = lVar10 + 1;
              iVar18 = iVar18 + 1;
              if (iVar14 <= lVar10) break;
            } while ((bool)local_e8[0] == (*(longlong *)(pFVar3 + lVar10 * 8) != lVar15));
            if (local_e8[0] != 0) {
              if (iVar11 != iVar17) {
                memmove(pFVar3 + (longlong)iVar11 * 8,pFVar3 + (longlong)iVar17 * 8,
                        (longlong)(iVar18 - iVar17) << 3);
                lVar15 = local_e0;
              }
              iVar11 = iVar11 + (iVar18 - iVar17);
            }
            local_e8[0] = local_e8[0] ^ 1;
            iVar17 = iVar18;
          } while (lVar10 < iVar14);
          (local_d0->LiveList).ArrayNum = iVar11;
          lpCriticalSection = (LPCRITICAL_SECTION)&local_d0->CriticalSection;
          this = local_d0;
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientPagePool_*>_>
                               (0x808,&local_c8,&local_3c);
          lVar15 = local_e0;
        }
        lVar10 = (longlong)local_40;
        FVar12 = (ForElementType<FRHITransientPagePool_*>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<FRHITransientPagePool_*>)0x0) {
          FVar12 = local_c8.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar12 + lVar10 * 8) = lVar15;
        break;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar13 < (this->FreeList).ArrayNum);
  }
  lVar15 = (longlong)(this->LiveList).ArrayNum;
  if ((__GTraceCounterTransientMemoryRangeCount.Value != lVar15) &&
     (__GTraceCounterTransientMemoryRangeCount.Value = lVar15, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientMemoryRangeCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar8 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterTransientMemoryRangeCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterTransientMemoryRangeCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientMemoryRangeCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientMemoryRangeCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientMemoryRangeCount.CounterId._0_2_ = uVar8;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientMemoryRangeCount.CounterId._0_2_,
               __GTraceCounterTransientMemoryRangeCount.Value);
  }
  LeaveCriticalSection(lpCriticalSection);
  FRHITransientMemoryStats::Submit(&this->Stats,this->TotalMemoryCapacity);
  iVar14 = local_40;
  this->GarbageCollectCycle = this->GarbageCollectCycle + 1;
  FVar12 = (ForElementType<FRHITransientPagePool_*>)&local_c8;
  if (local_c8.SecondaryData != (ForElementType<FRHITransientPagePool_*>)0x0) {
    FVar12 = local_c8.SecondaryData;
  }
  FVar4 = (ForElementType<FRHITransientPagePool_*>)((longlong)FVar12 + (longlong)local_40 * 8);
  while( true ) {
    if (local_40 != iVar14) {
      `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (FVar12 == FVar4) break;
    puVar5 = *(undefined8 **)FVar12;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    FVar12 = (ForElementType<FRHITransientPagePool_*>)((longlong)FVar12 + 8);
  }
  if (local_c8.SecondaryData != (ForElementType<FRHITransientPagePool_*>)0x0) {
    FMemory::Free((void *)local_c8.SecondaryData);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetFastPagePool @ 1446de170

FRHITransientPagePool * __thiscall
FRHITransientPagePoolCache::GetFastPagePool(FRHITransientPagePoolCache *this)

{
  FRHITransientPagePool *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FName local_res18;
  
  if (this->FastPagePool == (FRHITransientPagePool *)0x0) {
    FLLMScope::FLLMScope
              (local_res8,LLMTagDeclaration_RHITransientResources.UniqueName,false,None,Default,true
              );
    local_res18 = LLMTagDeclaration_RHITransientResources.UniqueName;
    FMemScope::FMemScope(&local_res10,&local_res18,true);
    pFVar1 = (FRHITransientPagePool *)(**(code **)(this->_padding_ + 0x10))(this);
    this->FastPagePool = pFVar1;
    if (pFVar1 != (FRHITransientPagePool *)0x0) {
      this->TotalMemoryCapacity =
           this->TotalMemoryCapacity +
           (ulonglong)((pFVar1->Allocator).PageSize * (pFVar1->Allocator).MaxPageCount);
      FMemScope::~FMemScope(&local_res10);
      FLLMScope::~FLLMScope(local_res8);
      return pFVar1;
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
  }
  return (FRHITransientPagePool *)0x0;
}

