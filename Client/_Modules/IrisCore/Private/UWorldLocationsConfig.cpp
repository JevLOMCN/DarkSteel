// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 1442ee8f0

UClass * __cdecl UWorldLocationsConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"WorldLocationsConfig",
               &Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton,
               StaticRegisterNativesUWorldLocationsConfig,0x60,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldLocationsConfig>,
               InternalVTableHelperCtorCaller<UWorldLocationsConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton;
}

// UWorldLocationsConfig @ 1442f6ff0

UWorldLocationsConfig * __thiscall
UWorldLocationsConfig::UWorldLocationsConfig(UWorldLocationsConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MaxNetCullDistance = 150000.0;
  this->_padding_ = (longlong)&___7UWorldLocationsConfig__6B_;
  (this->MinPos).field0_0x0._s_0.X = -1048576.0;
  (this->MinPos).field0_0x0._s_0.Y = -1048576.0;
  (this->MinPos).field0_0x0._s_0.Z = -1048576.0;
  (this->MaxPos).field0_0x0._s_0.X = 1048576.0;
  (this->MaxPos).field0_0x0._s_0.Y = 1048576.0;
  (this->MaxPos).field0_0x0._s_0.Z = 1048576.0;
  return this;
}

// UWorldLocationsConfig @ 1442f7050

UWorldLocationsConfig * __thiscall
UWorldLocationsConfig::UWorldLocationsConfig
          (UWorldLocationsConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MaxNetCullDistance = 150000.0;
  this->_padding_ = (longlong)&___7UWorldLocationsConfig__6B_;
  (this->MinPos).field0_0x0._s_0.X = -1048576.0;
  (this->MinPos).field0_0x0._s_0.Y = -1048576.0;
  (this->MinPos).field0_0x0._s_0.Z = -1048576.0;
  (this->MaxPos).field0_0x0._s_0.X = 1048576.0;
  (this->MaxPos).field0_0x0._s_0.Y = 1048576.0;
  (this->MaxPos).field0_0x0._s_0.Z = 1048576.0;
  return this;
}

// ~UWorldLocationsConfig @ 1442f95d0

void __thiscall UWorldLocationsConfig::~UWorldLocationsConfig(UWorldLocationsConfig *this)

{
  this->_padding_ = (longlong)&___7UWorldLocationsConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144304390

UClass * __cdecl UWorldLocationsConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"WorldLocationsConfig",
               &Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton,
               StaticRegisterNativesUWorldLocationsConfig,0x60,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldLocationsConfig>,
               InternalVTableHelperCtorCaller<UWorldLocationsConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldLocationsConfig.InnerSingleton;
}

// StaticRegisterNativesUWorldLocationsConfig @ 144315c30

void __cdecl UWorldLocationsConfig::StaticRegisterNativesUWorldLocationsConfig(void)

{
  return;
}

