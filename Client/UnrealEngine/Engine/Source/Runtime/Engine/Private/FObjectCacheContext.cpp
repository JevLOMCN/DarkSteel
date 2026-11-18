// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FObjectCacheContext @ 148089f40

FObjectCacheContext * __thiscall FObjectCacheContext::FObjectCacheContext(FObjectCacheContext *this)

{
  *(undefined8 *)&this->PrimitiveComponentToMaterial = 0;
  *(undefined8 *)&(this->PrimitiveComponentToMaterial).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveComponentToMaterial).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveComponentToMaterial).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveComponentToMaterial).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveComponentToMaterial).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveComponentToMaterial).field_0x34 = 0;
  *(undefined8 *)&(this->PrimitiveComponentToMaterial).field_0x40 = 0;
  *(undefined4 *)&(this->PrimitiveComponentToMaterial).field_0x48 = 0;
  *(undefined8 *)&this->MaterialUsedTextures = 0;
  *(undefined8 *)&(this->MaterialUsedTextures).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialUsedTextures).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialUsedTextures).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialUsedTextures).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialUsedTextures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialUsedTextures).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialUsedTextures).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialUsedTextures).field_0x48 = 0;
  *(undefined8 *)&this->MaterialUsedTextureCollections = 0;
  *(undefined8 *)&(this->MaterialUsedTextureCollections).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialUsedTextureCollections).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialUsedTextureCollections).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialUsedTextureCollections).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialUsedTextureCollections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialUsedTextureCollections).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialUsedTextureCollections).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialUsedTextureCollections).field_0x48 = 0;
  *(undefined8 *)&(this->TextureToMaterials).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x48) = 0;
  *(undefined8 *)&(this->TextureCollectionToMaterials).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x48) = 0;
  *(undefined8 *)&(this->MaterialToPrimitives).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x48) = 0;
  (this->SkinnedMeshCache).Components.field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SkinnedMeshCache).Components.field0_0x0.TypedValue.ArrayNum = 0;
  (this->SkinnedMeshCache).Components.field0_0x0.TypedValue.ArrayMax = -1;
  *(undefined8 *)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0xc) =
       0xffffffff;
  *(undefined8 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x30) =
       0xffffffff;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x48) = 0;
  (this->InstancedSkinnedMeshCache).Components.field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstancedSkinnedMeshCache).Components.field0_0x0.TypedValue.ArrayNum = 0;
  (this->InstancedSkinnedMeshCache).Components.field0_0x0.TypedValue.ArrayMax = -1;
  *(undefined8 *)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 8) = 0
  ;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0xc) =
       0xffffffff;
  *(undefined8 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x20)
       = 0;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x28)
       = 0;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x2c)
       = 0x80;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x30)
       = 0xffffffff;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x34)
       = 0;
  *(undefined8 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x40)
       = 0;
  *(undefined4 *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x48)
       = 0;
  (this->PrimitiveComponents).field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveComponents).field0_0x0.TypedValue.ArrayNum = 0;
  (this->StaticMeshCache).Components.field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticMeshCache).Components.field0_0x0.TypedValue.ArrayNum = 0;
  *(undefined8 *)&(this->StaticMeshCache).AssetToComponents.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x20) = 0;
  (this->PrimitiveComponents).field0_0x0.TypedValue.ArrayMax = -1;
  (this->StaticMeshCache).Components.field0_0x0.TypedValue.ArrayMax = -1;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0xc) =
       0xffffffff;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x30) =
       0xffffffff;
  *(undefined8 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x48) = 0;
  return this;
}

// ~FObjectCacheContext @ 14808ecc0

void __thiscall FObjectCacheContext::~FObjectCacheContext(FObjectCacheContext *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (*(int *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->StaticMeshCache).AssetToComponents.field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->StaticMeshCache).AssetToComponents);
  }
  if (((this->StaticMeshCache).Components.field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar2 = (this->StaticMeshCache).Components.field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if (((this->PrimitiveComponents).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar2 = (this->PrimitiveComponents).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if (*(int *)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0xc) !=
      -1) {
    *(undefined4 *)
     ((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->InstancedSkinnedMeshCache).AssetToComponents.field0_0x0 +
                       0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->InstancedSkinnedMeshCache).AssetToComponents);
  }
  if (((this->InstancedSkinnedMeshCache).Components.field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar2 = (this->InstancedSkinnedMeshCache).Components.field0_0x0.TypedValue.AllocatorInstance.
               Data, pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if (*(int *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->SkinnedMeshCache).AssetToComponents.field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->SkinnedMeshCache).AssetToComponents);
  }
  if (((this->SkinnedMeshCache).Components.field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar2 = (this->SkinnedMeshCache).Components.field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if (*(int *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->MaterialToPrimitives).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->MaterialToPrimitives);
  }
  if (*(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->TextureCollectionToMaterials);
  }
  if (*(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->TextureToMaterials);
  }
  *(undefined4 *)&(this->MaterialUsedTextureCollections).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialUsedTextureCollections).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialUsedTextureCollections);
  *(undefined4 *)&(this->MaterialUsedTextures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialUsedTextures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialUsedTextures);
  *(undefined4 *)&(this->PrimitiveComponentToMaterial).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrimitiveComponentToMaterial).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetInstancedSkinnedMeshComponents @ 1480a4590

TObjectCacheIterator<UInstancedSkinnedMeshComponent> * __thiscall
FObjectCacheContext::GetInstancedSkinnedMeshComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<UInstancedSkinnedMeshComponent> *__return_storage_ptr__,
          UTransformProviderData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<UInstancedSkinnedMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TObjectCacheIterator<UInstancedSkinnedMeshComponent> *pTVar5;
  <lambda_1> local_res8;
  TArray<UInstancedSkinnedMeshComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::
            GetSet<TObjectIterator<UInstancedSkinnedMeshComponent>,_FObjectCacheContext::GetInstancedSkinnedMeshComponents_::__l2::<lambda_1>,_FObjectCacheContext::GetInstancedSkinnedMeshComponents_::__l2::<lambda_2>_>
                      (&this->InstancedSkinnedMeshCache,param_1,local_res8,(<lambda_2>)local_res8);
  pTVar4 = TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
           ::Array(this_00,&local_18);
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = pTVar4->ArrayNum;
  (__return_storage_ptr__->OwnedArray).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr =
       (UInstancedSkinnedMeshComponent **)
       (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data;
  iVar1 = (__return_storage_ptr__->OwnedArray).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectCacheIterator<UInstancedSkinnedMeshComponent> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->ArrayView).ArrayNum = iVar1;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInstancedSkinnedMeshComponents @ 1480a4640

