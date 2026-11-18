// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 19

// GetNetStatsContext @ 1442c2a50

FNetStatsContext * __thiscall
UE::Net::Private::FNetTypeStats::GetNetStatsContext(FNetTypeStats *this)

{
  code *pcVar1;
  bool bVar2;
  FNetStatsContext *pFVar3;
  
  if (this->bIsInParallelPhase != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInParallelPhase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.h"
                       ,0xc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNetStatsContext *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->bIsEnabled != false) {
    return this->ParentStatsContext;
  }
  return (FNetStatsContext *)0x0;
}

// FNetTypeStats @ 144326db0

FNetTypeStats * __thiscall UE::Net::Private::FNetTypeStats::FNetTypeStats(FNetTypeStats *this)

{
  FNetStatsContext *pFVar1;
  FName *pFVar2;
  FNetStatsContext *this_00;
  FName local_res8;
  
  this_00 = (FNetStatsContext *)0x0;
  this->ParentStatsContext = (FNetStatsContext *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ChildStatsContextCS,4000);
  (this->ChildStatsContext).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildStatsContext).ArrayNum = 0;
  (this->ChildStatsContext).ArrayMax = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->TypeStatsNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeStatsNames).ArrayNum = 0;
  (this->TypeStatsNames).ArrayMax = 0;
  this->bIsEnabled = false;
  this->bIsInParallelPhase = false;
  pFVar1 = ::operator_new(0x20);
  if (pFVar1 != (FNetStatsContext *)0x0) {
    pFVar1->NetRefHandleManager = (FNetRefHandleManager *)0x0;
    (pFVar1->TypeStatsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->TypeStatsData).ArrayNum = 0;
    (pFVar1->TypeStatsData).ArrayMax = 0;
    pFVar1->bShouldIncludeSubObjectWithRoot = false;
    pFVar1->bIsAcquiredByTask = false;
    this_00 = pFVar1;
  }
  FNetStatsContext::ResetStats(this_00,(this->TypeStatsNames).ArrayNum);
  this_00->NetRefHandleManager = this->NetRefHandleManager;
  this_00->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
  this->ParentStatsContext = this_00;
  pFVar2 = ::FName::FName(&local_res8,L"Undefined");
  GetOrCreateTypeStats(this,*pFVar2);
  pFVar2 = ::FName::FName(&local_res8,L"OOBChannel");
  GetOrCreateTypeStats(this,*pFVar2);
  return this;
}

// ~FNetTypeStats @ 144327180

void __thiscall UE::Net::Private::FNetTypeStats::~FNetTypeStats(FNetTypeStats *this)

{
  void *pvVar1;
  FNetStatsContext *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((this->bIsInParallelPhase != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInParallelPhase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                         ,0x7a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if (0 < (this->ChildStatsContext).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->ChildStatsContext).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
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
      pvVar1 = *(void **)((this->ChildStatsContext).AllocatorInstance.Data + lVar8);
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 8));
        }
        ::operator_delete(pvVar1,0x20);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->ChildStatsContext).ArrayNum);
  }
  (this->ChildStatsContext).ArrayNum = 0;
  if ((this->ChildStatsContext).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ChildStatsContext).AllocatorInstance,0,
               &(this->ChildStatsContext).ArrayMax);
  }
  pFVar2 = this->ParentStatsContext;
  if (pFVar2 != (FNetStatsContext *)0x0) {
    pFVar3 = (pFVar2->TypeStatsData).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x20);
  }
  pFVar3 = (this->TypeStatsNames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ChildStatsContext).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001443272ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ChildStatsContextCS);
  return;
}

// Accumulate @ 144327780

