// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14421ee80

UClass * __cdecl UFilterOutNetObjectFilterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FilterOutNetObjectFilterConfig",
               &Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton,
               StaticRegisterNativesUFilterOutNetObjectFilterConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFilterOutNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UFilterOutNetObjectFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton;
}

// UFilterOutNetObjectFilterConfig @ 14422a1a0

UFilterOutNetObjectFilterConfig * __thiscall
UFilterOutNetObjectFilterConfig::UFilterOutNetObjectFilterConfig
          (UFilterOutNetObjectFilterConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFilterOutNetObjectFilterConfig__6B_;
  return this;
}

// UFilterOutNetObjectFilterConfig @ 14422a1d0

UFilterOutNetObjectFilterConfig * __thiscall
UFilterOutNetObjectFilterConfig::UFilterOutNetObjectFilterConfig
          (UFilterOutNetObjectFilterConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFilterOutNetObjectFilterConfig__6B_;
  return this;
}

// ~UFilterOutNetObjectFilterConfig @ 14422b420

void __thiscall
UFilterOutNetObjectFilterConfig::~UFilterOutNetObjectFilterConfig
          (UFilterOutNetObjectFilterConfig *this)

{
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14423dff0

UClass * __cdecl UFilterOutNetObjectFilterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FilterOutNetObjectFilterConfig",
               &Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton,
               StaticRegisterNativesUFilterOutNetObjectFilterConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFilterOutNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UFilterOutNetObjectFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilterConfig.InnerSingleton;
}

// StaticRegisterNativesUFilterOutNetObjectFilterConfig @ 1442548c0

void __cdecl
UFilterOutNetObjectFilterConfig::StaticRegisterNativesUFilterOutNetObjectFilterConfig(void)

{
  return;
}

