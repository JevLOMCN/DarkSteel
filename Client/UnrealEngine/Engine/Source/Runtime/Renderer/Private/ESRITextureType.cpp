// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// GetTextureType @ 145779880

Type __cdecl ESRITextureType::GetTextureType(EVRSImageType param_1)

{
  return param_1;
}

// IsInBounds @ 145780ab0

bool __cdecl ESRITextureType::IsInBounds(int param_1)

{
  return (uint)param_1 < 4;
}

// IsInBounds @ 145780ac0

bool __cdecl ESRITextureType::IsInBounds(Type param_1)

{
  return param_1 < Num;
}

// IsValidShadingRateTexture @ 145781020

bool __cdecl ESRITextureType::IsValidShadingRateTexture(int param_1)

{
  if ((((uint)param_1 < 4) && (param_1 != 0)) && (param_1 != 3)) {
    return true;
  }
  return false;
}

// IsValidShadingRateTexture @ 145781040

bool __cdecl ESRITextureType::IsValidShadingRateTexture(Type param_1)

{
  if (((param_1 < Num) && (param_1 != None)) && (param_1 != ConstructedSRI)) {
    return true;
  }
  return false;
}

