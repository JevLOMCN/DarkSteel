// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 39

// StaticClass @ 14ab96f50

UClass * __cdecl UCustomizableInstancePrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableInstancePrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableInstancePrivate",
               &Z_Registration_Info_UClass_UCustomizableInstancePrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableInstancePrivate,0x538,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableInstancePrivate>,
               InternalVTableHelperCtorCaller<UCustomizableInstancePrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableInstancePrivate.InnerSingleton;
}

// UCustomizableInstancePrivate @ 14ab9fac0

UCustomizableInstancePrivate * __thiscall
UCustomizableInstancePrivate::UCustomizableInstancePrivate
          (UCustomizableInstancePrivate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableInstancePrivate__6B_;
  *(undefined8 *)&this->SkeletalMeshes = 0;
  *(undefined8 *)&(this->SkeletalMeshes).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletalMeshes).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletalMeshes).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x48 = 0;
  (this->GeneratedMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedMaterials).ArrayNum = 0;
  (this->GeneratedMaterials).ArrayMax = 0;
  (this->GeneratedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedTextures).ArrayNum = 0;
  (this->GeneratedTextures).ArrayMax = 0;
  (this->RelevantParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantParameters).ArrayNum = 0;
  (this->RelevantParameters).ArrayMax = 0;
  *(undefined8 *)&this->TextureReuseCache = 0;
  *(undefined8 *)&(this->TextureReuseCache).field_0x8 = 0;
  *(undefined8 *)&(this->TextureReuseCache).field_0x20 = 0;
  *(undefined4 *)&(this->TextureReuseCache).field_0x28 = 0;
  *(undefined4 *)&(this->TextureReuseCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureReuseCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureReuseCache).field_0x34 = 0;
  *(undefined8 *)&(this->TextureReuseCache).field_0x40 = 0;
  *(undefined4 *)&(this->TextureReuseCache).field_0x48 = 0;
  (this->ComponentsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsData).ArrayNum = 0;
  (this->ComponentsData).ArrayMax = 0;
  (this->ReferencedMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedMaterials).ArrayNum = 0;
  (this->ReferencedMaterials).ArrayMax = 0;
  *(undefined8 *)&this->ObjectToInstanceIndexMap = 0;
  *(undefined8 *)&(this->ObjectToInstanceIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToInstanceIndexMap).field_0x20 = 0;
  this->LiveUpdateModeInstanceID = 0;
  this->MinSquareDistFromComponentToPlayer = 3.4028235e+38;
  this->LastMinSquareDistFromComponentToPlayer = 3.4028235e+38;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToInstanceIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x48 = 0;
  (this->ClothingPhysicsAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothingPhysicsAssets).ArrayNum = 0;
  (this->ClothingPhysicsAssets).ArrayMax = 0;
  (this->GatheredAnimBPs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatheredAnimBPs).ArrayNum = 0;
  (this->GatheredAnimBPs).ArrayMax = 0;
  (this->AnimBPGameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBPGameplayTags).GameplayTags.ArrayNum = 0;
  (this->AnimBPGameplayTags).GameplayTags.ArrayMax = 0;
  (this->AnimBPGameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBPGameplayTags).ParentTags.ArrayNum = 0;
  (this->AnimBPGameplayTags).ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->AnimBpPhysicsAssets = 0;
  *(undefined8 *)&(this->AnimBpPhysicsAssets).field_0x8 = 0;
  *(undefined8 *)&(this->AnimBpPhysicsAssets).field_0x20 = 0;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x28 = 0;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x34 = 0;
  *(undefined8 *)&(this->AnimBpPhysicsAssets).field_0x40 = 0;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x48 = 0;
  (this->ExtensionInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtensionInstanceData).ArrayNum = 0;
  (this->ExtensionInstanceData).ArrayMax = 0;
  (this->PassThroughTexturesToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughTexturesToLoad).ArrayNum = 0;
  (this->PassThroughTexturesToLoad).ArrayMax = 0;
  (this->PassThroughMeshesToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughMeshesToLoad).ArrayNum = 0;
  (this->PassThroughMeshesToLoad).ArrayMax = 0;
  this->InstanceFlagsPrivate = ECONone;
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor
            (&this->CommittedDescriptor);
  FDescriptorHash::FDescriptorHash(&this->CommittedDescriptorHash);
  this->SkeletalMeshStatus = NotGenerated;
  *(undefined8 *)&this->ParamNameToExpandedMap = 0;
  *(undefined8 *)&(this->ParamNameToExpandedMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParamNameToExpandedMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x34 = 0;
  *(undefined8 *)&(this->ParamNameToExpandedMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x48 = 0;
  this->bShowOnlyRuntimeParameters = true;
  this->bShowOnlyRelevantParameters = true;
  this->bShowUISections = false;
  this->bShowUIThumbnails = false;
  this->bAutomaticUpdateRequired = false;
  (this->NearestToActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NearestToViewCenter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UCustomizableInstancePrivate @ 14ab9fd30

UCustomizableInstancePrivate * __thiscall
UCustomizableInstancePrivate::UCustomizableInstancePrivate
          (UCustomizableInstancePrivate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableInstancePrivate__6B_;
  *(undefined8 *)&this->SkeletalMeshes = 0;
  *(undefined8 *)&(this->SkeletalMeshes).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletalMeshes).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletalMeshes).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletalMeshes).field_0x48 = 0;
  (this->GeneratedMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedMaterials).ArrayNum = 0;
  (this->GeneratedMaterials).ArrayMax = 0;
  (this->GeneratedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedTextures).ArrayNum = 0;
  (this->GeneratedTextures).ArrayMax = 0;
  (this->RelevantParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantParameters).ArrayNum = 0;
  (this->RelevantParameters).ArrayMax = 0;
  *(undefined8 *)&this->TextureReuseCache = 0;
  *(undefined8 *)&(this->TextureReuseCache).field_0x8 = 0;
  *(undefined8 *)&(this->TextureReuseCache).field_0x20 = 0;
  *(undefined4 *)&(this->TextureReuseCache).field_0x28 = 0;
  *(undefined4 *)&(this->TextureReuseCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureReuseCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureReuseCache).field_0x34 = 0;
  *(undefined8 *)&(this->TextureReuseCache).field_0x40 = 0;
  *(undefined4 *)&(this->TextureReuseCache).field_0x48 = 0;
  (this->ComponentsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsData).ArrayNum = 0;
  (this->ComponentsData).ArrayMax = 0;
  (this->ReferencedMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedMaterials).ArrayNum = 0;
  (this->ReferencedMaterials).ArrayMax = 0;
  *(undefined8 *)&this->ObjectToInstanceIndexMap = 0;
  *(undefined8 *)&(this->ObjectToInstanceIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToInstanceIndexMap).field_0x20 = 0;
  this->LiveUpdateModeInstanceID = 0;
  this->MinSquareDistFromComponentToPlayer = 3.4028235e+38;
  this->LastMinSquareDistFromComponentToPlayer = 3.4028235e+38;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToInstanceIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x48 = 0;
  (this->ClothingPhysicsAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothingPhysicsAssets).ArrayNum = 0;
  (this->ClothingPhysicsAssets).ArrayMax = 0;
  (this->GatheredAnimBPs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatheredAnimBPs).ArrayNum = 0;
  (this->GatheredAnimBPs).ArrayMax = 0;
  (this->AnimBPGameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBPGameplayTags).GameplayTags.ArrayNum = 0;
  (this->AnimBPGameplayTags).GameplayTags.ArrayMax = 0;
  (this->AnimBPGameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBPGameplayTags).ParentTags.ArrayNum = 0;
  (this->AnimBPGameplayTags).ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->AnimBpPhysicsAssets = 0;
  *(undefined8 *)&(this->AnimBpPhysicsAssets).field_0x8 = 0;
  *(undefined8 *)&(this->AnimBpPhysicsAssets).field_0x20 = 0;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x28 = 0;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x34 = 0;
  *(undefined8 *)&(this->AnimBpPhysicsAssets).field_0x40 = 0;
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x48 = 0;
  (this->ExtensionInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtensionInstanceData).ArrayNum = 0;
  (this->ExtensionInstanceData).ArrayMax = 0;
  (this->PassThroughTexturesToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughTexturesToLoad).ArrayNum = 0;
  (this->PassThroughTexturesToLoad).ArrayMax = 0;
  (this->PassThroughMeshesToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughMeshesToLoad).ArrayNum = 0;
  (this->PassThroughMeshesToLoad).ArrayMax = 0;
  this->InstanceFlagsPrivate = ECONone;
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor
            (&this->CommittedDescriptor);
  FDescriptorHash::FDescriptorHash(&this->CommittedDescriptorHash);
  this->SkeletalMeshStatus = NotGenerated;
  *(undefined8 *)&this->ParamNameToExpandedMap = 0;
  *(undefined8 *)&(this->ParamNameToExpandedMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParamNameToExpandedMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x34 = 0;
  *(undefined8 *)&(this->ParamNameToExpandedMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x48 = 0;
  this->bShowOnlyRuntimeParameters = true;
  this->bShowOnlyRelevantParameters = true;
  this->bShowUISections = false;
  this->bShowUIThumbnails = false;
  this->bAutomaticUpdateRequired = false;
  (this->NearestToActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NearestToViewCenter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UCustomizableInstancePrivate @ 14aba2700

void __thiscall
UCustomizableInstancePrivate::~UCustomizableInstancePrivate(UCustomizableInstancePrivate *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UCustomizableInstancePrivate__6B_;
  *(undefined4 *)&(this->ParamNameToExpandedMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParamNameToExpandedMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParamNameToExpandedMap);
  FDescriptorHash::~FDescriptorHash(&this->CommittedDescriptorHash);
  FCustomizableObjectInstanceDescriptor::~FCustomizableObjectInstanceDescriptor
            (&this->CommittedDescriptor);
  DestructItems<TSoftObjectPtr<UStreamableRenderAsset_const_>,int>
            ((TSoftObjectPtr<UStreamableRenderAsset_const_> *)
             (this->PassThroughMeshesToLoad).AllocatorInstance.Data,
             (this->PassThroughMeshesToLoad).ArrayNum);
  pFVar2 = (this->PassThroughMeshesToLoad).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSoftObjectPtr<UTexture_const_>,int>
            ((TSoftObjectPtr<UTexture_const_> *)
             (this->PassThroughTexturesToLoad).AllocatorInstance.Data,
             (this->PassThroughTexturesToLoad).ArrayNum);
  pFVar2 = (this->PassThroughTexturesToLoad).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FExtensionInstanceData,int>
            ((FExtensionInstanceData *)(this->ExtensionInstanceData).AllocatorInstance.Data,
             (this->ExtensionInstanceData).ArrayNum);
  pFVar2 = (this->ExtensionInstanceData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AnimBpPhysicsAssets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnimBpPhysicsAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnimBpPhysicsAssets);
  pFVar2 = (this->AnimBPGameplayTags).ParentTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AnimBPGameplayTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GatheredAnimBPs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ClothingPhysicsAssets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ObjectToInstanceIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToInstanceIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToInstanceIndexMap);
  pFVar2 = (this->ReferencedMaterials).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCustomizableInstanceComponentData,int>
            ((FCustomizableInstanceComponentData *)(this->ComponentsData).AllocatorInstance.Data,
             (this->ComponentsData).ArrayNum);
  pFVar2 = (this->ComponentsData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->TextureReuseCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextureReuseCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureReuseCache);
  pFVar2 = (this->RelevantParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGeneratedTexture,int>
            ((FGeneratedTexture *)(this->GeneratedTextures).AllocatorInstance.Data,
             (this->GeneratedTextures).ArrayNum);
  pFVar2 = (this->GeneratedTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGeneratedMaterial,int>
            ((FGeneratedMaterial *)(this->GeneratedMaterials).AllocatorInstance.Data,
             (this->GeneratedMaterials).ArrayNum);
  pFVar2 = (this->GeneratedMaterials).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->SkeletalMeshes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkeletalMeshes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletalMeshes);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14aba5330

UClass * __cdecl UCustomizableInstancePrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableInstancePrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableInstancePrivate",
               &Z_Registration_Info_UClass_UCustomizableInstancePrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableInstancePrivate,0x538,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableInstancePrivate>,
               InternalVTableHelperCtorCaller<UCustomizableInstancePrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableInstancePrivate.InnerSingleton;
}

// StaticRegisterNativesUCustomizableInstancePrivate @ 14aba6950

void __cdecl UCustomizableInstancePrivate::StaticRegisterNativesUCustomizableInstancePrivate(void)

{
  return;
}

// BuildMaterials @ 14abc6460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCustomizableInstancePrivate::BuildMaterials
          (UCustomizableInstancePrivate *this,TSharedRef<FUpdateContextPrivate,1> *param_1,
          UCustomizableObjectInstance *param_2)

{
  atomic<int> *paVar1;
  FMutableMaterialPlaceHolderParam *pFVar2;
  int *piVar3;
  TObjectPtr<UMaterialInterface> *this_00;
  FWindowsRecursiveMutex *pFVar4;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> aVar7;
  FScriptContainerElement FVar8;
  ushort uVar9;
  undefined2 uVar10;
  FCustomizableObjectComponentIndex FVar11;
  EPlaceHolderParamType EVar12;
  UCustomizableObject *pUVar13;
  undefined8 uVar14;
  UTexture *pUVar15;
  UCustomizableObjectInstanceUsage *this_01;
  code *pcVar16;
  float fVar17;
  FGeneratedTexture *pFVar18;
  undefined8 uVar19;
  float fVar20;
  FObjectPtr_u_0 FVar21;
  UCustomizableInstancePrivate *pUVar22;
  FMutableModelImageProperties *pFVar23;
  UCustomizableObjectInstance *pUVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  EPixelFormat EVar30;
  bool bVar31;
  byte bVar32;
  bool bVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  atomic<int> aVar38;
  int iVar39;
  UCustomizableObjectPrivate *pUVar40;
  FString *pFVar41;
  FMutableUpdateImageContext *pFVar42;
  UCustomizableObjectSystem *this_02;
  UCustomizableObjectSystemPrivate *pUVar43;
  TSharedPtr<FModelStreamableBulkData,1> *pTVar44;
  FCustomizableObjectInstanceDescriptor *pFVar45;
  FObjectPtr *pFVar46;
  longlong lVar47;
  FCustomizableInstanceComponentData *pFVar48;
  FMaterial *pFVar49;
  uint *puVar50;
  UMaterialInterface *pUVar51;
  byte *pbVar52;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *this_03;
  longlong lVar53;
  FScriptContainerElement *pFVar54;
  UMaterial *pUVar55;
  FMesh *pFVar56;
  FMutableMeshMetadata *pFVar57;
  FMutableSurfaceMetadata *pFVar58;
  FName *pFVar59;
  UTexture2D *pUVar60;
  UTexture2D *pUVar61;
  UClass *pUVar62;
  FEntry *pFVar63;
  UObject *pUVar64;
  FTexturePlatformData **ppFVar65;
  FTexturePlatformData *pFVar66;
  FTexturePlatformData *pFVar67;
  long64 lVar68;
  UPackage *pUVar69;
  UMaterialInstanceDynamic *this_04;
  longlong lVar70;
  longlong *plVar71;
  undefined8 *puVar72;
  UCustomizableObjectInstance *pUVar73;
  USkeletalMeshComponent *this_05;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar74;
  USkeletalMesh *pUVar75;
  FStreamingManagerCollection *pFVar76;
  ForAnyElementType FVar77;
  FWeakObjectPtr *pFVar78;
  TReferenceControllerBase<1> *pTVar79;
  FGeneratedMaterial *pFVar80;
  UMaterialInstanceDynamic *pUVar81;
  int iVar82;
  wchar_t *pwVar83;
  uint uVar84;
  FUpdateContextPrivate *pFVar85;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *this_06;
  FScriptContainerElement *pFVar86;
  FScriptContainerElement *pFVar87;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar88;
  ulonglong uVar89;
  UModelResources *pUVar90;
  uint uVar91;
  int iVar92;
  ForElementType<FSetElementId> FVar93;
  TSharedRef<FUpdateContextPrivate,1> *pTVar94;
  FMutableMaterialPlaceHolderParam *pFVar95;
  FName *pFVar96;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar97;
  ulonglong uVar98;
  ulonglong uVar99;
  UMaterialInterface *pUVar100;
  bool bVar101;
  double dVar102;
  float fVar103;
  undefined1 auStackY_ae8 [32];
  char local_a94;
  FMutableMaterialPlaceholder local_a90;
  uint local_a78;
  FWeakObjectPtr *local_a70;
  FObjectPtr_u_0 local_a68;
  uint local_a60;
  uint local_a5c;
  FTexturePlatformData *local_a58;
  uint local_a50;
  TSharedRef<FUpdateContextPrivate,1> *local_a48;
  bool local_a40;
  bool local_a3f;
  undefined1 local_a3e;
  undefined1 local_a3d;
  uint local_a3c;
  uint local_a38;
  UTexture2D *local_a30;
  int local_a28;
  int local_a24;
  ulonglong local_a20;
  UModelResources *local_a18;
  UCustomizableInstancePrivate *local_a10;
  FScriptContainerElement *local_a08;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> local_a00;
  ForAnyElementType local_9e8;
  undefined8 uStack_9e0;
  int local_9d8 [2];
  longlong local_9d0;
  FName *local_9c8;
  ForAnyElementType local_9c0;
  undefined8 local_9b8;
  uint local_9ac;
  longlong local_9a8;
  FScriptContainerElement *local_9a0;
  TSharedPtr<FMutableUpdateImageContext,1> local_998;
  UCustomizableObjectInstanceUsage *local_988;
  undefined1 local_980 [16];
  undefined8 local_970;
  FTextureReuseCacheKey local_968;
  FMutableModelImageProperties *local_958;
  TArray<bool,TSizedDefaultAllocator<32>_> local_950;
  FString local_940;
  uint local_930 [2];
  UMaterial *local_928;
  UObject *local_920;
  longlong local_918;
  FScriptContainerElement *local_910;
  FGeneratedMaterial *local_908;
  undefined8 uStack_900;
  longlong local_8f8;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_8f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_8e8;
  FName local_8d8;
  FName local_8d0;
  FScriptContainerElement *local_8c8;
  FScriptContainerElement *local_8c0;
  FId local_8b8;
  uint local_898 [2];
  FWeakObjectPtr local_890;
  UCustomizableObject *local_888;
  FScriptContainerElement *local_880;
  uint local_878 [2];
  ulonglong local_870;
  FString local_868;
  FString local_858;
  FTexturePlatformData *local_848;
  FSharedReferencer<1> FStack_840;
  FWeakObjectPtr local_838;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_830;
  FSharedReferencer<1> local_828;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_820;
  FSharedReferencer<1> local_818;
  FParameters *local_810;
  FSharedReferencer<1> local_808;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_800;
  TReferenceControllerBase<1> *local_7f8;
  FString local_7f0;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_7e0;
  TReferenceControllerBase<1> *local_7d8;
  FString local_7d0;
  FMutableUpdateImageContext *local_7b8;
  TReferenceControllerBase<1> *pTStack_7b0;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_7a8;
  FSharedReferencer<1> local_7a0;
  TArray<FGeneratedMaterial,TSizedDefaultAllocator<32>_> *local_798;
  undefined8 local_790;
  FCustomizableInstanceComponentData *local_788;
  UCustomizableObjectInstance *local_780;
  FName local_778;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FTexturePlatformData *local_730;
  FSharedReferencer<1> local_728 [2];
  TSharedRef<FTexturePlatformData,1> local_718;
  FWeakObjectPtr *local_708;
  FSharedReferencer<1> local_700;
  FString local_6f8;
  FUpdateTextureRegion2D local_6e8;
  FUnrealMutableResourceProvider *local_6d0;
  TReferenceControllerBase<1> *pTStack_6c8;
  FString local_6c0;
  FString local_6b0;
  longlong *local_698;
  undefined1 auStack_690 [16];
  uint uStack_680;
  int iStack_67c;
  longlong local_678;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_670;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_668;
  undefined2 local_660;
  longlong local_658;
  TReferenceControllerBase<1> *pTStack_650;
  FSystem *local_648;
  TReferenceControllerBase<1> *pTStack_640;
  FMemoryImageMaterialParameterInfo local_638;
  undefined4 local_624;
  int local_620;
  undefined1 local_61c [8];
  undefined1 local_614 [20];
  FObjectPtr_u_0 local_600;
  FCustomizableObjectInstanceDescriptor *local_5f8;
  UClass *local_5f0;
  UTexture2D *local_5e8;
  UTexture2D *local_5e0;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  UTexture2D *local_5c0;
  TObjectIterator<UCustomizableObjectInstanceUsage> local_5b8;
  UTexture2D *local_5a0;
  undefined1 local_598 [12];
  uint local_58c;
  longlong local_588;
  uint local_580;
  int local_57c;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_570;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_568;
  bool local_560;
  bool local_55f;
  FName local_558;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  undefined1 local_4f8 [16];
  FString local_4e8;
  FString local_4d8;
  FMaterialParameterInfo local_4c8;
  FMaterialParameterInfo local_4b8;
  FMaterialParameterInfo local_4a8;
  FMutableMaterialPlaceHolderParam local_498;
  FMutableMaterialPlaceHolderParam local_458;
  FMutableMaterialPlaceHolderParam local_418;
  FMutableMaterialPlaceHolderParam local_3d8;
  FMutableMaterialPlaceHolderParam local_398;
  FMutableMaterialPlaceHolderParam local_358;
  FId *local_318;
  FWeakObjectPtr *local_310;
  FTextureReuseCacheKey *local_308;
  FWeakObjectPtr *local_300;
  FName local_2f8;
  undefined1 local_2f0;
  undefined4 local_2ec;
  FLinearColor_u_0 local_2e8;
  TPersistentObjectPtr<FSoftObjectPath> local_2d8;
  FWindowsRecursiveMutex *local_2b0;
  UCustomizableObjectInstanceUsage *local_2a8;
  FWindowsRecursiveMutex *local_2a0;
  FName local_298;
  FName local_290;
  FString local_288;
  TSharedPtr<FModelStreamableBulkData,1> local_278;
  FString local_268;
  FScriptContainerElement *local_258;
  uint local_250;
  FScriptContainerElement *local_248;
  uint local_240;
  FString local_238;
  FString local_228;
  FLinearColor_u_0 local_218;
  FLinearColor_u_0 local_208;
  undefined8 local_1f8;
  FName local_1f0;
  FName local_1e8;
  FString local_1e0;
  undefined1 local_1d0 [32];
  longlong local_1b0;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong local_180;
  longlong lStack_178;
  FSystem *local_170;
  TReferenceControllerBase<1> *pTStack_168;
  FUnrealMutableResourceProvider *local_160;
  TReferenceControllerBase<1> *pTStack_158;
  undefined1 local_148 [128];
  TSet<FMutableMaterialPlaceholder,DefaultKeyFuncs<FMutableMaterialPlaceholder,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_ae8;
  bVar101 = -1 < CpuChannel->Enabled;
  local_a48 = param_1;
  local_a10 = this;
  local_780 = param_2;
  if (bVar101) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5808,"Mutable_UCustomizableInstancePrivate::BuildMaterials",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x16b0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5808);
  }
  local_5f8 = &param_2->Descriptor;
  pUVar13 = (local_5f8->CustomizableObject).field0_0x0.DebugPtr;
  local_888 = pUVar13;
  pUVar40 = UCustomizableObject::GetPrivate(pUVar13);
  pUVar90 = (pUVar40->ModelResources).field0_0x0.DebugPtr;
  local_798 = &this->GeneratedMaterials;
  local_9e8.Data = (FScriptContainerElement *)0x0;
  uStack_9e0 = 0;
  local_908 = (FGeneratedMaterial *)(this->GeneratedMaterials).AllocatorInstance.Data;
  uStack_900._0_4_ = (this->GeneratedMaterials).ArrayNum;
  uStack_900._4_4_ = (this->GeneratedMaterials).ArrayMax;
  (this->GeneratedMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedMaterials).ArrayNum = 0;
  (this->GeneratedMaterials).ArrayMax = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_a18 = pUVar90;
  pTStack_7b0 = ::operator_new(0xe8);
  if (pTStack_7b0 == (TReferenceControllerBase<1> *)0x0) {
    local_7b8 = ___xmm_00000000000000000000000000000010;
    pTStack_7b0 = _UNK_150651568;
  }
  else {
    pTStack_7b0->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_7b0->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_7b0->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMutableUpdateImageContext___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTStack_7b0[2]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&pTStack_7b0[2]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pTStack_7b0[2]._padding_ + 7) = 0;
    *(undefined4 *)((longlong)&pTStack_7b0[0xd]._padding_ + 4) = 0;
    pTStack_7b0[1]._padding_ = 0;
    pTStack_7b0[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_7b0[2]._padding_ = 0;
    local_7b8 = (FMutableUpdateImageContext *)(pTStack_7b0 + 1);
    pTStack_7b0[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[2].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[3]._padding_ = 0;
    pTStack_7b0[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[4]._padding_ = 0;
    pTStack_7b0[4].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[4].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[5]._padding_ = 0;
    pTStack_7b0[5].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[5].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[6]._padding_ = 0;
    pTStack_7b0[6].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[6].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[7]._padding_ = 0;
    pTStack_7b0[7].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[7].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[8]._padding_ = 0;
    pTStack_7b0[8].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[8].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[9]._padding_ = 0;
    pTStack_7b0[9].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[9].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[10]._padding_ = 0;
    pTStack_7b0[10].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[10].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[0xb]._padding_ = 0;
    pTStack_7b0[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[0xc]._padding_ = 0;
    pTStack_7b0[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_7b0[0xd]._padding_ = 0xffffffff;
    pTStack_7b0[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_7b0[0xe]._padding_ = 0;
    if ((local_7b8 == (FMutableUpdateImageContext *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar25)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  local_998.Object = local_7b8;
  local_998.SharedReferenceCount.ReferenceController = pTStack_7b0;
  if (pTStack_7b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_7b0->SharedReferenceCount = (atomic<int>)((int)pTStack_7b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7b0);
  pFVar41 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar13,&local_1e0,(UObject *)0x0)
  ;
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  ::FString::operator=(&pFVar42->CustomizableObjectPathName,pFVar41);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  pFVar41 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_288,(UObject *)0x0)
  ;
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  ::FString::operator=(&pFVar42->InstancePathName,pFVar41);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  this_02 = UCustomizableObjectSystem::GetInstance();
  pUVar43 = UCustomizableObjectSystem::GetPrivate(this_02);
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  local_170 = (pUVar43->MutableSystem).Object;
  pTStack_168 = (pUVar43->MutableSystem).SharedReferenceCount.ReferenceController;
  if (pTStack_168 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_168->SharedReferenceCount = (atomic<int>)((int)pTStack_168->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_648 = (pFVar42->System).Object;
  pTStack_640 = (pFVar42->System).SharedReferenceCount.ReferenceController;
  (pFVar42->System).Object = local_170;
  (pFVar42->System).SharedReferenceCount.ReferenceController = pTStack_168;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_640);
  pFVar85 = param_1->Object;
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  TSharedPtr<UE::Mutable::Private::FModel,1>::operator=(&pFVar42->Model,&pFVar85->Model);
  pUVar40 = UCustomizableObject::GetPrivate(pUVar13);
  local_7a8 = (pUVar40->MeshIdRegistry).Object;
  local_7a0.ReferenceController = (pUVar40->MeshIdRegistry).SharedReferenceCount.ReferenceController
  ;
  if (local_7a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  if (&pFVar42->MeshIdRegistry !=
      (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
       *)&local_7a8) {
    (pFVar42->MeshIdRegistry).Object = local_7a8;
    local_7a8 = (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar42->MeshIdRegistry).SharedReferenceCount,&local_7a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a0.ReferenceController);
  pUVar40 = UCustomizableObject::GetPrivate(pUVar13);
  local_830 = (pUVar40->ImageIdRegistry).Object;
  local_828.ReferenceController =
       (pUVar40->ImageIdRegistry).SharedReferenceCount.ReferenceController;
  if (local_828.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_828.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_828.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  if (&pFVar42->ImageIdRegistry !=
      (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
       *)&local_830) {
    (pFVar42->ImageIdRegistry).Object = local_830;
    local_830 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar42->ImageIdRegistry).SharedReferenceCount,&local_828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_828.ReferenceController);
  pUVar40 = UCustomizableObject::GetPrivate(pUVar13);
  local_820 = (pUVar40->MaterialIdRegistry).Object;
  local_818.ReferenceController =
       (pUVar40->MaterialIdRegistry).SharedReferenceCount.ReferenceController;
  if (local_818.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_818.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_818.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  if (&pFVar42->MaterialIdRegistry !=
      (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
       *)&local_820) {
    (pFVar42->MaterialIdRegistry).Object = local_820;
    local_820 = (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar42->MaterialIdRegistry).SharedReferenceCount,&local_818);
  }
  pFVar85 = param_1->Object;
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  local_160 = (pFVar85->ExternalResourceProvider).Object;
  pTStack_158 = (pFVar85->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  if (pTStack_158 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_158->SharedReferenceCount = (atomic<int>)((int)pTStack_158->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6d0 = (pFVar42->ExternalResourceProvider).Object;
  pTStack_6c8 = (pFVar42->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  (pFVar42->ExternalResourceProvider).Object = local_160;
  (pFVar42->ExternalResourceProvider).SharedReferenceCount.ReferenceController = pTStack_158;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_818.ReferenceController);
  pUVar40 = UCustomizableObject::GetPrivate(pUVar13);
  pTVar44 = UCustomizableObjectPrivate::GetModelStreamableBulkData(pUVar40,&local_278,false);
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  TSharedPtr<FModelStreamableBulkData,1>::operator=(&pFVar42->ModelStreamableBulkData,pTVar44);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  local_810 = (param_1->Object->Parameters).Object;
  local_808.ReferenceController =
       (param_1->Object->Parameters).SharedReferenceCount.ReferenceController;
  if (local_808.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_808.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_808.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  if (&pFVar42->Parameters != (TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *)&local_810)
  {
    (pFVar42->Parameters).Object = local_810;
    local_810 = (FParameters *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar42->Parameters).SharedReferenceCount,&local_808);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808.ReferenceController);
  pFVar45 = FUpdateContextPrivate::GetCapturedDescriptor(param_1->Object);
  iVar34 = FCustomizableObjectInstanceDescriptor::GetState(pFVar45);
  pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
  pFVar42->State = iVar34;
  bVar25 = FLogBenchmarkUtil::IsBenchmarkingReportingEnabled();
  if (bVar25) {
    pFVar45 = FUpdateContextPrivate::GetCapturedDescriptor(param_1->Object);
    pFVar41 = FCustomizableObjectInstanceDescriptor::ToString(pFVar45,&local_268);
    pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
    ::FString::operator=(&pFVar42->CapturedDescriptor,pFVar41);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (GWorld.World != (UWorld *)0x0) {
      bVar25 = UWorld::GetBegunPlay(GWorld.World);
      pFVar42 = TSharedPtr<FMutableUpdateImageContext,1>::operator->(&local_998);
      pFVar42->bLevelBegunPlay = bVar25;
    }
  }
  pFVar85 = param_1->Object;
  if (pFVar85->bBake == false) {
    local_a94 = pFVar85->bReuseInstanceTextures;
  }
  else {
    local_a94 = '\0';
  }
  local_950.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_950.ArrayNum = 0;
  local_950.ArrayMax = 0;
  local_a40 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&local_950,&local_a40,(uint)pFVar85->NumInstanceComponents);
  local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e8.ArrayNum = 0;
  local_8e8.ArrayMax = 0;
  local_a3f = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&local_8e8,&local_a3f,(uint)param_1->Object->NumInstanceComponents);
  fVar20 = __real_43160000;
  pFVar85 = param_1->Object;
  local_a60 = 0;
  if (pFVar85->NumInstanceComponents != '\0') {
    do {
      uVar84 = local_a60;
      uVar91 = ~local_a60;
      uVar35 = 0;
      if ((int)local_a60 < (pFVar85->InstanceUpdateData).Components.ArrayNum) {
        uVar35 = uVar91 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pUVar22 = local_a10;
      local_9a0 = (pFVar85->InstanceUpdateData).Components.AllocatorInstance.Data;
      local_9a8 = (longlong)(int)uVar84 * 0x30;
      FVar11.Index = *(int *)(local_9a0 + local_9a8);
      uVar99 = (ulonglong)FVar11.Index;
      local_a50 = FVar11.Index;
      if ((-1 < FVar11.Index) &&
         (FVar11.Index < (pUVar90->ComponentNamesPerObjectComponent).ArrayNum)) {
        local_8c0 = (pUVar90->ComponentNamesPerObjectComponent).AllocatorInstance.Data;
        uVar14 = *(undefined8 *)(local_8c0 + uVar99 * 8);
        local_870 = uVar99;
        local_614._12_8_ = uVar14;
        uVar35 = ::GetTypeHash((FNameEntryId)(uint)uVar14);
        iVar34 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FName>
                           ((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                             *)&pUVar22->SkeletalMeshes,SUB84(uVar14,4) + uVar35,
                            (FName *)(local_614 + 0xc));
        if (iVar34 == -1) {
          local_a68.Handle = (UObject *)0x0;
          local_1f8 = 0;
        }
        else {
          pFVar46 = (FObjectPtr *)
                    TMapBase<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                    ::FindChecked((TMapBase<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                                   *)&pUVar22->SkeletalMeshes,*(FName *)(local_8c0 + uVar99 * 8));
          FObjectPtr::FObjectPtr((FObjectPtr *)&local_600,pFVar46);
          local_a68 = local_600;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          pUVar90 = local_a18;
          if ((USkeletalMesh *)local_a68.Handle == (USkeletalMesh *)0x0) goto LAB_14abcaee3;
          UE::GC::MarkAsReachable(local_a68.Handle);
        }
        pUVar90 = local_a18;
        if ((USkeletalMesh *)local_a68.Handle != (USkeletalMesh *)0x0) {
          pFVar85 = param_1->Object;
          if (pFVar85->bBake == false) {
            uVar35 = 0;
            if ((int)local_a60 < (pFVar85->MeshChangedPerInstanceComponent).ArrayNum) {
              uVar35 = uVar91 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            bVar25 = true;
            if ((pFVar85->MeshChangedPerInstanceComponent).AllocatorInstance.Data[(int)uVar84] !=
                (FScriptContainerElement)0x0) goto LAB_14abc6d0d;
          }
          else {
LAB_14abc6d0d:
            bVar25 = false;
          }
          if (((*(longlong *)&(local_a68.Handle)->field_0x8 & 0x40) == 0) ||
             ((param_1->Object->bUseMeshCache != false &&
              (lVar47 = (**(code **)(*(longlong *)local_a68.Handle + 0x398))(),
              *(char *)(lVar47 + 0x2c) != '\0')))) {
            bVar33 = true;
          }
          else {
            bVar33 = false;
          }
          pUVar22 = local_a10;
          pUVar100 = (UMaterialInterface *)0x0;
          pFVar48 = GetComponentData(local_a10,FVar11);
          local_788 = pFVar48;
          if (pFVar48 != (FCustomizableInstanceComponentData *)0x0) {
            (pFVar48->OverrideMaterials).ArrayNum = 0;
            if ((pFVar48->OverrideMaterials).ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&(pFVar48->OverrideMaterials).AllocatorInstance,0,
                         &(pFVar48->OverrideMaterials).ArrayMax);
            }
            this_00 = &pFVar48->OverlayMaterial;
            (this_00->field0_0x0).DebugPtr = (UMaterialInterface *)0x0;
            this_06 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)
                      (local_9a0 + local_9a8 + 0x20);
            if (this_06->Object != (FMaterial *)0x0) {
              pFVar49 = TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>::operator->(this_06);
              if (pFVar49->ReferenceID == -1) {
                pFVar49 = TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>::operator->(this_06);
                FObjectPtr::operator=((FObjectPtr *)this_00,(pFVar49->Material).Object);
                pUVar100 = (this_00->field0_0x0).DebugPtr;
              }
              else {
                pFVar49 = TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>::operator->(this_06);
                puVar50 = TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
                          ::Find((TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
                                  *)&pUVar22->ObjectToInstanceIndexMap,pFVar49->ReferenceID);
                pFVar48 = local_788;
                if (puVar50 != (uint *)0x0) {
                  uVar84 = *puVar50;
                  if ((-1 < (int)uVar84) && ((int)uVar84 < (pUVar22->ReferencedMaterials).ArrayNum))
                  {
                    TObjectPtr<UMaterialInterface>::operator=
                              (&local_788->OverlayMaterial,
                               (TObjectPtr<UMaterialInterface> *)
                               ((pUVar22->ReferencedMaterials).AllocatorInstance.Data +
                               (longlong)(int)uVar84 * 8));
                    pUVar100 = (pFVar48->OverlayMaterial).field0_0x0.DebugPtr;
                  }
                }
              }
            }
          }
          if (!bVar33) {
            lVar47 = (longlong)(int)local_a60;
            uVar84 = 0;
            if ((int)local_a60 < local_950.ArrayNum) {
              uVar84 = ~local_a60 >> 0x1f;
            }
            if ((uVar84 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            FVar77.Data = local_950.AllocatorInstance.Data;
            FVar8 = local_950.AllocatorInstance.Data[lVar47];
            pUVar51 = (UMaterialInterface *)(**(code **)(*(longlong *)local_a68.Handle + 0x430))();
            FVar21 = local_a68;
            FVar77.Data[lVar47] = (FScriptContainerElement)(pUVar51 != pUVar100 | (byte)FVar8);
            USkeletalMesh::WaitUntilAsyncPropertyReleased
                      ((USkeletalMesh *)local_a68.Handle,OverlayMaterial,ReadWrite);
            FObjectPtr::operator=((FObjectPtr *)&FVar21.Handle[0x1f].field_0x20,(UObject *)pUVar100)
            ;
          }
          local_c8.Elements._44_4_ = 0x80;
          local_a00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a00.ArrayNum = 0;
          local_a00.ArrayMax = 0;
          local_c8.Elements._0_8_ = 0;
          local_c8.Elements._8_8_ = 0;
          local_c8.Elements._32_8_ = 0;
          local_c8.Elements._40_4_ = 0;
          local_c8.Elements._52_4_ = 0;
          local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_c8.HashSize = 0;
          local_9c0.Data = (FScriptContainerElement *)0x0;
          local_9b8 = 0;
          local_c8.Elements._48_4_ = 0xffffffff;
          bVar26 = -1 < CpuChannel->Enabled;
          if (bVar26) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId5921,"Mutable_BuildMaterials_LODLoop",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0x1721);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5921);
          }
          pFVar85 = param_1->Object;
          if (pFVar85->bStreamMeshLODs == false) {
            this_03 = FUpdateContextPrivate::GetFirstRequestedLOD(pFVar85);
            pbVar52 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                     *)this_03,*(FName *)(local_8c0 + uVar99 * 8));
          }
          else {
            pbVar52 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                      ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                     *)&pFVar85->FirstLODAvailable,
                                    *(FName *)(local_8c0 + uVar99 * 8));
          }
          bVar32 = *pbVar52;
          uVar98 = (ulonglong)bVar32;
          local_a3c = (uint)bVar32;
          local_a78 = (uint)bVar32;
          if (local_a78 < *(ushort *)(local_9a0 + local_9a8 + 6)) {
            local_9ac = ~local_a60 >> 0x1f;
            local_a20 = uVar98;
            do {
              uVar84 = local_a78;
              pFVar85 = param_1->Object;
              uVar91 = *(ushort *)(local_9a0 + local_9a8 + 4) + local_a78;
              uVar35 = 0;
              if ((int)uVar91 < (pFVar85->InstanceUpdateData).LODs.ArrayNum) {
                uVar35 = ~uVar91 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              local_910 = (pFVar85->InstanceUpdateData).LODs.AllocatorInstance.Data;
              lVar47 = (longlong)(int)uVar91 * 0x40;
              local_8f8 = lVar47;
              if ((!bVar33) &&
                 (iVar34 = (**(code **)(*(longlong *)local_a68.Handle + 0x3d0))(),
                 (int)uVar84 < iVar34)) {
                lVar53 = (**(code **)(*(longlong *)local_a68.Handle + 0x330))
                                   (local_a68.Handle,uVar84);
                *(undefined4 *)(lVar53 + 0x10) = 0;
                if (*(int *)(lVar53 + 0x14) < 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,0,(ForAnyElementType *)(lVar53 + 8),0,(int *)(lVar53 + 0x14));
                }
              }
              local_8c8 = (FScriptContainerElement *)0x0;
              if ((int)uVar99 < (local_a18->ReferenceSkeletalMeshesData).ArrayNum) {
                local_8c8 = (local_a18->ReferenceSkeletalMeshesData).AllocatorInstance.Data +
                            (longlong)(int)uVar99 * 0xe8;
              }
              local_a38 = 0;
              local_918 = 0;
              if (*(short *)(local_910 + lVar47 + 0x2a) != 0) {
                do {
                  pFVar85 = param_1->Object;
                  uVar35 = *(ushort *)(local_910 + lVar47 + 0x28) + local_a38;
                  uVar84 = 0;
                  if ((int)uVar35 < (pFVar85->InstanceUpdateData).Surfaces.ArrayNum) {
                    uVar84 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar84 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pUVar22 = local_a10;
                  uVar84 = local_a78;
                  pFVar54 = (pFVar85->InstanceUpdateData).Surfaces.AllocatorInstance.Data;
                  lVar47 = (longlong)(int)uVar35 * 0x40;
                  for (FVar77.Data = local_9c0.Data; local_a08 = pFVar54, local_9d0 = lVar47,
                      FVar77.Data != local_9c0.Data + (longlong)(int)local_9b8 * 4;
                      FVar77.Data = FVar77.Data + 4) {
                    if (*(int *)FVar77.Data == *(int *)(pFVar54 + lVar47 + 0x10)) {
                      local_a28 = (int)((longlong)FVar77.Data - (longlong)local_9c0.Data >> 2);
                      if (local_a28 == -1) goto LAB_14abc71b8;
                      if (!bVar33) {
                        lVar47 = (**(code **)(*(longlong *)local_a68.Handle + 0x330))
                                           (local_a68.Handle,local_a78);
                        if (((*(int **)(lVar47 + 8) <= &local_a28) &&
                            (&local_a28 < *(int **)(lVar47 + 8) + *(int *)(lVar47 + 0x14))) &&
                           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar27)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        iVar34 = *(int *)(lVar47 + 0x10);
                        if (iVar34 == *(int *)(lVar47 + 0x14)) {
                          iVar34 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)(lVar47 + 8),
                                              (int *)(lVar47 + 0x14));
                        }
                        *(int *)(lVar47 + 0x10) = iVar34 + 1;
                        *(int *)(((ForAnyElementType *)(lVar47 + 8))->Data + (longlong)iVar34 * 4) =
                             local_a28;
                        plVar71 = (longlong *)(**(code **)(*(longlong *)local_a68.Handle + 0x398))()
                        ;
                        uVar35 = 0;
                        if ((int)uVar84 < (int)plVar71[1]) {
                          uVar35 = ~uVar84 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar27)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        lVar47 = *(longlong *)(*plVar71 + local_a20 * 8);
                        uVar35 = 0;
                        if ((int)local_a38 < *(int *)(lVar47 + 0x18)) {
                          uVar35 = ~local_a38 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar27)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        *(short *)(local_918 * 0x118 + *(longlong *)(lVar47 + 0x10)) = (short)iVar34
                        ;
                      }
                      goto LAB_14abca9ff;
                    }
                  }
                  local_a28 = -1;
LAB_14abc71b8:
                  if (*(longlong *)(pFVar54 + lVar47 + 0x30) == 0) {
                    iVar34 = local_a00.ArrayNum;
                    if (local_a00.ArrayNum == local_a00.ArrayMax) {
                      iVar34 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x830,&local_a00.AllocatorInstance,&local_a00.ArrayMax);
                    }
                    local_a00.ArrayNum = iVar34 + 1;
                    lVar47 = (longlong)iVar34 * 0x30;
                    pFVar54 = local_a00.AllocatorInstance.Data + lVar47 + 0x10;
                    *(undefined8 *)&local_a00.AllocatorInstance.Data[lVar47].field_0x0 = 0;
                    local_624 = 0;
                    *(undefined8 *)(local_a00.AllocatorInstance.Data + lVar47 + 8) = 0;
                    *(undefined8 *)pFVar54 = 0;
                    *(undefined8 *)(pFVar54 + 8) = 0;
                    *(undefined4 *)(pFVar54 + 0x10) = 0;
                    *(undefined8 *)(local_a00.AllocatorInstance.Data + lVar47 + 0x28) = 0;
                    uVar84 = local_a78;
                  }
                  else {
                    lVar53 = *(longlong *)(pFVar54 + lVar47 + 0x30);
                    if (*(int *)(lVar53 + 0x10) == -1) {
                      if ((lVar53 == 0) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar27)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      pUVar55 = *(UMaterial **)(*(longlong *)(pFVar54 + lVar47 + 0x30) + 8);
LAB_14abc74c3:
                      local_928 = pUVar55;
                      if (pUVar55 == (UMaterial *)0x0) goto LAB_14abc74d3;
                    }
                    else {
                      if ((lVar53 == 0) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar27)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      local_878[0] = *(uint *)(*(longlong *)(pFVar54 + lVar47 + 0x30) + 0x10);
                      iVar34 = TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                               ::FindIndexByHash<int>
                                         ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                                           *)&pUVar22->ObjectToInstanceIndexMap,local_878[0],
                                          (int *)local_878);
                      if (((iVar34 != -1) &&
                          (lVar53 = (longlong)iVar34 * 0x10 +
                                    *(longlong *)&pUVar22->ObjectToInstanceIndexMap, lVar53 != 0))
                         && (puVar50 = (uint *)(lVar53 + 4), puVar50 != (uint *)0x0)) {
                        uVar84 = *puVar50;
                        uVar35 = 0;
                        if ((int)uVar84 < (pUVar22->ReferencedMaterials).ArrayNum) {
                          uVar35 = ~uVar84 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar27)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        pUVar55 = *(UMaterial **)
                                   ((pUVar22->ReferencedMaterials).AllocatorInstance.Data +
                                   (longlong)(int)uVar84 * 8);
                        goto LAB_14abc74c3;
                      }
LAB_14abc74d3:
                      pUVar55 = UMaterial::GetDefaultMaterial(MD_Surface);
                      local_928 = pUVar55;
                      if ((pUVar55 == (UMaterial *)0x0) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("MaterialTemplate",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                              ,0x1761,L""), bVar27)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      if (1 < (byte)LogMutable._0_1_) {
                        local_558 = (FName)local_888->_padding_;
                        ::FName::ToString(&local_558,&local_550);
                        UE::Logging::Private::BasicLog<2>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                        if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_550.Data.AllocatorInstance.Data);
                        }
                      }
                    }
                    local_9d8[0] = *(int *)(pFVar54 + lVar47 + 0x10);
                    if (((local_9c0.Data <= (FScriptContainerElement *)local_9d8) &&
                        ((FScriptContainerElement *)local_9d8 <
                         local_9c0.Data + (longlong)local_9b8._4_4_ * 4)) &&
                       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar27)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    if ((int)local_9b8 == local_9b8._4_4_) {
                      iVar34 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&local_9c0,(int *)((longlong)&local_9b8 + 4));
                      local_9b8 = CONCAT44(local_9b8._4_4_,iVar34);
                    }
                    lVar53 = (longlong)(int)local_9b8;
                    local_9b8 = CONCAT44(local_9b8._4_4_,(int)local_9b8 + 1);
                    *(int *)(local_9c0.Data + lVar53 * 4) = local_9d8[0];
                    local_a24 = local_a00.ArrayNum;
                    iVar34 = local_a00.ArrayNum;
                    if (local_a00.ArrayNum == local_a00.ArrayMax) {
                      iVar34 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x830,&local_a00.AllocatorInstance,&local_a00.ArrayMax);
                    }
                    local_a00.ArrayNum = iVar34 + 1;
                    pFVar86 = local_a00.AllocatorInstance.Data + (longlong)iVar34 * 0x30;
                    local_880 = pFVar86;
                    DefaultConstructItems<FSkeletalMaterial,int>(pFVar86,1);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar55 != (UMaterial *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)pUVar55);
                    }
                    *(UMaterial **)&pFVar86->field_0x0 = pUVar55;
                    local_a5c = *(uint *)(pFVar54 + lVar47 + 0x14);
                    if ((local_a5c == 0) && (*(longlong *)(local_910 + local_8f8 + 0x18) != 0)) {
                      local_620 = *(int *)(pFVar54 + lVar47 + 0xc);
                      lVar53 = *(longlong *)(*(longlong *)(local_910 + local_8f8 + 0x18) + 0x90);
                      for (lVar70 = lVar53;
                          lVar70 != (longlong)
                                    *(int *)(*(longlong *)(local_910 + local_8f8 + 0x18) + 0x98) *
                                    0x38 + lVar53; lVar70 = lVar70 + 0x38) {
                        if (local_620 == *(int *)(lVar70 + 0x30)) {
                          if ((int)((lVar70 - lVar53) / 0x38) != -1) {
                            pFVar56 = TSharedPtr<UE::Mutable::Private::FMesh_const_,1>::operator->
                                                ((TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *
                                                 )(local_910 + local_8f8 + 0x18));
                            uVar84 = 0;
                            if ((int)local_a38 < (pFVar56->Surfaces).ArrayNum) {
                              uVar84 = ~local_a38 >> 0x1f;
                            }
                            if ((uVar84 == 0) &&
                               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar27)) {
                              pcVar16 = (code *)swi(3);
                              (*pcVar16)();
                              return;
                            }
                            pUVar90 = local_a18;
                            pFVar87 = (pFVar56->Surfaces).AllocatorInstance.Data + local_918 * 0x38;
                            iVar34 = *(int *)(pFVar87 + 0x20);
                            pFVar54 = pFVar87 + 0x20;
                            if (*(FScriptContainerElement **)(pFVar87 + 0x18) !=
                                (FScriptContainerElement *)0x0) {
                              pFVar87 = *(FScriptContainerElement **)(pFVar87 + 0x18);
                            }
                            pFVar6 = pFVar87 + (longlong)iVar34 * 0x14;
                            while( true ) {
                              if (*(int *)pFVar54 != iVar34) {
                                local_a3e = 0;
                                `TCheckedPointerIterator<UE::Mutable::Private::FSurfaceSubMesh_const_,int,0>
                                ::operator!='::__l2::<lambda_1>::operator()(&local_a3e);
                              }
                              pFVar86 = local_880;
                              lVar47 = local_9d0;
                              pUVar55 = local_928;
                              if ((pFVar87 == pFVar6) ||
                                 ((pFVar57 = TMapBase<unsigned_int,FMutableMeshMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableMeshMetadata,0>_>
                                             ::Find((
                                                  TMapBase<unsigned_int,FMutableMeshMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableMeshMetadata,0>_>
                                                  *)&pUVar90->MeshMetadata,*(uint *)(pFVar87 + 0x10)
                                                  ), pFVar57 != (FMutableMeshMetadata *)0x0 &&
                                  (local_a5c = pFVar57->SurfaceMetadataId, pFVar86 = local_880,
                                  lVar47 = local_9d0, pUVar55 = local_928, local_a5c != 0)))) break;
                              pFVar87 = pFVar87 + 0x14;
                            }
                          }
                          break;
                        }
                      }
                    }
                    pFVar58 = TMapBase<unsigned_int,FMutableSurfaceMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableSurfaceMetadata,0>_>
                              ::Find((TMapBase<unsigned_int,FMutableSurfaceMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableSurfaceMetadata,0>_>
                                      *)&local_a18->SurfaceMetadata,local_a5c);
                    if (pFVar58 != (FMutableSurfaceMetadata *)0x0) {
                      *(FName *)(pFVar86 + 8) = pFVar58->MaterialSlotName;
                    }
                    if (local_8c8 != (FScriptContainerElement *)0x0) {
                      fVar103 = *(float *)(local_8c8 + 0x94);
                      if (*(float *)(local_8c8 + 0x94) <= 0.0) {
                        fVar103 = fVar20;
                      }
                      fVar17 = MutableMeshesMinUVChannelDensity;
                      if (MutableMeshesMinUVChannelDensity <= fVar103) {
                        fVar17 = fVar103;
                      }
                      *(undefined2 *)(pFVar86 + 0x10) = 1;
                      *(float *)(pFVar86 + 0x14) = fVar17;
                      *(float *)(pFVar86 + 0x18) = fVar17;
                      *(float *)(pFVar86 + 0x1c) = fVar17;
                      *(float *)(pFVar86 + 0x20) = fVar17;
                    }
                    if (!bVar33) {
                      lVar53 = (**(code **)(*(longlong *)local_a68.Handle + 0x398))();
                      uVar84 = local_a78;
                      if ((-1 < (int)local_a78) && ((int)local_a78 < *(int *)(lVar53 + 8))) {
                        plVar71 = (longlong *)(**(code **)(*(longlong *)local_a68.Handle + 0x398))()
                        ;
                        if (((int)plVar71[1] <= (int)uVar84) &&
                           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar27)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        if ((-1 < (int)local_a38) &&
                           ((int)local_a38 <
                            *(int *)(*(longlong *)(*plVar71 + local_a20 * 8) + 0x18))) {
                          lVar53 = (**(code **)(*(longlong *)local_a68.Handle + 0x330))
                                             (local_a68.Handle,uVar84);
                          if ((*(int **)(lVar53 + 8) <= &local_a24) &&
                             ((&local_a24 < *(int **)(lVar53 + 8) + *(int *)(lVar53 + 0x14) &&
                              (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar27)))) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar34 = *(int *)(lVar53 + 0x10);
                          if (iVar34 == *(int *)(lVar53 + 0x14)) {
                            iVar34 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x404,(ForAnyElementType *)(lVar53 + 8),
                                                (int *)(lVar53 + 0x14));
                          }
                          *(int *)(lVar53 + 0x10) = iVar34 + 1;
                          *(int *)(((ForAnyElementType *)(lVar53 + 8))->Data + (longlong)iVar34 * 4)
                               = local_a24;
                          plVar71 = (longlong *)
                                    (**(code **)(*(longlong *)local_a68.Handle + 0x398))();
                          if (((int)plVar71[1] <= (int)local_a78) &&
                             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar27)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          lVar53 = *(longlong *)(*plVar71 + local_a20 * 8);
                          if ((*(int *)(lVar53 + 0x18) <= (int)local_a38) &&
                             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar27)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          *(short *)(local_918 * 0x118 + *(longlong *)(lVar53 + 0x10)) =
                               (short)iVar34;
                          goto LAB_14abc7a8c;
                        }
                      }
                      bVar27 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<7189396884065097639>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                          ,0x17a7,"false");
                      if (bVar27) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                    }
LAB_14abc7a8c:
                    iVar34 = 0;
                    local_a90.Params.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_a90.Params.ArrayNum = 0;
                    local_a90.Params.ArrayMax = 0;
                    local_a90.ParentMaterialID = *(uint *)((longlong)&pUVar55->_padding_ + 4);
                    local_a90.MatIndex = local_a24;
                    bVar27 = -1 < CpuChannel->Enabled;
                    if (bVar27) {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId6064,"Mutable_ParamLoop",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                 ,0x17b0);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6064);
                    }
                    lVar53 = local_9d0;
                    pFVar54 = local_a08;
                    pTVar94 = local_a48;
                    if (*(short *)(local_a08 + lVar47 + 6) != 0) {
                      do {
                        uVar35 = 0;
                        pFVar85 = pTVar94->Object;
                        uVar91 = (uint)*(ushort *)(pFVar54 + lVar53 + 4) + iVar34;
                        uVar84 = uVar35;
                        if ((int)uVar91 < (pFVar85->InstanceUpdateData).Vectors.ArrayNum) {
                          uVar84 = ~uVar91 >> 0x1f;
                        }
                        if ((uVar84 == 0) &&
                           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar28)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        pFVar96 = (FName *)((pFVar85->InstanceUpdateData).Vectors.AllocatorInstance.
                                            Data + (longlong)(int)uVar91 * 0x18);
                        ::FString::FString(&local_760,"-MutableLayerParam:");
                        ::FName::ToString(pFVar96,&local_868);
                        uVar84 = local_760.Data.ArrayNum - 1;
                        if (local_760.Data.ArrayNum == 0) {
                          uVar84 = uVar35;
                        }
                        FVar77.Data = (FScriptContainerElement *)L"";
                        if (local_760.Data.ArrayNum != 0) {
                          FVar77.Data = local_760.Data.AllocatorInstance.Data;
                        }
                        iVar36 = ::FString::Find(&local_868,(wchar_t *)FVar77.Data,uVar84,IgnoreCase
                                                 ,FromStart,-1);
                        if (iVar36 == -1) {
                          local_498.ParamName = *pFVar96;
                          local_498.Type = Vector;
                          local_498.Scalar = 0.0;
                          local_498.Vector.field0_0x0._0_8_ = pFVar96[1];
                          local_498.Vector.field0_0x0._8_8_ = pFVar96[2];
                          local_498.Texture.Name.Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_498.Texture.Name.Data.ArrayNum = 0;
                          local_498.Texture.Name.Data.ArrayMax = 0;
                          local_498.Texture.Texture.field0_0x0.DebugPtr =
                               (TObjectPtr<UTexture>_u_0)0x0;
                          local_498.LayerIndex = iVar36;
                          if (((local_a90.Params.AllocatorInstance.Data <= &local_498) &&
                              (&local_498 <
                               (FMutableMaterialPlaceHolderParam *)
                               (local_a90.Params.AllocatorInstance.Data +
                               (longlong)local_a90.Params.ArrayMax * 0x40))) &&
                             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar28)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar36 = local_a90.Params.ArrayNum;
                          if (local_a90.Params.ArrayNum == local_a90.Params.ArrayMax) {
                            iVar36 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x840,&local_a90.Params.AllocatorInstance,
                                                &local_a90.Params.ArrayMax);
                          }
                          local_a90.Params.ArrayNum = iVar36 + 1;
                          FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::
                          FMutableMaterialPlaceHolderParam
                                    ((FMutableMaterialPlaceHolderParam *)
                                     (local_a90.Params.AllocatorInstance.Data +
                                     (longlong)iVar36 * 0x40),&local_498);
                          FVar77.Data = local_498.Texture.Name.Data.AllocatorInstance.Data;
                        }
                        else {
                          iVar39 = 0;
                          iVar82 = local_760.Data.ArrayNum + -1;
                          if (local_760.Data.ArrayNum == 0) {
                            iVar82 = iVar39;
                          }
                          iVar37 = local_868.Data.ArrayNum + -1;
                          if (local_868.Data.ArrayNum == 0) {
                            iVar37 = iVar39;
                          }
                          iVar92 = local_868.Data.ArrayNum + -1;
                          if (local_868.Data.ArrayNum == 0) {
                            iVar92 = iVar39;
                          }
                          ::FString::RightChop
                                    (&local_868,&local_530,iVar92 - ((iVar37 - iVar82) - iVar36));
                          FVar77.Data = (FScriptContainerElement *)L"";
                          if (local_530.Data.ArrayNum != 0) {
                            FVar77.Data = local_530.Data.AllocatorInstance.Data;
                          }
                          dVar102 = _wtof((wchar_t *)FVar77.Data);
                          local_770.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_770.Data.ArrayNum = 0;
                          local_770.Data.ArrayMax = 0;
                          iVar36 = (int)dVar102;
                          ::FString::AppendInt(&local_770,iVar36);
                          ::FString::ConcatFF(&local_540,&local_760,&local_770);
                          if (local_770.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_770.Data.AllocatorInstance.Data);
                          }
                          iVar82 = local_540.Data.ArrayNum + -1;
                          if (local_540.Data.ArrayNum == 0) {
                            iVar82 = iVar39;
                          }
                          FVar77.Data = (FScriptContainerElement *)L"";
                          if (local_540.Data.ArrayNum != 0) {
                            FVar77.Data = local_540.Data.AllocatorInstance.Data;
                          }
                          ::FString::RemoveFromEnd
                                    (&local_868,(wchar_t *)FVar77.Data,iVar82,IgnoreCase);
                          local_258 = local_868.Data.AllocatorInstance.Data;
                          if (local_868.Data.ArrayNum != 0) {
                            uVar35 = local_868.Data.ArrayNum - 1;
                          }
                          local_250 = uVar35;
                          pFVar59 = ::FName::FName(&local_1f0,uVar35,
                                                   (wchar_t *)local_868.Data.AllocatorInstance.Data,
                                                   FNAME_Add);
                          local_458.ParamName = *pFVar59;
                          local_458.Type = Vector;
                          local_458.Scalar = 0.0;
                          local_458.Vector.field0_0x0._0_8_ = pFVar96[1];
                          local_458.Vector.field0_0x0._8_8_ = pFVar96[2];
                          local_458.Texture.Name.Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_458.Texture.Name.Data.ArrayNum = 0;
                          local_458.Texture.Name.Data.ArrayMax = 0;
                          local_458.Texture.Texture.field0_0x0.DebugPtr =
                               (TObjectPtr<UTexture>_u_0)0x0;
                          local_458.LayerIndex = iVar36;
                          local_1e8 = local_458.ParamName;
                          if (((local_a90.Params.AllocatorInstance.Data <= &local_458) &&
                              (&local_458 <
                               (FMutableMaterialPlaceHolderParam *)
                               (local_a90.Params.AllocatorInstance.Data +
                               (longlong)local_a90.Params.ArrayMax * 0x40))) &&
                             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar28)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar36 = local_a90.Params.ArrayNum;
                          if (local_a90.Params.ArrayNum == local_a90.Params.ArrayMax) {
                            iVar36 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x840,&local_a90.Params.AllocatorInstance,
                                                &local_a90.Params.ArrayMax);
                          }
                          local_a90.Params.ArrayNum = iVar36 + 1;
                          FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::
                          FMutableMaterialPlaceHolderParam
                                    ((FMutableMaterialPlaceHolderParam *)
                                     (local_a90.Params.AllocatorInstance.Data +
                                     (longlong)iVar36 * 0x40),&local_458);
                          if (local_458.Texture.Name.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_458.Texture.Name.Data.AllocatorInstance.Data);
                          }
                          FVar77.Data = local_530.Data.AllocatorInstance.Data;
                          if (local_540.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_540.Data.AllocatorInstance.Data);
                            FVar77.Data = local_530.Data.AllocatorInstance.Data;
                          }
                        }
                        if (FVar77.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(FVar77.Data);
                        }
                        if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_868.Data.AllocatorInstance.Data);
                        }
                        if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_760.Data.AllocatorInstance.Data);
                        }
                        iVar34 = iVar34 + 1;
                      } while (iVar34 < (int)(uint)*(ushort *)(pFVar54 + lVar53 + 6));
                      uVar99 = (ulonglong)local_a50;
                      lVar47 = local_9d0;
                    }
                    lVar53 = local_9d0;
                    pFVar54 = local_a08;
                    pTVar94 = local_a48;
                    iVar34 = 0;
                    if (*(short *)(local_a08 + lVar47 + 10) != 0) {
                      do {
                        uVar35 = 0;
                        pFVar85 = pTVar94->Object;
                        uVar91 = (uint)*(ushort *)(pFVar54 + lVar53 + 8) + iVar34;
                        uVar84 = uVar35;
                        if ((int)uVar91 < (pFVar85->InstanceUpdateData).Scalars.ArrayNum) {
                          uVar84 = ~uVar91 >> 0x1f;
                        }
                        if ((uVar84 == 0) &&
                           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar28)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        pFVar96 = (FName *)((pFVar85->InstanceUpdateData).Scalars.AllocatorInstance.
                                            Data + (longlong)(int)uVar91 * 0xc);
                        ::FString::FString(&local_740,"-MutableLayerParam:");
                        ::FName::ToString(pFVar96,&local_858);
                        uVar84 = local_740.Data.ArrayNum - 1;
                        if (local_740.Data.ArrayNum == 0) {
                          uVar84 = uVar35;
                        }
                        FVar77.Data = (FScriptContainerElement *)L"";
                        if (local_740.Data.ArrayNum != 0) {
                          FVar77.Data = local_740.Data.AllocatorInstance.Data;
                        }
                        iVar36 = ::FString::Find(&local_858,(wchar_t *)FVar77.Data,uVar84,IgnoreCase
                                                 ,FromStart,-1);
                        if (iVar36 == -1) {
                          local_418.Scalar = (float)pFVar96[1].ComparisonIndex.Value;
                          local_418.ParamName = *pFVar96;
                          local_418.Type = Scalar;
                          local_418.Texture.Name.Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_418.Texture.Name.Data.ArrayNum = 0;
                          local_418.Texture.Name.Data.ArrayMax = 0;
                          local_418.Texture.Texture.field0_0x0.DebugPtr =
                               (TObjectPtr<UTexture>_u_0)0x0;
                          local_418.Vector.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
                          local_418.LayerIndex = iVar36;
                          if (((local_a90.Params.AllocatorInstance.Data <= &local_418) &&
                              (&local_418 <
                               (FMutableMaterialPlaceHolderParam *)
                               (local_a90.Params.AllocatorInstance.Data +
                               (longlong)local_a90.Params.ArrayMax * 0x40))) &&
                             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar28)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar36 = local_a90.Params.ArrayNum;
                          if (local_a90.Params.ArrayNum == local_a90.Params.ArrayMax) {
                            iVar36 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x840,&local_a90.Params.AllocatorInstance,
                                                &local_a90.Params.ArrayMax);
                          }
                          local_a90.Params.ArrayNum = iVar36 + 1;
                          FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::
                          FMutableMaterialPlaceHolderParam
                                    ((FMutableMaterialPlaceHolderParam *)
                                     (local_a90.Params.AllocatorInstance.Data +
                                     (longlong)iVar36 * 0x40),&local_418);
                          FVar77.Data = local_418.Texture.Name.Data.AllocatorInstance.Data;
                        }
                        else {
                          iVar39 = 0;
                          iVar82 = local_740.Data.ArrayNum + -1;
                          if (local_740.Data.ArrayNum == 0) {
                            iVar82 = iVar39;
                          }
                          iVar37 = local_858.Data.ArrayNum + -1;
                          if (local_858.Data.ArrayNum == 0) {
                            iVar37 = iVar39;
                          }
                          iVar92 = local_858.Data.ArrayNum + -1;
                          if (local_858.Data.ArrayNum == 0) {
                            iVar92 = iVar39;
                          }
                          ::FString::RightChop
                                    (&local_858,&local_510,iVar92 - ((iVar37 - iVar82) - iVar36));
                          FVar77.Data = (FScriptContainerElement *)L"";
                          if (local_510.Data.ArrayNum != 0) {
                            FVar77.Data = local_510.Data.AllocatorInstance.Data;
                          }
                          dVar102 = _wtof((wchar_t *)FVar77.Data);
                          local_750.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_750.Data.ArrayNum = 0;
                          local_750.Data.ArrayMax = 0;
                          iVar36 = (int)dVar102;
                          ::FString::AppendInt(&local_750,iVar36);
                          ::FString::ConcatFF(&local_520,&local_740,&local_750);
                          if (local_750.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_750.Data.AllocatorInstance.Data);
                          }
                          iVar82 = local_520.Data.ArrayNum + -1;
                          if (local_520.Data.ArrayNum == 0) {
                            iVar82 = iVar39;
                          }
                          FVar77.Data = (FScriptContainerElement *)L"";
                          if (local_520.Data.ArrayNum != 0) {
                            FVar77.Data = local_520.Data.AllocatorInstance.Data;
                          }
                          ::FString::RemoveFromEnd
                                    (&local_858,(wchar_t *)FVar77.Data,iVar82,IgnoreCase);
                          fVar103 = (float)pFVar96[1].ComparisonIndex.Value;
                          local_248 = local_858.Data.AllocatorInstance.Data;
                          if (local_858.Data.ArrayNum != 0) {
                            uVar35 = local_858.Data.ArrayNum - 1;
                          }
                          local_240 = uVar35;
                          pFVar96 = ::FName::FName(&local_290,uVar35,
                                                   (wchar_t *)local_858.Data.AllocatorInstance.Data,
                                                   FNAME_Add);
                          local_3d8.ParamName = *pFVar96;
                          local_3d8.Type = Scalar;
                          local_3d8.Texture.Name.Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_3d8.Texture.Name.Data.ArrayNum = 0;
                          local_3d8.Texture.Name.Data.ArrayMax = 0;
                          local_3d8.Texture.Texture.field0_0x0.DebugPtr =
                               (TObjectPtr<UTexture>_u_0)0x0;
                          local_3d8.Vector.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
                          local_3d8.LayerIndex = iVar36;
                          local_3d8.Scalar = fVar103;
                          local_298 = local_3d8.ParamName;
                          if (((local_a90.Params.AllocatorInstance.Data <= &local_3d8) &&
                              (&local_3d8 <
                               (FMutableMaterialPlaceHolderParam *)
                               (local_a90.Params.AllocatorInstance.Data +
                               (longlong)local_a90.Params.ArrayMax * 0x40))) &&
                             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar28)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar36 = local_a90.Params.ArrayNum;
                          if (local_a90.Params.ArrayNum == local_a90.Params.ArrayMax) {
                            iVar36 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x840,&local_a90.Params.AllocatorInstance,
                                                &local_a90.Params.ArrayMax);
                          }
                          local_a90.Params.ArrayNum = iVar36 + 1;
                          FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::
                          FMutableMaterialPlaceHolderParam
                                    ((FMutableMaterialPlaceHolderParam *)
                                     (local_a90.Params.AllocatorInstance.Data +
                                     (longlong)iVar36 * 0x40),&local_3d8);
                          if (local_3d8.Texture.Name.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3d8.Texture.Name.Data.AllocatorInstance.Data);
                          }
                          FVar77.Data = local_510.Data.AllocatorInstance.Data;
                          if (local_520.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_520.Data.AllocatorInstance.Data);
                            FVar77.Data = local_510.Data.AllocatorInstance.Data;
                          }
                        }
                        if (FVar77.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(FVar77.Data);
                        }
                        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_858.Data.AllocatorInstance.Data);
                        }
                        if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_740.Data.AllocatorInstance.Data);
                        }
                        iVar34 = iVar34 + 1;
                      } while (iVar34 < (int)(uint)*(ushort *)(pFVar54 + lVar53 + 10));
                      uVar99 = (ulonglong)local_a50;
                    }
                    if (bVar27) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    bVar27 = -1 < CpuChannel->Enabled;
                    if (bVar27) {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&DAT_1552ce108,"Mutable_BuildMaterials_ImageLoop",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                 ,0x17f4);
                      FCpuProfilerTrace::OutputBeginEvent(DAT_1552ce108);
                    }
                    pUVar13 = local_888;
                    if (((local_888->Private).field0_0x0.DebugPtr ==
                         (UCustomizableObjectPrivate *)0x0) &&
                       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Private",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                            ,0x3c0,L""), bVar28)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    local_8f0 = (TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                 *)&((pUVar13->Private).field0_0x0.DebugPtr)->TextureCache;
                    FCustomizableObjectInstanceDescriptor::GetCurrentState(local_5f8,&local_228);
                    bVar28 = local_a48->Object->bNeverStream;
                    iVar34 = local_a48->Object->MipsToSkip;
                    if (bVar28 == false) {
                      if (iVar34 < 0) goto LAB_14abc8539;
                    }
                    else if (iVar34 != 0) {
LAB_14abc8539:
                      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(bNeverStream && Context->MipsToSkip == 0) || (!bNeverStream && Context->MipsToSkip >= 0)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                          ,0x17fd,L"");
                      if (bVar29) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                    }
                    local_a5c = 0;
                    if (*(short *)(local_a08 + local_9d0 + 2) != 0) {
                      do {
                        pFVar85 = local_a48->Object;
                        uVar35 = *(ushort *)(local_a08 + local_9d0) + local_a5c;
                        uVar84 = 0;
                        if ((int)uVar35 < (pFVar85->InstanceUpdateData).Images.ArrayNum) {
                          uVar84 = ~uVar35 >> 0x1f;
                        }
                        if ((uVar84 == 0) &&
                           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar29)) {
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        pFVar96 = (FName *)((pFVar85->InstanceUpdateData).Images.AllocatorInstance.
                                            Data + (longlong)(int)uVar35 * 0x60);
                        local_9c8 = pFVar96;
                        ::FName::ToString(pFVar96,&local_6f8);
                        local_8d8 = pFVar96[6];
                        local_8d0 = pFVar96[7];
                        if (local_8d0 != (FName)0x0) {
                          LOCK();
                          *(int *)((longlong)local_8d0 + 8) = *(int *)((longlong)local_8d0 + 8) + 1;
                          UNLOCK();
                        }
                        pUVar60 = (UTexture2D *)0x0;
                        local_a30 = (UTexture2D *)0x0;
                        local_968.ComponentIndex = (int)uVar99;
                        if (local_a94 == '\0') {
                          local_968.SurfaceIndex = 0;
                          local_968.LODIndex = 0xffffffff;
                          local_968.ComponentIndex = 0xffffffff;
                          local_968.ImageIndex = 0xffffffff;
                        }
                        else {
                          local_968.SurfaceIndex = *(uint *)(local_a08 + local_9d0 + 0xc);
                          local_968.LODIndex = pFVar96[4].ComparisonIndex.Value;
                          local_968.ImageIndex = local_a5c;
                        }
                        local_8b8.Resource.Id = 0xffffffff;
                        local_8b8.Resource.WeakRegistry.Object =
                             (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                              *)0x0;
                        local_8b8.Resource.WeakRegistry.WeakReferenceCount.ReferenceController =
                             (TReferenceControllerBase<1> *)0x0;
                        TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                        ::FHandle::operator=(&local_8b8.Resource,(FHandle *)(pFVar96 + 1));
                        uVar84 = local_a48->Object->MipsToSkip;
                        local_8b8.SkippedMips = uVar84;
                        if (local_8d8 == (FName)0x0) {
                          uVar35 = ::GetTypeHash(&local_8b8.Resource);
                          pTVar97 = local_8f0;
                          uVar91 = uVar35 - uVar84 ^ uVar84 >> 0xd;
                          uVar35 = (-0x61c88647 - uVar91) - uVar84 ^ uVar91 << 8;
                          uVar84 = (uVar84 - uVar35) - uVar91 ^ uVar35 >> 0xd;
                          uVar91 = (uVar91 - uVar84) - uVar35 ^ uVar84 >> 0xc;
                          uVar35 = (uVar35 - uVar84) - uVar91 ^ uVar91 << 0x10;
                          uVar84 = (uVar84 - uVar35) - uVar91 ^ uVar35 >> 5;
                          uVar91 = (uVar91 - uVar84) - uVar35 ^ uVar84 >> 3;
                          uVar35 = (uVar35 - uVar91) - uVar84 ^ uVar91 << 10;
                          iVar34 = TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                   ::FindIndexByHash<FTextureCache::FId>
                                             (local_8f0,(uVar84 - uVar35) - uVar91 ^ uVar35 >> 0xf,
                                              &local_8b8);
                          if (((((iVar34 == -1) ||
                                (lVar47 = (longlong)iVar34 * 0x30 + *(longlong *)&pTVar97->Elements,
                                lVar47 == 0)) ||
                               (pFVar78 = (FWeakObjectPtr *)(lVar47 + 0x20),
                               pFVar78 == (FWeakObjectPtr *)0x0)) ||
                              (pUVar60 = (UTexture2D *)FWeakObjectPtr::Get(pFVar78),
                              pUVar60 == (UTexture2D *)0x0)) &&
                             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("MutableTexture",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x1814,L""), bVar29)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          if (local_8d8 != (FName)0x0) goto LAB_14abc87cc;
LAB_14abc8ad9:
                          FVar77.Data = (FScriptContainerElement *)L"";
                          if (local_6f8.Data.ArrayNum != 0) {
                            FVar77.Data = local_6f8.Data.AllocatorInstance.Data;
                          }
                          iVar34 = _wtoi((wchar_t *)FVar77.Data);
                          if ((iVar34 < 0) || ((local_a18->ImageProperties).ArrayNum <= iVar34)) {
                            if (1 < (byte)LogMutable._0_1_) {
                              local_5d8 = (FName)local_888->_padding_;
                              ::FName::ToString(&local_5d8,&local_4d8);
                              UE::Logging::Private::BasicLog<2>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                              FVar77.Data = local_4d8.Data.AllocatorInstance.Data;
                              goto LAB_14abc9f35;
                            }
LAB_14abc9f3f:
                            pUVar22 = local_a10;
                            if (local_a94 != '\0') {
                              if (pUVar60 == (UTexture2D *)0x0) {
                                if (*(int *)&(local_a10->TextureReuseCache).field_0x8 !=
                                    *(int *)&(local_a10->TextureReuseCache).field_0x34) {
                                  uVar84 = HashCombine<unsigned_int,unsigned_int,unsigned_int>
                                                     (local_968.LODIndex,local_968.ComponentIndex,
                                                      local_968.SurfaceIndex,local_968.ImageIndex);
                                  TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                  ::RemoveImpl<FTextureReuseCacheKey>
                                            ((TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                              *)&pUVar22->TextureReuseCache,uVar84,&local_968);
                                }
                              }
                              else {
                                local_5e0 = pUVar60;
                                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                  UE::GC::MarkAsReachable((UObject *)pUVar60);
                                }
                                local_838.ObjectIndex = 0;
                                local_838.ObjectSerialNumber = 0;
                                local_5e8 = local_5e0;
                                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                   (local_5e0 != (UTexture2D *)0x0)) {
                                  UE::GC::MarkAsReachable((UObject *)local_5e0);
                                }
                                FWeakObjectPtr::operator=(&local_838,(FObjectPtr)&local_5e8);
                                local_308 = &local_968;
                                local_300 = &local_838;
                                TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                ::
                                Emplace<TPairInitializer<FTextureReuseCacheKey_const_&,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_&&>_>
                                          ((TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                            *)&pUVar22->TextureReuseCache,
                                           (TPairInitializer<FTextureReuseCacheKey_const_&,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_&&>
                                            *)(local_61c + 4),(bool *)&local_308);
                              }
                            }
                            local_7e0 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                                         *)0x0;
                            local_7d8 = local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                        ReferenceController;
                            if (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                              aVar7 = (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                      ReferenceController)->SharedReferenceCount;
                              do {
                                if (aVar7 == (atomic<int>)0x0) {
                                  local_7d8 = (TReferenceControllerBase<1> *)0x0;
                                  break;
                                }
                                LOCK();
                                aVar38 = (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                         ReferenceController)->SharedReferenceCount;
                                bVar29 = aVar7 == aVar38;
                                if (bVar29) {
                                  (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                  ReferenceController)->SharedReferenceCount =
                                       (atomic<int>)((int)aVar7 + 1);
                                  aVar38 = aVar7;
                                }
                                UNLOCK();
                                aVar7 = aVar38;
                              } while (!bVar29);
                            }
                            pTVar88 = local_7e0;
                            if (local_7d8 != (TReferenceControllerBase<1> *)0x0) {
                              pTVar88 = local_8b8.Resource.WeakRegistry.Object;
                            }
                            pTVar79 = local_7d8;
                            local_7e0 = pTVar88;
                            if (pTVar88 !=
                                (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                                 *)0x0) {
                              pFVar4 = &pTVar88->CriticalSection;
                              local_a70 = (FWeakObjectPtr *)
                                          CONCAT44(local_a70._4_4_,local_8b8.Resource.Id);
                              local_2b0 = pFVar4;
                              if (pFVar4 == (FWindowsRecursiveMutex *)0x0) {
LAB_14abcb44b:
                    /* WARNING: Subroutine does not return */
                                UE::Core::Private::ReportNotNullPtr();
                              }
                              EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
                              pFVar63 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                        ::FindChecked((
                                                  TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                                  *)&pTVar88->Entries,(uint)local_a70);
                              pFVar63->RefCount = pFVar63->RefCount - 1;
                              if (pFVar63->RefCount == 0) {
                                local_988 = (UCustomizableObjectInstanceUsage *)
                                            &pFVar63->KeyContainer;
                                if (*(int *)&(pTVar88->KeyIndex).field_0x8 !=
                                    *(int *)&(pTVar88->KeyIndex).field_0x34) {
                                  uVar84 = UE::Mutable::Private::GetTypeHash
                                                     ((((FKeyContainer *)local_988)->Key).Object);
                                  TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                                  ::
                                  RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer>
                                            ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                                              *)&pTVar88->KeyIndex,uVar84,(FKeyContainer *)local_988
                                            );
                                }
                                local_930[0] = (uint)local_a70;
                                if (*(int *)&(pTVar88->Entries).field_0x8 !=
                                    *(int *)&(pTVar88->Entries).field_0x34) {
                                  TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                                  ::RemoveImpl<unsigned_int>
                                            ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                                              *)&pTVar88->Entries,(uint)local_a70,local_930);
                                }
                              }
                              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
                              pTVar79 = local_7d8;
                            }
                            goto LAB_14abca138;
                          }
                          if (((local_a18->ImageProperties).ArrayNum <= iVar34) &&
                             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar29)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          pUVar22 = local_a10;
                          local_958 = (FMutableModelImageProperties *)
                                      ((local_a18->ImageProperties).AllocatorInstance.Data +
                                      (longlong)iVar34 * 0x20);
                          if (((pUVar60 != (UTexture2D *)0x0) || (local_a30 != (UTexture2D *)0x0))
                             || (local_8d8 == (FName)0x0)) {
LAB_14abc8d8a:
                            local_980._0_8_ = (FScriptContainerElement *)0x0;
                            local_980._8_8_ = 0;
                            local_970._0_1_ = '\0';
                            local_970._1_7_ = 0;
                            if ((FMutableModelImageProperties *)local_980 != local_958) {
                              uVar84 = (local_958->TextureParameterName).Data.ArrayNum;
                              pFVar54 = (local_958->TextureParameterName).Data.AllocatorInstance.
                                        Data;
                              local_980._12_4_ = 0;
                              local_980._8_4_ = uVar84;
                              if (uVar84 != 0) {
                                UE::Core::Private::
                                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (2,2,uVar84,0,(ForAnyElementType *)local_980,uVar84,
                                           (int *)(local_980 + 0xc));
                                memcpy((void *)local_980._0_8_,pFVar54,(longlong)(int)uVar84 * 2);
                              }
                            }
                            pFVar23 = local_958;
                            pUVar61 = local_a30;
                            if (pUVar60 != (UTexture2D *)0x0) {
                              pUVar61 = pUVar60;
                            }
                            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                               (pUVar61 != (UTexture2D *)0x0)) {
                              UE::GC::MarkAsReachable((UObject *)pUVar61);
                            }
                            local_970 = pUVar61;
                            if (pUVar60 != (UTexture2D *)0x0) {
                              if (((local_9e8.Data <= (FScriptContainerElement *)local_980) &&
                                  ((FScriptContainerElement *)local_980 <
                                   local_9e8.Data + (longlong)uStack_9e0._4_4_ * 0x18)) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              iVar34 = (int)uStack_9e0;
                              if ((int)uStack_9e0 == uStack_9e0._4_4_) {
                                iVar34 = UE::Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x818,&local_9e8,
                                                    (int *)((longlong)&uStack_9e0 + 4));
                              }
                              uStack_9e0 = CONCAT44(uStack_9e0._4_4_,iVar34 + 1);
                              pFVar54 = local_9e8.Data + (longlong)iVar34 * 0x18;
                              ::FString::FString((FString *)pFVar54,(FString *)local_980);
                              *(UTexture2D **)(pFVar54 + 0x10) = local_970;
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (local_970 != (UTexture2D *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)local_970);
                              }
                            }
                            ::FName::ToString(local_9c8,&local_6b0);
                            ::FString::FString(&local_6c0,"-MutableLayerParam:");
                            iVar34 = local_6c0.Data.ArrayNum + -1;
                            if (local_6c0.Data.ArrayNum == 0) {
                              iVar34 = 0;
                            }
                            FVar77.Data = (FScriptContainerElement *)L"";
                            if (local_6c0.Data.ArrayNum != 0) {
                              FVar77.Data = local_6c0.Data.AllocatorInstance.Data;
                            }
                            iVar34 = ::FString::Find(&local_6b0,(wchar_t *)FVar77.Data,iVar34,
                                                     IgnoreCase,FromStart,-1);
                            if (iVar34 == -1) {
                              if ((pFVar23->TextureParameterName).Data.ArrayNum == 0) {
                                pwVar83 = L"";
                              }
                              else {
                                pwVar83 = (wchar_t *)
                                          (pFVar23->TextureParameterName).Data.AllocatorInstance.
                                          Data;
                              }
                              ::FName::FName(&local_5c8,pwVar83);
                              local_398.Vector.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
                              local_398.ParamName = local_5c8;
                              local_398.Type = Texture;
                              local_398.LayerIndex = -1;
                              local_398.Scalar = 0.0;
                              local_398.Texture.Name.Data.AllocatorInstance.Data =
                                   (FScriptContainerElement *)0x0;
                              TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                        ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                                         &local_398.Texture,(wchar_t *)local_980._0_8_,
                                         local_980._8_4_,0);
                              local_398.Texture.Texture.field0_0x0.DebugPtr =
                                   (TObjectPtr<UTexture>_u_0)local_970;
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (local_970 != (UTexture2D *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)local_970);
                              }
                              if (((local_a90.Params.AllocatorInstance.Data <= &local_398) &&
                                  (&local_398 <
                                   (FMutableMaterialPlaceHolderParam *)
                                   (local_a90.Params.AllocatorInstance.Data +
                                   (longlong)local_a90.Params.ArrayMax * 0x40))) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              iVar34 = local_a90.Params.ArrayNum;
                              if (local_a90.Params.ArrayNum == local_a90.Params.ArrayMax) {
                                iVar34 = UE::Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x840,&local_a90.Params.AllocatorInstance,
                                                    &local_a90.Params.ArrayMax);
                              }
                              local_a90.Params.ArrayNum = iVar34 + 1;
                              FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::
                              FMutableMaterialPlaceHolderParam
                                        ((FMutableMaterialPlaceHolderParam *)
                                         (local_a90.Params.AllocatorInstance.Data +
                                         (longlong)iVar34 * 0x40),&local_398);
                              FVar77.Data = local_398.Texture.Name.Data.AllocatorInstance.Data;
                            }
                            else {
                              iVar82 = 0;
                              iVar36 = local_6c0.Data.ArrayNum + -1;
                              if (local_6c0.Data.ArrayNum == 0) {
                                iVar36 = iVar82;
                              }
                              iVar39 = local_6b0.Data.ArrayNum + -1;
                              if (local_6b0.Data.ArrayNum == 0) {
                                iVar39 = iVar82;
                              }
                              iVar37 = local_6b0.Data.ArrayNum + -1;
                              if (local_6b0.Data.ArrayNum == 0) {
                                iVar37 = iVar82;
                              }
                              ::FString::RightChop
                                        (&local_6b0,&local_4e8,iVar37 - ((iVar39 - iVar36) - iVar34)
                                        );
                              FVar77.Data = (FScriptContainerElement *)L"";
                              if (local_4e8.Data.ArrayNum != 0) {
                                FVar77.Data = local_4e8.Data.AllocatorInstance.Data;
                              }
                              dVar102 = _wtof((wchar_t *)FVar77.Data);
                              if ((pFVar23->TextureParameterName).Data.ArrayNum == 0) {
                                pwVar83 = L"";
                              }
                              else {
                                pwVar83 = (wchar_t *)
                                          (pFVar23->TextureParameterName).Data.AllocatorInstance.
                                          Data;
                              }
                              ::FName::FName(&local_5d0,pwVar83);
                              local_358.ParamName = local_5d0;
                              local_358.Texture.Name.Data.AllocatorInstance.Data =
                                   (FScriptContainerElement *)0x0;
                              local_358.Type = Texture;
                              local_358.Scalar = 0.0;
                              local_358.Vector.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
                              local_358.LayerIndex = (int)dVar102;
                              TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                        ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                                         &local_358.Texture,(wchar_t *)local_980._0_8_,
                                         local_980._8_4_,0);
                              local_358.Texture.Texture.field0_0x0.DebugPtr =
                                   (TObjectPtr<UTexture>_u_0)local_970;
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (local_970 != (UTexture2D *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)local_970);
                              }
                              if (((local_a90.Params.AllocatorInstance.Data <= &local_358) &&
                                  (&local_358 <
                                   (FMutableMaterialPlaceHolderParam *)
                                   (local_a90.Params.AllocatorInstance.Data +
                                   (longlong)local_a90.Params.ArrayMax * 0x40))) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              iVar34 = local_a90.Params.ArrayNum;
                              if (local_a90.Params.ArrayNum == local_a90.Params.ArrayMax) {
                                iVar34 = UE::Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x840,&local_a90.Params.AllocatorInstance,
                                                    &local_a90.Params.ArrayMax);
                              }
                              local_a90.Params.ArrayNum = iVar34 + 1;
                              FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam::
                              FMutableMaterialPlaceHolderParam
                                        ((FMutableMaterialPlaceHolderParam *)
                                         (local_a90.Params.AllocatorInstance.Data +
                                         (longlong)iVar34 * 0x40),&local_358);
                              FVar77.Data = local_4e8.Data.AllocatorInstance.Data;
                              if (local_358.Texture.Name.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_358.Texture.Name.Data.AllocatorInstance.Data);
                                FVar77.Data = local_4e8.Data.AllocatorInstance.Data;
                              }
                            }
                            if (FVar77.Data != (FScriptContainerElement *)0x0) {
                              FMemory::Free(FVar77.Data);
                            }
                            if (local_6c0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
                            }
                            FVar77.Data = (FScriptContainerElement *)local_980._0_8_;
                            if (local_6b0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
                              FVar77.Data = (FScriptContainerElement *)local_980._0_8_;
                            }
LAB_14abc9f35:
                            if (FVar77.Data != (FScriptContainerElement *)0x0) {
                              FMemory::Free(FVar77.Data);
                            }
                            goto LAB_14abc9f3f;
                          }
                          if (local_a94 == '\0') {
LAB_14abc8be6:
                            local_a70 = (FWeakObjectPtr *)0x0;
                          }
                          else {
                            uVar84 = HashCombine<unsigned_int,unsigned_int,unsigned_int>
                                               (local_968.LODIndex,local_968.ComponentIndex,
                                                local_968.SurfaceIndex,local_968.ImageIndex);
                            iVar34 = TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                     ::FindIndexByHash<FTextureReuseCacheKey>
                                               ((TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                                 *)&pUVar22->TextureReuseCache,uVar84,&local_968);
                            if ((iVar34 == -1) ||
                               (lVar47 = (longlong)iVar34 * 0x20 +
                                         *(longlong *)&pUVar22->TextureReuseCache, lVar47 == 0))
                            goto LAB_14abc8be6;
                            local_a70 = (FWeakObjectPtr *)(lVar47 + 0x10);
                          }
                          pFVar78 = local_a70;
                          local_848 = (FTexturePlatformData *)0x0;
                          FStack_840.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                          local_940.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_940.Data.ArrayNum = 0;
                          local_940.Data.ArrayMax = 0;
                          uVar84 = UE::Mutable::Private::GetTypeHashPersistent
                                             ((FHandle *)(local_9c8 + 1));
                          ::FString::PrintfImpl(&local_7f0,L"T_%s_h%lu");
                          if (local_940.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_940.Data.AllocatorInstance.Data);
                          }
                          uVar14 = local_7f0.Data._8_8_;
                          local_940.Data.AllocatorInstance.Data =
                               local_7f0.Data.AllocatorInstance.Data;
                          local_7f0.Data.ArrayNum = 0;
                          local_7f0.Data.ArrayMax = 0;
                          uVar19 = local_7f0.Data._8_8_;
                          local_7f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_7f0.Data.ArrayNum = (int)uVar14;
                          local_7f0.Data.ArrayMax = SUB84(uVar14,4);
                          local_940.Data.ArrayNum = local_7f0.Data.ArrayNum;
                          local_940.Data.ArrayMax = local_7f0.Data.ArrayMax;
                          local_7f0.Data._8_8_ = uVar19;
                          ::FString::ReplaceInline(&local_940,L" ",L"_",IgnoreCase);
                          pUVar62 = Z_Construct_UClass_UTexture2D_NoRegister();
                          MakeMutableGeneratedObjectNameUnique(&local_940,uVar84,pUVar62);
                          if (((pFVar78 == (FWeakObjectPtr *)0x0) ||
                              (bVar29 = FWeakObjectPtr::IsValid(pFVar78), !bVar29)) ||
                             (pUVar64 = FWeakObjectPtr::Get(pFVar78),
                             (*(uint *)&pUVar64->field_0x8 >> 0xf & 1) != 0)) {
LAB_14abc8f6e:
                            pFVar78 = (FWeakObjectPtr *)0x0;
                            local_a70 = (FWeakObjectPtr *)0x0;
                            pUVar60 = CreateTexture(pUVar22,&local_940);
                            if (pUVar60 != (UTexture2D *)0x0) goto LAB_14abc8f93;
LAB_14abc8d4a:
                            if (1 < (byte)LogMutable._0_1_) {
                              UE::Logging::Private::BasicLog<2>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                            }
LAB_14abc8d66:
                            if (local_940.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_940.Data.AllocatorInstance.Data);
                            }
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline(FStack_840.ReferenceController);
                            goto LAB_14abc8d8a;
                          }
                          pUVar60 = (UTexture2D *)FWeakObjectPtr::Get(pFVar78);
                          EVar30 = UTexture2D::GetPixelFormat(pUVar60,0);
                          if (EVar30 != PF_R8G8B8A8) goto LAB_14abc8f6e;
                          pUVar60 = (UTexture2D *)FWeakObjectPtr::Get(pFVar78);
                          if (pUVar60 == (UTexture2D *)0x0) {
                            bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                               ("MutableTexture != nullptr",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                ,0x1861,L"");
                            if (bVar29) {
                              pcVar16 = (code *)swi(3);
                              (*pcVar16)();
                              return;
                            }
                            goto LAB_14abc8d4a;
                          }
LAB_14abc8f93:
                          pFVar96 = local_9c8;
                          uVar84 = ::GetTypeHash((FHandle *)(local_9c8 + 1));
                          iVar34 = TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
                                   ::
                                   FindIndexByHash<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle>
                                             ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
                                               *)&local_a48->Object->ImageToPlatformDataMap,uVar84,
                                              (FHandle *)(pFVar96 + 1));
                          if (iVar34 != -1) {
                            SetTexturePropertiesFromMutableImageProps(pUVar60,local_958,bVar28);
                            ppFVar65 = TMapBase<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>_>
                                       ::FindChecked((
                                                  TMapBase<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>_>
                                                  *)&local_a48->Object->ImageToPlatformDataMap,
                                                  (FHandle *)(pFVar96 + 1));
                            pFVar67 = *ppFVar65;
                            if (pFVar78 == (FWeakObjectPtr *)0x0) {
                              UTexture2D::SetPlatformData(pUVar60,pFVar67);
                            }
                            else {
                              pFVar66 = UTexture2D::GetPlatformData(pUVar60);
                              if (((pFVar67->Mips).Array.ArrayNum != (pFVar66->Mips).Array.ArrayNum)
                                 && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                        (
                                                  "PlatformData->Mips.Num() == MutableTexture->GetPlatformData()->Mips.Num()"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x187e,L""), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              pFVar66 = UTexture2D::GetPlatformData(pUVar60);
                              if (((pFVar66->Mips).Array.ArrayNum < 1) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              lVar47 = *(longlong *)(pFVar66->Mips).Array.AllocatorInstance.Data;
                              if (((pFVar67->Mips).Array.ArrayNum < 1) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              if ((*(short *)(*(longlong *)
                                               (pFVar67->Mips).Array.AllocatorInstance.Data + 0x48)
                                   != *(short *)(lVar47 + 0x48)) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "PlatformData->Mips[0].SizeX == MutableTexture->GetPlatformData()->Mips[0].SizeX"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x187f,L""), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              pFVar66 = UTexture2D::GetPlatformData(pUVar60);
                              if (((pFVar66->Mips).Array.ArrayNum < 1) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              lVar47 = *(longlong *)(pFVar66->Mips).Array.AllocatorInstance.Data;
                              if (((pFVar67->Mips).Array.ArrayNum < 1) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              if ((*(short *)(*(longlong *)
                                               (pFVar67->Mips).Array.AllocatorInstance.Data + 0x4a)
                                   != *(short *)(lVar47 + 0x4a)) &&
                                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "PlatformData->Mips[0].SizeY == MutableTexture->GetPlatformData()->Mips[0].SizeY"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x1880,L""), bVar29)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              local_730 = pFVar67;
                              local_728[0].ReferenceController = ::operator_new(0x18);
                              if (local_728[0].ReferenceController !=
                                  (TReferenceControllerBase<1> *)0x0) {
                                (local_728[0].ReferenceController)->SharedReferenceCount =
                                     (atomic<int>)0x1;
                                (local_728[0].ReferenceController)->WeakReferenceCount =
                                     (atomic<int>)0x1;
                                (local_728[0].ReferenceController)->_padding_ =
                                     (longlong)
                                     &
                                     ___7__TReferenceControllerWithDeleter_UFTexturePlatformData__U__DefaultDeleter_UFTexturePlatformData___SharedPointerInternals___00_SharedPointerInternals__6B_
                                ;
                                local_728[0].ReferenceController[1]._padding_ = (longlong)pFVar67;
                              }
                              local_848 = local_730;
                              local_730 = (FTexturePlatformData *)0x0;
                              SharedPointerInternals::FSharedReferencer<1>::operator=
                                        (&FStack_840,local_728);
                              SharedPointerInternals::TReferenceControllerBase<1>::
                              ReleaseSharedReferenceNoInline(local_728[0].ReferenceController);
                            }
                            pFVar96 = local_9c8;
                            pFVar85 = local_a48->Object;
                            if (*(int *)&(pFVar85->ImageToPlatformDataMap).field_0x8 !=
                                *(int *)&(pFVar85->ImageToPlatformDataMap).field_0x34) {
                              uVar84 = ::GetTypeHash((FHandle *)(local_9c8 + 1));
                              TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
                              ::
                              RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle>
                                        ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
                                          *)&pFVar85->ImageToPlatformDataMap,uVar84,
                                         (FHandle *)(pFVar96 + 1));
                            }
                            if (bVar28 != false) {
                              uVar89 = 0;
                              pFVar67 = UTexture2D::GetPlatformData(pUVar60);
                              uVar98 = uVar89;
                              if (0 < (pFVar67->Mips).Array.ArrayNum) {
                                do {
                                  pFVar67 = UTexture2D::GetPlatformData(pUVar60);
                                  uVar35 = (uint)uVar89;
                                  uVar84 = 0;
                                  if ((int)uVar35 < (pFVar67->Mips).Array.ArrayNum) {
                                    uVar84 = ~uVar35 >> 0x1f;
                                  }
                                  if ((uVar84 == 0) &&
                                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar29)) {
                                    pcVar16 = (code *)swi(3);
                                    (*pcVar16)();
                                    return;
                                  }
                                  FBulkData::ClearBulkDataFlags
                                            ((FBulkData *)
                                             (*(longlong *)
                                               ((pFVar67->Mips).Array.AllocatorInstance.Data +
                                               uVar98) + 0x20),0x100);
                                  uVar89 = (ulonglong)(uVar35 + 1);
                                  pFVar67 = UTexture2D::GetPlatformData(pUVar60);
                                  uVar98 = uVar98 + 8;
                                } while ((int)(uVar35 + 1) < (pFVar67->Mips).Array.ArrayNum);
                                uVar99 = (ulonglong)local_a50;
                              }
                            }
                            bVar29 = -1 < CpuChannel->Enabled;
                            if (bVar29) {
                              FCpuProfilerTrace::GetOrCreateSpecId
                                        (&__CpuProfilerEventSpecId6304,"Mutable_UpdateResource",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                         ,0x18a0);
                              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6304);
                            }
                            pTVar97 = local_8f0;
                            if (local_a70 == (FWeakObjectPtr *)0x0) {
                              if (pUVar60 != (UTexture2D *)0x0) {
                                local_a58 = *(FTexturePlatformData **)(pUVar60->_padding_ + 0x18);
                                local_5f0 = Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister
                                                      ();
                                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                   (local_5f0 != (UClass *)0x0)) {
                                  UE::GC::MarkAsReachable((UObject *)local_5f0);
                                }
                                lVar47 = (*(code *)local_a58)(&pUVar60->_padding_,&local_5f0);
                                if (lVar47 == 0) {
LAB_14abc96d1:
                                  pUVar64 = GetTransientPackageAsObject();
                                  FObjectInitializer::AssertIfInConstructor
                                            (pUVar64,
                                             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                            );
                                  pUVar62 = Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister
                                                      ();
                                  FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                            ((FStaticConstructObjectParameters *)local_148,pUVar62);
                                  local_148._8_8_ = pUVar64;
                                  pUVar64 = StaticConstructObject_Internal
                                                      ((FStaticConstructObjectParameters *)local_148
                                                      );
                                  if (local_148._64_8_ != 0) {
                                    plVar71 = (longlong *)(local_148 + 0x50);
                                    if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
                                      plVar71 = (longlong *)local_148._104_8_;
                                    }
                                    (**(code **)(*plVar71 + 0x10))();
                                  }
                                  if (pUVar64 != (UObject *)0x0) {
                                    FObjectPtr::operator=
                                              ((FObjectPtr *)(pUVar64 + 1),(UObject *)local_780);
                                    if ((((0xff < (int)local_a78) || (0xff < (int)local_a60)) ||
                                        (0xff < (int)local_a5c)) &&
                                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "LODIndex < 256 && InstanceComponentIndex < 256 && ImageIndex < 256"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x18c2,L""), bVar31)) {
                                      pcVar16 = (code *)swi(3);
                                      (*pcVar16)();
                                      return;
                                    }
                                    *(uint *)&pUVar64[1].field_0x8 =
                                         local_9c8[1].ComparisonIndex.Value;
                                    TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                                    ::operator=((TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                                                 *)&pUVar64[1].field_0x10,
                                                (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                                                 *)(local_9c8 + 2));
                                    local_708 = (FWeakObjectPtr *)0x0;
                                    SharedPointerInternals::FSharedReferencer<1>::
                                    FSharedReferencer<1>
                                              (&local_700,
                                               (FWeakReferencer<1> *)&pUVar64[1].field_0x18);
                                    if (local_700.ReferenceController !=
                                        (TReferenceControllerBase<1> *)0x0) {
                                      local_708 = *(FWeakObjectPtr **)&pUVar64[1].field_0x10;
                                    }
                                    local_a70 = local_708;
                                    if (local_708 != (FWeakObjectPtr *)0x0) {
                                      local_988 = (UCustomizableObjectInstanceUsage *)
                                                  (local_708 + 0x17);
                                      local_a58 = (FTexturePlatformData *)
                                                  CONCAT44(local_a58._4_4_,
                                                           *(undefined4 *)&pUVar64[1].field_0x8);
                                      local_2a8 = local_988;
                                      if (local_988 == (UCustomizableObjectInstanceUsage *)0x0)
                                      goto LAB_14abcb44b;
                                      EnterCriticalSection((LPCRITICAL_SECTION)local_988);
                                      pFVar63 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                                ::FindChecked((
                                                  TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                                  *)(local_a70 + 3),(uint)local_a58);
                                      pFVar63->RefCount = pFVar63->RefCount + 1;
                                      LeaveCriticalSection((LPCRITICAL_SECTION)local_988);
                                    }
                                    SharedPointerInternals::TReferenceControllerBase<1>::
                                    ReleaseSharedReferenceNoInline(local_700.ReferenceController);
                                    *(undefined4 *)&pUVar64[1].field_0x20 =
                                         *(undefined4 *)(local_a08 + local_9d0 + 0xc);
                                    pUVar64[1].field_0x24 = (char)local_9c8[4].ComparisonIndex.Value
                                    ;
                                    pUVar64[1].field_0x25 = (char)local_a60;
                                    pUVar64[1].field_0x26 = (char)local_a5c;
                                    pUVar64[1].field_0x27 = (char)local_9c8[4].Number;
                                    if (pUVar64 + 2 != (UObject *)(local_9c8 + 9)) {
                                      TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                                                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                                                 (pUVar64 + 2),*(int **)(local_9c8 + 9),
                                                 local_9c8[10].ComparisonIndex.Value,
                                                 *(int *)&pUVar64[2].field_0xc);
                                    }
                                    local_190 = SUB84(local_998.Object,0);
                                    uStack_18c = (undefined4)((ulonglong)local_998.Object >> 0x20);
                                    uStack_188 = SUB84(local_998.SharedReferenceCount.
                                                       ReferenceController,0);
                                    uStack_184 = (undefined4)
                                                 ((ulonglong)
                                                  local_998.SharedReferenceCount.ReferenceController
                                                 >> 0x20);
                                    if (local_998.SharedReferenceCount.ReferenceController !=
                                        (TReferenceControllerBase<1> *)0x0) {
                                      LOCK();
                                      (local_998.SharedReferenceCount.ReferenceController)->
                                      SharedReferenceCount =
                                           (atomic<int>)
                                           ((int)(local_998.SharedReferenceCount.ReferenceController
                                                 )->SharedReferenceCount + 1);
                                      UNLOCK();
                                    }
                                    pTVar79 = *(TReferenceControllerBase<1> **)
                                               &pUVar64[2].field_0x18;
                                    local_4f8 = *(undefined1 (*) [16])&pUVar64[2].field_0x10;
                                    *(undefined4 *)&pUVar64[2].field_0x10 = local_190;
                                    *(undefined4 *)&pUVar64[2].field_0x14 = uStack_18c;
                                    *(undefined4 *)&pUVar64[2].field_0x18 = uStack_188;
                                    *(undefined4 *)&pUVar64[2].field_0x1c = uStack_184;
                                    SharedPointerInternals::TReferenceControllerBase<1>::
                                    ReleaseSharedReferenceNoInline(pTVar79);
                                    (**(code **)(pUVar60->_padding_ + 0x10))
                                              (&pUVar60->_padding_,pUVar64);
                                  }
                                }
                                else {
                                  pUVar62 = Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister
                                                      ();
                                  iVar34 = (int)pUVar62->_padding_;
                                  if ((*(int *)(*(longlong *)(lVar47 + 0x10) + 0x38) < iVar34) ||
                                     ((longlong *)
                                      *(undefined1 **)
                                       (*(longlong *)(*(longlong *)(lVar47 + 0x10) + 0x30) +
                                       (longlong)iVar34 * 8) != &pUVar62->_padding_))
                                  goto LAB_14abc96d1;
                                }
                                (**(code **)(pUVar60->_padding_ + 0x328))(pUVar60);
                                pTVar97 = local_8f0;
                              }
                            }
                            else {
                              TMapBase<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>_>
                              ::TIterator::TIterator
                                        ((TIterator *)local_598,
                                         (TMapBase<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>_>
                                          *)local_8f0,false);
                              if (local_57c < *(int *)(local_588 + 0x18)) {
                                do {
                                  pUVar61 = (UTexture2D *)
                                            FWeakObjectPtr::Get((FWeakObjectPtr *)
                                                                (*(longlong *)local_598._0_8_ + 0x20
                                                                + (longlong)local_57c * 0x30));
                                  if (pUVar61 == pUVar60) {
                                    TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                    ::RemoveByIndex(local_570,local_57c);
                                    local_560 = true;
                                    goto LAB_14abc93ef;
                                  }
                                  local_580 = local_580 & ~local_58c;
                                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)
                                             (local_598 + 8));
                                } while (local_57c < *(int *)(local_588 + 0x18));
                              }
                              if (local_560 != false) {
LAB_14abc93ef:
                                if (local_55f != false) {
                                  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                  ::ConditionalRehash(local_568,
                                                      *(int *)&(local_568->Elements).field_0x8 -
                                                      *(int *)&(local_568->Elements).field_0x34,
                                                      Default);
                                }
                              }
                              if (local_848 == (FTexturePlatformData *)0x0) {
                                bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("ReusedTexturePlatformData.IsValid()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x18ae,L"");
                                if (bVar31) {
                                  pcVar16 = (code *)swi(3);
                                  (*pcVar16)();
                                  return;
                                }
                                if (local_848 == (FTexturePlatformData *)0x0) goto LAB_14abc990b;
                              }
                              local_718.Object = local_848;
                              local_718.SharedReferenceCount.ReferenceController =
                                   FStack_840.ReferenceController;
                              if (FStack_840.ReferenceController !=
                                  (TReferenceControllerBase<1> *)0x0) {
                                LOCK();
                                (FStack_840.ReferenceController)->SharedReferenceCount =
                                     (atomic<int>)
                                     ((int)(FStack_840.ReferenceController)->SharedReferenceCount +
                                     1);
                                UNLOCK();
                              }
                              if ((local_848 == (FTexturePlatformData *)0x0) &&
                                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("IsValid()",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x25d,L""), bVar31)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              uVar35 = 0;
                              local_a70 = (FWeakObjectPtr *)
                                          ((ulonglong)local_a70 & 0xffffffff00000000);
                              uVar84 = ((local_718.Object)->Mips).Array.ArrayNum;
                              if (uVar84 != 0) {
                                do {
                                  local_a58 = local_718.Object;
                                  uVar91 = 0;
                                  if ((int)uVar35 < ((local_718.Object)->Mips).Array.ArrayNum) {
                                    uVar91 = ~uVar35 >> 0x1f;
                                  }
                                  if ((uVar91 == 0) &&
                                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar31)) {
                                    pcVar16 = (code *)swi(3);
                                    (*pcVar16)();
                                    return;
                                  }
                                  local_a58 = *(FTexturePlatformData **)
                                               ((local_a58->Mips).Array.AllocatorInstance.Data +
                                               (longlong)(int)uVar35 * 8);
                                  lVar68 = FBulkData::GetBulkDataSize
                                                     ((FBulkData *)((longlong)local_a58 + 0x20));
                                  if (0 < lVar68) {
                                    local_6e8.DestX = 0;
                                    local_6e8.DestY = 0;
                                    local_6e8.SrcX = 0;
                                    local_6e8.SrcY = 0;
                                    uVar9 = *(ushort *)((longlong)local_a58 + 0x48);
                                    local_6e8.Height = (uint)*(ushort *)((longlong)local_a58 + 0x4a)
                                    ;
                                    local_6e8.Width = (uint)uVar9;
                                    uVar35 = UTexture2D::GetSizeX(pUVar60);
                                    if ((uVar9 != uVar35 && (int)uVar35 <= (int)(uint)uVar9) &&
                                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "int32(Region.Width) <= Texture->GetSizeX()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x16a4,L""), bVar31)) {
                                      pcVar16 = (code *)swi(3);
                                      (*pcVar16)();
                                      return;
                                    }
                                    iVar34 = UTexture2D::GetSizeY(pUVar60);
                                    if ((iVar34 < (int)local_6e8.Height) &&
                                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "int32(Region.Height) <= Texture->GetSizeY()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x16a5,L""), bVar31)) {
                                      pcVar16 = (code *)swi(3);
                                      (*pcVar16)();
                                      return;
                                    }
                                    uVar35 = (uint)local_a70;
                                    UpdateTextureRegionsMutable
                                              (pUVar60,(uint)local_a70,uVar84,&local_6e8,
                                               (uint)*(ushort *)((longlong)local_a58 + 0x48) << 2,
                                               (TBulkData<unsigned_char> *)
                                               ((longlong)local_a58 + 0x20),&local_718);
                                  }
                                  uVar35 = uVar35 + 1;
                                  local_a70 = (FWeakObjectPtr *)CONCAT44(local_a70._4_4_,uVar35);
                                } while (uVar35 < uVar84);
                              }
                              SharedPointerInternals::TReferenceControllerBase<1>::
                              ReleaseSharedReferenceNoInline
                                        (local_718.SharedReferenceCount.ReferenceController);
                              pTVar97 = local_8f0;
                            }
LAB_14abc990b:
                            if (bVar29) {
                              FCpuProfilerTrace::OutputEndEvent();
                            }
                            if (pUVar60 != (UTexture2D *)0x0) {
                              local_5a0 = pUVar60;
                              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                UE::GC::MarkAsReachable((UObject *)pUVar60);
                              }
                              local_890.ObjectIndex = 0;
                              local_890.ObjectSerialNumber = 0;
                              local_5c0 = local_5a0;
                              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                 (local_5a0 != (UTexture2D *)0x0)) {
                                UE::GC::MarkAsReachable((UObject *)local_5a0);
                              }
                              FWeakObjectPtr::operator=(&local_890,(FObjectPtr)&local_5c0);
                              local_318 = &local_8b8;
                              local_310 = &local_890;
                              TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                              ::
                              Emplace<TPairInitializer<FTextureCache::FId_const_&,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_&&>_>
                                        (pTVar97,(TPairInitializer<FTextureCache::FId_const_&,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_&&>
                                                  *)local_61c,(bool *)&local_318);
                              TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                              ::TIterator::TIterator((TIterator *)local_1d0,pTVar97);
                              unique0x0000d600 = local_1d0._16_16_;
                              local_698 = (longlong *)local_1d0._0_8_;
                              auStack_690._0_8_ = local_1d0._8_8_;
                              local_660 = 0;
                              local_678 = local_1b0;
                              pTStack_670 = pTStack_1a8;
                              iVar34 = local_1d0._28_4_;
                              local_668 = pTVar97;
                              if (iVar34 < *(int *)(local_1d0._16_8_ + 0x18)) {
                                do {
                                  bVar29 = FWeakObjectPtr::IsStale
                                                     ((FWeakObjectPtr *)
                                                      (*local_698 + 0x20 + (longlong)iVar34 * 0x30),
                                                      true,false);
                                  if (bVar29) {
                                    TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                    ::RemoveByIndex(pTStack_670,iStack_67c);
                                    local_660 = CONCAT11(local_660._1_1_,1);
                                  }
                                  uStack_680 = uStack_680 & ~auStack_690._4_4_;
                                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)
                                             auStack_690);
                                  iVar34 = iStack_67c;
                                } while (iStack_67c < *(int *)(auStack_690._8_8_ + 0x18));
                                if (((char)local_660 != '\0') && (local_660._1_1_ != '\0')) {
                                  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                  ::ConditionalRehash(local_668,
                                                      *(int *)&(local_668->Elements).field_0x8 -
                                                      *(int *)&(local_668->Elements).field_0x34,
                                                      Default);
                                }
                              }
                            }
                            goto LAB_14abc8d66;
                          }
                          if (1 < (byte)LogMutable._0_1_) {
                            local_7d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_7d0.Data.ArrayNum = 0;
                            local_7d0.Data.ArrayMax = 0;
                            ::FString::AppendInt(&local_7d0,pFVar96[1].ComparisonIndex.Value);
                            UE::Logging::Private::BasicLog<2>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                            if (local_7d0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
                            }
                          }
                          if (local_940.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_940.Data.AllocatorInstance.Data);
                          }
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(FStack_840.ReferenceController);
                          TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                          ::FHandle::~FHandle(&local_8b8.Resource);
                        }
                        else {
LAB_14abc87cc:
                          if ((char)pFVar96[0xb].ComparisonIndex.Value == '\0') goto LAB_14abc8ad9;
                          bVar29 = UE::Mutable::Private::FImage::IsReference((FImage *)local_8d8);
                          if ((!bVar29) &&
                             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("MutableImage->IsReference()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x181a,L""), bVar29)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          if ((local_8d8 == (FName)0x0) &&
                             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar29)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          uVar84 = UE::Mutable::Private::FImage::GetReferencedTexture
                                             ((FImage *)local_8d8);
                          if ((-1 < (int)uVar84) &&
                             ((int)uVar84 < (local_a18->PassThroughTextures).ArrayNum)) {
                            pFVar54 = (local_a18->PassThroughTextures).AllocatorInstance.Data;
                            lVar47 = (longlong)(int)uVar84 * 5 + 1;
                            local_2d8.WeakPtr = *(FWeakObjectPtr *)(pFVar54 + lVar47 * 8 + -8);
                            FSoftObjectPath::FSoftObjectPath
                                      (&local_2d8.ObjectID,(FSoftObjectPath *)(pFVar54 + lVar47 * 8)
                                      );
                            pUVar61 = (UTexture2D *)
                                      TPersistentObjectPtr<FSoftObjectPath>::Get(&local_2d8);
                            local_a30 = pUVar61;
                            if (pUVar61 == (UTexture2D *)0x0) {
LAB_14abc88be:
                              if (1 < (byte)LogMutable._0_1_) {
                                FSoftObjectPath::ToString(&local_2d8.ObjectID,&local_238);
                                UE::Logging::Private::BasicLog<2>
                                          (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                                if (local_238.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                                }
                              }
                              bVar29 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<7189396884065097770>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x182a,"false");
                              if (bVar29) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              pUVar61 = (UTexture2D *)
                                        FSoftObjectPtr::LoadSynchronous
                                                  ((FSoftObjectPtr *)&local_2d8);
                              if (pUVar61 != (UTexture2D *)0x0) {
                                local_a30 = pUVar61;
                                pUVar62 = Z_Construct_UClass_UTexture_NoRegister();
                                iVar34 = (int)pUVar62->_padding_;
                                if ((iVar34 <= *(int *)(pUVar61->_padding_ + 0x38)) &&
                                   ((longlong *)
                                    *(undefined1 **)
                                     (*(longlong *)(pUVar61->_padding_ + 0x30) +
                                     (longlong)iVar34 * 8) == &pUVar62->_padding_))
                                goto LAB_14abc8981;
                              }
                              pUVar61 = (UTexture2D *)0x0;
                              local_a30 = (UTexture2D *)0x0;
                            }
                            else {
                              pUVar62 = Z_Construct_UClass_UTexture_NoRegister();
                              iVar34 = (int)pUVar62->_padding_;
                              if ((*(int *)(pUVar61->_padding_ + 0x38) < iVar34) ||
                                 ((longlong *)
                                  *(undefined1 **)
                                   (*(longlong *)(pUVar61->_padding_ + 0x30) + (longlong)iVar34 * 8)
                                  != &pUVar62->_padding_)) goto LAB_14abc88be;
                            }
LAB_14abc8981:
                            if (local_2d8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_2d8.ObjectID.SubPathString.Data.AllocatorInstance.
                                            Data);
                            }
                            if (pUVar61 != (UTexture2D *)0x0) goto LAB_14abc8ad9;
                          }
                          if (1 < (byte)LogMutable._0_1_) {
                            UE::Logging::Private::BasicLog<2>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                          }
                          local_800 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                                       *)0x0;
                          local_7f8 = local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                      ReferenceController;
                          if (local_8b8.Resource.WeakRegistry.WeakReferenceCount.ReferenceController
                              != (TReferenceControllerBase<1> *)0x0) {
                            aVar7 = (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                    ReferenceController)->SharedReferenceCount;
                            do {
                              if (aVar7 == (atomic<int>)0x0) {
                                local_7f8 = (TReferenceControllerBase<1> *)0x0;
                                break;
                              }
                              LOCK();
                              aVar38 = (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                       ReferenceController)->SharedReferenceCount;
                              bVar29 = aVar7 == aVar38;
                              if (bVar29) {
                                (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                ReferenceController)->SharedReferenceCount =
                                     (atomic<int>)((int)aVar7 + 1);
                                aVar38 = aVar7;
                              }
                              UNLOCK();
                              aVar7 = aVar38;
                            } while (!bVar29);
                          }
                          pTVar88 = local_800;
                          if (local_7f8 != (TReferenceControllerBase<1> *)0x0) {
                            pTVar88 = local_8b8.Resource.WeakRegistry.Object;
                          }
                          pTVar79 = local_7f8;
                          local_800 = pTVar88;
                          if (pTVar88 !=
                              (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                               *)0x0) {
                            pFVar4 = &pTVar88->CriticalSection;
                            local_a70 = (FWeakObjectPtr *)
                                        CONCAT44(local_a70._4_4_,local_8b8.Resource.Id);
                            local_2a0 = pFVar4;
                            if (pFVar4 == (FWindowsRecursiveMutex *)0x0) goto LAB_14abcb44b;
                            EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
                            pFVar63 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                      ::FindChecked((
                                                  TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                                  *)&pTVar88->Entries,(uint)local_a70);
                            pFVar63->RefCount = pFVar63->RefCount - 1;
                            if (pFVar63->RefCount == 0) {
                              local_a30 = (UTexture2D *)&pFVar63->KeyContainer;
                              if (*(int *)&(pTVar88->KeyIndex).field_0x8 !=
                                  *(int *)&(pTVar88->KeyIndex).field_0x34) {
                                uVar84 = UE::Mutable::Private::GetTypeHash
                                                   ((((FKeyContainer *)local_a30)->Key).Object);
                                TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                                ::
                                RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer>
                                          ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                                            *)&pTVar88->KeyIndex,uVar84,(FKeyContainer *)local_a30);
                              }
                              local_898[0] = (uint)local_a70;
                              if (*(int *)&(pTVar88->Entries).field_0x8 !=
                                  *(int *)&(pTVar88->Entries).field_0x34) {
                                TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                                ::RemoveImpl<unsigned_int>
                                          ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                                            *)&pTVar88->Entries,(uint)local_a70,local_898);
                              }
                            }
                            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
                            pTVar79 = local_7f8;
                          }
LAB_14abca138:
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar79);
                          if (local_8b8.Resource.WeakRegistry.WeakReferenceCount.ReferenceController
                              != (TReferenceControllerBase<1> *)0x0) {
                            LOCK();
                            paVar1 = &(local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                      ReferenceController)->WeakReferenceCount;
                            aVar7 = *paVar1;
                            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                            UNLOCK();
                            if ((aVar7 == (atomic<int>)0x1) &&
                               (local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
                              (**(code **)((local_8b8.Resource.WeakRegistry.WeakReferenceCount.
                                           ReferenceController)->_padding_ + 8))();
                            }
                          }
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_8d0);
                        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
                        }
                        local_a5c = local_a5c + 1;
                      } while ((int)local_a5c < (int)(uint)*(ushort *)(local_a08 + local_9d0 + 2));
                    }
                    lVar47 = local_9d0;
                    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_228.Data.AllocatorInstance.Data);
                    }
                    if (bVar27) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    pUVar64 = *(UObject **)&local_880->field_0x0;
                    uVar84 = ::GetHash(&local_a90,false);
                    if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
                      FVar93 = (ForElementType<FSetElementId>)&local_c8.Hash;
                      if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar93 = local_c8.Hash.SecondaryData;
                      }
                      iVar34 = *(int *)((longlong)FVar93 +
                                       (ulonglong)(local_c8.HashSize - 1U & uVar84) * 4);
                      lVar53 = local_c8.Elements._0_8_;
                      while (iVar34 != -1) {
                        lVar70 = (longlong)iVar34 * 0x20;
                        if (*(uint *)(lVar53 + lVar70) == local_a90.ParentMaterialID) {
                          iVar36 = *(int *)(lVar53 + 0x10 + lVar70);
                          if ((iVar36 == local_a90.Params.ArrayNum) &&
                             (bVar27 = CompareItems<FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam,int>
                                                 (*(FMutableMaterialPlaceHolderParam **)
                                                   (lVar53 + 8 + lVar70),
                                                  (FMutableMaterialPlaceHolderParam *)
                                                  local_a90.Params.AllocatorInstance.Data,iVar36),
                             lVar53 = local_c8.Elements._0_8_, bVar27)) {
                            if ((iVar34 != -1) &&
                               (lVar53 = (longlong)iVar34 * 0x20 + local_c8.Elements._0_8_,
                               lVar53 != 0)) {
                              uVar84 = *(uint *)(lVar53 + 4);
                              uVar35 = 0;
                              if ((int)uVar84 < local_a00.ArrayNum) {
                                uVar35 = ~uVar84 >> 0x1f;
                              }
                              if ((uVar35 == 0) &&
                                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar27)) {
                                pcVar16 = (code *)swi(3);
                                (*pcVar16)();
                                return;
                              }
                              pUVar64 = *(UObject **)
                                         &local_a00.AllocatorInstance.Data
                                          [(longlong)(int)uVar84 * 0x30].field_0x0;
                              goto LAB_14abca8cb;
                            }
                            break;
                          }
                        }
                        iVar34 = *(int *)(lVar53 + 0x18 + lVar70);
                      }
                    }
                    bVar27 = -1 < CpuChannel->Enabled;
                    if (bVar27) {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId6425,
                                 "Mutable_BuildMaterials_CreateMaterial",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                 ,0x1919);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6425);
                    }
                    TSet<FMutableMaterialPlaceholder,DefaultKeyFuncs<FMutableMaterialPlaceholder,0>,FDefaultSetAllocator>
                    ::Emplace<FMutableMaterialPlaceholder_const_&>
                              (&local_c8,(FMutableMaterialPlaceholder *)local_614,(bool *)&local_a90
                              );
                    iVar34 = local_798->ArrayNum;
                    if (iVar34 == local_798->ArrayMax) {
                      iVar34 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x830,&local_798->AllocatorInstance,&local_798->ArrayMax);
                    }
                    local_798->ArrayNum = iVar34 + 1;
                    pUVar60 = (UTexture2D *)
                              ((local_798->AllocatorInstance).Data + (longlong)iVar34 * 0x30);
                    local_a30 = pUVar60;
                    DefaultConstructItems<FGeneratedMaterial,int>(pUVar60,1);
                    *(undefined4 *)&pUVar60->_padding_ = *(undefined4 *)(local_a08 + lVar47 + 0xc);
                    local_180 = *(longlong *)(local_a08 + lVar47 + 0x30);
                    lStack_178 = *(longlong *)(local_a08 + lVar47 + 0x38);
                    if (lStack_178 != 0) {
                      LOCK();
                      *(int *)(lStack_178 + 8) = *(int *)(lStack_178 + 8) + 1;
                      UNLOCK();
                    }
                    local_658 = pUVar60->_padding_;
                    pTStack_650 = (TReferenceControllerBase<1> *)pUVar60->_padding_;
                    pUVar60->_padding_ = local_180;
                    pUVar60->_padding_ = lStack_178;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTStack_650);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar64 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar64);
                    }
                    pUVar60->_padding_ = (longlong)pUVar64;
                    if (local_908 != local_908 + (int)uStack_900) {
                      pFVar80 = local_908;
                      do {
                        if ((pFVar80->SurfaceId == (uint)pUVar60->_padding_) &&
                           ((pFVar80->Material).Object == (FMaterial *)pUVar60->_padding_)) {
                          lVar47 = ((longlong)pFVar80 - (longlong)local_908) / 6 +
                                   ((longlong)pFVar80 - (longlong)local_908 >> 0x3f);
                          uVar84 = (int)(lVar47 >> 3) - (int)(lVar47 >> 0x3f);
                          goto LAB_14abca452;
                        }
                        pFVar80 = pFVar80 + 1;
                      } while (pFVar80 != local_908 + (int)uStack_900);
                    }
                    uVar84 = 0xffffffff;
LAB_14abca452:
                    if ((bVar25) && (uVar84 != 0xffffffff)) {
                      uVar35 = 0;
                      if ((int)uVar84 < (int)uStack_900) {
                        uVar35 = ~uVar84 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar28)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      pFVar80 = local_908 + (int)uVar84;
                      pUVar81 = (UMaterialInstanceDynamic *)0x0;
                      if ((pFVar80->MaterialInterface).field0_0x0.DebugPtr ==
                          (UMaterialInterface *)0x0) {
LAB_14abca4e5:
                        this_04 = (UMaterialInstanceDynamic *)0x0;
                      }
                      else {
                        pUVar62 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
                        bVar28 = FObjectPtr::IsA((FObjectPtr *)pFVar80,pUVar62);
                        pUVar81 = (UMaterialInstanceDynamic *)
                                  (pFVar80->MaterialInterface).field0_0x0.DebugPtr;
                        this_04 = pUVar81;
                        if (!bVar28) goto LAB_14abca4e5;
                      }
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar81 != (UMaterialInstanceDynamic *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar81);
                      }
                      local_a30->_padding_ = (longlong)(pFVar80->MaterialInterface).field0_0x0;
                      if (this_04 == (UMaterialInstanceDynamic *)0x0) goto LAB_14abca53a;
LAB_14abca596:
                      pUVar55 = local_928;
                      pUVar60 = local_a30;
                      iVar34 = local_a90.Params.ArrayNum;
                      pFVar54 = local_a90.Params.AllocatorInstance.Data + 0x28;
                      pFVar95 = (FMutableMaterialPlaceHolderParam *)
                                (local_a90.Params.AllocatorInstance.Data +
                                (longlong)local_a90.Params.ArrayNum * 0x40);
LAB_14abca5c0:
                      if (local_a90.Params.ArrayNum != iVar34) {
                        local_a3d = 0;
                        `TCheckedPointerIterator<FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam_const_,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_a3d);
                      }
                      pFVar2 = (FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28);
                      if (pFVar2 != pFVar95) {
                        EVar12 = ((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->Type;
                        if (EVar12 == Vector) {
                          if (((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->LayerIndex <
                              0) {
                            local_2e8._s_0.R =
                                 (((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->Vector).
                                 field0_0x0._s_0.R;
                            local_2e8._s_0.G = (float)*(undefined4 *)(pFVar54 + -0x10);
                            local_2e8._s_0.B = (float)*(undefined4 *)(pFVar54 + -0xc);
                            local_2e8._s_0.A = (float)*(undefined4 *)(pFVar54 + -8);
                            iVar36 = _isnan((double)local_2e8._s_0.R);
                            if (iVar36 != 0) {
                              local_2f8 = pFVar2->ParamName;
                              local_638.Name.ComparisonIndex = local_2f8.ComparisonIndex.Value;
                              local_638.Name.Number = local_2f8.Number;
                              local_2f0 = 2;
                              local_2ec = 0xffffffff;
                              local_638.Name.DisplayIndex.Value = 0;
                              local_638.Index = -1;
                              local_638.Association.Value = '\x02';
                              UMaterialInterface::GetVectorParameterValue
                                        ((UMaterialInterface *)pUVar55,&local_638,
                                         (FLinearColor *)&local_2e8._s_0,false);
                            }
                            local_218._0_8_ = CONCAT44(local_2e8._s_0.G,local_2e8._s_0.R);
                            local_218._8_8_ = CONCAT44(local_2e8._s_0.A,local_2e8._s_0.B);
                            UMaterialInstanceDynamic::SetVectorParameterValue
                                      (this_04,pFVar2->ParamName,(FLinearColor *)&local_218._s_0);
                            pFVar54 = pFVar54 + 0x40;
                            goto LAB_14abca5c0;
                          }
                          local_4a8.Name = pFVar2->ParamName;
                          local_4a8.Association.Value = '\0';
                          local_208._0_8_ =
                               *(undefined8 *)
                                &(((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->Vector).
                                 field0_0x0;
                          local_208._8_8_ = *(undefined8 *)(pFVar54 + -0xc);
                          local_4a8.Index =
                               ((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->LayerIndex;
                          UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                                    (this_04,&local_4a8,(FLinearColor *)&local_208._s_0);
                        }
                        else {
                          if (EVar12 == Scalar) {
                            if (((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->LayerIndex
                                < 0) {
                              UMaterialInstanceDynamic::SetScalarParameterValue
                                        (this_04,pFVar2->ParamName,
                                         ((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->
                                         Scalar);
                              pFVar54 = pFVar54 + 0x40;
                            }
                            else {
                              local_4b8.Name = pFVar2->ParamName;
                              local_4b8.Association.Value = '\0';
                              local_4b8.Index =
                                   ((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->
                                   LayerIndex;
                              UMaterialInstanceDynamic::SetScalarParameterValueByInfo
                                        (this_04,&local_4b8,
                                         ((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->
                                         Scalar);
                              pFVar54 = pFVar54 + 0x40;
                            }
                            goto LAB_14abca5c0;
                          }
                          if (EVar12 != Texture) goto LAB_14abca89c;
                          if (((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->LayerIndex <
                              0) {
                            UMaterialInstanceDynamic::SetTextureParameterValue
                                      (this_04,pFVar2->ParamName,
                                       ((TObjectPtr<UTexture>_u_0 *)&pFVar54[0x10].field_0x0)->
                                       DebugPtr);
                          }
                          else {
                            local_4c8.Name = pFVar2->ParamName;
                            local_4c8.Association.Value = '\0';
                            local_4c8.Index =
                                 ((FMutableMaterialPlaceHolderParam *)(pFVar54 + -0x28))->LayerIndex
                            ;
                            UMaterialInstanceDynamic::SetTextureParameterValueByInfo
                                      (this_04,&local_4c8,
                                       ((TObjectPtr<UTexture>_u_0 *)&pFVar54[0x10].field_0x0)->
                                       DebugPtr);
                          }
                          if (bDisableNotifyComponentsOfTextureUpdates == false) {
                            lVar47 = (longlong)(int)local_a60;
                            uVar84 = 0;
                            if ((int)local_a60 < local_8e8.ArrayNum) {
                              uVar84 = local_9ac;
                            }
                            if ((uVar84 == 0) &&
                               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar28)) {
                              pcVar16 = (code *)swi(3);
                              (*pcVar16)();
                              return;
                            }
                            local_8e8.AllocatorInstance.Data[lVar47] = (FScriptContainerElement)0x1;
                          }
                          if ((((FScriptContainerElement *)pUVar60->_padding_ <= pFVar54) &&
                              (pFVar54 < (FScriptContainerElement *)pUVar60->_padding_ +
                                         (longlong)*(int *)((longlong)&pUVar60->_padding_ + 4) *
                                         0x18)) &&
                             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar28)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar36 = (int)pUVar60->_padding_;
                          piVar3 = (int *)((longlong)&pUVar60->_padding_ + 4);
                          if (iVar36 == *piVar3) {
                            iVar36 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x818,(ForAnyElementType *)&pUVar60->_padding_,
                                                piVar3);
                          }
                          *(int *)&pUVar60->_padding_ = iVar36 + 1;
                          pFVar41 = (FString *)(pUVar60->_padding_ + (longlong)iVar36 * 0x18);
                          ::FString::FString(pFVar41,(FString *)pFVar54);
                          pUVar15 = ((TObjectPtr<UTexture>_u_0 *)&pFVar54[0x10].field_0x0)->DebugPtr
                          ;
                          pFVar41[1].Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)pUVar15;
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (pUVar15 != (UTexture *)0x0)) {
                            UE::GC::MarkAsReachable((UObject *)pUVar15);
                            pFVar54 = pFVar54 + 0x40;
                            goto LAB_14abca5c0;
                          }
                        }
LAB_14abca89c:
                        pFVar54 = pFVar54 + 0x40;
                        goto LAB_14abca5c0;
                      }
                      uVar99 = (ulonglong)local_a50;
                    }
                    else {
LAB_14abca53a:
                      pUVar60 = local_a30;
                      if (local_a90.Params.ArrayNum != 0) {
                        local_614._4_4_ = 0;
                        local_790 = 0;
                        pUVar69 = GetTransientPackage();
                        this_04 = UMaterialInstanceDynamic::Create
                                            ((UMaterialInterface *)local_928,(UObject *)pUVar69,
                                             (FName)0x0);
                        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
                           (this_04 == (UMaterialInstanceDynamic *)0x0)) {
                          pUVar60->_padding_ = (longlong)this_04;
                          if (this_04 == (UMaterialInstanceDynamic *)0x0) goto LAB_14abca8ba;
                        }
                        else {
                          UE::GC::MarkAsReachable((UObject *)this_04);
                          pUVar60->_padding_ = (longlong)this_04;
                        }
                        goto LAB_14abca596;
                      }
                    }
LAB_14abca8ba:
                    pUVar64 = (UObject *)local_a30->_padding_;
                    if (bVar27) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
LAB_14abca8cb:
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar64 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar64);
                    }
                    pFVar48 = local_788;
                    *(UObject **)&local_880->field_0x0 = pUVar64;
                    if (local_788 != (FCustomizableInstanceComponentData *)0x0) {
                      pTVar5 = &local_788->OverrideMaterials;
                      local_920 = pUVar64;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar64 != (UObject *)0x0)) {
                        UE::GC::MarkAsReachable(pUVar64);
                      }
                      pFVar54 = (pTVar5->AllocatorInstance).Data;
                      if (((pFVar54 <= (FScriptContainerElement *)&local_920) &&
                          ((FScriptContainerElement *)&local_920 <
                           pFVar54 + (longlong)(pFVar48->OverrideMaterials).ArrayMax * 8)) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar27)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      iVar34 = (pFVar48->OverrideMaterials).ArrayNum;
                      piVar3 = &(pFVar48->OverrideMaterials).ArrayMax;
                      if (iVar34 == *piVar3) {
                        iVar34 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&pTVar5->AllocatorInstance,piVar3);
                      }
                      (pFVar48->OverrideMaterials).ArrayNum = iVar34 + 1;
                      *(UObject **)((pTVar5->AllocatorInstance).Data + (longlong)iVar34 * 8) =
                           local_920;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (local_920 != (UObject *)0x0)) {
                        UE::GC::MarkAsReachable(local_920);
                      }
                    }
                    DestructItems<FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam,int>
                              ((FMutableMaterialPlaceHolderParam *)
                               local_a90.Params.AllocatorInstance.Data,local_a90.Params.ArrayNum);
                    param_1 = local_a48;
                    uVar84 = local_a78;
                    if ((FMutableMaterialPlaceHolderParam *)local_a90.Params.AllocatorInstance.Data
                        != (FMutableMaterialPlaceHolderParam *)0x0) {
                      FMemory::Free(local_a90.Params.AllocatorInstance.Data);
                      param_1 = local_a48;
                      uVar84 = local_a78;
                    }
                  }
LAB_14abca9ff:
                  local_a38 = local_a38 + 1;
                  local_918 = local_918 + 1;
                  lVar47 = local_8f8;
                } while ((int)local_a38 < (int)(uint)*(ushort *)(local_910 + local_8f8 + 0x2a));
              }
              local_a78 = uVar84 + 1;
              local_a20 = local_a20 + 1;
            } while ((int)local_a78 < (int)(uint)*(ushort *)(local_9a0 + local_9a8 + 6));
            uVar98 = (ulonglong)local_a3c;
          }
          if (!bVar33) {
            if (param_1->Object->bStreamMeshLODs == false) {
              pbVar52 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                        ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                       *)&param_1->Object->FirstLODAvailable,
                                      *(FName *)(local_8c0 + local_870 * 8));
              local_a50 = (uint)*pbVar52;
              if (local_a50 < (uint)uVar98) {
                pFVar54 = (FScriptContainerElement *)(longlong)(int)(uint)uVar98;
                lVar47 = (ulonglong)*pbVar52 << 3;
                local_9a0 = pFVar54;
                do {
                  uVar84 = local_a50;
                  local_9a8 = lVar47;
                  lVar53 = (**(code **)(*(longlong *)local_a68.Handle + 0x330))
                                     (local_a68.Handle,uVar98);
                  lVar70 = (**(code **)(*(longlong *)local_a68.Handle + 0x330))
                                     (local_a68.Handle,uVar84);
                  if ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar70 + 8) !=
                      (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar53 + 8)) {
                    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar70 + 8),
                               (int *)(((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar53 + 8))->
                                      AllocatorInstance).Data,*(int *)(lVar53 + 0x10),
                               *(int *)(lVar70 + 0x14));
                  }
                  plVar71 = (longlong *)(**(code **)(*(longlong *)local_a68.Handle + 0x398))();
                  uVar99 = 0;
                  uVar35 = 0;
                  if ((int)uVar84 < (int)plVar71[1]) {
                    uVar35 = ~uVar84 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  iVar34 = *(int *)(*(longlong *)(*plVar71 + lVar47) + 0x18);
                  if (((int)plVar71[1] <= (int)local_a3c) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  if ((iVar34 != *(int *)(*(longlong *)(*plVar71 + (longlong)pFVar54 * 8) + 0x18))
                     && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                            ("NumRenderSections == LODRenderData[FirstLOD].RenderSections.Num()"
                                             ,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                             ,0x19b5,L""), bVar25)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  if (((int)plVar71[1] <= (int)local_a3c) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pFVar86 = local_9a0;
                  uVar35 = local_a50;
                  if ((iVar34 == *(int *)(*(longlong *)(*plVar71 + (longlong)pFVar54 * 8) + 0x18))
                     && (pFVar54 = pFVar86, local_8f8 = (longlong)iVar34, 0 < iVar34)) {
                    local_9ac = ~uVar84 >> 0x1f;
                    uVar98 = uVar99;
                    do {
                      if (((int)plVar71[1] <= (int)local_a3c) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      uVar91 = (uint)uVar99;
                      lVar47 = *(longlong *)(*plVar71 + (longlong)pFVar86 * 8);
                      uVar84 = 0;
                      if ((int)uVar91 < *(int *)(lVar47 + 0x18)) {
                        uVar84 = ~uVar91 >> 0x1f;
                      }
                      if ((uVar84 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      uVar10 = *(undefined2 *)(*(longlong *)(lVar47 + 0x10) + uVar98);
                      uVar84 = 0;
                      if ((int)uVar35 < (int)plVar71[1]) {
                        uVar84 = local_9ac;
                      }
                      if ((uVar84 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      lVar47 = *(longlong *)(*plVar71 + local_9a8);
                      uVar84 = 0;
                      if ((int)uVar91 < *(int *)(lVar47 + 0x18)) {
                        uVar84 = ~uVar91 >> 0x1f;
                      }
                      if ((uVar84 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      uVar99 = (ulonglong)(uVar91 + 1);
                      *(undefined2 *)(*(longlong *)(lVar47 + 0x10) + uVar98) = uVar10;
                      uVar98 = uVar98 + 0x118;
                      local_8f8 = local_8f8 + -1;
                    } while (local_8f8 != 0);
                    lVar47 = local_9a8;
                    uVar84 = local_a50;
                    local_8f8 = 0;
                  }
                  uVar98 = (ulonglong)local_a3c;
                  local_a50 = uVar84 + 1;
                  lVar47 = lVar47 + 8;
                  param_1 = local_a48;
                  local_9a8 = lVar47;
                } while ((int)local_a50 < (int)local_a3c);
              }
            }
            lVar47 = (longlong)(int)local_a60;
            uVar84 = 0;
            if ((int)local_a60 < local_950.ArrayNum) {
              uVar84 = ~local_a60 >> 0x1f;
            }
            if ((uVar84 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            FVar77.Data = local_950.AllocatorInstance.Data;
            FVar8 = local_950.AllocatorInstance.Data[lVar47];
            lVar53 = (**(code **)(*(longlong *)local_a68.Handle + 0x398))();
            if (*(char *)(lVar53 + 0x2c) == '\0') {
LAB_14abcae73:
              bVar32 = 0;
            }
            else {
              puVar72 = (undefined8 *)(**(code **)(*(longlong *)local_a68.Handle + 0x3c8))();
              if ((*(int *)(puVar72 + 1) == local_a00.ArrayNum) &&
                 (bVar25 = CompareItems<FSkeletalMaterial,int>
                                     ((FSkeletalMaterial *)*puVar72,
                                      (FSkeletalMaterial *)local_a00.AllocatorInstance.Data,
                                      *(int *)(puVar72 + 1)), bVar25)) goto LAB_14abcae73;
              bVar32 = 1;
            }
            FVar77.Data[lVar47] = (FScriptContainerElement)((byte)FVar8 | bVar32);
            USkeletalMesh::SetMaterials((USkeletalMesh *)local_a68.Handle,&local_a00);
          }
          if (bVar26) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (local_9c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9c0.Data);
          }
          local_c8.HashSize = 0;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FMutableMaterialPlaceholder>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FMutableMaterialPlaceholder>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_c8.Elements);
          pUVar90 = local_a18;
          if ((FSkeletalMaterial *)local_a00.AllocatorInstance.Data != (FSkeletalMaterial *)0x0) {
            FMemory::Free(local_a00.AllocatorInstance.Data);
            pUVar90 = local_a18;
          }
        }
      }
LAB_14abcaee3:
      pFVar85 = param_1->Object;
      local_a60 = local_a60 + 1;
      this = local_a10;
    } while ((int)local_a60 < (int)(uint)pFVar85->NumInstanceComponents);
  }
  for (FVar77.Data = local_950.AllocatorInstance.Data;
      FVar77.Data != local_950.AllocatorInstance.Data + local_950.ArrayNum;
      FVar77.Data = FVar77.Data + 1) {
    if (*FVar77.Data == (FScriptContainerElement)0x1) {
      if ((int)FVar77.Data - (int)local_950.AllocatorInstance.Data != -1) goto LAB_14abcaf70;
      break;
    }
  }
  for (FVar77.Data = local_8e8.AllocatorInstance.Data;
      FVar77.Data != local_8e8.AllocatorInstance.Data + local_8e8.ArrayNum;
      FVar77.Data = FVar77.Data + 1) {
    if (*FVar77.Data == (FScriptContainerElement)0x1) {
      if ((int)FVar77.Data - (int)local_8e8.AllocatorInstance.Data != -1) goto LAB_14abcaf70;
      break;
    }
  }
  goto LAB_14abcb326;
LAB_14abcaf70:
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6616,"Mutable_BuildMaterials_RecreateRenderState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x19d8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6616);
  }
  TObjectIterator<UCustomizableObjectInstanceUsage>::
  TObjectIterator<UCustomizableObjectInstanceUsage>(&local_5b8,RF_ClassDefaultObject,true,Borrowed);
  pUVar24 = local_780;
  pUVar22 = local_a10;
  while ((lVar47 = (longlong)local_5b8.Index, -1 < local_5b8.Index &&
         (local_5b8.Index < local_5b8.ObjectArray.ArrayNum))) {
    uVar84 = 0;
    if (local_5b8.Index < local_5b8.ObjectArray.ArrayNum) {
      uVar84 = (uint)~local_5b8.Index >> 0x1f;
    }
    if ((uVar84 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    this_01 = *(UCustomizableObjectInstanceUsage **)
               (local_5b8.ObjectArray.AllocatorInstance.Data + lVar47 * 8);
    local_988 = this_01;
    if (((this_01 == (UCustomizableObjectInstanceUsage *)0x0) ||
        (((uint)this_01->_padding_ >> 0x1e & 1) != 0)) ||
       (pUVar73 = UCustomizableObjectInstanceUsage::GetCustomizableObjectInstance(this_01),
       pUVar73 != pUVar24)) {
LAB_14abcb2e8:
      TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_5b8);
      pUVar90 = local_a18;
    }
    else {
      UCustomizableObjectInstanceUsage::GetComponentName(this_01);
      pFVar96 = (FName *)(pUVar90->ComponentNamesPerObjectComponent).AllocatorInstance.Data;
      for (pFVar59 = pFVar96;
          pFVar59 != pFVar96 + (local_a18->ComponentNamesPerObjectComponent).ArrayNum;
          pFVar59 = pFVar59 + 1) {
        if (*pFVar59 == local_778) {
          iVar34 = (int)((longlong)pFVar59 - (longlong)pFVar96 >> 3);
          goto LAB_14abcb0c7;
        }
      }
      iVar34 = -1;
LAB_14abcb0c7:
      uVar89 = 0;
      uVar99 = 0xffffffffffffffff;
      local_a70 = (FWeakObjectPtr *)CONCAT44(local_a70._4_4_,0xffffffff);
      local_870 = 0xffffffffffffffff;
      local_a20 = 0;
      pFVar85 = local_a48->Object;
      pTVar94 = local_a48;
      uVar98 = uVar89;
      if ((pFVar85->InstanceUpdateData).Components.ArrayNum < 1) {
        uVar84 = 0xffffffff;
      }
      else {
        do {
          uVar84 = (uint)uVar89;
          uVar35 = 0;
          if ((int)uVar84 < (pFVar85->InstanceUpdateData).Components.ArrayNum) {
            uVar35 = ~uVar84 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             pTVar94 = local_a48, bVar33)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar99 = local_a20;
          if (*(int *)((pFVar85->InstanceUpdateData).Components.AllocatorInstance.Data + uVar98) ==
              iVar34) {
            if (((int)uVar84 < 0) || (local_950.ArrayNum <= (int)uVar84)) goto LAB_14abcb220;
            uVar35 = 0;
            if ((int)uVar84 < local_950.ArrayNum) {
              uVar35 = ~uVar84 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            if (local_950.AllocatorInstance.Data[local_a20] == (FScriptContainerElement)0x0)
            goto LAB_14abcb220;
            bVar33 = true;
            goto LAB_14abcb227;
          }
          pFVar85 = pTVar94->Object;
          local_a20 = local_a20 + 1;
          uVar89 = (ulonglong)(uVar84 + 1);
          uVar98 = uVar98 + 0x30;
        } while ((int)(uVar84 + 1) < (pFVar85->InstanceUpdateData).Components.ArrayNum);
        uVar99 = local_870;
        uVar84 = (uint)local_a70;
      }
LAB_14abcb220:
      bVar33 = false;
      if ((int)uVar84 < 0) {
LAB_14abcb245:
        bVar26 = false;
      }
      else {
LAB_14abcb227:
        if ((local_8e8.ArrayNum <= (int)uVar84) ||
           (local_8e8.AllocatorInstance.Data[uVar99] == (FScriptContainerElement)0x0))
        goto LAB_14abcb245;
        bVar26 = true;
      }
      if ((!bVar33) && (!bVar26)) goto LAB_14abcb2e8;
      this_05 = UCustomizableObjectInstanceUsage::GetAttachParent(local_988);
      pTVar74 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                        *)&pUVar22->SkeletalMeshes,local_778);
      plVar71 = (longlong *)&pTVar74->field_0x8;
      if (pTVar74 == (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) {
        plVar71 = (longlong *)0x0;
      }
      if (this_05 == (USkeletalMeshComponent *)0x0) goto LAB_14abcb2e8;
      if (plVar71 != (longlong *)0x0) {
        pUVar75 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_05);
        if ((USkeletalMesh *)*plVar71 == (USkeletalMesh *)0x0) {
          bVar27 = pUVar75 == (USkeletalMesh *)0x0;
        }
        else {
          bVar27 = (USkeletalMesh *)*plVar71 == pUVar75;
        }
        if (!bVar27) goto LAB_14abcb2e8;
      }
      if (!bVar33) {
        if (bVar26) {
          pFVar76 = IStreamingManager::Get();
          (**(code **)(pFVar76->_padding_ + 0x70))(pFVar76,this_05);
        }
        goto LAB_14abcb2e8;
      }
      UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this_05);
      TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_5b8);
      pUVar90 = local_a18;
    }
  }
  if (local_5b8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.ObjectArray.AllocatorInstance.Data);
  }
  this = local_a10;
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
    this = local_a10;
  }
LAB_14abcb326:
  if (CpuChannel->Enabled < 0) {
    pFVar18 = (FGeneratedTexture *)(this->GeneratedTextures).AllocatorInstance.Data;
    uVar14._0_4_ = (this->GeneratedTextures).ArrayNum;
    uVar14._4_4_ = (this->GeneratedTextures).ArrayMax;
    (this->GeneratedTextures).AllocatorInstance.Data = local_9e8.Data;
    (this->GeneratedTextures).ArrayNum = (int)uStack_9e0;
    (this->GeneratedTextures).ArrayMax = uStack_9e0._4_4_;
    local_9e8.Data = (FScriptContainerElement *)pFVar18;
    uStack_9e0 = uVar14;
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6674,"Mutable_BuildMaterials_Exchange",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x1a12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6674);
    pFVar18 = (FGeneratedTexture *)(this->GeneratedTextures).AllocatorInstance.Data;
    uVar19._0_4_ = (this->GeneratedTextures).ArrayNum;
    uVar19._4_4_ = (this->GeneratedTextures).ArrayMax;
    (this->GeneratedTextures).AllocatorInstance.Data = local_9e8.Data;
    (this->GeneratedTextures).ArrayNum = (int)uStack_9e0;
    (this->GeneratedTextures).ArrayMax = uStack_9e0._4_4_;
    local_9e8.Data = (FScriptContainerElement *)pFVar18;
    uStack_9e0 = uVar19;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_8e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.AllocatorInstance.Data);
  }
  if (local_950.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_950.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  DestructItems<FGeneratedMaterial,int>(local_908,(int)uStack_900);
  if (local_908 != (FGeneratedMaterial *)0x0) {
    FMemory::Free(local_908);
  }
  DestructItems<FGeneratedTexture,int>((FGeneratedTexture *)local_9e8.Data,(int)uStack_9e0);
  if ((FGeneratedTexture *)local_9e8.Data != (FGeneratedTexture *)0x0) {
    FMemory::Free(local_9e8.Data);
  }
  if (bVar101) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CanUpdateInstance @ 14abd2f60

bool __thiscall UCustomizableInstancePrivate::CanUpdateInstance(UCustomizableInstancePrivate *this)

{
  longlong lVar1;
  UCustomizableObject *this_00;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  this_00 = *(UCustomizableObject **)(lVar1 + 0x98);
  if (this_00 == (UCustomizableObject *)0x0) {
    return false;
  }
  bVar3 = UCustomizableObject::IsCompiled(this_00);
  return bVar3;
}

// ClearInstanceComponentData @ 14abd2fd0

void __thiscall
UCustomizableInstancePrivate::ClearInstanceComponentData
          (UCustomizableInstancePrivate *this,FName *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FHandle *pFVar4;
  bool bVar5;
  int iVar6;
  FCustomizableInstanceComponentData *this_00;
  
  this_00 = GetComponentData(this,param_1);
  if (this_00 != (FCustomizableInstanceComponentData *)0x0) {
    pTVar3 = &this_00->LastMeshIdPerLOD;
    piVar1 = &(this_00->LastMeshIdPerLOD).ArrayMax;
    pFVar4 = (FHandle *)(pTVar3->AllocatorInstance).Data;
    iVar6 = (this_00->LastMeshIdPerLOD).ArrayNum;
    piVar2 = &(this_00->LastMeshIdPerLOD).ArrayNum;
    if ((this_00->LastMeshIdPerLOD).ArrayMax < 8) {
      DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                (pFVar4,iVar6);
      *piVar2 = 0;
      if (*piVar1 != 8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,8,&pTVar3->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                (pFVar4,iVar6);
      *piVar2 = 0;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,8,&pTVar3->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x18,8);
    bVar5 = 1 < *(int *)&(this_00->AnimSlotToBP).field_0x48;
    if (!bVar5) {
      TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this_00->AnimSlotToBP).field_0x8);
    *(undefined4 *)&(this_00->AnimSlotToBP).field_0x8 = 0;
    if (*(int *)&(this_00->AnimSlotToBP).field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)&(this_00->AnimSlotToBP).field_0xc);
    }
    *(undefined4 *)&(this_00->AnimSlotToBP).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->AnimSlotToBP).field_0x34 = 0;
    iVar6 = *(int *)&(this_00->AnimSlotToBP).field_0x2c;
    *(undefined4 *)&(this_00->AnimSlotToBP).field_0x28 = 0;
    if ((iVar6 < 0) || (0x80 < iVar6)) {
      *(undefined4 *)&(this_00->AnimSlotToBP).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->AnimSlotToBP).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this_00->AnimSlotToBP).field_0x48 = 1;
      TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    bVar5 = 1 < (this_00->AssetUserDataArray).HashSize;
    if (!bVar5) {
      TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
      ::UnhashElements(&this_00->AssetUserDataArray);
    }
    iVar6 = *(int *)&(this_00->AssetUserDataArray).Elements.field_0xc;
    *(undefined4 *)&(this_00->AssetUserDataArray).Elements.field_0x8 = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this_00->AssetUserDataArray,0,
                 (int *)&(this_00->AssetUserDataArray).Elements.field_0xc);
    }
    *(undefined4 *)&(this_00->AssetUserDataArray).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->AssetUserDataArray).Elements.field_0x34 = 0;
    iVar6 = *(int *)&(this_00->AssetUserDataArray).Elements.field_0x2c;
    *(undefined4 *)&(this_00->AssetUserDataArray).Elements.field_0x28 = 0;
    if ((iVar6 < 0) || (0x80 < iVar6)) {
      *(undefined4 *)&(this_00->AssetUserDataArray).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this_00->AssetUserDataArray).Elements.field_0x10,0);
    }
    if (bVar5) {
      (this_00->AssetUserDataArray).HashSize = 1;
      TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
      ::Rehash(&this_00->AssetUserDataArray);
    }
    (this_00->ClothingPhysicsAssetsToStream).ArrayNum = 0;
    if ((this_00->ClothingPhysicsAssetsToStream).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this_00->ClothingPhysicsAssetsToStream).AllocatorInstance,0,
                 &(this_00->ClothingPhysicsAssetsToStream).ArrayMax);
    }
    (this_00->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
    (this_00->OverrideMaterials).ArrayNum = 0;
    if ((this_00->OverrideMaterials).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this_00->OverrideMaterials).AllocatorInstance,0,
                 &(this_00->OverrideMaterials).ArrayMax);
    }
    iVar6 = (this_00->PhysicsAssets).AdditionalPhysicsAssets.ArrayMax;
    (this_00->PhysicsAssets).AdditionalPhysicsAssets.ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this_00->PhysicsAssets).AdditionalPhysicsAssets.AllocatorInstance,0,
                 &(this_00->PhysicsAssets).AdditionalPhysicsAssets.ArrayMax);
    }
    iVar6 = (this_00->PhysicsAssets).AdditionalPhysicsAssetsToLoad.ArrayMax;
    (this_00->PhysicsAssets).AdditionalPhysicsAssetsToLoad.ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this_00->PhysicsAssets).AdditionalPhysicsAssetsToLoad.AllocatorInstance,0,
                 &(this_00->PhysicsAssets).AdditionalPhysicsAssetsToLoad.ArrayMax);
    }
    iVar6 = (this_00->PhysicsAssets).PhysicsAssetsToMerge.ArrayMax;
    (this_00->PhysicsAssets).PhysicsAssetsToMerge.ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this_00->PhysicsAssets).PhysicsAssetsToMerge.AllocatorInstance,0,
                 &(this_00->PhysicsAssets).PhysicsAssetsToMerge.ArrayMax);
    }
    iVar6 = (this_00->PhysicsAssets).PhysicsAssetToLoad.ArrayMax;
    (this_00->PhysicsAssets).PhysicsAssetToLoad.ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this_00->PhysicsAssets,0,
                 &(this_00->PhysicsAssets).PhysicsAssetToLoad.ArrayMax);
    }
    (this_00->Skeletons).Skeleton.field0_0x0.DebugPtr = (USkeleton *)0x0;
    iVar6 = (this_00->Skeletons).SkeletonIds.ArrayMax;
    (this_00->Skeletons).SkeletonIds.ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(this_00->Skeletons).SkeletonIds.AllocatorInstance,0,
                 &(this_00->Skeletons).SkeletonIds.ArrayMax);
    }
    iVar6 = (this_00->Skeletons).SkeletonsToMerge.ArrayMax;
    (this_00->Skeletons).SkeletonsToMerge.ArrayNum = 0;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this_00->Skeletons).SkeletonsToMerge.AllocatorInstance,0,
                 &(this_00->Skeletons).SkeletonsToMerge.ArrayMax);
    }
    (this_00->StreamedResourceIndex).ArrayNum = 0;
    if ((this_00->StreamedResourceIndex).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this_00->StreamedResourceIndex).AllocatorInstance,0,
                 &(this_00->StreamedResourceIndex).ArrayMax);
    }
  }
  return;
}

