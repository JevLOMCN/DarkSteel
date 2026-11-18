// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 1442a13f0

UClass * __cdecl UNetObjectCountLimiterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectCountLimiterConfig",
               &Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectCountLimiterConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectCountLimiterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectCountLimiterConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton;
}

// UNetObjectCountLimiterConfig @ 1442af060

UNetObjectCountLimiterConfig * __thiscall
UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig
          (UNetObjectCountLimiterConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Mode = RoundRobin;
  this->_padding_ = (longlong)&___7UNetObjectCountLimiterConfig__6B_;
  this->MaxObjectCount = 2;
  this->Priority = 1.0;
  this->OwningConnectionPriority = 1.0;
  this->bEnableOwnedObjectsFastLane = true;
  return this;
}

// UNetObjectCountLimiterConfig @ 1442af0b0

UNetObjectCountLimiterConfig * __thiscall
UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig
          (UNetObjectCountLimiterConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Mode = RoundRobin;
  this->_padding_ = (longlong)&___7UNetObjectCountLimiterConfig__6B_;
  this->MaxObjectCount = 2;
  this->Priority = 1.0;
  this->OwningConnectionPriority = 1.0;
  this->bEnableOwnedObjectsFastLane = true;
  return this;
}

// ~UNetObjectCountLimiterConfig @ 1442b0cc0

void __thiscall
UNetObjectCountLimiterConfig::~UNetObjectCountLimiterConfig(UNetObjectCountLimiterConfig *this)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1442c3380

UClass * __cdecl UNetObjectCountLimiterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectCountLimiterConfig",
               &Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectCountLimiterConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectCountLimiterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectCountLimiterConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton;
}

// StaticRegisterNativesUNetObjectCountLimiterConfig @ 1442e62f0

void __cdecl UNetObjectCountLimiterConfig::StaticRegisterNativesUNetObjectCountLimiterConfig(void)

{
  return;
}

