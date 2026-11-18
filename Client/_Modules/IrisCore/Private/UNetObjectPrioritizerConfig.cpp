// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14429f400

UClass * __cdecl UNetObjectPrioritizerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectPrioritizerConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton;
}

// UNetObjectPrioritizerConfig @ 1442af160

UNetObjectPrioritizerConfig * __thiscall
UNetObjectPrioritizerConfig::UNetObjectPrioritizerConfig
          (UNetObjectPrioritizerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNetObjectPrioritizerConfig__6B_;
  return this;
}

// UNetObjectPrioritizerConfig @ 1442af190

UNetObjectPrioritizerConfig * __thiscall
UNetObjectPrioritizerConfig::UNetObjectPrioritizerConfig
          (UNetObjectPrioritizerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNetObjectPrioritizerConfig__6B_;
  return this;
}

// ~UNetObjectPrioritizerConfig @ 1442b0d00

void __thiscall
UNetObjectPrioritizerConfig::~UNetObjectPrioritizerConfig(UNetObjectPrioritizerConfig *this)

{
  *(undefined ***)this = &___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1442c34f0

UClass * __cdecl UNetObjectPrioritizerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectPrioritizerConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton;
}

// StaticRegisterNativesUNetObjectPrioritizerConfig @ 1442e6310

void __cdecl UNetObjectPrioritizerConfig::StaticRegisterNativesUNetObjectPrioritizerConfig(void)

{
  return;
}

