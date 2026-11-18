// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// FMassRuntimePipeline @ 1470f4ce0

FMassRuntimePipeline * __thiscall
FMassRuntimePipeline::FMassRuntimePipeline
          (FMassRuntimePipeline *this,EProcessorExecutionFlags param_1)

{
  this->ExecutionFlags = param_1;
  (this->Processors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Processors).ArrayNum = 0;
  (this->Processors).ArrayMax = 0;
  return this;
}

