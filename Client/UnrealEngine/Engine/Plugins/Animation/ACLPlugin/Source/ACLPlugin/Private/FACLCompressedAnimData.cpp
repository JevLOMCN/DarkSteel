// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 3

// Bind @ 14deb2df0

void __thiscall
FACLCompressedAnimData::Bind(FACLCompressedAnimData *this,TArrayView<unsigned_char,int> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1->ArrayNum;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  (this->CompressedByteStream).DataPtr = param_1->DataPtr;
  (this->CompressedByteStream).ArrayNum = iVar1;
  *(undefined4 *)&(this->CompressedByteStream).field_0xc = uVar2;
  return;
}

// GetApproxCompressedSize @ 14deb5830

long64 __thiscall FACLCompressedAnimData::GetApproxCompressedSize(FACLCompressedAnimData *this)

{
  return (longlong)(this->CompressedByteStream).ArrayNum;
}

// IsValid @ 14deb5e60

bool __thiscall FACLCompressedAnimData::IsValid(FACLCompressedAnimData *this)

{
  uchar *puVar1;
  
  if (((((this->CompressedByteStream).ArrayNum != 0) &&
       (puVar1 = (this->CompressedByteStream).DataPtr, puVar1 != (uchar *)0x0)) &&
      (((ulonglong)puVar1 & 0xf) == 0)) &&
     (((*(int *)(puVar1 + 8) == -0x53ee53ef && (puVar1[0xe] == '\0')) &&
      ((ushort)(*(short *)(puVar1 + 0xc) - 7U) < 4)))) {
    return true;
  }
  return false;
}

