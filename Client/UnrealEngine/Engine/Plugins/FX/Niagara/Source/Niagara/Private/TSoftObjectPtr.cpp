// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Get @ 1491022f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSystem * __thiscall
TSoftObjectPtr<UNiagaraSystem>::Get(TSoftObjectPtr<UNiagaraSystem> *this)

{
  int iVar1;
  UNiagaraSystem *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UNiagaraSystem *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UNiagaraSystem *)0x0;
}

