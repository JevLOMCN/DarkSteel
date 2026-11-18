// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14acde0d0

UClass * __cdecl UPaperRuntimeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperRuntimeSettings",
               &Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton,
               StaticRegisterNativesUPaperRuntimeSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperRuntimeSettings>,
               InternalVTableHelperCtorCaller<UPaperRuntimeSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton;
}

// UPaperRuntimeSettings @ 14acea640

UPaperRuntimeSettings * __thiscall
UPaperRuntimeSettings::UPaperRuntimeSettings(UPaperRuntimeSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPaperRuntimeSettings__6B_;
  return this;
}

// UPaperRuntimeSettings @ 14acea670

UPaperRuntimeSettings * __thiscall
UPaperRuntimeSettings::UPaperRuntimeSettings
          (UPaperRuntimeSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnableSpriteAtlasGroups = false;
  this->bEnableTerrainSplineEditing = false;
  this->_padding_ = (longlong)&___7UPaperRuntimeSettings__6B_;
  this->bResizeSpriteDataToMatchTextures = true;
  return this;
}

// ~UPaperRuntimeSettings @ 14acebb70

void __thiscall UPaperRuntimeSettings::~UPaperRuntimeSettings(UPaperRuntimeSettings *this)

{
  this->_padding_ = (longlong)&___7UPaperRuntimeSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acfd180

UClass * __cdecl UPaperRuntimeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperRuntimeSettings",
               &Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton,
               StaticRegisterNativesUPaperRuntimeSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperRuntimeSettings>,
               InternalVTableHelperCtorCaller<UPaperRuntimeSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperRuntimeSettings.InnerSingleton;
}

// StaticRegisterNativesUPaperRuntimeSettings @ 14ad0e010

void __cdecl UPaperRuntimeSettings::StaticRegisterNativesUPaperRuntimeSettings(void)

{
  return;
}

