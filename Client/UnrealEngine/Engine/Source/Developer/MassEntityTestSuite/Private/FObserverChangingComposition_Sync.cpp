// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// ~<lambda_2> @ 1470f68a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l3::<lambda_2>::
~<lambda_2>(void *this)

{
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(this);
  return;
}

// ~<lambda_4> @ 1470f68d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l7::<lambda_4>::
~<lambda_4>(void *this)

{
  FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)((longlong)this + 0x10));
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(this);
  return;
}

// operator() @ 1470ff9f0

void __thiscall
`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l3::<lambda_1>::
operator()(void *this)

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

// operator() @ 147103080

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l3::<lambda_2>::
operator()(void *this,FMassExecutionContext *param_1)

{
  FMassEntityManager *this_00;
  UScriptStruct *pUVar1;
  FMassEntityHandle FVar2;
  undefined1 local_18 [24];
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->(this);
  pUVar1 = FTestFragment_Int::StaticStruct();
  FVar2 = FMassExecutionContext::GetEntity(param_1,(int)local_18);
  FMassEntityManager::AddFragmentToEntity(this_00,*(FMassEntityHandle *)FVar2,pUVar1);
  return;
}

// operator() @ 147103f40

void __thiscall
`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l7::<lambda_3>::
operator()(void *this)

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

// operator() @ 147105250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l7::<lambda_4>::
operator()(void *this,FMassExecutionContext *param_1)

{
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  UScriptStruct *pUVar2;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar8;
  undefined1 *puVar9;
  undefined1 auStack_138 [32];
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_118;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *local_110;
  FMassEntityManager *local_108;
  TArrayView<FMassEntityHandle_const_,int> local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c8;
  FMassArchetypeEntityCollection local_b8;
  TArrayView<FMassEntityHandle_const_,int> local_90;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_80;
  TArrayView<FMassArchetypeEntityCollection,int> local_70;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_60;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = FMassExecutionContext::GetEntities(param_1,&local_90);
  pTVar7 = &local_f8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar1->DataPtr;
    pTVar1 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar1->DataPtr + 1);
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_b8,(FMassArchetypeHandle *)((longlong)this + 0x10),&local_f8,NoDuplicates);
  local_108 = TSharedPtr<FMassEntityManager,1>::operator->(this);
  pTVar8 = &local_60;
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pTVar8 = 0;
    pTVar8 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&pTVar8->field_0x1;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_60);
  pUVar2 = FTestFragment_Int::StaticStruct();
  local_110 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ::
              TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_40,pUVar2);
  local_118 = &local_80;
  pTVar3 = MakeArrayView<FMassArchetypeEntityCollection>(&local_70,&local_b8,1);
  pTVar4 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (local_118,pTVar3);
  puVar6 = local_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_e8;
  puVar9 = local_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = local_d8;
  pTVar4 = &local_c8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeFragmentCompositionForEntities
            (local_108,&local_c8,local_110,&local_60);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_40)
  ;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_60)
  ;
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_b8);
  return;
}

// InstantTest @ 147172070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest
          (FObserverChangingComposition_Sync *this)

