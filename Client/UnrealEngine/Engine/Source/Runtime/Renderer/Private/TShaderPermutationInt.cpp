// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// ToDimensionValueId @ 144937070

int __cdecl TShaderPermutationInt<int,3,0>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x6a,L"Unknown shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return param_1;
}

// ToDimensionValueId @ 144ceee40

int __cdecl TShaderPermutationInt<int,2,1>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = param_1 + -1;
  if ((1 < iVar3) || (iVar3 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x6a,L"Unknown shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// FromDimensionValueId @ 1452c3790

int __cdecl TShaderPermutationInt<int,3,0>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return param_1;
}

// ToDimensionValueId @ 145553630

int __cdecl TShaderPermutationInt<int,4,1>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = param_1 + -1;
  if ((3 < iVar3) || (iVar3 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x6a,L"Unknown shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// ToDimensionValueId @ 145553680

int __cdecl
TShaderPermutationInt<enum_`anonymous_namespace'::ESignalProcessing,8,0>::ToDimensionValueId
          (ESignalProcessing param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (IndirectProbeHierarchy < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x6a,L"Unknown shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return param_1;
}

