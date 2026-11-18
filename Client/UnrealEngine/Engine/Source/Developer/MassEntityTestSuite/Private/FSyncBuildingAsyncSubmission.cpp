// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// operator() @ 1470fe6d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest'::__l2::<lambda_1>::
operator()(void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  
  UE::Mass::FEntityBuilder::Commit(*(FEntityBuilder **)this);
  iVar1 = FMassExecutionContext::GetNumEntities(param_1);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + iVar1;
  return;
}

// operator() @ 147103490

void __thiscall
`UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest'::__l15::<lambda_2>::
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

// InstantTest @ 14718e4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest
          (FSyncBuildingAsyncSubmission *this)

{
  bool bVar1;
  TSharedPtr<FMassEntityManager,1> *pTVar2;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar3;
  TArrayView<UMassProcessor_*,int> *pTVar4;
  TArrayView<UMassProcessor_*_const,int> *pTVar5;
  FMassEntityManager *this_00;
  longlong lVar6;
  undefined1 *puVar7;
  FMassArchetypeSharedFragmentValues *pFVar8;
  undefined1 auStack_bf8 [32];
  char local_bd8;
  undefined1 local_bd7;
  char local_bd6;
  undefined1 local_bd5;
  bool local_bd4;
  char local_bd3;
  undefined1 local_bd2;
  bool local_bd1;
  char local_bd0;
  undefined1 local_bcf;
  char local_bce;
  undefined1 local_bcd;
  bool local_bcc;
  char local_bcb;
  undefined1 local_bca;
  bool local_bc9;
  char local_bc8;
  undefined1 local_bc7;
  char local_bc6;
  undefined1 local_bc5;
  bool local_bc4;
  char local_bc3;
  undefined1 local_bc2;
  undefined1 local_bc1;
  FScopeGuardSyntaxSupport local_bc0 [4];
  int local_bbc;
  uint local_bb8;
  uint local_bb4;
  uint local_bb0;
  uint local_bac;
  uint local_ba8;
  uint local_ba4;
  uint local_ba0;
  uint local_b9c;
  uint local_b98;
  FMassEntityHandle local_b90;
  UMassTestProcessorBase *local_b88;
  int local_b80;
  int local_b7c;
  FMassEntityManager *local_b78;
  FMassEntityManager *local_b70;
  TSharedPtr<FMassEntityManager,1> *local_b68;
  <lambda_1> *local_b60;
  FMassEntityQuery *local_b58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_b50;
  TArrayView<UMassProcessor_*_const,int> *local_b48;
  FAutomationTestBase *local_b40;
  FMassEntityHandle local_b38;
  FMassEntityHandle local_b30;
  FMassEntityHandle local_b28;
  FMassEntityHandle local_b20;
  FMassEntityHandle local_b18;
  FAutomationTestBase *local_b10;
  FMassEntityHandle local_b08;
  FMassEntityHandle local_b00;
  FAutomationTestBase *local_af8;
  FMassEntityHandle local_af0;
  FMassEntityManager *local_ae8;
  FAutomationTestBase *local_ae0;
  FString *local_ad8;
  FString *local_ad0;
  FAutomationTestBase *local_ac8;
  FSyncBuildingAsyncSubmission *local_ac0;
  FSyncBuildingAsyncSubmission **local_ab8;
  FAutomationTestBase *local_ab0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_aa8;
  TArrayView<UMassProcessor_*_const,int> *local_aa0;
  <lambda_2> local_a98;
  FMassEntityHandle local_a90;
  FMassEntityHandle local_a88;
  FMassEntityHandle local_a80;
  FMassEntityHandle local_a78;
  FMassEntityHandle local_a70;
  FAutomationTestBase *local_a68;
  FMassEntityHandle local_a60;
  FMassEntityHandle local_a58;
  FAutomationTestBase *local_a50;
  FMassEntityHandle local_a48;
  FMassEntityManager *local_a40;
  FAutomationTestBase *local_a38;
  FMassEntityManager *local_a30;
  FAutomationTestBase *local_a28;
  FMassEntityHandle local_a20;
  FMassEntityManager *local_a18;
  FAutomationTestBase *local_a10;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  <lambda_1> local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FMassArchetypeHandle local_958;
  undefined1 local_940 [16];
  undefined1 local_930 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_918;
  TArrayView<UMassProcessor_*_const,int> local_908;
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_8d8;
  TArrayView<UMassProcessor_*_const,int> local_8c8;
  TSharedPtr<FMassEntityManager,1> local_8b8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_8a8;
  TArrayView<UMassProcessor_*_const,int> local_898;
  TArrayView<UMassProcessor_*,int> local_888;
  FString local_878;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_868;
  TArrayView<UMassProcessor_*_const,int> local_858;
  TArrayView<UMassProcessor_*,int> local_848;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_838;
  FEntityBuilder local_808;
  FMassArchetypeSharedFragmentValues local_678;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_bf8;
  local_b78 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar8 = &local_678;
  for (lVar6 = 0x68; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar8->HashCache = 0;
    pFVar8 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar8->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_678);
  FMassEntityManager::CreateEntity
            (local_b78,&local_958,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_678);
  local_b70 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::MakeEntityBuilder(local_b70,&local_808);
  FEntityBuilder::Add<FTestFragment_Int>(&local_808);
  FEntityBuilder::GetEntityHandle(&local_808);
  local_bbc = 0;
  local_b68 = &local_8b8;
  pTVar2 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_b68,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_b88 = NewTestProcessor<UMassTestProcessorBase>(pTVar2);
  local_9d8.SyncBuilder = &local_808;
  local_9d8.ProcessedEntitiesCount = &local_bbc;
  local_b60 = &local_9d8;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest_::__l2::<lambda_1>_>
            (&local_838,local_b60);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&local_b88->ForEachEntityChunkExecutionFunction,&local_838);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_838);
  local_b58 = &local_b88->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_b58,ReadOnly,All);
  FProcessingContext::FProcessingContext
            (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,false);
  local_b50 = &local_8a8;
  pTVar3 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int>(local_b50);
  puVar7 = local_940;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
    pTVar3 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar3->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  local_b48 = &local_898;
  pTVar4 = MakeArrayView<UMassProcessor_*>(&local_888,(UMassProcessor **)&local_b88,1);
  pTVar5 = TArrayView<UMassProcessor_*_const,int>::
           TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
                     (local_b48,pTVar4);
  puVar7 = local_930;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_940;
  pTVar3 = &local_918;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar3->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar3 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar3->DataPtr + 1);
  }
  puVar7 = local_930;
  pTVar5 = &local_908;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  Executor::RunProcessorsView(&local_908,&local_608,&local_918);
  local_b40 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_b80 = local_bbc;
  ::FString::FString(&local_9c8,"Number of fully-formed entities expected");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_9c8,local_b80,1,local_b40);
  local_bd8 = !bVar1;
  local_bb8 = (uint)(byte)local_bd8;
  ::FString::~FString(&local_9c8);
  if (local_bd8 == '\0') {
    local_b10 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_b38 = FEntityBuilder::GetEntityHandle(&local_808);
    local_b38 = *(FMassEntityHandle *)local_b38;
    local_b28 = local_b90;
    local_b20 = local_b90;
    local_b18 = local_b90;
    local_b00 = local_b90;
    local_b30 = local_b38;
    local_b08 = local_b38;
    ::FString::FString(&local_9b8,"The entity handle before and after async commit");
    bVar1 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                      (&local_9b8,local_b00,local_b08,local_b10);
    local_bd6 = !bVar1;
    local_bb4 = (uint)(byte)local_bd6;
    ::FString::~FString(&local_9b8);
    if (local_bd6 == '\0') {
      local_af8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_bd4 = FEntityBuilder::IsCommitted(&local_808);
      ::FString::FString(&local_9a8,"The Builder is in `Committed` state");
      bVar1 = FAutomationTestBase::TestTrue(local_af8,&local_9a8,local_bd4);
      local_bd3 = !bVar1;
      local_bb0 = (uint)(byte)local_bd3;
      ::FString::~FString(&local_9a8);
      if (local_bd3 == '\0') {
        local_ae0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_ae8 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_af0 = local_b90;
        local_bd1 = FMassEntityManager::IsEntityBuilt(local_ae8,local_b90);
        ::FString::FString(&local_998,"(NOT) the entity has been created");
        bVar1 = FAutomationTestBase::TestFalse(local_ae0,&local_998,local_bd1);
        local_bd0 = !bVar1;
        local_bac = (uint)(byte)local_bd0;
        ::FString::~FString(&local_998);
        if (local_bd0 == '\0') {
          local_ac8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_ad8 = &local_878;
          local_ad0 = ::FString::FString(local_ad8,"Trying to commit an already committed");
          FAutomationTestBase::AddExpectedErrorPlain(local_ac8,local_ad0,Contains,1);
          local_ab8 = &local_ac0;
          local_ac0 = this;
          ScopeExitSupport::FScopeGuardSyntaxSupport::
          operator+<_UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest_::__l15::<lambda_2>_>
                    (local_bc0,&local_a98);
          AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
          local_ab0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          ::FString::FString(&local_988,
                             "Second execution of the processor shouldn\'t change a thing.");
          FTestHelpers::AddInfo(&local_988,local_ab0);
          ::FString::~FString(&local_988);
          local_aa8 = &local_868;
          pTVar3 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
                   TArrayView<FMassArchetypeEntityCollection_const_,int>(local_aa8);
          puVar7 = local_8f8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
            pTVar3 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                     ((longlong)&pTVar3->DataPtr + 1);
            puVar7 = puVar7 + 1;
          }
          local_aa0 = &local_858;
          pTVar4 = MakeArrayView<UMassProcessor_*>(&local_848,(UMassProcessor **)&local_b88,1);
          pTVar5 = TArrayView<UMassProcessor_*_const,int>::
                   TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
                             (local_aa0,pTVar4);
          puVar7 = local_8e8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
            pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
            puVar7 = puVar7 + 1;
          }
          puVar7 = local_8f8;
          pTVar3 = &local_8d8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined1 *)&pTVar3->DataPtr = *puVar7;
            puVar7 = puVar7 + 1;
            pTVar3 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                     ((longlong)&pTVar3->DataPtr + 1);
          }
          puVar7 = local_8e8;
          pTVar5 = &local_8c8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined1 *)&pTVar5->DataPtr = *puVar7;
            puVar7 = puVar7 + 1;
            pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
          }
          Executor::RunProcessorsView(&local_8c8,&local_608,&local_8d8);
          ScopeExitSupport::
          TScopeGuard<`UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest'::__l15::<lambda_2>_>
          ::
          ~TScopeGuard<_UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest_::__l15::<lambda_2>_>
                    (&local_a98);
          local_a68 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_a90 = FEntityBuilder::GetEntityHandle(&local_808);
          local_a90 = *(FMassEntityHandle *)local_a90;
          local_a80 = local_b90;
          local_a78 = local_b90;
          local_a70 = local_b90;
          local_a58 = local_b90;
          local_a88 = local_a90;
          local_a60 = local_a90;
          ::FString::FString(&local_978,"Run 2: The entity handle before and after async commit");
          bVar1 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                            (&local_978,local_a58,local_a60,local_a68);
          local_bce = !bVar1;
          local_ba8 = (uint)(byte)local_bce;
          ::FString::~FString(&local_978);
          if (local_bce == '\0') {
            local_a50 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_bcc = FEntityBuilder::IsCommitted(&local_808);
            ::FString::FString(&local_968,"Run 2: The Builder is in `Committed` state");
            bVar1 = FAutomationTestBase::TestTrue(local_a50,&local_968,local_bcc);
            local_bcb = !bVar1;
            local_ba4 = (uint)(byte)local_bcb;
            ::FString::~FString(&local_968);
            if (local_bcb == '\0') {
              local_a38 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_a40 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_a48 = local_b90;
              local_bc9 = FMassEntityManager::IsEntityBuilt(local_a40,local_b90);
              ::FString::FString(&local_a08,"(NOT) Run 2: the entity has been created");
              bVar1 = FAutomationTestBase::TestFalse(local_a38,&local_a08,local_bc9);
              local_bc8 = !bVar1;
              local_ba0 = (uint)(byte)local_bc8;
              ::FString::~FString(&local_a08);
              if (local_bc8 == '\0') {
                this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                FMassEntityManager::FlushCommands(this_00);
                local_a28 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_a30 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_b7c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                      (local_a30,(FMassArchetypeHandle *)&this->field_0x60);
                ::FString::FString(&local_9f8,
                                   "Number of entities in the target archetype, after flushing");
                bVar1 = FTestHelpers::TestEqual<int,int>(&local_9f8,local_b7c,2,local_a28);
                local_bc6 = !bVar1;
                local_b9c = (uint)(byte)local_bc6;
                ::FString::~FString(&local_9f8);
                if (local_bc6 == '\0') {
                  local_a10 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_a18 = TSharedPtr<FMassEntityManager,1>::operator->
                                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                  local_a20 = local_b90;
                  local_bc4 = FMassEntityManager::IsEntityBuilt(local_a18,local_b90);
                  ::FString::FString(&local_9e8,"the entity has been created");
                  bVar1 = FAutomationTestBase::TestTrue(local_a10,&local_9e8,local_bc4);
                  local_bc3 = !bVar1;
                  local_b98 = (uint)(byte)local_bc3;
                  ::FString::~FString(&local_9e8);
                  if (local_bc3 == '\0') {
                    local_bc1 = 1;
                    FProcessingContext::~FProcessingContext(&local_608);
                    FEntityBuilder::~FEntityBuilder(&local_808);
                    local_bd7 = local_bc1;
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_bc2 = 0;
                    FProcessingContext::~FProcessingContext(&local_608);
                    FEntityBuilder::~FEntityBuilder(&local_808);
                    local_bd7 = local_bc2;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_bc5 = 0;
                  FProcessingContext::~FProcessingContext(&local_608);
                  FEntityBuilder::~FEntityBuilder(&local_808);
                  local_bd7 = local_bc5;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_bc7 = 0;
                FProcessingContext::~FProcessingContext(&local_608);
                FEntityBuilder::~FEntityBuilder(&local_808);
                local_bd7 = local_bc7;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_bca = 0;
              FProcessingContext::~FProcessingContext(&local_608);
              FEntityBuilder::~FEntityBuilder(&local_808);
              local_bd7 = local_bca;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_bcd = 0;
            FProcessingContext::~FProcessingContext(&local_608);
            FEntityBuilder::~FEntityBuilder(&local_808);
            local_bd7 = local_bcd;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_bcf = 0;
          FProcessingContext::~FProcessingContext(&local_608);
          FEntityBuilder::~FEntityBuilder(&local_808);
          local_bd7 = local_bcf;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_bd2 = 0;
        FProcessingContext::~FProcessingContext(&local_608);
        FEntityBuilder::~FEntityBuilder(&local_808);
        local_bd7 = local_bd2;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_bd5 = 0;
      FProcessingContext::~FProcessingContext(&local_608);
      FEntityBuilder::~FEntityBuilder(&local_808);
      local_bd7 = local_bd5;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_bd7 = 0;
    FProcessingContext::~FProcessingContext(&local_608);
    FEntityBuilder::~FEntityBuilder(&local_808);
  }
  return (bool)local_bd7;
}

