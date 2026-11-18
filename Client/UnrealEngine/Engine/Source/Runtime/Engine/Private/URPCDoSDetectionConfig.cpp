// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148073dd0

UClass * __cdecl URPCDoSDetectionConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RPCDoSDetectionConfig",
               &Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton,
               StaticRegisterNativesURPCDoSDetectionConfig,0x88,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URPCDoSDetectionConfig>,
               InternalVTableHelperCtorCaller<URPCDoSDetectionConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton;
}

// URPCDoSDetectionConfig @ 14808c820

URPCDoSDetectionConfig * __thiscall
URPCDoSDetectionConfig::URPCDoSDetectionConfig(URPCDoSDetectionConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URPCDoSDetectionConfig__6B_;
  (this->DetectionSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetectionSeverity).ArrayNum = 0;
  (this->DetectionSeverity).ArrayMax = 0;
  (this->RPCBlockWhitelist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCBlockWhitelist).ArrayNum = 0;
  (this->RPCBlockWhitelist).ArrayMax = 0;
  (this->RPCBlockAllowlist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCBlockAllowlist).ArrayNum = 0;
  (this->RPCBlockAllowlist).ArrayMax = 0;
  (this->RPCAnalyticsThresholds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCAnalyticsThresholds).ArrayNum = 0;
  (this->RPCAnalyticsThresholds).ArrayMax = 0;
  return this;
}

// URPCDoSDetectionConfig @ 14808c870

URPCDoSDetectionConfig * __thiscall
URPCDoSDetectionConfig::URPCDoSDetectionConfig
          (URPCDoSDetectionConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URPCDoSDetectionConfig__6B_;
  (this->DetectionSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetectionSeverity).ArrayNum = 0;
  (this->DetectionSeverity).ArrayMax = 0;
  (this->RPCBlockWhitelist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCBlockWhitelist).ArrayNum = 0;
  (this->RPCBlockWhitelist).ArrayMax = 0;
  (this->RPCBlockAllowlist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCBlockAllowlist).ArrayNum = 0;
  (this->RPCBlockAllowlist).ArrayMax = 0;
  (this->RPCAnalyticsThresholds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCAnalyticsThresholds).ArrayNum = 0;
  (this->RPCAnalyticsThresholds).ArrayMax = 0;
  return this;
}

// ~URPCDoSDetectionConfig @ 14808f840

void __thiscall URPCDoSDetectionConfig::~URPCDoSDetectionConfig(URPCDoSDetectionConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URPCDoSDetectionConfig__6B_;
  pFVar1 = (this->RPCAnalyticsThresholds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RPCBlockAllowlist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RPCBlockWhitelist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DetectionSeverity).AllocatorInstance.Data,
             (this->DetectionSeverity).ArrayNum);
  pFVar1 = (this->DetectionSeverity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Get @ 1480a3930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URPCDoSDetectionConfig * __cdecl URPCDoSDetectionConfig::Get(FName param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  URPCDoSDetectionConfig *pUVar7;
  longlong *plVar8;
  FName local_res8;
  undefined1 auStack_d8 [32];
  TStringView<wchar_t> local_b8;
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_res8 = param_1;
  pUVar3 = StaticClass();
  pFVar4 = ::FName::ToString(&local_res8,&local_a8);
  if ((pFVar4->Data).ArrayNum == 0) {
    local_b8.DataPtr = L"";
  }
  else {
    local_b8.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    local_b8.Size = 0;
    if ((FScriptContainerElement *)local_b8.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_1480a3996;
  }
  sVar5 = wcslen(local_b8.DataPtr);
  local_b8.Size = (int)sVar5;
LAB_1480a3996:
  pUVar6 = StaticClass();
  pUVar7 = (URPCDoSDetectionConfig *)StaticFindObject(pUVar6,(UObject *)pUVar3,&local_b8,None);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FVar1 = local_res8;
  if (pUVar7 == (URPCDoSDetectionConfig *)0x0) {
    if (local_res8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar6 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar6);
    FVar2 = local_res8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res8.Number = FVar1.Number;
    local_98._16_4_ = local_res8.ComparisonIndex.Value;
    local_98._20_4_ = local_res8.Number;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_res8 = FVar2;
    local_98._8_8_ = pUVar3;
    pUVar7 = (URPCDoSDetectionConfig *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return pUVar7;
}

// GetConfigSectionName @ 1480a4320

wchar_t * __cdecl URPCDoSDetectionConfig::GetConfigSectionName(void)

{
  return L"RPCDoSDetection";
}

// GetPrivateStaticClass @ 1480aa1b0

UClass * __cdecl URPCDoSDetectionConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RPCDoSDetectionConfig",
               &Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton,
               StaticRegisterNativesURPCDoSDetectionConfig,0x88,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URPCDoSDetectionConfig>,
               InternalVTableHelperCtorCaller<URPCDoSDetectionConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton;
}

// OverridePerObjectConfigSection @ 1480bb9b0

void __thiscall
URPCDoSDetectionConfig::OverridePerObjectConfigSection
          (URPCDoSDetectionConfig *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,&local_18);
  ::FString::ConcatFC(&local_28,&local_18,L" ");
  ::FString::ConcatFC(&local_38,&local_28,L"RPCDoSDetection");
  if (param_1 != &local_38) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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

// StaticRegisterNativesURPCDoSDetectionConfig @ 1480d57d0

void __cdecl URPCDoSDetectionConfig::StaticRegisterNativesURPCDoSDetectionConfig(void)

{
  return;
}

