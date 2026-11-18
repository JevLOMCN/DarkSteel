// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// ReleaseRHI @ 146021b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateViewportInfo::ReleaseRHI(FSlateViewportInfo *this)

{
  FRHIResource *this_00;
  
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
  this_00 = (FRHIResource *)(this->ViewportRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->ViewportRHI).Reference = (FRHIViewport *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

