// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// Execute @ 14711cdd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB::Execute
          (FTestQueryExecutor_BlockTagB *this,FMassExecutionContext *param_1)

{
  <lambda_1> local_18;
  <lambda_1> *local_10;
  
  local_10 = &local_18;
  local_18.__this = this;
  UE::Mass::FQueryExecutor::
  ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>,_FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB::Execute_::__l2::<lambda_1>_>
            ((FQueryExecutor *)this,param_1,&this->Accessors,local_10);
  return;
}

