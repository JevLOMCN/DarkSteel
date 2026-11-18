// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// FromDimensionValueId @ 1449dcc80

int __cdecl TShaderPermutationSparseInt<1,2,4,8>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 2) {
    return 2;
  }
  if (param_1 == 1) {
    return 4;
  }
  if (param_1 == 0) {
    return 8;
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

// FromDimensionValueId @ 1449dcd00

int __cdecl TShaderPermutationSparseInt<0,8,16,32>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 3) {
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
  }
  return 0;
}

// ToDimensionValueId @ 144a079f0

int __cdecl TShaderPermutationSparseInt<1,2,4,8>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 1) {
    return 3;
  }
  if (param_1 == 2) {
    return 2;
  }
  if (param_1 == 4) {
    return 1;
  }
  if (param_1 != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x90,L"Unknown shader permutation dimension value %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// ToDimensionValueId @ 144a07a60

int __cdecl TShaderPermutationSparseInt<32,64>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 0x20) {
    return 1;
  }
  if (param_1 != 0x40) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x90,L"Unknown shader permutation dimension value %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// FromDimensionValueId @ 144cc9f50

int __cdecl TShaderPermutationSparseInt<64,128,256,512,1024>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 4) {
    return 0x40;
  }
  if (param_1 == 3) {
    return 0x80;
  }
  if (param_1 == 2) {
    return 0x100;
  }
  if (param_1 == 1) {
    return 0x200;
  }
  if (param_1 == 0) {
    return 0x400;
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

// FromDimensionValueId @ 144d7b500

int __cdecl TShaderPermutationSparseInt<1,2,4>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 2) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 0) {
    return 4;
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

// FromDimensionValueId @ 144e188d0

int __cdecl TShaderPermutationSparseInt<4,8,16>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 2) {
    return 4;
  }
  if (param_1 == 1) {
    return 8;
  }
  if (param_1 == 0) {
    return 0x10;
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

// ToDimensionValueId @ 144e35e80

int __cdecl TShaderPermutationSparseInt<4,8,16>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 4) {
    return 2;
  }
  if (param_1 == 8) {
    return 1;
  }
  if (param_1 != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x90,L"Unknown shader permutation dimension value %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// ToDimensionValueId @ 144e35ee0

int __cdecl TShaderPermutationSparseInt<>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                     ,0x90,L"Unknown shader permutation dimension value %i.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// ToDimensionValueId @ 144f303c0

int __cdecl TShaderPermutationSparseInt<2,4,16>::ToDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 2) {
    return 2;
  }
  if (param_1 == 4) {
    return 1;
  }
  if (param_1 != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x90,L"Unknown shader permutation dimension value %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 0;
}

// FromDimensionValueId @ 144facaf0

int __cdecl TShaderPermutationSparseInt<0,1,2,3>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 3) {
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 1) {
      return 2;
    }
    if (param_1 == 0) {
      return 3;
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
  }
  return 0;
}

// FromDimensionValueId @ 1452c37e0

int __cdecl TShaderPermutationSparseInt<0,16,32,64>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != 3) {
    if (param_1 == 2) {
      return 0x10;
    }
    if (param_1 == 1) {
      return 0x20;
    }
    if (param_1 == 0) {
      return 0x40;
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
  }
  return 0;
}

// FromDimensionValueId @ 1457f1e60

int __cdecl TShaderPermutationSparseInt<-1,2,4>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 2) {
    return -1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 0) {
    return 4;
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

// FromDimensionValueId @ 145870190

int __cdecl TShaderPermutationSparseInt<1,4,8,16>::FromDimensionValueId(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 2) {
    return 4;
  }
  if (param_1 == 1) {
    return 8;
  }
  if (param_1 == 0) {
    return 0x10;
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

