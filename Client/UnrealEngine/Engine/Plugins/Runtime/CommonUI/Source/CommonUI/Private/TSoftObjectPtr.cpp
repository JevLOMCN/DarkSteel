// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// Get @ 14a7dff00

UCommonInputActionDomain * __thiscall
TSoftObjectPtr<UCommonInputActionDomain>::Get(TSoftObjectPtr<UCommonInputActionDomain> *this)

{
  int iVar1;
  UCommonInputActionDomain *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UCommonInputActionDomain *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UCommonInputActionDomain *)0x0) {
    pUVar3 = Z_Construct_UClass_UCommonInputActionDomain_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonInputActionDomain *)0x0;
}

