// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14425dea0

UClass * __cdecl USequentialPartialNetBlobHandlerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SequentialPartialNetBlobHandlerConfig",
               &Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton,
               StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig,0x30,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USequentialPartialNetBlobHandlerConfig>,
               InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandlerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton;
}

// USequentialPartialNetBlobHandlerConfig @ 144268920

USequentialPartialNetBlobHandlerConfig * __thiscall
USequentialPartialNetBlobHandlerConfig::USequentialPartialNetBlobHandlerConfig
          (USequentialPartialNetBlobHandlerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MaxPartBitCount = 0x400;
  this->_padding_ = (longlong)&___7USequentialPartialNetBlobHandlerConfig__6B_;
  this->MaxPartCount = 0x1000;
  return this;
}

// USequentialPartialNetBlobHandlerConfig @ 144268960

USequentialPartialNetBlobHandlerConfig * __thiscall
USequentialPartialNetBlobHandlerConfig::USequentialPartialNetBlobHandlerConfig
          (USequentialPartialNetBlobHandlerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MaxPartBitCount = 0x400;
  this->_padding_ = (longlong)&___7USequentialPartialNetBlobHandlerConfig__6B_;
  this->MaxPartCount = 0x1000;
  return this;
}

// ~USequentialPartialNetBlobHandlerConfig @ 144269880

void __thiscall
USequentialPartialNetBlobHandlerConfig::~USequentialPartialNetBlobHandlerConfig
          (USequentialPartialNetBlobHandlerConfig *this)

{
  this->_padding_ = (longlong)&___7USequentialPartialNetBlobHandlerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14427c640

UClass * __cdecl USequentialPartialNetBlobHandlerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SequentialPartialNetBlobHandlerConfig",
               &Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton,
               StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig,0x30,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USequentialPartialNetBlobHandlerConfig>,
               InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandlerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.InnerSingleton;
}

// StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig @ 144297b00

void __cdecl
USequentialPartialNetBlobHandlerConfig::StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig
          (void)

{
  return;
}

