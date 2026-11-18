// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1472749b0

UScriptStruct * __cdecl FWorldContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldContext,(UObject *)pUVar1,L"WorldContext");
  }
  return Z_Registration_Info_UScriptStruct_FWorldContext.OuterSingleton;
}

// FWorldContext @ 147276540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldContext * __thiscall FWorldContext::FWorldContext(FWorldContext *this)

{
  (this->WorldType).Value = '\0';
  (this->SeamlessTravelHandler).PendingTravelURL.Protocol.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SeamlessTravelHandler).PendingTravelURL.Protocol.Data.ArrayNum = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Protocol.Data.ArrayMax = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Host.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SeamlessTravelHandler).PendingTravelURL.Host.Data.ArrayNum = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Host.Data.ArrayMax = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Map.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SeamlessTravelHandler).PendingTravelURL.Map.Data.ArrayNum = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Map.Data.ArrayMax = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.RedirectURL.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SeamlessTravelHandler).PendingTravelURL.RedirectURL.Data.ArrayNum = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.RedirectURL.Data.ArrayMax = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Op.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SeamlessTravelHandler).PendingTravelURL.Op.ArrayNum = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Op.ArrayMax = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Portal.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SeamlessTravelHandler).PendingTravelURL.Portal.Data.ArrayNum = 0;
  (this->SeamlessTravelHandler).PendingTravelURL.Portal.Data.ArrayMax = 0;
  (this->SeamlessTravelHandler).LoadedPackage = (UObject *)0x0;
  (this->SeamlessTravelHandler).CurrentWorld = (UWorld *)0x0;
  (this->SeamlessTravelHandler).LoadedWorld = (UWorld *)0x0;
  (this->SeamlessTravelHandler).bTransitionInProgress = false;
  (this->SeamlessTravelHandler).bSwitchedToDefaultMap = false;
  (this->SeamlessTravelHandler).bPauseAtMidpoint = false;
  (this->SeamlessTravelHandler).bNeedCancelCleanUp = false;
  (this->SeamlessTravelHandler).WorldContextHandle.ComparisonIndex = 0;
  (this->SeamlessTravelHandler).WorldContextHandle.Number = 0;
  (this->SeamlessTravelHandler).SeamlessTravelStartTime = 0.0;
  (this->ContextHandle).ComparisonIndex = 0;
  (this->ContextHandle).Number = 0;
  (this->TravelURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TravelURL).Data.ArrayNum = 0;
  (this->TravelURL).Data.ArrayMax = 0;
  this->TravelType = '\0';
  FURL::FURL(&this->LastURL,(wchar_t *)0x0);
  FURL::FURL(&this->LastRemoteURL,(wchar_t *)0x0);
  this->bShouldCommitPendingMapChange = 0;
  (this->PendingNetGame).field0_0x0.DebugPtr = (UPendingNetGame *)0x0;
  (this->PackagesToFullyLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackagesToFullyLoad).ArrayNum = 0;
  (this->PackagesToFullyLoad).ArrayMax = 0;
  (this->LevelsToLoadForPendingMapChange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelsToLoadForPendingMapChange).ArrayNum = 0;
  (this->LevelsToLoadForPendingMapChange).ArrayMax = 0;
  (this->LoadedLevelsForPendingMapChange).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedLevelsForPendingMapChange).ArrayNum = 0;
  (this->LoadedLevelsForPendingMapChange).ArrayMax = 0;
  (this->PendingMapChangeFailureDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingMapChangeFailureDescription).Data.ArrayNum = 0;
  (this->PendingMapChangeFailureDescription).Data.ArrayMax = 0;
  (this->ObjectReferencers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferencers).ArrayNum = 0;
  (this->ObjectReferencers).ArrayMax = 0;
  (this->PendingLevelStreamingStatusUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PendingLevelStreamingStatusUpdates).ArrayNum = 0;
  (this->PendingLevelStreamingStatusUpdates).ArrayMax = 0;
  (this->GameViewport).field0_0x0.DebugPtr = (UGameViewportClient *)0x0;
  (this->OwningGameInstance).field0_0x0.DebugPtr = (UGameInstance *)0x0;
  (this->ActiveNetDrivers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveNetDrivers).ArrayNum = 0;
  (this->ActiveNetDrivers).ArrayMax = 0;
  this->PIEInstance = -1;
  (this->PIEPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PIEPrefix).Data.ArrayNum = 0;
  (this->PIEPrefix).Data.ArrayMax = 0;
  this->PIEWorldFeatureLevel = Num;
  this->RunAsDedicated = false;
  this->bWaitingOnOnlineSubsystem = false;
  this->bIsPrimaryPIEInstance = false;
  this->AudioDeviceID = 0xffffffff;
  (this->CustomDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDescription).Data.ArrayNum = 0;
  (this->CustomDescription).Data.ArrayMax = 0;
  this->PIEFixedTickSeconds = 0.0;
  this->PIEAccumulatedTickSeconds = 0.0;
  *(undefined8 *)&(this->GarbageObjectsToVerify).Elements = 0;
  *(undefined8 *)&(this->GarbageObjectsToVerify).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GarbageObjectsToVerify).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GarbageObjectsToVerify).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GarbageObjectsToVerify).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GarbageObjectsToVerify).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GarbageObjectsToVerify).Elements.field_0x34 = 0;
  (this->GarbageObjectsToVerify).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GarbageObjectsToVerify).HashSize = 0;
  (this->ExternalReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalReferences).ArrayNum = 0;
  (this->ExternalReferences).ArrayMax = 0;
  (this->ThisCurrentWorld).field0_0x0.DebugPtr = (UWorld *)0x0;
  return this;
}

