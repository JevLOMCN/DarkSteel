// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// Get @ 14d9dc1c0

UPhysicsControlAsset * __thiscall
TSoftObjectPtr<UPhysicsControlAsset>::Get(TSoftObjectPtr<UPhysicsControlAsset> *this)

{
  int iVar1;
  UPhysicsControlAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPhysicsControlAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPhysicsControlAsset *)0x0) {
    pUVar3 = UPhysicsControlAsset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPhysicsControlAsset *)0x0;
}