TObjectCacheIterator<UInstancedSkinnedMeshComponent> * __thiscall
FObjectCacheContext::GetInstancedSkinnedMeshComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<UInstancedSkinnedMeshComponent> *__return_storage_ptr__)

{
  TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::
  Get<TObjectIterator<UInstancedSkinnedMeshComponent>_>
            (&this->InstancedSkinnedMeshCache,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialsAffectedByMaterials @ 1480a4710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectCacheIterator<UMaterialInterface> * __thiscall
FObjectCacheContext::GetMaterialsAffectedByMaterials
          (FObjectCacheContext *this,
          TObjectCacheIterator<UMaterialInterface> *__return_storage_ptr__,
          TArrayView<UMaterialInterface_*,int> *param_1)

{
  int iVar1;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  undefined1 auStackY_b8 [32];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1079,"FObjectCacheContext::GetMaterialsAffectedByMaterials",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x437);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1079);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)param_1->DataPtr;
  local_88.ArrayNum = param_1->ArrayNum;
  local_88.ArrayMax = *(int *)&param_1->field_0xc;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  ObjectCacheContextImpl::GetMaterialsAffectedByMaterials_Iteration
            ((TArrayView<UMaterialInterface_*,int> *)&local_88,
             (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
              *)local_78);
  pTVar2 = TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
           Array((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                  *)local_78,&local_88);
  TObjectCacheIterator<UMaterialInterface>::TObjectCacheIterator<UMaterialInterface>
            (__return_storage_ptr__,pTVar2);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetMaterialsAffectedByTexture @ 1480a4e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectCacheIterator<UMaterialInterface> * __thiscall
FObjectCacheContext::GetMaterialsAffectedByTexture
          (FObjectCacheContext *this,
          TObjectCacheIterator<UMaterialInterface> *__return_storage_ptr__,UTexture *param_1)

{
  TOptional<TMap<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>_>_>
  *this_00;
  UTexture **ppUVar1;
  UMaterialInterface *pUVar2;
  UTexture *pUVar3;
  void *pvVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  EInternalObjectFlags EVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  TObjectCacheIterator<UMaterialInterface> *pTVar11;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *pTVar12;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *pTVar19;
  uint uVar20;
  undefined1 *puVar21;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *pTVar22;
  UTexture **ppUVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  int *piVar30;
  int iVar31;
  ForElementType<unsigned_int> FVar32;
  bool bVar33;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  int local_170 [2];
  uint local_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  undefined4 local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TObjectIterator<UMaterialInterface> local_148;
  UTexture *local_130;
  TObjectCacheIterator<UMaterialInterface> *local_128;
  undefined4 local_120;
  int local_11c;
  UTexture *local_118;
  FWeakObjectPtr *local_110;
  UMaterialInterface *local_108;
  FObjectCacheContext *local_100;
  UTexture *local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_c8;
  TObjectCacheIterator<UTexture> local_b8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar17 = 0;
  local_130 = param_1;
  local_128 = __return_storage_ptr__;
  local_100 = this;
  if (*(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0xc) != -1) goto LAB_1480a5550;
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId948,"ComputeMaterialsAffectedByTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x3b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId948);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0x2000);
  for (lVar25 = 0x3f; 0x200fUL >> lVar25 == 0; lVar25 = lVar25 + -1) {
  }
  uVar24 = 1 << ((byte)lVar25 & 0x1f);
  local_120 = (undefined4)lVar25;
  if ((local_50 == 0) || ((int)local_50 < (int)uVar24)) {
    local_50 = uVar24;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar24 != 0) {
      uVar15 = uVar24;
      if (uVar24 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar15 = 0;
          goto LAB_1480a4fca;
        }
      }
      else {
LAB_1480a4fca:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar15,4);
      }
      if (0 < (int)uVar24) {
        uVar29 = (ulonglong)uVar24;
        uVar27 = uVar17;
        do {
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar9 = (longlong)(int)uVar24 - 1U & uVar27;
          uVar27 = uVar27 + 1;
          *(undefined4 *)(FVar16.Data + uVar9 * 4) = 0xffffffff;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
    }
    if (local_50 != 0) {
      pTStack_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_168 = 0;
      uStack_164 = 1;
      uStack_154 = 0;
      uStack_150 = 0;
      if (local_70 != 0) {
        FVar32 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_78;
        }
        uVar24 = *(uint *)FVar32;
        uVar27 = uVar17;
        while (uVar24 == 0) {
          uStack_150 = (int)uVar27 + 0x20;
          uVar27 = (ulonglong)uStack_150;
          iVar14 = (int)uVar17;
          local_168 = iVar14 + 1;
          uVar17 = (ulonglong)local_168;
          if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < (int)local_168)
          goto LAB_1480a50d4;
          uVar24 = ((uint *)((longlong)FVar32 + 4))[iVar14];
        }
        uStack_164 = ~(uVar24 - 1) & uVar24;
        uVar17 = (ulonglong)uStack_164 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_11c = (int)lVar25;
        uStack_154 = local_11c + -1 + uStack_150;
        uVar17 = (ulonglong)uStack_154;
        if ((int)local_70 < (int)uStack_154) {
LAB_1480a50d4:
          uVar17 = (ulonglong)local_70;
          uStack_154 = local_70;
        }
      }
      local_158 = 0xffffffff;
      local_f0 = (longlong *)local_98;
      local_e8._padding_ = CONCAT44(uStack_164,local_168);
      local_e8.CurrentBitIndex = uStack_154;
      local_e8.UnvisitedBitMask = 0xffffffff;
      local_e8._28_4_ = uStack_14c;
      local_e8.BaseBitIndex = uStack_150;
      local_e8.Array = pTStack_160;
      if ((int)uVar17 < (int)local_70) {
        do {
          piVar30 = (int *)((longlong)(int)uVar17 * 0x60 + *local_f0);
          uVar24 = piVar30[1];
          uVar20 = *piVar30 - uVar24 ^ uVar24 >> 0xd;
          uVar15 = (-0x61c88647 - uVar20) - uVar24 ^ uVar20 << 8;
          uVar26 = (uVar24 - uVar15) - uVar20 ^ uVar15 >> 0xd;
          uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 0xc;
          uVar24 = (uVar15 - uVar20) - uVar26 ^ uVar20 << 0x10;
          uVar26 = (uVar26 - uVar24) - uVar20 ^ uVar24 >> 5;
          uVar15 = (uVar20 - uVar26) - uVar24 ^ uVar26 >> 3;
          uVar24 = (uVar24 - uVar15) - uVar26 ^ uVar15 << 10;
          uVar24 = ((uVar26 - uVar24) - uVar15 ^ uVar24 >> 0xf) & local_50 - 1;
          piVar30[0x17] = uVar24;
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar27 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar24;
          piVar30[0x16] = *(int *)(FVar16.Data + uVar27 * 4);
          *(int *)(FVar16.Data + uVar27 * 4) = (int)uVar17;
          local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
          uVar17 = (ulonglong)(uint)local_e8.CurrentBitIndex;
        } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
      }
    }
  }
  local_148.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ObjectArray.ArrayNum = 0;
  local_148.ObjectArray.ArrayMax = 0;
  local_148.Index = 0xffffffff;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  GetObjectsOfClass(pUVar10,&local_148.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|AsyncLoadingPhase2|Async|
                             AsyncLoadingPhase1|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UMaterialInterface>::Advance(&local_148);
    lVar25 = (longlong)local_148.Index;
    if ((local_148.Index < 0) || (local_148.ObjectArray.ArrayNum <= local_148.Index)) break;
    uVar24 = 0;
    if (local_148.Index < local_148.ObjectArray.ArrayNum) {
      uVar24 = (uint)~local_148.Index >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar5)();
      return pTVar11;
    }
    pUVar2 = *(UMaterialInterface **)(local_148.ObjectArray.AllocatorInstance.Data + lVar25 * 8);
    local_108 = pUVar2;
    GetUsedTextures(this,&local_b8,pUVar2);
    ppUVar1 = local_b8.ArrayView.DataPtr + local_b8.ArrayView.ArrayNum;
    if (local_b8.ArrayView.DataPtr != ppUVar1) {
      uVar24 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
               -0x7a143595;
      uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
      ppUVar23 = local_b8.ArrayView.DataPtr;
      do {
        pUVar3 = *ppUVar23;
        local_180.ObjectIndex = 0;
        local_180.ObjectSerialNumber = 0;
        uVar17 = 0;
        iVar14 = 0;
        iVar28 = 0;
        if (pUVar3 != (UTexture *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          local_188.ObjectIndex = 0;
          local_188.ObjectSerialNumber = 0;
          local_118 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_118);
          uVar17 = (ulonglong)local_188 >> 0x20;
          iVar14 = local_188.ObjectIndex;
          local_180 = local_188;
          FVar6 = local_180;
          local_180.ObjectSerialNumber = local_188.ObjectSerialNumber;
          iVar28 = local_180.ObjectSerialNumber;
          local_180 = FVar6;
        }
        iVar31 = (int)uVar17;
        uVar20 = iVar14 - iVar31 ^ (uint)(uVar17 >> 0xd);
        uVar15 = (-0x61c88647 - iVar31) - uVar20 ^ uVar20 << 8;
        uVar26 = (iVar31 - uVar15) - uVar20 ^ uVar15 >> 0xd;
        uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 0xc;
        uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 << 0x10;
        uVar26 = (uVar26 - uVar15) - uVar20 ^ uVar15 >> 5;
        uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 3;
        uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 << 10;
        uVar15 = (uVar26 - uVar15) - uVar20 ^ uVar15 >> 0xf;
        if (local_98._8_4_ != local_64) {
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          iVar31 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar15) * 4);
          while (iVar31 != -1) {
            pFVar18 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar31 * 0x60);
            if ((*(int *)pFVar18 == iVar14) && (*(int *)(pFVar18 + 4) == iVar28)) {
              if ((iVar31 != -1) && (pFVar18 != (FScriptContainerElement *)0x0)) goto LAB_1480a5465;
              break;
            }
            iVar31 = *(int *)(pFVar18 + 0x58);
          }
        }
        local_110 = &local_180;
        TSet<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<TObjectKey<UTexture>_&&>_>
                  ((TSet<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    *)local_98,(uint)local_170,
                   (TKeyInitializer<TObjectKey<UTexture>_&&> *)(ulonglong)uVar15,(bool *)&local_110)
        ;
        pFVar18 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_170[0] * 0x60);
