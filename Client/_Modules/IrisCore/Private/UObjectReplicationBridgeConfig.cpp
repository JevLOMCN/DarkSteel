// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 14

// StaticClass @ 14429ffa0

UClass * __cdecl UObjectReplicationBridgeConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ObjectReplicationBridgeConfig",
               &Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton,
               StaticRegisterNativesUObjectReplicationBridgeConfig,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReplicationBridgeConfig>,
               InternalVTableHelperCtorCaller<UObjectReplicationBridgeConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton;
}

// UObjectReplicationBridgeConfig @ 1442af240

UObjectReplicationBridgeConfig * __thiscall
UObjectReplicationBridgeConfig::UObjectReplicationBridgeConfig(UObjectReplicationBridgeConfig *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UObjectReplicationBridgeConfig__6B_;
  (this->PollConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PollConfigs).ArrayNum = 0;
  (this->PollConfigs).ArrayMax = 0;
  (this->FilterConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterConfigs).ArrayNum = 0;
  (this->FilterConfigs).ArrayMax = 0;
  (this->PrioritizerConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrioritizerConfigs).ArrayNum = 0;
  (this->PrioritizerConfigs).ArrayMax = 0;
  (this->DeltaCompressionConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaCompressionConfigs).ArrayNum = 0;
  (this->DeltaCompressionConfigs).ArrayMax = 0;
  (this->CriticalClassConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CriticalClassConfigs).ArrayNum = 0;
  (this->CriticalClassConfigs).ArrayMax = 0;
  this->bAllClassesCritical = false;
  (this->TypeStatsConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeStatsConfigs).ArrayNum = 0;
  (this->TypeStatsConfigs).ArrayMax = 0;
  (this->DefaultSpatialFilterName).ComparisonIndex = 0;
  (this->DefaultSpatialFilterName).Number = 0;
  (this->AsyncLoadingClassConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncLoadingClassConfigs).ArrayNum = 0;
  (this->AsyncLoadingClassConfigs).ArrayMax = 0;
  (this->RequiredNetDriverChannelClassName).ComparisonIndex = 0;
  (this->RequiredNetDriverChannelClassName).Number = 0;
  (this->CriticalActorClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CriticalActorClasses).ArrayNum = 0;
  (this->CriticalActorClasses).ArrayMax = 0;
  return this;
}

// UObjectReplicationBridgeConfig @ 1442af2d0

UObjectReplicationBridgeConfig * __thiscall
UObjectReplicationBridgeConfig::UObjectReplicationBridgeConfig
          (UObjectReplicationBridgeConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectReplicationBridgeConfig__6B_;
  (this->PollConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PollConfigs).ArrayNum = 0;
  (this->PollConfigs).ArrayMax = 0;
  (this->FilterConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterConfigs).ArrayNum = 0;
  (this->FilterConfigs).ArrayMax = 0;
  (this->PrioritizerConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrioritizerConfigs).ArrayNum = 0;
  (this->PrioritizerConfigs).ArrayMax = 0;
  (this->DeltaCompressionConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaCompressionConfigs).ArrayNum = 0;
  (this->DeltaCompressionConfigs).ArrayMax = 0;
  (this->CriticalClassConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CriticalClassConfigs).ArrayNum = 0;
  (this->CriticalClassConfigs).ArrayMax = 0;
  this->bAllClassesCritical = false;
  (this->TypeStatsConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeStatsConfigs).ArrayNum = 0;
  (this->TypeStatsConfigs).ArrayMax = 0;
  (this->DefaultSpatialFilterName).ComparisonIndex = 0;
  (this->DefaultSpatialFilterName).Number = 0;
  (this->AsyncLoadingClassConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncLoadingClassConfigs).ArrayNum = 0;
  (this->AsyncLoadingClassConfigs).ArrayMax = 0;
  (this->RequiredNetDriverChannelClassName).ComparisonIndex = 0;
  (this->RequiredNetDriverChannelClassName).Number = 0;
  (this->CriticalActorClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CriticalActorClasses).ArrayNum = 0;
  (this->CriticalActorClasses).ArrayMax = 0;
  return this;
}

// ~UObjectReplicationBridgeConfig @ 1442b0d60

