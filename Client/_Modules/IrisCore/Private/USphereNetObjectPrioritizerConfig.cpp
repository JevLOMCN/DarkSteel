// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14429e470

UClass * __cdecl USphereNetObjectPrioritizerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton,
               StaticRegisterNativesUSphereNetObjectPrioritizerConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<USphereNetObjectPrioritizerConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton;
}

// USphereNetObjectPrioritizerConfig @ 1442af620

USphereNetObjectPrioritizerConfig * __thiscall
USphereNetObjectPrioritizerConfig::USphereNetObjectPrioritizerConfig
          (USphereNetObjectPrioritizerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InnerRadius = 2000.0;
  this->_padding_ = (longlong)&___7USphereNetObjectPrioritizerConfig__6B_;
  this->OuterRadius = 10000.0;
  this->InnerPriority = 1.0;
  this->OuterPriority = 0.2;
  this->OutsidePriority = 0.1;
  return this;
}

// USphereNetObjectPrioritizerConfig @ 1442af670

USphereNetObjectPrioritizerConfig * __thiscall
USphereNetObjectPrioritizerConfig::USphereNetObjectPrioritizerConfig
          (USphereNetObjectPrioritizerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InnerRadius = 2000.0;
  this->_padding_ = (longlong)&___7USphereNetObjectPrioritizerConfig__6B_;
  this->OuterRadius = 10000.0;
  this->InnerPriority = 1.0;
  this->OuterPriority = 0.2;
  this->OutsidePriority = 0.1;
  return this;
}

// ~USphereNetObjectPrioritizerConfig @ 1442b0f20

void __thiscall
USphereNetObjectPrioritizerConfig::~USphereNetObjectPrioritizerConfig
          (USphereNetObjectPrioritizerConfig *this)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1442c3930

UClass * __cdecl USphereNetObjectPrioritizerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton,
               StaticRegisterNativesUSphereNetObjectPrioritizerConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<USphereNetObjectPrioritizerConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton;
}

// StaticRegisterNativesUSphereNetObjectPrioritizerConfig @ 1442e6370

void __cdecl
USphereNetObjectPrioritizerConfig::StaticRegisterNativesUSphereNetObjectPrioritizerConfig(void)

{
  return;
}

