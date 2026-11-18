// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147172710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FOneliner::InstantTest(FOneliner *this)

{
  bool bVar1;
  int iVar2;
  FEntityBuilder *pFVar3;
  undefined1 auStack_8c8 [32];
  bool local_8a8;
  bool local_8a7;
  bool local_8a6;
  char local_8a5;
  char local_8a4;
  char local_8a3;
  char local_8a2;
  int local_8a0;
  uint local_89c;
  uint local_898;
  uint local_894;
  uint local_890;
  int local_88c;
  FMassEntityManager *local_888;
  FEntityBuilder *local_880;
  FMassEntityHandle local_878;
  FMassEntityHandle local_870;
  FMassEntityManager *local_868;
  FAutomationTestBase *local_860;
  FMassEntityManager *local_858;
  FAutomationTestBase *local_850;
  FMassEntityManager *local_848;
  FMassEntityManager *local_840;
  FAutomationTestBase *local_838;
  FMassEntityManager *local_830;
  FMassEntityManager *local_828;
  FEntityBuilder *local_820;
  FMassEntityManager *local_818;
  FAutomationTestBase *local_810;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8 [2];
  FEntityBuilder local_7b8;
  FEntityBuilder local_630;
  FEntityBuilder local_4a8;
  FEntityBuilder local_320;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_8c8;
  local_8a0 = 0;
  local_888 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::MakeEntityBuilder(local_888,&local_630);
  local_880 = FEntityBuilder::Add<FTestFragment_Int>(pFVar3);
  FEntityBuilder::Commit(local_880);
  FEntityBuilder::~FEntityBuilder(&local_630);
  local_8a0 = local_8a0 + 1;
  local_868 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_870 = local_878;
  local_8a6 = FMassEntityManager::IsEntityActive(local_868,local_878);
  local_860 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_808,"The entity has been created");
  bVar1 = FAutomationTestBase::TestTrue(local_860,&local_808,local_8a6);
  local_8a5 = !bVar1;
  local_89c = (uint)(byte)local_8a5;
  ::FString::~FString(&local_808);
  if (local_8a5 == '\0') {
    local_850 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_858 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    iVar2 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                      (local_858,(FMassArchetypeHandle *)&this->field_0x60);
    local_8a8 = iVar2 == local_8a0;
    ::FString::FString(&local_7f8,"Only a single entity has been created");
    bVar1 = FAutomationTestBase::TestTrue(local_850,&local_7f8,local_8a8);
    local_8a4 = !bVar1;
    local_898 = (uint)(byte)local_8a4;
    ::FString::~FString(&local_7f8);
    if (local_8a4 == '\0') {
      local_848 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      pFVar3 = FMassEntityManager::MakeEntityBuilder(local_848,&local_4a8);
      pFVar3 = FEntityBuilder::Add<FTestFragment_Int>(pFVar3);
      FEntityBuilder::FEntityBuilder(&local_7b8,pFVar3);
      FEntityBuilder::~FEntityBuilder(&local_4a8);
      FEntityBuilder::Commit(&local_7b8);
      local_8a0 = local_8a0 + 1;
      FEntityBuilder::~FEntityBuilder(&local_7b8);
      local_838 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_840 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      iVar2 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                        (local_840,(FMassArchetypeHandle *)&this->field_0x60);
      local_8a7 = iVar2 == local_8a0;
      ::FString::FString(&local_7e8,"The number of entities created matches expectations");
      bVar1 = FAutomationTestBase::TestTrue(local_838,&local_7e8,local_8a7);
      local_8a3 = !bVar1;
      local_894 = (uint)(byte)local_8a3;
      ::FString::~FString(&local_7e8);
      if (local_8a3 == '\0') {
        local_830 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        pFVar3 = FMassEntityManager::MakeEntityBuilder(local_830,&local_320);
        FEntityBuilder::Add<FTestFragment_Int>(pFVar3);
        FEntityBuilder::~FEntityBuilder(&local_320);
        local_828 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        pFVar3 = FMassEntityManager::MakeEntityBuilder(local_828,&local_198);
        local_820 = FEntityBuilder::Add<FTestFragment_Int>(pFVar3);
        FEntityBuilder::GetEntityHandle(local_820);
        FEntityBuilder::~FEntityBuilder(&local_198);
        local_810 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_818 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_88c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_818,(FMassArchetypeHandle *)&this->field_0x60);
        ::FString::FString(local_7d8,"The number of entities created after not committing builders")
        ;
        bVar1 = FTestHelpers::TestEqual<int,int>(local_7d8,local_88c,local_8a0,local_810);
        local_8a2 = !bVar1;
        local_890 = (uint)(byte)local_8a2;
        ::FString::~FString(local_7d8);
        if (local_8a2 == '\0') {
          bVar1 = true;
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          bVar1 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        bVar1 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

