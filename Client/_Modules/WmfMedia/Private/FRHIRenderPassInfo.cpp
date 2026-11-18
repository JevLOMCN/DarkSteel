// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FRHIRenderPassInfo @ 14ea97450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FRHIRenderPassInfo::~FRHIRenderPassInfo(FRHIRenderPassInfo *this)

{
  FRHITexture *this_00;
  
  this_00 = (this->ShadingRateTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

