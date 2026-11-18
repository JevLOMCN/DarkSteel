// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// FStatsInfo @ 146f299a0

FStatsInfo * __thiscall FEQSDebugger::FStatsInfo::FStatsInfo(FStatsInfo *this,FStatsInfo *param_1)

{
  int iVar1;
  double dVar2;
  
  (this->MostExpensive).OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MostExpensive).OptionStats.AllocatorInstance.Data =
       (param_1->MostExpensive).OptionStats.AllocatorInstance.Data;
  (param_1->MostExpensive).OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MostExpensive).OptionStats.ArrayNum = (param_1->MostExpensive).OptionStats.ArrayNum;
  (this->MostExpensive).OptionStats.ArrayMax = (param_1->MostExpensive).OptionStats.ArrayMax;
  (param_1->MostExpensive).OptionStats.ArrayNum = 0;
  (param_1->MostExpensive).OptionStats.ArrayMax = 0;
  (this->MostExpensive).OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MostExpensive).OptionData.AllocatorInstance.Data =
       (param_1->MostExpensive).OptionData.AllocatorInstance.Data;
  (param_1->MostExpensive).OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MostExpensive).OptionData.ArrayNum = (param_1->MostExpensive).OptionData.ArrayNum;
  (this->MostExpensive).OptionData.ArrayMax = (param_1->MostExpensive).OptionData.ArrayMax;
  (param_1->MostExpensive).OptionData.ArrayNum = 0;
  (param_1->MostExpensive).OptionData.ArrayMax = 0;
  dVar2 = param_1->MostExpensiveDuration;
  (this->TotalAvgData).OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MostExpensiveDuration = dVar2;
  (this->TotalAvgData).OptionStats.AllocatorInstance.Data =
       (param_1->TotalAvgData).OptionStats.AllocatorInstance.Data;
  (param_1->TotalAvgData).OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TotalAvgData).OptionStats.ArrayNum = (param_1->TotalAvgData).OptionStats.ArrayNum;
  (this->TotalAvgData).OptionStats.ArrayMax = (param_1->TotalAvgData).OptionStats.ArrayMax;
  (param_1->TotalAvgData).OptionStats.ArrayNum = 0;
  (param_1->TotalAvgData).OptionStats.ArrayMax = 0;
  (this->TotalAvgData).OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TotalAvgData).OptionData.AllocatorInstance.Data =
       (param_1->TotalAvgData).OptionData.AllocatorInstance.Data;
  (param_1->TotalAvgData).OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TotalAvgData).OptionData.ArrayNum = (param_1->TotalAvgData).OptionData.ArrayNum;
  (this->TotalAvgData).OptionData.ArrayMax = (param_1->TotalAvgData).OptionData.ArrayMax;
  (param_1->TotalAvgData).OptionData.ArrayNum = 0;
  (param_1->TotalAvgData).OptionData.ArrayMax = 0;
  this->TotalAvgDuration = param_1->TotalAvgDuration;
  iVar1 = param_1->TotalAvgCount;
  (this->TickPct).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TotalAvgCount = iVar1;
  (this->TickPct).AllocatorInstance.Data = (param_1->TickPct).AllocatorInstance.Data;
  (param_1->TickPct).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickPct).ArrayNum = (param_1->TickPct).ArrayNum;
  (this->TickPct).ArrayMax = (param_1->TickPct).ArrayMax;
  (param_1->TickPct).ArrayNum = 0;
  (param_1->TickPct).ArrayMax = 0;
  this->LastTickTime = param_1->LastTickTime;
  this->LastTickFrame = param_1->LastTickFrame;
  this->FirstTickEntry = param_1->FirstTickEntry;
  this->LastTickEntry = param_1->LastTickEntry;
  return this;
}

// FStatsInfo @ 146f29a80

FStatsInfo * __thiscall FEQSDebugger::FStatsInfo::FStatsInfo(FStatsInfo *this,FStatsInfo *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FEnvQueryDebugProfileData::FEnvQueryDebugProfileData(&this->MostExpensive,&param_1->MostExpensive)
  ;
  this->MostExpensiveDuration = param_1->MostExpensiveDuration;
  FEnvQueryDebugProfileData::FEnvQueryDebugProfileData(&this->TotalAvgData,&param_1->TotalAvgData);
  pTVar1 = &this->TickPct;
  this->TotalAvgDuration = param_1->TotalAvgDuration;
  this->TotalAvgCount = param_1->TotalAvgCount;
  piVar2 = &(this->TickPct).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TickPct).ArrayNum;
  _Src = (param_1->TickPct).AllocatorInstance.Data;
  (this->TickPct).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->LastTickTime = param_1->LastTickTime;
  this->LastTickFrame = param_1->LastTickFrame;
  this->FirstTickEntry = param_1->FirstTickEntry;
  this->LastTickEntry = param_1->LastTickEntry;
  return this;
}

// ~FStatsInfo @ 146f2e550

void __thiscall FEQSDebugger::FStatsInfo::~FStatsInfo(FStatsInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TickPct).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
            ((FOptionData *)(this->TotalAvgData).OptionData.AllocatorInstance.Data,
             (this->TotalAvgData).OptionData.ArrayNum);
  pFVar1 = (this->TotalAvgData).OptionData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((FOptionStat *)(this->TotalAvgData).OptionStats.AllocatorInstance.Data,
             (this->TotalAvgData).OptionStats.ArrayNum);
  pFVar1 = (this->TotalAvgData).OptionStats.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
            ((FOptionData *)(this->MostExpensive).OptionData.AllocatorInstance.Data,
             (this->MostExpensive).OptionData.ArrayNum);
  pFVar1 = (this->MostExpensive).OptionData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((FOptionStat *)(this->MostExpensive).OptionStats.AllocatorInstance.Data,
             (this->MostExpensive).OptionStats.ArrayNum);
  pFVar1 = (this->MostExpensive).OptionStats.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

