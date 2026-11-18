// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147162020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::FEntityView_Invalidated::InstantTest(FEntityView_Invalidated *this)

{
  bool bVar1;
  longlong lVar2;
  FMassArchetypeSharedFragmentValues *pFVar3;
  undefined1 auStack_158 [32];
  bool local_138;
  char local_137;
  bool local_136;
  char local_135;
  uint local_134;
  uint local_130;
  FMassArchetypeHandle local_128;
  FMassEntityManager *local_118;
  FMassEntityHandle local_110;
  FMassEntityManager *local_108;
  FAutomationTestBase *local_100;
  FMassEntityHandle local_f8;
  UScriptStruct *local_f0;
  FMassEntityHandle local_e8;
  FMassEntityManager *local_e0;
  FAutomationTestBase *local_d8;
  FString local_d0;
  FString local_c0;
  FMassEntityView local_b0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_128.DataPtr.SharedReferenceCount.ReferenceController =
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
            ((FMassEntityManager *)local_128.DataPtr.SharedReferenceCount.ReferenceController,
             &local_128,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_110 = (FMassEntityHandle)local_128.DataPtr.Object;
  local_118 = *(FMassEntityManager **)&this->field_0x28;
  local_108 = local_118;
  FMassEntityView::FMassEntityView(&local_b0,local_118,(FMassEntityHandle)local_128.DataPtr.Object);
  local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_138 = FMassEntityView::IsValid(&local_b0);
  ::FString::FString(&local_d0,"The entity view is valid");
  bVar1 = FAutomationTestBase::TestTrue(local_100,&local_d0,local_138);
  local_137 = !bVar1;
  local_134 = (uint)(byte)local_137;
  ::FString::~FString(&local_d0);
  if (local_137 == '\0') {
    local_e0 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_f0 = FTestTag_A::StaticStruct();
    local_f8 = (FMassEntityHandle)local_128.DataPtr.Object;
    local_e8 = (FMassEntityHandle)local_128.DataPtr.Object;
    FMassEntityManager::AddTagToEntity
              (local_e0,(FMassEntityHandle)local_128.DataPtr.Object,local_f0);
    local_d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_136 = FMassEntityView::IsValid(&local_b0);
    ::FString::FString(&local_c0,"(NOT) The entity view is valid");
    bVar1 = FAutomationTestBase::TestFalse(local_d8,&local_c0,local_136);
    local_135 = !bVar1;
    local_130 = (uint)(byte)local_135;
    ::FString::~FString(&local_c0);
    if (local_135 == '\0') {
      bVar1 = true;
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

