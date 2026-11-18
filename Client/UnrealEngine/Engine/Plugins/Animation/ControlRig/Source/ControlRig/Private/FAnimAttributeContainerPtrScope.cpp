// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FAnimAttributeContainerPtrScope @ 14a21d760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FAnimAttributeContainerPtrScope * __thiscall
UControlRig::FAnimAttributeContainerPtrScope::FAnimAttributeContainerPtrScope
          (FAnimAttributeContainerPtrScope *this,UControlRig *param_1,
          FMeshAttributeContainer *param_2)

{
  this->ControlRig = param_1;
  param_1->ExternalAnimAttributeContainer = param_2;
  return this;
}

// ~FAnimAttributeContainerPtrScope @ 14a225300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::FAnimAttributeContainerPtrScope::~FAnimAttributeContainerPtrScope
          (FAnimAttributeContainerPtrScope *this)

{
  this->ControlRig->ExternalAnimAttributeContainer = (FMeshAttributeContainer *)0x0;
  return;
}

