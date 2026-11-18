// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147183e90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_GetOrCreateConstNoArgs::InstantTest
          (FSharedFragmentValues_GetOrCreateConstNoArgs *this)

{
  bool bVar1;
  FMassEntityManager *pFVar2;
  FConstSharedStruct *pFVar3;
  FConstSharedStruct local_e8;
  FConstSharedStruct local_d8;
  FConstSharedStruct local_c8;
  FConstSharedStruct *local_b8;
  FConstSharedStruct *local_b0;
  FAutomationTestBase *local_a8;
  FConstSharedStruct *local_a0;
  FConstSharedStruct *local_98;
  FConstSharedStruct *local_90;
  FConstSharedStruct *local_88;
  FAutomationTestBase *local_80;
  FConstSharedStruct *local_78;
  FConstSharedStruct *local_70;
  FString local_68;
  FString local_58;
  FConstSharedStruct local_48;
  FConstSharedStruct local_38;
  FConstSharedStruct local_28;
  FConstSharedStruct local_18;
  
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>(pFVar2);
  FConstSharedStruct::FConstSharedStruct(&local_e8,pFVar3);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>(pFVar2);
  FConstSharedStruct::FConstSharedStruct(&local_c8,pFVar3);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>(pFVar2);
  FConstSharedStruct::FConstSharedStruct(&local_d8,pFVar3);
  local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_b8 = &local_48;
  local_a0 = FConstSharedStruct::FConstSharedStruct(local_b8,&local_c8);
  local_b0 = &local_38;
  local_98 = FConstSharedStruct::FConstSharedStruct(local_b0,&local_e8);
  ::FString::FString(&local_68,
                     "Shared fragments created for same struct type using default constructor should share memory"
                    );
  bVar1 = FTestHelpers::TestEqual<FConstSharedStruct,FConstSharedStruct>
                    (&local_68,local_98,local_a0,local_a8);
  ::FString::~FString(&local_68);
  if (bVar1) {
    local_80 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_90 = &local_28;
    local_78 = FConstSharedStruct::FConstSharedStruct(local_90,&local_d8);
    local_88 = &local_18;
    local_70 = FConstSharedStruct::FConstSharedStruct(local_88,&local_e8);
    ::FString::FString(&local_58,
                       "Shared fragments created for same struct type using default constructor should share memory"
                      );
    bVar1 = FTestHelpers::TestEqual<FConstSharedStruct,FConstSharedStruct>
                      (&local_58,local_70,local_78,local_80);
    ::FString::~FString(&local_58);
    if (bVar1) {
      FConstSharedStruct::~FConstSharedStruct(&local_d8);
      FConstSharedStruct::~FConstSharedStruct(&local_c8);
      FConstSharedStruct::~FConstSharedStruct(&local_e8);
      bVar1 = true;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FConstSharedStruct::~FConstSharedStruct(&local_d8);
      FConstSharedStruct::~FConstSharedStruct(&local_c8);
      FConstSharedStruct::~FConstSharedStruct(&local_e8);
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FConstSharedStruct::~FConstSharedStruct(&local_d8);
    FConstSharedStruct::~FConstSharedStruct(&local_c8);
    FConstSharedStruct::~FConstSharedStruct(&local_e8);
    bVar1 = false;
  }
  return bVar1;
}

