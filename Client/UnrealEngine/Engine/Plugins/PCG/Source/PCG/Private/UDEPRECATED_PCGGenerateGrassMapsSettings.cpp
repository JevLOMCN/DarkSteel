// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149723620

UClass * __cdecl UDEPRECATED_PCGGenerateGrassMapsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenerateGrassMapsSettings",
               &Z_Registration_Info_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_PCGGenerateGrassMapsSettings,0x128,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PCGGenerateGrassMapsSettings>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PCGGenerateGrassMapsSettings>,local_res8,
               UPCGGenerateLandscapeTexturesSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings.InnerSingleton;
}

// UDEPRECATED_PCGGenerateGrassMapsSettings @ 149725450

UDEPRECATED_PCGGenerateGrassMapsSettings * __thiscall
UDEPRECATED_PCGGenerateGrassMapsSettings::UDEPRECATED_PCGGenerateGrassMapsSettings
          (UDEPRECATED_PCGGenerateGrassMapsSettings *this,FVTableHelper *param_1)

{
  UPCGGenerateLandscapeTexturesSettings::UPCGGenerateLandscapeTexturesSettings
            ((UPCGGenerateLandscapeTexturesSettings *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_PCGGenerateGrassMapsSettings__6B_;
  return this;
}

// UDEPRECATED_PCGGenerateGrassMapsSettings @ 149725480

UDEPRECATED_PCGGenerateGrassMapsSettings * __thiscall
UDEPRECATED_PCGGenerateGrassMapsSettings::UDEPRECATED_PCGGenerateGrassMapsSettings
          (UDEPRECATED_PCGGenerateGrassMapsSettings *this)

{
  UPCGGenerateLandscapeTexturesSettings::UPCGGenerateLandscapeTexturesSettings
            ((UPCGGenerateLandscapeTexturesSettings *)this);
  *(undefined ***)this = &___7UDEPRECATED_PCGGenerateGrassMapsSettings__6B_;
  return this;
}

// ~UDEPRECATED_PCGGenerateGrassMapsSettings @ 149725d80

void __thiscall
UDEPRECATED_PCGGenerateGrassMapsSettings::~UDEPRECATED_PCGGenerateGrassMapsSettings
          (UDEPRECATED_PCGGenerateGrassMapsSettings *this)

{
  *(undefined ***)this = &___7UDEPRECATED_PCGGenerateGrassMapsSettings__6B_;
  UPCGGenerateLandscapeTexturesSettings::~UPCGGenerateLandscapeTexturesSettings
            ((UPCGGenerateLandscapeTexturesSettings *)this);
  return;
}

// GetPrivateStaticClass @ 149726e60

UClass * __cdecl UDEPRECATED_PCGGenerateGrassMapsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenerateGrassMapsSettings",
               &Z_Registration_Info_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_PCGGenerateGrassMapsSettings,0x128,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PCGGenerateGrassMapsSettings>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PCGGenerateGrassMapsSettings>,local_res8,
               UPCGGenerateLandscapeTexturesSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_PCGGenerateGrassMapsSettings @ 149727f60

void __cdecl
UDEPRECATED_PCGGenerateGrassMapsSettings::
StaticRegisterNativesUDEPRECATED_PCGGenerateGrassMapsSettings(void)

{
  return;
}

