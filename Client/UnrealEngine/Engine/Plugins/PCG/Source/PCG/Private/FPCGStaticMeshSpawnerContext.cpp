// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149c3aa80

UScriptStruct * __cdecl FPCGStaticMeshSpawnerContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext,(UObject *)pUVar1,
                         L"PCGStaticMeshSpawnerContext");
  }
  return Z_Registration_Info_UScriptStruct_FPCGStaticMeshSpawnerContext.OuterSingleton;
}

// FPCGStaticMeshSpawnerContext @ 149c4a740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGStaticMeshSpawnerContext * __thiscall
FPCGStaticMeshSpawnerContext::FPCGStaticMeshSpawnerContext(FPCGStaticMeshSpawnerContext *this)

{
  FPCGContext::FPCGContext((FPCGContext *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FPCGContext__;
  this->_padding_ = (longlong)&_vftable__for__IPCGAsyncLoadingContext__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MeshInstancesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshInstancesData).ArrayNum = 0;
  (this->MeshInstancesData).ArrayMax = 0;
  this->CurrentInputIndex = 0;
  this->CurrentDataIndex = 0;
  this->bReuseCheckDone = false;
  this->bSkippedDueToReuse = false;
  this->bCurrentInputSetup = false;
  this->bSelectionDone = false;
  this->bPartitionDone = false;
  this->bCurrentDataSkippedDueToReuse = false;
  this->CurrentPointData = (UPCGBasePointData *)0x0;
  this->CurrentOutputPointData = (UPCGBasePointData *)0x0;
  (this->MaterialOverrideHelper).MaterialAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialOverrideHelper).MaterialAttributes.ArrayNum = 0;
  (this->MaterialOverrideHelper).MaterialAttributes.ArrayMax = 0;
  (this->MaterialOverrideHelper).ValueKeyToOverrideMaterials.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialOverrideHelper).ValueKeyToOverrideMaterials.ArrayNum = 0;
  (this->MaterialOverrideHelper).ValueKeyToOverrideMaterials.ArrayMax = 0;
  (this->MaterialOverrideHelper).WorkingMaterialOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialOverrideHelper).WorkingMaterialOverrides.ArrayNum = 0;
  (this->MaterialOverrideHelper).WorkingMaterialOverrides.ArrayMax = 0;
  (this->MaterialOverrideHelper).bIsInitialized = false;
  (this->MaterialOverrideHelper).bIsValid = false;
  (this->MaterialOverrideHelper).bUseMaterialOverrideAttributes = false;
  (this->MaterialOverrideHelper).StaticMaterialOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialOverrideHelper).StaticMaterialOverrides.ArrayNum = 0;
  (this->MaterialOverrideHelper).StaticMaterialOverrides.ArrayMax = 0;
  (this->MaterialOverrideHelper).MaterialOverrideAttributeNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialOverrideHelper).MaterialOverrideAttributeNames.ArrayNum = 0;
  (this->MaterialOverrideHelper).MaterialOverrideAttributeNames.ArrayMax = 0;
  (this->MaterialOverrideHelper).Metadata = (UPCGMetadata *)0x0;
  this->CurrentPointIndex = 0;
  this->CurrentWriteIndex = 0;
  *(undefined8 *)&this->MeshToOutPoints = 0;
  *(undefined8 *)&(this->MeshToOutPoints).field_0x8 = 0;
  *(undefined8 *)&(this->MeshToOutPoints).field_0x20 = 0;
  *(undefined4 *)&(this->MeshToOutPoints).field_0x28 = 0;
  *(undefined4 *)&(this->MeshToOutPoints).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshToOutPoints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshToOutPoints).field_0x34 = 0;
  *(undefined8 *)&(this->MeshToOutPoints).field_0x40 = 0;
  *(undefined4 *)&(this->MeshToOutPoints).field_0x48 = 0;
  (this->WeightedMeshInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightedMeshInstances).ArrayNum = 0;
  (this->WeightedMeshInstances).ArrayMax = 0;
  *(undefined8 *)&this->MeshToValueKey = 0;
  *(undefined8 *)&(this->MeshToValueKey).field_0x8 = 0;
  *(undefined8 *)&(this->MeshToValueKey).field_0x20 = 0;
  *(undefined4 *)&(this->MeshToValueKey).field_0x28 = 0;
  *(undefined4 *)&(this->MeshToValueKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshToValueKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshToValueKey).field_0x34 = 0;
  *(undefined8 *)&(this->MeshToValueKey).field_0x40 = 0;
  *(undefined4 *)&(this->MeshToValueKey).field_0x48 = 0;
  (this->CumulativeWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CumulativeWeights).ArrayNum = 0;
  (this->CumulativeWeights).ArrayMax = 0;
  *(undefined8 *)&this->CategoryEntryToInstancesAndWeights = 0;
  *(undefined8 *)&(this->CategoryEntryToInstancesAndWeights).field_0x8 = 0;
  *(undefined8 *)&(this->CategoryEntryToInstancesAndWeights).field_0x20 = 0;
  *(undefined4 *)&(this->CategoryEntryToInstancesAndWeights).field_0x28 = 0;
  *(undefined4 *)&(this->CategoryEntryToInstancesAndWeights).field_0x2c = 0x80;
  *(undefined4 *)&(this->CategoryEntryToInstancesAndWeights).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CategoryEntryToInstancesAndWeights).field_0x34 = 0;
  *(undefined8 *)&(this->CategoryEntryToInstancesAndWeights).field_0x40 = 0;
  *(undefined4 *)&(this->CategoryEntryToInstancesAndWeights).field_0x48 = 0;
  (this->AttributeOverridePartition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeOverridePartition).ArrayNum = 0;
  (this->AttributeOverridePartition).ArrayMax = 0;
  (this->OverriddenDescriptors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverriddenDescriptors).ArrayNum = 0;
  (this->OverriddenDescriptors).ArrayMax = 0;
  (this->TouchedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TouchedResources).ArrayNum = 0;
  (this->TouchedResources).ArrayMax = 0;
  return this;
}

