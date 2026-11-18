// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// Get @ 1473feaa0

UAnimBank * __thiscall TSoftObjectPtr<UAnimBank>::Get(TSoftObjectPtr<UAnimBank> *this)

{
  int iVar1;
  UAnimBank *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UAnimBank *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UAnimBank *)0x0) {
    pUVar3 = UAnimBank::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UAnimBank *)0x0;
}

// LoadSynchronous @ 14740a6d0

USkinnedAsset * __thiscall
TSoftObjectPtr<USkinnedAsset>::LoadSynchronous(TSoftObjectPtr<USkinnedAsset> *this)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkinnedAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (USkinnedAsset *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (USkinnedAsset *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (USkinnedAsset *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
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

// LoadSynchronous @ 14740a750

UTransformProviderData * __thiscall
TSoftObjectPtr<UTransformProviderData>::LoadSynchronous
          (TSoftObjectPtr<UTransformProviderData> *this)

{
  int iVar1;
  UTransformProviderData *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTransformProviderData *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UTransformProviderData *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UTransformProviderData *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UTransformProviderData *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UTransformProviderData *)0x0) {
    pUVar3 = Z_Construct_UClass_UTransformProviderData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTransformProviderData *)0x0;
}

// Get @ 1475cd440

UAnimBlueprint * __thiscall
TSoftObjectPtr<UAnimBlueprint>::Get(TSoftObjectPtr<UAnimBlueprint> *this)

{
  int iVar1;
  UAnimBlueprint *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UAnimBlueprint *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UAnimBlueprint *)0x0) {
    pUVar3 = UAnimBlueprint::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UAnimBlueprint *)0x0;
}

// Get @ 1475cd490

USkeletalMesh * __thiscall TSoftObjectPtr<USkeletalMesh>::Get(TSoftObjectPtr<USkeletalMesh> *this)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkeletalMesh *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (USkeletalMesh *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkeletalMesh *)0x0;
}

// LoadAsync @ 1479db060

int __thiscall
TSoftObjectPtr<UMaterialInterface>::LoadAsync
          (TSoftObjectPtr<UMaterialInterface> *this,
          TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
          *param_1,FLoadAssetAsyncOptionalParams *param_2)

{
  int iVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> local_48;
  FLoadAssetAsyncOptionalParams local_30;
  
  local_30.ProgressDelegate.Object = (param_2->ProgressDelegate).Object;
  local_30.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController;
  (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->ProgressDelegate).Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_30.PackagePriority = param_2->PackagePriority;
  local_30.InstancingContext = param_2->InstancingContext;
  local_30.LoadFlags = param_2->LoadFlags;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_48,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  iVar1 = FSoftObjectPath::LoadAsync
                    ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,
                     (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                      *)&local_48,&local_30);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  return iVar1;
}

// LoadSynchronous @ 1479db100

UMaterialInterface * __thiscall
TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(TSoftObjectPtr<UMaterialInterface> *this)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterialInterface *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UMaterialInterface *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UMaterialInterface *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UMaterialInterface *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
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

// LoadSynchronous @ 147db39f0

URuntimeVirtualTexture * __thiscall
TSoftObjectPtr<URuntimeVirtualTexture>::LoadSynchronous
          (TSoftObjectPtr<URuntimeVirtualTexture> *this)

{
  int iVar1;
  URuntimeVirtualTexture *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (URuntimeVirtualTexture *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (URuntimeVirtualTexture *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (URuntimeVirtualTexture *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (URuntimeVirtualTexture *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
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

// LoadSynchronous @ 147db3a70

UStaticMesh * __thiscall
TSoftObjectPtr<UStaticMesh>::LoadSynchronous(TSoftObjectPtr<UStaticMesh> *this)

{
  int iVar1;
  UStaticMesh *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStaticMesh *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UStaticMesh *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UStaticMesh *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UStaticMesh *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UStaticMesh *)0x0) {
    pUVar3 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UStaticMesh *)0x0;
}

// Get @ 147e66bb0

UWorldPartitionRuntimeCell * __thiscall
TSoftObjectPtr<UWorldPartitionRuntimeCell>::Get(TSoftObjectPtr<UWorldPartitionRuntimeCell> *this)

{
  int iVar1;
  bool bVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  UWorldPartitionRuntimeCell *pUVar4;
  UClass *pUVar5;
  UWorldPartitionRuntimeCell *local_res8;
  
  pUVar3 = (UWorldPartitionRuntimeCell *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 == (UWorldPartitionRuntimeCell *)0x0) &&
     (*(longlong *)&(this->SoftObjectPtr).field_0x8 != 0)) {
    pUVar4 = (UWorldPartitionRuntimeCell *)
             FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UWorldPartitionRuntimeCell *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar2 = TPersistentObjectPtr<FSoftObjectPath>::CanCacheObjectPointer
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this,(FObjectPtr)&local_res8);
    if (bVar2) {
      local_res8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    }
    if ((pUVar4 == (UWorldPartitionRuntimeCell *)0x0) ||
       (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pUVar3 = (UWorldPartitionRuntimeCell *)0x0;
    if (bVar2) {
      pUVar3 = pUVar4;
    }
  }
  if (pUVar3 != (UWorldPartitionRuntimeCell *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar3;
    }
  }
  return (UWorldPartitionRuntimeCell *)0x0;
}

// Get @ 147ebde60

UStaticMesh * __thiscall TSoftObjectPtr<UStaticMesh>::Get(TSoftObjectPtr<UStaticMesh> *this)

{
  int iVar1;
  bool bVar2;
  UStaticMesh *pUVar3;
  UStaticMesh *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  UStaticMesh *local_res8;
  
  pUVar3 = (UStaticMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 != (UStaticMesh *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_147ebdf27;
  pUVar4 = (UStaticMesh *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar4 != (UStaticMesh *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_147ebdf0a:
    if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_147ebdf18;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pUVar4 != (UStaticMesh *)0x0) goto LAB_147ebdf0a;
LAB_147ebdf18:
    bVar2 = false;
  }
  pUVar3 = (UStaticMesh *)0x0;
  if (bVar2) {
    pUVar3 = pUVar4;
  }
LAB_147ebdf27:
  if (pUVar3 != (UStaticMesh *)0x0) {
    pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar3;
    }
  }
  return (UStaticMesh *)0x0;
}

// Get @ 1486ba8a0

USoundWave * __thiscall TSoftObjectPtr<USoundWave>::Get(TSoftObjectPtr<USoundWave> *this)

{
  int iVar1;
  USoundWave *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USoundWave *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (USoundWave *)0x0) {
    pUVar3 = USoundWave::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USoundWave *)0x0;
}

// Get @ 148acaec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
TSoftObjectPtr<UWorldPartition>::Get(TSoftObjectPtr<UWorldPartition> *this)

{
  int iVar1;
  UWorldPartition *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorldPartition *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UWorldPartition *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorldPartition_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorldPartition *)0x0;
}

