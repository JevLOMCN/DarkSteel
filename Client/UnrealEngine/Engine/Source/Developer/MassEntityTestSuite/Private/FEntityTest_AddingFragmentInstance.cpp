// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715a210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_AddingFragmentInstance::InstantTest
          (FEntityTest_AddingFragmentInstance *this)

{
  bool bVar1;
  TArrayView<FInstancedStruct,int> *pTVar2;
  TArrayView<FInstancedStruct_const_,int> *pTVar3;
  FMassEntityManager *this_00;
  FTestFragment_Int *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  FMassArchetypeSharedFragmentValues *pFVar7;
  undefined1 *puVar8;
  undefined1 auStack_278 [32];
  char local_258;
  char local_257;
  char local_256;
  char local_255;
  char local_254;
  char local_253;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  FMassArchetypeHandle local_220;
  TArrayView<FInstancedStruct_const_,int> *local_210;
  FMassEntityHandle local_208;
  FMassEntityHandle local_200;
  FMassEntityManager *local_1f8;
  FAutomationTestBase *local_1f0;
  FMassEntityManager *local_1e8;
  FAutomationTestBase *local_1e0;
  FMassEntityManager *local_1d8;
  FAutomationTestBase *local_1d0;
  FMassEntityManager *local_1c8;
  FAutomationTestBase *local_1c0;
  FMassArchetypeHandle *local_1b8;
  FMassEntityHandle local_1b0;
  FMassArchetypeHandle *local_1a8;
  FMassEntityManager *local_1a0;
  FAutomationTestBase *local_198;
  FMassArchetypeHandle *local_190;
  FMassArchetypeHandle *local_188;
  FMassEntityHandle local_180;
  FMassEntityManager *local_178;
  FAutomationTestBase *local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TArrayView<FInstancedStruct_const_,int> local_e8;
  TArrayView<FInstancedStruct_const_,int> local_d8;
  TArrayView<FInstancedStruct,int> local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_220.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar7 = &local_98;
  for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar7->HashCache = 0;
    pFVar7 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar7->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::CreateEntity
            ((FMassEntityManager *)local_220.DataPtr.SharedReferenceCount.ReferenceController,
             &local_220,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  local_1f8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_210 = &local_d8;
  pTVar2 = MakeArrayView<FInstancedStruct>(&local_c8,(FInstancedStruct *)&this->field_0x80,1);
  pTVar3 = TArrayView<FInstancedStruct_const_,int>::
           TArrayView<FInstancedStruct_const_,int><TArrayView<FInstancedStruct,int>,TArrayView<FInstancedStruct,int>_>
                     (local_210,pTVar2);
  puVar6 = local_108;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar3->DataPtr;
    pTVar3 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_108;
  puVar8 = local_f8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_208 = (FMassEntityHandle)local_220.DataPtr.Object;
  local_200 = (FMassEntityHandle)local_220.DataPtr.Object;
  puVar6 = local_f8;
  pTVar3 = &local_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar3->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar3 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
  }
  FMassEntityManager::AddFragmentInstanceListToEntity
            (local_1f8,(FMassEntityHandle)local_220.DataPtr.Object,&local_e8);
  local_1f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_238 = FMassEntityManager::DebugGetEntityCount(this_00);
  ::FString::FString(&local_168,"There should be one entity across the whole system");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_168,local_238,1,local_1f0);
  local_258 = !bVar1;
  local_250 = (uint)(byte)local_258;
  ::FString::~FString(&local_168);
  if (local_258 == '\0') {
    local_1e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_1e8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_234 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_1e8,(FMassArchetypeHandle *)&this->field_0x50);
    ::FString::FString(&local_158,"The original archetype should now have no entities");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_158,local_234,0,local_1e0);
    local_257 = !bVar1;
    local_24c = (uint)(byte)local_257;
    ::FString::~FString(&local_158);
    if (local_257 == '\0') {
      local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1d8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_230 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_1d8,(FMassArchetypeHandle *)&this->field_0x70);
      ::FString::FString(&local_148,"The destination archetype should now store a single entity");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_148,local_230,1,local_1d0);
      local_256 = !bVar1;
      local_248 = (uint)(byte)local_256;
      ::FString::~FString(&local_148);
      if (local_256 == '\0') {
        local_1c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_1c8 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_22c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_1c8,(FMassArchetypeHandle *)&this->field_0x60);
        ::FString::FString(&local_138,
                           "The archetype containing just the new fragment should not be affected");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_138,local_22c,0,local_1c0);
        local_255 = !bVar1;
        local_244 = (uint)(byte)local_255;
        ::FString::~FString(&local_138);
        if (local_255 == '\0') {
          local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_1b8 = &local_b8;
          local_190 = FMassArchetypeHandle::FMassArchetypeHandle
                                (local_1b8,(FMassArchetypeHandle *)&this->field_0x70);
          local_1a8 = &local_a8;
          local_1a0 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_1b0 = (FMassEntityHandle)local_220.DataPtr.Object;
          local_188 = FMassEntityManager::GetArchetypeForEntity
                                (local_1a0,local_1a8,(FMassEntityHandle)local_220.DataPtr.Object);
          ::FString::FString(&local_128,"The entity should get associated with the new archetype");
          bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                            (&local_128,local_188,local_190,local_198);
          local_254 = !bVar1;
          local_240 = (uint)(byte)local_254;
          ::FString::~FString(&local_128);
          if (local_254 == '\0') {
            local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_180 = (FMassEntityHandle)local_220.DataPtr.Object;
            pFVar4 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                               (local_178,(FMassEntityHandle)local_220.DataPtr.Object);
            local_228 = pFVar4->Value;
            ::FString::FString(&local_118,
                               "The entity should have the new component with the correct value set"
                              );
            bVar1 = FTestHelpers::TestEqual<int,int>(&local_118,local_228,0x1e240,local_170);
            local_253 = !bVar1;
            local_23c = (uint)(byte)local_253;
            ::FString::~FString(&local_118);
            if (local_253 == '\0') {
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
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