LAB_1480a5465:
        TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
        FindOrAddByHash<UMaterialInterface_*_const_&>
                  ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                    *)(pFVar18 + 8),uVar24 >> 0x10 ^ uVar24,&local_108,(bool *)0x0);
        ppUVar23 = ppUVar23 + 1;
        this = local_100;
      } while (ppUVar23 != ppUVar1);
    }
    if (local_b8.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.OwnedArray.AllocatorInstance.Data);
    }
  }
  if (local_148.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.ObjectArray.AllocatorInstance.Data);
  }
  this_00 = &this->TextureToMaterials;
  if ((TOptional<TMap<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>_>_>
       *)local_98 != this_00) {
    *(undefined4 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x48) = 0;
    pvVar4 = *(void **)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x40);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    TSet<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98);
    if ((*(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0xc) == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar5)();
      return pTVar11;
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1480a5550:
  pTVar11 = local_128;
  pUVar3 = local_130;
  pTVar19 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
             *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FObjectCacheContext::GetMaterialsAffectedByTexture'::__l2::
           _dynamic_atexit_destructor_for__EmptySet__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0xc) == -1) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar33)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar5)();
    return pTVar11;
  }
  pTVar22 = pTVar19;
  uVar24 = 0;
  if (pUVar3 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    local_f8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_f8);
    pTVar22 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
               *)((ulonglong)local_178 & 0xffffffff);
    uVar24 = local_178.ObjectSerialNumber;
  }
  uVar15 = (int)pTVar22 - uVar24 ^ uVar24 >> 0xd;
  uVar26 = (-0x61c88647 - uVar15) - uVar24 ^ uVar15 << 8;
  uVar20 = (uVar24 - uVar26) - uVar15 ^ uVar26 >> 0xd;
  uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 >> 0xc;
  uVar26 = (uVar26 - uVar15) - uVar20 ^ uVar15 << 0x10;
  uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 5;
  uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 >> 3;
  uVar26 = (uVar26 - uVar15) - uVar20 ^ uVar15 << 10;
  if (*(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 8) !=
      *(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x34)) {
    puVar21 = *(undefined1 **)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x40);
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x38);
    }
    iVar14 = *(int *)(puVar21 +
                     (ulonglong)
                     (*(int *)((longlong)&(this->TextureToMaterials).field0_0x0 + 0x48) - 1U &
                     ((uVar20 - uVar26) - uVar15 ^ uVar26 >> 0xf)) * 4);
    if (iVar14 != -1) {
      do {
        pTVar12 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                   *)((longlong)iVar14 * 0x60 + *(longlong *)&(this->TextureToMaterials).field0_0x0)
        ;
        if ((*(int *)&pTVar12->Elements == (int)pTVar22) &&
           (*(uint *)&(pTVar12->Elements).field_0x4 == uVar24)) {
          if (iVar14 != -1) goto LAB_1480a570e;
          break;
        }
        iVar14 = *(int *)&pTVar12[1].Elements.field_0x8;
      } while (iVar14 != -1);
    }
  }
  pTVar12 = pTVar19;
