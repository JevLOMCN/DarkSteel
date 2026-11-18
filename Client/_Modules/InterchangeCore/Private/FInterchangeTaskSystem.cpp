// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 15

// <lambda_invoker_cdecl> @ 14e323cf0

bool __cdecl
`UE::Interchange::FInterchangeTaskSystem::Get'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  UE::Interchange::FInterchangeTaskSystem::Tick(TaskSystemPtr.Object);
  return true;
}

// FInterchangeTaskSystem @ 14e4008d0

FInterchangeTaskSystem * __thiscall
UE::Interchange::FInterchangeTaskSystem::FInterchangeTaskSystem(FInterchangeTaskSystem *this)

{
  undefined1 local_res8 [8];
  
  *(undefined8 *)&(this->OnTaskSystemTick).field_0x18 = 2;
  *(undefined8 *)&this->OnTaskSystemTick = 0;
  *(undefined8 *)&(this->OnTaskSystemTick).field_0x8 = 0;
  *(undefined8 *)&(this->OnTaskSystemTick).field_0x10 = 0;
  (this->TickTickerHandle).Object = (FElement *)0x0;
  (this->TickTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->TaskPerIdMap = 0;
  *(undefined8 *)&(this->TaskPerIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->TaskPerIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->TaskPerIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->TaskPerIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaskPerIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaskPerIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->TaskPerIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->TaskPerIdMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TaskPerIdMapCriticalSection,4000)
  ;
  *(undefined8 *)&(this->ReleaseAndDoneTasks).Elements = 0;
  *(undefined8 *)&(this->ReleaseAndDoneTasks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReleaseAndDoneTasks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x34 = 0;
  (this->ReleaseAndDoneTasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReleaseAndDoneTasks).HashSize = 0;
  this->PriorityValue = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PriorityValueCriticalSection,4000);
  (this->CancelTaskRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelTaskRequests).ArrayNum = 0;
  (this->CancelTaskRequests).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CancelTaskRequestsCriticalSection,4000);
  if (bIsCreatingSingleton == false) {
    `UE::Interchange::FInterchangeTaskSystem::FInterchangeTaskSystem'::__l5::<lambda_1>::operator()
              (local_res8);
  }
  return this;
}

// ~FInterchangeTaskSystem @ 14e404880

void __thiscall
UE::Interchange::FInterchangeTaskSystem::~FInterchangeTaskSystem(FInterchangeTaskSystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CancelTaskRequestsCriticalSection);
  pFVar3 = (this->CancelTaskRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PriorityValueCriticalSection);
  (this->ReleaseAndDoneTasks).HashSize = 0;
  FVar4 = (this->ReleaseAndDoneTasks).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReleaseAndDoneTasks).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TaskPerIdMapCriticalSection);
  *(undefined4 *)&(this->TaskPerIdMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->TaskPerIdMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaskPerIdMap);
  pTVar6 = (this->TickTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTaskSystemTick).field_0x8,*(int *)&(this->OnTaskSystemTick).field_0x10);
  pvVar5 = *(void **)&(this->OnTaskSystemTick).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// operator() @ 14e405cd0