// ~FWorldContext @ 147277890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FWorldContext::~FWorldContext(FWorldContext *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->ExternalReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->GarbageObjectsToVerify).HashSize = 0;
  FVar2 = (this->GarbageObjectsToVerify).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GarbageObjectsToVerify).Elements);
  pFVar1 = (this->CustomDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PIEPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveNetDrivers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingLevelStreamingStatusUpdates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectReferencers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingMapChangeFailureDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedLevelsForPendingMapChange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelsToLoadForPendingMapChange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFullyLoadedPackagesInfo,int>
            ((FFullyLoadedPackagesInfo *)(this->PackagesToFullyLoad).AllocatorInstance.Data,
             (this->PackagesToFullyLoad).ArrayNum);
  pFVar1 = (this->PackagesToFullyLoad).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FURL::~FURL(&this->LastRemoteURL);
  FURL::~FURL(&this->LastURL);
  pFVar1 = (this->TravelURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FURL::~FURL(&(this->SeamlessTravelHandler).PendingTravelURL);
  return;
}

// operator= @ 1472786a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldContext * __thiscall FWorldContext::operator=(FWorldContext *this,FWorldContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *this_00;
  TArray<FFullyLoadedPackagesInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<ULevel>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TObjectPtr<UObjectReferencer>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FLevelStreamingStatus,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FNamedNetDriver,TSizedDefaultAllocator<32>_> *pTVar7;
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *this_01;
  TArray<TObjectPtr<UWorld>_*,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  uint uVar10;
  UPendingNetGame *pUVar11;
  FFullyLoadedPackagesInfo *pFVar12;
  FScriptContainerElement *pFVar13;
  UGameViewportClient *pUVar14;
  UGameInstance *pUVar15;
  FNamedNetDriver *pFVar16;
  UWorld *pUVar17;
  ForElementType<FSetElementId> _Dst;
  ForElementType<FSetElementId> _Src;
  uint uVar18;
  
  (this->WorldType).Value = (param_1->WorldType).Value;
  FURL::operator=(&(this->SeamlessTravelHandler).PendingTravelURL,
                  &(param_1->SeamlessTravelHandler).PendingTravelURL);
  (this->SeamlessTravelHandler).LoadedPackage = (param_1->SeamlessTravelHandler).LoadedPackage;
  (this->SeamlessTravelHandler).CurrentWorld = (param_1->SeamlessTravelHandler).CurrentWorld;
  (this->SeamlessTravelHandler).LoadedWorld = (param_1->SeamlessTravelHandler).LoadedWorld;
  (this->SeamlessTravelHandler).bTransitionInProgress =
       (param_1->SeamlessTravelHandler).bTransitionInProgress;
  (this->SeamlessTravelHandler).bSwitchedToDefaultMap =
       (param_1->SeamlessTravelHandler).bSwitchedToDefaultMap;
  (this->SeamlessTravelHandler).bPauseAtMidpoint = (param_1->SeamlessTravelHandler).bPauseAtMidpoint
  ;
  (this->SeamlessTravelHandler).bNeedCancelCleanUp =
       (param_1->SeamlessTravelHandler).bNeedCancelCleanUp;
  (this->SeamlessTravelHandler).WorldContextHandle =
       (param_1->SeamlessTravelHandler).WorldContextHandle;
  (this->SeamlessTravelHandler).SeamlessTravelStartTime =
       (param_1->SeamlessTravelHandler).SeamlessTravelStartTime;
  this->ContextHandle = param_1->ContextHandle;
  ::FString::operator=(&this->TravelURL,&param_1->TravelURL);
  this->TravelType = param_1->TravelType;
  FURL::operator=(&this->LastURL,&param_1->LastURL);
  FURL::operator=(&this->LastRemoteURL,&param_1->LastRemoteURL);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (param_1->PendingNetGame).field0_0x0.DebugPtr, pUVar11 != (UPendingNetGame *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pTVar3 = &this->PackagesToFullyLoad;
  (this->PendingNetGame).field0_0x0 = (param_1->PendingNetGame).field0_0x0;
  if (pTVar3 != &param_1->PackagesToFullyLoad) {
    DestructItems<FFullyLoadedPackagesInfo,int>
              ((FFullyLoadedPackagesInfo *)(pTVar3->AllocatorInstance).Data,
               (this->PackagesToFullyLoad).ArrayNum);
    iVar9 = (param_1->PackagesToFullyLoad).ArrayNum;
    piVar1 = &(this->PackagesToFullyLoad).ArrayMax;
    pFVar12 = (FFullyLoadedPackagesInfo *)(param_1->PackagesToFullyLoad).AllocatorInstance.Data;
    (this->PackagesToFullyLoad).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar9,*piVar1,&pTVar3->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FFullyLoadedPackagesInfo,FFullyLoadedPackagesInfo,int>
                ((pTVar3->AllocatorInstance).Data,pFVar12,iVar9);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->LevelsToLoadForPendingMapChange,&param_1->LevelsToLoadForPendingMapChange);
  pTVar4 = &this->LoadedLevelsForPendingMapChange;
  if (pTVar4 != &param_1->LoadedLevelsForPendingMapChange) {
    iVar9 = (param_1->LoadedLevelsForPendingMapChange).ArrayNum;
    piVar1 = &(this->LoadedLevelsForPendingMapChange).ArrayMax;
    pFVar13 = (param_1->LoadedLevelsForPendingMapChange).AllocatorInstance.Data;
    (this->LoadedLevelsForPendingMapChange).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar9,*piVar1,&pTVar4->AllocatorInstance,iVar9,piVar1);
      ConstructItems<TObjectPtr<ULevel>,TObjectPtr<ULevel>,int>
                ((pTVar4->AllocatorInstance).Data,(TObjectPtr<ULevel> *)pFVar13,iVar9);
    }
  }
  ::FString::operator=
            (&this->PendingMapChangeFailureDescription,&param_1->PendingMapChangeFailureDescription)
  ;
  pTVar5 = &this->ObjectReferencers;
  *(uint *)&this->field_0x1d8 =
       (ZPULL(*(undefined4 *)&this->field_0x1d8,0,1) ^ param_1->bShouldCommitPendingMapChange) & 1 ^
       *(undefined4 *)&this->field_0x1d8;
  if (pTVar5 != &param_1->ObjectReferencers) {
    iVar9 = (param_1->ObjectReferencers).ArrayNum;
    piVar1 = &(this->ObjectReferencers).ArrayMax;
    pFVar13 = (param_1->ObjectReferencers).AllocatorInstance.Data;
    (this->ObjectReferencers).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar9,*piVar1,&pTVar5->AllocatorInstance,iVar9,piVar1);
      ConstructItems<TObjectPtr<UObjectReferencer>,TObjectPtr<UObjectReferencer>,int>
                ((pTVar5->AllocatorInstance).Data,(TObjectPtr<UObjectReferencer> *)pFVar13,iVar9);
    }
  }
  pTVar6 = &this->PendingLevelStreamingStatusUpdates;
  if (pTVar6 != &param_1->PendingLevelStreamingStatusUpdates) {
    iVar9 = (param_1->PendingLevelStreamingStatusUpdates).ArrayNum;
    piVar1 = &(this->PendingLevelStreamingStatusUpdates).ArrayMax;
    pFVar13 = (param_1->PendingLevelStreamingStatusUpdates).AllocatorInstance.Data;
    (this->PendingLevelStreamingStatusUpdates).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar9,*piVar1,&pTVar6->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar13,(longlong)iVar9 << 4);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 = (param_1->GameViewport).field0_0x0.DebugPtr, pUVar14 != (UGameViewportClient *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->GameViewport).field0_0x0 = (param_1->GameViewport).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 = (param_1->OwningGameInstance).field0_0x0.DebugPtr, pUVar15 != (UGameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pTVar7 = &this->ActiveNetDrivers;
  (this->OwningGameInstance).field0_0x0 = (param_1->OwningGameInstance).field0_0x0;
  if (pTVar7 != &param_1->ActiveNetDrivers) {
    iVar9 = (param_1->ActiveNetDrivers).ArrayNum;
    piVar1 = &(this->ActiveNetDrivers).ArrayMax;
    pFVar16 = (FNamedNetDriver *)(param_1->ActiveNetDrivers).AllocatorInstance.Data;
    (this->ActiveNetDrivers).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,*piVar1,&pTVar7->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FNamedNetDriver,FNamedNetDriver,int>
                ((pTVar7->AllocatorInstance).Data,pFVar16,iVar9);
    }
  }
  this->PIEInstance = param_1->PIEInstance;
  ::FString::operator=(&this->PIEPrefix,&param_1->PIEPrefix);
  this->PIEWorldFeatureLevel = param_1->PIEWorldFeatureLevel;
  this->RunAsDedicated = param_1->RunAsDedicated;
  this->bWaitingOnOnlineSubsystem = param_1->bWaitingOnOnlineSubsystem;
  this->bIsPrimaryPIEInstance = param_1->bIsPrimaryPIEInstance;
  this->AudioDeviceID = param_1->AudioDeviceID;
  ::FString::operator=(&this->CustomDescription,&param_1->CustomDescription);
  this_01 = &this->GarbageObjectsToVerify;
  this->PIEFixedTickSeconds = param_1->PIEFixedTickSeconds;
  this->PIEAccumulatedTickSeconds = param_1->PIEAccumulatedTickSeconds;
  if (this_01 == &param_1->GarbageObjectsToVerify) goto LAB_147278bbc;
  uVar10 = (param_1->GarbageObjectsToVerify).HashSize;
  uVar18 = uVar10;
  if (uVar10 < 2) {
    if ((this->GarbageObjectsToVerify).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar18 = 0;
      goto LAB_147278b11;
    }
  }
  else {
LAB_147278b11:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->GarbageObjectsToVerify).Hash.SecondaryData,0,uVar18,4);
  }
  _Src = (param_1->GarbageObjectsToVerify).Hash.SecondaryData;
  _Dst = (this->GarbageObjectsToVerify).Hash.SecondaryData;
  if (uVar10 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&(param_1->GarbageObjectsToVerify).Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&(this->GarbageObjectsToVerify).Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar10 << 2);
  }
  (this->GarbageObjectsToVerify).HashSize = uVar10;
  iVar9 = *(int *)&(param_1->GarbageObjectsToVerify).Elements.field_0x8;
  TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this_01->Elements,iVar9);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar9,(ForAnyElementType *)this_01,
             (int *)&(this->GarbageObjectsToVerify).Elements.field_0x8,
             (int *)&(this->GarbageObjectsToVerify).Elements.field_0xc);
  puVar2 = &(param_1->GarbageObjectsToVerify).Elements.field_0x10;
  this_00 = &(this->GarbageObjectsToVerify).Elements.field_0x10;
  *(undefined4 *)&(this->GarbageObjectsToVerify).Elements.field_0x30 =
       *(undefined4 *)&(param_1->GarbageObjectsToVerify).Elements.field_0x30;
  *(undefined4 *)&(this->GarbageObjectsToVerify).Elements.field_0x34 =
       *(undefined4 *)&(param_1->GarbageObjectsToVerify).Elements.field_0x34;
  if (this_00 != puVar2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
  }
  if (iVar9 != 0) {
    memcpy(*(void **)&this_01->Elements,*(void **)&(param_1->GarbageObjectsToVerify).Elements,
           (longlong)iVar9 << 4);
  }