LAB_1480a570e:
  pTVar22 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
             *)&(pTVar12->Elements).field_0x8;
  if (pTVar12 ==
      (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *)0x0
     ) {
    pTVar22 = pTVar19;
  }
  pTVar19 = &EmptySet;
  if (pTVar22 !=
      (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *)0x0
     ) {
    pTVar19 = pTVar22;
  }
  pTVar13 = TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
            ::Array(pTVar19,&local_c8);
  TObjectCacheIterator<UMaterialInterface>::TObjectCacheIterator<UMaterialInterface>
            (pTVar11,pTVar13);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return pTVar11;
}

// GetMaterialsAffectedByTextureCollection @ 1480a57b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectCacheIterator<UMaterialInterface> * __thiscall
FObjectCacheContext::GetMaterialsAffectedByTextureCollection
          (FObjectCacheContext *this,
          TObjectCacheIterator<UMaterialInterface> *__return_storage_ptr__,
          UTextureCollection *param_1)

{
  TOptional<TMap<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>_>_>
  *this_00;
  UTextureCollection **ppUVar1;
  UMaterialInterface *pUVar2;
  UTextureCollection *pUVar3;
  void *pvVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  EInternalObjectFlags EVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  TObjectCacheIterator<UMaterialInterface> *pTVar11;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *pTVar12;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *pTVar19;
  uint uVar20;
  undefined1 *puVar21;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *pTVar22;
  UTextureCollection **ppUVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  int *piVar30;
  int iVar31;
  ForElementType<unsigned_int> FVar32;
  bool bVar33;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  int local_170 [2];
  uint local_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  undefined4 local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TObjectIterator<UMaterialInterface> local_148;
  UTextureCollection *local_130;
  TObjectCacheIterator<UMaterialInterface> *local_128;
  undefined4 local_120;
  int local_11c;
  UTextureCollection *local_118;
  FWeakObjectPtr *local_110;
  UMaterialInterface *local_108;
  FObjectCacheContext *local_100;
  UTextureCollection *local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_c8;
  TObjectCacheIterator<UTextureCollection> local_b8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar17 = 0;
  local_130 = param_1;
  local_128 = __return_storage_ptr__;
  local_100 = this;
  if (*(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0xc) != -1)
  goto LAB_1480a5e70;
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId999,"ComputeMaterialsAffectedByTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,999);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId999);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0x2000);
  for (lVar25 = 0x3f; 0x200fUL >> lVar25 == 0; lVar25 = lVar25 + -1) {
  }
  uVar24 = 1 << ((byte)lVar25 & 0x1f);
  local_120 = (undefined4)lVar25;
  if ((local_50 == 0) || ((int)local_50 < (int)uVar24)) {
    local_50 = uVar24;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar24 != 0) {
      uVar15 = uVar24;
      if (uVar24 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar15 = 0;
          goto LAB_1480a58ea;
        }
      }
      else {
LAB_1480a58ea:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar15,4);
      }
      if (0 < (int)uVar24) {
        uVar29 = (ulonglong)uVar24;
        uVar27 = uVar17;
        do {
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar9 = (longlong)(int)uVar24 - 1U & uVar27;
          uVar27 = uVar27 + 1;
          *(undefined4 *)(FVar16.Data + uVar9 * 4) = 0xffffffff;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
    }
    if (local_50 != 0) {
      pTStack_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_168 = 0;
      uStack_164 = 1;
      uStack_154 = 0;
      uStack_150 = 0;
      if (local_70 != 0) {
        FVar32 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar32 = local_78;
        }
        uVar24 = *(uint *)FVar32;
        uVar27 = uVar17;
        while (uVar24 == 0) {
          uStack_150 = (int)uVar27 + 0x20;
          uVar27 = (ulonglong)uStack_150;
          iVar14 = (int)uVar17;
          local_168 = iVar14 + 1;
          uVar17 = (ulonglong)local_168;
          if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < (int)local_168)
          goto LAB_1480a59f4;
          uVar24 = ((uint *)((longlong)FVar32 + 4))[iVar14];
        }
        uStack_164 = ~(uVar24 - 1) & uVar24;
        uVar17 = (ulonglong)uStack_164 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_11c = (int)lVar25;
        uStack_154 = local_11c + -1 + uStack_150;
        uVar17 = (ulonglong)uStack_154;
        if ((int)local_70 < (int)uStack_154) {
LAB_1480a59f4:
          uVar17 = (ulonglong)local_70;
          uStack_154 = local_70;
        }
      }
      local_158 = 0xffffffff;
      local_f0 = (longlong *)local_98;
      local_e8._padding_ = CONCAT44(uStack_164,local_168);
      local_e8.CurrentBitIndex = uStack_154;
      local_e8.UnvisitedBitMask = 0xffffffff;
      local_e8._28_4_ = uStack_14c;
      local_e8.BaseBitIndex = uStack_150;
      local_e8.Array = pTStack_160;
      if ((int)uVar17 < (int)local_70) {
        do {
          piVar30 = (int *)((longlong)(int)uVar17 * 0x60 + *local_f0);
          uVar24 = piVar30[1];
          uVar20 = *piVar30 - uVar24 ^ uVar24 >> 0xd;
          uVar15 = (-0x61c88647 - uVar20) - uVar24 ^ uVar20 << 8;
          uVar26 = (uVar24 - uVar15) - uVar20 ^ uVar15 >> 0xd;
          uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 0xc;
          uVar24 = (uVar15 - uVar20) - uVar26 ^ uVar20 << 0x10;
          uVar26 = (uVar26 - uVar24) - uVar20 ^ uVar24 >> 5;
          uVar15 = (uVar20 - uVar26) - uVar24 ^ uVar26 >> 3;
          uVar24 = (uVar24 - uVar15) - uVar26 ^ uVar15 << 10;
          uVar24 = ((uVar26 - uVar24) - uVar15 ^ uVar24 >> 0xf) & local_50 - 1;
          piVar30[0x17] = uVar24;
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar27 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar24;
          piVar30[0x16] = *(int *)(FVar16.Data + uVar27 * 4);
          *(int *)(FVar16.Data + uVar27 * 4) = (int)uVar17;
          local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
          uVar17 = (ulonglong)(uint)local_e8.CurrentBitIndex;
        } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
      }
    }
  }
  local_148.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ObjectArray.ArrayNum = 0;
  local_148.ObjectArray.ArrayMax = 0;
  local_148.Index = 0xffffffff;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  GetObjectsOfClass(pUVar10,&local_148.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|AsyncLoadingPhase2|Async|
                             AsyncLoadingPhase1|Garbage|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UMaterialInterface>::Advance(&local_148);
    lVar25 = (longlong)local_148.Index;
    if ((local_148.Index < 0) || (local_148.ObjectArray.ArrayNum <= local_148.Index)) break;
    uVar24 = 0;
    if (local_148.Index < local_148.ObjectArray.ArrayNum) {
      uVar24 = (uint)~local_148.Index >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar5)();
      return pTVar11;
    }
    pUVar2 = *(UMaterialInterface **)(local_148.ObjectArray.AllocatorInstance.Data + lVar25 * 8);
    local_108 = pUVar2;
    GetUsedTextureCollections(this,&local_b8,pUVar2);
    ppUVar1 = local_b8.ArrayView.DataPtr + local_b8.ArrayView.ArrayNum;
    if (local_b8.ArrayView.DataPtr != ppUVar1) {
      uVar24 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
               -0x7a143595;
      uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
      ppUVar23 = local_b8.ArrayView.DataPtr;
      do {
        pUVar3 = *ppUVar23;
        local_180.ObjectIndex = 0;
        local_180.ObjectSerialNumber = 0;
        uVar17 = 0;
        iVar14 = 0;
        iVar28 = 0;
        if (pUVar3 != (UTextureCollection *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          local_188.ObjectIndex = 0;
          local_188.ObjectSerialNumber = 0;
          local_118 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_118);
          uVar17 = (ulonglong)local_188 >> 0x20;
          iVar14 = local_188.ObjectIndex;
          local_180 = local_188;
          FVar6 = local_180;
          local_180.ObjectSerialNumber = local_188.ObjectSerialNumber;
          iVar28 = local_180.ObjectSerialNumber;
          local_180 = FVar6;
        }
        iVar31 = (int)uVar17;
        uVar20 = iVar14 - iVar31 ^ (uint)(uVar17 >> 0xd);
        uVar15 = (-0x61c88647 - iVar31) - uVar20 ^ uVar20 << 8;
        uVar26 = (iVar31 - uVar15) - uVar20 ^ uVar15 >> 0xd;
        uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 0xc;
        uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 << 0x10;
        uVar26 = (uVar26 - uVar15) - uVar20 ^ uVar15 >> 5;
        uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 3;
        uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 << 10;
        uVar15 = (uVar26 - uVar15) - uVar20 ^ uVar15 >> 0xf;
        if (local_98._8_4_ != local_64) {
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          iVar31 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar15) * 4);
          while (iVar31 != -1) {
            pFVar18 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar31 * 0x60);
            if ((*(int *)pFVar18 == iVar14) && (*(int *)(pFVar18 + 4) == iVar28)) {
              if ((iVar31 != -1) && (pFVar18 != (FScriptContainerElement *)0x0)) goto LAB_1480a5d85;
              break;
            }
            iVar31 = *(int *)(pFVar18 + 0x58);
          }
        }
        local_110 = &local_180;
        TSet<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<TObjectKey<UTextureCollection>_&&>_>
                  ((TSet<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    *)local_98,(uint)local_170,
                   (TKeyInitializer<TObjectKey<UTextureCollection>_&&> *)(ulonglong)uVar15,
                   (bool *)&local_110);
        pFVar18 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_170[0] * 0x60);
