// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// operator= @ 14a0c4500

FPropertyBagPropertyDesc * __thiscall
FPropertyBagPropertyDesc::operator=
          (FPropertyBagPropertyDesc *this,FPropertyBagPropertyDesc *param_1)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ValueTypeObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ValueTypeObject).field0_0x0 = (param_1->ValueTypeObject).field0_0x0;
  uVar2 = (param_1->ID).B;
  uVar3 = (param_1->ID).C;
  uVar4 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar2;
  (this->ID).C = uVar3;
  (this->ID).D = uVar4;
  this->Name = param_1->Name;
  this->ValueType = param_1->ValueType;
  *(undefined2 *)(this->ContainerTypes).Types.Elements =
       *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
  (this->ContainerTypes).NumContainers = (param_1->ContainerTypes).NumContainers;
  this->PropertyFlags = param_1->PropertyFlags;
  this->CachedProperty = param_1->CachedProperty;
  this->CachedIndex = param_1->CachedIndex;
  return this;
}

