// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CalculateNearFarDepthExcludingSky @ 145421640

FDepthBoundsValues __cdecl FDepthBounds::CalculateNearFarDepthExcludingSky(void)

{
  FDepthBoundsValues FVar1;
  FDepthBoundsValues FVar2;
  
  if (ZPULL(GPixelFormats[0xb],1,1) != '\0') {
    FVar1.MaxDepth = __real_3f800000;
    FVar1.MinDepth = __real_33800001;
    return FVar1;
  }
  FVar2.MaxDepth = __real_3f800000;
  FVar2.MinDepth = __real_00800000;
  return FVar2;
}