{
  EMassObservedOperationFlags EVar1;
  bool bVar2;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar3;
  TNotNull<UScriptStruct_const_*> *pTVar4;
  undefined1 auStackY_278 [32];
  FScopeGuardSyntaxSupport local_242;
  FScopeGuardSyntaxSupport local_241;
  uint local_240;
  uint local_23c;
  FMassArchetypeHandle local_238;
  int local_228;
  int local_224;
  <lambda_3> local_220;
  <lambda_1> local_218;
  TNotNull<UMassProcessor_*> *local_210;
  UMassProcessor *local_208;
  UScriptStruct *local_200;
  TNotNull<UScriptStruct_const_*> *local_1f8;
  UScriptStruct *local_1f0;
  TNotNull<UMassProcessor_*> local_1e8;
  UScriptStruct *local_1e0;
  FMassObserverManager *local_1d8;
  FString *local_1d0;
  FString *local_1c8;
  FAutomationTestBase *local_1c0;
  FObserverChangingComposition_Sync *local_1b8;
  FObserverChangingComposition_Sync **local_1b0;
  TSharedPtr<FMassEntityManager,1> *local_1a8;
  TSharedPtr<FMassEntityManager,1> *local_1a0;
  FMassEntityManager *local_198;
  FMassEntityManager *local_190;
  FAutomationTestBase *local_188;
  FString *local_180;
  FString *local_178;
  FAutomationTestBase *local_170;
  FObserverChangingComposition_Sync *local_168;
  FObserverChangingComposition_Sync **local_160;
  <lambda_4> *local_158;
  FMassArchetypeHandle *local_150;
  <lambda_4> *local_148;
  FMassEntityManager *local_140;
  FMassEntityManager *local_138;
  FAutomationTestBase *local_130;
  undefined4 local_128;
  TSharedPtr<FMassEntityManager,1> local_120;
  FString local_110;
  FString local_100;
  <lambda_4> local_f0;
  TNotNull<UScriptStruct_const_*> local_d0;
  TNotNull<UMassProcessor_*> local_c8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_c0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b0;
  FString local_a0;
  FString local_90;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_78;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_128 = 3;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_238,(FMassArchetypeHandle *)&this->field_0x50);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1d8 = FMassEntityManager::GetObserverManager(this_00);
  local_210 = &local_c8;
  pTVar3 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (local_210,(UMassTestProcessorBase **)&this->field_0xa0);
  local_208 = pTVar3->Val;
  EVar1 = this->field_0xa8;
  local_1f8 = &local_d0;
  local_1e8.Val = local_208;
  local_200 = FTestFragment_Float::StaticStruct();
  pTVar4 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_1f8,&local_200);
  local_1f0 = pTVar4->Val;
  local_1e0 = local_1f0;
  FMassObserverManager::AddObserverInstance
            (local_1d8,(TNotNull<UScriptStruct_const_*>)local_1f0,EVar1,local_1e8);
  local_1c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1d0 = &local_a0;
  local_1c8 = ::FString::FString(local_1d0,"Use asynchronous API instead");
  FAutomationTestBase::AddExpectedErrorPlain(local_1c0,local_1c8,Contains,1);
  local_1b0 = &local_1b8;
  local_1b8 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l3::<lambda_1>_>
            (&local_242,&local_218);
  AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
  local_1a8 = &local_120;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            (local_1a8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1a0 = &local_120;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l3::<lambda_2>_>
            (&local_78,(<lambda_2> *)local_1a0);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            ((TFunction<void___cdecl(FMassExecutionContext_&)> *)
             (*(longlong *)&this->field_0xa0 + 0x110),&local_78);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_78);
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_120);
  local_198 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_198,&local_c0,&local_238,3,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xc0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_c0);
  local_188 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_190 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_228 = FMassEntityManager::DebugGetArchetypeEntitiesCount(local_190,&local_238);
  ::FString::FString(&local_110,"Number of entities in the original archetype, no moves expected");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_110,local_228,3,local_188);
  local_240 = (uint)!bVar2;
  ::FString::~FString(&local_110);
  if (!bVar2) {
    AITestSuite::ConditionallyBreakOnTestFail();
    ScopeExitSupport::
    TScopeGuard<`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l3::<lambda_1>_>
    ::
    ~TScopeGuard<_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l3::<lambda_1>_>
              (&local_218);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_238);
    bVar2 = false;
  }
  else {
    ScopeExitSupport::
    TScopeGuard<`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l3::<lambda_1>_>
    ::
    ~TScopeGuard<_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l3::<lambda_1>_>
              (&local_218);
    local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_180 = &local_90;
    local_178 = ::FString::FString(local_180,"Use asynchronous API instead");
    FAutomationTestBase::AddExpectedErrorPlain(local_170,local_178,Contains,1);
    local_160 = &local_168;
    local_168 = this;
    ScopeExitSupport::FScopeGuardSyntaxSupport::
    operator+<_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l7::<lambda_3>_>
              (&local_241,&local_220);
    AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
    local_158 = &local_f0;
    TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
              (&local_158->EntityManager,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_150 = &local_f0.OriginalArchetype;
    FMassArchetypeHandle::FMassArchetypeHandle(local_150,&local_238);
    local_148 = &local_f0;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l7::<lambda_4>_>
              (&local_48,local_148);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              ((TFunction<void___cdecl(FMassExecutionContext_&)> *)
               (*(longlong *)&this->field_0xa0 + 0x110),&local_48);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_f0.OriginalArchetype);
    TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_f0.EntityManager);
    local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::BatchCreateEntities
              (local_140,&local_b0,&local_238,3,
               (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xc0);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_b0);
    local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_138 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_224 = FMassEntityManager::DebugGetArchetypeEntitiesCount(local_138,&local_238);
    ::FString::FString(&local_100,"Number of entities in the original archetype, no moves expected")
    ;
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_100,local_224,6,local_130);
    local_23c = (uint)!bVar2;
    ::FString::~FString(&local_100);
    if (!bVar2) {
      AITestSuite::ConditionallyBreakOnTestFail();
      ScopeExitSupport::
      TScopeGuard<`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l7::<lambda_3>_>
      ::
      ~TScopeGuard<_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l7::<lambda_3>_>
                (&local_220);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_238);
      bVar2 = false;
    }
    else {
      ScopeExitSupport::
      TScopeGuard<`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l7::<lambda_3>_>
      ::
      ~TScopeGuard<_UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest_::__l7::<lambda_3>_>
                (&local_220);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_238);
      bVar2 = true;
    }
  }
  return bVar2;
}

