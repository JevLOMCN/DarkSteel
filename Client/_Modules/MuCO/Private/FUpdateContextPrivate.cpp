// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 16

// ~FUpdateContextPrivate @ 14abbf360

void __thiscall FUpdateContextPrivate::~FUpdateContextPrivate(FUpdateContextPrivate *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,int>
            ((FHandle *)(this->CachedTextures).AllocatorInstance.Data,
             (this->CachedTextures).ArrayNum);
  pFVar1 = (this->CachedTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TStrongObjectPtr<UStreamableRenderAsset_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UStreamableRenderAsset_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->LoadedPassThroughMeshesPendingSetMaterial).AllocatorInstance.Data,
             (this->LoadedPassThroughMeshesPendingSetMaterial).ArrayNum);
  pFVar1 = (this->LoadedPassThroughMeshesPendingSetMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TStrongObjectPtr<UTexture_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UTexture_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->LoadedPassThroughTexturesPendingSetMaterial).AllocatorInstance.Data,
             (this->LoadedPassThroughTexturesPendingSetMaterial).ArrayNum);
  pFVar1 = (this->LoadedPassThroughTexturesPendingSetMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TStrongObjectPtr<UObject_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UObject_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->Objects).AllocatorInstance.Data,(this->Objects).ArrayNum);
  pFVar1 = (this->Objects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->AttachedParentUpdated).HashSize = 0;
  FVar2 = (this->AttachedParentUpdated).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UCustomizableObjectInstanceUsage,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UCustomizableObjectInstanceUsage,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AttachedParentUpdated).Elements);
  pFVar1 = (this->MeshChangedPerInstanceComponent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
              *)(this->MeshDescriptors).AllocatorInstance.Data,(this->MeshDescriptors).ArrayNum);
  pFVar1 = (this->MeshDescriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->PixelFormatOverride != 0) {
    plVar3 = *(longlong **)&(this->PixelFormatOverride).field_0x28;
    plVar5 = (longlong *)&(this->PixelFormatOverride).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  *(undefined4 *)&(this->ImageToPlatformDataMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ImageToPlatformDataMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImageToPlatformDataMap);
  *(undefined4 *)&(this->FirstResidentLOD).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FirstResidentLOD).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FirstResidentLOD);
  *(undefined4 *)&(this->FirstLODAvailable).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FirstLODAvailable).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FirstLODAvailable);
  *(undefined4 *)&(this->NumLODsAvailable).field_0x48 = 0;
  pvVar4 = *(void **)&(this->NumLODsAvailable).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NumLODsAvailable);
  pFVar1 = (this->ExtensionStreamedResourceIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamedResourceIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoneNames).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExternalResourceProvider).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaterialIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ImageIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshIdRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Model).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MutableInstance).SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)(this->LowPriorityTextures).AllocatorInstance.Data,
             (this->LowPriorityTextures).ArrayNum);
  pFVar1 = (this->LowPriorityTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RelevantParametersInProgress).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstanceUpdateData::~FInstanceUpdateData(&this->InstanceUpdateData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MutableSystem).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Parameters).SharedReferenceCount.ReferenceController);
  FDescriptorHash::~FDescriptorHash(&this->CapturedDescriptorHash);
  FCustomizableObjectInstanceDescriptor::~FCustomizableObjectInstanceDescriptor
            (&this->CapturedDescriptor);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UpdateNativeCallback).field_0x8,
             *(int *)&(this->UpdateNativeCallback).field_0x10);
  pvVar4 = *(void **)&(this->UpdateNativeCallback).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateNativeCallback);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateCallback);
  return;
}

// FUpdateContextPrivate @ 14ac0ade0

FUpdateContextPrivate * __thiscall
FUpdateContextPrivate::FUpdateContextPrivate
          (FUpdateContextPrivate *this,UCustomizableObjectInstance *param_1)

