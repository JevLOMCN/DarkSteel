// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 164

// FMaterialResource @ 147ef0260

FMaterialResource * __thiscall FMaterialResource::FMaterialResource(FMaterialResource *this)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMaterial__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 4;
  lVar1 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 5;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)lVar1 & 0xfffffff4 | 4;
  this->_padding_ = (longlong)&___7FMaterialResource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstance *)0x0;
  (this->MaterialLayersFunctions)._padding_ = 0;
  (this->MaterialLayersFunctions)._padding_ = 0;
  (this->MaterialLayersFunctions)._padding_ = 0;
  (this->MaterialLayersFunctions)._padding_ = 0;
  (this->MaterialLayersFunctions)._padding_ = 0;
  (this->MaterialLayersFunctions)._padding_ = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.LayerStates.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerStates.ArrayMax = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.LayerNames.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerNames.ArrayMax = 0;
  (this->MaterialLayersFunctions).EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
  (this->MaterialLayersFunctions).EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.LayerGuids.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerGuids.ArrayMax = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerLinkStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.LayerLinkStates.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.LayerLinkStates.ArrayMax = 0;
  (this->MaterialLayersFunctions).EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
  (this->MaterialLayersFunctions).EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
  (this->MaterialLayersFunctions).LayerStates_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).LayerStates_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).LayerStates_DEPRECATED.ArrayMax = 0;
  (this->MaterialLayersFunctions).LayerNames_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).LayerNames_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).LayerNames_DEPRECATED.ArrayMax = 0;
  (this->MaterialLayersFunctions).RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
  (this->MaterialLayersFunctions).RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
  (this->MaterialLayersFunctions).LayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).LayerGuids_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).LayerGuids_DEPRECATED.ArrayMax = 0;
  (this->MaterialLayersFunctions).LayerLinkStates_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).LayerLinkStates_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).LayerLinkStates_DEPRECATED.ArrayMax = 0;
  (this->MaterialLayersFunctions).DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayersFunctions).DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
  (this->MaterialLayersFunctions).DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
  return this;
}

// ~FMaterialResource @ 147ef26c0

void __thiscall FMaterialResource::~FMaterialResource(FMaterialResource *this)

{
  this->_padding_ = (longlong)&___7FMaterialResource__6B_;
  FMaterialLayersFunctions::~FMaterialLayersFunctions(&this->MaterialLayersFunctions);
  FMaterial::~FMaterial((FMaterial *)this);
  return;
}

// BuildShaderMapIdOverride @ 147ef5b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaterialResource::BuildShaderMapIdOverride(FMaterialResource *this,FBuildShaderMapIdArgs *param_1)

{
  FMaterialShaderMapId *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  pFVar1 = param_1->OutId;
  if ((this->_padding_ & 2) == 0) {
    pFVar1->QualityLevel = (Type)this->_padding_;
    pFVar1->FeatureLevel = *(Type *)((longlong)&this->_padding_ + 4);
    if ((param_1->TargetPlatform != (ITargetPlatform *)0x0) && (1 < (byte)LogMaterial._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    FPlatformTypeLayoutParameters::InitializeForCurrent(&pFVar1->LayoutParams);
    if (1 < (byte)LogMaterial._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    return;
  }
  if (this->_padding_ != 0) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = (*IsInAsyncLoadingThread)();
      if (!bVar3) goto LAB_147f6f576;
    }
    lVar4 = this->_padding_;
LAB_147f6f58a:
    uVar2 = *(undefined8 *)(lVar4 + 0x5c);
    *(undefined8 *)(pFVar1->CookedShaderMapIdHash).Hash = *(undefined8 *)(lVar4 + 0x54);
    *(undefined8 *)((pFVar1->CookedShaderMapIdHash).Hash + 8) = uVar2;
    uVar2 = *(undefined8 *)(lVar4 + 0x6c);
    *(undefined8 *)((pFVar1->CookedShaderMapIdHash).Hash + 0x10) = *(undefined8 *)(lVar4 + 100);
    pFVar1->FeatureLevel = (int)uVar2;
    (pFVar1->LayoutParams).MaxFieldAlignment = (int)((ulonglong)uVar2 >> 0x20);
    (pFVar1->LayoutParams).Flags = *(uint *)(lVar4 + 0x74);
    return;
  }
LAB_147f6f576:
  if (this->_padding_ != 0) {
    bVar3 = IsInParallelRenderingThread();
    if (bVar3) {
      lVar4 = this->_padding_;
      goto LAB_147f6f58a;
    }
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  return;
}

// CompileCustomAttribute @ 147ef67f0

int __thiscall
FMaterialResource::CompileCustomAttribute
          (FMaterialResource *this,FGuid *param_1,FMaterialCompiler *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                     ,0x13c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// CompilePropertyAndSetMaterialProperty @ 147ef6b90

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

int __thiscall
FMaterialResource::CompilePropertyAndSetMaterialProperty
          (FMaterialResource *this,EMaterialProperty param_1,FMaterialCompiler *param_2,
          EShaderFrequency param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                     ,0x132,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// AddReferencedObjects @ 147f6d900

void __thiscall
FMaterialResource::AddReferencedObjects(FMaterialResource *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddStableReferenceFwd(param_1,(FObjectPtr *)&this->Material);
  FReferenceCollector::AddStableReferenceFwd(param_1,(FObjectPtr *)&this->MaterialInstance);
  return;
}

// AllowNegativeEmissiveColor @ 147f6e1d0

bool __thiscall FMaterialResource::AllowNegativeEmissiveColor(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bAllowNegativeEmissiveColor;
}

// AllowTranslucentLocalLightShadow @ 147f6e1f0

bool __thiscall FMaterialResource::AllowTranslucentLocalLightShadow(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bAllowTranslucentLocalLightShadow;
}

// CastsRayTracedShadows @ 147f72110

bool __thiscall FMaterialResource::CastsRayTracedShadows(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bCastRayTracedShadows;
}

// ComputeFogPerPixel @ 147f72c50

bool __thiscall FMaterialResource::ComputeFogPerPixel(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bComputeFogPerPixel;
}

// FeedbackMaterialLayersInstancedGraphFromCompilation @ 147f77860

void __thiscall
FMaterialResource::FeedbackMaterialLayersInstancedGraphFromCompilation
          (FMaterialResource *this,FMaterialLayersFunctions *param_1)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (param_1 != (FMaterialLayersFunctions *)0x0) {
    TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &this->MaterialLayersFunctions,
               (TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)param_1
              );
    TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &(this->MaterialLayersFunctions)._padding_,
               (TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_> *)
               &param_1->_padding_);
    lVar1 = param_1->_padding_;
    lVar2 = param_1->_padding_;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = (TReferenceControllerBase<1> *)(this->MaterialLayersFunctions)._padding_;
    (this->MaterialLayersFunctions)._padding_ = lVar2;
    (this->MaterialLayersFunctions)._padding_ = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.LayerStates,
               &(param_1->EditorOnly).LayerStates);
    TArray<FText,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.LayerNames,
               &(param_1->EditorOnly).LayerNames);
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.RestrictToLayerRelatives,
               &(param_1->EditorOnly).RestrictToLayerRelatives);
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.RestrictToBlendRelatives,
               &(param_1->EditorOnly).RestrictToBlendRelatives);
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.LayerGuids,
               &(param_1->EditorOnly).LayerGuids);
    TArray<enum_EMaterialLayerLinkState,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.LayerLinkStates,
               &(param_1->EditorOnly).LayerLinkStates);
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).EditorOnly.DeletedParentLayerGuids,
               &(param_1->EditorOnly).DeletedParentLayerGuids);
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).LayerStates_DEPRECATED,
               &param_1->LayerStates_DEPRECATED);
    TArray<FText,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).LayerNames_DEPRECATED,
               &param_1->LayerNames_DEPRECATED);
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).RestrictToLayerRelatives_DEPRECATED,
               &param_1->RestrictToLayerRelatives_DEPRECATED);
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).RestrictToBlendRelatives_DEPRECATED,
               &param_1->RestrictToBlendRelatives_DEPRECATED);
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).LayerGuids_DEPRECATED,
               &param_1->LayerGuids_DEPRECATED);
    TArray<enum_EMaterialLayerLinkState,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).LayerLinkStates_DEPRECATED,
               &param_1->LayerLinkStates_DEPRECATED);
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MaterialLayersFunctions).DeletedParentLayerGuids_DEPRECATED,
               &param_1->DeletedParentLayerGuids_DEPRECATED);
  }
  return;
}

