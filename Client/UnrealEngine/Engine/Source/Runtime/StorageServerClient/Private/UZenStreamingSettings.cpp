// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 6

// StaticClass @ 148cac550

UClass * __cdecl UZenStreamingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StorageServerClient",L"ZenStreamingSettings",
               &Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton,
               StaticRegisterNativesUZenStreamingSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UZenStreamingSettings>,
               InternalVTableHelperCtorCaller<UZenStreamingSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton;
}

// UZenStreamingSettings @ 148cb5270

UZenStreamingSettings * __thiscall
UZenStreamingSettings::UZenStreamingSettings(UZenStreamingSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bShowZenBadge = true;
  this->_padding_ = (longlong)&___7UZenStreamingSettings__6B_;
  this->BadgePositionX = 0.05;
  this->BadgePositionY = 0.8;
  this->BadgeFadeTime = -1.0;
  this->BadgeAlpha = 0.5;
  return this;
}

// UZenStreamingSettings @ 148cb52c0

UZenStreamingSettings * __thiscall
UZenStreamingSettings::UZenStreamingSettings
          (UZenStreamingSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bShowZenBadge = true;
  this->_padding_ = (longlong)&___7UZenStreamingSettings__6B_;
  this->BadgePositionX = 0.05;
  this->BadgePositionY = 0.8;
  this->BadgeFadeTime = -1.0;
  this->BadgeAlpha = 0.5;
  return this;
}

// ~UZenStreamingSettings @ 148cb6cd0

void __thiscall UZenStreamingSettings::~UZenStreamingSettings(UZenStreamingSettings *this)

{
  this->_padding_ = (longlong)&___7UZenStreamingSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 148cc7ed0

UClass * __cdecl UZenStreamingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StorageServerClient",L"ZenStreamingSettings",
               &Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton,
               StaticRegisterNativesUZenStreamingSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UZenStreamingSettings>,
               InternalVTableHelperCtorCaller<UZenStreamingSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton;
}

// StaticRegisterNativesUZenStreamingSettings @ 148ce0840

void __cdecl UZenStreamingSettings::StaticRegisterNativesUZenStreamingSettings(void)

{
  return;
}

