// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 151

// StaticClass @ 147f0c280

UClass * __cdecl UMaterialInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstance",
               &Z_Registration_Info_UClass_UMaterialInstance.InnerSingleton,
               StaticRegisterNativesUMaterialInstance,0x2e0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialInstance>,
               InternalVTableHelperCtorCaller<UMaterialInstance>,local_res8,
               UMaterialInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstance.InnerSingleton;
}

// UMaterialInstance @ 147f2ddf0

UMaterialInstance * __thiscall
UMaterialInstance::UMaterialInstance(UMaterialInstance *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UMaterialInterface::UMaterialInterface((UMaterialInterface *)this,param_1);
  puVar1 = &(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  (this->Parent).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->NaniteOverrideMaterial).bEnableOverride = true;
  (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->SpecularProfileOverride).field0_0x0.DebugPtr = (USpecularProfile *)0x0;
  (this->ShadingModels).ShadingModelField = 0;
  (this->DisplacementScaling).Magnitude = 4.0;
  (this->DisplacementScaling).Center = 0.5;
  (this->DisplacementFadeRange).StartSizePixels = 4.0;
  (this->DisplacementFadeRange).EndSizePixels = 1.0;
  (this->ScalarParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterValues).ArrayNum = 0;
  (this->ScalarParameterValues).ArrayMax = 0;
  (this->VectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterValues).ArrayNum = 0;
  (this->VectorParameterValues).ArrayMax = 0;
  (this->DoubleVectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameterValues).ArrayNum = 0;
  (this->DoubleVectorParameterValues).ArrayMax = 0;
  (this->TextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameterValues).ArrayNum = 0;
  (this->TextureParameterValues).ArrayMax = 0;
  (this->TextureCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameterValues).ArrayNum = 0;
  (this->TextureCollectionParameterValues).ArrayMax = 0;
  (this->ParameterCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ParameterCollectionParameterValues).ArrayNum = 0;
  (this->ParameterCollectionParameterValues).ArrayMax = 0;
  (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameterValues).ArrayNum = 0;
  (this->RuntimeVirtualTextureParameterValues).ArrayMax = 0;
  (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SparseVolumeTextureParameterValues).ArrayNum = 0;
  (this->SparseVolumeTextureParameterValues).ArrayMax = 0;
  (this->FontParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontParameterValues).ArrayNum = 0;
  (this->FontParameterValues).ArrayMax = 0;
  (this->UserSceneTextureOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSceneTextureOverrides).ArrayNum = 0;
  (this->UserSceneTextureOverrides).ArrayMax = 0;
  FMaterialInstanceBasePropertyOverrides::FMaterialInstanceBasePropertyOverrides
            (&this->BasePropertyOverrides);
  (this->StaticParametersRuntime).bHasMaterialLayers = '\0';
  (this->StaticParametersRuntime).StaticSwitchParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum = 0;
  (this->StaticParametersRuntime).StaticSwitchParameters.ArrayMax = 0;
  (this->StaticParametersRuntime).MaterialLayers.Layers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParametersRuntime).MaterialLayers.Layers.ArrayNum = 0;
  (this->StaticParametersRuntime).MaterialLayers.Layers.ArrayMax = 0;
  (this->StaticParametersRuntime).MaterialLayers.Blends.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParametersRuntime).MaterialLayers.Blends.ArrayNum = 0;
  (this->StaticParametersRuntime).MaterialLayers.Blends.ArrayMax = 0;
  (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.Object =
       (FMaterialLayerStackFunctionsCache *)0x0;
  (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CachedData).Ptr = (FMaterialInstanceCachedData *)0x0;
  (this->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedMaterialResources).ArrayNum = 0;
  (this->LoadedMaterialResources).ArrayMax = 0;
  (this->StaticPermutationMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->StaticPermutationMaterialResources).ArrayNum = 0;
  (this->StaticPermutationMaterialResources).ArrayMax = 0;
  this->bResourceCreated = false;
  this->bCachingUniformExpressions = false;
  return this;
}

// UMaterialInstance @ 147f2dff0

UMaterialInstance * __thiscall
UMaterialInstance::UMaterialInstance(UMaterialInstance *this,FObjectInitializer *param_1)

{
  TObjectPtr<UPhysicalMaterial> *_Dst;
  undefined1 *puVar1;
  longlong lVar2;
  
  UMaterialInterface::UMaterialInterface((UMaterialInterface *)this,param_1);
  puVar1 = &(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  _Dst = this->PhysicalMaterialMap;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (_Dst->field0_0x0).DebugPtr = (UPhysicalMaterial *)0x0;
  this->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  (this->Parent).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->NaniteOverrideMaterial).bEnableOverride = true;
  (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->SpecularProfileOverride).field0_0x0.DebugPtr = (USpecularProfile *)0x0;
  (this->ShadingModels).ShadingModelField = 0;
  (this->DisplacementScaling).Magnitude = 4.0;
  (this->DisplacementScaling).Center = 0.5;
  (this->DisplacementFadeRange).StartSizePixels = 4.0;
  (this->DisplacementFadeRange).EndSizePixels = 1.0;
  (this->ScalarParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterValues).ArrayNum = 0;
  (this->ScalarParameterValues).ArrayMax = 0;
  (this->VectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameterValues).ArrayNum = 0;
  (this->VectorParameterValues).ArrayMax = 0;
  (this->DoubleVectorParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameterValues).ArrayNum = 0;
  (this->DoubleVectorParameterValues).ArrayMax = 0;
  (this->TextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameterValues).ArrayNum = 0;
  (this->TextureParameterValues).ArrayMax = 0;
  (this->TextureCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameterValues).ArrayNum = 0;
  (this->TextureCollectionParameterValues).ArrayMax = 0;
  (this->ParameterCollectionParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ParameterCollectionParameterValues).ArrayNum = 0;
  (this->ParameterCollectionParameterValues).ArrayMax = 0;
  (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameterValues).ArrayNum = 0;
  (this->RuntimeVirtualTextureParameterValues).ArrayMax = 0;
  (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SparseVolumeTextureParameterValues).ArrayNum = 0;
  (this->SparseVolumeTextureParameterValues).ArrayMax = 0;
  (this->FontParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontParameterValues).ArrayNum = 0;
  (this->FontParameterValues).ArrayMax = 0;
  (this->UserSceneTextureOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSceneTextureOverrides).ArrayNum = 0;
  (this->UserSceneTextureOverrides).ArrayMax = 0;
  FMaterialInstanceBasePropertyOverrides::FMaterialInstanceBasePropertyOverrides
            (&this->BasePropertyOverrides);
  (this->StaticParametersRuntime).bHasMaterialLayers = '\0';
  this->bHasStaticPermutationResource = '\0';
  this->bLoadedCachedData = '\0';
  (this->StaticParametersRuntime).StaticSwitchParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum = 0;
  (this->StaticParametersRuntime).StaticSwitchParameters.ArrayMax = 0;
  (this->StaticParametersRuntime).MaterialLayers.Layers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  lVar2 = 8;
  if (&this->Parent < _Dst) {
    lVar2 = 0;
  }
  (this->StaticParametersRuntime).MaterialLayers.Layers.ArrayNum = 0;
  (this->StaticParametersRuntime).MaterialLayers.Layers.ArrayMax = 0;
  (this->StaticParametersRuntime).MaterialLayers.Blends.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParametersRuntime).MaterialLayers.Blends.ArrayNum = 0;
  (this->StaticParametersRuntime).MaterialLayers.Blends.ArrayMax = 0;
  (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.Object =
       (FMaterialLayerStackFunctionsCache *)0x0;
  (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CachedData).Ptr = (FMaterialInstanceCachedData *)0x0;
  (this->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedMaterialResources).ArrayNum = 0;
  (this->LoadedMaterialResources).ArrayMax = 0;
  (this->StaticPermutationMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->StaticPermutationMaterialResources).ArrayNum = 0;
  (this->StaticPermutationMaterialResources).ArrayMax = 0;
  this->bResourceCreated = false;
  this->bCachingUniformExpressions = false;
  (this->ShadingModels).ShadingModelField = 1;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  if (_Dst <= &this->Parent) {
    memset(_Dst,0,lVar2 << 3);
  }
  return this;
}

// ~UMaterialInstance @ 147f2f270

void __thiscall UMaterialInstance::~UMaterialInstance(UMaterialInstance *this)

{
  FScriptContainerElement *pFVar1;
  FMaterialInstanceCachedData *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->StaticPermutationMaterialResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMaterialResource,int>
            ((FMaterialResource *)(this->LoadedMaterialResources).AllocatorInstance.Data,
             (this->LoadedMaterialResources).ArrayNum);
  pFVar1 = (this->LoadedMaterialResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->CachedData).Ptr;
  if (pFVar2 != (FMaterialInstanceCachedData *)0x0) {
    pFVar1 = (pFVar2->ParentLayerIndexRemap).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0x10);
  }
  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
            (&(this->StaticParametersRuntime).MaterialLayers);
  pFVar1 = (this->StaticParametersRuntime).StaticSwitchParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserSceneTextureOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FontParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterCollectionParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureCollectionParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleVectorParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar3 = *(void **)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  UMaterialInterface::~UMaterialInterface((UMaterialInterface *)this);
  return;
}

// operator() @ 147f2fa10

void __thiscall
`UMaterialInstance::BeginDestroy'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x260);
  if (lVar4 != 0) {
    pbVar1 = (byte *)(lVar4 + 0xbc);
    *pbVar1 = *pbVar1 | 1;
    (**(code **)(**(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x260) + 0x20))();
  }
  puVar5 = *(undefined8 **)this;
  iVar3 = *(int *)((longlong)this + 8);
  puVar2 = puVar5 + iVar3;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar3) {
      `TCheckedPointerIterator<TRefCountPtr<FMaterialResource>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar5 == puVar2) break;
    (**(code **)(*(longlong *)*puVar5 + 0x10))();
    puVar5 = puVar5 + 1;
  }
  DestructItems<TRefCountPtr<FMaterialResource>,int>
            (*(TRefCountPtr<FMaterialResource> **)this,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  lVar4 = *(longlong *)((longlong)this + 0x10);
  if (*(char *)(lVar4 + 0x2d9) == '\0') {
    *(undefined1 *)(lVar4 + 0x2d8) = 0;
  }
  else {
    FMaterialRenderProxy::CancelCacheUniformExpressions(*(FMaterialRenderProxy **)(lVar4 + 0x260));
    *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x2d9) = 0;
    *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x2d8) = 0;
  }
  return;
}

// AddParameterValueInternal @ 147f31b50

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::AddParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,
          FMaterialParameterMetadata *param_2,EMaterialSetParameterValueFlags param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  EMaterialParameterType EVar9;
  FScriptContainerElement *pFVar10;
  UTexture *pUVar11;
  code *pcVar12;
  FName FVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *pTVar17;
  float fVar18;
  FUtf8String local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FUtf8String local_70 [5];
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FUtf8String::Reset(&local_98,0);
  local_70[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].Data.ArrayNum = 0;
  local_70[0].Data.ArrayMax = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  FUtf8String::Reset(local_70,0);
  EVar9 = (param_2->Value).Type;
  switch(EVar9) {
  case Scalar:
    fVar18 = FMaterialParameterValue::AsScalar(&param_2->Value);
    iVar15 = (this->ScalarParameterValues).ArrayNum;
    piVar1 = &(this->ScalarParameterValues).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x424,&(this->ScalarParameterValues).AllocatorInstance,piVar1);
    }
    lVar16 = (longlong)iVar15;
    (this->ScalarParameterValues).ArrayNum = iVar15 + 1;
    FVar13 = *(FName *)&param_1->Association;
    pFVar10 = (this->ScalarParameterValues).AllocatorInstance.Data;
    *(FName *)(pFVar10 + lVar16 * 0x24) = param_1->Name;
    ((FName *)(pFVar10 + lVar16 * 0x24))[1] = FVar13;
    *(undefined8 *)(pFVar10 + lVar16 * 0x24 + 0x14) = 0;
    *(undefined8 *)(pFVar10 + lVar16 * 0x24 + 0x1c) = 0;
    *(float *)(pFVar10 + lVar16 * 0x24 + 0x10) = fVar18;
    break;
  case Vector:
    if ((EVar9 != Vector) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EMaterialParameterType::Vector",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                            ,0x177,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar15 = (this->VectorParameterValues).ArrayNum;
    piVar1 = &(this->VectorParameterValues).ArrayMax;
    fVar18 = (param_2->Value).field0_0x0.Float[0];
    fVar2 = (param_2->Value).field0_0x0.Float[1];
    fVar3 = (param_2->Value).field0_0x0.Float[2];
    fVar4 = (param_2->Value).field0_0x0.Float[3];
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x430,&(this->VectorParameterValues).AllocatorInstance,piVar1);
    }
    lVar16 = (longlong)iVar15;
    (this->VectorParameterValues).ArrayNum = iVar15 + 1;
    FVar13 = *(FName *)&param_1->Association;
    pFVar10 = (this->VectorParameterValues).AllocatorInstance.Data;
    *(FName *)(pFVar10 + lVar16 * 0x30) = param_1->Name;
    ((FName *)(pFVar10 + lVar16 * 0x30))[1] = FVar13;
    *(float *)(pFVar10 + lVar16 * 0x30 + 0x10) = fVar18;
    *(float *)(pFVar10 + lVar16 * 0x30 + 0x14) = fVar2;
    *(float *)(pFVar10 + lVar16 * 0x30 + 0x18) = fVar3;
    *(float *)(pFVar10 + lVar16 * 0x30 + 0x1c) = fVar4;
    *(undefined8 *)(pFVar10 + lVar16 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar10 + lVar16 * 0x30 + 0x28) = 0;
    break;
  case DoubleVector:
    if ((EVar9 != DoubleVector) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EMaterialParameterType::DoubleVector",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                            ,0x178,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar15 = (this->DoubleVectorParameterValues).ArrayNum;
    piVar1 = &(this->DoubleVectorParameterValues).ArrayMax;
    dVar5 = (param_2->Value).field0_0x0.Double[0];
    dVar6 = (param_2->Value).field0_0x0.Double[1];
    dVar7 = (param_2->Value).field0_0x0.Double[2];
    dVar8 = (param_2->Value).field0_0x0.Double[3];
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,&(this->DoubleVectorParameterValues).AllocatorInstance,piVar1);
    }
    (this->DoubleVectorParameterValues).ArrayNum = iVar15 + 1;
    FVar13 = *(FName *)&param_1->Association;
    pFVar10 = (this->DoubleVectorParameterValues).AllocatorInstance.Data;
    lVar16 = (longlong)iVar15 * 0x40;
    *(FName *)(pFVar10 + lVar16) = param_1->Name;
    ((FName *)(pFVar10 + lVar16))[1] = FVar13;
    *(double *)(pFVar10 + lVar16 + 0x10) = dVar5;
    *(double *)(pFVar10 + lVar16 + 0x18) = dVar6;
    *(double *)(pFVar10 + lVar16 + 0x20) = dVar7;
    *(double *)(pFVar10 + lVar16 + 0x28) = dVar8;
    *(undefined8 *)(pFVar10 + lVar16 + 0x30) = 0;
    *(undefined8 *)(pFVar10 + lVar16 + 0x38) = 0;
    break;
  case Texture:
    pTVar17 = (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
              &this->TextureParameterValues;
    goto LAB_147f31dbc;
  case TextureCollection:
    pTVar17 = (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
              &this->TextureCollectionParameterValues;
    goto LAB_147f31dbc;
  case Font:
    iVar15 = (this->FontParameterValues).ArrayNum;
    piVar1 = &(this->FontParameterValues).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&(this->FontParameterValues).AllocatorInstance,piVar1);
    }
    lVar16 = (longlong)iVar15;
    (this->FontParameterValues).ArrayNum = iVar15 + 1;
    pFVar10 = (this->FontParameterValues).AllocatorInstance.Data;
    FVar13 = *(FName *)&param_1->Association;
    fVar18 = (param_2->Value).field0_0x0.Float[2];
    pUVar11 = (param_2->Value).field0_0x0.Texture;
    *(FName *)(pFVar10 + lVar16 * 0x30) = param_1->Name;
    ((FName *)(pFVar10 + lVar16 * 0x30))[1] = FVar13;
    *(UTexture **)(pFVar10 + lVar16 * 0x30 + 0x10) = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    *(float *)(pFVar10 + lVar16 * 0x30 + 0x18) = fVar18;
    *(undefined8 *)(pFVar10 + lVar16 * 0x30 + 0x1c) = 0;
    *(undefined8 *)(pFVar10 + lVar16 * 0x30 + 0x24) = 0;
    break;
  case RuntimeVirtualTexture:
    pTVar17 = (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
              &this->RuntimeVirtualTextureParameterValues;
    goto LAB_147f31dbc;
  case SparseVolumeTexture:
    pTVar17 = (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
              &this->SparseVolumeTextureParameterValues;
    goto LAB_147f31dbc;
  case StaticSwitch:
    break;
  case ParameterCollection:
    pTVar17 = &this->ParameterCollectionParameterValues;
LAB_147f31dbc:
    iVar15 = ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar17)->ArrayNum;
    if (iVar15 == ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar17)->ArrayMax)
    {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar17->AllocatorInstance,
                          &((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar17)->
                           ArrayMax);
    }
    lVar16 = (longlong)iVar15;
    ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar17)->ArrayNum = iVar15 + 1;
    pFVar10 = (((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar17)->
              AllocatorInstance).Data;
    FVar13 = *(FName *)&param_1->Association;
    pUVar11 = (param_2->Value).field0_0x0.Texture;
    *(FName *)(pFVar10 + lVar16 * 0x28) = param_1->Name;
    ((FName *)(pFVar10 + lVar16 * 0x28))[1] = FVar13;
    *(UTexture **)(pFVar10 + lVar16 * 0x28 + 0x10) = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    *(undefined8 *)(pFVar10 + lVar16 * 0x28 + 0x18) = 0;
    *(undefined8 *)(pFVar10 + lVar16 * 0x28 + 0x20) = 0;
    break;
  default:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                        ,0xfe2,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// AddReferencedObjects @ 147f31f80

void __cdecl UMaterialInstance::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UMaterialInstance>(&local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar3->_padding_)) {
    if ((param_1[9].field_0x10 & 1) != 0) {
      puVar5 = *(undefined8 **)&param_1[0x11].field_0x20;
      iVar2 = *(int *)(param_1 + 0x12);
      puVar1 = puVar5 + iVar2;
      while( true ) {
        if (*(int *)(param_1 + 0x12) != iVar2) {
          `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar5 == puVar1) break;
        (**(code **)(*(longlong *)*puVar5 + 0x4f0))((longlong *)*puVar5,param_2);
        puVar5 = puVar5 + 1;
      }
    }
    pUVar3 = UMaterialInterface::GetPrivateStaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      if (*(FMaterialCachedExpressionData **)&param_1[5].field_0x18 !=
          (FMaterialCachedExpressionData *)0x0) {
        FMaterialCachedExpressionData::AddReferencedObjects
                  (*(FMaterialCachedExpressionData **)&param_1[5].field_0x18,param_2);
      }
      UObject::AddReferencedObjects(param_1,param_2);
      return;
    }
    pFVar4 = GetTypeName<UMaterialInterface>(&local_38);
    pwVar6 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar4 = GetTypeName<UMaterialInstance>(&local_28);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// AllMaterialsCacheResourceShadersForRendering @ 147f322c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __cdecl
UMaterialInstance::AllMaterialsCacheResourceShadersForRendering(bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res18 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  pUVar3 = StaticClass();
  GetObjectsOfClass(pUVar3,&local_18,true,RF_ClassDefaultObject,Borrowed);
  iVar2 = local_18.ArrayNum;
  uVar4 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar4 * 8;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar5.Data == pFVar1) break;
    CacheResourceShadersForRendering(*(UMaterialInstance **)FVar5.Data,(uint)param_2);
    uVar4 = local_18._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AllocatePermutationResource @ 147f32530

FMaterialResource * __thiscall
UMaterialInstance::AllocatePermutationResource(UMaterialInstance *this)

{
  FMaterialResource *pFVar1;
  
  pFVar1 = ::operator_new(0x160);
  if (pFVar1 != (FMaterialResource *)0x0) {
    pFVar1 = FMaterialResource::FMaterialResource(pFVar1);
    return pFVar1;
  }
  return (FMaterialResource *)0x0;
}

// BeginDestroy @ 147f325b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialInstance::BeginDestroy(UMaterialInstance *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMaterialResource *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_118 [32];
  TRefCountPtr<FMaterialResource> *local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TRefCountPtr<FMaterialResource> local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  FODSCManager::UnregisterMaterialInstance(this);
  pFVar12 = (this->StaticPermutationMaterialResources).AllocatorInstance.Data;
  iVar2 = (this->StaticPermutationMaterialResources).ArrayNum;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StaticPermutationMaterialResources).ArrayNum != iVar2) {
      local_c8[0] = 0;
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c8);
    }
    if (pFVar12 == pFVar1) break;
    this_00 = *(FMaterialResource **)pFVar12;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 8;
    cVar6 = (**(code **)(this_00->_padding_ + 8))(this_00);
    if (cVar6 != '\0') {
      local_b0.Reference = this_00;
      FMaterial::AddRef((FMaterial *)this_00);
      if (local_c0.Data <= (FScriptContainerElement *)&local_b0) {
        if ((FScriptContainerElement *)&local_b0 < local_c0.Data + (longlong)local_b8._4_4_ * 8) {
          local_e0 = (longlong)(int)local_b8;
          local_d8 = 8;
          local_f8 = &local_b0;
          local_f0 = local_c0.Data;
          local_e8 = (longlong)local_b8._4_4_;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      iVar8 = (int)local_b8;
      if ((int)local_b8 == local_b8._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_c0,(int *)((longlong)&local_b8 + 4));
      }
      local_b8 = CONCAT44(local_b8._4_4_,iVar8 + 1);
      *(undefined8 *)(local_c0.Data + (longlong)iVar8 * 8) = 0;
      *(FMaterialResource **)(local_c0.Data + (longlong)iVar8 * 8) = local_b0.Reference;
      local_b0.Reference = (FMaterialResource *)0x0;
    }
    pFVar12 = pFVar12 + 8;
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->_padding_,RenderThread);
  UObject::BeginDestroy((UObject *)this);
  FVar4.Data = local_c0.Data;
  iVar2 = (int)local_b8;
  if ((this->Resource != (FMaterialInstanceResource *)0x0) || (0 < (int)local_b8)) {
    uVar5 = local_b8._4_4_;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    local_80[1] = (code *)FVar4.Data;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialInstance::BeginDestroy'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    *(int *)(local_80 + 2) = iVar2;
    *(undefined4 *)((longlong)local_80 + 0x14) = uVar5;
    local_80[3] = (code *)this;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterialInstance::BeginDestroy'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInstance::BeginDestroy_::__l12::TSTR_BeginDestroyCommand3798>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78[0] = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_68[0] = local_98[0];
      local_68[1] = local_98[1];
      local_68[2] = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialInstance::BeginDestroy'::__l12::TSTR_BeginDestroyCommand3798>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar9);
      uVar11 = (ulonglong)local_48;
      if ((2 < uVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_78[0] != (code *)0x0) {
          ppcVar10 = local_78 + 2;
          if (local_50 != (code **)0x0) {
            ppcVar10 = local_50;
          }
          (**(code **)(*ppcVar10 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])();
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar10 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar10 = local_80;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
    DestructItems<TRefCountPtr<FMaterialResource>,int>((TRefCountPtr<FMaterialResource> *)0x0,0);
  }
  DestructItems<TRefCountPtr<FMaterialResource>,int>
            ((TRefCountPtr<FMaterialResource> *)local_c0.Data,(int)local_b8);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

// CacheResourceShadersForRendering @ 147f32ae0

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall
UMaterialInstance::CacheResourceShadersForRendering
          (UMaterialInstance *this,EMaterialShaderPrecompileMode param_1)

{
  FScriptContainerElement *pFVar1;
  FMaterial *this_00;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res18 [8];
  TArray<TRefCountPtr<FMaterial>,TSizedDefaultAllocator<32>_> local_38;
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  CacheResourceShadersForRendering(this,param_1,&local_28);
  iVar2 = local_28.ArrayNum;
  uVar4 = (ulonglong)local_28.ArrayNum;
  if (0 < local_28.ArrayNum) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = local_28.AllocatorInstance.Data + uVar4 * 8;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    FVar5.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar5.Data == pFVar1) break;
      this_00 = *(FMaterial **)FVar5.Data;
      (**(code **)(this_00->_padding_ + 8))(this_00);
      iVar3 = local_38.ArrayNum;
      if (local_38.ArrayNum == local_38.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      local_38.ArrayNum = iVar3 + 1;
      *(FMaterial **)(local_38.AllocatorInstance.Data + (longlong)iVar3 * 8) = this_00;
      FMaterial::AddRef(this_00);
      uVar4 = local_28._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 8;
    }
    iVar2 = local_28.ArrayMax;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
    }
    FMaterial::DeleteMaterialsOnRenderThread(&local_38);
    DestructItems<TRefCountPtr<FMaterial>,int>
              ((TRefCountPtr<FMaterial> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// CacheResourceShadersForRendering @ 147f32c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterialInstance::CacheResourceShadersForRendering
          (UMaterialInstance *this,EMaterialShaderPrecompileMode param_1,
          TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *pTVar2;
  Type TVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  FCachedSystemScalabilityCVars *pFVar13;
  wchar_t *pwVar14;
  uint uVar15;
  ForElementType<bool> FVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  UMaterialInstance *this_00;
  EShaderPlatform EVar21;
  ulonglong uVar22;
  undefined1 auStackY_f8 [32];
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> local_a0;
  EShaderPlatform local_90;
  uint local_8c;
  uint local_88;
  FMaterialResource *local_80;
  FMaterialResource *local_78;
  EMaterialShaderPrecompileMode local_70;
  uint local_6c;
  UMaterial *local_68;
  UMaterialInstance *local_60;
  TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_70 = param_1;
  local_60 = this;
  bVar8 = IsInGameThread();
  if (((!bVar8) && (bVar8 = (*IsAsyncLoading)(), !bVar8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsAsyncLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0xa5e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UpdateOverridableBaseProperties(this);
  this_00 = this;
  if (this->bHasStaticPermutationResource != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar14 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar14,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pUVar12 = UMaterialInstanceConstant::StaticClass();
      iVar9 = (int)pUVar12->_padding_;
      if (((*(int *)(this->_padding_ + 0x38) < iVar9) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar9 * 8)
           != &pUVar12->_padding_)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsA(UMaterialInstanceConstant::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                             ,0xa64,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_68 = (UMaterial *)(**(code **)(this->_padding_ + 0x2d8))(this);
      uVar17 = 1 << ((byte)GMaxRHIFeatureLevel & 0x1f) | (uint)this->_padding_ |
               UMaterialInterface::FeatureLevelsForAllMaterials;
      pFVar13 = GetCachedScalabilityCVars();
      uVar20 = 0;
      TVar3 = pFVar13->MaterialQualityLevel;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      if (uVar17 != 0) {
        pTVar2 = &this->StaticPermutationMaterialResources;
        do {
          uVar15 = -uVar17 & uVar17;
          uVar17 = uVar17 & uVar17 - 1;
          local_6c = 0x1f;
          if (uVar15 != 0) {
            for (; uVar15 >> local_6c == 0; local_6c = local_6c - 1) {
            }
          }
          uVar19 = uVar20;
          if (uVar15 != 0) {
            uVar19 = (ulonglong)local_6c;
          }
          local_8c = (uint)uVar19;
          EVar21 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_8c];
          local_90 = EVar21;
          local_88 = uVar17;
          local_80 = FindOrCreateMaterialResource(pTVar2,local_68,this_00,EVar21,TVar3);
          if ((local_80 == (FMaterialResource *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentResource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                                 ,0xa74,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar8 = UMaterialInterface::IsUsingNewHLSLGenerator((UMaterialInterface *)this_00);
          if (bVar8) {
            local_58.AllocatorInstance.SecondaryData = (ForElementType<bool>)0x0;
            local_58.ArrayNum = 0;
            local_58.ArrayMax = 4;
            UMaterialInterface::GetQualityLevelUsage
                      ((UMaterialInterface *)this_00,&local_58,EVar21,false);
            uVar18 = uVar20;
            uVar22 = uVar20;
            if (0 < (this_00->StaticPermutationMaterialResources).ArrayNum) {
              do {
                uVar15 = (uint)uVar18;
                uVar17 = 0;
                if ((int)uVar15 < (this->StaticPermutationMaterialResources).ArrayNum) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_78 = *(FMaterialResource **)((pTVar2->AllocatorInstance).Data + uVar22);
                if ((local_78 != local_80) &&
                   ((int)uVar19 == *(int *)((longlong)&local_78->_padding_ + 4))) {
                  bVar4 = (byte)local_78->_padding_;
                  if (bVar4 != 4) {
                    if ((local_58.ArrayNum <= (int)(uint)bVar4) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    FVar16 = (ForElementType<bool>)&local_58;
                    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
                      FVar16 = local_58.AllocatorInstance.SecondaryData;
                    }
                    if (*(char *)((ulonglong)bVar4 + (longlong)FVar16) == '\0') {
                      pFVar5 = (param_2->AllocatorInstance).Data;
                      if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
                          ((FScriptContainerElement *)&local_78 <
                           pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar9 = param_2->ArrayNum;
                      if (iVar9 == param_2->ArrayMax) {
                        iVar9 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
                      }
                      param_2->ArrayNum = iVar9 + 1;
                      *(FMaterialResource **)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_78;
                      uVar17 = 0;
                      if ((int)uVar15 < (this->StaticPermutationMaterialResources).ArrayNum) {
                        uVar17 = ~uVar15 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar9 = (this->StaticPermutationMaterialResources).ArrayNum;
                      pFVar5 = (pTVar2->AllocatorInstance).Data;
                      iVar10 = (iVar9 - uVar15) + -1;
                      if (1 < iVar10) {
                        iVar10 = 1;
                      }
                      if (iVar10 != 0) {
                        memmove(pFVar5 + (longlong)(int)uVar15 * 8,
                                pFVar5 + (longlong)(iVar9 - iVar10) * 8,(longlong)iVar10 << 3);
                      }
                      piVar1 = &(this->StaticPermutationMaterialResources).ArrayNum;
                      *piVar1 = *piVar1 + -1;
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,&pTVar2->AllocatorInstance,
                                 (this->StaticPermutationMaterialResources).ArrayNum,
                                 &(this->StaticPermutationMaterialResources).ArrayMax);
                      uVar15 = uVar15 - 1;
                      uVar22 = uVar22 - 8;
                    }
                  }
                  uVar19 = (ulonglong)local_8c;
                }
                uVar18 = (ulonglong)(uVar15 + 1);
                this_00 = local_60;
                uVar22 = uVar22 + 8;
                EVar21 = local_90;
              } while ((int)(uVar15 + 1) < (local_60->StaticPermutationMaterialResources).ArrayNum);
            }
            uVar17 = local_88;
            if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
              FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
              uVar17 = local_88;
            }
          }
          uVar7 = local_a0._8_8_;
          uVar15 = local_a0.ArrayMax;
          local_a0._8_8_ = (ulonglong)(uint)local_a0.ArrayMax << 0x20;
          uVar11 = 0;
          if (((longlong)uVar7 < 0) && (uVar11 = 0, uVar15 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
            uVar15 = local_a0.ArrayMax;
            uVar11 = local_a0.ArrayNum;
          }
          if ((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
             ((FScriptContainerElement *)&local_80 <
              local_a0.AllocatorInstance.Data + (longlong)(int)uVar15 * 8)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar15 = local_a0.ArrayMax;
            uVar11 = local_a0.ArrayNum;
          }
          if (uVar11 == uVar15) {
            uVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          }
          local_a0.ArrayNum = uVar11 + 1;
          *(FMaterialResource **)(local_a0.AllocatorInstance.Data + (longlong)(int)uVar11 * 8) =
               local_80;
          CacheShadersForResources(this_00,EVar21,&local_a0,local_70,(ITargetPlatform *)0x0);
        } while (uVar17 != 0);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
    }
  }
  (**(code **)(this_00->_padding_ + 0x598))(this_00,1);
  InitResources(this_00);
  return;
}

// CacheShaders @ 147f33270

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall
UMaterialInstance::CacheShaders(UMaterialInstance *this,EMaterialShaderPrecompileMode param_1)

{
  FScriptContainerElement *pFVar1;
  FMaterial *this_00;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 auStackX_18 [8];
  TArray<TRefCountPtr<FMaterial>,TSizedDefaultAllocator<32>_> TStack_38;
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> TStack_28;
  
  UpdateOverridableBaseProperties(this);
  TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_28.ArrayNum = 0;
  TStack_28.ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    CacheResourceShadersForRendering(this,param_1,&TStack_28);
  }
  iVar2 = TStack_28.ArrayNum;
  if (0 < TStack_28.ArrayNum) {
    TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_38.ArrayNum = 0;
    TStack_38.ArrayMax = 0;
    pFVar1 = TStack_28.AllocatorInstance.Data + (longlong)TStack_28.ArrayNum * 8;
    FVar5.Data = TStack_28.AllocatorInstance.Data;
    while( true ) {
      if (TStack_28.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_18);
      }
      if (FVar5.Data == pFVar1) break;
      this_00 = *(FMaterial **)FVar5.Data;
      (**(code **)(this_00->_padding_ + 8))(this_00);
      iVar3 = TStack_38.ArrayNum;
      if (TStack_38.ArrayNum == TStack_38.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&TStack_38.AllocatorInstance,&TStack_38.ArrayMax);
      }
      TStack_38.ArrayNum = iVar3 + 1;
      *(FMaterial **)(TStack_38.AllocatorInstance.Data + (longlong)iVar3 * 8) = this_00;
      FMaterial::AddRef(this_00);
      FVar5.Data = FVar5.Data + 8;
    }
    iVar2 = TStack_28.ArrayMax;
    TStack_28._8_8_ = TStack_28._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&TStack_28.AllocatorInstance,0,&TStack_28.ArrayMax);
    }
    FMaterial::DeleteMaterialsOnRenderThread(&TStack_38);
    DestructItems<TRefCountPtr<FMaterial>,int>
              ((TRefCountPtr<FMaterial> *)TStack_38.AllocatorInstance.Data,TStack_38.ArrayNum);
    if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_38.AllocatorInstance.Data);
    }
  }
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  return;
}

// CacheShadersForResources @ 147f33290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMaterialInstance::CacheShadersForResources
          (UMaterialInstance *this,EShaderPlatform param_1,
          TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_2,
          EMaterialShaderPrecompileMode param_3,ITargetPlatform *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  FName this_00;
  uint uVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  FName local_res8;
  EShaderPlatform local_res10;
  undefined1 local_res18 [8];
  EMaterialShaderPrecompileMode local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FAssetLog local_68;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar7 = false;
  local_res10 = param_1;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 0x2d8))();
  iVar6 = param_2->ArrayNum;
  uVar5 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar6) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = FMaterial::CacheShaders
                        (*(FMaterial **)((param_2->AllocatorInstance).Data + lVar8),param_3,param_4)
      ;
      if (!bVar2) {
        lVar4 = (**(code **)(this->_padding_ + 0x2d8))(this);
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
        ::FName::ToString((FName *)this_00,&local_78);
        if (lVar4 != 0) {
          local_res8 = *(FName *)(lVar4 + 0x18);
          bVar7 = true;
          ::FName::ToString(&local_res8,&local_98);
        }
        ::FString::PrintfImpl
                  (&local_a8,
                   L"Failed to compile Material Instance with Base %s for platform %s, Default Material will be used in game.\n"
                  );
        iVar6 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_b8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar6);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (2 < (byte)LogMaterial._0_1_) {
          ::FString::PrintfImpl(&local_88,L"%s");
          local_68.Path = (wchar_t *)0x0;
          local_68.PackagePath = (FPackagePath *)0x0;
          local_68.Object = (UObject *)this;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogMaterial.field_0x4,Warning,&local_68,&local_88,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                     ,0xafe);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        param_3 = local_res20;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          param_3 = local_res20;
        }
      }
      iVar6 = param_2->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar5 < iVar6);
  }
  return;
}

// CalculateTexturesSamplingInfo @ 147f337d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTextureSamplingInfo * __thiscall
UMaterialInstance::CalculateTexturesSamplingInfo
          (UMaterialInstance *this,FTextureSamplingInfo *__return_storage_ptr__,UTexture *param_1)

{
  float fVar1;
  int iVar2;
  UMaterialInterface *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FTextureSamplingInfo *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int local_68;
  int local_64;
  byte local_60;
  UTexture *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar12 = false;
  local_60 = 0;
  local_58 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  uVar16 = _UNK_150a1c8e8;
  uVar15 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_50 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  uStack_48 = _UNK_150a1c8e8;
  local_64 = -1;
  local_68 = -1;
  bVar6 = UMaterialInterface::FindTextureStreamingDataIndexRange
                    ((UMaterialInterface *)this,(FName)param_1->_padding_,&local_64,&local_68);
  iVar5 = local_68;
  if ((bVar6) && (uVar11 = (ulonglong)local_64, local_64 <= local_68)) {
    lVar13 = uVar11 << 4;
    do {
      iVar2 = (int)this->_padding_;
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < iVar2) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_78 = (longlong)(int)uVar10;
        local_70 = (longlong)iVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FTextureSamplingInfo *)(*pcVar4)();
          return pFVar8;
        }
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar9 = (ulonglong)*(uint *)(lVar13 + 4 + this->_padding_);
      fVar14 = *(float *)((longlong)&local_50 + uVar9 * 4);
      fVar1 = *(float *)(lVar13 + this->_padding_);
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      lVar13 = lVar13 + 0x10;
      *(float *)((longlong)&local_50 + uVar9 * 4) = fVar14;
      bVar12 = local_60 | 1;
      param_1 = local_58;
      uVar15 = local_50;
      uVar16 = uStack_48;
      local_60 = bVar12;
    } while ((int)(uVar10 + 1) <= iVar5);
  }
  else {
    pUVar3 = (this->Parent).field0_0x0.DebugPtr;
    if (pUVar3 != (UMaterialInterface *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsValid = (bool)bVar12;
  (__return_storage_ptr__->Texture).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(undefined8 *)(__return_storage_ptr__->ChannelMinSamplingScale).Elements = uVar15;
  *(undefined8 *)((__return_storage_ptr__->ChannelMinSamplingScale).Elements + 2) = uVar16;
  return __return_storage_ptr__;
}

// CastsRayTracedShadows @ 147f34030

bool __thiscall UMaterialInstance::CastsRayTracedShadows(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3403f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x570))();
    return (bool)uVar2;
  }
  return true;
}

// CheckMaterialUsage @ 147f34060

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

bool __thiscall
UMaterialInstance::CheckMaterialUsage(UMaterialInstance *this,EMaterialUsage param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UMaterial *this_00;
  bool local_res8 [8];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x702,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (UMaterial *)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (this_00 != (UMaterial *)0x0) {
    local_res8[0] = false;
    bVar2 = UMaterial::SetMaterialUsage(this_00,local_res8,param_1,(UMaterialInterface *)this);
    if (local_res8[0] != false) {
      CacheResourceShadersForRendering(this,None);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    }
    return bVar2;
  }
  return false;
}

// CheckMaterialUsage_Concurrent @ 147f34140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UMaterialInstance::CheckMaterialUsage_Concurrent(UMaterialInstance *this,EMaterialUsage param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UMaterial *this_00;
  FTaskBase *pFVar6;
  FTaskBase *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterialInstance::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
  FVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FTaskBase *pFVar12;
  FTaskBase *this_01;
  uint local_res8;
  undefined4 uStackX_c;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_res20 [8];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FString local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FName local_68;
  FName local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FString local_48;
  
  this_01 = (FTaskBase *)0x0;
  local_res8 = 0;
  local_58 = 0;
  uStack_50 = 0;
  this_00 = (UMaterial *)(**(code **)(this->_padding_ + 0x2e0))(0,&local_58);
  if (this_00 == (UMaterial *)0x0) {
    return false;
  }
  local_res8 = local_res8 & 0xffffff00;
  bVar4 = UMaterial::NeedsSetMaterialUsage_Concurrent(this_00,(bool *)&local_res8,param_1);
  if (bVar4) {
    bVar4 = IsInGameThread();
    if (bVar4) {
      uVar5 = (**(code **)(this->_padding_ + 0x370))(this,param_1);
      return (bool)uVar5;
    }
    if (4 < (byte)LogMaterial._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b0,(UObject *)0x0);
      UMaterial::GetUsageName(this_00,&local_48,param_1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = ::operator_new(0x10);
    pFVar12 = this_01;
    if (pFVar6 != (FTaskBase *)0x0) {
      pFVar6->_padding_ = (longlong)this;
      *(EMaterialUsage *)&pFVar6->_padding_ = param_1;
      pFVar12 = pFVar6;
    }
    pFVar7 = ::operator_new(0x18);
    pFVar6 = this_01;
    if (pFVar7 != (FTaskBase *)0x0) {
      *(atomic<int> *)&pFVar7->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar7->_padding_)[1] = (atomic<int>)0x1;
      pFVar7->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TReferenceControllerWithDeleter<`UMaterialInstance::CheckMaterialUsage_Concurrent'::`13'::FCallSMU,SharedPointerInternals::DefaultDeleter<`UMaterialInstance::CheckMaterialUsage_Concurrent'::`13'::FCallSMU>,1>
            ::_vftable_;
      pFVar7->_padding_ = (longlong)pFVar12;
      pFVar6 = pFVar7;
    }
    if ((pFVar12 == (FTaskBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRawPtrProxy.Object != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0xe3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_res8 = local_res8 & 0xffffff00;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterialInstance::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
           )0x0) {
        pFVar8 = ::FName::FName(&local_68,"STAT_FSimpleDelegateGraphTask_CheckMaterialUsage");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage,*pFVar8,
                   L"FSimpleDelegateGraphTask.CheckMaterialUsage","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar9 = StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage;
    if (StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterialInstance::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
         )0x0) {
      pFVar8 = ::FName::FName(&local_60,"STAT_FSimpleDelegateGraphTask_CheckMaterialUsage");
      FVar9 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterialInstance::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage,*pFVar8,
                           L"FSimpleDelegateGraphTask.CheckMaterialUsage","STATGROUP_TaskGraphTasks"
                           ,"STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                           MCR_Invalid);
    }
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_c0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
    if (puVar10 == (undefined8 *)0x0) {
      pFVar12 = (FTaskBase *)CONCAT44(uStackX_c,local_res8);
      pFVar7 = this_01;
    }
    else {
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->_padding_ + 1);
        UNLOCK();
      }
      *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseSPMethodDelegateInstance<0,`UMaterialInstance::CheckMaterialUsage_Concurrent'::`13'::FCallSMU,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  ::_vftable_;
      puVar10[3] = pFVar12;
      puVar10[4] = pFVar6;
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        ((atomic<int> *)&pFVar6->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pFVar6->_padding_)[1] + 1);
        UNLOCK();
      }
      puVar10[5] = `UMaterialInstance::CheckMaterialUsage_Concurrent'::__l13::FCallSMU::Task;
      pFVar12 = pFVar6;
      pFVar7 = (FTaskBase *)&DAT_00000001;
    }
    if (pFVar7 != (FTaskBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
      this_01 = pFVar12;
    }
    this_01[1]._padding_ = (longlong)FVar9;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_01[1]._padding_,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8);
    *(undefined4 *)&this_01[1]._padding_ = 0x101;
    UE::Tasks::Private::TranslatePriority(GameThread_Local,local_res20,local_res18);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_res20[0],local_res18[0],None);
    if (this_01 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_a0);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return local_res8._0_1_;
}

// ClearNumericParameterDefault @ 147f34640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::ClearNumericParameterDefault
          (UMaterialInstance *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,EShaderPlatform param_3)

{
  return;
}

// ClearParameterValuesInternal @ 147f34690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialInstance::ClearParameterValuesInternal
          (UMaterialInstance *this,EMaterialInstanceClearParameterFlag param_1)

{
  int *piVar1;
  TSharedPtr<FMaterialLayerStackFunctionsCache,1> *pTVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  code *local_98 [2];
  undefined **local_88;
  FMaterialInstanceResource *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMaterialInstanceResource *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar5 = false;
  if ((param_1 & Numeric) != None) {
    piVar1 = &(this->ScalarParameterValues).ArrayMax;
    (this->ScalarParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,&(this->ScalarParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->VectorParameterValues).ArrayMax;
    (this->VectorParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,0,&(this->VectorParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->DoubleVectorParameterValues).ArrayMax;
    (this->DoubleVectorParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->DoubleVectorParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->ParameterCollectionParameterValues).ArrayMax;
    (this->ParameterCollectionParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ParameterCollectionParameterValues).AllocatorInstance,0,piVar1);
    }
    bVar5 = true;
  }
  if ((param_1 & Texture) != None) {
    piVar1 = &(this->TextureParameterValues).ArrayMax;
    (this->TextureParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->TextureParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->TextureCollectionParameterValues).ArrayMax;
    (this->TextureCollectionParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->TextureCollectionParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->RuntimeVirtualTextureParameterValues).ArrayMax;
    (this->RuntimeVirtualTextureParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->RuntimeVirtualTextureParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->SparseVolumeTextureParameterValues).ArrayMax;
    (this->SparseVolumeTextureParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->SparseVolumeTextureParameterValues).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FontParameterValues).ArrayMax;
    (this->FontParameterValues).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->FontParameterValues).AllocatorInstance,0,piVar1);
    }
    bVar5 = true;
  }
  if ((param_1 & Static) != None) {
    piVar1 = &(this->StaticParametersRuntime).StaticSwitchParameters.ArrayMax;
    (this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,0,(ForAnyElementType *)&this->StaticParametersRuntime,0,piVar1);
    }
    piVar1 = &(this->StaticParametersRuntime).MaterialLayers.Layers.ArrayMax;
    (this->StaticParametersRuntime).MaterialLayers.Layers.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&(this->StaticParametersRuntime).MaterialLayers,0,piVar1
                );
    }
    piVar1 = &(this->StaticParametersRuntime).MaterialLayers.Blends.ArrayMax;
    (this->StaticParametersRuntime).MaterialLayers.Blends.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->StaticParametersRuntime).MaterialLayers.Blends.AllocatorInstance,0,
                 piVar1);
    }
    pTVar2 = &(this->StaticParametersRuntime).MaterialLayers.LayerStackCache;
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FMaterialLayerStackFunctionsCache,1> *)&local_a8) {
      pTVar2->Object = (FMaterialLayerStackFunctionsCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StaticParametersRuntime).MaterialLayers.LayerStackCache.
                  SharedReferenceCount,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    (this->StaticParametersRuntime).bHasMaterialLayers = '\0';
  }
  if ((this->Resource != (FMaterialInstanceResource *)0x0) && (bVar5)) {
    local_70 = (undefined ***)0x0;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMaterialInstance::ClearParameterValuesInternal'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMaterialInstance::ClearParameterValuesInternal'::`14'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_80 = this->Resource;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInstance::ClearParameterValuesInternal_::__l14::TSTR_FClearMIParametersCommand4516>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterialInstance::ClearParameterValuesInternal'::__l14::TSTR_FClearMIParametersCommand4516>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar8 = (ulonglong)local_38;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar7 = local_40;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar7 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar7 = local_70;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  InitResources(this);
  return;
}

// CopyMaterialInstanceParameters @ 147f351a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::CopyMaterialInstanceParameters
          (UMaterialInstance *this,UMaterialInterface *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  int iVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyMatInstParams> FVar23;
  ulonglong uVar24;
  longlong lVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined1 local_res20 [8];
  FLLMScope local_1a0 [2];
  undefined8 *local_198;
  ulonglong local_190;
  FColor_u_0 local_188 [2];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  char local_160;
  undefined4 local_158;
  undefined1 local_154;
  FName local_150;
  undefined8 local_148;
  undefined8 local_140;
  FName local_138;
  FName local_130;
  void *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  FMemScope local_f8 [2];
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  FUtf8String local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FUtf8String local_a0;
  FName local_88 [10];
  
  FLLMScope::FLLMScope(local_1a0,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(local_f8,MaterialInstance,true);
  FVar23 = StatPtr_STAT_MaterialInstance_CopyMatInstParams;
  if (StatPtr_STAT_MaterialInstance_CopyMatInstParams ==
      (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyMatInstParams>)0x0) {
    pFVar22 = ::FName::FName(local_88,"STAT_MaterialInstance_CopyMatInstParams");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyMatInstParams>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MaterialInstance_CopyMatInstParams,*pFVar22,
                        L"MaterialInstance CopyMatInstParams","STATGROUP_Shaders","STATCAT_Advanced"
                        ,L"Shader Compression",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar23;
  bVar10 = false;
  bVar8 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar20 = false;
  bVar18 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) ||
     (bVar7 = bVar8, bVar9 = bVar10, FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar10 = false;
      bVar8 = true;
      bVar20 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_150.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                   ,0x814);
        bVar10 = true;
        bVar8 = true;
        bVar20 = true;
        bVar18 = true;
      }
    }
    bVar7 = bVar8;
    bVar9 = bVar10;
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar18 = true;
      goto LAB_147f35346;
    }
  }
  bVar10 = bVar20;
  bVar8 = bVar18;
  bVar18 = false;
  local_138 = local_130;
  FVar26 = local_130;
LAB_147f35346:
  if ((param_1 != (UMaterialInterface *)0x0) && ((UMaterialInstance *)param_1 != this)) {
    ClearParameterValuesInternal(this,AllNonStatic);
    uVar29 = 0;
    local_198 = (undefined8 *)0x0;
    local_190 = 0;
    local_120 = (void *)0x0;
    local_118 = 0;
    do {
      if ((uVar29 - 8 & 0xfd) != 0) {
        (**(code **)(this->_padding_ + 0x3b8))(this,uVar29 & 0xff,&local_198,&local_120);
        ReserveParameterValuesInternal(this,(EMaterialParameterType)uVar29,(int)local_190);
        iVar11 = (int)local_190;
        uVar24 = (ulonglong)(int)local_190;
        puVar28 = local_198 + uVar24 * 2;
        puVar30 = local_198;
        while( true ) {
          if ((int)uVar24 != iVar11) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (puVar30 == puVar28) break;
          local_110 = (undefined4)*puVar30;
          local_108 = (undefined4)((ulonglong)*puVar30 >> 0x20);
          local_104 = *(undefined4 *)((longlong)puVar30 + 0xc);
          local_100 = *(undefined1 *)(puVar30 + 1);
          local_160 = -1;
          local_158 = 0xffffffff;
          local_154 = 0;
          local_10c = 0;
          cVar19 = (**(code **)(param_1->_padding_ + 0x410))
                             (param_1,uVar29 & 0xff,&local_110,&local_180,3);
          if (cVar19 == '\0') goto LAB_147f35973;
          local_148 = 0;
          local_d0 = 0;
          local_d8 = 0;
          local_e8 = 0;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          local_e0 = 0;
          FUtf8String::Reset(&local_c8,0);
          local_140 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          local_b8 = 0;
          FUtf8String::Reset(&local_a0,0);
          switch(local_160) {
          case '\0':
            if ((local_160 != '\0') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type == EMaterialParameterType::Scalar",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                    ,0x176,L""), bVar20)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar12 = local_180;
            iVar21 = (this->ScalarParameterValues).ArrayNum;
            piVar1 = &(this->ScalarParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x424,&(this->ScalarParameterValues).AllocatorInstance,piVar1);
            }
            (this->ScalarParameterValues).ArrayNum = iVar21 + 1;
            uVar3 = puVar30[1];
            lVar25 = (longlong)iVar21;
            pFVar27 = (this->ScalarParameterValues).AllocatorInstance.Data;
            *(undefined8 *)(pFVar27 + lVar25 * 0x24) = *puVar30;
            *(undefined8 *)(pFVar27 + lVar25 * 0x24 + 8) = uVar3;
            *(undefined8 *)(pFVar27 + lVar25 * 0x24 + 0x14) = 0;
            *(undefined8 *)(pFVar27 + lVar25 * 0x24 + 0x1c) = 0;
            *(undefined4 *)(pFVar27 + lVar25 * 0x24 + 0x10) = uVar12;
            break;
          case '\x01':
            if ((local_160 != '\x01') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type == EMaterialParameterType::Vector",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                    ,0x177,L""), bVar20)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar15 = uStack_174;
            uVar14 = local_178;
            uVar13 = uStack_17c;
            uVar12 = local_180;
            iVar21 = (this->VectorParameterValues).ArrayNum;
            piVar1 = &(this->VectorParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x430,&(this->VectorParameterValues).AllocatorInstance,piVar1);
            }
            (this->VectorParameterValues).ArrayNum = iVar21 + 1;
            uVar3 = puVar30[1];
            lVar25 = (longlong)iVar21;
            pFVar27 = (this->VectorParameterValues).AllocatorInstance.Data;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30) = *puVar30;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30 + 8) = uVar3;
            *(undefined4 *)(pFVar27 + lVar25 * 0x30 + 0x10) = uVar12;
            *(undefined4 *)(pFVar27 + lVar25 * 0x30 + 0x14) = uVar13;
            *(undefined4 *)(pFVar27 + lVar25 * 0x30 + 0x18) = uVar14;
            *(undefined4 *)(pFVar27 + lVar25 * 0x30 + 0x1c) = uVar15;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30 + 0x20) = 0;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30 + 0x28) = 0;
            break;
          case '\x02':
            if ((local_160 != '\x02') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type == EMaterialParameterType::DoubleVector",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                    ,0x178,L""), bVar20)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar17 = local_168;
            uVar16 = local_170;
            iVar21 = (this->DoubleVectorParameterValues).ArrayNum;
            piVar1 = &(this->DoubleVectorParameterValues).ArrayMax;
            uVar3 = CONCAT44(uStack_17c,local_180);
            uVar6 = CONCAT44(uStack_174,local_178);
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1040,&(this->DoubleVectorParameterValues).AllocatorInstance,
                                  piVar1);
            }
            (this->DoubleVectorParameterValues).ArrayNum = iVar21 + 1;
            uVar4 = puVar30[1];
            pFVar27 = (this->DoubleVectorParameterValues).AllocatorInstance.Data;
            lVar25 = (longlong)iVar21 * 0x40;
            *(undefined8 *)(pFVar27 + lVar25) = *puVar30;
            *(undefined8 *)(pFVar27 + lVar25 + 8) = uVar4;
            *(undefined8 *)(pFVar27 + lVar25 + 0x10) = uVar3;
            *(undefined8 *)(pFVar27 + lVar25 + 0x18) = uVar6;
            *(undefined8 *)(pFVar27 + lVar25 + 0x20) = uVar16;
            *(undefined8 *)(pFVar27 + lVar25 + 0x28) = uVar17;
            *(undefined8 *)(pFVar27 + lVar25 + 0x30) = 0;
            *(undefined8 *)(pFVar27 + lVar25 + 0x38) = 0;
            break;
          case '\x03':
            iVar21 = (this->TextureParameterValues).ArrayNum;
            piVar1 = &(this->TextureParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&(this->TextureParameterValues).AllocatorInstance,piVar1);
            }
            pFVar27 = (this->TextureParameterValues).AllocatorInstance.Data;
            (this->TextureParameterValues).ArrayNum = iVar21 + 1;
            goto LAB_147f3575a;
          case '\x04':
            iVar21 = (this->TextureCollectionParameterValues).ArrayNum;
            piVar1 = &(this->TextureCollectionParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&(this->TextureCollectionParameterValues).AllocatorInstance,
                                  piVar1);
            }
            pFVar27 = (this->TextureCollectionParameterValues).AllocatorInstance.Data;
            (this->TextureCollectionParameterValues).ArrayNum = iVar21 + 1;
            goto LAB_147f3575a;
          case '\x05':
            iVar21 = (this->FontParameterValues).ArrayNum;
            piVar1 = &(this->FontParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&(this->FontParameterValues).AllocatorInstance,piVar1);
            }
            uVar12 = local_178;
            pFVar27 = (this->FontParameterValues).AllocatorInstance.Data;
            (this->FontParameterValues).ArrayNum = iVar21 + 1;
            uVar3 = puVar30[1];
            pUVar5 = (UObject *)CONCAT44(uStack_17c,local_180);
            lVar25 = (longlong)iVar21;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30) = *puVar30;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30 + 8) = uVar3;
            *(UObject **)(pFVar27 + lVar25 * 0x30 + 0x10) = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
            *(undefined4 *)(pFVar27 + lVar25 * 0x30 + 0x18) = uVar12;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30 + 0x1c) = 0;
            *(undefined8 *)(pFVar27 + lVar25 * 0x30 + 0x24) = 0;
            break;
          case '\x06':
            iVar21 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
            piVar1 = &(this->RuntimeVirtualTextureParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&(this->RuntimeVirtualTextureParameterValues).
                                         AllocatorInstance,piVar1);
            }
            pFVar27 = (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
            (this->RuntimeVirtualTextureParameterValues).ArrayNum = iVar21 + 1;
            goto LAB_147f3575a;
          case '\a':
            iVar21 = (this->SparseVolumeTextureParameterValues).ArrayNum;
            piVar1 = &(this->SparseVolumeTextureParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&(this->SparseVolumeTextureParameterValues).
                                         AllocatorInstance,piVar1);
            }
            pFVar27 = (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
            (this->SparseVolumeTextureParameterValues).ArrayNum = iVar21 + 1;
            goto LAB_147f3575a;
          case '\b':
            break;
          case '\t':
            iVar21 = (this->ParameterCollectionParameterValues).ArrayNum;
            piVar1 = &(this->ParameterCollectionParameterValues).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&(this->ParameterCollectionParameterValues).
                                         AllocatorInstance,piVar1);
            }
            pFVar27 = (this->ParameterCollectionParameterValues).AllocatorInstance.Data;
            (this->ParameterCollectionParameterValues).ArrayNum = iVar21 + 1;
LAB_147f3575a:
            uVar3 = puVar30[1];
            pUVar5 = (UObject *)CONCAT44(uStack_17c,local_180);
            lVar25 = (longlong)iVar21;
            *(undefined8 *)(pFVar27 + lVar25 * 0x28) = *puVar30;
            *(undefined8 *)(pFVar27 + lVar25 * 0x28 + 8) = uVar3;
            *(UObject **)(pFVar27 + lVar25 * 0x28 + 0x10) = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
            *(undefined8 *)(pFVar27 + lVar25 * 0x28 + 0x18) = 0;
            *(undefined8 *)(pFVar27 + lVar25 * 0x28 + 0x20) = 0;
            break;
          default:
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                                ,0xfe2,L"");
            if (bVar20) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
LAB_147f35973:
          uVar24 = local_190 & 0xffffffff;
          puVar30 = puVar30 + 2;
        }
      }
      uVar29 = uVar29 + 1;
    } while ((int)uVar29 < 0xb);
    InitResources(this);
    FVar26 = local_138;
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    bVar7 = bVar8;
    bVar9 = bVar10;
    if (local_198 != (undefined8 *)0x0) {
      FMemory::Free(local_198);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  FMemScope::~FMemScope(local_f8);
  FLLMScope::~FLLMScope(local_1a0);
  return;
}

// CopyMaterialUniformParametersInternal @ 147f35aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterialInstance::CopyMaterialUniformParametersInternal
          (UMaterialInstance *this,UMaterialInterface *param_1)

{
  int *piVar1;
  FMaterialNumericParameterInfo *pFVar2;
  TArray<FScalarParameterValue,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  EMaterialTextureParameterType EVar7;
  UMaterialInterface *pUVar8;
  UMaterialInstance *pUVar9;
  UMaterialInstance *pUVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal> FVar16;
  UClass *pUVar17;
  longlong lVar18;
  FMaterial *this_00;
  FUniformExpressionSet *pFVar19;
  FType *pFVar20;
  uint uVar21;
  EShaderPlatform EVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FName FVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  FMaterialTextureParameterInfo *this_01;
  TArray<FVectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar28;
  TArray<FDoubleVectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar29;
  FMaterialNumericParameterInfo *pFVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  EMaterialParameterType *pEVar33;
  FMaterialTextureParameterInfo *pFVar34;
  undefined1 auStackY_278 [32];
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  undefined1 local_210;
  undefined1 local_20f [7];
  FName local_208;
  byte local_200;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  FName local_1e8;
  UMaterialInterface *local_1e0;
  EMaterialTextureParameterType local_1d8;
  UMaterialInstance *local_1d0;
  FLLMScope local_1c8;
  FColor_u_0 local_1c4;
  FName local_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  longlong local_1b0;
  FMaterialParameterInfo local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FMemScope local_188;
  TArrayView<FMaterialNumericParameterInfo_const_,int> local_180;
  TArrayView<FMaterialTextureParameterInfo_const_,int> local_170;
  undefined8 local_158;
  undefined8 local_148;
  FName local_138;
  FMaterialParameterMetadata local_130;
  FType local_100;
  FValue local_e8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1d0 = this;
  FLLMScope::FLLMScope(&local_1c8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_188,MaterialInstance,true);
  FVar16 = StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal;
  if (StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal ==
      (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal>)0x0) {
    pFVar15 = ::FName::FName(&local_138,"STAT_MaterialInstance_CopyUniformParamsInternal");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal,*pFVar15,
                        L"MaterialInstance CopyUniformParamsInternal","STATGROUP_Shaders",
                        "STATCAT_Advanced",L"Shader Compression",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  local_200 = 0;
  FVar25 = *(FName *)FVar16;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c4._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      local_200 = local_200 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_1c0.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                   ,0x1651);
        local_200 = local_200 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_208 = FVar25;
      local_1e8 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      local_200 = local_200 | 4;
    }
  }
  if ((param_1 != (UMaterialInterface *)0x0) && ((UMaterialInstance *)param_1 != this)) {
    ClearParameterValuesInternal(this,AllNonStatic);
    local_1f0._0_4_ = 0;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    local_1e0 = param_1;
    while( true ) {
      iVar12 = (int)local_1f0;
      if ((local_1f8.Data <= (FScriptContainerElement *)&local_1e0) &&
         ((FScriptContainerElement *)&local_1e0 < local_1f8.Data + (longlong)local_1f0._4_4_ * 8)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = (int)local_1f0;
      }
      if (iVar12 == local_1f0._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1f8,(int *)((longlong)&local_1f0 + 4));
      }
      pUVar8 = local_1e0;
      local_1f0 = CONCAT44(local_1f0._4_4_,iVar12 + 1);
      *(UMaterialInterface **)(local_1f8.Data + (longlong)iVar12 * 8) = local_1e0;
      if (local_1e0 == (UMaterialInterface *)0x0) break;
      pUVar17 = GetPrivateStaticClass();
      lVar23 = pUVar8->_padding_;
      iVar12 = (int)pUVar17->_padding_;
      if ((*(int *)(lVar23 + 0x38) < iVar12) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar17->_padding_)) break;
      local_1e0 = *(UMaterialInterface **)&pUVar8[1].SubsurfaceProfiles.ArrayNum;
      if (local_1e0 == (UMaterialInterface *)0x0) goto LAB_147f35d3e;
    }
    local_1e0 = (UMaterialInterface *)0x0;
LAB_147f35d3e:
    iVar12 = (int)local_1f0 + -1;
    if (-1 < iVar12) {
      lVar23 = (longlong)iVar12 << 3;
      do {
        local_1b0 = lVar23;
        if (((int)local_1f0 <= iVar12) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar25 = *(FName *)(local_1f8.Data + lVar23);
        local_1e8 = FVar25;
        if (FVar25 != (FName)0x0) {
          pUVar17 = GetPrivateStaticClass();
          iVar4 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)((longlong)FVar25 + 0x10) + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)FVar25 + 0x10) + 0x30) + (longlong)iVar4 * 8)
              != &pUVar17->_padding_)) {
            pUVar17 = Z_Construct_UClass_UMaterial_NoRegister();
            iVar4 = (int)pUVar17->_padding_;
            if ((iVar4 <= *(int *)(*(longlong *)((longlong)FVar25 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)FVar25 + 0x10) + 0x30) + (longlong)iVar4 * 8
                 ) == &pUVar17->_padding_)) {
              lVar23 = (**(code **)(*(longlong *)FVar25 + 0x180))(FVar25);
              if (lVar23 == 0) {
LAB_147f36281:
                this_00 = (FMaterial *)
                          (**(code **)(*(longlong *)FVar25 + 0x390))(FVar25,GMaxRHIShaderPlatform,4)
                ;
                if (this_00 == (FMaterial *)0x0) goto LAB_147f36511;
              }
              else {
                EVar22 = SP_NumPlatforms;
                if (*(byte *)(lVar23 + 0x188) != 5) {
                  EVar22 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(byte *)(lVar23 + 0x188)];
                }
                this_00 = (FMaterial *)(**(code **)(*(longlong *)FVar25 + 0x390))(FVar25,EVar22,4);
                if (this_00 == (FMaterial *)0x0) goto LAB_147f36281;
              }
              FMaterial::GetUniformNumericParameterExpressions(this_00,&local_180);
              pFVar30 = local_180.DataPtr + local_180.ArrayNum;
              if (local_180.DataPtr != pFVar30) {
                pEVar33 = &(local_180.DataPtr)->ParameterType;
                local_1e8 = FVar25;
                do {
                  pFVar19 = FMaterial::GetUniformExpressions(this_00);
                  uVar5 = *(undefined4 *)(pEVar33 + 4);
                  FVar27 = (pFVar19->DefaultValues).AllocatorInstance;
                  if (((ulonglong)FVar27 & 1) != 0) {
                    FVar27 = (ForAnyElementType)
                             ((longlong)&(pFVar19->DefaultValues).AllocatorInstance.field_0x0 +
                             ((longlong)FVar27 >> 0x18));
                  }
                  pFVar20 = GetShaderValueType(&local_100,*pEVar33);
                  UE::Shader::FValue::FromMemoryImage
                            (&local_e8,pFVar20->ValueType,
                             (void *)((longlong)FVar27 + (ulonglong)(uint)uVar5),(uint *)0x0);
                  FMaterialParameterValue::FMaterialParameterValue
                            (&local_130.Value,*pEVar33,&local_e8);
                  local_1a8.Name.Number = *(uint *)(pEVar33 + -0xc);
                  local_158._0_4_ =
                       (((FMaterialNumericParameterInfo *)(pEVar33 + -0x14))->ParameterInfo).Name.
                       ComparisonIndex;
                  local_158._4_4_ =
                       (((FMaterialNumericParameterInfo *)(pEVar33 + -0x14))->ParameterInfo).Name.
                       DisplayIndex;
                  local_1a8.Name.ComparisonIndex.Value = (undefined4)local_158;
                  local_130.PrimitiveDataIndex = -1;
                  local_130.bDynamicSwitchParameter = false;
                  local_1a8.Association.Value = '\x02';
                  local_1a8.Index = -1;
                  AddParameterValueInternal(this,&local_1a8,&local_130,None);
                  if (local_e8.Component.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::Shader::FValueComponent>)0x0) {
                    FMemory::Free((void *)local_e8.Component.AllocatorInstance.SecondaryData);
                  }
                  pFVar2 = (FMaterialNumericParameterInfo *)(pEVar33 + 8);
                  pEVar33 = pEVar33 + 0x1c;
                } while (pFVar2 != pFVar30);
              }
              FVar25 = local_1e8;
              local_1d8 = Standard2D;
              do {
                EVar7 = local_1d8;
                FMaterial::GetUniformTextureExpressions(this_00,&local_170,local_1d8);
                pUVar9 = local_1d0;
                pFVar34 = local_170.DataPtr + local_170.ArrayNum;
                this = local_1d0;
                for (this_01 = local_170.DataPtr; local_1d0 = this, this_01 != pFVar34;
                    this_01 = this_01 + 1) {
                  if (((this_01->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
                     ((this_01->ParameterInfo).Name.Number != 0)) {
                    uVar14 = (pUVar9->TextureParameterValues).ArrayNum;
                    piVar1 = &(pUVar9->TextureParameterValues).ArrayMax;
                    if (uVar14 == *piVar1) {
                      uVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x828,&(pUVar9->TextureParameterValues).AllocatorInstance,
                                          piVar1);
                    }
                    (pUVar9->TextureParameterValues).ArrayNum = uVar14 + 1;
                    uVar21 = 0;
                    if ((int)uVar14 < (int)(uVar14 + 1)) {
                      uVar21 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar31 = (FScriptContainerElement *)0x0;
                    pFVar32 = (pUVar9->TextureParameterValues).AllocatorInstance.Data +
                              (longlong)(int)uVar14 * 0x28;
                    if (pFVar32 != (FScriptContainerElement *)0x0) {
                      local_198 = 0;
                      uStack_190 = CONCAT31(uStack_190._1_3_,2);
                      uStack_18c = 0xffffffff;
                      *(undefined8 *)pFVar32 = 0;
                      *(ulonglong *)(pFVar32 + 8) = CONCAT44(0xffffffff,uStack_190);
                      *(undefined8 *)(pFVar32 + 0x10) = 0;
                      *(undefined8 *)(pFVar32 + 0x18) = 0;
                      *(undefined8 *)(pFVar32 + 0x20) = 0;
                      pFVar31 = pFVar32;
                    }
                    uStack_1b4 = (this_01->ParameterInfo).Name.Number;
                    local_148._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                    local_148._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                    local_1b8 = (undefined4)local_148;
                    *(ulonglong *)pFVar31 = CONCAT44(uStack_1b4,(undefined4)local_148);
                    FMaterialTextureParameterInfo::GetGameThreadTextureValue
                              (this_01,(UMaterialInterface *)FVar25,this_00,
                               (UTexture **)(pFVar31 + 0x10));
                  }
                  EVar7 = local_1d8;
                  this = local_1d0;
                }
                local_1d8 = EVar7 + Cube;
              } while (local_1d8 < Count);
            }
          }
          else {
            iVar4 = *(int *)((longlong)FVar25 + 0x1a8);
            pTVar3 = &this->ScalarParameterValues;
            pFVar31 = *(FScriptContainerElement **)((longlong)FVar25 + 0x1a0);
            pFVar32 = pFVar31 + (longlong)iVar4 * 0x24;
LAB_147f35e10:
            if (*(int *)((longlong)FVar25 + 0x1a8) != iVar4) {
              local_214 = 0;
              `TCheckedPointerIterator<FScalarParameterValue_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_214);
            }
            pUVar9 = local_1d0;
            if (pFVar31 != pFVar32) {
              iVar13 = (this->ScalarParameterValues).ArrayNum;
              pFVar24 = (pTVar3->AllocatorInstance).Data;
              pFVar26 = pFVar24 + (longlong)iVar13 * 0x24;
              while( true ) {
                if ((this->ScalarParameterValues).ArrayNum != iVar13) {
                  local_213 = 0;
                  `TCheckedPointerIterator<FScalarParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_213);
                }
                if (pFVar24 == pFVar26) {
                  pFVar26 = (pTVar3->AllocatorInstance).Data;
                  if (((pFVar26 <= pFVar31) &&
                      (pFVar31 < pFVar26 + (longlong)(this->ScalarParameterValues).ArrayMax * 0x24))
                     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = (this->ScalarParameterValues).ArrayNum;
                  piVar1 = &(this->ScalarParameterValues).ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x424,&pTVar3->AllocatorInstance,piVar1);
                  }
                  (this->ScalarParameterValues).ArrayNum = iVar13 + 1;
                  lVar23 = *(longlong *)(pFVar31 + 8);
                  pFVar24 = (pTVar3->AllocatorInstance).Data;
                  lVar18 = (longlong)iVar13;
                  *(longlong *)(pFVar24 + lVar18 * 0x24) = *(longlong *)pFVar31;
                  *(longlong *)(pFVar24 + lVar18 * 0x24 + 8) = lVar23;
                  lVar23 = *(longlong *)(pFVar31 + 0x18);
                  *(longlong *)(pFVar24 + lVar18 * 0x24 + 0x10) = *(longlong *)(pFVar31 + 0x10);
                  *(longlong *)(pFVar24 + lVar18 * 0x24 + 0x10 + 8) = lVar23;
                  pFVar26 = pFVar31 + 0x20;
                  pFVar31 = pFVar31 + 0x24;
                  *(undefined4 *)(pFVar24 + lVar18 * 0x24 + 0x20) = *(undefined4 *)pFVar26;
                  FVar25 = local_1e8;
                  goto LAB_147f35e10;
                }
                if (*(longlong *)pFVar24 == *(longlong *)pFVar31) break;
                pFVar24 = pFVar24 + 0x24;
              }
              pFVar26 = pFVar31 + 0x10;
              pFVar31 = pFVar31 + 0x24;
              *(undefined4 *)(pFVar24 + 0x10) = *(undefined4 *)pFVar26;
              FVar25 = local_1e8;
              goto LAB_147f35e10;
            }
            iVar4 = *(int *)((longlong)FVar25 + 0x1b8);
            pFVar32 = *(FScriptContainerElement **)((longlong)FVar25 + 0x1b0);
            pTVar28 = &local_1d0->VectorParameterValues;
            pFVar31 = pFVar32 + (longlong)iVar4 * 0x30;
LAB_147f35f50:
            if (*(int *)((longlong)FVar25 + 0x1b8) != iVar4) {
              local_212 = 0;
              `TCheckedPointerIterator<FVectorParameterValue_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_212);
            }
            pUVar10 = local_1d0;
            if (pFVar32 != pFVar31) {
              iVar13 = (pUVar9->VectorParameterValues).ArrayNum;
              pFVar26 = (pTVar28->AllocatorInstance).Data;
              pFVar24 = pFVar26 + (longlong)iVar13 * 0x30;
              while( true ) {
                if ((pUVar9->VectorParameterValues).ArrayNum != iVar13) {
                  local_211 = 0;
                  `TCheckedPointerIterator<FVectorParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_211);
                }
                if (pFVar26 == pFVar24) {
                  pFVar26 = (pTVar28->AllocatorInstance).Data;
                  if (((pFVar26 <= pFVar32) &&
                      (pFVar32 < pFVar26 + (longlong)(pUVar9->VectorParameterValues).ArrayMax * 0x30
                      )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = (pUVar9->VectorParameterValues).ArrayNum;
                  piVar1 = &(pUVar9->VectorParameterValues).ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x430,&pTVar28->AllocatorInstance,piVar1);
                  }
                  (pUVar9->VectorParameterValues).ArrayNum = iVar13 + 1;
                  lVar23 = *(longlong *)(pFVar32 + 8);
                  lVar18 = (longlong)iVar13;
                  pFVar24 = (pTVar28->AllocatorInstance).Data;
                  *(longlong *)(pFVar24 + lVar18 * 0x30) = *(longlong *)pFVar32;
                  *(longlong *)(pFVar24 + lVar18 * 0x30 + 8) = lVar23;
                  lVar23 = *(longlong *)(pFVar32 + 0x18);
                  *(longlong *)(pFVar24 + lVar18 * 0x30 + 0x10) = *(longlong *)(pFVar32 + 0x10);
                  *(longlong *)(pFVar24 + lVar18 * 0x30 + 0x10 + 8) = lVar23;
                  pFVar26 = pFVar32 + 0x20;
                  lVar23 = *(longlong *)(pFVar32 + 0x28);
                  pFVar32 = pFVar32 + 0x30;
                  *(longlong *)(pFVar24 + lVar18 * 0x30 + 0x20) = *(longlong *)pFVar26;
                  *(longlong *)(pFVar24 + lVar18 * 0x30 + 0x20 + 8) = lVar23;
                  FVar25 = local_1e8;
                  goto LAB_147f35f50;
                }
                if (*(longlong *)pFVar26 == *(longlong *)pFVar32) break;
                pFVar26 = pFVar26 + 0x30;
              }
              pFVar24 = pFVar32 + 0x10;
              lVar23 = *(longlong *)(pFVar32 + 0x18);
              pFVar32 = pFVar32 + 0x30;
              *(longlong *)(pFVar26 + 0x10) = *(longlong *)pFVar24;
              *(longlong *)(pFVar26 + 0x18) = lVar23;
              FVar25 = local_1e8;
              goto LAB_147f35f50;
            }
            iVar4 = *(int *)((longlong)FVar25 + 0x1c8);
            pFVar32 = *(FScriptContainerElement **)((longlong)FVar25 + 0x1c0);
            pTVar29 = &local_1d0->DoubleVectorParameterValues;
            pFVar31 = pFVar32 + (longlong)iVar4 * 0x40;
LAB_147f36094:
            if (*(int *)((longlong)FVar25 + 0x1c8) != iVar4) {
              local_210 = 0;
              `TCheckedPointerIterator<FDoubleVectorParameterValue_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_210);
            }
            this = local_1d0;
            if (pFVar32 != pFVar31) {
              iVar13 = (pUVar10->DoubleVectorParameterValues).ArrayNum;
              pFVar26 = (pTVar29->AllocatorInstance).Data;
              pFVar24 = pFVar26 + (longlong)iVar13 * 0x40;
              while( true ) {
                if ((pUVar10->DoubleVectorParameterValues).ArrayNum != iVar13) {
                  local_20f[0] = 0;
                  `TCheckedPointerIterator<FDoubleVectorParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_20f);
                }
                if (pFVar26 == pFVar24) {
                  pFVar26 = (pTVar29->AllocatorInstance).Data;
                  if (((pFVar26 <= pFVar32) &&
                      (pFVar32 < pFVar26 + (longlong)(pUVar10->DoubleVectorParameterValues).ArrayMax
                                           * 0x40)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = (pUVar10->DoubleVectorParameterValues).ArrayNum;
                  piVar1 = &(pUVar10->DoubleVectorParameterValues).ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1040,&pTVar29->AllocatorInstance,piVar1);
                  }
                  (pUVar10->DoubleVectorParameterValues).ArrayNum = iVar13 + 1;
                  lVar23 = *(longlong *)(pFVar32 + 8);
                  pFVar24 = (pTVar29->AllocatorInstance).Data;
                  lVar18 = (longlong)iVar13 * 0x40;
                  *(longlong *)(pFVar24 + lVar18) = *(longlong *)pFVar32;
                  *(longlong *)(pFVar24 + lVar18 + 8) = lVar23;
                  lVar23 = *(longlong *)(pFVar32 + 0x18);
                  *(longlong *)(pFVar24 + lVar18 + 0x10) = *(longlong *)(pFVar32 + 0x10);
                  *(longlong *)(pFVar24 + lVar18 + 0x10 + 8) = lVar23;
                  lVar23 = *(longlong *)(pFVar32 + 0x28);
                  *(longlong *)(pFVar24 + lVar18 + 0x20) = *(longlong *)(pFVar32 + 0x20);
                  *(longlong *)(pFVar24 + lVar18 + 0x20 + 8) = lVar23;
                  pFVar26 = pFVar32 + 0x30;
                  lVar23 = *(longlong *)(pFVar32 + 0x38);
                  pFVar32 = pFVar32 + 0x40;
                  *(longlong *)(pFVar24 + lVar18 + 0x30) = *(longlong *)pFVar26;
                  *(longlong *)(pFVar24 + lVar18 + 0x30 + 8) = lVar23;
                  FVar25 = local_1e8;
                  goto LAB_147f36094;
                }
                if (*(longlong *)pFVar26 == *(longlong *)pFVar32) break;
                pFVar26 = pFVar26 + 0x40;
              }
              lVar23 = *(longlong *)(pFVar32 + 0x18);
              *(longlong *)(pFVar26 + 0x10) = *(longlong *)(pFVar32 + 0x10);
              *(longlong *)(pFVar26 + 0x18) = lVar23;
              pFVar24 = pFVar32 + 0x20;
              lVar23 = *(longlong *)(pFVar32 + 0x28);
              pFVar32 = pFVar32 + 0x40;
              *(longlong *)(pFVar26 + 0x20) = *(longlong *)pFVar24;
              *(longlong *)(pFVar26 + 0x28) = lVar23;
              FVar25 = local_1e8;
              goto LAB_147f36094;
            }
            MergeParameterOverrides<FTextureParameterValue>
                      (&local_1d0->TextureParameterValues,
                       (TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar25 + 0x1d0));
            MergeParameterOverrides<FRuntimeVirtualTextureParameterValue>
                      (&this->RuntimeVirtualTextureParameterValues,
                       (TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar25 + 0x200));
            MergeParameterOverrides<FSparseVolumeTextureParameterValue>
                      (&this->SparseVolumeTextureParameterValues,
                       (TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar25 + 0x210));
            MergeParameterOverrides<FParameterCollectionParameterValue>
                      (&this->ParameterCollectionParameterValues,
                       (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar25 + 0x1f0));
          }
        }
LAB_147f36511:
        iVar12 = iVar12 + -1;
        lVar23 = local_1b0 + -8;
        local_1b0 = lVar23;
      } while (-1 < iVar12);
    }
    InitResources(this);
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
    }
  }
  if ((local_200 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_200 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_200 & 4) != 0) {
    FThreadStats::AddMessage(local_208,CycleScopeEnd);
  }
  local_200 = 0;
  FMemScope::~FMemScope(&local_188);
  FLLMScope::~FLLMScope(&local_1c8);
  return;
}

// DumpDebugInfo @ 147f378b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMaterialInstance::DumpDebugInfo(UMaterialInstance *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    if (this->bHasStaticPermutationResource == 0) {
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
    }
    else {
      pFVar3 = (this->StaticPermutationMaterialResources).AllocatorInstance.Data;
      iVar2 = (this->StaticPermutationMaterialResources).ArrayNum;
      pFVar1 = pFVar3 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->StaticPermutationMaterialResources).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMaterialResource_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar3 == pFVar1) break;
        FMaterial::DumpDebugInfo(*(FMaterial **)pFVar3,param_1);
        pFVar3 = pFVar3 + 8;
      }
    }
  }
  return;
}

// Equivalent @ 147f37bb0

bool __thiscall UMaterialInstance::Equivalent(UMaterialInstance *this,UMaterialInstance *param_1)

{
  int iVar1;
  FTextureParameterValue *pFVar2;
  FScriptContainerElement *pFVar3;
  FRuntimeVirtualTextureParameterValue *pFVar4;
  FSparseVolumeTextureParameterValue *pFVar5;
  FFontParameterValue *pFVar6;
  FParameterCollectionParameterValue *pFVar7;
  bool bVar8;
  FStaticParameterSet *pFVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  void *local_c8 [2];
  FMaterialLayersFunctionsRuntimeData local_b8;
  void *local_78 [2];
  FMaterialLayersFunctionsRuntimeData local_68;
  
  if ((((((this->Parent).field0_0x0.DebugPtr == (param_1->Parent).field0_0x0.DebugPtr) &&
        ((this->PhysMaterial).field0_0x0.DebugPtr == (param_1->PhysMaterial).field0_0x0.DebugPtr))
       && (((param_1->field_0x178 ^ this->field_0x178) & 2) == 0)) &&
      ((bVar8 = FMaterialInstanceBasePropertyOverrides::operator!=
                          (&this->BasePropertyOverrides,&param_1->BasePropertyOverrides), !bVar8 &&
       ((this->NaniteOverrideMaterial).bEnableOverride ==
        (param_1->NaniteOverrideMaterial).bEnableOverride)))) &&
     (((this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr ==
       (param_1->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr &&
      (iVar1 = (this->TextureParameterValues).ArrayNum,
      iVar1 == (param_1->TextureParameterValues).ArrayNum)))) {
    if (iVar1 != 0) {
      pFVar2 = (FTextureParameterValue *)(this->TextureParameterValues).AllocatorInstance.Data;
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = iVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar1,0,&local_d8,iVar1,&local_cc);
      ConstructItems<FTextureParameterValue,FTextureParameterValue,int>(local_d8.Data,pFVar2,iVar1);
      iVar1 = (param_1->TextureParameterValues).ArrayNum;
      pFVar2 = (FTextureParameterValue *)(param_1->TextureParameterValues).AllocatorInstance.Data;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = iVar1;
      if (iVar1 == 0) {
        local_dc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar1,0,&local_e8,iVar1,&local_dc);
        ConstructItems<FTextureParameterValue,FTextureParameterValue,int>
                  (local_e8.Data,pFVar2,iVar1);
      }
      AlgoImpl::
      IntroSortInternal<FTextureParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FTextureParameterValue,_CompareValueArraysByExpressionGUID<FTextureParameterValue>_::__l2::<lambda_1>_>_>
                ((FTextureParameterValue *)local_d8.Data,local_d0,local_res8[0],
                 (<lambda_1> *)local_res8);
      AlgoImpl::
      IntroSortInternal<FTextureParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FTextureParameterValue,_CompareValueArraysByExpressionGUID<FTextureParameterValue>_::__l2::<lambda_2>_>_>
                ((FTextureParameterValue *)local_e8.Data,local_e0,local_res8[0],
                 (<lambda_2> *)local_res8);
      FVar10.Data = local_d8.Data;
      FVar12.Data = local_e8.Data;
      if ((local_d0 == local_e0) &&
         (bVar8 = CompareItems<FTextureParameterValue,int>
                            ((FTextureParameterValue *)local_d8.Data,
                             (FTextureParameterValue *)local_e8.Data,local_d0), bVar8)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if ((FDoubleVectorParameterValue *)FVar12.Data != (FDoubleVectorParameterValue *)0x0) {
        FMemory::Free(FVar12.Data);
        FVar10.Data = local_d8.Data;
      }
      if ((FDoubleVectorParameterValue *)FVar10.Data != (FDoubleVectorParameterValue *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      if (!bVar8) {
        return false;
      }
    }
    iVar1 = (this->ScalarParameterValues).ArrayNum;
    if (iVar1 == (param_1->ScalarParameterValues).ArrayNum) {
      if (iVar1 != 0) {
        pFVar3 = (this->ScalarParameterValues).AllocatorInstance.Data;
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,iVar1,0,&local_e8,iVar1,&local_dc);
        memcpy(local_e8.Data,pFVar3,(longlong)iVar1 * 0x24);
        local_d0 = (param_1->ScalarParameterValues).ArrayNum;
        lVar11 = (longlong)local_d0;
        pFVar3 = (param_1->ScalarParameterValues).AllocatorInstance.Data;
        local_d8.Data = (FScriptContainerElement *)0x0;
        if (local_d0 == 0) {
          local_cc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,local_d0,0,&local_d8,local_d0,&local_cc);
          memcpy(local_d8.Data,pFVar3,lVar11 * 0x24);
        }
        AlgoImpl::
        IntroSortInternal<FScalarParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FScalarParameterValue,_CompareValueArraysByExpressionGUID<FScalarParameterValue>_::__l2::<lambda_1>_>_>
                  ((FScalarParameterValue *)local_e8.Data,local_e0,local_res8[0],
                   (<lambda_1> *)local_res8);
        AlgoImpl::
        IntroSortInternal<FScalarParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FScalarParameterValue,_CompareValueArraysByExpressionGUID<FScalarParameterValue>_::__l2::<lambda_2>_>_>
                  ((FScalarParameterValue *)local_d8.Data,local_d0,local_res8[0],
                   (<lambda_2> *)local_res8);
        FVar10.Data = local_d8.Data;
        FVar12.Data = local_e8.Data;
        if ((local_e0 == local_d0) &&
           (bVar8 = CompareItems<FScalarParameterValue,int>
                              ((FScalarParameterValue *)local_e8.Data,
                               (FScalarParameterValue *)local_d8.Data,local_e0), bVar8)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if ((FDoubleVectorParameterValue *)FVar10.Data != (FDoubleVectorParameterValue *)0x0) {
          FMemory::Free(FVar10.Data);
          FVar12.Data = local_e8.Data;
        }
        if ((FDoubleVectorParameterValue *)FVar12.Data != (FDoubleVectorParameterValue *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        if (!bVar8) {
          return false;
        }
      }
      iVar1 = (this->VectorParameterValues).ArrayNum;
      if (iVar1 == (param_1->VectorParameterValues).ArrayNum) {
        if (iVar1 != 0) {
          pFVar3 = (this->VectorParameterValues).AllocatorInstance.Data;
          local_e8.Data = (FScriptContainerElement *)0x0;
          local_e0 = iVar1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,4,iVar1,0,&local_e8,iVar1,&local_dc);
          memcpy(local_e8.Data,pFVar3,(longlong)iVar1 * 0x30);
          local_d0 = (param_1->VectorParameterValues).ArrayNum;
          lVar11 = (longlong)local_d0;
          pFVar3 = (param_1->VectorParameterValues).AllocatorInstance.Data;
          local_d8.Data = (FScriptContainerElement *)0x0;
          if (local_d0 == 0) {
            local_cc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,4,local_d0,0,&local_d8,local_d0,&local_cc);
            memcpy(local_d8.Data,pFVar3,lVar11 * 0x30);
          }
          AlgoImpl::
          IntroSortInternal<FVectorParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FVectorParameterValue,_CompareValueArraysByExpressionGUID<FVectorParameterValue>_::__l2::<lambda_1>_>_>
                    ((FVectorParameterValue *)local_e8.Data,local_e0,local_res8[0],
                     (<lambda_1> *)local_res8);
          AlgoImpl::
          IntroSortInternal<FVectorParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FVectorParameterValue,_CompareValueArraysByExpressionGUID<FVectorParameterValue>_::__l2::<lambda_2>_>_>
                    ((FVectorParameterValue *)local_d8.Data,local_d0,local_res8[0],
                     (<lambda_2> *)local_res8);
          FVar10.Data = local_d8.Data;
          FVar12.Data = local_e8.Data;
          if ((local_e0 == local_d0) &&
             (bVar8 = CompareItems<FVectorParameterValue,int>
                                ((FVectorParameterValue *)local_e8.Data,
                                 (FVectorParameterValue *)local_d8.Data,local_e0), bVar8)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((FDoubleVectorParameterValue *)FVar10.Data != (FDoubleVectorParameterValue *)0x0) {
            FMemory::Free(FVar10.Data);
            FVar12.Data = local_e8.Data;
          }
          if ((FDoubleVectorParameterValue *)FVar12.Data != (FDoubleVectorParameterValue *)0x0) {
            FMemory::Free(FVar12.Data);
          }
          if (!bVar8) {
            return false;
          }
        }
        iVar1 = (this->DoubleVectorParameterValues).ArrayNum;
        if (iVar1 == (param_1->DoubleVectorParameterValues).ArrayNum) {
          if (iVar1 != 0) {
            pFVar3 = (this->DoubleVectorParameterValues).AllocatorInstance.Data;
            local_e8.Data = (FScriptContainerElement *)0x0;
            local_e0 = iVar1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,0x10,iVar1,0,&local_e8,iVar1,&local_dc);
            memcpy(local_e8.Data,pFVar3,(longlong)iVar1 << 6);
            local_d0 = (param_1->DoubleVectorParameterValues).ArrayNum;
            lVar11 = (longlong)local_d0;
            pFVar3 = (param_1->DoubleVectorParameterValues).AllocatorInstance.Data;
            local_d8.Data = (FScriptContainerElement *)0x0;
            if (local_d0 == 0) {
              local_cc = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,local_d0,0,&local_d8,local_d0,&local_cc);
              memcpy(local_d8.Data,pFVar3,lVar11 << 6);
            }
            AlgoImpl::
            IntroSortInternal<FDoubleVectorParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FDoubleVectorParameterValue,_CompareValueArraysByExpressionGUID<FDoubleVectorParameterValue>_::__l2::<lambda_1>_>_>
                      ((FDoubleVectorParameterValue *)local_e8.Data,local_e0,local_res8[0],
                       (<lambda_1> *)local_res8);
            AlgoImpl::
            IntroSortInternal<FDoubleVectorParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FDoubleVectorParameterValue,_CompareValueArraysByExpressionGUID<FDoubleVectorParameterValue>_::__l2::<lambda_2>_>_>
                      ((FDoubleVectorParameterValue *)local_d8.Data,local_d0,local_res8[0],
                       (<lambda_2> *)local_res8);
            FVar10.Data = local_d8.Data;
            FVar12.Data = local_e8.Data;
            if ((local_e0 == local_d0) &&
               (bVar8 = CompareItems<FDoubleVectorParameterValue,int>
                                  ((FDoubleVectorParameterValue *)local_e8.Data,
                                   (FDoubleVectorParameterValue *)local_d8.Data,local_e0), bVar8)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            if ((FDoubleVectorParameterValue *)FVar10.Data != (FDoubleVectorParameterValue *)0x0) {
              FMemory::Free(FVar10.Data);
              FVar12.Data = local_e8.Data;
            }
            if ((FDoubleVectorParameterValue *)FVar12.Data != (FDoubleVectorParameterValue *)0x0) {
              FMemory::Free(FVar12.Data);
            }
            if (!bVar8) {
              return false;
            }
          }
          iVar1 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
          if (iVar1 == (param_1->RuntimeVirtualTextureParameterValues).ArrayNum) {
            if (iVar1 != 0) {
              pFVar4 = (FRuntimeVirtualTextureParameterValue *)
                       (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
              local_e8.Data = (FScriptContainerElement *)0x0;
              local_e0 = iVar1;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,iVar1,0,&local_e8,iVar1,&local_dc);
              ConstructItems<FRuntimeVirtualTextureParameterValue,FRuntimeVirtualTextureParameterValue,int>
                        (local_e8.Data,pFVar4,iVar1);
              iVar1 = (param_1->RuntimeVirtualTextureParameterValues).ArrayNum;
              pFVar4 = (FRuntimeVirtualTextureParameterValue *)
                       (param_1->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
              local_d8.Data = (FScriptContainerElement *)0x0;
              local_d0 = iVar1;
              if (iVar1 == 0) {
                local_cc = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,iVar1,0,&local_d8,iVar1,&local_cc);
                ConstructItems<FRuntimeVirtualTextureParameterValue,FRuntimeVirtualTextureParameterValue,int>
                          (local_d8.Data,pFVar4,iVar1);
              }
              AlgoImpl::
              IntroSortInternal<FRuntimeVirtualTextureParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FRuntimeVirtualTextureParameterValue,_CompareValueArraysByExpressionGUID<FRuntimeVirtualTextureParameterValue>_::__l2::<lambda_1>_>_>
                        ((FRuntimeVirtualTextureParameterValue *)local_e8.Data,local_e0,
                         local_res8[0],(<lambda_1> *)local_res8);
              AlgoImpl::
              IntroSortInternal<FRuntimeVirtualTextureParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FRuntimeVirtualTextureParameterValue,_CompareValueArraysByExpressionGUID<FRuntimeVirtualTextureParameterValue>_::__l2::<lambda_2>_>_>
                        ((FRuntimeVirtualTextureParameterValue *)local_d8.Data,local_d0,
                         local_res8[0],(<lambda_2> *)local_res8);
              FVar10.Data = local_d8.Data;
              FVar12.Data = local_e8.Data;
              if ((local_e0 == local_d0) &&
                 (bVar8 = CompareItems<FRuntimeVirtualTextureParameterValue,int>
                                    ((FRuntimeVirtualTextureParameterValue *)local_e8.Data,
                                     (FRuntimeVirtualTextureParameterValue *)local_d8.Data,local_e0)
                 , bVar8)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              if ((FDoubleVectorParameterValue *)FVar10.Data != (FDoubleVectorParameterValue *)0x0)
              {
                FMemory::Free(FVar10.Data);
                FVar12.Data = local_e8.Data;
              }
              if ((FDoubleVectorParameterValue *)FVar12.Data != (FDoubleVectorParameterValue *)0x0)
              {
                FMemory::Free(FVar12.Data);
              }
              if (!bVar8) {
                return false;
              }
            }
            iVar1 = (this->SparseVolumeTextureParameterValues).ArrayNum;
            if (iVar1 == (param_1->SparseVolumeTextureParameterValues).ArrayNum) {
              if (iVar1 != 0) {
                pFVar5 = (FSparseVolumeTextureParameterValue *)
                         (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
                local_e8.Data = (FScriptContainerElement *)0x0;
                local_e0 = iVar1;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,iVar1,0,&local_e8,iVar1,&local_dc);
                ConstructItems<FSparseVolumeTextureParameterValue,FSparseVolumeTextureParameterValue,int>
                          (local_e8.Data,pFVar5,iVar1);
                iVar1 = (param_1->SparseVolumeTextureParameterValues).ArrayNum;
                pFVar5 = (FSparseVolumeTextureParameterValue *)
                         (param_1->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
                local_d8.Data = (FScriptContainerElement *)0x0;
                local_d0 = iVar1;
                if (iVar1 == 0) {
                  local_cc = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,iVar1,0,&local_d8,iVar1,&local_cc);
                  ConstructItems<FSparseVolumeTextureParameterValue,FSparseVolumeTextureParameterValue,int>
                            (local_d8.Data,pFVar5,iVar1);
                }
                AlgoImpl::
                IntroSortInternal<FSparseVolumeTextureParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FSparseVolumeTextureParameterValue,_CompareValueArraysByExpressionGUID<FSparseVolumeTextureParameterValue>_::__l2::<lambda_1>_>_>
                          ((FSparseVolumeTextureParameterValue *)local_e8.Data,local_e0,
                           local_res8[0],(<lambda_1> *)local_res8);
                AlgoImpl::
                IntroSortInternal<FSparseVolumeTextureParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FSparseVolumeTextureParameterValue,_CompareValueArraysByExpressionGUID<FSparseVolumeTextureParameterValue>_::__l2::<lambda_2>_>_>
                          ((FSparseVolumeTextureParameterValue *)local_d8.Data,local_d0,
                           local_res8[0],(<lambda_2> *)local_res8);
                FVar10.Data = local_d8.Data;
                FVar12.Data = local_e8.Data;
                if ((local_e0 == local_d0) &&
                   (bVar8 = CompareItems<FSparseVolumeTextureParameterValue,int>
                                      ((FSparseVolumeTextureParameterValue *)local_e8.Data,
                                       (FSparseVolumeTextureParameterValue *)local_d8.Data,local_e0)
                   , bVar8)) {
                  bVar8 = true;
                }
                else {
                  bVar8 = false;
                }
                if ((FDoubleVectorParameterValue *)FVar10.Data != (FDoubleVectorParameterValue *)0x0
                   ) {
                  FMemory::Free(FVar10.Data);
                  FVar12.Data = local_e8.Data;
                }
                if ((FDoubleVectorParameterValue *)FVar12.Data != (FDoubleVectorParameterValue *)0x0
                   ) {
                  FMemory::Free(FVar12.Data);
                }
                if (!bVar8) {
                  return false;
                }
              }
              iVar1 = (this->FontParameterValues).ArrayNum;
              if (iVar1 == (param_1->FontParameterValues).ArrayNum) {
                if (iVar1 != 0) {
                  pFVar6 = (FFontParameterValue *)(this->FontParameterValues).AllocatorInstance.Data
                  ;
                  local_e8.Data = (FScriptContainerElement *)0x0;
                  local_e0 = iVar1;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,iVar1,0,&local_e8,iVar1,&local_dc);
                  ConstructItems<FFontParameterValue,FFontParameterValue,int>
                            (local_e8.Data,pFVar6,iVar1);
                  iVar1 = (param_1->FontParameterValues).ArrayNum;
                  pFVar6 = (FFontParameterValue *)
                           (param_1->FontParameterValues).AllocatorInstance.Data;
                  local_d8.Data = (FScriptContainerElement *)0x0;
                  local_d0 = iVar1;
                  if (iVar1 == 0) {
                    local_cc = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x30,8,iVar1,0,&local_d8,iVar1,&local_cc);
                    ConstructItems<FFontParameterValue,FFontParameterValue,int>
                              (local_d8.Data,pFVar6,iVar1);
                  }
                  AlgoImpl::
                  IntroSortInternal<FFontParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FFontParameterValue,_CompareValueArraysByExpressionGUID<FFontParameterValue>_::__l2::<lambda_1>_>_>
                            ((FFontParameterValue *)local_e8.Data,local_e0,local_res8[0],
                             (<lambda_1> *)local_res8);
                  AlgoImpl::
                  IntroSortInternal<FFontParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FFontParameterValue,_CompareValueArraysByExpressionGUID<FFontParameterValue>_::__l2::<lambda_2>_>_>
                            ((FFontParameterValue *)local_d8.Data,local_d0,local_res8[0],
                             (<lambda_2> *)local_res8);
                  FVar10.Data = local_d8.Data;
                  FVar12.Data = local_e8.Data;
                  if ((local_e0 == local_d0) &&
                     (bVar8 = CompareItems<FFontParameterValue,int>
                                        ((FFontParameterValue *)local_e8.Data,
                                         (FFontParameterValue *)local_d8.Data,local_e0), bVar8)) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  if ((FDoubleVectorParameterValue *)FVar10.Data !=
                      (FDoubleVectorParameterValue *)0x0) {
                    FMemory::Free(FVar10.Data);
                    FVar12.Data = local_e8.Data;
                  }
                  if ((FDoubleVectorParameterValue *)FVar12.Data !=
                      (FDoubleVectorParameterValue *)0x0) {
                    FMemory::Free(FVar12.Data);
                  }
                  if (!bVar8) {
                    return false;
                  }
                }
                iVar1 = (this->ParameterCollectionParameterValues).ArrayNum;
                if (iVar1 == (param_1->ParameterCollectionParameterValues).ArrayNum) {
                  if (iVar1 != 0) {
                    pFVar7 = (FParameterCollectionParameterValue *)
                             (this->ParameterCollectionParameterValues).AllocatorInstance.Data;
                    local_e8.Data = (FScriptContainerElement *)0x0;
                    local_e0 = iVar1;
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,iVar1,0,&local_e8,iVar1,&local_dc);
                    ConstructItems<FParameterCollectionParameterValue,FParameterCollectionParameterValue,int>
                              (local_e8.Data,pFVar7,iVar1);
                    iVar1 = (param_1->ParameterCollectionParameterValues).ArrayNum;
                    pFVar7 = (FParameterCollectionParameterValue *)
                             (param_1->ParameterCollectionParameterValues).AllocatorInstance.Data;
                    local_d8.Data = (FScriptContainerElement *)0x0;
                    local_d0 = iVar1;
                    if (iVar1 == 0) {
                      local_cc = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x28,8,iVar1,0,&local_d8,iVar1,&local_cc);
                      ConstructItems<FParameterCollectionParameterValue,FParameterCollectionParameterValue,int>
                                (local_d8.Data,pFVar7,iVar1);
                    }
                    AlgoImpl::
                    IntroSortInternal<FParameterCollectionParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FParameterCollectionParameterValue,_CompareValueArraysByExpressionGUID<FParameterCollectionParameterValue>_::__l2::<lambda_1>_>_>
                              ((FParameterCollectionParameterValue *)local_e8.Data,local_e0,
                               local_res8[0],(<lambda_1> *)local_res8);
                    AlgoImpl::
                    IntroSortInternal<FParameterCollectionParameterValue,int,FIdentityFunctor,TDereferenceWrapper<FParameterCollectionParameterValue,_CompareValueArraysByExpressionGUID<FParameterCollectionParameterValue>_::__l2::<lambda_2>_>_>
                              ((FParameterCollectionParameterValue *)local_d8.Data,local_d0,
                               local_res8[0],(<lambda_2> *)local_res8);
                    FVar10.Data = local_d8.Data;
                    FVar12.Data = local_e8.Data;
                    if ((local_e0 == local_d0) &&
                       (bVar8 = CompareItems<FParameterCollectionParameterValue,int>
                                          ((FParameterCollectionParameterValue *)local_e8.Data,
                                           (FParameterCollectionParameterValue *)local_d8.Data,
                                           local_e0), bVar8)) {
                      bVar8 = true;
                    }
                    else {
                      bVar8 = false;
                    }
                    if ((FDoubleVectorParameterValue *)FVar10.Data !=
                        (FDoubleVectorParameterValue *)0x0) {
                      FMemory::Free(FVar10.Data);
                      FVar12.Data = local_e8.Data;
                    }
                    if ((FDoubleVectorParameterValue *)FVar12.Data !=
                        (FDoubleVectorParameterValue *)0x0) {
                      FMemory::Free(FVar12.Data);
                    }
                    if (!bVar8) {
                      return false;
                    }
                  }
                  GetStaticParameters(this,(FStaticParameterSet *)local_c8);
                  pFVar9 = GetStaticParameters(param_1,(FStaticParameterSet *)local_78);
                  bVar8 = FStaticParameterSet::Equivalent((FStaticParameterSet *)local_c8,pFVar9);
                  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
                            (&local_68);
                  if (local_78[0] != (void *)0x0) {
                    FMemory::Free(local_78[0]);
                  }
                  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
                            (&local_b8);
                  if (local_c8[0] != (void *)0x0) {
                    FMemory::Free(local_c8[0]);
                    return bVar8;
                  }
                  return bVar8;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// FinishCacheUniformExpressions @ 147f390d0

void __thiscall UMaterialInstance::FinishCacheUniformExpressions(UMaterialInstance *this)

{
  this->bCachingUniformExpressions = false;
  return;
}

// FinishDestroy @ 147f390e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialInstance::FinishDestroy(UMaterialInstance *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  FMaterialInstanceCachedData *pFVar5;
  FMaterialCachedExpressionData *this_00;
  code *pcVar6;
  bool bVar7;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [16];
  code *local_a8 [2];
  undefined **local_98;
  FMaterialInstanceResource *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FMaterialInstanceResource *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (((this->_padding_ & 0x10) == 0) && (this->Resource != (FMaterialInstanceResource *)0x0)) {
    local_80 = (undefined ***)0x0;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterialInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMaterialInstanceResource::GameThread_Destroy'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_90 = this->Resource;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialInstanceResource::GameThread_Destroy_::__l2::TSTR_FDestroyMaterialInstanceResourceCommand179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterialInstanceResource::GameThread_Destroy'::__l2::TSTR_FDestroyMaterialInstanceResourceCommand179>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar8);
      uVar10 = (ulonglong)local_48;
      if (2 < uVar10) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar9 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar9 = local_50;
          }
          (*(code *)(*pppuVar9)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar9 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar9 = local_80;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    this->Resource = (FMaterialInstanceResource *)0x0;
  }
  pFVar11 = (this->StaticPermutationMaterialResources).AllocatorInstance.Data;
  iVar3 = (this->StaticPermutationMaterialResources).ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->StaticPermutationMaterialResources).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8);
    }
    if (pFVar11 == pFVar2) break;
    puVar4 = *(undefined8 **)pFVar11;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    pFVar11 = pFVar11 + 8;
  }
  piVar1 = &(this->StaticPermutationMaterialResources).ArrayMax;
  (this->StaticPermutationMaterialResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->StaticPermutationMaterialResources).AllocatorInstance,0,piVar1);
  }
  pFVar5 = (this->CachedData).Ptr;
  if (pFVar5 != (FMaterialInstanceCachedData *)0x0) {
    (this->CachedData).Ptr = (FMaterialInstanceCachedData *)0x0;
    pFVar2 = (pFVar5->ParentLayerIndexRemap).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar5,0x10);
  }
  this_00 = (FMaterialCachedExpressionData *)this->_padding_;
  if (this_00 != (FMaterialCachedExpressionData *)0x0) {
    this->_padding_ = 0;
    FMaterialCachedExpressionData::~FMaterialCachedExpressionData(this_00);
    ::operator_delete(this_00,0x4e0);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAllParametersOfType @ 147f3d360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::GetAllParametersOfType
          (UMaterialInstance *this,EMaterialParameterType param_1,
          TMap<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
          *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FName FVar4;
  ForElementType<int> FVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FMaterialInstanceCachedData *pFVar12;
  ForElementType<int> FVar13;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_> FVar14;
  FName *pFVar15;
  undefined1 *puVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  FMaterialInstanceCachedData *pFVar21;
  ForElementType<FSetElementId> FVar22;
  ForElementType<FSetElementId> FVar23;
  FName *pFVar24;
  FMaterialParameterInfo *pFVar25;
  longlong lVar26;
  FName *pFVar27;
  int iVar28;
  FMaterialParameterInfo *this_00;
  ForElementType<unsigned_int> FVar29;
  uint uVar30;
  uint uVar31;
  FName *pFVar32;
  longlong lVar33;
  undefined1 auStackY_758 [32];
  int local_704;
  uint local_700;
  longlong local_6f8;
  longlong local_6f0;
  FMaterialParameterInfo local_6e8;
  FMaterialParameterInfo *local_6d8;
  longlong local_6d0;
  FMaterialParameterInfo local_6c8;
  undefined8 local_6b8;
  TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
  *local_6b0;
  undefined8 local_6a8;
  FMaterialParameterInfo local_69c;
  ForElementType<int> local_688;
  int iStack_680;
  undefined4 uStack_67c;
  FSparseArrayAllocationInfo local_678;
  ForElementType<int> local_668;
  int iStack_660;
  undefined4 uStack_65c;
  ForElementType<int> local_658;
  int iStack_650;
  undefined4 uStack_64c;
  ForElementType<int> local_648;
  int iStack_640;
  undefined4 uStack_63c;
  ForElementType<int> local_638;
  int iStack_630;
  undefined4 uStack_62c;
  ForElementType<int> local_628;
  int iStack_620;
  undefined4 uStack_61c;
  ForElementType<int> local_618;
  int iStack_610;
  undefined4 uStack_60c;
  ForElementType<int> local_608;
  int iStack_600;
  undefined4 uStack_5fc;
  ForElementType<int> local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  ForElementType<int> local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  FScriptContainerElement *local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  TArrayView<int_const_,int> local_5c8;
  TArrayView<int_const_,int> local_5b8;
  TArrayView<int_const_,int> local_5a8;
  TArrayView<int_const_,int> local_598;
  TArrayView<int_const_,int> local_588;
  TArrayView<int_const_,int> local_578;
  TArrayView<int_const_,int> local_568;
  TArrayView<int_const_,int> local_558;
  TArrayView<int_const_,int> local_548;
  TArrayView<int_const_,int> local_538;
  TArrayView<int_const_,int> local_528;
  uint local_518;
  uint uStack_514;
  uint uStack_510;
  uint uStack_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8;
  uint7 uStack_4f7;
  FName local_4f0;
  FName FStack_4e8;
  FName local_4e0;
  FName FStack_4d8;
  undefined1 local_4d0;
  undefined7 uStack_4cf;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_4c8;
  undefined8 local_478;
  FMaterialCachedExpressionData *pFStack_470;
  undefined1 local_468 [128];
  undefined1 *local_3e8;
  int local_3e0;
  undefined4 local_3dc;
  undefined1 local_3d8 [768];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_> local_d8;
  int local_d0 [2];
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_c8;
  int iStack_b0;
  int iStack_ac;
  undefined1 local_a8 [64];
  ForElementType<FSetElementId> local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_758;
  uVar30 = 0;
  local_3e8 = (undefined1 *)0x0;
  local_3e0 = 0;
  local_3dc = 0x10;
  local_478 = 0;
  pFStack_470 = (FMaterialCachedExpressionData *)0x0;
  local_6b0 = (TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
               *)param_2;
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_478);
  TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
           *)param_2);
  FMaterialCachedExpressionData::GetAllParametersOfType(pFStack_470,param_1,param_2);
  pFVar21 = (this->CachedData).Ptr;
  local_4c8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_4c8.ArrayMax = 0x10;
  pFVar12 = &FMaterialInstanceCachedData::EmptyData;
  if (pFVar21 != (FMaterialInstanceCachedData *)0x0) {
    pFVar12 = pFVar21;
  }
  uVar10 = (pFVar12->ParentLayerIndexRemap).ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  local_4c8.ArrayNum = 0;
  if (uVar10 != 0x10) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar10,&local_4c8.AllocatorInstance,0,&local_4c8.ArrayMax);
  }
  local_704 = 0;
  while( true ) {
    pFVar21 = (this->CachedData).Ptr;
    if (pFVar21 == (FMaterialInstanceCachedData *)0x0) {
      pFVar21 = &FMaterialInstanceCachedData::EmptyData;
    }
    if ((pFVar21->ParentLayerIndexRemap).ArrayNum <= local_704) break;
    FVar13 = (ForElementType<int>)&local_4c8;
    if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_4c8.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar13 <= &local_704) {
      FVar13 = (ForElementType<int>)&local_4c8;
      if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
      }
      if ((&local_704 < (int *)((longlong)FVar13 + (longlong)local_4c8.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_4c8.ArrayNum == local_4c8.ArrayMax) {
      local_4c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                     (0x404,&local_4c8.AllocatorInstance,&local_4c8.ArrayMax);
    }
    lVar18 = (longlong)local_4c8.ArrayNum;
    FVar13 = (ForElementType<int>)&local_4c8;
    if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_4c8.AllocatorInstance.SecondaryData;
    }
    local_4c8.ArrayNum = local_4c8.ArrayNum + 1;
    *(int *)((longlong)FVar13 + lVar18 * 4) = local_704;
    local_704 = local_704 + 1;
  }
  local_c8.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_c8.MaxBits = _UNK_150631d74;
  iStack_b0 = _UNK_150631d78;
  iStack_ac = _UNK_150631d7c;
  local_d8 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)0x0;
  local_d0[0] = 0;
  local_d0[1] = 0x20;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_700 = 0;
  if (0 < local_3e0) {
    local_6f0 = 0;
    FVar13 = local_4c8.AllocatorInstance.SecondaryData;
    do {
      lVar18 = local_6f0;
      pFVar32 = (FName *)0x0;
      uVar10 = 0;
      if ((int)uVar30 < local_3e0) {
        uVar10 = ~uVar30 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar13 = local_4c8.AllocatorInstance.SecondaryData, bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar11 = local_4c8.ArrayNum;
      puVar16 = local_468;
      if (local_3e8 != (undefined1 *)0x0) {
        puVar16 = local_3e8;
      }
      bVar6 = uVar30 == 0;
      lVar33 = *(longlong *)(puVar16 + lVar18 * 8);
      local_6f8 = lVar33;
      switch(param_1) {
      case Scalar:
        local_688 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_688 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), FVar13 = local_4c8.AllocatorInstance.SecondaryData, bVar6
           )) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar5 = local_688;
        iStack_680 = iVar11;
        iVar8 = *(int *)(local_6f8 + 0x1a8);
        lVar18 = local_6f0;
        lVar33 = local_6f8;
        if (0 < iVar8) {
          uVar2._4_4_ = uStack_67c;
          uVar2._0_4_ = iVar11;
          local_6d0 = 0;
          lVar26 = local_6f8;
          do {
            lVar18 = local_6d0;
            pFVar25 = (FMaterialParameterInfo *)0x0;
            uVar10 = (uint)pFVar32;
            uVar30 = 0;
            if ((int)uVar10 < iVar8) {
              uVar30 = ~uVar10 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            this_00 = (FMaterialParameterInfo *)(lVar18 + *(longlong *)(lVar26 + 0x1a0));
            local_6b8 = 0;
            local_6e8.Name.ComparisonIndex.Value = 0;
            local_6e8.Name.Number = 0;
            local_6e8.Association.Value = '\x02';
            local_6e8.Index = -1;
            local_5c8.DataPtr = (int *)FVar5;
            local_6d8 = this_00;
            local_5c8._8_8_ = uVar2;
            bVar6 = FMaterialParameterInfo::RemapLayerIndex(this_00,&local_5c8,&local_6e8);
            if (bVar6) {
              if (iStack_ac == 0) {
                iVar11 = UE::Core::Private::
                         ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>_>
                                   (0x18,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>
                                              *)local_3d8,local_d0,local_d0 + 1);
                iVar8 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
                        AddUninitialized(&local_c8,1);
                FVar29 = (ForElementType<unsigned_int>)&local_c8;
                if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar29 = local_c8.AllocatorInstance.SecondaryData;
                }
                bVar17 = (byte)iVar8 & 0x1f;
                if (iVar8 < 0) {
                  iVar8 = iVar8 + 0x1f;
                  bVar17 = bVar17 - 0x20;
                }
                puVar20 = (uint *)((longlong)FVar29 + (longlong)(iVar8 >> 5) * 4);
                *puVar20 = *puVar20 & ~(1 << (bVar17 & 0x1f));
              }
              else {
                iVar11 = iStack_b0;
                lVar18 = (longlong)iStack_b0;
                FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)
                         local_3d8;
                if (local_d8 !=
                    (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)0x0) {
                  FVar14 = local_d8;
                }
                iStack_ac = iStack_ac + -1;
                iStack_b0 = *(int *)((undefined1 *)((longlong)FVar14 + 4) + lVar18 * 0x18);
                if (iStack_ac != 0) {
                  *(undefined4 *)
                   ((longlong)FVar14 +
                   (longlong)*(int *)((undefined1 *)((longlong)FVar14 + 4) + lVar18 * 0x18) * 0x18)
                       = 0xffffffff;
                }
              }
              TSparseArrayBase<24,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ::AllocateIndex((TSparseArrayBase<24,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                               *)local_3d8,&local_678,iVar11);
              iVar11 = local_678.Index;
              if (local_678.Pointer != (FMaterialParameterInfo *)0x0) {
                *local_678.Pointer = local_6e8.Name;
                *(ulonglong *)((longlong)local_678.Pointer + 8) =
                     CONCAT44(local_6e8.Index,local_6e8._8_4_);
                (((FMaterialParameterInfo *)((longlong)local_678.Pointer + 0x10))->Name).
                ComparisonIndex.Value = 0xffffffff;
                pFVar25 = local_678.Pointer;
              }
              uVar30 = ::GetTypeHash(pFVar25);
              iVar8 = iStack_ac;
              if ((local_d0[0] - iStack_ac != 1) && (local_d0[0] != iStack_ac)) {
                FVar22 = (ForElementType<FSetElementId>)local_a8;
                if (local_68 != (ForElementType<FSetElementId>)0x0) {
                  FVar22 = local_68;
                }
                iVar28 = *(int *)((longlong)FVar22 + (ulonglong)(local_60 - 1 & uVar30) * 4);
                this_00 = local_6d8;
                if (iVar28 != -1) {
                  do {
                    lVar18 = (longlong)iVar28;
                    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>
                              )local_3d8;
                    if (local_d8 !=
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)
                        0x0) {
                      FVar14 = local_d8;
                    }
                    if ((((*(uint *)((longlong)FVar14 + lVar18 * 0x18) ==
                           (pFVar25->Name).ComparisonIndex.Value) &&
                         (*(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar18 * 0x18) ==
                          (pFVar25->Name).Number)) &&
                        (((undefined1 *)((longlong)FVar14 + 8))[lVar18 * 0x18] ==
                         (pFVar25->Association).Value)) &&
                       (*(int *)((undefined1 *)((longlong)FVar14 + 0xc) + lVar18 * 0x18) ==
                        pFVar25->Index)) {
                      if (iVar28 != -1) {
                        FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>
                                  )local_3d8;
                        if (local_d8 !=
                            (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>
                             )0x0) {
                          FVar14 = local_d8;
                        }
                        memmove((undefined1 *)((longlong)FVar14 + (longlong)iVar28 * 0x18),pFVar25,
                                0x10);
                        TSparseArrayBase<24,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<24,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                                    *)local_3d8,iVar11,1);
                        iVar11 = iVar28;
                      }
                      lVar26 = local_6f8;
                      this_00 = local_6d8;
                      param_2 = (TMap<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
                                 *)local_6b0;
                      iVar8 = iStack_ac;
                      if (iVar28 != -1) goto LAB_147f3da20;
                      break;
                    }
                    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>
                              )local_3d8;
                    if (local_d8 !=
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_>)
                        0x0) {
                      FVar14 = local_d8;
                    }
                    iVar28 = *(int *)((undefined1 *)((longlong)FVar14 + 0x10) + lVar18 * 0x18);
                  } while (iVar28 != -1);
                }
              }
              uVar31 = local_d0[0] - iVar8;
              uVar9 = 1;
              if (uVar31 >> 1 != 0) {
                uVar9 = uVar31 >> 1;
              }
              uVar19 = (ulonglong)(uVar9 - 1) * 2 + 1;
              lVar18 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uVar9 = 1 << ((byte)lVar18 & 0x1f);
              local_69c.Name.Number = (uint)lVar18;
              if (uVar9 < 0x10) {
                uVar9 = 0x10;
              }
              else if (uVar31 < 4) {
                uVar9 = 0x10;
              }
              if (((int)uVar31 < 1) || ((int)uVar9 <= (int)local_60)) {
                uVar30 = local_60 - 1 & uVar30;
                pFVar25[1].Name.Number = uVar30;
                FVar22 = (ForElementType<FSetElementId>)local_a8;
                if (local_68 != (ForElementType<FSetElementId>)0x0) {
                  FVar22 = local_68;
                }
                uVar19 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar30;
                pFVar25[1].Name.ComparisonIndex.Value = *(uint *)((longlong)FVar22 + uVar19 * 4);
                *(int *)((longlong)FVar22 + uVar19 * 4) = iVar11;
              }
              else {
                local_60 = uVar9;
                TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                ::Rehash((TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                          *)local_3d8);
              }
              uVar30 = ::GetTypeHash(&local_6e8);
              if (*(int *)&(local_6b0->Elements).field_0x8 !=
                  *(int *)&(local_6b0->Elements).field_0x34) {
                FVar22 = (local_6b0->Hash).SecondaryData;
                FVar23 = (ForElementType<FSetElementId>)&local_6b0->Hash;
                if (FVar22 != (ForElementType<FSetElementId>)0x0) {
                  FVar23 = FVar22;
                }
                iVar11 = *(int *)((longlong)FVar23 +
                                 (ulonglong)(local_6b0->HashSize - 1U & uVar30) * 4);
                if (iVar11 != -1) {
                  do {
                    lVar18 = *(longlong *)&local_6b0->Elements + (longlong)iVar11 * 0x48;
                    if (((*(uint *)(*(longlong *)&local_6b0->Elements + (longlong)iVar11 * 0x48) ==
                          local_6e8.Name.ComparisonIndex.Value) &&
                        (*(uint *)(lVar18 + 4) == local_6e8.Name.Number)) &&
                       ((*(uchar *)(lVar18 + 8) == local_6e8.Association.Value &&
                        (*(int *)(lVar18 + 0xc) == local_6e8.Index)))) {
                      if (iVar11 != -1) goto LAB_147f3db52;
                      break;
                    }
                    iVar11 = *(int *)(lVar18 + 0x40);
                  } while (iVar11 != -1);
                }
              }
              lVar18 = 0;
LAB_147f3db52:
              puVar20 = (uint *)(lVar18 + 0x10);
              if (lVar18 == 0) {
                puVar20 = (uint *)0x0;
              }
              param_2 = (TMap<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
                         *)local_6b0;
              if (puVar20 != (uint *)0x0) {
                local_518 = this_00[1].Name.ComparisonIndex.Value;
                local_4f8 = 0;
                *puVar20 = local_518;
                puVar20[1] = uStack_514;
                puVar20[2] = uStack_510;
                puVar20[3] = uStack_50c;
                *(undefined8 *)(puVar20 + 4) = local_508;
                *(undefined8 *)(puVar20 + 6) = uStack_500;
                *(ulonglong *)(puVar20 + 8) = (ulonglong)uStack_4f7 << 8;
              }
            }
LAB_147f3da20:
            pFVar32 = (FName *)(ulonglong)(uVar10 + 1);
            iVar8 = *(int *)(lVar26 + 0x1a8);
            local_6d0 = local_6d0 + 0x24;
            lVar18 = local_6f0;
            FVar13 = local_4c8.AllocatorInstance.SecondaryData;
            lVar33 = local_6f8;
            uVar30 = local_700;
          } while ((int)(uVar10 + 1) < iVar8);
        }
        break;
      case Vector:
        local_668 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_668 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_660 = iVar11;
        local_5b8._12_4_ = uStack_65c;
        local_5b8.ArrayNum = iVar11;
        local_5b8.DataPtr = (int *)local_668;
        GameThread_ApplyParameterOverrides<FVectorParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FVectorParameterValue,TSizedDefaultAllocator<32>_> *)(lVar33 + 0x1b0),
                   &local_5b8,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case DoubleVector:
        local_658 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_658 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), FVar13 = local_4c8.AllocatorInstance.SecondaryData, bVar6
           )) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar5 = local_658;
        iVar8 = *(int *)(lVar33 + 0x1c8);
        iStack_650 = iVar11;
        if (0 < iVar8) {
          uVar3._4_4_ = uStack_64c;
          uVar3._0_4_ = iVar11;
          pFVar24 = pFVar32;
          pFVar27 = pFVar32;
          do {
            uVar9 = (uint)pFVar24;
            uVar10 = 0;
            if ((int)uVar9 < iVar8) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_6a8 = 0;
            pFVar25 = (FMaterialParameterInfo *)
                      ((longlong)&(pFVar27->ComparisonIndex).Value + *(longlong *)(lVar33 + 0x1c0));
            local_6c8.Name.ComparisonIndex.Value = 0;
            local_6c8.Name.Number = 0;
            local_6c8.Association.Value = '\x02';
            local_6c8.Index = -1;
            local_5a8.DataPtr = (int *)FVar5;
            local_5a8._8_8_ = uVar3;
            bVar6 = FMaterialParameterInfo::RemapLayerIndex(pFVar25,&local_5a8,&local_6c8);
            if (bVar6) {
              TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              ::Emplace<FMaterialParameterInfo_const_&>
                        ((TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                          *)local_3d8,&local_69c,(bool *)&local_6c8);
              uVar10 = ::GetTypeHash(&local_6c8);
              iVar11 = TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FMaterialParameterInfo>
                                 ((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                                   *)param_2,uVar10,&local_6c8);
              pFVar24 = pFVar32;
              if (iVar11 != -1) {
                pFVar24 = (FName *)(*(longlong *)
                                     &((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                                        *)param_2)->Elements + (longlong)iVar11 * 0x48);
              }
              pFVar15 = pFVar24 + 2;
              if (pFVar24 == (FName *)0x0) {
                pFVar15 = pFVar32;
              }
              if (pFVar15 != (FName *)0x0) {
                local_4f0 = pFVar25[1].Name;
                FStack_4e8 = *(FName *)&pFVar25[1].Association;
                local_4d0 = 2;
                local_4e0 = pFVar25[2].Name;
                FStack_4d8 = *(FName *)&pFVar25[2].Association;
                *pFVar15 = local_4f0;
                pFVar15[1] = FStack_4e8;
                pFVar15[2] = local_4e0;
                pFVar15[3] = FStack_4d8;
                FVar4._1_7_ = uStack_4cf;
                FVar4.ComparisonIndex.Value._0_1_ = 2;
                pFVar15[4] = FVar4;
              }
            }
            iVar8 = *(int *)(lVar33 + 0x1c8);
            pFVar24 = (FName *)(ulonglong)(uVar9 + 1);
            pFVar27 = pFVar27 + 8;
            lVar18 = local_6f0;
            FVar13 = local_4c8.AllocatorInstance.SecondaryData;
          } while ((int)(uVar9 + 1) < iVar8);
        }
        break;
      case Texture:
        local_648 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_648 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_640 = iVar11;
        local_598._12_4_ = uStack_63c;
        local_598.ArrayNum = iVar11;
        local_598.DataPtr = (int *)local_648;
        GameThread_ApplyParameterOverrides<FTextureParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)(lVar33 + 0x1d0),
                   &local_598,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case TextureCollection:
        local_638 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_638 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_630 = iVar11;
        local_588._12_4_ = uStack_62c;
        local_588.ArrayNum = iVar11;
        local_588.DataPtr = (int *)local_638;
        GameThread_ApplyParameterOverrides<FTextureCollectionParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FTextureCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                   (lVar33 + 0x1e0),&local_588,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case Font:
        local_608 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_608 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_600 = iVar11;
        local_558._12_4_ = uStack_5fc;
        local_558.ArrayNum = iVar11;
        local_558.DataPtr = (int *)local_608;
        GameThread_ApplyParameterOverrides<FFontParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)(lVar33 + 0x220),
                   &local_558,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case RuntimeVirtualTexture:
        local_628 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_628 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_620 = iVar11;
        local_578._12_4_ = uStack_61c;
        local_578.ArrayNum = iVar11;
        local_578.DataPtr = (int *)local_628;
        GameThread_ApplyParameterOverrides<FRuntimeVirtualTextureParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                   (lVar33 + 0x200),&local_578,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case SparseVolumeTexture:
        local_618 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_618 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_610 = iVar11;
        local_568._12_4_ = uStack_60c;
        local_568.ArrayNum = iVar11;
        local_568.DataPtr = (int *)local_618;
        GameThread_ApplyParameterOverrides<FSparseVolumeTextureParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                   (lVar33 + 0x210),&local_568,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case StaticSwitch:
        local_5f8 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_5f8 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_5f0 = iVar11;
        local_548._12_4_ = uStack_5ec;
        local_548.ArrayNum = iVar11;
        local_548.DataPtr = (int *)local_5f8;
        GameThread_ApplyParameterOverrides<FStaticSwitchParameter,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FStaticSwitchParameter,TSizedDefaultAllocator<32>_> *)(lVar33 + 0x268),
                   &local_548,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      case ParameterCollection:
        local_5e8 = (ForElementType<int>)&local_4c8;
        if (FVar13 != (ForElementType<int>)0x0) {
          local_5e8 = FVar13;
        }
        if ((local_4c8.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_5e0 = iVar11;
        local_538._12_4_ = uStack_5dc;
        local_538.ArrayNum = iVar11;
        local_538.DataPtr = (int *)local_5e8;
        GameThread_ApplyParameterOverrides<FParameterCollectionParameterValue,TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>_>
                  ((TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                   (lVar33 + 0x1f0),&local_538,bVar6,
                   (TSet<FMaterialParameterInfo,DefaultKeyFuncs<FMaterialParameterInfo,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_3d8,param_2,false);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        break;
      default:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                           ,0x911,L"");
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar30 = uVar30 + 1;
      local_700 = uVar30;
      if ((int)uVar30 < local_3e0) {
        uVar10 = 0;
        if ((int)uVar30 < local_3e0) {
          uVar10 = ~uVar30 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar16 = local_468;
        if (local_3e8 != (undefined1 *)0x0) {
          puVar16 = local_3e8;
        }
        lVar26 = *(longlong *)(puVar16 + lVar18 * 8 + 8);
        pFVar21 = &FMaterialInstanceCachedData::EmptyData;
        if (*(FMaterialInstanceCachedData **)(lVar33 + 0x2b0) != (FMaterialInstanceCachedData *)0x0)
        {
          pFVar21 = *(FMaterialInstanceCachedData **)(lVar33 + 0x2b0);
        }
        local_5d8 = (pFVar21->ParentLayerIndexRemap).AllocatorInstance.Data;
        iVar11 = (pFVar21->ParentLayerIndexRemap).ArrayNum;
        if ((iVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_528._12_4_ = uStack_5cc;
        local_528.ArrayNum = iVar11;
        local_528.DataPtr = (int *)local_5d8;
        pFVar21 = &FMaterialInstanceCachedData::EmptyData;
        if (*(FMaterialInstanceCachedData **)(lVar26 + 0x2b0) != (FMaterialInstanceCachedData *)0x0)
        {
          pFVar21 = *(FMaterialInstanceCachedData **)(lVar26 + 0x2b0);
        }
        iStack_5d0 = iVar11;
        RemapLayersForParent<TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
                  (&local_4c8,(pFVar21->ParentLayerIndexRemap).ArrayNum,&local_528);
        FVar13 = local_4c8.AllocatorInstance.SecondaryData;
      }
      local_6f0 = lVar18 + 1;
    } while ((int)uVar30 < local_3e0);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_3d8);
  if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_4c8.AllocatorInstance.SecondaryData);
  }
  if (local_3e8 != (undefined1 *)0x0) {
    FMemory::Free(local_3e8);
  }
  return;
}

// GetAllShaderMaps @ 147f3e450

void __thiscall
UMaterialInstance::GetAllShaderMaps
          (UMaterialInstance *this,TArray<FMaterialShaderMap_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  pFVar7 = (this->StaticPermutationMaterialResources).AllocatorInstance.Data;
  iVar2 = (this->StaticPermutationMaterialResources).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StaticPermutationMaterialResources).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar1) break;
    local_28[0] = *(undefined8 *)(*(longlong *)pFVar7 + 0x10);
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    pFVar7 = pFVar7 + 8;
    param_1->ArrayNum = iVar6 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
  }
  return;
}

// GetBasePropertyOverridesHash @ 147f3e740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialInstance::GetBasePropertyOverridesHash(UMaterialInstance *this,FSHAHash *param_1)

{
  short sVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  float fVar4;
  bool bVar5;
  uchar uVar6;
  int iVar7;
  longlong *plVar8;
  short *psVar9;
  float *pfVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_2c8 [32];
  uchar local_2a8 [8];
  uchar local_2a0 [8];
  uchar local_298 [8];
  uchar local_290 [8];
  uchar local_288 [8];
  uchar local_280 [8];
  uchar local_278 [8];
  uchar local_270 [8];
  uchar local_268 [8];
  short local_260 [4];
  undefined1 local_258 [2];
  undefined1 local_256 [6];
  float local_250 [2];
  int local_248 [2];
  float local_240 [2];
  undefined8 local_238;
  undefined8 local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  FSHA1 local_118;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,4999,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
  if ((plVar8 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x138a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FSHA1::FSHA1(&local_118);
  bVar5 = false;
  ::FString::FString(&local_228,L"bOverride_OpacityMaskClipValue");
  fVar14 = (float)(**(code **)(*plVar8 + 0x450))(plVar8);
  local_250[0] = (float)(**(code **)(this->_padding_ + 0x450))(this);
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  if (__real_322bcc77 <
      (float)((uint)(local_250[0] - fVar14) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    uVar12 = local_228.Data.ArrayNum - 1;
    FVar3.Data = local_228.Data.AllocatorInstance.Data;
    if (local_228.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,(uchar *)local_250,4);
    bVar5 = true;
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_218,L"bOverride_BlendMode");
  iVar7 = (**(code **)(*plVar8 + 0x460))(plVar8);
  local_248[0] = (**(code **)(this->_padding_ + 0x460))(this);
  if (local_248[0] != iVar7) {
    uVar12 = local_218.Data.ArrayNum - 1;
    FVar3.Data = local_218.Data.AllocatorInstance.Data;
    if (local_218.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,(uchar *)local_248,4);
    bVar5 = true;
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_208,L"bOverride_ShadingModel");
  psVar9 = (short *)(**(code **)(*plVar8 + 0x468))(plVar8,local_258);
  sVar1 = *psVar9;
  psVar9 = (short *)(**(code **)(this->_padding_ + 0x468))(this,local_256);
  local_260[0] = *psVar9;
  if (local_260[0] != sVar1) {
    uVar12 = local_208.Data.ArrayNum - 1;
    FVar3.Data = local_208.Data.AllocatorInstance.Data;
    if (local_208.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,(uchar *)local_260,2);
    bVar5 = true;
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1f8,L"bOverride_TwoSided");
  uVar6 = (**(code **)(*plVar8 + 0x478))(plVar8);
  local_2a8[0] = (**(code **)(this->_padding_ + 0x478))(this);
  if (local_2a8[0] != uVar6) {
    uVar12 = local_1f8.Data.ArrayNum - 1;
    FVar3.Data = local_1f8.Data.AllocatorInstance.Data;
    if (local_1f8.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_2a8,1);
    bVar5 = true;
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1e8,L"bOverride_bIsThinSurface");
  uVar6 = (**(code **)(*plVar8 + 0x480))(plVar8);
  local_2a0[0] = (**(code **)(this->_padding_ + 0x480))(this);
  if (local_2a0[0] != uVar6) {
    uVar12 = local_1e8.Data.ArrayNum - 1;
    FVar3.Data = local_1e8.Data.AllocatorInstance.Data;
    if (local_1e8.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_2a0,1);
    bVar5 = true;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1d8,L"bOverride_DitheredLODTransition");
  uVar6 = (**(code **)(*plVar8 + 0x488))(plVar8);
  local_298[0] = (**(code **)(this->_padding_ + 0x488))(this);
  if (local_298[0] != uVar6) {
    uVar12 = local_1d8.Data.ArrayNum - 1;
    FVar3.Data = local_1d8.Data.AllocatorInstance.Data;
    if (local_1d8.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_298,1);
    bVar5 = true;
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1c8,L"bOverride_CastDynamicShadowAsMasked");
  uVar6 = (**(code **)(*plVar8 + 0x458))(plVar8);
  local_290[0] = (**(code **)(this->_padding_ + 0x458))(this);
  if (local_290[0] != uVar6) {
    uVar12 = local_1c8.Data.ArrayNum - 1;
    FVar3.Data = local_1c8.Data.AllocatorInstance.Data;
    if (local_1c8.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_290,1);
    bVar5 = true;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1b8,L"bOverride_OutputTranslucentVelocity");
  uVar6 = (**(code **)(*plVar8 + 0x498))(plVar8);
  local_288[0] = (**(code **)(this->_padding_ + 0x498))(this);
  if (local_288[0] != uVar6) {
    uVar12 = local_1b8.Data.ArrayNum - 1;
    FVar3.Data = local_1b8.Data.AllocatorInstance.Data;
    if (local_1b8.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_288,1);
    bVar5 = true;
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1a8,L"bOverride_bHasPixelAnimation");
  uVar6 = (**(code **)(*plVar8 + 0x520))(plVar8);
  local_280[0] = (**(code **)(this->_padding_ + 0x520))(this);
  if (local_280[0] != uVar6) {
    uVar12 = local_1a8.Data.ArrayNum - 1;
    FVar3.Data = local_1a8.Data.AllocatorInstance.Data;
    if (local_1a8.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_280,1);
    bVar5 = true;
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_198,L"bOverride_bEnableTessellation");
  uVar6 = (**(code **)(*plVar8 + 0x578))(plVar8);
  local_278[0] = (**(code **)(this->_padding_ + 0x578))(this);
  if (local_278[0] != uVar6) {
    uVar12 = local_198.Data.ArrayNum - 1;
    FVar3.Data = local_198.Data.AllocatorInstance.Data;
    if (local_198.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_278,1);
    bVar5 = true;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_188,L"bOverride_DisplacementScaling");
  pfVar10 = (float *)(**(code **)(*plVar8 + 0x4e8))(plVar8,local_130);
  fVar14 = *pfVar10;
  fVar15 = pfVar10[1];
  puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x4e8))(this,local_128);
  local_238 = *puVar11;
  if ((fVar4 < (float)((uint)((float)local_238 - fVar14) & uVar13)) ||
     (local_238._4_4_ = (float)((ulonglong)local_238 >> 0x20), fVar15 = local_238._4_4_ - fVar15,
     fVar4 < (float)((uint)fVar15 & uVar13))) {
    uVar12 = local_188.Data.ArrayNum - 1;
    FVar3.Data = local_188.Data.AllocatorInstance.Data;
    if (local_188.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,(uchar *)&local_238,8);
    bVar5 = true;
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_178,L"bOverride_bEnableDisplacementFade");
  uVar6 = (**(code **)(*plVar8 + 0x4f0))(plVar8);
  local_270[0] = (**(code **)(this->_padding_ + 0x4f0))(this);
  if (local_270[0] != uVar6) {
    uVar12 = local_178.Data.ArrayNum - 1;
    FVar3.Data = local_178.Data.AllocatorInstance.Data;
    if (local_178.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,local_270,1);
    bVar5 = true;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_168,L"bOverride_DisplacementFadeRange");
  pfVar10 = (float *)(**(code **)(*plVar8 + 0x4f8))(plVar8,local_120);
  fVar14 = *pfVar10;
  fVar15 = pfVar10[1];
  puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x4f8))(this,local_138);
  local_230 = *puVar11;
  if ((fVar4 < (float)((uint)((float)local_230 - fVar14) & uVar13)) ||
     (local_230._4_4_ = (float)((ulonglong)local_230 >> 0x20), fVar15 = local_230._4_4_ - fVar15,
     fVar4 < (float)((uint)fVar15 & uVar13))) {
    uVar12 = local_168.Data.ArrayNum - 1;
    FVar3.Data = local_168.Data.AllocatorInstance.Data;
    if (local_168.Data.ArrayNum == 0) {
      uVar12 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar12);
    FSHA1::Update(&local_118,(uchar *)&local_230,8);
    bVar5 = true;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_158,L"bOverride_MaxWorldPositionOffsetDisplacement");
  fVar14 = (float)(**(code **)(*plVar8 + 0x500))(plVar8);
  local_240[0] = (float)(**(code **)(this->_padding_ + 0x500))(this);
  if (fVar4 < (float)((uint)(local_240[0] - fVar14) & uVar13)) {
    uVar13 = local_158.Data.ArrayNum - 1;
    FVar3.Data = local_158.Data.AllocatorInstance.Data;
    if (local_158.Data.ArrayNum == 0) {
      uVar13 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar13);
    FSHA1::Update(&local_118,(uchar *)local_240,4);
    bVar5 = true;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_148,L"bOverride_CompatibleWithLumenCardSharing");
  uVar6 = (**(code **)(*plVar8 + 0x588))(plVar8);
  local_268[0] = (**(code **)(this->_padding_ + 0x588))(this);
  if (local_268[0] != uVar6) {
    uVar13 = local_148.Data.ArrayNum - 1;
    FVar3.Data = local_148.Data.AllocatorInstance.Data;
    if (local_148.Data.ArrayNum == 0) {
      uVar13 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_118,(wchar_t *)FVar3.Data,uVar13);
    FSHA1::Update(&local_118,local_268,1);
    bVar5 = true;
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FSHA1::Final(&local_118);
    FSHA1::GetHash(&local_118,param_1->Hash);
  }
  FSHA1::~FSHA1(&local_118);
  return;
}

// GetBlendMode @ 147f3f090

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __thiscall UMaterialInstance::GetBlendMode(UMaterialInstance *this)

{
  return (EBlendMode)(this->BlendMode).Value;
}

// GetBlendableLocation @ 147f3f1a0

/* WARNING: Enum "EBlendableLocation": Some values do not have unique names */

EBlendableLocation __thiscall
UMaterialInstance::GetBlendableLocation(UMaterialInstance *this,UMaterial *param_1)

{
  byte bVar1;
  UMaterialInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  EBlendableLocation EVar5;
  
  if (param_1 == (UMaterial *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x4f5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  bVar1 = (param_1->BlendableLocation).Value;
  EVar5 = (EBlendableLocation)bVar1;
  if (bVar1 == 3) {
    return BL_ReplacingTonemapper;
  }
  if ((this->bOverrideBlendableLocation != '\0') &&
     (bVar1 = (this->BlendableLocationOverride).Value, bVar1 != 3)) {
    return (uint)bVar1;
  }
  pUVar2 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    EVar5 = (**(code **)(pUVar2->_padding_ + 0x440))(pUVar2,param_1);
  }
  return EVar5;
}

// GetBlendablePriority @ 147f3f360

int __thiscall UMaterialInstance::GetBlendablePriority(UMaterialInstance *this,UMaterial *param_1)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (UMaterial *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x50e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (this->bOverrideBlendablePriority != '\0') {
    return this->BlendablePriorityOverride;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3f3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(pUVar1->_padding_ + 0x448))(pUVar1,param_1);
    return iVar4;
  }
  return param_1->BlendablePriority;
}

// GetCachedExpressionData @ 147f3f460

FMaterialCachedExpressionData * __thiscall
UMaterialInstance::GetCachedExpressionData
          (UMaterialInstance *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  TMaterialRecursionGuard<UMaterialInterface> **ppTVar1;
  UMaterialInterface *pUVar2;
  TMaterialRecursionGuard<UMaterialInterface> *pTVar3;
  FMaterialCachedExpressionData *pFVar4;
  UMaterial *pUVar5;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialInterface> *pTStack_10;
  
  pFVar4 = (FMaterialCachedExpressionData *)this->_padding_;
  if (pFVar4 == (FMaterialCachedExpressionData *)0x0) {
    pTVar3 = param_1;
    if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
      while ((UMaterialInstance *)pTVar3->Value != this) {
        ppTVar1 = &pTVar3->PreviousLink;
        pTVar3 = *ppTVar1;
        if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialInterface> *)0x0) {
          TMaterialRecursionGuard<UMaterialInterface>::Set(param_1,(UMaterialInterface *)this);
          pUVar2 = (this->Parent).field0_0x0.DebugPtr;
          local_18 = 0;
          pTStack_10 = param_1;
          pFVar4 = (FMaterialCachedExpressionData *)
                   (**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2,&local_18);
          return pFVar4;
        }
      }
    }
    pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
    local_18 = 0;
    pTStack_10 = (TMaterialRecursionGuard<UMaterialInterface> *)0x0;
    pFVar4 = (FMaterialCachedExpressionData *)
             (**(code **)(pUVar5->_padding_ + 0x2f0))(pUVar5,&local_18);
  }
  return pFVar4;
}

// GetCastDynamicShadowAsMasked @ 147f3f530

bool __thiscall UMaterialInstance::GetCastDynamicShadowAsMasked(UMaterialInstance *this)

{
  return this->bCastDynamicShadowAsMasked;
}

// GetCastShadowAsMasked @ 147f3f570

bool __thiscall UMaterialInstance::GetCastShadowAsMasked(UMaterialInstance *this)

{
  byte bVar1;
  UMaterialInterface *pUVar2;
  undefined1 uVar3;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  if ((bVar1 & 2) != 0) {
    return (bool)(bVar1 & 1);
  }
  pUVar2 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3f58d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(pUVar2->_padding_ + 0x3f0))();
    return (bool)uVar3;
  }
  return false;
}

// GetDependencies @ 147f3f5f0

void __thiscall
UMaterialInstance::GetDependencies
          (UMaterialInstance *this,
          TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
          *param_1)

{
  UMaterialInterface *pUVar1;
  UMaterialInterface *local_res18;
  UMaterialInstance *local_res20;
  
  IsInGameThread();
  local_res20 = this;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  Emplace<UMaterialInterface_*>(param_1,&local_res18,(bool *)&local_res20);
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x308))(pUVar1,param_1);
  }
  return;
}

// GetDiffuseBoost @ 147f3f680

float __thiscall UMaterialInstance::GetDiffuseBoost(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  float fVar2;
  
  if ((this->_padding_ & 0x800000000) != 0) {
    return *(float *)((longlong)&this->_padding_ + 4);
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3f6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x400))();
    return fVar2;
  }
  return __real_3f800000;
}

// GetDisplacementFadeRange @ 147f3f6c0

FDisplacementFadeRange __thiscall
UMaterialInstance::GetDisplacementFadeRange(UMaterialInstance *this)

{
  FDisplacementFadeRange in_RDX;
  
  *(FDisplacementFadeRange *)in_RDX = this->DisplacementFadeRange;
  return in_RDX;
}

// GetDisplacementScaling @ 147f3f760

FDisplacementScaling __thiscall UMaterialInstance::GetDisplacementScaling(UMaterialInstance *this)

{
  FDisplacementScaling in_RDX;
  
  *(FDisplacementScaling *)in_RDX = this->DisplacementScaling;
  return in_RDX;
}

// GetEmissiveBoost @ 147f3f930

float __thiscall UMaterialInstance::GetEmissiveBoost(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  float fVar2;
  
  if ((this->_padding_ & 0x400000000) != 0) {
    return *(float *)&this->_padding_;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3f951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x3f8))();
    return fVar2;
  }
  return __real_3f800000;
}

// GetExportResolutionScale @ 147f3f970

float __thiscall UMaterialInstance::GetExportResolutionScale(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  float fVar2;
  
  if ((this->_padding_ & 0x1000000000) == 0) {
    pUVar1 = (this->Parent).field0_0x0.DebugPtr;
    if (pUVar1 == (UMaterialInterface *)0x0) {
      return __real_3f800000;
    }
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x408))();
  }
  else {
    fVar2 = *(float *)&this->_padding_;
  }
  if (__real_41200000 <= fVar2) {
    fVar2 = __real_41200000;
  }
  if (fVar2 <= __real_3dcccccd) {
    fVar2 = __real_3dcccccd;
  }
  return fVar2;
}

// GetLightingGuidChain @ 147f3fcc0

void __thiscall
UMaterialInstance::GetLightingGuidChain
          (UMaterialInstance *this,bool param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetMaterial @ 147f3fd20

UMaterial * __thiscall UMaterialInstance::GetMaterial(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  UMaterial *pUVar2;
  
  IsInGameThread();
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3fd42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterial *)(**(code **)(pUVar1->_padding_ + 0x2d8))();
    return pUVar2;
  }
  pUVar2 = UMaterial::GetDefaultMaterial(MD_Surface);
  return pUVar2;
}

// GetMaterial @ 147f3fd60

UMaterial * __thiscall UMaterialInstance::GetMaterial(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  UMaterial *pUVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = (*IsAsyncLoading)();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInParallelGameThread() || IsAsyncLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                           ,0x423,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UMaterial *)(*pcVar2)();
          return pUVar4;
        }
      }
    }
  }
  IsInGameThread();
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3fdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UMaterial *)(**(code **)(pUVar1->_padding_ + 0x2d8))();
    return pUVar4;
  }
  pUVar4 = UMaterial::GetDefaultMaterial(MD_Surface);
  return pUVar4;
}

// GetMaterialInheritanceChain @ 147f3fe40

void __thiscall
UMaterialInstance::GetMaterialInheritanceChain
          (UMaterialInstance *this,FMaterialInheritanceChain *param_1)

{
  TArray<UMaterialInstance_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  UMaterialInterface *pUVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  int iVar5;
  ForElementType<UMaterialInstance_const_*> FVar6;
  UMaterial *pUVar7;
  ForElementType<UMaterialInstance_const_*> FVar8;
  UMaterialInstance *local_18 [2];
  
  pTVar1 = &param_1->MaterialInstances;
  FVar8 = (param_1->MaterialInstances).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UMaterialInstance_const_*>)0x0) {
    FVar8 = (ForElementType<UMaterialInstance_const_*>)pTVar1;
  }
  for (FVar6 = FVar8;
      FVar6 != (ForElementType<UMaterialInstance_const_*>)
               ((longlong)FVar8 + (longlong)(param_1->MaterialInstances).ArrayNum * 8);
      FVar6 = (ForElementType<UMaterialInstance_const_*>)((longlong)FVar6 + 8)) {
    if (*(UMaterialInstance **)FVar6 == this) goto LAB_147f3ff7a;
  }
  local_18[0] = this;
  if ((((ulonglong)FVar8 <= local_18) &&
      (local_18 <
       (UMaterialInstance **)((longlong)FVar8 + (longlong)(param_1->MaterialInstances).ArrayMax * 8)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar5 = (param_1->MaterialInstances).ArrayNum;
  piVar2 = &(param_1->MaterialInstances).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInstance_const_*>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->MaterialInstances).ArrayNum = iVar5 + 1;
  FVar8 = (param_1->MaterialInstances).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UMaterialInstance_const_*>)0x0) {
    FVar8 = (ForElementType<UMaterialInstance_const_*>)pTVar1;
  }
  *(UMaterialInstance **)((longlong)FVar8 + (longlong)iVar5 * 8) = local_18[0];
  if (param_1->CachedExpressionData == (FMaterialCachedExpressionData *)0x0) {
    param_1->CachedExpressionData = (FMaterialCachedExpressionData *)this->_padding_;
  }
  pUVar3 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3ff73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar3->_padding_ + 0x2e8))(pUVar3,param_1);
    return;
  }
LAB_147f3ff7a:
  pUVar7 = UMaterial::GetDefaultMaterial(MD_Surface);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar7->_padding_ + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x000147f3ffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar7,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// GetMaterialLayers @ 147f3fff0

bool __thiscall
UMaterialInstance::GetMaterialLayers
          (UMaterialInstance *this,FMaterialLayersFunctions *param_1,
          TMaterialRecursionGuard<UMaterialInterface> *param_2)

{
  TMaterialRecursionGuard<UMaterialInterface> **ppTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMaterialLayerStackFunctionsCache *pFVar3;
  UMaterialInterface *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  char cVar6;
  TMaterialRecursionGuard<UMaterialInterface> *pTVar7;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialInterface> *local_10;
  
  if ((this->StaticParametersRuntime).bHasMaterialLayers != 0) {
    TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)param_1
               ,&(this->StaticParametersRuntime).MaterialLayers.Layers);
    TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &param_1->_padding_,&(this->StaticParametersRuntime).MaterialLayers.Blends);
    pTVar2 = (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.SharedReferenceCount.
             ReferenceController;
    pFVar3 = (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TReferenceControllerBase<1> *)param_1->_padding_;
    param_1->_padding_ = (longlong)pFVar3;
    param_1->_padding_ = (longlong)pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    return true;
  }
  pTVar7 = param_2;
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    while ((UMaterialInstance *)pTVar7->Value != this) {
      ppTVar1 = &pTVar7->PreviousLink;
      pTVar7 = *ppTVar1;
      if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialInterface> *)0x0) {
        TMaterialRecursionGuard<UMaterialInterface>::Set(param_2,(UMaterialInterface *)this);
        pUVar4 = (this->Parent).field0_0x0.DebugPtr;
        local_18 = 0;
        local_10 = param_2;
        cVar6 = (**(code **)(pUVar4->_padding_ + 0x3a0))(pUVar4,param_1,&local_18);
        return cVar6 != '\0';
      }
    }
  }
  return false;
}

// GetMaterialResource @ 147f401f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __thiscall
UMaterialInstance::GetMaterialResource(UMaterialInstance *this,EShaderPlatform param_1,Type param_2)

{
  UMaterialInterface *pUVar1;
  FCachedSystemScalabilityCVars *pFVar2;
  FMaterialResource *pFVar3;
  
  if (this->bHasStaticPermutationResource != 0) {
    if (param_2 == Num) {
      pFVar2 = GetCachedScalabilityCVars();
      param_2 = pFVar2->MaterialQualityLevel;
    }
    pFVar3 = FindMaterialResource(&this->StaticPermutationMaterialResources,param_1,param_2,true);
    return pFVar3;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4024e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FMaterialResource *)(**(code **)(pUVar1->_padding_ + 0x390))();
    return pFVar3;
  }
  return (FMaterialResource *)0x0;
}

// GetMaterialResource @ 147f40270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __thiscall
UMaterialInstance::GetMaterialResource(UMaterialInstance *this,EShaderPlatform param_1,Type param_2)

{
  FMaterialResource *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f40273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterialResource *)(**(code **)(this->_padding_ + 0x390))();
  return pFVar1;
}

// GetMaterial_Concurrent @ 147f402a0

UMaterial * __thiscall
UMaterialInstance::GetMaterial_Concurrent
          (UMaterialInstance *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  TMaterialRecursionGuard<UMaterialInterface> **ppTVar1;
  UMaterialInterface *pUVar2;
  TMaterialRecursionGuard<UMaterialInterface> *pTVar3;
  UMaterial *pUVar4;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialInterface> *local_10;
  
  pTVar3 = param_1;
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    while ((UMaterialInstance *)pTVar3->Value != this) {
      ppTVar1 = &pTVar3->PreviousLink;
      pTVar3 = *ppTVar1;
      if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialInterface> *)0x0) {
        TMaterialRecursionGuard<UMaterialInterface>::Set(param_1,(UMaterialInterface *)this);
        pUVar2 = (this->Parent).field0_0x0.DebugPtr;
        local_18 = 0;
        local_10 = param_1;
        pUVar4 = (UMaterial *)(**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,&local_18);
        return pUVar4;
      }
    }
  }
  pUVar4 = UMaterial::GetDefaultMaterial(MD_Surface);
  return pUVar4;
}

// GetMaxWorldPositionOffsetDisplacement @ 147f403b0

float __thiscall UMaterialInstance::GetMaxWorldPositionOffsetDisplacement(UMaterialInstance *this)

{
  return this->MaxWorldPositionOffsetDisplacement;
}

// GetNaniteOverride @ 147f403f0

UMaterialInterface * __thiscall
UMaterialInstance::GetNaniteOverride
          (UMaterialInstance *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  TMaterialRecursionGuard<UMaterialInterface> **ppTVar1;
  TMaterialRecursionGuard<UMaterialInterface> *pTVar2;
  UMaterialInterface *pUVar3;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialInterface> *local_10;
  
  if ((this->NaniteOverrideMaterial).bEnableOverride != false) {
    return (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr;
  }
  pTVar2 = param_1;
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    while ((UMaterialInstance *)pTVar2->Value != this) {
      ppTVar1 = &pTVar2->PreviousLink;
      pTVar2 = *ppTVar1;
      if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialInterface> *)0x0) {
        TMaterialRecursionGuard<UMaterialInterface>::Set(param_1,(UMaterialInterface *)this);
        pUVar3 = (this->Parent).field0_0x0.DebugPtr;
        local_18 = 0;
        local_10 = param_1;
        pUVar3 = (UMaterialInterface *)(**(code **)(pUVar3->_padding_ + 0x3a8))(pUVar3,&local_18);
        return pUVar3;
      }
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetOpacityMaskClipValue @ 147f40530

float __thiscall UMaterialInstance::GetOpacityMaskClipValue(UMaterialInstance *this)

{
  return this->OpacityMaskClipValue;
}

// GetParameterOverrideValue @ 147f40940

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
UMaterialInstance::GetParameterOverrideValue
          (UMaterialInstance *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterMetadata *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  FScriptContainerElement *pFVar13;
  FName FVar14;
  code *pcVar15;
  double dVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  UTexture *pUVar20;
  int iVar21;
  longlong lVar22;
  FFontParameterValue *pFVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_188;
  uint uStack_184;
  int iStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168;
  uint7 uStack_167;
  int local_158;
  int local_148;
  int local_138;
  int local_128;
  int local_118;
  int local_108;
  int local_f8;
  int local_e8;
  uint local_d8;
  int local_c8;
  double local_a8;
  double dStack_a0;
  undefined7 uStack_97;
  undefined4 uStack_84;
  double local_80;
  double dStack_78;
  undefined7 uStack_6f;
  undefined7 uStack_67;
  double dStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined7 uStack_47;
  undefined7 uStack_1f;
  
  switch(param_1) {
  case Scalar:
    iVar21 = (this->ScalarParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->ScalarParameterValues).AllocatorInstance.Data;
        uVar1 = (param_2->Name).ComparisonIndex;
        if ((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar1) &&
            ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) == (param_2->Name).Number)
            ) && ((*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index &&
                  (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value))))
        {
          (param_3->Value).field0_0x0.Float[0] = *(float *)(pFVar13 + lVar22 + 0x10);
          (param_3->Value).field0_0x0.EnumEntry.Number = uStack_184;
          (param_3->Value).field0_0x0.Font.Page = iStack_180;
          (param_3->Value).field0_0x0.Float[3] = fStack_17c;
          (param_3->Value).field0_0x0.Double[2] = (double)CONCAT44(fStack_174,local_178);
          (param_3->Value).field0_0x0.Double[3] = (double)CONCAT44(fStack_16c,fStack_170);
          *(ulonglong *)&(param_3->Value).Type = (ulonglong)uStack_167 << 8;
          return true;
        }
        iVar21 = (this->ScalarParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x24;
      } while ((int)uVar24 < iVar21);
    }
    break;
  case Vector:
    iVar21 = (this->VectorParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      while( true ) {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) break;
        pFVar13 = (this->VectorParameterValues).AllocatorInstance.Data;
        uVar2 = (param_2->Name).ComparisonIndex;
        if (((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar2) &&
             ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) == (param_2->Name).Number
             )) && (*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index)) &&
           (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)) {
          dVar11 = *(double *)(pFVar13 + lVar22 + 0x10 + 8);
          (param_3->Value).field0_0x0.Double[0] = *(double *)(pFVar13 + lVar22 + 0x10);
          (param_3->Value).field0_0x0.Double[1] = dVar11;
          (param_3->Value).field0_0x0.Double[2] = local_a8;
          (param_3->Value).field0_0x0.Double[3] = dStack_a0;
          *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_97,1);
          return true;
        }
        iVar21 = (this->VectorParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x30;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      }
      pcVar15 = (code *)swi(3);
      uVar18 = (*pcVar15)();
      return (bool)uVar18;
    }
    break;
  case DoubleVector:
    iVar21 = (this->DoubleVectorParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      while( true ) {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) break;
        pFVar13 = (this->DoubleVectorParameterValues).AllocatorInstance.Data;
        uVar3 = (param_2->Name).ComparisonIndex;
        if ((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar3) &&
            ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) == (param_2->Name).Number)
            ) && ((*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index &&
                  (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value))))
        {
          dVar16 = *(double *)(pFVar13 + lVar22 + 0x10 + 8);
          dVar11 = *(double *)(pFVar13 + lVar22 + 0x20);
          dVar12 = *(double *)(pFVar13 + lVar22 + 0x28);
          (param_3->Value).field0_0x0.Double[0] = *(double *)(pFVar13 + lVar22 + 0x10);
          (param_3->Value).field0_0x0.Double[1] = dVar16;
          (param_3->Value).field0_0x0.Double[2] = dVar11;
          (param_3->Value).field0_0x0.Double[3] = dVar12;
          *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_1f,2);
          return true;
        }
        iVar21 = (this->DoubleVectorParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x40;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      }
      pcVar15 = (code *)swi(3);
      uVar18 = (*pcVar15)();
      return (bool)uVar18;
    }
    break;
  case Texture:
    iVar21 = (this->TextureParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->TextureParameterValues).AllocatorInstance.Data;
        pUVar20 = *(UTexture **)(pFVar13 + lVar22 + 0x10);
        if (pUVar20 != (UTexture *)0x0) {
          uVar4 = (param_2->Name).ComparisonIndex;
          if (((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar4) &&
               ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) ==
                (param_2->Name).Number)) && (*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index)) &&
             (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)) {
            local_168 = 3;
LAB_147f40d24:
            (param_3->Value).field0_0x0.Texture = pUVar20;
            (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(fStack_17c,iStack_180);
            uVar25 = (undefined4)CONCAT71(uStack_167,local_168);
            uVar26 = (undefined4)(uStack_167 >> 0x18);
LAB_147f40d3e:
            (param_3->Value).field0_0x0.Float[4] = local_178;
            (param_3->Value).field0_0x0.Float[5] = fStack_174;
            (param_3->Value).field0_0x0.Float[6] = fStack_170;
            (param_3->Value).field0_0x0.Float[7] = fStack_16c;
            *(ulonglong *)&(param_3->Value).Type = CONCAT44(uVar26,uVar25);
            return true;
          }
        }
        iVar21 = (this->TextureParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x28;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      } while( true );
    }
    break;
  case TextureCollection:
    iVar21 = (this->TextureCollectionParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->TextureCollectionParameterValues).AllocatorInstance.Data;
        pUVar20 = *(UTexture **)(pFVar13 + lVar22 + 0x10);
        if (pUVar20 != (UTexture *)0x0) {
          uVar5 = (param_2->Name).ComparisonIndex;
          if ((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar5) &&
              ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) ==
               (param_2->Name).Number)) &&
             ((*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index &&
              (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)))) {
            local_168 = 4;
            goto LAB_147f40d24;
          }
        }
        iVar21 = (this->TextureCollectionParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x28;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      } while( true );
    }
    break;
  case Font:
    iVar21 = (this->FontParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar23 = (FFontParameterValue *)
                  ((this->FontParameterValues).AllocatorInstance.Data + lVar22);
        pUVar20 = FFontParameterValue::GetValue(pFVar23);
        if (pUVar20 != (UTexture *)0x0) {
          uVar9 = (param_2->Name).ComparisonIndex;
          FVar14 = (pFVar23->ParameterInfo).Name;
          if ((((FVar14.ComparisonIndex.Value.Value == uVar9) &&
               (FVar14.Number == (param_2->Name).Number)) &&
              ((pFVar23->ParameterInfo).Index == param_2->Index)) &&
             ((pFVar23->ParameterInfo).Association.Value == (param_2->Association).Value)) {
            iVar21 = pFVar23->FontPage;
            (param_3->Value).field0_0x0.Double[0] = (double)(pFVar23->FontValue).field0_0x0;
            (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_84,iVar21);
            (param_3->Value).field0_0x0.Double[2] = local_80;
            (param_3->Value).field0_0x0.Double[3] = dStack_78;
            *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_6f,5);
            return true;
          }
        }
        iVar21 = (this->FontParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x30;
      } while ((int)uVar24 < iVar21);
    }
    return false;
  case RuntimeVirtualTexture:
    iVar21 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data;
        pUVar20 = *(UTexture **)(pFVar13 + lVar22 + 0x10);
        if (pUVar20 != (UTexture *)0x0) {
          uVar7 = (param_2->Name).ComparisonIndex;
          if ((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar7) &&
              ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) ==
               (param_2->Name).Number)) &&
             ((*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index &&
              (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)))) {
            local_168 = 6;
            goto LAB_147f40d24;
          }
        }
        iVar21 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x28;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      } while( true );
    }
    break;
  case SparseVolumeTexture:
    iVar21 = (this->SparseVolumeTextureParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->SparseVolumeTextureParameterValues).AllocatorInstance.Data;
        pUVar20 = *(UTexture **)(pFVar13 + lVar22 + 0x10);
        if (pUVar20 != (UTexture *)0x0) {
          uVar8 = (param_2->Name).ComparisonIndex;
          if (((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar8) &&
               ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) ==
                (param_2->Name).Number)) && (*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index)) &&
             (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)) {
            local_168 = 7;
            goto LAB_147f40d24;
          }
        }
        iVar21 = (this->SparseVolumeTextureParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x28;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      } while( true );
    }
    break;
  case StaticSwitch:
    iVar21 = (this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->StaticParametersRuntime).StaticSwitchParameters.AllocatorInstance.Data;
        if (pFVar13[lVar22 + 0x10] != (FScriptContainerElement)0x0) {
          uVar10 = (param_2->Name).ComparisonIndex;
          if ((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar10) &&
              ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) ==
               (param_2->Name).Number)) &&
             ((*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index &&
              (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)))) {
            FVar14._1_7_ = uStack_67;
            FVar14.ComparisonIndex.Value._0_1_ = pFVar13[lVar22 + 0x24];
            (param_3->Value).field0_0x0.EnumEntry = FVar14;
            (param_3->Value).field0_0x0.Double[1] = dStack_60;
            uVar25 = (undefined4)CONCAT71(uStack_47,8);
            uVar26 = (undefined4)((uint7)uStack_47 >> 0x18);
            local_178 = local_58;
            fStack_174 = fStack_54;
            fStack_170 = fStack_50;
            fStack_16c = fStack_4c;
            goto LAB_147f40d3e;
          }
        }
        iVar21 = (this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x28;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      } while( true );
    }
    break;
  case ParameterCollection:
    iVar21 = (this->ParameterCollectionParameterValues).ArrayNum;
    uVar24 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar24 < iVar21) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar15 = (code *)swi(3);
          uVar18 = (*pcVar15)();
          return (bool)uVar18;
        }
        pFVar13 = (this->ParameterCollectionParameterValues).AllocatorInstance.Data;
        pUVar20 = *(UTexture **)(pFVar13 + lVar22 + 0x10);
        if (pUVar20 != (UTexture *)0x0) {
          uVar6 = (param_2->Name).ComparisonIndex;
          if (((((int)*(undefined8 *)(pFVar13 + lVar22) == uVar6) &&
               ((uint)((ulonglong)*(undefined8 *)(pFVar13 + lVar22) >> 0x20) ==
                (param_2->Name).Number)) && (*(int *)(pFVar13 + lVar22 + 0xc) == param_2->Index)) &&
             (pFVar13[lVar22 + 8] == (FScriptContainerElement)(param_2->Association).Value)) {
            local_168 = 9;
            goto LAB_147f40d24;
          }
        }
        iVar21 = (this->ParameterCollectionParameterValues).ArrayNum;
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 0x28;
        if (iVar21 <= (int)uVar24) {
          return false;
        }
      } while( true );
    }
    break;
  default:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                        ,0x489,L"");
    if (!bVar17) {
      return false;
    }
    pcVar15 = (code *)swi(3);
    uVar18 = (*pcVar15)();
    return (bool)uVar18;
  }
  return false;
}

// GetParameterValue @ 147f41f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialGetParameterValueFlags": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
UMaterialInstance::GetParameterValue
          (UMaterialInstance *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterMetadata *param_3,
          EMaterialGetParameterValueFlags param_4)

{
  int iVar1;
  UMaterialInstance *this_00;
  FMaterialInstanceCachedData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  FMaterialInstanceCachedData *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  FMemoryImageMaterialParameterInfo local_128;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<int_const_,int> local_f8;
  undefined8 local_e8;
  FMaterialCachedExpressionData *pFStack_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_e8 = 0;
  pFStack_e0 = (FMaterialCachedExpressionData *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_4c = 0x10;
  (**(code **)(this->_padding_ + 0x2e8))(0,&local_e8);
  bVar4 = false;
  if ((param_4 & CheckNonOverrides) != None) {
    bVar4 = FMaterialCachedExpressionData::GetParameterValue(pFStack_e0,param_1,param_2,param_3);
  }
  local_128.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
  local_128.Name.DisplayIndex.Value = (param_2->Name).DisplayIndex.Value;
  local_128._8_8_ = *(undefined8 *)&(param_2->Name).Number;
  local_128.Association.Value = (param_2->Association).Value;
  local_128._17_3_ = *(undefined3 *)&param_2->field_0x11;
  uVar10 = 0;
  lVar11 = 0;
  do {
    if (local_50 <= (int)uVar10) break;
    uVar7 = 0;
    if ((int)uVar10 < local_50) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_138 = (longlong)(int)uVar10;
      local_130 = (longlong)local_50;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    puVar8 = local_d8;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    this_00 = *(UMaterialInstance **)(puVar8 + lVar11);
    if (((0 < (int)uVar10) || ((param_4 & CheckInstanceOverrides) != None)) &&
       (bVar5 = GetParameterOverrideValue(this_00,param_1,&local_128,param_3), bVar5)) {
      bVar4 = true;
      break;
    }
    pFVar2 = (this_00->CachedData).Ptr;
    pFVar9 = &FMaterialInstanceCachedData::EmptyData;
    if (pFVar2 != (FMaterialInstanceCachedData *)0x0) {
      pFVar9 = pFVar2;
    }
    local_108 = (pFVar9->ParentLayerIndexRemap).AllocatorInstance.Data;
    iVar1 = (pFVar9->ParentLayerIndexRemap).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_f8._12_4_ = uStack_fc;
    local_f8.ArrayNum = iVar1;
    local_f8.DataPtr = (int *)local_108;
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 8;
    iStack_100 = iVar1;
    bVar5 = FMemoryImageMaterialParameterInfo::RemapLayerIndex(&local_128,&local_f8,&local_128);
  } while (bVar5);
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free(local_58);
  }
  return bVar4;
}

// GetPhysicalMaterial @ 147f421b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicalMaterial * __thiscall UMaterialInstance::GetPhysicalMaterial(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPhysicalMaterial *pUVar4;
  
  IsInGameThread();
  pUVar4 = (this->PhysMaterial).field0_0x0.DebugPtr;
  if (pUVar4 == (UPhysicalMaterial *)0x0) {
    pUVar1 = (this->Parent).field0_0x0.DebugPtr;
    if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f421de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UPhysicalMaterial *)(**(code **)(pUVar1->_padding_ + 0x318))();
      return pUVar4;
    }
    if ((GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr == (UPhysicalMaterial *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->DefaultPhysMaterial != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x880,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UPhysicalMaterial *)(*pcVar2)();
        return pUVar4;
      }
    }
    pUVar4 = (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr;
  }
  return pUVar4;
}

// GetPhysicalMaterialFromMap @ 147f42270

UPhysicalMaterial * __thiscall
UMaterialInstance::GetPhysicalMaterialFromMap(UMaterialInstance *this,int param_1)

{
  if ((uint)param_1 < 8) {
    return this->PhysicalMaterialMap[param_1].field0_0x0.DebugPtr;
  }
  return (UPhysicalMaterial *)0x0;
}

// GetPhysicalMaterialMask @ 147f422c0

UPhysicalMaterialMask * __thiscall
UMaterialInstance::GetPhysicalMaterialMask(UMaterialInstance *this)

{
  return (UPhysicalMaterialMask *)0x0;
}

// GetPrivateStaticClass @ 147f435c0

UClass * __cdecl UMaterialInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstance",
               &Z_Registration_Info_UClass_UMaterialInstance.InnerSingleton,
               StaticRegisterNativesUMaterialInstance,0x2e0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialInstance>,
               InternalVTableHelperCtorCaller<UMaterialInstance>,local_res8,
               UMaterialInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstance.InnerSingleton;
}

// GetRefractionSettings @ 147f43fd0

bool __thiscall UMaterialInstance::GetRefractionSettings(UMaterialInstance *this,float *param_1)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FPackageFileVersion FVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FName FVar9;
  longlong lVar10;
  uint uVar11;
  
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x120) {
    FVar9 = NAME_RefractionBias;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) &&
       (_Init_thread_header(&::_TSS1), FVar9 = NAME_RefractionBias, ::_TSS1 == -1)) {
      ::FName::FName(&NAME_RefractionBias,L"RefractionBias");
      _Init_thread_footer(&::_TSS1);
      FVar9 = NAME_RefractionBias;
    }
  }
  else {
    FVar9 = NAME_RefractionDepthBias;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), FVar9 = NAME_RefractionDepthBias, ::_TSS0 == -1)) {
      ::FName::FName(&NAME_RefractionDepthBias,L"RefractionDepthBias");
      _Init_thread_footer(&::_TSS0);
      FVar9 = NAME_RefractionDepthBias;
    }
  }
  iVar8 = (this->ScalarParameterValues).ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < iVar8) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar7 = (this->ScalarParameterValues).AllocatorInstance.Data + lVar10;
      if (((((uint)*(undefined8 *)pFVar7 == FVar9.ComparisonIndex.Value.Value) &&
           ((uint)((ulonglong)*(undefined8 *)pFVar7 >> 0x20) == FVar9.Number)) &&
          (*(int *)(pFVar7 + 0xc) == -1)) && (pFVar7[8] == (FScriptContainerElement)0x2)) {
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          *param_1 = *(float *)(pFVar7 + 0x10);
          return true;
        }
        break;
      }
      iVar8 = (this->ScalarParameterValues).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x24;
    } while ((int)uVar11 < iVar8);
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(pUVar1->_padding_ + 0x430))(pUVar1,param_1);
  }
  return (bool)uVar4;
}

// GetRenderProxy @ 147f44a20

FMaterialRenderProxy * __thiscall UMaterialInstance::GetRenderProxy(UMaterialInstance *this)

{
  return (FMaterialRenderProxy *)this->Resource;
}

// GetResourceSizeEx @ 147f44a60

void __thiscall
UMaterialInstance::GetResourceSizeEx(UMaterialInstance *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  if (this->bHasStaticPermutationResource != 0) {
    pFVar7 = (this->StaticPermutationMaterialResources).AllocatorInstance.Data;
    iVar3 = (this->StaticPermutationMaterialResources).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->StaticPermutationMaterialResources).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      FMaterialResource::GetResourceSizeEx(*(FMaterialResource **)pFVar7,param_1);
      pFVar7 = pFVar7 + 8;
    }
  }
  if (this->Resource != (FMaterialInstanceResource *)0x0) {
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x220);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->ScalarParameterValues).ArrayNum * 0x14);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->VectorParameterValues).ArrayNum << 5);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->DoubleVectorParameterValues).ArrayNum * 0x30);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->TextureParameterValues).ArrayNum * 0x18);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->RuntimeVirtualTextureParameterValues).ArrayNum * 0x18);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->SparseVolumeTextureParameterValues).ArrayNum * 0x18);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->FontParameterValues).ArrayNum * 0x18);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(this->ParameterCollectionParameterValues).ArrayNum * 0x18);
    uVar5 = (this->ScalarParameterValues).ArrayNum;
    uVar6 = 1;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->VectorParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->DoubleVectorParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->TextureParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->SparseVolumeTextureParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->FontParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (uVar5 < 4) {
        uVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar5 * 2);
    }
    uVar5 = (this->ParameterCollectionParameterValues).ArrayNum;
    if (uVar5 != 0) {
      if (3 < uVar5) {
        uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar6 = 1 << ((byte)lVar4 & 0x1f);
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar6 * 2);
      return;
    }
  }
  return;
}

// GetShadingModels @ 147f44f50

FMaterialShadingModelField __thiscall UMaterialInstance::GetShadingModels(UMaterialInstance *this)

{
  ushort *in_RDX;
  
  *in_RDX = (this->ShadingModels).ShadingModelField;
  return (FMaterialShadingModelField)(ushort)in_RDX;
}

// GetSpecularProfileOverride_Internal @ 147f450a0

USpecularProfile * __thiscall
UMaterialInstance::GetSpecularProfileOverride_Internal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  USpecularProfile *pUVar2;
  
  if ((this->bOverrideSpecularProfile == '\0') ||
     (pUVar2 = (this->SpecularProfileOverride).field0_0x0.DebugPtr,
     pUVar2 == (USpecularProfile *)0x0)) {
    pUVar1 = (this->Parent).field0_0x0.DebugPtr;
    if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f450c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (USpecularProfile *)(**(code **)(pUVar1->_padding_ + 0x560))();
      return pUVar2;
    }
    pUVar2 = (USpecularProfile *)0x0;
  }
  return pUVar2;
}

// GetSpecularProfile_Internal @ 147f450f0

USpecularProfile * __thiscall
UMaterialInstance::GetSpecularProfile_Internal(UMaterialInstance *this,uint param_1)

{
  UMaterialInterface *pUVar1;
  USpecularProfile *pUVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f450ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (USpecularProfile *)(**(code **)(pUVar1->_padding_ + 0x558))();
    return pUVar2;
  }
  return (USpecularProfile *)0x0;
}

// GetStaticParameters @ 147f45120

FStaticParameterSet * __thiscall
UMaterialInstance::GetStaticParameters
          (UMaterialInstance *this,FStaticParameterSet *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  FMaterialLayerStackFunctionsCache *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  __return_storage_ptr__->field_0x40 = __return_storage_ptr__->field_0x40 & 0xfe;
  if ((FStaticParameterSetRuntimeData *)__return_storage_ptr__ != &this->StaticParametersRuntime) {
    iVar1 = (this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum;
    _Src = (this->StaticParametersRuntime).StaticSwitchParameters.AllocatorInstance.Data;
    *(int *)&__return_storage_ptr__->field_0x8 = iVar1;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
                 (int *)&__return_storage_ptr__->field_0xc);
      memcpy(*(void **)__return_storage_ptr__,_Src,(longlong)iVar1 * 0x28);
    }
  }
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
             &__return_storage_ptr__->field_0x10,
             &(this->StaticParametersRuntime).MaterialLayers.Layers);
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
             &__return_storage_ptr__->field_0x20,
             &(this->StaticParametersRuntime).MaterialLayers.Blends);
  pTVar2 = (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.SharedReferenceCount.
           ReferenceController;
  pFVar3 = (this->StaticParametersRuntime).MaterialLayers.LayerStackCache.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x38;
  *(FMaterialLayerStackFunctionsCache **)&__return_storage_ptr__->field_0x30 = pFVar3;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x38 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  __return_storage_ptr__->field_0x40 =
       __return_storage_ptr__->field_0x40 ^
       (__return_storage_ptr__->field_0x40 ^ (this->StaticParametersRuntime).bHasMaterialLayers) & 1
  ;
  return __return_storage_ptr__;
}

// GetSubsurfaceProfileOverride_Internal @ 147f45270

USubsurfaceProfile * __thiscall
UMaterialInstance::GetSubsurfaceProfileOverride_Internal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  USubsurfaceProfile *pUVar2;
  
  if (this->bOverrideSubsurfaceProfile != '\0') {
    return (USubsurfaceProfile *)this->_padding_;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4528d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (USubsurfaceProfile *)(**(code **)(pUVar1->_padding_ + 0x548))();
    return pUVar2;
  }
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfileRoot_Internal @ 147f452b0

USubsurfaceProfile * __thiscall
UMaterialInstance::GetSubsurfaceProfileRoot_Internal(UMaterialInstance *this,uint param_1)

{
  UMaterialInterface *pUVar1;
  USubsurfaceProfile *pUVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f452bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (USubsurfaceProfile *)(**(code **)(pUVar1->_padding_ + 0x530))();
    return pUVar2;
  }
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfileRoot_Internal @ 147f452d0

USubsurfaceProfile * __thiscall
UMaterialInstance::GetSubsurfaceProfileRoot_Internal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  USubsurfaceProfile *pUVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f452df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (USubsurfaceProfile *)(**(code **)(pUVar1->_padding_ + 0x538))();
    return pUVar2;
  }
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfile_Internal @ 147f45310

USubsurfaceProfile * __thiscall
UMaterialInstance::GetSubsurfaceProfile_Internal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  USubsurfaceProfile *pUVar2;
  
  if (this->bOverrideSubsurfaceProfile != '\0') {
    return (USubsurfaceProfile *)this->_padding_;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4532d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (USubsurfaceProfile *)(**(code **)(pUVar1->_padding_ + 0x528))();
    return pUVar2;
  }
  return (USubsurfaceProfile *)0x0;
}

// GetTextureCollectionExpressionValues @ 147f45350

void __thiscall
UMaterialInstance::GetTextureCollectionExpressionValues
          (UMaterialInstance *this,FMaterialResource *param_1,
          TArray<UTextureCollection_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FUniformExpressionSet *this_00;
  int iVar3;
  UTextureCollection *local_res10;
  
  if ((param_1 == (FMaterialResource *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x566,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FMaterial::GetUniformExpressions((FMaterial *)param_1);
  iVar3 = 0;
  if (0 < (this_00->UniformTextureCollectionParameters).ArrayNum) {
    do {
      local_res10 = (UTextureCollection *)0x0;
      FUniformExpressionSet::GetGameThreadTextureCollectionValue
                (this_00,iVar3,(UMaterialInterface *)this,(FMaterial *)param_1,&local_res10);
      if (local_res10 != (UTextureCollection *)0x0) {
        TArray<UTextureCollection_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UTextureCollection_*_const_&>(param_2,&local_res10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (this_00->UniformTextureCollectionParameters).ArrayNum);
  }
  return;
}

// GetTextureCollectionParameterValue @ 147f45480

bool __thiscall
UMaterialInstance::GetTextureCollectionParameterValue
          (UMaterialInstance *this,FMemoryImageMaterialParameterInfo *param_1,
          UTextureCollection **param_2,bool param_3)

{
  char cVar1;
  UTextureCollection *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,4,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureDensity @ 147f45560

float __thiscall
UMaterialInstance::GetTextureDensity
          (UMaterialInstance *this,FName param_1,FMeshUVChannelInfo *param_2)

{
  longlong lVar1;
  FName FVar2;
  UMaterialInterface *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_res10 [2];
  int local_res18 [4];
  
  if ((param_2->bInitialized == false) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2513137771804103959>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x1517,"UVChannelData.bInitialized"), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar11 = (float)(*pcVar4)();
    return fVar11;
  }
  if ((param_2->bInitialized == false) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8716324033433434120>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                         ,0x7f8,"UVChannelData.bInitialized"), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar11 = (float)(*pcVar4)();
    return fVar11;
  }
  local_res18[0] = -1;
  local_res10[0] = -1;
  bVar5 = UMaterialInterface::FindTextureStreamingDataIndexRange
                    ((UMaterialInterface *)this,param_1,local_res18,local_res10);
  fVar11 = __real_322bcc77;
  fVar12 = 0.0;
  if (bVar5) {
    uVar10 = (ulonglong)local_res18[0];
    if (local_res18[0] <= local_res10[0]) {
      lVar7 = uVar10 << 4;
      fVar13 = fVar12;
      do {
        uVar9 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          fVar11 = (float)(*pcVar4)();
          return fVar11;
        }
        lVar1 = this->_padding_;
        FVar2 = *(FName *)(lVar7 + 8 + lVar1);
        if (((FVar2 == (FName)0x0) || (*(float *)(lVar7 + lVar1) <= fVar11)) ||
           (puVar8 = (uint *)(lVar1 + 4 + lVar7), 3 < *puVar8)) {
          puVar8 = (uint *)(lVar1 + 4 + lVar7);
LAB_147f456f7:
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8716324033433434109>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                             ,0x803,
                             "MatchingData.IsValid() && MatchingData.TextureName == TextureName");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            fVar11 = (float)(*pcVar4)();
            return fVar11;
          }
        }
        else if (FVar2 != param_1) goto LAB_147f456f7;
        uVar10 = (ulonglong)(uVar9 + 1);
        fVar12 = param_2->LocalUVDensities[(int)*puVar8] / *(float *)(lVar7 + lVar1);
        lVar7 = lVar7 + 0x10;
        if (fVar12 <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = fVar12;
      } while ((int)(uVar9 + 1) <= local_res10[0]);
    }
    if (fVar12 != 0.0) {
      return fVar12;
    }
  }
  pUVar3 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar3 == (UMaterialInterface *)0x0) {
    return fVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f4579a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar11 = (float)(**(code **)(pUVar3->_padding_ + 0x5b8))(pUVar3,param_1,param_2);
  return fVar11;
}

// GetTextureExpressionValues @ 147f45bb0

void __thiscall
UMaterialInstance::GetTextureExpressionValues
          (UMaterialInstance *this,FMaterialResource *param_1,
          TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  code *pcVar1;
  UTextureCollection *pUVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FUniformExpressionSet *this_00;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 local_res20 [8];
  uint local_78;
  UTexture *local_70;
  UTextureCollection *local_68;
  FUniformExpressionSet *local_60;
  UTexture *local_58 [3];
  
  if ((param_1 == (FMaterialResource *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x51f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FMaterial::GetUniformExpressions((FMaterial *)param_1);
  local_60 = this_00;
  if (param_3 != (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    uVar7 = this_00->UniformTextureParameters[0].ArrayNum +
            this_00->UniformTextureParameters[6].ArrayNum +
            this_00->UniformTextureParameters[5].ArrayNum +
            this_00->UniformTextureParameters[4].ArrayNum +
            this_00->UniformTextureParameters[3].ArrayNum +
            this_00->UniformTextureParameters[2].ArrayNum +
            this_00->UniformTextureParameters[1].ArrayNum;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_3->AllocatorInstance).Data,
               param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar7,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  uVar9 = 0;
  piVar13 = &this_00->UniformTextureParameters[0].ArrayNum;
  local_78 = 0;
  do {
    uVar7 = 0;
    if (0 < *piVar13) {
      lVar14 = 0;
      do {
        local_70 = (UTexture *)0x0;
        FUniformExpressionSet::GetGameThreadTextureValue
                  (this_00,(EMaterialTextureParameterType)uVar9,uVar7,(UMaterialInterface *)this,
                   (FMaterial *)param_1,&local_70,true);
        if (local_70 != (UTexture *)0x0) {
          uVar4 = TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                            (param_2,&local_70);
          if (param_3 !=
              (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0) {
            uVar6 = 0;
            if ((int)uVar7 < *piVar13) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FVar11 = ((TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *)
                     (piVar13 + -2))->AllocatorInstance;
            if (((ulonglong)FVar11 & 1) != 0) {
              FVar11 = (ForAnyElementType)
                       ((longlong)
                        &this_00->UniformTextureParameters[uVar9].AllocatorInstance.field_0x0 +
                       ((longlong)FVar11 >> 0x18));
            }
            if (param_3->ArrayNum <= (int)uVar4) {
              iVar8 = (uVar4 - param_3->ArrayNum) + 1;
              iVar5 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,iVar8,&param_3->AllocatorInstance,&param_3->ArrayNum,
                                 &param_3->ArrayMax);
              memset((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
                     (longlong)iVar8 << 4);
            }
            uVar6 = 0;
            if ((int)uVar4 < param_3->ArrayNum) {
              uVar6 = ~uVar4 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar12 = (FScriptContainerElement *)((longlong)FVar11 + 0x14U + lVar14);
            pFVar10 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10;
            if (((*(FScriptContainerElement **)&pFVar10->field_0x0 <= pFVar12) &&
                (pFVar12 < *(FScriptContainerElement **)&pFVar10->field_0x0 +
                           (longlong)*(int *)(pFVar10 + 0xc) * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = *(int *)&pFVar10[8].field_0x0;
            if (iVar5 == *(int *)(pFVar10 + 0xc)) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
            }
            *(int *)&pFVar10[8].field_0x0 = iVar5 + 1;
            uVar9 = (ulonglong)local_78;
            *(undefined4 *)(*(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)iVar5 * 4)
                 = *(undefined4 *)pFVar12;
            this_00 = local_60;
          }
        }
        uVar7 = uVar7 + 1;
        lVar14 = lVar14 + 0x1c;
      } while ((int)uVar7 < *piVar13);
    }
    local_78 = (int)uVar9 + 1;
    uVar9 = (ulonglong)local_78;
    piVar13 = piVar13 + 4;
    if (6 < local_78) {
      if (param_4) {
        if ((param_3 !=
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutIndices == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                               ,0x547,L"Texture Collections don\'t work with Texture Indices."),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = 0;
        if (0 < (this_00->UniformTextureCollectionParameters).ArrayNum) {
          do {
            local_68 = (UTextureCollection *)0x0;
            FUniformExpressionSet::GetGameThreadTextureCollectionValue
                      (this_00,iVar5,(UMaterialInterface *)this,(FMaterial *)param_1,&local_68);
            pUVar2 = local_68;
            if (local_68 != (UTextureCollection *)0x0) {
              pFVar12 = (local_68->Textures).AllocatorInstance.Data;
              iVar8 = (local_68->Textures).ArrayNum;
              pFVar10 = pFVar12 + (longlong)iVar8 * 8;
              while( true ) {
                if ((pUVar2->Textures).ArrayNum != iVar8) {
                  `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res20);
                }
                if (pFVar12 == pFVar10) break;
                local_58[0] = *(UTexture **)pFVar12;
                if (local_58[0] != (UTexture *)0x0) {
                  TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                            (param_2,local_58);
                }
                pFVar12 = pFVar12 + 8;
              }
            }
            iVar5 = iVar5 + 1;
            this_00 = local_60;
          } while (iVar5 < (local_60->UniformTextureCollectionParameters).ArrayNum);
        }
      }
      return;
    }
  } while( true );
}

// GetTextureParameterValue @ 147f46070

bool __thiscall
UMaterialInstance::GetTextureParameterValue
          (UMaterialInstance *this,FMemoryImageMaterialParameterInfo *param_1,UTexture **param_2,
          bool param_3)

{
  char cVar1;
  UTexture *local_38 [4];
  undefined1 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0xff;
  local_10 = 0xffffffff;
  local_c = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,3,param_1,local_38,!param_3 + '\x02');
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetUsedTextures @ 147f46290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInstance::GetUsedTextures
          (UMaterialInstance *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TOptional<EMaterialQualityLevel::Type> param_2,TOptional<EShaderPlatform> param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FMaterialResource_const_*> FVar5;
  FMaterial *this_00;
  UTextureCollection *pUVar6;
  bool bVar7;
  Type TVar8;
  TObjectPtr<UMaterialInterface>_u_0 this_01;
  UClass *pUVar9;
  FUniformExpressionSet *this_02;
  UMaterial *pUVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<FMaterialResource_const_*> FVar15;
  FMaterial *this_03;
  undefined6 in_register_00000082;
  Type *pTVar16;
  ulonglong uVar17;
  undefined4 in_register_0000008c;
  uint uVar18;
  int iVar19;
  TObjectPtr<UMaterialInterface>_u_0 TVar20;
  uint uVar21;
  UMaterialInstance *pUVar22;
  undefined1 auStackY_118 [32];
  UTexture *local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  Type local_ce;
  Type local_cd;
  uint local_cc;
  ForElementType<FMaterialResource_const_*> local_c8;
  undefined2 local_c0;
  char local_be;
  ForElementType<FMaterialResource_const_*> local_b8;
  FMaterial *local_b0;
  UMaterialInstance *local_a8;
  UTextureCollection *local_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  FMaterialResource *local_88;
  UTexture *local_80;
  TArray<FMaterialResource_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  pTVar16 = (Type *)CONCAT62(in_register_00000082,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  param_1->ArrayNum = 0;
  local_b0 = (FMaterial *)param_1;
  local_a8 = this;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  uVar21 = 0;
  local_cc = local_cc & 0xffffff00;
  local_b8._0_1_ = 1;
  local_c8._0_4_ = 3;
  uVar18 = local_c8._0_4_;
  local_c8._0_4_ = 3;
  if (pTVar16[1] != Low) {
    TVar8 = *pTVar16;
    if (TVar8 == Num) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2513137771804099968>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x580,"QualityLevel != EMaterialQualityLevel::Num");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TVar8 = GetCurrentMaterialQualityLevelChecked();
    }
    uStack_90 = uStack_90 & 0xffffff00;
    uVar21 = (uint)TVar8;
    local_98 = CONCAT31(local_98._1_3_,1);
    local_b8._0_4_ = local_98;
    local_cc = uStack_90;
    uStack_94 = uVar21;
    uStack_8c = uVar21;
    uVar18 = uVar21;
  }
  local_c8._0_4_ = uVar18;
  uVar18 = (uint)GMaxRHIShaderPlatform;
  this_01.DebugPtr = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x2d0))();
  if (((UMaterialInstance *)this_01.DebugPtr == (UMaterialInstance *)0x0) ||
     (bVar7 = UMaterial::IsDefaultMaterial((UMaterial *)this_01.DebugPtr), bVar7)) {
    pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
    local_be = *(char *)((undefined2 *)CONCAT44(in_register_0000008c,param_3) + 1);
    if (local_be != '\0') {
      local_c0 = *(undefined2 *)CONCAT44(in_register_0000008c,param_3);
    }
    local_cd = pTVar16[1];
    if (local_cd != Low) {
      local_ce = *pTVar16;
    }
    (**(code **)(pUVar10->_padding_ + 0x330))(pUVar10,local_b0,&local_ce,&local_c0);
  }
  else {
    while ((TVar20 = (TObjectPtr<UMaterialInterface>_u_0)this,
           (*(undefined1 *)((longlong)this + 0xe8U + 0x90) & 1) == 0 &&
           (TVar20.DebugPtr = this_01.DebugPtr,
           *(TObjectPtr<UMaterialInterface>_u_0 *)((longlong)this + 0xe8U + 0x48) !=
           (UMaterialInterface *)0x0))) {
      pUVar9 = StaticClass();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)((longlong)this + 0xe8U + 0x48),pUVar9);
      if ((!bVar7) ||
         (this = *(UMaterialInstance **)((longlong)this + 0xe8U + 0x48),
         this == (UMaterialInstance *)0x0)) break;
    }
    local_78.ArrayMax = 4;
    local_78.AllocatorInstance.SecondaryData = (ForElementType<FMaterialResource_const_*>)0x0;
    local_78.ArrayNum = 0;
    uVar3 = local_c8._0_4_;
    uVar4 = local_cc;
    if ((local_b8._0_1_ == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), uVar3 = local_c8._0_4_, uVar4 = local_cc, bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    while( true ) {
      if (((char)uVar4 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = local_b0;
      uVar12 = uVar18;
      if ((int)uVar3 < (int)uVar21) break;
      for (; (int)uVar12 <= (int)uVar18; uVar12 = uVar12 + 1) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar12 & 0xffff].bContainsValidPlatformInfo
             != 0) &&
           (local_88 = (FMaterialResource *)
                       (**(code **)((TVar20.DebugPtr)->_padding_ + 0x380))
                                 (TVar20.DebugPtr,(ulonglong)(uVar12 & 0xffff),uVar21 & 0xff),
           local_88 != (FMaterialResource *)0x0)) {
          TArray<FMaterialResource_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FMaterialResource_const_*_const_&>(&local_78,&local_88);
        }
      }
      uVar21 = uVar21 + 1;
    }
    uVar11 = (ulonglong)local_78.ArrayNum;
    local_cc = local_78.ArrayNum;
    FVar15 = (ForElementType<FMaterialResource_const_*>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FMaterialResource_const_*>)0x0)
    {
      FVar15 = local_78.AllocatorInstance.SecondaryData;
    }
    local_b8 = (ForElementType<FMaterialResource_const_*>)((longlong)FVar15 + uVar11 * 8);
    uVar17 = uVar11;
    while( true ) {
      FVar5 = local_b8;
      local_c8 = FVar15;
      if ((int)uVar11 != (int)uVar17) {
        local_d0 = 0;
        `TCheckedPointerIterator<FMaterialResource_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d0);
      }
      if (FVar15 == FVar5) break;
      this_03 = *(FMaterial **)FVar15;
      local_b0 = this_03;
      if ((this_03 == (FMaterial *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaterialResource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                             ,0x51f,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_02 = FMaterial::GetUniformExpressions(this_03);
      pUVar22 = local_a8;
      iVar19 = 0;
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[0].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,Standard2D,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,true)
          ;
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[0].ArrayNum);
      }
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[1].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,Cube,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,true);
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[1].ArrayNum);
      }
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[2].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,Array2D,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,true);
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[2].ArrayNum);
      }
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[3].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,ArrayCube,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,true);
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[3].ArrayNum);
      }
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[4].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,Volume,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,true);
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[4].ArrayNum);
      }
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[5].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,Virtual,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,true);
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[5].ArrayNum);
      }
      iVar13 = iVar19;
      if (0 < this_02->UniformTextureParameters[6].ArrayNum) {
        do {
          local_d8 = (UTexture *)0x0;
          FUniformExpressionSet::GetGameThreadTextureValue
                    (this_02,SparseVolume,iVar13,(UMaterialInterface *)pUVar22,this_03,&local_d8,
                     true);
          if (local_d8 != (UTexture *)0x0) {
            TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                      ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_d8);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_02->UniformTextureParameters[6].ArrayNum);
      }
      if (0 < (this_02->UniformTextureCollectionParameters).ArrayNum) {
        do {
          local_a0 = (UTextureCollection *)0x0;
          FUniformExpressionSet::GetGameThreadTextureCollectionValue
                    (this_02,iVar19,(UMaterialInterface *)pUVar22,this_03,&local_a0);
          pUVar6 = local_a0;
          if (local_a0 != (UTextureCollection *)0x0) {
            pFVar14 = (local_a0->Textures).AllocatorInstance.Data;
            iVar13 = (local_a0->Textures).ArrayNum;
            pFVar1 = pFVar14 + (longlong)iVar13 * 8;
            while( true ) {
              if ((pUVar6->Textures).ArrayNum != iVar13) {
                local_cf = 0;
                `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_cf);
              }
              pUVar22 = local_a8;
              if (pFVar14 == pFVar1) break;
              local_80 = *(UTexture **)pFVar14;
              if (local_80 != (UTexture *)0x0) {
                TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                          ((TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)this_00,&local_80);
              }
              pFVar14 = pFVar14 + 8;
            }
          }
          iVar19 = iVar19 + 1;
          this_03 = local_b0;
        } while (iVar19 < (this_02->UniformTextureCollectionParameters).ArrayNum);
      }
      uVar11 = (ulonglong)(uint)local_78.ArrayNum;
      FVar15 = (ForElementType<FMaterialResource_const_*>)((longlong)local_c8 + 8);
      uVar17 = (ulonglong)local_cc;
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FMaterialResource_const_*>)0x0)
    {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetUsedTexturesAndIndices @ 147f46900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterialInstance::GetUsedTexturesAndIndices
          (UMaterialInstance *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3,EShaderPlatform param_4)

{
  TObjectPtr<UMaterialInterface> *this_00;
  UMaterialInstance *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  FMaterialResource *pFVar5;
  UMaterial *pUVar6;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum);
  param_2->ArrayNum = 0;
  pUVar1 = this;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  while (pUVar1 != (UMaterialInstance *)0x0) {
    if (pUVar1->bHasStaticPermutationResource != 0) {
      pFVar5 = FindMaterialResource
                         (&pUVar1->StaticPermutationMaterialResources,param_4,param_3,true);
      if (pFVar5 == (FMaterialResource *)0x0) {
        return;
      }
      GetTextureExpressionValues(this,pFVar5,param_1,param_2,false);
      return;
    }
    this_00 = &pUVar1->Parent;
    if ((this_00->field0_0x0).DebugPtr == (UMaterialInterface *)0x0) break;
    pUVar3 = StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (!bVar2) break;
    pUVar1 = (UMaterialInstance *)(this_00->field0_0x0).DebugPtr;
  }
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))();
  if (plVar4 == (longlong *)0x0) {
    pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
    (**(code **)(pUVar6->_padding_ + 0x340))(pUVar6,param_1,param_2,param_3,param_4);
  }
  else {
    pFVar5 = (FMaterialResource *)(**(code **)(*plVar4 + 0x380))(plVar4,param_4,param_3);
    if (pFVar5 != (FMaterialResource *)0x0) {
      GetTextureExpressionValues(this,pFVar5,param_1,param_2,false);
    }
  }
  return;
}

// GetUserSceneTextureOverride @ 147f46c30

bool __thiscall
UMaterialInstance::GetUserSceneTextureOverride(UMaterialInstance *this,FName *param_1)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->UserSceneTextureOverrides).ArrayNum;
  pFVar4 = (FName *)(this->UserSceneTextureOverrides).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->UserSceneTextureOverrides).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUserSceneTextureOverride_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*pFVar4 == *param_1) {
      *param_1 = pFVar4[1];
      return true;
    }
    pFVar4 = pFVar4 + 2;
  }
  pUVar2 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    uVar3 = (**(code **)(pUVar2->_padding_ + 0x438))(pUVar2,param_1);
    return (bool)uVar3;
  }
  return false;
}

// HasCustomPrimitiveData @ 147f47060

bool __thiscall UMaterialInstance::HasCustomPrimitiveData(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4706f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4e0))();
    return (bool)uVar2;
  }
  return false;
}

// HasCustomizedUVs @ 147f47090

bool __thiscall UMaterialInstance::HasCustomizedUVs(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4709f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x518))();
    return (bool)uVar2;
  }
  return false;
}

// HasMeshPaintTexture @ 147f470c0

bool __thiscall UMaterialInstance::HasMeshPaintTexture(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f470cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4d8))();
    return (bool)uVar2;
  }
  return false;
}

// HasOverridenBaseProperties @ 147f470f0

bool __thiscall UMaterialInstance::HasOverridenBaseProperties(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  short *psVar10;
  FDisplacementScaling *this_00;
  FDisplacementScaling *pFVar11;
  FDisplacementFadeRange *this_01;
  FDisplacementFadeRange *pFVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar8 = (**(code **)(this->_padding_ + 0x2e0))(0,&local_50);
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (((pUVar1 != (UMaterialInterface *)0x0) && (lVar8 != 0)) &&
     ((*(byte *)(lVar8 + 0x1d8) & 0x20) == 0)) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x460);
    iVar6 = (**(code **)(this->_padding_ + 0x460))(this);
    iVar7 = (*pcVar2)(pUVar1);
    if (iVar6 == iVar7) {
      psVar9 = (short *)(**(code **)(this->_padding_ + 0x468))(this,local_res8);
      pUVar1 = (this->Parent).field0_0x0.DebugPtr;
      psVar10 = (short *)(**(code **)(pUVar1->_padding_ + 0x468))(pUVar1,local_res10);
      if (*psVar9 == *psVar10) {
        cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x478))();
        cVar4 = (**(code **)(this->_padding_ + 0x478))(this);
        if (cVar4 == cVar3) {
          cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x480))();
          cVar4 = (**(code **)(this->_padding_ + 0x480))(this);
          if (cVar4 == cVar3) {
            cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x488))();
            cVar4 = (**(code **)(this->_padding_ + 0x488))(this);
            if (cVar4 == cVar3) {
              cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x458))();
              cVar4 = (**(code **)(this->_padding_ + 0x458))(this);
              if (cVar4 == cVar3) {
                pcVar2 = *(code **)(this->_padding_ + 0x498);
                cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x498))();
                cVar4 = (*pcVar2)(this);
                if (cVar4 == cVar3) {
                  cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x520))();
                  cVar4 = (**(code **)(this->_padding_ + 0x520))(this);
                  if (cVar4 == cVar3) {
                    cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x578))()
                    ;
                    cVar4 = (**(code **)(this->_padding_ + 0x578))(this);
                    if (cVar4 == cVar3) {
                      this_00 = (FDisplacementScaling *)
                                (**(code **)(this->_padding_ + 0x4e8))(this,local_res18);
                      pUVar1 = (this->Parent).field0_0x0.DebugPtr;
                      pFVar11 = (FDisplacementScaling *)
                                (**(code **)(pUVar1->_padding_ + 0x4e8))(pUVar1,local_res20);
                      bVar5 = FDisplacementScaling::operator!=(this_00,pFVar11);
                      if (!bVar5) {
                        cVar3 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x4f0
                                            ))();
                        cVar4 = (**(code **)(this->_padding_ + 0x4f0))(this);
                        if (cVar4 == cVar3) {
                          this_01 = (FDisplacementFadeRange *)
                                    (**(code **)(this->_padding_ + 0x4f8))(this,local_58);
                          pUVar1 = (this->Parent).field0_0x0.DebugPtr;
                          pFVar12 = (FDisplacementFadeRange *)
                                    (**(code **)(pUVar1->_padding_ + 0x4f8))(pUVar1,&local_50);
                          bVar5 = FDisplacementFadeRange::operator!=(this_01,pFVar12);
                          if (!bVar5) {
                            fVar13 = (float)(**(code **)(((this->Parent).field0_0x0.DebugPtr)->
                                                         _padding_ + 0x450))();
                            fVar14 = (float)(**(code **)(this->_padding_ + 0x450))(this);
                            if ((float)((uint)(fVar14 - fVar13) &
                                       __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
                              fVar13 = (float)(**(code **)(((this->Parent).field0_0x0.DebugPtr)->
                                                           _padding_ + 0x500))();
                              fVar14 = (float)(**(code **)(this->_padding_ + 0x500))(this);
                              if ((float)((uint)(fVar14 - fVar13) &
                                         __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
                              {
                                return false;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return true;
  }
  return false;
}

// HasPixelAnimation @ 147f47440

bool __thiscall UMaterialInstance::HasPixelAnimation(UMaterialInstance *this)

{
  return this->bHasPixelAnimation;
}

// HasStaticParameters @ 147f474f0

bool __thiscall UMaterialInstance::HasStaticParameters(UMaterialInstance *this)

{
  if (((this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum == 0) &&
     ((this->StaticParametersRuntime).bHasMaterialLayers == 0)) {
    return false;
  }
  return true;
}

// HasSubstrateRoughnessTracking @ 147f47510

bool __thiscall UMaterialInstance::HasSubstrateRoughnessTracking(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4751f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x580))();
    return (bool)uVar2;
  }
  return true;
}

// HasVertexInterpolator @ 147f47540

bool __thiscall UMaterialInstance::HasVertexInterpolator(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4754f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x510))();
    return (bool)uVar2;
  }
  return false;
}

// InitResources @ 147f49e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialInstance::InitResources(UMaterialInstance *this)

{
  int iVar1;
  FMaterialInstanceResource *pFVar2;
  UMaterial *pUVar3;
  FMaterialInstanceCachedData *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  UClass *pUVar8;
  UMaterial *pUVar9;
  FString *pFVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  undefined ***pppuVar12;
  FMaterialInstanceCachedData *pFVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  FScriptContainerElement *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FString local_a8;
  code *local_98 [2];
  undefined **local_88;
  FMaterialInstanceResource *pFStack_80;
  UMaterial *local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMaterialInstanceResource *pFStack_50;
  UMaterial *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar9 = (UMaterial *)(this->Parent).field0_0x0.DebugPtr;
  if (pUVar9 != (UMaterial *)0x0) {
    local_b8 = 0;
    uStack_b0 = 0;
    cVar6 = (**(code **)(pUVar9->_padding_ + 0x300))();
    if (cVar6 == '\0') {
      pUVar8 = UMaterialInstanceDynamic::StaticClass();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) goto LAB_147f49f19;
    }
  }
  pUVar9 = UMaterial::GetDefaultMaterial(MD_Surface);
  if (pUVar9 == (UMaterial *)0x0) {
    pFVar10 = UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_a8,(UObject *)0x0,None);
    if ((pFVar10->Data).ArrayNum == 0) {
      local_c8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_c8 = (pFVar10->Data).AllocatorInstance.Data;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SafeParent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x40d,L"Invalid parent on %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
LAB_147f49f19:
  pFVar2 = this->Resource;
  if (pFVar2 != (FMaterialInstanceResource *)0x0) {
    pUVar3 = (UMaterial *)pFVar2->GameThreadParent;
    if (pUVar3 != pUVar9) {
      pFVar2->GameThreadParent = (UMaterialInterface *)pUVar9;
      if ((pUVar9 == (UMaterial *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentMaterialInterface != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                             ,0x1da,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FMaterialInstanceResource::GameThread_SetParent'::`5'::<lambda_1>,1,0>
                  ::_vftable_;
      local_70 = (undefined ***)0x0;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMaterialInstanceResource::GameThread_SetParent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_80 = pFVar2;
      local_78 = pUVar9;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FMaterialInstanceResource::GameThread_SetParent_::__l5::TSTR_InitMaterialInstanceResource476>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_68._0_8_ = local_98[0];
        local_98[0] = (code *)0x0;
        local_40 = local_70;
        local_58 = local_88;
        pFStack_50 = pFStack_80;
        local_48 = local_78;
        local_38 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FMaterialInstanceResource::GameThread_SetParent'::__l5::TSTR_InitMaterialInstanceResource476>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar11);
        uVar14 = (ulonglong)local_38;
        if ((2 < uVar14) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            pppuVar12 = (undefined ***)(local_68 + 0x10);
            if (local_40 != (undefined ***)0x0) {
              pppuVar12 = local_40;
            }
            (*(code *)(*pppuVar12)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar12 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar12 = local_70;
        }
        (*(code *)(*pppuVar12)[2])();
      }
      if (pUVar3 != (UMaterial *)0x0) {
        FRenderCommandFence::BeginFence((FRenderCommandFence *)&pUVar3->_padding_,RenderThread);
      }
    }
    pFVar4 = (this->CachedData).Ptr;
    pFVar13 = &FMaterialInstanceCachedData::EmptyData;
    if (pFVar4 != (FMaterialInstanceCachedData *)0x0) {
      pFVar13 = pFVar4;
    }
    FMaterialInstanceResource::GameThread_UpdateCachedData(this->Resource,pFVar13);
  }
  GameThread_InitMIParameters(this);
  if (this->Resource != (FMaterialInstanceResource *)0x0) {
    UMaterialInterface::UpdateMaterialRenderProxy
              ((UMaterialInterface *)this,(FMaterialRenderProxy *)this->Resource);
  }
  if (this->Resource != (FMaterialInstanceResource *)0x0) {
    FMaterialRenderProxy::CacheUniformExpressions_GameThread
              ((FMaterialRenderProxy *)this->Resource,false);
  }
  return;
}

// InitStaticPermutation @ 147f4a140

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall
UMaterialInstance::InitStaticPermutation
          (UMaterialInstance *this,EMaterialShaderPrecompileMode param_1)

{
  FScriptContainerElement *pFVar1;
  FMaterial *this_00;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 local_res18 [8];
  TArray<TRefCountPtr<FMaterial>,TSizedDefaultAllocator<32>_> local_38;
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> local_28;
  
  UpdateOverridableBaseProperties(this);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    CacheResourceShadersForRendering(this,param_1,&local_28);
  }
  iVar2 = local_28.ArrayNum;
  if (0 < local_28.ArrayNum) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar5.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar5.Data == pFVar1) break;
      this_00 = *(FMaterial **)FVar5.Data;
      (**(code **)(this_00->_padding_ + 8))(this_00);
      iVar3 = local_38.ArrayNum;
      if (local_38.ArrayNum == local_38.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      local_38.ArrayNum = iVar3 + 1;
      *(FMaterial **)(local_38.AllocatorInstance.Data + (longlong)iVar3 * 8) = this_00;
      FMaterial::AddRef(this_00);
      FVar5.Data = FVar5.Data + 8;
    }
    iVar2 = local_28.ArrayMax;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
    }
    FMaterial::DeleteMaterialsOnRenderThread(&local_38);
    DestructItems<TRefCountPtr<FMaterial>,int>
              ((TRefCountPtr<FMaterial> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// IsChildOf @ 147f4a740

bool __thiscall UMaterialInstance::IsChildOf(UMaterialInstance *this,UMaterialInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  
  while (this != (UMaterialInstance *)param_1) {
    bVar3 = true;
    if (this == (UMaterialInstance *)0x0) goto LAB_147f4a790;
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      this = (UMaterialInstance *)0x0;
    }
    else {
      this = (UMaterialInstance *)(this->Parent).field0_0x0.DebugPtr;
    }
  }
  bVar3 = this == (UMaterialInstance *)0x0;
LAB_147f4a790:
  return !bVar3;
}

// IsCompatibleWithLumenCardSharing @ 147f4a910

bool __thiscall UMaterialInstance::IsCompatibleWithLumenCardSharing(UMaterialInstance *this)

{
  return this->bCompatibleWithLumenCardSharing;
}

// IsComplete @ 147f4a940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall UMaterialInstance::IsComplete(UMaterialInstance *this)

{
  Type TVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  FCachedSystemScalabilityCVars *pFVar8;
  FMaterialResource *pFVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint uVar12;
  
  if (this->bHasStaticPermutationResource != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar10 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar10,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pUVar7 = UMaterialInstanceConstant::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if (((*(int *)(this->_padding_ + 0x38) < iVar2) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8)
           != &pUVar7->_padding_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsA(UMaterialInstanceConstant::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                             ,0xb9d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar12 = 1 << ((byte)GMaxRHIFeatureLevel & 0x1f) | (uint)this->_padding_ |
               UMaterialInterface::FeatureLevelsForAllMaterials;
      pFVar8 = GetCachedScalabilityCVars();
      TVar1 = pFVar8->MaterialQualityLevel;
      if (uVar12 == 0) {
        return true;
      }
      while( true ) {
        uVar11 = -uVar12 & uVar12;
        uVar12 = uVar12 & uVar12 - 1;
        iVar2 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar6 = 0;
        if (uVar11 != 0) {
          iVar6 = iVar2;
        }
        pFVar9 = FindMaterialResource
                           (&this->StaticPermutationMaterialResources,
                            GRHIGlobals.ShaderPlatformForFeatureLevel[iVar6],TVar1,true);
        if ((pFVar9 != (FMaterialResource *)0x0) &&
           (*(char *)((longlong)&pFVar9->_padding_ + 4) == '\0')) break;
        if (uVar12 == 0) {
          return true;
        }
      }
      return false;
    }
  }
  return true;
}

// IsDeferredDecal @ 147f4aaf0

bool __thiscall UMaterialInstance::IsDeferredDecal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4aaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4b8))();
    return (bool)uVar2;
  }
  return false;
}

// IsDependent @ 147f4ab20

bool __thiscall UMaterialInstance::IsDependent(UMaterialInstance *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  if ((UMaterialInstance *)param_1 == this) {
    return true;
  }
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    IsInGameThread();
    pUVar1 = (this->Parent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x000147f4ab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,param_1);
    return (bool)uVar2;
  }
  return false;
}

// IsDependent_Concurrent @ 147f4ab90

bool __thiscall
UMaterialInstance::IsDependent_Concurrent
          (UMaterialInstance *this,UMaterialInterface *param_1,
          TMaterialRecursionGuard<UMaterialInterface> *param_2)

{
  TMaterialRecursionGuard<UMaterialInterface> **ppTVar1;
  UMaterialInterface *pUVar2;
  undefined1 uVar3;
  TMaterialRecursionGuard<UMaterialInterface> *pTVar4;
  undefined8 local_18;
  TMaterialRecursionGuard<UMaterialInterface> *local_10;
  
  if ((UMaterialInstance *)param_1 != this) {
    pTVar4 = param_2;
    if ((this->Parent).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
      return false;
    }
    while ((UMaterialInstance *)pTVar4->Value != this) {
      ppTVar1 = &pTVar4->PreviousLink;
      pTVar4 = *ppTVar1;
      if (*ppTVar1 == (TMaterialRecursionGuard<UMaterialInterface> *)0x0) {
        TMaterialRecursionGuard<UMaterialInterface>::Set(param_2,(UMaterialInterface *)this);
        pUVar2 = (this->Parent).field0_0x0.DebugPtr;
        local_18 = 0;
        local_10 = param_2;
        uVar3 = (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,param_1,&local_18);
        return (bool)uVar3;
      }
    }
  }
  return true;
}

// IsDisplacementFadeEnabled @ 147f4ac40

bool __thiscall UMaterialInstance::IsDisplacementFadeEnabled(UMaterialInstance *this)

{
  return this->bEnableDisplacementFade;
}

// IsDitheredLODTransition @ 147f4ac90

bool __thiscall UMaterialInstance::IsDitheredLODTransition(UMaterialInstance *this)

{
  return this->DitheredLODTransition;
}

// IsMasked @ 147f4ae20

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterialInstance::IsMasked(UMaterialInstance *this)

{
  bool bVar1;
  char cVar2;
  EBlendMode EVar3;
  
  EVar3 = (**(code **)(this->_padding_ + 0x460))();
  bVar1 = IsMaskedBlendMode(EVar3);
  if (bVar1) {
    return true;
  }
  EVar3 = (**(code **)(this->_padding_ + 0x460))(this);
  bVar1 = IsTranslucentOnlyBlendMode(EVar3);
  if ((bVar1) && (cVar2 = (**(code **)(this->_padding_ + 0x458))(this), cVar2 != '\0')) {
    return true;
  }
  return false;
}

// IsPostProcessMaterial @ 147f4aeb0

bool __thiscall UMaterialInstance::IsPostProcessMaterial(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4aebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4c8))();
    return (bool)uVar2;
  }
  return false;
}

// IsPropertyActive @ 147f4aee0

bool __thiscall
UMaterialInstance::IsPropertyActive(UMaterialInstance *this,EMaterialProperty param_1)

{
  bool bVar1;
  UMaterial *this_00;
  
  this_00 = (UMaterial *)(**(code **)(this->_padding_ + 0x2d0))();
  if (this_00 != (UMaterial *)0x0) {
    bVar1 = UMaterial::IsPropertyActiveInDerived(this_00,param_1,(UMaterialInterface *)this);
    return bVar1;
  }
  return false;
}

// IsReadyForFinishDestroy @ 147f4af30

bool __thiscall UMaterialInstance::IsReadyForFinishDestroy(UMaterialInstance *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete((FRenderCommandFence *)&this->_padding_);
  if ((bVar1) && (this->bResourceCreated == false)) {
    return true;
  }
  return false;
}

// IsRedundant @ 147f4af90

bool __thiscall UMaterialInstance::IsRedundant(UMaterialInstance *this)

{
  FMaterialInstanceBasePropertyOverrides *pFVar1;
  undefined1 *puVar2;
  UMaterialInterface *pUVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((this->Parent).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    if ((this->NaniteOverrideMaterial).bEnableOverride != false) {
      local_18 = 0;
      uStack_10 = 0;
      pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x3a8))(0,&local_18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pUVar3 = (this->Parent).field0_0x0.DebugPtr;
      local_18 = 0;
      uStack_10 = 0;
      pUVar7 = (UObject *)(**(code **)(pUVar3->_padding_ + 0x3a8))(pUVar3,&local_18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      if (pUVar6 != pUVar7) {
        return false;
      }
    }
    if (((this->StaticParametersRuntime).StaticSwitchParameters.ArrayNum == 0) &&
       ((this->StaticParametersRuntime).bHasMaterialLayers == 0)) {
      lVar8 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x318))();
      lVar9 = (**(code **)(this->_padding_ + 0x318))(this);
      if (lVar9 == lVar8) {
        iVar10 = 0;
        do {
          pUVar3 = (this->Parent).field0_0x0.DebugPtr;
          pcVar4 = *(code **)(this->_padding_ + 0x328);
          lVar8 = (**(code **)(pUVar3->_padding_ + 0x328))(pUVar3,iVar10);
          lVar9 = (*pcVar4)(this,iVar10);
          if (lVar9 != lVar8) {
            return false;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 8);
        lVar8 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x528))();
        lVar9 = (**(code **)(this->_padding_ + 0x528))(this);
        if (lVar9 == lVar8) {
          bVar5 = Substrate::IsSubstrateEnabled();
          if ((bVar5) && (iVar10 = (**(code **)(this->_padding_ + 0x550))(this), iVar10 != 0)) {
            pUVar3 = (this->Parent).field0_0x0.DebugPtr;
            pcVar4 = *(code **)(this->_padding_ + 0x558);
            lVar8 = (**(code **)(pUVar3->_padding_ + 0x558))(pUVar3,0);
            lVar9 = (*pcVar4)(this,0);
            if (lVar9 != lVar8) {
              return false;
            }
          }
          if ((((((pFVar1->bOverride_OpacityMaskClipValue == '\0' &&
                   (pFVar1->bOverride_BlendMode == '\0' &&
                   (pFVar1->bOverride_ShadingModel == '\0' &&
                   (pFVar1->bOverride_DitheredLODTransition == '\0' &&
                   (pFVar1->bOverride_CastDynamicShadowAsMasked == '\0' &&
                   pFVar1->bOverride_TwoSided == '\0'))))) &&
                 ((this->BasePropertyOverrides).bOverride_CompatibleWithLumenCardSharing == '\0'))
                && ((this->BasePropertyOverrides).bOutputTranslucentVelocity == '\0' &&
                    (this->BasePropertyOverrides).bHasPixelAnimation == '\0')) &&
               (((this->TextureParameterValues).ArrayNum == 0 &&
                ((this->ScalarParameterValues).ArrayNum == 0)))) &&
              (((this->VectorParameterValues).ArrayNum == 0 &&
               (((this->DoubleVectorParameterValues).ArrayNum == 0 &&
                ((this->RuntimeVirtualTextureParameterValues).ArrayNum == 0)))))) &&
             (((this->FontParameterValues).ArrayNum == 0 &&
              ((this->ParameterCollectionParameterValues).ArrayNum == 0)))) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// IsShadingModelFromMaterialExpression @ 147f4b1d0

bool __thiscall UMaterialInstance::IsShadingModelFromMaterialExpression(UMaterialInstance *this)

{
  return this->bIsShadingModelFromMaterialExpression;
}

// IsTessellationEnabled @ 147f4b220

bool __thiscall UMaterialInstance::IsTessellationEnabled(UMaterialInstance *this)

{
  return this->bEnableTessellation;
}

// IsThinSurface @ 147f4b250

bool __thiscall UMaterialInstance::IsThinSurface(UMaterialInstance *this)

{
  return this->bIsThinSurface;
}

// IsTranslucencyVelocityFromDepth @ 147f4b2a0

bool __thiscall UMaterialInstance::IsTranslucencyVelocityFromDepth(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4b2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4a0))();
    return (bool)uVar2;
  }
  return false;
}

// IsTranslucencyWritingVelocity @ 147f4b2f0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterialInstance::IsTranslucencyWritingVelocity(UMaterialInstance *this)

{
  bool bVar1;
  EBlendMode EVar2;
  
  if (this->bOutputTranslucentVelocity != '\0') {
    EVar2 = (**(code **)(this->_padding_ + 0x460))();
    bVar1 = IsTranslucentBlendMode(EVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsTwoSided @ 147f4b360

bool __thiscall UMaterialInstance::IsTwoSided(UMaterialInstance *this)

{
  return this->TwoSided;
}

// IsUIMaterial @ 147f4b3b0

bool __thiscall UMaterialInstance::IsUIMaterial(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4b3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4c0))();
    return (bool)uVar2;
  }
  return false;
}

// LogMaterialsAndTextures @ 147f4c450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterialInstance::LogMaterialsAndTextures
          (UMaterialInstance *this,FOutputDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  code *pcVar3;
  FOutputDevice *this_00;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  UClass *pUVar8;
  FMaterialResource *this_01;
  FUniformExpressionSet *this_02;
  EShaderPlatform EVar9;
  ForElementType<FSetElementId> FVar10;
  TObjectPtr<UMaterialInterface>_u_0 TVar11;
  wchar_t *pwVar12;
  TObjectPtr<UMaterialInterface>_u_0 TVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int iVar16;
  TObjectPtr<UMaterialInterface>_u_0 TVar17;
  TObjectPtr<UMaterialInterface>_u_0 TVar18;
  TObjectPtr<UMaterialInterface>_u_0 TVar19;
  TObjectPtr<UMaterialInterface>_u_0 TVar20;
  Type TVar21;
  TObjectPtr<UMaterialInterface>_u_0 TVar22;
  undefined1 auStackY_148 [32];
  UTexture *local_108;
  undefined1 local_100 [4];
  int local_fc;
  FOutputDevice *local_f8;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> local_f0;
  TObjectPtr<UMaterialInterface>_u_0 local_e0;
  FName local_d8;
  undefined1 local_d0 [4];
  FName local_cc;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_fc = param_2;
  local_f8 = param_1;
  lVar6 = (**(code **)(this->_padding_ + 0x180))();
  pFVar7 = GetCachedScalabilityCVars();
  TVar2 = pFVar7->MaterialQualityLevel;
  TVar21 = GMaxRHIFeatureLevel;
  if (lVar6 != 0) {
    TVar21 = (uint)*(byte *)(lVar6 + 0x188);
  }
  local_cc = (FName)this->_padding_;
  ::FName::ToString(&local_cc,&local_c0);
  if ((0xff < (uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x279,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FOutputDevice::LogfImpl(param_1,L"%sMaterialInstance: %s");
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  TVar11.DebugPtr = (UMaterialInterface *)0x0;
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_4_ = 0;
  local_98._12_4_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TVar13 = (TObjectPtr<UMaterialInterface>_u_0)this;
  TVar17.DebugPtr = TVar11.DebugPtr;
  TVar19.DebugPtr = TVar11.DebugPtr;
  TVar20.DebugPtr = TVar11.DebugPtr;
  TVar22.DebugPtr = TVar11.DebugPtr;
  do {
    TVar18.DebugPtr = (UMaterialInterface *)0x0;
    uVar5 = ((uint)((ulonglong)TVar13.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar13.DebugPtr >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_e0 = TVar13;
    if (TVar11._0_4_ != TVar20._0_4_) {
      FVar10 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar10 = local_58;
      }
      for (iVar15 = *(int *)((longlong)FVar10 +
                            (ulonglong)(TVar19._0_4_ - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          iVar15 != -1; iVar15 = *(int *)(local_98._0_8_ + (longlong)iVar15 * 0x10 + 8)) {
        if (*(UMaterialInstance **)(local_98._0_8_ + (longlong)iVar15 * 0x10) ==
            (UMaterialInstance *)TVar13.DebugPtr) goto LAB_147f4c6b8;
      }
    }
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)local_98,(UMaterialInterface **)local_d0,(bool *)&local_e0);
    if ((UMaterialInstance *)TVar13.DebugPtr == (UMaterialInstance *)0x0) {
LAB_147f4c656:
      TVar13.DebugPtr = (UMaterialInterface *)0x0;
    }
    else {
      pUVar8 = StaticClass();
      iVar15 = (int)pUVar8->_padding_;
      if ((iVar15 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar8->_padding_)) {
        TVar18 = TVar13;
      }
      if ((UMaterialInstance *)TVar13.DebugPtr == (UMaterialInstance *)0x0) goto LAB_147f4c656;
      pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
      iVar15 = (int)pUVar8->_padding_;
      if ((*(int *)((TVar13.DebugPtr)->_padding_ + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar8->_padding_)) goto LAB_147f4c656;
    }
    if (((UMaterialInstance *)TVar22.DebugPtr == (UMaterialInstance *)0x0) &&
       ((UMaterialInstance *)TVar13.DebugPtr != (UMaterialInstance *)0x0)) {
      TVar22 = TVar13;
    }
    if ((UMaterialInstance *)TVar17.DebugPtr == (UMaterialInstance *)0x0) {
      if ((UMaterialInstance *)TVar18.DebugPtr != (UMaterialInstance *)0x0) {
        if (((uint)TVar18.DebugPtr[1].LightmassSettings.EmissiveBoost & 1) != 0) {
          TVar17 = TVar18;
        }
        goto LAB_147f4c681;
      }
LAB_147f4c6ab:
      local_e0.DebugPtr = (UMaterialInterface *)0x0;
LAB_147f4c6b8:
      TVar13 = local_e0;
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      local_98._8_4_ = 0;
      if (local_98._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if ((UMaterialInstance *)TVar13.DebugPtr == (UMaterialInstance *)0x0) {
        if ((UMaterialInstance *)TVar17.DebugPtr == (UMaterialInstance *)0x0) {
          if ((UMaterialInstance *)TVar22.DebugPtr != (UMaterialInstance *)0x0) {
            (**(code **)((TVar22.DebugPtr)->_padding_ + 0x3d0))
                      (TVar22.DebugPtr,local_f8,local_fc + 1);
            return;
          }
          TCString<wchar_t>::Tab(local_fc + 1);
          pwVar12 = L"%sNo Textures : No Material Found";
        }
        else {
          if (TVar21 == Num) {
            EVar9 = SP_NumPlatforms;
          }
          else {
            EVar9 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar21];
          }
          this_01 = FindMaterialResource
                              ((TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *)
                               &TVar17.DebugPtr[3]._padding_,EVar9,TVar2,true);
          if (this_01 == (FMaterialResource *)0x0) {
            TCString<wchar_t>::Tab(local_fc + 1);
            pwVar12 = L"%sNo Textures : Invalid MaterialResource";
          }
          else {
            bVar4 = FMaterial::HasValidGameThreadShaderMap((FMaterial *)this_01);
            if (bVar4) {
              iVar16 = 0;
              local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_f0.ArrayNum = 0;
              local_f0.ArrayMax = 0;
              this_02 = FMaterial::GetUniformExpressions((FMaterial *)this_01);
              iVar15 = iVar16;
              if (0 < this_02->UniformTextureParameters[0].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,Standard2D,iVar15,(UMaterialInterface *)this,
                             (FMaterial *)this_01,&local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < this_02->UniformTextureParameters[0].ArrayNum);
              }
              iVar15 = iVar16;
              if (0 < this_02->UniformTextureParameters[1].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,Cube,iVar15,(UMaterialInterface *)this,(FMaterial *)this_01,
                             &local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < this_02->UniformTextureParameters[1].ArrayNum);
              }
              iVar15 = iVar16;
              if (0 < this_02->UniformTextureParameters[2].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,Array2D,iVar15,(UMaterialInterface *)this,(FMaterial *)this_01,
                             &local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < this_02->UniformTextureParameters[2].ArrayNum);
              }
              iVar15 = iVar16;
              if (0 < this_02->UniformTextureParameters[3].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,ArrayCube,iVar15,(UMaterialInterface *)this,
                             (FMaterial *)this_01,&local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < this_02->UniformTextureParameters[3].ArrayNum);
              }
              iVar15 = iVar16;
              if (0 < this_02->UniformTextureParameters[4].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,Volume,iVar15,(UMaterialInterface *)this,(FMaterial *)this_01,
                             &local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < this_02->UniformTextureParameters[4].ArrayNum);
              }
              iVar15 = iVar16;
              if (0 < this_02->UniformTextureParameters[5].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,Virtual,iVar15,(UMaterialInterface *)this,(FMaterial *)this_01,
                             &local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < this_02->UniformTextureParameters[5].ArrayNum);
              }
              if (0 < this_02->UniformTextureParameters[6].ArrayNum) {
                do {
                  local_108 = (UTexture *)0x0;
                  FUniformExpressionSet::GetGameThreadTextureValue
                            (this_02,SparseVolume,iVar16,(UMaterialInterface *)this,
                             (FMaterial *)this_01,&local_108,true);
                  if (local_108 != (UTexture *)0x0) {
                    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(&local_f0,&local_108);
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 < this_02->UniformTextureParameters[6].ArrayNum);
              }
              this_00 = local_f8;
              iVar15 = local_fc;
              iVar16 = local_f0.ArrayNum;
              pFVar1 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8;
              FVar14.Data = local_f0.AllocatorInstance.Data;
              while( true ) {
                if (local_f0.ArrayNum != iVar16) {
                  local_100[0] = 0;
                  `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_100);
                }
                if (FVar14.Data == pFVar1) break;
                if (*(longlong *)FVar14.Data != 0) {
                  local_d8 = *(FName *)(*(longlong *)FVar14.Data + 0x18);
                  ::FName::ToString(&local_d8,&local_b0);
                  if (((iVar15 + 1 < 0) || (0xff < iVar15 + 1)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                         ,0x279,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  FOutputDevice::LogfImpl(this_00,L"%s%s");
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                }
                FVar14.Data = FVar14.Data + 8;
              }
              if (local_f0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free(local_f0.AllocatorInstance.Data);
              return;
            }
            TCString<wchar_t>::Tab(local_fc + 1);
            pwVar12 = L"%sNo Textures : Invalid GameThread ShaderMap";
          }
        }
      }
      else {
        TCString<wchar_t>::Tab(local_fc + 1);
        pwVar12 = L"%sNo Textures : Cycling Parent Loop";
      }
      FOutputDevice::LogfImpl(local_f8,pwVar12);
      return;
    }
    if ((UMaterialInstance *)TVar18.DebugPtr == (UMaterialInstance *)0x0) goto LAB_147f4c6ab;
LAB_147f4c681:
    TVar13 = (TObjectPtr<UMaterialInterface>_u_0)
             (((TObjectPtr<UMaterialInterface> *)&TVar18.DebugPtr[1].SubsurfaceProfiles.ArrayNum)->
             field0_0x0).DebugPtr;
    local_e0 = TVar13;
    if ((UMaterialInstance *)TVar13.DebugPtr == (UMaterialInstance *)0x0) goto LAB_147f4c6b8;
    TVar19._4_4_ = 0;
    TVar19._0_4_ = local_50;
    TVar20._4_4_ = 0;
    TVar20._0_4_ = local_64;
    TVar11._4_4_ = 0;
    TVar11._0_4_ = local_98._8_4_;
  } while( true );
}

// NumSpecularProfile_Internal @ 147f4cbe0

uint __thiscall UMaterialInstance::NumSpecularProfile_Internal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  uint uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4cbef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x550))();
    return uVar2;
  }
  return 0;
}

// NumSubsurfaceProfileRoot_Internal @ 147f4cc10

uint __thiscall UMaterialInstance::NumSubsurfaceProfileRoot_Internal(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  uint uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4cc1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x540))();
    return uVar2;
  }
  return 0;
}

// OverrideTexture @ 147f4cc60

void __thiscall
UMaterialInstance::OverrideTexture
          (UMaterialInstance *this,UTexture *param_1,UTexture *param_2,Type param_3)

{
  return;
}

// PostDuplicate @ 147f4cca0

void __thiscall UMaterialInstance::PostDuplicate(UMaterialInstance *this,bool param_1)

{
  return;
}

// PostInitProperties @ 147f4cef0

void __thiscall UMaterialInstance::PostInitProperties(UMaterialInstance *this)

{
  FMaterialInstanceResource *this_00;
  wchar_t *pwVar1;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,MaterialInstance,true);
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      this_00 = ::operator_new(0x220);
      if (this_00 != (FMaterialInstanceResource *)0x0) {
        local_res10 = (FName)this->_padding_;
        ::FName::ToString(&local_res10,&local_18);
        FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)this_00,&local_18);
        this_00->Owner = this;
        this_00->_padding_ = (longlong)&___7FMaterialInstanceResource__6B_;
        this_00->Parent = (UMaterialInterface *)0x0;
        this_00->GameThreadParent = (UMaterialInterface *)0x0;
        (this_00->StaticSwitchParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->StaticSwitchParameterArray).Array.ArrayNum = 0;
        (this_00->StaticSwitchParameterArray).Array.ArrayMax = 0;
        (this_00->StaticSwitchParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->StaticSwitchParameterArray).HashTable.ArrayNum = 0;
        (this_00->StaticSwitchParameterArray).HashTable.ArrayMax = 0;
        (this_00->VectorParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->VectorParameterArray).Array.ArrayNum = 0;
        (this_00->VectorParameterArray).Array.ArrayMax = 0;
        (this_00->VectorParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->VectorParameterArray).HashTable.ArrayNum = 0;
        (this_00->VectorParameterArray).HashTable.ArrayMax = 0;
        (this_00->DoubleVectorParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->DoubleVectorParameterArray).Array.ArrayNum = 0;
        (this_00->DoubleVectorParameterArray).Array.ArrayMax = 0;
        (this_00->DoubleVectorParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->DoubleVectorParameterArray).HashTable.ArrayNum = 0;
        (this_00->DoubleVectorParameterArray).HashTable.ArrayMax = 0;
        (this_00->ScalarParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->ScalarParameterArray).Array.ArrayNum = 0;
        (this_00->ScalarParameterArray).Array.ArrayMax = 0;
        (this_00->ScalarParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->ScalarParameterArray).HashTable.ArrayNum = 0;
        (this_00->ScalarParameterArray).HashTable.ArrayMax = 0;
        (this_00->TextureParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->TextureParameterArray).Array.ArrayNum = 0;
        (this_00->TextureParameterArray).Array.ArrayMax = 0;
        (this_00->TextureParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->TextureParameterArray).HashTable.ArrayNum = 0;
        (this_00->TextureParameterArray).HashTable.ArrayMax = 0;
        (this_00->TextureCollectionParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->TextureCollectionParameterArray).Array.ArrayNum = 0;
        (this_00->TextureCollectionParameterArray).Array.ArrayMax = 0;
        (this_00->TextureCollectionParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->TextureCollectionParameterArray).HashTable.ArrayNum = 0;
        (this_00->TextureCollectionParameterArray).HashTable.ArrayMax = 0;
        (this_00->RuntimeVirtualTextureParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->RuntimeVirtualTextureParameterArray).Array.ArrayNum = 0;
        (this_00->RuntimeVirtualTextureParameterArray).Array.ArrayMax = 0;
        (this_00->RuntimeVirtualTextureParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->RuntimeVirtualTextureParameterArray).HashTable.ArrayNum = 0;
        (this_00->RuntimeVirtualTextureParameterArray).HashTable.ArrayMax = 0;
        (this_00->SparseVolumeTextureParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->SparseVolumeTextureParameterArray).Array.ArrayNum = 0;
        (this_00->SparseVolumeTextureParameterArray).Array.ArrayMax = 0;
        (this_00->SparseVolumeTextureParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->SparseVolumeTextureParameterArray).HashTable.ArrayNum = 0;
        (this_00->SparseVolumeTextureParameterArray).HashTable.ArrayMax = 0;
        (this_00->ParameterCollectionParameterArray).Array.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->ParameterCollectionParameterArray).Array.ArrayNum = 0;
        (this_00->ParameterCollectionParameterArray).Array.ArrayMax = 0;
        (this_00->ParameterCollectionParameterArray).HashTable.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this_00->ParameterCollectionParameterArray).HashTable.ArrayNum = 0;
        (this_00->ParameterCollectionParameterArray).HashTable.ArrayMax = 0;
        (this_00->ParentLayerIndexRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->ParentLayerIndexRemap).ArrayNum = 0;
        (this_00->ParentLayerIndexRemap).ArrayMax = 0;
        (this_00->UserSceneTextureOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        (this_00->UserSceneTextureOverrides).ArrayNum = 0;
        (this_00->UserSceneTextureOverrides).ArrayMax = 0;
        (this_00->PostProcessBlendableOverrides).bOverrideBlendableLocation = false;
        (this_00->PostProcessBlendableOverrides).bOverrideBlendablePriority = false;
        (this_00->PostProcessBlendableOverrides).BlendableLocationOverride.Value = '\0';
        (this_00->PostProcessBlendableOverrides).BlendablePriorityOverride = 0;
      }
      this->Resource = this_00;
      this->bResourceCreated = true;
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PostLoad @ 147f4d1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall UMaterialInstance::PostLoad(UMaterialInstance *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  UMaterialInterface *pUVar5;
  UObject *pUVar6;
  longlong lVar7;
  FName FVar8;
  code *pcVar9;
  double dVar10;
  uchar auVar11 [8];
  bool bVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FLinkerLoad *pFVar18;
  FMaterial *pFVar19;
  wchar_t *pwVar20;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  FNameEntryId FVar29;
  FMaterial *pFVar30;
  undefined1 auStackY_198 [32];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  FLLMScope local_134;
  LARGE_INTEGER local_130;
  FPSOPrecacheParams_u_0 local_128;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_120;
  TPairInitializer<FGuid_const_&,UMaterialInterface_*_&&> local_110;
  FName local_100;
  UMaterialInstance *local_f8;
  FVertexFactoryType *local_f0;
  FMemScope local_e8;
  FStatMessage local_e0;
  FGuid *local_d0;
  UMaterialInstance **local_c8;
  TArrayView<FVertexFactoryType_const_*_const,int> local_c0;
  FName local_b0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FLLMScope::FLLMScope(&local_134,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_e8,MaterialInstance,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3439,"MaterialInstancePostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
               ,0xd6f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3439);
  }
  UObject::PostLoad((UObject *)this);
  if (GEventDrivenLoaderEnabled == false) {
    UMaterialInterface::PostLoadDefaultMaterials();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar20 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar20,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    ProcessSerializedInlineShaderMaps
              ((UMaterialInterface *)this,&this->LoadedMaterialResources,
               &this->StaticPermutationMaterialResources);
  }
  else {
    iVar4 = (this->LoadedMaterialResources).ArrayNum;
    pFVar19 = (FMaterial *)(this->LoadedMaterialResources).AllocatorInstance.Data;
    pFVar30 = (FMaterial *)((longlong)pFVar19 + (longlong)iVar4 * 0x160);
    while( true ) {
      if ((this->LoadedMaterialResources).ArrayNum != iVar4) {
        local_138 = 0;
        `TCheckedPointerIterator<FMaterialResource,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_138);
      }
      if (pFVar19 == pFVar30) break;
      FMaterial::DiscardShaderMap(pFVar19);
      pFVar19 = (FMaterial *)&pFVar19[5].QualityLevel;
    }
  }
  DestructItems<FMaterialResource,int>
            ((FMaterialResource *)(this->LoadedMaterialResources).AllocatorInstance.Data,
             (this->LoadedMaterialResources).ArrayNum);
  uVar25 = 0;
  piVar1 = &(this->LoadedMaterialResources).ArrayMax;
  (this->LoadedMaterialResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,0,&(this->LoadedMaterialResources).AllocatorInstance,0,piVar1);
  }
  FMaterialOverrideNanite::FixupLegacySoftReference(&this->NaniteOverrideMaterial,(UObject *)this);
  UMaterialInterface::AssertDefaultMaterialsPostLoaded();
  pUVar5 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar5 != (UMaterialInterface *)0x0) {
    if ((GEventDrivenLoaderEnabled != false) && (((uint)pUVar5->_padding_ >> 10 & 1) != 0)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Parent->HasAnyFlags(RF_NeedLoad)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                          ,0xdaa,L"");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    UObject::ConditionalPostLoad((UObject *)(this->Parent).field0_0x0.DebugPtr);
  }
  uVar24 = uVar25;
  uVar28 = uVar25;
  if (0 < (this->TextureParameterValues).ArrayNum) {
    do {
      uVar22 = (uint)uVar24;
      uVar15 = 0;
      if ((int)uVar22 < (this->TextureParameterValues).ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar6 = *(UObject **)((this->TextureParameterValues).AllocatorInstance.Data + uVar28 + 0x10);
      if (pUVar6 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(pUVar6);
      }
      uVar24 = (ulonglong)(uVar22 + 1);
      uVar28 = uVar28 + 0x28;
    } while ((int)(uVar22 + 1) < (this->TextureParameterValues).ArrayNum);
  }
  uVar15 = 0;
  uVar24 = uVar25;
  uVar28 = uVar25;
  if (0 < (this->TextureCollectionParameterValues).ArrayNum) {
    do {
      uVar23 = (uint)uVar24;
      uVar22 = uVar15;
      if ((int)uVar23 < (this->TextureCollectionParameterValues).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar6 = *(UObject **)
                ((this->TextureCollectionParameterValues).AllocatorInstance.Data + uVar28 + 0x10);
      if (pUVar6 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(pUVar6);
      }
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar28 = uVar28 + 0x28;
    } while ((int)(uVar23 + 1) < (this->TextureCollectionParameterValues).ArrayNum);
  }
  uVar24 = uVar25;
  uVar28 = uVar25;
  if (0 < (this->ParameterCollectionParameterValues).ArrayNum) {
    do {
      uVar23 = (uint)uVar24;
      uVar22 = uVar15;
      if ((int)uVar23 < (this->ParameterCollectionParameterValues).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar6 = *(UObject **)
                ((this->ParameterCollectionParameterValues).AllocatorInstance.Data + uVar28 + 0x10);
      if (pUVar6 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(pUVar6);
      }
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar28 = uVar28 + 0x28;
    } while ((int)(uVar23 + 1) < (this->ParameterCollectionParameterValues).ArrayNum);
  }
  uVar24 = uVar25;
  uVar28 = uVar25;
  if (0 < (this->RuntimeVirtualTextureParameterValues).ArrayNum) {
    do {
      uVar23 = (uint)uVar24;
      uVar22 = uVar15;
      if ((int)uVar23 < (this->RuntimeVirtualTextureParameterValues).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar6 = *(UObject **)
                ((this->RuntimeVirtualTextureParameterValues).AllocatorInstance.Data + uVar28 + 0x10
                );
      if (pUVar6 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(pUVar6);
      }
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar28 = uVar28 + 0x28;
    } while ((int)(uVar23 + 1) < (this->RuntimeVirtualTextureParameterValues).ArrayNum);
  }
  uVar24 = uVar25;
  uVar28 = uVar25;
  if (0 < (this->SparseVolumeTextureParameterValues).ArrayNum) {
    do {
      uVar23 = (uint)uVar24;
      uVar22 = uVar15;
      if ((int)uVar23 < (this->SparseVolumeTextureParameterValues).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar6 = *(UObject **)
                ((this->SparseVolumeTextureParameterValues).AllocatorInstance.Data + uVar28 + 0x10);
      if (pUVar6 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(pUVar6);
      }
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar28 = uVar28 + 0x28;
    } while ((int)(uVar23 + 1) < (this->SparseVolumeTextureParameterValues).ArrayNum);
  }
  uVar24 = uVar25;
  if (0 < (this->FontParameterValues).ArrayNum) {
    do {
      uVar23 = (uint)uVar25;
      uVar22 = uVar15;
      if ((int)uVar23 < (this->FontParameterValues).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pUVar6 = *(UObject **)((this->FontParameterValues).AllocatorInstance.Data + uVar24 + 0x10);
      if (pUVar6 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(pUVar6);
      }
      uVar25 = (ulonglong)(uVar23 + 1);
      uVar24 = uVar24 + 0x30;
    } while ((int)(uVar23 + 1) < (this->FontParameterValues).ArrayNum);
  }
  if ((this->StaticParametersRuntime).bHasMaterialLayers != 0) {
    pFVar26 = (this->StaticParametersRuntime).MaterialLayers.Layers.AllocatorInstance.Data;
    iVar4 = (this->StaticParametersRuntime).MaterialLayers.Layers.ArrayNum;
    pFVar2 = pFVar26 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->StaticParametersRuntime).MaterialLayers.Layers.ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMaterialFunctionInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_137);
      }
      if (pFVar26 == pFVar2) break;
      if (*(UObject **)pFVar26 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(*(UObject **)pFVar26);
      }
      pFVar26 = pFVar26 + 8;
    }
    pFVar26 = (this->StaticParametersRuntime).MaterialLayers.Blends.AllocatorInstance.Data;
    iVar4 = (this->StaticParametersRuntime).MaterialLayers.Blends.ArrayNum;
    pFVar2 = pFVar26 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->StaticParametersRuntime).MaterialLayers.Blends.ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMaterialFunctionInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_136);
      }
      if (pFVar26 == pFVar2) break;
      if (*(UObject **)pFVar26 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(*(UObject **)pFVar26);
      }
      pFVar26 = pFVar26 + 8;
    }
  }
  lVar7 = this->_padding_;
  if (lVar7 != 0) {
    puVar27 = *(undefined8 **)(lVar7 + 0x400);
    iVar4 = *(int *)(lVar7 + 0x408);
    puVar3 = puVar27 + iVar4;
    while( true ) {
      if (*(int *)(lVar7 + 0x408) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_135);
      }
      if (puVar27 == puVar3) break;
      if ((UObject *)*puVar27 != (UObject *)0x0) {
        UObject::ConditionalPostLoad((UObject *)*puVar27);
      }
      puVar27 = puVar27 + 1;
    }
  }
  UMaterialInterface::FilterOutPlatformShadingModels(GMaxRHIShaderPlatform,&this->ShadingModels);
  if (this->Resource != (FMaterialInstanceResource *)0x0) {
    UMaterialInterface::UpdateMaterialRenderProxy
              ((UMaterialInterface *)this,(FMaterialRenderProxy *)this->Resource);
  }
  QueryPerformanceCounter(&local_130);
  dVar10 = (double)CONCAT44(local_130.s.HighPart,local_130.s.LowPart) *
           FGenericPlatformTime::SecondsPerCycle;
  bVar13 = IsMaterialMapDDCEnabled();
  InitStaticPermutation(this,(uint)bVar13);
  QueryPerformanceCounter((LARGE_INTEGER *)&local_110.Value);
  auVar11 = (uchar  [8])
            (double)(float)((double)(longlong)local_110.Value *
                            FGenericPlatformTime::SecondsPerCycle - dVar10);
  if ((double)auVar11 != 0.0) {
    FVar17 = StatPtr_STAT_ShaderCompiling_MaterialLoading;
    if (StatPtr_STAT_ShaderCompiling_MaterialLoading ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading>)0x0) {
      pFVar16 = ::FName::FName(&local_b0,"STAT_ShaderCompiling_MaterialLoading");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_MaterialLoading
                          ,*pFVar16,L"Material Loading","STATGROUP_ShaderCompiling",
                          "STATCAT_Advanced",L"Shader Compiling",true,false,NumBits,false,false,
                          MCR_Invalid);
    }
    FVar8 = *(FName *)FVar17;
    FVar29 = FVar8.ComparisonIndex.Value;
    uVar15 = FVar8.Number;
    local_130.s.LowPart = FVar29.Value;
    local_130.s.HighPart = uVar15;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_e0.NameAndInfo.Number = uVar15 & 0xffffafff | 0xa000;
      local_100 = FVar8;
      local_e0.StatData.Pad = auVar11;
      local_e0.NameAndInfo.Index.Value = FVar29.Value;
      FThreadStats::AddStatMessage(this_00,&local_e0);
      FStatsTrace::Add(&local_100,(double)auVar11);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar18 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar18 != (FLinkerLoad *)0x0) &&
     (pFVar18 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this),
     (int)pFVar18->_padding_ < 0x132)) {
    CityHash64((char *)&`public:_struct_FGuid_const&___ptr64___cdecl_UMaterialInterface::GetLightingGuid(void)const___ptr64'
                        ::__l2::NullGuid,0x10);
    local_c8 = &local_f8;
    local_d0 = &`public:_struct_FGuid_const&___ptr64___cdecl_UMaterialInterface::GetLightingGuid(void)const___ptr64'
                ::__l2::NullGuid;
    local_f8 = this;
    TSet<TTuple<FGuid,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FGuid,UMaterialInterface_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,UMaterialInterface_*_&&>_>
              ((TSet<TTuple<FGuid,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FGuid,UMaterialInterface_*,0>,FDefaultSetAllocator>
                *)&LightingGuidFixupMap,&local_110,(bool *)&local_d0);
  }
  bVar13 = IsPSOShaderPreloadingEnabled();
  if (bVar13) {
    cVar14 = (**(code **)(this->_padding_ + 0x4c0))();
    if (((cVar14 == '\0') && (cVar14 = (**(code **)(this->_padding_ + 0x4b8))(this), cVar14 == '\0')
        ) && (cVar14 = (**(code **)(this->_padding_ + 0x4c8))(this), cVar14 == '\0'))
    goto LAB_147f4db23;
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 4;
    pFVar19 = (FMaterial *)(**(code **)(this->_padding_ + 0x390))(this,GMaxRHIShaderPlatform,4);
    PreloadMaterialShaderMap(pFVar19,&local_a8);
    FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar21 = local_a8.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_a8.ArrayNum);
    local_78.AllocatorInstance.SecondaryData = local_a8.AllocatorInstance.SecondaryData;
  }
  else {
    cVar14 = (**(code **)(this->_padding_ + 0x4b8))(this);
    if (((cVar14 == '\0') && (cVar14 = (**(code **)(this->_padding_ + 0x4c0))(this), cVar14 == '\0')
        ) && (cVar14 = (**(code **)(this->_padding_ + 0x4c8))(this), cVar14 == '\0'))
    goto LAB_147f4db23;
    local_c0.ArrayNum = 1;
    local_128.Data = (ulonglong)((uint)local_128.Data & 0x8000) | 0x13c00;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    local_f0 = &FLocalVertexFactory::StaticType;
    local_c0.DataPtr = &local_f0;
    UMaterialInterface::PrecachePSOs
              ((UMaterialInterface *)this,&local_78,&local_c0,(FPSOPrecacheParams *)&local_128._s_0,
               Medium,&local_120);
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar21 = local_78.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_78.ArrayNum);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
LAB_147f4db23:
  UMaterialInterface::CacheTexturesSamplingInfo((UMaterialInterface *)this);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(&local_134);
  return;
}

// PrecachePSOs @ 147f4dca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
UMaterialInstance::PrecachePSOs
          (UMaterialInstance *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,FPSOPrecacheParams *param_2,EPSOPrecachePriority param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  Type TVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  UMaterialInterface *pUVar3;
  int iVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  FMaterialResource *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  wchar_t *pwVar12;
  uint uVar13;
  ulonglong uVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  TRefCountPtr<FBaseGraphTask> *pTVar16;
  EShaderPlatform EVar17;
  uint uVar18;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar19;
  undefined1 auStackY_108 [32];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  TRefCountPtr<FBaseGraphTask> local_88 [4];
  TRefCountPtr<FBaseGraphTask> *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar14 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  pvVar6 = ThreadLocalStoragePointer;
  __return_storage_ptr__->ArrayMax = 4;
  if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar14 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar12 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar12,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     ((bVar7 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar7 ||
      (bVar7 = IsPSOShaderPreloadingEnabled(), bVar7)))) {
    UObject::ConditionalPostLoad((UObject *)this);
    if (this->bHasStaticPermutationResource == 0) {
      pUVar3 = (this->Parent).field0_0x0.DebugPtr;
      if (pUVar3 != (UMaterialInterface *)0x0) {
        pTVar11 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)(**(code **)(pUVar3->_padding_ + 0x3b0))(pUVar3,local_88,param_1,param_2);
        if (__return_storage_ptr__ != pTVar11) {
          FVar10 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
          if (FVar10 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar15 = FVar10;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar15,__return_storage_ptr__->ArrayNum);
          if ((pTVar11->AllocatorInstance).SecondaryData ==
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            memmove(__return_storage_ptr__,pTVar11,0x20);
          }
          FVar10 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          if (FVar10 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FMemory::Free((void *)FVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).SecondaryData =
               (pTVar11->AllocatorInstance).SecondaryData;
          (pTVar11->AllocatorInstance).SecondaryData =
               (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          __return_storage_ptr__->ArrayNum = pTVar11->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar11->ArrayMax;
          pTVar11->ArrayNum = 0;
          pTVar11->ArrayMax = 4;
        }
        pTVar16 = local_88;
        if (local_68 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar16 = local_68;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar16,local_60);
        if (local_68 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
    else {
      pFVar9 = GetCachedScalabilityCVars();
      uVar18 = 1 << ((byte)GMaxRHIFeatureLevel & 0x1f) | (uint)this->_padding_ |
               UMaterialInterface::FeatureLevelsForAllMaterials;
      TVar1 = pFVar9->MaterialQualityLevel;
      if (uVar18 != 0) {
        do {
          EVar17 = SP_NumPlatforms;
          uVar13 = -uVar18 & uVar18;
          uVar18 = uVar18 & uVar18 - 1;
          iVar4 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar8 = 0;
          if (uVar13 != 0) {
            iVar8 = iVar4;
          }
          if (iVar8 != 5) {
            EVar17 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar8];
          }
          this_00 = FindMaterialResource
                              (&this->StaticPermutationMaterialResources,EVar17,TVar1,true);
          if (this_00 != (FMaterialResource *)0x0) {
            FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                     FMaterial::CollectPSOs
                               ((FMaterial *)this_00,&local_b8,param_1,param_2,param_3,param_4);
            if (((ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__ == FVar10) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x986,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)(*pcVar5)();
              return pTVar11;
            }
            iVar4 = *(int *)((longlong)FVar10 + 0x28);
            if (iVar4 != 0) {
              iVar8 = UE::Core::Private::
                      ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                (8,8,iVar4,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax
                                );
              FVar15 = FVar10;
              if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar10 + 0x20) !=
                  (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar15 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar10 + 0x20)
                ;
              }
              FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
              FVar19 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
              if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar19 = FVar2;
              }
              memmove((void *)((longlong)FVar19 + (longlong)iVar8 * 8),(void *)FVar15,
                      (longlong)iVar4 << 3);
              *(int *)((longlong)FVar10 + 0x28) = 0;
            }
            FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
            if (local_b8.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar10 = local_b8.AllocatorInstance.SecondaryData;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)FVar10,local_b8.ArrayNum);
            if (local_b8.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
            }
          }
        } while (uVar18 != 0);
      }
    }
  }
  return __return_storage_ptr__;
}

// PropagateDataToMaterialProxy @ 147f4e060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialInstance::PropagateDataToMaterialProxy(UMaterialInstance *this)

{
  FMaterialInstanceResource *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  FRenderCommandList *pFVar12;
  FCommandList *pFVar13;
  FRenderCommandTag *pFVar14;
  code *pcVar15;
  code **ppcVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  undefined1 auStackY_618 [32];
  ForAnyElementType FStack_5d8;
  undefined8 uStack_5d0;
  ushort auStack_5c8 [4];
  ForAnyElementType FStack_5c0;
  undefined8 uStack_5b8;
  FMaterialInstanceResource *pFStack_5b0;
  ForAnyElementType FStack_5a8;
  undefined8 uStack_5a0;
  code *pcStack_598;
  code *pcStack_590;
  code *pcStack_588;
  code *pcStack_580;
  FMaterialInstanceResource *pFStack_578;
  code *pcStack_570;
  FNeuralProfileStruct FStack_568;
  code *pcStack_520;
  code *pcStack_518;
  code *pcStack_510;
  code *pcStack_508;
  FNeuralProfileStruct FStack_500;
  code *pcStack_4b8;
  code *pcStack_4b0;
  FMaterialInstanceResource *pFStack_4a8;
  ForAnyElementType FStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  code *pcStack_488;
  code *pcStack_480;
  code *pcStack_478;
  code *pcStack_470;
  code *pcStack_468;
  code *pcStack_460;
  code *pcStack_458;
  code *pcStack_450;
  code *pcStack_448;
  code *pcStack_440;
  code *pcStack_438;
  code *pcStack_430;
  code *pcStack_428;
  code *pcStack_420;
  code *pcStack_418;
  code *pcStack_410;
  code *pcStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  code *pcStack_3f0;
  code *pcStack_3e8;
  code *pcStack_3e0;
  code *pcStack_3d8;
  code *pcStack_3d0;
  code *pcStack_3c8;
  code *pcStack_3c0;
  code *pcStack_3b8;
  code *pcStack_3b0;
  code *pcStack_3a8;
  code *pcStack_3a0;
  code *pcStack_398;
  code *pcStack_390;
  code *pcStack_388;
  code *pcStack_380;
  code *pcStack_378;
  code *pcStack_370;
  code *pcStack_368;
  code *pcStack_360;
  code *pcStack_358;
  code *pcStack_350;
  code *pcStack_348;
  FMaterialInstanceResource *pFStack_340;
  FLinearColor_u_0 FStack_338;
  code *pcStack_328;
  code *pcStack_320;
  code *pcStack_318;
  code *pcStack_310;
  code *pcStack_308;
  code *pcStack_300;
  code *pcStack_2f8;
  code *pcStack_2f0;
  code *pcStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  code *pcStack_2d0;
  code *pcStack_2c8;
  code *pcStack_2c0;
  code *pcStack_2b8;
  code *pcStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  FLinearColor_u_0 FStack_298;
  code *pcStack_288;
  code *pcStack_280;
  code *pcStack_278;
  code *pcStack_270;
  code *pcStack_268;
  code *pcStack_260;
  code *pcStack_258;
  code *pcStack_250;
  code *pcStack_248;
  code *pcStack_240;
  code *pcStack_238;
  code *pcStack_230;
  code *pcStack_228;
  code *pcStack_220;
  code *pcStack_218;
  code *pcStack_210;
  code *pcStack_208;
  code *pcStack_200;
  code *apcStack_1f8 [2];
  code *apcStack_1e8 [3];
  code **ppcStack_1d0;
  code *apcStack_1c8 [2];
  code *apcStack_1b8 [3];
  code **ppcStack_1a0;
  code *apcStack_198 [2];
  code *apcStack_188 [3];
  code **ppcStack_170;
  code *apcStack_168 [2];
  code *apcStack_158 [3];
  code **ppcStack_140;
  undefined1 auStack_138 [40];
  code **ppcStack_110;
  byte bStack_108;
  undefined1 auStack_f8 [40];
  code **ppcStack_d0;
  byte bStack_c8;
  undefined1 auStack_b8 [40];
  code **ppcStack_90;
  byte bStack_88;
  undefined1 auStack_78 [40];
  code **ppcStack_50;
  byte bStack_48;
  ulonglong uStack_38;
  
  pFVar1 = this->Resource;
  if (pFVar1 == (FMaterialInstanceResource *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_618;
  if ((pFVar1 == (FMaterialInstanceResource *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("&Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                         ,0x6b1,L""), bVar7)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  (**(code **)(this->_padding_ + 0x468))(this,auStack_5c8);
  iVar18 = 0;
  if ((((auStack_5c8[0] & 0x20) != 0) || ((auStack_5c8[0] >> 9 & 1) != 0)) &&
     (bVar7 = Substrate::IsSubstrateEnabled(), !bVar7)) {
    pcVar11 = (code *)(**(code **)(this->_padding_ + 0x528))(this);
    FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)&FStack_338._s_0)
    ;
    if (pcVar11 != (code *)0x0) {
      FStack_338._0_8_ = *(undefined8 *)(pcVar11 + 0x28);
      FStack_338._8_8_ = *(undefined8 *)(pcVar11 + 0x30);
      pcStack_328 = *(code **)(pcVar11 + 0x38);
      pcStack_320 = *(code **)(pcVar11 + 0x40);
      pcStack_318 = *(code **)(pcVar11 + 0x48);
      pcStack_310 = *(code **)(pcVar11 + 0x50);
      pcStack_308 = *(code **)(pcVar11 + 0x58);
      pcStack_300 = *(code **)(pcVar11 + 0x60);
      pcStack_2f8 = *(code **)(pcVar11 + 0x68);
      pcStack_2f0 = *(code **)(pcVar11 + 0x70);
      pcStack_2e8 = *(code **)(pcVar11 + 0x78);
      pcStack_2e0 = *(code **)(pcVar11 + 0x80);
      pcStack_2d8 = *(code **)(pcVar11 + 0x88);
      pcStack_2d0 = *(code **)(pcVar11 + 0x90);
      pcStack_2c8 = *(code **)(pcVar11 + 0x98);
      pcStack_2c0 = *(code **)(pcVar11 + 0xa0);
      pcStack_2b8 = *(code **)(pcVar11 + 0xa8);
      pcStack_2b0 = *(code **)(pcVar11 + 0xb0);
      pcStack_2a8 = *(code **)(pcVar11 + 0xb8);
      pcStack_2a0 = *(code **)(pcVar11 + 0xc0);
    }
    apcStack_1f8[0] = (code *)0x0;
    pcStack_3e8 = (code *)FStack_338._0_8_;
    pcStack_3e0 = (code *)FStack_338._8_8_;
    pcStack_3d8 = pcStack_328;
    pcStack_3d0 = pcStack_320;
    pcStack_3c8 = pcStack_318;
    pcStack_3c0 = pcStack_310;
    pcStack_3b8 = pcStack_308;
    pcStack_3b0 = pcStack_300;
    pcStack_3a8 = pcStack_2f8;
    pcStack_3a0 = pcStack_2f0;
    pcStack_398 = pcStack_2e8;
    pcStack_390 = pcStack_2e0;
    pcStack_388 = pcStack_2d8;
    pcStack_380 = pcStack_2d0;
    pcStack_378 = pcStack_2c8;
    pcStack_370 = pcStack_2c0;
    pcStack_368 = pcStack_2b8;
    pcStack_360 = pcStack_2b0;
    pcStack_358 = pcStack_2a8;
    pcStack_350 = pcStack_2a0;
    pcStack_348 = pcVar11;
    pFStack_340 = pFVar1;
    ppcStack_1d0 = FMemory::Malloc(0xb8,8);
    *ppcStack_1d0 =
         (code *)&UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`12'::<lambda_1>,1,1>
                  ::_vftable_;
    ppcStack_1d0[1] = pcStack_3e8;
    ppcStack_1d0[2] = pcStack_3e0;
    ppcStack_1d0[3] = pcStack_3d8;
    ppcStack_1d0[4] = pcStack_3d0;
    ppcStack_1d0[5] = pcStack_3c8;
    ppcStack_1d0[6] = pcStack_3c0;
    ppcStack_1d0[7] = pcStack_3b8;
    ppcStack_1d0[8] = pcStack_3b0;
    ppcStack_1d0[9] = pcStack_3a8;
    ppcStack_1d0[10] = pcStack_3a0;
    ppcStack_1d0[0xb] = pcStack_398;
    ppcStack_1d0[0xc] = pcStack_390;
    ppcStack_1d0[0xd] = pcStack_388;
    ppcStack_1d0[0xe] = pcStack_380;
    ppcStack_1d0[0xf] = pcStack_378;
    ppcStack_1d0[0x10] = pcStack_370;
    ppcStack_1d0[0x11] = pcStack_368;
    ppcStack_1d0[0x12] = pcStack_360;
    ppcStack_1d0[0x13] = pcStack_358;
    ppcStack_1d0[0x14] = pcStack_350;
    ppcStack_1d0[0x15] = pcStack_348;
    ppcStack_1d0[0x16] = (code *)pFStack_340;
    if (ppcStack_1d0 + 1 != (code **)0x0) {
      apcStack_1f8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
           ::Call;
    }
    pFVar12 = FRenderCommandList::GetInstanceTLS();
    if (pFVar12 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l12::TSTR_UpdateMaterialRenderProxySubsurface1730>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_1f8);
    }
    else {
      pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
      auStack_138._0_8_ = apcStack_1f8[0];
      ppcStack_110 = ppcStack_1d0;
      ppcStack_1d0 = (code **)0x0;
      auStack_138._16_8_ = apcStack_1e8[0];
      auStack_138._24_8_ = apcStack_1e8[1];
      auStack_138._32_8_ = apcStack_1e8[2];
      apcStack_1f8[0] = (code *)0x0;
      bStack_108 = 2;
      pFVar14 = (FRenderCommandTag *)
                TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l12::TSTR_UpdateMaterialRenderProxySubsurface1730>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_138,pFVar14);
      uVar19 = (ulonglong)bStack_108;
      if ((2 < uVar19) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_138._0_8_ != (code *)0x0) {
          ppcVar16 = (code **)(auStack_138 + 0x10);
          if (ppcStack_110 != (code **)0x0) {
            ppcVar16 = ppcStack_110;
          }
          (**(code **)(*ppcVar16 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(auStack_138);
      }
    }
    if (apcStack_1f8[0] != (code *)0x0) {
      ppcVar16 = apcStack_1f8 + 2;
      if (ppcStack_1d0 != (code **)0x0) {
        ppcVar16 = ppcStack_1d0;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
  }
  pcVar11 = (code *)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (((pcVar11 != (code *)0x0) &&
      (cVar8 = (**(code **)(*(longlong *)pcVar11 + 0x4c8))(pcVar11), cVar8 != '\0')) &&
     (pcVar15 = (code *)(**(code **)(this->_padding_ + 0x568))(this), pcVar15 != (code *)0x0)) {
    FStack_500.InputFormat = (ENeuralProfileFormat)pcVar15[0x28];
    FStack_500.OutputFormat = (ENeuralProfileFormat)pcVar15[0x29];
    FStack_500.RuntimeType = (ENeuralProfileRuntimeType)pcVar15[0x2a];
    pcStack_508 = pcVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(pcVar15 + 0x30) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(pcVar15 + 0x30));
    }
    FStack_500.NNEModelData.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)(pcVar15 + 0x30);
    FStack_500.InputDimension.field0_0x0._0_8_ = *(undefined8 *)(pcVar15 + 0x38);
    FStack_500.InputDimension.field0_0x0._8_8_ = *(undefined8 *)(pcVar15 + 0x40);
    FStack_500.BatchSizeOverride = *(int *)(pcVar15 + 0x58);
    FStack_500.OutputDimension.field0_0x0._0_8_ = *(undefined8 *)(pcVar15 + 0x48);
    FStack_500.OutputDimension.field0_0x0._8_8_ = *(undefined8 *)(pcVar15 + 0x50);
    FStack_500.TileSize = (ENeuralModelTileType)pcVar15[0x5c];
    FStack_500.TileOverlap.field0_0x0 = *(TIntPoint<int>_u_0 *)(pcVar15 + 0x60);
    pcStack_590 = *(code **)(pcVar15 + 0x70);
    pcStack_588 = *(code **)(pcVar15 + 0x78);
    FStack_500.TileOverlapResolveType = (ETileOverlapResolveType)pcVar15[0x68];
    pcStack_580 = pcVar15;
    pFStack_578 = pFVar1;
    pcStack_570 = pcVar15;
    pcStack_4b8 = pcStack_590;
    pcStack_4b0 = pcStack_588;
    FNeuralProfileStruct::FNeuralProfileStruct(&FStack_568,&FStack_500);
    apcStack_1c8[0] = (code *)0x0;
    pcStack_520 = pcStack_590;
    pcStack_518 = pcStack_588;
    pcStack_510 = pcVar11;
    ppcVar16 = FMemory::Malloc(0x80,8);
    *ppcVar16 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`21'::<lambda_2>,1,1>
                         ::_vftable_;
    ppcVar16[1] = pcStack_580;
    ppcVar16[2] = (code *)pFStack_578;
    ppcVar16[3] = pcStack_570;
    *(ENeuralProfileFormat *)(ppcVar16 + 4) = FStack_568.InputFormat;
    *(ENeuralProfileFormat *)((longlong)ppcVar16 + 0x21) = FStack_568.OutputFormat;
    *(ENeuralProfileRuntimeType *)((longlong)ppcVar16 + 0x22) = FStack_568.RuntimeType;
    ((TObjectPtr<UObject>_u_0 *)(ppcVar16 + 5))->DebugPtr =
         (UObject *)FStack_568.NNEModelData.field0_0x0;
    ppcStack_1a0 = ppcVar16;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FStack_568.NNEModelData.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FStack_568.NNEModelData.field0_0x0);
    }
    *(int *)(ppcVar16 + 10) = FStack_568.BatchSizeOverride;
    *(ENeuralModelTileType *)((longlong)ppcVar16 + 0x54) = FStack_568.TileSize;
    *(TIntPoint<int>_u_0 *)(ppcVar16 + 0xb) = FStack_568.TileOverlap.field0_0x0;
    ppcVar16[6] = (code *)FStack_568.InputDimension.field0_0x0._0_8_;
    ppcVar16[7] = (code *)FStack_568.InputDimension.field0_0x0._8_8_;
    *(ETileOverlapResolveType *)(ppcVar16 + 0xc) = FStack_568.TileOverlapResolveType;
    ppcVar16[8] = (code *)FStack_568.OutputDimension.field0_0x0._0_8_;
    ppcVar16[9] = (code *)FStack_568.OutputDimension.field0_0x0._8_8_;
    ppcVar16[0xd] = pcStack_590;
    ppcVar16[0xe] = pcStack_588;
    ppcVar16[0xf] = pcVar11;
    if (ppcVar16 + 1 != (code **)0x0) {
      apcStack_1c8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l21::<lambda_2>,void,FRHICommandListImmediate_&>
           ::Call;
    }
    pFVar12 = FRenderCommandList::GetInstanceTLS();
    if (pFVar12 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l21::TSTR_UpdateMaterialRenderProxyNNEModelData1762>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_1c8);
    }
    else {
      pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
      auStack_f8._0_8_ = apcStack_1c8[0];
      ppcStack_d0 = ppcStack_1a0;
      ppcStack_1a0 = (code **)0x0;
      auStack_f8._16_8_ = apcStack_1b8[0];
      auStack_f8._24_8_ = apcStack_1b8[1];
      auStack_f8._32_8_ = apcStack_1b8[2];
      apcStack_1c8[0] = (code *)0x0;
      bStack_c8 = 2;
      pFVar14 = (FRenderCommandTag *)
                TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l21::TSTR_UpdateMaterialRenderProxyNNEModelData1762>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_f8,pFVar14);
      uVar19 = (ulonglong)bStack_c8;
      if ((2 < uVar19) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_f8._0_8_ != (code *)0x0) {
          ppcVar16 = (code **)(auStack_f8 + 0x10);
          if (ppcStack_d0 != (code **)0x0) {
            ppcVar16 = ppcStack_d0;
          }
          (**(code **)(*ppcVar16 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(auStack_f8);
      }
    }
    if (apcStack_1c8[0] != (code *)0x0) {
      ppcVar16 = apcStack_1c8 + 2;
      if (ppcStack_1a0 != (code **)0x0) {
        ppcVar16 = ppcStack_1a0;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
  }
  bVar7 = Substrate::IsSubstrateEnabled();
  if (bVar7) {
    FStack_5c0.Data = (FScriptContainerElement *)0x0;
    uStack_5b8 = 0;
    iVar9 = (**(code **)(this->_padding_ + 0x550))(this);
    iVar21 = iVar18;
    if (0 < iVar9) {
      do {
        iVar10 = (int)uStack_5b8;
        if ((int)uStack_5b8 == uStack_5b8._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x440,8,&FStack_5c0,(int *)((longlong)&uStack_5b8 + 4));
        }
        uStack_5b8 = CONCAT44(uStack_5b8._4_4_,iVar10 + 1);
        pFVar20 = FStack_5c0.Data + (longlong)iVar10 * 0x440;
        DefaultConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
                  (pFVar20,1);
        lVar17 = (**(code **)(this->_padding_ + 0x558))(this,iVar21);
        *(longlong *)&pFVar20->field_0x0 = lVar17;
        if (lVar17 != 0) {
          pFVar20[8] = *(FScriptContainerElement *)(lVar17 + 0x28);
          FRuntimeCurveLinearColor::operator=
                    ((FRuntimeCurveLinearColor *)(pFVar20 + 0x10),
                     (FRuntimeCurveLinearColor *)(lVar17 + 0x30));
          FRuntimeCurveLinearColor::operator=
                    ((FRuntimeCurveLinearColor *)(pFVar20 + 0x218),
                     (FRuntimeCurveLinearColor *)(lVar17 + 0x238));
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (*(UObject **)(lVar17 + 0x440) != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(*(UObject **)(lVar17 + 0x440));
          }
          lVar17 = *(longlong *)(lVar17 + 0x440);
          *(longlong *)(pFVar20 + 0x420) = lVar17;
          lVar2 = *(longlong *)&pFVar20->field_0x0;
          uVar3 = *(undefined4 *)(lVar2 + 0x44c);
          uVar4 = *(undefined4 *)(lVar2 + 0x450);
          uVar5 = *(undefined4 *)(lVar2 + 0x454);
          *(undefined4 *)(pFVar20 + 0x430) = *(undefined4 *)(lVar2 + 0x448);
          *(undefined4 *)(pFVar20 + 0x434) = uVar3;
          *(undefined4 *)(pFVar20 + 0x438) = uVar4;
          *(undefined4 *)(pFVar20 + 0x43c) = uVar5;
          if (lVar17 != 0) {
            *(undefined8 *)(pFVar20 + 0x428) = *(undefined8 *)(*(longlong *)(lVar2 + 0x440) + 0x140)
            ;
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar9);
    }
    pcVar11 = (code *)(**(code **)(this->_padding_ + 0x560))(this);
    FVar6.Data = FStack_5c0.Data;
    iVar21 = (int)uStack_5b8;
    if ((0 < (int)uStack_5b8) || (pcVar11 != (code *)0x0)) {
      FStack_5a8.Data = (FScriptContainerElement *)0x0;
      uStack_5a0 = CONCAT44(uStack_5a0._4_4_,(int)uStack_5b8);
      pFStack_5b0 = pFVar1;
      if ((int)uStack_5b8 == 0) {
        uStack_5a0 = uStack_5b8 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x440,8,(int)uStack_5b8,0,&FStack_5a8,(int)uStack_5b8,
                   (int *)((longlong)&uStack_5a0 + 4));
        ConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
                  (FStack_5a8.Data,(FEntry *)FVar6.Data,iVar21);
      }
      apcStack_198[0] = (code *)0x0;
      pcStack_598 = pcVar11;
      ppcStack_170 = FMemory::Malloc(0x28,8);
      *ppcStack_170 =
           (code *)&UE::Core::Private::Function::
                    TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`36'::<lambda_3>,1,1>
                    ::_vftable_;
      ppcStack_170[2] = (code *)0x0;
      ppcStack_170[1] = (code *)pFStack_5b0;
      ppcStack_170[2] = (code *)FStack_5a8.Data;
      FStack_5a8.Data = (FScriptContainerElement *)0x0;
      *(int *)(ppcStack_170 + 3) = (int)uStack_5a0;
      *(undefined4 *)((longlong)ppcStack_170 + 0x1c) = uStack_5a0._4_4_;
      uStack_5a0 = 0;
      ppcStack_170[4] = pcStack_598;
      if (ppcStack_170 + 1 != (code **)0x0) {
        apcStack_198[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l36::<lambda_3>,void,FRHICommandListImmediate_&>
             ::Call;
      }
      pFVar12 = FRenderCommandList::GetInstanceTLS();
      if (pFVar12 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l36::TSTR_UpdateMaterialRenderProxySpecular1808>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_198);
      }
      else {
        pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
        auStack_b8._0_8_ = apcStack_198[0];
        ppcStack_90 = ppcStack_170;
        ppcStack_170 = (code **)0x0;
        auStack_b8._16_8_ = apcStack_188[0];
        auStack_b8._24_8_ = apcStack_188[1];
        auStack_b8._32_8_ = apcStack_188[2];
        apcStack_198[0] = (code *)0x0;
        bStack_88 = 2;
        pFVar14 = (FRenderCommandTag *)
                  TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l36::TSTR_UpdateMaterialRenderProxySpecular1808>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)auStack_b8,pFVar14);
        uVar19 = (ulonglong)bStack_88;
        if ((2 < uVar19) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)auStack_b8._0_8_ != (code *)0x0) {
            ppcVar16 = (code **)(auStack_b8 + 0x10);
            if (ppcStack_90 != (code **)0x0) {
              ppcVar16 = ppcStack_90;
            }
            (**(code **)(*ppcVar16 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(auStack_b8);
        }
      }
      if (apcStack_198[0] != (code *)0x0) {
        ppcVar16 = apcStack_198 + 2;
        if (ppcStack_170 != (code **)0x0) {
          ppcVar16 = ppcStack_170;
        }
        (**(code **)(*ppcVar16 + 0x10))();
      }
      DestructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
                ((FEntry *)FStack_5a8.Data,(int)uStack_5a0);
      if ((FEntry *)FStack_5a8.Data != (FEntry *)0x0) {
        FMemory::Free(FStack_5a8.Data);
      }
    }
    DestructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l25::FEntry,int>
              ((FEntry *)FStack_5c0.Data,(int)uStack_5b8);
    if ((FEntry *)FStack_5c0.Data != (FEntry *)0x0) {
      FMemory::Free(FStack_5c0.Data);
    }
    FStack_5d8.Data = (FScriptContainerElement *)0x0;
    uStack_5d0 = 0;
    iVar21 = (**(code **)(this->_padding_ + 0x540))(this);
    if (0 < iVar21) {
      do {
        iVar9 = (int)uStack_5d0;
        if ((int)uStack_5d0 == uStack_5d0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8a8,&FStack_5d8,(int *)((longlong)&uStack_5d0 + 4));
        }
        uStack_5d0 = CONCAT44(uStack_5d0._4_4_,iVar9 + 1);
        pFVar20 = FStack_5d8.Data + (longlong)iVar9 * 0xa8;
        DefaultConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l37::FEntry,int>
                  (pFVar20,1);
        lVar17 = (**(code **)(this->_padding_ + 0x530))(this,iVar18);
        *(longlong *)pFVar20 = lVar17;
        if (lVar17 != 0) {
          lVar2 = *(longlong *)(lVar17 + 0x30);
          *(longlong *)(pFVar20 + 8) = *(longlong *)(lVar17 + 0x28);
          *(longlong *)(pFVar20 + 0x10) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0x40);
          *(longlong *)(pFVar20 + 0x18) = *(longlong *)(lVar17 + 0x38);
          *(longlong *)(pFVar20 + 0x20) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0x50);
          *(longlong *)(pFVar20 + 0x28) = *(longlong *)(lVar17 + 0x48);
          *(longlong *)(pFVar20 + 0x30) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0x60);
          *(longlong *)(pFVar20 + 0x38) = *(longlong *)(lVar17 + 0x58);
          *(longlong *)(pFVar20 + 0x40) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0x70);
          *(longlong *)(pFVar20 + 0x48) = *(longlong *)(lVar17 + 0x68);
          *(longlong *)(pFVar20 + 0x50) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0x80);
          *(longlong *)(pFVar20 + 0x58) = *(longlong *)(lVar17 + 0x78);
          *(longlong *)(pFVar20 + 0x60) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0x90);
          *(longlong *)(pFVar20 + 0x68) = *(longlong *)(lVar17 + 0x88);
          *(longlong *)(pFVar20 + 0x70) = lVar2;
          lVar2 = *(longlong *)(lVar17 + 0xa0);
          *(longlong *)(pFVar20 + 0x78) = *(longlong *)(lVar17 + 0x98);
          *(longlong *)(pFVar20 + 0x80) = lVar2;
          uVar3 = *(undefined4 *)(lVar17 + 0xac);
          uVar4 = *(undefined4 *)(lVar17 + 0xb0);
          uVar5 = *(undefined4 *)(lVar17 + 0xb4);
          *(undefined4 *)(pFVar20 + 0x88) = *(undefined4 *)(lVar17 + 0xa8);
          *(undefined4 *)(pFVar20 + 0x8c) = uVar3;
          *(undefined4 *)(pFVar20 + 0x90) = uVar4;
          *(undefined4 *)(pFVar20 + 0x94) = uVar5;
          lVar2 = *(longlong *)(lVar17 + 0xc0);
          *(longlong *)(pFVar20 + 0x98) = *(longlong *)(lVar17 + 0xb8);
          *(longlong *)(pFVar20 + 0xa0) = lVar2;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar21);
    }
    if (((int)uStack_5d0 == 0) &&
       (lVar17 = (**(code **)(this->_padding_ + 0x528))(this), lVar17 != 0)) {
      iVar18 = (int)uStack_5d0;
      if ((int)uStack_5d0 == uStack_5d0._4_4_) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a8,&FStack_5d8,(int *)((longlong)&uStack_5d0 + 4));
      }
      uStack_5d0 = CONCAT44(uStack_5d0._4_4_,iVar18 + 1);
      pFVar20 = FStack_5d8.Data + (longlong)iVar18 * 0xa8;
      DefaultConstructItems<_UMaterialInterface::UpdateMaterialRenderProxy_::__l37::FEntry,int>
                (pFVar20,1);
      lVar17 = (**(code **)(this->_padding_ + 0x528))(this);
      *(longlong *)pFVar20 = lVar17;
      if (lVar17 != 0) {
        lVar2 = *(longlong *)(lVar17 + 0x30);
        *(longlong *)(pFVar20 + 8) = *(longlong *)(lVar17 + 0x28);
        *(longlong *)(pFVar20 + 0x10) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0x40);
        *(longlong *)(pFVar20 + 0x18) = *(longlong *)(lVar17 + 0x38);
        *(longlong *)(pFVar20 + 0x20) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0x50);
        *(longlong *)(pFVar20 + 0x28) = *(longlong *)(lVar17 + 0x48);
        *(longlong *)(pFVar20 + 0x30) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0x60);
        *(longlong *)(pFVar20 + 0x38) = *(longlong *)(lVar17 + 0x58);
        *(longlong *)(pFVar20 + 0x40) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0x70);
        *(longlong *)(pFVar20 + 0x48) = *(longlong *)(lVar17 + 0x68);
        *(longlong *)(pFVar20 + 0x50) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0x80);
        *(longlong *)(pFVar20 + 0x58) = *(longlong *)(lVar17 + 0x78);
        *(longlong *)(pFVar20 + 0x60) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0x90);
        *(longlong *)(pFVar20 + 0x68) = *(longlong *)(lVar17 + 0x88);
        *(longlong *)(pFVar20 + 0x70) = lVar2;
        lVar2 = *(longlong *)(lVar17 + 0xa0);
        *(longlong *)(pFVar20 + 0x78) = *(longlong *)(lVar17 + 0x98);
        *(longlong *)(pFVar20 + 0x80) = lVar2;
        uVar3 = *(undefined4 *)(lVar17 + 0xac);
        uVar4 = *(undefined4 *)(lVar17 + 0xb0);
        uVar5 = *(undefined4 *)(lVar17 + 0xb4);
        *(undefined4 *)(pFVar20 + 0x88) = *(undefined4 *)(lVar17 + 0xa8);
        *(undefined4 *)(pFVar20 + 0x8c) = uVar3;
        *(undefined4 *)(pFVar20 + 0x90) = uVar4;
        *(undefined4 *)(pFVar20 + 0x94) = uVar5;
        lVar2 = *(longlong *)(lVar17 + 0xc0);
        *(longlong *)(pFVar20 + 0x98) = *(longlong *)(lVar17 + 0xb8);
        *(longlong *)(pFVar20 + 0xa0) = lVar2;
      }
    }
    pcVar11 = (code *)(**(code **)(this->_padding_ + 0x548))(this);
    FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)&FStack_298._s_0)
    ;
    FVar6.Data = FStack_5d8.Data;
    if (pcVar11 != (code *)0x0) {
      FStack_298._0_8_ = *(undefined8 *)(pcVar11 + 0x28);
      FStack_298._8_8_ = *(undefined8 *)(pcVar11 + 0x30);
      pcStack_288 = *(code **)(pcVar11 + 0x38);
      pcStack_280 = *(code **)(pcVar11 + 0x40);
      pcStack_278 = *(code **)(pcVar11 + 0x48);
      pcStack_270 = *(code **)(pcVar11 + 0x50);
      pcStack_268 = *(code **)(pcVar11 + 0x58);
      pcStack_260 = *(code **)(pcVar11 + 0x60);
      pcStack_258 = *(code **)(pcVar11 + 0x68);
      pcStack_250 = *(code **)(pcVar11 + 0x70);
      pcStack_248 = *(code **)(pcVar11 + 0x78);
      pcStack_240 = *(code **)(pcVar11 + 0x80);
      pcStack_238 = *(code **)(pcVar11 + 0x88);
      pcStack_230 = *(code **)(pcVar11 + 0x90);
      pcStack_228 = *(code **)(pcVar11 + 0x98);
      pcStack_220 = *(code **)(pcVar11 + 0xa0);
      pcStack_218 = *(code **)(pcVar11 + 0xa8);
      pcStack_210 = *(code **)(pcVar11 + 0xb0);
      pcStack_208 = *(code **)(pcVar11 + 0xb8);
      pcStack_200 = *(code **)(pcVar11 + 0xc0);
    }
    lVar17 = (longlong)(int)uStack_5d0;
    FStack_4a0.Data = (FScriptContainerElement *)0x0;
    uStack_498 = CONCAT44(uStack_498._4_4_,(int)uStack_5d0);
    pFStack_4a8 = pFVar1;
    if ((int)uStack_5d0 == 0) {
      uStack_498 = uStack_5d0 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,(int)uStack_5d0,0,&FStack_4a0,(int)uStack_5d0,
                 (int *)((longlong)&uStack_498 + 4));
      memcpy(FStack_4a0.Data,FVar6.Data,lVar17 * 0xa8);
    }
    apcStack_168[0] = (code *)0x0;
    pcStack_488 = (code *)FStack_298._0_8_;
    pcStack_480 = (code *)FStack_298._8_8_;
    pcStack_478 = pcStack_288;
    pcStack_470 = pcStack_280;
    pcStack_468 = pcStack_278;
    pcStack_460 = pcStack_270;
    pcStack_458 = pcStack_268;
    pcStack_450 = pcStack_260;
    pcStack_448 = pcStack_258;
    pcStack_440 = pcStack_250;
    pcStack_438 = pcStack_248;
    pcStack_430 = pcStack_240;
    pcStack_428 = pcStack_238;
    pcStack_420 = pcStack_230;
    pcStack_418 = pcStack_228;
    pcStack_410 = pcStack_220;
    pcStack_408 = pcStack_218;
    pcStack_400 = pcStack_210;
    pcStack_3f8 = pcStack_208;
    pcStack_3f0 = pcStack_200;
    pcStack_490 = pcVar11;
    ppcStack_140 = FMemory::Malloc(200,8);
    *ppcStack_140 =
         (code *)&UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMaterialInterface::UpdateMaterialRenderProxy'::`37'::<lambda_4>,1,1>
                  ::_vftable_;
    ppcStack_140[2] = (code *)0x0;
    ppcStack_140[1] = (code *)pFStack_4a8;
    ppcStack_140[2] = (code *)FStack_4a0.Data;
    FStack_4a0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(ppcStack_140 + 3) = (undefined4)uStack_498;
    *(undefined4 *)((longlong)ppcStack_140 + 0x1c) = uStack_498._4_4_;
    uStack_498 = 0;
    ppcStack_140[4] = pcStack_490;
    ppcStack_140[5] = pcStack_488;
    ppcStack_140[6] = pcStack_480;
    ppcStack_140[7] = pcStack_478;
    ppcStack_140[8] = pcStack_470;
    ppcStack_140[9] = pcStack_468;
    ppcStack_140[10] = pcStack_460;
    ppcStack_140[0xb] = pcStack_458;
    ppcStack_140[0xc] = pcStack_450;
    ppcStack_140[0xd] = pcStack_448;
    ppcStack_140[0xe] = pcStack_440;
    ppcStack_140[0xf] = pcStack_438;
    ppcStack_140[0x10] = pcStack_430;
    ppcStack_140[0x11] = pcStack_428;
    ppcStack_140[0x12] = pcStack_420;
    ppcStack_140[0x13] = pcStack_418;
    ppcStack_140[0x14] = pcStack_410;
    ppcStack_140[0x15] = pcStack_408;
    ppcStack_140[0x16] = pcStack_400;
    ppcStack_140[0x17] = pcStack_3f8;
    ppcStack_140[0x18] = pcStack_3f0;
    if (ppcStack_140 + 1 != (code **)0x0) {
      apcStack_168[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UMaterialInterface::UpdateMaterialRenderProxy'::__l37::<lambda_4>,void,FRHICommandListImmediate_&>
           ::Call;
    }
    pFVar12 = FRenderCommandList::GetInstanceTLS();
    if (pFVar12 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterialInterface::UpdateMaterialRenderProxy_::__l37::TSTR_UpdateMaterialRenderProxySubsurfaceProfiles1874>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_168);
    }
    else {
      pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
      auStack_78._0_8_ = apcStack_168[0];
      ppcStack_50 = ppcStack_140;
      ppcStack_140 = (code **)0x0;
      auStack_78._16_8_ = apcStack_158[0];
      auStack_78._24_8_ = apcStack_158[1];
      auStack_78._32_8_ = apcStack_158[2];
      apcStack_168[0] = (code *)0x0;
      bStack_48 = 2;
      pFVar14 = (FRenderCommandTag *)
                TRenderCommandTag<`UMaterialInterface::UpdateMaterialRenderProxy'::__l37::TSTR_UpdateMaterialRenderProxySubsurfaceProfiles1874>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_78,pFVar14);
      uVar19 = (ulonglong)bStack_48;
      if ((2 < uVar19) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_78._0_8_ != (code *)0x0) {
          ppcVar16 = (code **)(auStack_78 + 0x10);
          if (ppcStack_50 != (code **)0x0) {
            ppcVar16 = ppcStack_50;
          }
          (**(code **)(*ppcVar16 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(auStack_78);
      }
    }
    if (apcStack_168[0] != (code *)0x0) {
      ppcVar16 = apcStack_168 + 2;
      if (ppcStack_140 != (code **)0x0) {
        ppcVar16 = ppcStack_140;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (FStack_4a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_4a0.Data);
    }
    if (FStack_5d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5d8.Data);
    }
  }
  return;
}

// RecacheUniformExpressions @ 147f4e170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMaterialInstance::RecacheUniformExpressions(UMaterialInstance *this,bool param_1)

{
  FMaterialInstanceResource *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  wchar_t *pwVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [48];
  void *apvStack_98 [2];
  code *apcStack_88 [2];
  undefined **ppuStack_78;
  FMaterialInstanceResource *pFStack_70;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***pppuStack_60;
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  FMaterialInstanceResource *pFStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  byte bStack_28;
  ulonglong uStack_18;
  
  pFVar1 = this->Resource;
  if (pFVar1 == (FMaterialInstanceResource *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (6 < (byte)LogMaterial._0_1_) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,apvStack_98);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (apvStack_98[0] != (void *)0x0) {
        FMemory::Free(apvStack_98[0]);
      }
    }
    pppuStack_60 = (undefined ***)0x0;
    ppuStack_78 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::`5'::<lambda_1>,1,0>
                   ::_vftable_;
    uStack_67 = auStack_c8._41_4_;
    uStack_63 = auStack_c8._45_2_;
    uStack_61 = auStack_c8[0x2f];
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
    pFStack_70 = pFVar1;
    uStack_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialRenderProxy::CacheUniformExpressions_GameThread_::__l5::TSTR_FCacheUniformExpressionsCommand626>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      uStack_38._1_4_ = uStack_67;
      uStack_38._0_1_ = uStack_68;
      uStack_38._5_2_ = uStack_63;
      uStack_38._7_1_ = uStack_61;
      auStack_58._0_8_ = apcStack_88[0];
      pppuStack_30 = pppuStack_60;
      ppuStack_48 = ppuStack_78;
      pFStack_40 = pFStack_70;
      apcStack_88[0] = (code *)0x0;
      bStack_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::TSTR_FCacheUniformExpressionsCommand626>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_58,pFVar4);
      uVar7 = (ulonglong)bStack_28;
      if ((2 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_58._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(auStack_58 + 0x10);
          if (pppuStack_30 != (undefined ***)0x0) {
            pppuVar6 = pppuStack_30;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(auStack_58);
      }
    }
    if (apcStack_88[0] != (code *)0x0) {
      pppuVar6 = &ppuStack_78;
      if (pppuStack_60 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return;
}

// ReserveParameterValuesInternal @ 147f4ef10

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::ReserveParameterValuesInternal
          (UMaterialInstance *this,EMaterialParameterType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *pTVar4;
  
  switch(param_1) {
  case Scalar:
    if (-1 < param_2) {
      if (param_2 <= (this->ScalarParameterValues).ArrayMax) {
        return;
      }
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,param_2,&(this->ScalarParameterValues).AllocatorInstance,
                 (this->ScalarParameterValues).ArrayNum,&(this->ScalarParameterValues).ArrayMax);
      return;
    }
    goto LAB_147f4f0a1;
  case Vector:
    if (-1 < param_2) {
      if (param_2 <= (this->VectorParameterValues).ArrayMax) {
        return;
      }
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,param_2,&(this->VectorParameterValues).AllocatorInstance,
                 (this->VectorParameterValues).ArrayNum,&(this->VectorParameterValues).ArrayMax);
      return;
    }
    goto LAB_147f4f0a1;
  case DoubleVector:
    if (-1 < param_2) {
      if (param_2 <= (this->DoubleVectorParameterValues).ArrayMax) {
        return;
      }
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,param_2,&(this->DoubleVectorParameterValues).AllocatorInstance,
                 (this->DoubleVectorParameterValues).ArrayNum,
                 &(this->DoubleVectorParameterValues).ArrayMax);
      return;
    }
    goto LAB_147f4f0a1;
  case Texture:
    pTVar4 = (TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)
             &this->TextureParameterValues;
    break;
  case TextureCollection:
    pTVar4 = (TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)
             &this->TextureCollectionParameterValues;
    break;
  case Font:
    pTVar4 = &this->FontParameterValues;
    if (param_2 < 0) goto LAB_147f4f0a1;
    if (param_2 <= (this->FontParameterValues).ArrayMax) {
      return;
    }
    uVar3 = 0x30;
    goto LAB_147f4f014;
  case RuntimeVirtualTexture:
    pTVar4 = (TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)
             &this->RuntimeVirtualTextureParameterValues;
    break;
  case SparseVolumeTexture:
    pTVar4 = (TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)
             &this->SparseVolumeTextureParameterValues;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0xfc3,L"");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case ParameterCollection:
    pTVar4 = (TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)
             &this->ParameterCollectionParameterValues;
  }
  if (-1 < param_2) {
    if (param_2 <= ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar4)->ArrayMax)
    {
      return;
    }
    uVar3 = 0x28;
LAB_147f4f014:
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (uVar3,8,param_2,&pTVar4->AllocatorInstance,
               ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar4)->ArrayNum,
               &((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)pTVar4)->ArrayMax);
    return;
  }
LAB_147f4f0a1:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

// SaveShaderStableKeys @ 147f4f290

void __thiscall
UMaterialInstance::SaveShaderStableKeys(UMaterialInstance *this,ITargetPlatform *param_1)

{
  return;
}

// SaveShaderStableKeysInner @ 147f4f2a0

void __thiscall
UMaterialInstance::SaveShaderStableKeysInner
          (UMaterialInstance *this,ITargetPlatform *param_1,FStableShaderKeyAndValue *param_2)

{
  return;
}

// Serialize @ 147f4f2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UMaterialInstance::Serialize(UMaterialInstance *this,FArchive *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  FMaterialInstanceCachedData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_MaterialInstance_Serialize> FVar15;
  FMaterialInstanceCachedData *pFVar16;
  UPackage *pUVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar18;
  FName FVar19;
  bool bVar20;
  uint local_res8;
  uint uStackX_c;
  FLLMScope local_res10 [2];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  UMaterialInstance *local_90;
  FName local_88;
  LARGE_INTEGER local_80;
  FMemScope local_78 [3];
  FStatMessage local_60;
  FName local_50 [2];
  
  FLLMScope::FLLMScope(local_res10,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(local_78,MaterialInstance,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3200,"MaterialInstanceSerializeTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
               ,0xc80);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3200);
  }
  bVar11 = false;
  FVar15 = StatPtr_STAT_MaterialInstance_Serialize;
  if (StatPtr_STAT_MaterialInstance_Serialize ==
      (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_Serialize>)0x0) {
    pFVar14 = ::FName::FName(local_50,"STAT_MaterialInstance_Serialize");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_Serialize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaterialInstance_Serialize,
                        *pFVar14,L"MaterialInstance Serialize","STATGROUP_Shaders",
                        "STATCAT_Advanced",L"Shader Compression",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar7 = false;
  bVar10 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar13 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar13 == 0)) {
LAB_147f4f497:
    bVar8 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar18.Value;
        local_res20.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                   ,0xc81);
        bVar7 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147f4f497;
    local_res8 = FVar18.Value;
    uStackX_c = uVar13;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UMaterialInterface::Serialize((UMaterialInterface *)this,param_1);
  bVar20 = false;
  iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar12 < 0x24) {
LAB_147f4f555:
    if ((param_1->field_0x28 & 1) != 0) goto LAB_147f4f55f;
LAB_147f4f625:
    if (bVar20 == false) goto LAB_147f4f6a8;
  }
  else {
    uVar13 = *(uint *)&param_1->field_0x34 & 0x101000;
    if (((param_1->field_0x28 & 4) == 0) || (uVar13 == 0)) {
      bVar6 = false;
      if (uVar13 != 0) goto LAB_147f4f525;
    }
    else {
      bVar6 = true;
LAB_147f4f525:
      bVar11 = true;
      if ((bVar6) && ((this->CachedData).Ptr != (FMaterialInstanceCachedData *)0x0)) {
        bVar20 = true;
      }
    }
    puVar2 = *(ulonglong **)&param_1->field_0x8;
    piVar1 = (int *)*puVar2 + 1;
    if (piVar1 <= (int *)puVar2[1]) {
      bVar20 = *(int *)*puVar2 != 0;
      *puVar2 = (ulonglong)piVar1;
      goto LAB_147f4f555;
    }
    local_res8 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8 = (uint)bVar20;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8);
    if (1 < local_res8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f4f625;
    bVar20 = local_res8 != 0;
LAB_147f4f55f:
    if (bVar20 == false) {
      if (!bVar11) {
        local_90 = this;
        `UMaterialInstance::Serialize'::__l2::<lambda_1>::operator()(&local_90);
      }
      goto LAB_147f4f6a8;
    }
    pFVar16 = ::operator_new(0x10);
    if (pFVar16 != (FMaterialInstanceCachedData *)0x0) {
      (pFVar16->ParentLayerIndexRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->ParentLayerIndexRemap).ArrayNum = 0;
      (pFVar16->ParentLayerIndexRemap).ArrayMax = 0;
    }
    pFVar3 = (this->CachedData).Ptr;
    if ((pFVar3 != pFVar16) &&
       ((this->CachedData).Ptr = pFVar16, pFVar3 != (FMaterialInstanceCachedData *)0x0)) {
      pFVar4 = (pFVar3->ParentLayerIndexRemap).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar3,0x10);
    }
    this->bLoadedCachedData = '\x01';
  }
  if (((this->CachedData).Ptr == (FMaterialInstanceCachedData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                          ,0xcf1,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar17 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceCachedData,(UObject *)pUVar17,
                         L"MaterialInstanceCachedData");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton
             ,param_1,(uchar *)(this->CachedData).Ptr,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMaterialInstanceCachedData.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
LAB_147f4f6a8:
  if ((this->bHasStaticPermutationResource != 0) && (0x103 < *(int *)&param_1->field_0x40)) {
    local_88 = (FName)this->_padding_;
    UE::MaterialInterface::Private::SerializeInlineShaderMaps
              (param_1,&this->LoadedMaterialResources,&local_88);
  }
  if ((((param_1->field_0x28 & 4) != 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    ValidateTextureOverrides(this,GMaxRHIShaderPlatform);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_78);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Serialize @ 147f4f800

void __thiscall
UMaterialInstance::Serialize(UMaterialInstance *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetDoubleVectorParameterValueInternal @ 147f4fd60

void __thiscall
UMaterialInstance::SetDoubleVectorParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,TVector4<double> *param_2)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TEnumAsByte<EMaterialParameterAssociation> TVar10;
  undefined3 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FDoubleVectorParameterValue *pFVar15;
  FDoubleVectorParameterValue *pFVar16;
  uint uVar17;
  TArray<FDoubleVectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong lVar19;
  FLLMScope local_res20 [2];
  FMemScope local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FLLMScope::FLLMScope(local_res20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_58,MaterialInstance,true);
  FVar4 = param_1->Name;
  pTVar18 = &this->DoubleVectorParameterValues;
  iVar3 = param_1->Index;
  uVar2 = (param_1->Association).Value;
  uVar17 = 0;
  iVar14 = (this->DoubleVectorParameterValues).ArrayNum;
  if (0 < iVar14) {
    lVar19 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar17 < iVar14) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (FDoubleVectorParameterValue *)((pTVar18->AllocatorInstance).Data + lVar19);
      FVar5 = (pFVar15->ParameterInfo).Name;
      if ((((FVar5.ComparisonIndex.Value.Value == FVar4.ComparisonIndex.Value.Value) &&
           (FVar5.Number == FVar4.Number)) && ((pFVar15->ParameterInfo).Index == iVar3)) &&
         ((pFVar15->ParameterInfo).Association.Value == uVar2)) {
        if (pFVar15 != (FDoubleVectorParameterValue *)0x0) {
          if ((((param_2->field0_0x0)._s_0.X != (pFVar15->ParameterValue).field0_0x0._s_0.X) ||
              ((param_2->field0_0x0)._s_0.Y != (pFVar15->ParameterValue).field0_0x0._s_0.Y)) ||
             (((param_2->field0_0x0)._s_0.Z != (pFVar15->ParameterValue).field0_0x0._s_0.Z ||
              ((param_2->field0_0x0)._s_0.W != (pFVar15->ParameterValue).field0_0x0._s_0.W))))
          goto LAB_147f4ff88;
          goto LAB_147f4ffa5;
        }
        break;
      }
      iVar14 = (this->DoubleVectorParameterValues).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x40;
    } while ((int)uVar17 < iVar14);
  }
  uVar17 = (this->DoubleVectorParameterValues).ArrayNum;
  piVar1 = &(this->DoubleVectorParameterValues).ArrayMax;
  if (uVar17 == *piVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1040,&pTVar18->AllocatorInstance,piVar1);
  }
  (this->DoubleVectorParameterValues).ArrayNum = uVar17 + 1;
  uVar13 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar13 = ~uVar17 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar15 = (FDoubleVectorParameterValue *)0x0;
  pFVar16 = (FDoubleVectorParameterValue *)
            ((pTVar18->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x40);
  if (pFVar16 != (FDoubleVectorParameterValue *)0x0) {
    local_50 = 0;
    uStack_48 = CONCAT31(uStack_48._1_3_,2);
    uStack_44 = 0xffffffff;
    (pFVar16->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar16->ParameterInfo).Name.Number = 0;
    (pFVar16->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar16->ParameterInfo).field_0x9 = uStack_48._1_3_;
    (pFVar16->ParameterInfo).Index = 0xffffffff;
    (pFVar16->ParameterValue).field0_0x0._s_0.X = 0.0;
    (pFVar16->ParameterValue).field0_0x0._s_0.Y = 0.0;
    (pFVar16->ParameterValue).field0_0x0._s_0.Z = 0.0;
    (pFVar16->ParameterValue).field0_0x0._s_0.W = 1.0;
    (pFVar16->ExpressionGUID).A = 0;
    (pFVar16->ExpressionGUID).B = 0;
    (pFVar16->ExpressionGUID).C = 0;
    (pFVar16->ExpressionGUID).D = 0;
    pFVar15 = pFVar16;
  }
  TVar10.Value = (param_1->Association).Value;
  uVar11 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->Index;
  (pFVar15->ParameterInfo).Name = param_1->Name;
  (pFVar15->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar10.Value;
  *(undefined3 *)&(pFVar15->ParameterInfo).field_0x9 = uVar11;
  (pFVar15->ParameterInfo).Index = iVar3;
  (pFVar15->ExpressionGUID).C = 0;
  (pFVar15->ExpressionGUID).D = 0;
  (pFVar15->ExpressionGUID).A = 0;
  (pFVar15->ExpressionGUID).B = 0;
LAB_147f4ff88:
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar9 = (param_2->field0_0x0)._s_0.W;
  (pFVar15->ParameterValue).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (pFVar15->ParameterValue).field0_0x0._s_0.Y = dVar7;
  (pFVar15->ParameterValue).field0_0x0._s_0.Z = dVar8;
  (pFVar15->ParameterValue).field0_0x0._s_0.W = dVar9;
  GameThread_UpdateMIParameter<FDoubleVectorParameterValue>(this,pFVar15);
LAB_147f4ffa5:
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetFontParameterValueInternal @ 147f50030

void __thiscall
UMaterialInstance::SetFontParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,UFont *param_2,int param_3)

{
  int *piVar1;
  TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  FName FVar7;
  UFont *pUVar8;
  code *pcVar9;
  TEnumAsByte<EMaterialParameterAssociation> TVar10;
  undefined3 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FFontParameterValue *pFVar15;
  FFontParameterValue *pFVar16;
  longlong lVar17;
  FLLMScope local_res18 [2];
  int local_res20;
  FMemScope local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res20 = param_3;
  FLLMScope::FLLMScope(local_res18,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_60,MaterialInstance,true);
  if (param_2 != (UFont *)0x0) {
    UObject::ConditionalPostLoad((UObject *)param_2);
  }
  FVar6 = param_1->Name;
  pTVar2 = &this->FontParameterValues;
  iVar4 = (this->FontParameterValues).ArrayNum;
  iVar5 = param_1->Index;
  uVar14 = 0;
  uVar3 = (param_1->Association).Value;
  if (0 < iVar4) {
    lVar17 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar14 < iVar4) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar15 = (FFontParameterValue *)((pTVar2->AllocatorInstance).Data + lVar17);
      FVar7 = (pFVar15->ParameterInfo).Name;
      if ((((FVar7.ComparisonIndex.Value.Value == FVar6.ComparisonIndex.Value.Value) &&
           (FVar7.Number == FVar6.Number)) && ((pFVar15->ParameterInfo).Index == iVar5)) &&
         ((pFVar15->ParameterInfo).Association.Value == uVar3)) {
        if (pFVar15 != (FFontParameterValue *)0x0) {
          pUVar8 = (pFVar15->FontValue).field0_0x0.DebugPtr;
          if (pUVar8 == (UFont *)0x0) {
            bVar12 = param_2 == (UFont *)0x0;
          }
          else {
            bVar12 = pUVar8 == param_2;
          }
          if ((!bVar12) || (pFVar15->FontPage != local_res20)) goto LAB_147f50254;
          goto LAB_147f502aa;
        }
        break;
      }
      iVar4 = (this->FontParameterValues).ArrayNum;
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 0x30;
    } while ((int)uVar14 < iVar4);
  }
  uVar14 = (this->FontParameterValues).ArrayNum;
  piVar1 = &(this->FontParameterValues).ArrayMax;
  if (uVar14 == *piVar1) {
    uVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->FontParameterValues).ArrayNum = uVar14 + 1;
  uVar13 = 0;
  if ((int)uVar14 < (int)(uVar14 + 1)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar15 = (FFontParameterValue *)0x0;
  pFVar16 = (FFontParameterValue *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x30)
  ;
  if (pFVar16 != (FFontParameterValue *)0x0) {
    local_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar16->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar16->ParameterInfo).Name.Number = 0;
    (pFVar16->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar16->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar16->ParameterInfo).Index = 0xffffffff;
    (pFVar16->FontValue).field0_0x0.DebugPtr = (UFont *)0x0;
    pFVar16->FontPage = 0;
    (pFVar16->ExpressionGUID).A = 0;
    (pFVar16->ExpressionGUID).B = 0;
    (pFVar16->ExpressionGUID).C = 0;
    (pFVar16->ExpressionGUID).D = 0;
    pFVar15 = pFVar16;
  }
  TVar10.Value = (param_1->Association).Value;
  uVar11 = *(undefined3 *)&param_1->field_0x9;
  iVar5 = param_1->Index;
  (pFVar15->ParameterInfo).Name = param_1->Name;
  (pFVar15->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar10.Value;
  *(undefined3 *)&(pFVar15->ParameterInfo).field_0x9 = uVar11;
  (pFVar15->ParameterInfo).Index = iVar5;
  (pFVar15->ExpressionGUID).C = 0;
  (pFVar15->ExpressionGUID).D = 0;
  (pFVar15->ExpressionGUID).A = 0;
  (pFVar15->ExpressionGUID).B = 0;
LAB_147f50254:
  iVar5 = local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UFont *)0x0)) {
    (pFVar15->FontValue).field0_0x0.DebugPtr = param_2;
    pFVar15->FontPage = local_res20;
    if (param_2 == (UFont *)0x0) goto LAB_147f5029f;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    (pFVar15->FontValue).field0_0x0.DebugPtr = param_2;
    pFVar15->FontPage = iVar5;
  }
  UObjectBaseUtility::AddToCluster((UObjectBaseUtility *)param_2,(UObjectBaseUtility *)this,true);
LAB_147f5029f:
  GameThread_UpdateMIParameter<FFontParameterValue>(this,pFVar15);
LAB_147f502aa:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetNumericParameterDefault @ 147f50660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::SetNumericParameterDefault
          (UMaterialInstance *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FValue *param_3,EShaderPlatform param_4)

{
  return;
}

// SetParameterCollectionParameterValueInternal @ 147f506a0

void __thiscall
UMaterialInstance::SetParameterCollectionParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,
          UMaterialParameterCollection *param_2)

{
  int *piVar1;
  TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FParameterCollectionParameterValue *pFVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  UMaterialParameterCollection *pUVar9;
  code *pcVar10;
  TEnumAsByte<EMaterialParameterAssociation> TVar11;
  undefined3 uVar12;
  TObjectPtr<UMaterialParameterCollection>_u_0 TVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  uint uVar17;
  FParameterCollectionParameterValue *pFVar18;
  longlong lVar19;
  TObjectPtr<UMaterialParameterCollection>_u_0 local_res18;
  FLLMScope local_res20 [2];
  TObjectPtr<UMaterialParameterCollection>_u_0 *local_68;
  FMemScope local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res18.DebugPtr = param_2;
  FLLMScope::FLLMScope(local_res20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_60,MaterialInstance,true);
  if (local_res18.DebugPtr != (UMaterialParameterCollection *)0x0) {
    UObject::ConditionalPostLoad((UObject *)local_res18.DebugPtr);
  }
  FVar7 = param_1->Name;
  pTVar2 = &this->ParameterCollectionParameterValues;
  iVar5 = (this->ParameterCollectionParameterValues).ArrayNum;
  iVar6 = param_1->Index;
  uVar17 = 0;
  uVar4 = (param_1->Association).Value;
  if (0 < iVar5) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar5) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (FParameterCollectionParameterValue *)((pTVar2->AllocatorInstance).Data + lVar19);
      FVar8 = (pFVar18->ParameterInfo).Name;
      if ((((FVar8.ComparisonIndex.Value.Value == FVar7.ComparisonIndex.Value.Value) &&
           (FVar8.Number == FVar7.Number)) && ((pFVar18->ParameterInfo).Index == iVar6)) &&
         ((pFVar18->ParameterInfo).Association.Value == uVar4)) {
        if (pFVar18 != (FParameterCollectionParameterValue *)0x0) {
          pUVar9 = (pFVar18->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar9 == (UMaterialParameterCollection *)0x0) {
            bVar14 = local_res18.DebugPtr == (UMaterialParameterCollection *)0x0;
          }
          else {
            bVar14 = pUVar9 == local_res18.DebugPtr;
          }
          if (!bVar14) goto LAB_147f508bf;
          goto LAB_147f50958;
        }
        break;
      }
      iVar5 = (this->ParameterCollectionParameterValues).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)uVar17 < iVar5);
  }
  uVar17 = (this->ParameterCollectionParameterValues).ArrayNum;
  piVar1 = &(this->ParameterCollectionParameterValues).ArrayMax;
  if (uVar17 == *piVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ParameterCollectionParameterValues).ArrayNum = uVar17 + 1;
  uVar15 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (FParameterCollectionParameterValue *)0x0;
  pFVar3 = (FParameterCollectionParameterValue *)
           ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28);
  if (pFVar3 != (FParameterCollectionParameterValue *)0x0) {
    local_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar3->ParameterInfo).Name.Number = 0;
    (pFVar3->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar3->ParameterInfo).Index = 0xffffffff;
    (pFVar3->ParameterValue).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
    (pFVar3->ExpressionGUID).A = 0;
    (pFVar3->ExpressionGUID).B = 0;
    (pFVar3->ExpressionGUID).C = 0;
    (pFVar3->ExpressionGUID).D = 0;
    pFVar18 = pFVar3;
  }
  TVar11.Value = (param_1->Association).Value;
  uVar12 = *(undefined3 *)&param_1->field_0x9;
  iVar6 = param_1->Index;
  (pFVar18->ParameterInfo).Name = param_1->Name;
  (pFVar18->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar11.Value;
  *(undefined3 *)&(pFVar18->ParameterInfo).field_0x9 = uVar12;
  (pFVar18->ParameterInfo).Index = iVar6;
  (pFVar18->ExpressionGUID).C = 0;
  (pFVar18->ExpressionGUID).D = 0;
  (pFVar18->ExpressionGUID).A = 0;
  (pFVar18->ExpressionGUID).B = 0;
LAB_147f508bf:
  if (local_res18.DebugPtr != (UMaterialParameterCollection *)0x0) {
    pUVar16 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
    iVar6 = (int)pUVar16->_padding_;
    if ((*(int *)((local_res18.DebugPtr)->_padding_ + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_res18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar16->_padding_)) {
      local_68 = &local_res18;
      bVar14 = `UMaterialInstance::SetParameterCollectionParameterValueInternal'::__l12::<lambda_1>
               ::operator()(&local_68);
      if (!bVar14) goto LAB_147f50958;
    }
    TVar13 = local_res18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18.DebugPtr != (UMaterialParameterCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    (pFVar18->ParameterValue).field0_0x0.DebugPtr = (UMaterialParameterCollection *)TVar13;
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)local_res18.DebugPtr,(UObjectBaseUtility *)this,true);
    GameThread_UpdateMIParameter<FParameterCollectionParameterValue>(this,pFVar18);
  }
LAB_147f50958:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetParameterValueInternal @ 147f50990

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstance::SetParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,
          FMaterialParameterMetadata *param_2,EMaterialSetParameterValueFlags param_3)

{
  EMaterialParameterType EVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  FLinearColor_u_0 local_108;
  undefined1 local_f8;
  TPersistentObjectPtr<FSoftObjectPath> local_f0;
  TPersistentObjectPtr<FSoftObjectPath> local_c8;
  TVector4<double>_u_0 local_98;
  FScalarParameterAtlasInstanceData local_78;
  
  local_f8 = 0;
  local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_f0.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_f0.WeakPtr.ObjectIndex = 0;
  local_f0.WeakPtr.ObjectSerialNumber = 0;
  local_f0.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_f0.ObjectID.AssetPath.AssetName.Number = 0;
  local_f0.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_f0.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_f0.ObjectID.SubPathString,0);
  local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_c8.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_c8.WeakPtr.ObjectIndex = 0;
  local_c8.WeakPtr.ObjectSerialNumber = 0;
  local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_c8.ObjectID.AssetPath.AssetName.Number = 0;
  local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_c8.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_c8.ObjectID.SubPathString,0);
  EVar1 = (param_2->Value).Type;
  switch(EVar1) {
  case Scalar:
    local_78.bIsUsedAsAtlasPosition = (bool)local_f8;
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
              ((TPersistentObjectPtr<FSoftObjectPath> *)&local_78.Curve,&local_f0);
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
              ((TPersistentObjectPtr<FSoftObjectPath> *)&local_78.Atlas,&local_c8);
    fVar4 = FMaterialParameterValue::AsScalar(&param_2->Value);
    SetScalarParameterValueInternal(this,param_1,fVar4,(bool)((byte)param_3 & 1),&local_78);
    break;
  case Vector:
    if ((EVar1 != Vector) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == EMaterialParameterType::Vector",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                           ,0x177,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_108._0_8_ = (param_2->Value).field0_0x0.Double[0];
    local_108._8_8_ = (param_2->Value).field0_0x0.Double[1];
    SetVectorParameterValueInternal(this,param_1,(FLinearColor *)&local_108._s_0);
    break;
  case DoubleVector:
    if ((EVar1 != DoubleVector) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == EMaterialParameterType::DoubleVector",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                           ,0x178,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_98._s_0.X = (param_2->Value).field0_0x0.Double[0];
    local_98._s_0.Y = (param_2->Value).field0_0x0.Double[1];
    local_98._s_0.Z = (param_2->Value).field0_0x0.Double[2];
    local_98._s_0.W = (param_2->Value).field0_0x0.Double[3];
    SetDoubleVectorParameterValueInternal(this,param_1,(TVector4<double> *)&local_98._s_0);
    break;
  case Texture:
    SetTextureParameterValueInternal(this,param_1,(param_2->Value).field0_0x0.Texture);
    break;
  case TextureCollection:
    SetTextureCollectionParameterValueInternal
              (this,param_1,(param_2->Value).field0_0x0.TextureCollection);
    break;
  case Font:
    SetFontParameterValueInternal
              (this,param_1,(param_2->Value).field0_0x0.Font.Value,
               (param_2->Value).field0_0x0.Font.Page);
    break;
  case RuntimeVirtualTexture:
    SetRuntimeVirtualTextureParameterValueInternal
              (this,param_1,(param_2->Value).field0_0x0.RuntimeVirtualTexture);
    break;
  case SparseVolumeTexture:
    SetSparseVolumeTextureParameterValueInternal
              (this,param_1,(param_2->Value).field0_0x0.SparseVolumeTexture);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                       ,0x1000,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  case ParameterCollection:
    SetParameterCollectionParameterValueInternal
              (this,param_1,(param_2->Value).field0_0x0.ParameterCollection);
  }
  if (local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetParentInternal @ 147f50c10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

bool __thiscall
UMaterialInstance::SetParentInternal
          (UMaterialInstance *this,UMaterialInterface *param_1,bool param_2)

{
  TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UMaterialInterface *pUVar4;
  FMaterial *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  int iVar13;
  TObjectPtr<UMaterialInterface>_u_0 TVar14;
  TObjectPtr<UMaterialInterface>_u_0 TVar15;
  FScriptContainerElement *pFVar16;
  TObjectPtr<UMaterialInterface>_u_0 TVar17;
  bool bVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  FName local_res20;
  TArray<TRefCountPtr<FMaterial>,TSizedDefaultAllocator<32>_> local_c8;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FString local_a8;
  FDestructionSentinel local_98;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar18 = false;
  pUVar4 = (this->Parent).field0_0x0.DebugPtr;
  if ((pUVar4 != (UMaterialInterface *)0x0) && (pUVar4 == param_1)) {
    return false;
  }
  TVar17.DebugPtr = (UMaterialInterface *)0x0;
  if (param_1 == (UMaterialInterface *)0x0) {
LAB_147f50e97:
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (param_1 == (UMaterialInterface *)0x0)) {
      (this->Parent).field0_0x0.DebugPtr = param_1;
      if (param_1 != (UMaterialInterface *)0x0) goto LAB_147f50ec8;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->Parent).field0_0x0.DebugPtr = param_1;
LAB_147f50ec8:
      UObject::ConditionalPostLoad((UObject *)param_1);
    }
    bVar18 = true;
    if (param_2) {
      if (0 < (this->StaticPermutationMaterialResources).ArrayNum) {
        pTVar1 = &this->StaticPermutationMaterialResources;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        if ((TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *)&local_b8 != pTVar1) {
          pFVar16 = (pTVar1->AllocatorInstance).Data;
          (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar13 = (this->StaticPermutationMaterialResources).ArrayNum;
          uVar12 = (ulonglong)iVar13;
          local_b0._0_4_ = (this->StaticPermutationMaterialResources).ArrayNum;
          local_b0._4_4_ = (this->StaticPermutationMaterialResources).ArrayMax;
          (this->StaticPermutationMaterialResources).ArrayNum = 0;
          (this->StaticPermutationMaterialResources).ArrayMax = 0;
          local_b8.Data = pFVar16;
          if (0 < iVar13) {
            local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar3 = pFVar16 + uVar12 * 8;
            local_c8.ArrayNum = 0;
            local_c8.ArrayMax = 0;
            while( true ) {
              if ((int)uVar12 != iVar13) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res8);
              }
              if (pFVar16 == pFVar3) break;
              this_00 = *(FMaterial **)pFVar16;
              (**(code **)(this_00->_padding_ + 8))(this_00);
              iVar10 = local_c8.ArrayNum;
              if (local_c8.ArrayNum == local_c8.ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
              }
              local_c8.ArrayNum = iVar10 + 1;
              *(FMaterial **)(local_c8.AllocatorInstance.Data + (longlong)iVar10 * 8) = this_00;
              FMaterial::AddRef(this_00);
              uVar12 = local_b0 & 0xffffffff;
              pFVar16 = pFVar16 + 8;
            }
            uVar12 = local_b0 >> 0x20;
            local_b0 = local_b0 & 0xffffffff00000000;
            if ((int)uVar12 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
            }
            FMaterial::DeleteMaterialsOnRenderThread(&local_c8);
            DestructItems<TRefCountPtr<FMaterial>,int>
                      ((TRefCountPtr<FMaterial> *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum)
            ;
            if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.AllocatorInstance.Data);
            }
          }
        }
        (this->StaticPermutationMaterialResources).ArrayNum = 0;
        if ((this->StaticPermutationMaterialResources).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->StaticPermutationMaterialResources).AllocatorInstance,0,
                     &(this->StaticPermutationMaterialResources).ArrayMax);
        }
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
      }
      InitStaticPermutation(this,Background);
      goto LAB_147f5103f;
    }
  }
  else {
    pUVar11 = GetPrivateStaticClass();
    iVar13 = (int)pUVar11->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar11->_padding_)) {
LAB_147f50d7b:
      pUVar11 = Z_Construct_UClass_UMaterial_NoRegister();
      iVar13 = (int)pUVar11->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar11->_padding_)) {
        pUVar11 = UMaterialInstanceConstant::StaticClass();
        iVar13 = (int)pUVar11->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar11->_padding_)) {
          if (2 < (byte)LogMaterial._0_1_) {
            if (this->_padding_ == 0) {
              ::FString::FString(&local_a8,L"None");
            }
            else {
              local_res20 = *(FName *)(this->_padding_ + 0x18);
              ::FName::ToString(&local_res20,&local_a8);
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_60,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            goto LAB_147f50d60;
          }
          goto LAB_147f5102e;
        }
      }
      goto LAB_147f50e97;
    }
    TVar14.DebugPtr = param_1;
    if ((UMaterialInstance *)param_1 != this) {
      do {
        if ((UMaterialInstance *)TVar14.DebugPtr == (UMaterialInstance *)0x0) goto LAB_147f50d7b;
        pUVar11 = StaticClass();
        iVar13 = (int)pUVar11->_padding_;
        TVar15.DebugPtr = TVar17.DebugPtr;
        if ((iVar13 <= *(int *)((TVar14.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar14.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
            &pUVar11->_padding_)) {
          TVar15.DebugPtr =
               *(TObjectPtr<UMaterialInterface>_u_0 *)((longlong)(TVar14.DebugPtr + 1) + 0x48);
        }
        TVar14 = TVar15;
      } while ((UMaterialInstance *)TVar15.DebugPtr != this);
      if (TVar15.DebugPtr == (UMaterialInterface *)0x0) goto LAB_147f50d7b;
    }
    if (2 < (byte)LogMaterial._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_70,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_80,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      local_a8.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
        local_a8.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
      }
LAB_147f50d60:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        InitResources(this);
        return false;
      }
    }
  }
LAB_147f5102e:
  InitResources(this);
  if (bVar18 == false) {
    return false;
  }
LAB_147f5103f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_98);
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + 1;
  iVar13 = (int)this->_padding_ + -1;
  if (-1 < iVar13) {
    lVar19 = (longlong)iVar13 << 4;
    do {
      if (((int)this->_padding_ <= iVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (((*(int *)(lVar19 + 8 + this->_padding_) == 0) ||
          (plVar5 = *(longlong **)(lVar19 + this->_padding_), plVar5 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
        TVar17 = (TObjectPtr<UMaterialInterface>_u_0)0x1;
      }
      lVar19 = lVar19 + -0x10;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + -1;
  if (TVar17._0_1_ != '\0') {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  return bVar18;
}

// SetRuntimeVirtualTextureParameterValueInternal @ 147f51180

void __thiscall
UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,URuntimeVirtualTexture *param_2)

{
  int *piVar1;
  TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FRuntimeVirtualTextureParameterValue *pFVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  URuntimeVirtualTexture *pUVar9;
  code *pcVar10;
  TEnumAsByte<EMaterialParameterAssociation> TVar11;
  undefined3 uVar12;
  TObjectPtr<URuntimeVirtualTexture>_u_0 TVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  uint uVar17;
  FRuntimeVirtualTextureParameterValue *pFVar18;
  longlong lVar19;
  TObjectPtr<URuntimeVirtualTexture>_u_0 local_res18;
  FLLMScope local_res20 [2];
  TObjectPtr<URuntimeVirtualTexture>_u_0 *local_68;
  FMemScope local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res18.DebugPtr = param_2;
  FLLMScope::FLLMScope(local_res20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_60,MaterialInstance,true);
  if (local_res18.DebugPtr != (URuntimeVirtualTexture *)0x0) {
    UObject::ConditionalPostLoad((UObject *)local_res18.DebugPtr);
  }
  FVar7 = param_1->Name;
  pTVar2 = &this->RuntimeVirtualTextureParameterValues;
  iVar5 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
  iVar6 = param_1->Index;
  uVar17 = 0;
  uVar4 = (param_1->Association).Value;
  if (0 < iVar5) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar5) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (FRuntimeVirtualTextureParameterValue *)((pTVar2->AllocatorInstance).Data + lVar19);
      FVar8 = (pFVar18->ParameterInfo).Name;
      if ((((FVar8.ComparisonIndex.Value.Value == FVar7.ComparisonIndex.Value.Value) &&
           (FVar8.Number == FVar7.Number)) && ((pFVar18->ParameterInfo).Index == iVar6)) &&
         ((pFVar18->ParameterInfo).Association.Value == uVar4)) {
        if (pFVar18 != (FRuntimeVirtualTextureParameterValue *)0x0) {
          pUVar9 = (pFVar18->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar9 == (URuntimeVirtualTexture *)0x0) {
            bVar14 = local_res18.DebugPtr == (URuntimeVirtualTexture *)0x0;
          }
          else {
            bVar14 = pUVar9 == local_res18.DebugPtr;
          }
          if (!bVar14) goto LAB_147f5139f;
          goto LAB_147f51438;
        }
        break;
      }
      iVar5 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)uVar17 < iVar5);
  }
  uVar17 = (this->RuntimeVirtualTextureParameterValues).ArrayNum;
  piVar1 = &(this->RuntimeVirtualTextureParameterValues).ArrayMax;
  if (uVar17 == *piVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RuntimeVirtualTextureParameterValues).ArrayNum = uVar17 + 1;
  uVar15 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (FRuntimeVirtualTextureParameterValue *)0x0;
  pFVar3 = (FRuntimeVirtualTextureParameterValue *)
           ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28);
  if (pFVar3 != (FRuntimeVirtualTextureParameterValue *)0x0) {
    local_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar3->ParameterInfo).Name.Number = 0;
    (pFVar3->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar3->ParameterInfo).Index = 0xffffffff;
    (pFVar3->ParameterValue).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
    (pFVar3->ExpressionGUID).A = 0;
    (pFVar3->ExpressionGUID).B = 0;
    (pFVar3->ExpressionGUID).C = 0;
    (pFVar3->ExpressionGUID).D = 0;
    pFVar18 = pFVar3;
  }
  TVar11.Value = (param_1->Association).Value;
  uVar12 = *(undefined3 *)&param_1->field_0x9;
  iVar6 = param_1->Index;
  (pFVar18->ParameterInfo).Name = param_1->Name;
  (pFVar18->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar11.Value;
  *(undefined3 *)&(pFVar18->ParameterInfo).field_0x9 = uVar12;
  (pFVar18->ParameterInfo).Index = iVar6;
  (pFVar18->ExpressionGUID).C = 0;
  (pFVar18->ExpressionGUID).D = 0;
  (pFVar18->ExpressionGUID).A = 0;
  (pFVar18->ExpressionGUID).B = 0;
LAB_147f5139f:
  if (local_res18.DebugPtr != (URuntimeVirtualTexture *)0x0) {
    pUVar16 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
    iVar6 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&(local_res18.DebugPtr)->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(local_res18.DebugPtr)->field_0x10 + 0x30) +
         (longlong)iVar6 * 8) != &pUVar16->_padding_)) {
      local_68 = &local_res18;
      bVar14 = `UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal'::__l12::
               <lambda_1>::operator()(&local_68);
      if (!bVar14) goto LAB_147f51438;
    }
    TVar13 = local_res18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18.DebugPtr != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    (pFVar18->ParameterValue).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)TVar13;
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)local_res18.DebugPtr,(UObjectBaseUtility *)this,true);
    GameThread_UpdateMIParameter<FRuntimeVirtualTextureParameterValue>(this,pFVar18);
  }
LAB_147f51438:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetScalarParameterByIndexInternal @ 147f51520

bool __thiscall
UMaterialInstance::SetScalarParameterByIndexInternal
          (UMaterialInstance *this,int param_1,float param_2)

{
  FScalarParameterValue *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ScalarParameterValues).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (FScalarParameterValue *)
             ((this->ScalarParameterValues).AllocatorInstance.Data + (longlong)param_1 * 0x24);
    if (pFVar1 != (FScalarParameterValue *)0x0) {
      if (param_2 != pFVar1->ParameterValue) {
        pFVar1->ParameterValue = param_2;
        GameThread_UpdateMIParameter<FScalarParameterValue>(this,pFVar1);
      }
      return true;
    }
  }
  return false;
}

// SetScalarParameterValueInternal @ 147f51740

void __thiscall
UMaterialInstance::SetScalarParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,float param_2,bool param_3,
          FScalarParameterAtlasInstanceData *param_4)

{
  int *piVar1;
  TArray<FScalarParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScalarParameterValue *pFVar3;
  void *pvVar4;
  code *pcVar5;
  TEnumAsByte<EMaterialParameterAssociation> TVar6;
  undefined3 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  FScalarParameterValue *pFVar11;
  uint uVar12;
  FMemScope local_res8;
  undefined4 local_res18 [2];
  undefined4 uStack_b0;
  FMemoryImageMaterialParameterInfo local_a8;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FUtf8String local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  FUtf8String local_48 [2];
  
  local_res18[0] = 0;
  FLLMScope::FLLMScope((FLLMScope *)local_res18,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,MaterialInstance,true);
  pTVar2 = &this->ScalarParameterValues;
  local_a8.Name.ComparisonIndex = (param_1->Name).ComparisonIndex;
  local_a8.Name.Number = (param_1->Name).Number;
  local_a8.Index = param_1->Index;
  local_a8.Association.Value = (param_1->Association).Value;
  local_a8.Name.DisplayIndex.Value = 0;
  pFVar11 = GameThread_FindParameterByName<FScalarParameterValue>(pTVar2,&local_a8);
  if (pFVar11 == (FScalarParameterValue *)0x0) {
    uVar10 = (this->ScalarParameterValues).ArrayNum;
    piVar1 = &(this->ScalarParameterValues).ArrayMax;
    if (uVar10 == *piVar1) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x424,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ScalarParameterValues).ArrayNum = uVar10 + 1;
    uVar12 = 0;
    if ((int)uVar10 < (int)(uVar10 + 1)) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (FScalarParameterValue *)
             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x24);
    pFVar11 = (FScalarParameterValue *)0x0;
    if (pFVar3 != (FScalarParameterValue *)0x0) {
      local_90 = 0;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      local_88 = 0;
      local_78 = 0;
      local_80 = 0;
      FUtf8String::Reset(&local_70,0);
      local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48[0].Data.ArrayNum = 0;
      local_48[0].Data.ArrayMax = 0;
      local_60 = 0;
      local_50 = 0;
      local_58 = 0;
      FUtf8String::Reset(local_48,0);
      pFVar3->ParameterValue = 0.0;
      (pFVar3->ExpressionGUID).A = 0;
      (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
      (pFVar3->ParameterInfo).Name.Number = 0;
      (pFVar3->ParameterInfo).Association = '\x02';
      *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_b0._1_3_;
      (pFVar3->ParameterInfo).Index = 0xffffffff;
      (pFVar3->ExpressionGUID).B = 0;
      (pFVar3->ExpressionGUID).C = 0;
      (pFVar3->ExpressionGUID).D = 0;
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      pFVar11 = pFVar3;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    TVar6.Value = (param_1->Association).Value;
    uVar7 = *(undefined3 *)&param_1->field_0x9;
    iVar8 = param_1->Index;
    (pFVar11->ParameterInfo).Name = param_1->Name;
    (pFVar11->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar6.Value;
    *(undefined3 *)&(pFVar11->ParameterInfo).field_0x9 = uVar7;
    (pFVar11->ParameterInfo).Index = iVar8;
    (pFVar11->ExpressionGUID).C = 0;
    (pFVar11->ExpressionGUID).D = 0;
    (pFVar11->ExpressionGUID).A = 0;
    (pFVar11->ExpressionGUID).B = 0;
  }
  else if (param_2 == pFVar11->ParameterValue) goto LAB_147f51910;
  pFVar11->ParameterValue = param_2;
  GameThread_UpdateMIParameter<FScalarParameterValue>(this,pFVar11);
LAB_147f51910:
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope((FLLMScope *)local_res18);
  pvVar4 = *(void **)&(param_4->Atlas).SoftObjectPtr.field_0x18;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pvVar4 = *(void **)&(param_4->Curve).SoftObjectPtr.field_0x18;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return;
}

// SetSparseVolumeTextureParameterValueInternal @ 147f519a0

void __thiscall
UMaterialInstance::SetSparseVolumeTextureParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,USparseVolumeTexture *param_2)

{
  int *piVar1;
  TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FSparseVolumeTextureParameterValue *pFVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  USparseVolumeTexture *pUVar9;
  code *pcVar10;
  TEnumAsByte<EMaterialParameterAssociation> TVar11;
  undefined3 uVar12;
  TObjectPtr<USparseVolumeTexture>_u_0 TVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  uint uVar17;
  FSparseVolumeTextureParameterValue *pFVar18;
  longlong lVar19;
  TObjectPtr<USparseVolumeTexture>_u_0 local_res18;
  FLLMScope local_res20 [2];
  TObjectPtr<USparseVolumeTexture>_u_0 *local_68;
  FMemScope local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res18.DebugPtr = param_2;
  FLLMScope::FLLMScope(local_res20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_60,MaterialInstance,true);
  if (local_res18.DebugPtr != (USparseVolumeTexture *)0x0) {
    UObject::ConditionalPostLoad((UObject *)local_res18.DebugPtr);
  }
  FVar7 = param_1->Name;
  pTVar2 = &this->SparseVolumeTextureParameterValues;
  iVar5 = (this->SparseVolumeTextureParameterValues).ArrayNum;
  iVar6 = param_1->Index;
  uVar17 = 0;
  uVar4 = (param_1->Association).Value;
  if (0 < iVar5) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar5) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (FSparseVolumeTextureParameterValue *)((pTVar2->AllocatorInstance).Data + lVar19);
      FVar8 = (pFVar18->ParameterInfo).Name;
      if ((((FVar8.ComparisonIndex.Value.Value == FVar7.ComparisonIndex.Value.Value) &&
           (FVar8.Number == FVar7.Number)) && ((pFVar18->ParameterInfo).Index == iVar6)) &&
         ((pFVar18->ParameterInfo).Association.Value == uVar4)) {
        if (pFVar18 != (FSparseVolumeTextureParameterValue *)0x0) {
          pUVar9 = (pFVar18->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar9 == (USparseVolumeTexture *)0x0) {
            bVar14 = local_res18.DebugPtr == (USparseVolumeTexture *)0x0;
          }
          else {
            bVar14 = pUVar9 == local_res18.DebugPtr;
          }
          if (!bVar14) goto LAB_147f51bbf;
          goto LAB_147f51c3c;
        }
        break;
      }
      iVar5 = (this->SparseVolumeTextureParameterValues).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)uVar17 < iVar5);
  }
  uVar17 = (this->SparseVolumeTextureParameterValues).ArrayNum;
  piVar1 = &(this->SparseVolumeTextureParameterValues).ArrayMax;
  if (uVar17 == *piVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SparseVolumeTextureParameterValues).ArrayNum = uVar17 + 1;
  uVar15 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (FSparseVolumeTextureParameterValue *)0x0;
  pFVar3 = (FSparseVolumeTextureParameterValue *)
           ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28);
  if (pFVar3 != (FSparseVolumeTextureParameterValue *)0x0) {
    local_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar3->ParameterInfo).Name.Number = 0;
    (pFVar3->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar3->ParameterInfo).Index = 0xffffffff;
    (pFVar3->ParameterValue).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
    (pFVar3->ExpressionGUID).A = 0;
    (pFVar3->ExpressionGUID).B = 0;
    (pFVar3->ExpressionGUID).C = 0;
    (pFVar3->ExpressionGUID).D = 0;
    pFVar18 = pFVar3;
  }
  TVar11.Value = (param_1->Association).Value;
  uVar12 = *(undefined3 *)&param_1->field_0x9;
  iVar6 = param_1->Index;
  (pFVar18->ParameterInfo).Name = param_1->Name;
  (pFVar18->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar11.Value;
  *(undefined3 *)&(pFVar18->ParameterInfo).field_0x9 = uVar12;
  (pFVar18->ParameterInfo).Index = iVar6;
  (pFVar18->ExpressionGUID).C = 0;
  (pFVar18->ExpressionGUID).D = 0;
  (pFVar18->ExpressionGUID).A = 0;
  (pFVar18->ExpressionGUID).B = 0;
LAB_147f51bbf:
  if (local_res18.DebugPtr != (USparseVolumeTexture *)0x0) {
    pUVar16 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
    iVar6 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&(local_res18.DebugPtr)->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(local_res18.DebugPtr)->field_0x10 + 0x30) +
         (longlong)iVar6 * 8) != &pUVar16->_padding_)) {
      local_68 = &local_res18;
      bVar14 = `UMaterialInstance::SetSparseVolumeTextureParameterValueInternal'::__l12::<lambda_1>
               ::operator()(&local_68);
      if (!bVar14) goto LAB_147f51c3c;
    }
    TVar13 = local_res18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18.DebugPtr != (USparseVolumeTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    (pFVar18->ParameterValue).field0_0x0.DebugPtr = (USparseVolumeTexture *)TVar13;
    GameThread_UpdateMIParameter<FSparseVolumeTextureParameterValue>(this,pFVar18);
  }
LAB_147f51c3c:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetTextureCollectionParameterValueInternal @ 147f51cf0

void __thiscall
UMaterialInstance::SetTextureCollectionParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,UTextureCollection *param_2)

{
  int *piVar1;
  TArray<FTextureCollectionParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FTextureCollectionParameterValue *pFVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  UTextureCollection *pUVar9;
  code *pcVar10;
  TEnumAsByte<EMaterialParameterAssociation> TVar11;
  undefined3 uVar12;
  TObjectPtr<UTextureCollection>_u_0 TVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  uint uVar17;
  FTextureCollectionParameterValue *pFVar18;
  longlong lVar19;
  TObjectPtr<UTextureCollection>_u_0 local_res18;
  FLLMScope local_res20 [2];
  TObjectPtr<UTextureCollection>_u_0 *local_68;
  FMemScope local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res18.DebugPtr = param_2;
  FLLMScope::FLLMScope(local_res20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_60,MaterialInstance,true);
  if (local_res18.DebugPtr != (UTextureCollection *)0x0) {
    UObject::ConditionalPostLoad((UObject *)local_res18.DebugPtr);
  }
  FVar7 = param_1->Name;
  pTVar2 = &this->TextureCollectionParameterValues;
  iVar5 = (this->TextureCollectionParameterValues).ArrayNum;
  iVar6 = param_1->Index;
  uVar17 = 0;
  uVar4 = (param_1->Association).Value;
  if (0 < iVar5) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar5) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (FTextureCollectionParameterValue *)((pTVar2->AllocatorInstance).Data + lVar19);
      FVar8 = (pFVar18->ParameterInfo).Name;
      if ((((FVar8.ComparisonIndex.Value.Value == FVar7.ComparisonIndex.Value.Value) &&
           (FVar8.Number == FVar7.Number)) && ((pFVar18->ParameterInfo).Index == iVar6)) &&
         ((pFVar18->ParameterInfo).Association.Value == uVar4)) {
        if (pFVar18 != (FTextureCollectionParameterValue *)0x0) {
          pUVar9 = (pFVar18->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar9 == (UTextureCollection *)0x0) {
            bVar14 = local_res18.DebugPtr == (UTextureCollection *)0x0;
          }
          else {
            bVar14 = pUVar9 == local_res18.DebugPtr;
          }
          if (!bVar14) goto LAB_147f51f0f;
          goto LAB_147f51fa8;
        }
        break;
      }
      iVar5 = (this->TextureCollectionParameterValues).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)uVar17 < iVar5);
  }
  uVar17 = (this->TextureCollectionParameterValues).ArrayNum;
  piVar1 = &(this->TextureCollectionParameterValues).ArrayMax;
  if (uVar17 == *piVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TextureCollectionParameterValues).ArrayNum = uVar17 + 1;
  uVar15 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (FTextureCollectionParameterValue *)0x0;
  pFVar3 = (FTextureCollectionParameterValue *)
           ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28);
  if (pFVar3 != (FTextureCollectionParameterValue *)0x0) {
    local_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar3->ParameterInfo).Name.Number = 0;
    (pFVar3->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar3->ParameterInfo).Index = 0xffffffff;
    (pFVar3->ParameterValue).field0_0x0.DebugPtr = (UTextureCollection *)0x0;
    (pFVar3->ExpressionGUID).A = 0;
    (pFVar3->ExpressionGUID).B = 0;
    (pFVar3->ExpressionGUID).C = 0;
    (pFVar3->ExpressionGUID).D = 0;
    pFVar18 = pFVar3;
  }
  TVar11.Value = (param_1->Association).Value;
  uVar12 = *(undefined3 *)&param_1->field_0x9;
  iVar6 = param_1->Index;
  (pFVar18->ParameterInfo).Name = param_1->Name;
  (pFVar18->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar11.Value;
  *(undefined3 *)&(pFVar18->ParameterInfo).field_0x9 = uVar12;
  (pFVar18->ParameterInfo).Index = iVar6;
  (pFVar18->ExpressionGUID).C = 0;
  (pFVar18->ExpressionGUID).D = 0;
  (pFVar18->ExpressionGUID).A = 0;
  (pFVar18->ExpressionGUID).B = 0;
LAB_147f51f0f:
  if (local_res18.DebugPtr != (UTextureCollection *)0x0) {
    pUVar16 = Z_Construct_UClass_UTextureCollection_NoRegister();
    iVar6 = (int)pUVar16->_padding_;
    if ((*(int *)((local_res18.DebugPtr)->_padding_ + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_res18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar16->_padding_)) {
      local_68 = &local_res18;
      bVar14 = `UMaterialInstance::SetTextureCollectionParameterValueInternal'::__l12::<lambda_1>::
               operator()(&local_68);
      if (!bVar14) goto LAB_147f51fa8;
    }
    TVar13 = local_res18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18.DebugPtr != (UTextureCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    (pFVar18->ParameterValue).field0_0x0.DebugPtr = (UTextureCollection *)TVar13;
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)local_res18.DebugPtr,(UObjectBaseUtility *)this,true);
    GameThread_UpdateMIParameter<FTextureCollectionParameterValue>(this,pFVar18);
  }
LAB_147f51fa8:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetTextureParameterValueInternal @ 147f52340

void __thiscall
UMaterialInstance::SetTextureParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,UTexture *param_2)

{
  uchar uVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  UTexture *pUVar5;
  code *pcVar6;
  TEnumAsByte<EMaterialParameterAssociation> TVar7;
  undefined3 uVar8;
  TObjectPtr<UTexture>_u_0 TVar9;
  bool bVar10;
  uint uVar11;
  UClass *pUVar12;
  int iVar13;
  uint uVar14;
  FTextureParameterValue *pFVar15;
  longlong lVar16;
  TObjectPtr<UTexture>_u_0 local_res18;
  FLLMScope local_res20 [2];
  TObjectPtr<UTexture>_u_0 *local_68;
  FMemScope local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res18.DebugPtr = param_2;
  FLLMScope::FLLMScope(local_res20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_60,MaterialInstance,true);
  if (local_res18.DebugPtr != (UTexture *)0x0) {
    UObject::ConditionalPostLoad((UObject *)local_res18.DebugPtr);
  }
  FVar3 = param_1->Name;
  iVar13 = (this->TextureParameterValues).ArrayNum;
  iVar2 = param_1->Index;
  uVar14 = 0;
  uVar1 = (param_1->Association).Value;
  if (0 < iVar13) {
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < iVar13) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (FTextureParameterValue *)
                ((this->TextureParameterValues).AllocatorInstance.Data + lVar16);
      FVar4 = (pFVar15->ParameterInfo).Name;
      if ((((FVar4.ComparisonIndex.Value.Value == FVar3.ComparisonIndex.Value.Value) &&
           (FVar4.Number == FVar3.Number)) && ((pFVar15->ParameterInfo).Index == iVar2)) &&
         ((pFVar15->ParameterInfo).Association.Value == uVar1)) {
        if (pFVar15 != (FTextureParameterValue *)0x0) {
          pUVar5 = (pFVar15->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar5 == (UTexture *)0x0) {
            bVar10 = local_res18.DebugPtr == (UTexture *)0x0;
          }
          else {
            bVar10 = pUVar5 == local_res18.DebugPtr;
          }
          if (!bVar10) goto LAB_147f524dc;
          goto LAB_147f52575;
        }
        break;
      }
      iVar13 = (this->TextureParameterValues).ArrayNum;
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0x28;
    } while ((int)uVar14 < iVar13);
  }
  pFVar15 = operator_new<FTextureParameterValue,TSizedDefaultAllocator<32>_>
                      (0x28,&this->TextureParameterValues);
  if (pFVar15 != (FTextureParameterValue *)0x0) {
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    local_58 = 0;
    uStack_4c = 0xffffffff;
    (pFVar15->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar15->ParameterInfo).Name.Number = 0;
    (pFVar15->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar15->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar15->ParameterInfo).Index = 0xffffffff;
    (pFVar15->ParameterValue).field0_0x0.DebugPtr = (UTexture *)0x0;
    (pFVar15->ExpressionGUID).A = 0;
    (pFVar15->ExpressionGUID).B = 0;
    (pFVar15->ExpressionGUID).C = 0;
    (pFVar15->ExpressionGUID).D = 0;
  }
  TVar7.Value = (param_1->Association).Value;
  uVar8 = *(undefined3 *)&param_1->field_0x9;
  iVar13 = param_1->Index;
  (pFVar15->ParameterInfo).Name = param_1->Name;
  (pFVar15->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar7.Value;
  *(undefined3 *)&(pFVar15->ParameterInfo).field_0x9 = uVar8;
  (pFVar15->ParameterInfo).Index = iVar13;
  (pFVar15->ExpressionGUID).C = 0;
  (pFVar15->ExpressionGUID).D = 0;
  (pFVar15->ExpressionGUID).A = 0;
  (pFVar15->ExpressionGUID).B = 0;
LAB_147f524dc:
  if (local_res18.DebugPtr != (UTexture *)0x0) {
    pUVar12 = Z_Construct_UClass_UTexture_NoRegister();
    iVar13 = (int)pUVar12->_padding_;
    if ((*(int *)((local_res18.DebugPtr)->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_res18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar12->_padding_)) {
      local_68 = &local_res18;
      bVar10 = `UMaterialInstance::SetTextureParameterValueInternal'::__l12::<lambda_1>::operator()
                         (&local_68);
      if (!bVar10) goto LAB_147f52575;
    }
    TVar9 = local_res18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18.DebugPtr != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    (pFVar15->ParameterValue).field0_0x0.DebugPtr = (UTexture *)TVar9;
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)local_res18.DebugPtr,(UObjectBaseUtility *)this,true);
    GameThread_UpdateMIParameter<FTextureParameterValue>(this,pFVar15);
  }
LAB_147f52575:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetVectorParameterByIndexInternal @ 147f52730

bool __thiscall
UMaterialInstance::SetVectorParameterByIndexInternal
          (UMaterialInstance *this,int param_1,FLinearColor *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  FVectorParameterValue *pFVar5;
  
  if ((-1 < param_1) && (param_1 < (this->VectorParameterValues).ArrayNum)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar5 = (FVectorParameterValue *)
             ((this->VectorParameterValues).AllocatorInstance.Data + (longlong)param_1 * 0x30);
    if (pFVar5 != (FVectorParameterValue *)0x0) {
      if (((((param_2->field0_0x0)._s_0.R != (pFVar5->ParameterValue).field0_0x0._s_0.R) ||
           ((param_2->field0_0x0)._s_0.G != (pFVar5->ParameterValue).field0_0x0._s_0.G)) ||
          ((param_2->field0_0x0)._s_0.B != (pFVar5->ParameterValue).field0_0x0._s_0.B)) ||
         ((param_2->field0_0x0)._s_0.A != (pFVar5->ParameterValue).field0_0x0._s_0.A)) {
        uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
        *(undefined8 *)&(pFVar5->ParameterValue).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
        *(undefined8 *)((longlong)&(pFVar5->ParameterValue).field0_0x0 + 8) = uVar2;
        GameThread_UpdateMIParameter<FVectorParameterValue>(this,pFVar5);
      }
      return true;
    }
  }
  return false;
}

// SetVectorParameterValueInternal @ 147f52880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMaterialInstance::SetVectorParameterValueInternal
          (UMaterialInstance *this,FMaterialParameterInfo *param_1,FLinearColor *param_2)

{
  int *piVar1;
  TArray<FVectorParameterValue,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  TEnumAsByte<EMaterialParameterAssociation> TVar5;
  undefined3 uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  FVectorParameterValue *pFVar10;
  uint uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined4 uStack_50;
  FMemoryImageMaterialParameterInfo local_48;
  
  FLLMScope::FLLMScope(local_res8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,MaterialInstance,true);
  pTVar2 = &this->VectorParameterValues;
  local_48.Name.ComparisonIndex = (param_1->Name).ComparisonIndex;
  local_48.Name.Number = (param_1->Name).Number;
  local_48.Index = param_1->Index;
  local_48.Association.Value = (param_1->Association).Value;
  local_48.Name.DisplayIndex.Value = 0;
  pFVar10 = GameThread_FindParameterByName<FVectorParameterValue>(pTVar2,&local_48);
  if (pFVar10 == (FVectorParameterValue *)0x0) {
    piVar1 = &(this->VectorParameterValues).ArrayMax;
    uVar9 = (this->VectorParameterValues).ArrayNum;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x430,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->VectorParameterValues).ArrayNum = uVar9 + 1;
    uVar11 = 0;
    if ((int)uVar9 < (int)(uVar9 + 1)) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar10 = (FVectorParameterValue *)
              ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30);
    if (pFVar10 == (FVectorParameterValue *)0x0) {
      _DAT_00000000 = param_1->Name;
      DAT_00000008 = param_1->Association;
      unique0x100001fb = *(undefined3 *)&param_1->field_0x9;
      unique0x100001fe = param_1->Index;
      _DAT_00000028 = 0;
      _DAT_00000020 = 0;
      pFVar10 = (FVectorParameterValue *)0x0;
    }
    else {
      *(undefined8 *)&(pFVar10->ParameterValue).field0_0x0 = 0;
      *(undefined8 *)((longlong)&(pFVar10->ParameterValue).field0_0x0 + 8) = 0;
      (pFVar10->ParameterInfo).Name.ComparisonIndex = 0;
      (pFVar10->ParameterInfo).Name.Number = 0;
      (pFVar10->ParameterInfo).Association = '\x02';
      *(undefined3 *)&(pFVar10->ParameterInfo).field_0x9 = uStack_50._1_3_;
      (pFVar10->ParameterInfo).Index = 0xffffffff;
      (pFVar10->ExpressionGUID).A = 0;
      (pFVar10->ExpressionGUID).B = 0;
      (pFVar10->ExpressionGUID).C = 0;
      (pFVar10->ExpressionGUID).D = 0;
      TVar5.Value = (param_1->Association).Value;
      uVar6 = *(undefined3 *)&param_1->field_0x9;
      iVar7 = param_1->Index;
      (pFVar10->ParameterInfo).Name = param_1->Name;
      (pFVar10->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar5.Value
      ;
      *(undefined3 *)&(pFVar10->ParameterInfo).field_0x9 = uVar6;
      (pFVar10->ParameterInfo).Index = iVar7;
      (pFVar10->ExpressionGUID).C = 0;
      (pFVar10->ExpressionGUID).D = 0;
      (pFVar10->ExpressionGUID).A = 0;
      (pFVar10->ExpressionGUID).B = 0;
    }
  }
  else if (((((param_2->field0_0x0)._s_0.R == (pFVar10->ParameterValue).field0_0x0._s_0.R) &&
            ((param_2->field0_0x0)._s_0.G == (pFVar10->ParameterValue).field0_0x0._s_0.G)) &&
           ((param_2->field0_0x0)._s_0.B == (pFVar10->ParameterValue).field0_0x0._s_0.B)) &&
          ((param_2->field0_0x0)._s_0.A == (pFVar10->ParameterValue).field0_0x0._s_0.A))
  goto LAB_147f52a22;
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&(pFVar10->ParameterValue).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&(pFVar10->ParameterValue).field0_0x0 + 8) = uVar4;
  GameThread_UpdateMIParameter<FVectorParameterValue>(this,pFVar10);
LAB_147f52a22:
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShouldAlwaysEvaluateWorldPositionOffset @ 147f52a50

bool __thiscall UMaterialInstance::ShouldAlwaysEvaluateWorldPositionOffset(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f52a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x508))();
    return (bool)uVar2;
  }
  return false;
}

// StartCacheUniformExpressions @ 147f52ab0

void __thiscall UMaterialInstance::StartCacheUniformExpressions(UMaterialInstance *this)

{
  this->bCachingUniformExpressions = true;
  FODSCManager::RegisterMaterialInstance(this);
  return;
}

// StaticRegisterNativesUMaterialInstance @ 147f52c60

void __cdecl UMaterialInstance::StaticRegisterNativesUMaterialInstance(void)

{
  return;
}

// UpdateLightmassTextureTracking @ 147f53c30

bool __thiscall UMaterialInstance::UpdateLightmassTextureTracking(UMaterialInstance *this)

{
  return false;
}

// UpdateOverridableBaseProperties @ 147f54ba0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UMaterialInstance::UpdateOverridableBaseProperties(UMaterialInstance *this)

{
  undefined1 *puVar1;
  float fVar2;
  undefined1 uVar3;
  ushort uVar4;
  FMaterialShadingModelField FVar5;
  UMaterialInterface *pUVar6;
  int iVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  uchar uVar11;
  EBlendMode EVar12;
  ushort *puVar13;
  float *pfVar14;
  ulonglong uVar15;
  byte bVar16;
  TEnumAsByte<EBlendMode> *pTVar17;
  byte bVar18;
  byte bVar19;
  FMaterialShadingModelField *pFVar20;
  float fVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pUVar6 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar6 == (UMaterialInterface *)0x0) {
    this->TwoSided = '\0';
    this->DitheredLODTransition = '\0';
    this->bIsThinSurface = '\0';
    this->bOutputTranslucentVelocity = '\0';
    this->bCompatibleWithLumenCardSharing = '\0';
    this->bEnableDisplacementFade = '\0';
    this->bEnableTessellation = '\0';
    this->bHasPixelAnimation = '\0';
    this->bIsShadingModelFromMaterialExpression = '\0';
    this->OpacityMaskClipValue = 0.0;
    (this->BlendMode).Value = '\0';
    (this->ShadingModels).ShadingModelField = 2;
    (this->DisplacementScaling).Magnitude = 4.0;
    (this->DisplacementScaling).Center = 0.5;
    (this->DisplacementFadeRange).StartSizePixels = 4.0;
    *(undefined8 *)&(this->DisplacementFadeRange).EndSizePixels = 0x3f800000;
    return;
  }
  if ((this->BasePropertyOverrides).bOverride_OpacityMaskClipValue == 0) {
    fVar21 = (float)(**(code **)(pUVar6->_padding_ + 0x450))();
    (this->BasePropertyOverrides).OpacityMaskClipValue = fVar21;
  }
  else {
    fVar21 = (this->BasePropertyOverrides).OpacityMaskClipValue;
  }
  this->OpacityMaskClipValue = fVar21;
  if ((this->BasePropertyOverrides).bOverride_CastDynamicShadowAsMasked == '\0') {
    bVar16 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x458))();
    bVar18 = (this->bCastDynamicShadowAsMasked ^ bVar16) & 1 ^ this->field_0x179;
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    bVar19 = (bVar16 << 2 ^ bVar19) & 4 ^ bVar19;
    (this->BasePropertyOverrides).field_0x2 = bVar19;
  }
  else {
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    bVar18 = ((this->BasePropertyOverrides).bCastDynamicShadowAsMasked ^
             this->bCastDynamicShadowAsMasked) & 1 ^ this->field_0x179;
  }
  this->field_0x179 = bVar18;
  if ((bool)(this->BasePropertyOverrides).bOverride_OutputTranslucentVelocity) {
    bVar18 = (bVar19 >> 2 ^ bVar18) & 2 ^ bVar18;
  }
  else {
    cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x498))();
    bVar18 = (cVar9 * '\x02' ^ this->field_0x179) & 2U ^ this->field_0x179;
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    bVar19 = (cVar9 << 3 ^ bVar19) & 8 ^ bVar19;
    (this->BasePropertyOverrides).field_0x2 = bVar19;
  }
  this->field_0x179 = bVar18;
  if ((this->BasePropertyOverrides).bOverride_bHasPixelAnimation == 0) {
    cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x520))();
    bVar18 = (cVar9 << 3 ^ this->field_0x179) & 8U ^ this->field_0x179;
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    bVar19 = (cVar9 << 4 ^ bVar19) & 0x10 ^ bVar19;
    (this->BasePropertyOverrides).field_0x2 = bVar19;
  }
  else {
    bVar18 = (bVar19 >> 1 ^ bVar18) & 8 ^ bVar18;
  }
  this->field_0x179 = bVar18;
  if ((this->BasePropertyOverrides).bOverride_bEnableTessellation == '\0') {
    cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x578))();
    bVar18 = (cVar9 << 4 ^ this->field_0x179) & 0x10U ^ this->field_0x179;
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    (this->BasePropertyOverrides).field_0x2 = (cVar9 << 5 ^ bVar19) & 0x20 ^ bVar19;
  }
  else {
    bVar18 = (bVar19 >> 1 ^ bVar18) & 0x10 ^ bVar18;
  }
  this->field_0x179 = bVar18;
  if ((this->BasePropertyOverrides).bOverride_ShadingModel == '\0') {
    pUVar6 = (this->Parent).field0_0x0.DebugPtr;
    puVar13 = (ushort *)(**(code **)(pUVar6->_padding_ + 0x468))(pUVar6,local_res10);
    pFVar20 = &this->ShadingModels;
    pFVar20->ShadingModelField = *puVar13;
    bVar19 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x470))();
    this->field_0x179 = (bVar19 << 2 ^ this->field_0x179) & 4 ^ this->field_0x179;
    if ((bVar19 & 1) == 0) {
      uVar15 = (ulonglong)pFVar20->ShadingModelField -
               ((ulonglong)(pFVar20->ShadingModelField >> 1) & 0x5555555555555555);
      uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
      if ((char)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01'
         ) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2513137771804101086>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                            ,0x9de,"ShadingModels.CountShadingModels() == 1");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (0x1ffe < (ushort)(pFVar20->ShadingModelField - 1)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                            ,0x2fc,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar4 = pFVar20->ShadingModelField;
      iVar7 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
        }
      }
      uVar11 = ' ';
      if (uVar4 != 0) {
        uVar11 = (uchar)iVar7;
      }
      (this->BasePropertyOverrides).ShadingModel.Value = uVar11;
    }
    else {
      (this->BasePropertyOverrides).ShadingModel.Value = '\x0e';
    }
  }
  else {
    bVar19 = (this->BasePropertyOverrides).ShadingModel.Value;
    if (bVar19 == 0xe) {
      pUVar6 = (this->Parent).field0_0x0.DebugPtr;
      puVar13 = (ushort *)(**(code **)(pUVar6->_padding_ + 0x468))(pUVar6,local_res8);
      (this->ShadingModels).ShadingModelField = *puVar13;
      cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x470))();
      this->field_0x179 = (cVar9 << 2 ^ this->field_0x179) & 4U ^ this->field_0x179;
    }
    else {
      if (0xc < bVar19) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InShadingModel < MSM_NUM",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                            ,0x2e3,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      this->bIsShadingModelFromMaterialExpression = '\0';
      (this->ShadingModels).ShadingModelField = (ushort)(1 << (bVar19 & 0x1f));
    }
  }
  pFVar20 = &this->ShadingModels;
  bVar10 = Substrate::IsSubstrateEnabled();
  if (bVar10) {
    pTVar17 = &(this->BasePropertyOverrides).BlendMode;
    EVar12 = ConvertLegacyBlendMode
                       ((uint)pTVar17->Value,(FMaterialShadingModelField)pFVar20->ShadingModelField)
    ;
    pUVar6 = (this->Parent).field0_0x0.DebugPtr;
    FVar5.ShadingModelField = pFVar20->ShadingModelField;
    pTVar17->Value = (uchar)EVar12;
    EVar12 = (**(code **)(pUVar6->_padding_ + 0x460))();
    EVar12 = ConvertLegacyBlendMode(EVar12,FVar5);
    (this->BlendMode).Value = (uchar)EVar12;
  }
  else {
    if ((this->BlendMode).Value == '\a') {
      (this->BlendMode).Value = '\x02';
    }
    pTVar17 = &(this->BasePropertyOverrides).BlendMode;
    if (pTVar17->Value == '\a') {
      pTVar17->Value = '\x02';
    }
  }
  pTVar17 = &(this->BasePropertyOverrides).BlendMode;
  if ((this->BasePropertyOverrides).bOverride_BlendMode == '\0') {
    uVar11 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x460))();
    pTVar17->Value = uVar11;
  }
  else {
    uVar11 = pTVar17->Value;
  }
  (this->BlendMode).Value = uVar11;
  UMaterialInterface::FilterOutPlatformShadingModels(GMaxRHIShaderPlatform,pFVar20);
  if ((this->BasePropertyOverrides).bOverride_TwoSided == '\0') {
    cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x478))();
    bVar19 = (cVar9 << 5 ^ this->field_0x178) & 0x20U ^ this->field_0x178;
    (this->BasePropertyOverrides).TwoSided = bVar19 >> 5;
  }
  else {
    bVar19 = ((byte)(this->BasePropertyOverrides).field_0x1 >> 2 ^ this->field_0x178) & 0x20 ^
             this->field_0x178;
  }
  this->field_0x178 = bVar19;
  if ((this->BasePropertyOverrides).bOverride_bIsThinSurface == '\0') {
    bVar16 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x480))();
    bVar19 = (bVar16 << 6 ^ this->field_0x178) & 0x40 ^ this->field_0x178;
    uVar3 = (this->BasePropertyOverrides).field_0x2;
    bVar16 = (bVar16 ^ (this->BasePropertyOverrides).bIsThinSurface) & 1 ^ uVar3;
    (this->BasePropertyOverrides).field_0x2 = bVar16;
  }
  else {
    bVar16 = (this->BasePropertyOverrides).field_0x2;
    bVar19 = (bVar16 << 6 ^ bVar19) & 0x40 ^ bVar19;
  }
  this->field_0x178 = bVar19;
  if ((this->BasePropertyOverrides).bOverride_DitheredLODTransition == '\0') {
    cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x488))();
    bVar16 = this->field_0x178 & 0x7f | cVar9 << 7;
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    (this->BasePropertyOverrides).field_0x2 = (bVar16 >> 6 ^ bVar19) & 2 ^ bVar19;
  }
  else {
    bVar16 = (bVar16 & 0xfe) << 6 | bVar19 & 0x7f;
  }
  this->field_0x178 = bVar16;
  if ((this->BasePropertyOverrides).bOverride_DisplacementScaling == '\0') {
    pUVar6 = (this->Parent).field0_0x0.DebugPtr;
    pfVar14 = (float *)(**(code **)(pUVar6->_padding_ + 0x4e8))(pUVar6,local_res18);
    fVar21 = *pfVar14;
    fVar2 = pfVar14[1];
    (this->DisplacementScaling).Magnitude = fVar21;
    (this->DisplacementScaling).Center = fVar2;
    (this->BasePropertyOverrides).DisplacementScaling.Magnitude = fVar21;
    (this->BasePropertyOverrides).DisplacementScaling.Center = fVar2;
  }
  else {
    this->DisplacementScaling = (this->BasePropertyOverrides).DisplacementScaling;
  }
  if ((this->BasePropertyOverrides).bOverride_bEnableDisplacementFade == '\0') {
    cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x4f0))();
    bVar19 = (this->BasePropertyOverrides).field_0x2;
    this->field_0x179 = (cVar9 << 5 ^ this->field_0x179) & 0x20U ^ this->field_0x179;
    (this->BasePropertyOverrides).field_0x2 = (cVar9 << 6 ^ bVar19) & 0x40 ^ bVar19;
  }
  else {
    this->field_0x179 =
         ((byte)(this->BasePropertyOverrides).field_0x2 >> 1 ^ this->field_0x179) & 0x20 ^
         this->field_0x179;
  }
  if ((this->BasePropertyOverrides).bOverride_DisplacementFadeRange == '\0') {
    pUVar6 = (this->Parent).field0_0x0.DebugPtr;
    pfVar14 = (float *)(**(code **)(pUVar6->_padding_ + 0x4f8))(pUVar6,local_res20);
    fVar21 = *pfVar14;
    fVar2 = pfVar14[1];
    (this->DisplacementFadeRange).StartSizePixels = fVar21;
    (this->DisplacementFadeRange).EndSizePixels = fVar2;
    (this->BasePropertyOverrides).DisplacementFadeRange.StartSizePixels = fVar21;
    (this->BasePropertyOverrides).DisplacementFadeRange.EndSizePixels = fVar2;
  }
  else {
    this->DisplacementFadeRange = (this->BasePropertyOverrides).DisplacementFadeRange;
  }
  if ((this->BasePropertyOverrides).bOverride_MaxWorldPositionOffsetDisplacement == '\0') {
    fVar21 = (float)(**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x500))();
    (this->BasePropertyOverrides).MaxWorldPositionOffsetDisplacement = fVar21;
  }
  else {
    fVar21 = (this->BasePropertyOverrides).MaxWorldPositionOffsetDisplacement;
  }
  this->MaxWorldPositionOffsetDisplacement = fVar21;
  if ((this->BasePropertyOverrides).bOverride_CompatibleWithLumenCardSharing != '\0') {
    this->field_0x179 =
         ((byte)(this->BasePropertyOverrides).field_0x2 >> 1 ^ this->field_0x179) & 0x40 ^
         this->field_0x179;
    return;
  }
  cVar9 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x588))();
  bVar16 = (cVar9 << 6 ^ this->field_0x179) & 0x40U ^ this->field_0x179;
  this->field_0x179 = bVar16;
  (this->BasePropertyOverrides).bCompatibleWithLumenCardSharing = bVar16 >> 6;
  return;
}

// UpdateParameters @ 147f55350

bool __thiscall UMaterialInstance::UpdateParameters(UMaterialInstance *this)

{
  return false;
}

// ValidateTextureOverrides @ 147f55410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMaterialInstance::ValidateTextureOverrides(UMaterialInstance *this,EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  FMaterial *this_00;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  FMaterialTextureParameterInfo *this_01;
  EMaterialTextureParameterType EVar7;
  FMaterialTextureParameterInfo *pFVar8;
  UTexture *local_res18;
  FName local_res20;
  FString local_258;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  TArrayView<FMaterialTextureParameterInfo_const_,int> local_148;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar2 = IsInGameThread();
  if ((bVar2) || (bVar2 = (*IsAsyncLoading)(), bVar2)) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    this_00 = (FMaterial *)(**(code **)(*plVar4 + 0x380))(plVar4,param_1,4);
    bVar2 = UseVirtualTexturing((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (this_00 != (FMaterial *)0x0) {
      local_210 = (FName)this->_padding_;
      EVar7 = Standard2D;
      local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258.Data.ArrayNum = 0;
      local_258.Data.ArrayMax = 0;
      ::FName::ToString(&local_210,&local_258);
      do {
        if (EVar7 != SparseVolume) {
          FMaterial::GetUniformTextureExpressions(this_00,&local_148,EVar7);
          pFVar8 = local_148.DataPtr + local_148.ArrayNum;
          for (this_01 = local_148.DataPtr; this_01 != pFVar8; this_01 = this_01 + 1) {
            local_res18 = (UTexture *)0x0;
            FMaterialTextureParameterInfo::GetGameThreadTextureValue
                      (this_01,(UMaterialInterface *)this,this_00,&local_res18);
            if (local_res18 != (UTexture *)0x0) {
              uVar5 = (**(code **)(local_res18->_padding_ + 0x340))();
              switch(EVar7) {
              case Standard2D:
                if ((uVar5 & 0x3010) == 0) {
                  if (1 < (byte)LogMaterial._0_1_) {
                    local_208 = (FName)local_res18->_padding_;
                    ::FName::ToString(&local_208,&local_1b8);
                    local_res20.Number = (this_01->ParameterInfo).Name.Number;
                    local_108._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                    local_108._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                    local_res20.ComparisonIndex.Value = (undefined4)local_108;
                    ::FName::ToString(&local_res20,&local_b8);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                    FVar6.Data = local_1b8.Data.AllocatorInstance.Data;
                    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                      FVar6.Data = local_1b8.Data.AllocatorInstance.Data;
                    }
                    goto LAB_147f55620;
                  }
                }
                else if (((bVar2) && ((uVar5 >> 0xd & 1) != 0)) && (1 < (byte)LogMaterial._0_1_)) {
                  local_200 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_200,&local_1c8);
                  local_248.Number = (this_01->ParameterInfo).Name.Number;
                  local_d8._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                  local_d8._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                  local_248.ComparisonIndex.Value = (undefined4)local_d8;
                  ::FName::ToString(&local_248,&local_a8);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                  FVar6.Data = local_1c8.Data.AllocatorInstance.Data;
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                    FVar6.Data = local_1c8.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147f55620;
                }
                break;
              case Cube:
                if (((uVar5 & 0x20) == 0) && (1 < (byte)LogMaterial._0_1_)) {
                  local_1f8 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_1f8,&local_1a8);
                  local_240.Number = (this_01->ParameterInfo).Name.Number;
                  local_c8._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                  local_c8._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                  local_240.ComparisonIndex.Value = (undefined4)local_c8;
                  ::FName::ToString(&local_240,&local_98);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                  FVar6.Data = local_1a8.Data.AllocatorInstance.Data;
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                    FVar6.Data = local_1a8.Data.AllocatorInstance.Data;
                  }
LAB_147f55620:
                  if (FVar6.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar6.Data);
                  }
                }
                break;
              case Array2D:
                if (((uVar5 & 0x40) == 0) && (1 < (byte)LogMaterial._0_1_)) {
                  local_1f0 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_1f0,&local_198);
                  local_238.Number = (this_01->ParameterInfo).Name.Number;
                  local_128._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                  local_128._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                  local_238.ComparisonIndex.Value = (undefined4)local_128;
                  ::FName::ToString(&local_238,&local_88);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                  FVar6.Data = local_198.Data.AllocatorInstance.Data;
                  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88.Data.AllocatorInstance.Data);
                    FVar6.Data = local_198.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147f55620;
                }
                break;
              case ArrayCube:
                if ((-1 < (char)uVar5) && (1 < (byte)LogMaterial._0_1_)) {
                  local_1e8 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_1e8,&local_188);
                  local_230.Number = (this_01->ParameterInfo).Name.Number;
                  local_118._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                  local_118._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                  local_230.ComparisonIndex.Value = (undefined4)local_118;
                  ::FName::ToString(&local_230,&local_78);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                  FVar6.Data = local_188.Data.AllocatorInstance.Data;
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                    FVar6.Data = local_188.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147f55620;
                }
                break;
              case Volume:
                if (((uVar5 >> 8 & 1) == 0) && (1 < (byte)LogMaterial._0_1_)) {
                  local_1e0 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_1e0,&local_178);
                  local_228.Number = (this_01->ParameterInfo).Name.Number;
                  local_138._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                  local_138._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                  local_228.ComparisonIndex.Value = (undefined4)local_138;
                  ::FName::ToString(&local_228,&local_68);
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_MaterialInstanc_1519af868,
                             (FLogCategoryBase *)&LogMaterial);
                  FVar6.Data = local_178.Data.AllocatorInstance.Data;
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                    FVar6.Data = local_178.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147f55620;
                }
                break;
              case Virtual:
                if ((uVar5 & 0x3010) == 0) {
                  if (1 < (byte)LogMaterial._0_1_) {
                    local_1d8 = (FName)local_res18->_padding_;
                    ::FName::ToString(&local_1d8,&local_168);
                    local_220.Number = (this_01->ParameterInfo).Name.Number;
                    local_f8._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                    local_f8._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                    local_220.ComparisonIndex.Value = (undefined4)local_f8;
                    ::FName::ToString(&local_220,&local_58);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                    FVar6.Data = local_168.Data.AllocatorInstance.Data;
                    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_58.Data.AllocatorInstance.Data);
                      FVar6.Data = local_168.Data.AllocatorInstance.Data;
                    }
                    goto LAB_147f55620;
                  }
                }
                else if (((bVar2) && ((uVar5 >> 0xd & 1) == 0)) && (1 < (byte)LogMaterial._0_1_)) {
                  local_1d0 = (FName)local_res18->_padding_;
                  ::FName::ToString(&local_1d0,&local_158);
                  local_218.Number = (this_01->ParameterInfo).Name.Number;
                  local_e8._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                  local_e8._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                  local_218.ComparisonIndex.Value = (undefined4)local_e8;
                  ::FName::ToString(&local_218,&local_48);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
                  FVar6.Data = local_158.Data.AllocatorInstance.Data;
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                    FVar6.Data = local_158.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147f55620;
                }
                break;
              default:
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!\"Enclosing block should never be called\"",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                                   ,0x678,L"");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
            }
          }
        }
        EVar7 = EVar7 + Cube;
      } while (EVar7 < Count);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ValidateTextureOverrides @ 147f55c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall UMaterialInstance::ValidateTextureOverrides(UMaterialInstance *this,Type param_1)

{
  if (param_1 == Num) {
    ValidateTextureOverrides(this,SP_NumPlatforms);
    return;
  }
  ValidateTextureOverrides(this,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1]);
  return;
}

// WritesToRuntimeVirtualTexture @ 147f55c70

bool __thiscall UMaterialInstance::WritesToRuntimeVirtualTexture(UMaterialInstance *this)

{
  UMaterialInterface *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f55c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x4d0))();
    return (bool)uVar2;
  }
  return false;
}

// operator() @ 15051d7c0

bool __thiscall `UMaterialInstance::Serialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2513137771804101863>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2513137771804101863>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051d835;
    }
  }
  bVar2 = false;
LAB_15051d835:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15051d870

bool __thiscall
`UMaterialInstance::SetParameterCollectionParameterValueInternal'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2513137771804102907>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2513137771804102907>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051d932;
    }
  }
  bVar4 = false;
LAB_15051d932:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15051d990

bool __thiscall
`UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2513137771804102946>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2513137771804102946>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051da52;
    }
  }
  bVar4 = false;
LAB_15051da52:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15051dab0

bool __thiscall
`UMaterialInstance::SetSparseVolumeTextureParameterValueInternal'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2513137771804102985>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2513137771804102985>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051db72;
    }
  }
  bVar4 = false;
LAB_15051db72:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15051dbd0

bool __thiscall
`UMaterialInstance::SetTextureCollectionParameterValueInternal'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2513137771804102868>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2513137771804102868>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051dc92;
    }
  }
  bVar4 = false;
LAB_15051dc92:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15051dcf0

bool __thiscall
`UMaterialInstance::SetTextureParameterValueInternal'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2513137771804102829>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2513137771804102829>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051ddb2;
    }
  }
  bVar4 = false;
LAB_15051ddb2:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

