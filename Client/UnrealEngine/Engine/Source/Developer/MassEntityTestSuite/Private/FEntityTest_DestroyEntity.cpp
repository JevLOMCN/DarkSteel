// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715ce80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_DestroyEntity::InstantTest(FEntityTest_DestroyEntity *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  longlong lVar2;
  FMassArchetypeSharedFragmentValues *pFVar3;
  undefined1 auStack_188 [32];
  char local_168;
  char local_167;
  char local_166;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  int local_154;
  FMassArchetypeHandle local_150;
  FMassArchetypeHandle *local_140;
  FMassEntityHandle local_138;
  FMassArchetypeHandle *local_130;
  FMassEntityManager *local_128;
  FAutomationTestBase *local_120;
  FMassArchetypeHandle *local_118;
  FMassArchetypeHandle *local_110;
  FMassEntityHandle local_108;
  FMassEntityManager *local_100;
  FAutomationTestBase *local_f8;
  FMassEntityManager *local_f0;
  FAutomationTestBase *local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FMassArchetypeHandle local_b0;
  FMassArchetypeHandle local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_150.DataPtr.SharedReferenceCount.ReferenceController =
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
            ((FMassEntityManager *)local_150.DataPtr.SharedReferenceCount.ReferenceController,
             &local_150,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_140 = &local_b0;
  local_118 = FMassArchetypeHandle::FMassArchetypeHandle
                        (local_140,(FMassArchetypeHandle *)&this->field_0x50);
  local_130 = &local_a0;
  local_128 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_138 = (FMassEntityHandle)local_150.DataPtr.Object;
  local_110 = FMassEntityManager::GetArchetypeForEntity
                        (local_128,local_130,(FMassEntityHandle)local_150.DataPtr.Object);
  ::FString::FString(&local_e0,"The entity should get associated to the right archetype");
  bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_e0,local_110,local_118,local_120);
  local_168 = !bVar1;
  local_164 = (uint)(byte)local_168;
  ::FString::~FString(&local_e0);
  if (local_168 == '\0') {
    local_100 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_108 = (FMassEntityHandle)local_150.DataPtr.Object;
    FMassEntityManager::DestroyEntity(local_100,(FMassEntityHandle)local_150.DataPtr.Object);
    local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_158 = FMassEntityManager::DebugGetEntityCount(this_00);
    ::FString::FString(&local_d0,"There should not be any entity across the whole system");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_d0,local_158,0,local_f8);
    local_167 = !bVar1;
    local_160 = (uint)(byte)local_167;
    ::FString::~FString(&local_d0);
    if (local_167 == '\0') {
      local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_f0 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_154 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_f0,(FMassArchetypeHandle *)&this->field_0x50);
      ::FString::FString(&local_c0,"The original archetype should now have no entities");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_c0,local_154,0,local_e8);
      local_166 = !bVar1;
      local_15c = (uint)(byte)local_166;
      ::FString::~FString(&local_c0);
      if (local_166 == '\0') {
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
  return bVar1;
}

