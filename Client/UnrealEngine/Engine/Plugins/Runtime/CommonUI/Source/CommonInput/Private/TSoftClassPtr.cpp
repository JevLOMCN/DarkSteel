// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 1

// LoadSynchronous @ 14a777840

/* WARNING: Removing unreachable block (ram,0x00014a7778e1) */

UClass * __thiscall
TSoftClassPtr<UCommonInputBaseControllerData>::LoadSynchronous
          (TSoftClassPtr<UCommonInputBaseControllerData> *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UClass *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UClass *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UClass *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) &&
       (pUVar3 = UCommonInputBaseControllerData::StaticClass(), pUVar3 != (UClass *)0x0)) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
      return (UClass *)0x0;
    }
  }
  return (UClass *)0x0;
}