// GetAllowDevelopmentShaderCompile @ 147f79290

bool __thiscall FMaterialResource::GetAllowDevelopmentShaderCompile(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bAllowDevelopmentShaderCompile;
}

// GetAssetName @ 147f79310

FString * __thiscall
FMaterialResource::GetAssetName(FMaterialResource *this,FString *__return_storage_ptr__)

{
  UMaterialInstance *pUVar1;
  UMaterial *pUVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar1 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInstance *)0x0) {
    pUVar2 = (this->Material).field0_0x0.DebugPtr;
    if (pUVar2 == (UMaterial *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    pFVar6 = &local_28;
    bVar4 = false;
    bVar3 = true;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    pFVar6 = &local_18;
    bVar4 = true;
    bVar3 = false;
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBaseMaterialPathName @ 147f79400

FString * __thiscall
FMaterialResource::GetBaseMaterialPathName(FMaterialResource *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)(this->Material).field0_0x0.DebugPtr,__return_storage_ptr__,
             (UObject *)0x0);
  return __return_storage_ptr__;
}

// GetBlendMode @ 147f79430

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __thiscall FMaterialResource::GetBlendMode(FMaterialResource *this)

{
  EBlendMode EVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f79443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(pUVar2->_padding_ + 0x460))();
  return EVar1;
}

// GetBlendableLocation @ 147f794d0

int __thiscall FMaterialResource::GetBlendableLocation(FMaterialResource *this)

{
  return (int)(((this->Material).field0_0x0.DebugPtr)->BlendableLocation).Value;
}

// GetBlendableOutputAlpha @ 147f794f0

bool __thiscall FMaterialResource::GetBlendableOutputAlpha(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::IsPostProcessMaterialOutputingAlpha((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// GetBlendablePriority @ 147f79550

int __thiscall FMaterialResource::GetBlendablePriority(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->BlendablePriority;
}

// GetCastDynamicShadowAsMasked @ 147f795e0

bool __thiscall FMaterialResource::GetCastDynamicShadowAsMasked(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f795f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x458))();
  return (bool)uVar1;
}

// GetDebugName @ 147f79660

FString * __thiscall
FMaterialResource::GetDebugName(FMaterialResource *this,FString *__return_storage_ptr__)

{
  UMaterialInstance *this_00;
  void *local_28 [2];
  FString local_18;
  
  this_00 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (this_00 == (UMaterialInstance *)0x0) {
    (**(code **)(this->_padding_ + 0x558))(this);
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    (**(code **)(this->_padding_ + 0x558))(this,local_28);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s (MI:%s)");
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetDisablePreExposureScale @ 147f79bf0

bool __thiscall FMaterialResource::GetDisablePreExposureScale(FMaterialResource *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x40))();
  if ((iVar1 == 4) && (((this->Material).field0_0x0.DebugPtr)->bDisablePreExposureScale != 0)) {
    return true;
  }
  return false;
}

// GetDisplacementFadeRange @ 147f79c30

FDisplacementFadeRange __thiscall
FMaterialResource::GetDisplacementFadeRange(FMaterialResource *this)

{
  FDisplacementFadeRange in_RDX;
  
  (**(code **)(((this->Material).field0_0x0.DebugPtr)->_padding_ + 0x4f8))();
  return in_RDX;
}

// GetDisplacementScaling @ 147f79c60

FDisplacementScaling __thiscall FMaterialResource::GetDisplacementScaling(FMaterialResource *this)

{
  longlong *plVar1;
  FDisplacementScaling in_RDX;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  (**(code **)(*plVar1 + 0x4e8))(plVar1);
  return in_RDX;
}

// GetForceCompatibleWithLightFunctionAtlas @ 147f79ce0

bool __thiscall FMaterialResource::GetForceCompatibleWithLightFunctionAtlas(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bForceCompatibleWithLightFunctionAtlas;
}

// GetForwardBlendsSkyLightCubemaps @ 147f79d00

bool __thiscall FMaterialResource::GetForwardBlendsSkyLightCubemaps(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bForwardBlendsSkyLightCubemaps;
}

// GetFriendlyName @ 147f79d20

FString * __thiscall
FMaterialResource::GetFriendlyName(FMaterialResource *this,FString *__return_storage_ptr__)

{
  UMaterial *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterial *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFullPath @ 147f79d70

FString * __thiscall
FMaterialResource::GetFullPath(FMaterialResource *this,FString *__return_storage_ptr__)

{
  UMaterialInstance *this_00;
  UMaterial *this_01;
  
  this_00 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstance *)0x0) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this_00,__return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  }
  this_01 = (this->Material).field0_0x0.DebugPtr;
  if (this_01 != (UMaterial *)0x0) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this_01,__return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMaterialDecalResponse @ 147f79e90

uint __thiscall FMaterialResource::GetMaterialDecalResponse(FMaterialResource *this)

{
  return (uint)(((this->Material).field0_0x0.DebugPtr)->MaterialDecalResponse).Value;
}

// GetMaterialDomain @ 147f79eb0

EMaterialDomain __thiscall FMaterialResource::GetMaterialDomain(FMaterialResource *this)

{
  return (EMaterialDomain)(((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value;
}

// GetMaterialFloatPrecisionMode @ 147f79f00

EMaterialFloatPrecisionMode __thiscall
FMaterialResource::GetMaterialFloatPrecisionMode(FMaterialResource *this)

{
  return (EMaterialFloatPrecisionMode)
         (((this->Material).field0_0x0.DebugPtr)->FloatPrecisionMode).Value;
}

// GetMaterialId @ 147f79f20

FGuid * __thiscall
FMaterialResource::GetMaterialId(FMaterialResource *this,FGuid *__return_storage_ptr__)

{
  UMaterial *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterial *)0x0) {
    uVar2 = (pUVar1->StateId).B;
    uVar3 = (pUVar1->StateId).C;
    uVar4 = (pUVar1->StateId).D;
    __return_storage_ptr__->A = (pUVar1->StateId).A;
    __return_storage_ptr__->B = uVar2;
    __return_storage_ptr__->C = uVar3;
    __return_storage_ptr__->D = uVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetMaterialInterface @ 147f79f80

UMaterialInterface * __thiscall FMaterialResource::GetMaterialInterface(FMaterialResource *this)

{
  UMaterialInstance *pUVar1;
  
  pUVar1 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInstance *)0x0) {
    pUVar1 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
  return (UMaterialInterface *)pUVar1;
}

// GetMaterialLayers @ 147f79fa0

FMaterialLayersFunctions * __thiscall FMaterialResource::GetMaterialLayers(FMaterialResource *this)

{
  return &this->MaterialLayersFunctions;
}

// GetMaterialUsageDescription @ 147f7a220

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

FString * __thiscall
FMaterialResource::GetMaterialUsageDescription
          (FMaterialResource *this,FString *__return_storage_ptr__)

{
  FMaterialShadingModelField FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  EBlendMode EVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  EMaterialUsage EVar13;
  int iVar14;
  undefined4 local_res8 [2];
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((this->Material).field0_0x0.DebugPtr == (UMaterial *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Material",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                         ,0x112d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  EVar7 = (**(code **)(this->_padding_ + 0x268))(this);
  pwVar9 = UMaterial::GetBlendModeString(EVar7);
  ::FString::FString(&local_c0,pwVar9);
  puVar10 = (ushort *)(**(code **)(this->_padding_ + 0x280))(this,local_res8);
  FVar1.ShadingModelField = *puVar10;
  ::FString::FString(&local_a0,L"|");
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_e0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__W4EMaterialShadingModel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFString__W4EMaterialShadingModel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = GetShadingModelString;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  GetShadingModelFieldString
            (&local_d0,FVar1,
             (TDelegate<FString___cdecl(EMaterialShadingModel),FDefaultDelegateUserPolicy> *)
             local_e8,&local_a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_90);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"LightingModel=%s, BlendMode=%s, ");
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  cVar5 = (**(code **)(this->_padding_ + 0x3a0))(this);
  if (((cVar5 == '\0') && (cVar5 = (**(code **)(this->_padding_ + 0x3a8))(this), cVar5 == '\0')) &&
     (cVar5 = (**(code **)(this->_padding_ + 0x400))(this), cVar5 == '\0')) {
    cVar5 = (**(code **)(this->_padding_ + 0x488))(this);
    local_res8[0] = 0;
    if (cVar5 == '\0') goto LAB_147f7a469;
  }
  local_res8[0] = 1;
LAB_147f7a469:
  FMaterial::WritesEveryPixel((FMaterial *)this,false);
  (**(code **)(this->_padding_ + 0x2a8))(this);
  (**(code **)(this->_padding_ + 0x250))(this);
  (**(code **)(this->_padding_ + 0x80))(this);
  (**(code **)(this->_padding_ + 0x48))(this);
  (**(code **)(this->_padding_ + 0x108))(this);
  ::FString::PrintfImpl
            (&local_b0,
             L"SpecialEngine=%d, TwoSided=%d, TSNormal=%d, Masked=%d, Distorted=%d, WritesEveryPixel=%d, ModifiesMeshPosition=%d, Usage={"
            );
  iVar14 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar14);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  bVar4 = true;
  EVar13 = MATUSAGE_SkeletalMesh;
  do {
    bVar6 = UMaterial::GetUsageByFlag((this->Material).field0_0x0.DebugPtr,EVar13);
    if (bVar6) {
      if (!bVar4) {
        pFVar8 = ::FString::FString(&local_58,L",");
        iVar2 = (pFVar8->Data).ArrayNum;
        iVar14 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar14);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = UMaterial::GetUsageName((this->Material).field0_0x0.DebugPtr,&local_48,EVar13);
      iVar2 = (pFVar8->Data).ArrayNum;
      iVar14 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar14 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar14);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      bVar4 = false;
    }
    EVar13 = EVar13 + MATUSAGE_ParticleSprites;
  } while ((int)EVar13 < 0x17);
  pFVar8 = ::FString::FString(&local_38,L"}");
  iVar2 = (pFVar8->Data).ArrayNum;
  iVar14 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar14);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNeuralProfileId @ 147f7a770

int __thiscall FMaterialResource::GetNeuralProfileId(FMaterialResource *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x40))();
  if (iVar1 == 4) {
    return (int)((this->Material).field0_0x0.DebugPtr)->NeuralProfileId;
  }
  return -1;
}