void __thiscall
UE::Net::Private::FNetTypeStats::Accumulate(FNetTypeStats *this,FNetStatsContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId277,"FNetTypeStats_Accumulate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
               ,0x115);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId277);
  }
  if ((param_1 != this->ParentStatsContext) &&
     (((param_1->TypeStatsData).ArrayNum <= (this->TypeStatsNames).ArrayNum ||
      (bVar4 = `UE::Net::Private::FNetTypeStats::Accumulate'::__l6::<lambda_1>::operator()
                         (local_res8), bVar4)))) {
    pFVar1 = (param_1->TypeStatsData).AllocatorInstance.Data;
    iVar6 = (this->ParentStatsContext->TypeStatsData).ArrayNum;
    pFVar2 = (this->ParentStatsContext->TypeStatsData).AllocatorInstance.Data;
    if ((param_1->TypeStatsData).ArrayNum < iVar6) {
      iVar6 = (param_1->TypeStatsData).ArrayNum;
    }
    lVar9 = (longlong)iVar6;
    if (0 < iVar6) {
      pFVar5 = pFVar2 + 8;
      lVar8 = (longlong)pFVar1 - (longlong)pFVar2;
      lVar3 = -(longlong)pFVar2;
      lVar7 = 0;
      do {
        *(longlong *)(pFVar5 + -8) = *(longlong *)(pFVar5 + -8) + *(longlong *)(pFVar5 + lVar8 + -8)
        ;
        *(int *)pFVar5 = *(int *)pFVar5 + *(int *)(pFVar5 + lVar8);
        *(int *)(pFVar5 + 4) = *(int *)(pFVar5 + 4) + *(int *)(pFVar5 + lVar8 + 4);
        *(longlong *)(pFVar5 + 8) = *(longlong *)(pFVar5 + 8) + *(longlong *)(pFVar1 + lVar7 + 0x10)
        ;
        *(int *)(pFVar5 + 0x10) = *(int *)(pFVar5 + 0x10) + *(int *)(pFVar1 + lVar7 + 0x18);
        *(int *)(pFVar5 + 0x14) = *(int *)(pFVar5 + 0x14) + *(int *)(pFVar1 + lVar7 + 0x1c);
        *(longlong *)(pFVar5 + 0x18) =
             *(longlong *)(pFVar5 + 0x18) +
             *(longlong *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x18));
        *(int *)(pFVar5 + 0x20) =
             *(int *)(pFVar5 + 0x20) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x20));
        *(int *)(pFVar5 + 0x24) =
             *(int *)(pFVar5 + 0x24) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x24));
        *(longlong *)(pFVar5 + 0x28) =
             *(longlong *)(pFVar5 + 0x28) +
             *(longlong *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x28));
        *(int *)(pFVar5 + 0x30) =
             *(int *)(pFVar5 + 0x30) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x30));
        *(int *)(pFVar5 + 0x34) =
             *(int *)(pFVar5 + 0x34) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x34));
        *(longlong *)(pFVar5 + 0x38) =
             *(longlong *)(pFVar5 + 0x38) +
             *(longlong *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x38));
        *(int *)(pFVar5 + 0x40) =
             *(int *)(pFVar5 + 0x40) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x40));
        *(int *)(pFVar5 + 0x44) =
             *(int *)(pFVar5 + 0x44) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x44));
        *(longlong *)(pFVar5 + 0x48) =
             *(longlong *)(pFVar5 + 0x48) +
             *(longlong *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x48));
        *(int *)(pFVar5 + 0x50) =
             *(int *)(pFVar5 + 0x50) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x50));
        *(int *)(pFVar5 + 0x54) =
             *(int *)(pFVar5 + 0x54) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x54));
        *(longlong *)(pFVar5 + 0x58) =
             *(longlong *)(pFVar5 + 0x58) +
             *(longlong *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x58));
        *(int *)(pFVar5 + 0x60) =
             *(int *)(pFVar5 + 0x60) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x60));
        *(int *)(pFVar5 + 100) =
             *(int *)(pFVar5 + 100) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 100));
        *(longlong *)(pFVar5 + 0x68) =
             *(longlong *)(pFVar5 + 0x68) +
             *(longlong *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x68));
        *(int *)(pFVar5 + 0x70) =
             *(int *)(pFVar5 + 0x70) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x70));
        *(int *)(pFVar5 + 0x74) =
             *(int *)(pFVar5 + 0x74) + *(int *)(pFVar5 + (longlong)(pFVar1 + lVar3 + 0x74));
        pFVar5 = pFVar5 + 0x80;
        lVar9 = lVar9 + -1;
        lVar7 = lVar7 + 0x80;
      } while (lVar9 != 0);
    }
    FNetStatsContext::ResetStats(param_1,(this->TypeStatsNames).ArrayNum);
  }
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// AccumulateChildrenToParent @ 144327950

void __thiscall UE::Net::Private::FNetTypeStats::AccumulateChildrenToParent(FNetTypeStats *this)

{
  FNetStatsContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId261,"FNetTypeStats_AccumulateChildrenToParent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
               ,0x105);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId261);
  }
  if ((this->bIsInParallelPhase != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInParallelPhase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                         ,0x107,
                         L"Trying to expand Accumulate ChildStatsContexts from within a parallel phase. This is not supported as this expects ChildStatsContexts to remain constant."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = 0;
  while( true ) {
    if ((iVar4 < 0) || ((this->ChildStatsContext).ArrayNum <= iVar4)) {
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar1 = *(FNetStatsContext **)
              ((this->ChildStatsContext).AllocatorInstance.Data + (longlong)iVar4 * 8);
    if (pFVar1 == (FNetStatsContext *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_114328786719211252>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                         ,0x10c,"StatsContext");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      Accumulate(this,pFVar1);
    }
    iVar4 = iVar4 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// AcquireChildNetStatsContext @ 144327aa0

FNetStatsContext * __thiscall
UE::Net::Private::FNetTypeStats::AcquireChildNetStatsContext(FNetTypeStats *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNetStatsContext *pFVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FNetTypeStats *local_res8;
  
  uVar7 = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ChildStatsContextCS);
  uVar6 = 0;
  if (0 < (this->ChildStatsContext).ArrayNum) {
    lVar8 = 0;
    do {
      if (uVar7 != 0xffffffff) break;
      uVar4 = 0;
      if ((int)uVar6 < (this->ChildStatsContext).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNetStatsContext *)(*pcVar2)();
        return pFVar5;
      }
      if (*(char *)(*(longlong *)((this->ChildStatsContext).AllocatorInstance.Data + lVar8) + 0x19)
          == '\0') {
        uVar7 = 0;
        if ((int)uVar6 < (this->ChildStatsContext).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FNetStatsContext *)(*pcVar2)();
          return pFVar5;
        }
        lVar1 = *(longlong *)((this->ChildStatsContext).AllocatorInstance.Data + lVar8);
        if ((*(char *)(lVar1 + 0x19) != '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bIsAcquiredByTask",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStatsContext.h"
                               ,0x56,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FNetStatsContext *)(*pcVar2)();
          return pFVar5;
        }
        *(undefined1 *)(lVar1 + 0x19) = 1;
        uVar7 = uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->ChildStatsContext).ArrayNum);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ChildStatsContextCS);
  if (uVar7 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar7 < (this->ChildStatsContext).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNetStatsContext *)(*pcVar2)();
      return pFVar5;
    }
    return *(FNetStatsContext **)
            ((this->ChildStatsContext).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
  }
  local_res8 = this;
  `UE::Net::Private::FNetTypeStats::AcquireChildNetStatsContext'::__l2::<lambda_1>::operator()
            (&local_res8);
  pFVar5 = CreateChildNetStatsContext(this);
  if ((pFVar5 == (FNetStatsContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                         ,0xe6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNetStatsContext *)(*pcVar2)();
    return pFVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ChildStatsContextCS);
  if ((pFVar5->bIsAcquiredByTask != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsAcquiredByTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStatsContext.h"
                         ,0x56,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNetStatsContext *)(*pcVar2)();
    return pFVar5;
  }
  pFVar5->bIsAcquiredByTask = true;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ChildStatsContextCS);
  return pFVar5;
}

// CleanupChildNetStatsContexts @ 144328380

void __thiscall UE::Net::Private::FNetTypeStats::CleanupChildNetStatsContexts(FNetTypeStats *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ChildStatsContext).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ChildStatsContext).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((this->ChildStatsContext).AllocatorInstance.Data + lVar6);
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 8));
        }
        ::operator_delete(pvVar1,0x20);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ChildStatsContext).ArrayNum);
  }
  (this->ChildStatsContext).ArrayNum = 0;
  if ((this->ChildStatsContext).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ChildStatsContext).AllocatorInstance,0,
               &(this->ChildStatsContext).ArrayMax);
  }
  return;
}

