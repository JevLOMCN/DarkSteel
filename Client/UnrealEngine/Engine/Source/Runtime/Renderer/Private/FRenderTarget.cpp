// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// GetDisplayColorGamut @ 144f11f20

EDisplayColorGamut __thiscall FRenderTarget::GetDisplayColorGamut(FRenderTarget *this)

{
  return sRGB_D65;
}

// GetDisplayOutputFormat @ 144f11f40

EDisplayOutputFormat __thiscall FRenderTarget::GetDisplayOutputFormat(FRenderTarget *this)

{
  return SDR_sRGB;
}

// GetGPUMask @ 144f125f0

FRHIGPUMask __thiscall
FRenderTarget::GetGPUMask(FRenderTarget *this,FRHICommandListImmediate *param_1)

{
  *(undefined4 *)param_1 = 1;
  return (FRHIGPUMask)(uint)param_1;
}

// GetSceneHDREnabled @ 144f13570

bool __thiscall FRenderTarget::GetSceneHDREnabled(FRenderTarget *this)

{
  return false;
}

// HasToggleFreezeCommand @ 144f1a8e0

bool __thiscall FRenderTarget::HasToggleFreezeCommand(FRenderTarget *this)

{
  return false;
}

// ProcessToggleFreezeCommand @ 144f1ef70

void __thiscall FRenderTarget::ProcessToggleFreezeCommand(FRenderTarget *this)

{
  return;
}

