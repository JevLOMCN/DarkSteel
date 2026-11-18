// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// FOnDemandToc @ 1445a60b0

FOnDemandToc * __thiscall
UE::IoStore::FOnDemandToc::FOnDemandToc(FOnDemandToc *this,FOnDemandToc *param_1)

{
  uint uVar1;
  long64 lVar2;
  
  (this->Header).Magic = (param_1->Header).Magic;
  (this->Header).Version = (param_1->Header).Version;
  (this->Header).Flags = (param_1->Header).Flags;
  uVar1 = (param_1->Header).BlockSize;
  (this->Header).CompressionFormat.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).BlockSize = uVar1;
  (this->Header).CompressionFormat.Data.AllocatorInstance.Data =
       (param_1->Header).CompressionFormat.Data.AllocatorInstance.Data;
  (param_1->Header).CompressionFormat.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).CompressionFormat.Data.ArrayNum = (param_1->Header).CompressionFormat.Data.ArrayNum
  ;
  (this->Header).CompressionFormat.Data.ArrayMax = (param_1->Header).CompressionFormat.Data.ArrayMax
  ;
  (param_1->Header).CompressionFormat.Data.ArrayNum = 0;
  (param_1->Header).CompressionFormat.Data.ArrayMax = 0;
  (this->Header).ChunksDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ChunksDirectory.Data.AllocatorInstance.Data =
       (param_1->Header).ChunksDirectory.Data.AllocatorInstance.Data;
  (param_1->Header).ChunksDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ChunksDirectory.Data.ArrayNum = (param_1->Header).ChunksDirectory.Data.ArrayNum;
  (this->Header).ChunksDirectory.Data.ArrayMax = (param_1->Header).ChunksDirectory.Data.ArrayMax;
  (param_1->Header).ChunksDirectory.Data.ArrayNum = 0;
  (param_1->Header).ChunksDirectory.Data.ArrayMax = 0;
  (this->Header).HostGroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).HostGroupName.Data.AllocatorInstance.Data =
       (param_1->Header).HostGroupName.Data.AllocatorInstance.Data;
  (param_1->Header).HostGroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).HostGroupName.Data.ArrayNum = (param_1->Header).HostGroupName.Data.ArrayNum;
  (this->Header).HostGroupName.Data.ArrayMax = (param_1->Header).HostGroupName.Data.ArrayMax;
  (param_1->Header).HostGroupName.Data.ArrayNum = 0;
  (param_1->Header).HostGroupName.Data.ArrayMax = 0;
  lVar2 = (param_1->Meta).EpochTimestamp;
  (this->Meta).BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).EpochTimestamp = lVar2;
  (this->Meta).BuildVersion.Data.AllocatorInstance.Data =
       (param_1->Meta).BuildVersion.Data.AllocatorInstance.Data;
  (param_1->Meta).BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).BuildVersion.Data.ArrayNum = (param_1->Meta).BuildVersion.Data.ArrayNum;
  (this->Meta).BuildVersion.Data.ArrayMax = (param_1->Meta).BuildVersion.Data.ArrayMax;
  (param_1->Meta).BuildVersion.Data.ArrayNum = 0;
  (param_1->Meta).BuildVersion.Data.ArrayMax = 0;
  (this->Meta).TargetPlatform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).TargetPlatform.Data.AllocatorInstance.Data =
       (param_1->Meta).TargetPlatform.Data.AllocatorInstance.Data;
  (param_1->Meta).TargetPlatform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).TargetPlatform.Data.ArrayNum = (param_1->Meta).TargetPlatform.Data.ArrayNum;
  (this->Meta).TargetPlatform.Data.ArrayMax = (param_1->Meta).TargetPlatform.Data.ArrayMax;
  (param_1->Meta).TargetPlatform.Data.ArrayNum = 0;
  (param_1->Meta).TargetPlatform.Data.ArrayMax = 0;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).AllocatorInstance.Data = (param_1->Containers).AllocatorInstance.Data;
  (param_1->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = (param_1->Containers).ArrayNum;
  (this->Containers).ArrayMax = (param_1->Containers).ArrayMax;
  (param_1->Containers).ArrayNum = 0;
  (param_1->Containers).ArrayMax = 0;
  (this->AdditionalFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalFiles).AllocatorInstance.Data = (param_1->AdditionalFiles).AllocatorInstance.Data
  ;
  (param_1->AdditionalFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalFiles).ArrayNum = (param_1->AdditionalFiles).ArrayNum;
  (this->AdditionalFiles).ArrayMax = (param_1->AdditionalFiles).ArrayMax;
  (param_1->AdditionalFiles).ArrayNum = 0;
  (param_1->AdditionalFiles).ArrayMax = 0;
  (this->TagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagSets).AllocatorInstance.Data = (param_1->TagSets).AllocatorInstance.Data;
  (param_1->TagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagSets).ArrayNum = (param_1->TagSets).ArrayNum;
  (this->TagSets).ArrayMax = (param_1->TagSets).ArrayMax;
  (param_1->TagSets).ArrayNum = 0;
  (param_1->TagSets).ArrayMax = 0;
  return this;
}

// FOnDemandToc @ 1445a6220

FOnDemandToc * __thiscall UE::IoStore::FOnDemandToc::FOnDemandToc(FOnDemandToc *this)

{
  (this->Header).Version = 0xc;
  (this->Header).Flags = 0;
  (this->Header).Magic = 0x6f6e64656d616e64;
  (this->Header).BlockSize = 0;
  (this->Header).CompressionFormat.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).CompressionFormat.Data.ArrayNum = 0;
  (this->Header).CompressionFormat.Data.ArrayMax = 0;
  (this->Header).ChunksDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ChunksDirectory.Data.ArrayNum = 0;
  (this->Header).ChunksDirectory.Data.ArrayMax = 0;
  (this->Header).HostGroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).HostGroupName.Data.ArrayNum = 0;
  (this->Header).HostGroupName.Data.ArrayMax = 0;
  (this->Meta).EpochTimestamp = 0;
  (this->Meta).BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).BuildVersion.Data.ArrayNum = 0;
  (this->Meta).BuildVersion.Data.ArrayMax = 0;
  (this->Meta).TargetPlatform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meta).TargetPlatform.Data.ArrayNum = 0;
  (this->Meta).TargetPlatform.Data.ArrayMax = 0;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = 0;
  (this->Containers).ArrayMax = 0;
  (this->AdditionalFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalFiles).ArrayNum = 0;
  (this->AdditionalFiles).ArrayMax = 0;
  (this->TagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagSets).ArrayNum = 0;
  (this->TagSets).ArrayMax = 0;
  return this;
}

