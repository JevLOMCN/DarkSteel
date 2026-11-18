// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 6

// StaticClass @ 14cfab070

UClass * __cdecl ULiveLinkDefaultSourceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkDefaultSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkDefaultSourceSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDefaultSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkDefaultSourceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton;
}

// ULiveLinkDefaultSourceSettings @ 14cfb5950

ULiveLinkDefaultSourceSettings * __thiscall
ULiveLinkDefaultSourceSettings::ULiveLinkDefaultSourceSettings
          (ULiveLinkDefaultSourceSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DefaultSourceFrameBufferSize = 10;
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSourceSettings__6B_;
  return this;
}

// ULiveLinkDefaultSourceSettings @ 14cfb5980

ULiveLinkDefaultSourceSettings * __thiscall
ULiveLinkDefaultSourceSettings::ULiveLinkDefaultSourceSettings
          (ULiveLinkDefaultSourceSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DefaultSourceFrameBufferSize = 10;
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSourceSettings__6B_;
  return this;
}

// ~ULiveLinkDefaultSourceSettings @ 14cfb65b0

void __thiscall
ULiveLinkDefaultSourceSettings::~ULiveLinkDefaultSourceSettings
          (ULiveLinkDefaultSourceSettings *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSourceSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cfbac70

UClass * __cdecl ULiveLinkDefaultSourceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkDefaultSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkDefaultSourceSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDefaultSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkDefaultSourceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkDefaultSourceSettings @ 14cfbe2a0

void __cdecl
ULiveLinkDefaultSourceSettings::StaticRegisterNativesULiveLinkDefaultSourceSettings(void)

{
  return;
}

