// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ~FNetworkDemoHeader @ 148445a80

void __thiscall FNetworkDemoHeader::~FNetworkDemoHeader(FNetworkDemoHeader *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->GameSpecificData).AllocatorInstance.Data,
             (this->GameSpecificData).ArrayNum);
  pFVar1 = (this->GameSpecificData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLevelNameAndTime,int>
            ((FLevelNameAndTime *)(this->LevelNamesAndTimes).AllocatorInstance.Data,
             (this->LevelNamesAndTimes).ArrayNum);
  pFVar1 = (this->LevelNamesAndTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineVersion).Branch.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomVersions).Versions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1484471a0

FNetworkDemoHeader * __thiscall
FNetworkDemoHeader::operator=(FNetworkDemoHeader *this,FNetworkDemoHeader *param_1)

{
  FCustomVersionContainer *pFVar1;
  FCustomVersionContainer *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  TArray<FLevelNameAndTime,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FLevelNameAndTime,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  pFVar1 = &param_1->CustomVersions;
  this->Magic = param_1->Magic;
  pFVar2 = &this->CustomVersions;
  this->Version = param_1->Version;
  this->NetworkChecksum = param_1->NetworkChecksum;
  this->EngineNetworkProtocolVersion = param_1->EngineNetworkProtocolVersion;
  this->GameNetworkProtocolVersion = param_1->GameNetworkProtocolVersion;
  if (pFVar2 != pFVar1) {
    pFVar9 = (pFVar2->Versions).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar2->Versions).AllocatorInstance.Data = (pFVar1->Versions).AllocatorInstance.Data;
    (pFVar1->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CustomVersions).Versions.ArrayNum = (param_1->CustomVersions).Versions.ArrayNum;
    (this->CustomVersions).Versions.ArrayMax = (param_1->CustomVersions).Versions.ArrayMax;
    (param_1->CustomVersions).Versions.ArrayNum = 0;
    (param_1->CustomVersions).Versions.ArrayMax = 0;
  }
  uVar10 = (param_1->Guid).B;
  uVar11 = (param_1->Guid).C;
  uVar12 = (param_1->Guid).D;
  pFVar3 = &param_1->Platform;
  pFVar4 = &this->Platform;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar10;
  (this->Guid).C = uVar11;
  (this->Guid).D = uVar12;
  this->MinRecordHz = param_1->MinRecordHz;
  this->MaxRecordHz = param_1->MaxRecordHz;
  this->FrameLimitInMS = param_1->FrameLimitInMS;
  this->CheckpointLimitInMS = param_1->CheckpointLimitInMS;
  if (pFVar4 != pFVar3) {
    pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Platform).Data.ArrayNum = (param_1->Platform).Data.ArrayNum;
    (this->Platform).Data.ArrayMax = (param_1->Platform).Data.ArrayMax;
    (param_1->Platform).Data.ArrayNum = 0;
    (param_1->Platform).Data.ArrayMax = 0;
  }
  pFVar3 = &(param_1->EngineVersion).Branch;
  this->BuildConfig = param_1->BuildConfig;
  pFVar4 = &(this->EngineVersion).Branch;
  this->BuildTarget = param_1->BuildTarget;
  (this->EngineVersion)._padding_ = (param_1->EngineVersion)._padding_;
  *(int *)&(this->EngineVersion)._padding_ = (int)(param_1->EngineVersion)._padding_;
  if (pFVar4 != pFVar3) {
    pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->EngineVersion).Branch.Data.ArrayNum = (param_1->EngineVersion).Branch.Data.ArrayNum;
    (this->EngineVersion).Branch.Data.ArrayMax = (param_1->EngineVersion).Branch.Data.ArrayMax;
    (param_1->EngineVersion).Branch.Data.ArrayNum = 0;
    (param_1->EngineVersion).Branch.Data.ArrayMax = 0;
  }
  pTVar5 = &param_1->LevelNamesAndTimes;
  pTVar6 = &this->LevelNamesAndTimes;
  this->HeaderFlags = param_1->HeaderFlags;
  if (pTVar6 != pTVar5) {
    DestructItems<FLevelNameAndTime,int>
              ((FLevelNameAndTime *)(pTVar6->AllocatorInstance).Data,
               (this->LevelNamesAndTimes).ArrayNum);
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LevelNamesAndTimes).ArrayNum = (param_1->LevelNamesAndTimes).ArrayNum;
    (this->LevelNamesAndTimes).ArrayMax = (param_1->LevelNamesAndTimes).ArrayMax;
    (param_1->LevelNamesAndTimes).ArrayNum = 0;
    (param_1->LevelNamesAndTimes).ArrayMax = 0;
  }
  pTVar7 = &param_1->GameSpecificData;
  pTVar8 = &this->GameSpecificData;
  if (pTVar8 != pTVar7) {
    DestructItems<FString,int>
              ((FString *)(pTVar8->AllocatorInstance).Data,(this->GameSpecificData).ArrayNum);
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->GameSpecificData).ArrayNum = (param_1->GameSpecificData).ArrayNum;
    (this->GameSpecificData).ArrayMax = (param_1->GameSpecificData).ArrayMax;
    (param_1->GameSpecificData).ArrayNum = 0;
    (param_1->GameSpecificData).ArrayMax = 0;
  }
  this->PackageVersionUE = param_1->PackageVersionUE;
  this->PackageVersionLicenseeUE = param_1->PackageVersionLicenseeUE;
  return this;
}

