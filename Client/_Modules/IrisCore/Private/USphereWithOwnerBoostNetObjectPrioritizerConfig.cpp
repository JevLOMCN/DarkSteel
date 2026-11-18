// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14429f4b0

UClass * __cdecl USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.
                InnerSingleton,StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizerConfig,
               0x48,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizerConfig>,
               local_res8,USphereNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.InnerSingleton;
}

// USphereWithOwnerBoostNetObjectPrioritizerConfig @ 1442af7c0

USphereWithOwnerBoostNetObjectPrioritizerConfig * __thiscall
USphereWithOwnerBoostNetObjectPrioritizerConfig::USphereWithOwnerBoostNetObjectPrioritizerConfig
          (USphereWithOwnerBoostNetObjectPrioritizerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x44fa0000;
  this->_padding_ = (longlong)&___7USphereWithOwnerBoostNetObjectPrioritizerConfig__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x461c4000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3dcccccd;
  this->OwnerPriorityBoost = 2.0;
  return this;
}

// USphereWithOwnerBoostNetObjectPrioritizerConfig @ 1442af820

USphereWithOwnerBoostNetObjectPrioritizerConfig * __thiscall
USphereWithOwnerBoostNetObjectPrioritizerConfig::USphereWithOwnerBoostNetObjectPrioritizerConfig
          (USphereWithOwnerBoostNetObjectPrioritizerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x44fa0000;
  this->_padding_ = (longlong)&___7USphereWithOwnerBoostNetObjectPrioritizerConfig__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x461c4000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3dcccccd;
  this->OwnerPriorityBoost = 2.0;
  return this;
}

// ~USphereWithOwnerBoostNetObjectPrioritizerConfig @ 1442b0f80

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizerConfig::~USphereWithOwnerBoostNetObjectPrioritizerConfig
          (USphereWithOwnerBoostNetObjectPrioritizerConfig *this)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1442c3ab0

UClass * __cdecl USphereWithOwnerBoostNetObjectPrioritizerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.
                InnerSingleton,StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizerConfig,
               0x48,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizerConfig>,
               local_res8,USphereNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.InnerSingleton;
}

// StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizerConfig @ 1442e6390

void __cdecl
USphereWithOwnerBoostNetObjectPrioritizerConfig::
StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizerConfig(void)

{
  return;
}

