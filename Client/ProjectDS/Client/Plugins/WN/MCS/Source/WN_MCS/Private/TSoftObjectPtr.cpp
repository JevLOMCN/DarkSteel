// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_MCS
// Functions: 2

// Get @ 14accc680

UCustomizableObjectInstance * __thiscall
TSoftObjectPtr<UCustomizableObjectInstance>::Get(TSoftObjectPtr<UCustomizableObjectInstance> *this)

{
  int iVar1;
  UCustomizableObjectInstance *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UCustomizableObjectInstance *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UCustomizableObjectInstance *)0x0) {
    pUVar3 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UCustomizableObjectInstance *)0x0;
}

// LoadSynchronous @ 14accd5e0

UCustomizableObjectInstance * __thiscall
TSoftObjectPtr<UCustomizableObjectInstance>::LoadSynchronous
          (TSoftObjectPtr<UCustomizableObjectInstance> *this)

{
  int iVar1;
  UCustomizableObjectInstance *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UCustomizableObjectInstance *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UCustomizableObjectInstance *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UCustomizableObjectInstance *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UCustomizableObjectInstance *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UCustomizableObjectInstance *)0x0) {
    pUVar3 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UCustomizableObjectInstance *)0x0;
}

