// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// Get @ 1469ccb70

UTexture2D * __thiscall TSoftObjectPtr<UTexture2D>::Get(TSoftObjectPtr<UTexture2D> *this)

{
  int iVar1;
  UTexture2D *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTexture2D *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UTexture2D *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTexture2D *)0x0;
}