// CreateChildNetStatsContext @ 1443291f0

FNetStatsContext * __thiscall
UE::Net::Private::FNetTypeStats::CreateChildNetStatsContext(FNetTypeStats *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNetStatsContext *pFVar6;
  bool bVar7;
  FNetStatsContext *local_18 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId196,"FNetTypeStats_CreateChildNetStatsContext",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
               ,0xc4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId196);
  }
  lpCriticalSection = &this->ChildStatsContextCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = ::operator_new(0x20);
  local_18[0] = (FNetStatsContext *)0x0;
  if (pFVar6 != (FNetStatsContext *)0x0) {
    pFVar6->NetRefHandleManager = (FNetRefHandleManager *)0x0;
    (pFVar6->TypeStatsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->TypeStatsData).ArrayNum = 0;
    (pFVar6->TypeStatsData).ArrayMax = 0;
    pFVar6->bShouldIncludeSubObjectWithRoot = false;
    pFVar6->bIsAcquiredByTask = false;
    local_18[0] = pFVar6;
  }
  FNetStatsContext::ResetStats(local_18[0],(this->TypeStatsNames).ArrayNum);
  local_18[0]->NetRefHandleManager = this->ParentStatsContext->NetRefHandleManager;
  local_18[0]->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
  pFVar2 = (this->ChildStatsContext).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar2 + (longlong)(this->ChildStatsContext).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNetStatsContext *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->ChildStatsContext).ArrayNum;
  piVar1 = &(this->ChildStatsContext).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ChildStatsContext).AllocatorInstance,piVar1);
  }
  pFVar6 = local_18[0];
  (this->ChildStatsContext).ArrayNum = iVar5 + 1;
  *(FNetStatsContext **)((this->ChildStatsContext).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar6;
}

