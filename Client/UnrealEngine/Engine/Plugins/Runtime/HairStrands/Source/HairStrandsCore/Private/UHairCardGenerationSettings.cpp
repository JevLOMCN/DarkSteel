// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// StaticClass @ 14df93ad0

UClass * __cdecl UHairCardGenerationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHairCardGenerationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"HairCardGenerationSettings",
               &Z_Registration_Info_UClass_UHairCardGenerationSettings.InnerSingleton,
               StaticRegisterNativesUHairCardGenerationSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHairCardGenerationSettings>,
               InternalVTableHelperCtorCaller<UHairCardGenerationSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHairCardGenerationSettings.InnerSingleton;
}

// UHairCardGenerationSettings @ 14dfafe30

UHairCardGenerationSettings * __thiscall
UHairCardGenerationSettings::UHairCardGenerationSettings
          (UHairCardGenerationSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHairCardGenerationSettings__6B_;
  return this;
}

// UHairCardGenerationSettings @ 14dfafe60

UHairCardGenerationSettings * __thiscall
UHairCardGenerationSettings::UHairCardGenerationSettings
          (UHairCardGenerationSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHairCardGenerationSettings__6B_;
  return this;
}

// ~UHairCardGenerationSettings @ 14dfb0ea0

void __thiscall
UHairCardGenerationSettings::~UHairCardGenerationSettings(UHairCardGenerationSettings *this)

{
  *(undefined ***)this = &___7UHairCardGenerationSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildDDCKey @ 14dfb8aa0

void __thiscall
UHairCardGenerationSettings::BuildDDCKey(UHairCardGenerationSettings *this,FArchive *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomAssetCards.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 14dfc8740

UClass * __cdecl UHairCardGenerationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHairCardGenerationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"HairCardGenerationSettings",
               &Z_Registration_Info_UClass_UHairCardGenerationSettings.InnerSingleton,
               StaticRegisterNativesUHairCardGenerationSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHairCardGenerationSettings>,
               InternalVTableHelperCtorCaller<UHairCardGenerationSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHairCardGenerationSettings.InnerSingleton;
}

// StaticRegisterNativesUHairCardGenerationSettings @ 14dfd89b0

void __cdecl UHairCardGenerationSettings::StaticRegisterNativesUHairCardGenerationSettings(void)

{
  return;
}

