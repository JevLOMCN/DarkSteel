// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FExecution_SingleValidProcessor @ 1470f4250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FExecution_SingleValidProcessor * __thiscall
FMassExecutionTest::FExecution_SingleValidProcessor::FExecution_SingleValidProcessor
          (FExecution_SingleValidProcessor *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FExecution_SingleValidProcessor_FMassExecutionTest__6B_;
  return this;
}

// InstantTest @ 147164920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassExecutionTest::FExecution_SingleValidProcessor::InstantTest
          (FExecution_SingleValidProcessor *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FMassEntityManager,1> *pTVar4;
  undefined1 auStack_658 [32];
  undefined1 local_638;
  UMassTestProcessorBase *local_630;
  undefined4 local_628;
  TSharedPtr<FMassEntityManager,1> *local_620;
  FMassEntityQuery *local_618;
  TSharedPtr<FMassEntityManager,1> local_610;
  FProcessingContext local_5f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_658;
  local_628 = 0;
  UE::Mass::FProcessingContext::FProcessingContext
            (&local_5f8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
  local_620 = &local_610;
  pTVar4 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_620,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_630 = NewTestProcessor<UMassTestProcessorBase>(pTVar4);
  if (local_630 == (UMassTestProcessorBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Processor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassExecutionTest.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_618 = &local_630->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)local_618,ReadOnly,All);
  UE::Mass::Executor::Run((UMassProcessor *)local_630,&local_5f8);
  local_638 = 1;
  UE::Mass::FProcessingContext::~FProcessingContext(&local_5f8);
  return (bool)local_638;
}