// CreateTexture @ 14abd4e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTexture2D * __thiscall
UCustomizableInstancePrivate::CreateTexture(UCustomizableInstancePrivate *this,FString *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UTexture2D *this_00;
  UCustomizableObjectSystem *this_01;
  UCustomizableObjectSystemPrivate *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = ::FName::FName(local_a8,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
  FVar1 = *pFVar2;
  pUVar3 = GetTransientPackage();
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UTexture2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar3;
  local_98._16_8_ = FVar1;
  this_00 = (UTexture2D *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  this_01 = UCustomizableObjectSystem::GetInstance();
  pUVar5 = UCustomizableObjectSystem::GetPrivate(this_01);
  FLogBenchmarkUtil::AddTexture(&pUVar5->LogBenchmarkUtil,this_00);
  UTexture2D::SetPlatformData(this_00,(FTexturePlatformData *)0x0);
  return this_00;
}

// DiscardResources @ 14abd5e70

void __thiscall UCustomizableInstancePrivate::DiscardResources(UCustomizableInstancePrivate *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *this_00;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USkeletalMesh *this_01;
  code *pcVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xc5d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar11 = UCustomizableObjectInstance::StaticClass();
    pTVar7 = CVarEnableReleaseMeshResources.Ref;
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar11->_padding_)) {
      if (this->SkeletalMeshStatus == Success) {
        bVar8 = IsInParallelGameThread();
        if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = &this->SkeletalMeshes;
        if (pTVar7->ShadowedValue[0] != false) {
          iVar3 = *(int *)&(this->SkeletalMeshes).field_0x28;
          puVar1 = &(this->SkeletalMeshes).field_0x10;
          iVar13 = 0;
          iVar15 = 0;
          uVar9 = 1;
          iVar10 = 0;
          if (iVar3 != 0) {
            puVar16 = *(uint **)&(this->SkeletalMeshes).field_0x20;
            if (puVar16 == (uint *)0x0) {
              puVar16 = (uint *)puVar1;
            }
            uVar12 = *puVar16;
            while (uVar12 == 0) {
              iVar13 = iVar13 + 1;
              iVar15 = iVar15 + 0x20;
              iVar10 = iVar3;
              if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
              goto LAB_14abd5fee;
              uVar12 = puVar16[iVar13];
            }
            uVar9 = -uVar12 & uVar12;
            uVar2 = (ulonglong)uVar9 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            local_res10 = (int)lVar4;
            iVar10 = local_res10 + -1 + iVar15;
            if (iVar3 < iVar10) {
              iVar10 = iVar3;
            }
          }
LAB_14abd5fee:
          uVar12 = *(uint *)&(this->SkeletalMeshes).field_0x28;
          uVar17 = uVar12 & 0xffffffe0;
          TStack_60._padding_ = CONCAT44(uVar9,iVar13);
          TStack_60.CurrentBitIndex = iVar10;
          TStack_60.UnvisitedBitMask = 0xffffffff;
          iVar13 = (int)uVar12 >> 5;
          TStack_60._28_4_ = local_9c;
          TStack_60.BaseBitIndex = iVar15;
          uStack_40 = CONCAT44(uStack_6c,
                               *(int *)&(this->SkeletalMeshes).field_0x8 -
                               *(int *)&(this->SkeletalMeshes).field_0x34);
          TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = *(uint *)&(this->SkeletalMeshes).field_0x28;
          if (uVar12 != uVar9) {
            puVar5 = *(undefined1 **)&(this->SkeletalMeshes).field_0x20;
            puVar14 = puVar1;
            if (puVar5 != (undefined1 *)0x0) {
              puVar14 = puVar5;
            }
            uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
            while (uVar12 == 0) {
              iVar13 = iVar13 + 1;
              uVar17 = uVar17 + 0x20;
              uVar12 = uVar9;
              if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar13)
              goto LAB_14abd6100;
              uVar12 = *(uint *)(puVar14 + (longlong)iVar13 * 4);
            }
            uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            uVar12 = (int)lVar4 + -1 + uVar17;
            if ((int)uVar9 < (int)uVar12) {
              uVar12 = uVar9;
            }
          }
LAB_14abd6100:
          while( true ) {
            if (*(int *)&(this->SkeletalMeshes).field_0x8 -
                *(int *)&(this->SkeletalMeshes).field_0x34 != (int)uStack_40) {
              `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if ((TStack_60.CurrentBitIndex == uVar12) &&
               (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
            this_01 = *(USkeletalMesh **)
                       (*(longlong *)&this_00->field_0x0 + 8 +
                       (longlong)TStack_60.CurrentBitIndex * 0x18);
            bVar8 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01);
            if ((bVar8) &&
               (bVar8 = UStreamableRenderAsset::HasPendingInitOrStreaming
                                  ((UStreamableRenderAsset *)this_01,false), !bVar8)) {
              USkeletalMesh::ReleaseResources(this_01);
            }
            TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
          }
        }
        bVar8 = 1 < *(int *)&(this->SkeletalMeshes).field_0x48;
        if (!bVar8) {
          TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        *(undefined4 *)&(this->SkeletalMeshes).field_0x8 = 0;
        if (*(int *)&(this->SkeletalMeshes).field_0xc != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_00,0,
                     (int *)&(this->SkeletalMeshes).field_0xc);
        }
        *(undefined4 *)&(this->SkeletalMeshes).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->SkeletalMeshes).field_0x34 = 0;
        iVar3 = *(int *)&(this->SkeletalMeshes).field_0x2c;
        *(undefined4 *)&(this->SkeletalMeshes).field_0x28 = 0;
        if ((iVar3 < 0) || (0x80 < iVar3)) {
          *(undefined4 *)&(this->SkeletalMeshes).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkeletalMeshes).field_0x10,0);
        }
        if (bVar8) {
          *(undefined4 *)&(this->SkeletalMeshes).field_0x48 = 1;
          TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                    *)this_00);
        }
      }
      InvalidateGeneratedData(this);
    }
  }
  return;
}

// FindBoolParameterNameIndex @ 14abd7eb0

int __thiscall
UCustomizableInstancePrivate::FindBoolParameterNameIndex
          (UCustomizableInstancePrivate *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),param_1,Bool);
  return iVar4;
}

// FindFloatParameterNameIndex @ 14abd8340

int __thiscall
UCustomizableInstancePrivate::FindFloatParameterNameIndex
          (UCustomizableInstancePrivate *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),param_1,Float);
  return iVar4;
}

// FindIntParameterNameIndex @ 14abd83a0

int __thiscall
UCustomizableInstancePrivate::FindIntParameterNameIndex
          (UCustomizableInstancePrivate *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),param_1,Int);
  return iVar4;
}

// FindProjectorParameterNameIndex @ 14abd8b60

int __thiscall
UCustomizableInstancePrivate::FindProjectorParameterNameIndex
          (UCustomizableInstancePrivate *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),param_1,Projector);
  return iVar4;
}

// FindVectorParameterNameIndex @ 14abd8c70

int __thiscall
UCustomizableInstancePrivate::FindVectorParameterNameIndex
          (UCustomizableInstancePrivate *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FCustomizableObjectInstanceDescriptor::FindTypedParameterIndex
                    ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),param_1,Color);
  return iVar4;
}

// GetComponentData @ 14abd9d30

FCustomizableInstanceComponentData * __thiscall
UCustomizableInstancePrivate::GetComponentData(UCustomizableInstancePrivate *this,FName *param_1)

{
  longlong lVar1;
  UCustomizableObject *this_00;
  TObjectPtr<UModelResources>_u_0 TVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCustomizableInstanceComponentData *pFVar7;
  UCustomizableObjectPrivate *pUVar8;
  uint uVar9;
  FName *pFVar10;
  
  lVar1 = this->_padding_;
  if ((lVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xc38,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FCustomizableInstanceComponentData *)(*pcVar4)();
    return pFVar7;
  }
  this_00 = *(UCustomizableObject **)(lVar1 + 0x98);
  if ((this_00 != (UCustomizableObject *)0x0) &&
     (bVar5 = UCustomizableObject::IsCompiled(this_00), bVar5)) {
    pUVar8 = UCustomizableObject::GetPrivate(this_00);
    TVar2 = (pUVar8->ModelResources).field0_0x0;
    if ((TVar2.DebugPtr == (UModelResources *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalModelResources",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x8e2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FCustomizableInstanceComponentData *)(*pcVar4)();
      return pFVar7;
    }
    pFVar3 = *(FName **)((longlong)TVar2 + 0x400);
    if (pFVar3 != pFVar3 + ((TVar2.DebugPtr)->ComponentNamesPerObjectComponent).ArrayNum) {
      pFVar10 = pFVar3;
      do {
        if (*pFVar10 == *param_1) {
          uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
          if ((int)uVar9 < 0) {
            return (FCustomizableInstanceComponentData *)0x0;
          }
          if ((this->ComponentsData).ArrayNum <= (int)uVar9) {
            return (FCustomizableInstanceComponentData *)0x0;
          }
          uVar6 = 0;
          if ((int)uVar9 < (this->ComponentsData).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FCustomizableInstanceComponentData *)(*pcVar4)();
            return pFVar7;
          }
          return (FCustomizableInstanceComponentData *)
                 ((this->ComponentsData).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x150);
        }
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 != pFVar3 + ((TVar2.DebugPtr)->ComponentNamesPerObjectComponent).ArrayNum);
    }
  }
  return (FCustomizableInstanceComponentData *)0x0;
}

// GetComponentData @ 14abd9ea0

FCustomizableInstanceComponentData * __thiscall
UCustomizableInstancePrivate::GetComponentData
          (UCustomizableInstancePrivate *this,FCustomizableObjectComponentIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FCustomizableInstanceComponentData *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1.Index) && (param_1.Index < (this->ComponentsData).ArrayNum)) {
    uVar4 = 0;
    if (param_1.Index < (this->ComponentsData).ArrayNum) {
      uVar4 = (uint)~param_1.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCustomizableInstanceComponentData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FCustomizableInstanceComponentData *)
           ((this->ComponentsData).AllocatorInstance.Data + (longlong)param_1.Index * 0x150);
  }
  return (FCustomizableInstanceComponentData *)0x0;
}

// GetComponentData @ 14abd9f40

FCustomizableInstanceComponentData * __thiscall
UCustomizableInstancePrivate::GetComponentData
          (UCustomizableInstancePrivate *this,FCustomizableObjectComponentIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FCustomizableInstanceComponentData *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1.Index) && (param_1.Index < (this->ComponentsData).ArrayNum)) {
    uVar4 = 0;
    if (param_1.Index < (this->ComponentsData).ArrayNum) {
      uVar4 = (uint)~param_1.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCustomizableInstanceComponentData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FCustomizableInstanceComponentData *)
           ((this->ComponentsData).AllocatorInstance.Data + (longlong)param_1.Index * 0x150);
  }
  return (FCustomizableInstanceComponentData *)0x0;
}

// GetDescriptor @ 14abda770

FCustomizableObjectInstanceDescriptor * __thiscall
UCustomizableInstancePrivate::GetDescriptor(UCustomizableInstancePrivate *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FCustomizableObjectInstanceDescriptor *pFVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCustomizableObjectInstanceDescriptor *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98);
}

// GetGeneratedPhysicsAssetsForAnimInstance @ 14abdb080

TArray<FAnimInstanceOverridePhysicsAsset,TSizedDefaultAllocator<32>_> * __thiscall
UCustomizableInstancePrivate::GetGeneratedPhysicsAssetsForAnimInstance
          (UCustomizableInstancePrivate *this,TSubclassOf<UAnimInstance> param_1)

{
  UObject *pUVar1;
  TArray<FAnimInstanceOverridePhysicsAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = &TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
            ::Find((TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
                    *)&this->AnimBpPhysicsAssets,(TSubclassOf<UAnimInstance_const_>)&local_res8)->
            AnimInstancePropertyIndexAndPhysicsAssets;
  return pTVar2;
}

// GetPublic @ 14abe05c0

UCustomizableObjectInstance * __thiscall
UCustomizableInstancePrivate::GetPublic(UCustomizableInstancePrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectInstance *pUVar3;
  
  pUVar3 = (UCustomizableObjectInstance *)this->_padding_;
  if (pUVar3 == (UCustomizableObjectInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableObjectInstance *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetState @ 14abe0980

int __thiscall UCustomizableInstancePrivate::GetState(UCustomizableInstancePrivate *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = FCustomizableObjectInstanceDescriptor::GetState
                    ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98));
  return iVar4;
}

// InitCustomizableObjectData @ 14abe1670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCustomizableInstancePrivate::InitCustomizableObjectData
          (UCustomizableInstancePrivate *this,UCustomizableObject *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  FEntry *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  FWeakReferencer<1> FVar15;
  undefined1 auStackY_218 [32];
  uint local_1c8 [2];
  FHandle local_1c0;
  UCustomizableInstancePrivate *local_1a8;
  FCustomizableInstanceComponentData local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a8 = this;
  InvalidateGeneratedData(this);
  if ((param_1 != (UCustomizableObject *)0x0) &&
     (bVar7 = UCustomizableObject::IsCompiled(param_1), bVar7)) {
    FCustomizableInstanceComponentData::FCustomizableInstanceComponentData(&local_198);
    local_1c0.WeakRegistry.Object =
         (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
          *)0x0;
    local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_1c0._4_4_ = 0;
    local_1c0.Id = 0xffffffff;
    DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
              ((FHandle *)local_198.LastMeshIdPerLOD.AllocatorInstance.Data,
               local_198.LastMeshIdPerLOD.ArrayNum);
    local_198.LastMeshIdPerLOD.ArrayNum = 0;
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    if (local_198.LastMeshIdPerLOD.ArrayMax != 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,8,&local_198.LastMeshIdPerLOD.AllocatorInstance,0,
                 &local_198.LastMeshIdPerLOD.ArrayMax);
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_198.LastMeshIdPerLOD.ArrayNum;
    }
    lVar14 = 8;
    while( true ) {
      uVar8 = (uint)pTVar13;
      if (((local_198.LastMeshIdPerLOD.AllocatorInstance.Data <= &local_1c0) &&
          (&local_1c0 <
           (FHandle *)
           (local_198.LastMeshIdPerLOD.AllocatorInstance.Data +
           (longlong)local_198.LastMeshIdPerLOD.ArrayMax * 0x18))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar8 = local_198.LastMeshIdPerLOD.ArrayNum, bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 == local_198.LastMeshIdPerLOD.ArrayMax) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_198.LastMeshIdPerLOD.AllocatorInstance,
                           &local_198.LastMeshIdPerLOD.ArrayMax);
      }
      local_198.LastMeshIdPerLOD.ArrayNum = uVar8 + 1;
      TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
      FHandle::FHandle((FHandle *)
                       (local_198.LastMeshIdPerLOD.AllocatorInstance.Data +
                       (longlong)(int)uVar8 * 0x18),&local_1c0);
      FVar6.ReferenceController = local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController;
      pTVar5 = local_1c0.WeakRegistry.Object;
      uVar8 = local_1c0.Id;
      lVar14 = lVar14 + -1;
      if (lVar14 == 0) break;
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_198.LastMeshIdPerLOD.ArrayNum;
    }
    FVar15.ReferenceController = FVar6.ReferenceController;
    if (local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar3 = (local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        FVar15.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14abe1905;
        LOCK();
        aVar9 = (local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController)->
                SharedReferenceCount;
        bVar7 = aVar3 == aVar9;
        if (bVar7) {
          (local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar7);
      this = local_1a8;
      FVar15.ReferenceController = FVar6.ReferenceController;
      if (local_1c0.WeakRegistry.Object !=
          (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
           *)0x0) {
        lpCriticalSection = &(local_1c0.WeakRegistry.Object)->CriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar12 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                  ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                                 *)&pTVar5->Entries,uVar8);
        pFVar12->RefCount = pFVar12->RefCount - 1;
        if (pFVar12->RefCount == 0) {
          if (*(int *)&(pTVar5->KeyIndex).field_0x8 != *(int *)&(pTVar5->KeyIndex).field_0x34) {
            uVar10 = UE::Mutable::Private::GetTypeHash((pFVar12->KeyContainer).Key.Object);
            TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
            ::
            RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                      ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                        *)&pTVar5->KeyIndex,uVar10,&pFVar12->KeyContainer);
          }
          local_1c8[0] = uVar8;
          if (*(int *)&(pTVar5->Entries).field_0x8 != *(int *)&(pTVar5->Entries).field_0x34) {
            TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                        *)&pTVar5->Entries,uVar8,local_1c8);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        this = local_1a8;
      }
    }
LAB_14abe1905:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    if (local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(local_1c0.WeakRegistry.WeakReferenceCount.ReferenceController,1);
      }
    }
    iVar11 = UCustomizableObject::GetComponentCount(param_1);
    TArray<FCustomizableInstanceComponentData,TSizedDefaultAllocator<32>_>::Init
              (&this->ComponentsData,&local_198,iVar11);
    DestructItems<FExtensionInstanceData,int>
              ((FExtensionInstanceData *)(this->ExtensionInstanceData).AllocatorInstance.Data,
               (this->ExtensionInstanceData).ArrayNum);
    piVar2 = &(this->ExtensionInstanceData).ArrayMax;
    (this->ExtensionInstanceData).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->ExtensionInstanceData).AllocatorInstance,0,piVar2);
    }
    FCustomizableInstanceComponentData::~FCustomizableInstanceComponentData(&local_198);
  }
  return;
}

// InvalidateGeneratedData @ 14abe2e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UCustomizableInstancePrivate::InvalidateGeneratedData(UCustomizableInstancePrivate *this)

{
  atomic<int> *paVar1;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar3;
  atomic<int> aVar4;
  code *pcVar5;
  int iVar6;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  uint uVar10;
  atomic<int> aVar11;
  uint uVar12;
  FEntry *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  FWeakReferencer<1> FVar16;
  undefined1 auStackY_498 [32];
  uint local_448 [2];
  FHandle local_440;
  UCustomizableInstancePrivate *local_428;
  undefined4 local_418;
  undefined1 local_414;
  undefined2 local_413;
  undefined1 local_411;
  undefined1 local_410 [24];
  undefined8 uStack_3f8;
  void *local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  ForElementType<FSetElementId> local_3d8;
  ulonglong local_3c8;
  undefined1 local_3c0 [24];
  undefined8 uStack_3a8;
  void *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  ForElementType<FSetElementId> local_388;
  ulonglong local_378;
  undefined1 local_370 [24];
  undefined8 uStack_358;
  void *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  ForElementType<FSetElementId> local_338;
  ulonglong local_328;
  FCustomizableInstanceComponentData local_318;
  FCustomizableObjectInstanceDescriptor local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  this->SkeletalMeshStatus = NotGenerated;
  local_428 = this;
  TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
           *)&this->SkeletalMeshes);
  memset(&local_1c8,0,400);
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor(&local_1c8);
  FCustomizableObjectInstanceDescriptor::operator=(&this->CommittedDescriptor,&local_1c8);
  FCustomizableObjectInstanceDescriptor::~FCustomizableObjectInstanceDescriptor(&local_1c8);
  pTVar2 = &(this->CommittedDescriptorHash).MinLODs;
  local_418 = 0;
  local_413 = 0;
  local_411 = 0;
  local_3d8.InlineData[0] = '\0';
  local_3d8.InlineData[1] = '\0';
  local_3d8.InlineData[2] = '\0';
  local_3d8.InlineData[3] = '\0';
  local_3d8._padding_ = 0;
  local_3c8 = 0;
  local_388.InlineData[0] = '\0';
  local_388.InlineData[1] = '\0';
  local_388.InlineData[2] = '\0';
  local_388.InlineData[3] = '\0';
  local_388._padding_ = 0;
  local_378 = 0;
  local_338.InlineData[0] = '\0';
  local_338.InlineData[1] = '\0';
  local_338.InlineData[2] = '\0';
  local_338.InlineData[3] = '\0';
  local_338._padding_ = 0;
  local_328 = 0;
  local_414 = 0;
  (this->CommittedDescriptorHash).bStreamingEnabled = false;
  local_410._0_8_ = (FScriptContainerElement *)0x0;
  local_410._8_8_ = 0;
  local_3f0 = (void *)0x0;
  local_3d8.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_3c0._0_8_ = (FScriptContainerElement *)0x0;
  local_3c0._8_8_ = 0;
  local_3a0 = (void *)0x0;
  local_388.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_370._0_8_ = (FScriptContainerElement *)0x0;
  local_370._8_8_ = 0;
  local_350 = (void *)0x0;
  local_338.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CommittedDescriptorHash).Hash = 0;
  local_410._16_8_ = 0;
  uStack_3f8 = 0;
  local_3c0._16_8_ = 0;
  uStack_3a8 = 0;
  local_370._16_8_ = 0;
  uStack_358 = 0;
  local_3e8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_3e0 = _UNK_150631d98;
  local_398 = ___xmm_00000000ffffffff0000008000000000;
  uStack_390 = _UNK_150631d98;
  local_348 = ___xmm_00000000ffffffff0000008000000000;
  uStack_340 = _UNK_150631d98;
  if (pTVar2 != (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                 *)local_410) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)pTVar2,
               (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)local_410);
  }
  pTVar2 = &(this->CommittedDescriptorHash).QualitySettingMinLODs;
  if (pTVar2 != (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                 *)local_3c0) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)pTVar2,
               (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)local_3c0);
  }
  pTVar2 = &(this->CommittedDescriptorHash).FirstRequestedLOD;
  if (pTVar2 != (TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                 *)local_370) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)pTVar2,
               (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                *)local_370);
  }
  local_328 = local_328 & 0xffffffff00000000;
  if (local_338.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_338.SecondaryData);
  }
  iVar6 = SUB84(local_370._8_8_,4);
  local_370._8_8_ = local_370._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_370,0,(int *)(local_370 + 0xc));
  }
  uVar10 = local_348._4_4_;
  uStack_340 = 0xffffffff;
  local_348 = (ulonglong)local_348._4_4_ << 0x20;
  if (0x80 < uVar10) {
    local_348 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_370 + 0x10),0);
  }
  if (local_350 != (void *)0x0) {
    FMemory::Free(local_350);
  }
  if ((FScriptContainerElement *)local_370._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_370._0_8_);
  }
  local_378 = local_378 & 0xffffffff00000000;
  if (local_388.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_388.SecondaryData);
  }
  iVar6 = SUB84(local_3c0._8_8_,4);
  local_3c0._8_8_ = local_3c0._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_3c0,0,(int *)(local_3c0 + 0xc));
  }
  uVar10 = local_398._4_4_;
  uStack_390 = 0xffffffff;
  local_398 = (ulonglong)local_398._4_4_ << 0x20;
  if (0x80 < uVar10) {
    local_398 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_3c0 + 0x10),0);
  }
  if (local_3a0 != (void *)0x0) {
    FMemory::Free(local_3a0);
  }
  if ((FScriptContainerElement *)local_3c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_3c0._0_8_);
  }
  local_3c8 = local_3c8 & 0xffffffff00000000;
  if (local_3d8.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8.SecondaryData);
  }
  iVar6 = SUB84(local_410._8_8_,4);
  local_410._8_8_ = local_410._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_410,0,(int *)(local_410 + 0xc));
  }
  uVar10 = local_3e8._4_4_;
  uStack_3e0 = 0xffffffff;
  local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
  if (0x80 < uVar10) {
    local_3e8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_410 + 0x10),0);
  }
  if (local_3f0 != (void *)0x0) {
    FMemory::Free(local_3f0);
  }
  if ((FScriptContainerElement *)local_410._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_410._0_8_);
  }
  FCustomizableInstanceComponentData::FCustomizableInstanceComponentData(&local_318);
  local_440.WeakRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  local_440.WeakRegistry.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_440._4_4_ = 0;
  local_440.Id = 0xffffffff;
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            ((FHandle *)local_318.LastMeshIdPerLOD.AllocatorInstance.Data,
             local_318.LastMeshIdPerLOD.ArrayNum);
  local_318.LastMeshIdPerLOD.ArrayNum = 0;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (local_318.LastMeshIdPerLOD.ArrayMax != 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,8,&local_318.LastMeshIdPerLOD.AllocatorInstance,0,
               &local_318.LastMeshIdPerLOD.ArrayMax);
    pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_318.LastMeshIdPerLOD.ArrayNum;
  }
  lVar15 = 8;
  while( true ) {
    uVar10 = (uint)pTVar14;
    if (((local_318.LastMeshIdPerLOD.AllocatorInstance.Data <= &local_440) &&
        (&local_440 <
         (FHandle *)
         (local_318.LastMeshIdPerLOD.AllocatorInstance.Data +
         (longlong)local_318.LastMeshIdPerLOD.ArrayMax * 0x18))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar10 = local_318.LastMeshIdPerLOD.ArrayNum, bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar10 == local_318.LastMeshIdPerLOD.ArrayMax) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_318.LastMeshIdPerLOD.AllocatorInstance,
                          &local_318.LastMeshIdPerLOD.ArrayMax);
    }
    local_318.LastMeshIdPerLOD.ArrayNum = uVar10 + 1;
    TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
    FHandle::FHandle((FHandle *)
                     (local_318.LastMeshIdPerLOD.AllocatorInstance.Data +
                     (longlong)(int)uVar10 * 0x18),&local_440);
    FVar8.ReferenceController = local_440.WeakRegistry.WeakReferenceCount.ReferenceController;
    pTVar7 = local_440.WeakRegistry.Object;
    uVar10 = local_440.Id;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_318.LastMeshIdPerLOD.ArrayNum;
  }
  FVar16.ReferenceController = FVar8.ReferenceController;
  if (local_440.WeakRegistry.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar4 = (local_440.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar16.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14abe3375;
      LOCK();
      aVar11 = (local_440.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount
      ;
      bVar9 = aVar4 == aVar11;
      if (bVar9) {
        (local_440.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar4 + 1);
        aVar11 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar11;
    } while (!bVar9);
    this = local_428;
    FVar16.ReferenceController = FVar8.ReferenceController;
    if (local_440.WeakRegistry.Object !=
        (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
         *)0x0) {
      lpCriticalSection = &(local_440.WeakRegistry.Object)->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar13 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                               *)&pTVar7->Entries,uVar10);
      pFVar13->RefCount = pFVar13->RefCount - 1;
      if (pFVar13->RefCount == 0) {
        if (*(int *)&(pTVar7->KeyIndex).field_0x8 != *(int *)&(pTVar7->KeyIndex).field_0x34) {
          uVar12 = UE::Mutable::Private::GetTypeHash((pFVar13->KeyContainer).Key.Object);
          TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
          ::
          RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                    ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pTVar7->KeyIndex,uVar12,&pFVar13->KeyContainer);
        }
        local_448[0] = uVar10;
        if (*(int *)&(pTVar7->Entries).field_0x8 != *(int *)&(pTVar7->Entries).field_0x34) {
          TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                      *)&pTVar7->Entries,uVar10,local_448);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this = local_428;
    }
  }
LAB_14abe3375:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  if (local_440.WeakRegistry.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_440.WeakRegistry.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_440.WeakRegistry.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_440.WeakRegistry.WeakReferenceCount.ReferenceController,1);
    }
  }
  TArray<FCustomizableInstanceComponentData,TSizedDefaultAllocator<32>_>::Init
            (&this->ComponentsData,&local_318,(this->ComponentsData).ArrayNum);
  DestructItems<FGeneratedMaterial,int>
            ((FGeneratedMaterial *)(this->GeneratedMaterials).AllocatorInstance.Data,
             (this->GeneratedMaterials).ArrayNum);
  piVar3 = &(this->GeneratedMaterials).ArrayMax;
  (this->GeneratedMaterials).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->GeneratedMaterials).AllocatorInstance,0,piVar3);
  }
  FCustomizableInstanceComponentData::~FCustomizableInstanceComponentData(&local_318);
  return;
}

// IsSelectedParameterProfileDirty @ 14abe41b0

bool __thiscall
UCustomizableInstancePrivate::IsSelectedParameterProfileDirty(UCustomizableInstancePrivate *this)

{
  return false;
}

// LoadParametersFromProfile @ 14abe7c70

bool __thiscall
UCustomizableInstancePrivate::LoadParametersFromProfile
          (UCustomizableInstancePrivate *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return *(longlong *)(lVar1 + 0x98) != 0;
}

// MigrateProfileParametersToCurrentInstance @ 14abe9f50

bool __thiscall
UCustomizableInstancePrivate::MigrateProfileParametersToCurrentInstance
          (UCustomizableInstancePrivate *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return *(longlong *)(lVar1 + 0x98) != 0;
}

// PostEditChangePropertyWithoutEditor @ 14abeb660

void __thiscall
UCustomizableInstancePrivate::PostEditChangePropertyWithoutEditor
          (UCustomizableInstancePrivate *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USkeletalMesh *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId954,
               "Mutable_UCustomizableInstancePrivate::PostEditChangePropertyWithoutEditor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x3ba);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId954);
  }
  iVar3 = *(int *)&(this->SkeletalMeshes).field_0x28;
  puVar1 = &(this->SkeletalMeshes).field_0x10;
  iVar10 = 0;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->SkeletalMeshes).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14abeb73e;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14abeb73e:
  uVar9 = *(uint *)&(this->SkeletalMeshes).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SkeletalMeshes).field_0x8 -
                       *(int *)&(this->SkeletalMeshes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SkeletalMeshes).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->SkeletalMeshes).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14abeb840;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14abeb840:
  while( true ) {
    if (*(int *)&(this->SkeletalMeshes).field_0x8 - *(int *)&(this->SkeletalMeshes).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(USkeletalMesh **)
               (*(longlong *)&this->SkeletalMeshes + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
    ;
    if (((this_00 != (USkeletalMesh *)0x0) &&
        (lVar8 = (**(code **)(this_00->_padding_ + 0x398))(this_00), lVar8 != 0)) &&
       (lVar8 = (**(code **)(this_00->_padding_ + 0x398))(this_00), *(char *)(lVar8 + 0x2c) == '\0')
       ) {
      if (CpuChannel->Enabled < 0) {
        USkeletalMesh::InitResources(this_00);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId962,"Mutable_InitResources",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                   ,0x3c2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId962);
        USkeletalMesh::InitResources(this_00);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrepareForUpdate @ 14abebde0

void __thiscall UCustomizableInstancePrivate::PrepareForUpdate(UCustomizableInstancePrivate *this)

{
  TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
  *pTVar4;
  undefined1 local_res8 [8];
  
  this_01 = (TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
             *)(this->ComponentsData).AllocatorInstance.Data;
  iVar1 = (this->ComponentsData).ArrayNum;
  piVar3 = (int *)&this_01[1].Elements.field_0x2c;
  pTVar4 = (TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
            *)((longlong)this_01 + (longlong)iVar1 * 0x150);
  while( true ) {
    if ((this->ComponentsData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCustomizableInstanceComponentData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_01 == pTVar4) break;
    iVar2 = piVar3[-0xd];
    if (1 >= iVar2) {
      TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_01);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_01->Elements,0,piVar3[-0x1d]);
    piVar3[-0x1d] = 0;
    if (piVar3[-0x1c] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this_01,0,piVar3 + -0x1c);
    }
    piVar3[-0x13] = -1;
    piVar3[-0x12] = 0;
    piVar3[-0x15] = 0;
    if ((piVar3[-0x14] < 0) || (0x80 < piVar3[-0x14])) {
      piVar3[-0x14] = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(piVar3 + -0x1b),0);
    }
    if (1 < iVar2) {
      piVar3[-0xd] = 1;
      TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
      ::Rehash(this_01);
    }
    iVar2 = piVar3[7];
    this_00 = (TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
               *)(piVar3 + -0xb);
    if (1 >= iVar2) {
      TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    piVar3[-9] = 0;
    if (piVar3[-8] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,piVar3 + -8);
    }
    piVar3[1] = -1;
    piVar3[2] = 0;
    piVar3[-1] = 0;
    if ((*piVar3 < 0) || (0x80 < *piVar3)) {
      *piVar3 = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(piVar3 + -7),0);
    }
    if (1 < iVar2) {
      piVar3[7] = 1;
      TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
    piVar3[0xd] = 0;
    piVar3[0xe] = 0;
    piVar3[0x11] = 0;
    if (piVar3[0x12] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)(piVar3 + 0xf),0,piVar3 + 0x12);
    }
    piVar3[0x15] = 0;
    if (piVar3[0x16] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(piVar3 + 0x13),0,piVar3 + 0x16);
    }
    piVar3[0x19] = 0;
    if (piVar3[0x1a] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(piVar3 + 0x17),0,piVar3 + 0x1a);
    }
    piVar3[0x1d] = 0;
    if (piVar3[0x1e] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(piVar3 + 0x1b),0,piVar3 + 0x1e);
    }
    piVar3[0x29] = 0;
    if (piVar3[0x2a] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)(piVar3 + 0x27),0,piVar3 + 0x2a);
    }
    piVar3[0xb] = 0;
    if (piVar3[0xc] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(piVar3 + 9),0,piVar3 + 0xc);
    }
    this_01 = (TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
               *)&this_01[4].Elements.field_0x10;
    piVar3[0x33] = 0;
    piVar3[0x34] = 0;
    piVar3 = piVar3 + 0x54;
  }
  return;
}

// ReuseTexture @ 14abef6c0

void __thiscall
UCustomizableInstancePrivate::ReuseTexture
          (UCustomizableInstancePrivate *this,UTexture2D *param_1,
          TSharedRef<FTexturePlatformData,1> *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  FTexturePlatformData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  long64 lVar9;
  uint uVar10;
  FUpdateTextureRegion2D local_48;
  
  uVar10 = 0;
  uVar3 = (param_2->Object->Mips).Array.ArrayNum;
  if (uVar3 != 0) {
    do {
      pFVar4 = param_2->Object;
      uVar8 = 0;
      if ((int)uVar10 < (pFVar4->Mips).Array.ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)((pFVar4->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8)
      ;
      lVar9 = FBulkData::GetBulkDataSize((FBulkData *)(lVar5 + 0x20));
      if (0 < lVar9) {
        uVar1 = *(ushort *)(lVar5 + 0x48);
        uVar2 = *(ushort *)(lVar5 + 0x4a);
        local_48.DestX = 0;
        local_48.DestY = 0;
        local_48.SrcX = 0;
        local_48.SrcY = 0;
        local_48.Width = (uint)uVar1;
        local_48.Height = (uint)uVar2;
        uVar8 = UTexture2D::GetSizeX(param_1);
        if ((uVar1 != uVar8 && (int)uVar8 <= (int)(uint)uVar1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("int32(Region.Width) <= Texture->GetSizeX()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                               ,0x16a4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar8 = UTexture2D::GetSizeY(param_1);
        if ((uVar2 != uVar8 && (int)uVar8 <= (int)(uint)uVar2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("int32(Region.Height) <= Texture->GetSizeY()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                               ,0x16a5,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UpdateTextureRegionsMutable
                  (param_1,uVar10,uVar3,&local_48,(uint)*(ushort *)(lVar5 + 0x48) << 2,
                   (TBulkData<unsigned_char> *)(lVar5 + 0x20),param_2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return;
}

// SaveParametersToProfile @ 14abef880

bool __thiscall
UCustomizableInstancePrivate::SaveParametersToProfile
          (UCustomizableInstancePrivate *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return *(longlong *)(lVar1 + 0x98) != 0;
}

// SetDescriptor @ 14abf0a80

void __thiscall
UCustomizableInstancePrivate::SetDescriptor
          (UCustomizableInstancePrivate *this,FCustomizableObjectInstanceDescriptor *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UCustomizableObject *pUVar4;
  UCustomizableObject *pUVar5;
  
  pUVar4 = FCustomizableObjectInstanceDescriptor::GetCustomizableObject(param_1);
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = FCustomizableObjectInstanceDescriptor::GetCustomizableObject
                     ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98));
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FCustomizableObjectInstanceDescriptor::operator=
            ((FCustomizableObjectInstanceDescriptor *)(lVar1 + 0x98),param_1);
  if (pUVar5 != pUVar4) {
    InitCustomizableObjectData(this,pUVar4);
  }
  return;
}

// SetReferenceSkeletalMesh @ 14abf1240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCustomizableInstancePrivate::SetReferenceSkeletalMesh(UCustomizableInstancePrivate *this)

{
  UCustomizableObjectInstance *pUVar1;
  UCustomizableObject *this_00;
  UModelResources *pUVar2;
  UCustomizableObjectInstanceUsage *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  UCustomizableObjectPrivate *pUVar9;
  UCustomizableObjectInstance *pUVar10;
  USkeletalMeshComponent *this_02;
  UObject *pUVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong local_res8;
  TObjectIterator<UCustomizableObjectInstanceUsage> local_48;
  TPersistentObjectPtr<FSoftObjectPath> local_30;
  
  pUVar1 = (UCustomizableObjectInstance *)this->_padding_;
  if (pUVar1 != (UCustomizableObjectInstance *)0x0) {
    pUVar8 = UCustomizableObjectInstance::StaticClass();
    iVar12 = (int)pUVar8->_padding_;
    if (((iVar12 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
         &pUVar8->_padding_)) &&
       (this_00 = (pUVar1->Descriptor).CustomizableObject.field0_0x0.DebugPtr,
       this_00 != (UCustomizableObject *)0x0)) {
      pUVar9 = UCustomizableObject::GetPrivate(this_00);
      pUVar2 = (pUVar9->ModelResources).field0_0x0.DebugPtr;
      if (pUVar2 != (UModelResources *)0x0) {
        local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ObjectArray.ArrayNum = 0;
        local_48.ObjectArray.ArrayMax = 0;
        local_48.Index = 0xffffffff;
        EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar8 = Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister();
        GetObjectsOfClass(pUVar8,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                          EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_48);
        while ((lVar13 = (longlong)local_48.Index, -1 < local_48.Index &&
               (local_48.Index < local_48.ObjectArray.ArrayNum))) {
          uVar7 = 0;
          if (local_48.Index < local_48.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_48.Index >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_01 = *(UCustomizableObjectInstanceUsage **)
                     (local_48.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
          if (((this_01 == (UCustomizableObjectInstanceUsage *)0x0) ||
              (((uint)this_01->_padding_ >> 0x1e & 1) != 0)) ||
             (pUVar10 = UCustomizableObjectInstanceUsage::GetCustomizableObjectInstance(this_01),
             pUVar10 != pUVar1)) {
LAB_14abf1501:
            TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_48);
          }
          else {
            UCustomizableObjectInstanceUsage::GetComponentName(this_01);
            pFVar3 = (pUVar2->ComponentNamesPerObjectComponent).AllocatorInstance.Data;
            pFVar14 = pFVar3;
            if (pFVar3 == pFVar3 + (longlong)(pUVar2->ComponentNamesPerObjectComponent).ArrayNum * 8
               ) goto LAB_14abf1501;
            do {
              if (*(longlong *)pFVar14 == local_res8) {
                iVar12 = (int)((longlong)pFVar14 - (longlong)pFVar3 >> 3);
                if (((-1 < iVar12) && (iVar12 < (pUVar2->ReferenceSkeletalMeshesData).ArrayNum)) &&
                   (this_02 = UCustomizableObjectInstanceUsage::GetAttachParent(this_01),
                   this_02 != (USkeletalMeshComponent *)0x0)) {
                  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this_02);
                  if (((pUVar2->ReferenceSkeletalMeshesData).ArrayNum <= iVar12) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar3 = (pUVar2->ReferenceSkeletalMeshesData).AllocatorInstance.Data;
                  local_30.WeakPtr = *(FWeakObjectPtr *)(pFVar3 + (longlong)iVar12 * 0xe8 + 8);
                  FSoftObjectPath::FSoftObjectPath
                            (&local_30.ObjectID,
                             (FSoftObjectPath *)(pFVar3 + (longlong)iVar12 * 0xe8 + 0x10));
                  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_30);
                  if (pUVar11 == (UObject *)0x0) {
                    if (local_30.ObjectID.AssetPath.PackageName != (FName)0x0) {
                      FSoftObjectPath::TryLoad(&local_30.ObjectID,(FUObjectSerializeContext *)0x0);
                      pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_30);
                      goto LAB_14abf14b6;
                    }
LAB_14abf14de:
                    pUVar11 = (UObject *)0x0;
                  }
                  else {
LAB_14abf14b6:
                    if (pUVar11 == (UObject *)0x0) goto LAB_14abf14de;
                    pUVar8 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                    iVar12 = (int)pUVar8->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar12) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) +
                         (longlong)iVar12 * 8) != &pUVar8->_padding_)) goto LAB_14abf14de;
                  }
                  (**(code **)(this_02->_padding_ + 0xb48))(this_02,pUVar11,1);
                  if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                  }
                }
                goto LAB_14abf1501;
              }
              pFVar14 = pFVar14 + 8;
            } while (pFVar14 !=
                     pFVar3 + (longlong)(pUVar2->ComponentNamesPerObjectComponent).ArrayNum * 8);
            TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_48);
          }
        }
        if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// SetSelectedParameterProfileDirty @ 14abf1cd0

void __thiscall
UCustomizableInstancePrivate::SetSelectedParameterProfileDirty(UCustomizableInstancePrivate *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                       ,0xc38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetState @ 14abf1d30

void __thiscall
UCustomizableInstancePrivate::SetState(UCustomizableInstancePrivate *this,int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TMap<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>_>
  *this_00;
  
  lVar2 = this->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xc38,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = FCustomizableObjectInstanceDescriptor::GetState
                    ((FCustomizableObjectInstanceDescriptor *)(lVar2 + 0x98));
  lVar2 = this->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xc38,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FCustomizableObjectInstanceDescriptor::SetState
            ((FCustomizableObjectInstanceDescriptor *)(lVar2 + 0x98),param_1);
  if (iVar5 != param_1) {
    this_00 = &this->TextureReuseCache;
    bVar4 = 1 < *(int *)&(this->TextureReuseCache).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->TextureReuseCache).field_0xc;
    *(undefined4 *)&(this->TextureReuseCache).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->TextureReuseCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TextureReuseCache).field_0x34 = 0;
    iVar5 = *(int *)&(this->TextureReuseCache).field_0x2c;
    *(undefined4 *)&(this->TextureReuseCache).field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(this->TextureReuseCache).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureReuseCache).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->TextureReuseCache).field_0x48 = 1;
      TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  return;
}

// TickUpdateCloseCustomizableObjects @ 14abf20c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCustomizableInstancePrivate::TickUpdateCloseCustomizableObjects
          (UCustomizableInstancePrivate *this,UCustomizableObjectInstance *param_1,
          TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
          *param_2)

{
  longlong lVar1;
  UCustomizableObject *this_00;
  code *pcVar2;
  bool bVar3;
  EUpdateRequired EVar4;
  EQueuePriorityType EVar5;
  UCustomizableObjectSystem *pUVar6;
  UCustomizableObjectSystemPrivate *pUVar7;
  FMutableUpdateCandidate *pFVar8;
  undefined1 auStackY_198 [32];
  TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&> local_168
  ;
  FMutableUpdateCandidate **local_158;
  FMutableUpdateCandidate *local_150;
  FMutableUpdateCandidate local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->Descriptor).CustomizableObject.field0_0x0.DebugPtr == (UCustomizableObject *)0x0) {
    return;
  }
  lVar1 = this->_padding_;
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xc38,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = *(UCustomizableObject **)(lVar1 + 0x98);
  if (this_00 == (UCustomizableObject *)0x0) {
    return;
  }
  bVar3 = UCustomizableObject::IsCompiled(this_00);
  if (!bVar3) {
    return;
  }
  pUVar6 = UCustomizableObjectSystem::GetInstance();
  pUVar7 = UCustomizableObjectSystem::GetPrivate(pUVar6);
  EVar4 = UCustomizableObjectSystemPrivate::IsUpdateRequired(pUVar7,param_1,true,true,false);
  if (EVar4 != NoUpdate) {
    if (EVar4 != Discard) {
      if (EVar4 == Update) {
        EVar5 = UCustomizableObjectSystemPrivate::GetUpdatePriority(pUVar7,param_1,false);
        pFVar8 = TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
                 ::Find((TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
                         *)param_2,param_1);
        if (pFVar8 == (FMutableUpdateCandidate *)0x0) {
          FMutableUpdateCandidate::FMutableUpdateCandidate(&local_148,param_1);
          local_158 = &local_168.Value;
          local_150 = &local_148;
          local_148.bHasBeenIssued = true;
          local_168.Value = (FMutableUpdateCandidate *)param_1;
          local_148.Priority = EVar5;
          TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&>_>
                    ((TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
                      *)param_2,&local_168,(bool *)&local_158);
          FMutableUpdateCandidate::~FMutableUpdateCandidate(&local_148);
        }
        else {
          if (((this->InstanceFlagsPrivate & (PendingLODsDowngrade|PendingLODsUpdate)) == ECONone)
             && (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<7189396884065092662>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                    ,0x436,
                                    "HasCOInstanceFlags(PendingLODsUpdate | PendingLODsDowngrade)"),
                bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8->Priority = EVar5;
          pFVar8->bHasBeenIssued = true;
        }
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                           ,0x445,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto LAB_14abf219a;
    }
    pUVar6 = UCustomizableObjectSystem::GetInstance();
    pUVar7 = UCustomizableObjectSystem::GetPrivate(pUVar6);
    UCustomizableObjectSystemPrivate::InitDiscardResourcesSkeletalMesh(pUVar7,param_1);
  }
  TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
  ::Remove((TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
            *)param_2,param_1);
LAB_14abf219a:
  this->InstanceFlagsPrivate =
       this->InstanceFlagsPrivate & ~(PendingLODsDowngrade|PendingLODsUpdate);
  return;
}

// UpdateInstanceIfNotGenerated @ 14abf5a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCustomizableInstancePrivate::UpdateInstanceIfNotGenerated
          (UCustomizableInstancePrivate *this,UCustomizableObjectInstance *param_1,
          TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
          *param_2)

{
  longlong lVar1;
  UCustomizableObject *this_00;
  code *pcVar2;
  bool bVar3;
  EQueuePriorityType EVar4;
  UCustomizableObjectSystem *this_01;
  UCustomizableObjectSystemPrivate *this_02;
  FMutableUpdateCandidate *pFVar5;
  undefined1 auStack_188 [32];
  TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&> local_168
  ;
  TSharedRef<FUpdateContextPrivate,1> local_158;
  FMutableUpdateCandidate **local_148;
  FMutableUpdateCandidate *local_140;
  FMutableUpdateCandidate local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (this->SkeletalMeshStatus == NotGenerated) {
    lVar1 = this->_padding_;
    if ((lVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Public",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                           ,0xc38,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = *(UCustomizableObject **)(lVar1 + 0x98);
    if ((this_00 != (UCustomizableObject *)0x0) &&
       (bVar3 = UCustomizableObject::IsCompiled(this_00), bVar3)) {
      this_01 = UCustomizableObjectSystem::GetInstance();
      this_02 = UCustomizableObjectSystem::GetPrivate(this_01);
      MakeShared<FUpdateContextPrivate,1,UCustomizableObjectInstance_&>(&local_158,param_1);
      (local_158.Object)->bOnlyUpdateIfNotGenerated = true;
      UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh(this_02,&local_158);
      EVar4 = UCustomizableObjectSystemPrivate::GetUpdatePriority(this_02,param_1,false);
      pFVar5 = TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
               ::Find((TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
                       *)param_2,param_1);
      if (pFVar5 == (FMutableUpdateCandidate *)0x0) {
        FMutableUpdateCandidate::FMutableUpdateCandidate(&local_138,param_1);
        local_148 = &local_168.Value;
        local_140 = &local_138;
        local_138.bHasBeenIssued = true;
        local_168.Value = (FMutableUpdateCandidate *)param_1;
        local_138.Priority = EVar4;
        TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UCustomizableObjectInstance_const_*_&&,FMutableUpdateCandidate_const_&>_>
                  ((TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
                    *)param_2,&local_168,(bool *)&local_148);
        FMutableUpdateCandidate::~FMutableUpdateCandidate(&local_138);
      }
      else {
        pFVar5->Priority = EVar4;
        pFVar5->bHasBeenIssued = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// UpdateSkeletalMesh_PostBeginUpdate0 @ 14abf6790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UCustomizableInstancePrivate::UpdateSkeletalMesh_PostBeginUpdate0
          (UCustomizableInstancePrivate *this,UCustomizableObjectInstance *param_1,
          TSharedRef<FUpdateContextPrivate,1> *param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  TWeakPtr<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
  *pTVar4;
  atomic<int> *paVar5;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *pTVar6;
  ulonglong uVar7;
  atomic<int> aVar8;
  short sVar9;
  FUpdateContextPrivate *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName FVar12;
  longlong lVar13;
  code *pcVar14;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined8 uVar17;
  FCustomizableObjectInstanceComponentIndex FVar18;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *pTVar19;
  UCustomizableObjectInstance *this_00;
  TObjectPtr<UClass>_u_0 TVar20;
  TObjectPtr<UClass>_u_0 TVar21;
  FPhysicsBody *pFVar22;
  bool bVar23;
  undefined1 uVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  UCustomizableObjectPrivate *pUVar28;
  ICustomizableObjectModule *pIVar29;
  UCustomizableInstancePrivate *pUVar30;
  FName *pFVar31;
  FModuleManager *this_01;
  IModuleInterface *pIVar32;
  UObject *pUVar33;
  longlong lVar34;
  FExtensionData *pFVar35;
  FCustomizableObjectResourceData *pFVar36;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar37;
  FComponent *pFVar38;
  FCustomizableInstanceComponentData *pFVar39;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *pTVar40;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar41;
  byte *pbVar42;
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *this_02;
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  *pTVar43;
  uint *puVar44;
  FEntry *pFVar45;
  UClass *pUVar46;
  FName FVar47;
  FString *pFVar48;
  UPackage *pUVar49;
  UCustomizableObjectSkeletalMesh *pUVar50;
  UPhysicsAsset *pUVar51;
  FAnimBpGeneratedPhysicsAssets *pFVar52;
  TObjectPtr<UPhysicsAsset> TVar53;
  longlong *plVar54;
  FHandle *pFVar55;
  byte bVar56;
  uint uVar57;
  ForAnyElementType FVar58;
  longlong *plVar59;
  uint uVar60;
  FWeakObjectPtr *pFVar61;
  TObjectPtr<UScriptStruct_const_>_u_0 *this_03;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *this_04;
  undefined8 *puVar62;
  wchar_t *pwVar63;
  FCustomizableObjectComponentIndex FVar64;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *this_05;
  undefined8 *puVar65;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *pTVar66;
  FMesh *pFVar67;
  uint uVar68;
  UCustomizableObject *pUVar69;
  FScriptContainerElement *pFVar70;
  FMesh *this_06;
  UCustomizableObjectSkeletalMesh *this_07;
  FCustomizableObjectStreamedResourceData *this_08;
  FMutableRefSkeletalMeshData *pFVar71;
  FScriptContainerElement *pFVar72;
  wchar_t *pwVar73;
  UModelResources *pUVar74;
  bool bVar75;
  undefined1 auStackY_6d8 [32];
  bool local_6a8;
  bool local_698 [8];
  UCustomizableInstancePrivate *local_690;
  UModelResources *local_688;
  undefined1 local_680;
  undefined1 local_67f;
  undefined1 local_67e;
  undefined1 local_67d;
  undefined1 local_67c [4];
  FCustomizableObjectInstanceComponentIndex local_678;
  FName local_670;
  TReferenceControllerBase<1> *local_668;
  TBitArray<FDefaultBitArrayAllocator> *local_660;
  UCustomizableObject *local_658;
  uint local_650;
  int local_64c;
  UCustomizableObjectSkeletalMesh *local_648;
  FString local_640;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *local_630;
  FComponent *local_628;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *local_620;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_618;
  undefined8 local_5f8;
  UCustomizableObjectInstance *local_5f0;
  FMesh *local_5e8;
  TObjectPtr<UClass>_u_0 local_5e0;
  FWeakObjectPtr local_5d8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_5d0;
  uchar *puStack_5c8;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *local_5c0;
  undefined8 uStack_5b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5b0;
  uint uStack_5a8;
  uint uStack_5a4;
  int iStack_5a0;
  undefined4 uStack_59c;
  int local_598;
  undefined4 uStack_594;
  undefined8 local_590;
  FName local_588;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_580;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_560;
  undefined1 local_540 [12];
  FName local_534;
  FName local_52c;
  undefined8 local_520;
  undefined8 *local_518;
  UObject *local_510;
  UObject *local_508;
  UObject *local_500;
  FName local_4f8;
  UObject *local_4f0;
  FName local_4e8;
  FName local_4e0;
  UCustomizableObjectSkeletalMesh *local_4d8;
  UPhysicsAsset *local_4d0;
  longlong local_4c8;
  UObject *local_4c0;
  ForAnyElementType local_4b8;
  UCustomizableObjectSkeletalMesh *local_4b0;
  ForAnyElementType local_4a8;
  undefined1 local_4a0 [8];
  FString local_498;
  FString local_488;
  FString local_478;
  undefined8 *local_468;
  int local_460;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_3e0;
  int local_3b8;
  int local_3b4;
  undefined1 local_3b0 [12];
  uint uStack_3a4;
  TBitArray<FDefaultBitArrayAllocator> *local_3a0;
  undefined8 uStack_398;
  longlong local_390;
  int iStack_388;
  undefined4 uStack_384;
  TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
  *local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 uStack_358;
  FWeakObjectPtr *local_350;
  int local_348;
  FName *local_340;
  undefined1 *local_338;
  FName *local_330;
  UObject **local_328;
  FName *local_320;
  UObject **local_318;
  FName *local_310;
  UCustomizableObjectSkeletalMesh **local_308;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> local_300;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_2f0;
  FName local_2e0;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  undefined1 local_278 [24];
  FName local_260;
  FName local_258;
  undefined1 local_250 [8];
  TRangedForIterator local_248;
  FHandle local_218;
  undefined8 local_200 [2];
  FString local_1f0;
  FString local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  undefined4 local_174;
  undefined1 local_168 [128];
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  bVar75 = -1 < CpuChannel->Enabled;
  local_690 = this;
  local_5f0 = param_1;
  if (bVar75) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2048,
               "Mutable_UCustomizableInstancePrivate::UpdateSkeletalMesh_PostBeginUpdate0",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
               ,0x800);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2048);
  }
  local_698[0] = false;
  local_6a8 = DoComponentsNeedUpdate(param_2,local_698);
  pUVar69 = (param_1->Descriptor).CustomizableObject.field0_0x0.DebugPtr;
  local_658 = pUVar69;
  if (pUVar69 == (UCustomizableObject *)0x0) {
    if ((byte)LogMutable._0_1_ < 3) goto LAB_14abf6968;
    local_540._4_8_ = param_1->_padding_;
    ::FName::ToString((FName *)(local_540 + 4),&local_498);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  else {
    if (local_698[0] == false) {
      TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureReuseCacheKey,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)&this->TextureReuseCache,0);
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
      ::operator=(&local_98,
                  (TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                   *)&this->SkeletalMeshes);
      pUVar28 = UCustomizableObject::GetPrivate(pUVar69);
      local_688 = UCustomizableObjectPrivate::GetModelResourcesChecked(pUVar28);
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      pIVar29 = ICustomizableObjectModule::Get();
      (**(code **)((longlong)*pIVar29 + 0x60))(pIVar29,&local_468);
      pUVar30 = UCustomizableObjectInstance::GetPrivate(param_1);
      TArray<FExtensionInstanceData,TSizedDefaultAllocator<32>_>::Empty
                (&pUVar30->ExtensionInstanceData,local_460);
      if (local_468 != local_468 + local_460) {
        local_518 = &local_520;
        puVar65 = local_468;
        do {
          local_520 = *puVar65;
          TSet<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<UCustomizableObjectExtension_const_*_const_&>_>
                    ((TSet<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_e8,
                     (TKeyInitializer<UCustomizableObjectExtension_const_*_const_&> *)local_4a0,
                     (bool *)&local_518);
          puVar65 = puVar65 + 1;
        } while (puVar65 != local_468 + local_460);
      }
      pFVar31 = ::FName::FName(&local_260,"CustomizableObject");
      FVar47 = *pFVar31;
      this_01 = FModuleManager::Get();
      pIVar32 = FModuleManager::LoadModuleChecked(this_01,FVar47);
      (**(code **)((longlong)*pIVar32 + 0x70))(pIVar32,&local_350);
      pFVar10 = param_2->Object;
      iVar27 = (pFVar10->InstanceUpdateData).ExtendedInputPins.ArrayNum;
      this_05 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
                (pFVar10->InstanceUpdateData).ExtendedInputPins.AllocatorInstance.Data;
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
               ((longlong)this_05 + (longlong)iVar27 * 0x18);
LAB_14abf6b20:
      do {
        if ((pFVar10->InstanceUpdateData).ExtendedInputPins.ArrayNum != iVar27) {
          local_680 = 0;
          `TCheckedPointerIterator<FInstanceUpdateData::FNamedExtensionData,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_680);
        }
        if (this_05 == pTVar6) {
          local_560.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
          local_560._padding_._4_4_ = 1;
          local_560._padding_._0_4_ = 0;
          local_560.UnvisitedBitMask = 0xffffffff;
          local_560.CurrentBitIndex = 0;
          local_560.BaseBitIndex = 0;
          if (local_c0 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_560);
          }
          TStack_618._padding_ = CONCAT44(local_560._padding_._4_4_,(undefined4)local_560._padding_)
          ;
          local_620 = (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                       *)local_e8;
          TStack_618._16_8_ = CONCAT44(local_560.CurrentBitIndex,local_560.UnvisitedBitMask);
          TStack_618._24_8_ = CONCAT44(local_560._28_4_,local_560.BaseBitIndex);
          TStack_618.Array = local_560.Array;
          local_5f8._0_4_ = local_e8._8_4_ - local_b4;
          local_3a0 = local_560.Array;
          iStack_388 = local_e8._8_4_ - local_b4;
          uStack_384 = local_5f8._4_4_;
          local_3b0._0_8_ = local_620;
          unique0x100038af = TStack_618._padding_;
          uStack_398 = TStack_618._16_8_;
          local_390 = TStack_618._24_8_;
          pTVar37 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_1d0,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                               local_c0);
          local_620 = (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                       *)local_e8;
          TStack_618._padding_ = pTVar37->_padding_;
          TStack_618.Array = pTVar37->Array;
          TStack_618.UnvisitedBitMask = pTVar37->UnvisitedBitMask;
          TStack_618.CurrentBitIndex = pTVar37->CurrentBitIndex;
          TStack_618._24_8_ = *(undefined8 *)&pTVar37->BaseBitIndex;
          local_5f8._0_4_ = local_e8._8_4_ - local_b4;
          local_248.InitialNum = local_e8._8_4_ - local_b4;
          local_248._44_4_ = local_5f8._4_4_;
          local_248._padding_ = (longlong)local_620;
          local_248._padding_ = TStack_618._padding_;
          local_248._padding_ = (longlong)TStack_618.Array;
          local_248._padding_ = TStack_618._16_8_;
          local_248._padding_ = TStack_618._24_8_;
          bVar23 = TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_3b0,&local_248);
          this_00 = local_5f0;
          if (bVar23) {
            do {
              puVar65 = (undefined8 *)
                        ((longlong)uStack_398._4_4_ * 0x20 + *(longlong *)local_3b0._0_8_);
              (**(code **)(*(longlong *)*puVar65 + 0x2c8))
                        ((longlong *)*puVar65,&local_5d0,puVar65 + 1);
              if ((puStack_5c8 != (uchar *)0x0) && (local_5d0.DebugPtr != (UScriptStruct *)0x0)) {
                pUVar30 = UCustomizableObjectInstance::GetPrivate(this_00);
                iVar27 = (pUVar30->ExtensionInstanceData).ArrayNum;
                piVar2 = &(pUVar30->ExtensionInstanceData).ArrayMax;
                if (iVar27 == *piVar2) {
                  iVar27 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&(pUVar30->ExtensionInstanceData).AllocatorInstance,
                                      piVar2);
                }
                (pUVar30->ExtensionInstanceData).ArrayNum = iVar27 + 1;
                pFVar61 = (FWeakObjectPtr *)
                          ((pUVar30->ExtensionInstanceData).AllocatorInstance.Data +
                          (longlong)iVar27 * 0x18);
                DefaultConstructItems<FExtensionInstanceData,int>(pFVar61,1);
                local_508 = (UObject *)*puVar65;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_508 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_508);
                }
                FWeakObjectPtr::operator=(pFVar61,(FObjectPtr)&local_508);
                this_03 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar61 + 1);
                if (this_03 != &local_5d0) {
                  FInstancedStruct::Reset((FInstancedStruct *)&this_03->ObjectPtr);
                  FInstancedStruct::SetStructData
                            ((FInstancedStruct *)&this_03->ObjectPtr,local_5d0.DebugPtr,puStack_5c8)
                  ;
                  local_5d0.DebugPtr = (UScriptStruct *)0x0;
                  puStack_5c8 = (uchar *)0x0;
                }
              }
              FInstancedStruct::Reset((FInstancedStruct *)&local_5d0.ObjectPtr);
              uStack_398 = CONCAT44(uStack_398._4_4_,(uint)uStack_398 & ~uStack_3a4);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3b0 + 8));
              bVar23 = TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_3b0,&local_248);
            } while (bVar23);
          }
          pUVar30 = local_690;
          pTVar66 = &local_690->SkeletalMeshes;
          local_580._padding_._0_4_ = 0;
          local_580._padding_._4_4_ = 1;
          local_580.UnvisitedBitMask = 0xffffffff;
          puVar3 = &(local_690->SkeletalMeshes).field_0x10;
          local_580.CurrentBitIndex = 0;
          local_580.BaseBitIndex = 0;
          local_630 = pTVar66;
          local_580.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
          if (*(int *)&(local_690->SkeletalMeshes).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_580);
          }
          TStack_618._padding_ = CONCAT44(local_580._padding_._4_4_,(undefined4)local_580._padding_)
          ;
          TStack_618.CurrentBitIndex = local_580.CurrentBitIndex;
          TStack_618.UnvisitedBitMask = local_580.UnvisitedBitMask;
          TStack_618._28_4_ = local_580._28_4_;
          TStack_618.BaseBitIndex = local_580.BaseBitIndex;
          local_598 = *(int *)&(pUVar30->SkeletalMeshes).field_0x8 -
                      *(int *)&(pUVar30->SkeletalMeshes).field_0x34;
          pTStack_5b0 = local_580.Array;
          local_5f8 = CONCAT44(uStack_594,local_598);
          TStack_618.Array = local_580.Array;
          local_620 = pTVar66;
          local_5c0 = pTVar66;
          uStack_5b8 = TStack_618._padding_;
          _uStack_5a8 = TStack_618._16_8_;
          _iStack_5a0 = TStack_618._24_8_;
          pTVar37 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_1b0,(TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                               *(int *)&(pUVar30->SkeletalMeshes).field_0x28);
          uStack_5b8 = pTVar37->_padding_;
          local_660 = pTVar37->Array;
          uVar17._0_4_ = pTVar37->UnvisitedBitMask;
          uVar17._4_4_ = pTVar37->CurrentBitIndex;
          iStack_5a0 = pTVar37->BaseBitIndex;
          uStack_59c = *(undefined4 *)&pTVar37->field_0x1c;
          pTStack_5b0 = local_660;
          _uStack_5a8 = uVar17;
          while( true ) {
            pTVar19 = local_620;
            if (*(int *)&local_620->field_0x8 - *(int *)&local_620->field_0x34 != (int)local_5f8) {
              local_67f = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_67f);
            }
            pUVar30 = local_690;
            if (((TStack_618.CurrentBitIndex == uVar17._4_4_) && (TStack_618.Array == local_660)) &&
               (pTVar19 == pTVar66)) break;
            pFVar10 = param_2->Object;
            FVar47 = *(FName *)(*(longlong *)pTVar19 + (longlong)TStack_618.CurrentBitIndex * 0x18);
            iVar27 = (pFVar10->InstanceUpdateData).Components.ArrayNum;
            pFVar70 = (pFVar10->InstanceUpdateData).Components.AllocatorInstance.Data;
            pFVar72 = pFVar70 + (longlong)iVar27 * 0x30;
            local_588 = FVar47;
            while( true ) {
              if ((pFVar10->InstanceUpdateData).Components.ArrayNum != iVar27) {
                local_67e = 0;
                `TCheckedPointerIterator<FInstanceUpdateData::FComponent,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_67e);
              }
              if (pFVar70 == pFVar72) break;
              uVar57 = *(uint *)pFVar70;
              uVar60 = 0;
              if ((int)uVar57 < (local_688->ComponentNamesPerObjectComponent).ArrayNum) {
                uVar60 = ~uVar57 >> 0x1f;
              }
              if ((uVar60 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar14 = (code *)swi(3);
                uVar24 = (*pcVar14)();
                return (bool)uVar24;
              }
              if (FVar47 == *(FName *)((local_688->ComponentNamesPerObjectComponent).
                                       AllocatorInstance.Data + (longlong)(int)uVar57 * 8))
              goto LAB_14abf742a;
              pFVar70 = pFVar70 + 0x30;
            }
            ClearInstanceComponentData(local_690,&local_588);
            local_6a8 = true;
LAB_14abf742a:
            TStack_618.UnvisitedBitMask = TStack_618.UnvisitedBitMask & ~TStack_618._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_618);
            pTVar66 = local_630;
          }
          if (local_6a8 == false) {
LAB_14abf8c68:
            bVar23 = true;
          }
          else {
            TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                     *)&local_690->SkeletalMeshes);
            iVar27 = (param_2->Object->InstanceUpdateData).Components.ArrayNum;
            local_678.Index = 0;
            if (iVar27 < 1) goto LAB_14abf8c68;
            local_660 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
            pUVar74 = local_688;
            local_4a8.Data = (FScriptContainerElement *)(longlong)iVar27;
            while (pFVar38 = FUpdateContextPrivate::GetComponentUpdateData
                                       (param_2->Object,local_678), local_628 = pFVar38,
                  pFVar38 == (FComponent *)0x0) {
LAB_14abf8c44:
              local_678.Index = local_678.Index + 1;
              local_660 = (TBitArray<FDefaultBitArrayAllocator> *)
                          ((local_660->AllocatorInstance).InlineData + 1);
              if ((longlong)local_4a8.Data <= (longlong)local_660) goto LAB_14abf8c68;
            }
            FVar64.Index = (pFVar38->Id).Index;
            local_64c = FVar64.Index;
            if ((FVar64.Index < 0) ||
               ((pUVar74->ComponentNamesPerObjectComponent).ArrayNum <= FVar64.Index))
            goto LAB_14abf8c44;
            local_670 = *(FName *)((pUVar74->ComponentNamesPerObjectComponent).AllocatorInstance.
                                   Data + (longlong)FVar64.Index * 8);
            pFVar39 = GetComponentData(pUVar30,&local_670);
            if (pFVar39 != (FCustomizableInstanceComponentData *)0x0) {
              pTVar40 = FUpdateContextPrivate::GetMeshDescriptors(param_2->Object,FVar64);
              if ((pTVar40 ==
                   (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                    *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MeshDescriptors",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                      ,0x8d6,L""), bVar23)) {
                pcVar14 = (code *)swi(3);
                uVar24 = (*pcVar14)();
                return (bool)uVar24;
              }
              if ((pTVar40->ArrayNum != 8) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MeshDescriptors->Num() == MAX_MESH_LOD_COUNT",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                      ,0x8d7,L""), bVar23)) {
                pcVar14 = (code *)swi(3);
                uVar24 = (*pcVar14)();
                return (bool)uVar24;
              }
              this_04 = &pFVar39->LastMeshIdPerLOD;
              if (this_04 != pTVar40) {
                DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                          ((FHandle *)(this_04->AllocatorInstance).Data,
                           (pFVar39->LastMeshIdPerLOD).ArrayNum);
                TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                ::
                CopyToEmpty<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                          (this_04,(FHandle *)(pTVar40->AllocatorInstance).Data,pTVar40->ArrayNum,
                           (pFVar39->LastMeshIdPerLOD).ArrayMax);
              }
              pFVar10 = param_2->Object;
              uVar57 = 0;
              if (local_678.Index < (pFVar10->MeshChangedPerInstanceComponent).ArrayNum) {
                uVar57 = (uint)~local_678.Index >> 0x1f;
              }
              if ((uVar57 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar14 = (code *)swi(3);
                uVar24 = (*pcVar14)();
                return (bool)uVar24;
              }
              if ((local_660->AllocatorInstance).InlineData
                  [(longlong)(pFVar10->MeshChangedPerInstanceComponent).AllocatorInstance.Data] ==
                  '\0') {
                pTVar41 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                          ::Find(&local_98,local_670);
                pUVar30 = local_690;
                if ((pTVar41 != (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) &&
                   (&pTVar41->field_0x8 != (undefined1 *)0x0)) {
                  local_340 = &local_670;
                  local_338 = &pTVar41->field_0x8;
                  TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_const_&>_>
                            ((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                              *)&local_690->SkeletalMeshes,
                             (TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_const_&> *)
                             local_540,(bool *)&local_340);
                }
                goto LAB_14abf8c44;
              }
              pFVar10 = param_2->Object;
              if (pFVar10->bStreamMeshLODs == false) {
                this_02 = FUpdateContextPrivate::GetFirstRequestedLOD(pFVar10);
                pbVar42 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                         *)this_02,local_670);
              }
              else {
                pbVar42 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                         *)&pFVar10->FirstLODAvailable,local_670);
              }
              uVar57 = (uint)*pbVar42;
              if ((ushort)*pbVar42 < pFVar38->LODCount) {
                do {
                  FVar64.Index = local_64c;
                  if (7 < (int)uVar57) break;
                  uVar60 = 0;
                  if ((int)uVar57 < pTVar40->ArrayNum) {
                    uVar60 = ~uVar57 >> 0x1f;
                  }
                  if ((uVar60 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  UE::Mutable::Private::GetTypeHashPersistent
                            ((FHandle *)
                             ((pTVar40->AllocatorInstance).Data + (longlong)(int)uVar57 * 0x18));
                  uVar57 = uVar57 + 1;
                  FVar64.Index = local_64c;
                } while ((int)uVar57 < (int)(uint)pFVar38->LODCount);
              }
              pUVar69 = local_658;
              if (param_2->Object->bUseMeshCache != false) {
                if (((local_658->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0)
                   && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Private",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                           ,0x3c0,L""), bVar23)) {
                  pcVar14 = (code *)swi(3);
                  uVar24 = (*pcVar14)();
                  return (bool)uVar24;
                }
                pTVar43 = TSharedPtr<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
                          ::operator->(&(((pUVar69->Private).field0_0x0.DebugPtr)->MeshCache).
                                        GeneratedMeshes);
                uVar57 = GetTypeHash<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle>
                                   (pTVar40);
                puVar44 = TMapBase<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>_>
                          ::
                          FindByHash<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>_>
                                    ((TMapBase<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>_>
                                      *)&pTVar43->KeyIndex,uVar57,pTVar40);
                if (puVar44 != (uint *)0x0) {
                  pFVar45 = TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
                            ::FindChecked((TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
                                           *)&pTVar43->Entries,*puVar44);
                  if ((&pFVar45->Value !=
                       (TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr> *)0x0) &&
                     (pUVar33 = FWeakObjectPtr::Get(&(pFVar45->Value).WeakPtr),
                     pUVar33 != (UObject *)0x0)) {
                    local_500 = pUVar33;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar33);
                    }
                    pUVar30 = local_690;
                    local_330 = &local_670;
                    local_328 = &local_500;
                    TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_&&>_>
                              ((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                                *)&local_690->SkeletalMeshes,
                               (TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_&&> *)
                               (local_4a0 + 4),(bool *)&local_330);
                    pUVar74 = local_688;
                    goto LAB_14abf8c44;
                  }
                }
              }
              pFVar67 = (FMesh *)0x0;
              local_5e8 = (FMesh *)0x0;
              local_668 = (TReferenceControllerBase<1> *)0x0;
              this_06 = pFVar67;
              if (local_628->LODCount != 0) {
                do {
                  if (this_06 != (FMesh *)0x0) goto LAB_14abf79a5;
                  pFVar10 = param_2->Object;
                  uVar60 = (uint)local_628->FirstLOD + (int)pFVar67;
                  uVar57 = 0;
                  if ((int)uVar60 < (pFVar10->InstanceUpdateData).LODs.ArrayNum) {
                    uVar57 = ~uVar60 >> 0x1f;
                  }
                  if ((uVar57 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  pFVar70 = (pFVar10->InstanceUpdateData).LODs.AllocatorInstance.Data;
                  pTVar11 = *(TReferenceControllerBase<1> **)
                             (pFVar70 + (longlong)(int)uVar60 * 0x40 + 0x20);
                  this_06 = *(FMesh **)(pFVar70 + (longlong)(int)uVar60 * 0x40 + 0x18);
                  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar11->SharedReferenceCount =
                         (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pTVar16 = local_668;
                  local_668 = pTVar11;
                  local_5e8 = this_06;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar16);
                  uVar57 = (int)pFVar67 + 1;
                  pFVar67 = (FMesh *)(ulonglong)uVar57;
                } while ((int)uVar57 < (int)(uint)local_628->LODCount);
                if (this_06 != (FMesh *)0x0) {
LAB_14abf79a5:
                  iVar27 = UE::Mutable::Private::FMesh::GetSurfaceCount(this_06);
                  if (iVar27 == 0) {
                    if ((this_06 == (FMesh *)0x0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar23)) {
                      pcVar14 = (code *)swi(3);
                      uVar24 = (*pcVar14)();
                      return (bool)uVar24;
                    }
                    bVar23 = UE::Mutable::Private::FMesh::IsReference(this_06);
                    if (bVar23) {
                      if ((this_06 == (FMesh *)0x0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar23)) {
                        pcVar14 = (code *)swi(3);
                        uVar24 = (*pcVar14)();
                        return (bool)uVar24;
                      }
                      goto LAB_14abf7a0f;
                    }
LAB_14abf8c12:
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_668);
                    pUVar30 = local_690;
                    pUVar74 = local_688;
                    goto LAB_14abf8c44;
                  }
LAB_14abf7a0f:
                  bVar23 = UE::Mutable::Private::FMesh::IsReference(this_06);
                  if (!bVar23) {
                    if (FVar64.Index < (local_688->ReferenceSkeletalMeshesData).ArrayNum) {
                      bVar23 = -1 < CpuChannel->Enabled;
                      if (bVar23) {
                        FCpuProfilerTrace::GetOrCreateSpecId
                                  (&__CpuProfilerEventSpecId2356,"Mutable_ConstructMesh",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                   ,0x934);
                        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2356);
                      }
                      pUVar50 = (UCustomizableObjectSkeletalMesh *)0x0;
                      local_648 = (UCustomizableObjectSkeletalMesh *)0x0;
                      ::FName::ToString(&local_670,&local_298);
                      local_4e0 = (FName)((local_5f0->Descriptor).CustomizableObject.field0_0x0.
                                         DebugPtr)->_padding_;
                      ::FName::ToString(&local_4e0,&local_408);
                      ::FString::PrintfImpl(&local_640,L"SK_%s_%s_h%lu");
                      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_408.Data.AllocatorInstance.Data);
                      }
                      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_298.Data.AllocatorInstance.Data);
                      }
                      FVar47 = (FName)Z_Construct_UClass_USkeletalMesh_NoRegister();
                      FVar58.Data = (FScriptContainerElement *)L"";
                      if (local_640.Data.ArrayNum != 0) {
                        FVar58.Data = local_640.Data.AllocatorInstance.Data;
                      }
                      pFVar31 = ::FName::FName(&local_258,(wchar_t *)FVar58.Data);
                      FVar12 = *pFVar31;
                      pUVar46 = (UClass *)GetTransientPackage();
                      FVar47 = MakeUniqueObjectName
                                         ((UObject *)local_250,pUVar46,FVar47,
                                          FVar12.ComparisonIndex.Value.Value);
                      pFVar48 = ::FName::ToString((FName *)FVar47,&local_288);
                      if (&local_640 != pFVar48) {
                        if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_640.Data.AllocatorInstance.Data);
                        }
                        local_640.Data.AllocatorInstance.Data =
                             (pFVar48->Data).AllocatorInstance.Data;
                        (pFVar48->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_640.Data.ArrayNum = (pFVar48->Data).ArrayNum;
                        local_640.Data.ArrayMax = (pFVar48->Data).ArrayMax;
                        (pFVar48->Data).ArrayNum = 0;
                        (pFVar48->Data).ArrayMax = 0;
                      }
                      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_288.Data.AllocatorInstance.Data);
                      }
                      if (param_2->Object->bBake == false) {
                        FVar58.Data = (FScriptContainerElement *)L"";
                        if (local_640.Data.ArrayNum != 0) {
                          FVar58.Data = local_640.Data.AllocatorInstance.Data;
                        }
                        pFVar31 = ::FName::FName(&local_2e0,(wchar_t *)FVar58.Data);
                        FVar47 = *pFVar31;
                        pUVar49 = GetTransientPackage();
                        local_590 = 0;
                        if (FVar47 == (FName)0x0) {
                          FObjectInitializer::AssertIfInConstructor
                                    ((UObject *)pUVar49,
                                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                    );
                        }
                        pUVar46 = Z_Construct_UClass_UCustomizableObjectSkeletalMesh_NoRegister();
                        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                  ((FStaticConstructObjectParameters *)local_168,pUVar46);
                        local_168._48_8_ = (FObjectInstancingGraph *)0x0;
                        local_168._56_8_ = (UPackage *)0x0;
                        local_168._24_4_ = RF_Transient;
                        local_168._40_8_ = (UObject *)0x0;
                        local_168[0x20] = false;
                        local_168._8_8_ = pUVar49;
                        local_168._16_8_ = FVar47;
                        pUVar50 = (UCustomizableObjectSkeletalMesh *)
                                  StaticConstructObject_Internal
                                            ((FStaticConstructObjectParameters *)local_168);
                        local_648 = pUVar50;
                        if (local_168._64_8_ != 0) {
                          plVar59 = (longlong *)(local_168 + 0x50);
                          if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
                            plVar59 = (longlong *)local_168._104_8_;
                          }
                          (**(code **)(*plVar59 + 0x10))();
                        }
                        if (pUVar50 == (UCustomizableObjectSkeletalMesh *)0x0) goto LAB_14abf7fb8;
                      }
                      else {
LAB_14abf7fb8:
                        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("SkeletalMesh",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                            ,0x94f,L"");
                        if (bVar25) {
                          pcVar14 = (code *)swi(3);
                          uVar24 = (*pcVar14)();
                          return (bool)uVar24;
                        }
                      }
                      local_4d8 = pUVar50;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (pUVar50 != (UCustomizableObjectSkeletalMesh *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)pUVar50);
                      }
                      local_310 = &local_670;
                      local_308 = &local_4d8;
                      TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_&&>_>
                                ((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                                  *)&local_690->SkeletalMeshes,
                                 (TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_&&> *)
                                 (local_3e8 + 4),(bool *)&local_310);
                      if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_640.Data.AllocatorInstance.Data);
                      }
                      pUVar74 = local_688;
                      if (((local_688->ReferenceSkeletalMeshesData).ArrayNum <= FVar64.Index) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar14 = (code *)swi(3);
                        uVar24 = (*pcVar14)();
                        return (bool)uVar24;
                      }
                      pFVar71 = (FMutableRefSkeletalMeshData *)
                                ((pUVar74->ReferenceSkeletalMeshesData).AllocatorInstance.Data +
                                (longlong)FVar64.Index * 0xe8);
                      local_4b8.Data = (FScriptContainerElement *)pFVar71;
                      InitSkeletalMeshData
                                (param_2,(USkeletalMesh *)pUVar50,pFVar71,local_658,FVar64);
                      bVar25 = BuildSkeletonData(param_2,(USkeletalMesh *)pUVar50,local_678);
                      if (bVar25) {
                        if ((this_06 == (FMesh *)0x0) &&
                           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar25)) {
                          pcVar14 = (code *)swi(3);
                          uVar24 = (*pcVar14)();
                          return (bool)uVar24;
                        }
                        UE::Mutable::Private::FMesh::GetPhysicsBody(this_06,&local_300);
                        pFVar22 = local_300.Object;
                        if (local_300.Object != (FPhysicsBody *)0x0) {
                          local_4d0 = (pFVar71->PhysicsAsset).field0_0x0.DebugPtr;
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (local_4d0 != (UPhysicsAsset *)0x0)) {
                            UE::GC::MarkAsReachable((UObject *)local_4d0);
                          }
                          pUVar51 = GetOrBuildMainPhysicsAsset
                                              (param_2,(TObjectPtr<UPhysicsAsset>)&local_4d0,pFVar22
                                               ,true,local_678);
                          USkeletalMesh::WaitUntilAsyncPropertyReleased
                                    ((USkeletalMesh *)pUVar50,PhysicsAsset,ReadWrite);
                          (((TObjectPtr<UPhysicsAsset> *)&pUVar50->_padding_)->field0_0x0).DebugPtr
                               = pUVar51;
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  (local_300.SharedReferenceCount.ReferenceController);
                        if ((this_06 == (FMesh *)0x0) &&
                           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar25)) {
                          pcVar14 = (code *)swi(3);
                          uVar24 = (*pcVar14)();
                          return (bool)uVar24;
                        }
                        pUVar74 = local_688;
                        local_630 = (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                                     *)(longlong)(this_06->AdditionalPhysicsBodies).ArrayNum;
                        local_650 = 0;
                        if (0 < (longlong)local_630) {
                          lVar34 = 0;
                          do {
                            uVar57 = local_650;
                            if ((this_06 == (FMesh *)0x0) &&
                               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsValid()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar25)) {
                              pcVar14 = (code *)swi(3);
                              uVar24 = (*pcVar14)();
                              return (bool)uVar24;
                            }
                            uVar60 = 0;
                            if ((int)uVar57 < (this_06->AdditionalPhysicsBodies).ArrayNum) {
                              uVar60 = ~uVar57 >> 0x1f;
                            }
                            if ((uVar60 == 0) &&
                               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar25)) {
                              pcVar14 = (code *)swi(3);
                              uVar24 = (*pcVar14)();
                              return (bool)uVar24;
                            }
                            pFVar70 = (this_06->AdditionalPhysicsBodies).AllocatorInstance.Data;
                            pTVar11 = *(TReferenceControllerBase<1> **)(pFVar70 + lVar34 + 8);
                            lVar13 = *(longlong *)(pFVar70 + lVar34);
                            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                              LOCK();
                              pTVar11->SharedReferenceCount =
                                   (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                              UNLOCK();
                            }
                            local_4c8 = lVar13;
                            if (lVar13 == 0) {
                              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("AdditionalPhysicsBody",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x977,L"");
                              if (bVar25) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L"");
                              if (bVar25) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                            }
                            if (*(char *)(lVar13 + 0x38) != '\0') {
                              if ((this_06 == (FMesh *)0x0) &&
                                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("IsValid()",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar25)) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                              uVar60 = 0;
                              if ((int)uVar57 < (this_06->AdditionalPhysicsBodies).ArrayNum) {
                                uVar60 = ~uVar57 >> 0x1f;
                              }
                              if ((uVar60 == 0) &&
                                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar25)) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                              pFVar70 = (this_06->AdditionalPhysicsBodies).AllocatorInstance.Data;
                              if ((*(longlong *)(pFVar70 + lVar34) == 0) &&
                                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("IsValid()",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar25)) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                              uVar60 = **(uint **)(pFVar70 + lVar34);
                              uVar68 = 0;
                              if ((int)uVar60 < (pUVar74->AnimBpOverridePhysiscAssetsInfo).ArrayNum)
                              {
                                uVar68 = ~uVar60 >> 0x1f;
                              }
                              if ((uVar68 == 0) &&
                                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar25)) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                              pFVar70 = (pUVar74->AnimBpOverridePhysiscAssetsInfo).AllocatorInstance
                                        .Data + (longlong)(int)uVar60 * 0x58;
                              local_5e0.DebugPtr =
                                   UE::Mutable::Private::LoadClass<UAnimInstance>
                                             ((TSoftClassPtr<UAnimInstance> *)pFVar70);
                              if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14abf83eb:
                                TVar20 = local_5e0;
                                if ((local_5e0.DebugPtr != (UClass *)0x0) &&
                                   (pUVar46 = Z_Construct_UClass_UAnimInstance_NoRegister(),
                                   TVar21 = local_5e0, pUVar30 = local_690, pUVar46 != (UClass *)0x0
                                   )) {
                                  iVar27 = (int)pUVar46->_padding_;
                                  if (((int)(TVar20.DebugPtr)->_padding_ < iVar27) ||
                                     ((longlong *)
                                      *(undefined1 **)
                                       ((TVar20.DebugPtr)->_padding_ + (longlong)iVar27 * 8) !=
                                      &pUVar46->_padding_)) {
                                    bVar25 = false;
                                  }
                                  else {
                                    bVar25 = true;
                                  }
                                  if ((bVar25) && (local_5e0.DebugPtr != (UClass *)0x0)) {
                                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                                      UE::GC::MarkAsReachable((UObject *)local_5e0.DebugPtr);
                                    }
                                    uVar57 = ((uint)((ulonglong)TVar21.DebugPtr >> 0x14) & 0xffff ^
                                             (uint)((ulonglong)TVar21.DebugPtr >> 4)) * -0x7a143595;
                                    uVar57 = (uVar57 >> 0xd ^ uVar57) * -0x3d4d51cb;
                                    pFVar52 = TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
                                              ::FindOrAddImpl<TSubclassOf<UAnimInstance>_const_&>
                                                        ((
                                                  TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
                                                  *)&pUVar30->AnimBpPhysicsAssets,
                                                  uVar57 >> 0x10 ^ uVar57,
                                                  (TSubclassOf<UAnimInstance> *)&local_5e0.ObjectPtr
                                                  );
                                    pUVar33 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                                        ((TPersistentObjectPtr<FSoftObjectPath> *)
                                                         (pFVar70 + 0x28));
                                    if (pUVar33 == (UObject *)0x0) {
LAB_14abf84b9:
                                      pUVar33 = (UObject *)0x0;
                                    }
                                    else {
                                      pUVar46 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
                                      iVar27 = (int)pUVar46->_padding_;
                                      if ((*(int *)(*(longlong *)&pUVar33->field_0x10 + 0x38) <
                                           iVar27) ||
                                         ((longlong *)
                                          *(undefined1 **)
                                           (*(longlong *)(*(longlong *)&pUVar33->field_0x10 + 0x30)
                                           + (longlong)iVar27 * 8) != &pUVar46->_padding_))
                                      goto LAB_14abf84b9;
                                    }
                                    if (UE::GC::GIsIncrementalReachabilityPending == false) {
                                      if (pUVar33 == (UObject *)0x0) goto LAB_14abf84da;
                                    }
                                    else if (pUVar33 == (UObject *)0x0) {
LAB_14abf84da:
                                      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("PhysicsAssetTemplate",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x98d,L"");
                                      if (bVar25) {
                                        pcVar14 = (code *)swi(3);
                                        uVar24 = (*pcVar14)();
                                        return (bool)uVar24;
                                      }
                                    }
                                    else {
                                      UE::GC::MarkAsReachable(pUVar33);
                                    }
                                    iVar27 = (pFVar52->AnimInstancePropertyIndexAndPhysicsAssets).
                                             ArrayNum;
                                    piVar2 = &(pFVar52->AnimInstancePropertyIndexAndPhysicsAssets).
                                              ArrayMax;
                                    if (iVar27 == *piVar2) {
                                      iVar27 = UE::Core::Private::
                                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                         (0x810,(ForAnyElementType *)pFVar52,piVar2)
                                      ;
                                    }
                                    (pFVar52->AnimInstancePropertyIndexAndPhysicsAssets).ArrayNum =
                                         iVar27 + 1;
                                    pFVar72 = (pFVar52->AnimInstancePropertyIndexAndPhysicsAssets).
                                              AllocatorInstance.Data + (longlong)iVar27 * 0x10;
                                    *(undefined8 *)pFVar72 = 0;
                                    *(undefined8 *)(pFVar72 + 8) = 0;
                                    *(undefined4 *)pFVar72 = *(undefined4 *)&pFVar70[0x50].field_0x0
                                    ;
                                    local_4c0 = pUVar33;
                                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                       (pUVar33 != (UObject *)0x0)) {
                                      UE::GC::MarkAsReachable(pUVar33);
                                    }
                                    TVar53 = ::`anonymous_namespace'::
                                             MakePhysicsAssetFromTemplateAndMutableBody
                                                       ((TSharedRef<FUpdateContextPrivate,1> *)
                                                        local_278,(TObjectPtr<UPhysicsAsset>)param_2
                                                        ,(FPhysicsBody *)&local_4c0,
                                                        (FCustomizableObjectInstanceComponentIndex)
                                                        (int)local_4c8);
                                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                                       (*(UObject **)TVar53.field0_0x0 != (UObject *)0x0)) {
                                      UE::GC::MarkAsReachable(*(UObject **)TVar53.field0_0x0);
                                    }
                                    *(undefined8 *)(pFVar72 + 8) = *(undefined8 *)TVar53.field0_0x0;
                                    this_06 = local_5e8;
                                    uVar57 = local_650;
                                    goto LAB_14abf85d5;
                                  }
                                }
                              }
                              else if (local_5e0.DebugPtr != (UClass *)0x0) {
                                UE::GC::MarkAsReachable((UObject *)local_5e0.DebugPtr);
                                goto LAB_14abf83eb;
                              }
                              bVar25 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<7189396884065094020>,true,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x984,"AnimInstanceClass");
                              this_06 = local_5e8;
                              if (bVar25) {
                                pcVar14 = (code *)swi(3);
                                uVar24 = (*pcVar14)();
                                return (bool)uVar24;
                              }
                            }