bool __thiscall
`UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete'::__l2::<lambda_1>::operator()
          (void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  LPCRITICAL_SECTION lpCriticalSection_00;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  longlong *plVar20;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  uint local_res18;
  longlong *local_res20;
  FMemScope local_70;
  FDestructionSentinel local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name182,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name182,false,None,Default,true);
  FMemScope::FMemScope(&local_70,&LLMScope_Name182,true);
  bVar19 = true;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x80);
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
LAB_14e4060bf:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection_00);
  plVar2 = *(longlong **)((longlong)this + 8);
  local_res18 = *(uint *)(plVar2 + 1);
  uVar13 = (ulonglong)(int)local_res18;
  plVar20 = (longlong *)*plVar2;
  local_res20 = plVar20 + uVar13;
  plVar17 = local_res20;
LAB_14e405da0:
  while( true ) {
    if ((int)plVar2[1] != (int)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar20 == plVar17) goto LAB_14e405f4f;
    lVar16 = *plVar20;
    lVar18 = *(longlong *)this;
    if (*(int *)(lVar18 + 0x38) == *(int *)(lVar18 + 100)) break;
    lVar3 = *(longlong *)(lVar18 + 0x70);
    lVar14 = lVar18 + 0x68;
    if (lVar3 != 0) {
      lVar14 = lVar3;
    }
    lVar1 = (ulonglong)
            (*(int *)(lVar18 + 0x78) - 1U & (int)((ulonglong)lVar16 >> 0x20) * 0x17 + (int)lVar16) *
            4;
    iVar11 = *(int *)(lVar1 + lVar14);
    plVar17 = local_res20;
    if (iVar11 == -1) break;
    lVar14 = *(longlong *)(lVar18 + 0x30);
    do {
      if (*(longlong *)((longlong)iVar11 * 0x20 + lVar14) == lVar16) {
        lVar18 = lVar18 + 0x68;
        if (lVar3 != 0) {
          lVar18 = lVar3;
        }
        iVar11 = *(int *)(lVar1 + lVar18);
        goto joined_r0x00014e405e60;
      }
      iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar14);
    } while (iVar11 != -1);
    plVar20 = plVar20 + 1;
    uVar13 = (ulonglong)local_res18;
  }
LAB_14e405f32:
  plVar20 = plVar20 + 1;
  uVar13 = (ulonglong)local_res18;
  goto LAB_14e405da0;
joined_r0x00014e405e60:
  if (iVar11 == -1) goto LAB_14e405e87;
  plVar17 = (longlong *)((longlong)iVar11 * 0x20 + lVar14);
  if (*plVar17 == lVar16) {
    if (plVar17 != (longlong *)0x0) goto LAB_14e405eaf;
    goto LAB_14e405e89;
  }
  iVar11 = (int)plVar17[3];
  goto joined_r0x00014e405e60;
LAB_14e405e87:
  plVar17 = (longlong *)0x0;
LAB_14e405e89:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
LAB_14e405eaf:
  pTVar4 = (TReferenceControllerBase<1> *)plVar17[2];
  lVar16 = plVar17[1];
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar16 + 8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_14e4060bf;
  EnterCriticalSection(lpCriticalSection);
  cVar10 = *(char *)(lVar16 + 0x38);
  LeaveCriticalSection(lpCriticalSection);
  if (cVar10 != '\x02') {
    bVar19 = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_14e405f4f:
    LeaveCriticalSection(lpCriticalSection_00);
    if (bVar19 == false) {
      UE::Interchange::FInterchangeTaskSystem::Tick(*(FInterchangeTaskSystem **)this);
      this_00 = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_68);
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
      bVar7 = false;
      uVar15 = (this_00->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar15) {
        lVar16 = (longlong)(int)uVar15 << 4;
        bVar7 = false;
        do {
          uVar12 = 0;
          if ((int)uVar15 < (this_00->InvocationList).ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar5 = (this_00->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar5 + lVar16 + 8) == 0) ||
              (plVar2 = *(longlong **)(pFVar5 + lVar16), plVar2 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar2 + 0x68))(), cVar10 == '\0')) {
            bVar7 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
    }
    FMemScope::~FMemScope(&local_70);
    FLLMScope::~FLLMScope(local_res10);
    return bVar19;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  plVar17 = local_res20;
  goto LAB_14e405f32;
}

// operator() @ 14e4063e0

void __thiscall
`UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()
          (void *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  EInterchangeTaskStatus EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInterchangeTaskBase *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  TFuture<unsigned___int64> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong *puVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  int iVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined1 local_res20 [8];
  undefined1 local_108 [8];
  FScriptContainerElement *local_100;
  uint local_f8;
  uint local_f4;
  FScriptContainerElement *local_f0;
  <lambda_2> local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  FScriptContainerElement *local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  FInterchangeTaskBase *local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined8 local_90;
  undefined1 local_88 [72];
  
  dVar5 = __real_4170000000000000;
  if (param_2) {
    QueryPerformanceCounter(&local_d8);
    dVar4 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
  }
  else {
    dVar4 = 0.0;
  }
  dVar6 = __real_3fa110a137f38c54;
  local_f4 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_f4;
  pFVar18 = (param_1->AllocatorInstance).Data;
  local_c8 = pFVar18 + uVar11 * 8;
  do {
    pFVar20 = local_c8;
    local_f0 = pFVar18;
    if (param_1->ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar18 == pFVar20) {
      return;
    }
    lVar16 = *(longlong *)this;
    uVar11 = *(ulonglong *)pFVar18;
    if (*(int *)(lVar16 + 0x38) != *(int *)(lVar16 + 100)) {
      lVar13 = lVar16 + 0x68;
      if (*(longlong *)(lVar16 + 0x70) != 0) {
        lVar13 = *(longlong *)(lVar16 + 0x70);
      }
      iVar9 = *(int *)(lVar13 + ((ulonglong)(*(int *)(lVar16 + 0x78) - 1) &
                                (uVar11 >> 0x20) * 0x17 + uVar11) * 4);
      if (iVar9 != -1) {
        do {
          puVar19 = (ulonglong *)((longlong)iVar9 * 0x20 + *(longlong *)(lVar16 + 0x30));
          if (*puVar19 == uVar11) {
            if (puVar19 == (ulonglong *)0x0) goto LAB_14e4064ed;
            goto LAB_14e406513;
          }
          iVar9 = (int)puVar19[3];
        } while (iVar9 != -1);
      }
    }
    puVar19 = (ulonglong *)0x0;
LAB_14e4064ed:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14e406513:
    pTVar2 = (TReferenceControllerBase<1> *)puVar19[2];
    this_00 = (FInterchangeTaskBase *)puVar19[1];
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FInterchangeTaskBase *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_f8 = (this_00->PrerequisiteTasks).ArrayNum;
    uVar11 = (ulonglong)(int)local_f8;
    pFVar18 = (this_00->PrerequisiteTasks).AllocatorInstance.Data;
    local_100 = pFVar18 + uVar11 * 8;
    pFVar20 = local_100;
LAB_14e406565:
    while( true ) {
      if ((this_00->PrerequisiteTasks).ArrayNum != (int)uVar11) {
        local_108[0] = 0;
        `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (pFVar18 == pFVar20) break;
      lVar16 = *(longlong *)this;
      lVar13 = *(longlong *)pFVar18;
      iVar9 = (int)((ulonglong)lVar13 >> 0x20);
      if (*(int *)(lVar16 + 0xb0) != *(int *)(lVar16 + 0xdc)) {
        lVar14 = lVar16 + 0xe0;
        if (*(longlong *)(lVar16 + 0xe8) != 0) {
          lVar14 = *(longlong *)(lVar16 + 0xe8);
        }
        iVar22 = *(int *)(lVar14 + (ulonglong)
                                   ((int)lVar13 + iVar9 * 0x17 & *(int *)(lVar16 + 0xf0) - 1U) * 4);
        if (iVar22 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar16 + 0xa8) + (longlong)iVar22 * 0x10) == lVar13) {
              if (iVar22 != -1) goto LAB_14e4067b6;
              break;
            }
            iVar22 = *(int *)(*(longlong *)(lVar16 + 0xa8) + 8 + (longlong)iVar22 * 0x10);
          } while (iVar22 != -1);
        }
      }
      plVar21 = *(longlong **)((longlong)this + 8);
      uVar17 = (int)lVar13 + iVar9 * 0x17;
      pFVar20 = local_100;
      if ((int)plVar21[1] != *(int *)((longlong)plVar21 + 0x34)) {
        plVar15 = plVar21 + 7;
        if ((longlong *)plVar21[8] != (longlong *)0x0) {
          plVar15 = (longlong *)plVar21[8];
        }
        iVar9 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar21[9] - 1U & uVar17) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*plVar21 + (longlong)iVar9 * 0x10) == lVar13) goto LAB_14e4067b6;
            iVar9 = *(int *)(*plVar21 + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      if (*(int *)(lVar16 + 0x38) == *(int *)(lVar16 + 100)) goto LAB_14e4067b6;
      lVar14 = *(longlong *)(lVar16 + 0x70);
      lVar12 = lVar16 + 0x68;
      if (lVar14 != 0) {
        lVar12 = lVar14;
      }
      uVar11 = (ulonglong)(*(int *)(lVar16 + 0x78) - 1U & uVar17);
      iVar9 = *(int *)(lVar12 + uVar11 * 4);
      if (iVar9 == -1) goto LAB_14e4067b6;
      lVar12 = *(longlong *)(lVar16 + 0x30);
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar12) == lVar13) {
          lVar16 = lVar16 + 0x68;
          if (lVar14 != 0) {
            lVar16 = lVar14;
          }
          iVar9 = *(int *)(lVar16 + uVar11 * 4);
          goto joined_r0x00014e4066e5;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar12);
      } while (iVar9 != -1);
      pFVar18 = pFVar18 + 8;
      uVar11 = (ulonglong)local_f8;
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FInterchangeTaskBase *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar8 = (**(code **)(this_00->_padding_ + 8))(this_00);
    if (cVar8 == '\0') {
      if ((this_00 == (FInterchangeTaskBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lpCriticalSection_00 = &this_00->TaskStatusCriticalSection;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14e406b39;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (this_00->TaskStatus != Executing) {
        if (this_00->TaskStatus == Done) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4239390204441395171>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                             ,0x1d,"TaskStatus != EInterchangeTaskStatus::Done");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          this_00->TaskStatus = Executing;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if ((this_00 == (FInterchangeTaskBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(this_00->_padding_ + 0x10))(this_00);
      if ((this_00 == (FInterchangeTaskBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14e406b39;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      EVar1 = this_00->TaskStatus;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (EVar1 == Executing) {
        if ((this_00 == (FInterchangeTaskBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Interchange::FInterchangeTaskBase::SetTaskStatus(this_00,Done);
      }
    }
    else {
      if ((this_00 == (FInterchangeTaskBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar8 = (**(code **)(this_00->_padding_ + 8))(this_00);
      if (cVar8 == '\x01') {
        if ((this_00 == (FInterchangeTaskBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Interchange::FInterchangeTaskBase::SetTaskStatus(this_00,Executing);
        local_a8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::`2'::<lambda_2>::operator()'::`6'::<lambda_1>,1,0>
                    ::_vftable_;
        local_90 = 0;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,void>
                      ::Call;
        local_e8.Task.Object = this_00;
        local_e8.Task.SharedReferenceCount.ReferenceController = pTVar2;
        local_a0 = this_00;
        local_98 = pTVar2;
        pTVar10 = Async<__UE::Interchange::FInterchangeTaskSystem::Tick_::__l2::<lambda_2>::operator()_::__l29::<lambda_2>_>
                            ((TFuture<unsigned___int64> *)local_88,TaskGraph,&local_e8,
                             (TUniqueFunction<void___cdecl(void)> *)local_b8);
        if ((this_00 == (FInterchangeTaskBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (&this_00->Future != pTVar10) {
          *(undefined8 *)&this_00->Future = *(undefined8 *)pTVar10;
          *(undefined8 *)pTVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&(this_00->Future).field_0x8,
                     (FSharedReferencer<1> *)&pTVar10->field_0x8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_88._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.Task.SharedReferenceCount.ReferenceController);
      }
    }
    pTVar23 = pTVar2;
    if ((param_2) &&
       (QueryPerformanceCounter(&local_d0),
       dVar6 < ((double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) - dVar4))
    {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return;
    }
LAB_14e406ace:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar18 = local_f0 + 8;
    uVar11 = (ulonglong)local_f4;
  } while( true );
joined_r0x00014e4066e5:
  if (iVar9 == -1) goto LAB_14e406707;
  plVar21 = (longlong *)((longlong)iVar9 * 0x20 + lVar12);
  if (*plVar21 == lVar13) {
    if (plVar21 == (longlong *)0x0) goto LAB_14e406709;
    goto LAB_14e40672f;
  }
  iVar9 = (int)plVar21[3];
  goto joined_r0x00014e4066e5;
LAB_14e406707:
  plVar21 = (longlong *)0x0;
LAB_14e406709:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e40672f:
  pTVar23 = (TReferenceControllerBase<1> *)plVar21[2];
  lVar16 = plVar21[1];
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar16 + 8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_14e406b39:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  cVar8 = *(char *)(lVar16 + 0x38);
  LeaveCriticalSection(lpCriticalSection);
  if (cVar8 != '\x02') goto LAB_14e406ace;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  pFVar20 = local_100;
LAB_14e4067b6:
  uVar11 = (ulonglong)local_f8;
  pFVar18 = pFVar18 + 8;
  goto LAB_14e406565;
}

// operator() @ 14e406b50

void __thiscall
`UE::Interchange::FInterchangeTaskSystem::Get'::__l5::<lambda_2>::operator()(void *this)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  ulonglong uVar3;
  atomic<int> aVar4;
  int iVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulong64 uVar8;
  code *pcVar9;
  FInterchangeTaskSystem *pFVar10;
  TMap<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
  *pTVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TMap<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
  *pTVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FSharedReferencer<1> local_e8;
  TMap<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  TWeakPtr<FTSTicker::FElement,1> local_80;
  undefined8 local_70 [5];
  undefined4 local_44;
  
  if (TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4239390204441395114>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                        ,0x56,"TaskSystemPtr.IsValid()");
    if (!bVar12) {
      return;
    }
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar10 = TaskSystemPtr.Object;
  iStack_d8 = 0;
  pTVar19 = &(TaskSystemPtr.Object)->TaskPerIdMap;
  iVar5 = *(int *)&((TaskSystemPtr.Object)->TaskPerIdMap).field_0x28;
  puVar1 = &((TaskSystemPtr.Object)->TaskPerIdMap).field_0x10;
  local_c0 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&((TaskSystemPtr.Object)->TaskPerIdMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14e406c8d;
      uVar16 = puVar18[lVar13 + 1];
    }
    uStack_d4 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_d4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_c4 = local_c0 + -1 + local_res18;
    if (iVar5 < iStack_c4) {
      iStack_c4 = iVar5;
    }
  }
LAB_14e406c8d:
  uVar16 = *(uint *)&((TaskSystemPtr.Object)->TaskPerIdMap).field_0x28;
  uStack_bc = local_44;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_b8 = *(int *)&((TaskSystemPtr.Object)->TaskPerIdMap).field_0x8 -
              *(int *)&((TaskSystemPtr.Object)->TaskPerIdMap).field_0x34;
  uStack_c8 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_a8._28_4_ = local_44;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_e0 = pTVar19;
  local_d0 = puVar1;
  local_b0 = pTVar19;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(pFVar10->TaskPerIdMap).field_0x28;
  if (uVar16 != uVar6) {
    puVar17 = *(undefined1 **)&(pFVar10->TaskPerIdMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e406da0;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar16 = local_res20 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_14e406da0:
  do {
    pTVar11 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a8.CurrentBitIndex == uVar16) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar19)
       ) {
      if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((((TaskSystemPtr.Object)->TickTickerHandle).Object != (FElement *)0x0) &&
          (pTVar7 = ((TaskSystemPtr.Object)->TickTickerHandle).WeakReferenceCount.
                    ReferenceController, pTVar7 != (TReferenceControllerBase<1> *)0x0)) &&
         (0 < (int)pTVar7->SharedReferenceCount)) {
        if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_80.Object = ((TaskSystemPtr.Object)->TickTickerHandle).Object;
        local_80.WeakReferenceCount.ReferenceController =
             ((TaskSystemPtr.Object)->TickTickerHandle).WeakReferenceCount.ReferenceController;
        if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        FTSTicker::RemoveTicker(&local_80);
        if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar10 = TaskSystemPtr.Object;
        if (&(TaskSystemPtr.Object)->TickTickerHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_70
           ) {
          pTVar7 = ((TaskSystemPtr.Object)->TickTickerHandle).WeakReferenceCount.ReferenceController
          ;
          ((TaskSystemPtr.Object)->TickTickerHandle).Object = (FElement *)0x0;
          (pFVar10->TickTickerHandle).WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &pTVar7->WeakReferenceCount;
            aVar4 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
            }
          }
        }
      }
      bEndOfSingletonLife = true;
      local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TaskSystemPtr.Object = (FInterchangeTaskSystem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&TaskSystemPtr.SharedReferenceCount,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.ReferenceController);
      return;
    }
    lVar13 = *(longlong *)pTVar11;
    pTVar7 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_a8.CurrentBitIndex * 0x20 + 0x10 + lVar13);
    uVar8 = *(ulong64 *)((longlong)TStack_a8.CurrentBitIndex * 0x20 + lVar13);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar10 = TaskSystemPtr.Object;
    lpCriticalSection = &(TaskSystemPtr.Object)->TaskPerIdMapCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_14e407046:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &pFVar10->CancelTaskRequestsCriticalSection;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14e407046;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    UE::Interchange::FInterchangeTaskSystem::InternalAddCancelRequestNoLock(pFVar10,uVar8,false);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// AddTask @ 14e40fb00

