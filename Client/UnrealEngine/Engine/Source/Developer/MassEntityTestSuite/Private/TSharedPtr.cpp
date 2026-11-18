// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 25

// TSharedPtr<int,1><int> @ 1470cf7b0

TSharedPtr<int,1> * __thiscall
TSharedPtr<int,1>::TSharedPtr<int,1><int>(TSharedPtr<int,1> *this,TWeakPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (int *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// TSharedPtr<FMassEntityManager,1><FMassEntityManager> @ 1470cf980

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1><FMassEntityManager>
          (TSharedPtr<FMassEntityManager,1> *this,TRawPtrProxy<FMassEntityManager> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMassEntityManager *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassEntityManager__U__DefaultDeleter_UFMassEntityManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FMassEntityManager *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_AnyTag> @ 1470cfcb0

TSharedPtr<UE::Mass::FQueryExecutor,1> * __thiscall
TSharedPtr<UE::Mass::FQueryExecutor,1>::
TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_AnyTag>
          (TSharedPtr<UE::Mass::FQueryExecutor,1> *this,
          TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FQueryExecutor *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB> @ 1470cfce0

TSharedPtr<UE::Mass::FQueryExecutor,1> * __thiscall
TSharedPtr<UE::Mass::FQueryExecutor,1>::
TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB>
          (TSharedPtr<UE::Mass::FQueryExecutor,1> *this,
          TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FQueryExecutor *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA> @ 1470cfd10

TSharedPtr<UE::Mass::FQueryExecutor,1> * __thiscall
TSharedPtr<UE::Mass::FQueryExecutor,1>::
TSharedPtr<UE::Mass::FQueryExecutor,1><FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA>
          (TSharedPtr<UE::Mass::FQueryExecutor,1> *this,
          TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FQueryExecutor *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator=<FMassEntityManager> @ 1470d0ed0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::operator=<FMassEntityManager>
          (TSharedPtr<FMassEntityManager,1> *this,TRawPtrProxy<FMassEntityManager> *param_1)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  TSharedPtr<FMassEntityManager,1> local_18;
  
  pTVar1 = TSharedPtr<FMassEntityManager,1><FMassEntityManager>(&local_18,param_1);
  if (this != pTVar1) {
    this->Object = pTVar1->Object;
    pTVar1->Object = (FMassEntityManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<UE::Mass::Testing::FMassTestProcessingPhaseManager> @ 1470d0f20

TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> * __thiscall
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::
operator=<UE::Mass::Testing::FMassTestProcessingPhaseManager>
          (TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *this,
          TRawPtrProxy<UE::Mass::Testing::FMassTestProcessingPhaseManager> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FMassTestProcessingPhaseManager *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMassTestProcessingPhaseManager_Testing_Mass_UE__U__DefaultDeleter_UFMassTestProcessingPhaseManager_Testing_Mass_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  pFVar4 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = pTVar6;
  if ((pFVar4 != (FMassTestProcessingPhaseManager *)0x0) &&
     (((puVar1 = &pFVar4->field_0x18, *(longlong *)&pFVar4->field_0x10 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMassTestProcessingPhaseManager **)&pFVar4->field_0x10 = pFVar4;
    if (pTVar6 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (this != &local_18) {
    this->Object = local_18.Object;
    local_18.Object = (FMassTestProcessingPhaseManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  ~TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>(&local_18);
  return this;
}

// operator*<int> @ 1470d1140

int * __thiscall TSharedPtr<int,1>::operator*<int>(TSharedPtr<int,1> *this)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  
  if (this->Object != (int *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    piVar3 = (int *)(*pcVar1)();
    return piVar3;
  }
  return this->Object;
}

// operator*<FMassEntityManager> @ 1470d1190

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __thiscall
TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
          (TSharedPtr<FMassEntityManager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityManager *pFVar3;
  
  if (this->Object != (FMassEntityManager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMassEntityManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FMassEntityManager,1> @ 1470f20d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
          (TSharedPtr<FMassEntityManager,1> *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FMassEntityManager,1> @ 1470f2100

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
          (TSharedPtr<FMassEntityManager,1> *this,FNullTag *param_1)

{
  this->Object = (FMassEntityManager *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> @ 1470f2120

TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> * __thiscall
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>
          (TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *this,FNullTag *param_1)

{
  this->Object = (FMassTestProcessingPhaseManager *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~TSharedPtr<FMassEntityManager,1> @ 1470f7d50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>
          (TSharedPtr<FMassEntityManager,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> @ 1470f7d60

void __thiscall
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::
~TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>
          (TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 1470f9300

TSharedPtr<FMassArchetypeData,1> * __thiscall
TSharedPtr<FMassArchetypeData,1>::operator=
          (TSharedPtr<FMassArchetypeData,1> *this,TSharedPtr<FMassArchetypeData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 1470f9350

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::operator=
          (TSharedPtr<FMassEntityManager,1> *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassEntityManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 1470f93a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::operator=
          (TSharedPtr<FMassEntityManager,1> *this,FNullTag *param_1)

{
  TSharedPtr<FMassEntityManager,1> local_18;
  
  local_18.Object = (FMassEntityManager *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FMassEntityManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 1470f93f0

TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> * __thiscall
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator=
          (TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *this,FNullTag *param_1)

{
  TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> local_18;
  
  local_18.Object = (FMassTestProcessingPhaseManager *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FMassTestProcessingPhaseManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  ~TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>(&local_18);
  return this;
}

// operator-> @ 1470f9e20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __thiscall
TSharedPtr<FMassEntityManager,1>::operator->(TSharedPtr<FMassEntityManager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityManager *pFVar3;
  
  if (this->Object != (FMassEntityManager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMassEntityManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1470f9e70

FMassTestProcessingPhaseManager * __thiscall
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
          (TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMassTestProcessingPhaseManager *pFVar3;
  
  if (this->Object != (FMassTestProcessingPhaseManager *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMassTestProcessingPhaseManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1470f9ec0

FTestQueryExecutor_AnyTag * __thiscall
TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1>::operator->
          (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_AnyTag,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTestQueryExecutor_AnyTag *pFVar3;
  
  if (this->Object != (FTestQueryExecutor_AnyTag *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTestQueryExecutor_AnyTag *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1470f9f10

FTestQueryExecutor_BlockTagB * __thiscall
TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1>::operator->
          (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTestQueryExecutor_BlockTagB *pFVar3;
  
  if (this->Object != (FTestQueryExecutor_BlockTagB *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTestQueryExecutor_BlockTagB *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1470f9f60

FTestQueryExecutor_NeedTagA * __thiscall
TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1>::operator->
          (TSharedPtr<FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTestQueryExecutor_NeedTagA *pFVar3;
  
  if (this->Object != (FTestQueryExecutor_NeedTagA *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTestQueryExecutor_NeedTagA *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1471b0930

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<FMassEntityManager,1> * __thiscall
TSharedPtr<FMassEntityManager,1>::ToSharedRef
          (TSharedPtr<FMassEntityManager,1> *this,
          TSharedRef<FMassEntityManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  
  if (this->Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMassEntityManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMassEntityManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1471b09d0

TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> * __thiscall
TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::ToSharedRef
          (TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *this,
          TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *pTVar4;
  
  if (this->Object == (FMassTestProcessingPhaseManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMassTestProcessingPhaseManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

