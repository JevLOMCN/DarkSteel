// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FSharedFragmentValues_Remove @ 1470f5370

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragmentValues_Remove * __thiscall
FMassEntityTest::FSharedFragmentValues_Remove::FSharedFragmentValues_Remove
          (FSharedFragmentValues_Remove *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragmentValues_Remove_FMassEntityTest__6B_;
  return this;
}

// InstantTest @ 147185a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_Remove::InstantTest(FSharedFragmentValues_Remove *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar3;
  FConstSharedStruct *pFVar4;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar5;
  undefined1 auStack_5e8 [32];
  bool local_5c8;
  char local_5c7;
  undefined1 local_5c6;
  bool local_5c5;
  char local_5c4;
  undefined1 local_5c3;
  bool local_5c2;
  char local_5c1;
  undefined1 local_5c0;
  bool local_5bf;
  char local_5be;
  undefined1 local_5bd;
  bool local_5bc;
  char local_5bb;
  undefined1 local_5ba;
  bool local_5b9;
  char local_5b8;
  undefined1 local_5b7;
  int local_5b4;
  float local_5b0;
  uint local_5ac;
  uint local_5a8;
  uint local_5a4;
  uint local_5a0;
  uint local_59c;
  uint local_598;
  FAutomationTestBase *local_590;
  FAutomationTestBase *local_588;
  FAutomationTestBase *local_580;
  FAutomationTestBase *local_578;
  FAutomationTestBase *local_570;
  FAutomationTestBase *local_568;
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_5e8;
  local_5b4 = 0x1f;
  local_5b0 = __real_427c0000;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_328);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_500,&local_5b4);
  FMassArchetypeSharedFragmentValues::Add(&local_328,pFVar2);
  FSharedStruct::~FSharedStruct(&local_500);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_398);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>(&local_4f0,&local_5b0);
  FMassArchetypeSharedFragmentValues::Add(&local_398,pFVar2);
  FSharedStruct::~FSharedStruct(&local_4f0);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_478);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_4e0,&local_5b4);
  FMassArchetypeSharedFragmentValues::Add(&local_478,pFVar2);
  FSharedStruct::~FSharedStruct(&local_4e0);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>(&local_4d0,&local_5b0);
  FMassArchetypeSharedFragmentValues::Add(&local_478,pFVar2);
  FSharedStruct::~FSharedStruct(&local_4d0);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_1d8,&local_478);
  local_590 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_5c8 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_1d8,&local_478);
  ::FString::FString(&local_560,"Assignment should result in same values");
  bVar1 = FAutomationTestBase::TestTrue(local_590,&local_560,local_5c8);
  local_5c7 = !bVar1;
  local_5ac = (uint)(byte)local_5c7;
  ::FString::~FString(&local_560);
  if (local_5c7 == '\0') {
    pTVar3 = FMassArchetypeSharedFragmentValues::GetSharedFragmentBitSet(&local_328);
    FMassArchetypeSharedFragmentValues::Remove(&local_1d8,pTVar3);
    local_588 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_5c5 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_1d8,&local_398);
    ::FString::FString(&local_550,"#1 Removal results should match expectations");
    bVar1 = FAutomationTestBase::TestTrue(local_588,&local_550,local_5c5);
    local_5c4 = !bVar1;
    local_5a8 = (uint)(byte)local_5c4;
    ::FString::~FString(&local_550);
    if (local_5c4 == '\0') {
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8,&local_478);
      pTVar3 = FMassArchetypeSharedFragmentValues::GetSharedFragmentBitSet(&local_398);
      FMassArchetypeSharedFragmentValues::Remove(&local_f8,pTVar3);
      local_580 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_5c2 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_f8,&local_328);
      ::FString::FString(&local_540,"#2 Removal results should match expectations");
      bVar1 = FAutomationTestBase::TestTrue(local_580,&local_540,local_5c2);
      local_5c1 = !bVar1;
      local_5a4 = (uint)(byte)local_5c1;
      ::FString::~FString(&local_540);
      if (local_5c1 == '\0') {
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
        FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_248);
        pFVar4 = FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>
                           (&local_4c0,&local_5b4);
        FMassArchetypeSharedFragmentValues::Add(&local_248,pFVar4);
        FConstSharedStruct::~FConstSharedStruct(&local_4c0);
        FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_2b8);
        pFVar4 = FConstSharedStruct::Make<FTestConstSharedFragment_Float,float_const_&>
                           (&local_4b0,&local_5b0);
        FMassArchetypeSharedFragmentValues::Add(&local_2b8,pFVar4);
        FConstSharedStruct::~FConstSharedStruct(&local_4b0);
        FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_408);
        pFVar4 = FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>
                           (&local_4a0,&local_5b4);
        FMassArchetypeSharedFragmentValues::Add(&local_408,pFVar4);
        FConstSharedStruct::~FConstSharedStruct(&local_4a0);
        pFVar4 = FConstSharedStruct::Make<FTestConstSharedFragment_Float,float_const_&>
                           (&local_490,&local_5b0);
        FMassArchetypeSharedFragmentValues::Add(&local_408,pFVar4);
        FConstSharedStruct::~FConstSharedStruct(&local_490);
        FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                  (&local_168,&local_408);
        local_578 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_5bf = FMassArchetypeSharedFragmentValues::HasSameValues(&local_168,&local_408);
        ::FString::FString(&local_530,"Assignment should result in same values");
        bVar1 = FAutomationTestBase::TestTrue(local_578,&local_530,local_5bf);
        local_5be = !bVar1;
        local_5a0 = (uint)(byte)local_5be;
        ::FString::~FString(&local_530);
        if (local_5be == '\0') {
          pTVar5 = FMassArchetypeSharedFragmentValues::GetConstSharedFragmentBitSet(&local_248);
          FMassArchetypeSharedFragmentValues::Remove(&local_168,pTVar5);
          local_570 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_5bc = FMassArchetypeSharedFragmentValues::HasSameValues(&local_168,&local_2b8);
          ::FString::FString(&local_520,"#3 Removal results should match expectations");
          bVar1 = FAutomationTestBase::TestTrue(local_570,&local_520,local_5bc);
          local_5bb = !bVar1;
          local_59c = (uint)(byte)local_5bb;
          ::FString::~FString(&local_520);
          if (local_5bb == '\0') {
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
            FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                      (&local_88,&local_408);
            pTVar5 = FMassArchetypeSharedFragmentValues::GetConstSharedFragmentBitSet(&local_2b8);
            FMassArchetypeSharedFragmentValues::Remove(&local_88,pTVar5);
            local_568 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_5b9 = FMassArchetypeSharedFragmentValues::HasSameValues(&local_88,&local_248);
            ::FString::FString(&local_510,"#4 Removal results should match expectations");
            bVar1 = FAutomationTestBase::TestTrue(local_568,&local_510,local_5b9);
            local_5b8 = !bVar1;
            local_598 = (uint)(byte)local_5b8;
            ::FString::~FString(&local_510);
            if (local_5b8 == '\0') {
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
              local_5c6 = 1;
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_5b7 = 0;
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
              local_5c6 = local_5b7;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_5ba = 0;
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
            local_5c6 = local_5ba;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_5bd = 0;
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_168);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_408);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2b8);
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_248);
          local_5c6 = local_5bd;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_5c0 = 0;
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
        local_5c6 = local_5c0;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_5c3 = 0;
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
      local_5c6 = local_5c3;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_5c6 = 0;
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_1d8);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_478);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_398);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_328);
  }
  return (bool)local_5c6;
}

