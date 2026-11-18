// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147184600

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_GetOrCreateConstWithStruct::InstantTest
          (FSharedFragmentValues_GetOrCreateConstWithStruct *this)

{
  bool bVar1;
  FConstSharedStruct *pFVar2;
  FTestConstSharedFragment_Int *pFVar3;
  FConstSharedStruct local_158;
  FTestConstSharedFragment_Int local_148;
  FTestConstSharedFragment_Int local_144;
  FTestConstSharedFragment_Int local_140;
  int local_13c;
  int local_138;
  FConstSharedStruct local_130;
  FConstSharedStruct local_120;
  FMassEntityManager *local_110;
  FMassEntityManager *local_108;
  FConstSharedStruct *local_100;
  FConstSharedStruct *local_f8;
  FAutomationTestBase *local_f0;
  FConstSharedStruct *local_e8;
  FConstSharedStruct *local_e0;
  FAutomationTestBase *local_d8;
  FConstSharedStruct *local_d0;
  FConstSharedStruct *local_c8;
  FAutomationTestBase *local_c0;
  FConstSharedStruct *local_b8;
  FConstSharedStruct *local_b0;
  FAutomationTestBase *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FMassEntityManager *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FConstSharedStruct local_50;
  FConstSharedStruct local_40;
  FConstSharedStruct local_30;
  FConstSharedStruct local_20 [2];
  
  local_a0 = 1;
  local_9c = 2;
  FTestConstSharedFragment_Int::FTestConstSharedFragment_Int(&local_148,1);
  FTestConstSharedFragment_Int::FTestConstSharedFragment_Int(&local_144,1);
  FTestConstSharedFragment_Int::FTestConstSharedFragment_Int(&local_140,2);
  local_98 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>
                     (local_98,&local_148);
  FConstSharedStruct::FConstSharedStruct(&local_158,pFVar2);
  local_110 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>
                     (local_110,&local_144);
  FConstSharedStruct::FConstSharedStruct(&local_120,pFVar2);
  local_108 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar2 = FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int>
                     (local_108,&local_140);
  FConstSharedStruct::FConstSharedStruct(&local_130,pFVar2);
  local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_100 = &local_50;
  local_e8 = FConstSharedStruct::FConstSharedStruct(local_100,&local_120);
  local_f8 = &local_40;
  local_e0 = FConstSharedStruct::FConstSharedStruct(local_f8,&local_158);
  ::FString::FString(&local_90,
                     "Shared fragments created for same struct type using same constructor value should share memory"
                    );
  bVar1 = FTestHelpers::TestEqual<FConstSharedStruct,FConstSharedStruct>
                    (&local_90,local_e0,local_e8,local_f0);
  ::FString::~FString(&local_90);
  if (bVar1) {
    local_d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar3 = FConstSharedStruct::Get<FTestConstSharedFragment_Int_const_>(&local_158);
    local_13c = pFVar3->Value;
    ::FString::FString(&local_80,
                       "Value in shared struct should be the same as the argument provided to GetOrCreateConstSharedFragment"
                      );
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_80,local_13c,1,local_d8);
    ::FString::~FString(&local_80);
    if (bVar1) {
      local_c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_d0 = &local_30;
      local_b8 = FConstSharedStruct::FConstSharedStruct(local_d0,&local_130);
      local_c8 = local_20;
      local_b0 = FConstSharedStruct::FConstSharedStruct(local_c8,&local_158);
      ::FString::FString(&local_70,
                         "Shared fragments created for same struct type using different constructor values should not share memory"
                        );
      bVar1 = FTestHelpers::TestNotEqual<FConstSharedStruct,FConstSharedStruct>
                        (&local_70,local_b0,local_b8,local_c0);
      ::FString::~FString(&local_70);
      if (bVar1) {
        local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar3 = FConstSharedStruct::Get<FTestConstSharedFragment_Int_const_>(&local_130);
        local_138 = pFVar3->Value;
        ::FString::FString(&local_60,
                           "Value in shared struct should be the same as the argument provided to GetOrCreateConstSharedFragment"
                          );
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_60,local_138,2,local_a8);
        ::FString::~FString(&local_60);
        if (bVar1) {
          FConstSharedStruct::~FConstSharedStruct(&local_130);
          FConstSharedStruct::~FConstSharedStruct(&local_120);
          FConstSharedStruct::~FConstSharedStruct(&local_158);
          bVar1 = true;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FConstSharedStruct::~FConstSharedStruct(&local_130);
          FConstSharedStruct::~FConstSharedStruct(&local_120);
          FConstSharedStruct::~FConstSharedStruct(&local_158);
          bVar1 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FConstSharedStruct::~FConstSharedStruct(&local_130);
        FConstSharedStruct::~FConstSharedStruct(&local_120);
        FConstSharedStruct::~FConstSharedStruct(&local_158);
        bVar1 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FConstSharedStruct::~FConstSharedStruct(&local_130);
      FConstSharedStruct::~FConstSharedStruct(&local_120);
      FConstSharedStruct::~FConstSharedStruct(&local_158);
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FConstSharedStruct::~FConstSharedStruct(&local_130);
    FConstSharedStruct::~FConstSharedStruct(&local_120);
    FConstSharedStruct::~FConstSharedStruct(&local_158);
    bVar1 = false;
  }
  return bVar1;
}

