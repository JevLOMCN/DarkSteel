// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 6

// StaticClass @ 143129fc0

UClass * __cdecl UGeneralEngineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneralEngineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GeneralEngineSettings",
               &Z_Registration_Info_UClass_UGeneralEngineSettings.InnerSingleton,
               StaticRegisterNativesUGeneralEngineSettings,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeneralEngineSettings>,
               InternalVTableHelperCtorCaller<UGeneralEngineSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneralEngineSettings.InnerSingleton;
}

// UGeneralEngineSettings @ 14312aed0

UGeneralEngineSettings * __thiscall
UGeneralEngineSettings::UGeneralEngineSettings(UGeneralEngineSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UGeneralEngineSettings__6B_;
  return this;
}

// UGeneralEngineSettings @ 14312af00

UGeneralEngineSettings * __thiscall
UGeneralEngineSettings::UGeneralEngineSettings
          (UGeneralEngineSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UGeneralEngineSettings__6B_;
  return this;
}

// ~UGeneralEngineSettings @ 14312b2f0

void __thiscall UGeneralEngineSettings::~UGeneralEngineSettings(UGeneralEngineSettings *this)

{
  *(undefined ***)this = &___7UGeneralEngineSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14312c820

UClass * __cdecl UGeneralEngineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneralEngineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GeneralEngineSettings",
               &Z_Registration_Info_UClass_UGeneralEngineSettings.InnerSingleton,
               StaticRegisterNativesUGeneralEngineSettings,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeneralEngineSettings>,
               InternalVTableHelperCtorCaller<UGeneralEngineSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneralEngineSettings.InnerSingleton;
}

// StaticRegisterNativesUGeneralEngineSettings @ 14312ce50

void __cdecl UGeneralEngineSettings::StaticRegisterNativesUGeneralEngineSettings(void)

{
  return;
}

