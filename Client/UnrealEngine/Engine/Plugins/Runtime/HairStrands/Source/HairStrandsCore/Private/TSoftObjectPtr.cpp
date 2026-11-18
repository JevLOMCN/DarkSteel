// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Get @ 14e012dc0

UMeshComponent * __thiscall
TSoftObjectPtr<UMeshComponent>::Get(TSoftObjectPtr<UMeshComponent> *this)

{
  int iVar1;
  UMeshComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMeshComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMeshComponent *)0x0;
}