LAB_14abf85d5:
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline(pTVar11);
                            local_650 = uVar57 + 1;
                            lVar34 = lVar34 + 0x10;
                            local_630 = (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                                         *)((longlong)(local_630 + -1) + 0x4f);
                          } while (local_630 !=
                                   (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                                    *)0x0);
                          local_630 = (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                                       *)0x0;
                          pUVar50 = local_648;
                          FVar64.Index = local_64c;
                        }
                        local_2f0.SharedReferenceCount.ReferenceController = local_668;
                        if (local_668 != (TReferenceControllerBase<1> *)0x0) {
                          LOCK();
                          local_668->SharedReferenceCount =
                               (atomic<int>)((int)local_668->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        local_2f0.Object = this_06;
                        BuildMeshSockets((USkeletalMesh *)pUVar50,local_688,
                                         (FMutableRefSkeletalMeshData *)local_4b8.Data,&local_2f0);
                        uVar57 = local_c0;
                        iVar27 = 0;
                        uVar60 = 1;
                        iStack_5a0 = 0;
                        uStack_5a4 = 0;
                        if (local_c0 != 0) {
                          puVar44 = (uint *)(local_e8 + 0x10);
                          if (local_c8 != (uint *)0x0) {
                            puVar44 = local_c8;
                          }
                          uVar68 = *puVar44;
                          iVar27 = 0;
                          while (uVar68 == 0) {
                            iVar27 = iVar27 + 1;
                            iStack_5a0 = iStack_5a0 + 0x20;
                            uStack_5a4 = local_c0;
                            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                                iVar27) goto LAB_14abf86d3;
                            uVar68 = puVar44[iVar27];
                          }
                          uVar60 = ~(uVar68 - 1) & uVar68;
                          uVar7 = (ulonglong)uVar60 * 2 + 1;
                          lVar34 = 0x3f;
                          if (uVar7 != 0) {
                            for (; uVar7 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                            }
                          }
                          local_3b8 = (int)lVar34;
                          uStack_5a4 = iStack_5a0 + -1 + local_3b8;
                          if ((int)local_c0 < (int)uStack_5a4) {
                            uStack_5a4 = local_c0;
                          }
                        }
LAB_14abf86d3:
                        local_5c0 = (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                                     *)local_e8;
                        pTStack_5b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
                        uVar68 = local_c0 & 0xffffffe0;
                        local_598 = local_e8._8_4_ - local_b4;
                        uStack_5b8 = CONCAT44(uVar60,iVar27);
                        uStack_5a8 = 0xffffffff;
                        uStack_59c = local_174;
                        TStack_378._padding_ = uStack_5b8;
                        iVar27 = (int)local_c0 >> 5;
                        uStack_358 = CONCAT44(uStack_594,local_598);
                        bVar56 = (byte)local_c0;
                        TStack_378.UnvisitedBitMask = 0xffffffff;
                        TStack_378.CurrentBitIndex = uStack_5a4;
                        TStack_378.BaseBitIndex = iStack_5a0;
                        TStack_378._28_4_ = local_174;
                        local_380 = local_5c0;
                        TStack_378.Array = pTStack_5b0;
                        if (((int)local_c0 < 0) &&
                           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                ,0x7af,L""), bVar25)) {
                          pcVar14 = (code *)swi(3);
                          uVar24 = (*pcVar14)();
                          return (bool)uVar24;
                        }
                        pUVar50 = local_648;
                        if (uVar57 != local_c0) {
                          puVar44 = (uint *)(local_e8 + 0x10);
                          if (local_c8 != (uint *)0x0) {
                            puVar44 = local_c8;
                          }
                          uVar57 = -1 << (bVar56 & 0x1f) & puVar44[iVar27];
                          while (uVar57 == 0) {
                            iVar27 = iVar27 + 1;
                            uVar68 = uVar68 + 0x20;
                            uVar57 = local_c0;
                            if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 <
                                iVar27) goto LAB_14abf8810;
                            uVar57 = puVar44[iVar27];
                          }
                          uVar7 = (ulonglong)(~(uVar57 - 1) & uVar57) * 2 + 1;
                          lVar34 = 0x3f;
                          if (uVar7 != 0) {
                            for (; uVar7 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                            }
                          }
                          local_3b4 = (int)lVar34;
                          uVar57 = (uVar68 - 1) + local_3b4;
                          if ((int)local_c0 < (int)uVar57) {
                            uVar57 = local_c0;
                          }
                        }
