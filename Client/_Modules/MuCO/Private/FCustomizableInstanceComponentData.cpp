// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 4

// StaticStruct @ 14ab9a1a0

UScriptStruct * __cdecl FCustomizableInstanceComponentData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableInstanceComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableInstanceComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData,
                         (UObject *)pUVar1,L"CustomizableInstanceComponentData");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableInstanceComponentData.OuterSingleton;
}

// FCustomizableInstanceComponentData @ 14ab9f390

FCustomizableInstanceComponentData * __thiscall
FCustomizableInstanceComponentData::FCustomizableInstanceComponentData
          (FCustomizableInstanceComponentData *this)

{
  *(undefined8 *)&this->AnimSlotToBP = 0;
  *(undefined8 *)&(this->AnimSlotToBP).field_0x8 = 0;
  *(undefined8 *)&(this->AnimSlotToBP).field_0x20 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x28 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x34 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AnimSlotToBP).field_0x40 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x48 = 0;
  *(undefined8 *)&(this->AssetUserDataArray).Elements = 0;
  *(undefined8 *)&(this->AssetUserDataArray).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssetUserDataArray).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x30 = 0xffffffff;
  (this->AssetUserDataArray).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AssetUserDataArray).HashSize = 0;
  (this->StreamedResourceIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedResourceIndex).ArrayNum = 0;
  (this->StreamedResourceIndex).ArrayMax = 0;
  (this->Skeletons).Skeleton.field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->Skeletons).SkeletonIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeletons).SkeletonIds.ArrayNum = 0;
  (this->Skeletons).SkeletonIds.ArrayMax = 0;
  (this->Skeletons).SkeletonsToMerge.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeletons).SkeletonsToMerge.ArrayNum = 0;
  (this->Skeletons).SkeletonsToMerge.ArrayMax = 0;
  (this->PhysicsAssets).PhysicsAssetToLoad.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).PhysicsAssetToLoad.ArrayNum = 0;
  (this->PhysicsAssets).PhysicsAssetToLoad.ArrayMax = 0;
  (this->PhysicsAssets).PhysicsAssetsToMerge.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PhysicsAssets).PhysicsAssetsToMerge.ArrayNum = 0;
  (this->PhysicsAssets).PhysicsAssetsToMerge.ArrayMax = 0;
  (this->PhysicsAssets).AdditionalPhysicsAssetsToLoad.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).AdditionalPhysicsAssetsToLoad.ArrayNum = 0;
  (this->PhysicsAssets).AdditionalPhysicsAssetsToLoad.ArrayMax = 0;
  (this->PhysicsAssets).AdditionalPhysicsAssets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).AdditionalPhysicsAssets.ArrayNum = 0;
  (this->PhysicsAssets).AdditionalPhysicsAssets.ArrayMax = 0;
  (this->ClothingPhysicsAssetsToStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothingPhysicsAssetsToStream).ArrayNum = 0;
  (this->ClothingPhysicsAssetsToStream).ArrayMax = 0;
  (this->LastMeshIdPerLOD).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastMeshIdPerLOD).ArrayNum = 0;
  (this->LastMeshIdPerLOD).ArrayMax = 0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// ~FCustomizableInstanceComponentData @ 14aba21c0

void __thiscall
FCustomizableInstanceComponentData::~FCustomizableInstanceComponentData
          (FCustomizableInstanceComponentData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            ((FHandle *)(this->LastMeshIdPerLOD).AllocatorInstance.Data,
             (this->LastMeshIdPerLOD).ArrayNum);
  pFVar1 = (this->LastMeshIdPerLOD).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClothingPhysicsAssetsToStream).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsAssets).AdditionalPhysicsAssets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsAssets).AdditionalPhysicsAssetsToLoad.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsAssets).PhysicsAssetsToMerge.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsAssets).PhysicsAssetToLoad.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Skeletons).SkeletonsToMerge.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Skeletons).SkeletonIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamedResourceIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->AssetUserDataArray).HashSize = 0;
  FVar2 = (this->AssetUserDataArray).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UAssetUserData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UAssetUserData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AssetUserDataArray).Elements);
  *(undefined4 *)&(this->AnimSlotToBP).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AnimSlotToBP).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FCustomizableInstanceComponentData @ 14abbc0e0

