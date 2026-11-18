// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 1

// Get @ 14e2dc230

UVariant * __thiscall TSoftObjectPtr<UVariant>::Get(TSoftObjectPtr<UVariant> *this)

{
  int iVar1;
  UVariant *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UVariant *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UVariant *)0x0) {
    pUVar3 = UVariant::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UVariant *)0x0;
}