LAB_14abf8810:
                        while( true ) {
                          pTVar66 = local_380;
                          if (*(int *)&local_380->field_0x8 - *(int *)&local_380->field_0x34 !=
                              (int)uStack_358) {
                            local_67d = 0;
                            `TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()
                                      (&local_67d);
                          }
                          this_07 = local_648;
                          FVar18.Index = local_678.Index;
                          if (((TStack_378.CurrentBitIndex == uVar57) &&
                              (TStack_378.Array ==
                               (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
                             (pTVar66 ==
                              (TMap<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
                               *)local_e8)) break;
                          lVar34 = *(longlong *)pTVar66;
                          plVar59 = *(longlong **)
                                     ((longlong)TStack_378.CurrentBitIndex * 0x20 + lVar34);
                          (**(code **)(*plVar59 + 0x2c0))
                                    (plVar59,(longlong)TStack_378.CurrentBitIndex * 0x20 +
                                             lVar34 + 8,local_670,pUVar50);
                          TStack_378.UnvisitedBitMask =
                               TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&TStack_378);
                        }
                        BuildOrCopyElementData(param_2,(USkeletalMesh *)local_648,local_678);
                        bVar25 = BuildOrCopyRenderData
                                           (param_2,(USkeletalMesh *)this_07,local_5f0,FVar18);
                        if (bVar25) {
                          BuildOrCopyMorphTargetsData(param_2,(USkeletalMesh *)this_07,FVar18);
                          BuildOrCopyClothingData
                                    (param_2,(USkeletalMesh *)this_07,local_688,FVar18,
                                     &local_690->ClothingPhysicsAssets);
                          plVar54 = (longlong *)(**(code **)(this_07->_padding_ + 0x398))(this_07);
                          plVar59 = plVar54 + 1;
                          if (((plVar54 == (longlong *)0x0) || ((int)*plVar59 < 1)) &&
                             (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<7189396884065094059>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x9ab,
                                                  "RenderData && RenderData->LODRenderData.Num() > 0"
                                                 ), bVar25)) {
                            pcVar14 = (code *)swi(3);
                            uVar24 = (*pcVar14)();
                            return (bool)uVar24;
                          }
                          iVar27 = (**(code **)(this_07->_padding_ + 0x3d0))(this_07);
                          if ((iVar27 < 1) &&
                             (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<7189396884065094060>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                                  ,0x9ac,"SkeletalMesh->GetLODNum() > 0"), bVar25))
                          {
                            pcVar14 = (code *)swi(3);
                            uVar24 = (*pcVar14)();
                            return (bool)uVar24;
                          }
                          if (plVar54 != (longlong *)0x0) {
                            puVar62 = (undefined8 *)*plVar54;
                            lVar34 = *plVar59;
                            puVar65 = puVar62 + (int)lVar34;
                            while( true ) {
                              if ((int)*plVar59 != (int)lVar34) {
                                local_67c[0] = 0;
                                `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::
                                <lambda_1>::operator()(local_67c);
                              }
                              this_07 = local_648;
                              if (puVar62 == puVar65) break;
                              UnrealConversionUtils::UpdateSkeletalMeshLODRenderDataBuffersSize
                                        ((FSkeletalMeshLODRenderData *)*puVar62);
                              puVar62 = puVar62 + 1;
                            }
                          }
                          if ((param_2->Object->bUseMeshCache != false) &&
                             (pTVar40 = FUpdateContextPrivate::GetMeshDescriptors
                                                  (param_2->Object,FVar64), pUVar69 = local_658,
                             pTVar40 !=
                             (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                              *)0x0)) {
                            pwVar73 = L"";
                            if (((local_658->Private).field0_0x0.DebugPtr ==
                                 (UCustomizableObjectPrivate *)0x0) &&
                               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("Private",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                                                  ,0x3c0,L""), bVar25)) {
                              pcVar14 = (code *)swi(3);
                              uVar24 = (*pcVar14)();
                              return (bool)uVar24;
                            }
                            pUVar28 = (pUVar69->Private).field0_0x0.DebugPtr;
                            pUVar46 = Z_Construct_UClass_UCustomizableObjectSkeletalMesh_NoRegister
                                                ();
                            iVar27 = (int)pUVar46->_padding_;
                            if (((*(int *)(this_07->_padding_ + 0x38) < iVar27) ||
                                ((longlong *)
                                 *(undefined1 **)
                                  (*(longlong *)(this_07->_padding_ + 0x30) + (longlong)iVar27 * 8)
                                 != &pUVar46->_padding_)) ||
                               (this_07 == (UCustomizableObjectSkeletalMesh *)0x0)) {
                              pFVar48 = GetTypeName<UCustomizableObjectSkeletalMesh>(&local_1f0);
                              if ((pFVar48->Data).ArrayNum == 0) {
                                pwVar63 = L"";
                              }
                              else {
                                pwVar63 = (wchar_t *)(pFVar48->Data).AllocatorInstance.Data;
                              }
                              pFVar48 = GetFullNameForCastLogError<USkeletalMesh>
                                                  (&local_1e0,(USkeletalMesh *)this_07);
                              if ((pFVar48->Data).ArrayNum != 0) {
                                pwVar73 = (wchar_t *)(pFVar48->Data).AllocatorInstance.Data;
                              }
                    /* WARNING: Subroutine does not return */
                              CastLogError(pwVar73,pwVar63);
                            }
                            if (((pUVar28->MeshCache).GeneratedMeshes.Object ==
                                 (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                                  *)0x0) &&
                               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsValid()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar25)) {
                              pcVar14 = (code *)swi(3);
                              uVar24 = (*pcVar14)();
                              return (bool)uVar24;
                            }
                            pTVar43 = (pUVar28->MeshCache).GeneratedMeshes.Object;
                            if (UE::GC::GIsIncrementalReachabilityPending != false) {
                              UE::GC::MarkAsReachable((UObject *)this_07);
                            }
                            local_5d8.ObjectIndex = 0;
                            local_5d8.ObjectSerialNumber = 0;
                            local_4b0 = this_07;
                            if (UE::GC::GIsIncrementalReachabilityPending != false) {
                              UE::GC::MarkAsReachable((UObject *)this_07);
                            }
                            FWeakObjectPtr::operator=(&local_5d8,(FObjectPtr)&local_4b0);
                            pFVar55 = TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                                      ::Add(pTVar43,&local_218,pTVar40,
                                            (TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>
                                             *)&local_5d8);
                            pTVar4 = &pFVar55->WeakRegistry;
                            (this_07->MeshCacheId).Id = pFVar55->Id;
                            pFVar55->Id = 0xffffffff;
                            pTVar43 = pTVar4->Object;
                            pTVar11 = (pFVar55->WeakRegistry).WeakReferenceCount.ReferenceController
                            ;
                            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                              LOCK();
                              pTVar11->WeakReferenceCount =
                                   (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
                              UNLOCK();
                            }
                            pTVar15 = (this_07->MeshCacheId).WeakRegistry.Object;
                            pTVar16 = (this_07->MeshCacheId).WeakRegistry.WeakReferenceCount.
                                      ReferenceController;
                            local_3f8._0_4_ = SUB84(pTVar43,0);
                            local_3f8._4_4_ = (undefined4)((ulonglong)pTVar43 >> 0x20);
                            uStack_3f0._0_4_ = SUB84(pTVar11,0);
                            uStack_3f0._4_4_ = (undefined4)((ulonglong)pTVar11 >> 0x20);
                            *(undefined4 *)&(this_07->MeshCacheId).WeakRegistry.Object =
                                 (undefined4)local_3f8;
                            *(undefined4 *)
                             ((longlong)&(this_07->MeshCacheId).WeakRegistry.Object + 4) =
                                 local_3f8._4_4_;
                            *(undefined4 *)
                             &(this_07->MeshCacheId).WeakRegistry.WeakReferenceCount.
                              ReferenceController = (undefined4)uStack_3f0;
                            *(undefined4 *)
                             ((longlong)
                              &(this_07->MeshCacheId).WeakRegistry.WeakReferenceCount.
                               ReferenceController + 4) = uStack_3f0._4_4_;
                            local_3f8 = pTVar15;
                            uStack_3f0 = pTVar16;
                            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
                              LOCK();
                              paVar5 = &pTVar16->WeakReferenceCount;
                              aVar8 = *paVar5;
                              *paVar5 = (atomic<int>)((int)*paVar5 + -1);
                              UNLOCK();
                              if (aVar8 == (atomic<int>)0x1) {
                                (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
                              }
                            }
                            if (pTVar4 != (TWeakPtr<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
                                           *)local_200) {
                              pTVar11 = (pFVar55->WeakRegistry).WeakReferenceCount.
                                        ReferenceController;
                              pTVar4->Object =
                                   (TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                                    *)0x0;
                              (pFVar55->WeakRegistry).WeakReferenceCount.ReferenceController =
                                   (TReferenceControllerBase<1> *)0x0;
                              if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                                LOCK();
                                paVar5 = &pTVar11->WeakReferenceCount;
                                aVar8 = *paVar5;
                                *paVar5 = (atomic<int>)((int)*paVar5 + -1);
                                UNLOCK();
                                if (aVar8 == (atomic<int>)0x1) {
                                  (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
                                }
                              }
                            }
                            TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
                            ::FHandle::~FHandle(&local_218);
                          }
                          pUVar46 = Z_Construct_UClass_UCustomizableObjectSkeletalMesh_NoRegister();
                          iVar27 = (int)pUVar46->_padding_;
                          if (((iVar27 <= *(int *)(this_07->_padding_ + 0x38)) &&
                              ((longlong *)
                               *(undefined1 **)
                                (*(longlong *)(this_07->_padding_ + 0x30) + (longlong)iVar27 * 8) ==
                               &pUVar46->_padding_)) &&
                             (this_07 != (UCustomizableObjectSkeletalMesh *)0x0)) {
                            UCustomizableObjectSkeletalMesh::InitMutableStreamingData
                                      (this_07,param_2,&local_670,(uint)local_628->FirstLOD,
                                       (uint)local_628->LODCount);
                          }
                          if (bVar23) {
                            FCpuProfilerTrace::OutputEndEvent();
                          }
                          goto LAB_14abf8c12;
                        }
                      }
                      InvalidateGeneratedData(local_690);
                      if (bVar23) {
                        FCpuProfilerTrace::OutputEndEvent();
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(local_668);
                        bVar23 = false;
                        goto LAB_14abf8c6a;
                      }
                    }
                    else {
                      InvalidateGeneratedData(local_690);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_668);
                    bVar23 = false;
                    goto LAB_14abf8c6a;
                  }
                  if ((this_06 == (FMesh *)0x0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  uVar60 = UE::Mutable::Private::FMesh::GetReferencedMesh(this_06);
                  pUVar74 = local_688;
                  uVar57 = 0;
                  if ((int)uVar60 < (local_688->PassThroughMeshes).ArrayNum) {
                    uVar57 = ~uVar60 >> 0x1f;
                  }
                  if ((uVar57 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  pFVar70 = (pUVar74->PassThroughMeshes).AllocatorInstance.Data;
                  local_3e0.WeakPtr = *(FWeakObjectPtr *)(pFVar70 + (longlong)(int)uVar60 * 0x28);
                  FSoftObjectPath::FSoftObjectPath
                            (&local_3e0.ObjectID,
                             (FSoftObjectPath *)(pFVar70 + (longlong)(int)uVar60 * 0x28 + 8));
                  pUVar33 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_3e0);
                  if (pUVar33 == (UObject *)0x0) {
LAB_14abf7afe:
                    pUVar69 = local_658;
                    if (1 < (byte)LogMutable._0_1_) {
                      local_4f8 = (FName)local_658->_padding_;
                      ::FName::ToString(&local_4f8,&local_438);
                      FSoftObjectPath::ToString(&local_3e0.ObjectID,&local_448);
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_448.Data.AllocatorInstance.Data);
                      }
                      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_438.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                  else {
                    pUVar46 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
                    iVar27 = (int)pUVar46->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar33->field_0x10 + 0x38) < iVar27) ||
                       (pUVar69 = local_658,
                       (longlong *)
                       *(undefined1 **)
                        (*(longlong *)(*(longlong *)&pUVar33->field_0x10 + 0x30) +
                        (longlong)iVar27 * 8) != &pUVar46->_padding_)) goto LAB_14abf7afe;
                  }
                  pUVar33 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_3e0);
                  if (pUVar33 == (UObject *)0x0) {
                    if (local_3e0.ObjectID.AssetPath.PackageName != (FName)0x0) {
                      FSoftObjectPath::TryLoad(&local_3e0.ObjectID,(FUObjectSerializeContext *)0x0);
                      pUVar33 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_3e0);
                      goto LAB_14abf7be0;
                    }
