// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FExecution_EmptyArray @ 1470f4020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FExecution_EmptyArray * __thiscall
FMassExecutionTest::FExecution_EmptyArray::FExecution_EmptyArray(FExecution_EmptyArray *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FExecution_EmptyArray_FMassExecutionTest__6B_;
  return this;
}

// InstantTest @ 1471639d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall FMassExecutionTest::FExecution_EmptyArray::InstantTest(FExecution_EmptyArray *this)

{
  FMassEntityManager *pFVar1;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar2;
  TArrayView<UMassProcessor_*,int> *pTVar3;
  TArrayView<UMassProcessor_*_const,int> *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_6b8 [32];
  undefined1 local_698;
  undefined4 local_694;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_690;
  TArrayView<UMassProcessor_*_const,int> *local_688;
  undefined1 local_680 [16];
  undefined1 local_670 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_658;
  TArrayView<UMassProcessor_*_const,int> local_648;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_638;
  TArrayView<UMassProcessor_*_const,int> local_628;
  TArrayView<UMassProcessor_*,int> local_618;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  local_694 = 0;
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  UE::Mass::FProcessingContext::FProcessingContext(&local_608,pFVar1,0.0,true);
  local_690 = &local_638;
  pTVar2 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int>(local_690);
  puVar6 = local_680;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar2->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  local_688 = &local_628;
  pTVar3 = TArrayView<UMassProcessor_*,int>::TArrayView<UMassProcessor_*,int>(&local_618);
  pTVar4 = TArrayView<UMassProcessor_*_const,int>::
           TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
                     (local_688,pTVar3);
  puVar6 = local_670;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar4->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_680;
  pTVar2 = &local_658;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar2->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar2 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar2->DataPtr + 1);
  }
  puVar6 = local_670;
  pTVar4 = &local_648;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar4 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar4->DataPtr + 1);
  }
  UE::Mass::Executor::RunProcessorsView(&local_648,&local_608,&local_658);
  local_698 = 1;
  UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
  return (bool)local_698;
}