// FNetworkDemoHeader @ 1484bab60

FNetworkDemoHeader * __thiscall FNetworkDemoHeader::FNetworkDemoHeader(FNetworkDemoHeader *this)

{
  FEngineVersion *pFVar1;
  
  this->Magic = 0x2cf5a13d;
  (this->CustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomVersions).Versions.ArrayNum = 0;
  (this->CustomVersions).Versions.ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->MinRecordHz = 0.0;
  this->MaxRecordHz = 0.0;
  this->FrameLimitInMS = 0.0;
  this->CheckpointLimitInMS = 0.0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  this->BuildConfig = Unknown;
  this->BuildTarget = Unknown;
  this->Version = 0x13;
  this->NetworkChecksum = 0;
  this->EngineNetworkProtocolVersion = 0x2b;
  this->GameNetworkProtocolVersion = 0;
  pFVar1 = FEngineVersion::Current();
  (this->EngineVersion)._padding_ = pFVar1->_padding_;
  *(int *)&(this->EngineVersion)._padding_ = (int)pFVar1->_padding_;
  ::FString::FString(&(this->EngineVersion).Branch,&pFVar1->Branch);
  (this->LevelNamesAndTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelNamesAndTimes).ArrayNum = 0;
  (this->LevelNamesAndTimes).ArrayMax = 0;
  (this->GameSpecificData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameSpecificData).ArrayNum = 0;
  (this->GameSpecificData).ArrayMax = 0;
  this->HeaderFlags = None;
  this->PackageVersionUE = GPackageFileUEVersion;
  this->PackageVersionLicenseeUE = GPackageFileLicenseeUEVersion;
  return this;
}

// CountBytes @ 1484cc790

void __thiscall FNetworkDemoHeader::CountBytes(FNetworkDemoHeader *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FString local_58;
  FScopeMarker local_48;
  
  ::FString::FString(&local_58,"FNetworkDemoHeader::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_48,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->LevelNamesAndTimes).ArrayNum * 0x18,
             (longlong)(this->LevelNamesAndTimes).ArrayMax * 0x18);
  iVar1 = (this->LevelNamesAndTimes).ArrayNum;
  pFVar2 = (this->LevelNamesAndTimes).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->LevelNamesAndTimes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLevelNameAndTime_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar2 + 8) * 2,(longlong)*(int *)(pFVar2 + 0xc) * 2);
    pFVar2 = pFVar2 + 0x18;
  }
  ::FString::FString(&local_58,"LevelNamesAndTimes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->GameSpecificData).ArrayNum << 4,
             (longlong)(this->GameSpecificData).ArrayMax << 4);
  iVar1 = (this->GameSpecificData).ArrayNum;
  pFVar3 = (this->GameSpecificData).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->GameSpecificData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 8) * 2,(longlong)*(int *)(pFVar3 + 0xc) * 2);
    pFVar3 = pFVar3 + 0x10;
  }
  ::FString::FString(&local_58,"GameSpecificData");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_48);
  return;
}

// GetCustomVersion @ 1484d83f0

uint __thiscall FNetworkDemoHeader::GetCustomVersion(FNetworkDemoHeader *this,FGuid *param_1)

{
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  pFVar1 = FCustomVersionContainer::GetVersion(&this->CustomVersions,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// SetDefaultNetworkVersions @ 1484fb6b0

void __thiscall FNetworkDemoHeader::SetDefaultNetworkVersions(FNetworkDemoHeader *this)

{
  FCustomVersionContainer *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  FCustomVersionContainer *pFVar5;
  FName *pFVar6;
  FName local_res8;
  FGuid local_18;
  
  uVar4 = FNetworkVersion::GetLocalNetworkVersion(true);
  this->NetworkChecksum = uVar4;
  uVar4 = FNetworkVersion::GetEngineNetworkProtocolVersion();
  this->EngineNetworkProtocolVersion = uVar4;
  uVar4 = FNetworkVersion::GetGameNetworkProtocolVersion();
  this->GameNetworkProtocolVersion = uVar4;
  pFVar5 = FNetworkVersion::GetNetworkCustomVersions();
  this_00 = &this->CustomVersions;
  if (this_00 != pFVar5) {
    iVar2 = (pFVar5->Versions).ArrayNum;
    piVar1 = &(this->CustomVersions).Versions.ArrayMax;
    iVar3 = *piVar1;
    _Src = (pFVar5->Versions).AllocatorInstance.Data;
    (this->CustomVersions).Versions.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar2,iVar3,(ForAnyElementType *)this_00,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((this_00->Versions).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x28);
      }
    }
  }
  pFVar6 = ::FName::FName(&local_res8,L"Replay");
  local_18 = FReplayCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(this_00,&local_18,0x13,*pFVar6);
  return;
}