LAB_1480a5d85:
        TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
        FindOrAddByHash<UMaterialInterface_*_const_&>
                  ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                    *)(pFVar18 + 8),uVar24 >> 0x10 ^ uVar24,&local_108,(bool *)0x0);
        ppUVar23 = ppUVar23 + 1;
        this = local_100;
      } while (ppUVar23 != ppUVar1);
    }
    if (local_b8.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.OwnedArray.AllocatorInstance.Data);
    }
  }
  if (local_148.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.ObjectArray.AllocatorInstance.Data);
  }
  this_00 = &this->TextureCollectionToMaterials;
  if ((TOptional<TMap<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>_>_>
       *)local_98 != this_00) {
    *(undefined4 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x48) = 0;
    pvVar4 = *(void **)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x40);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    TSet<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98);
    if ((*(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0xc) == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar5)();
      return pTVar11;
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1480a5e70:
  pTVar11 = local_128;
  pUVar3 = local_130;
  pTVar19 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
             *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FObjectCacheContext::GetMaterialsAffectedByTextureCollection'::__l2::
           _dynamic_atexit_destructor_for__EmptySet__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0xc) == -1) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar33)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TObjectCacheIterator<UMaterialInterface> *)(*pcVar5)();
    return pTVar11;
  }
  pTVar22 = pTVar19;
  uVar24 = 0;
  if (pUVar3 != (UTextureCollection *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    local_f8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_f8);
    pTVar22 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
               *)((ulonglong)local_178 & 0xffffffff);
    uVar24 = local_178.ObjectSerialNumber;
  }
  uVar15 = (int)pTVar22 - uVar24 ^ uVar24 >> 0xd;
  uVar26 = (-0x61c88647 - uVar15) - uVar24 ^ uVar15 << 8;
  uVar20 = (uVar24 - uVar26) - uVar15 ^ uVar26 >> 0xd;
  uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 >> 0xc;
  uVar26 = (uVar26 - uVar15) - uVar20 ^ uVar15 << 0x10;
  uVar20 = (uVar20 - uVar26) - uVar15 ^ uVar26 >> 5;
  uVar15 = (uVar15 - uVar20) - uVar26 ^ uVar20 >> 3;
  uVar26 = (uVar26 - uVar15) - uVar20 ^ uVar15 << 10;
  if (*(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 8) !=
      *(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x34)) {
    puVar21 = *(undefined1 **)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x40);
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x38);
    }
    iVar14 = *(int *)(puVar21 +
                     (ulonglong)
                     (*(int *)((longlong)&(this->TextureCollectionToMaterials).field0_0x0 + 0x48) -
                      1U & ((uVar20 - uVar26) - uVar15 ^ uVar26 >> 0xf)) * 4);
    if (iVar14 != -1) {
      do {
        pTVar12 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                   *)((longlong)iVar14 * 0x60 +
                     *(longlong *)&(this->TextureCollectionToMaterials).field0_0x0);
        if ((*(int *)&pTVar12->Elements == (int)pTVar22) &&
           (*(uint *)&(pTVar12->Elements).field_0x4 == uVar24)) {
          if (iVar14 != -1) goto LAB_1480a602e;
          break;
        }
        iVar14 = *(int *)&pTVar12[1].Elements.field_0x8;
      } while (iVar14 != -1);
    }
  }
  pTVar12 = pTVar19;
