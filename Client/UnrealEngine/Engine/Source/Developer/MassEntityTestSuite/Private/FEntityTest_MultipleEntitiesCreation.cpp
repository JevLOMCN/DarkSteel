// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715ee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_MultipleEntitiesCreation::InstantTest
          (FEntityTest_MultipleEntitiesCreation *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_1a8 [32];
  char local_188;
  undefined1 local_187;
  char local_186;
  undefined1 local_185;
  char local_184;
  undefined1 local_183;
  char local_182;
  undefined1 local_181;
  undefined1 local_180;
  uint local_17c;
  int local_178;
  int local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  FMassEntityManager *local_150;
  FAutomationTestBase *local_148;
  FMassEntityManager *local_140;
  FAutomationTestBase *local_138;
  FMassEntityManager *local_130;
  FAutomationTestBase *local_128;
  FMassEntityManager *local_120;
  FAutomationTestBase *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_d0 [120];
  int local_58 [4];
  undefined1 local_48 [32];
  FMassArchetypeHandle local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_58[0] = 10;
  local_58[1] = 100;
  local_58[2] = 1000;
  local_174 = 0;
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)local_48,(FMassArchetypeHandle *)&this->field_0x50);
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)(local_48 + 0x10),(FMassArchetypeHandle *)&this->field_0x60);
  FMassArchetypeHandle::FMassArchetypeHandle(&local_28,(FMassArchetypeHandle *)&this->field_0x70);
  for (local_17c = 0; local_17c < 3; local_17c = local_17c + 1) {
    for (local_178 = 0; local_178 < local_58[(int)local_17c]; local_178 = local_178 + 1) {
      local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      puVar3 = local_d0 + 8;
      for (lVar2 = 0x68; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                ((FMassArchetypeSharedFragmentValues *)(local_d0 + 8));
      FMassEntityManager::CreateEntity
                (local_150,(FMassArchetypeHandle *)local_d0,
                 (FMassArchetypeSharedFragmentValues *)(local_48 + (longlong)(int)local_17c * 0x10))
      ;
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                ((FMassArchetypeSharedFragmentValues *)(local_d0 + 8));
    }
    local_174 = local_174 + local_58[(int)local_17c];
  }
  local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_160 = FMassEntityManager::DebugGetEntityCount(this_00);
  ::FString::FString(&local_110,"The total number of entities must match the number created");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_110,local_160,local_174,local_148);
  local_188 = !bVar1;
  local_170 = (uint)(byte)local_188;
  ::FString::~FString(&local_110);
  if (local_188 == '\0') {
    local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_15c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_140,(FMassArchetypeHandle *)&this->field_0x50);
    ::FString::FString(&local_100,"10 entities of FloatsArchetype should have been created");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_100,local_15c,10,local_138);
    local_186 = !bVar1;
    local_16c = (uint)(byte)local_186;
    ::FString::~FString(&local_100);
    if (local_186 == '\0') {
      local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_130 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_158 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_130,(FMassArchetypeHandle *)&this->field_0x60);
      ::FString::FString(&local_f0,"100 entities of IntsArchetype should have been created");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_f0,local_158,100,local_128);
      local_184 = !bVar1;
      local_168 = (uint)(byte)local_184;
      ::FString::~FString(&local_f0);
      if (local_184 == '\0') {
        local_118 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_120 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_154 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_120,(FMassArchetypeHandle *)&this->field_0x70);
        ::FString::FString(&local_e0,"1000 entities of FloatsIntsArchetype should have been created"
                          );
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_e0,local_154,1000,local_118);
        local_182 = !bVar1;
        local_164 = (uint)(byte)local_182;
        ::FString::~FString(&local_e0);
        if (local_182 == '\0') {
          local_180 = 1;
          _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
          local_187 = local_180;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_181 = 0;
          _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
          local_187 = local_181;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_183 = 0;
        _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
        local_187 = local_183;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_185 = 0;
      _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
      local_187 = local_185;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_187 = 0;
    _vector_destructor_iterator_(local_48,0x10,3,FMassArchetypeHandle::~FMassArchetypeHandle);
  }
  return (bool)local_187;
}

