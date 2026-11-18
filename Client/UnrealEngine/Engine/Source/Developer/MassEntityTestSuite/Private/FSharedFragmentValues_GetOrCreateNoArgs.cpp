// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147184ae0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_GetOrCreateNoArgs::InstantTest
          (FSharedFragmentValues_GetOrCreateNoArgs *this)

{
  bool bVar1;
  FMassEntityManager *pFVar2;
  FSharedStruct *pFVar3;
  FSharedStruct local_e8;
  FSharedStruct local_d8;
  FSharedStruct local_c8;
  FSharedStruct *local_b8;
  FSharedStruct *local_b0;
  FAutomationTestBase *local_a8;
  FSharedStruct *local_a0;
  FSharedStruct *local_98;
  FSharedStruct *local_90;
  FSharedStruct *local_88;
  FAutomationTestBase *local_80;
  FSharedStruct *local_78;
  FSharedStruct *local_70;
  FString local_68;
  FString local_58;
  FSharedStruct local_48;
  FSharedStruct local_38;
  FSharedStruct local_28;
  FSharedStruct local_18;
  
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>(pFVar2);
  FSharedStruct::FSharedStruct(&local_e8,pFVar3);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>(pFVar2);
  FSharedStruct::FSharedStruct(&local_c8,pFVar3);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>(pFVar2);
  FSharedStruct::FSharedStruct(&local_d8,pFVar3);
  local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_b8 = &local_48;
  local_a0 = FSharedStruct::FSharedStruct(local_b8,&local_c8);
  local_b0 = &local_38;
  local_98 = FSharedStruct::FSharedStruct(local_b0,&local_e8);
  ::FString::FString(&local_68,
                     "Shared fragments created for same struct type using default constructor should share memory"
                    );
  bVar1 = FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>(&local_68,local_98,local_a0,local_a8)
  ;
  ::FString::~FString(&local_68);
  if (bVar1) {
    local_80 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_90 = &local_28;
    local_78 = FSharedStruct::FSharedStruct(local_90,&local_d8);
    local_88 = &local_18;
    local_70 = FSharedStruct::FSharedStruct(local_88,&local_e8);
    ::FString::FString(&local_58,
                       "Shared fragments created for same struct type using default constructor should share memory"
                      );
    bVar1 = FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>
                      (&local_58,local_70,local_78,local_80);
    ::FString::~FString(&local_58);
    if (bVar1) {
      FSharedStruct::~FSharedStruct(&local_d8);
      FSharedStruct::~FSharedStruct(&local_c8);
      FSharedStruct::~FSharedStruct(&local_e8);
      bVar1 = true;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FSharedStruct::~FSharedStruct(&local_d8);
      FSharedStruct::~FSharedStruct(&local_c8);
      FSharedStruct::~FSharedStruct(&local_e8);
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FSharedStruct::~FSharedStruct(&local_d8);
    FSharedStruct::~FSharedStruct(&local_c8);
    FSharedStruct::~FSharedStruct(&local_e8);
    bVar1 = false;
  }
  return bVar1;
}

