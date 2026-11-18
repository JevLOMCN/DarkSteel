// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 7

// StaticClass @ 1441c4240

UClass * __cdecl UNetAnalyticsAggregatorConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"NetAnalyticsAggregatorConfig",
               &Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton,
               StaticRegisterNativesUNetAnalyticsAggregatorConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetAnalyticsAggregatorConfig>,
               InternalVTableHelperCtorCaller<UNetAnalyticsAggregatorConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton;
}

// UNetAnalyticsAggregatorConfig @ 1441d2b90

UNetAnalyticsAggregatorConfig * __thiscall
UNetAnalyticsAggregatorConfig::UNetAnalyticsAggregatorConfig
          (UNetAnalyticsAggregatorConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetAnalyticsAggregatorConfig__6B_;
  (this->NetAnalyticsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetAnalyticsData).ArrayNum = 0;
  (this->NetAnalyticsData).ArrayMax = 0;
  return this;
}

// UNetAnalyticsAggregatorConfig @ 1441d2bd0

UNetAnalyticsAggregatorConfig * __thiscall
UNetAnalyticsAggregatorConfig::UNetAnalyticsAggregatorConfig
          (UNetAnalyticsAggregatorConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetAnalyticsAggregatorConfig__6B_;
  (this->NetAnalyticsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetAnalyticsData).ArrayNum = 0;
  (this->NetAnalyticsData).ArrayMax = 0;
  return this;
}

// ~UNetAnalyticsAggregatorConfig @ 1441d44b0

void __thiscall
UNetAnalyticsAggregatorConfig::~UNetAnalyticsAggregatorConfig(UNetAnalyticsAggregatorConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetAnalyticsAggregatorConfig__6B_;
  pFVar1 = (this->NetAnalyticsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1441dcde0

UClass * __cdecl UNetAnalyticsAggregatorConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"NetAnalyticsAggregatorConfig",
               &Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton,
               StaticRegisterNativesUNetAnalyticsAggregatorConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetAnalyticsAggregatorConfig>,
               InternalVTableHelperCtorCaller<UNetAnalyticsAggregatorConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton;
}

// OverridePerObjectConfigSection @ 1441e3440

void __thiscall
UNetAnalyticsAggregatorConfig::OverridePerObjectConfigSection
          (UNetAnalyticsAggregatorConfig *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::ConcatFC(&local_38,&local_28,L" ");
  ::FString::ConcatFF(&local_48,&local_38,&local_18);
  if (param_1 != &local_48) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUNetAnalyticsAggregatorConfig @ 1441ec570

void __cdecl UNetAnalyticsAggregatorConfig::StaticRegisterNativesUNetAnalyticsAggregatorConfig(void)

{
  return;
}

