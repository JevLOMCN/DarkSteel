// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// InitializeModule @ 14a72c780

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<UE::AnimationWarping::FModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x28);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&UE::AnimationWarping::FModule::_vftable__for__IModuleInterface__;
    pIVar1[1] = (IModuleInterface)
                &UE::AnimationWarping::FModule::_vftable__for__UE__Anim__IAnimRootMotionProvider__;
    *(FName *)(pIVar1 + 2) = UE::Anim::BoneAttributeNamespace;
    *(FName *)(pIVar1 + 3) = UE::Anim::IAnimRootMotionProvider::AttributeName;
    *(undefined4 *)(pIVar1 + 4) = 0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

