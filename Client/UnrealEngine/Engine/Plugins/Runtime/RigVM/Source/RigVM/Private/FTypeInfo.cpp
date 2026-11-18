// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// IsUnknownType @ 14a0f9ea0

bool __thiscall FRigVMRegistry_NoLock::FTypeInfo::IsUnknownType(FTypeInfo *this)

{
  UScriptStruct *pUVar1;
  UScriptStruct *pUVar2;
  
  if ((this->Type).CPPTypeObject.field0_0x0.DebugPtr == (UObject *)0x0) {
    return false;
  }
  pUVar2 = RigVMTypeUtils::GetWildCardCPPTypeObject();
  pUVar1 = (UScriptStruct *)(this->Type).CPPTypeObject.field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return pUVar2 == (UScriptStruct *)0x0;
  }
  return pUVar1 == pUVar2;
}

// Serialize_NoLock @ 14a110bf0

void __thiscall
FRigVMRegistry_NoLock::FTypeInfo::Serialize_NoLock(FTypeInfo *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&(this->Type).CPPTypeObject);
  if ((param_1->field_0x28 & 1) != 0) {
    (this->BaseTypeIndex).Name.ComparisonIndex = 0;
    (this->BaseTypeIndex).Name.Number = 0;
    (this->BaseTypeIndex).Index = -1;
    (this->ArrayTypeIndex).Name.ComparisonIndex = 0;
    (this->ArrayTypeIndex).Name.Number = 0;
    (this->ArrayTypeIndex).Index = -1;
    this->bIsArray = false;
    this->bIsExecute = false;
    this->Hash = 0xffffffff;
  }
  return;
}

