// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 1

// operator== @ 14e48bc50

bool __thiscall
UE::Interchange::FAttributeKey::operator==(FAttributeKey *this,FAttributeKey *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->Key).Data.ArrayNum;
  iVar1 = (param_1->Key).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = wcscmp((wchar_t *)(this->Key).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