ulong64 __thiscall
UE::Interchange::FInterchangeTaskSystem::AddTask
          (FInterchangeTaskSystem *this,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *param_1
          )

{
  ulong64 uVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar1 = AddTask(this,&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return uVar1;
}

// AddTask @ 14e40fb70

ulong64 __thiscall
UE::Interchange::FInterchangeTaskSystem::AddTask
          (FInterchangeTaskSystem *this,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *param_1
          ,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FWindowsRecursiveMutex *lpCriticalSection_01;
  EInterchangeTaskStatus EVar1;
  FInterchangeTaskBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  ulong64 *local_38;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *local_30;
  
  lpCriticalSection_00 = &this->TaskPerIdMapCriticalSection;
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    lpCriticalSection_01 = &this->PriorityValueCriticalSection;
    if (lpCriticalSection_01 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
      if (param_1->Object == (FInterchangeTaskBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      FInterchangeTaskBase::SetTaskStatus(param_1->Object,Waiting);
      uVar5 = this->PriorityValue;
      this->PriorityValue = uVar5 + 1;
      if (param_1->Object == (FInterchangeTaskBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      param_1->Object->TaskId = uVar5;
      if (param_1->Object == (FInterchangeTaskBase *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      pFVar2 = param_1->Object;
      lpCriticalSection = &pFVar2->TaskStatusCriticalSection;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        EVar1 = pFVar2->TaskStatus;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (EVar1 != Waiting) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetTaskStatus() == EInterchangeTaskStatus::Waiting",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                             ,0x27,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
        }
        TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
                  (&pFVar2->PrerequisiteTasks,param_2);
        if (param_1->Object == (FInterchangeTaskBase *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
        }
        local_38 = &param_1->Object->TaskId;
        local_30 = param_1;
        TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_const_&>_>
                  ((TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
                    *)&this->TaskPerIdMap,
                   (TPairInitializer<unsigned___int64_const_&,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_const_&>
                    *)&stack0x00000008,(bool *)&local_38);
        if (param_1->Object == (FInterchangeTaskBase *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
        }
        uVar5 = param_1->Object->TaskId;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CancelTask @ 14e417180

void __thiscall
UE::Interchange::FInterchangeTaskSystem::CancelTask
          (FInterchangeTaskSystem *this,ulong64 param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  
  lpCriticalSection = &this->TaskPerIdMapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &this->CancelTaskRequestsCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      InternalAddCancelRequestNoLock(this,param_1,param_2);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x00014e417203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Get @ 14e438180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterchangeTaskSystem * __cdecl UE::Interchange::FInterchangeTaskSystem::Get(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FInterchangeTaskSystem *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FTSTicker *this;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  undefined ***pppuVar9;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  FSharedReferencer<1> local_68;
  <lambda_2> local_60 [8];
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::Interchange::FInterchangeTaskSystem::Get'::__l2::
           _dynamic_atexit_destructor_for__TaskSystemPtr__);
    _Init_thread_footer(&::_TSS0);
  }
  if (TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                           ,0x40,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInterchangeTaskSystem *)(*pcVar3)();
      return pFVar6;
    }
    if ((bEndOfSingletonLife != false) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4239390204441395131>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                           ,0x45,"!bEndOfSingletonLife"), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInterchangeTaskSystem *)(*pcVar3)();
      return pFVar6;
    }
    bIsCreatingSingleton = true;
    pTVar7 = ::operator_new(0x170);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      local_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = (FInterchangeTaskSystem *)&DAT_00000010;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7[1]._padding_ = 0;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFInterchangeTaskSystem_Interchange_UE___00_SharedPointerInternals__6B_
      ;
      pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[2]._padding_ = 0;
      pTVar7[2].SharedReferenceCount = (atomic<int>)0x2;
      pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[3]._padding_ = 0;
      pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[4]._padding_ = 0;
      pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[6]._padding_ = 0;
      pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[6].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar7[7]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar7[7]._padding_ + 4) = 0;
      pTVar7[8]._padding_ = 0;
      pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar7 + 9),4000);
      pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[0xc]._padding_ = 0;
      pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar7[0xe]._padding_ = 0;
      *(undefined4 *)((longlong)&pTVar7[0xe]._padding_ + 4) = 0x80;
      pTVar7[0xe].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTVar7[0xe].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[0xf].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[0xf].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar7[0x10]._padding_ = 0;
      pTVar7[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[0x10].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar7 + 0x11),4000);
      pTVar7[0x13].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[0x13].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[0x14]._padding_ = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar7[0x14].SharedReferenceCount,4000);
      if (bIsCreatingSingleton == false) {
        local_78[0] = 0;
        `UE::Interchange::FInterchangeTaskSystem::FInterchangeTaskSystem'::__l5::<lambda_1>::
        operator()(local_78);
      }
      pFVar6 = (FInterchangeTaskSystem *)(pTVar7 + 1);
      if ((pFVar6 == (FInterchangeTaskSystem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FInterchangeTaskSystem *)(*pcVar3)();
        return pFVar6;
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_68.ReferenceController = pTVar7;
    }
    FVar4.ReferenceController = local_68.ReferenceController;
    local_70 = 0;
    TaskSystemPtr.Object = pFVar6;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&TaskSystemPtr.SharedReferenceCount,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    bIsCreatingSingleton = false;
    this = FTSTicker::GetCoreTicker();
    local_20 = (undefined ***)0x0;
    local_38 = &___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
    local_30 = `UE::Interchange::FInterchangeTaskSystem::Get'::__l5::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_48[0] = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>::
                  Call;
    pTVar8 = FTSTicker::AddTicker
                       (this,&local_58,L"InterchangeTaskSystemTickHandle",0.0,
                        (TUniqueFunction<bool___cdecl(float)> *)local_48);
    if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInterchangeTaskSystem *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = TaskSystemPtr.Object;
    if (&(TaskSystemPtr.Object)->TickTickerHandle != pTVar8) {
      ((TaskSystemPtr.Object)->TickTickerHandle).Object = pTVar8->Object;
      pTVar8->Object = (FElement *)0x0;
      pTVar7 = (pFVar6->TickTickerHandle).WeakReferenceCount.ReferenceController;
      (pFVar6->TickTickerHandle).WeakReferenceCount.ReferenceController =
           (pTVar8->WeakReferenceCount).ReferenceController;
      (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar7->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
      }
    }
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_48[0] != (code *)0x0) {
      pppuVar9 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar9 = local_20;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_UE::Interchange::FInterchangeTaskSystem::Get_::__l5::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPreExit,local_60);
    if ((TaskSystemPtr.Object == (FInterchangeTaskSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TaskSystemPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                           ,0x6f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FInterchangeTaskSystem *)(*pcVar3)();
      return pFVar6;
    }
  }
  return TaskSystemPtr.Object;
}

// GetTaskStatus @ 14e442f60

EInterchangeTaskStatus __thiscall
UE::Interchange::FInterchangeTaskSystem::GetTaskStatus(FInterchangeTaskSystem *this,ulong64 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  EInterchangeTaskStatus EVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong64 *puVar9;
  int iVar10;
  
  lpCriticalSection_00 = &this->TaskPerIdMapCriticalSection;
  if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14e4430c6;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if (*(int *)&(this->TaskPerIdMap).field_0x8 != *(int *)&(this->TaskPerIdMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->TaskPerIdMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->TaskPerIdMap).field_0x38;
    }
    iVar10 = *(int *)(puVar8 + (ulonglong)
                               ((int)(param_1 >> 0x20) * 0x17 + (int)param_1 &
                               *(int *)&(this->TaskPerIdMap).field_0x48 - 1U) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->TaskPerIdMap;
      iVar7 = iVar10;
      do {
        if (*(ulong64 *)((longlong)iVar7 * 0x20 + lVar1) == param_1) goto LAB_14e443010;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar1);
      } while (iVar7 != -1);
    }
  }
  EVar6 = Done;
  goto LAB_14e442fe8;
  while (iVar10 = (int)puVar9[3], iVar10 != -1) {
LAB_14e443010:
    puVar9 = (ulong64 *)((longlong)iVar10 * 0x20 + lVar1);
    if (*puVar9 == param_1) {
      if (puVar9 == (ulong64 *)0x0) goto LAB_14e443032;
      goto LAB_14e443058;
    }
  }
  puVar9 = (ulong64 *)0x0;
