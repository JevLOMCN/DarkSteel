// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FRand @ 142fc3990

float __cdecl FGenericPlatformMath::FRand(void)

{
  uint uVar1;
  
  uVar1 = rand();
  return (float)(uVar1 & 0x7fff) * __real_38000100;
}

