// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,void> @ 1470dc5c0

TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> * __cdecl
UE::Mass::FQueryExecutor::CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,void>
          (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *__return_storage_ptr__,
          FMassEntityQuery *param_1,UObject *param_2)

{
  FTestQueryExecutor_AnyTag *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *pTVar5;
  UObject *local_res8;
  
  pTVar4 = ::operator_new(0x58);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FTestQueryExecutor_AnyTag *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTestQueryExecutor_AnyTag_FMassQueryExecutorTest___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    FQueryExecutor((FQueryExecutor *)(pTVar4 + 1));
    pTVar4[1]._padding_ = (longlong)&___7FTestQueryExecutor_AnyTag_FMassQueryExecutorTest__6B_;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ =
         (longlong)
         &
         ___7__FQueryDefinition_U__FConstFragmentAccess_UFTestFragment_Float___Mass_UE___Mass_UE__6B_
    ;
    *(undefined4 *)((longlong)&pTVar4[5]._padding_ + 4) = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[5]._padding_ = 0;
    *(TReferenceControllerBase<1> **)&pTVar4[2].SharedReferenceCount = pTVar4 + 4;
    if ((FTestQueryExecutor_AnyTag *)(pTVar4 + 1) == (FTestQueryExecutor_AnyTag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (FTestQueryExecutor_AnyTag *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_1 != (FMassEntityQuery *)0x0) {
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_AnyTag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object->_padding_ = (longlong)param_1;
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_AnyTag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar1 = __return_storage_ptr__->Object;
    local_res8 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar1->_padding_,(FObjectPtr)&local_res8);
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_AnyTag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x48;
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_AnyTag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    ValidateAccessors((FQueryExecutor *)__return_storage_ptr__->Object);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,void> @ 1470dc7e0

TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> * __cdecl
UE::Mass::FQueryExecutor::CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,void>
          (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1>
           *__return_storage_ptr__,FMassEntityQuery *param_1,UObject *param_2)

{
  FTestQueryExecutor_BlockTagB *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *pTVar5;
  UObject *local_res8;
  
  pTVar4 = ::operator_new(0x60);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FTestQueryExecutor_BlockTagB *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTestQueryExecutor_BlockTagB_FMassQueryExecutorTest___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    FQueryExecutor((FQueryExecutor *)(pTVar4 + 1));
    pTVar4[1]._padding_ = (longlong)&___7FTestQueryExecutor_BlockTagB_FMassQueryExecutorTest__6B_;
    *(undefined ***)&pTVar4[3].SharedReferenceCount =
         &
         ___7__FQueryDefinition_U__FConstFragmentAccess_UFTestFragment_Float___Mass_UE__U__FMassTagBlocked_UFTestTag_B___23__Mass_UE__6B_
    ;
    pTVar4[5]._padding_ = 0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    *(atomic<int> **)&pTVar4[2].SharedReferenceCount = &pTVar4[3].SharedReferenceCount;
    if ((FTestQueryExecutor_BlockTagB *)(pTVar4 + 1) == (FTestQueryExecutor_BlockTagB *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (FTestQueryExecutor_BlockTagB *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_1 != (FMassEntityQuery *)0x0) {
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_BlockTagB *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object->_padding_ = (longlong)param_1;
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_BlockTagB *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar1 = __return_storage_ptr__->Object;
    local_res8 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar1->_padding_,(FObjectPtr)&local_res8);
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_BlockTagB *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x50;
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_BlockTagB *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    ValidateAccessors((FQueryExecutor *)__return_storage_ptr__->Object);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,void> @ 1470dca00

TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> * __cdecl
UE::Mass::FQueryExecutor::CreateQuery<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,void>
          (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *__return_storage_ptr__
          ,FMassEntityQuery *param_1,UObject *param_2)

{
  FTestQueryExecutor_NeedTagA *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *pTVar5;
  UObject *local_res8;
  
  pTVar4 = ::operator_new(0x60);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FTestQueryExecutor_NeedTagA *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTestQueryExecutor_NeedTagA_FMassQueryExecutorTest___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    FQueryExecutor((FQueryExecutor *)(pTVar4 + 1));
    pTVar4[1]._padding_ = (longlong)&___7FTestQueryExecutor_NeedTagA_FMassQueryExecutorTest__6B_;
    *(undefined ***)&pTVar4[3].SharedReferenceCount =
         &
         ___7__FQueryDefinition_U__FConstFragmentAccess_UFTestFragment_Float___Mass_UE__U__FMassTagRequired_UFTestTag_A___23__Mass_UE__6B_
    ;
    pTVar4[5]._padding_ = 0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    *(atomic<int> **)&pTVar4[2].SharedReferenceCount = &pTVar4[3].SharedReferenceCount;
    if ((FTestQueryExecutor_NeedTagA *)(pTVar4 + 1) == (FTestQueryExecutor_NeedTagA *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (FTestQueryExecutor_NeedTagA *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_1 != (FMassEntityQuery *)0x0) {
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_NeedTagA *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object->_padding_ = (longlong)param_1;
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_NeedTagA *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar1 = __return_storage_ptr__->Object;
    local_res8 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar1->_padding_,(FObjectPtr)&local_res8);
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_NeedTagA *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x50;
    if (__return_storage_ptr__->Object == (FTestQueryExecutor_NeedTagA *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    ValidateAccessors((FQueryExecutor *)__return_storage_ptr__->Object);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ~FQueryExecutor @ 1470f89e0

void __thiscall UE::Mass::FQueryExecutor::~FQueryExecutor(FQueryExecutor *this)

{
  return;
}

// operator() @ 1470fa0f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::FQueryExecutor::
ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>_>,`FMassQueryExecutorTest::FTestQueryExecutor_AnyTag::Execute'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FMassExecutionContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  FEntityIterator local_68;
  FEntityIterator local_48;
  FEntityIterator local_28;
  
  lVar2 = *(longlong *)this;
  pTVar5 = FMassExecutionContext::GetFragmentView<FTestFragment_Float>
                     (param_1,(TArrayView<FTestFragment_Float_const_,int> *)&local_68);
  uVar3 = *(undefined8 *)&pTVar5->ArrayNum;
  *(FTestFragment_Float **)(lVar2 + 8) = pTVar5->DataPtr;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FMassExecutionContext::CreateEntityIterator(param_1,&local_48);
  local_68.NumEntities = local_48.NumEntities;
  local_68.EntityIndex = local_48.EntityIndex;
  local_68.ExecutionContext = local_48.ExecutionContext;
  local_68.QueryRuntime = local_48.QueryRuntime;
  FMassExecutionContext::FEntityIterator::FEntityIterator(&local_28);
  local_28.EntityIndex = local_48.NumEntities;
  if (local_68.EntityIndex != local_48.NumEntities) {
    do {
      piVar1 = (int *)(**(longlong **)((longlong)this + 8) + 0x28);
      *piVar1 = *piVar1 + 1;
      iVar4 = local_68.EntityIndex + 1;
      local_68.EntityIndex = iVar4;
      if ((((local_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
          ((local_68.QueryRuntime)->BreakFragmentsCount != 0)) && (iVar4 < local_68.NumEntities)) {
        FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_68);
        iVar4 = local_68.EntityIndex;
      }
    } while (iVar4 != local_28.EntityIndex);
  }
  return;
}

// operator() @ 1470fa1c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::FQueryExecutor::
ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>,`FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB::Execute'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FMassExecutionContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  FEntityIterator local_68;
  FEntityIterator local_48;
  FEntityIterator local_28;
  
  lVar2 = *(longlong *)this;
  pTVar5 = FMassExecutionContext::GetFragmentView<FTestFragment_Float>
                     (param_1,(TArrayView<FTestFragment_Float_const_,int> *)&local_68);
  uVar3 = *(undefined8 *)&pTVar5->ArrayNum;
  *(FTestFragment_Float **)(lVar2 + 8) = pTVar5->DataPtr;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FMassExecutionContext::CreateEntityIterator(param_1,&local_48);
  local_68.NumEntities = local_48.NumEntities;
  local_68.EntityIndex = local_48.EntityIndex;
  local_68.ExecutionContext = local_48.ExecutionContext;
  local_68.QueryRuntime = local_48.QueryRuntime;
  FMassExecutionContext::FEntityIterator::FEntityIterator(&local_28);
  local_28.EntityIndex = local_48.NumEntities;
  if (local_68.EntityIndex != local_48.NumEntities) {
    do {
      piVar1 = (int *)(**(longlong **)((longlong)this + 8) + 0x48);
      *piVar1 = *piVar1 + 1;
      iVar4 = local_68.EntityIndex + 1;
      local_68.EntityIndex = iVar4;
      if ((((local_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
          ((local_68.QueryRuntime)->BreakFragmentsCount != 0)) && (iVar4 < local_68.NumEntities)) {
        FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_68);
        iVar4 = local_68.EntityIndex;
      }
    } while (iVar4 != local_28.EntityIndex);
  }
  return;
}

// operator() @ 1470fa290

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::FQueryExecutor::
ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>,`FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA::Execute'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,FMassExecutionContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  FEntityIterator local_68;
  FEntityIterator local_48;
  FEntityIterator local_28;
  
  lVar2 = *(longlong *)this;
  pTVar5 = FMassExecutionContext::GetFragmentView<FTestFragment_Float>
                     (param_1,(TArrayView<FTestFragment_Float_const_,int> *)&local_68);
  uVar3 = *(undefined8 *)&pTVar5->ArrayNum;
  *(FTestFragment_Float **)(lVar2 + 8) = pTVar5->DataPtr;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FMassExecutionContext::CreateEntityIterator(param_1,&local_48);
  local_68.NumEntities = local_48.NumEntities;
  local_68.EntityIndex = local_48.EntityIndex;
  local_68.ExecutionContext = local_48.ExecutionContext;
  local_68.QueryRuntime = local_48.QueryRuntime;
  FMassExecutionContext::FEntityIterator::FEntityIterator(&local_28);
  local_28.EntityIndex = local_48.NumEntities;
  if (local_68.EntityIndex != local_48.NumEntities) {
    do {
      piVar1 = (int *)(**(longlong **)((longlong)this + 8) + 0x48);
      *piVar1 = *piVar1 + 1;
      iVar4 = local_68.EntityIndex + 1;
      local_68.EntityIndex = iVar4;
      if ((((local_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
          ((local_68.QueryRuntime)->BreakFragmentsCount != 0)) && (iVar4 < local_68.NumEntities)) {
        FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_68);
        iVar4 = local_68.EntityIndex;
      }
    } while (iVar4 != local_28.EntityIndex);
  }
  return;
}

