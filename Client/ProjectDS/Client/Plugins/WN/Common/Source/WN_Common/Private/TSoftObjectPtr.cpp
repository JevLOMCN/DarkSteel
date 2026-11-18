// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// Get @ 14949fea0

UMaterial * __thiscall TSoftObjectPtr<UMaterial>::Get(TSoftObjectPtr<UMaterial> *this)

{
  int iVar1;
  UMaterial *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterial *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMaterial *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterial *)0x0;
}

// LoadSynchronous @ 1494a5fe0

UMaterial * __thiscall TSoftObjectPtr<UMaterial>::LoadSynchronous(TSoftObjectPtr<UMaterial> *this)

{
  int iVar1;
  UMaterial *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterial *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UMaterial *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UMaterial *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UMaterial *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UMaterial *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterial *)0x0;
}

