// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 1442a01a0

UClass * __cdecl UNetObjectConnectionFilterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectConnectionFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectConnectionFilterConfig,0x30,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectConnectionFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectConnectionFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton;
}

// UNetObjectConnectionFilterConfig @ 1442aef30

UNetObjectConnectionFilterConfig * __thiscall
UNetObjectConnectionFilterConfig::UNetObjectConnectionFilterConfig
          (UNetObjectConnectionFilterConfig *this,FVTableHelper *param_1)

{
  UNetObjectFilterConfig::UNetObjectFilterConfig((UNetObjectFilterConfig *)this,param_1);
  this->MaxObjectCount = 0x1000;
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilterConfig__6B_;
  return this;
}

// UNetObjectConnectionFilterConfig @ 1442aef60

UNetObjectConnectionFilterConfig * __thiscall
UNetObjectConnectionFilterConfig::UNetObjectConnectionFilterConfig
          (UNetObjectConnectionFilterConfig *this,FObjectInitializer *param_1)

{
  UNetObjectFilterConfig::UNetObjectFilterConfig((UNetObjectFilterConfig *)this,param_1);
  this->MaxObjectCount = 0x1000;
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilterConfig__6B_;
  return this;
}

// ~UNetObjectConnectionFilterConfig @ 1442b0c20

void __thiscall
UNetObjectConnectionFilterConfig::~UNetObjectConnectionFilterConfig
          (UNetObjectConnectionFilterConfig *this)

{
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilterConfig__6B_;
  UNetObjectFilterConfig::~UNetObjectFilterConfig((UNetObjectFilterConfig *)this);
  return;
}

// GetPrivateStaticClass @ 1442c3200

UClass * __cdecl UNetObjectConnectionFilterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectConnectionFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectConnectionFilterConfig,0x30,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectConnectionFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectConnectionFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton;
}

// StaticRegisterNativesUNetObjectConnectionFilterConfig @ 1442e62d0

void __cdecl
UNetObjectConnectionFilterConfig::StaticRegisterNativesUNetObjectConnectionFilterConfig(void)

{
  return;
}

