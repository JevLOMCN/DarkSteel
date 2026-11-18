// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ffa80

void __thiscall
`FMassEntityTest::FSharedFragment_BatchAddToEmpty::InstantTest'::__l3::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  int iVar2;
  FAutomationTestBase *this_00;
  FAutomationTestExecutionInfo local_78;
  
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + -1;
  FAutomationTestExecutionInfo::FAutomationTestExecutionInfo(&local_78);
  this_00 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
  FAutomationTestBase::GetExecutionInfo(this_00,&local_78);
  iVar1 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  iVar2 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  if (0 < iVar1 + iVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(&local_78);
  return;
}

// InstantTest @ 147187330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragment_BatchAddToEmpty::InstantTest(FSharedFragment_BatchAddToEmpty *this)

{
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar2;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  FMassArchetypeHandle *pFVar6;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  FScopeGuardSyntaxSupport local_1f7 [7];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1f0;
  undefined4 local_1e0;
  FMassEntityManager *local_1d8;
  TArrayView<FMassEntityHandle_const_,int> *local_1d0;
  FMassArchetypeHandle *local_1c8;
  FString *local_1c0;
  FString *local_1b8;
  FAutomationTestBase *local_1b0;
  FSharedFragment_BatchAddToEmpty *local_1a8;
  FSharedFragment_BatchAddToEmpty **local_1a0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_198;
  FMassEntityManager *local_190;
  <lambda_1> local_188;
  FMassArchetypeHandle local_180;
  FSharedStruct local_170;
  undefined1 local_160 [24];
  TArrayView<FMassEntityHandle_const_,int> local_148;
  undefined1 local_138 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_128;
  FMassArchetypeEntityCollection local_118;
  TArrayView<FMassEntityHandle_const_,int> local_f0;
  TArrayView<FMassEntityHandle_const_,int> local_e0;
  FString local_d0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c0;
  TArrayView<FMassArchetypeEntityCollection,int> local_b0;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1e0 = 0x20;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FSharedStruct::Make<FTestSharedFragment_Int>(&local_170);
  FMassArchetypeSharedFragmentValues::Add(&local_98,&local_170);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1f0.AllocatorInstance);
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1f0.AllocatorInstance);
  local_1d8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchReserveEntities(local_1d8,&local_f0,0x20,&local_1f0);
  local_1d0 = &local_e0;
  pTVar1 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_1d0,&local_1f0);
  puVar5 = local_160;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *(undefined1 *)&pTVar1->DataPtr;
    pTVar1 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar1->DataPtr + 1);
    puVar5 = puVar5 + 1;
  }
  pFVar6 = &local_180;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&(pFVar6->DataPtr).Object = 0;
    pFVar6 = (FMassArchetypeHandle *)((longlong)&(pFVar6->DataPtr).Object + 1);
  }
  local_1c8 = FMassArchetypeHandle::FMassArchetypeHandle(&local_180);
  puVar5 = local_160;
  pTVar1 = &local_148;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pTVar1->DataPtr = *puVar5;
    puVar5 = puVar5 + 1;
    pTVar1 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar1->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_118,local_1c8,&local_148,NoDuplicates);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_180);
  local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1c0 = &local_d0;
  local_1b8 = ::FString::FString(local_1c0,
                                 "Adding shared fragments to archetype-less entities is not supported"
                                );
  FAutomationTestBase::AddExpectedErrorPlain(local_1b0,local_1b8,Contains,1);
  local_1a0 = &local_1a8;
  local_1a8 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassEntityTest::FSharedFragment_BatchAddToEmpty::InstantTest_::__l3::<lambda_1>_>
            (local_1f7,&local_188);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_190 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_198 = &local_c0;
  pTVar2 = MakeArrayView<FMassArchetypeEntityCollection>(&local_b0,&local_118,1);
  pTVar3 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (local_198,pTVar2);
  puVar5 = local_138;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *(undefined1 *)&pTVar3->DataPtr;
    pTVar3 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar3->DataPtr + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_138;
  pTVar3 = &local_128;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pTVar3->DataPtr = *puVar5;
    puVar5 = puVar5 + 1;
    pTVar3 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar3->DataPtr + 1);
  }
  FMassEntityManager::BatchAddSharedFragmentsForEntities(local_190,&local_128,&local_98);
  ScopeExitSupport::
  TScopeGuard<`FMassEntityTest::FSharedFragment_BatchAddToEmpty::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_FMassEntityTest::FSharedFragment_BatchAddToEmpty::InstantTest_::__l3::<lambda_1>_>
            (&local_188);
  local_1f8 = 1;
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_118);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1f0);
  FSharedStruct::~FSharedStruct(&local_170);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  return (bool)local_1f8;
}

