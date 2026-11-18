// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FPropertyBagArrayRef @ 14dd09e80

FPropertyBagArrayRef * __thiscall
FPropertyBagArrayRef::FPropertyBagArrayRef(FPropertyBagArrayRef *this,FPropertyBagArrayRef *param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  pUVar1 = (param_1->ValueDesc).ValueTypeObject.field0_0x0.DebugPtr;
  (this->ValueDesc).ValueTypeObject.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = (param_1->ValueDesc).ID.B;
  uVar4 = (param_1->ValueDesc).ID.C;
  uVar5 = (param_1->ValueDesc).ID.D;
  (this->ValueDesc).ID.A = (param_1->ValueDesc).ID.A;
  (this->ValueDesc).ID.B = uVar3;
  (this->ValueDesc).ID.C = uVar4;
  (this->ValueDesc).ID.D = uVar5;
  (this->ValueDesc).Name = (param_1->ValueDesc).Name;
  (this->ValueDesc).ValueType = (param_1->ValueDesc).ValueType;
  *(undefined2 *)(this->ValueDesc).ContainerTypes.Types.Elements =
       *(undefined2 *)(param_1->ValueDesc).ContainerTypes.Types.Elements;
  (this->ValueDesc).ContainerTypes.NumContainers = (param_1->ValueDesc).ContainerTypes.NumContainers
  ;
  (this->ValueDesc).PropertyFlags = (param_1->ValueDesc).PropertyFlags;
  (this->ValueDesc).CachedProperty = (param_1->ValueDesc).CachedProperty;
  (this->ValueDesc).CachedIndex = (param_1->ValueDesc).CachedIndex;
  return this;
}

