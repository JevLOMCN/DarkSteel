// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715d820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_EntityCreationFromInstances::InstantTest
          (FEntityTest_EntityCreationFromInstances *this)

{
  bool bVar1;
  TArrayView<FInstancedStruct,int> *pTVar2;
  TArrayView<FInstancedStruct_const_,int> *pTVar3;
  FMassEntityManager *this_00;
  FTestFragment_Int *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  FMassArchetypeCreationParams *pFVar7;
  FMassArchetypeSharedFragmentValues *pFVar8;
  undefined1 *puVar9;
  undefined1 auStack_238 [32];
  FMassArchetypeCreationParams *local_218;
  char local_208;
  char local_207;
  char local_206;
  char local_205;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined1 local_1e8 [16];
  FMassArchetypeCreationParams *local_1d8;
  FMassEntityManager *local_1d0;
  FAutomationTestBase *local_1c8;
  FMassArchetypeHandle *local_1c0;
  FMassEntityHandle local_1b8;
  FMassArchetypeHandle *local_1b0;
  FMassEntityManager *local_1a8;
  FAutomationTestBase *local_1a0;
  FMassArchetypeHandle *local_198;
  FMassArchetypeHandle *local_190;
  FMassEntityManager *local_188;
  FAutomationTestBase *local_180;
  FMassEntityHandle local_178;
  FMassEntityManager *local_170;
  FAutomationTestBase *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FMassArchetypeCreationParams local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [24];
  undefined1 local_e8 [32];
  TArrayView<FInstancedStruct,int> local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar7 = &local_120;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar7->ChunkMemorySize = 0;
    pFVar7 = (FMassArchetypeCreationParams *)((longlong)&pFVar7->ChunkMemorySize + 1);
  }
  local_1d8 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_120);
  pFVar8 = &local_98;
  for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar8->HashCache = 0;
    pFVar8 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar8->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  local_1e8._8_8_ = local_e8 + 0x10;
  pTVar2 = MakeArrayView<FInstancedStruct>(&local_c8,(FInstancedStruct *)&this->field_0x80,1);
  pTVar3 = TArrayView<FInstancedStruct_const_,int>::
           TArrayView<FInstancedStruct_const_,int><TArrayView<FInstancedStruct,int>,TArrayView<FInstancedStruct,int>_>
                     ((TArrayView<FInstancedStruct_const_,int> *)local_1e8._8_8_,pTVar2);
  puVar6 = local_110;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar3->DataPtr;
    pTVar3 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_110;
  puVar9 = local_100;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = local_100;
  puVar9 = local_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  local_218 = local_1d8;
  FMassEntityManager::CreateEntity
            (local_1d0,(TArrayView<FInstancedStruct_const_,int> *)local_1e8,
             (FMassArchetypeSharedFragmentValues *)local_e8,
             (FMassArchetypeCreationParams *)&local_98);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1f4 = FMassEntityManager::DebugGetEntityCount(this_00);
  ::FString::FString(&local_160,"There should be one entity across the whole system");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_160,local_1f4,1,local_1c8);
  local_208 = !bVar1;
  local_204 = (uint)(byte)local_208;
  ::FString::~FString(&local_160);
  if (local_208 == '\0') {
    local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_1c0 = &local_b8;
    local_198 = FMassArchetypeHandle::FMassArchetypeHandle
                          (local_1c0,(FMassArchetypeHandle *)&this->field_0x60);
    local_1b0 = &local_a8;
    local_1a8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1b8.Index = local_1e8._0_4_;
    local_1b8.SerialNumber = local_1e8._4_4_;
    local_190 = FMassEntityManager::GetArchetypeForEntity
                          (local_1a8,local_1b0,(FMassEntityHandle)local_1e8._0_8_);
    ::FString::FString(&local_150,"Entity\'s archetype should be the Ints one");
    bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_150,local_190,local_198,local_1a0);
    local_207 = !bVar1;
    local_200 = (uint)(byte)local_207;
    ::FString::~FString(&local_150);
    if (local_207 == '\0') {
      local_180 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_188 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_1f0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_188,(FMassArchetypeHandle *)&this->field_0x60);
      ::FString::FString(&local_140,
                         "The created entity should have been added to the Ints archetype");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_140,local_1f0,1,local_180);
      local_206 = !bVar1;
      local_1fc = (uint)(byte)local_206;
      ::FString::~FString(&local_140);
      if (local_206 == '\0') {
        local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_170 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_178.Index = local_1e8._0_4_;
        local_178.SerialNumber = local_1e8._4_4_;
        pFVar4 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                           (local_170,(FMassEntityHandle)local_1e8._0_8_);
        local_1ec = pFVar4->Value;
        ::FString::FString(&local_130,
                           "The entity should have the new component with the correct value set");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_130,local_1ec,0x1e240,local_168);
        local_205 = !bVar1;
        local_1f8 = (uint)(byte)local_205;
        ::FString::~FString(&local_130);
        if (local_205 == '\0') {
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

