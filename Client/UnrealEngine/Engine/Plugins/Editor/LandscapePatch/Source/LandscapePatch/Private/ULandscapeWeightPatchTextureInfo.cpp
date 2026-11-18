// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 7

// StaticClass @ 14db0a550

UClass * __cdecl ULandscapeWeightPatchTextureInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeWeightPatchTextureInfo",
               &Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.InnerSingleton,
               StaticRegisterNativesULandscapeWeightPatchTextureInfo,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeWeightPatchTextureInfo>,
               InternalVTableHelperCtorCaller<ULandscapeWeightPatchTextureInfo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.InnerSingleton;
}

// ULandscapeWeightPatchTextureInfo @ 14db132f0

ULandscapeWeightPatchTextureInfo * __thiscall
ULandscapeWeightPatchTextureInfo::ULandscapeWeightPatchTextureInfo
          (ULandscapeWeightPatchTextureInfo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeWeightPatchTextureInfo__6B_;
  (this->WeightmapLayerName).ComparisonIndex = 0;
  (this->WeightmapLayerName).Number = 0;
  this->bEditVisibilityLayer = false;
  (this->TextureAsset).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->InternalData).field0_0x0.DebugPtr = (ULandscapeWeightTextureBackedRenderTarget *)0x0;
  this->SourceMode = None;
  this->DetailPanelSourceMode = None;
  this->bUseAlphaChannel = false;
  this->bOverrideBlendMode = false;
  this->OverrideBlendMode = AlphaBlend;
  this->bReinitializeOnNextRender = false;
  return this;
}

// ULandscapeWeightPatchTextureInfo @ 14db13330

ULandscapeWeightPatchTextureInfo * __thiscall
ULandscapeWeightPatchTextureInfo::ULandscapeWeightPatchTextureInfo
          (ULandscapeWeightPatchTextureInfo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeWeightPatchTextureInfo__6B_;
  (this->WeightmapLayerName).ComparisonIndex = 0;
  (this->WeightmapLayerName).Number = 0;
  this->bEditVisibilityLayer = false;
  (this->TextureAsset).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->InternalData).field0_0x0.DebugPtr = (ULandscapeWeightTextureBackedRenderTarget *)0x0;
  this->SourceMode = None;
  this->DetailPanelSourceMode = None;
  this->bUseAlphaChannel = false;
  this->bOverrideBlendMode = false;
  this->OverrideBlendMode = AlphaBlend;
  this->bReinitializeOnNextRender = false;
  return this;
}

// ~ULandscapeWeightPatchTextureInfo @ 14db135e0

void __thiscall
ULandscapeWeightPatchTextureInfo::~ULandscapeWeightPatchTextureInfo
          (ULandscapeWeightPatchTextureInfo *this)

{
  this->_padding_ = (longlong)&___7ULandscapeWeightPatchTextureInfo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14db19120

UClass * __cdecl ULandscapeWeightPatchTextureInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeWeightPatchTextureInfo",
               &Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.InnerSingleton,
               StaticRegisterNativesULandscapeWeightPatchTextureInfo,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeWeightPatchTextureInfo>,
               InternalVTableHelperCtorCaller<ULandscapeWeightPatchTextureInfo>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.InnerSingleton;
}

// SetSourceMode @ 14db1c2b0

void __thiscall
ULandscapeWeightPatchTextureInfo::SetSourceMode
          (ULandscapeWeightPatchTextureInfo *this,ELandscapeTexturePatchSourceMode param_1)

{
  return;
}

// StaticRegisterNativesULandscapeWeightPatchTextureInfo @ 14db1d5a0

void __cdecl
ULandscapeWeightPatchTextureInfo::StaticRegisterNativesULandscapeWeightPatchTextureInfo(void)

{
  return;
}

