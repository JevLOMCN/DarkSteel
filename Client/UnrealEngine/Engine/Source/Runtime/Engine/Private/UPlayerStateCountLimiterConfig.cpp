// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147b95df0

UClass * __cdecl UPlayerStateCountLimiterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerStateCountLimiterConfig",
               &Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.InnerSingleton,
               StaticRegisterNativesUPlayerStateCountLimiterConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlayerStateCountLimiterConfig>,
               InternalVTableHelperCtorCaller<UPlayerStateCountLimiterConfig>,local_res8,
               UNetObjectCountLimiterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.InnerSingleton;
}

// UPlayerStateCountLimiterConfig @ 147bbd930

UPlayerStateCountLimiterConfig * __thiscall
UPlayerStateCountLimiterConfig::UPlayerStateCountLimiterConfig
          (UPlayerStateCountLimiterConfig *this,FVTableHelper *param_1)

{
  UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig
            ((UNetObjectCountLimiterConfig *)this,param_1);
  *(undefined ***)this = &___7UPlayerStateCountLimiterConfig__6B_;
  return this;
}

// UPlayerStateCountLimiterConfig @ 147bbd960

UPlayerStateCountLimiterConfig * __thiscall
UPlayerStateCountLimiterConfig::UPlayerStateCountLimiterConfig(UPlayerStateCountLimiterConfig *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig
            ((UNetObjectCountLimiterConfig *)this,pFVar1);
  *(undefined4 *)&this->field_0x28 = 1;
  *(undefined ***)this = &___7UPlayerStateCountLimiterConfig__6B_;
  *(undefined4 *)&this->field_0x2c = 2;
  *(undefined4 *)&this->field_0x30 = 0x3f800000;
  *(undefined4 *)&this->field_0x34 = 0x40000000;
  this->field_0x38 = 1;
  return this;
}

// ~UPlayerStateCountLimiterConfig @ 147bbfa30

void __thiscall
UPlayerStateCountLimiterConfig::~UPlayerStateCountLimiterConfig
          (UPlayerStateCountLimiterConfig *this)

{
  *(undefined ***)this = &___7UPlayerStateCountLimiterConfig__6B_;
  UNetObjectCountLimiterConfig::~UNetObjectCountLimiterConfig((UNetObjectCountLimiterConfig *)this);
  return;
}

// GetPrivateStaticClass @ 147be5a30

UClass * __cdecl UPlayerStateCountLimiterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerStateCountLimiterConfig",
               &Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.InnerSingleton,
               StaticRegisterNativesUPlayerStateCountLimiterConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlayerStateCountLimiterConfig>,
               InternalVTableHelperCtorCaller<UPlayerStateCountLimiterConfig>,local_res8,
               UNetObjectCountLimiterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.InnerSingleton;
}

// StaticRegisterNativesUPlayerStateCountLimiterConfig @ 147c03760

void __cdecl
UPlayerStateCountLimiterConfig::StaticRegisterNativesUPlayerStateCountLimiterConfig(void)

{
  return;
}

