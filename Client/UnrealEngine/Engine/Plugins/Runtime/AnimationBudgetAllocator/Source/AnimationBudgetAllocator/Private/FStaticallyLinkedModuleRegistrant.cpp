// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 1

// InitializeModule @ 14a696c60

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FAnimationBudgetAllocatorModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x78);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *(undefined8 *)&pIVar1[2].field_0x2 = 0;
    *(undefined8 *)&pIVar1[3].field_0x2 = 0;
    *(undefined8 *)&pIVar1[4].field_0x2 = 0;
    *(undefined8 *)&pIVar1[5].field_0x2 = 0;
    *(undefined8 *)&pIVar1[6].field_0x2 = 0;
    *(undefined8 *)&pIVar1[7].field_0x2 = 0;
    *(undefined8 *)&pIVar1[8].field_0x2 = 0;
    *(undefined8 *)&pIVar1[9].field_0x2 = 0;
    *(undefined8 *)&pIVar1[10].field_0x2 = 0;
    *(undefined8 *)&pIVar1[0xb].field_0x2 = 0;
    *(undefined8 *)&pIVar1[0xc].field_0x2 = 0;
    *(undefined8 *)&pIVar1[0xd].field_0x2 = 0;
    *(undefined4 *)&pIVar1[0xe].field_0x2 = 0;
    *(undefined2 *)&pIVar1[0xe].field_0x6 = 0;
    *pIVar1 = (IModuleInterface)&___7IAnimationBudgetAllocatorModule__6B_;
    pIVar1[1] = (IModuleInterface)&___7FGCObject__6B_;
    *(undefined2 *)(pIVar1 + 2) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(pIVar1 + 1));
    *pIVar1 = (IModuleInterface)
              &FAnimationBudgetAllocatorModule::_vftable__for__IAnimationBudgetAllocatorModule__;
    pIVar1[1] = (IModuleInterface)&FAnimationBudgetAllocatorModule::_vftable__for__FGCObject__;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 10) = 0;
    *(undefined4 *)&pIVar1[10].field_0x4 = 0x80;
    *(undefined4 *)&pIVar1[0xb].field_0x4 = 0;
    *(undefined4 *)(pIVar1 + 0xb) = 0xffffffff;
    pIVar1[0xd] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0xe) = 0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

