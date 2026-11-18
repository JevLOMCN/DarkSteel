// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetHash @ 147402000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FAnimBankDesc::GetHash(FAnimBankDesc *this)

{
  uint uVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  byte local_14;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_13 = 0;
  local_11 = 0;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  pUVar3 = FWeakObjectPtr::Get(&(this->Asset).WeakPtr);
  local_24 = this->SequenceIndex;
  local_1c = this->Position;
  local_18 = this->PlayRate;
  local_20 = (undefined4)((ulonglong)pUVar3 >> 4);
  local_14 = this->field_0x1c & 3;
  local_28 = (undefined4)((ulonglong)pUVar2 >> 4);
  uVar4 = CityHash64((char *)&local_28,0x18);
  uVar1 = (uint)uVar4;
  return (uVar1 >> 2) + 0x9e3779b9 + (int)(uVar4 >> 0x20) + uVar1 * 0x40 ^ uVar1;
}