// CreateNetStatsContext @ 144329510

FNetStatsContext * __thiscall
UE::Net::Private::FNetTypeStats::CreateNetStatsContext(FNetTypeStats *this)

{
  FNetStatsContext *this_00;
  
  this_00 = ::operator_new(0x20);
  if (this_00 != (FNetStatsContext *)0x0) {
    this_00->NetRefHandleManager = (FNetRefHandleManager *)0x0;
    (this_00->TypeStatsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->TypeStatsData).ArrayNum = 0;
    (this_00->TypeStatsData).ArrayMax = 0;
    this_00->bShouldIncludeSubObjectWithRoot = false;
    this_00->bIsAcquiredByTask = false;
  }
  FNetStatsContext::ResetStats(this_00,(this->TypeStatsNames).ArrayNum);
  this_00->NetRefHandleManager = this->NetRefHandleManager;
  this_00->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
  return this_00;
}

// GetOrCreateTypeStats @ 144330720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Net::Private::FNetTypeStats::GetOrCreateTypeStats(FNetTypeStats *this,FName param_1)

{
  int *piVar1;
  FName *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  void *_Dst;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FName local_res10;
  
  pFVar2 = (FName *)(this->TypeStatsNames).AllocatorInstance.Data;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (this->TypeStatsNames).ArrayNum) {
LAB_14433076b:
      local_res10 = param_1;
      if ((this->bIsInParallelPhase != false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsInParallelPhase",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                             ,0xa6,
                             L"Trying to expand TypeStatsNames from within a parallel phase. This is not supported as the net object list should never expand during a parallel phase"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar2 = (FName *)(this->TypeStatsNames).AllocatorInstance.Data;
      iVar6 = (this->TypeStatsNames).ArrayNum;
      if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->TypeStatsNames).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar7 = (this->TypeStatsNames).ArrayNum;
      piVar1 = &(this->TypeStatsNames).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->TypeStatsNames).AllocatorInstance,piVar1);
      }
      piVar1 = &(this->TypeStatsNames).ArrayNum;
      *piVar1 = iVar7 + 1;
      *(FName *)((this->TypeStatsNames).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_res10;
      TArray<UE::Net::Private::FNetTypeStatsData,TSizedDefaultAllocator<32>_>::SetNum
                (&this->ParentStatsContext->TypeStatsData,(this->TypeStatsNames).ArrayNum,Default);
      uVar11 = 0;
      if (0 < (this->ChildStatsContext).ArrayNum) {
        lVar13 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (this->ChildStatsContext).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
          uVar8 = *piVar1;
          lVar3 = *(longlong *)((this->ChildStatsContext).AllocatorInstance.Data + lVar13);
          iVar7 = *(int *)(lVar3 + 0x10);
          if (iVar7 < (int)uVar8) {
            iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x80,8,uVar8 - iVar7,(ForAnyElementType *)(lVar3 + 8),
                               (int *)(lVar3 + 0x10),(int *)(lVar3 + 0x14));
            DefaultConstructItems<UE::Net::Private::FNetTypeStatsData,int>
                      ((void *)((longlong)iVar9 * 0x80 + *(longlong *)(lVar3 + 8)),uVar8 - iVar7);
          }
          else {
            if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
            }
            if ((int)uVar8 < iVar7) {
              uVar12 = iVar7 - uVar8;
              if (((int)(uVar12 | uVar8) < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                iVar6 = (*pcVar4)();
                return iVar6;
              }
              if (uVar12 != 0) {
                _Dst = (void *)((longlong)(int)uVar8 * 0x80 + *(longlong *)(lVar3 + 8));
                iVar7 = (*(int *)(lVar3 + 0x10) - uVar8) - uVar12;
                if (iVar7 != 0) {
                  memmove(_Dst,(void *)((longlong)(int)uVar12 * 0x80 + (longlong)_Dst),
                          (longlong)iVar7 << 7);
                }
                iVar7 = *(int *)(lVar3 + 0x10) - uVar12;
                *(int *)(lVar3 + 0x10) = iVar7;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x80,8,(ForAnyElementType *)(lVar3 + 8),iVar7,(int *)(lVar3 + 0x14));
              }
            }
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 8;
        } while ((int)uVar11 < (this->ChildStatsContext).ArrayNum);
      }
      return iVar6;
    }
    if (*pFVar10 == param_1) {
      iVar6 = (int)((longlong)pFVar10 - (longlong)pFVar2 >> 3);
      if (iVar6 != -1) {
        return iVar6;
      }
      goto LAB_14433076b;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// Init @ 1443319d0

void __thiscall UE::Net::Private::FNetTypeStats::Init(FNetTypeStats *this,FInitParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNetStatsContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = this->ParentStatsContext;
  iVar2 = (this->TypeStatsNames).ArrayNum;
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  FNetStatsContext::ResetStats(pFVar3,iVar2);
  pFVar3->NetRefHandleManager = this->NetRefHandleManager;
  pFVar3->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
  pFVar6 = (this->ChildStatsContext).AllocatorInstance.Data;
  iVar2 = (this->ChildStatsContext).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildStatsContext).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FNetStatsContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pFVar3 = *(FNetStatsContext **)pFVar6;
    if (pFVar3 == (FNetStatsContext *)0x0) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_114328786719211369>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                         ,0x97,"ChildStatsContextPtr");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      FNetStatsContext::ResetStats(pFVar3,(this->TypeStatsNames).ArrayNum);
      pFVar3->NetRefHandleManager = this->NetRefHandleManager;
      pFVar3->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// PreUpdateSetup @ 144334d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetTypeStats::PreUpdateSetup(FNetTypeStats *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNetStatsContext *pFVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  FNetStatsContext *local_28 [2];
  
  iVar8 = (LowLevelTasks::FScheduler::Singleton.WorkerLocalQueues.ArrayNum + 1) -
          (this->ChildStatsContext).ArrayNum;
  if (((byte)LogNetStats._0_1_ < 5) || (iVar8 < 1)) {
    if (iVar8 < 1) {
      return;
    }
  }
  else {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetStats);
  }
  iVar7 = 0;
  lpCriticalSection = &this->ChildStatsContextCS;
  while( true ) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId196,"FNetTypeStats_CreateChildNetStatsContext",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                 ,0xc4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId196);
    }
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = ::operator_new(0x20);
    local_28[0] = (FNetStatsContext *)0x0;
    if (pFVar6 != (FNetStatsContext *)0x0) {
      pFVar6->NetRefHandleManager = (FNetRefHandleManager *)0x0;
      (pFVar6->TypeStatsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->TypeStatsData).ArrayNum = 0;
      (pFVar6->TypeStatsData).ArrayMax = 0;
      pFVar6->bShouldIncludeSubObjectWithRoot = false;
      pFVar6->bIsAcquiredByTask = false;
      local_28[0] = pFVar6;
    }
    FNetStatsContext::ResetStats(local_28[0],(this->TypeStatsNames).ArrayNum);
    local_28[0]->NetRefHandleManager = this->ParentStatsContext->NetRefHandleManager;
    local_28[0]->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
    pFVar2 = (this->ChildStatsContext).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         pFVar2 + (longlong)(this->ChildStatsContext).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = (this->ChildStatsContext).ArrayNum;
    piVar1 = &(this->ChildStatsContext).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ChildStatsContext).AllocatorInstance,piVar1);
    }
    (this->ChildStatsContext).ArrayNum = iVar5 + 1;
    *(FNetStatsContext **)((this->ChildStatsContext).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_28[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    iVar7 = iVar7 + 1;
    if (iVar8 <= iVar7) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ReleaseChildNetStatsContext @ 144338e60

void __thiscall
UE::Net::Private::FNetTypeStats::ReleaseChildNetStatsContext
          (FNetTypeStats *this,FNetStatsContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 local_res10 [24];
  
  if (param_1 == (FNetStatsContext *)0x0) {
    local_res10[0] = 0;
    bVar2 = `UE::Net::Private::FNetTypeStats::ReleaseChildNetStatsContext'::__l3::<lambda_1>::
            operator()(local_res10);
    if (!bVar2) {
      return;
    }
  }
  lpCriticalSection = &this->ChildStatsContextCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->bIsAcquiredByTask == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StatsContext->CanAcquire()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                       ,0xf5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->bIsAcquiredByTask == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsAcquiredByTask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStatsContext.h"
                           ,0x5b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->bIsAcquiredByTask = false;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReportCSVStats @ 144338f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Net::Private::FNetTypeStats::ReportCSVStats(FNetTypeStats *this)

{
  FNetStatsContext *pFVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FCsvProfiler *this_00;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStackY_118 [32];
  FName local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = FCsvProfiler::Get();
  bVar5 = FCsvProfiler::IsCapturing(this_00);
  this->bIsEnabled = bVar5;
  if (bVar5) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId314,"FNetTypeStats_ReportCSVStats",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                 ,0x13a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId314);
    }
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId261,"FNetTypeStats_AccumulateChildrenToParent",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                 ,0x105);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId261);
    }
    if ((this->bIsInParallelPhase != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInParallelPhase",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                           ,0x107,
                           L"Trying to expand Accumulate ChildStatsContexts from within a parallel phase. This is not supported as this expects ChildStatsContexts to remain constant."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar11 = 0;
    uVar12 = uVar11;
    while ((iVar9 = (int)uVar12, -1 < iVar9 && (iVar9 < (this->ChildStatsContext).ArrayNum))) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FNetStatsContext **)
                ((this->ChildStatsContext).AllocatorInstance.Data + (longlong)iVar9 * 8);
      if (pFVar1 == (FNetStatsContext *)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_114328786719211252>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                           ,0x10c,"StatsContext");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        Accumulate(this,pFVar1);
      }
      uVar12 = (ulonglong)(iVar9 + 1);
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    fVar4 = __real_3a83126f;
    dVar3 = __real_408f400000000000;
    if (0 < (this->TypeStatsNames).ArrayNum) {
      pFVar8 = (this->ParentStatsContext->TypeStatsData).AllocatorInstance.Data + 0x10;
      uVar12 = uVar11;
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < (this->TypeStatsNames).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_e8[0] = *(FName *)((this->TypeStatsNames).AllocatorInstance.Data + uVar12);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisPreUpdateMS.Index,
                   (double)*(ulonglong *)(pFVar8 + -0x10) * FGenericPlatformTime::SecondsPerCycle64
                   * dVar3,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisPreUpdateCount.Index,*(int *)(pFVar8 + -4),Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisPollMS.Index,
                   (double)*(ulonglong *)pFVar8 * FGenericPlatformTime::SecondsPerCycle64 * dVar3,
                   Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisPollCount.Index,*(int *)(pFVar8 + 0xc),Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisPollWasteMS.Index,
                   (double)*(ulonglong *)(pFVar8 + 0x10) * FGenericPlatformTime::SecondsPerCycle64 *
                   dVar3,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisPollWasteCount.Index,*(int *)(pFVar8 + 0x1c),Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisQuantizeMS.Index,
                   (double)*(ulonglong *)(pFVar8 + 0x20) * FGenericPlatformTime::SecondsPerCycle64 *
                   dVar3,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisQuantizeCount.Index,*(int *)(pFVar8 + 0x2c),Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteMS.Index,
                   (double)*(ulonglong *)(pFVar8 + 0x30) * FGenericPlatformTime::SecondsPerCycle64 *
                   dVar3,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteCount.Index,*(int *)(pFVar8 + 0x3c),Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteKBytes.Index,
                   (float)(*(int *)(pFVar8 + 0x38) + 7U >> 3) * fVar4,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteWasteMS.Index,
                   (double)*(ulonglong *)(pFVar8 + 0x40) * FGenericPlatformTime::SecondsPerCycle64 *
                   dVar3,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteWasteCount.Index,*(int *)(pFVar8 + 0x4c),Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteWasteKBytes.Index,
                   (float)(*(int *)(pFVar8 + 0x48) + 7U >> 3) * fVar4,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteCreationInfoKBytes.Index,
                   (float)(*(int *)(pFVar8 + 0x58) + 7U >> 3) * fVar4,Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteCreationInfoCount.Index,*(int *)(pFVar8 + 0x5c),
                   Set);
        FCsvProfiler::RecordCustomStat
                  (local_e8,_GCsvCategory_IrisWriteExportsCount.Index,*(int *)(pFVar8 + 0x6c),Set);
        local_d8 = 0;
        uVar11 = (ulonglong)(uVar10 + 1);
        uStack_d0 = 0;
        uVar12 = uVar12 + 8;
        *(ulonglong *)(pFVar8 + -0x10) = 0;
        *(ulonglong *)(pFVar8 + -8) = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        *(ulonglong *)pFVar8 = 0;
        *(ulonglong *)(pFVar8 + 8) = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        *(ulonglong *)(pFVar8 + 0x10) = 0;
        *(ulonglong *)(pFVar8 + 0x18) = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        *(ulonglong *)(pFVar8 + 0x20) = 0;
        *(ulonglong *)(pFVar8 + 0x28) = 0;
        local_98 = 0;
        uStack_90 = 0;
        *(ulonglong *)(pFVar8 + 0x30) = 0;
        *(ulonglong *)(pFVar8 + 0x38) = 0;
        local_88 = 0;
        uStack_80 = 0;
        *(ulonglong *)(pFVar8 + 0x40) = 0;
        *(ulonglong *)(pFVar8 + 0x48) = 0;
        local_78 = 0;
        uStack_70 = 0;
        *(ulonglong *)(pFVar8 + 0x50) = 0;
        *(ulonglong *)(pFVar8 + 0x58) = 0;
        local_68 = 0;
        uStack_60 = 0;
        *(ulonglong *)(pFVar8 + 0x60) = 0;
        *(ulonglong *)(pFVar8 + 0x68) = 0;
        pFVar8 = pFVar8 + 0x80;
      } while ((int)(uVar10 + 1) < (this->TypeStatsNames).ArrayNum);
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ResetStats @ 144339f70

void __thiscall UE::Net::Private::FNetTypeStats::ResetStats(FNetTypeStats *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNetStatsContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = this->ParentStatsContext;
  FNetStatsContext::ResetStats(pFVar3,(this->TypeStatsNames).ArrayNum);
  pFVar3->NetRefHandleManager = this->NetRefHandleManager;
  pFVar3->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
  pFVar6 = (this->ChildStatsContext).AllocatorInstance.Data;
  iVar2 = (this->ChildStatsContext).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildStatsContext).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FNetStatsContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pFVar3 = *(FNetStatsContext **)pFVar6;
    if (pFVar3 == (FNetStatsContext *)0x0) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_114328786719211369>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.cpp"
                         ,0x97,"ChildStatsContextPtr");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      FNetStatsContext::ResetStats(pFVar3,(this->TypeStatsNames).ArrayNum);
      pFVar3->NetRefHandleManager = this->NetRefHandleManager;
      pFVar3->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// UpdateContext @ 14433ef80

void __thiscall
UE::Net::Private::FNetTypeStats::UpdateContext(FNetTypeStats *this,FNetStatsContext *param_1)

{
  FNetStatsContext::ResetStats(param_1,(this->TypeStatsNames).ArrayNum);
  param_1->NetRefHandleManager = this->NetRefHandleManager;
  param_1->bShouldIncludeSubObjectWithRoot = bCVARShouldIncludeSubObjectWithRoot;
  return;
}

// operator() @ 1504bc6f0

bool __thiscall
`UE::Net::Private::FNetTypeStats::AcquireChildNetStatsContext'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_114328786719211294>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_114328786719211294>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bc8d0

bool __thiscall
`UE::Net::Private::FNetTypeStats::ReleaseChildNetStatsContext'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_114328786719211278>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_114328786719211278>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bc990

bool __thiscall
`UE::Net::Private::FNetTypeStats::Accumulate'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_114328786719211235>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_114328786719211235>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

