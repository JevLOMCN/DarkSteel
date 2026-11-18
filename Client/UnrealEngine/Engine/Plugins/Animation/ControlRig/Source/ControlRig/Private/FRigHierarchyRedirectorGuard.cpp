// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FRigHierarchyRedirectorGuard @ 14a2dc910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyRedirectorGuard * __thiscall
FRigHierarchyRedirectorGuard::FRigHierarchyRedirectorGuard
          (FRigHierarchyRedirectorGuard *this,UControlRig *param_1)

{
  FRigElementKeyRedirector *pFVar1;
  FRigElementKeyRedirector **ppFVar2;
  
  pFVar1 = (FRigElementKeyRedirector *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
  ppFVar2 = &((param_1->DynamicHierarchy).field0_0x0.DebugPtr)->ElementKeyRedirector;
  (this->Guard).RefValue = ppFVar2;
  (this->Guard).OriginalValue = *ppFVar2;
  *ppFVar2 = pFVar1;
  return this;
}

