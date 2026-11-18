// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14421ea90

UClass * __cdecl UNetObjectFilterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectFilterConfig,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectFilterConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton;
}

// UNetObjectFilterConfig @ 14422a3a0

UNetObjectFilterConfig * __thiscall
UNetObjectFilterConfig::UNetObjectFilterConfig(UNetObjectFilterConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
  return this;
}

// UNetObjectFilterConfig @ 14422a3d0

UNetObjectFilterConfig * __thiscall
UNetObjectFilterConfig::UNetObjectFilterConfig
          (UNetObjectFilterConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
  return this;
}

// ~UNetObjectFilterConfig @ 14422b4e0

void __thiscall UNetObjectFilterConfig::~UNetObjectFilterConfig(UNetObjectFilterConfig *this)

{
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14423e2c0

UClass * __cdecl UNetObjectFilterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectFilterConfig,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectFilterConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFilterConfig.InnerSingleton;
}

// StaticRegisterNativesUNetObjectFilterConfig @ 144254900

void __cdecl UNetObjectFilterConfig::StaticRegisterNativesUNetObjectFilterConfig(void)

{
  return;
}