{
  UCustomizableInstancePrivate *this_00;
  FCustomizableObjectInstanceDescriptor *pFVar1;
  
  this_00 = UCustomizableObjectInstance::GetPrivate(param_1);
  pFVar1 = UCustomizableInstancePrivate::GetDescriptor(this_00);
  FUpdateContextPrivate(this,param_1,pFVar1);
  return this;
}

// FUpdateContextPrivate @ 14ac0ae30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUpdateContextPrivate * __thiscall
FUpdateContextPrivate::FUpdateContextPrivate
          (FUpdateContextPrivate *this,UCustomizableObjectInstance *param_1,
          FCustomizableObjectInstanceDescriptor *param_2)

{
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *this_00;
  UCustomizableObjectSystemPrivate *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSystem *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUpdateContextPrivate *pFVar7;
  UCustomizableObject *this_01;
  UCustomizableObjectPrivate *pUVar8;
  UModelResources *pUVar9;
  FDescriptorHash *pFVar10;
  UCustomizableObjectSystem *pUVar11;
  undefined1 auStack_188 [32];
  UCustomizableObjectInstance *local_168;
  UCustomizableObject *local_160;
  FSystem *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  undefined1 local_148 [72];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->PriorityType = Low;
  *(undefined8 *)&this->UpdateCallback = 0;
  *(undefined8 *)&(this->UpdateCallback).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateCallback).field_0x10 = 0;
  *(undefined8 *)&this->UpdateNativeCallback = 0;
  *(undefined8 *)&(this->UpdateNativeCallback).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateNativeCallback).field_0x10 = 0;
  *(undefined8 *)&(this->UpdateNativeCallback).field_0x18 = 2;
  (this->Instance).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Object).WeakPtr = (FWeakObjectPtr)0x0;
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor
            (&this->CapturedDescriptor);
  (this->CapturedDescriptorHash).Hash = 0;
  this_00 = &(this->CapturedDescriptorHash).MinLODs;
  (this->CapturedDescriptorHash).bStreamingEnabled = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).MinLODs.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).MinLODs.field_0x20 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).MinLODs.field_0x28 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).MinLODs.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapturedDescriptorHash).MinLODs.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapturedDescriptorHash).MinLODs.field_0x34 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).MinLODs.field_0x40 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).MinLODs.field_0x48 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x20 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x28 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x34 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x40 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).QualitySettingMinLODs.field_0x48 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).FirstRequestedLOD = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x20 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x28 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x34 = 0;
  *(undefined8 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x40 = 0;
  *(undefined4 *)&(this->CapturedDescriptorHash).FirstRequestedLOD.field_0x48 = 0;
  (this->Parameters).Object = (FParameters *)0x0;
  (this->Parameters).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MutableSystem).Object = (FSystem *)0x0;
  (this->MutableSystem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bOnlyUpdateIfNotGenerated = false;
  this->bIgnoreCloseDist = false;
  this->bForceHighPriority = false;
  (this->InstanceUpdateData).Components.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).Components.ArrayNum = 0;
  (this->InstanceUpdateData).Components.ArrayMax = 0;
  (this->InstanceUpdateData).LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).LODs.ArrayNum = 0;
  (this->InstanceUpdateData).LODs.ArrayMax = 0;
  (this->InstanceUpdateData).Surfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).Surfaces.ArrayNum = 0;
  (this->InstanceUpdateData).Surfaces.ArrayMax = 0;
  (this->InstanceUpdateData).Images.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).Images.ArrayNum = 0;
  (this->InstanceUpdateData).Images.ArrayMax = 0;
  (this->InstanceUpdateData).Vectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).Vectors.ArrayNum = 0;
  (this->InstanceUpdateData).Vectors.ArrayMax = 0;
  (this->InstanceUpdateData).Scalars.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).Scalars.ArrayNum = 0;
  (this->InstanceUpdateData).Scalars.ArrayMax = 0;
  (this->InstanceUpdateData).ActiveBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).ActiveBones.ArrayNum = 0;
  (this->InstanceUpdateData).ActiveBones.ArrayMax = 0;
  (this->InstanceUpdateData).BoneMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).BoneMaps.ArrayNum = 0;
  (this->InstanceUpdateData).BoneMaps.ArrayMax = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x8 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x20 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x28 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x34 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x40 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargetMeshData.field_0x48 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargets = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x8 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x20 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x28 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x34 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x40 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).RealTimeMorphTargets.field_0x48 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).ClothingMeshData = 0;
  *(undefined8 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x8 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x20 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x28 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x34 = 0;
  *(undefined8 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x40 = 0;
  *(undefined4 *)&(this->InstanceUpdateData).ClothingMeshData.field_0x48 = 0;
  (this->InstanceUpdateData).SkeletonsPerInstanceComponent.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).SkeletonsPerInstanceComponent.ArrayNum = 0;
  (this->InstanceUpdateData).SkeletonsPerInstanceComponent.ArrayMax = 0;
  (this->InstanceUpdateData).ExtendedInputPins.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceUpdateData).ExtendedInputPins.ArrayNum = 0;
  (this->InstanceUpdateData).ExtendedInputPins.ArrayMax = 0;
  (this->RelevantParametersInProgress).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantParametersInProgress).ArrayNum = 0;
  (this->RelevantParametersInProgress).ArrayMax = 0;
  (this->LowPriorityTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LowPriorityTextures).ArrayNum = 0;
  (this->LowPriorityTextures).ArrayMax = 0;
  this->bIsOnlyGenerateRequestedLODsEnabled = false;
  (this->MutableInstance).Object = (FInstance *)0x0;
  (this->MutableInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Model).Object = (FModel *)0x0;
  (this->Model).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  (this->MeshIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ImageIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->ImageIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialIdRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
        *)0x0;
  (this->MaterialIdRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalResourceProvider).Object = (FUnrealMutableResourceProvider *)0x0;
  (this->ExternalResourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BoneNames).Object = (FBoneNames *)0x0;
  (this->BoneNames).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->NumObjectComponents = '\0';
  this->NumInstanceComponents = '\0';
  (this->ComponentNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentNames).ArrayNum = 0;
  (this->ComponentNames).ArrayMax = 0;
  (this->StreamedResourceIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedResourceIndex).ArrayNum = 0;
  (this->StreamedResourceIndex).ArrayMax = 0;
  (this->ExtensionStreamedResourceIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtensionStreamedResourceIndex).ArrayNum = 0;
  (this->ExtensionStreamedResourceIndex).ArrayMax = 0;
  *(undefined8 *)&this->NumLODsAvailable = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x8 = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x20 = 0;
  this->bNeverStream = false;
  this->bLiveUpdateMode = false;
  this->bReuseInstanceTextures = false;
  this->bUseMeshCache = false;
  this->bStreamMeshLODs = false;
  this->bLowPriorityTasksBlocked = false;
  this->bValid = false;
  this->bForce = false;
  this->bBake = false;
  this->bProgressiveMipStreamingEnabled = false;
  this->MipsToSkip = 0;
  this->InstanceID = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x28 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x34 = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x40 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x48 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x0 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x8 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x20 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x28 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x34 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x40 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x48 = 0;
  *(undefined8 *)&(this->FirstResidentLOD).field_0x0 = 0;
  *(undefined8 *)&(this->FirstResidentLOD).field_0x8 = 0;
  *(undefined8 *)&(this->FirstResidentLOD).field_0x20 = 0;
  *(undefined4 *)&(this->FirstResidentLOD).field_0x28 = 0;
  *(undefined4 *)&(this->FirstResidentLOD).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstResidentLOD).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstResidentLOD).field_0x34 = 0;
  *(undefined8 *)&(this->FirstResidentLOD).field_0x40 = 0;
  *(undefined4 *)&(this->FirstResidentLOD).field_0x48 = 0;
  *(undefined8 *)&this->ImageToPlatformDataMap = 0;
  *(undefined8 *)&(this->ImageToPlatformDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ImageToPlatformDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ImageToPlatformDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ImageToPlatformDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImageToPlatformDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImageToPlatformDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->ImageToPlatformDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ImageToPlatformDataMap).field_0x48 = 0;
  this->UpdateResult = Success;
  *(undefined8 *)&this->PixelFormatOverride = 0;
  *(undefined8 *)&(this->PixelFormatOverride).field_0x28 = 0;
  (this->MeshDescriptors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDescriptors).ArrayNum = 0;
  (this->MeshDescriptors).ArrayMax = 0;
  (this->MeshChangedPerInstanceComponent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshChangedPerInstanceComponent).ArrayNum = 0;
  (this->MeshChangedPerInstanceComponent).ArrayMax = 0;
  this->UpdateStarted = false;
  this->bLevelBegunPlay = false;
  this->bOptimizedUpdate = false;
  this->StartQueueTime = 0.0;
  this->QueueTime = 0.0;
  this->StartUpdateTime = 0.0;
  this->UpdateTime = 0.0;
  this->TaskGetMeshTime = 0.0;
  this->TaskLockCacheTime = 0.0;
  this->TaskGetImagesTime = 0.0;
  this->TaskConvertResourcesTime = 0.0;
  this->TaskCallbacksTime = 0.0;
  this->UpdateStartBytes = 0;
  this->UpdateEndPeakBytes = 0;
  this->UpdateEndRealPeakBytes = 0;
  *(undefined8 *)&(this->AttachedParentUpdated).Elements = 0;
  *(undefined8 *)&(this->AttachedParentUpdated).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AttachedParentUpdated).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AttachedParentUpdated).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AttachedParentUpdated).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AttachedParentUpdated).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttachedParentUpdated).Elements.field_0x34 = 0;
  (this->AttachedParentUpdated).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AttachedParentUpdated).HashSize = 0;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->LoadedPassThroughTexturesPendingSetMaterial).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LoadedPassThroughTexturesPendingSetMaterial).ArrayNum = 0;
  (this->LoadedPassThroughTexturesPendingSetMaterial).ArrayMax = 0;
  (this->LoadedPassThroughMeshesPendingSetMaterial).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LoadedPassThroughMeshesPendingSetMaterial).ArrayNum = 0;
  (this->LoadedPassThroughMeshesPendingSetMaterial).ArrayMax = 0;
  (this->CachedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTextures).ArrayNum = 0;
  (this->CachedTextures).ArrayMax = 0;
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0xec,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUpdateContextPrivate *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1 != (UCustomizableObjectInstance *)0x0) &&
     (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    local_168 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->Instance).WeakPtr,(FObjectPtr)&local_168);
    this_01 = UCustomizableObjectInstance::GetCustomizableObject(param_1);
    if ((this_01 != (UCustomizableObject *)0x0) && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) {
      local_160 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&(this->Object).WeakPtr,(FObjectPtr)&local_160);
      FCustomizableObjectInstanceDescriptor::operator=(&this->CapturedDescriptor,param_2);
      pUVar8 = UCustomizableObject::GetPrivate(this_01);
      UCustomizableObjectPrivate::ApplyStateForcedValuesToParameters
                (pUVar8,&this->CapturedDescriptor);
      pUVar8 = UCustomizableObject::GetPrivate(this_01);
      pUVar9 = UCustomizableObjectPrivate::GetModelResources(pUVar8);
      if (pUVar9 != (UModelResources *)0x0) {
        bVar5 = IsStreamingEnabled(this_01,param_2->State);
        (this->CapturedDescriptor).bStreamingEnabled = bVar5;
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)&this->FirstLODAvailable,
                    (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)&pUVar9->FirstLODAvailable);
        TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)&this->FirstResidentLOD,
                    (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)&pUVar9->NumLODsToStream);
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&this->ComponentNames,&pUVar9->ComponentNamesPerObjectComponent);
      }
      pFVar10 = FDescriptorHash::FDescriptorHash((FDescriptorHash *)local_148,param_2);
      (this->CapturedDescriptorHash).Hash = pFVar10->Hash;
      (this->CapturedDescriptorHash).bStreamingEnabled = pFVar10->bStreamingEnabled;
      TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
      ::operator=(this_00,&pFVar10->MinLODs);
      TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
      ::operator=(&(this->CapturedDescriptorHash).QualitySettingMinLODs,
                  &pFVar10->QualitySettingMinLODs);
      TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
      ::operator=(&(this->CapturedDescriptorHash).FirstRequestedLOD,&pFVar10->FirstRequestedLOD);
      local_58 = 0;
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a0);
      local_a8 = 0;
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f0);
      local_f8 = 0;
      if (local_100 != (void *)0x0) {
        FMemory::Free(local_100);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_148 + 8));
      iVar6 = UCustomizableObject::GetComponentCount(this_01);
      this->NumObjectComponents = (uchar)iVar6;
      pUVar11 = UCustomizableObjectSystem::GetInstance();
      if (pUVar11 == (UCustomizableObjectSystem *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("System",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x30b,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FUpdateContextPrivate *)(*pcVar4)();
          return pFVar7;
        }
      }
      if ((pUVar11->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x32c,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FUpdateContextPrivate *)(*pcVar4)();
          return pFVar7;
        }
      }
      pUVar1 = (pUVar11->Private).field0_0x0.DebugPtr;
      pTVar2 = (pUVar1->MutableSystem).SharedReferenceCount.ReferenceController;
      pFVar3 = (pUVar1->MutableSystem).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_158 = (this->MutableSystem).Object;
      pTStack_150 = (this->MutableSystem).SharedReferenceCount.ReferenceController;
      (this->MutableSystem).Object = pFVar3;
      (this->MutableSystem).SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_150);
      if ((this->MutableSystem).Object == (FSystem *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MutableSystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x110,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FUpdateContextPrivate *)(*pcVar4)();
          return pFVar7;
        }
      }
      if ((pUVar11->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x333,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FUpdateContextPrivate *)(*pcVar4)();
          return pFVar7;
        }
      }
      this->bProgressiveMipStreamingEnabled =
           UCustomizableObjectSystemPrivate::EnableMutableProgressiveMipStreaming != 0;
      if ((pUVar11->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x333,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FUpdateContextPrivate *)(*pcVar4)();
          return pFVar7;
        }
      }
      bVar5 = UCustomizableObjectSystemPrivate::EnableOnlyGenerateRequestedLODs != 0;
      this->bValid = true;
      this->bIsOnlyGenerateRequestedLODsEnabled = bVar5;
    }
  }
  return this;
}