FCustomizableInstanceComponentData * __thiscall
FCustomizableInstanceComponentData::FCustomizableInstanceComponentData
          (FCustomizableInstanceComponentData *this,FCustomizableInstanceComponentData *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  USkeleton *pUVar10;
  FHandle *pFVar11;
  UMaterialInterface *pUVar12;
  
  *(undefined8 *)&this->AnimSlotToBP = 0;
  *(undefined8 *)&(this->AnimSlotToBP).field_0x8 = 0;
  *(undefined8 *)&(this->AnimSlotToBP).field_0x20 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x28 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x34 = 0;
  *(undefined8 *)&(this->AnimSlotToBP).field_0x40 = 0;
  *(undefined4 *)&(this->AnimSlotToBP).field_0x48 = 0;
  TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                       *)param_1);
  *(undefined8 *)&(this->AssetUserDataArray).Elements = 0;
  *(undefined8 *)&(this->AssetUserDataArray).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssetUserDataArray).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetUserDataArray).Elements.field_0x34 = 0;
  (this->AssetUserDataArray).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AssetUserDataArray).HashSize = 0;
  TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
  ::operator=(&this->AssetUserDataArray,&param_1->AssetUserDataArray);
  pTVar2 = &this->StreamedResourceIndex;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StreamedResourceIndex).ArrayMax;
  iVar8 = (param_1->StreamedResourceIndex).ArrayNum;
  pFVar9 = (param_1->StreamedResourceIndex).AllocatorInstance.Data;
  (this->StreamedResourceIndex).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pUVar10 = (param_1->Skeletons).Skeleton.field0_0x0.DebugPtr;
  (this->Skeletons).Skeleton.field0_0x0.DebugPtr = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pTVar3 = &(this->Skeletons).SkeletonIds;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Skeletons).SkeletonIds.ArrayMax;
  iVar8 = (param_1->Skeletons).SkeletonIds.ArrayNum;
  pFVar9 = (param_1->Skeletons).SkeletonIds.AllocatorInstance.Data;
  (this->Skeletons).SkeletonIds.ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,&pTVar3->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar8 * 2);
  }
  pTVar4 = &(this->Skeletons).SkeletonsToMerge;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Skeletons).SkeletonsToMerge.ArrayMax;
  iVar8 = (param_1->Skeletons).SkeletonsToMerge.ArrayNum;
  pFVar9 = (param_1->Skeletons).SkeletonsToMerge.AllocatorInstance.Data;
  (this->Skeletons).SkeletonsToMerge.ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar1);
    ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
              ((pTVar4->AllocatorInstance).Data,(TObjectPtr<USkeleton> *)pFVar9,iVar8);
  }
  FReferencedPhysicsAssets::FReferencedPhysicsAssets(&this->PhysicsAssets,&param_1->PhysicsAssets);
  pTVar5 = &this->ClothingPhysicsAssetsToStream;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ClothingPhysicsAssetsToStream).ArrayMax;
  iVar8 = (param_1->ClothingPhysicsAssetsToStream).ArrayNum;
  pFVar9 = (param_1->ClothingPhysicsAssetsToStream).AllocatorInstance.Data;
  (this->ClothingPhysicsAssetsToStream).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 3);
  }
  pTVar6 = &this->LastMeshIdPerLOD;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LastMeshIdPerLOD).ArrayMax;
  iVar8 = (param_1->LastMeshIdPerLOD).ArrayNum;
  pFVar11 = (FHandle *)(param_1->LastMeshIdPerLOD).AllocatorInstance.Data;
  (this->LastMeshIdPerLOD).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar1);
    ConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
              ((pTVar6->AllocatorInstance).Data,pFVar11,iVar8);
  }
  pTVar7 = &this->OverrideMaterials;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OverrideMaterials).ArrayMax;
  iVar8 = (param_1->OverrideMaterials).ArrayNum;
  pFVar9 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&pTVar7->AllocatorInstance,iVar8,piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar7->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar9,iVar8);
  }
  pUVar12 = (param_1->OverlayMaterial).field0_0x0.DebugPtr;
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  return this;
}

