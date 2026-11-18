// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147171a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FObjectDestroyedPolicy::InstantTest(FObjectDestroyedPolicy *this)

{
  FMassEntityHandle FVar1;
  bool bVar2;
  FMassEntityManager *this_00;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_1a8 [32];
  FMassEntityHandle local_188;
  bool local_178;
  char local_177;
  undefined1 local_176;
  undefined1 local_175;
  uint local_174;
  undefined1 local_170 [16];
  undefined1 local_160 [24];
  FMassEntityManager *local_148;
  FRelationManager *local_140;
  FMassEntityHandle local_138;
  FMassEntityManager *local_130;
  FMassEntityHandle local_128;
  FMassEntityManager *local_120;
  ForAnyElementType local_118;
  FString local_110;
  undefined1 local_100 [8];
  FMassArchetypeSharedFragmentValues local_f8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)local_160,(FMassArchetypeHandle *)&this->field_0x60);
  local_160._16_8_ =
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_f8;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->HashCache = 0;
    pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8);
  FMassEntityManager::CreateEntity
            ((FMassEntityManager *)local_160._16_8_,(FMassArchetypeHandle *)(local_170 + 8),
             (FMassArchetypeSharedFragmentValues *)local_160);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
  local_148 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_88;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->HashCache = 0;
    pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            (local_148,(FMassArchetypeHandle *)local_170,
             (FMassArchetypeSharedFragmentValues *)local_160);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_140 = *(FRelationManager **)&this->field_0xa8;
  local_188.Index = local_170._0_4_;
  local_188.SerialNumber = local_170._4_4_;
  FVar1.Index = *(int *)&this->field_0xa0;
  FVar1.SerialNumber = *(int *)&this->field_0xa4;
  FRelationManager::CreateRelationInstance
            (local_140,(FTypeHandle)local_100,FVar1,(FMassEntityHandle)local_170._8_8_);
  local_130 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_138.Index = local_170._0_4_;
  local_138.SerialNumber = local_170._4_4_;
  FMassEntityManager::DestroyEntity(local_130,(FMassEntityHandle)local_170._0_8_);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(this_00);
  local_118.Data = (FScriptContainerElement *)FAITestBase::GetTestRunner((FAITestBase *)this);
  local_120 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_128.Index = local_170._8_4_;
  local_128.SerialNumber = local_170._12_4_;
  local_178 = FMassEntityManager::IsEntityValid(local_120,(FMassEntityHandle)local_170._8_8_);
  local_178 = !local_178;
  ::FString::FString(&local_110,"The source entity is destroyed along with the relation object");
  bVar2 = FAutomationTestBase::TestTrue((FAutomationTestBase *)local_118.Data,&local_110,local_178);
  local_177 = !bVar2;
  local_174 = (uint)(byte)local_177;
  ::FString::~FString(&local_110);
  if (local_177 == '\0') {
    local_175 = 1;
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_160);
    local_176 = local_175;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_176 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_160);
  }
  return (bool)local_176;
}

