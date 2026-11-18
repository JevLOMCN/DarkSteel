// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145fad130

UClass * __cdecl ULandscapeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSettings",
               &Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton,
               StaticRegisterNativesULandscapeSettings,200,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSettings>,
               InternalVTableHelperCtorCaller<ULandscapeSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton;
}

// ULandscapeSettings @ 145fb5280

ULandscapeSettings * __thiscall
ULandscapeSettings::ULandscapeSettings(ULandscapeSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->MaxNumberOfLayers = 8;
  puVar1 = &(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x18;
  this->bShowDialogForAutomaticLayerCreation = true;
  this->MaxComponents = 0x100;
  this->_padding_ = (longlong)&___7ULandscapeSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr = 0;
  this->MaxImageImportCacheSizeMegaBytes = 0x100;
  this->PaintStrengthGamma = 2.2;
  this->bDisablePaintingStartupSlowdown = true;
  this->LandscapeDirtyingMode = InLandscapeModeAndUserTriggeredChanges;
  this->SideResolutionLimit = 0x800;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->BrushSizeUIMax = 8192.0;
  this->BrushSizeClampMax = 65536.0;
  this->HLODMaxTextureSize = 0x400;
  this->bShouldUpdateEditLayersDuringInteractiveChanges = false;
  this->bRestrictiveMode = false;
  this->SplineIconWorldZOffset = 100.0;
  this->SplineIconScale = 125.0;
  this->bDisplayTargetLayerThumbnails = true;
  this->bDisableTemporalAntiAliasingInLandscapeMode = true;
  this->TargetLayerDefaultBlendMethod = None;
  (this->DisplayTargetLayerThumbnailsBeforeUndo).bIsSet = false;
  return this;
}

// ULandscapeSettings @ 145fb5380

ULandscapeSettings * __thiscall
ULandscapeSettings::ULandscapeSettings(ULandscapeSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->MaxNumberOfLayers = 8;
  puVar1 = &(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x18;
  this->bShowDialogForAutomaticLayerCreation = true;
  this->MaxComponents = 0x100;
  this->_padding_ = (longlong)&___7ULandscapeSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr = 0;
  this->MaxImageImportCacheSizeMegaBytes = 0x100;
  this->PaintStrengthGamma = 2.2;
  this->bDisablePaintingStartupSlowdown = true;
  this->LandscapeDirtyingMode = InLandscapeModeAndUserTriggeredChanges;
  this->SideResolutionLimit = 0x800;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->BrushSizeUIMax = 8192.0;
  this->BrushSizeClampMax = 65536.0;
  this->HLODMaxTextureSize = 0x400;
  this->bShouldUpdateEditLayersDuringInteractiveChanges = false;
  this->bRestrictiveMode = false;
  this->SplineIconWorldZOffset = 100.0;
  this->SplineIconScale = 125.0;
  this->bDisplayTargetLayerThumbnails = true;
  this->bDisableTemporalAntiAliasingInLandscapeMode = true;
  this->TargetLayerDefaultBlendMethod = None;
  (this->DisplayTargetLayerThumbnailsBeforeUndo).bIsSet = false;
  return this;
}

// ~ULandscapeSettings @ 145fb6950

void __thiscall ULandscapeSettings::~ULandscapeSettings(ULandscapeSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeSettings__6B_;
  pvVar1 = *(void **)&(this->DefaultLayerInfoObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DefaultLandscapeMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 145fc3390

UClass * __cdecl ULandscapeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSettings",
               &Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton,
               StaticRegisterNativesULandscapeSettings,200,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeSettings>,
               InternalVTableHelperCtorCaller<ULandscapeSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSettings.InnerSingleton;
}

// StaticRegisterNativesULandscapeSettings @ 145fc8740

void __cdecl ULandscapeSettings::StaticRegisterNativesULandscapeSettings(void)

{
  return;
}

