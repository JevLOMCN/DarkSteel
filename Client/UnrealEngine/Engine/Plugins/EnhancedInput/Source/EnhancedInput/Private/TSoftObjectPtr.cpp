// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// Get @ 14a6de0b0

UInputAction * __thiscall
TSoftObjectPtr<UInputAction_const_>::Get(TSoftObjectPtr<UInputAction_const_> *this)

{
  int iVar1;
  UInputAction *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UInputAction *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UInputAction *)0x0) {
    pUVar3 = UInputAction::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UInputAction *)0x0;
}

