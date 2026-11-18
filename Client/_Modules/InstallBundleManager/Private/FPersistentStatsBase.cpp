// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 25

// FPersistentStatsBase @ 148bc3250

FPersistentStatsBase * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::FPersistentStatsBase
          (FPersistentStatsBase *this,FPersistentStatsBase *param_1)

{
  this->_padding_ = (longlong)&___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  *(undefined8 *)&(this->TimingStatsMap).field_0x0 = 0;
  *(undefined8 *)&(this->TimingStatsMap).field_0x8 = 0;
  *(undefined8 *)&(this->TimingStatsMap).field_0x20 = 0;
  *(undefined4 *)&(this->TimingStatsMap).field_0x28 = 0;
  *(undefined4 *)&(this->TimingStatsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimingStatsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimingStatsMap).field_0x34 = 0;
  *(undefined8 *)&(this->TimingStatsMap).field_0x40 = 0;
  *(undefined4 *)&(this->TimingStatsMap).field_0x48 = 0;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
               *)&this->TimingStatsMap,
              (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
               *)&param_1->TimingStatsMap);
  *(undefined8 *)&(this->CountStatMap).field_0x0 = 0;
  *(undefined8 *)&(this->CountStatMap).field_0x8 = 0;
  *(undefined8 *)&(this->CountStatMap).field_0x20 = 0;
  *(undefined4 *)&(this->CountStatMap).field_0x28 = 0;
  *(undefined4 *)&(this->CountStatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CountStatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CountStatMap).field_0x34 = 0;
  *(undefined8 *)&(this->CountStatMap).field_0x40 = 0;
  *(undefined4 *)&(this->CountStatMap).field_0x48 = 0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&this->CountStatMap,
            (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&param_1->CountStatMap);
  ::FString::FString(&this->AnalyticsSessionID,&param_1->AnalyticsSessionID);
  this->bIsActive = param_1->bIsActive;
  this->bIsDirty = param_1->bIsDirty;
  this->bHasLoadedFromDisk = param_1->bHasLoadedFromDisk;
  return this;
}

// ~FPersistentStatsBase @ 148bc40b0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::~FPersistentStatsBase
          (FPersistentStatsBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  pFVar1 = (this->AnalyticsSessionID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CountStatMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CountStatMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CountStatMap);
  *(undefined4 *)&(this->TimingStatsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TimingStatsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TimingStatsMap);
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  return;
}

// GetBaseExpectedAnalyticsID @ 148bca730

FString * __cdecl
InstallBundleUtil::PersistentStats::FPersistentStatsBase::GetBaseExpectedAnalyticsID
          (FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  pwVar1 = FApp::GetBuildVersion();
  pFVar2 = FGenericPlatformMisc::GetDeviceId(&local_18);
  ::FString::ConcatFC(&local_28,pFVar2,L"_");
  ::FString::ConcatFC(__return_storage_ptr__,&local_28,pwVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCountStatData @ 148bcb100

int * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::GetCountStatData
          (FPersistentStatsBase *this,ECountStatNames param_1)

{
  FString *pFVar1;
  int *piVar2;
  
  pFVar1 = PersistentStats::LexToString(param_1);
  piVar2 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 *)&this->CountStatMap,pFVar1);
  return piVar2;
}

// GetTimingStatData @ 148bcde80

FPersistentTimerData * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::GetTimingStatData
          (FPersistentStatsBase *this,ETimingStatNames param_1)

{
  FString *pFVar1;
  FPersistentTimerData *pFVar2;
  
  pFVar1 = PersistentStats::LexToString(param_1);
  pFVar2 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
           ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                   *)&this->TimingStatsMap,pFVar1);
  return pFVar2;
}

// HandleTimerStatsAfterDataLoad @ 148bce210

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::HandleTimerStatsAfterDataLoad
          (FPersistentStatsBase *this)