// GetNumCustomizedUVs @ 147f7a7b0

int __thiscall FMaterialResource::GetNumCustomizedUVs(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->NumCustomizedUVs;
}

// GetNumMaterialCacheTags @ 147f7a7d0

int __thiscall FMaterialResource::GetNumMaterialCacheTags(FMaterialResource *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FUniformExpressionSet *pFVar4;
  
  pFVar4 = FMaterial::GetUniformExpressions((FMaterial *)this);
  iVar3 = (pFVar4->MaterialCacheTagStacks).ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// GetNumVirtualTextureStacks @ 147f7a8b0

uint __thiscall FMaterialResource::GetNumVirtualTextureStacks(FMaterialResource *this)

{
  if (this->_padding_ != 0) {
    return *(uint *)(*(longlong *)(this->_padding_ + 0x28) + 0x1a0);
  }
  return 0;
}

// GetOpacityMaskClipValue @ 147f7a8f0

float __thiscall FMaterialResource::GetOpacityMaskClipValue(FMaterialResource *this)

{
  UMaterialInstance *pUVar1;
  float fVar2;
  
  pUVar1 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInstance *)0x0) {
    pUVar1 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f7a903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x450))();
  return fVar2;
}

// GetPixelDepthOffsetMode @ 147f7ae90

EPixelDepthOffsetMode __thiscall FMaterialResource::GetPixelDepthOffsetMode(FMaterialResource *this)

{
  return (EPixelDepthOffsetMode)(((this->Material).field0_0x0.DebugPtr)->PixelDepthOffsetMode).Value
  ;
}

// GetPreshaderGap @ 147f7afc0

ushort __thiscall FMaterialResource::GetPreshaderGap(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->PreshaderGap;
}

// GetReferencedTextureCollections @ 147f7b0b0

TArrayView<TObjectPtr<UTextureCollection>_const_,int> * __thiscall
FMaterialResource::GetReferencedTextureCollections
          (FMaterialResource *this,
          TArrayView<TObjectPtr<UTextureCollection>_const_,int> *__return_storage_ptr__)

