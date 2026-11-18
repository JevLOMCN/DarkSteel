// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FCloudChunkSourceFactory @ 143220b00

FCloudChunkSourceFactory * __thiscall
DeltaFactories::FCloudChunkSourceFactory::FCloudChunkSourceFactory
          (FCloudChunkSourceFactory *this,FString *param_1,FCloudChunkSourceFactoryShared *param_2)

{
  IBuildManifestSet *pIVar1;
  FScriptContainerElement *_Src;
  IFileSystem *pIVar2;
  IDownloadService *pIVar3;
  IChunkDataSerialization *pIVar4;
  IMessagePump *pIVar5;
  IPlatform *pIVar6;
  IInstallerError *pIVar7;
  IPlatform *pIVar8;
  IPlatform *pIVar9;
  longlong lVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pIVar2 = param_2->FileSystem;
  pIVar3 = param_2->DownloadService;
  pIVar9 = (IPlatform *)0x0;
  pIVar4 = param_2->ChunkDataSerialization;
  pIVar5 = param_2->MessagePump;
  this->_padding_ = (longlong)&___7FCloudChunkSourceFactory_DeltaFactories__6B_;
  (this->Shared).FileSystem = pIVar2;
  (this->Shared).DownloadService = pIVar3;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar1 = param_2->ManifestSet;
  (this->Shared).ChunkDataSerialization = pIVar4;
  (this->Shared).MessagePump = pIVar5;
  (this->Shared).ManifestSet = pIVar1;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar10 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
  ConstructItems<FString,FString,int>(local_28.AllocatorInstance.Data,&local_18,1);
  BuildPatchServices::FCloudSourceConfig::FCloudSourceConfig(&this->CloudSourceConfig,&local_28);
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->ConnectionCountConfig).MaxLimit = 100;
  (this->ConnectionCountConfig).HighBandwidthFactor = 0.85;
  (this->ConnectionCountConfig).MinLimit = 8;
  (this->ConnectionCountConfig).LowBandwidthFactor = 0.65;
  (this->ConnectionCountConfig).NegativeHysteresis = 8;
  (this->ConnectionCountConfig).AverageSpeedMinCount = 8;
  (this->ConnectionCountConfig).PositiveHysteresis = 4;
  (this->ConnectionCountConfig).bDisableConnectionScaling = false;
  (this->ConnectionCountConfig).FallbackCount = 0x10;
  (this->ConnectionCountConfig).HealthHysteresis = 8;
  pIVar6 = ::operator_new(8);
  pIVar8 = pIVar9;
  if (pIVar6 != (IPlatform *)0x0) {
    *pIVar6 = (IPlatform)
              &
              ___7__TPlatform_UFWindowsPlatformProcess__UFWindowsPlatformMisc___BuildPatchServices__6B_
    ;
    pIVar8 = pIVar6;
  }
  (this->Platform).Ptr = pIVar8;
  pIVar6 = ::operator_new(8);
  pIVar8 = pIVar9;
  if (pIVar6 != (IPlatform *)0x0) {
    *pIVar6 = (IPlatform)&___7FNoMemoryChunkStoreStat_DeltaStats__6B_;
    pIVar8 = pIVar6;
  }
  (this->MemoryChunkStoreStat).Ptr = (IMemoryChunkStoreStat *)pIVar8;
  pIVar7 = BuildPatchServices::FInstallerErrorFactory::Create();
  (this->InstallerError).Ptr = pIVar7;
  pIVar8 = ::operator_new(8);
  if (pIVar8 != (IPlatform *)0x0) {
    *pIVar8 = (IPlatform)&___7FNoCloudChunkSourceStat_DeltaStats__6B_;
    pIVar9 = pIVar8;
  }
  (this->CloudChunkSourceStat).Ptr = (ICloudChunkSourceStat *)pIVar9;
  (this->InstanceDependancies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceDependancies).ArrayNum = 0;
  (this->InstanceDependancies).ArrayMax = 0;
  (this->CloudSourceConfig).bBeginDownloadsOnFirstGet = false;
  (this->CloudSourceConfig).MaxRetryCount = 0x1e;
  return this;
}