// GetCapturedDescriptor @ 14ac1d7d0

FCustomizableObjectInstanceDescriptor * __thiscall
FUpdateContextPrivate::GetCapturedDescriptor(FUpdateContextPrivate *this)

{
  return &this->CapturedDescriptor;
}

// GetCapturedDescriptorHash @ 14ac1d7e0

FDescriptorHash * __thiscall
FUpdateContextPrivate::GetCapturedDescriptorHash(FUpdateContextPrivate *this)

{
  return &this->CapturedDescriptorHash;
}

// GetComponentUpdateData @ 14ac1db50

FComponent * __thiscall
FUpdateContextPrivate::GetComponentUpdateData
          (FUpdateContextPrivate *this,FCustomizableObjectInstanceComponentIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FComponent *pFVar4;
  
  if ((-1 < param_1.Index) && (param_1.Index < (this->InstanceUpdateData).Components.ArrayNum)) {
    uVar3 = 0;
    if (param_1.Index < (this->InstanceUpdateData).Components.ArrayNum) {
      uVar3 = (uint)~param_1.Index >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FComponent *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FComponent *)
           ((this->InstanceUpdateData).Components.AllocatorInstance.Data +
           (longlong)param_1.Index * 0x30);
  }
  return (FComponent *)0x0;
}

