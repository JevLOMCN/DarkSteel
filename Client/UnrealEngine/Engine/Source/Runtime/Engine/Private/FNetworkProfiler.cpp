// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// FNetworkProfiler @ 148014720

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

FNetworkProfiler * __thiscall FNetworkProfiler::FNetworkProfiler(FNetworkProfiler *this)

{
  this->FileWriter = (FArchive *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  *(undefined8 *)&this->NameToNameTableIndexMap = 0;
  *(undefined8 *)&(this->NameToNameTableIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameToNameTableIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameToNameTableIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameToNameTableIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToNameTableIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToNameTableIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameToNameTableIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameToNameTableIndexMap).field_0x48 = 0;
  (this->NameArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameArray).ArrayNum = 0;
  (this->NameArray).ArrayMax = 0;
  *(undefined8 *)&this->AddressTableIndexMap = 0;
  *(undefined8 *)&(this->AddressTableIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->AddressTableIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->AddressTableIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->AddressTableIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddressTableIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddressTableIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->AddressTableIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->AddressTableIndexMap).field_0x48 = 0;
  (this->CurrentHeader).Magic = 0x1dbf348c;
  (this->CurrentHeader).Version = Latest;
  (this->CurrentHeader).Tag.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHeader).Tag.Data.ArrayNum = 0;
  (this->CurrentHeader).Tag.Data.ArrayMax = 0;
  (this->CurrentHeader).GameName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHeader).GameName.Data.ArrayNum = 0;
  (this->CurrentHeader).GameName.Data.ArrayMax = 0;
  (this->CurrentHeader).URL.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentHeader).URL.Data.ArrayNum = 0;
  (this->CurrentHeader).URL.Data.ArrayMax = 0;
  (this->LastAddress).Object = (FInternetAddr *)0x0;
  (this->LastAddress).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnNetworkProfileStartedDelegate = 0;
  *(undefined8 *)&(this->OnNetworkProfileStartedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNetworkProfileStartedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNetworkProfileStartedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnNetworkProfileFinishedDelegate = 0;
  *(undefined8 *)&(this->OnNetworkProfileFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNetworkProfileFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNetworkProfileFinishedDelegate).field_0x18 = 2;
  (this->AutoStopTimerHandle).Handle = 0;
  *(undefined8 *)&this->OutgoingBunches = 0;
  *(undefined8 *)&(this->OutgoingBunches).field_0x8 = 0;
  *(undefined8 *)&(this->OutgoingBunches).field_0x20 = 0;
  this->bHasNoticeableNetworkTrafficOccured = false;
  this->bIsTrackingEnabled = false;
  this->bShouldTrackingBeEnabled = false;
  *(undefined4 *)&(this->OutgoingBunches).field_0x28 = 0;
  *(undefined4 *)&(this->OutgoingBunches).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutgoingBunches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutgoingBunches).field_0x34 = 0;
  *(undefined8 *)&(this->OutgoingBunches).field_0x40 = 0;
  *(undefined4 *)&(this->OutgoingBunches).field_0x48 = 0;
  (this->QueuedRPCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedRPCs).ArrayNum = 0;
  (this->QueuedRPCs).ArrayMax = 0;
  this->IgnorePropertyCount = 0;
  *(undefined8 *)&(this->ExportedObjects).Elements = 0;
  *(undefined8 *)&(this->ExportedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExportedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExportedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExportedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportedObjects).Elements.field_0x34 = 0;
  (this->ExportedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExportedObjects).HashSize = 0;
  (this->NextFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextFileName).Data.ArrayNum = 0;
  (this->NextFileName).Data.ArrayMax = 0;
  return this;
}

