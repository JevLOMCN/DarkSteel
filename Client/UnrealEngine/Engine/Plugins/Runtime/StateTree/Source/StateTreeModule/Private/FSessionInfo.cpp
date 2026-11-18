// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// operator= @ 14d4b3f30

FSessionInfo * __thiscall
TraceServices::FSessionInfo::operator=(FSessionInfo *this,FSessionInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (this != param_1) {
    pFVar3 = (this->Platform).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Platform).Data.AllocatorInstance.Data = (param_1->Platform).Data.AllocatorInstance.Data;
    (param_1->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Platform).Data.ArrayNum = (param_1->Platform).Data.ArrayNum;
    (this->Platform).Data.ArrayMax = (param_1->Platform).Data.ArrayMax;
    (param_1->Platform).Data.ArrayNum = 0;
    (param_1->Platform).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AppName;
  pFVar2 = &this->AppName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AppName).Data.ArrayNum = (param_1->AppName).Data.ArrayNum;
    (this->AppName).Data.ArrayMax = (param_1->AppName).Data.ArrayMax;
    (param_1->AppName).Data.ArrayNum = 0;
    (param_1->AppName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ProjectName;
  pFVar2 = &this->ProjectName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ProjectName).Data.ArrayNum = (param_1->ProjectName).Data.ArrayNum;
    (this->ProjectName).Data.ArrayMax = (param_1->ProjectName).Data.ArrayMax;
    (param_1->ProjectName).Data.ArrayNum = 0;
    (param_1->ProjectName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CommandLine;
  pFVar2 = &this->CommandLine;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CommandLine).Data.ArrayNum = (param_1->CommandLine).Data.ArrayNum;
    (this->CommandLine).Data.ArrayMax = (param_1->CommandLine).Data.ArrayMax;
    (param_1->CommandLine).Data.ArrayNum = 0;
    (param_1->CommandLine).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Branch;
  pFVar2 = &this->Branch;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Branch).Data.ArrayNum = (param_1->Branch).Data.ArrayNum;
    (this->Branch).Data.ArrayMax = (param_1->Branch).Data.ArrayMax;
    (param_1->Branch).Data.ArrayNum = 0;
    (param_1->Branch).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->BuildVersion;
  pFVar2 = &this->BuildVersion;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BuildVersion).Data.ArrayNum = (param_1->BuildVersion).Data.ArrayNum;
    (this->BuildVersion).Data.ArrayMax = (param_1->BuildVersion).Data.ArrayMax;
    (param_1->BuildVersion).Data.ArrayNum = 0;
    (param_1->BuildVersion).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->VFSPaths;
  pFVar2 = &this->VFSPaths;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VFSPaths).Data.ArrayNum = (param_1->VFSPaths).Data.ArrayNum;
    (this->VFSPaths).Data.ArrayMax = (param_1->VFSPaths).Data.ArrayMax;
    (param_1->VFSPaths).Data.ArrayNum = 0;
    (param_1->VFSPaths).Data.ArrayMax = 0;
  }
  this->Changelist = param_1->Changelist;
  this->ConfigurationType = param_1->ConfigurationType;
  this->TargetType = param_1->TargetType;
  uVar4 = (param_1->InstanceId).B;
  uVar5 = (param_1->InstanceId).C;
  uVar6 = (param_1->InstanceId).D;
  (this->InstanceId).A = (param_1->InstanceId).A;
  (this->InstanceId).B = uVar4;
  (this->InstanceId).C = uVar5;
  (this->InstanceId).D = uVar6;
  return this;
}

// operator= @ 14d4b4100

FSessionInfo * __thiscall
TraceServices::FSessionInfo::operator=(FSessionInfo *this,FSessionInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  ::FString::operator=(&this->Platform,&param_1->Platform);
  ::FString::operator=(&this->AppName,&param_1->AppName);
  ::FString::operator=(&this->ProjectName,&param_1->ProjectName);
  ::FString::operator=(&this->CommandLine,&param_1->CommandLine);
  ::FString::operator=(&this->Branch,&param_1->Branch);
  ::FString::operator=(&this->BuildVersion,&param_1->BuildVersion);
  ::FString::operator=(&this->VFSPaths,&param_1->VFSPaths);
  this->Changelist = param_1->Changelist;
  this->ConfigurationType = param_1->ConfigurationType;
  this->TargetType = param_1->TargetType;
  uVar1 = (param_1->InstanceId).B;
  uVar2 = (param_1->InstanceId).C;
  uVar3 = (param_1->InstanceId).D;
  (this->InstanceId).A = (param_1->InstanceId).A;
  (this->InstanceId).B = uVar1;
  (this->InstanceId).C = uVar2;
  (this->InstanceId).D = uVar3;
  return this;
}

