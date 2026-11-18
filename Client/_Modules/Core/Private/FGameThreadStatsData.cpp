// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FGameThreadStatsData @ 1419cda50

FGameThreadStatsData * __thiscall
FGameThreadStatsData::FGameThreadStatsData(FGameThreadStatsData *this,bool param_1,bool param_2)

{
  (this->ActiveStatGroups).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveStatGroups).Array.ArrayNum = 0;
  (this->ActiveStatGroups).Array.ArrayMax = 0;
  (this->GroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupNames).ArrayNum = 0;
  (this->GroupNames).ArrayMax = 0;
  (this->GroupDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupDescriptions).ArrayNum = 0;
  (this->GroupDescriptions).ArrayMax = 0;
  *(undefined8 *)&this->PoolCapacity = 0;
  *(undefined8 *)&(this->PoolCapacity).field_0x8 = 0;
  *(undefined8 *)&(this->PoolCapacity).field_0x20 = 0;
  *(undefined4 *)&(this->PoolCapacity).field_0x28 = 0;
  *(undefined4 *)&(this->PoolCapacity).field_0x2c = 0x80;
  *(undefined4 *)&(this->PoolCapacity).field_0x34 = 0;
  *(undefined4 *)&(this->PoolCapacity).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PoolCapacity).field_0x40 = 0;
  *(undefined4 *)&(this->PoolCapacity).field_0x48 = 0;
  *(undefined8 *)&this->PoolAbbreviation = 0;
  *(undefined8 *)&(this->PoolAbbreviation).field_0x8 = 0;
  *(undefined8 *)&(this->PoolAbbreviation).field_0x20 = 0;
  *(undefined4 *)&(this->PoolAbbreviation).field_0x28 = 0;
  *(undefined4 *)&(this->PoolAbbreviation).field_0x2c = 0x80;
  *(undefined4 *)&(this->PoolAbbreviation).field_0x34 = 0;
  *(undefined4 *)&(this->PoolAbbreviation).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PoolAbbreviation).field_0x40 = 0;
  *(undefined4 *)&(this->PoolAbbreviation).field_0x48 = 0;
  (this->RootFilter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootFilter).Data.ArrayNum = 0;
  (this->RootFilter).Data.ArrayMax = 0;
  *(undefined8 *)&this->NameToStatMap = 0;
  *(undefined8 *)&(this->NameToStatMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameToStatMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameToStatMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameToStatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToStatMap).field_0x34 = 0;
  *(undefined4 *)&(this->NameToStatMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameToStatMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameToStatMap).field_0x48 = 0;
  this->bDrawOnlyRawStats = param_1;
  this->bRenderStats = param_2;
  return this;
}

