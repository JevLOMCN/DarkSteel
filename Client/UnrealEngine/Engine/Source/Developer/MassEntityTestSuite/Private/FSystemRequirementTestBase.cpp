// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// SetUp @ 1471aa180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassSystemRequirementTest::FSystemRequirementTestBase::SetUp(FSystemRequirementTestBase *this)

{
  bool bVar1;
  TSharedRef<FMassEntityManager,1> *pTVar2;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_e8 [32];
  FMassEntityManager *local_c8;
  longlong *local_c0;
  FMassFragmentRequirements *local_b8;
  FMassEntityQuery *local_b0;
  undefined1 local_a8 [32];
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    local_c8 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    pFVar4 = &local_88;
    for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&pFVar4->HashCache = 0;
      pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
    FMassEntityManager::CreateEntity
              (local_c8,(FMassArchetypeHandle *)local_a8,
               (FMassArchetypeSharedFragmentValues *)&this->_padding_);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
    local_b8 = (FMassFragmentRequirements *)&this->EntityQuery;
    local_c0 = &this->_padding_;
    pTVar2 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                       ((TSharedPtr<FMassEntityManager,1> *)local_c0,
                        (TSharedRef<FMassEntityManager,1> *)(local_a8 + 8));
    FMassFragmentRequirements::Initialize(local_b8,pTVar2);
    TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>
              ((TSharedRef<FMassEntityManager,1> *)(local_a8 + 8));
    local_b0 = &this->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
              ((FMassFragmentRequirements *)local_b0,ReadOnly,All);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

