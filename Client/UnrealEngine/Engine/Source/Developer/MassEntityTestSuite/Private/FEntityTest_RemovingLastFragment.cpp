// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715fd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_RemovingLastFragment::InstantTest
          (FEntityTest_RemovingLastFragment *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  longlong lVar2;
  FMassArchetypeSharedFragmentValues *pFVar3;
  undefined1 auStack_198 [32];
  char local_178;
  char local_177;
  char local_176;
  uint local_174;
  uint local_170;
  uint local_16c;
  int local_168;
  int local_164;
  FMassArchetypeHandle local_160;
  FMassEntityHandle local_150;
  UScriptStruct *local_148;
  FMassEntityHandle local_140;
  FMassEntityManager *local_138;
  FAutomationTestBase *local_130;
  FMassEntityManager *local_128;
  FAutomationTestBase *local_120;
  FMassArchetypeHandle *local_118;
  FMassEntityHandle local_110;
  FMassArchetypeHandle *local_108;
  FMassEntityManager *local_100;
  FAutomationTestBase *local_f8;
  FMassArchetypeHandle *local_f0;
  FMassArchetypeHandle *local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FMassArchetypeHandle local_b0;
  FMassArchetypeHandle local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_160.DataPtr.SharedReferenceCount.ReferenceController =
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
            ((FMassEntityManager *)local_160.DataPtr.SharedReferenceCount.ReferenceController,
             &local_160,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_138 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_148 = FTestFragment_Float::StaticStruct();
  local_150 = (FMassEntityHandle)local_160.DataPtr.Object;
  local_140 = (FMassEntityHandle)local_160.DataPtr.Object;
  FMassEntityManager::RemoveFragmentFromEntity
            (local_138,(FMassEntityHandle)local_160.DataPtr.Object,local_148);
  local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_168 = FMassEntityManager::DebugGetEntityCount(this_00);
  ::FString::FString(&local_e0,"There should be one entity across the whole system");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_e0,local_168,1,local_130);
  local_178 = !bVar1;
  local_174 = (uint)(byte)local_178;
  ::FString::~FString(&local_e0);
  if (local_178 == '\0') {
    local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_128 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_164 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_128,(FMassArchetypeHandle *)&this->field_0x50);
    ::FString::FString(&local_d0,"The original archetype should now have no entities");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_d0,local_164,0,local_120);
    local_177 = !bVar1;
    local_170 = (uint)(byte)local_177;
    ::FString::~FString(&local_d0);
    if (local_177 == '\0') {
      local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_118 = &local_b0;
      local_f0 = FMassArchetypeHandle::FMassArchetypeHandle
                           (local_118,(FMassArchetypeHandle *)&this->field_0x40);
      local_108 = &local_a0;
      local_100 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_110 = (FMassEntityHandle)local_160.DataPtr.Object;
      local_e8 = FMassEntityManager::GetArchetypeForEntity
                           (local_100,local_108,(FMassEntityHandle)local_160.DataPtr.Object);
      ::FString::FString(&local_c0,"The entity should not get associated to any archetype");
      bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_c0,local_e8,local_f0,local_f8);
      local_176 = !bVar1;
      local_16c = (uint)(byte)local_176;
      ::FString::~FString(&local_c0);
      if (local_176 == '\0') {
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

