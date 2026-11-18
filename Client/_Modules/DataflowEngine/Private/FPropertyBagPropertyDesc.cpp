// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// FPropertyBagPropertyDesc @ 1462cec60

FPropertyBagPropertyDesc * __thiscall
FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
          (FPropertyBagPropertyDesc *this,FName param_1,EPropertyBagPropertyType param_2,
          UObject *param_3)

{
  (this->ValueTypeObject).field0_0x0.DebugPtr = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  (this->ID).A = 0;
  (this->ID).B = 0;
  (this->ID).C = 0;
  (this->ID).D = 0;
  this->Name = param_1;
  this->ValueType = param_2;
  *(undefined2 *)(this->ContainerTypes).Types.Elements = 0;
  (this->ContainerTypes).NumContainers = '\0';
  this->CachedProperty = (FProperty *)0x0;
  this->PropertyFlags = 1;
  this->CachedIndex = -1;
  return this;
}

