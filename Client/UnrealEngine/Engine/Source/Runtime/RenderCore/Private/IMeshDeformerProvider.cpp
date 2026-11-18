// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Get @ 145d2abf0

IMeshDeformerProvider * __cdecl IMeshDeformerProvider::Get(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  IMeshDeformerProvider *pIVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ModularFeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ModularFeatureName,0);
    pIVar4 = (IMeshDeformerProvider *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar4 = (IMeshDeformerProvider *)0x0;
    }
    return pIVar4;
  }
  return (IMeshDeformerProvider *)0x0;
}

// IsAvailable @ 145d44030

bool __cdecl IMeshDeformerProvider::IsAvailable(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ModularFeatureName);
  return 0 < iVar1;
}

