// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 4

// GetHeight @ 146c84480

uint __thiscall FSlateRenderTargetRHI::GetHeight(FSlateRenderTargetRHI *this)

{
  return this->Height;
}

// GetWidth @ 146c84500

uint __thiscall FSlateRenderTargetRHI::GetWidth(FSlateRenderTargetRHI *this)

{
  return this->Width;
}

// InitRHI @ 146c84530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateRenderTargetRHI::InitRHI(FSlateRenderTargetRHI *this,FRHICommandListBase *param_1)

{
  return;
}

// ReleaseRHI @ 146c845d0

void __thiscall FSlateRenderTargetRHI::ReleaseRHI(FSlateRenderTargetRHI *this)

{
  FRHIResource *this_00;
  
  this_00 = *(FRHIResource **)&this[-1].Width;
  if (this_00 != (FRHIResource *)0x0) {
    this[-1].Width = 0;
    this[-1].Height = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