{
  bool bVar1;
  
  bVar1 = IsTimingStatStarted(this,TotalTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,TotalTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,ChunkDBDownloadTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,ChunkDBDownloadTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,InstallTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,InstallTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,PSOTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,PSOTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,TotalTime_FG);
  if (bVar1) {
    StopTimingStat(this,TotalTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,ChunkDBDownloadTime_FG);
  if (bVar1) {
    StopTimingStat(this,ChunkDBDownloadTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,InstallTime_FG);
  if (bVar1) {
    StopTimingStat(this,InstallTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,PSOTime_FG);
  if (bVar1) {
    StopTimingStat(this,PSOTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,TotalTime_BG);
  if (bVar1) {
    StopTimingStat(this,TotalTime_BG,true);
  }
  bVar1 = IsTimingStatStarted(this,ChunkDBDownloadTime_BG);
  if (bVar1) {
    StopTimingStat(this,ChunkDBDownloadTime_BG,true);
  }
  bVar1 = IsTimingStatStarted(this,InstallTime_BG);
  if (bVar1) {
    StopTimingStat(this,InstallTime_BG,true);
  }
  bVar1 = IsTimingStatStarted(this,PSOTime_BG);
  if (bVar1) {
    StopTimingStat(this,PSOTime_BG,true);
    return;
  }
  return;
}

// HasCountStat @ 148bce360

bool __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::HasCountStat
          (FPersistentStatsBase *this,ECountStatNames param_1)

{
  FString *pFVar1;
  int *piVar2;
  
  pFVar1 = PersistentStats::LexToString(param_1);
  piVar2 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 *)&this->CountStatMap,pFVar1);
  return piVar2 != (int *)0x0;
}

// HasTimingStat @ 148bce480

bool __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::HasTimingStat
          (FPersistentStatsBase *this,ETimingStatNames param_1)

{
  FString *pFVar1;
  FPersistentTimerData *pFVar2;
  
  pFVar1 = PersistentStats::LexToString(param_1);
  pFVar2 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
           ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                   *)&this->TimingStatsMap,pFVar1);
  return pFVar2 != (FPersistentTimerData *)0x0;
}

// IncrementCountStat @ 148bce900

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::IncrementCountStat
          (FPersistentStatsBase *this,ECountStatNames param_1)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int *piVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  pFVar3 = PersistentStats::LexToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  piVar4 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                       *)&this->CountStatMap,uVar2,pFVar3);
  *piVar4 = *piVar4 + 1;
  this->bIsDirty = true;
  return;
}

// IsTimingStatStarted @ 148bcf570

bool __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::IsTimingStatStarted
          (FPersistentStatsBase *this,ETimingStatNames param_1)

