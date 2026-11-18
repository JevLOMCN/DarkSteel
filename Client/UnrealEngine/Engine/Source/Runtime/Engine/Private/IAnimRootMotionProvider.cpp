// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Get @ 1474d5b70

IAnimRootMotionProvider * __cdecl UE::Anim::IAnimRootMotionProvider::Get(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  IAnimRootMotionProvider *pIVar4;
  
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ModularFeatureName);
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ModularFeatureName,0);
    pIVar4 = (IAnimRootMotionProvider *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar4 = (IAnimRootMotionProvider *)0x0;
    }
    pIVar2 = IModularFeatures::Get();
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    return pIVar4;
  }
  return (IAnimRootMotionProvider *)0x0;
}

// IsAvailable @ 1474e9bb0

bool __cdecl UE::Anim::IAnimRootMotionProvider::IsAvailable(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ModularFeatureName);
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  return 0 < iVar1;
}

