// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0c1c0

UClass * __cdecl UMaterialInstanceEditorOnlyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialInstanceEditorOnlyData,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInstanceEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialInstanceEditorOnlyData>,local_res8,
               UMaterialInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.InnerSingleton;
}

// UMaterialInstanceEditorOnlyData @ 147f2e400

UMaterialInstanceEditorOnlyData * __thiscall
UMaterialInstanceEditorOnlyData::UMaterialInstanceEditorOnlyData
          (UMaterialInstanceEditorOnlyData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialInstanceEditorOnlyData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->StaticParameters).StaticSwitchParameters_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).StaticSwitchParameters_DEPRECATED.ArrayNum = 0;
  (this->StaticParameters).StaticSwitchParameters_DEPRECATED.ArrayMax = 0;
  (this->StaticParameters).StaticComponentMaskParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).StaticComponentMaskParameters.ArrayNum = 0;
  (this->StaticParameters).StaticComponentMaskParameters.ArrayMax = 0;
  (this->StaticParameters).TerrainLayerWeightParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).TerrainLayerWeightParameters.ArrayNum = 0;
  (this->StaticParameters).TerrainLayerWeightParameters.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerStates.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerStates.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerNames.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerNames.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.RestrictToLayerRelatives.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.RestrictToLayerRelatives.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.RestrictToBlendRelatives.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.RestrictToBlendRelatives.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerGuids.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerGuids.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerLinkStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerLinkStates.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerLinkStates.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.DeletedParentLayerGuids.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.DeletedParentLayerGuids.ArrayMax = 0;
  return this;
}

// UMaterialInstanceEditorOnlyData @ 147f2e4b0

UMaterialInstanceEditorOnlyData * __thiscall
UMaterialInstanceEditorOnlyData::UMaterialInstanceEditorOnlyData
          (UMaterialInstanceEditorOnlyData *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMaterialInstanceEditorOnlyData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->StaticParameters).StaticSwitchParameters_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).StaticSwitchParameters_DEPRECATED.ArrayNum = 0;
  (this->StaticParameters).StaticSwitchParameters_DEPRECATED.ArrayMax = 0;
  (this->StaticParameters).StaticComponentMaskParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).StaticComponentMaskParameters.ArrayNum = 0;
  (this->StaticParameters).StaticComponentMaskParameters.ArrayMax = 0;
  (this->StaticParameters).TerrainLayerWeightParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).TerrainLayerWeightParameters.ArrayNum = 0;
  (this->StaticParameters).TerrainLayerWeightParameters.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerStates.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerStates.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerNames.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerNames.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.RestrictToLayerRelatives.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.RestrictToLayerRelatives.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.RestrictToBlendRelatives.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.RestrictToBlendRelatives.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerGuids.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerGuids.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.LayerLinkStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.LayerLinkStates.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.LayerLinkStates.ArrayMax = 0;
  (this->StaticParameters).MaterialLayers.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticParameters).MaterialLayers.DeletedParentLayerGuids.ArrayNum = 0;
  (this->StaticParameters).MaterialLayers.DeletedParentLayerGuids.ArrayMax = 0;
  return this;
}

// ~UMaterialInstanceEditorOnlyData @ 147f2f490

void __thiscall
UMaterialInstanceEditorOnlyData::~UMaterialInstanceEditorOnlyData
          (UMaterialInstanceEditorOnlyData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialInstanceEditorOnlyData__6B_;
  FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData
            (&(this->StaticParameters).MaterialLayers);
  pFVar1 = (this->StaticParameters).TerrainLayerWeightParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticParameters).StaticComponentMaskParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticParameters).StaticSwitchParameters_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMaterialInterfaceEditorOnlyData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147f43800

UClass * __cdecl UMaterialInstanceEditorOnlyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialInstanceEditorOnlyData,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInstanceEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialInstanceEditorOnlyData>,local_res8,
               UMaterialInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.InnerSingleton;
}

// StaticRegisterNativesUMaterialInstanceEditorOnlyData @ 147f52cf0

void __cdecl
UMaterialInstanceEditorOnlyData::StaticRegisterNativesUMaterialInstanceEditorOnlyData(void)

{
  return;
}

