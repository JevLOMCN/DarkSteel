// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// operator== @ 146b45630

bool __thiscall
FPortableObjectEntryKey::operator==(FPortableObjectEntryKey *this,FPortableObjectEntryKey *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->MsgId).Data.ArrayNum;
  iVar1 = (param_1->MsgId).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(this->MsgId).Data.AllocatorInstance.Data,
                     (wchar_t *)(param_1->MsgId).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_146b45663;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_146b45663:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->MsgIdPlural).Data.ArrayNum;
  iVar1 = (param_1->MsgIdPlural).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_146b45696;
    iVar2 = wcscmp((wchar_t *)(this->MsgIdPlural).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->MsgIdPlural).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_146b45696:
  iVar2 = (this->MsgCtxt).Data.ArrayNum;
  iVar1 = (param_1->MsgCtxt).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = wcscmp((wchar_t *)(this->MsgCtxt).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->MsgCtxt).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