// ~FPCGStaticMeshSpawnerContext @ 149c4d630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPCGStaticMeshSpawnerContext::~FPCGStaticMeshSpawnerContext(FPCGStaticMeshSpawnerContext *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->TouchedResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGSoftISMComponentDescriptor,int>
            ((FPCGSoftISMComponentDescriptor *)(this->OverriddenDescriptors).AllocatorInstance.Data,
             (this->OverriddenDescriptors).ArrayNum);
  pFVar1 = (this->OverriddenDescriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->AttributeOverridePartition).AllocatorInstance.Data,
             (this->AttributeOverridePartition).ArrayNum);
  pFVar1 = (this->AttributeOverridePartition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CategoryEntryToInstancesAndWeights).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CategoryEntryToInstancesAndWeights).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategoryEntryToInstancesAndWeights);
  pFVar1 = (this->CumulativeWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MeshToValueKey).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshToValueKey).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshToValueKey);
  DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)
             (this->WeightedMeshInstances).AllocatorInstance.Data,
             (this->WeightedMeshInstances).ArrayNum);
  pFVar1 = (this->WeightedMeshInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MeshToOutPoints).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshToOutPoints).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshToOutPoints);
  FPCGMeshMaterialOverrideHelper::~FPCGMeshMaterialOverrideHelper(&this->MaterialOverrideHelper);
  DestructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int>
            ((FPackedInstanceListData *)(this->MeshInstancesData).AllocatorInstance.Data,
             (this->MeshInstancesData).ArrayNum);
  pFVar1 = (this->MeshInstancesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->_padding_);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  return;
}

// operator= @ 149c4ece0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGStaticMeshSpawnerContext * __thiscall
FPCGStaticMeshSpawnerContext::operator=
          (FPCGStaticMeshSpawnerContext *this,FPCGStaticMeshSpawnerContext *param_1)

