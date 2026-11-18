// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FromDimensionValueId @ 144919610

bool __cdecl FShaderPermutationBool::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0 || PermutationId == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x4c,L"Invalid shader permutation dimension id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return param_1 == 1;
}