{
  bool bVar1;
  FString *pFVar2;
  FPersistentTimerData *pFVar3;
  ETimingStatNames *local_res8;
  ETimingStatNames local_res10 [24];
  
  local_res10[0] = param_1;
  pFVar2 = PersistentStats::LexToString(param_1);
  pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
           ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                   *)&this->TimingStatsMap,pFVar2);
  if (pFVar3 != (FPersistentTimerData *)0x0) {
    pFVar2 = PersistentStats::LexToString(local_res10[0]);
    pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
             ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                     *)&this->TimingStatsMap,pFVar2);
    if (pFVar3 == (FPersistentTimerData *)0x0) {
      local_res8 = local_res10;
      bVar1 = `InstallBundleUtil::PersistentStats::FPersistentStatsBase::IsTimingStatStarted'::__l6
              ::<lambda_1>::operator()(&local_res8);
      if (!bVar1) {
        return false;
      }
    }
    if (pFVar3->LastUpdateTime != 0.0) {
      return true;
    }
  }
  return false;
}

// LoadStatsFromDisk @ 148bd0ec0

bool __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::LoadStatsFromDisk
          (FPersistentStatsBase *this)

{
  bool bVar1;
  FString *pFVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  FString local_28;
  void *local_18 [2];
  
  if (this->bHasLoadedFromDisk == false) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar2 = (FString *)(**(code **)(this->_padding_ + 0x58))(this,local_18);
    bVar1 = FPaths::FileExists(pFVar2);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (bVar1) {
      puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_18);
      if (*(int *)(puVar3 + 1) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)*puVar3;
      }
      FFileHelper::LoadFileToString(&local_28,pwVar4,None,0);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    if (1 < local_28.Data.ArrayNum) {
      bVar1 = (bool)(**(code **)(this->_padding_ + 0x38))(this,&local_28);
      this->bHasLoadedFromDisk = bVar1;
      if (bVar1 != false) {
        HandleTimerStatsAfterDataLoad(this);
      }
      bVar1 = this->bHasLoadedFromDisk;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return bVar1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// OnLoadingDataFromDisk @ 148bd1fe0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::OnLoadingDataFromDisk
          (FPersistentStatsBase *this)

{
  bool bVar1;
  
  bVar1 = IsTimingStatStarted(this,TotalTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,TotalTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,ChunkDBDownloadTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,ChunkDBDownloadTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,InstallTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,InstallTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,PSOTime_Real);
  if (bVar1) {
    UpdateTimingStat(this,PSOTime_Real);
  }
  bVar1 = IsTimingStatStarted(this,TotalTime_FG);
  if (bVar1) {
    StopTimingStat(this,TotalTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,ChunkDBDownloadTime_FG);
  if (bVar1) {
    StopTimingStat(this,ChunkDBDownloadTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,InstallTime_FG);
  if (bVar1) {
    StopTimingStat(this,InstallTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,PSOTime_FG);
  if (bVar1) {
    StopTimingStat(this,PSOTime_FG,false);
  }
  bVar1 = IsTimingStatStarted(this,TotalTime_BG);
  if (bVar1) {
    StopTimingStat(this,TotalTime_BG,true);
  }
  bVar1 = IsTimingStatStarted(this,ChunkDBDownloadTime_BG);
  if (bVar1) {
    StopTimingStat(this,ChunkDBDownloadTime_BG,true);
  }
  bVar1 = IsTimingStatStarted(this,InstallTime_BG);
  if (bVar1) {
    StopTimingStat(this,InstallTime_BG,true);
  }
  bVar1 = IsTimingStatStarted(this,PSOTime_BG);
  if (bVar1) {
    StopTimingStat(this,PSOTime_BG,true);
    return;
  }
  return;
}

// ResetStats @ 148bd4330

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::ResetStats
          (FPersistentStatsBase *this,FString *param_1)

{
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
           *)&this->TimingStatsMap);
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this->CountStatMap);
  ::FString::operator=(&this->AnalyticsSessionID,param_1);
  this->bIsDirty = true;
  return;
}

// SaveStatsToDisk @ 148bd46d0

bool __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::SaveStatsToDisk
          (FPersistentStatsBase *this)

{
  bool bVar1;
  IFileManager *pIVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  TStringView<wchar_t> local_38;
  void *local_28;
  void *local_18 [2];
  
  this->bIsDirty = false;
  pIVar2 = IFileManager::Get();
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_18);
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*puVar3;
  }
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this);
  local_38.DataPtr = (wchar_t *)*puVar3;
  local_38.Size = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    local_38.Size = 0;
  }
  bVar1 = FFileHelper::SaveStringToFile(&local_38,pwVar4,AutoDetect,pIVar2,0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return bVar1;
}

// Serialize @ 148bd6580

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::Serialize
          (FPersistentStatsBase *this,FJsonSerializerBase *param_1,bool param_2)

{
  TMap<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
  *pTVar1;
  uint uVar2;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FJsonObject *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  TSharedPtr<FJsonObject,1> *pTVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FPersistentTimerData local_1a8;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  FJsonObject *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  TSharedPtr<FJsonObject,1> local_108;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  *pTStack_60;
  undefined4 local_3c;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  uStack_f0 = CONCAT44(uStack_1bc,0x12);
  local_f8 = L"AnalyticsSessionID";
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_f8,&this->AnalyticsSessionID);
  uStack_e0 = CONCAT44(uStack_1bc,10);
  local_e8 = L"CountStats";
  (**(code **)((longlong)*param_1 + 0xd8))(param_1,&local_e8,&this->CountStatMap);
  cVar6 = (**(code **)*param_1)(param_1);
  if (cVar6 == '\0') {
    iStack_1b0 = 0xb;
    local_1b8 = L"TimingStats";
    uStack_a0 = CONCAT44(uStack_1ac,0xb);
    local_a8 = L"TimingStats";
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_a8);
    pTVar1 = &this->TimingStatsMap;
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_110 = 0;
    stack0xfffffffffffffec8 = local_88._16_16_;
    local_148 = (longlong *)local_88._0_8_;
    auStack_140._0_8_ = local_88._8_8_;
    local_128 = local_68;
    pTStack_120 = pTStack_60;
    uVar15 = local_88._24_8_ >> 0x20;
    local_118 = (TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        plVar10 = local_148;
        lVar14 = (longlong)(int)uVar15 * 0x30;
        local_1b8 = *(wchar_t **)(lVar14 + *local_148);
        iVar17 = *(int *)(lVar14 + 8 + *local_148);
        iStack_1b0 = iVar17 + -1;
        if (iVar17 == 0) {
          iStack_1b0 = 0;
        }
        uStack_90 = CONCAT44(uStack_1ac,iStack_1b0);
        local_98 = local_1b8;
        (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_98);
        plVar10 = (longlong *)(*plVar10 + 0x10 + lVar14);
        (**(code **)(*plVar10 + 0x50))(plVar10,param_1,1);
        (**(code **)((longlong)*param_1 + 0x20))(param_1);
        uStack_130 = uStack_130 & ~auStack_140._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
        uVar15 = (ulonglong)uStack_12c;
      } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
      if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
        iVar17 = 1;
        uVar8 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34
        ;
        if (3 < uVar8) {
          uVar15 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_118->HashSize < iVar17)) || (iVar17 < local_118->HashSize))
        {
          local_118->HashSize = iVar17;
          TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::Rehash(local_118);
        }
      }
    }
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  else {
    plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_1b8);
    if ((*plVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar10;
    local_d8._12_4_ = uStack_1bc;
    local_d8.Size = 0xb;
    local_d8.DataPtr = L"TimingStats";
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"TimingStats");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(this_00,uVar8,&local_d8);
    if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
       (pTVar11->Object->Type != Object)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1ac,iStack_1b0));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_1ac,iStack_1b0));
      plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_b8);
      if ((*plVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_c8._12_4_ = uStack_1bc;
      local_c8.Size = 0xb;
      local_c8.DataPtr = L"TimingStats";
      pTVar12 = FJsonObject::GetObjectField((FJsonObject *)*plVar10,&local_c8);
      pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar12->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      if ((pFVar4 == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = *(int *)&(pFVar4->Values).field_0x28;
      local_1a8.CurrentValue = (double)&(pFVar4->Values).field_0x10;
      iVar16 = 0;
      uVar8 = 1;
      local_188 = 0;
      iVar9 = 0;
      if (iVar17 != 0) {
        puVar18 = *(uint **)&(pFVar4->Values).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)local_1a8.CurrentValue;
        }
        uVar2 = *puVar18;
        while (uVar2 == 0) {
          lVar14 = (longlong)iVar16;
          local_188 = local_188 + 0x20;
          iVar16 = iVar16 + 1;
          iVar9 = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_148bd6821;
          uVar2 = puVar18[lVar14 + 1];
        }
        uVar8 = -uVar2 & uVar2;
        uVar15 = (ulonglong)uVar8 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = local_188 + -1 + (int)lVar14;
        if (iVar17 < iVar9) {
          iVar9 = iVar17;
        }
      }
LAB_148bd6821:
      local_1a8.LastUpdateTime = (double)CONCAT44(uVar8,iVar16);
      uStack_190 = 0xffffffff;
      uStack_184 = local_3c;
      TStack_170.CurrentBitIndex = iVar9;
      TStack_170.UnvisitedBitMask = 0xffffffff;
      TStack_170._padding_ = (longlong)local_1a8.LastUpdateTime;
      TStack_170._28_4_ = local_3c;
      TStack_170.BaseBitIndex = local_188;
      local_1a8._padding_ = (longlong)pFVar4;
      iStack_18c = iVar9;
      local_178 = pFVar4;
      TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8.CurrentValue;
      if (iVar9 < iVar17) {
        do {
          pFVar4 = local_178;
          local_1a8._padding_ =
               (longlong)&___7FPersistentTimerData_PersistentStats_InstallBundleUtil__6B_;
          local_1a8.LastUpdateTime = 0.0;
          local_1a8.CurrentValue = 0.0;
          lVar14 = *(longlong *)&local_178->Values;
          if ((*(longlong *)(lVar14 + 0x10 + (longlong)iVar9 * 0x28) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar13 = (undefined8 *)
                    (**(code **)**(undefined8 **)(lVar14 + 0x10 + (longlong)iVar9 * 0x28))();
          local_108.Object = (FJsonObject *)*puVar13;
          local_108.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar13[1];
          if (local_108.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FJsonSerializable::FromJson((FJsonSerializable *)&local_1a8,&local_108);
          TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
          ::
          Emplace<FString_const_&,InstallBundleUtil::PersistentStats::FPersistentTimerData_const_&>
                    ((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                      *)&this->TimingStatsMap,
                     (FString *)
                     (*(longlong *)&pFVar4->Values + (longlong)TStack_170.CurrentBitIndex * 0x28),
                     &local_1a8);
          FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_1a8);
          TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
          iVar9 = TStack_170.CurrentBitIndex;
        } while (TStack_170.CurrentBitIndex < (TStack_170.Array)->NumBits);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

// StartTimingStat @ 148bd9ba0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::StartTimingStat
          (FPersistentStatsBase *this,ETimingStatNames param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  FPersistentTimerData *pFVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  LARGE_INTEGER local_res8;
  
  bVar2 = IsTimingStatStarted(this,param_1);
  if (bVar2) {
    UpdateTimingStat(this,param_1);
    this->bIsDirty = true;
    return;
  }
  pFVar5 = PersistentStats::LexToString(param_1);
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar4 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  iVar4 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                      *)&this->TimingStatsMap,uVar3,pFVar5);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x30 + *(longlong *)&this->TimingStatsMap, lVar8 == 0)) {
    pFVar6 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
             ::EmplaceByHash<FString_const_&>
                       ((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                         *)&this->TimingStatsMap,uVar3,pFVar5);
  }
  else {
    pFVar6 = (FPersistentTimerData *)(lVar8 + 0x10);
  }
  QueryPerformanceCounter(&local_res8);
  pFVar6->LastUpdateTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  this->bIsDirty = true;
  return;
}

// StatsBegin @ 148bda120

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::StatsBegin
          (FPersistentStatsBase *this,FString *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  this->bIsActive = true;
  LoadStatsFromDisk(this);
  if (!param_2) {
    iVar2 = (this->AnalyticsSessionID).Data.ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) goto LAB_148bda1a9;
      iVar2 = wcscmp((wchar_t *)(this->AnalyticsSessionID).Data.AllocatorInstance.Data,
                     (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (bVar3) goto LAB_148bda1a9;
  }
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
           *)&this->TimingStatsMap);
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this->CountStatMap);
  ::FString::operator=(&this->AnalyticsSessionID,param_1);
  this->bIsDirty = true;
LAB_148bda1a9:
  SaveStatsToDisk(this);
  return;
}

// StatsEnd @ 148bda550

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::StatsEnd
          (FPersistentStatsBase *this,bool param_1)

{
  bool bVar1;
  FString *pFVar2;
  FPersistentTimerData *pFVar3;
  ETimingStatNames EVar4;
  ETimingStatNames *local_res8;
  ETimingStatNames local_res10 [8];
  
  this->bIsActive = false;
  if (param_1) {
    EVar4 = TotalTime_Real;
    do {
      local_res10[0] = EVar4;
      pFVar2 = PersistentStats::LexToString(EVar4);
      pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
               ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                       *)&this->TimingStatsMap,pFVar2);
      if (pFVar3 != (FPersistentTimerData *)0x0) {
        pFVar2 = PersistentStats::LexToString(local_res10[0]);
        pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                 ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                         *)&this->TimingStatsMap,pFVar2);
        if (pFVar3 == (FPersistentTimerData *)0x0) {
          local_res8 = local_res10;
          bVar1 = `InstallBundleUtil::PersistentStats::FPersistentStatsBase::IsTimingStatStarted'::
                  __l6::<lambda_1>::operator()(&local_res8);
          if (!bVar1) goto LAB_148bda5e9;
        }
        if (pFVar3->LastUpdateTime != 0.0) {
          StopTimingStat(this,EVar4,true);
        }
      }