// ~FCloudChunkSourceFactory @ 143227e60

void __thiscall
DeltaFactories::FCloudChunkSourceFactory::~FCloudChunkSourceFactory(FCloudChunkSourceFactory *this)

{
  FScriptContainerElement *pFVar1;
  ICloudChunkSourceStat *pIVar2;
  IInstallerError *pIVar3;
  IMemoryChunkStoreStat *pIVar4;
  IPlatform *pIVar5;
  
  this->_padding_ = (longlong)&___7FCloudChunkSourceFactory_DeltaFactories__6B_;
  DestructItems<DeltaFactories::FCloudChunkSourceFactory::FInstanceDependancies,int>
            ((FInstanceDependancies *)(this->InstanceDependancies).AllocatorInstance.Data,
             (this->InstanceDependancies).ArrayNum);
  pFVar1 = (this->InstanceDependancies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->CloudChunkSourceStat).Ptr;
  if (pIVar2 != (ICloudChunkSourceStat *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->InstallerError).Ptr;
  if (pIVar3 != (IInstallerError *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->MemoryChunkStoreStat).Ptr;
  if (pIVar4 != (IMemoryChunkStoreStat *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->Platform).Ptr;
  if (pIVar5 != (IPlatform *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pFVar1 = (this->CloudSourceConfig).HealthPercentages.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CloudSourceConfig).RetryDelayTimes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CloudSourceConfig).CloudRoots.AllocatorInstance.Data,
             (this->CloudSourceConfig).CloudRoots.ArrayNum);
  pFVar1 = (this->CloudSourceConfig).CloudRoots.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Create @ 143247710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ICloudChunkSource * __thiscall
DeltaFactories::FCloudChunkSourceFactory::Create
          (FCloudChunkSourceFactory *this,IChunkReferenceTracker *param_1)

{
  int *piVar1;
  TArray<DeltaFactories::FCloudChunkSourceFactory::FInstanceDependancies,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  IChunkEvictionPolicy *pIVar4;
  IMemoryChunkStore *pIVar5;
  IDownloadConnectionCount *pIVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ICloudChunkSource *pIVar13;
  longlong lVar14;
  IChunkEvictionPolicy *pIVar15;
  IMemoryChunkStore *pIVar16;
  IDownloadConnectionCount *pIVar17;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar18;
  undefined ***pppuVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStackY_238 [32];
  FCloudSourceConfig local_1d8;
  IBuildManifestSet *local_178;
  ICloudChunkSourceStat *local_170;
  IDownloadConnectionCount *local_168;
  IInstallerError *local_160;
  IMessagePump *local_158;
  IChunkDataSerialization *local_150;
  IDownloadService *local_148;
  IChunkStore *local_140;
  IPlatform *local_138;
  FDownloadConnectionCountConfig local_130;
  code *local_f8 [2];
  FFunctionStorage local_e8;
  undefined1 local_c8 [80];
  code *local_78;
  undefined **local_68;
  ICloudChunkSource *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar2 = &this->InstanceDependancies;
  iVar11 = (this->InstanceDependancies).ArrayNum;
  piVar1 = &(this->InstanceDependancies).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->InstanceDependancies).ArrayNum = iVar11 + 1;
  DefaultConstructItems<DeltaFactories::FCloudChunkSourceFactory::FInstanceDependancies,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x18,1);
  iVar11 = (this->InstanceDependancies).ArrayNum;
  uVar20 = iVar11 - 1;
  uVar12 = 0;
  if ((int)uVar20 < iVar11) {
    uVar12 = ~uVar20 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pIVar13 = (ICloudChunkSource *)(*pcVar9)();
      return pIVar13;
    }
  }
  lVar14 = (longlong)(this->InstanceDependancies).ArrayNum;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pIVar15 = BuildPatchServices::FChunkEvictionPolicyFactory::Create(param_1);
  pIVar4 = *(IChunkEvictionPolicy **)(pFVar3 + lVar14 * 0x18 + -0x18);
  if ((pIVar4 != pIVar15) &&
     (*(IChunkEvictionPolicy **)(pFVar3 + lVar14 * 0x18 + -0x18) = pIVar15,
     pIVar4 != (IChunkEvictionPolicy *)0x0)) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar16 = BuildPatchServices::FMemoryChunkStoreFactory::Create
                      (100,*(IChunkEvictionPolicy **)(pFVar3 + lVar14 * 0x18 + -0x18),
                       (IChunkStore *)0x0,(this->MemoryChunkStoreStat).Ptr,
                       (IChunkReferenceTracker *)0x0);
  pIVar5 = *(IMemoryChunkStore **)(pFVar3 + lVar14 * 0x18 + -0x10);
  if ((pIVar5 != pIVar16) &&
     (*(IMemoryChunkStore **)(pFVar3 + lVar14 * 0x18 + -0x10) = pIVar16,
     pIVar5 != (IMemoryChunkStore *)0x0)) {
    (**(code **)*pIVar5)();
  }
  local_130.MaxLimit = (this->ConnectionCountConfig).MaxLimit;
  local_130.HighBandwidthFactor = (this->ConnectionCountConfig).HighBandwidthFactor;
  local_130.LowBandwidthFactor = (this->ConnectionCountConfig).LowBandwidthFactor;
  local_130.MinLimit = (this->ConnectionCountConfig).MinLimit;
  local_130.NegativeHysteresis = (this->ConnectionCountConfig).NegativeHysteresis;
  local_130.AverageSpeedMinCount = (this->ConnectionCountConfig).AverageSpeedMinCount;
  local_130.PositiveHysteresis = (this->ConnectionCountConfig).PositiveHysteresis;
  local_130.bDisableConnectionScaling = (this->ConnectionCountConfig).bDisableConnectionScaling;
  local_130.FallbackCount = (this->ConnectionCountConfig).FallbackCount;
  local_130.HealthHysteresis = (this->ConnectionCountConfig).HealthHysteresis;
  pIVar17 = BuildPatchServices::FDownloadConnectionCountFactory::Create
                      (&local_130,(IDownloadServiceStatistics *)0x0);
  pIVar6 = *(IDownloadConnectionCount **)(pFVar3 + lVar14 * 0x18 + -8);
  if ((pIVar6 != pIVar17) &&
     (*(IDownloadConnectionCount **)(pFVar3 + lVar14 * 0x18 + -8) = pIVar17,
     pIVar6 != (IDownloadConnectionCount *)0x0)) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,1);
  }
  pTVar18 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
            (**(code **)((longlong)*param_1 + 8))(param_1,local_c8);
  pFVar7 = (this->CloudSourceConfig).CloudRoots.AllocatorInstance.Data;
  local_178 = (this->Shared).ManifestSet;
  local_170 = (this->CloudChunkSourceStat).Ptr;
  local_168 = *(IDownloadConnectionCount **)(pFVar3 + lVar14 * 0x18 + -8);
  local_160 = (this->InstallerError).Ptr;
  local_158 = (this->Shared).MessagePump;
  local_150 = (this->Shared).ChunkDataSerialization;
  local_148 = (this->Shared).DownloadService;
  local_140 = *(IChunkStore **)(pFVar3 + lVar14 * 0x18 + -0x10);
  local_138 = (this->Platform).Ptr;
  local_1d8.CloudRoots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar11 = (this->CloudSourceConfig).CloudRoots.ArrayNum;
  local_1d8.CloudRoots.ArrayNum = iVar11;
  if (iVar11 == 0) {
    local_1d8.CloudRoots.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,(ForAnyElementType *)&local_1d8,iVar11,&local_1d8.CloudRoots.ArrayMax
              );
    ConstructItems<FString,FString,int>
              (local_1d8.CloudRoots.AllocatorInstance.Data,(FString *)pFVar7,iVar11);
  }
  local_1d8.MaxRetryCount = (this->CloudSourceConfig).MaxRetryCount;
  local_1d8.RetryDelayTimes.ArrayNum = (this->CloudSourceConfig).RetryDelayTimes.ArrayNum;
  lVar21 = (longlong)local_1d8.RetryDelayTimes.ArrayNum;
  pFVar7 = (this->CloudSourceConfig).RetryDelayTimes.AllocatorInstance.Data;
  local_1d8.PreFetchMinimum = (this->CloudSourceConfig).PreFetchMinimum;
  local_1d8.PreFetchMaximum = (this->CloudSourceConfig).PreFetchMaximum;
  local_1d8.RetryDelayTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1d8.RetryDelayTimes.ArrayNum == 0) {
    local_1d8.RetryDelayTimes.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_1d8.RetryDelayTimes.ArrayNum,0,&local_1d8.RetryDelayTimes.AllocatorInstance
               ,local_1d8.RetryDelayTimes.ArrayNum,&local_1d8.RetryDelayTimes.ArrayMax);
    memcpy(local_1d8.RetryDelayTimes.AllocatorInstance.Data,pFVar7,lVar21 << 2);
  }
  local_1d8.HealthPercentages.ArrayNum = (this->CloudSourceConfig).HealthPercentages.ArrayNum;
  lVar21 = (longlong)local_1d8.HealthPercentages.ArrayNum;
  pFVar7 = (this->CloudSourceConfig).HealthPercentages.AllocatorInstance.Data;
  local_1d8.HealthPercentages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1d8.HealthPercentages.ArrayNum == 0) {
    local_1d8.HealthPercentages.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_1d8.HealthPercentages.ArrayNum,0,
               &local_1d8.HealthPercentages.AllocatorInstance,local_1d8.HealthPercentages.ArrayNum,
               &local_1d8.HealthPercentages.ArrayMax);
    memcpy(local_1d8.HealthPercentages.AllocatorInstance.Data,pFVar7,lVar21 << 2);
  }
  local_1d8.bBeginDownloadsOnFirstGet = (this->CloudSourceConfig).bBeginDownloadsOnFirstGet;
  local_1d8.DisconnectedDelay = (this->CloudSourceConfig).DisconnectedDelay;
  local_1d8.SharedContext = (this->CloudSourceConfig).SharedContext;
  local_1d8.bRunOwnThread = (this->CloudSourceConfig).bRunOwnThread;
  local_1d8.TcpZeroWindowMinimumSeconds = (this->CloudSourceConfig).TcpZeroWindowMinimumSeconds;
  pIVar13 = BuildPatchServices::FCloudChunkSourceFactory::Create
                      (&local_1d8,local_138,local_140,local_148,param_1,local_150,local_158,
                       local_160,local_168,local_170,local_178,pTVar18);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Create_FCloudChunkSourceFactory_DeltaFactories__UEAAPEAVICloudChunkSource_BuildPatchServices__PEAVIChunkReferenceTracker_6__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`DeltaFactories::FCloudChunkSourceFactory::Create'::__l2::<lambda_1>,void,FGuid_const_&>
             ::Call;
  plVar8 = *(longlong **)(pFVar3 + lVar14 * 0x18 + -0x10);
  local_e8.HeapAllocation = (void *)0x0;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`DeltaFactories::FCloudChunkSourceFactory::Create'::__l2::<lambda_1>,void,FGuid_const_&>
                ::Call;
  pcVar9 = *(code **)(*plVar8 + 0x28);
  local_60 = pIVar13;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`DeltaFactories::FCloudChunkSourceFactory::Create'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_68,&local_e8);
  (*pcVar9)(plVar8,local_f8);
  if (local_78 != (code *)0x0) {
    pppuVar19 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar19 = local_50;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  return pIVar13;
}

// Create @ 1432c8620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

ICloudChunkSource * __cdecl
BuildPatchServices::FCloudChunkSourceFactory::Create
          (FCloudSourceConfig *param_1,IPlatform *param_2,IChunkStore *param_3,
          IDownloadService *param_4,IChunkReferenceTracker *param_5,IChunkDataSerialization *param_6
          ,IMessagePump *param_7,IInstallerError *param_8,IDownloadConnectionCount *param_9,
          ICloudChunkSourceStat *param_10,IBuildManifestSet *param_11,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_12)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  ICloudChunkSource *pIVar5;
  FCloudChunkSource *this;
  FCloudChunkSource *pFVar6;
  FCloudSourceConfig local_e0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_80;
  
  if (5 < (byte)LogCloudChunkSource._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
  }
  if ((param_2 == (IPlatform *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Platform != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x33d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_3 == (IChunkStore *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkStore != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x33e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_4 == (IDownloadService *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownloadService != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x33f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_5 == (IChunkReferenceTracker *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkReferenceTracker != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x340,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_6 == (IChunkDataSerialization *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkDataSerialization != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x341,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_7 == (IMessagePump *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MessagePump != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x342,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_8 == (IInstallerError *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstallerError != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x343,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_9 == (IDownloadConnectionCount *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionCount != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x344,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  if ((param_10 == (ICloudChunkSourceStat *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CloudChunkSourceStat != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                         ,0x345,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar5 = (ICloudChunkSource *)(*pcVar3)();
    return pIVar5;
  }
  this = ::operator_new(0x280);
  pFVar6 = (FCloudChunkSource *)0x0;
  if (this != (FCloudChunkSource *)0x0) {
    local_80.Elements._0_8_ = 0;
    local_80.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_80.Elements._48_8_ = _UNK_150631d98;
    local_80.Elements._8_8_ = 0;
    local_80.Elements._32_8_ = 0;
    local_80.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_80.HashSize = 0;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
    Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&local_80,param_12);
    local_e0.CloudRoots.AllocatorInstance.Data = (param_1->CloudRoots).AllocatorInstance.Data;
    (param_1->CloudRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.CloudRoots.ArrayNum = (param_1->CloudRoots).ArrayNum;
    local_e0.CloudRoots.ArrayMax = (param_1->CloudRoots).ArrayMax;
    (param_1->CloudRoots).ArrayNum = 0;
    (param_1->CloudRoots).ArrayMax = 0;
    local_e0.MaxRetryCount = param_1->MaxRetryCount;
    local_e0.PreFetchMinimum = param_1->PreFetchMinimum;
    local_e0.PreFetchMaximum = param_1->PreFetchMaximum;
    local_e0.RetryDelayTimes.AllocatorInstance.Data =
         (param_1->RetryDelayTimes).AllocatorInstance.Data;
    (param_1->RetryDelayTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.RetryDelayTimes.ArrayNum = (param_1->RetryDelayTimes).ArrayNum;
    local_e0.RetryDelayTimes.ArrayMax = (param_1->RetryDelayTimes).ArrayMax;
    (param_1->RetryDelayTimes).ArrayNum = 0;
    (param_1->RetryDelayTimes).ArrayMax = 0;
    local_e0.HealthPercentages.AllocatorInstance.Data =
         (param_1->HealthPercentages).AllocatorInstance.Data;
    (param_1->HealthPercentages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.HealthPercentages.ArrayNum = (param_1->HealthPercentages).ArrayNum;
    local_e0.HealthPercentages.ArrayMax = (param_1->HealthPercentages).ArrayMax;
    (param_1->HealthPercentages).ArrayNum = 0;
    (param_1->HealthPercentages).ArrayMax = 0;
    local_e0.bBeginDownloadsOnFirstGet = param_1->bBeginDownloadsOnFirstGet;
    local_e0.DisconnectedDelay = param_1->DisconnectedDelay;
    local_e0.SharedContext = param_1->SharedContext;
    local_e0.bRunOwnThread = param_1->bRunOwnThread;
    local_e0.TcpZeroWindowMinimumSeconds = param_1->TcpZeroWindowMinimumSeconds;
    pFVar6 = FCloudChunkSource::FCloudChunkSource
                       (this,&local_e0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10,param_11,&local_80);
  }
  pFVar1 = (param_1->HealthPercentages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->RetryDelayTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(param_1->CloudRoots).AllocatorInstance.Data,(param_1->CloudRoots).ArrayNum)
  ;
  pFVar1 = (param_1->CloudRoots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  param_12->HashSize = 0;
  FVar2 = (param_12->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_12->Elements);
  return (ICloudChunkSource *)pFVar6;
}

