// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a74ce0

UClass * __cdecl UHLODBuilderSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODBuilderSettings",
               &Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton,
               StaticRegisterNativesUHLODBuilderSettings,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHLODBuilderSettings>,
               InternalVTableHelperCtorCaller<UHLODBuilderSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton;
}

// UHLODBuilderSettings @ 148a7f910

UHLODBuilderSettings * __thiscall
UHLODBuilderSettings::UHLODBuilderSettings(UHLODBuilderSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODBuilderSettings__6B_;
  return this;
}

// UHLODBuilderSettings @ 148a7f940

UHLODBuilderSettings * __thiscall
UHLODBuilderSettings::UHLODBuilderSettings(UHLODBuilderSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODBuilderSettings__6B_;
  return this;
}

// ~UHLODBuilderSettings @ 148a81810

void __thiscall UHLODBuilderSettings::~UHLODBuilderSettings(UHLODBuilderSettings *this)

{
  *(undefined ***)this = &___7UHLODBuilderSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a95bb0

UClass * __cdecl UHLODBuilderSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODBuilderSettings",
               &Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton,
               StaticRegisterNativesUHLODBuilderSettings,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHLODBuilderSettings>,
               InternalVTableHelperCtorCaller<UHLODBuilderSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODBuilderSettings.InnerSingleton;
}

// StaticRegisterNativesUHLODBuilderSettings @ 148aa28e0

void __cdecl UHLODBuilderSettings::StaticRegisterNativesUHLODBuilderSettings(void)

{
  return;
}

