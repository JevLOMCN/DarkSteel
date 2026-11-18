// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// Update @ 1471b1050

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveGCShield::Update
          (FDynamicProcessorsRemoveGCShield *this)

{
  bool bVar1;
  
  CollectGarbage(RF_NoFlags,true);
  bVar1 = FDynamicProcessorsRemoveTrivial::Update((FDynamicProcessorsRemoveTrivial *)this);
  return bVar1;
}

// VerifyLatentResults @ 1471b1bb0

void __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsRemoveGCShield::VerifyLatentResults
          (FDynamicProcessorsRemoveGCShield *this)

{
  UMassTestProcessorBase *pUVar1;
  bool bVar2;
  FAutomationTestBase *pFVar3;
  UObject *pUVar4;
  FString local_30;
  FString local_20 [2];
  
  FDynamicProcessorsAddTrivial::VerifyLatentResults((FDynamicProcessorsAddTrivial *)this);
  pFVar3 = FAITestBase::GetTestRunner((FAITestBase *)this);
  pUVar1 = *(UMassTestProcessorBase **)&this->field_0x190;
  ::FString::FString(&local_30,
                     "Expecting the dynamic processor to have been set (test implementation verification)"
                    );
  bVar2 = FAutomationTestBase::TestNotNull<UMassTestProcessorBase>(pFVar3,&local_30,pUVar1);
  ::FString::~FString(&local_30);
  if (bVar2) {
    pFVar3 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x198);
    ::FString::FString(local_20,
                       "Expecting the dynamic processor to be removed by GC after we unregister it")
    ;
    bVar2 = FAutomationTestBase::TestNull(pFVar3,local_20,pUVar4);
    ::FString::~FString(local_20);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return;
}