LAB_1480a602e:
  pTVar22 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
             *)&(pTVar12->Elements).field_0x8;
  if (pTVar12 ==
      (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *)0x0
     ) {
    pTVar22 = pTVar19;
  }
  pTVar19 = &EmptySet;
  if (pTVar22 !=
      (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *)0x0
     ) {
    pTVar19 = pTVar22;
  }
  pTVar13 = TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
            ::Array(pTVar19,&local_c8);
  TObjectCacheIterator<UMaterialInterface>::TObjectCacheIterator<UMaterialInterface>
            (pTVar11,pTVar13);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return pTVar11;
}

// GetPrimitiveComponents @ 1480a8b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectCacheIterator<IPrimitiveComponent> * __thiscall
FObjectCacheContext::GetPrimitiveComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<IPrimitiveComponent> *__return_storage_ptr__)

{
  TOptional<TArray<IPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TObjectCacheIterator<IPrimitiveComponent> *pTVar7;
  bool bVar8;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  undefined4 uStack_34;
  TComponentInterfaceIterator<IPrimitiveComponent> local_30;
  
  if ((this->PrimitiveComponents).field0_0x0.TypedValue.ArrayMax == -1) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId676,"ComputePrimitiveComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
                 ,0x2a4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId676);
    }
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x1000,&local_50,0,(int *)((longlong)&local_48 + 4));
    TComponentInterfaceIterator<IPrimitiveComponent>::
    TComponentInterfaceIterator<IPrimitiveComponent>
              (&local_30,RF_ClassDefaultObject,true,
               Unreachable|AsyncLoadingPhase2|Async|AsyncLoadingPhase1|Garbage);
    for (; (iVar6 = local_30.Index, -1 < local_30.Index &&
           (local_30.Index < local_30.Interfaces.ArrayNum)); local_30.Index = local_30.Index + 1) {
      uVar5 = 0;
      if (local_30.Index < local_30.Interfaces.ArrayNum) {
        uVar5 = (uint)~local_30.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TObjectCacheIterator<IPrimitiveComponent> *)(*pcVar3)();
        return pTVar7;
      }
      local_58 = *(undefined8 *)(local_30.Interfaces.AllocatorInstance.Data + (longlong)iVar6 * 8);
      if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TObjectCacheIterator<IPrimitiveComponent> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_50,(int *)((longlong)&local_48 + 4));
      }
      local_48 = CONCAT44(local_48._4_4_,iVar6 + 1);
      *(undefined8 *)(local_50.Data + (longlong)iVar6 * 8) = local_58;
    }
    if (local_30.Interfaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Interfaces.AllocatorInstance.Data);
    }
    pTVar1 = &this->PrimitiveComponents;
    if ((TOptional<TArray<IPrimitiveComponent_*,TSizedDefaultAllocator<32>_>_> *)&local_50 != pTVar1
       ) {
      pFVar2 = (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      *(FScriptContainerElement **)&pTVar1->field0_0x0 = local_50.Data;
      (this->PrimitiveComponents).field0_0x0.TypedValue.ArrayNum = (int)local_48;
      iVar6 = local_48._4_4_;
      local_50.Data = (FScriptContainerElement *)0x0;
      (this->PrimitiveComponents).field0_0x0.TypedValue.ArrayMax = local_48._4_4_;
      local_48 = 0;
      if ((iVar6 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TObjectCacheIterator<IPrimitiveComponent> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this->PrimitiveComponents).field0_0x0.TypedValue.ArrayMax == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TObjectCacheIterator<IPrimitiveComponent> *)(*pcVar3)();
    return pTVar7;
  }
  local_40 = (this->PrimitiveComponents).field0_0x0.TypedValue.AllocatorInstance.Data;
  iVar6 = (this->PrimitiveComponents).field0_0x0.TypedValue.ArrayNum;
  if ((iVar6 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TObjectCacheIterator<IPrimitiveComponent> *)(*pcVar3)();
    return pTVar7;
  }
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = 0;
  (__return_storage_ptr__->OwnedArray).ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr = (IPrimitiveComponent **)local_40;
  *(ulonglong *)&(__return_storage_ptr__->ArrayView).ArrayNum = CONCAT44(uStack_34,iVar6);
  return __return_storage_ptr__;
}

// GetPrimitivesAffectedByMaterial @ 1480a8e50

TObjectCacheIterator<IPrimitiveComponent> * __thiscall
FObjectCacheContext::GetPrimitivesAffectedByMaterial
          (FObjectCacheContext *this,
          TObjectCacheIterator<IPrimitiveComponent> *__return_storage_ptr__,
          UMaterialInterface *param_1)

