// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// ~FManifestMeta @ 1431bf4f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall BuildPatchServices::FManifestMeta::~FManifestMeta(FManifestMeta *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->BuildId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrereqArgs).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrereqPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrereqName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PrereqIds).HashSize = 0;
  FVar2 = (this->PrereqIds).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PrereqIds).Elements);
  pFVar1 = (this->LaunchCommand).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LaunchExe).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 1431bfe40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestMeta * __thiscall
BuildPatchServices::FManifestMeta::operator=(FManifestMeta *this,FManifestMeta *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  pFVar1 = &param_1->AppName;
  this->FeatureLevel = param_1->FeatureLevel;
  pFVar3 = &this->AppName;
  this->bIsFileData = param_1->bIsFileData;
  this->AppID = param_1->AppID;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AppName).Data.ArrayNum = (param_1->AppName).Data.ArrayNum;
    (this->AppName).Data.ArrayMax = (param_1->AppName).Data.ArrayMax;
    (param_1->AppName).Data.ArrayNum = 0;
    (param_1->AppName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->BuildVersion;
  pFVar3 = &this->BuildVersion;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BuildVersion).Data.ArrayNum = (param_1->BuildVersion).Data.ArrayNum;
    (this->BuildVersion).Data.ArrayMax = (param_1->BuildVersion).Data.ArrayMax;
    (param_1->BuildVersion).Data.ArrayNum = 0;
    (param_1->BuildVersion).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->LaunchExe;
  pFVar3 = &this->LaunchExe;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LaunchExe).Data.ArrayNum = (param_1->LaunchExe).Data.ArrayNum;
    (this->LaunchExe).Data.ArrayMax = (param_1->LaunchExe).Data.ArrayMax;
    (param_1->LaunchExe).Data.ArrayNum = 0;
    (param_1->LaunchExe).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->LaunchCommand;
  pFVar3 = &this->LaunchCommand;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LaunchCommand).Data.ArrayNum = (param_1->LaunchCommand).Data.ArrayNum;
    (this->LaunchCommand).Data.ArrayMax = (param_1->LaunchCommand).Data.ArrayMax;
    (param_1->LaunchCommand).Data.ArrayNum = 0;
    (param_1->LaunchCommand).Data.ArrayMax = 0;
  }
  if (&this->PrereqIds != &param_1->PrereqIds) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (&this->PrereqIds,&param_1->PrereqIds);
  }
  pFVar1 = &param_1->PrereqName;
  pFVar3 = &this->PrereqName;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrereqName).Data.ArrayNum = (param_1->PrereqName).Data.ArrayNum;
    (this->PrereqName).Data.ArrayMax = (param_1->PrereqName).Data.ArrayMax;
    (param_1->PrereqName).Data.ArrayNum = 0;
    (param_1->PrereqName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PrereqPath;
  pFVar3 = &this->PrereqPath;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrereqPath).Data.ArrayNum = (param_1->PrereqPath).Data.ArrayNum;
    (this->PrereqPath).Data.ArrayMax = (param_1->PrereqPath).Data.ArrayMax;
    (param_1->PrereqPath).Data.ArrayNum = 0;
    (param_1->PrereqPath).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PrereqArgs;
  pFVar3 = &this->PrereqArgs;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrereqArgs).Data.ArrayNum = (param_1->PrereqArgs).Data.ArrayNum;
    (this->PrereqArgs).Data.ArrayMax = (param_1->PrereqArgs).Data.ArrayMax;
    (param_1->PrereqArgs).Data.ArrayNum = 0;
    (param_1->PrereqArgs).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->BuildId;
  pFVar1 = &this->BuildId;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BuildId).Data.ArrayNum = (param_1->BuildId).Data.ArrayNum;
    (this->BuildId).Data.ArrayMax = (param_1->BuildId).Data.ArrayMax;
    (param_1->BuildId).Data.ArrayNum = 0;
    (param_1->BuildId).Data.ArrayMax = 0;
  }
  return this;
}

// FManifestMeta @ 1432241f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestMeta * __thiscall BuildPatchServices::FManifestMeta::FManifestMeta(FManifestMeta *this)

{
  FGuid local_18;
  
  this->FeatureLevel = Invalid;
  (this->AppName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppName).Data.ArrayNum = 0;
  (this->AppName).Data.ArrayMax = 0;
  (this->BuildVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildVersion).Data.ArrayNum = 0;
  (this->BuildVersion).Data.ArrayMax = 0;
  (this->LaunchExe).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchExe).Data.ArrayNum = 0;
  (this->LaunchExe).Data.ArrayMax = 0;
  (this->LaunchCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchCommand).Data.ArrayNum = 0;
  (this->LaunchCommand).Data.ArrayMax = 0;
  *(undefined8 *)&(this->PrereqIds).Elements = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x20 = 0;
  this->bIsFileData = false;
  this->AppID = 0xffffffff;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x34 = 0;
  (this->PrereqIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrereqIds).HashSize = 0;
  (this->PrereqName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqName).Data.ArrayNum = 0;
  (this->PrereqName).Data.ArrayMax = 0;
  (this->PrereqPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqPath).Data.ArrayNum = 0;
  (this->PrereqPath).Data.ArrayMax = 0;
  (this->PrereqArgs).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqArgs).Data.ArrayNum = 0;
  (this->PrereqArgs).Data.ArrayMax = 0;
  FGuid::NewGuid(&local_18);
  FBase64::Encode(&this->BuildId,(uchar *)&local_18,0x10,Standard);
  ::FString::ReplaceInline(&this->BuildId,L"+",L"-",CaseSensitive);
  ::FString::ReplaceInline(&this->BuildId,L"/",L"_",CaseSensitive);
  ::FString::ReplaceInline(&this->BuildId,L"=",L"",CaseSensitive);
  return this;
}

