// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FOverridableReplayVersionData @ 1484419b0

FOverridableReplayVersionData * __thiscall
FOverridableReplayVersionData::FOverridableReplayVersionData
          (FOverridableReplayVersionData *this,FNetworkDemoHeader *param_1)

{
  FCustomVersionContainer *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->CustomVersions;
  this->Version = param_1->Version;
  this->EngineNetworkProtocolVersion = param_1->EngineNetworkProtocolVersion;
  this->GameNetworkProtocolVersion = param_1->GameNetworkProtocolVersion;
  (pFVar1->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CustomVersions).Versions.ArrayMax;
  iVar3 = (param_1->CustomVersions).Versions.ArrayNum;
  _Src = (param_1->CustomVersions).Versions.AllocatorInstance.Data;
  (this->CustomVersions).Versions.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Versions).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x28);
  }
  (this->EngineVersion)._padding_ = (param_1->EngineVersion)._padding_;
  *(int *)&(this->EngineVersion)._padding_ = (int)(param_1->EngineVersion)._padding_;
  ::FString::FString(&(this->EngineVersion).Branch,&(param_1->EngineVersion).Branch);
  this->PackageVersionUE = param_1->PackageVersionUE;
  this->PackageVersionLicenseeUE = param_1->PackageVersionLicenseeUE;
  return this;
}

// ApplyVersionDataToDemoHeader @ 148453cf0

void __thiscall
FOverridableReplayVersionData::ApplyVersionDataToDemoHeader
          (FOverridableReplayVersionData *this,FNetworkDemoHeader *param_1)

{
  FCustomVersionContainer *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pFVar1 = &param_1->CustomVersions;
  param_1->Version = this->Version;
  param_1->EngineNetworkProtocolVersion = this->EngineNetworkProtocolVersion;
  param_1->GameNetworkProtocolVersion = this->GameNetworkProtocolVersion;
  if (pFVar1 != &this->CustomVersions) {
    iVar3 = (param_1->CustomVersions).Versions.ArrayMax;
    piVar2 = &(param_1->CustomVersions).Versions.ArrayMax;
    _Src = (this->CustomVersions).Versions.AllocatorInstance.Data;
    iVar4 = (this->CustomVersions).Versions.ArrayNum;
    (param_1->CustomVersions).Versions.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pFVar1->Versions).AllocatorInstance.Data,_Src,(longlong)iVar4 * 0x28);
      }
    }
  }
  (param_1->EngineVersion)._padding_ = (this->EngineVersion)._padding_;
  *(int *)&(param_1->EngineVersion)._padding_ = (int)(this->EngineVersion)._padding_;
  ::FString::operator=(&(param_1->EngineVersion).Branch,&(this->EngineVersion).Branch);
  param_1->PackageVersionUE = this->PackageVersionUE;
  param_1->PackageVersionLicenseeUE = this->PackageVersionLicenseeUE;
  return;
}

// GetCustomVersion @ 1484d8430

uint __thiscall
FOverridableReplayVersionData::GetCustomVersion(FOverridableReplayVersionData *this,FGuid *param_1)

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