// GetFirstRequestedLOD @ 14ac1de40

TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_> *
__thiscall FUpdateContextPrivate::GetFirstRequestedLOD(FUpdateContextPrivate *this)

{
  return &(this->CapturedDescriptor).FirstRequestedLOD;
}

// GetMeshDescriptors @ 14ac1f000

TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
* __thiscall
FUpdateContextPrivate::GetMeshDescriptors
          (FUpdateContextPrivate *this,FCustomizableObjectComponentIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *pTVar4;
  
  if ((-1 < param_1.Index) && (param_1.Index < (this->MeshDescriptors).ArrayNum)) {
    uVar3 = 0;
    if (param_1.Index < (this->MeshDescriptors).ArrayNum) {
      uVar3 = (uint)~param_1.Index >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    return (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
            *)((this->MeshDescriptors).AllocatorInstance.Data + (longlong)param_1.Index * 0x10);
  }
  return (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
          *)0x0;
}

// GetMeshDescriptors @ 14ac1f0a0

TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
* __thiscall FUpdateContextPrivate::GetMeshDescriptors(FUpdateContextPrivate *this)

{
  return &this->MeshDescriptors;
}

// GetObjectComponentIndex @ 14ac20790

FCustomizableObjectComponentIndex __thiscall
FUpdateContextPrivate::GetObjectComponentIndex
          (FUpdateContextPrivate *this,FCustomizableObjectInstanceComponentIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  undefined4 *puVar5;
  uint in_R8D;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_00000014,param_1.Index);
  *puVar5 = 0;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->InstanceUpdateData).Components.ArrayNum)) {
    uVar4 = 0;
    if ((int)in_R8D < (this->InstanceUpdateData).Components.ArrayNum) {
      uVar4 = ~in_R8D >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return (FCustomizableObjectComponentIndex)iVar3;
      }
    }
    *puVar5 = *(undefined4 *)
               ((this->InstanceUpdateData).Components.AllocatorInstance.Data +
               (longlong)(int)in_R8D * 0x30);
    return (FCustomizableObjectComponentIndex)param_1.Index;
  }
  *puVar5 = 0xffffffff;
  return (FCustomizableObjectComponentIndex)param_1.Index;
}