{
  int *piVar1;
  TArray<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  longlong *plVar4;
  TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGMeshMaterialOverrideHelper *pFVar6;
  TArray<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FPCGSoftISMComponentDescriptor,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TWeakObjectPtr<UPCGManagedISMComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar15;
  FPackedInstanceListData *pFVar16;
  FScriptContainerElement *pFVar17;
  TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
  *pTVar18;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  FPCGSoftISMComponentDescriptor *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  
  FPCGContext::operator=((FPCGContext *)this,(FPCGContext *)param_1);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  lVar13 = param_1->_padding_;
  lVar14 = param_1->_padding_;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  pTVar22 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = lVar14;
  this->_padding_ = lVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  plVar4 = &this->_padding_;
  if (plVar4 != &param_1->_padding_) {
    DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
              ((TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                *)*plVar4,(int)this->_padding_);
    iVar12 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    pTVar15 = (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
               *)param_1->_padding_;
    iVar11 = *piVar1;
    *(int *)&this->_padding_ = iVar12;
    if ((iVar12 == 0) && (iVar11 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,iVar11,(ForAnyElementType *)plVar4,iVar12,piVar1);
      ConstructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                ((void *)*plVar4,pTVar15,iVar12);
    }
  }
  pTVar5 = &this->MeshInstancesData;
  if (pTVar5 != &param_1->MeshInstancesData) {
    DestructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int>
              ((FPackedInstanceListData *)(pTVar5->AllocatorInstance).Data,
               (this->MeshInstancesData).ArrayNum);
    iVar12 = (param_1->MeshInstancesData).ArrayNum;
    piVar1 = &(this->MeshInstancesData).ArrayMax;
    pFVar16 = (FPackedInstanceListData *)(param_1->MeshInstancesData).AllocatorInstance.Data;
    (this->MeshInstancesData).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar12,*piVar1,&pTVar5->AllocatorInstance,iVar12,piVar1);
      ConstructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int>
                ((pTVar5->AllocatorInstance).Data,pFVar16,iVar12);
    }
  }
  this->CurrentInputIndex = param_1->CurrentInputIndex;
  pFVar6 = &this->MaterialOverrideHelper;
  this->CurrentDataIndex = param_1->CurrentDataIndex;
  this->bReuseCheckDone = param_1->bReuseCheckDone;
  this->bSkippedDueToReuse = param_1->bSkippedDueToReuse;
  this->bCurrentInputSetup = param_1->bCurrentInputSetup;
  this->bSelectionDone = param_1->bSelectionDone;
  this->bPartitionDone = param_1->bPartitionDone;
  this->bCurrentDataSkippedDueToReuse = param_1->bCurrentDataSkippedDueToReuse;
  this->CurrentPointData = param_1->CurrentPointData;
  this->CurrentOutputPointData = param_1->CurrentOutputPointData;
  if (pFVar6 != &param_1->MaterialOverrideHelper) {
    iVar12 = (param_1->MaterialOverrideHelper).MaterialAttributes.ArrayNum;
    piVar1 = &(this->MaterialOverrideHelper).MaterialAttributes.ArrayMax;
    pFVar17 = (param_1->MaterialOverrideHelper).MaterialAttributes.AllocatorInstance.Data;
    iVar11 = *piVar1;
    (this->MaterialOverrideHelper).MaterialAttributes.ArrayNum = iVar12;
    if ((iVar12 == 0) && (iVar11 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,iVar11,(ForAnyElementType *)pFVar6,iVar12,piVar1);
      if (iVar12 != 0) {
        memcpy((pFVar6->MaterialAttributes).AllocatorInstance.Data,pFVar17,(longlong)iVar12 << 3);
      }
    }
  }
  pTVar2 = &(param_1->MaterialOverrideHelper).ValueKeyToOverrideMaterials;
  pTVar3 = &(this->MaterialOverrideHelper).ValueKeyToOverrideMaterials;
  if (pTVar3 != pTVar2) {
    DestructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
              ((TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
                *)(pTVar3->AllocatorInstance).Data,
               (this->MaterialOverrideHelper).ValueKeyToOverrideMaterials.ArrayNum);
    iVar12 = (param_1->MaterialOverrideHelper).ValueKeyToOverrideMaterials.ArrayNum;
    piVar1 = &(this->MaterialOverrideHelper).ValueKeyToOverrideMaterials.ArrayMax;
    pTVar18 = (TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
               *)(pTVar2->AllocatorInstance).Data;
    iVar11 = *piVar1;
    (this->MaterialOverrideHelper).ValueKeyToOverrideMaterials.ArrayNum = iVar12;
    if ((iVar12 == 0) && (iVar11 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar12,iVar11,&pTVar3->AllocatorInstance,iVar12,piVar1);
      ConstructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar18,iVar12);
    }
  }
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MaterialOverrideHelper).WorkingMaterialOverrides,
             &(param_1->MaterialOverrideHelper).WorkingMaterialOverrides);
  (this->MaterialOverrideHelper).bIsInitialized = (param_1->MaterialOverrideHelper).bIsInitialized;
  (this->MaterialOverrideHelper).bIsValid = (param_1->MaterialOverrideHelper).bIsValid;
  (this->MaterialOverrideHelper).bUseMaterialOverrideAttributes =
       (param_1->MaterialOverrideHelper).bUseMaterialOverrideAttributes;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MaterialOverrideHelper).StaticMaterialOverrides,
             &(param_1->MaterialOverrideHelper).StaticMaterialOverrides);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MaterialOverrideHelper).MaterialOverrideAttributeNames,
             &(param_1->MaterialOverrideHelper).MaterialOverrideAttributeNames);
  (this->MaterialOverrideHelper).Metadata = (param_1->MaterialOverrideHelper).Metadata;
  this->CurrentPointIndex = param_1->CurrentPointIndex;
  this->CurrentWriteIndex = param_1->CurrentWriteIndex;
  if (&this->MeshToOutPoints != &param_1->MeshToOutPoints) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MeshToOutPoints).field_0x38,
               (int *)&(this->MeshToOutPoints).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->MeshToOutPoints).field_0x38,
               *(int *)&(param_1->MeshToOutPoints).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->MeshToOutPoints,
                (TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->MeshToOutPoints);
  }
  pTVar7 = &this->WeightedMeshInstances;
  if (pTVar7 != &param_1->WeightedMeshInstances) {
    DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)
               (pTVar7->AllocatorInstance).Data,(this->WeightedMeshInstances).ArrayNum);
    iVar12 = (param_1->WeightedMeshInstances).ArrayNum;
    piVar1 = &(this->WeightedMeshInstances).ArrayMax;
    pTVar19 = (TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)
              (param_1->WeightedMeshInstances).AllocatorInstance.Data;
    (this->WeightedMeshInstances).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,*piVar1,&pTVar7->AllocatorInstance,iVar12,piVar1);
      ConstructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
                ((pTVar7->AllocatorInstance).Data,pTVar19,iVar12);
    }
  }
  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
               *)&this->MeshToValueKey,
              (TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
               *)&param_1->MeshToValueKey);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CumulativeWeights,&param_1->CumulativeWeights);
  if (&this->CategoryEntryToInstancesAndWeights != &param_1->CategoryEntryToInstancesAndWeights) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->CategoryEntryToInstancesAndWeights).field_0x38,
               (int *)&(this->CategoryEntryToInstancesAndWeights).field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->CategoryEntryToInstancesAndWeights).field_0x38,
               *(int *)&(param_1->CategoryEntryToInstancesAndWeights).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->CategoryEntryToInstancesAndWeights,
                (TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->CategoryEntryToInstancesAndWeights);
  }
  pTVar8 = &this->AttributeOverridePartition;
  if (pTVar8 != &param_1->AttributeOverridePartition) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar8->AllocatorInstance).Data,
               (this->AttributeOverridePartition).ArrayNum);
    iVar12 = (param_1->AttributeOverridePartition).ArrayNum;
    piVar1 = &(this->AttributeOverridePartition).ArrayMax;
    pTVar20 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              (param_1->AttributeOverridePartition).AllocatorInstance.Data;
    (this->AttributeOverridePartition).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,*piVar1,&pTVar8->AllocatorInstance,iVar12,piVar1);
      ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((pTVar8->AllocatorInstance).Data,pTVar20,iVar12);
    }
  }
  pTVar9 = &this->OverriddenDescriptors;
  if (pTVar9 != &param_1->OverriddenDescriptors) {
    DestructItems<FPCGSoftISMComponentDescriptor,int>
              ((FPCGSoftISMComponentDescriptor *)(pTVar9->AllocatorInstance).Data,
               (this->OverriddenDescriptors).ArrayNum);
    iVar12 = (param_1->OverriddenDescriptors).ArrayNum;
    piVar1 = &(this->OverriddenDescriptors).ArrayMax;
    pFVar21 = (FPCGSoftISMComponentDescriptor *)
              (param_1->OverriddenDescriptors).AllocatorInstance.Data;
    (this->OverriddenDescriptors).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x280,8,iVar12,*piVar1,&pTVar9->AllocatorInstance,iVar12,piVar1);
      ConstructItems<FPCGSoftISMComponentDescriptor,FPCGSoftISMComponentDescriptor,int>
                ((pTVar9->AllocatorInstance).Data,pFVar21,iVar12);
    }
  }
  pTVar10 = &this->TouchedResources;
  if (pTVar10 != &param_1->TouchedResources) {
    iVar12 = (param_1->TouchedResources).ArrayNum;
    piVar1 = &(this->TouchedResources).ArrayMax;
    pFVar17 = (param_1->TouchedResources).AllocatorInstance.Data;
    (this->TouchedResources).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar12,*piVar1,&pTVar10->AllocatorInstance,iVar12,piVar1);
    if (iVar12 != 0) {
      memcpy((pTVar10->AllocatorInstance).Data,pFVar17,(longlong)iVar12 << 3);
    }
  }
  return this;
}

