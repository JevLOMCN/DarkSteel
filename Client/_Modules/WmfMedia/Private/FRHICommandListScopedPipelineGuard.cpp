// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FRHICommandListScopedPipelineGuard @ 14ea97430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListScopedPipelineGuard::~FRHICommandListScopedPipelineGuard
          (FRHICommandListScopedPipelineGuard *this)

{
  if (this->bPipelineSet != false) {
    FRHICommandListBase::SwitchPipeline(this->RHICmdList,None);
  }
  return;
}

