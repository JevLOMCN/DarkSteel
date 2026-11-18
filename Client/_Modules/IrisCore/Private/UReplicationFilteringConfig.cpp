// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 1441f3ea0

UClass * __cdecl UReplicationFilteringConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationFilteringConfig",
               &Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton,
               StaticRegisterNativesUReplicationFilteringConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationFilteringConfig>,
               InternalVTableHelperCtorCaller<UReplicationFilteringConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton;
}

// UReplicationFilteringConfig @ 1441f9370

UReplicationFilteringConfig * __thiscall
UReplicationFilteringConfig::UReplicationFilteringConfig
          (UReplicationFilteringConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnableObjectScopeHysteresis = true;
  this->DefaultHysteresisFrameCount = '\0';
  this->_padding_ = (longlong)&___7UReplicationFilteringConfig__6B_;
  (this->HysteresisProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HysteresisProfiles).ArrayNum = 0;
  (this->HysteresisProfiles).ArrayMax = 0;
  this->HysteresisUpdateConnectionThrottling = '\x01';
  return this;
}

// UReplicationFilteringConfig @ 1441f93b0

UReplicationFilteringConfig * __thiscall
UReplicationFilteringConfig::UReplicationFilteringConfig
          (UReplicationFilteringConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnableObjectScopeHysteresis = true;
  this->DefaultHysteresisFrameCount = '\0';
  this->_padding_ = (longlong)&___7UReplicationFilteringConfig__6B_;
  (this->HysteresisProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HysteresisProfiles).ArrayNum = 0;
  (this->HysteresisProfiles).ArrayMax = 0;
  this->HysteresisUpdateConnectionThrottling = '\x01';
  return this;
}

// ~UReplicationFilteringConfig @ 1441f9f50

void __thiscall
UReplicationFilteringConfig::~UReplicationFilteringConfig(UReplicationFilteringConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UReplicationFilteringConfig__6B_;
  pFVar1 = (this->HysteresisProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14420bc60

UClass * __cdecl UReplicationFilteringConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationFilteringConfig",
               &Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton,
               StaticRegisterNativesUReplicationFilteringConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationFilteringConfig>,
               InternalVTableHelperCtorCaller<UReplicationFilteringConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationFilteringConfig.InnerSingleton;
}

// StaticRegisterNativesUReplicationFilteringConfig @ 14421be10

void __cdecl UReplicationFilteringConfig::StaticRegisterNativesUReplicationFilteringConfig(void)

{
  return;
}

