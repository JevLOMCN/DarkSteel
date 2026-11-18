// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FCopyEntity::InstantTest(FCopyEntity *this)

{
  FMassEntityHandle FVar1;
  bool bVar2;
  TSharedRef<FMassEntityManager,1> *pTVar3;
  undefined1 auStack_248 [32];
  bool local_228;
  char local_227;
  undefined1 local_226;
  undefined1 local_225;
  uint local_224;
  FMassEntityHandle local_220;
  undefined1 *local_218;
  FMassEntityHandle local_210;
  FMassEntityManager *local_208;
  FMassEntityHandle local_200;
  FMassEntityManager *local_1f8;
  FMassArchetypeHandle *local_1f0;
  FMassArchetypeHandle *local_1e8;
  FAutomationTestBase *local_1e0;
  FString local_1d8;
  TSharedRef<FMassEntityManager,1> local_1c8;
  FMassArchetypeHandle local_1b8;
  FMassArchetypeHandle local_1a8;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_218 = &this->field_0x28;
  pTVar3 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                     ((TSharedPtr<FMassEntityManager,1> *)local_218,&local_1c8);
  FEntityBuilder::FEntityBuilder(&local_198,pTVar3);
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_1c8);
  FVar1.Index = *(int *)&this->field_0x90;
  FVar1.SerialNumber = *(int *)&this->field_0x94;
  FEntityBuilder::CopyDataFromEntity(&local_198,FVar1);
  FEntityBuilder::Commit(&local_198);
  local_1e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_208 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_210.Index = *(int *)&this->field_0x90;
  local_210.SerialNumber = *(int *)&this->field_0x94;
  local_1e8 = FMassEntityManager::GetArchetypeForEntity(local_208,&local_1a8,local_210);
  local_1f8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_200 = local_220;
  local_1f0 = FMassEntityManager::GetArchetypeForEntity(local_1f8,&local_1b8,local_220);
  local_228 = FMassArchetypeHandle::operator==(local_1e8,local_1f0);
  ::FString::FString(&local_1d8,"Source and target entities are in the same archetype");
  bVar2 = FAutomationTestBase::TestTrue(local_1e0,&local_1d8,local_228);
  local_227 = !bVar2;
  local_224 = (uint)(byte)local_227;
  ::FString::~FString(&local_1d8);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_1b8);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_1a8);
  if (local_227 == '\0') {
    local_225 = FAllElementsUsed::TestEntity((FAllElementsUsed *)this,local_220);
    FEntityBuilder::~FEntityBuilder(&local_198);
    local_226 = local_225;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_226 = 0;
    FEntityBuilder::~FEntityBuilder(&local_198);
  }
  return (bool)local_226;
}

