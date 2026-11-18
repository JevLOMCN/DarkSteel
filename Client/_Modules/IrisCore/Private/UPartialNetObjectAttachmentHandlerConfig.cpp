// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14425e150

UClass * __cdecl UPartialNetObjectAttachmentHandlerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"PartialNetObjectAttachmentHandlerConfig",
               &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton,
               StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartialNetObjectAttachmentHandlerConfig>,
               InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandlerConfig>,local_res8,
               USequentialPartialNetBlobHandlerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton;
}

// UPartialNetObjectAttachmentHandlerConfig @ 144268800

UPartialNetObjectAttachmentHandlerConfig * __thiscall
UPartialNetObjectAttachmentHandlerConfig::UPartialNetObjectAttachmentHandlerConfig
          (UPartialNetObjectAttachmentHandlerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x400;
  this->_padding_ = (longlong)&___7UPartialNetObjectAttachmentHandlerConfig__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x1000;
  this->BitCountSplitThreshold = 0x600;
  this->ClientUnreliableBitCountSplitThreshold = 0x1a90;
  this->ServerUnreliableBitCountSplitThreshold = 0x800;
  return this;
}

// UPartialNetObjectAttachmentHandlerConfig @ 144268850

UPartialNetObjectAttachmentHandlerConfig * __thiscall
UPartialNetObjectAttachmentHandlerConfig::UPartialNetObjectAttachmentHandlerConfig
          (UPartialNetObjectAttachmentHandlerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x400;
  this->_padding_ = (longlong)&___7UPartialNetObjectAttachmentHandlerConfig__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x1000;
  this->BitCountSplitThreshold = 0x600;
  this->ClientUnreliableBitCountSplitThreshold = 0x1a90;
  this->ServerUnreliableBitCountSplitThreshold = 0x800;
  return this;
}

// ~UPartialNetObjectAttachmentHandlerConfig @ 144269840

void __thiscall
UPartialNetObjectAttachmentHandlerConfig::~UPartialNetObjectAttachmentHandlerConfig
          (UPartialNetObjectAttachmentHandlerConfig *this)

{
  this->_padding_ = (longlong)&___7USequentialPartialNetBlobHandlerConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14427c4c0

UClass * __cdecl UPartialNetObjectAttachmentHandlerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"PartialNetObjectAttachmentHandlerConfig",
               &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton,
               StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartialNetObjectAttachmentHandlerConfig>,
               InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandlerConfig>,local_res8,
               USequentialPartialNetBlobHandlerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.InnerSingleton;
}

// StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig @ 144297ae0

void __cdecl
UPartialNetObjectAttachmentHandlerConfig::
StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig(void)

{
  return;
}

