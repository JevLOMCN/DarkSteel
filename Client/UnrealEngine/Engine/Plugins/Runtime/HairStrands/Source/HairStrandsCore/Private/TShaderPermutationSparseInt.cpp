// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FromDimensionValueId @ 14e098f80

int __cdecl TShaderPermutationSparseInt<4,8,16,32>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 3) {
    return 4;
  }
  if (param_1 == 2) {
    return 8;
  }
  if (param_1 == 1) {
    return 0x10;
  }
  if (param_1 == 0) {
    return 0x20;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                     ,0x97,L"Invalid shader permutation dimension id %i.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

