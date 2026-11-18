// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 1

// LoadSynchronous @ 14d377130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall TSoftObjectPtr<AActor>::LoadSynchronous(TSoftObjectPtr<AActor> *this)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (AActor *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pAVar2 == (AActor *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (AActor *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pAVar2 = (AActor *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (AActor *)0x0;
}

