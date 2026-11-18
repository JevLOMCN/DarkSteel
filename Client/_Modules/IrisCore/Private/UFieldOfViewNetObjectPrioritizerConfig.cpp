// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14429fa20

UClass * __cdecl UFieldOfViewNetObjectPrioritizerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton,
               StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig,0x58,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldOfViewNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizerConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton;
}

// UFieldOfViewNetObjectPrioritizerConfig @ 1442aecd0

UFieldOfViewNetObjectPrioritizerConfig * __thiscall
UFieldOfViewNetObjectPrioritizerConfig::UFieldOfViewNetObjectPrioritizerConfig
          (UFieldOfViewNetObjectPrioritizerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InnerSphereRadius = 3000.0;
  this->_padding_ = (longlong)&___7UFieldOfViewNetObjectPrioritizerConfig__6B_;
  this->InnerSpherePriority = 1.0;
  this->OuterSphereRadius = 10000.0;
  this->OuterSpherePriority = 0.2;
  this->ConeFieldOfViewDegrees = 45.0;
  this->InnerConeLength = 3000.0;
  this->ConeLength = 20000.0;
  this->MinConePriority = 0.2;
  this->MaxConePriority = 1.0;
  this->LineOfSightWidth = 200.0;
  this->LineOfSightPriority = 1.0;
  this->OutsidePriority = 0.1;
  return this;
}

// UFieldOfViewNetObjectPrioritizerConfig @ 1442aed50

UFieldOfViewNetObjectPrioritizerConfig * __thiscall
UFieldOfViewNetObjectPrioritizerConfig::UFieldOfViewNetObjectPrioritizerConfig
          (UFieldOfViewNetObjectPrioritizerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InnerSphereRadius = 3000.0;
  this->_padding_ = (longlong)&___7UFieldOfViewNetObjectPrioritizerConfig__6B_;
  this->InnerSpherePriority = 1.0;
  this->OuterSphereRadius = 10000.0;
  this->OuterSpherePriority = 0.2;
  this->ConeFieldOfViewDegrees = 45.0;
  this->InnerConeLength = 3000.0;
  this->ConeLength = 20000.0;
  this->MinConePriority = 0.2;
  this->MaxConePriority = 1.0;
  this->LineOfSightWidth = 200.0;
  this->LineOfSightPriority = 1.0;
  this->OutsidePriority = 0.1;
  return this;
}

// ~UFieldOfViewNetObjectPrioritizerConfig @ 1442b0b30

void __thiscall
UFieldOfViewNetObjectPrioritizerConfig::~UFieldOfViewNetObjectPrioritizerConfig
          (UFieldOfViewNetObjectPrioritizerConfig *this)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1442c2fc0

UClass * __cdecl UFieldOfViewNetObjectPrioritizerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton,
               StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig,0x58,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldOfViewNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizerConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton;
}

// StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig @ 1442e62a0

void __cdecl
UFieldOfViewNetObjectPrioritizerConfig::StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig
          (void)

{
  return;
}

