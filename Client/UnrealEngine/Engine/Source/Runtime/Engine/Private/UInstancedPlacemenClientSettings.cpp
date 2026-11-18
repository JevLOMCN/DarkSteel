// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147d54f80

UClass * __cdecl UInstancedPlacemenClientSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedPlacemenClientSettings",
               &Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.InnerSingleton,
               StaticRegisterNativesUInstancedPlacemenClientSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInstancedPlacemenClientSettings>,
               InternalVTableHelperCtorCaller<UInstancedPlacemenClientSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.InnerSingleton;
}

// UInstancedPlacemenClientSettings @ 147d79800

UInstancedPlacemenClientSettings * __thiscall
UInstancedPlacemenClientSettings::UInstancedPlacemenClientSettings
          (UInstancedPlacemenClientSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInstancedPlacemenClientSettings__6B_;
  return this;
}

// UInstancedPlacemenClientSettings @ 147d79830

UInstancedPlacemenClientSettings * __thiscall
UInstancedPlacemenClientSettings::UInstancedPlacemenClientSettings
          (UInstancedPlacemenClientSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInstancedPlacemenClientSettings__6B_;
  return this;
}

// ~UInstancedPlacemenClientSettings @ 147d7b9b0

void __thiscall
UInstancedPlacemenClientSettings::~UInstancedPlacemenClientSettings
          (UInstancedPlacemenClientSettings *this)

{
  *(undefined ***)this = &___7UInstancedPlacemenClientSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147da7ae0

UClass * __cdecl UInstancedPlacemenClientSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedPlacemenClientSettings",
               &Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.InnerSingleton,
               StaticRegisterNativesUInstancedPlacemenClientSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInstancedPlacemenClientSettings>,
               InternalVTableHelperCtorCaller<UInstancedPlacemenClientSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.InnerSingleton;
}

// StaticRegisterNativesUInstancedPlacemenClientSettings @ 147dc4060

void __cdecl
UInstancedPlacemenClientSettings::StaticRegisterNativesUInstancedPlacemenClientSettings(void)

{
  return;
}