{
  UMaterialInstance *this_00;
  UMaterial *this_01;
  TArrayView<TObjectPtr<UTextureCollection>_const_,int> local_18;
  
  this_00 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstance *)0x0) {
    UMaterialInterface::GetReferencedTextureCollections((UMaterialInterface *)this_00,&local_18);
    if (local_18.ArrayNum != 0) {
      __return_storage_ptr__->DataPtr = local_18.DataPtr;
      *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(local_18._12_4_,local_18.ArrayNum);
      return __return_storage_ptr__;
    }
  }
  this_01 = (this->Material).field0_0x0.DebugPtr;
  if (this_01 == (UMaterial *)0x0) {
    this_01 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  UMaterialInterface::GetReferencedTextureCollections
            ((UMaterialInterface *)this_01,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetReferencedTextures @ 147f7b120

TArrayView<TObjectPtr<UObject>_const_,int> * __thiscall
FMaterialResource::GetReferencedTextures
          (FMaterialResource *this,
          TArrayView<TObjectPtr<UObject>_const_,int> *__return_storage_ptr__)

{
  UMaterialInstance *this_00;
  UMaterial *this_01;
  TArrayView<TObjectPtr<UObject>_const_,int> local_18;
  
  this_00 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstance *)0x0) {
    UMaterialInterface::GetReferencedTextures((UMaterialInterface *)this_00,&local_18);
    if (local_18.ArrayNum != 0) {
      __return_storage_ptr__->DataPtr = local_18.DataPtr;
      *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(local_18._12_4_,local_18.ArrayNum);
      return __return_storage_ptr__;
    }
  }
  this_01 = (this->Material).field0_0x0.DebugPtr;
  if (this_01 == (UMaterial *)0x0) {
    this_01 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  UMaterialInterface::GetReferencedTextures((UMaterialInterface *)this_01,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRefractionCoverageMode @ 147f7b190

ERefractionCoverageMode __thiscall
FMaterialResource::GetRefractionCoverageMode(FMaterialResource *this)

{
  return (ERefractionCoverageMode)
         (((this->Material).field0_0x0.DebugPtr)->RefractionCoverageMode).Value;
}

// GetRefractionDepthBiasValue @ 147f7b1b0

float __thiscall FMaterialResource::GetRefractionDepthBiasValue(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->RefractionDepthBias;
}

// GetRefractionMode @ 147f7b1e0

ERefractionMode __thiscall FMaterialResource::GetRefractionMode(FMaterialResource *this)

{
  return (ERefractionMode)(((this->Material).field0_0x0.DebugPtr)->RefractionMethod).Value;
}

// GetResourceSizeEx @ 147f7b250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialResource::GetResourceSizeEx(FMaterialResource *this,FResourceSizeEx *param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ForElementType<unsigned_int> FVar9;
  ForAnyElementType FVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStackY_118 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int iStack_d0;
  uint uStack_cc;
  int local_c8;
  uint uStack_c4;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar17 = this->_padding_;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  uVar6 = 1;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_88.FirstFreeIndex = -1;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                     &local_88.Data.ArrayMax);
  iVar19 = local_88.AllocationFlags.NumBits;
  if (local_88.AllocationFlags.NumBits == 0) {
    iVar14 = 0;
LAB_147f7b2ff:
    if (local_88.AllocationFlags.MaxBits < (int)(local_88.AllocationFlags.NumBits + 1U)) {
      uVar4 = local_88.AllocationFlags.MaxBits + 0x1fU >> 5;
      uVar15 = local_88.AllocationFlags.NumBits + 0x20U >> 5;
      if (uVar15 < 5) {
        iVar5 = 4;
      }
      else {
        uVar8 = (ulonglong)uVar15;
        if (uVar4 < 5) {
          uVar4 = 0;
        }
        if (uVar4 == 0) {
          uVar12 = 4;
          if (4 < uVar8) {
            uVar12 = uVar8;
          }
        }
        else {
          uVar12 = ((ulonglong)uVar15 * 3 >> 3) + 0x10 + uVar8;
        }
        uVar7 = FMemory::QuantizeSize(uVar12 * 4,0);
        iVar5 = (int)(uVar7 >> 2);
        if (iVar5 < (int)uVar15) {
          iVar5 = 0x7fffffff;
        }
      }
      local_88.AllocationFlags.MaxBits = iVar5 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                (&local_88.AllocationFlags,local_88.AllocationFlags.NumBits);
    }
    local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1;
    uVar15 = local_88.AllocationFlags.NumBits >> 0x1f & 0x1f;
    uVar4 = local_88.AllocationFlags.NumBits + uVar15;
    iVar5 = (uVar4 & 0x1f) - uVar15;
    if (iVar5 != 0) {
      FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar9 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  else {
    iVar14 = (int)(local_88.AllocationFlags.NumBits +
                  (local_88.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
    if (iVar14 != (int)((local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                       local_88.AllocationFlags.NumBits + -1) >> 5) goto LAB_147f7b2ff;
    local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1U;
  }
  FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
  if (local_88.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)FVar9 + (longlong)iVar14 * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)iVar19 & 0x1f));
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_88,(FSparseArrayAllocationInfo *)&local_e8,iVar3);
  iVar19 = 0;
  puVar11 = (ulonglong *)0x0;
  puVar13 = puVar11;
  if (uStack_e0 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    *(ulonglong *)uStack_e0 = uVar17;
    *(undefined4 *)((longlong)uStack_e0 + 8) = 0xffffffff;
    puVar13 = (ulonglong *)uStack_e0;
  }
  uVar17 = *puVar13;
  uVar4 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar15 = 1;
  if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
     (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
    FVar10.Data = local_50;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FVar10.Data = local_48.Data;
    }
    for (iVar3 = *(int *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar4) * 4); iVar3 != -1;
        iVar3 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8)) {
      if (*(ulonglong *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar3 * 0x10) == uVar17) {
        if (iVar3 != -1) {
          *(ulonglong *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar3 * 0x10) = uVar17;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(&local_88,(uint)local_e8,1);
          goto LAB_147f7b778;
        }
        break;
      }
    }
  }
  uVar16 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
  if (3 < uVar16) {
    uVar17 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar15 <= (int)local_40)) {
    uVar4 = local_40 - 1 & uVar4;
    *(uint *)((longlong)puVar13 + 0xc) = uVar4;
    FVar10.Data = local_50;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FVar10.Data = local_48.Data;
    }
    uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(FVar10.Data + uVar17 * 4);
    *(uint *)(FVar10.Data + uVar17 * 4) = (uint)local_e8;
    goto LAB_147f7b778;
  }
  local_40 = uVar15;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar15 != 0) {
    uVar4 = uVar15;
    if (uVar15 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_147f7b57f;
      }
    }
    else {
LAB_147f7b57f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar15) {
      uVar17 = (ulonglong)uVar15;
      puVar13 = puVar11;
      do {
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar8 = (ulonglong)puVar13 & (longlong)(int)uVar15 - 1U;
        puVar13 = (ulonglong *)((longlong)puVar13 + 1);
        *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_40 != 0) {
    uStack_e0 = &local_88.AllocationFlags;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 1;
    local_d8._4_4_ = 0;
    iStack_d0 = 0;
    puVar13 = puVar11;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar4 = *(uint *)FVar9;
      iStack_d0 = iVar19;
      while (uVar4 == 0) {
        iStack_d0 = iStack_d0 + 0x20;
        iVar3 = (int)puVar13;
        local_e8._0_4_ = iVar3 + 1;
        puVar13 = (ulonglong *)(ulonglong)(uint)local_e8;
        if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                 ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)(uint)local_e8) goto LAB_147f7b67b;
        uVar4 = *(uint *)((uchar *)((longlong)FVar9 + 4) + (longlong)iVar3 * 4);
      }
      local_e8._4_4_ = -uVar4 & uVar4;
      uVar17 = (ulonglong)local_e8._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_d8._4_4_ = (int)lVar2 + -1 + iStack_d0;
      puVar13 = (ulonglong *)(ulonglong)local_d8._4_4_;
      if (local_88.AllocationFlags.NumBits < (int)local_d8._4_4_) {
LAB_147f7b67b:
        puVar13 = (ulonglong *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
        local_d8._4_4_ = local_88.AllocationFlags.NumBits;
      }
    }
    local_d8._0_4_ = 0xffffffff;
    local_b8 = &local_88;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0.CurrentBitIndex = local_d8._4_4_;
    TStack_b0._28_4_ = uStack_cc;
    TStack_b0.BaseBitIndex = iStack_d0;
    TStack_b0._padding_._0_4_ = (uint)local_e8;
    TStack_b0._padding_._4_4_ = local_e8._4_4_;
    TStack_b0.Array = uStack_e0;
    if ((int)puVar13 < local_88.AllocationFlags.NumBits) {
      do {
        pFVar18 = (local_b8->Data).AllocatorInstance.Data + (longlong)(int)puVar13 * 0x10;
        uVar4 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar18 >> 4)
                ) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & local_40 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar4;
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar10.Data + uVar17 * 4);
        *(int *)(FVar10.Data + uVar17 * 4) = (int)puVar13;
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        puVar13 = (ulonglong *)(ulonglong)(uint)TStack_b0.CurrentBitIndex;
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
  }
LAB_147f7b778:
  puVar13 = puVar11;
  if (local_88.AllocationFlags.NumBits != 0) {
    FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
    if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar4 = *(uint *)FVar9;
    while (uVar4 == 0) {
      iVar3 = (int)puVar13;
      iVar19 = iVar19 + 0x20;
      uVar4 = iVar3 + 1;
      puVar13 = (ulonglong *)(ulonglong)uVar4;
      if ((int)((local_88.AllocationFlags.NumBits - 1U) +
               ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4) {
        puVar11 = (ulonglong *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
        goto LAB_147f7b7ed;
      }
      uVar4 = *(uint *)((uchar *)((longlong)FVar9 + 4) + (longlong)iVar3 * 4);
    }
    uVar6 = -uVar4 & uVar4;
    uVar17 = (ulonglong)uVar6 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = (int)lVar2 + -1 + iVar19;
    puVar11 = (ulonglong *)(ulonglong)uVar4;
    if (local_88.AllocationFlags.NumBits < (int)uVar4) {
      puVar11 = (ulonglong *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
    }
  }
LAB_147f7b7ed:
  uStack_cc = (uint)puVar11;
  local_e8 = &local_88;
  TStack_b0.Array = &local_88.AllocationFlags;
  uStack_e0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar6,(int)puVar13);
  iStack_d0 = 0xffffffff;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = (longlong)uStack_e0;
  TStack_b0._28_4_ = uStack_cc;
  TStack_b0.BaseBitIndex = iVar19;
  local_c8 = iVar19;
  uStack_c4 = uStack_cc;
  local_b8 = local_e8;
  TStack_b0.CurrentBitIndex = uStack_cc;
  local_d8 = TStack_b0.Array;
  if ((int)uStack_cc < local_88.AllocationFlags.NumBits) {
    do {
      lVar2 = *(longlong *)((local_b8->Data).AllocatorInstance.Data + (longlong)(int)puVar11 * 0x10)
      ;
      if (lVar2 != 0) {
        FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)*(uint *)(lVar2 + 0x30));
        if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
          uVar6 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x70))();
          FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar6);
        }
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      puVar11 = (ulonglong *)(ulonglong)(uint)TStack_b0.CurrentBitIndex;
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  bVar20 = local_88.Data.ArrayMax != 0;
  local_88.Data._8_8_ = (ulonglong)(uint)local_88.Data.ArrayMax << 0x20;
  if (bVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_88,0,&local_88.Data.ArrayMax);
  }
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_88.AllocationFlags.NumBits = 0;
  if (0x80 < (uint)local_88.AllocationFlags.MaxBits) {
    local_88.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88.AllocationFlags,0);
  }
  if (local_88.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_88.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetRootNodeOverridesDefaultRefraction @ 147f7b960

bool __thiscall FMaterialResource::GetRootNodeOverridesDefaultRefraction(FMaterialResource *this)

{
  return false;
}

// GetShadingModels @ 147f7c7f0

FMaterialShadingModelField __thiscall FMaterialResource::GetShadingModels(FMaterialResource *this)

{
  undefined2 *puVar1;
  UMaterialInstance *pUVar2;
  undefined2 *in_RDX;
  undefined1 *puVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
    puVar3 = local_res10;
  }
  else {
    puVar3 = local_res8;
  }
  puVar1 = (undefined2 *)(**(code **)(pUVar2->_padding_ + 0x468))(pUVar2,puVar3);
  *in_RDX = *puVar1;
  return (FMaterialShadingModelField)(ushort)in_RDX;
}

