// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// StaticClass @ 14ec44750

UClass * __cdecl UOnlinePIEConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlinePIEConfig",
               &Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton,
               StaticRegisterNativesUOnlinePIEConfig,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<UOnlinePIEConfig>,
               InternalVTableHelperCtorCaller<UOnlinePIEConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton;
}

// UOnlinePIEConfig @ 14ec54c20

UOnlinePIEConfig * __thiscall
UOnlinePIEConfig::UOnlinePIEConfig(UOnlinePIEConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlinePIEConfig__6B_;
  (this->LoginTypesAllowingDuplicates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoginTypesAllowingDuplicates).ArrayNum = 0;
  (this->LoginTypesAllowingDuplicates).ArrayMax = 0;
  return this;
}

// UOnlinePIEConfig @ 14ec54c60

UOnlinePIEConfig * __thiscall
UOnlinePIEConfig::UOnlinePIEConfig(UOnlinePIEConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlinePIEConfig__6B_;
  (this->LoginTypesAllowingDuplicates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoginTypesAllowingDuplicates).ArrayNum = 0;
  (this->LoginTypesAllowingDuplicates).ArrayMax = 0;
  return this;
}

// ~UOnlinePIEConfig @ 14ec57780

void __thiscall UOnlinePIEConfig::~UOnlinePIEConfig(UOnlinePIEConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOnlinePIEConfig__6B_;
  DestructItems<FString,int>
            ((FString *)(this->LoginTypesAllowingDuplicates).AllocatorInstance.Data,
             (this->LoginTypesAllowingDuplicates).ArrayNum);
  pFVar1 = (this->LoginTypesAllowingDuplicates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ec787c0

UClass * __cdecl UOnlinePIEConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlinePIEConfig",
               &Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton,
               StaticRegisterNativesUOnlinePIEConfig,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<UOnlinePIEConfig>,
               InternalVTableHelperCtorCaller<UOnlinePIEConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton;
}

// StaticRegisterNativesUOnlinePIEConfig @ 14ec99ac0

void __cdecl UOnlinePIEConfig::StaticRegisterNativesUOnlinePIEConfig(void)

{
  return;
}

