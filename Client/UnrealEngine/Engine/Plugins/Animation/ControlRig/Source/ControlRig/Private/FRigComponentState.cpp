// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// operator== @ 14a2e1a00

bool __thiscall FRigComponentState::operator==(FRigComponentState *this,FRigComponentState *param_1)

{
  UScriptStruct *pUVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  
  pUVar1 = this->ComponentStruct;
  if ((pUVar1 == (UScriptStruct *)0x0) || ((this->Data).ArrayNum == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if ((param_1->ComponentStruct == (UScriptStruct *)0x0) || ((param_1->Data).ArrayNum == 0)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  if (cVar2 != cVar4) {
    return false;
  }
  if (pUVar1 != (UScriptStruct *)0x0) {
    iVar3 = (this->Data).ArrayNum;
    if (iVar3 != 0) {
      if (pUVar1 != param_1->ComponentStruct) {
        return false;
      }
      if (iVar3 != (param_1->Data).ArrayNum) {
        return false;
      }
      iVar3 = memcmp((this->Data).AllocatorInstance.Data,(param_1->Data).AllocatorInstance.Data,
                     (longlong)iVar3);
      return iVar3 == 0;
    }
  }
  return true;
}

// GetComponentStruct @ 14a30b060

UScriptStruct * __thiscall FRigComponentState::GetComponentStruct(FRigComponentState *this)

{
  return this->ComponentStruct;
}

// IsValid @ 14a328e90

bool __thiscall FRigComponentState::IsValid(FRigComponentState *this)

{
  if ((this->ComponentStruct != (UScriptStruct *)0x0) && ((this->Data).ArrayNum != 0)) {
    return true;
  }
  return false;
}

