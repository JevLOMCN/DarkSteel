// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 36

// <lambda_invoker_cdecl> @ 14d406970

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->CreatedTimestamp <= param_2) ||
      (param_3->CreatedTimestamp == __real_ffefffffffffffff)) &&
     ((param_1 <= param_3->DestroyedTimestamp ||
      (param_3->DestroyedTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406a80

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if ((param_1 <= param_3->LaunchedTimestamp) && (param_3->LaunchedTimestamp <= param_2)) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406ac0

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->StartedTimestamp < param_2) &&
      (param_3->StartedTimestamp != __real_ffefffffffffffff)) &&
     ((param_1 < param_3->FinishedTimestamp ||
      (param_3->FinishedTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406b50

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->LaunchedTimestamp <= param_1) &&
      (param_3->LaunchedTimestamp != __real_ffefffffffffffff)) &&
     ((param_2 <= param_3->ScheduledTimestamp ||
      (param_3->ScheduledTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406bd0

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->ScheduledTimestamp <= param_1) &&
      (param_3->ScheduledTimestamp != __real_ffefffffffffffff)) &&
     ((param_2 <= param_3->StartedTimestamp ||
      (param_3->StartedTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406c30

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_6>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->StartedTimestamp <= param_1) &&
      (param_3->StartedTimestamp != __real_ffefffffffffffff)) &&
     ((param_2 <= param_3->FinishedTimestamp ||
      (param_3->FinishedTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406c90

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_7>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->FinishedTimestamp <= param_1) &&
      (param_3->FinishedTimestamp != __real_ffefffffffffffff)) &&
     ((param_2 <= param_3->CompletedTimestamp ||
      (param_3->CompletedTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14d406cf0

bool __cdecl
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_8>::<lambda_invoker_cdecl>
          (double param_1,double param_2,FTaskInfo *param_3)

{
  if (((param_3->CompletedTimestamp <= param_1) &&
      (param_3->CompletedTimestamp != __real_ffefffffffffffff)) &&
     ((param_2 <= param_3->DestroyedTimestamp ||
      (param_3->DestroyedTimestamp == __real_ffefffffffffffff)))) {
    return true;
  }
  return false;
}

// operator()<bool_(__cdecl*)(double,double,TraceServices::FTaskInfo_const_&)> @ 14d4075a0

void __thiscall
`TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_9>::
operator()<bool_(__cdecl*)(double,double,TraceServices::FTaskInfo_const_&)>
          (void *this,_func___cdecl_bool_double_double_FTaskInfo_ptr *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FTaskInfo *pFVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  lVar4 = *(longlong *)((longlong)this + 0x20);
  iVar17 = 0;
  iVar11 = *(int *)(lVar4 + 0x58);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x40);
  iVar19 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar11 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x50);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x50) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar3 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar3 == 0) {
      lVar13 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14d40764d;
      uVar3 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar9 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (int)lVar13 + -1 + iVar19;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_14d40764d:
  local_res18 = *(uint *)(lVar4 + 0x58);
  TStack_68._padding_ = CONCAT44(uVar9,iVar17);
  uVar9 = local_res18 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar10;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)local_res18 >> 5;
  TStack_68._28_4_ = iVar10;
  TStack_68.BaseBitIndex = iVar19;
  uStack_48 = CONCAT44(uStack_8c,*(int *)(lVar4 + 0x38) - *(int *)(lVar4 + 100));
  TStack_68.Array = pTVar1;
  if ((((int)local_res18 < 0) || (iVar11 < (int)local_res18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(uint *)(lVar4 + 0x58);
  if (local_res18 != uVar3) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x50);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x50) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = -1 << ((byte)local_res18 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      uVar9 = uVar9 + 0x20;
      iVar17 = iVar17 + 1;
      local_res18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14d407760;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13 + -1 + uVar9;
    if ((int)uVar3 < (int)local_res18) {
      local_res18 = uVar3;
    }
  }
LAB_14d407760:
  do {
    if (*(int *)(lVar4 + 0x38) - *(int *)(lVar4 + 100) != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar13 = (longlong)TStack_68.CurrentBitIndex;
    if ((TStack_68.CurrentBitIndex == local_res18) && (TStack_68.Array == pTVar1)) {
      return;
    }
    lVar5 = *(longlong *)(lVar4 + 0x30);
    lVar15 = 0;
    lVar14 = *(longlong *)(lVar5 + 0x10 + lVar13 * 0x28);
    if (lVar14 != 0) {
      do {
        plVar6 = *(longlong **)((longlong)this + 0x20);
        pcVar7 = *(code **)(*plVar6 + 0x20);
        uVar9 = 0;
        if (lVar15 < lVar14) {
          uVar9 = (uint)((ulonglong)lVar15 >> 0x3f) ^ 1;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar12 = (FTaskInfo *)
                  (*pcVar7)(plVar6,*(undefined8 *)
                                    (*(longlong *)(lVar5 + 8 + lVar13 * 0x28) + lVar15 * 8));
        if (pFVar12 == (FTaskInfo *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Task",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                             ,0x297,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          bVar8 = (*param_1)(*(double *)this,*(double *)((longlong)this + 8),pFVar12);
          if ((bVar8) &&
             (iVar11 = (**(code **)((longlong)this + 0x10))
                                 (*(undefined8 *)((longlong)this + 0x18),pFVar12), iVar11 == 1))
          break;
        }
        lVar14 = *(longlong *)(lVar5 + 0x10 + lVar13 * 0x28);
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar14);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// FTasksProvider @ 14d426340

FTasksProvider * __thiscall
TraceServices::FTasksProvider::FTasksProvider(FTasksProvider *this,IAnalysisSession *param_1)

{
  IAnalysisSession *pIVar1;
  void *pvVar2;
  IEditableCounterProvider *pIVar3;
  FName local_res8;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FTasksProvider_TraceServices__6B_;
  this->Version = 0xffffffff;
  (this->Tasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tasks).ArrayNum = 0;
  (this->Tasks).ArrayMax = 0;
  *(undefined8 *)&this->ExecutionThreads = 0;
  *(undefined8 *)&(this->ExecutionThreads).field_0x8 = 0;
  *(undefined8 *)&(this->ExecutionThreads).field_0x20 = 0;
  *(undefined4 *)&(this->ExecutionThreads).field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionThreads).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionThreads).field_0x34 = 0;
  *(undefined4 *)&(this->ExecutionThreads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExecutionThreads).field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionThreads).field_0x48 = 0;
  *(undefined8 *)&this->WaitingThreads = 0;
  *(undefined8 *)&(this->WaitingThreads).field_0x8 = 0;
  *(undefined8 *)&(this->WaitingThreads).field_0x20 = 0;
  *(undefined4 *)&(this->WaitingThreads).field_0x28 = 0;
  *(undefined4 *)&(this->WaitingThreads).field_0x2c = 0x80;
  *(undefined4 *)&(this->WaitingThreads).field_0x34 = 0;
  *(undefined4 *)&(this->WaitingThreads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WaitingThreads).field_0x40 = 0;
  *(undefined4 *)&(this->WaitingThreads).field_0x48 = 0;
  pIVar1 = this->Session;
  this->WaitingForPrerequisitesTasksNum = 0;
  this->ScheduledTasksNum = 0;
  this->NamedThreadsScheduledTasksNum = 0;
  this->RunningTasksNum = 0;
  this->bCountersCreated = false;
  this->AliveTasksNum = 0;
  this->AliveTasksSize = 0;
  pvVar2 = ThreadLocalStoragePointer;
  this->FirstTaskId = 0xffffffffffffffff;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CounterProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8 = ::Name;
  pIVar3 = (IEditableCounterProvider *)(**(code **)((longlong)*pIVar1 + 0x100))(pIVar1,&local_res8);
  this->EditableCounterProvider = pIVar3;
  return this;
}

// ~FTasksProvider @ 14d42cca0

void __thiscall TraceServices::FTasksProvider::~FTasksProvider(FTasksProvider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FTasksProvider_TraceServices__6B_;
  *(undefined4 *)&(this->WaitingThreads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WaitingThreads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WaitingThreads);
  *(undefined4 *)&(this->ExecutionThreads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExecutionThreads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecutionThreads);
  DestructItems<TraceServices::FTaskInfo,__int64>
            ((FTaskInfo *)(this->Tasks).AllocatorInstance.Data,(this->Tasks).ArrayNum);
  pFVar2 = (this->Tasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14d431450

ETaskEnumerationResult __thiscall
`TraceServices::FTasksProvider::TryGetParallelForTasks'::__l2::<lambda_1>::operator()
          (void *this,FTaskInfo *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  ETaskEnumerationResult EVar5;
  int iVar6;
  
  if (((param_1->LaunchedThreadId == *(uint *)this) &&
      (*(double *)((longlong)this + 8) < param_1->LaunchedTimestamp)) &&
     (param_1->FinishedTimestamp <= *(double *)((longlong)this + 0x10) &&
      *(double *)((longlong)this + 0x10) != param_1->FinishedTimestamp)) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
    if (((FTaskInfo *)pFVar2->Data <= param_1) &&
       (param_1 < (FTaskInfo *)
                  (&((FTaskInfo *)pFVar2->Data)->Id + *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    *(ulong64 *)(pFVar2->Data + (longlong)iVar6 * 8) = param_1->Id;
  }
  return Continue;
}

// AddRelative @ 14d43bd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::AddRelative
          (FTasksProvider *this,undefined8 param_2_00,ulong64 param_2,int param_4,undefined8 param_5
          ,undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  if (5 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (param_2 == 0xffffffffffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_2;
  }
  lVar7 = (**(code **)(this->_padding_ + 0x20))(this,param_2);
  if (lVar7 == 0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    pFVar2 = (ForAnyElementType *)(lVar7 + param_4);
    iVar6 = *(int *)(lVar7 + 8 + (longlong)param_4);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar2,piVar1);
    }
    lVar7 = (longlong)iVar6;
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + lVar7 * 0x18 + 8) = param_6;
    *(undefined8 *)(pFVar3 + lVar7 * 0x18) = param_5;
    *(undefined4 *)(pFVar3 + lVar7 * 0x18 + 0x10) = param_7;
  }
  return;
}

// CreateCounters @ 14d449fd0

void __thiscall TraceServices::FTasksProvider::CreateCounters(FTasksProvider *this)

{
  IAnalysisSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  IEditableCounter *pIVar4;
  
  if (this->bCountersCreated != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCountersCreated == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->WaitingForPrerequisitesTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::WaitingForPrerequisitesTasks");
  (**(code **)((longlong)*this->WaitingForPrerequisitesTasksCounter + 0x18))
            (this->WaitingForPrerequisitesTasksCounter,
             L"Tasks: the number of tasks waiting for prerequisites (blocked by dependency)");
  (**(code **)((longlong)*this->WaitingForPrerequisitesTasksCounter + 0x20))
            (this->WaitingForPrerequisitesTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->TaskLatencyCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::TaskLatency");
  (**(code **)((longlong)*this->TaskLatencyCounter + 0x18))
            (this->TaskLatencyCounter,
             L"Tasks: tasks latency - the time from scheduling to execution start");
  (**(code **)((longlong)*this->TaskLatencyCounter + 0x20))(this->TaskLatencyCounter,1);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->ScheduledTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::ScheduledTasks");
  (**(code **)((longlong)*this->ScheduledTasksCounter + 0x18))
            (this->ScheduledTasksCounter,
             L"Tasks: number of scheduled tasks excluding named threads (the size of the queue)");
  (**(code **)((longlong)*this->ScheduledTasksCounter + 0x20))(this->ScheduledTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->NamedThreadsScheduledTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::NamedThreadsScheduledTasks");
  (**(code **)((longlong)*this->NamedThreadsScheduledTasksCounter + 0x18))
            (this->NamedThreadsScheduledTasksCounter,
             L"Tasks: number of scheduled tasks for named threads");
  (**(code **)((longlong)*this->NamedThreadsScheduledTasksCounter + 0x20))
            (this->NamedThreadsScheduledTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->RunningTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::RunningTasks");
  (**(code **)((longlong)*this->RunningTasksCounter + 0x18))
            (this->RunningTasksCounter,
             L"Tasks: level of parallelism - the number of tasks being executed");
  (**(code **)((longlong)*this->RunningTasksCounter + 0x20))(this->RunningTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->ExecutionTimeCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::ExecutionTime");
  (**(code **)((longlong)*this->ExecutionTimeCounter + 0x18))
            (this->ExecutionTimeCounter,L"Tasks: execution time");
  (**(code **)((longlong)*this->ExecutionTimeCounter + 0x20))(this->ExecutionTimeCounter,1);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->AliveTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::AliveTasks");
  (**(code **)((longlong)*this->AliveTasksCounter + 0x18))
            (this->AliveTasksCounter,
             L"Tasks: the numbers of tasks alive (created but not destroyed)");
  (**(code **)((longlong)*this->AliveTasksCounter + 0x20))(this->AliveTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->AliveTasksSizeCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::AliveTasksSize");
  (**(code **)((longlong)*this->AliveTasksSizeCounter + 0x18))
            (this->AliveTasksSizeCounter,
             L"Tasks: the total size of alive tasks (created but not destroyed)");
  (**(code **)((longlong)*this->AliveTasksSizeCounter + 0x20))(this->AliveTasksSizeCounter,0);
  this->bCountersCreated = true;
                    /* WARNING: Could not recover jumptable at 0x00014d44a28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  return;
}

// EnumerateTasks @ 14d45d500

void __thiscall
TraceServices::FTasksProvider::EnumerateTasks
          (FTasksProvider *this,double param_1,double param_2,ETaskEnumerationOption param_3,
          TFunctionRef<TraceServices::ETaskEnumerationResult___cdecl(TraceServices::FTaskInfo_const_&)>
          *param_4)

{
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  FTasksProvider *local_58;
  code *local_48 [4];
  code *local_28;
  code *local_20;
  code *local_18;
  code *local_10;
  
  local_48[0] = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
  local_48[1] = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_2>::
                <lambda_invoker_cdecl>;
  local_48[2] = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_3>::
                <lambda_invoker_cdecl>;
  local_48[3] = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_4>::
                <lambda_invoker_cdecl>;
  local_28 = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_5>::
             <lambda_invoker_cdecl>;
  local_20 = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_6>::
             <lambda_invoker_cdecl>;
  local_18 = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_7>::
             <lambda_invoker_cdecl>;
  local_10 = `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_8>::
             <lambda_invoker_cdecl>;
  local_68 = *(undefined8 *)param_4;
  local_60 = *(undefined8 *)&param_4->field_0x8;
  local_78 = param_1;
  local_70 = param_2;
  local_58 = this;
  `TraceServices::FTasksProvider::EnumerateTasks'::__l2::<lambda_9>::
  operator()<bool_(__cdecl*)(double,double,TraceServices::FTaskInfo_const_&)>
            (&local_78,local_48[param_3]);
  return;
}

// GetNumTasks @ 14d46a7a0

long64 __thiscall TraceServices::FTasksProvider::GetNumTasks(FTasksProvider *this)

{
  return (this->Tasks).ArrayNum;
}

// GetTaskIndex @ 14d46e030

long64 __thiscall TraceServices::FTasksProvider::GetTaskIndex(FTasksProvider *this,ulong64 param_1)

{
  return param_1 - this->FirstTaskId;
}

// Init @ 14d4726d0

void __thiscall TraceServices::FTasksProvider::Init(FTasksProvider *this,uint param_1)

{
  IAnalysisSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  IEditableCounter *pIVar4;
  
  this->Version = param_1;
  if (this->bCountersCreated != false) {
    return;
  }
  if (this->bCountersCreated != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCountersCreated == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->WaitingForPrerequisitesTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::WaitingForPrerequisitesTasks");
  (**(code **)((longlong)*this->WaitingForPrerequisitesTasksCounter + 0x18))
            (this->WaitingForPrerequisitesTasksCounter,
             L"Tasks: the number of tasks waiting for prerequisites (blocked by dependency)");
  (**(code **)((longlong)*this->WaitingForPrerequisitesTasksCounter + 0x20))
            (this->WaitingForPrerequisitesTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->TaskLatencyCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::TaskLatency");
  (**(code **)((longlong)*this->TaskLatencyCounter + 0x18))
            (this->TaskLatencyCounter,
             L"Tasks: tasks latency - the time from scheduling to execution start");
  (**(code **)((longlong)*this->TaskLatencyCounter + 0x20))(this->TaskLatencyCounter,1);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->ScheduledTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::ScheduledTasks");
  (**(code **)((longlong)*this->ScheduledTasksCounter + 0x18))
            (this->ScheduledTasksCounter,
             L"Tasks: number of scheduled tasks excluding named threads (the size of the queue)");
  (**(code **)((longlong)*this->ScheduledTasksCounter + 0x20))(this->ScheduledTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->NamedThreadsScheduledTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::NamedThreadsScheduledTasks");
  (**(code **)((longlong)*this->NamedThreadsScheduledTasksCounter + 0x18))
            (this->NamedThreadsScheduledTasksCounter,
             L"Tasks: number of scheduled tasks for named threads");
  (**(code **)((longlong)*this->NamedThreadsScheduledTasksCounter + 0x20))
            (this->NamedThreadsScheduledTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->RunningTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::RunningTasks");
  (**(code **)((longlong)*this->RunningTasksCounter + 0x18))
            (this->RunningTasksCounter,
             L"Tasks: level of parallelism - the number of tasks being executed");
  (**(code **)((longlong)*this->RunningTasksCounter + 0x20))(this->RunningTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->ExecutionTimeCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::ExecutionTime");
  (**(code **)((longlong)*this->ExecutionTimeCounter + 0x18))
            (this->ExecutionTimeCounter,L"Tasks: execution time");
  (**(code **)((longlong)*this->ExecutionTimeCounter + 0x20))(this->ExecutionTimeCounter,1);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->AliveTasksCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::AliveTasks");
  (**(code **)((longlong)*this->AliveTasksCounter + 0x18))
            (this->AliveTasksCounter,
             L"Tasks: the numbers of tasks alive (created but not destroyed)");
  (**(code **)((longlong)*this->AliveTasksCounter + 0x20))(this->AliveTasksCounter,0);
  pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
  this->AliveTasksSizeCounter = pIVar4;
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"Tasks::AliveTasksSize");
  (**(code **)((longlong)*this->AliveTasksSizeCounter + 0x18))
            (this->AliveTasksSizeCounter,
             L"Tasks: the total size of alive tasks (created but not destroyed)");
  (**(code **)((longlong)*this->AliveTasksSizeCounter + 0x20))(this->AliveTasksSizeCounter,0);
  this->bCountersCreated = true;
                    /* WARNING: Could not recover jumptable at 0x00014d44a28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  return;
}

// InitTaskIdToIndexConversion @ 14d4726f0

void __thiscall
TraceServices::FTasksProvider::InitTaskIdToIndexConversion(FTasksProvider *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  return;
}

// IsNamedThread @ 14d474c90

bool __cdecl TraceServices::FTasksProvider::IsNamedThread(int param_1)

{
  uint uVar1;
  
  uVar1 = 0xff;
  if ((param_1 & 0xffU) != 0xff) {
    uVar1 = param_1 & 0xffU;
  }
  return uVar1 != 0xff;
}

// SubsequentAdded @ 14d48c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::SubsequentAdded
          (FTasksProvider *this,ulong64 param_1,ulong64 param_2,double param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FTaskInfo *pFVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  
  if (param_1 == 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar3 = TryGetOrCreateTask(this,param_1);
  if (pFVar3 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    pFVar3 = TryGetOrCreateTask(this,param_2);
    if (pFVar3 == (FTaskInfo *)0x0) {
      if (4 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    else {
      if ((pFVar3->StartedTimestamp == __real_ffefffffffffffff) ||
         (param_3 <= pFVar3->StartedTimestamp)) {
        AddRelative(this,L"Subsequent",param_1,0x80,param_2,param_3,param_4);
        uVar5 = 0x70;
        pwVar4 = L"Prerequisite";
      }
      else {
        AddRelative(this,L"Parent",param_1,0x90,param_2,param_3,param_4);
        uVar5 = 0xa0;
        pwVar4 = L"Nested";
      }
      AddRelative(this,pwVar4,param_2,uVar5,param_1,param_3,param_4);
    }
  }
  return;
}

// TaskCompleted @ 14d48c8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskCompleted
          (FTasksProvider *this,ulong64 param_1,double param_2,uint param_3)

{
  double dVar1;
  IEditableCounter IVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FTaskInfo *pFVar6;
  longlong lVar7;
  
  if ((param_1 == 0xffffffffffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFirstTaskId != TaskTrace::InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                         ,0x1bb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar6 = TryGetOrCreateTask(this,param_1);
  dVar4 = __real_ffefffffffffffff;
  if (pFVar6 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    if ((__real_ffefffffffffffff == pFVar6->FinishedTimestamp) &&
       (__real_ffefffffffffffff != pFVar6->LaunchedTimestamp)) {
      if ((param_1 == 0xffffffffffffffff) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFirstTaskId != TaskTrace::InvalidId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                             ,0x1bb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->FirstTaskId == 0xffffffffffffffff) {
        this->FirstTaskId = param_1;
      }
      lVar7 = (**(code **)(this->_padding_ + 0x20))(this,param_1);
      if (lVar7 == 0) {
        if (4 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else {
        if ((dVar4 == *(double *)(lVar7 + 0x30)) && (dVar4 != *(double *)(lVar7 + 0x20))) {
          TaskStarted(this,param_1,param_2,*(uint *)(lVar7 + 0x54));
        }
        dVar1 = *(double *)(lVar7 + 0x38);
        *(double *)(lVar7 + 0x38) = param_2;
        if (dVar4 == dVar1) {
          if (this->bCountersCreated == false) {
            CreateCounters(this);
          }
          IVar2 = *this->RunningTasksCounter;
          this->RunningTasksNum = this->RunningTasksNum + -1;
          (**(code **)((longlong)IVar2 + 0x50))
                    (this->RunningTasksCounter,SUB84(param_2,0),this->RunningTasksNum);
          (**(code **)((longlong)*this->ExecutionTimeCounter + 0x48))
                    (this->ExecutionTimeCounter,SUB84(param_2,0),
                     *(double *)(lVar7 + 0x38) - *(double *)(lVar7 + 0x30));
        }
      }
    }
    pFVar6->CompletedTimestamp = param_2;
    pFVar6->CompletedThreadId = param_3;
  }
  return;
}

// TaskCreated @ 14d48cab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskCreated
          (FTasksProvider *this,ulong64 param_1,double param_2,uint param_3,ulong64 param_4)

{
  IEditableCounter IVar1;
  code *pcVar2;
  bool bVar3;
  FTaskInfo *pFVar4;
  
  if (5 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (param_1 == 0xffffffffffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar4 = TryGetOrCreateTask(this,param_1);
  if (pFVar4 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    bVar3 = __real_ffefffffffffffff == pFVar4->CreatedTimestamp;
    pFVar4->CreatedThreadId = param_3;
    pFVar4->TaskSize = param_4;
    pFVar4->CreatedTimestamp = param_2;
    if (bVar3) {
      if (this->bCountersCreated == false) {
        CreateCounters(this);
      }
      IVar1 = *this->AliveTasksCounter;
      this->AliveTasksNum = this->AliveTasksNum + 1;
      (**(code **)((longlong)IVar1 + 0x50))
                (this->AliveTasksCounter,SUB84(param_2,0),this->AliveTasksNum);
      IVar1 = *this->AliveTasksSizeCounter;
      this->AliveTasksSize = this->AliveTasksSize + param_4;
      (**(code **)((longlong)IVar1 + 0x50))
                (this->AliveTasksSizeCounter,SUB84(param_2,0),this->AliveTasksSize);
    }
  }
  return;
}

// TaskDestroyed @ 14d48cc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskDestroyed
          (FTasksProvider *this,ulong64 param_1,double param_2,uint param_3)

{
  IEditableCounter IVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FTaskInfo *pFVar5;
  
  if (param_1 == 0xffffffffffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar5 = TryGetOrCreateTask(this,param_1);
  dVar3 = __real_ffefffffffffffff;
  if (pFVar5 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    if ((__real_ffefffffffffffff == pFVar5->CompletedTimestamp) &&
       (__real_ffefffffffffffff != pFVar5->LaunchedTimestamp)) {
      TaskCompleted(this,param_1,param_2,param_3);
    }
    pFVar5->DestroyedThreadId = param_3;
    pFVar5->DestroyedTimestamp = param_2;
    if (dVar3 != pFVar5->LaunchedTimestamp) {
      if (this->bCountersCreated == false) {
        CreateCounters(this);
      }
      IVar1 = *this->AliveTasksCounter;
      this->AliveTasksNum = this->AliveTasksNum + -1;
      (**(code **)((longlong)IVar1 + 0x50))
                (this->AliveTasksCounter,SUB84(param_2,0),this->AliveTasksNum);
      pcVar2 = *(code **)((longlong)*this->AliveTasksSizeCounter + 0x50);
      this->AliveTasksSize = this->AliveTasksSize - pFVar5->TaskSize;
      (*pcVar2)(this->AliveTasksSizeCounter,SUB84(param_2,0),this->AliveTasksSize);
    }
  }
  return;
}

// TaskFinished @ 14d48cd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskFinished(FTasksProvider *this,ulong64 param_1,double param_2)

{
  double dVar1;
  IEditableCounter IVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  
  if (param_1 == 0xffffffffffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x20))(this,param_1);
  dVar4 = __real_ffefffffffffffff;
  if (lVar6 == 0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    if ((__real_ffefffffffffffff == *(double *)(lVar6 + 0x30)) &&
       (__real_ffefffffffffffff != *(double *)(lVar6 + 0x20))) {
      TaskStarted(this,param_1,param_2,*(uint *)(lVar6 + 0x54));
    }
    dVar1 = *(double *)(lVar6 + 0x38);
    *(double *)(lVar6 + 0x38) = param_2;
    if (dVar4 == dVar1) {
      if (this->bCountersCreated == false) {
        CreateCounters(this);
      }
      IVar2 = *this->RunningTasksCounter;
      this->RunningTasksNum = this->RunningTasksNum + -1;
      (**(code **)((longlong)IVar2 + 0x50))
                (this->RunningTasksCounter,SUB84(param_2,0),this->RunningTasksNum);
      (**(code **)((longlong)*this->ExecutionTimeCounter + 0x48))
                (this->ExecutionTimeCounter,SUB84(param_2,0),
                 *(double *)(lVar6 + 0x38) - *(double *)(lVar6 + 0x30));
    }
  }
  return;
}

// TaskLaunched @ 14d48ceb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskLaunched
          (FTasksProvider *this,ulong64 param_1,wchar_t *param_2,bool param_3,int param_4,
          double param_5,uint param_6,ulong64 param_7)

{
  double dVar1;
  IEditableCounter IVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FTaskInfo *pFVar6;
  FTaskInfo *pFVar7;
  undefined4 uVar8;
  
  uVar8 = SUB84(param_5,0);
  if (5 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if ((param_1 == 0xffffffffffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFirstTaskId != TaskTrace::InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                         ,0x1bb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar6 = TryGetOrCreateTask(this,param_1);
  dVar4 = __real_ffefffffffffffff;
  if (pFVar6 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    if (__real_ffefffffffffffff == pFVar6->CreatedTimestamp) {
      if (5 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      if ((param_1 == 0xffffffffffffffff) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFirstTaskId != TaskTrace::InvalidId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                             ,0x1bb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->FirstTaskId == 0xffffffffffffffff) {
        this->FirstTaskId = param_1;
      }
      pFVar7 = TryGetOrCreateTask(this,param_1);
      if (pFVar7 == (FTaskInfo *)0x0) {
        if (4 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else {
        dVar1 = pFVar7->CreatedTimestamp;
        pFVar7->CreatedThreadId = param_6;
        pFVar7->TaskSize = param_7;
        pFVar7->CreatedTimestamp = param_5;
        if (dVar4 == dVar1) {
          if (this->bCountersCreated == false) {
            CreateCounters(this);
          }
          IVar2 = *this->AliveTasksCounter;
          this->AliveTasksNum = this->AliveTasksNum + 1;
          (**(code **)((longlong)IVar2 + 0x50))(this->AliveTasksCounter,uVar8,this->AliveTasksNum);
          IVar2 = *this->AliveTasksSizeCounter;
          this->AliveTasksSize = this->AliveTasksSize + param_7;
          (**(code **)((longlong)IVar2 + 0x50))
                    (this->AliveTasksSizeCounter,uVar8,this->AliveTasksSize);
        }
      }
    }
    dVar1 = pFVar6->LaunchedTimestamp;
    pFVar6->ThreadToExecuteOn = param_4;
    pFVar6->LaunchedTimestamp = param_5;
    pFVar6->DebugName = param_2;
    pFVar6->bTracked = param_3;
    pFVar6->LaunchedThreadId = param_6;
    if (dVar4 == dVar1) {
      if (this->bCountersCreated == false) {
        CreateCounters(this);
      }
      IVar2 = *this->WaitingForPrerequisitesTasksCounter;
      this->WaitingForPrerequisitesTasksNum = this->WaitingForPrerequisitesTasksNum + 1;
      (**(code **)((longlong)IVar2 + 0x50))
                (this->WaitingForPrerequisitesTasksCounter,uVar8,
                 this->WaitingForPrerequisitesTasksNum);
    }
  }
  return;
}

// TaskScheduled @ 14d48d150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskScheduled
          (FTasksProvider *this,ulong64 param_1,double param_2,uint param_3)

{
  IEditableCounter IVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTaskInfo *pFVar5;
  uint uVar6;
  IEditableCounter *pIVar7;
  
  if (param_1 == 0xffffffffffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirstTaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1bb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar5 = TryGetOrCreateTask(this,param_1);
  if (pFVar5 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    bVar3 = __real_ffefffffffffffff == pFVar5->ScheduledTimestamp;
    pFVar5->ScheduledThreadId = param_3;
    pFVar5->ScheduledTimestamp = param_2;
    if (bVar3) {
      if (this->bCountersCreated == false) {
        CreateCounters(this);
      }
      IVar1 = *this->WaitingForPrerequisitesTasksCounter;
      this->WaitingForPrerequisitesTasksNum = this->WaitingForPrerequisitesTasksNum + -1;
      (**(code **)((longlong)IVar1 + 0x50))
                (this->WaitingForPrerequisitesTasksCounter,SUB84(param_2,0),
                 this->WaitingForPrerequisitesTasksNum);
      uVar6 = pFVar5->ThreadToExecuteOn & 0xff;
      uVar4 = 0xff;
      if (uVar6 != 0xff) {
        uVar4 = uVar6;
      }
      if (uVar4 == 0xff) {
        pIVar7 = this->ScheduledTasksCounter;
      }
      else {
        pIVar7 = this->NamedThreadsScheduledTasksCounter;
      }
      IVar1 = *pIVar7;
      this->ScheduledTasksNum = this->ScheduledTasksNum + 1;
      (**(code **)((longlong)IVar1 + 0x50))(pIVar7,SUB84(param_2,0));
    }
  }
  return;
}

// TaskStarted @ 14d48d2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::TaskStarted
          (FTasksProvider *this,ulong64 param_1,double param_2,uint param_3)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  IEditableCounter IVar3;
  code *pcVar4;
  double dVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  FTaskInfo *pFVar9;
  FTaskInfo *pFVar10;
  TArray<unsigned___int64,TSizedDefaultAllocator<64>_> *pTVar11;
  longlong lVar12;
  uint uVar13;
  IEditableCounter *pIVar14;
  undefined4 uVar15;
  ulong64 local_res10;
  uint local_res20 [2];
  
  uVar15 = SUB84(param_2,0);
  local_res10 = param_1;
  local_res20[0] = param_3;
  if ((param_1 == 0xffffffffffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFirstTaskId != TaskTrace::InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                         ,0x1bb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->FirstTaskId == 0xffffffffffffffff) {
    this->FirstTaskId = param_1;
  }
  pFVar9 = TryGetOrCreateTask(this,local_res10);
  uVar6 = local_res10;
  dVar5 = __real_ffefffffffffffff;
  if (pFVar9 == (FTaskInfo *)0x0) {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    if ((__real_ffefffffffffffff == pFVar9->ScheduledTimestamp) &&
       (__real_ffefffffffffffff != pFVar9->LaunchedTimestamp)) {
      uVar8 = pFVar9->LaunchedThreadId;
      if ((local_res10 == 0xffffffffffffffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFirstTaskId != TaskTrace::InvalidId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                             ,0x1bb,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->FirstTaskId == 0xffffffffffffffff) {
        this->FirstTaskId = uVar6;
      }
      pFVar10 = TryGetOrCreateTask(this,uVar6);
      if (pFVar10 == (FTaskInfo *)0x0) {
        if (4 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else {
        dVar1 = pFVar10->ScheduledTimestamp;
        pFVar10->ScheduledThreadId = uVar8;
        pFVar10->ScheduledTimestamp = param_2;
        if (dVar5 == dVar1) {
          if (this->bCountersCreated == false) {
            CreateCounters(this);
          }
          IVar3 = *this->WaitingForPrerequisitesTasksCounter;
          this->WaitingForPrerequisitesTasksNum = this->WaitingForPrerequisitesTasksNum + -1;
          (**(code **)((longlong)IVar3 + 0x50))
                    (this->WaitingForPrerequisitesTasksCounter,uVar15,
                     this->WaitingForPrerequisitesTasksNum);
          uVar13 = pFVar10->ThreadToExecuteOn & 0xff;
          uVar8 = 0xff;
          if (uVar13 != 0xff) {
            uVar8 = uVar13;
          }
          if (uVar8 == 0xff) {
            pIVar14 = this->ScheduledTasksCounter;
          }
          else {
            pIVar14 = this->NamedThreadsScheduledTasksCounter;
          }
          IVar3 = *pIVar14;
          this->ScheduledTasksNum = this->ScheduledTasksNum + 1;
          (**(code **)((longlong)IVar3 + 0x50))(pIVar14,uVar15);
        }
      }
    }
    dVar1 = pFVar9->StartedTimestamp;
    pFVar9->StartedTimestamp = param_2;
    pFVar9->StartedThreadId = local_res20[0];
    pTVar11 = TMapBase<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,0>_>
                          *)&this->ExecutionThreads,local_res20[0],local_res20);
    pFVar2 = (pTVar11->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar2 + pTVar11->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = pTVar11->ArrayNum;
    if (lVar12 == pTVar11->ArrayMax) {
      lVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                         (0x808,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
    }
    pFVar2 = (pTVar11->AllocatorInstance).Data;
    pTVar11->ArrayNum = lVar12 + 1;
    *(ulong64 *)(pFVar2 + lVar12 * 8) = local_res10;
    if (dVar5 == dVar1) {
      if (this->bCountersCreated == false) {
        CreateCounters(this);
      }
      uVar13 = pFVar9->ThreadToExecuteOn & 0xff;
      uVar8 = 0xff;
      if (uVar13 != 0xff) {
        uVar8 = uVar13;
      }
      if (uVar8 == 0xff) {
        pIVar14 = this->ScheduledTasksCounter;
      }
      else {
        pIVar14 = this->NamedThreadsScheduledTasksCounter;
      }
      IVar3 = *pIVar14;
      this->ScheduledTasksNum = this->ScheduledTasksNum + -1;
      (**(code **)((longlong)IVar3 + 0x50))(pIVar14,uVar15);
      IVar3 = *this->RunningTasksCounter;
      this->RunningTasksNum = this->RunningTasksNum + 1;
      (**(code **)((longlong)IVar3 + 0x50))(this->RunningTasksCounter,uVar15,this->RunningTasksNum);
      (**(code **)((longlong)*this->TaskLatencyCounter + 0x48))
                (this->TaskLatencyCounter,uVar15,
                 pFVar9->StartedTimestamp - pFVar9->ScheduledTimestamp);
    }
  }
  return;
}

// TryGetOrCreateTask @ 14d48d650

FTaskInfo * __thiscall
TraceServices::FTasksProvider::TryGetOrCreateTask(FTasksProvider *this,ulong64 param_1)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  FTaskInfo *pFVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar8 = param_1 - this->FirstTaskId;
  if (lVar8 < 0) {
    return (FTaskInfo *)0x0;
  }
  lVar7 = (this->Tasks).ArrayNum;
  plVar1 = &(this->Tasks).ArrayNum;
  if (lVar7 <= lVar8) {
    lVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0xb0,8,(lVar8 - lVar7) + 1,&(this->Tasks).AllocatorInstance,plVar1,
                       &(this->Tasks).ArrayMax);
    DefaultConstructItems<TraceServices::FTaskInfo,__int64>
              ((this->Tasks).AllocatorInstance.Data + lVar5 * 0xb0,(lVar8 - lVar7) + 1);
    if (lVar7 != *plVar1) {
      lVar9 = lVar7 * 0xb0;
      do {
        lVar10 = this->FirstTaskId + lVar7;
        uVar4 = 0;
        if (lVar7 < (this->Tasks).ArrayNum) {
          uVar4 = (uint)((ulonglong)lVar7 >> 0x3f) ^ 1;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FTaskInfo *)(*pcVar2)();
          return pFVar6;
        }
        lVar7 = lVar7 + 1;
        *(longlong *)((this->Tasks).AllocatorInstance.Data + lVar9) = lVar10;
        lVar9 = lVar9 + 0xb0;
      } while (lVar7 != *plVar1);
    }
  }
  uVar4 = 0;
  if (lVar8 < (this->Tasks).ArrayNum) {
    uVar4 = (uint)((ulonglong)lVar8 >> 0x3f) ^ 1;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTaskInfo *)(*pcVar2)();
    return pFVar6;
  }
  return (FTaskInfo *)((this->Tasks).AllocatorInstance.Data + lVar8 * 0xb0);
}

// TryGetParallelForTasks @ 14d48d7e0

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TraceServices::FTasksProvider::TryGetParallelForTasks
          (FTasksProvider *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          wchar_t *param_1,uint param_2,double param_3,double param_4)

{
  int iVar1;
  code *local_38;
  uint *local_30;
  uint local_28 [2];
  double local_20;
  double local_18;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = wcscmp(param_1,L"ParallelFor");
  if (iVar1 == 0) {
    local_30 = local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FTasksProvider::TryGetParallelForTasks'::__l2::<lambda_1>,enum_TraceServices::ETaskEnumerationResult,TraceServices::FTaskInfo_const_&>
               ::Call;
    local_20 = param_3;
    local_18 = param_4;
    local_28[0] = param_2;
    local_10 = __return_storage_ptr__;
    (**(code **)(this->_padding_ + 0x48))(this,param_3,param_4,0,&local_38);
  }
  return __return_storage_ptr__;
}

// TryGetTask @ 14d48d890

FTaskInfo * __thiscall
TraceServices::FTasksProvider::TryGetTask(FTasksProvider *this,ulong64 param_1)

{
  FTaskInfo *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d48d893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FTaskInfo *)(**(code **)(this->_padding_ + 0x20))();
  return pFVar1;
}

// TryGetTask @ 14d48d8a0

FTaskInfo * __thiscall
TraceServices::FTasksProvider::TryGetTask(FTasksProvider *this,uint param_1,double param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long64 lVar6;
  FTaskInfo *pFVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  FIdentityFunctor local_res10;
  double local_res18 [2];
  
  if (*(int *)&(this->ExecutionThreads).field_0x8 != *(int *)&(this->ExecutionThreads).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ExecutionThreads).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ExecutionThreads).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ExecutionThreads).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ExecutionThreads + (longlong)iVar4 * 0x28;
        if (*(uint *)(*(longlong *)&this->ExecutionThreads + (longlong)iVar4 * 0x28) == param_1) {
          plVar8 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar8 = (longlong *)0x0;
          }
          if (plVar8 == (longlong *)0x0) {
            return (FTaskInfo *)0x0;
          }
          local_res18[0] = param_2;
          lVar6 = AlgoImpl::
                  LowerBoundInternal<unsigned___int64_const_,__int64,double,FIdentityFunctor,_TraceServices::FTasksProvider::TryGetTask_::__l2::<lambda_1>_>
                            ((ulong64 *)*plVar8,plVar8[1],local_res18,local_res10,(<lambda_1>)this);
          if (lVar6 == 0) {
            return (FTaskInfo *)0x0;
          }
          lVar1 = lVar6 + -1;
          uVar5 = 0;
          if (lVar1 < plVar8[1]) {
            uVar5 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FTaskInfo *)(*pcVar2)();
            return pFVar7;
          }
          pFVar7 = (FTaskInfo *)
                   (**(code **)(this->_padding_ + 0x20))(this,*(undefined8 *)(*plVar8 + lVar1 * 8));
          if ((pFVar7 != (FTaskInfo *)0x0) && (param_2 < pFVar7->FinishedTimestamp)) {
            return pFVar7;
          }
          return (FTaskInfo *)0x0;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FTaskInfo *)0x0;
}

// TryGetTask @ 14d48d9e0

FTaskInfo * __thiscall
TraceServices::FTasksProvider::TryGetTask(FTasksProvider *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  FTaskInfo *pFVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_1 == 0xffffffffffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskId != TaskTrace::InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TasksProfiler.cpp"
                       ,0x1c9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTaskInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  lVar5 = param_1 - this->FirstTaskId;
  if ((-1 < lVar5) && (lVar5 < (this->Tasks).ArrayNum)) {
    uVar4 = 0;
    if (lVar5 < (this->Tasks).ArrayNum) {
      uVar4 = (uint)((ulonglong)lVar5 >> 0x3f) ^ 1;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTaskInfo *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FTaskInfo *)((this->Tasks).AllocatorInstance.Data + lVar5 * 0xb0);
  }
  return (FTaskInfo *)0x0;
}

// TryGetWaiting @ 14d48daa0

/* WARNING: Type propagation algorithm not settling */

FWaitingForTasks * __thiscall
TraceServices::FTasksProvider::TryGetWaiting
          (FTasksProvider *this,wchar_t *param_1,uint param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FWaitingForTasks *pFVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  iVar6 = wcscmp(param_1,L"WaitUntilTasksComplete");
  if (((((iVar6 == 0) || (iVar6 = wcscmp(param_1,L"GameThreadWaitForTask"), iVar6 == 0)) ||
       (iVar6 = wcscmp(param_1,L"Tasks::Wait"), iVar6 == 0)) ||
      (iVar6 = wcscmp(param_1,L"Tasks::BusyWait"), iVar6 == 0)) &&
     (*(int *)&(this->WaitingThreads).field_0x8 != *(int *)&(this->WaitingThreads).field_0x34)) {
    puVar9 = *(undefined1 **)&(this->WaitingThreads).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->WaitingThreads).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->WaitingThreads).field_0x48 - 1U & param_2)
                              * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->WaitingThreads + (longlong)iVar6 * 0x28;
        if (*(uint *)(*(longlong *)&this->WaitingThreads + (longlong)iVar6 * 0x28) == param_2) {
          plVar10 = (longlong *)0x0;
          plVar11 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar11 = plVar10;
          }
          if (plVar11 == (longlong *)0x0) {
            return (FWaitingForTasks *)0x0;
          }
          uVar3 = plVar11[1];
          uVar12 = uVar3;
          if ((longlong)uVar3 < 1) {
            return (FWaitingForTasks *)0x0;
          }
          do {
            uVar13 = uVar12 >> 1;
            if (*(double *)(*plVar11 + ((longlong)plVar10 + uVar13) * 0x20 + 0x10) <= param_3) {
              plVar10 = (longlong *)((longlong)plVar10 + uVar13 + (ulonglong)((uint)uVar12 & 1));
            }
            uVar12 = uVar13;
          } while (uVar13 != 0);
          if (plVar10 == (longlong *)0x0) {
            return (FWaitingForTasks *)0x0;
          }
          lVar1 = (longlong)plVar10 + -1;
          uVar7 = 0;
          if (lVar1 < (longlong)uVar3) {
            uVar7 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FWaitingForTasks *)(*pcVar4)();
            return pFVar8;
          }
          pFVar8 = (FWaitingForTasks *)(*plVar11 + lVar1 * 0x20);
          dVar2 = pFVar8->FinishedTimestamp;
          if ((dVar2 <= param_3) && (dVar2 != __real_ffefffffffffffff)) {
            return (FWaitingForTasks *)0x0;
          }
          return pFVar8;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  return (FWaitingForTasks *)0x0;
}

// WaitingFinished @ 14d490090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FTasksProvider::WaitingFinished(FTasksProvider *this,double param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  
  if (*(int *)&(this->WaitingThreads).field_0x8 != *(int *)&(this->WaitingThreads).field_0x34) {
    puVar6 = *(undefined1 **)&(this->WaitingThreads).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->WaitingThreads).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->WaitingThreads).field_0x48 - 1U & param_2)
                              * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->WaitingThreads + (longlong)iVar4 * 0x28;
        if (*(uint *)(*(longlong *)&this->WaitingThreads + (longlong)iVar4 * 0x28) == param_2) {
          plVar7 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 != (longlong *)0x0) {
            lVar1 = plVar7[1] + -1;
            uVar5 = 0;
            if (lVar1 < plVar7[1]) {
              uVar5 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
            }
            if (uVar5 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            *(double *)(plVar7[1] * 0x20 + -8 + *plVar7) = param_1;
            return;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// WaitingStarted @ 14d4901c0

/* WARNING: Removing unreachable block (ram,0x00014d49031b) */

void __thiscall
TraceServices::FTasksProvider::WaitingStarted
          (FTasksProvider *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          double param_2,uint param_3)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_> *pTVar5;
  longlong lVar6;
  uint local_res20 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  double local_18;
  undefined8 local_10;
  
  local_10 = __real_ffefffffffffffff;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if (&local_28 != param_1) {
    local_28.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = param_1->ArrayNum;
    local_28.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  local_res20[0] = param_3;
  local_18 = param_2;
  pTVar5 = TMapBase<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,0>_>
                       *)&this->WaitingThreads,param_3,local_res20);
  pTVar1 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(pTVar5->AllocatorInstance).Data;
  if (((pTVar1 <= &local_28) && (&local_28 < pTVar1 + pTVar5->ArrayMax * 2)) &&
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
  lVar6 = pTVar5->ArrayNum;
  if (lVar6 == pTVar5->ArrayMax) {
    lVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x820,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pFVar2 = (pTVar5->AllocatorInstance).Data;
  pTVar5->ArrayNum = lVar6 + 1;
  lVar6 = lVar6 * 0x20;
  *(undefined8 *)(pFVar2 + lVar6) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6) = local_28.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar6 + 8) = local_28.ArrayNum;
  *(int *)(pFVar2 + lVar6 + 0xc) = local_28.ArrayMax;
  *(double *)(pFVar2 + lVar6 + 0x10) = local_18;
  *(undefined8 *)(pFVar2 + lVar6 + 0x18) = local_10;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

