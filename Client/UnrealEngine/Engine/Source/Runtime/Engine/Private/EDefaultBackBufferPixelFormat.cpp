// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Convert2PixelFormat @ 1483f8a40

EPixelFormat __cdecl EDefaultBackBufferPixelFormat::Convert2PixelFormat(Type param_1)

{
  Type TVar1;
  Type TVar2;
  
  TVar2 = DBBPF_A2B10G10R10;
  if ((int)param_1 < 4) {
    TVar2 = param_1;
  }
  TVar1 = DBBPF_B8G8R8A8;
  if (0 < (int)TVar2) {
    TVar1 = TVar2;
  }
  return SPixelFormat[(int)TVar1];
}

// FromInt @ 148402250

Type __cdecl EDefaultBackBufferPixelFormat::FromInt(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  if (param_1 < 4) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return SPixelFormat[iVar1];
}

// NumberOfBitForAlpha @ 1484130c0

int __cdecl EDefaultBackBufferPixelFormat::NumberOfBitForAlpha(Type param_1)

{
  if ((((param_1 != DBBPF_B8G8R8A8) && (param_1 != DBBPF_A16B16G16R16_DEPRECATED)) &&
      (param_1 != DBBPF_FloatRGB_DEPRECATED)) && (param_1 != DBBPF_FloatRGBA)) {
    if (param_1 != DBBPF_A2B10G10R10) {
      return 0;
    }
    return 2;
  }
  return 8;
}

