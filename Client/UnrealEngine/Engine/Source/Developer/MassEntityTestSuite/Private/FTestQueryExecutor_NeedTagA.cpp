// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// Execute @ 14711ce30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA::Execute
          (FTestQueryExecutor_NeedTagA *this,FMassExecutionContext *param_1)

{
  <lambda_1> local_18;
  <lambda_1> *local_10;
  
  local_10 = &local_18;
  local_18.__this = this;
  UE::Mass::FQueryExecutor::
  ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>,_FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA::Execute_::__l2::<lambda_1>_>
            ((FQueryExecutor *)this,param_1,&this->Accessors,local_10);
  return;
}