LAB_147278bbc:
  pTVar8 = &this->ExternalReferences;
  if (pTVar8 != &param_1->ExternalReferences) {
    iVar9 = (param_1->ExternalReferences).ArrayNum;
    piVar1 = &(this->ExternalReferences).ArrayMax;
    pFVar13 = (param_1->ExternalReferences).AllocatorInstance.Data;
    (this->ExternalReferences).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar9,*piVar1,&pTVar8->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar13,(longlong)iVar9 << 3);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 = (param_1->ThisCurrentWorld).field0_0x0.DebugPtr, pUVar17 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->ThisCurrentWorld).field0_0x0 = (param_1->ThisCurrentWorld).field0_0x0;
  return this;
}

// AddReferencedObjects @ 148b25320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldContext::AddReferencedObjects
          (FWorldContext *this,FReferenceCollector *param_1,UObject *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PendingNetGame,param_2,0);
  iVar1 = (this->PackagesToFullyLoad).ArrayNum;
  pFVar2 = (this->PackagesToFullyLoad).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->PackagesToFullyLoad).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFullyLoadedPackagesInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,*(undefined8 *)(pFVar2 + 0x28),*(undefined4 *)(pFVar2 + 0x30));
    pFVar2 = pFVar2 + 0x38;
  }
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->LoadedLevelsForPendingMapChange).AllocatorInstance.Data,
             (this->LoadedLevelsForPendingMapChange).ArrayNum,param_2,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ObjectReferencers).AllocatorInstance.Data,
             (this->ObjectReferencers).ArrayNum,param_2,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->GameViewport,param_2,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->OwningGameInstance,param_2,0);
  iVar1 = (this->ActiveNetDrivers).ArrayNum;
  pFVar2 = (this->ActiveNetDrivers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveNetDrivers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x000148b25480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ThisCurrentWorld,param_2,0);
  return;
}

