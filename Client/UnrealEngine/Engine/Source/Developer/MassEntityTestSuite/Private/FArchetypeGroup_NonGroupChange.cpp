// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147136830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_NonGroupChange::InstantTest(FArchetypeGroup_NonGroupChange *this)

{
  bool bVar1;
  FName *pFVar2;
  FArchetypeGroupID *pFVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  FMassArchetypeSharedFragmentValues *pFVar7;
  undefined1 *puVar8;
  undefined1 auStack_298 [32];
  char local_278;
  undefined1 local_277;
  char local_276;
  undefined1 local_275;
  undefined1 local_274;
  uint local_270;
  FArchetypeGroupType local_26c;
  uint local_268;
  FMassArchetypeHandle local_260;
  uint local_250;
  uint local_24c;
  FArchetypeGroupHandle local_248;
  FMassArchetypeHandle local_240;
  FMassArchetypeHandle local_230;
  FName local_220;
  FMassEntityManager *local_218;
  FArchetypeGroupID *local_210;
  FMassEntityManager *local_208;
  FArchetypeGroupHandle local_200;
  FArchetypeGroupHandle local_1f8;
  FMassEntityManager *local_1f0;
  FMassEntityHandle local_1e8;
  FMassEntityManager *local_1e0;
  FMassEntityHandle local_1d8;
  UScriptStruct *local_1d0;
  FMassEntityHandle local_1c8;
  FMassEntityManager *local_1c0;
  FMassEntityHandle local_1b8;
  FMassEntityManager *local_1b0;
  FMassArchetypeHandle *local_1a8;
  FMassArchetypeHandle *local_1a0;
  FAutomationTestBase *local_198;
  FMassArchetypeHandle *local_190;
  FMassArchetypeHandle *local_188;
  FMassEntityHandle local_180;
  FMassEntityManager *local_178;
  FArchetypeGroupHandle local_170;
  FArchetypeGroupHandle local_168;
  FArchetypeGroupHandle local_160;
  FArchetypeGroupHandle local_158;
  FAutomationTestBase *local_150;
  FArchetypeGroupHandle local_148;
  FArchetypeGroupHandle local_140;
  FArchetypeGroupID local_138 [2];
  FName *local_130;
  FString local_128;
  FString local_118;
  FName local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  TArrayView<FMassEntityHandle_const_,int> local_d8;
  TArrayView<FMassEntityHandle_const_,int> local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_260.DataPtr.SharedReferenceCount.ReferenceController._0_4_ = 0x68d;
  local_218 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_130 = &local_108;
  pFVar2 = ::FName::FName(local_130,L"TestGroup");
  local_220 = *pFVar2;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_218,(FName)&local_26c);
  local_210 = local_138;
  pFVar3 = FArchetypeGroupID::FArchetypeGroupID
                     (local_210,(uint)local_260.DataPtr.SharedReferenceCount.ReferenceController);
  local_260.DataPtr.SharedReferenceCount.ReferenceController._4_4_ = pFVar3->ID;
  local_250 = local_26c.Identifier;
  FArchetypeGroupHandle::FArchetypeGroupHandle
            (&local_248,local_26c,local_260.DataPtr.SharedReferenceCount.ReferenceController._4_4_);
  local_208 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar7 = &local_98;
  for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar7->HashCache = 0;
    pFVar7 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar7->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::CreateEntity
            (local_208,&local_260,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  local_1f0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar4 = MakeArrayView<FMassEntityHandle_const_>(&local_c8,(FMassEntityHandle *)&local_260,1);
  puVar6 = local_100;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_100;
  puVar8 = local_f0;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_200 = local_248;
  local_1f8 = local_248;
  puVar6 = local_f0;
  pTVar4 = &local_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
  }
  FMassEntityManager::BatchGroupEntities(local_1f0,local_248,&local_d8);
  local_1e0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1e8 = (FMassEntityHandle)local_260.DataPtr.Object;
  FMassEntityManager::GetArchetypeForEntity
            (local_1e0,&local_230,(FMassEntityHandle)local_260.DataPtr.Object);
  local_1c0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1d0 = FTestTag_A::StaticStruct();
  local_1d8 = (FMassEntityHandle)local_260.DataPtr.Object;
  local_1c8 = (FMassEntityHandle)local_260.DataPtr.Object;
  FMassEntityManager::AddTagToEntity
            (local_1c0,(FMassEntityHandle)local_260.DataPtr.Object,local_1d0);
  local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1b8 = (FMassEntityHandle)local_260.DataPtr.Object;
  FMassEntityManager::GetArchetypeForEntity
            (local_1b0,&local_240,(FMassEntityHandle)local_260.DataPtr.Object);
  local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1a8 = &local_b8;
  local_190 = FMassArchetypeHandle::FMassArchetypeHandle(local_1a8,&local_240);
  local_1a0 = &local_a8;
  local_188 = FMassArchetypeHandle::FMassArchetypeHandle(local_1a0,&local_230);
  ::FString::FString(&local_128,"The archetype before and after the move");
  bVar1 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_128,local_188,local_190,local_198);
  local_278 = !bVar1;
  local_270 = (uint)(byte)local_278;
  ::FString::~FString(&local_128);
  if (local_278 == '\0') {
    local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_24c = local_26c.Identifier;
    local_180 = (FMassEntityHandle)local_260.DataPtr.Object;
    FMassEntityManager::GetGroupForEntity
              (local_178,(FMassEntityHandle)&local_170,
               (FArchetypeGroupType)(uint)local_260.DataPtr.Object);
    local_150 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_168 = local_170;
    local_148 = local_170;
    local_160 = local_248;
    local_158 = local_248;
    local_140 = local_248;
    ::FString::FString(&local_118,"Entity\'s group handle before and after tagging");
    bVar1 = FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupHandle,UE::Mass::FArchetypeGroupHandle>
                      (&local_118,local_140,local_148,local_150);
    local_276 = !bVar1;
    local_268 = (uint)(byte)local_276;
    ::FString::~FString(&local_118);
    if (local_276 == '\0') {
      local_274 = 1;
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_240);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_230);
      local_277 = local_274;
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_275 = 0;
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_240);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_230);
      local_277 = local_275;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_277 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_240);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_230);
  }
  return (bool)local_277;
}

