// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9ca90

UClass * __cdecl UPCGNamedRerouteUsageSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNamedRerouteUsageSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNamedRerouteUsageSettings",
               &Z_Registration_Info_UClass_UPCGNamedRerouteUsageSettings.InnerSingleton,
               StaticRegisterNativesUPCGNamedRerouteUsageSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNamedRerouteUsageSettings>,
               InternalVTableHelperCtorCaller<UPCGNamedRerouteUsageSettings>,local_res8,
               UPCGNamedRerouteBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNamedRerouteUsageSettings.InnerSingleton;
}

// UPCGNamedRerouteUsageSettings @ 149be7220

UPCGNamedRerouteUsageSettings * __thiscall
UPCGNamedRerouteUsageSettings::UPCGNamedRerouteUsageSettings
          (UPCGNamedRerouteUsageSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGNamedRerouteUsageSettings__6B_;
  (this->Declaration).field0_0x0.DebugPtr = (UPCGNamedRerouteDeclarationSettings *)0x0;
  return this;
}

// UPCGNamedRerouteUsageSettings @ 149be7260

UPCGNamedRerouteUsageSettings * __thiscall
UPCGNamedRerouteUsageSettings::UPCGNamedRerouteUsageSettings(UPCGNamedRerouteUsageSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGNamedRerouteUsageSettings__6B_;
  (this->Declaration).field0_0x0.DebugPtr = (UPCGNamedRerouteDeclarationSettings *)0x0;
  return this;
}

// ~UPCGNamedRerouteUsageSettings @ 149be9ce0

void __thiscall
UPCGNamedRerouteUsageSettings::~UPCGNamedRerouteUsageSettings(UPCGNamedRerouteUsageSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGRerouteSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CanCullTaskIfUnwired @ 149c018a0

bool __thiscall
UPCGNamedRerouteUsageSettings::CanCullTaskIfUnwired(UPCGNamedRerouteUsageSettings *this)

{
  return false;
}

// ConvertNode @ 149c03920

bool __thiscall
UPCGNamedRerouteUsageSettings::ConvertNode
          (UPCGNamedRerouteUsageSettings *this,FPCGPreconfiguredInfo *param_1)

{
  return false;
}

// GetCurrentPinTypesID @ 149c23970

FPCGDataTypeIdentifier * __thiscall
UPCGNamedRerouteUsageSettings::GetCurrentPinTypesID
          (UPCGNamedRerouteUsageSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  UPCGNamedRerouteDeclarationSettings *pUVar1;
  FPCGDataTypeIdentifier *pFVar2;
  bool bVar3;
  FPCGDataTypeIdentifier local_38;
  void *local_20 [3];
  
  pUVar1 = (this->Declaration).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UPCGNamedRerouteDeclarationSettings *)0x0;
  if (bVar3) {
    pFVar2 = UPCGRerouteSettings::GetCurrentPinTypesID
                       ((UPCGRerouteSettings *)this,&local_38,param_1);
  }
  else {
    pFVar2 = (FPCGDataTypeIdentifier *)(**(code **)(*(longlong *)pUVar1 + 0x440))(pUVar1,local_20);
  }
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (pFVar2->Ids).AllocatorInstance.Data;
  (pFVar2->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).ArrayNum = (pFVar2->Ids).ArrayNum;
  (__return_storage_ptr__->Ids).ArrayMax = (pFVar2->Ids).ArrayMax;
  (pFVar2->Ids).ArrayNum = 0;
  (pFVar2->Ids).ArrayMax = 0;
  __return_storage_ptr__->CustomSubtype = pFVar2->CustomSubtype;
  if (bVar3) {
    if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Ids.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_20[0] != (void *)0x0)) {
    FMemory::Free(local_20[0]);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c25d90

UClass * __cdecl UPCGNamedRerouteUsageSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNamedRerouteUsageSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNamedRerouteUsageSettings",
               &Z_Registration_Info_UClass_UPCGNamedRerouteUsageSettings.InnerSingleton,
               StaticRegisterNativesUPCGNamedRerouteUsageSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNamedRerouteUsageSettings>,
               InternalVTableHelperCtorCaller<UPCGNamedRerouteUsageSettings>,local_res8,
               UPCGNamedRerouteBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNamedRerouteUsageSettings.InnerSingleton;
}

// InputPinProperties @ 149c2c560

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGNamedRerouteUsageSettings::InputPinProperties
          (UPCGNamedRerouteUsageSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  FPCGDataTypeIdentifier local_88;
  FPCGPinProperties local_70;
  FPCGPinProperties local_40;
  
  FPCGPinProperties::FPCGPinProperties(&local_70);
  local_70.Label = PCGPinConstants::DefaultInputLabel;
  FPCGPinProperties::SetAllowMultipleConnections(&local_70,false);
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_88,Any);
  if (&local_70.AllowedTypes != pFVar3) {
    if (local_70.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllowedTypes.Ids.AllocatorInstance.Data);
    }
    local_70.AllowedTypes.Ids.AllocatorInstance.Data = (pFVar3->Ids).AllocatorInstance.Data;
    (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.AllowedTypes.Ids.ArrayNum = (pFVar3->Ids).ArrayNum;
    local_70.AllowedTypes.Ids.ArrayMax = (pFVar3->Ids).ArrayMax;
    (pFVar3->Ids).ArrayNum = 0;
    (pFVar3->Ids).ArrayMax = 0;
  }
  local_70.AllowedTypes.CustomSubtype = pFVar3->CustomSubtype;
  if (local_88.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Ids.AllocatorInstance.Data);
  }
  local_40.Label = local_70.Label;
  local_40.Usage = local_70.Usage;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_40.AllowedTypes,&local_70.AllowedTypes);
  local_40.bAllowMultipleData = local_70.bAllowMultipleData;
  local_40.PinStatus = local_70.PinStatus;
  local_40.bInvisiblePin = local_70.bInvisiblePin;
  local_40.bAllowMultipleConnections = local_70.bAllowMultipleConnections;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_40,1);
  if (local_40.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  if (local_70.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->ArrayNum == 1) {
    (__return_storage_ptr__->AllocatorInstance).Data[0x2a] = (FScriptContainerElement)0x1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9111866250534846200>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGReroute.cpp"
                       ,0x108,"PinProperties.Num() == 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGNamedRerouteUsageSettings @ 149c354d0

void __cdecl UPCGNamedRerouteUsageSettings::StaticRegisterNativesUPCGNamedRerouteUsageSettings(void)

{
  return;
}