void __thiscall
UObjectReplicationBridgeConfig::~UObjectReplicationBridgeConfig
          (UObjectReplicationBridgeConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectReplicationBridgeConfig__6B_;
  pFVar1 = (this->CriticalActorClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsyncLoadingClassConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TypeStatsConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CriticalClassConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeltaCompressionConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrioritizerConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilterConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PollConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAsyncLoadingClassConfigs @ 1442c21b0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

TArrayView<FObjectReplicationBridgeAsyncLoadingClassConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetAsyncLoadingClassConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicationBridgeAsyncLoadingClassConfig_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicationBridgeAsyncLoadingClassConfig_const_,int> *pTVar4;
  
  iVar1 = (this->AsyncLoadingClassConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicationBridgeAsyncLoadingClassConfig *)
       (this->AsyncLoadingClassConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicationBridgeAsyncLoadingClassConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetConfig @ 1442c2500

UObjectReplicationBridgeConfig * __cdecl UObjectReplicationBridgeConfig::GetConfig(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UObjectReplicationBridgeConfig *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UObjectReplicationBridgeConfig *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetCriticalClassConfigs @ 1442c2610

TArrayView<FObjectReplicatedBridgeCriticalClassConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetCriticalClassConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicatedBridgeCriticalClassConfig_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicatedBridgeCriticalClassConfig_const_,int> *pTVar4;
  
  iVar1 = (this->CriticalClassConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicatedBridgeCriticalClassConfig *)
       (this->CriticalClassConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicatedBridgeCriticalClassConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetDeltaCompressionConfigs @ 1442c2680

TArrayView<FObjectReplicationBridgeDeltaCompressionConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetDeltaCompressionConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicationBridgeDeltaCompressionConfig_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicationBridgeDeltaCompressionConfig_const_,int> *pTVar4;
  
  iVar1 = (this->DeltaCompressionConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicationBridgeDeltaCompressionConfig *)
       (this->DeltaCompressionConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicationBridgeDeltaCompressionConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFilterConfigs @ 1442c26f0

TArrayView<FObjectReplicationBridgeFilterConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetFilterConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicationBridgeFilterConfig_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicationBridgeFilterConfig_const_,int> *pTVar4;
  
  iVar1 = (this->FilterConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicationBridgeFilterConfig *)(this->FilterConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicationBridgeFilterConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPollConfigs @ 1442c2d20

TArrayView<FObjectReplicationBridgePollConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetPollConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicationBridgePollConfig_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicationBridgePollConfig_const_,int> *pTVar4;
  
  iVar1 = (this->PollConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicationBridgePollConfig *)(this->PollConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicationBridgePollConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrioritizerConfigs @ 1442c2e00

TArrayView<FObjectReplicationBridgePrioritizerConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetPrioritizerConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicationBridgePrioritizerConfig_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicationBridgePrioritizerConfig_const_,int> *pTVar4;
  
  iVar1 = (this->PrioritizerConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicationBridgePrioritizerConfig *)
       (this->PrioritizerConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicationBridgePrioritizerConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1442c3650

UClass * __cdecl UObjectReplicationBridgeConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ObjectReplicationBridgeConfig",
               &Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton,
               StaticRegisterNativesUObjectReplicationBridgeConfig,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReplicationBridgeConfig>,
               InternalVTableHelperCtorCaller<UObjectReplicationBridgeConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton;
}

// GetTypeStatsConfigs @ 1442c3f30

TArrayView<FObjectReplicationBridgeTypeStatsConfig_const_,int> * __thiscall
UObjectReplicationBridgeConfig::GetTypeStatsConfigs
          (UObjectReplicationBridgeConfig *this,
          TArrayView<FObjectReplicationBridgeTypeStatsConfig_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FObjectReplicationBridgeTypeStatsConfig_const_,int> *pTVar4;
  
  iVar1 = (this->TypeStatsConfigs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FObjectReplicationBridgeTypeStatsConfig *)(this->TypeStatsConfigs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FObjectReplicationBridgeTypeStatsConfig_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUObjectReplicationBridgeConfig @ 1442e6330

void __cdecl
UObjectReplicationBridgeConfig::StaticRegisterNativesUObjectReplicationBridgeConfig(void)

{
  return;
}