LAB_14abf7c89:
                    pUVar30 = local_690;
                    if (1 < (byte)LogMutable._0_1_) {
                      local_4e8 = (FName)pUVar69->_padding_;
                      ::FName::ToString(&local_4e8,&local_418);
                      FSoftObjectPath::ToString(&local_3e0.ObjectID,&local_428);
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_428.Data.AllocatorInstance.Data);
                      }
                      pUVar30 = local_690;
                      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_418.Data.AllocatorInstance.Data);
                        pUVar30 = local_690;
                      }
                    }
                  }
                  else {
LAB_14abf7be0:
                    if (pUVar33 == (UObject *)0x0) goto LAB_14abf7c89;
                    pUVar46 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
                    iVar27 = (int)pUVar46->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar33->field_0x10 + 0x38) < iVar27) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar33->field_0x10 + 0x30) +
                         (longlong)iVar27 * 8) != &pUVar46->_padding_)) goto LAB_14abf7c89;
                    pUVar46 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                    iVar27 = (int)pUVar46->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar33->field_0x10 + 0x38) < iVar27) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar33->field_0x10 + 0x30) +
                         (longlong)iVar27 * 8) != &pUVar46->_padding_)) goto LAB_14abf7c89;
                    local_4f0 = pUVar33;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar33);
                    }
                    pUVar30 = local_690;
                    local_320 = &local_670;
                    local_318 = &local_4f0;
                    TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_&&>_>
                              ((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                                *)&local_690->SkeletalMeshes,
                               (TPairInitializer<FName_const_&,TObjectPtr<USkeletalMesh>_&&> *)
                               local_3e8,(bool *)&local_320);
                  }
                  if (local_3e0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3e0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_668);
                  goto LAB_14abf8c44;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_668);
              pUVar30 = local_690;
              pUVar74 = local_688;
              goto LAB_14abf8c44;
            }
            bVar23 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7189396884065093839>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                ,0x8cf,"false");
            if (bVar23) {
              pcVar14 = (code *)swi(3);
              uVar24 = (*pcVar14)();
              return (bool)uVar24;
            }
            InvalidateGeneratedData(pUVar30);
            bVar23 = false;
          }
