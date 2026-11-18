// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// operator() @ 1470ffba0

void __thiscall
`UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest'::__l4::<lambda_1>::operator()
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

// operator() @ 147103180

void __thiscall
`UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest'::__l5::<lambda_2>::operator()
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

// operator() @ 147103e20

void __thiscall
`UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest'::__l6::<lambda_3>::operator()
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

// InstantTest @ 147180d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest(FReRegisteringRelationType *this)

{
  FName *pFVar1;
  TNotNull<UScriptStruct_*> TVar2;
  TNotNull<UScriptStruct_*> *pTVar3;
  FMassEntityManager *pFVar4;
  undefined1 auStack_4e8 [32];
  FScopeGuardSyntaxSupport local_4c8;
  FScopeGuardSyntaxSupport local_4c7;
  FScopeGuardSyntaxSupport local_4c6 [2];
  uint local_4c4;
  FName *local_4c0;
  FName local_4b8;
  UScriptStruct *local_4b0;
  TNotNull<UScriptStruct_*> *local_4a8;
  FTypeManager *local_4a0;
  FString *local_498;
  FString *local_490;
  FAutomationTestBase *local_488;
  FReRegisteringRelationType *local_480;
  FReRegisteringRelationType **local_478;
  FName *local_470;
  FName local_468;
  UScriptStruct *local_460;
  TNotNull<UScriptStruct_*> *local_458;
  FTypeManager *local_450;
  <lambda_1> local_448;
  FString *local_440;
  FString *local_438;
  FAutomationTestBase *local_430;
  FReRegisteringRelationType *local_428;
  FReRegisteringRelationType **local_420;
  FName *local_418;
  FName local_410;
  UScriptStruct *local_408;
  TNotNull<UScriptStruct_*> *local_400;
  FTypeManager *local_3f8;
  <lambda_2> local_3f0;
  FString *local_3e8;
  FString *local_3e0;
  FAutomationTestBase *local_3d8;
  FReRegisteringRelationType *local_3d0;
  FReRegisteringRelationType **local_3c8;
  FName *local_3c0;
  FName local_3b8;
  UScriptStruct *local_3b0;
  TNotNull<UScriptStruct_*> *local_3a8;
  FTypeManager *local_3a0;
  <lambda_3> local_398;
  FName local_390;
  undefined1 local_388 [8];
  TNotNull<UScriptStruct_*> local_380;
  undefined1 local_378 [32];
  undefined1 local_358 [32];
  undefined1 local_338 [32];
  undefined1 local_318 [24];
  FString local_300;
  FString local_2f0;
  FRelationTypeTraits local_2d8;
  FRelationTypeTraits local_228;
  FRelationTypeTraits local_178;
  FRelationTypeTraits local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  local_4c0 = &local_390;
  pFVar1 = ::FName::FName(local_4c0,"TestFragmentA");
  local_4b8 = *pFVar1;
  TVar2 = FRelationTestBase::MakeRelationType((FName)local_388);
  local_4b0 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(TVar2.Val);
  local_4a8 = &local_380;
  pTVar3 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_4a8,&local_4b0);
  FRelationTestBase::CreateRelationTypeDescription(&local_228,pTVar3->Val);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_4a0 = FMassEntityManager::GetTypeManager(pFVar4);
  FTypeManager::RegisterType(local_4a0,(FRelationTypeTraits *)local_378);
  ::FString::~FString(&local_228.DebugInFix);
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              *)&local_228.RegisterObserversDelegate);
  local_488 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_498 = (FString *)(local_318 + 8);
  local_490 = ::FString::FString(local_498,
                                 "Modifying relationship after registration done is not supported");
  FAutomationTestBase::AddExpectedErrorPlain(local_488,local_490,Contains,1);
  local_478 = &local_480;
  local_480 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest_::__l4::<lambda_1>_>
            (&local_4c8,&local_448);
  AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
  local_470 = (FName *)(local_378 + 8);
  pFVar1 = ::FName::FName(local_470,"TestFragmentA");
  local_468 = *pFVar1;
  TVar2 = FRelationTestBase::MakeRelationType((FName)((longlong)local_378 + 0x10));
  local_460 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(TVar2.Val);
  local_458 = (TNotNull<UScriptStruct_*> *)(local_378 + 0x18);
  pTVar3 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_458,&local_460);
  FRelationTestBase::CreateRelationTypeDescription(&local_2d8,pTVar3->Val);
  local_2d8.bHierarchical = local_2d8.bHierarchical == false;
  local_4c4 = (uint)local_2d8.bHierarchical;
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_450 = FMassEntityManager::GetTypeManager(pFVar4);
  FTypeManager::RegisterType(local_450,(FRelationTypeTraits *)local_358);
  ::FString::~FString(&local_2d8.DebugInFix);
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              *)&local_2d8.RegisterObserversDelegate);
  ScopeExitSupport::
  TScopeGuard<`UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest'::__l4::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest_::__l4::<lambda_1>_>
            (&local_448);
  local_430 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_440 = &local_300;
  local_438 = ::FString::FString(local_440,
                                 "Modifying relationship after registration done is not supported");
  FAutomationTestBase::AddExpectedErrorPlain(local_430,local_438,Contains,1);
  local_420 = &local_428;
  local_428 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest_::__l5::<lambda_2>_>
            (&local_4c7,&local_3f0);
  AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
  local_418 = (FName *)(local_358 + 8);
  pFVar1 = ::FName::FName(local_418,"TestFragmentB");
  local_410 = *pFVar1;
  TVar2 = FRelationTestBase::MakeRelationType((FName)((longlong)local_358 + 0x10));
  local_408 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(TVar2.Val);
  local_400 = (TNotNull<UScriptStruct_*> *)(local_358 + 0x18);
  pTVar3 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_400,&local_408);
  FRelationTestBase::CreateRelationTypeDescription(&local_178,pTVar3->Val);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3f8 = FMassEntityManager::GetTypeManager(pFVar4);
  FTypeManager::RegisterType(local_3f8,(FRelationTypeTraits *)local_338);
  ::FString::~FString(&local_178.DebugInFix);
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              *)&local_178.RegisterObserversDelegate);
  ScopeExitSupport::
  TScopeGuard<`UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest'::__l5::<lambda_2>_>
  ::
  ~TScopeGuard<_UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest_::__l5::<lambda_2>_>
            (&local_3f0);
  local_3d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_3e8 = &local_2f0;
  local_3e0 = ::FString::FString(local_3e8,
                                 "Modifying relationship after registration done is not supported");
  FAutomationTestBase::AddExpectedErrorPlain(local_3d8,local_3e0,Contains,1);
  local_3c8 = &local_3d0;
  local_3d0 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest_::__l6::<lambda_3>_>
            (local_4c6,&local_398);
  AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
  local_3c0 = (FName *)(local_338 + 8);
  pFVar1 = ::FName::FName(local_3c0,"TestFragmentA");
  local_3b8 = *pFVar1;
  TVar2 = FRelationTestBase::MakeRelationType((FName)((longlong)local_338 + 0x10));
  local_3b0 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(TVar2.Val);
  local_3a8 = (TNotNull<UScriptStruct_*> *)(local_338 + 0x18);
  pTVar3 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_3a8,&local_3b0);
  FRelationTestBase::CreateRelationTypeDescription(&local_c8,pTVar3->Val);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3a0 = FMassEntityManager::GetTypeManager(pFVar4);
  FTypeManager::RegisterType(local_3a0,(FRelationTypeTraits *)local_318);
  ::FString::~FString(&local_c8.DebugInFix);
  Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              *)&local_c8.RegisterObserversDelegate);
  ScopeExitSupport::
  TScopeGuard<`UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest'::__l6::<lambda_3>_>
  ::
  ~TScopeGuard<_UE::Mass::Test::Relations::FReRegisteringRelationType::InstantTest_::__l6::<lambda_3>_>
            (&local_398);
  return true;
}

