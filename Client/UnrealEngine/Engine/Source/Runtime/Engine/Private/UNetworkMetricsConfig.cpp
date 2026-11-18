// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1480771e0

UClass * __cdecl UNetworkMetricsConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsConfig",
               &Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsConfig,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsConfig>,
               InternalVTableHelperCtorCaller<UNetworkMetricsConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton;
}

// UNetworkMetricsConfig @ 14808baf0

UNetworkMetricsConfig * __thiscall
UNetworkMetricsConfig::UNetworkMetricsConfig(UNetworkMetricsConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkMetricsConfig__6B_;
  (this->Listeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Listeners).ArrayNum = 0;
  (this->Listeners).ArrayMax = 0;
  return this;
}

// UNetworkMetricsConfig @ 14808bb30

UNetworkMetricsConfig * __thiscall
UNetworkMetricsConfig::UNetworkMetricsConfig
          (UNetworkMetricsConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkMetricsConfig__6B_;
  (this->Listeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Listeners).ArrayNum = 0;
  (this->Listeners).ArrayMax = 0;
  return this;
}

// ~UNetworkMetricsConfig @ 14808f2b0

void __thiscall UNetworkMetricsConfig::~UNetworkMetricsConfig(UNetworkMetricsConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetworkMetricsConfig__6B_;
  DestructItems<FNetworkMetricConfig,int>
            ((FNetworkMetricConfig *)(this->Listeners).AllocatorInstance.Data,
             (this->Listeners).ArrayNum);
  pFVar1 = (this->Listeners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9850

UClass * __cdecl UNetworkMetricsConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsConfig",
               &Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsConfig,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsConfig>,
               InternalVTableHelperCtorCaller<UNetworkMetricsConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton;
}

// StaticRegisterNativesUNetworkMetricsConfig @ 1480d5700

void __cdecl UNetworkMetricsConfig::StaticRegisterNativesUNetworkMetricsConfig(void)

{
  return;
}

