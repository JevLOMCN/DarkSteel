// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetTextureParameter @ 14481b4b0

FMaterialTextureParameterInfo * __thiscall
FUniformExpressionSet::GetTextureParameter
          (FUniformExpressionSet *this,EMaterialTextureParameterType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMaterialTextureParameterInfo *pFVar4;
  ForAnyElementType FVar5;
  TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *pTVar6;
  
  pTVar6 = this->UniformTextureParameters + param_1;
  uVar3 = 0;
  if (param_2 < pTVar6->ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMaterialTextureParameterInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = pTVar6->AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(pTVar6->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  return (FMaterialTextureParameterInfo *)((longlong)param_2 * 0x1c + (longlong)FVar5);
}

