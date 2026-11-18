// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471548f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FDestroyEverythingPolicy::InstantTest(FDestroyEverythingPolicy *this)

{
  FMassEntityHandle FVar1;
  FMassEntityHandle FVar2;
  bool bVar3;
  FMassEntityManager *pFVar4;
  longlong lVar5;
  FMassArchetypeSharedFragmentValues *pFVar6;
  undefined1 auStack_2f8 [32];
  FMassEntityHandle local_2d8;
  bool local_2c8;
  bool local_2c7;
  char local_2c6;
  undefined1 local_2c5;
  char local_2c4;
  undefined1 local_2c3;
  undefined1 local_2c2;
  uint local_2c0;
  uint local_2bc;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  FMassEntityManager *local_290;
  FRelationManager *local_288;
  FMassEntityHandle local_280;
  FMassEntityManager *local_278;
  FMassEntityHandle local_270;
  ForAnyElementType local_268;
  FAutomationTestBase *local_260;
  ForAnyElementType local_258;
  FMassEntityManager *local_250;
  FMassArchetypeHandle local_248;
  FMassEntityHandle local_238;
  FMassEntityManager *local_230;
  FMassEntityHandle local_228;
  FMassEntityManager *local_220;
  FAutomationTestBase *local_218;
  FMassEntityManager *local_210;
  FString local_208;
  FString local_1f8;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  FMassArchetypeSharedFragmentValues local_1d8;
  FMassArchetypeSharedFragmentValues local_168;
  FMassArchetypeSharedFragmentValues local_f8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)local_2b0,(FMassArchetypeHandle *)&this->field_0x60);
  local_210 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar6 = &local_1d8;
  for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar6->HashCache = 0;
    pFVar6 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar6->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_1d8);
  FMassEntityManager::CreateEntity
            (local_210,(FMassArchetypeHandle *)(local_2a0 + 8),
             (FMassArchetypeSharedFragmentValues *)local_2b0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
  local_290 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar6 = &local_168;
  for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar6->HashCache = 0;
    pFVar6 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar6->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_168);
  FMassEntityManager::CreateEntity
            (local_290,(FMassArchetypeHandle *)local_2a0,
             (FMassArchetypeSharedFragmentValues *)local_2b0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
  local_288 = *(FRelationManager **)&this->field_0xa8;
  local_2d8.Index = local_2a0._0_4_;
  local_2d8.SerialNumber = local_2a0._4_4_;
  FVar1.Index = *(int *)&this->field_0xa0;
  FVar1.SerialNumber = *(int *)&this->field_0xa4;
  FRelationManager::CreateRelationInstance
            (local_288,(FTypeHandle)local_1e0,FVar1,(FMassEntityHandle)local_2a0._8_8_);
  local_278 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_280.Index = local_2a0._0_4_;
  local_280.SerialNumber = local_2a0._4_4_;
  FMassEntityManager::DestroyEntity(local_278,(FMassEntityHandle)local_2a0._0_8_);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar4);
  local_260 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_268.Data =
       (FScriptContainerElement *)
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_270.Index = local_2a0._8_4_;
  local_270.SerialNumber = local_2a0._12_4_;
  local_2c8 = FMassEntityManager::IsEntityValid
                        ((FMassEntityManager *)local_268.Data,(FMassEntityHandle)local_2a0._8_8_);
  local_2c8 = !local_2c8;
  ::FString::FString(&local_208,"The source entity is destroyed along with the relation object");
  bVar3 = FAutomationTestBase::TestTrue(local_260,&local_208,local_2c8);
  local_2c6 = !bVar3;
  local_2c0 = (uint)(byte)local_2c6;
  ::FString::~FString(&local_208);
  if (local_2c6 == '\0') {
    local_258.Data =
         (FScriptContainerElement *)
         TSharedPtr<FMassEntityManager,1>::operator->
                   ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pFVar6 = &local_f8;
    for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)&pFVar6->HashCache = 0;
      pFVar6 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar6->HashCache + 1);
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8);
    FMassEntityManager::CreateEntity
              ((FMassEntityManager *)local_258.Data,(FMassArchetypeHandle *)local_2b8,
               (FMassArchetypeSharedFragmentValues *)local_2b0);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
    local_250 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pFVar6 = &local_88;
    for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)&pFVar6->HashCache = 0;
      pFVar6 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar6->HashCache + 1);
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
    FMassEntityManager::CreateEntity
              (local_250,&local_248,(FMassArchetypeSharedFragmentValues *)local_2b0);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
    local_248.DataPtr.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this->field_0xa8;
    local_2d8 = (FMassEntityHandle)local_248.DataPtr.Object;
    FVar2.Index = *(int *)&this->field_0xa0;
    FVar2.SerialNumber = *(int *)&this->field_0xa4;
    FRelationManager::CreateRelationInstance
              ((FRelationManager *)local_248.DataPtr.SharedReferenceCount.ReferenceController,
               (FTypeHandle)local_1e8,FVar2,(FMassEntityHandle)local_2b8);
    local_230 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_238.Index = local_2b8._0_4_;
    local_238.SerialNumber = local_2b8._4_4_;
    FMassEntityManager::DestroyEntity(local_230,(FMassEntityHandle)local_2b8);
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::FlushCommands(pFVar4);
    local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_220 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_228.Index = local_2b8._0_4_;
    local_228.SerialNumber = local_2b8._4_4_;
    local_2c7 = FMassEntityManager::IsEntityValid(local_220,(FMassEntityHandle)local_2b8);
    local_2c7 = !local_2c7;
    ::FString::FString(&local_1f8,"The source entity is destroyed along with the relation object");
    bVar3 = FAutomationTestBase::TestTrue(local_218,&local_1f8,local_2c7);
    local_2c4 = !bVar3;
    local_2bc = (uint)(byte)local_2c4;
    ::FString::~FString(&local_1f8);
    if (local_2c4 == '\0') {
      local_2c2 = 1;
      FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_2b0);
      local_2c5 = local_2c2;
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_2c3 = 0;
      FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_2b0);
      local_2c5 = local_2c3;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_2c5 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_2b0);
  }
  return (bool)local_2c5;
}

