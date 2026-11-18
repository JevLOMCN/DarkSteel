// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// Get @ 14e4f5550

/* WARNING: Removing unreachable block (ram,0x00014e4f55c0) */

UClass * __thiscall
TSoftClassPtr<UInterchangeTranslatorBase>::Get(TSoftClassPtr<UInterchangeTranslatorBase> *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) &&
       (pUVar3 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister(), pUVar3 != (UClass *)0x0
       )) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
      return (UClass *)0x0;
    }
  }
  return (UClass *)0x0;
}

// LoadSynchronous @ 14e4ff6c0

/* WARNING: Removing unreachable block (ram,0x00014e4ff761) */

UClass * __thiscall
TSoftClassPtr<UInterchangePythonPipelineBase>::LoadSynchronous
          (TSoftClassPtr<UInterchangePythonPipelineBase> *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UClass *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UClass *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UClass *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) &&
       (pUVar3 = UInterchangePythonPipelineBase::StaticClass(), pUVar3 != (UClass *)0x0)) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
      return (UClass *)0x0;
    }
  }
  return (UClass *)0x0;
}