// ~FNetworkProfiler @ 148017e50

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall FNetworkProfiler::~FNetworkProfiler(FNetworkProfiler *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->NextFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ExportedObjects).HashSize = 0;
  FVar2 = (this->ExportedObjects).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExportedObjects).Elements);
  pFVar1 = (this->QueuedRPCs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->OutgoingBunches).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OutgoingBunches).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutgoingBunches);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNetworkProfileFinishedDelegate).field_0x8,
             *(int *)&(this->OnNetworkProfileFinishedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnNetworkProfileFinishedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNetworkProfileFinishedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNetworkProfileStartedDelegate).field_0x8,
             *(int *)&(this->OnNetworkProfileStartedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnNetworkProfileStartedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNetworkProfileStartedDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastAddress).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CurrentHeader).URL.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentHeader).GameName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentHeader).Tag.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AddressTableIndexMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AddressTableIndexMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AddressTableIndexMap);
  DestructItems<FString,int>
            ((FString *)(this->NameArray).AllocatorInstance.Data,(this->NameArray).ArrayNum);
  pFVar1 = (this->NameArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NameToNameTableIndexMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameToNameTableIndexMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToNameTableIndexMap);
                    /* WARNING: Could not recover jumptable at 0x000148017fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// AutoStopTracking @ 148022940

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall FNetworkProfiler::AutoStopTracking(FNetworkProfiler *this)

{
  FURL *pFVar1;
  FURL local_78;
  
  if (this->bIsTrackingEnabled != false) {
    this->bShouldTrackingBeEnabled = false;
    pFVar1 = FURL::FURL(&local_78,(wchar_t *)0x0);
    TrackSessionChange(this,false,pFVar1);
    if (local_78.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_78.Op.AllocatorInstance.Data,local_78.Op.ArrayNum);
    if (local_78.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Op.AllocatorInstance.Data);
    }
    if (local_78.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_78.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Map.Data.AllocatorInstance.Data);
    }
    if (local_78.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Host.Data.AllocatorInstance.Data);
    }
    if (local_78.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Protocol.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableTracking @ 14802e250

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkProfiler::EnableTracking(FNetworkProfiler *this,bool param_1)

{
  FURL *pFVar1;
  FURL local_78;
  
  this->bShouldTrackingBeEnabled = param_1;
  if ((param_1) && (4 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  if ((this->bIsTrackingEnabled != false) && (!param_1)) {
    pFVar1 = FURL::FURL(&local_78,(wchar_t *)0x0);
    TrackSessionChange(this,false,pFVar1);
    if (local_78.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_78.Op.AllocatorInstance.Data,local_78.Op.ArrayNum);
    if (local_78.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Op.AllocatorInstance.Data);
    }
    if (local_78.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_78.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Map.Data.AllocatorInstance.Data);
    }
    if (local_78.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Host.Data.AllocatorInstance.Data);
    }
    if (local_78.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Protocol.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Exec @ 14802e720

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNetworkProfiler::Exec
          (FNetworkProfiler *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  bool bVar4;
  FTimerManager *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  FURL *pFVar7;
  float local_res8 [2];
  wchar_t *local_res18 [2];
  FDelegateAllocation local_118;
  FURL local_108;
  FURL local_a0;
  
  local_res18[0] = param_2;
  bVar4 = FParse::Command(local_res18,L"ENABLE",true);
  if (bVar4) {
    this->bShouldTrackingBeEnabled = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    goto LAB_14802e8f5;
  }
  bVar4 = FParse::Command(local_res18,L"DISABLE",true);
  if (bVar4) {
    bVar4 = false;
  }
  else {
    bVar4 = FParse::Command(local_res18,L"AUTOSTOP",true);
    if (bVar4) {
      this->bShouldTrackingBeEnabled = true;
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      local_res8[0] = 30.0;
      FParse::Value(local_res18[0],L"TIME=",local_res8);
      if (param_1 != (UWorld *)0x0) {
        this_00 = UWorld::GetTimerManager(param_1);
        fVar3 = local_res8[0];
        local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_118.DelegateSize = 0;
        puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_118);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &
                    ___7__TBaseRawMethodDelegateInstance__0A_VFNetworkProfiler____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
          ;
          puVar5[4] = AutoStopTracking;
          puVar5[3] = this;
        }
        FTimerManager::SetTimer
                  (this_00,&this->AutoStopTimerHandle,
                   (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                   &local_118,fVar3,false,__real_bf800000);
        if (local_118.DelegateSize != 0) {
          if (local_118.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
          goto LAB_14802e8f5;
          (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_118,0,0,0x10);
          local_118.DelegateSize = 0;
        }
        if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_118.DelegateAllocator);
        }
      }
      goto LAB_14802e8f5;
    }
    bVar4 = this->bIsTrackingEnabled == false;
  }
  EnableTracking(this,bVar4);
LAB_14802e8f5:
  if ((this->bShouldTrackingBeEnabled != false) && (this->FileWriter == (FArchive *)0x0)) {
    if (param_1 == (UWorld *)0x0) {
      pFVar7 = FURL::FURL(&local_a0,(wchar_t *)0x0);
      TrackSessionChange(this,true,pFVar7);
      if (local_a0.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_a0.Op.AllocatorInstance.Data,local_a0.Op.ArrayNum)
      ;
      if (local_a0.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Op.AllocatorInstance.Data);
      }
      if (local_a0.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_a0.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Map.Data.AllocatorInstance.Data);
      }
      local_108.Protocol.Data.AllocatorInstance.Data = local_a0.Protocol.Data.AllocatorInstance.Data
      ;
      if (local_a0.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Host.Data.AllocatorInstance.Data);
        local_108.Protocol.Data.AllocatorInstance.Data =
             local_a0.Protocol.Data.AllocatorInstance.Data;
      }
    }
    else {
      ::FString::FString(&local_108.Protocol,&(param_1->URL).Protocol);
      ::FString::FString(&local_108.Host,&(param_1->URL).Host);
      local_108.Port = (param_1->URL).Port;
      local_108.Valid = (param_1->URL).Valid;
      ::FString::FString(&local_108.Map,&(param_1->URL).Map);
      ::FString::FString(&local_108.RedirectURL,&(param_1->URL).RedirectURL);
      iVar1 = (param_1->URL).Op.ArrayNum;
      pFVar2 = (param_1->URL).Op.AllocatorInstance.Data;
      local_108.Op.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Op.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_108.Op.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,&local_108.Op.AllocatorInstance,iVar1,&local_108.Op.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_108.Op.AllocatorInstance.Data,(FString *)pFVar2,iVar1);
      }
      ::FString::FString(&local_108.Portal,&(param_1->URL).Portal);
      TrackSessionChange(this,true,&local_108);
      if (local_108.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_108.Op.AllocatorInstance.Data,local_108.Op.ArrayNum);
      if (local_108.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Op.AllocatorInstance.Data);
      }
      if (local_108.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_108.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Map.Data.AllocatorInstance.Data);
      }
      if (local_108.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Host.Data.AllocatorInstance.Data);
      }
    }
    if (local_108.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Protocol.Data.AllocatorInstance.Data);
    }
    if (this->FileWriter == (FArchive *)0x0) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      this->bShouldTrackingBeEnabled = false;
      if (this->bIsTrackingEnabled != false) {
        pFVar7 = FURL::FURL(&local_a0,(wchar_t *)0x0);
        TrackSessionChange(this,false,pFVar7);
        if (local_a0.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Portal.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_a0.Op.AllocatorInstance.Data,local_a0.Op.ArrayNum);
        if (local_a0.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Op.AllocatorInstance.Data);
        }
        if (local_a0.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.RedirectURL.Data.AllocatorInstance.Data);
        }
        if (local_a0.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Map.Data.AllocatorInstance.Data);
        }
        if (local_a0.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Host.Data.AllocatorInstance.Data);
        }
        if (local_a0.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Protocol.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return true;
}

// FlushOutgoingBunches @ 148033030

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::FlushOutgoingBunches(FNetworkProfiler *this,UNetConnection *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  TMap<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  FArchive *pFVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  undefined1 *puVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  LPCRITICAL_SECTION local_res20;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
    local_res20 = lpCriticalSection;
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    SetCurrentConnection(this,param_1);
    this_00 = &this->OutgoingBunches;
    uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    if (*(int *)&(this->OutgoingBunches).field_0x8 != *(int *)&(this->OutgoingBunches).field_0x34) {
      puVar13 = *(undefined1 **)&(this->OutgoingBunches).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->OutgoingBunches).field_0x38;
      }
      iVar9 = *(int *)(puVar13 +
                      (ulonglong)
                      (*(int *)&(this->OutgoingBunches).field_0x48 - 1U & (uVar12 >> 0x10 ^ uVar12))
                      * 4);
      if (iVar9 != -1) {
LAB_148033110:
        if (*(UNetConnection **)((longlong)iVar9 * 0x20 + *(longlong *)this_00) != param_1)
        goto code_r0x00014803311c;
        pTVar11 = TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                                 *)this_00,param_1);
        iVar9 = pTVar11->ArrayNum;
        pFVar15 = (pTVar11->AllocatorInstance).Data;
        pFVar14 = pFVar15 + 8;
        pFVar3 = pFVar15 + (longlong)iVar9 * 0xc;
        while( true ) {
          if (pTVar11->ArrayNum != iVar9) {
            `TCheckedPointerIterator<FNetworkProfiler::FSendBunchInfo,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar15 == pFVar3) break;
          pFVar4 = this->FileWriter;
          local_res8[0] = 2;
          puVar13 = (undefined1 *)**(undefined8 **)&pFVar4->field_0x8;
          if ((undefined1 *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar13 + 1) {
            (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res8,1);
          }
          else {
            local_res8[0] = *puVar13;
            **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 1;
          }
          pFVar4 = this->FileWriter;
          puVar5 = (undefined2 *)**(undefined8 **)&pFVar4->field_0x8;
          if ((undefined2 *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar5 + 1) {
            if ((pFVar4->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar15,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar4,(ushort *)pFVar15);
            }
          }
          else {
            *(undefined2 *)pFVar15 = *puVar5;
            **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 2;
          }
          (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,pFVar14 + -4);
          pFVar4 = this->FileWriter;
          puVar5 = (undefined2 *)**(undefined8 **)&pFVar4->field_0x8;
          if ((undefined2 *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar5 + 1) {
            if ((pFVar4->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar14,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar4,(ushort *)pFVar14);
            }
          }
          else {
            *(undefined2 *)pFVar14 = *puVar5;
            **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 2;
          }
          pFVar4 = this->FileWriter;
          pFVar1 = pFVar14 + 2;
          puVar6 = (ushort *)**(undefined8 **)&pFVar4->field_0x8;
          if ((ushort *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar6 + 1) {
            if ((pFVar4->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar1,2);
              pFVar15 = pFVar15 + 0xc;
              pFVar14 = pFVar14 + 0xc;
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar4,(ushort *)pFVar1);
              pFVar15 = pFVar15 + 0xc;
              pFVar14 = pFVar14 + 0xc;
            }
          }
          else {
            pFVar15 = pFVar15 + 0xc;
            *(ushort *)pFVar1 = *puVar6;
            **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 2;
            pFVar14 = pFVar14 + 0xc;
          }
        }
        pTVar11 = TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                                 *)this_00,param_1);
        lpCriticalSection = local_res20;
        iVar9 = pTVar11->ArrayNum;
        piVar2 = &pTVar11->ArrayNum;
        if (iVar9 < 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,-iVar9,&pTVar11->AllocatorInstance,piVar2,&pTVar11->ArrayMax);
          DefaultConstructItems<FNetworkProfiler::FSendBunchInfo,int>
                    ((pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 0xc,-iVar9);
        }
        else if (0 < iVar9) {
          *piVar2 = *piVar2 - iVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&pTVar11->AllocatorInstance,*piVar2,&pTVar11->ArrayMax);
        }
      }
    }
LAB_148033361:
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
code_r0x00014803311c:
  iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)this_00);
  if (iVar9 == -1) goto LAB_148033361;
  goto LAB_148033110;
}

// FlushQueuedRPCs @ 148033390

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::FlushQueuedRPCs(FNetworkProfiler *this,UNetConnection *param_1,UObject *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<FNetworkProfiler::FQueuedRPCInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FArchive *pFVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res20 [8];
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_1);
    uVar12 = (this->QueuedRPCs).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      pTVar2 = &this->QueuedRPCs;
      lVar13 = (longlong)(int)uVar12 * 0x28;
      do {
        uVar11 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(UNetConnection **)((pTVar2->AllocatorInstance).Data + lVar13) == param_1) {
          uVar9 = 0;
          if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(UObject **)((pTVar2->AllocatorInstance).Data + lVar13 + 8) == param_2) {
            pFVar4 = this->FileWriter;
            local_res20[0] = 3;
            puVar5 = (undefined1 *)**(undefined8 **)&pFVar4->field_0x8;
            if ((undefined1 *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar5 + 1) {
              (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res20,1);
            }
            else {
              local_res20[0] = *puVar5;
              **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 1;
            }
            pFVar4 = this->FileWriter;
            pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x1a0);
            uVar9 = 0;
            if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
              uVar9 = uVar11;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(pFVar4,(pTVar2->AllocatorInstance).Data + lVar13 + 0x10);
            pFVar4 = this->FileWriter;
            pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x1a0);
            uVar9 = 0;
            if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
              uVar9 = uVar11;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(pFVar4,(pTVar2->AllocatorInstance).Data + lVar13 + 0x14);
            pFVar4 = this->FileWriter;
            pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x1a0);
            uVar9 = 0;
            if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
              uVar9 = uVar11;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(pFVar4,(pTVar2->AllocatorInstance).Data + lVar13 + 0x18);
            pFVar4 = this->FileWriter;
            pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x1a0);
            uVar9 = 0;
            if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
              uVar9 = uVar11;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(pFVar4,(pTVar2->AllocatorInstance).Data + lVar13 + 0x1c);
            pFVar4 = this->FileWriter;
            pcVar7 = *(code **)(*(longlong *)pFVar4 + 0x1a0);
            uVar9 = 0;
            if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
              uVar9 = uVar11;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (*pcVar7)(pFVar4,(pTVar2->AllocatorInstance).Data + lVar13 + 0x20);
            uVar9 = 0;
            if ((int)uVar12 < (this->QueuedRPCs).ArrayNum) {
              uVar9 = uVar11;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar3 = (this->QueuedRPCs).ArrayNum;
            iVar10 = ~uVar12 + iVar3;
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            if (1 < iVar10) {
              iVar10 = 1;
            }
            if (iVar10 != 0) {
              memmove(pFVar6 + lVar13,pFVar6 + (longlong)(iVar3 - iVar10) * 0x28,
                      (longlong)iVar10 * 0x28);
            }
            piVar1 = &(this->QueuedRPCs).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,&pTVar2->AllocatorInstance,(this->QueuedRPCs).ArrayNum,
                       &(this->QueuedRPCs).ArrayMax);
          }
        }
        lVar13 = lVar13 + -0x28;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// GetAddressTableIndex @ 1480351c0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

int __thiscall FNetworkProfiler::GetAddressTableIndex(FNetworkProfiler *this,FString *param_1)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_res8 [16];
  int local_res18 [4];
  FString *local_28;
  int *local_20;
  
  piVar6 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 *)&this->AddressTableIndexMap,param_1);
  if (piVar6 == (int *)0x0) {
    local_res18[0] =
         *(int *)&(this->AddressTableIndexMap).field_0x8 -
         *(int *)&(this->AddressTableIndexMap).field_0x34;
    local_20 = local_res18;
    local_28 = param_1;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)&this->AddressTableIndexMap,
               (TPairInitializer<FString_const_&,int_const_&> *)(local_res18 + 2),(bool *)&local_28)
    ;
    pFVar1 = this->FileWriter;
    local_res8[0] = 0x12;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    ::FString::SerializeAsANSICharArray(param_1,this->FileWriter,0);
  }
  else {
    local_res18[0] = *piVar6;
  }
  if ((local_res18[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkProfiler.cpp"
                         ,0xcd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return local_res18[0];
}

// GetNameTableIndex @ 148035f90

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

int __thiscall FNetworkProfiler::GetNameTableIndex(FNetworkProfiler *this,FString *param_1)

{
  int *piVar1;
  FArchive *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  FScriptContainerElement *this_00;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  FString *local_48;
  uint *local_40;
  FString local_38;
  
  puVar9 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                   ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&this->NameToNameTableIndexMap,param_1);
  if (puVar9 == (uint *)0x0) {
    piVar1 = &(this->NameArray).ArrayMax;
    uVar6 = (this->NameArray).ArrayNum;
    local_res18[0] = uVar6;
    if (uVar6 == *piVar1) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->NameArray).AllocatorInstance,piVar1);
      (this->NameArray).ArrayNum = uVar6;
    }
    (this->NameArray).ArrayNum = uVar6 + 1;
    uVar7 = 0;
    if ((int)uVar6 < (int)(uVar6 + 1)) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    this_00 = (this->NameArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    if (this_00 != (FScriptContainerElement *)0x0) {
      ::FString::FString((FString *)this_00,param_1);
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,pwVar10);
    local_48 = &local_38;
    local_40 = local_res18;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)&this->NameToNameTableIndexMap,
               (TPairInitializer<FString_&&,int_const_&> *)(local_res18 + 2),(bool *)&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = this->FileWriter;
    local_res8[0] = 0x11;
    puVar3 = (undefined1 *)**(undefined8 **)&pFVar2->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8);
    }
    else {
      local_res8[0] = *puVar3;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    }
    ::FString::SerializeAsANSICharArray(param_1,this->FileWriter,0);
  }
  else {
    local_res18[0] = *puVar9;
  }
  if ((local_res18[0] == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index!=INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkProfiler.cpp"
                         ,0xac,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  return local_res18[0];
}

// PopSendBunch @ 148048f50

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkProfiler::PopSendBunch(FNetworkProfiler *this,UNetConnection *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  undefined1 *puVar6;
  TMap<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->OutgoingBunches;
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (*(int *)&(this->OutgoingBunches).field_0x8 != *(int *)&(this->OutgoingBunches).field_0x34) {
      puVar6 = *(undefined1 **)&(this->OutgoingBunches).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->OutgoingBunches).field_0x38;
      }
      iVar3 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->OutgoingBunches).field_0x48 - 1U &
                                (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(UNetConnection **)((longlong)iVar3 * 0x20 + *(longlong *)this_00) == param_1) {
            pTVar4 = TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked((TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                                    *)this_00,param_1);
            if (0 < pTVar4->ArrayNum) {
              pTVar4 = TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                       ::FindChecked((TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                                      *)this_00,param_1);
              if ((pTVar4->ArrayNum < 1) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar5 = pTVar4->ArrayNum - 1;
              _Dst = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xc;
              iVar3 = ~uVar5 + pTVar4->ArrayNum;
              if (iVar3 != 0) {
                memmove(_Dst,_Dst + 0xc,(longlong)iVar3 * 0xc);
              }
              pTVar4->ArrayNum = pTVar4->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,&pTVar4->AllocatorInstance,pTVar4->ArrayNum,&pTVar4->ArrayMax);
            }
            break;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)this_00);
        } while (iVar3 != -1);
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// PushSendBunch @ 14804ccf0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::PushSendBunch
          (FNetworkProfiler *this,UNetConnection *param_1,FOutBunch *param_2,ushort param_3,
          ushort param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  uint uVar8;
  UNetConnection *local_res10;
  FString local_28;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res10 = param_1;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar8 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    pTVar6 = TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<UNetConnection_*_const_&>
                       ((TMapBase<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,TArray<FNetworkProfiler::FSendBunchInfo,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->OutgoingBunches,uVar8 >> 0x10 ^ uVar8,&local_res10);
    pFVar7 = ::FName::ToString(&param_2->ChName,&local_28);
    iVar4 = GetNameTableIndex(this,pFVar7);
    iVar5 = pTVar6->ArrayNum;
    if (iVar5 == pTVar6->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0xc;
    *(short *)pFVar1 = (short)param_2->ChIndex;
    *(ushort *)(pFVar1 + 10) = param_4;
    *(int *)(pFVar1 + 4) = iVar4;
    *(ushort *)(pFVar1 + 8) = param_3;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// SerializeBeginContentBlock @ 1480583f0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::SerializeBeginContentBlock
          (FNetworkProfiler *this,uint param_1,ushort param_2,UNetConnection *param_3)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  ushort local_res18 [8];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  SetCurrentConnection(this,param_3);
  pFVar1 = this->FileWriter;
  local_res8[0] = 0xd;
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_res10);
  pFVar1 = this->FileWriter;
  if (**(longlong **)&pFVar1->field_0x8 + 2U <= (ulonglong)(*(longlong **)&pFVar1->field_0x8)[1]) {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
  return;
}

// SerializeEndContentBlock @ 1480584c0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::SerializeEndContentBlock
          (FNetworkProfiler *this,uint param_1,ushort param_2,UNetConnection *param_3)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  ushort local_res18 [8];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  SetCurrentConnection(this,param_3);
  pFVar1 = this->FileWriter;
  local_res8[0] = 0xe;
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_res10);
  pFVar1 = this->FileWriter;
  if (**(longlong **)&pFVar1->field_0x8 + 2U <= (ulonglong)(*(longlong **)&pFVar1->field_0x8)[1]) {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
  return;
}

// SerializeReplicateProperty @ 1480586b0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::SerializeReplicateProperty
          (FNetworkProfiler *this,uint param_1,ushort param_2,UNetConnection *param_3)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  ushort local_res18 [8];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  SetCurrentConnection(this,param_3);
  pFVar1 = this->FileWriter;
  local_res8[0] = 5;
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_res10);
  pFVar1 = this->FileWriter;
  if (**(longlong **)&pFVar1->field_0x8 + 2U <= (ulonglong)(*(longlong **)&pFVar1->field_0x8)[1]) {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
  return;
}

// SerializeWritePropertyHandle @ 148058780

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::SerializeWritePropertyHandle
          (FNetworkProfiler *this,ushort param_1,UNetConnection *param_2)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  ushort local_res10 [12];
  
  local_res10[0] = param_1;
  SetCurrentConnection(this,param_2);
  pFVar1 = this->FileWriter;
  local_res8[0] = 0xf;
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  pFVar1 = this->FileWriter;
  if (**(longlong **)&pFVar1->field_0x8 + 2U <= (ulonglong)(*(longlong **)&pFVar1->field_0x8)[1]) {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,local_res10);
  return;
}

// SerializeWritePropertyHeader @ 148058840

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::SerializeWritePropertyHeader
          (FNetworkProfiler *this,uint param_1,ushort param_2,UNetConnection *param_3)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  ushort local_res18 [8];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  SetCurrentConnection(this,param_3);
  pFVar1 = this->FileWriter;
  local_res8[0] = 10;
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_res10);
  pFVar1 = this->FileWriter;
  if (**(longlong **)&pFVar1->field_0x8 + 2U <= (ulonglong)(*(longlong **)&pFVar1->field_0x8)[1]) {
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
  return;
}

// SetCurrentConnection @ 14805ec80

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::SetCurrentConnection(FNetworkProfiler *this,UNetConnection *param_1)

{
  FArchive *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  undefined1 local_res8 [16];
  int local_res18 [4];
  FInternetAddr *local_38;
  TReferenceControllerBase<1> *local_30;
  void *local_28 [2];
  FInternetAddr *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((this->bIsTrackingEnabled != false) && (param_1 != (UNetConnection *)0x0)) {
    local_res18[0] = -1;
    (**(code **)(param_1->_padding_ + 0x338))(param_1,&local_38);
    if (local_38 == (FInternetAddr *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&InvalidConnection,L"Invalid Connection");
        atexit(`FNetworkProfiler::SetCurrentConnection'::__l13::
               _dynamic_atexit_destructor_for__InvalidConnection__);
        _Init_thread_footer(&::_TSS0);
      }
      local_res18[0] = GetAddressTableIndex(this,&InvalidConnection);
    }
    else if ((this->LastAddress).Object != local_38) {
      if ((local_38 == (FInternetAddr *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar5 = (FString *)(**(code **)((longlong)*local_38 + 0x80))(local_38,local_28,1);
      local_res18[0] = GetAddressTableIndex(this,pFVar5);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    if (local_res18[0] != -1) {
      pFVar1 = this->FileWriter;
      local_res8[0] = 0x10;
      puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
      if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
      }
      else {
        local_res8[0] = *puVar2;
        **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
      }
      (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_res18);
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = (this->LastAddress).Object;
      pTStack_10 = (this->LastAddress).SharedReferenceCount.ReferenceController;
      (this->LastAddress).Object = local_38;
      (this->LastAddress).SharedReferenceCount.ReferenceController = local_30;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return;
}

// SetNextFileName @ 14805f300

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall FNetworkProfiler::SetNextFileName(FNetworkProfiler *this,FString *param_1)

{
  ::FString::operator=(&this->NextFileName,param_1);
  return;
}

// TrackBeginContentBlock @ 148067810

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackBeginContentBlock
          (FNetworkProfiler *this,UObject *param_1,ushort param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    _Src = UnknownName.Data.AllocatorInstance;
    if (param_1 == (UObject *)0x0) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = UnknownName.Data.ArrayNum;
      local_38.Data.ArrayNum = iVar4;
      if (iVar4 == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,(ForAnyElementType *)&local_38,iVar4,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
      }
      uVar3 = GetNameTableIndex(this,&local_38);
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
      uVar3 = GetNameTableIndex(this,&local_28);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    SerializeBeginContentBlock(this,uVar3,param_2,param_3);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackCompareProperties_Unsafe @ 148067990

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackCompareProperties_Unsafe
          (FNetworkProfiler *this,FString *param_1,uint param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  FArchive *pFVar2;
  undefined1 *puVar3;
  float *pfVar4;
  float local_res8 [2];
  undefined1 local_res18 [8];
  int local_18 [4];
  
  local_18[0] = GetNameTableIndex(this,param_1);
  pFVar2 = this->FileWriter;
  local_res18[0] = 0x13;
  local_res8[0] =
       (float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 * (double)param_2);
  puVar3 = (undefined1 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res18,1);
  }
  else {
    local_res18[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_18);
  pFVar2 = this->FileWriter;
  pfVar4 = (float *)**(undefined8 **)&pFVar2->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar2->field_0x8)[1] < pfVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pfVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  ProfilerSerializeBitArray<FDefaultBitArrayAllocator>(this->FileWriter,param_3);
  ProfilerSerializeBitArray<FDefaultBitArrayAllocator>(this->FileWriter,param_4);
  pFVar2 = this->FileWriter;
  iVar1 = param_5->ArrayNum;
  if (iVar1 == 0) {
    param_5._0_4_ = iVar1;
    (**(code **)(*(longlong *)pFVar2 + 0x1a0))(pFVar2,&param_5);
    return;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x188))
            (pFVar2,(param_5->AllocatorInstance).Data,(longlong)iVar1);
  return;
}

// TrackEndContentBlock @ 148067ae0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackEndContentBlock
          (FNetworkProfiler *this,UObject *param_1,ushort param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    _Src = UnknownName.Data.AllocatorInstance;
    if (param_1 == (UObject *)0x0) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = UnknownName.Data.ArrayNum;
      local_38.Data.ArrayNum = iVar4;
      if (iVar4 == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,(ForAnyElementType *)&local_38,iVar4,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
      }
      uVar3 = GetNameTableIndex(this,&local_38);
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
      uVar3 = GetNameTableIndex(this,&local_28);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    SerializeEndContentBlock(this,uVar3,param_2,param_3);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackEvent @ 148067c60

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackEvent
          (FNetworkProfiler *this,FString *param_1,FString *param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  int local_28;
  int local_24 [3];
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_3);
    local_28 = GetNameTableIndex(this,param_1);
    local_24[0] = GetNameTableIndex(this,param_2);
    pFVar1 = this->FileWriter;
    local_res8[0] = 7;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&local_28);
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_24);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackExportBunch @ 148067d80

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackExportBunch(FNetworkProfiler *this,ushort param_1,UNetConnection *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res10[0] = param_1;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_2);
    pFVar1 = this->FileWriter;
    local_res8[0] = 0xb;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res10);
      }
    }
    else {
      local_res10[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackFrameBegin @ 148067ed0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall FNetworkProfiler::TrackFrameBegin(FNetworkProfiler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  float local_res10 [2];
  LARGE_INTEGER local_res18;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = this->FileWriter;
    local_res8[0] = 0;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    QueryPerformanceCounter(&local_res18);
    pFVar1 = this->FileWriter;
    local_res10[0] =
         (float)(((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) - GStartTime);
    pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
    if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *pfVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->LastAddress != (TSharedPtr<FInternetAddr_const_,1> *)&local_18) {
      (this->LastAddress).Object = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LastAddress).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackMustBeMappedGuids @ 148068090

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackMustBeMappedGuids
          (FNetworkProfiler *this,ushort param_1,ushort param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  ushort local_res18 [8];
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res10[0] = param_1;
    local_res18[0] = param_2;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_3);
    pFVar1 = this->FileWriter;
    local_res8[0] = 0xc;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res10);
      }
    }
    else {
      local_res10[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackQueuedRPC @ 148068210

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackQueuedRPC
          (FNetworkProfiler *this,UNetConnection *param_1,UObject *param_2,AActor *param_3,
          UFunction *param_4,uint param_5,uint param_6,uint param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TArray<FNetworkProfiler::FQueuedRPCInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  FName local_res8;
  FName local_68;
  FString local_60;
  FString local_50;
  UNetConnection *local_40;
  UObject *pUStack_38;
  int local_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_3->_padding_ == 0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      local_res8 = *(FName *)(param_3->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_60);
    }
    local_30 = GetNameTableIndex(this,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    local_68 = (FName)param_4->_padding_;
    ::FName::ToString(&local_68,&local_50);
    iStack_2c = GetNameTableIndex(this,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    pTVar8 = &this->QueuedRPCs;
    uStack_28 = param_5;
    uStack_24 = param_6;
    pFVar2 = (pTVar8->AllocatorInstance).Data;
    local_20 = param_7;
    local_40 = param_1;
    pUStack_38 = param_2;
    if (((pFVar2 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 <
         pFVar2 + (longlong)(this->QueuedRPCs).ArrayMax * 0x28)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->QueuedRPCs).ArrayNum;
    piVar1 = &(this->QueuedRPCs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar8->AllocatorInstance,piVar1);
    }
    lVar7 = (longlong)iVar6;
    (this->QueuedRPCs).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    *(UNetConnection **)(pFVar3 + lVar7 * 0x28) = local_40;
    *(UObject **)(pFVar3 + lVar7 * 0x28 + 8) = pUStack_38;
    pFVar2 = pFVar3 + lVar7 * 0x28 + 0x10;
    *(int *)pFVar2 = local_30;
    *(int *)(pFVar2 + 4) = iStack_2c;
    *(uint *)(pFVar2 + 8) = uStack_28;
    *(uint *)(pFVar2 + 0xc) = uStack_24;
    *(ulonglong *)(pFVar3 + lVar7 * 0x28 + 0x20) = CONCAT44(uStack_1c,local_20);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackReplicateActor @ 148068410

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackReplicateActor
          (FNetworkProfiler *this,AActor *param_1,FReplicationFlags param_2,uint param_3,
          UNetConnection *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  char *pcVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  char local_48 [4];
  float local_44;
  int local_40;
  FName local_3c;
  FString local_30;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_4);
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_30,L"None");
    }
    else {
      local_3c = *(FName *)(param_1->_padding_ + 0x18);
      ::FName::ToString(&local_3c,&local_30);
    }
    local_40 = GetNameTableIndex(this,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    pFVar1 = this->FileWriter;
    local_res8[0] = 4;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    pFVar1 = this->FileWriter;
    local_48[0] = ((byte)((uint)param_2.field0_0x0 >> 1) & 1 |
                  (param_2.field0_0x0._0_1_ & 1) * '\x02') * '\x02';
    pcVar3 = (char *)**(undefined8 **)&pFVar1->field_0x8;
    if ((char *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pcVar3 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_48,1);
    }
    else {
      local_48[0] = *pcVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&local_40);
    pFVar1 = this->FileWriter;
    local_44 = (float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 *
                      (double)param_3);
    pfVar4 = (float *)**(undefined8 **)&pFVar1->field_0x8;
    if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar4 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_44,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)&local_44);
      }
    }
    else {
      local_44 = *pfVar4;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    }
    this->bHasNoticeableNetworkTrafficOccured = true;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackReplicatePropertiesMetadata @ 148068620

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackReplicatePropertiesMetadata
          (FNetworkProfiler *this,UObject *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
          bool param_3,UNetConnection *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  undefined1 local_38 [4];
  int local_34;
  FName local_30;
  FString local_28;
  
  if (((this->bIsTrackingEnabled != false) || (this->bShouldTrackingBeEnabled != false)) &&
     (bIsComparisonTrackingEnabled)) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_4);
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_30.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_30.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_30,&local_28);
    }
    local_34 = GetNameTableIndex(this,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar1 = this->FileWriter;
    local_res8[0] = 0x14;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    local_38[0] = param_3;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&local_34);
    pFVar1 = this->FileWriter;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_38,1);
    }
    else {
      local_38[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    ProfilerSerializeBitArray<FDefaultBitArrayAllocator>(this->FileWriter,param_2);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackReplicateProperty @ 1480687c0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackReplicateProperty
          (FNetworkProfiler *this,FProperty *param_1,ushort param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString local_18;
  
  if ((this->bIsTrackingEnabled != false) && (this->IgnorePropertyCount == 0)) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    uVar3 = GetNameTableIndex(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SerializeReplicateProperty(this,uVar3,param_2,param_3);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackSendAck @ 148068900

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSendAck(FNetworkProfiler *this,ushort param_1,UNetConnection *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res10[0] = param_1;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_2);
    pFVar1 = this->FileWriter;
    local_res8[0] = 9;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res10);
      }
    }
    else {
      local_res10[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackSendBunch @ 148068a20

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSendBunch
          (FNetworkProfiler *this,FOutBunch *param_1,ushort param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  ushort local_res18 [8];
  ushort local_38 [2];
  int local_34;
  FString local_30;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res18[0] = param_2;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_3);
    pFVar1 = this->FileWriter;
    local_res8[0] = 2;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    local_38[0] = (ushort)param_1->ChIndex;
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_38);
      }
    }
    else {
      local_38[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    pFVar6 = ::FName::ToString(&param_1->ChName,&local_30);
    local_34 = GetNameTableIndex(this,pFVar6);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&local_34);
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackSendRPC @ 148068bd0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSendRPC
          (FNetworkProfiler *this,AActor *param_1,UFunction *param_2,uint param_3,uint param_4,
          uint param_5,UNetConnection *param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  uint local_res20 [2];
  int local_58;
  int local_54;
  FName local_50;
  FName local_48;
  FString local_40;
  FString local_30;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res20[0] = param_3;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_6);
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_40,L"None");
    }
    else {
      local_50 = *(FName *)(param_1->_padding_ + 0x18);
      ::FName::ToString(&local_50,&local_40);
    }
    local_58 = GetNameTableIndex(this,&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_48 = (FName)param_2->_padding_;
    ::FName::ToString(&local_48,&local_30);
    local_54 = GetNameTableIndex(this,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    pFVar1 = this->FileWriter;
    local_res8[0] = 3;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&local_58);
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&local_54);
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_res20);
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&param_4);
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,&param_5);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackSessionChange @ 148068da0

/* WARNING: Removing unreachable block (ram,0x000148069008) */
/* WARNING: Removing unreachable block (ram,0x00014806902d) */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSessionChange(FNetworkProfiler *this,bool param_1,FURL *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  ENetworkProfilerVersionHistory *pEVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FArchive *pFVar5;
  undefined1 *puVar6;
  uint *puVar7;
  ENetworkProfilerVersionHistory *pEVar8;
  code *pcVar9;
  bool bVar10;
  FString *pFVar11;
  FDateTime this_00;
  IFileManager *pIVar12;
  FArchiveState *this_01;
  wchar_t *pwVar13;
  FString *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  FString local_148;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  void *local_98 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  
  if ((this->bIsTrackingEnabled != false) || (this->bShouldTrackingBeEnabled != false)) {
    if (4 < (byte)LogNet._0_1_) {
      FURL::ToString(param_2,&local_a8,false);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->FileWriter != (FArchive *)0x0) {
      if (4 < (byte)LogNet._0_1_) {
        local_130 = (this->CurrentHeader).URL.Data.ArrayNum;
        lVar16 = (longlong)local_130;
        pFVar4 = (this->CurrentHeader).URL.Data.AllocatorInstance.Data;
        local_138.Data = (FScriptContainerElement *)0x0;
        if (local_130 == 0) {
          local_12c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_130,0,&local_138,local_130,&local_12c);
          memcpy(local_138.Data,pFVar4,lVar16 * 2);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data);
        }
      }
      if ((this->bHasNoticeableNetworkTrafficOccured == false) && (2 < (byte)LogNet._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      pFVar5 = this->FileWriter;
      local_res8[0] = 6;
      puVar6 = (undefined1 *)**(undefined8 **)&pFVar5->field_0x8;
      if ((undefined1 *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar6 + 1) {
        (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_res8,1);
      }
      else {
        local_res8[0] = *puVar6;
        **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
      }
      bVar10 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->OnNetworkProfileFinishedDelegate);
      if (bVar10) {
        pFVar11 = (FString *)
                  (**(code **)(*(longlong *)this->FileWriter + 0x18))(this->FileWriter,local_98);
        TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnNetworkProfileFinishedDelegate,pFVar11);
        if (local_98[0] != (void *)0x0) {
          FMemory::Free(local_98[0]);
        }
      }
      pFVar5 = this->FileWriter;
      if (pFVar5 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
      this->FileWriter = (FArchive *)0x0;
      this->bHasNoticeableNetworkTrafficOccured = false;
    }
    if (param_1) {
      Salt = Salt + 1;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      if ((this->NextFileName).Data.ArrayNum < 2) {
        ::FString::PrintfImpl(&local_b8,L"[%i]");
        this_00 = FDateTime::Now();
        pFVar11 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_88);
        FWindowsPlatformProcess::GetCurrentProcessId();
        ::FString::PrintfImpl(&local_c8,L"-Pid%i");
        ::FString::ConcatCF(&local_d8,GInternalProjectName,&local_c8);
        ::FString::ConcatFC(&local_e8,&local_d8,L"-");
        ::FString::ConcatFF(&local_f8,&local_e8,pFVar11);
        ::FString::ConcatFF(&local_108,&local_f8,&local_b8);
        ::FString::ConcatFC(&local_128,&local_108,L".nprof");
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        local_148.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
        local_148.Data.ArrayNum = local_128.Data.ArrayNum;
        local_148.Data.ArrayMax = local_128.Data.ArrayMax;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar11 = &this->NextFileName;
        if (&local_148 != pFVar11) {
          local_148.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.Data.ArrayNum = (this->NextFileName).Data.ArrayNum;
          local_148.Data.ArrayMax = (this->NextFileName).Data.ArrayMax;
          (this->NextFileName).Data.ArrayNum = 0;
          (this->NextFileName).Data.ArrayMax = 0;
        }
      }
      pFVar11 = FPaths::ProfilingDir(&local_78);
      ::FString::ConcatFF(&local_118,pFVar11,&local_148);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pIVar12 = IFileManager::Get();
      pcVar9 = *(code **)((longlong)*pIVar12 + 0x60);
      pFVar11 = FPaths::GetPath(&local_68,&local_118);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      (*pcVar9)(pIVar12,pwVar13,0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      this_01 = ::operator_new(0xb0);
      if (this_01 == (FArchiveState *)0x0) {
        this->FileWriter = (FArchive *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileWriter",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkProfiler.cpp"
                            ,0x2f9,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else {
        pIVar12 = IFileManager::Get();
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          FVar15.Data = local_118.Data.AllocatorInstance.Data;
        }
        lVar16 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,FVar15.Data);
        FArchiveState::FArchiveState(this_01);
        *(undefined2 *)&this_01[1].InlineFPLB.EndFastPathLoadBuffer = 0;
        this_01->_padding_ = (longlong)&___7FTransactionallySafeArchiveWriter__6B_;
        this_01[1]._padding_ = lVar16;
        this_01[1].ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        this_01[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        if ((lVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerArchive",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                                ,0x1f,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((*(byte *)(this_01[1]._padding_ + 0x28) & 4) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerArchive->IsSaving()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                                ,0x20,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (**(code **)(this_01->_padding_ + 0xd8))(this_01,1);
        this->FileWriter = (FArchive *)this_01;
      }
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Reset((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&this->NameToNameTableIndexMap);
      piVar1 = &(this->NameArray).ArrayMax;
      pFVar4 = (this->NameArray).AllocatorInstance.Data;
      iVar3 = (this->NameArray).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FString,int>((FString *)pFVar4,iVar3);
        (this->NameArray).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->NameArray).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FString,int>((FString *)pFVar4,iVar3);
        (this->NameArray).ArrayNum = 0;
      }
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Reset((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&this->AddressTableIndexMap);
      pwVar13 = FCommandLine::Get();
      FParse::Value(pwVar13,L"NETWORKPROFILER=",&(this->CurrentHeader).Tag,true,(wchar_t **)0x0);
      ::FString::operator=(&(this->CurrentHeader).GameName,GInternalProjectName);
      pFVar14 = FURL::ToString(param_2,&local_58,false);
      pFVar11 = &(this->CurrentHeader).URL;
      if (pFVar11 != pFVar14) {
        pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar11->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->CurrentHeader).URL.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (this->CurrentHeader).URL.Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pFVar5 = this->FileWriter;
      if (((pFVar5->field_0x28 & 4) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsSaving()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkProfiler.cpp"
                              ,0x74,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar7 = (uint *)**(undefined8 **)&pFVar5->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar7 + 1) {
        if ((pFVar5->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,&this->CurrentHeader,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar5,&(this->CurrentHeader).Magic);
        }
      }
      else {
        (this->CurrentHeader).Magic = *puVar7;
        **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 4;
      }
      pEVar2 = &(this->CurrentHeader).Version;
      pEVar8 = (ENetworkProfilerVersionHistory *)**(undefined8 **)&pFVar5->field_0x8;
      if ((ENetworkProfilerVersionHistory *)(*(undefined8 **)&pFVar5->field_0x8)[1] < pEVar8 + 1) {
        if ((pFVar5->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar5 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar5,pEVar2);
        }
      }
      else {
        *pEVar2 = *pEVar8;
        **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 4;
      }
      ::FString::SerializeAsANSICharArray(&(this->CurrentHeader).Tag,pFVar5,0);
      ::FString::SerializeAsANSICharArray(&(this->CurrentHeader).GameName,pFVar5,0);
      ::FString::SerializeAsANSICharArray(pFVar11,pFVar5,0);
      this->bIsTrackingEnabled = true;
      this->bShouldTrackingBeEnabled = true;
      bVar10 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->OnNetworkProfileStartedDelegate);
      if (bVar10) {
        pFVar11 = (FString *)
                  (**(code **)(*(longlong *)this->FileWriter + 0x18))(this->FileWriter,local_48);
        TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnNetworkProfileStartedDelegate,pFVar11);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    else {
      this->bIsTrackingEnabled = false;
      this->bShouldTrackingBeEnabled = false;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackSocketSend @ 148069610

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSocketSend
          (FNetworkProfiler *this,FString *param_1,void *param_2,ushort param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014806967e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
  return;
}

// TrackSocketSendTo @ 1480696a0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSocketSendTo
          (FNetworkProfiler *this,FString *param_1,void *param_2,ushort param_3,ushort param_4,
          ushort param_5,ushort param_6,ushort param_7,UNetConnection *param_8)

{
  if (this->bIsTrackingEnabled != false) {
    TrackSocketSendToCore(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  return;
}

// TrackSocketSendToCore @ 1480696e0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackSocketSendToCore
          (FNetworkProfiler *this,FString *param_1,void *param_2,ushort param_3,ushort param_4,
          ushort param_5,ushort param_6,ushort param_7,UNetConnection *param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  ushort local_res20 [4];
  int local_18 [4];
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    local_res20[0] = param_3;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetCurrentConnection(this,param_8);
    local_18[0] = GetNameTableIndex(this,param_1);
    pFVar1 = this->FileWriter;
    local_res8[0] = 1;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)this->FileWriter + 0x1a0))(this->FileWriter,local_18);
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res20);
      }
    }
    else {
      local_res20[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&param_4,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&param_4);
      }
    }
    else {
      param_4 = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&param_5,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&param_5);
      }
    }
    else {
      param_5 = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&param_6,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&param_6);
      }
    }
    else {
      param_6 = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&param_7,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,&param_7);
      }
    }
    else {
      param_7 = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    this->bHasNoticeableNetworkTrafficOccured = true;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackWritePropertyHandle @ 148069960

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackWritePropertyHandle
          (FNetworkProfiler *this,ushort param_1,UNetConnection *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FArchive *pFVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  ushort local_res20 [4];
  
  if ((this->bIsTrackingEnabled != false) && (this->IgnorePropertyCount == 0)) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res20[0] = param_1;
    SetCurrentConnection(this,param_2);
    pFVar1 = this->FileWriter;
    local_res8[0] = 0xf;
    puVar2 = (undefined1 *)**(undefined8 **)&pFVar1->field_0x8;
    if ((undefined1 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    pFVar1 = this->FileWriter;
    puVar3 = (ushort *)**(undefined8 **)&pFVar1->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar1,local_res20);
      }
    }
    else {
      local_res20[0] = *puVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 2;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackWritePropertyHeader @ 148069a90

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackWritePropertyHeader
          (FNetworkProfiler *this,FProperty *param_1,ushort param_2,UNetConnection *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString local_18;
  
  if (this->bIsTrackingEnabled != false) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    uVar3 = GetNameTableIndex(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SerializeWritePropertyHeader(this,uVar3,param_2,param_3);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// TrackCompareProperties<FRepParentCmd,FString_(__cdecl*)(FRepParentCmd_const_&)> @ 1484b8af0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FNetworkProfiler::TrackCompareProperties<FRepParentCmd,FString_(__cdecl*)(FRepParentCmd_const_&)>
          (FNetworkProfiler *this,UObject *param_1,uint param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *param_5,
          _func___cdecl_FString_FRepParentCmd_ptr *param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  FRepParentCmd *pFVar7;
  FRepParentCmd *pFVar8;
  undefined1 local_res8 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_138;
  uint local_128;
  uint local_124;
  FString local_120;
  undefined8 local_110;
  FName local_108;
  FString local_100;
  FArchiveState local_e8;
  undefined8 local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  
  if (((this->bIsTrackingEnabled != false) || (this->bShouldTrackingBeEnabled != false)) &&
     (bIsComparisonTrackingEnabled)) {
    lpCriticalSection = &this->CriticalSection;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_120,L"None");
    }
    else {
      local_108.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_108.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_108,&local_120);
    }
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    iVar5 = local_120.Data.ArrayNum + -1;
    FVar2.Data = local_120.Data.AllocatorInstance.Data;
    if (local_120.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this->ExportedObjects,uVar4,&local_120);
    if (iVar5 == -1) {
      local_128 = param_5->ArrayNum;
      uVar4 = local_128 * 2 + 2;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (local_138.ArrayMax < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar4,&local_138.AllocatorInstance,local_138.ArrayNum,&local_138.ArrayMax);
      }
      local_110 = 0;
      local_e8._padding_ = 0;
      local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_e8._40_8_ = 0;
      local_e8.ArSerializingDefaults = 0;
      local_e8.ArPortFlags = 0;
      local_e8.ArMaxSerializeSize = 0;
      local_e8.ArUEVer.FileVersionUE4 = 0;
      local_e8.ArUEVer.FileVersionUE5 = 0;
      local_e8.ArLicenseeUEVer = 0;
      local_e8.ArEngineVer.Major = 0;
      local_e8.ArEngineVer.Minor = 0;
      local_e8.ArEngineVer.Patch = 0;
      local_e8.ArEngineVer._6_2_ = 0;
      local_e8.ArEngineVer.Changelist = 0;
      local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_e8.SerializedProperty = (FProperty *)0x0;
      local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_e8.bCustomVersionsAreReset = false;
      local_e8._129_7_ = 0;
      local_e8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_e8);
      local_58 = 0;
      local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      local_50 = &local_138;
      local_48 = 0;
      FArchiveState::SetIsSaving(&local_e8,true);
      (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
      local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FArchive::SerializeIntPacked((FArchive *)&local_e8,&local_128);
      iVar5 = param_5->ArrayNum;
      pFVar7 = (FRepParentCmd *)(param_5->AllocatorInstance).Data;
      pFVar8 = pFVar7 + iVar5;
      while( true ) {
        if (param_5->ArrayNum != iVar5) {
          `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar7 == pFVar8) break;
        pFVar6 = (*param_6)(&local_100,pFVar7);
        local_124 = GetNameTableIndex(this,pFVar6);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        FArchive::SerializeIntPacked((FArchive *)&local_e8,&local_124);
        pFVar7 = pFVar7 + 1;
      }
      FArchive::~FArchive((FArchive *)&local_e8);
    }
    TrackCompareProperties_Unsafe(this,&local_120,param_2,param_3,param_4,&local_138);
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

