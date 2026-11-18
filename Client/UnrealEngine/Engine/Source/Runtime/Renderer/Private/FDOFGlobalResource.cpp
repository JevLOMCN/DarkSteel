// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 145119ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
_anon_85C081EE::FDOFGlobalResource::InitRHI(FDOFGlobalResource *this,FRHICommandListBase *param_1)

{
  if (!GRHIGlobals.SupportsRectTopology) {
                    /* WARNING: Could not recover jumptable at 0x000145119cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->ScatterIndexBuffer + 8))(&this->ScatterIndexBuffer);
    return;
  }
  return;
}

// ReleaseRHI @ 145119cc0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall _anon_85C081EE::FDOFGlobalResource::ReleaseRHI(FDOFGlobalResource *this)

{
  if (!GRHIGlobals.SupportsRectTopology) {
                    /* WARNING: Could not recover jumptable at 0x000145119cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->ScatterIndexBuffer + 0x10))(&this->ScatterIndexBuffer);
    return;
  }
  return;
}

