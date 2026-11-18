// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// IsChildOf<UObject> @ 1483dd980

bool __thiscall UStruct::IsChildOf<UObject>(UStruct *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)this->_padding_) &&
       ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_))
    {
      return true;
    }
  }
  return false;
}

