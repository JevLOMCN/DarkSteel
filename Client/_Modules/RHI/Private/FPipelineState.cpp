// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FPipelineState @ 145c86610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPipelineState * __thiscall
FRHICommandListExecutor::FTranslateState::FPipelineState::FPipelineState(FPipelineState *this)

{
  (this->Range).First = (FRHIBreadcrumbNode *)0x0;
  (this->Range).Last = (FRHIBreadcrumbNode *)0x0;
  this->Context = (IRHIComputeContext *)0x0;
  this->FinalizedCmdList = (IRHIPlatformCommandList *)0x0;
  return this;
}

// ~FPipelineState @ 145c8a970

void __thiscall FPipelineState::~FPipelineState(FPipelineState *this)

{
  return;
}