// GetShadingRate @ 147f7c840

EMaterialShadingRate __thiscall FMaterialResource::GetShadingRate(FMaterialResource *this)

{
  return (EMaterialShadingRate)(((this->Material).field0_0x0.DebugPtr)->ShadingRate).Value;
}

// GetStencilCompare @ 147f7c860

uint __thiscall FMaterialResource::GetStencilCompare(FMaterialResource *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x40))();
  if (iVar1 == 4) {
    return (uint)(((this->Material).field0_0x0.DebugPtr)->StencilCompare).Value;
  }
  return 0;
}

// GetStencilRefValue @ 147f7c8a0

uint __thiscall FMaterialResource::GetStencilRefValue(FMaterialResource *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x40))();
  if (iVar1 == 4) {
    return (uint)((this->Material).field0_0x0.DebugPtr)->StencilRefValue;
  }
  return 0;
}

// GetTranslucencyDirectionalLightingIntensity @ 147f7cb50

float __thiscall
FMaterialResource::GetTranslucencyDirectionalLightingIntensity(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucencyDirectionalLightingIntensity;
}

// GetTranslucencyLightingMode @ 147f7cb70

ETranslucencyLightingMode __thiscall
FMaterialResource::GetTranslucencyLightingMode(FMaterialResource *this)

{
  return (ETranslucencyLightingMode)
         (((this->Material).field0_0x0.DebugPtr)->TranslucencyLightingMode).Value;
}

// GetTranslucentBackscatteringExponent @ 147f7cb90

float __thiscall FMaterialResource::GetTranslucentBackscatteringExponent(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentBackscatteringExponent;
}

// GetTranslucentDirectionalLightShadowQuality @ 147f7cbb0

float __thiscall
FMaterialResource::GetTranslucentDirectionalLightShadowQuality(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentDirectionalLightShadowQuality;
}

// GetTranslucentLocalLightShadowQuality @ 147f7cbd0

float __thiscall FMaterialResource::GetTranslucentLocalLightShadowQuality(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentLocalLightShadowQuality;
}

// GetTranslucentMultipleScatteringExtinction @ 147f7cbf0

FLinearColor * __thiscall
FMaterialResource::GetTranslucentMultipleScatteringExtinction
          (FMaterialResource *this,FLinearColor *__return_storage_ptr__)

{
  UMaterial *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  uVar2 = *(undefined8 *)
           ((longlong)&(pUVar1->TranslucentMultipleScatteringExtinction).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(pUVar1->TranslucentMultipleScatteringExtinction).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

// GetTranslucentSelfShadowDensityScale @ 147f7cc10

float __thiscall FMaterialResource::GetTranslucentSelfShadowDensityScale(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentSelfShadowDensityScale;
}

// GetTranslucentSelfShadowSecondDensityScale @ 147f7cc30

float __thiscall
FMaterialResource::GetTranslucentSelfShadowSecondDensityScale(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentSelfShadowSecondDensityScale;
}

// GetTranslucentSelfShadowSecondOpacity @ 147f7cc50

float __thiscall FMaterialResource::GetTranslucentSelfShadowSecondOpacity(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentSelfShadowSecondOpacity;
}

// GetTranslucentShadowDensityScale @ 147f7cc70

float __thiscall FMaterialResource::GetTranslucentShadowDensityScale(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentShadowDensityScale;
}

// GetTranslucentShadowStartOffset @ 147f7cc90

float __thiscall FMaterialResource::GetTranslucentShadowStartOffset(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->TranslucentShadowStartOffset;
}

// HasAmbientOcclusionConnected @ 147f7d150

bool __thiscall FMaterialResource::HasAmbientOcclusionConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasAmbientOcclusionConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasAnisotropyConnected @ 147f7d160

bool __thiscall FMaterialResource::HasAnisotropyConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasAnisotropyConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasBaseColorConnected @ 147f7d170

bool __thiscall FMaterialResource::HasBaseColorConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasBaseColorConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasDisplacementConnected @ 147f7d1f0

bool __thiscall FMaterialResource::HasDisplacementConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasDisplacementConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasEmissiveColorConnected @ 147f7d200

bool __thiscall FMaterialResource::HasEmissiveColorConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasEmissiveColorConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasFirstPersonOutput @ 147f7d210

bool __thiscall FMaterialResource::HasFirstPersonOutput(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 2) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bHasFirstPersonOutput;
}

// HasMaterialCacheOutput @ 147f7d270

bool __thiscall FMaterialResource::HasMaterialCacheOutput(FMaterialResource *this)

{
  UMaterial *pUVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  local_18 = 0;
  uStack_10 = 0;
  lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f0))(pUVar1,&local_18);
  return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 6) & 1);
}

// HasMaterialPropertyConnected @ 147f7d2b0

bool __thiscall
FMaterialResource::HasMaterialPropertyConnected(FMaterialResource *this,EMaterialProperty param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  UMaterial *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  bVar1 = (((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value;
  if ((bVar1 == 4) || (bVar1 < 6)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar2 = Substrate::IsSubstrateEnabled();
  if ((bVar2) && (bVar3)) {
    this_00 = (this->Material).field0_0x0.DebugPtr;
    if (param_1 != MP_AmbientOcclusion) {
      local_18 = 0;
      uStack_10 = 0;
      lVar4 = (**(code **)(this_00->_padding_ + 0x2f0))(this_00,&local_18);
      return (*(ulonglong *)(lVar4 + 0x4d8) >> ((ulonglong)param_1 & 0x3f) & 1) != 0;
    }
  }
  else {
    switch(param_1) {
    case MP_EmissiveColor:
    case MP_Opacity:
      bVar3 = UMaterial::HasEmissiveColorConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    default:
      return false;
    case MP_BaseColor:
      bVar3 = UMaterial::HasBaseColorConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    case MP_Metallic:
      bVar3 = UMaterial::HasMetallicConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    case MP_Specular:
      bVar3 = UMaterial::HasSpecularConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    case MP_Roughness:
      bVar3 = UMaterial::HasRoughnessConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    case MP_Anisotropy:
      bVar3 = UMaterial::HasAnisotropyConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    case MP_Normal:
      bVar3 = UMaterial::HasNormalConnected((this->Material).field0_0x0.DebugPtr);
      return bVar3;
    case MP_AmbientOcclusion:
      this_00 = (this->Material).field0_0x0.DebugPtr;
    }
  }
  bVar3 = UMaterial::HasAmbientOcclusionConnected(this_00);
  return bVar3;
}

// HasMetallicConnected @ 147f7d480

bool __thiscall FMaterialResource::HasMetallicConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasMetallicConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasNormalConnected @ 147f7d490

bool __thiscall FMaterialResource::HasNormalConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasNormalConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasPerInstanceCustomData @ 147f7d4a0

bool __thiscall FMaterialResource::HasPerInstanceCustomData(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 9) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bHasPerInstanceCustomData;
}

// HasPerInstanceRandom @ 147f7d500

bool __thiscall FMaterialResource::HasPerInstanceRandom(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 10) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bHasPerInstanceRandom;
}

// HasPixelAnimation @ 147f7d560

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall FMaterialResource::HasPixelAnimation(FMaterialResource *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  EBlendMode EVar4;
  UMaterialInstance *pUVar5;
  
  pUVar5 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar5 == (UMaterialInstance *)0x0) {
    pUVar5 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
  cVar1 = (**(code **)(pUVar5->_padding_ + 0x520))();
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(this->_padding_ + 0x40))(this);
    if (iVar3 == 0) {
      EVar4 = (**(code **)(this->_padding_ + 0x268))(this);
      bVar2 = IsOpaqueOrMaskedBlendMode(EVar4);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// HasPixelDepthOffsetConnected @ 147f7d5c0

bool __thiscall FMaterialResource::HasPixelDepthOffsetConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasPixelDepthOffsetConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasRenderTracePhysicalMaterialOutputs @ 147f7d5d0

bool __thiscall FMaterialResource::HasRenderTracePhysicalMaterialOutputs(FMaterialResource *this)

{
  TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> *pTVar1;
  TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> local_18;
  
  pTVar1 = UMaterial::GetRenderTracePhysicalMaterialOutputs
                     ((this->Material).field0_0x0.DebugPtr,&local_18);
  return 0 < pTVar1->ArrayNum;
}

// HasRoughnessConnected @ 147f7d600

bool __thiscall FMaterialResource::HasRoughnessConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasRoughnessConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasRuntimeVirtualTextureOutput @ 147f7d610

bool __thiscall FMaterialResource::HasRuntimeVirtualTextureOutput(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 1) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bHasRuntimeVirtualTextureOutput;
}

// HasSpecularConnected @ 147f7d6e0

bool __thiscall FMaterialResource::HasSpecularConnected(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::HasSpecularConnected((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// HasSubstrateRoughnessTracking @ 147f7d6f0

bool __thiscall FMaterialResource::HasSubstrateRoughnessTracking(FMaterialResource *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f7d6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Material).field0_0x0.DebugPtr)->_padding_ + 0x580))();
  return (bool)uVar1;
}

// HasVertexInterpolator @ 147f7d730

bool __thiscall FMaterialResource::HasVertexInterpolator(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 0xb) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bHasVertexInterpolator;
}