// InitMeshDescriptors @ 14ac264c0

void __thiscall FUpdateContextPrivate::InitMeshDescriptors(FUpdateContextPrivate *this,int param_1)

{
  int *piVar1;
  TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  this_00 = &this->MeshDescriptors;
  iVar2 = (this->MeshDescriptors).ArrayNum;
  piVar1 = &(this->MeshDescriptors).ArrayNum;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->MeshDescriptors).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar2) {
    uVar6 = iVar2 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,param_1,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->MeshDescriptors).ArrayMax);
    }
  }
  return;
}

// IsContextValid @ 14ac27920

bool __thiscall FUpdateContextPrivate::IsContextValid(FUpdateContextPrivate *this)

{
  return this->bValid;
}

// MoveCommittedDescriptor @ 14ac2b050

FCustomizableObjectInstanceDescriptor * __thiscall
FUpdateContextPrivate::MoveCommittedDescriptor(FUpdateContextPrivate *this)

{
  return &this->CapturedDescriptor;
}

// SetFirstRequestedLOD @ 14ac35970

void __thiscall
FUpdateContextPrivate::SetFirstRequestedLOD
          (FUpdateContextPrivate *this,
          TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
          *param_1)

{
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CapturedDescriptor).FirstRequestedLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CapturedDescriptorHash).FirstRequestedLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  return;
}

// SetMinLOD @ 14ac36f70

void __thiscall
FUpdateContextPrivate::SetMinLOD
          (FUpdateContextPrivate *this,
          TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
          *param_1)

{
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CapturedDescriptor).MinLOD,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CapturedDescriptorHash).MinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  return;
}

// SetQualitySettingMinLODs @ 14ac37c40

void __thiscall
FUpdateContextPrivate::SetQualitySettingMinLODs
          (FUpdateContextPrivate *this,
          TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
          *param_1)

{
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CapturedDescriptor).QualitySettingMinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)&(this->CapturedDescriptorHash).QualitySettingMinLODs,
              (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
               *)param_1);
  return;
}