{
  UMaterialInterface *local_res10 [3];
  TArrayView<UMaterialInterface_*,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  GetPrimitivesAffectedByMaterials(this,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetPrimitivesAffectedByMaterials @ 1480a8ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectCacheIterator<IPrimitiveComponent> * __thiscall
FObjectCacheContext::GetPrimitivesAffectedByMaterials
          (FObjectCacheContext *this,
          TObjectCacheIterator<IPrimitiveComponent> *__return_storage_ptr__,
          TArrayView<UMaterialInterface_*,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<IPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TObjectCacheIterator<IPrimitiveComponent> *pTVar5;
  bool bVar6;
  undefined1 auStackY_d8 [32];
  TArrayView<UMaterialInterface_*,int> local_a8;
  TArray<IPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1117,"FObjectCacheContext::GetPrimitivesAffectedByMaterials"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x45d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1117);
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.ArrayNum = param_1->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  ObjectCacheContextImpl::GetPrimitivesAffectedByMaterials_Iteration
            (this,&local_a8,
             (TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>
              *)local_88);
  pTVar4 = TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>
           ::Array((TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>
                    *)local_88,&local_98);
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = pTVar4->ArrayNum;
  (__return_storage_ptr__->OwnedArray).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr =
       (IPrimitiveComponent **)(__return_storage_ptr__->OwnedArray).AllocatorInstance.Data;
  iVar1 = (__return_storage_ptr__->OwnedArray).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TObjectCacheIterator<IPrimitiveComponent> *)(*pcVar2)();
    return pTVar5;
  }
  (__return_storage_ptr__->ArrayView).ArrayNum = iVar1;
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetSkinnedMeshComponents @ 1480aaad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectCacheIterator<USkinnedMeshComponent> * __thiscall
FObjectCacheContext::GetSkinnedMeshComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<USkinnedMeshComponent> *__return_storage_ptr__,USkinnedAsset *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<USkinnedMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TObjectCacheIterator<USkinnedMeshComponent> *pTVar5;
  <lambda_1> local_res8;
  TArray<USkinnedMeshComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::
            GetSet<TObjectIterator<USkinnedMeshComponent>,_FObjectCacheContext::GetSkinnedMeshComponents_::__l2::<lambda_1>,_FObjectCacheContext::GetSkinnedMeshComponents_::__l2::<lambda_2>_>
                      (&this->SkinnedMeshCache,param_1,local_res8,(<lambda_2>)local_res8);
  pTVar4 = TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
           ::Array(this_00,&local_18);
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = pTVar4->ArrayNum;
  (__return_storage_ptr__->OwnedArray).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr =
       (USkinnedMeshComponent **)(__return_storage_ptr__->OwnedArray).AllocatorInstance.Data;
  iVar1 = (__return_storage_ptr__->OwnedArray).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectCacheIterator<USkinnedMeshComponent> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->ArrayView).ArrayNum = iVar1;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSkinnedMeshComponents @ 1480aab80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectCacheIterator<USkinnedMeshComponent> * __thiscall
FObjectCacheContext::GetSkinnedMeshComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<USkinnedMeshComponent> *__return_storage_ptr__)