// ResetInputIterationData @ 149c858d0

void __thiscall
FPCGStaticMeshSpawnerContext::ResetInputIterationData(FPCGStaticMeshSpawnerContext *this)

{
  int *piVar1;
  int iVar2;
  TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FPCGSoftISMComponentDescriptor *pFVar5;
  
  this->bCurrentInputSetup = false;
  this->bSelectionDone = false;
  this->bPartitionDone = false;
  this->bCurrentDataSkippedDueToReuse = false;
  this->CurrentPointData = (UPCGBasePointData *)0x0;
  this->CurrentOutputPointData = (UPCGBasePointData *)0x0;
  FPCGMeshMaterialOverrideHelper::Reset(&this->MaterialOverrideHelper);
  this->CurrentPointIndex = 0;
  this->CurrentWriteIndex = 0;
  piVar1 = &(this->WeightedMeshInstances).ArrayMax;
  pTVar3 = (TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *)
           (this->WeightedMeshInstances).AllocatorInstance.Data;
  iVar2 = (this->WeightedMeshInstances).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->WeightedMeshInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->WeightedMeshInstances).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->WeightedMeshInstances).ArrayNum = 0;
  }
  TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TSoftObjectPtr<UStaticMesh>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,int,0>,FDefaultSetAllocator>
           *)&this->MeshToValueKey);
  (this->CumulativeWeights).ArrayNum = 0;
  if ((this->CumulativeWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CumulativeWeights).AllocatorInstance,0,
               &(this->CumulativeWeights).ArrayMax);
  }
  TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FPCGInstancesAndWeights>,TDefaultMapHashableKeyFuncs<int,FPCGInstancesAndWeights,0>,FDefaultSetAllocator>
           *)&this->CategoryEntryToInstancesAndWeights);
  piVar1 = &(this->AttributeOverridePartition).ArrayMax;
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (this->AttributeOverridePartition).AllocatorInstance.Data;
  iVar2 = (this->AttributeOverridePartition).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar2);
    (this->AttributeOverridePartition).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->AttributeOverridePartition).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar2);
    (this->AttributeOverridePartition).ArrayNum = 0;
  }
  piVar1 = &(this->OverriddenDescriptors).ArrayMax;
  pFVar5 = (FPCGSoftISMComponentDescriptor *)(this->OverriddenDescriptors).AllocatorInstance.Data;
  iVar2 = (this->OverriddenDescriptors).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FPCGSoftISMComponentDescriptor,int>(pFVar5,iVar2);
    (this->OverriddenDescriptors).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x280,8,0,&(this->OverriddenDescriptors).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGSoftISMComponentDescriptor,int>(pFVar5,iVar2);
    (this->OverriddenDescriptors).ArrayNum = 0;
  }
  return;
}

