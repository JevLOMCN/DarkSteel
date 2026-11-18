// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147184da0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_GetOrCreateWithArgs::InstantTest
          (FSharedFragmentValues_GetOrCreateWithArgs *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  FTestSharedFragment_Int *pFVar3;
  int local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  FSharedStruct local_148;
  int local_138;
  int local_134;
  int local_130;
  FSharedStruct local_128;
  FSharedStruct local_118;
  FSharedStruct *local_108;
  FSharedStruct *local_100;
  FAutomationTestBase *local_f8;
  FSharedStruct *local_f0;
  FSharedStruct *local_e8;
  FAutomationTestBase *local_e0;
  FSharedStruct *local_d8;
  FSharedStruct *local_d0;
  FAutomationTestBase *local_c8;
  FSharedStruct *local_c0;
  FSharedStruct *local_b8;
  FAutomationTestBase *local_b0;
  FMassEntityManager *local_a8;
  FMassEntityManager *local_a0;
  FMassEntityManager *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FSharedStruct local_50;
  FSharedStruct local_40;
  FSharedStruct local_30;
  FSharedStruct local_20 [2];
  
  local_15c = 1;
  local_138 = 2;
  local_a8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int,int_const_&>
                     (local_a8,&local_15c);
  FSharedStruct::FSharedStruct(&local_148,pFVar2);
  local_a0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int,int_const_&>
                     (local_a0,&local_15c);
  FSharedStruct::FSharedStruct(&local_118,pFVar2);
  local_98 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int,int_const_&>
                     (local_98,&local_138);
  FSharedStruct::FSharedStruct(&local_128,pFVar2);
  local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_108 = &local_50;
  local_f0 = FSharedStruct::FSharedStruct(local_108,&local_118);
  local_100 = &local_40;
  local_e8 = FSharedStruct::FSharedStruct(local_100,&local_148);
  ::FString::FString(&local_90,
                     "Shared fragments created for same struct type using same constructor value should share memory"
                    );
  bVar1 = FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>(&local_90,local_e8,local_f0,local_f8)
  ;
  local_158 = (uint)!bVar1;
  ::FString::~FString(&local_90);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FSharedStruct::~FSharedStruct(&local_128);
    FSharedStruct::~FSharedStruct(&local_118);
    FSharedStruct::~FSharedStruct(&local_148);
    bVar1 = false;
  }
  else {
    local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar3 = FSharedStruct::Get<FTestSharedFragment_Int>(&local_148);
    local_134 = pFVar3->Value;
    ::FString::FString(&local_80,
                       "Value in shared struct should be the same as the argument provided to GetOrCreateSharedFragment"
                      );
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_80,local_134,1,local_e0);
    local_154 = (uint)!bVar1;
    ::FString::~FString(&local_80);
    if (!bVar1) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FSharedStruct::~FSharedStruct(&local_128);
      FSharedStruct::~FSharedStruct(&local_118);
      FSharedStruct::~FSharedStruct(&local_148);
      bVar1 = false;
    }
    else {
      local_c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_d8 = &local_30;
      local_c0 = FSharedStruct::FSharedStruct(local_d8,&local_128);
      local_d0 = local_20;
      local_b8 = FSharedStruct::FSharedStruct(local_d0,&local_148);
      ::FString::FString(&local_70,
                         "Shared fragments created for same struct type using different constructor values should not share memory"
                        );
      bVar1 = FTestHelpers::TestNotEqual<FSharedStruct,FSharedStruct>
                        (&local_70,local_b8,local_c0,local_c8);
      local_150 = (uint)!bVar1;
      ::FString::~FString(&local_70);
      if (!bVar1) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FSharedStruct::~FSharedStruct(&local_128);
        FSharedStruct::~FSharedStruct(&local_118);
        FSharedStruct::~FSharedStruct(&local_148);
        bVar1 = false;
      }
      else {
        local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar3 = FSharedStruct::Get<FTestSharedFragment_Int>(&local_128);
        local_130 = pFVar3->Value;
        ::FString::FString(&local_60,
                           "Value in shared struct should be the same as the argument provided to GetOrCreateSharedFragment"
                          );
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_60,local_130,2,local_b0);
        local_14c = (uint)!bVar1;
        ::FString::~FString(&local_60);
        if (!bVar1) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FSharedStruct::~FSharedStruct(&local_128);
          FSharedStruct::~FSharedStruct(&local_118);
          FSharedStruct::~FSharedStruct(&local_148);
          bVar1 = false;
        }
        else {
          FSharedStruct::~FSharedStruct(&local_128);
          FSharedStruct::~FSharedStruct(&local_118);
          FSharedStruct::~FSharedStruct(&local_148);
          bVar1 = true;
        }
      }
    }
  }
  return bVar1;
}