{
  TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::
  Get<TObjectIterator<USkinnedMeshComponent>_>(&this->SkinnedMeshCache,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStaticMeshComponents @ 1480aabb0

TObjectCacheIterator<IStaticMeshComponent> * __thiscall
FObjectCacheContext::GetStaticMeshComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<IStaticMeshComponent> *__return_storage_ptr__,UStaticMesh *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<IStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TObjectCacheIterator<IStaticMeshComponent> *pTVar5;
  <lambda_1> local_res8;
  TArray<IStaticMeshComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::
            GetSet<TComponentInterfaceIterator<IStaticMeshComponent>,_FObjectCacheContext::GetStaticMeshComponents_::__l2::<lambda_1>,_FObjectCacheContext::GetStaticMeshComponents_::__l2::<lambda_2>_>
                      (&this->StaticMeshCache,param_1,local_res8,(<lambda_2>)local_res8);
  pTVar4 = TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
           ::Array(this_00,&local_18);
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = pTVar4->ArrayNum;
  (__return_storage_ptr__->OwnedArray).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr =
       (IStaticMeshComponent **)(__return_storage_ptr__->OwnedArray).AllocatorInstance.Data;
  iVar1 = (__return_storage_ptr__->OwnedArray).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectCacheIterator<IStaticMeshComponent> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->ArrayView).ArrayNum = iVar1;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStaticMeshComponents @ 1480aac60

TObjectCacheIterator<IStaticMeshComponent> * __thiscall
FObjectCacheContext::GetStaticMeshComponents
          (FObjectCacheContext *this,
          TObjectCacheIterator<IStaticMeshComponent> *__return_storage_ptr__)

{
  TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::
  Get<TComponentInterfaceIterator<IStaticMeshComponent>_>
            (&this->StaticMeshCache,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 1480ab360

TObjectCacheIterator<UMaterialInterface> * __thiscall
FObjectCacheContext::GetUsedMaterials
          (FObjectCacheContext *this,
          TObjectCacheIterator<UMaterialInterface> *__return_storage_ptr__,
          IPrimitiveComponent *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *this_00;
  uint uVar7;
  TKeyInitializer<IPrimitiveComponent_*_const_&> local_res8;
  IPrimitiveComponent **local_res10;
  IPrimitiveComponent *local_res18 [2];
  ulonglong *local_48;
  undefined8 local_40;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_res18[0] = param_1;
  if (*(int *)&(this->PrimitiveComponentToMaterial).field_0x8 !=
      *(int *)&(this->PrimitiveComponentToMaterial).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PrimitiveComponentToMaterial).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PrimitiveComponentToMaterial).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PrimitiveComponentToMaterial).field_0x48 - 1U &
                              (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)
                 ((longlong)iVar2 * 0x60 + *(longlong *)&this->PrimitiveComponentToMaterial);
        if ((IPrimitiveComponent *)*plVar3 == param_1) {
          this_00 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                     *)(plVar3 + 1);
          if (plVar3 == (longlong *)0x0) {
            this_00 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                       *)0x0;
          }
          if (this_00 !=
              (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
               *)0x0) goto LAB_1480ab4f1;
          break;
        }
        iVar2 = (int)plVar3[0xb];
      } while (iVar2 != -1);
    }
  }
  local_res10 = local_res18;
  TSet<TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<IPrimitiveComponent_*_const_&>_>
            ((TSet<TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  local_48 = (ulonglong *)0x0;
  local_40 = 0;
  this_00 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
             *)(*(longlong *)&this->PrimitiveComponentToMaterial +
               (longlong)(int)local_res8.Key * 0x60 + 8);
  (**(code **)((longlong)*local_res18[0] + 0x40))(local_res18[0],&local_48,1);
  iVar2 = (int)local_40;
  puVar1 = local_48 + (int)local_40;
  puVar6 = local_48;
  while( true ) {
    if ((int)local_40 != iVar2) {
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (puVar6 == puVar1) break;
    local_res8.Key = (IPrimitiveComponent **)*puVar6;
    if (local_res8.Key != (IPrimitiveComponent **)0x0) {
      uVar7 = ((uint)((ulonglong)local_res8.Key >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res8.Key >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
      FindOrAddByHash<UMaterialInterface_*_const_&>
                (this_00,uVar7 >> 0x10 ^ uVar7,(UMaterialInterface **)&local_res8,(bool *)0x0);
    }
    puVar6 = puVar6 + 1;
  }
  if (local_48 != (ulonglong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_1480ab4f1:
  pTVar4 = TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
           Array(this_00,&local_38);
  TObjectCacheIterator<UMaterialInterface>::TObjectCacheIterator<UMaterialInterface>
            (__return_storage_ptr__,pTVar4);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUsedTextureCollections @ 1480ab540

TObjectCacheIterator<UTextureCollection> * __thiscall
FObjectCacheContext::GetUsedTextureCollections
          (FObjectCacheContext *this,
          TObjectCacheIterator<UTextureCollection> *__return_storage_ptr__,
          UMaterialInterface *param_1)

{
  TMap<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  TArray<UTextureCollection_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TObjectCacheIterator<UTextureCollection> *pTVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator> *pTVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TKeyInitializer<TObjectKey<UMaterialInterface>_&&> local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UMaterialInterface *local_58;
  UMaterialInterface *local_50;
  FWeakObjectPtr *local_48;
  TArray<UTextureCollection_*,TSizedDefaultAllocator<32>_> local_40;
  
  this_00 = &this->MaterialUsedTextureCollections;
  pTVar9 = (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
            *)0x0;
  iVar13 = 0;
  if (param_1 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_58);
    pTVar9 = (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
              *)((ulonglong)local_res10 >> 0x20);
    iVar13 = local_res10.ObjectIndex;
  }
  iVar12 = (int)pTVar9;
  uVar7 = iVar13 - iVar12 ^ (uint)((ulonglong)pTVar9 >> 0xd);
  uVar6 = (-0x61c88647 - uVar7) - iVar12 ^ uVar7 << 8;
  uVar10 = (iVar12 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 10;
  if (*(int *)&(this->MaterialUsedTextureCollections).field_0x8 !=
      *(int *)&(this->MaterialUsedTextureCollections).field_0x34) {
    puVar8 = *(undefined1 **)&(this->MaterialUsedTextureCollections).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->MaterialUsedTextureCollections).field_0x38;
    }
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               (*(int *)&(this->MaterialUsedTextureCollections).field_0x48 - 1U &
                               ((uVar10 - uVar6) - uVar7 ^ uVar6 >> 0xf)) * 4);
    if (iVar11 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar11 * 0x60 + *(longlong *)&this_00->field_0x0);
        if ((*piVar3 == iVar13) && (piVar3[1] == iVar12)) {
          if (iVar11 != -1) {
            pTVar9 = (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
                      *)(piVar3 + 2);
            if (piVar3 == (int *)0x0) {
              pTVar9 = (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
                        *)0x0;
            }
            if (pTVar9 != (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
                           *)0x0) goto LAB_1480ab75b;
          }
          break;
        }
        iVar11 = piVar3[0x16];
      } while (iVar11 != -1);
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if (param_1 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_50 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_50);
    local_res20 = local_res18;
  }
  local_48 = &local_res20;
  TSet<TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TObjectKey<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_48);
  pTVar9 = (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
            *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)local_res8.Key * 0x60 + 8);
  ObjectCacheContextImpl::GetReferencedTextureCollections(param_1,pTVar9);
LAB_1480ab75b:
  pTVar4 = TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>::
           Array(pTVar9,&local_40);
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = pTVar4->ArrayNum;
  (__return_storage_ptr__->OwnedArray).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr =
       (UTextureCollection **)(__return_storage_ptr__->OwnedArray).AllocatorInstance.Data;
  iVar13 = (__return_storage_ptr__->OwnedArray).ArrayNum;
  if ((iVar13 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TObjectCacheIterator<UTextureCollection> *)(*pcVar1)();
    return pTVar5;
  }
  (__return_storage_ptr__->ArrayView).ArrayNum = iVar13;
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUsedTextures @ 1480ab7e0

TObjectCacheIterator<UTexture> * __thiscall
FObjectCacheContext::GetUsedTextures
          (FObjectCacheContext *this,TObjectCacheIterator<UTexture> *__return_storage_ptr__,
          UMaterialInterface *param_1)

{
  TMap<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TObjectCacheIterator<UTexture> *pTVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *pTVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TKeyInitializer<TObjectKey<UMaterialInterface>_&&> local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UMaterialInterface *local_58;
  UMaterialInterface *local_50;
  FWeakObjectPtr *local_48;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> local_40;
  
  this_00 = &this->MaterialUsedTextures;
  pTVar9 = (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)0x0;
  iVar13 = 0;
  if (param_1 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_58);
    pTVar9 = (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)
             ((ulonglong)local_res10 >> 0x20);
    iVar13 = local_res10.ObjectIndex;
  }
  iVar12 = (int)pTVar9;
  uVar7 = iVar13 - iVar12 ^ (uint)((ulonglong)pTVar9 >> 0xd);
  uVar6 = (-0x61c88647 - uVar7) - iVar12 ^ uVar7 << 8;
  uVar10 = (iVar12 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 10;
  if (*(int *)&(this->MaterialUsedTextures).field_0x8 !=
      *(int *)&(this->MaterialUsedTextures).field_0x34) {
    puVar8 = *(undefined1 **)&(this->MaterialUsedTextures).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->MaterialUsedTextures).field_0x38;
    }
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               (*(int *)&(this->MaterialUsedTextures).field_0x48 - 1U &
                               ((uVar10 - uVar6) - uVar7 ^ uVar6 >> 0xf)) * 4);
    if (iVar11 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar11 * 0x60 + *(longlong *)&this_00->field_0x0);
        if ((*piVar3 == iVar13) && (piVar3[1] == iVar12)) {
          if (iVar11 != -1) {
            pTVar9 = (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)
                     (piVar3 + 2);
            if (piVar3 == (int *)0x0) {
              pTVar9 = (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)0x0;
            }
            if (pTVar9 != (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)0x0
               ) goto LAB_1480ab9fb;
          }
          break;
        }
        iVar11 = piVar3[0x16];
      } while (iVar11 != -1);
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if (param_1 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_50 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_50);
    local_res20 = local_res18;
  }
  local_48 = &local_res20;
  TSet<TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TObjectKey<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_48);
  pTVar9 = (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)
           (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_res8.Key * 0x60 + 8);
  ObjectCacheContextImpl::GetReferencedTextures(param_1,pTVar9);
LAB_1480ab9fb:
  pTVar4 = TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>::Array
                     (pTVar9,&local_40);
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = pTVar4->ArrayNum;
  (__return_storage_ptr__->OwnedArray).ArrayMax = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr =
       (UTexture **)(__return_storage_ptr__->OwnedArray).AllocatorInstance.Data;
  iVar13 = (__return_storage_ptr__->OwnedArray).ArrayNum;
  if ((iVar13 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TObjectCacheIterator<UTexture> *)(*pcVar1)();
    return pTVar5;
  }
  (__return_storage_ptr__->ArrayView).ArrayNum = iVar13;
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

