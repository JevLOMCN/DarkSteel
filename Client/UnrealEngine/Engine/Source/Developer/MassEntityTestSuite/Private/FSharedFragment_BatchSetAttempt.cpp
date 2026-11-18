// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// operator() @ 1470ffb10

void __thiscall
`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l3::<lambda_1>::operator()
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

// operator() @ 1471030f0

void __thiscall
`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l3::<lambda_2>::operator()
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

// operator() @ 147103d90

void __thiscall
`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l4::<lambda_3>::operator()
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

// operator() @ 147105130

void __thiscall
`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l4::<lambda_4>::operator()
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

// InstantTest @ 147188050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471882ff) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest(FSharedFragment_BatchSetAttempt *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  longlong lVar7;
  undefined1 *puVar8;
  TArrayView<FMassEntityHandle_const_,int> *pTVar9;
  float fVar10;
  undefined1 auStackY_478 [32];
  FScopeGuardSyntaxSupport local_447;
  FScopeGuardSyntaxSupport local_446;
  FScopeGuardSyntaxSupport local_445;
  FScopeGuardSyntaxSupport local_444 [4];
  float local_440;
  int local_438;
  float local_430;
  uint local_428;
  undefined4 local_424;
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  int local_400 [2];
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *local_3f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_3f0;
  undefined8 *local_3e0;
  FMassArchetypeData *local_3d8;
  FMassArchetypeData *local_3d0;
  FMassEntityManager *local_3c8;
  FMassEntityManager *local_3c0;
  FMassEntityManager *local_3b8;
  FCreationContext *local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  FMassArchetypeEntityCollection *local_3a0;
  FMassArchetypeEntityCollection *local_398;
  FMassArchetypeEntityCollection *local_390;
  FMassArchetypeEntityCollection *local_388;
  TArrayView<FMassEntityHandle_const_,int> *local_380;
  FString *local_378;
  FString *local_370;
  FAutomationTestBase *local_368;
  FSharedFragment_BatchSetAttempt *local_360;
  FSharedFragment_BatchSetAttempt **local_358;
  FString *local_350;
  FString *local_348;
  FAutomationTestBase *local_340;
  FSharedFragment_BatchSetAttempt *local_338;
  FSharedFragment_BatchSetAttempt **local_330;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_328;
  FMassEntityManager *local_320;
  <lambda_2> local_318;
  <lambda_1> local_310;
  FString *local_308;
  FString *local_300;
  FAutomationTestBase *local_2f8;
  FSharedFragment_BatchSetAttempt *local_2f0;
  FSharedFragment_BatchSetAttempt **local_2e8;
  FString *local_2e0;
  FString *local_2d8;
  FAutomationTestBase *local_2d0;
  FSharedFragment_BatchSetAttempt *local_2c8;
  FSharedFragment_BatchSetAttempt **local_2c0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_2b8;
  FMassEntityManager *local_2b0;
  <lambda_4> local_2a8;
  <lambda_3> local_2a0;
  int local_298;
  FConstSharedStruct local_290;
  FMassArchetypeHandle local_280;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_270;
  FConstSharedStruct local_260;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_228;
  TArrayView<FMassEntityHandle_const_,int> local_218;
  undefined1 local_208 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1f8;
  undefined1 local_1e8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1d8;
  FMassArchetypeEntityCollection local_1c8;
  TArrayView<FMassEntityHandle_const_,int> local_1a0;
  FString local_190;
  FString local_180;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_170;
  TArrayView<FMassArchetypeEntityCollection,int> local_160;
  FString local_150;
  FString local_140;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_130;
  TArrayView<FMassArchetypeEntityCollection,int> local_120;
  FMassArchetypeSharedFragmentValues local_108;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_408 = 0x3ff;
  local_400[0] = 0x400;
  local_3e0 = (undefined8 *)&this->field_0x50;
  bVar2 = FMassArchetypeHandle::IsValid((FMassArchetypeHandle *)local_3e0);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_3d8 = (FMassArchetypeData *)*local_3e0;
  local_3d0 = local_3d8;
  local_438 = FMassArchetypeData::GetNumEntitiesPerChunk(local_3d8);
  local_440 = (float)local_438 * __real_400ccccd;
  fVar10 = (local_440 + local_440) - __real_3f000000;
  local_248 = ZEXT416((uint)fVar10);
  local_420 = (int)ROUND(fVar10) >> 1;
  local_430 = (float)local_438 * __real_3f99999a;
  fVar10 = (local_430 + local_430) - __real_3f000000;
  local_238 = ZEXT416((uint)fVar10);
  local_414 = (int)ROUND(fVar10) >> 1;
  local_41c = local_420;
  local_418 = local_420;
  local_410 = local_414;
  local_40c = local_414;
  local_404 = local_420;
  local_298 = local_414;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3f0.AllocatorInstance);
  local_3f0.ArrayNum = 0;
  local_3f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3f0.AllocatorInstance);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_108);
  FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>(&local_260,&local_408);
  FMassArchetypeSharedFragmentValues::Add(&local_108,&local_260);
  local_3c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_3c8,&local_270,(FMassArchetypeHandle *)&this->field_0x50,&local_108,local_404,
             &local_3f0);
  local_3b0 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_270);
  local_3c0 = *(FMassEntityManager **)&this->field_0x28;
  local_3b8 = local_3c0;
  local_3f8 = UE::Mass::ObserverManager::FCreationContext::GetEntityCollections
                        (local_3b0,&local_228,local_3c0);
  local_424 = 1;
  local_428 = (uint)(0 < local_3f8->ArrayNum);
  if (local_428 == 0) {
    local_3a8 = 0;
    local_3a4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_3a0 = (FMassArchetypeEntityCollection *)(local_3f8->AllocatorInstance).Data;
  local_398 = local_3a0;
  local_390 = local_3a0;
  local_388 = local_3a0;
  FMassArchetypeEntityCollection::GetArchetype(local_3a0,&local_280);
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_228);
  local_380 = &local_1a0;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_380,&local_3f0);
  pTVar9 = &local_218;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar9->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar9 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar9->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_1c8,&local_280,&local_218,NoDuplicates);
  local_368 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_378 = &local_190;
  local_370 = ::FString::FString(local_378,
                                 "Setting shared fragment values without archetype change is not supported"
                                );
  FAutomationTestBase::AddExpectedErrorPlain(local_368,local_370,Contains,1);
  local_358 = &local_360;
  local_360 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l3::<lambda_1>_>
            (&local_447,&local_310);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_340 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_350 = &local_180;
  local_348 = ::FString::FString(local_350,
                                 "Trying to set shared fragment values, without adding new shared fragments"
                                );
  FAutomationTestBase::AddExpectedErrorPlain(local_340,local_348,Contains,1);
  local_330 = &local_338;
  local_338 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l3::<lambda_2>_>
            (&local_446,&local_318);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_320 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_328 = &local_170;
  pTVar5 = MakeArrayView<FMassArchetypeEntityCollection>(&local_160,&local_1c8,1);
  pTVar6 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (local_328,pTVar5);
  puVar8 = local_208;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_208;
  pTVar6 = &local_1f8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar8;
    puVar8 = puVar8 + 1;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
  }
  FMassEntityManager::BatchAddSharedFragmentsForEntities(local_320,&local_1f8,&local_108);
  ScopeExitSupport::
  TScopeGuard<`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l3::<lambda_2>_>::
  ~TScopeGuard<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l3::<lambda_2>_>
            (&local_318);
  ScopeExitSupport::
  TScopeGuard<`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l3::<lambda_1>_>
            (&local_310);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>(&local_290,local_400);
  FMassArchetypeSharedFragmentValues::Add(&local_98,&local_290);
  local_2f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_308 = &local_150;
  local_300 = ::FString::FString(local_308,
                                 "Setting shared fragment values without archetype change is not supported"
                                );
  FAutomationTestBase::AddExpectedErrorPlain(local_2f8,local_300,Contains,1);
  local_2e8 = &local_2f0;
  local_2f0 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l4::<lambda_3>_>
            (&local_445,&local_2a0);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_2d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_2e0 = &local_140;
  local_2d8 = ::FString::FString(local_2e0,
                                 "Trying to set shared fragment values, without adding new shared fragments"
                                );
  FAutomationTestBase::AddExpectedErrorPlain(local_2d0,local_2d8,Contains,1);
  local_2c0 = &local_2c8;
  local_2c8 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l4::<lambda_4>_>
            (local_444,&local_2a8);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_2b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2b8 = &local_130;
  pTVar5 = MakeArrayView<FMassArchetypeEntityCollection>(&local_120,&local_1c8,1);
  pTVar6 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (local_2b8,pTVar5);
  puVar8 = local_1e8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_1e8;
  pTVar6 = &local_1d8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar8;
    puVar8 = puVar8 + 1;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
  }
  FMassEntityManager::BatchAddSharedFragmentsForEntities(local_2b0,&local_1d8,&local_98);
  ScopeExitSupport::
  TScopeGuard<`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l4::<lambda_4>_>::
  ~TScopeGuard<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l4::<lambda_4>_>
            (&local_2a8);
  ScopeExitSupport::
  TScopeGuard<`FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest'::__l4::<lambda_3>_>::
  ~TScopeGuard<_FMassEntityTest::FSharedFragment_BatchSetAttempt::InstantTest_::__l4::<lambda_3>_>
            (&local_2a0);
  FConstSharedStruct::~FConstSharedStruct(&local_290);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_1c8);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_280);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_270);
  FConstSharedStruct::~FConstSharedStruct(&local_260);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_108);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3f0);
  return true;
}

