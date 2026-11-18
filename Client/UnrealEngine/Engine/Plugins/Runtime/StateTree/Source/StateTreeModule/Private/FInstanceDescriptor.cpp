// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FInstanceDescriptor @ 14d4b1510

FInstanceDescriptor * __thiscall
UE::StateTreeDebugger::FInstanceDescriptor::FInstanceDescriptor
          (FInstanceDescriptor *this,UStateTree *param_1,FStateTreeInstanceDebugId param_2,
          FString *param_3,TRange<double> *param_4)

{
  double dVar1;
  undefined7 uVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar2 = *(undefined7 *)&(param_4->LowerBound).field_0x1;
  dVar1 = (param_4->LowerBound).Value;
  (this->Lifetime).LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_4->LowerBound).Type.Value;
  *(undefined7 *)&(this->Lifetime).LowerBound.field_0x1 = uVar2;
  (this->Lifetime).LowerBound.Value = dVar1;
  uVar2 = *(undefined7 *)&(param_4->UpperBound).field_0x1;
  dVar1 = (param_4->UpperBound).Value;
  (this->Lifetime).UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_4->UpperBound).Type.Value;
  *(undefined7 *)&(this->Lifetime).UpperBound.field_0x1 = uVar2;
  (this->Lifetime).UpperBound.Value = dVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
  param_4 = (TRange<double> *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->StateTree).WeakPtr,(FObjectPtr)&param_4);
  ::FString::FString(&this->Name,param_3);
  this->Id = param_2;
  return this;
}

// IsValid @ 14d4c4190

bool __thiscall UE::StateTreeDebugger::FInstanceDescriptor::IsValid(FInstanceDescriptor *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->StateTree).WeakPtr);
  if (bVar2) {
    iVar1 = (this->Name).Data.ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    if (((iVar3 != 0) && ((this->Id).Id != 0xffffffff)) && ((this->Id).SerialNumber != 0xffffffff))
    {
      return true;
    }
  }
  return false;
}

