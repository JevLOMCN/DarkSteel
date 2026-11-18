// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FSharedFragmentValues_Append @ 1470f5140

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragmentValues_Append * __thiscall
FMassEntityTest::FSharedFragmentValues_Append::FSharedFragmentValues_Append
          (FSharedFragmentValues_Append *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragmentValues_Append_FMassEntityTest__6B_;
  return this;
}

// InstantTest @ 147182470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_Append::InstantTest(FSharedFragmentValues_Append *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  FConstSharedStruct *pFVar3;
  undefined1 auStack_628 [32];
  bool local_608;
  char local_607;
  undefined1 local_606;
  bool local_605;
  char local_604;
  undefined1 local_603;
  bool local_602;
  char local_601;
  undefined1 local_600;
  bool local_5ff;
  char local_5fe;
  undefined1 local_5fd;
  bool local_5fc;
  char local_5fb;
  undefined1 local_5fa;
  bool local_5f9;
  char local_5f8;
  undefined1 local_5f7;
  bool local_5f6;
  char local_5f5;
  undefined1 local_5f4;
  bool local_5f3;
  char local_5f2;
  undefined1 local_5f1;
  undefined1 local_5f0;
  int local_5ec;
  float local_5e8;
  uint local_5e4;
  uint local_5e0;
  uint local_5dc;
  uint local_5d8;
  uint local_5d4;
  uint local_5d0;
  uint local_5cc;
  uint local_5c8;
  FAutomationTestBase *local_5c0;
  FAutomationTestBase *local_5b8;
  FAutomationTestBase *local_5b0;
  FAutomationTestBase *local_5a8;
  FAutomationTestBase *local_5a0;
  FAutomationTestBase *local_598;
  FAutomationTestBase *local_590;
  FAutomationTestBase *local_588;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FSharedStruct local_500;
  FSharedStruct local_4f0;
  FSharedStruct local_4e0;
  FSharedStruct local_4d0;
  FConstSharedStruct local_4c0;
  FConstSharedStruct local_4b0;
  FConstSharedStruct local_4a0;
  FConstSharedStruct local_490;
  FMassArchetypeSharedFragmentValues local_478;
  FMassArchetypeSharedFragmentValues local_408;
  FMassArchetypeSharedFragmentValues local_398;
  FMassArchetypeSharedFragmentValues local_328;
  FMassArchetypeSharedFragmentValues local_2b8;
  FMassArchetypeSharedFragmentValues local_248;
  FMassArchetypeSharedFragmentValues local_1d8;
  FMassArchetypeSharedFragmentValues local_168;
  FMassArchetypeSharedFragmentValues local_f8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_628;
  local_5ec = 0x1f;
  local_5e8 = __real_427c0000;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_398);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_500,&local_5ec);
  FMassArchetypeSharedFragmentValues::Add(&local_398,pFVar2);
  FSharedStruct::~FSharedStruct(&local_500);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_408);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>(&local_4f0,&local_5e8);
  FMassArchetypeSharedFragmentValues::Add(&local_408,pFVar2);
  FSharedStruct::~FSharedStruct(&local_4f0);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_478);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_4e0,&local_5ec);
  FMassArchetypeSharedFragmentValues::Add(&local_478,pFVar2);
  FSharedStruct::~FSharedStruct(&local_4e0);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>(&local_4d0,&local_5e8);
  FMassArchetypeSharedFragmentValues::Add(&local_478,pFVar2);
  FSharedStruct::~FSharedStruct(&local_4d0);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_1d8);
  FMassArchetypeSharedFragmentValues::Append(&local_1d8,&local_398);
  local_5c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_608 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_1d8,&local_398);
  ::FString::FString(&local_580,"#1 Append results should match expectations");
  bVar1 = FAutomationTestBase::TestTrue(local_5c0,&local_580,local_608);
  local_607 = !bVar1;
  local_5e4 = (uint)(byte)local_607;
  ::FString::~FString(&local_580);
  if (local_607 == '\0') {
    FMassArchetypeSharedFragmentValues::Append(&local_1d8,&local_408);
    local_5b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_605 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_1d8,&local_478);
    ::FString::FString(&local_570,"#2 Append results should match expectations");
    bVar1 = FAutomationTestBase::TestTrue(local_5b8,&local_570,local_605);
    local_604 = !bVar1;
    local_5e0 = (uint)(byte)local_604;
    ::FString::~FString(&local_570);
    if (local_604 == '\0') {
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_168);
      FMassArchetypeSharedFragmentValues::Append(&local_168,&local_408);
      local_5b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_602 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_168,&local_408);
      ::FString::FString(&local_560,"#3 Append results should match expectations");
      bVar1 = FAutomationTestBase::TestTrue(local_5b0,&local_560,local_602);
      local_601 = !bVar1;
      local_5dc = (uint)(byte)local_601;
      ::FString::~FString(&local_560);
      if (local_601 == '\0') {
        FMassArchetypeSharedFragmentValues::Append(&local_168,&local_398);
        local_5a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_5ff = FMassArchetypeSharedFragmentValues::HasSameValues(&local_168,&local_478);
        ::FString::FString(&local_550,"#4 Append results should match expectations");
        bVar1 = FAutomationTestBase::TestTrue(local_5a8,&local_550,local_5ff);
        local_5fe = !bVar1;
        local_5d8 = (uint)(byte)local_5fe;
        ::FString::~FString(&local_550);
        if (local_5fe == '\0') {
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_248);
          pFVar3 = FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>
                             (&local_4c0,&local_5ec);
          FMassArchetypeSharedFragmentValues::Add(&local_248,pFVar3);
          FConstSharedStruct::~FConstSharedStruct(&local_4c0);
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_2b8);
          pFVar3 = FConstSharedStruct::Make<FTestConstSharedFragment_Float,float_const_&>
                             (&local_4b0,&local_5e8);
          FMassArchetypeSharedFragmentValues::Add(&local_2b8,pFVar3);
          FConstSharedStruct::~FConstSharedStruct(&local_4b0);
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_328);
          pFVar3 = FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>
                             (&local_4a0,&local_5ec);
          FMassArchetypeSharedFragmentValues::Add(&local_328,pFVar3);
          FConstSharedStruct::~FConstSharedStruct(&local_4a0);
          pFVar3 = FConstSharedStruct::Make<FTestConstSharedFragment_Float,float_const_&>
                             (&local_490,&local_5e8);
          FMassArchetypeSharedFragmentValues::Add(&local_328,pFVar3);
          FConstSharedStruct::~FConstSharedStruct(&local_490);
          FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8);
          FMassArchetypeSharedFragmentValues::Append(&local_f8,&local_248);
          local_5a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_5fc = FMassArchetypeSharedFragmentValues::HasSameValues(&local_f8,&local_248);
          ::FString::FString(&local_540,"#5 Append results should match expectations");
          bVar1 = FAutomationTestBase::TestTrue(local_5a0,&local_540,local_5fc);
          local_5fb = !bVar1;
          local_5d4 = (uint)(byte)local_5fb;
          ::FString::~FString(&local_540);
          if (local_5fb == '\0') {
            FMassArchetypeSharedFragmentValues::Append(&local_f8,&local_2b8);
            local_598 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_5f9 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_f8,&local_328);
            ::FString::FString(&local_530,"#6 Append results should match expectations");
            bVar1 = FAutomationTestBase::TestTrue(local_598,&local_530,local_5f9);
            local_5f8 = !bVar1;
            local_5d0 = (uint)(byte)local_5f8;
            ::FString::~FString(&local_530);
            if (local_5f8 == '\0') {
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
              FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
              FMassArchetypeSharedFragmentValues::Append(&local_88,&local_2b8);
              local_590 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_5f6 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_88,&local_2b8);
              ::FString::FString(&local_520,"#7 Append results should match expectations");
              bVar1 = FAutomationTestBase::TestTrue(local_590,&local_520,local_5f6);
              local_5f5 = !bVar1;
              local_5cc = (uint)(byte)local_5f5;
              ::FString::~FString(&local_520);
              if (local_5f5 == '\0') {
                FMassArchetypeSharedFragmentValues::Append(&local_88,&local_248);
                local_588 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_5f3 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_88,&local_328);
                ::FString::FString(&local_510,"#8 Append results should match expectations");
                bVar1 = FAutomationTestBase::TestTrue(local_588,&local_510,local_5f3);
                local_5f2 = !bVar1;
                local_5c8 = (uint)(byte)local_5f2;
                ::FString::~FString(&local_510);
                if (local_5f2 == '\0') {
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88)
                  ;
                  local_5f0 = 1;
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_328);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_2b8);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_248);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_478);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_408);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_398);
                  local_606 = local_5f0;
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_5f1 = 0;
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88)
                  ;
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_328);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_2b8);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_248);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_478);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_408);
                  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                            (&local_398);
                  local_606 = local_5f1;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_5f4 = 0;
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
                local_606 = local_5f4;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_5f7 = 0;
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
              local_606 = local_5f7;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_5fa = 0;
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
            local_606 = local_5fa;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_5fd = 0;
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
          local_606 = local_5fd;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_600 = 0;
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
        local_606 = local_600;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_603 = 0;
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
      local_606 = local_603;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_606 = 0;
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
  }
  return (bool)local_606;
}