LAB_14e443032:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
LAB_14e443058:
  pTVar2 = (TReferenceControllerBase<1> *)puVar9[2];
  uVar3 = puVar9[1];
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (uVar3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(uVar3 + 8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_14e4430c6:
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  EVar6 = *(EInterchangeTaskStatus *)(uVar3 + 0x38);
  LeaveCriticalSection(lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14e442fe8:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  return EVar6;
}

// InternalAddCancelRequestNoLock @ 14e448330

void __thiscall
UE::Interchange::FInterchangeTaskSystem::InternalAddCancelRequestNoLock
          (FInterchangeTaskSystem *this,ulong64 param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInterchangeTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *pTVar8;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  if (*(int *)&(this->TaskPerIdMap).field_0x8 != *(int *)&(this->TaskPerIdMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TaskPerIdMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TaskPerIdMap).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->TaskPerIdMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar7 != -1) {
      while (*(ulong64 *)((longlong)iVar7 * 0x20 + *(longlong *)&this->TaskPerIdMap) != param_1) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this->TaskPerIdMap);
        if (iVar7 == -1) {
          return;
        }
      }
      pTVar8 = TMapBase<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
               ::FindChecked((TMapBase<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
                              *)&this->TaskPerIdMap,param_1);
      pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar8->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar7 = (this->CancelTaskRequests).ArrayNum;
      piVar1 = &(this->CancelTaskRequests).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->CancelTaskRequests).AllocatorInstance,piVar1);
      }
      (this->CancelTaskRequests).ArrayNum = iVar7 + 1;
      pFVar2 = (this->CancelTaskRequests).AllocatorInstance.Data + (longlong)iVar7 * 8;
      *(ulong64 *)pFVar2 = 0;
      if ((pFVar4 == (FInterchangeTaskBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(ulong64 *)pFVar2 = pFVar4->TaskId;
      if (param_2) {
        pFVar10 = (pFVar4->PrerequisiteTasks).AllocatorInstance.Data;
        iVar7 = (pFVar4->PrerequisiteTasks).ArrayNum;
        pFVar2 = pFVar10 + (longlong)iVar7 * 8;
        while( true ) {
          if ((pFVar4->PrerequisiteTasks).ArrayNum != iVar7) {
            `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar10 == pFVar2) break;
          InternalAddCancelRequestNoLock(this,*(ulong64 *)pFVar10,true);
          pFVar10 = pFVar10 + 8;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// Tick @ 14e460300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Interchange::FInterchangeTaskSystem::Tick(FInterchangeTaskSystem *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  longlong lVar1;
  EInterchangeTaskStatus EVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  FInterchangeTaskBase *this_00;
  code *pcVar7;
  FInterchangeTaskSystem *pFVar8;
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *pTVar9;
  char cVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  LPCRITICAL_SECTION p_Var16;
  undefined1 *puVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong *plVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *pTVar25;
  bool bVar26;
  undefined1 auStackY_238 [32];
  FIdentityFunctor local_1e8;
  char local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  uint local_1e4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_1d0;
  undefined1 local_1c0 [8];
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *local_1b8;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  FInterchangeTaskSystem *local_1a8;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  undefined8 local_160;
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *local_158;
  ulong64 local_150;
  LPCRITICAL_SECTION local_148;
  FInterchangeTaskSystem *local_140;
  undefined1 *local_138;
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined4 local_b4;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar26 = CpuChannel->Enabled < 0;
  local_1a8 = this;
  if (bVar26) {
    local_1e7 = '\0';
  }
  else {
    local_1e7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId218,"UE::Interchange::FInterchangeTaskSystem::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
               ,0xda);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId218);
  }
  cVar10 = !bVar26;
  bVar26 = IsInGameThread();
  if ((!bVar26) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                          ,0xdc,L""), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((GIsGarbageCollecting != false) &&
     (bVar26 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4239390204441394977>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                          ,0xdf,"!IsGarbageCollecting()"), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  p_Var16 = (LPCRITICAL_SECTION)&this->TaskPerIdMapCriticalSection;
  local_148 = p_Var16;
  if (p_Var16 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(p_Var16);
    lpCriticalSection_00 = &this->CancelTaskRequestsCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      local_1e4 = (this->CancelTaskRequests).ArrayNum;
      uVar12 = (ulonglong)(int)local_1e4;
      pTVar25 = (TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
                 *)&this->TaskPerIdMap;
      pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)
                (this->CancelTaskRequests).AllocatorInstance.Data;
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)
                ((pTVar23->AllocatorInstance).InlineData + uVar12 * 8);
      local_1b8 = pTVar25;
      local_1a0 = pTVar19;
      local_158 = pTVar25;
LAB_14e46045c:
      while( true ) {
        local_1b0 = pTVar23;
        if ((this->CancelTaskRequests).ArrayNum != (int)uVar12) {
          local_1e6 = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1e6);
          local_1b8 = pTVar25;
        }
        if (pTVar23 == pTVar19) break;
        lVar13 = *(longlong *)(pTVar23->AllocatorInstance).InlineData;
        local_1b8 = (TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
                     *)&this->TaskPerIdMap;
        if (*(int *)&(this->TaskPerIdMap).field_0x8 == *(int *)&(this->TaskPerIdMap).field_0x34)
        goto LAB_14e460665;
        puVar17 = &(this->TaskPerIdMap).field_0x38;
        puVar4 = *(undefined1 **)&(this->TaskPerIdMap).field_0x40;
        puVar14 = puVar17;
        if (puVar4 != (undefined1 *)0x0) {
          puVar14 = puVar4;
        }
        lVar1 = (ulonglong)
                (*(int *)&(this->TaskPerIdMap).field_0x48 - 1U &
                (int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13) * 4;
        iVar15 = *(int *)(puVar14 + lVar1);
        if (iVar15 == -1) goto LAB_14e460665;
        lVar5 = *(longlong *)
                 &((TMap<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
                    *)local_1b8)->field_0x0;
        do {
          if (*(longlong *)((longlong)iVar15 * 0x20 + lVar5) == lVar13) {
            if (puVar4 != (undefined1 *)0x0) {
              puVar17 = puVar4;
            }
            iVar15 = *(int *)(puVar17 + lVar1);
            if (iVar15 == -1) goto LAB_14e460548;
            goto LAB_14e460530;
          }
          iVar15 = *(int *)((longlong)iVar15 * 0x20 + 0x18 + lVar5);
        } while (iVar15 != -1);
        uVar12 = (ulonglong)local_1e4;
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((pTVar23->AllocatorInstance).InlineData + 8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (*(int *)&(this->TaskPerIdMap).field_0x8 != *(int *)&(this->TaskPerIdMap).field_0x34) {
        local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_1b8->Elements).field_0x10;
        local_1d0.ArrayNum = 0;
        local_1d0.ArrayMax = 0;
        local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uStack_190 = 0;
        local_1e0.ArrayNum = 0;
        local_1e0.ArrayMax = 0;
        local_88._0_8_ = 0;
        local_178 = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        uVar21 = *(uint *)&(local_1b8->Elements).field_0x28;
        local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)&DAT_00000001;
        uStack_18c = 1;
        uStack_17c = local_178;
        if (uVar21 != 0) {
          puVar18 = *(uint **)&(local_1b8->Elements).field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)local_188;
          }
          uStack_18c = *puVar18;
          local_178 = 0;
          uStack_190 = 0;
          while (uStack_18c == 0) {
            lVar13 = (longlong)(int)uStack_190;
            local_178 = local_178 + 0x20;
            uStack_190 = uStack_190 + 1;
            uStack_18c = 1;
            uStack_17c = uVar21;
            if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_190)
            goto LAB_14e4607d0;
            uStack_18c = puVar18[lVar13 + 1];
          }
          uStack_18c = -uStack_18c & uStack_18c;
          uVar12 = (ulonglong)uStack_18c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_168 = (int)lVar13;
          uStack_17c = (local_178 - 1) + local_168;
          if ((int)uVar21 < (int)uStack_17c) {
            uStack_17c = uVar21;
          }
        }
LAB_14e4607d0:
        uStack_174 = local_b4;
        pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TaskPerIdMap).field_0x10;
        iStack_170 = *(int *)&(local_1b8->Elements).field_0x8 -
                     *(int *)&(local_1b8->Elements).field_0x34;
        local_198 = local_1b8;
        uVar21 = *(uint *)&(local_1b8->Elements).field_0x28;
        TStack_128._padding_ = CONCAT44(uStack_18c,uStack_190);
        uStack_180 = 0xffffffff;
        uVar24 = uVar21 & 0xffffffe0;
        TStack_128.CurrentBitIndex = uStack_17c;
        TStack_128.UnvisitedBitMask = 0xffffffff;
        local_130 = local_1b8;
        iVar15 = (int)uVar21 >> 5;
        TStack_128._28_4_ = local_b4;
        TStack_128.BaseBitIndex = local_178;
        uStack_108 = CONCAT44(uStack_16c,iStack_170);
        local_1e4 = uVar21;
        local_1a0 = pTVar19;
        TStack_128.Array = local_188;
        if (((int)uVar21 < 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar3 = *(uint *)&(this->TaskPerIdMap).field_0x28;
        if (uVar21 != uVar3) {
          puVar17 = *(undefined1 **)&(this->TaskPerIdMap).field_0x20;
          if (puVar17 == (undefined1 *)0x0) {
            puVar17 = (undefined1 *)pTVar19;
          }
          uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
          while (uVar21 == 0) {
            lVar13 = (longlong)iVar15;
            uVar24 = uVar24 + 0x20;
            iVar15 = iVar15 + 1;
            uVar21 = uVar3;
            local_1e4 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_14e460900;
            uVar21 = *(uint *)(puVar17 + lVar13 * 4 + 4);
          }
          uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_164 = (int)lVar13;
          uVar21 = (uVar24 - 1) + local_164;
          local_1e4 = uVar21;
          if ((int)uVar3 < (int)uVar21) {
            uVar21 = uVar3;
            local_1e4 = uVar3;
          }
        }
LAB_14e460900:
        do {
          pTVar25 = local_130;
          if (*(int *)&(local_130->Elements).field_0x8 - *(int *)&(local_130->Elements).field_0x34
              != (int)uStack_108) {
            local_1e5 = 0;
            `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e5);
          }
          if (((TStack_128.CurrentBitIndex == uVar21) && (TStack_128.Array == pTVar19)) &&
             (pTVar25 == local_1b8)) {
            AlgoImpl::
            IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,_UE::Interchange::FInterchangeTaskSystem::Tick_::__l2::<lambda_1>_>_>
                      ((ulong64 *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum,local_1e8,
                       (<lambda_1> *)&local_1e8);
            AlgoImpl::
            IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,_UE::Interchange::FInterchangeTaskSystem::Tick_::__l2::<lambda_1>_>_>
                      ((ulong64 *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum,local_1e8,
                       (<lambda_1> *)&local_1e8);
            pFVar8 = local_1a8;
            local_138 = local_88;
            local_140 = local_1a8;
            `UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()
                      (&local_140,&local_1d0,true);
            `UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()
                      (&local_140,&local_1e0,false);
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            Append<FDefaultSetAllocator>
                      (&pFVar8->ReleaseAndDoneTasks,
                       (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                        *)local_88);
            uVar21 = local_60;
            uStack_190 = 0;
            local_178 = 0;
            uStack_17c = 0;
            if (local_60 == 0) goto LAB_14e460ce2;
            puVar18 = (uint *)(local_88 + 0x10);
            if (local_68 != (uint *)0x0) {
              puVar18 = local_68;
            }
            uVar24 = *puVar18;
            goto joined_r0x00014e460c9e;
          }
          pFVar20 = (FScriptContainerElement *)
                    ((longlong)TStack_128.CurrentBitIndex * 0x20 + *(longlong *)&pTVar25->Elements);
          pTVar6 = *(TReferenceControllerBase<1> **)(pFVar20 + 0x10);
          plVar22 = *(longlong **)(pFVar20 + 8);
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((plVar22 == (longlong *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          p_Var16 = (LPCRITICAL_SECTION)(plVar22 + 1);
          if (p_Var16 == (LPCRITICAL_SECTION)0x0) goto LAB_14e460f36;
          EnterCriticalSection(p_Var16);
          lVar13 = plVar22[7];
          LeaveCriticalSection(p_Var16);
          if ((char)lVar13 == '\0') {
            if ((plVar22 == (longlong *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            cVar10 = (**(code **)(*plVar22 + 8))(plVar22);
            if (cVar10 == '\0') {
              if (((local_1d0.AllocatorInstance.Data <= pFVar20) &&
                  (pFVar20 < local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayMax * 8))
                 && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar26)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar15 = local_1d0.ArrayNum;
              if (local_1d0.ArrayNum == local_1d0.ArrayMax) {
                iVar15 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1d0.AllocatorInstance,&local_1d0.ArrayMax);
              }
              local_1d0.ArrayNum = iVar15 + 1;
              *(undefined8 *)(local_1d0.AllocatorInstance.Data + (longlong)iVar15 * 8) =
                   *(undefined8 *)pFVar20;
            }
            else {
              if ((plVar22 == (longlong *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar26)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              cVar10 = (**(code **)(*plVar22 + 8))(plVar22);
              if (cVar10 == '\x01') {
                if (((local_1e0.AllocatorInstance.Data <= pFVar20) &&
                    (pFVar20 < local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 8))
                   && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar26)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar15 = local_1e0.ArrayNum;
                if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
                  iVar15 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
                }
                local_1e0.ArrayNum = iVar15 + 1;
                *(undefined8 *)(local_1e0.AllocatorInstance.Data + (longlong)iVar15 * 8) =
                     *(undefined8 *)pFVar20;
              }
            }
          }
          else {
            if ((plVar22 == (longlong *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            EnterCriticalSection(p_Var16);
            lVar13 = plVar22[7];
            LeaveCriticalSection(p_Var16);
            if ((char)lVar13 == '\x02') {
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              Emplace<unsigned___int64_const_&>
                        ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                          *)local_88,&local_160,(bool *)pFVar20);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
          pTVar19 = local_1a0;
          uVar21 = local_1e4;
        } while( true );
      }
      if (*(int *)&(this->ReleaseAndDoneTasks).Elements.field_0x8 !=
          *(int *)&(this->ReleaseAndDoneTasks).Elements.field_0x34) {
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        UnhashElements(&this->ReleaseAndDoneTasks);
        iVar15 = *(int *)&(this->ReleaseAndDoneTasks).Elements.field_0xc;
        *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x8 = 0;
        if (iVar15 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&this->ReleaseAndDoneTasks,0,
                     (int *)&(this->ReleaseAndDoneTasks).Elements.field_0xc);
        }
        *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->ReleaseAndDoneTasks).Elements.field_0x28 = 0;
      }
      goto LAB_14e460ee7;
    }
  }
LAB_14e460f36:
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
joined_r0x00014e460c9e:
  if (uVar24 != 0) goto LAB_14e460cbc;
  lVar13 = (longlong)(int)uStack_190;
  local_178 = local_178 + 0x20;
  uStack_190 = uStack_190 + 1;
  uStack_17c = local_60;
  if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_190)
  goto LAB_14e460ce2;
  uVar24 = (puVar18 + 1)[lVar13];
  goto joined_r0x00014e460c9e;
  while (iVar15 = (int)plVar22[3], iVar15 != -1) {
LAB_14e460530:
    plVar22 = (longlong *)((longlong)iVar15 * 0x20 + lVar5);
    if (*plVar22 == lVar13) {
      if (plVar22 != (longlong *)0x0) goto LAB_14e460571;
      goto LAB_14e46054b;
    }
  }
LAB_14e460548:
  plVar22 = (longlong *)0x0;
LAB_14e46054b:
  bVar26 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar26) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14e460571:
  pTVar6 = (TReferenceControllerBase<1> *)plVar22[2];
  this_00 = (FInterchangeTaskBase *)plVar22[1];
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FInterchangeTaskBase *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lpCriticalSection = &this_00->TaskStatusCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_14e460f36;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar2 = this_00->TaskStatus;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (EVar2 == Executing) {
    if ((this_00 == (FInterchangeTaskBase *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FInterchangeTaskBase::Wait(this_00);
  }
  if ((this_00 == (FInterchangeTaskBase *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FInterchangeTaskBase::SetTaskStatus(this_00,Done);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar19 = local_1a0;
  this = local_1a8;
  pTVar23 = local_1b0;
  pTVar25 = local_158;
LAB_14e460665:
  uVar12 = (ulonglong)local_1e4;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)((pTVar23->AllocatorInstance).InlineData + 8);
  goto LAB_14e46045c;
LAB_14e460cbc:
  local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(-uVar24 & uVar24);
  uVar12 = (longlong)local_1b0 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_160._4_4_ = (int)lVar13;
  uStack_17c = local_160._4_4_ + -1 + local_178;
  if ((int)local_60 < (int)uStack_17c) {
    uStack_17c = local_60;
  }
LAB_14e460ce2:
  local_198 = (TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
               *)local_88;
  uStack_18c = (uint)local_1b0;
  uVar24 = local_60 & 0xffffffe0;
  uStack_174 = local_94;
  local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_170 = local_88._8_4_ - local_54;
  uStack_180 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_17c;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_18c,uStack_190);
  iVar15 = (int)local_60 >> 5;
  TStack_f8._28_4_ = local_94;
  TStack_f8.BaseBitIndex = local_178;
  uStack_d8 = CONCAT44(uStack_16c,iStack_170);
  bVar11 = (byte)local_60;
  local_100 = local_198;
  TStack_f8.Array = local_188;
  if (((int)local_60 < 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar8 = local_1a8;
  pTVar25 = local_1b8;
  if (uVar21 != local_60) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar21 = -1 << (bVar11 & 0x1f) & puVar18[iVar15];
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar15;
      uVar24 = uVar24 + 0x20;
      iVar15 = iVar15 + 1;
      uVar21 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14e460e01;
      uVar21 = (puVar18 + 1)[lVar13];
    }
    uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar21 = (uVar24 - 1) + (int)lVar13;
    if ((int)local_60 < (int)uVar21) {
      uVar21 = local_60;
    }
  }
LAB_14e460e01:
  while( true ) {
    pTVar9 = local_100;
    if (*(int *)&(local_100->Elements).field_0x8 - *(int *)&(local_100->Elements).field_0x34 !=
        (int)uStack_d8) {
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c0);
    }
    p_Var16 = local_148;
    cVar10 = local_1e7;
    if (((TStack_f8.CurrentBitIndex == uVar21) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (pTVar9 == (TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
                   *)local_88)) break;
    local_150 = *(ulong64 *)
                 (*(longlong *)&pTVar9->Elements + (longlong)TStack_f8.CurrentBitIndex * 0x10);
    if (*(int *)&(pFVar8->TaskPerIdMap).field_0x8 != *(int *)&(pFVar8->TaskPerIdMap).field_0x34) {
      TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                (pTVar25,(int)(local_150 >> 0x20) * 0x17 + (int)local_150,&local_150);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
LAB_14e460ee7:
  LeaveCriticalSection(p_Var16);
  if (cVar10 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitUntilTasksComplete @ 14e467d90

void __thiscall
UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete
          (FInterchangeTaskSystem *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong local_res8;
  code *local_38;
  FInterchangeTaskSystem **local_30;
  FInterchangeTaskSystem *local_28;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_20;
  longlong *local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __real_4025000000000000;
  local_18 = &local_res8;
  auVar3 = roundpd(auVar3,auVar3,1);
  local_res8 = (longlong)auVar3._0_8_;
  local_30 = &local_28;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete'::__l2::<lambda_1>,bool>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  FGenericPlatformProcess::ConditionalSleep
            ((TFunctionRef<bool___cdecl(void)> *)&local_38,
             (float)((double)local_res8 * __real_3e7ad7f29abcaf48));
  return;
}

// operator() @ 1505968e0

bool __thiscall
`UE::Interchange::FInterchangeTaskSystem::FInterchangeTaskSystem'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4239390204441395148>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4239390204441395148>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