LAB_148bda5e9:
      EVar4 = EVar4 + TotalTime_FG;
    } while (EVar4 < NumStatNames);
  }
  SaveStatsToDisk(this);
  return;
}

// StopAllActiveTimers @ 148bda6c0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::StopAllActiveTimers
          (FPersistentStatsBase *this)

{
  bool bVar1;
  FString *pFVar2;
  FPersistentTimerData *pFVar3;
  ETimingStatNames EVar4;
  ETimingStatNames local_res10 [8];
  ETimingStatNames *local_res18 [2];
  
  EVar4 = TotalTime_Real;
  do {
    local_res10[0] = EVar4;
    pFVar2 = PersistentStats::LexToString(EVar4);
    pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
             ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                     *)&this->TimingStatsMap,pFVar2);
    if (pFVar3 != (FPersistentTimerData *)0x0) {
      pFVar2 = PersistentStats::LexToString(local_res10[0]);
      pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
               ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                       *)&this->TimingStatsMap,pFVar2);
      if (pFVar3 == (FPersistentTimerData *)0x0) {
        local_res18[0] = local_res10;
        bVar1 = `InstallBundleUtil::PersistentStats::FPersistentStatsBase::IsTimingStatStarted'::
                __l6::<lambda_1>::operator()(local_res18);
        if (!bVar1) goto LAB_148bda748;
      }
      if (pFVar3->LastUpdateTime != 0.0) {
        StopTimingStat(this,EVar4,true);
      }
    }
LAB_148bda748:
    EVar4 = EVar4 + TotalTime_FG;
    if (PSOTime_BG < EVar4) {
      return;
    }
  } while( true );
}

// StopTimingStat @ 148bdae00

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::StopTimingStat
          (FPersistentStatsBase *this,ETimingStatNames param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  FPersistentTimerData *pFVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  if ((param_2) && (bVar2 = IsTimingStatStarted(this,param_1), bVar2)) {
    UpdateTimingStat(this,param_1);
  }
  pFVar5 = PersistentStats::LexToString(param_1);
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar4 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  iVar4 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                      *)&this->TimingStatsMap,uVar3,pFVar5);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x30 + *(longlong *)&this->TimingStatsMap, lVar8 == 0)) {
    pFVar6 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
             ::EmplaceByHash<FString_const_&>
                       ((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                         *)&this->TimingStatsMap,uVar3,pFVar5);
    pFVar6->LastUpdateTime = 0.0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x18) = 0;
  }
  this->bIsDirty = true;
  return;
}

// UpdateAllActiveTimers @ 148bdc700

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::UpdateAllActiveTimers
          (FPersistentStatsBase *this)

{
  bool bVar1;
  FString *pFVar2;
  FPersistentTimerData *pFVar3;
  ETimingStatNames EVar4;
  ETimingStatNames local_res10 [8];
  ETimingStatNames *local_res18 [2];
  
  EVar4 = TotalTime_Real;
  do {
    local_res10[0] = EVar4;
    pFVar2 = PersistentStats::LexToString(EVar4);
    pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
             ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                     *)&this->TimingStatsMap,pFVar2);
    if (pFVar3 != (FPersistentTimerData *)0x0) {
      pFVar2 = PersistentStats::LexToString(local_res10[0]);
      pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
               ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                       *)&this->TimingStatsMap,pFVar2);
      if (pFVar3 == (FPersistentTimerData *)0x0) {
        local_res18[0] = local_res10;
        bVar1 = `InstallBundleUtil::PersistentStats::FPersistentStatsBase::IsTimingStatStarted'::
                __l6::<lambda_1>::operator()(local_res18);
        if (!bVar1) goto LAB_148bdc785;
      }
      if (pFVar3->LastUpdateTime != 0.0) {
        UpdateTimingStat(this,EVar4);
      }
    }
