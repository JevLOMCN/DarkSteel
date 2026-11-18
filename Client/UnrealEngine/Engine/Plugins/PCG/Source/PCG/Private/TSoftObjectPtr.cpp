// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// Get @ 149754400

UPCGSettings * __thiscall
TSoftObjectPtr<UPCGSettings_const_>::Get(TSoftObjectPtr<UPCGSettings_const_> *this)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGSettings *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGSettings *)0x0;
}

// Get @ 149754450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall
TSoftObjectPtr<ALandscapeProxy>::Get(TSoftObjectPtr<ALandscapeProxy> *this)

{
  int iVar1;
  ALandscapeProxy *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (ALandscapeProxy *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pAVar2 != (ALandscapeProxy *)0x0) {
    pUVar3 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (ALandscapeProxy *)0x0;
}

// Get @ 1497544a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
TSoftObjectPtr<UActorComponent>::Get(TSoftObjectPtr<UActorComponent> *this)

{
  int iVar1;
  UActorComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UActorComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UActorComponent *)0x0;
}

// Get @ 14980f5d0

UPCGNode * __thiscall TSoftObjectPtr<UPCGNode_const_>::Get(TSoftObjectPtr<UPCGNode_const_> *this)

{
  int iVar1;
  UPCGNode *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGNode *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPCGNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGNode *)0x0;
}

// Get @ 14980f620

USkinnedAsset * __thiscall TSoftObjectPtr<USkinnedAsset>::Get(TSoftObjectPtr<USkinnedAsset> *this)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkinnedAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_USkinnedAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkinnedAsset *)0x0;
}

// Get @ 1499f2e70

UBoxComponent * __thiscall TSoftObjectPtr<UBoxComponent>::Get(TSoftObjectPtr<UBoxComponent> *this)

{
  int iVar1;
  UBoxComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UBoxComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UBoxComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UBoxComponent *)0x0;
}

// Get @ 1499f2ec0

UBrushComponent * __thiscall
TSoftObjectPtr<UBrushComponent>::Get(TSoftObjectPtr<UBrushComponent> *this)

{
  int iVar1;
  UBrushComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UBrushComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UBrushComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UBrushComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UBrushComponent *)0x0;
}

// Get @ 1499f2f10

UDataTable * __thiscall TSoftObjectPtr<UDataTable>::Get(TSoftObjectPtr<UDataTable> *this)

{
  int iVar1;
  UDataTable *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UDataTable *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UDataTable *)0x0) {
    pUVar3 = Z_Construct_UClass_UDataTable_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UDataTable *)0x0;
}

// Get @ 1499f2f60

USplineComponent * __thiscall
TSoftObjectPtr<USplineComponent>::Get(TSoftObjectPtr<USplineComponent> *this)

{
  int iVar1;
  USplineComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USplineComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (USplineComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USplineComponent *)0x0;
}

// LoadSynchronous @ 149a017c0

UPCGDataAsset * __thiscall
TSoftObjectPtr<UPCGDataAsset>::LoadSynchronous(TSoftObjectPtr<UPCGDataAsset> *this)

{
  int iVar1;
  UPCGDataAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGDataAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UPCGDataAsset *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UPCGDataAsset *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UPCGDataAsset *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UPCGDataAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGDataAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGDataAsset *)0x0;
}

// Get @ 149c22a10

UObject * __thiscall TSoftObjectPtr<UObject_const_>::Get(TSoftObjectPtr<UObject_const_> *this)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUVar4;
  UObject *pUStackX_8;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    return pUVar2;
  }
  if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
    return (UObject *)0x0;
  }
  pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  bVar1 = (*IsInAsyncLoadingThread)();
  if (((bVar1) && (pUVar2 != (UObject *)0x0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
     ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421790a9:
    bVar1 = true;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) goto LAB_1421790b9;
  }
  else {
    pUStackX_8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&pUStackX_8);
    if (pUVar2 != (UObject *)0x0) goto LAB_1421790a9;
  }
  bVar1 = false;
LAB_1421790b9:
  pUVar4 = (UObject *)0x0;
  if (bVar1) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

// Get @ 149c75f40

UPCGUserParametersData * __thiscall
TSoftObjectPtr<UPCGUserParametersData>::Get(TSoftObjectPtr<UPCGUserParametersData> *this)

{
  int iVar1;
  UPCGUserParametersData *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGUserParametersData *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPCGUserParametersData *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGUserParametersData *)0x0;
}

// Get @ 149c75f90

UTexture * __thiscall TSoftObjectPtr<UTexture>::Get(TSoftObjectPtr<UTexture> *this)

{
  int iVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTexture *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UTexture *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTexture *)0x0;
}

// Get @ 149cc5ce0

UPCGPin * __thiscall TSoftObjectPtr<UPCGPin_const_>::Get(TSoftObjectPtr<UPCGPin_const_> *this)

{
  int iVar1;
  UPCGPin *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGPin *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPCGPin *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGPin_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGPin *)0x0;
}

// Get @ 149cc5d30

UPCGComponent * __thiscall TSoftObjectPtr<UPCGComponent>::Get(TSoftObjectPtr<UPCGComponent> *this)

{
  int iVar1;
  UPCGComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UPCGComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGComponent *)0x0;
}

// Get @ 149f47020

URuntimeVirtualTexture * __thiscall
TSoftObjectPtr<URuntimeVirtualTexture>::Get(TSoftObjectPtr<URuntimeVirtualTexture> *this)

{
  int iVar1;
  URuntimeVirtualTexture *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (URuntimeVirtualTexture *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (URuntimeVirtualTexture *)0x0) {
    pUVar3 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (URuntimeVirtualTexture *)0x0;
}