// HasVertexPositionOffsetConnected @ 147f7d790

bool __thiscall FMaterialResource::HasVertexPositionOffsetConnected(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d8) >> 0xc) & 1);
  }
  return (bool)((byte)((uint)FMaterialCachedExpressionData::EmptyData.PropertyConnectedMask >> 0xc)
               & 1);
}

// IsDefaultMaterial @ 147f805e0

bool __thiscall FMaterialResource::IsDefaultMaterial(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::IsDefaultMaterial((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// IsDeferredDecal @ 147f805f0

bool __thiscall FMaterialResource::IsDeferredDecal(FMaterialResource *this)

{
  return (((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value == '\x01';
}

// IsDisplacementFadeEnabled @ 147f80610

bool __thiscall FMaterialResource::IsDisplacementFadeEnabled(FMaterialResource *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f80617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Material).field0_0x0.DebugPtr)->_padding_ + 0x4f0))();
  return (bool)uVar1;
}

// IsDistorted @ 147f80630

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall FMaterialResource::IsDistorted(FMaterialResource *this)

{
  bool bVar1;
  EBlendMode EVar2;
  
  if (((this->Material).field0_0x0.DebugPtr)->bUsesDistortion != '\0') {
    EVar2 = (**(code **)(this->_padding_ + 0x268))();
    bVar1 = IsTranslucentBlendMode(EVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsDitherMasked @ 147f80670

bool __thiscall FMaterialResource::IsDitherMasked(FMaterialResource *this)

{
  char cVar1;
  
  if ((bool)((this->Material).field0_0x0.DebugPtr)->DitherOpacityMask) {
    cVar1 = (**(code **)(this->_padding_ + 0x250))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsDitheredLODTransition @ 147f806b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterialResource::IsDitheredLODTransition(FMaterialResource *this)

{
  bool bVar1;
  undefined1 uVar2;
  UMaterialInstance *pUVar3;
  
  bVar1 = AllowDitheredLODTransition(GMaxRHIShaderPlatform);
  if (!bVar1) {
    return false;
  }
  pUVar3 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar3 == (UMaterialInstance *)0x0) {
    pUVar3 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f806e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(pUVar3->_padding_ + 0x488))();
  return (bool)uVar2;
}

// IsDualBlendingEnabled @ 147f80700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterialResource::IsDualBlendingEnabled(FMaterialResource *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  bVar7 = (((this->Material).field0_0x0.DebugPtr)->ShadingModel).Value == '\v';
  cVar2 = (**(code **)(this->_padding_ + 0x408))();
  if (cVar2 != '\0') {
    iVar5 = (**(code **)(this->_padding_ + 0x268))(this);
    bVar7 = iVar5 == 7;
  }
  uVar6 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar6].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x232,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar6].bSupportsDualSourceBlending == 0) {
LAB_147f807c3:
    bVar3 = IsMobilePlatform((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar3) goto LAB_147f807d5;
  }
  else {
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar6].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x274,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar6].bIsHlslcc != 0) goto LAB_147f807c3;
  }
  bVar3 = true;
LAB_147f807d5:
  if ((bVar7) && (bVar3 != false)) {
    return true;
  }
  return false;
}

// IsFullyRough @ 147f80810

bool __thiscall FMaterialResource::IsFullyRough(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bFullyRough;
}

// IsLightFunction @ 147f80830

bool __thiscall FMaterialResource::IsLightFunction(FMaterialResource *this)

