// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 7

// StaticClass @ 14d7650d0

UClass * __cdecl UOpenColorIOSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOSettings",
               &Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton,
               StaticRegisterNativesUOpenColorIOSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenColorIOSettings>,
               InternalVTableHelperCtorCaller<UOpenColorIOSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton;
}

// UOpenColorIOSettings @ 14d769620

UOpenColorIOSettings * __thiscall
UOpenColorIOSettings::UOpenColorIOSettings(UOpenColorIOSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UOpenColorIOSettings__6B_;
  return this;
}

// UOpenColorIOSettings @ 14d769650

UOpenColorIOSettings * __thiscall
UOpenColorIOSettings::UOpenColorIOSettings(UOpenColorIOSettings *this)

{
  undefined1 *puVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar2);
  this->bUseLegacyProcessor = '\0';
  this->bSupportInverseViewTransforms = '\0';
  this->bUse32fLUT = '\0';
  this->_padding_ = (longlong)&___7UOpenColorIOSettings__6B_;
  return this;
}

// ~UOpenColorIOSettings @ 14d769f10

void __thiscall UOpenColorIOSettings::~UOpenColorIOSettings(UOpenColorIOSettings *this)

{
  this->_padding_ = (longlong)&___7UOpenColorIOSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14d770a50

FName __thiscall UOpenColorIOSettings::GetCategoryName(UOpenColorIOSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14d771910

UClass * __cdecl UOpenColorIOSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOSettings",
               &Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton,
               StaticRegisterNativesUOpenColorIOSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenColorIOSettings>,
               InternalVTableHelperCtorCaller<UOpenColorIOSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOSettings.InnerSingleton;
}

// StaticRegisterNativesUOpenColorIOSettings @ 14d778510

void __cdecl UOpenColorIOSettings::StaticRegisterNativesUOpenColorIOSettings(void)

{
  return;
}

