// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 10

// Call @ 14e416f60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeBaseNodeContainer::GetNodes'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `UInterchangeBaseNodeContainer::GetNodes'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e416f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e416fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 14e416fc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
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
  undefined1 auStackX_8 [8];
  FLLMScope aFStackX_10 [2];
  uint uStackX_18;
  longlong *plStackX_20;
  FMemScope FStack_70;
  FDestructionSentinel FStack_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name182,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(aFStackX_10,LLMScope_Name182,false,None,Default,true);
  FMemScope::FMemScope(&FStack_70,&LLMScope_Name182,true);
  bVar19 = true;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x80);
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
LAB_14e4060bf:
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection_00);
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  uStackX_18 = *(uint *)(plVar2 + 1);
  uVar13 = (ulonglong)(int)uStackX_18;
  plVar20 = (longlong *)*plVar2;
  plStackX_20 = plVar20 + uVar13;
  plVar17 = plStackX_20;
LAB_14e405da0:
  while( true ) {
    if ((int)plVar2[1] != (int)uVar13) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar20 == plVar17) goto LAB_14e405f4f;
    lVar16 = *plVar20;
    lVar18 = *(longlong *)param_1;
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
    plVar17 = plStackX_20;
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
    uVar13 = (ulonglong)uStackX_18;
  }
LAB_14e405f32:
  plVar20 = plVar20 + 1;
  uVar13 = (ulonglong)uStackX_18;
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
      Interchange::FInterchangeTaskSystem::Tick(*(FInterchangeTaskSystem **)param_1);
      this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_68);
      this->InvocationListLockCount = this->InvocationListLockCount + 1;
      bVar7 = false;
      uVar15 = (this->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar15) {
        lVar16 = (longlong)(int)uVar15 << 4;
        bVar7 = false;
        do {
          uVar12 = 0;
          if ((int)uVar15 < (this->InvocationList).ArrayNum) {
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
          pFVar5 = (this->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar5 + lVar16 + 8) == 0) ||
              (plVar2 = *(longlong **)(pFVar5 + lVar16), plVar2 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar2 + 0x68))(), cVar10 == '\0')) {
            bVar7 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      this->InvocationListLockCount = this->InvocationListLockCount + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
      }
      if (FStack_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_68.Accessor,&FStack_68);
      }
    }
    FMemScope::~FMemScope(&FStack_70);
    FLLMScope::~FLLMScope(aFStackX_10);
    return bVar19;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  plVar17 = plStackX_20;
  goto LAB_14e405f32;
}

// Call @ 14e416fd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14e416ff0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<unsigned___int64,TUniqueFunction<unsigned___int64___cdecl(void)>_&>
            ((TPromise<unsigned___int64> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14e417010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,void>
::Call(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  if (*(longlong *)param_1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 8);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    cVar1 = *(char *)(lVar2 + 0x38);
    LeaveCriticalSection(lpCriticalSection);
    if (cVar1 == '\x01') {
      if (*(longlong *)param_1 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      Interchange::FInterchangeTaskBase::SetTaskStatus(*(FInterchangeTaskBase **)param_1,Done);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 14e417020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNodeContainerTest::RunTest'::__l17::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  `FNodeContainerTest::RunTest'::__l17::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e417030

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>,unsigned___int64>
::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  (**(code **)(**(longlong **)param_1 + 0x10))();
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ulong64 *)(*(longlong *)param_1 + 0x30);
}

// Call @ 14e417040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAttributeStorageTest::RunTest'::__l707::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAttributeStorageTest::RunTest'::__l707::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e417050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAttributeStorageTest::RunTest'::__l707::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAttributeStorageTest::RunTest'::__l707::<lambda_3>::operator()(param_1,*param_2);
  return;
}