{
  return (((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value == '\x02';
}

// IsMasked @ 147f80850

bool __thiscall FMaterialResource::IsMasked(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f80863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x4b0))();
  return (bool)uVar1;
}

// IsMobileSeparateTranslucencyEnabled @ 147f80870

bool __thiscall FMaterialResource::IsMobileSeparateTranslucencyEnabled(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::IsMobileSeparateTranslucencyEnabled((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// IsNonmetal @ 147f80880

bool __thiscall FMaterialResource::IsNonmetal(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::IsPropertyConnected((this->Material).field0_0x0.DebugPtr,MP_Metallic);
  if (!bVar1) {
    bVar1 = UMaterial::IsPropertyConnected((this->Material).field0_0x0.DebugPtr,MP_Specular);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// IsPersistent @ 147f808d0

bool __thiscall FMaterialResource::IsPersistent(FMaterialResource *this)

{
  return true;
}

// IsPostProcessMaterial @ 147f808e0

bool __thiscall FMaterialResource::IsPostProcessMaterial(FMaterialResource *this)

{
  return (((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value == '\x04';
}

// IsShadingModelFromMaterialExpression @ 147f80970

bool __thiscall FMaterialResource::IsShadingModelFromMaterialExpression(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f80983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x470))();
  return (bool)uVar1;
}

// IsSky @ 147f80990

bool __thiscall FMaterialResource::IsSky(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bIsSky;
}

// IsSpecialEngineMaterial @ 147f809b0

bool __thiscall FMaterialResource::IsSpecialEngineMaterial(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedAsSpecialEngineMaterial;
}

// IsStencilTestEnabled @ 147f809d0

bool __thiscall FMaterialResource::IsStencilTestEnabled(FMaterialResource *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x40))();
  if ((iVar1 == 4) && (((this->Material).field0_0x0.DebugPtr)->bEnableStencilTest != '\0')) {
    return true;
  }
  return false;
}

// IsSubstrateMaterial @ 147f80a10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterialResource::IsSubstrateMaterial(FMaterialResource *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  
  bVar1 = Substrate::IsSubstrateEnabled();
  bVar2 = Substrate::IsHiddenMaterialAssetConversionEnabled();
  bVar3 = Substrate::IsSubstrateBlendableGBufferEnabled(GMaxRHIShaderPlatform);
  if ((bVar1) &&
     (((!bVar2 || (!bVar3)) ||
      (cVar4 = (**(code **)(this->_padding_ + 0x3f8))(this,0x1e), cVar4 != '\0')))) {
    return true;
  }
  return false;
}

// IsTangentSpaceNormal @ 147f80a90

bool __thiscall FMaterialResource::IsTangentSpaceNormal(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bTangentSpaceNormal;
}

// IsTessellationEnabled @ 147f80ab0

bool __thiscall FMaterialResource::IsTessellationEnabled(FMaterialResource *this)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
                    /* WARNING: Could not recover jumptable at 0x000147f80ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x578))(plVar2,*(code **)(*plVar2 + 0x578));
  return (bool)uVar1;
}

// IsThinSurface @ 147f80ae0

bool __thiscall FMaterialResource::IsThinSurface(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f80af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x480))();
  return (bool)uVar1;
}

// IsTranslucencyAfterDOFEnabled @ 147f80b00

bool __thiscall FMaterialResource::IsTranslucencyAfterDOFEnabled(FMaterialResource *this)

{
  char cVar1;
  
  if ((((this->Material).field0_0x0.DebugPtr)->TranslucencyPass).Value == '\x01') {
    cVar1 = (**(code **)(this->_padding_ + 0xe8))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(this->_padding_ + 0xe0))(this);
      if (cVar1 == '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsTranslucencyAfterMotionBlurEnabled @ 147f80b50

bool __thiscall FMaterialResource::IsTranslucencyAfterMotionBlurEnabled(FMaterialResource *this)

{
  char cVar1;
  
  if ((((this->Material).field0_0x0.DebugPtr)->TranslucencyPass).Value == '\x02') {
    cVar1 = (**(code **)(this->_padding_ + 0xe8))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(this->_padding_ + 0xe0))(this);
      if (cVar1 == '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsTranslucencyVelocityFromDepth @ 147f80ba0

bool __thiscall FMaterialResource::IsTranslucencyVelocityFromDepth(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f80bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x4a0))();
  return (bool)uVar1;
}

// IsTranslucencyWritingCustomDepth @ 147f80bc0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall FMaterialResource::IsTranslucencyWritingCustomDepth(FMaterialResource *this)

{
  bool bVar1;
  EBlendMode EVar2;
  
  if (((this->Material).field0_0x0.DebugPtr)->AllowTranslucentCustomDepthWrites != '\0') {
    EVar2 = (**(code **)(this->_padding_ + 0x268))();
    bVar1 = IsTranslucentBlendMode(EVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsTranslucencyWritingFrontLayerTransparency @ 147f80c00

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall
FMaterialResource::IsTranslucencyWritingFrontLayerTransparency(FMaterialResource *this)

{
  uchar uVar1;
  UMaterial *pUVar2;
  bool bVar3;
  EBlendMode EVar4;
  
  EVar4 = (**(code **)(this->_padding_ + 0x268))();
  bVar3 = IsTranslucentBlendMode(EVar4);
  if (bVar3) {
    pUVar2 = (this->Material).field0_0x0.DebugPtr;
    uVar1 = (pUVar2->TranslucencyLightingMode).Value;
    if (((uVar1 == '\x04') || (uVar1 == '\x05')) && (pUVar2->bAllowFrontLayerTranslucency != '\0'))
    {
      return true;
    }
  }
  return false;
}

// IsTranslucencyWritingVelocity @ 147f80c50

bool __thiscall FMaterialResource::IsTranslucencyWritingVelocity(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f80c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x498))();
  return (bool)uVar1;
}

// IsTwoSided @ 147f80c70

bool __thiscall FMaterialResource::IsTwoSided(FMaterialResource *this)

{
  undefined1 uVar1;
  UMaterialInstance *pUVar2;
  
  pUVar2 = (this->MaterialInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInstance *)0x0) {
    pUVar2 = (UMaterialInstance *)(this->Material).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147f80c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x478))();
  return (bool)uVar1;
}

// IsUIMaterial @ 147f80c90

bool __thiscall FMaterialResource::IsUIMaterial(FMaterialResource *this)

{
  return (((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value == '\x05';
}

// IsUsedWithAPEXCloth @ 147f80cb0

bool __thiscall FMaterialResource::IsUsedWithAPEXCloth(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithClothing;
}

// IsUsedWithBeamTrails @ 147f80cd0

bool __thiscall FMaterialResource::IsUsedWithBeamTrails(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithBeamTrails;
}

// IsUsedWithEditorCompositing @ 147f80cf0

bool __thiscall FMaterialResource::IsUsedWithEditorCompositing(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithEditorCompositing;
}

// IsUsedWithGeometryCache @ 147f80d10

bool __thiscall FMaterialResource::IsUsedWithGeometryCache(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithGeometryCache;
}

// IsUsedWithGeometryCollections @ 147f80d30

bool __thiscall FMaterialResource::IsUsedWithGeometryCollections(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithGeometryCollections;
}

// IsUsedWithHairStrands @ 147f80d50

bool __thiscall FMaterialResource::IsUsedWithHairStrands(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithHairStrands;
}

// IsUsedWithHeterogeneousVolumes @ 147f80d70

bool __thiscall FMaterialResource::IsUsedWithHeterogeneousVolumes(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithHeterogeneousVolumes;
}

// IsUsedWithInstancedStaticMeshes @ 147f80d90

bool __thiscall FMaterialResource::IsUsedWithInstancedStaticMeshes(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithInstancedStaticMeshes;
}

// IsUsedWithLandscape @ 147f80db0

bool __thiscall FMaterialResource::IsUsedWithLandscape(FMaterialResource *this)

{
  return false;
}

// IsUsedWithLidarPointCloud @ 147f80dc0

bool __thiscall FMaterialResource::IsUsedWithLidarPointCloud(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithLidarPointCloud;
}

// IsUsedWithMeshParticles @ 147f80de0

bool __thiscall FMaterialResource::IsUsedWithMeshParticles(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithMeshParticles;
}

// IsUsedWithMorphTargets @ 147f80e00

bool __thiscall FMaterialResource::IsUsedWithMorphTargets(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithMorphTargets;
}

// IsUsedWithNanite @ 147f80e20

bool __thiscall FMaterialResource::IsUsedWithNanite(FMaterialResource *this)

{
  bool bVar1;
  FMaterialShaderMap *pFVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  int *piVar6;
  TConsoleVariableData<int> *pTVar7;
  
  if (((this->Material).field0_0x0.DebugPtr)->bUsedWithNanite != 0) {
    return true;
  }
  pTVar7 = (TConsoleVariableData<int> *)0x0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    plVar4 = (longlong *)
             (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Nanite.ForceEnableMeshes",1);
    pTVar5 = pTVar7;
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*plVar4 + 0x68))(plVar4);
    }
    ::NaniteForceEnableMeshesCvar = pTVar5;
    _Init_thread_footer(&::_TSS0);
  }
  if ((::_TSS1 <= *piVar6) ||
     (_Init_thread_header(&::_TSS1), pTVar5 = ::NaniteForceEnableMeshesCvar, ::_TSS1 != -1))
  goto LAB_147f80e79;
  if (::NaniteForceEnableMeshesCvar == (TConsoleVariableData<int> *)0x0) {
LAB_147f80f7e:
    ::bNaniteForceEnableMeshes = false;
  }
  else {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar7 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + (longlong)pTVar7->ShadowedValue) == 0)
    goto LAB_147f80f7e;
    ::bNaniteForceEnableMeshes = true;
  }
  _Init_thread_footer(&::_TSS1);
LAB_147f80e79:
  if (::bNaniteForceEnableMeshes == false) {
    return false;
  }
  bVar1 = IsInGameThread();
  if ((bVar1) || (bVar1 = IsInParallelGameThread(), bVar1)) {
    pFVar2 = (FMaterialShaderMap *)this->_padding_;
  }
  else {
    pFVar2 = FMaterial::GetRenderingThreadShaderMap((FMaterial *)this);
  }
  if (pFVar2 == (FMaterialShaderMap *)0x0) {
    return true;
  }
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithNanite;
}

// IsUsedWithNeuralNetworks @ 147f80fa0

bool __thiscall FMaterialResource::IsUsedWithNeuralNetworks(FMaterialResource *this)

{
  UMaterial *pUVar1;
  char cVar2;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  if (pUVar1->bUsedWithNeuralNetworks != '\0') {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x4c8))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsUsedWithNiagaraMeshParticles @ 147f80fe0

bool __thiscall FMaterialResource::IsUsedWithNiagaraMeshParticles(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithNiagaraMeshParticles;
}

// IsUsedWithNiagaraRibbons @ 147f81000

bool __thiscall FMaterialResource::IsUsedWithNiagaraRibbons(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithNiagaraRibbons;
}

// IsUsedWithNiagaraSprites @ 147f81020

bool __thiscall FMaterialResource::IsUsedWithNiagaraSprites(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithNiagaraSprites;
}

// IsUsedWithParticleSprites @ 147f81040

bool __thiscall FMaterialResource::IsUsedWithParticleSprites(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithParticleSprites;
}

// IsUsedWithParticleSystem @ 147f81060

bool __thiscall FMaterialResource::IsUsedWithParticleSystem(FMaterialResource *this)

{
  undefined1 *puVar1;
  
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithParticleSprites != '\0' ||
         ((this->Material).field0_0x0.DebugPtr)->bUsedWithBeamTrails != '\0';
}

// IsUsedWithSkeletalMesh @ 147f81080

bool __thiscall FMaterialResource::IsUsedWithSkeletalMesh(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithSkeletalMesh;
}

// IsUsedWithSplineMeshes @ 147f810a0

bool __thiscall FMaterialResource::IsUsedWithSplineMeshes(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithSplineMeshes;
}

// IsUsedWithStaticLighting @ 147f810c0

bool __thiscall FMaterialResource::IsUsedWithStaticLighting(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithStaticLighting;
}

// IsUsedWithStaticMesh @ 147f810e0

bool __thiscall FMaterialResource::IsUsedWithStaticMesh(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithStaticMesh;
}

// IsUsedWithVirtualHeightfieldMesh @ 147f81100

bool __thiscall FMaterialResource::IsUsedWithVirtualHeightfieldMesh(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithVirtualHeightfieldMesh;
}

// IsUsedWithVolumetricCloud @ 147f81120

bool __thiscall FMaterialResource::IsUsedWithVolumetricCloud(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithVolumetricCloud;
}

// IsUsedWithVoxels @ 147f81140

bool __thiscall FMaterialResource::IsUsedWithVoxels(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithVoxels;
}

// IsUsedWithWater @ 147f81160

bool __thiscall FMaterialResource::IsUsedWithWater(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsedWithWater;
}

// IsUsingAlphaToCoverage @ 147f81180

bool __thiscall FMaterialResource::IsUsingAlphaToCoverage(FMaterialResource *this)

{
  UMaterial *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  if ((pUVar1->bUseAlphaToCoverage != '\0') && ((pUVar1->MaterialDomain).Value == '\0')) {
    bVar2 = IsMaskedBlendMode((UMaterialInterface *)pUVar1);
    if (bVar2) {
      bVar2 = FMaterial::WritesEveryPixel((FMaterial *)this,false);
      if (!bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsUsingHQForwardReflections @ 147f811d0

bool __thiscall FMaterialResource::IsUsingHQForwardReflections(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUseHQForwardReflections;
}

// IsUsingPlanarForwardReflections @ 147f81230

bool __thiscall FMaterialResource::IsUsingPlanarForwardReflections(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUsePlanarForwardReflections;
}

// IsUsingPreintegratedGFForSimpleIBL @ 147f81250

bool __thiscall FMaterialResource::IsUsingPreintegratedGFForSimpleIBL(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bForwardRenderUsePreintegratedGFForSimpleIBL;
}

// IsVariableRateShadingAllowed @ 147f81270

bool __thiscall FMaterialResource::IsVariableRateShadingAllowed(FMaterialResource *this)

{
  char cVar1;
  
  if (((this->Material).field0_0x0.DebugPtr)->bAllowVariableRateShading != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0x250))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(this->_padding_ + 0x3a8))(this);
      if (cVar1 == '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsVolumetricPrimitive @ 147f812c0

bool __thiscall FMaterialResource::IsVolumetricPrimitive(FMaterialResource *this)

{
  return (((this->Material).field0_0x0.DebugPtr)->MaterialDomain).Value == '\x03';
}

// IsWireframe @ 147f812e0

bool __thiscall FMaterialResource::IsWireframe(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->Wireframe;
}

// LegacySerialize @ 147f81620

void __thiscall FMaterialResource::LegacySerialize(FMaterialResource *this,FArchive *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint local_res10 [2];
  uint local_res18 [4];
  
  FMaterial::LegacySerialize((FMaterial *)this,param_1);
  if (0x103 < *(int *)&param_1->field_0x40) {
    return;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res18[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = 0;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f816e7;
  }
  else {
    local_res18[0] = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar4 = (uint)(local_res18[0] != 0);
LAB_147f816e7:
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  if (puVar3[1] < *puVar3 + 4) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    return;
  }
  *puVar3 = *puVar3 + 4;
  return;
}

// RequiresSynchronousCompilation @ 147f857f0

bool __thiscall FMaterialResource::RequiresSynchronousCompilation(FMaterialResource *this)

{
  bool bVar1;
  
  bVar1 = UMaterial::IsDefaultMaterial((this->Material).field0_0x0.DebugPtr);
  return bVar1;
}

// SamplesMaterialCache @ 147f859e0

bool __thiscall FMaterialResource::SamplesMaterialCache(FMaterialResource *this)

{
  UMaterial *pUVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pUVar1 = (this->Material).field0_0x0.DebugPtr;
  local_18 = 0;
  uStack_10 = 0;
  lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f0))(pUVar1,&local_18);
  return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 5) & 1);
}

// ShouldAlwaysEvaluateWorldPositionOffset @ 147f897f0

bool __thiscall FMaterialResource::ShouldAlwaysEvaluateWorldPositionOffset(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bAlwaysEvaluateWorldPositionOffset;
}

// ShouldApplyCloudFogging @ 147f89810

bool __thiscall FMaterialResource::ShouldApplyCloudFogging(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bApplyCloudFogging;
}

// ShouldApplyFogging @ 147f89830

bool __thiscall FMaterialResource::ShouldApplyFogging(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUseTranslucencyVertexFog;
}

// ShouldDisableDepthTest @ 147f89b20

bool __thiscall FMaterialResource::ShouldDisableDepthTest(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bDisableDepthTest;
}

// ShouldDoContactShadows @ 147f89b40

bool __thiscall FMaterialResource::ShouldDoContactShadows(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bContactShadows;
}

// ShouldDoSSR @ 147f89b60

bool __thiscall FMaterialResource::ShouldDoSSR(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bScreenSpaceReflections;
}

// ShouldEnableResponsiveAA @ 147f89b80

bool __thiscall FMaterialResource::ShouldEnableResponsiveAA(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bEnableResponsiveAA;
}

// ShouldGenerateSphericalParticleNormals @ 147f89ba0

bool __thiscall FMaterialResource::ShouldGenerateSphericalParticleNormals(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bGenerateSphericalParticleNormals;
}

// ShouldWriteOnlyAlpha @ 147f89bc0

bool __thiscall FMaterialResource::ShouldWriteOnlyAlpha(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bWriteOnlyAlpha;
}

// UseLmDirectionality @ 147f8dfc0

bool __thiscall FMaterialResource::UseLmDirectionality(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bUseLightmapDirectionality;
}

// UseNormalCurvatureToRoughness @ 147f8dfe0

bool __thiscall FMaterialResource::UseNormalCurvatureToRoughness(FMaterialResource *this)

{
  return ((this->Material).field0_0x0.DebugPtr)->bNormalCurvatureToRoughness;
}

// UsesMotionVectorWorldOffset @ 147f8e090

bool __thiscall FMaterialResource::UsesMotionVectorWorldOffset(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 4) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bUsesMotionVectorWorldOffset;
}

// UsesTemporalResponsiveness @ 147f8e0f0

bool __thiscall FMaterialResource::UsesTemporalResponsiveness(FMaterialResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return (bool)((byte)(*(uint *)(lVar2 + 0x4d0) >> 3) & 1);
  }
  return FMaterialCachedExpressionData::EmptyData.bUsesTemporalResponsiveness;
}