// SetCurrentWorld @ 148b75810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FWorldContext::SetCurrentWorld(FWorldContext *this,UWorld *param_1)

{
  undefined8 *puVar1;
  UWorld *pUVar2;
  UGameInstance *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FAudioDeviceManager *this_00;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((param_1 != (UWorld *)0x0) && (this->AudioDeviceID != 0xffffffff)) &&
     (this_00 = FAudioDeviceManager::Get(), this_00 != (FAudioDeviceManager *)0x0)) {
    FAudioDeviceManager::SetAudioDevice(this_00,param_1,this->AudioDeviceID);
  }
  uVar8 = 0;
  if (0 < (this->ExternalReferences).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->ExternalReferences).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->ExternalReferences).AllocatorInstance.Data + lVar9) != 0) {
        uVar6 = 0;
        if ((int)uVar8 < (this->ExternalReferences).ArrayNum) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((UWorld *)**(longlong **)((this->ExternalReferences).AllocatorInstance.Data + lVar9) ==
            (this->ThisCurrentWorld).field0_0x0.DebugPtr) {
          uVar6 = 0;
          if ((int)uVar8 < (this->ExternalReferences).ArrayNum) {
            uVar6 = uVar7;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar1 = *(undefined8 **)((this->ExternalReferences).AllocatorInstance.Data + lVar9);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          *puVar1 = param_1;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->ExternalReferences).ArrayNum);
  }
  pUVar2 = (this->ThisCurrentWorld).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ThisCurrentWorld).field0_0x0.DebugPtr = param_1;
  pUVar3 = (this->OwningGameInstance).field0_0x0.DebugPtr;
  if (pUVar3 != (UGameInstance *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2f0))(pUVar3,pUVar2,param_1);
  }
  return;
}

