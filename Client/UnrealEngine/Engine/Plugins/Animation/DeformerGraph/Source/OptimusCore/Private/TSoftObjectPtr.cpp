// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// Get @ 14e1b75c0

UOptimusDeformer * __thiscall
TSoftObjectPtr<UOptimusDeformer>::Get(TSoftObjectPtr<UOptimusDeformer> *this)

{
  int iVar1;
  UOptimusDeformer *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UOptimusDeformer *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UOptimusDeformer *)0x0) {
    pUVar3 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusDeformer *)0x0;
}

