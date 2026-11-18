// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715d3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_EntityCreation::InstantTest(FEntityTest_EntityCreation *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  longlong lVar2;
  FMassArchetypeSharedFragmentValues *pFVar3;
  undefined1 auStack_1a8 [32];
  char local_188;
  char local_187;
  char local_186;
  char local_185;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  FMassEntityManager *local_160;
  FAutomationTestBase *local_158;
  FMassArchetypeHandle *local_150;
  FMassArchetypeHandle local_148;
  FMassArchetypeHandle *local_138;
  FMassEntityManager *local_130;
  FAutomationTestBase *local_128;
  FMassArchetypeHandle *local_120;
  FMassArchetypeHandle *local_118;
  FMassEntityManager *local_110;
  FAutomationTestBase *local_108;
  FMassEntityManager *local_100;
  FMassEntityManager *local_f8;
  FAutomationTestBase *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeHandle local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_160 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = &local_88;
  for (lVar2 = 0x68; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pFVar3->HashCache = 0;
    pFVar3 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar3->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            (local_160,&local_148,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_174 = FMassEntityManager::DebugGetEntityCount(this_00);
  ::FString::FString(&local_e8,"There should be one entity across the whole system");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_e8,local_174,1,local_158);
  local_188 = !bVar1;
  local_184 = (uint)(byte)local_188;
  ::FString::~FString(&local_e8);
  if (local_188 == '\0') {
    local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_150 = &local_a8;
    local_120 = FMassArchetypeHandle::FMassArchetypeHandle
                          (local_150,(FMassArchetypeHandle *)&this->field_0x50);
    local_138 = &local_98;
    local_130 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_148.DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_148.DataPtr.Object;
    local_118 = FMassEntityManager::GetArchetypeForEntity
                          (local_130,local_138,(FMassEntityHandle)local_148.DataPtr.Object);
    ::FString::FString(&local_d8,"Entity\'s archetype should be the Float one");
    bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_d8,local_118,local_120,local_128);
    local_187 = !bVar1;
    local_180 = (uint)(byte)local_187;
    ::FString::~FString(&local_d8);
    if (local_187 == '\0') {
      local_108 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_110 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_170 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_110,(FMassArchetypeHandle *)&this->field_0x50);
      ::FString::FString(&local_c8,
                         "The created entity should have been added to the Floats archetype");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_c8,local_170,1,local_108);
      local_186 = !bVar1;
      local_17c = (uint)(byte)local_186;
      ::FString::~FString(&local_c8);
      if (local_186 == '\0') {
        local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_f8 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_100 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_16c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_100,(FMassArchetypeHandle *)&this->field_0x70);
        local_168 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_f8,(FMassArchetypeHandle *)&this->field_0x60);
        local_168 = local_168 + local_16c;
        ::FString::FString(&local_b8,"Other archetypes should not get affected");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_b8,local_168,0,local_f0);
        local_185 = !bVar1;
        local_178 = (uint)(byte)local_185;
        ::FString::~FString(&local_b8);
        if (local_185 == '\0') {
          bVar1 = true;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          bVar1 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        bVar1 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

