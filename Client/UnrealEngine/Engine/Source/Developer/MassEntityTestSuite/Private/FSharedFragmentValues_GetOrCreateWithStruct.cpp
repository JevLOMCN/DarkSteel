// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147185250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_GetOrCreateWithStruct::InstantTest
          (FSharedFragmentValues_GetOrCreateWithStruct *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  FTestSharedFragment_Int *pFVar3;
  FSharedStruct local_158;
  FTestSharedFragment_Int local_148;
  FTestSharedFragment_Int local_144;
  FTestSharedFragment_Int local_140;
  int local_13c;
  int local_138;
  FSharedStruct local_130;
  FSharedStruct local_120;
  FMassEntityManager *local_110;
  FMassEntityManager *local_108;
  FSharedStruct *local_100;
  FSharedStruct *local_f8;
  FAutomationTestBase *local_f0;
  FSharedStruct *local_e8;
  FSharedStruct *local_e0;
  FAutomationTestBase *local_d8;
  FSharedStruct *local_d0;
  FSharedStruct *local_c8;
  FAutomationTestBase *local_c0;
  FSharedStruct *local_b8;
  FSharedStruct *local_b0;
  FAutomationTestBase *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FMassEntityManager *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FSharedStruct local_50;
  FSharedStruct local_40;
  FSharedStruct local_30;
  FSharedStruct local_20 [2];
  
  local_a0 = 1;
  local_9c = 2;
  FTestSharedFragment_Int::FTestSharedFragment_Int(&local_148,1);
  FTestSharedFragment_Int::FTestSharedFragment_Int(&local_144,1);
  FTestSharedFragment_Int::FTestSharedFragment_Int(&local_140,2);
  local_98 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>
                     (local_98,&local_148);
  FSharedStruct::FSharedStruct(&local_158,pFVar2);
  local_110 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>
                     (local_110,&local_144);
  FSharedStruct::FSharedStruct(&local_120,pFVar2);
  local_108 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int>
                     (local_108,&local_140);
  FSharedStruct::FSharedStruct(&local_130,pFVar2);
  local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_100 = &local_50;
  local_e8 = FSharedStruct::FSharedStruct(local_100,&local_120);
  local_f8 = &local_40;
  local_e0 = FSharedStruct::FSharedStruct(local_f8,&local_158);
  ::FString::FString(&local_90,
                     "Shared fragments created for same struct type using same constructor value should share memory"
                    );
  bVar1 = FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>(&local_90,local_e0,local_e8,local_f0)
  ;
  ::FString::~FString(&local_90);
  if (bVar1) {
    local_d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar3 = FSharedStruct::Get<FTestSharedFragment_Int>(&local_158);
    local_13c = pFVar3->Value;
    ::FString::FString(&local_80,
                       "Value in shared struct should be the same as the argument provided to GetOrCreateSharedFragment"
                      );
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_80,local_13c,1,local_d8);
    ::FString::~FString(&local_80);
    if (bVar1) {
      local_c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_d0 = &local_30;
      local_b8 = FSharedStruct::FSharedStruct(local_d0,&local_130);
      local_c8 = local_20;
      local_b0 = FSharedStruct::FSharedStruct(local_c8,&local_158);
      ::FString::FString(&local_70,
                         "Shared fragments created for same struct type using different constructor values should not share memory"
                        );
      bVar1 = FTestHelpers::TestNotEqual<FSharedStruct,FSharedStruct>
                        (&local_70,local_b0,local_b8,local_c0);
      ::FString::~FString(&local_70);
      if (bVar1) {
        local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar3 = FSharedStruct::Get<FTestSharedFragment_Int>(&local_130);
        local_138 = pFVar3->Value;
        ::FString::FString(&local_60,
                           "Value in shared struct should be the same as the argument provided to GetOrCreateSharedFragment"
                          );
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_60,local_138,2,local_a8);
        ::FString::~FString(&local_60);
        if (bVar1) {
          FSharedStruct::~FSharedStruct(&local_130);
          FSharedStruct::~FSharedStruct(&local_120);
          FSharedStruct::~FSharedStruct(&local_158);
          bVar1 = true;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FSharedStruct::~FSharedStruct(&local_130);
          FSharedStruct::~FSharedStruct(&local_120);
          FSharedStruct::~FSharedStruct(&local_158);
          bVar1 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FSharedStruct::~FSharedStruct(&local_130);
        FSharedStruct::~FSharedStruct(&local_120);
        FSharedStruct::~FSharedStruct(&local_158);
        bVar1 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FSharedStruct::~FSharedStruct(&local_130);
      FSharedStruct::~FSharedStruct(&local_120);
      FSharedStruct::~FSharedStruct(&local_158);
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FSharedStruct::~FSharedStruct(&local_130);
    FSharedStruct::~FSharedStruct(&local_120);
    FSharedStruct::~FSharedStruct(&local_158);
    bVar1 = false;
  }
  return bVar1;
}

