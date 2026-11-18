// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FExecution_EmptyPipeline @ 1470f4090

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FExecution_EmptyPipeline * __thiscall
FMassExecutionTest::FExecution_EmptyPipeline::FExecution_EmptyPipeline
          (FExecution_EmptyPipeline *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FExecution_EmptyPipeline_FMassExecutionTest__6B_;
  return this;
}

// InstantTest @ 147163b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassExecutionTest::FExecution_EmptyPipeline::InstantTest(FExecution_EmptyPipeline *this)

{
  FMassEntityManager *pFVar1;
  undefined1 auStack_638 [32];
  undefined1 local_618;
  undefined4 local_614;
  FMassRuntimePipeline local_610;
  FProcessingContext local_5f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_638;
  local_614 = 0;
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  UE::Mass::FProcessingContext::FProcessingContext(&local_5f8,pFVar1,0.0,true);
  FMassRuntimePipeline::FMassRuntimePipeline(&local_610,None);
  UE::Mass::Executor::Run(&local_610,&local_5f8);
  local_618 = 1;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_610.Processors);
  UE::Mass::FProcessingContext::~FProcessingContext(&local_5f8);
  return (bool)local_618;
}