LAB_14abf8c6a:
          local_a0 = 0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8);
          }
          TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8);
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          goto LAB_14abf8cb2;
        }
        if (local_350 != local_350 + (longlong)local_348 * 7) {
          pFVar61 = local_350;
          do {
            if (pFVar61[1] == (FWeakObjectPtr)this_05[1].Object) {
              if (pFVar61 != (FWeakObjectPtr *)0x0) {
                pUVar33 = FWeakObjectPtr::Get(pFVar61);
                if (pUVar33 == (UObject *)0x0) {
                  if ((byte)LogMutable._0_1_ < 2) goto LAB_14abf702a;
                  ::FName::ToString((FName *)(this_05 + 1),(FString *)(local_278 + 8));
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                  FVar58.Data = (FScriptContainerElement *)local_278._8_8_;
                  goto LAB_14abf7020;
                }
                if ((this_05->Object == (FExtensionData *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar23)) {
                  pcVar14 = (code *)swi(3);
                  uVar24 = (*pcVar14)();
                  return (bool)uVar24;
                }
                if (this_05->Object->Origin == Invalid) {
                  if ((byte)LogMutable._0_1_ < 2) goto LAB_14abf702a;
                  ::FName::ToString((FName *)(this_05 + 1),&local_2d8);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                  FVar58.Data = local_2d8.Data.AllocatorInstance.Data;
                  goto LAB_14abf7020;
                }
                uVar57 = ((uint)((ulonglong)pUVar33 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar33 >> 4)) * -0x7a143595;
                uVar57 = (uVar57 >> 0xd ^ uVar57) * -0x3d4d51cb;
                local_510 = pUVar33;
                iVar26 = TSet<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<UCustomizableObjectExtension_const_*>
                                   ((TSet<TTuple<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UCustomizableObjectExtension_const_*,TArray<FInputPinDataContainer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                     *)local_e8,uVar57 >> 0x10 ^ uVar57,
                                    (UCustomizableObjectExtension **)&local_510);
                if (((iVar26 == -1) ||
                    (lVar34 = (longlong)iVar26 * 0x20 + local_e8._0_8_, lVar34 == 0)) ||
                   (pFVar1 = (ForAnyElementType *)(lVar34 + 8), pFVar1 == (ForAnyElementType *)0x0))
                {
                  if ((byte)LogMutable._0_1_ < 2) goto LAB_14abf702a;
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar33,&local_2b8,(UObject *)0x0);
                  ::FName::ToString((FName *)(this_05 + 1),&local_2c8);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                  FVar58.Data = local_2b8.Data.AllocatorInstance.Data;
                  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                    FVar58.Data = local_2b8.Data.AllocatorInstance.Data;
                  }
                  goto LAB_14abf7020;
                }
                pFVar36 = (FCustomizableObjectResourceData *)0x0;
                pFVar35 = TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::operator->
                                    (this_05);
                if (pFVar35->Origin == ConstantAlwaysLoaded) {
                  pFVar35 = TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::operator->
                                      (this_05);
                  if (((pFVar35->Index < 0) ||
                      ((local_688->AlwaysLoadedExtensionData).ArrayNum <= (int)pFVar35->Index)) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ModelResources.AlwaysLoadedExtensionData.IsValidIndex(ExtensionOutput.Data->Index)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                          ,0x864,L""), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  pFVar35 = TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::operator->
                                      (this_05);
                  sVar9 = pFVar35->Index;
                  uVar57 = 0;
                  if ((int)sVar9 < (local_688->AlwaysLoadedExtensionData).ArrayNum) {
                    uVar57 = (uint)~(int)sVar9 >> 0x1f;
                  }
                  if ((uVar57 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  pFVar36 = (FCustomizableObjectResourceData *)
                            ((local_688->AlwaysLoadedExtensionData).AllocatorInstance.Data +
                            (longlong)sVar9 * 0x18);
LAB_14abf6f0a:
                  if (pFVar36 == (FCustomizableObjectResourceData *)0x0) {
LAB_14abf6f0f:
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ReferencedExtensionData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                        ,0x885,L"");
                    if (bVar23) {
                      pcVar14 = (code *)swi(3);
                      uVar24 = (*pcVar14)();
                      return (bool)uVar24;
                    }
                  }
                  iVar26 = *(int *)(lVar34 + 0x10);
                  if (iVar26 == *(int *)(lVar34 + 0x14)) {
                    iVar26 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x830,pFVar1,(int *)(lVar34 + 0x14));
                    *(int *)(lVar34 + 0x10) = iVar26;
                  }
                  *(int *)(lVar34 + 0x10) = iVar26 + 1;
                  FInputPinDataContainer::FInputPinDataContainer
                            ((FInputPinDataContainer *)(pFVar1->Data + (longlong)iVar26 * 0x30),
                             (FObjectNodeInputPin *)(pFVar61 + 2),&pFVar36->Data);
                }
                else {
                  if (pFVar35->Origin != ConstantStreamed) {
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!\"Unimplemented function called\"",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                        ,0x882,L"");
                    if (bVar23) {
                      pcVar14 = (code *)swi(3);
                      uVar24 = (*pcVar14)();
                      return (bool)uVar24;
                    }
                    goto LAB_14abf6f0f;
                  }
                  pFVar35 = TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::operator->
                                      (this_05);
                  if (((pFVar35->Index < 0) ||
                      ((local_688->StreamedExtensionData).ArrayNum <= (int)pFVar35->Index)) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ModelResources.StreamedExtensionData.IsValidIndex(ExtensionOutput.Data->Index)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                                          ,0x86f,L""), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  pFVar35 = TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>::operator->
                                      (this_05);
                  sVar9 = pFVar35->Index;
                  uVar57 = 0;
                  if ((int)sVar9 < (local_688->StreamedExtensionData).ArrayNum) {
                    uVar57 = (uint)~(int)sVar9 >> 0x1f;
                  }
                  if ((uVar57 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar14 = (code *)swi(3);
                    uVar24 = (*pcVar14)();
                    return (bool)uVar24;
                  }
                  this_08 = (FCustomizableObjectStreamedResourceData *)
                            ((local_688->StreamedExtensionData).AllocatorInstance.Data +
                            (longlong)sVar9 * 0x30);
                  bVar23 = FCustomizableObjectStreamedResourceData::IsLoaded(this_08);
                  if (bVar23) {
                    pFVar36 = FCustomizableObjectStreamedResourceData::GetLoadedData(this_08);
                    goto LAB_14abf6f0a;
                  }
                  if (1 < (byte)LogMutable._0_1_) {
                    FSoftObjectPath::ToString
                              ((FSoftObjectPath *)&(this_08->ContainerPath).SoftObjectPtr.field_0x8,
                               &local_458);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable)
                    ;
                    FVar58.Data = local_458.Data.AllocatorInstance.Data;
                    goto LAB_14abf7020;
                  }
                }
                this_05 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
                          &this_05[1].SharedReferenceCount;
                goto LAB_14abf6b20;
              }
              break;
            }
            pFVar61 = pFVar61 + 7;
          } while (pFVar61 != local_350 + (longlong)local_348 * 7);
        }
        if (1 < (byte)LogMutable._0_1_) {
          ::FName::ToString((FName *)(this_05 + 1),&local_2a8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          FVar58.Data = local_2a8.Data.AllocatorInstance.Data;
LAB_14abf7020:
          if ((TReferenceControllerBase<1> *)FVar58.Data != (TReferenceControllerBase<1> *)0x0) {
            FMemory::Free(FVar58.Data);
          }
        }
LAB_14abf702a:
        this_05 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
                  &this_05[1].SharedReferenceCount;
      } while( true );
    }
    if ((byte)LogMutable._0_1_ < 3) goto LAB_14abf6968;
    local_534 = (FName)pUVar69->_padding_;
    ::FName::ToString(&local_534,&local_478);
    local_52c = (FName)param_1->_padding_;
    ::FName::ToString(&local_52c,&local_488);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    local_498.Data.AllocatorInstance.Data = local_478.Data.AllocatorInstance.Data;
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
      local_498.Data.AllocatorInstance.Data = local_478.Data.AllocatorInstance.Data;
    }
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
LAB_14abf6968:
  InvalidateGeneratedData(this);
  bVar23 = false;
  param_2->Object->UpdateResult = Error;
LAB_14abf8cb2:
  if (bVar75) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar23;
}

