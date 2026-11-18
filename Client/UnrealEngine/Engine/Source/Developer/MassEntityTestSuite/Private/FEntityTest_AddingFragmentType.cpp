// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715a890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_AddingFragmentType::InstantTest(FEntityTest_AddingFragmentType *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  longlong lVar2;
  FMassArchetypeSharedFragmentValues *pFVar3;
  undefined1 auStack_1e8 [32];
  char local_1c8;
  char local_1c7;
  char local_1c6;
  char local_1c5;
  char local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  FMassArchetypeHandle local_198;
  FMassEntityHandle local_188;
  UScriptStruct *local_180;
  FMassEntityHandle local_178;
  FMassEntityManager *local_170;
  FAutomationTestBase *local_168;
  FMassEntityManager *local_160;
  FAutomationTestBase *local_158;
  FMassEntityManager *local_150;
  FAutomationTestBase *local_148;
  FMassEntityManager *local_140;
  FAutomationTestBase *local_138;
  FMassArchetypeHandle *local_130;
  FMassEntityHandle local_128;
  FMassArchetypeHandle *local_120;
  FMassEntityManager *local_118;
  FAutomationTestBase *local_110;
  FMassArchetypeHandle *local_108;
  FMassArchetypeHandle *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeHandle local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_198.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = &local_88;
  for (lVar2 = 0x68; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pFVar3->HashCache = 0;
    pFVar3 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar3->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            ((FMassEntityManager *)local_198.DataPtr.SharedReferenceCount.ReferenceController,
             &local_198,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_170 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_180 = FTestFragment_Int::StaticStruct();
  local_188 = (FMassEntityHandle)local_198.DataPtr.Object;
  local_178 = (FMassEntityHandle)local_198.DataPtr.Object;
  FMassEntityManager::AddFragmentToEntity
            (local_170,(FMassEntityHandle)local_198.DataPtr.Object,local_180);
  local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1ac = FMassEntityManager::DebugGetEntityCount(this_00);
  ::FString::FString(&local_f8,"There should be one entity across the whole system");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_f8,local_1ac,1,local_168);
  local_1c8 = !bVar1;
  local_1c0 = (uint)(byte)local_1c8;
  ::FString::~FString(&local_f8);
  if (local_1c8 == '\0') {
    local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_160 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1a8 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_160,(FMassArchetypeHandle *)&this->field_0x50);
    ::FString::FString(&local_e8,"The original archetype should now have no entities");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_e8,local_1a8,0,local_158);
    local_1c7 = !bVar1;
    local_1bc = (uint)(byte)local_1c7;
    ::FString::~FString(&local_e8);
    if (local_1c7 == '\0') {
      local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_1a4 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_150,(FMassArchetypeHandle *)&this->field_0x70);
      ::FString::FString(&local_d8,"The destination archetype should now store a single entity");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_d8,local_1a4,1,local_148);
      local_1c6 = !bVar1;
      local_1b8 = (uint)(byte)local_1c6;
      ::FString::~FString(&local_d8);
      if (local_1c6 == '\0') {
        local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_1a0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_140,(FMassArchetypeHandle *)&this->field_0x60);
        ::FString::FString(&local_c8,"The remaining archetype should not be affected");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_c8,local_1a0,0,local_138);
        local_1c5 = !bVar1;
        local_1b4 = (uint)(byte)local_1c5;
        ::FString::~FString(&local_c8);
        if (local_1c5 == '\0') {
          local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_130 = &local_a8;
          local_108 = FMassArchetypeHandle::FMassArchetypeHandle
                                (local_130,(FMassArchetypeHandle *)&this->field_0x70);
          local_120 = &local_98;
          local_118 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_128 = (FMassEntityHandle)local_198.DataPtr.Object;
          local_100 = FMassEntityManager::GetArchetypeForEntity
                                (local_118,local_120,(FMassEntityHandle)local_198.DataPtr.Object);
          ::FString::FString(&local_b8,"The entity should get associated with the new archetype");
          bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                            (&local_b8,local_100,local_108,local_110);
          local_1c4 = !bVar1;
          local_1b0 = (uint)(byte)local_1c4;
          ::FString::~FString(&local_b8);
          if (local_1c4 == '\0') {
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
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