LAB_148bdc785:
    EVar4 = EVar4 + TotalTime_FG;
    if (PSOTime_BG < EVar4) {
      return;
    }
  } while( true );
}

// UpdateTimingStat @ 148bde6a0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::UpdateTimingStat
          (FPersistentStatsBase *this,ETimingStatNames param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  FPersistentTimerData *pFVar10;
  ETimingStatNames local_res10 [8];
  LARGE_INTEGER local_res18;
  
  local_res10[0] = param_1;
  bVar4 = IsTimingStatStarted(this,param_1);
  if (!bVar4) {
    local_res18.QuadPart = (LONGLONG)local_res10;
    bVar4 = `InstallBundleUtil::PersistentStats::FPersistentStatsBase::UpdateTimingStat'::__l3::
            <lambda_1>::operator()(&local_res18);
    if (!bVar4) {
      return;
    }
  }
  pFVar7 = PersistentStats::LexToString(local_res10[0]);
  iVar1 = (pFVar7->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  iVar6 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
                      *)&this->TimingStatsMap,uVar5,pFVar7);
  if ((iVar6 == -1) ||
     (lVar9 = (longlong)iVar6 * 0x30 + *(longlong *)&this->TimingStatsMap, lVar9 == 0)) {
    pFVar10 = TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
              ::EmplaceByHash<FString_const_&>
                        ((TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
                          *)&this->TimingStatsMap,uVar5,pFVar7);
  }
  else {
    pFVar10 = (FPersistentTimerData *)(lVar9 + 0x10);
  }
  QueryPerformanceCounter(&local_res18);
  dVar3 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar2 = dVar3 - pFVar10->LastUpdateTime;
  if (dVar2 <= 0.0) {
    local_res18.QuadPart = (LONGLONG)local_res10;
    bVar4 = `InstallBundleUtil::PersistentStats::FPersistentStatsBase::UpdateTimingStat'::__l6::
            <lambda_2>::operator()(&local_res18);
    if (!bVar4) goto LAB_148bde7c6;
  }
  pFVar10->CurrentValue = dVar2 + pFVar10->CurrentValue;
LAB_148bde7c6:
  pFVar10->LastUpdateTime = dVar3;
  this->bIsDirty = true;
  return;
}

// operator() @ 150537f20

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatsBase::UpdateTimingStat'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794847>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794847>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150538030

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatsBase::IsTimingStatStarted'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794888>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794888>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1505383d0

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatsBase::UpdateTimingStat'::__l6::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794840>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794840>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

