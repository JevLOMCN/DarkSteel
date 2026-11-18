// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Get @ 146688510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall TSoftObjectPtr<UWorld>::Get(TSoftObjectPtr<UWorld> *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UWorld *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  UWorld *local_res8;
  
  pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 != (UWorld *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_1466885d7;
  pUVar4 = (UWorld *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar4 != (UWorld *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1466885ba:
    if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_1466885c8;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pUVar4 != (UWorld *)0x0) goto LAB_1466885ba;
LAB_1466885c8:
    bVar2 = false;
  }
  pUVar3 = (UWorld *)0x0;
  if (bVar2) {
    pUVar3 = pUVar4;
  }
LAB_1466885d7:
  if (pUVar3 != (UWorld *)0x0) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar3;
    }
  }
  return (UWorld *)0x0;
}

// Get @ 146834250

UMaterialInterface * __thiscall
TSoftObjectPtr<UMaterialInterface>::Get(TSoftObjectPtr<UMaterialInterface> *this)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterialInterface *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterialInterface *)0x0;
}

