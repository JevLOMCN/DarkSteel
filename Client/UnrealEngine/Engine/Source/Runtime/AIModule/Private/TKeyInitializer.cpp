// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// operator<FName,FEQSDebugger::FStatsInfo>_TTuple<FName,FEQSDebugger::FStatsInfo> @ 146f157b0

TTuple<FName,FEQSDebugger::FStatsInfo> * __thiscall
TKeyInitializer<FName_&&>::
operator<FName,FEQSDebugger::FStatsInfo>_TTuple<FName,FEQSDebugger::FStatsInfo>
          (TKeyInitializer<FName_&&> *this,
          TTuple<FName,FEQSDebugger::FStatsInfo> *__return_storage_ptr__)

{
  uint uVar1;
  ForAnyElementType FVar2;
  FStatsInfo local_88;
  
  local_88.FirstTickEntry = 0xffff;
  local_88.LastTickEntry = 0;
  local_88.MostExpensive.OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.MostExpensive.OptionStats.ArrayNum = 0;
  local_88.MostExpensive.OptionStats.ArrayMax = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  local_88.MostExpensive.OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.MostExpensive.OptionData.ArrayNum = 0;
  local_88.MostExpensive.OptionData.ArrayMax = 0;
  local_88.TotalAvgData.OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.TotalAvgData.OptionStats.ArrayNum = 0;
  local_88.TotalAvgData.OptionStats.ArrayMax = 0;
  local_88.TotalAvgData.OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.TotalAvgData.OptionData.ArrayNum = 0;
  local_88.TotalAvgData.OptionData.ArrayMax = 0;
  local_88.TotalAvgCount = 0;
  local_88.TickPct.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.TickPct.ArrayNum = 0;
  local_88.TickPct.ArrayMax = 0;
  local_88.LastTickFrame = 0;
  local_88.MostExpensiveDuration = 0.0;
  local_88.TotalAvgDuration = 0.0;
  local_88.LastTickTime = 0.0;
  FEQSDebugger::FStatsInfo::FStatsInfo((FStatsInfo *)&__return_storage_ptr__->field_0x8,&local_88);
  if (local_88.TickPct.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.TickPct.AllocatorInstance.Data);
  }
  FVar2.Data = local_88.TotalAvgData.OptionData.AllocatorInstance.Data;
  DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
            ((FOptionData *)local_88.TotalAvgData.OptionData.AllocatorInstance.Data,
             local_88.TotalAvgData.OptionData.ArrayNum);
  if ((FOptionData *)FVar2.Data != (FOptionData *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_88.TotalAvgData.OptionStats.AllocatorInstance.Data;
  DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((FOptionStat *)local_88.TotalAvgData.OptionStats.AllocatorInstance.Data,
             local_88.TotalAvgData.OptionStats.ArrayNum);
  if ((FOptionStat *)FVar2.Data != (FOptionStat *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_88.MostExpensive.OptionData.AllocatorInstance.Data;
  DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
            ((FOptionData *)local_88.MostExpensive.OptionData.AllocatorInstance.Data,
             local_88.MostExpensive.OptionData.ArrayNum);
  if ((FOptionData *)FVar2.Data != (FOptionData *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_88.MostExpensive.OptionStats.AllocatorInstance.Data;
  DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((FOptionStat *)local_88.MostExpensive.OptionStats.AllocatorInstance.Data,
             local_88.MostExpensive.OptionStats.ArrayNum);
  if ((FOptionStat *)FVar2.Data != (FOptionStat *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

