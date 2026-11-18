// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14421eb40

UClass * __cdecl UAlwaysRelevantNetObjectFilterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"AlwaysRelevantNetObjectFilterConfig",
               &Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton,
               StaticRegisterNativesUAlwaysRelevantNetObjectFilterConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAlwaysRelevantNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton;
}

// UAlwaysRelevantNetObjectFilterConfig @ 14422a020

UAlwaysRelevantNetObjectFilterConfig * __thiscall
UAlwaysRelevantNetObjectFilterConfig::UAlwaysRelevantNetObjectFilterConfig
          (UAlwaysRelevantNetObjectFilterConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAlwaysRelevantNetObjectFilterConfig__6B_;
  return this;
}

// UAlwaysRelevantNetObjectFilterConfig @ 14422a050

UAlwaysRelevantNetObjectFilterConfig * __thiscall
UAlwaysRelevantNetObjectFilterConfig::UAlwaysRelevantNetObjectFilterConfig
          (UAlwaysRelevantNetObjectFilterConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAlwaysRelevantNetObjectFilterConfig__6B_;
  return this;
}

// ~UAlwaysRelevantNetObjectFilterConfig @ 14422b3a0

void __thiscall
UAlwaysRelevantNetObjectFilterConfig::~UAlwaysRelevantNetObjectFilterConfig
          (UAlwaysRelevantNetObjectFilterConfig *this)

{
  *(undefined ***)this = &___7UNetObjectFilterConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14423ddb0

UClass * __cdecl UAlwaysRelevantNetObjectFilterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"AlwaysRelevantNetObjectFilterConfig",
               &Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton,
               StaticRegisterNativesUAlwaysRelevantNetObjectFilterConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAlwaysRelevantNetObjectFilterConfig>,
               InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilterConfig.InnerSingleton;
}

// StaticRegisterNativesUAlwaysRelevantNetObjectFilterConfig @ 144254890

void __cdecl
UAlwaysRelevantNetObjectFilterConfig::StaticRegisterNativesUAlwaysRelevantNetObjectFilterConfig
          (void)

{
  return;
}

