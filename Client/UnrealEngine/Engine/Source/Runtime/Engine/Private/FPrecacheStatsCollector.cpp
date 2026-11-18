// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FPrecacheStatsCollector @ 1483e20c0

FPrecacheStatsCollector * __thiscall
PSOCollectorStats::FPrecacheStatsCollector::FPrecacheStatsCollector
          (FPrecacheStatsCollector *this,FName param_1,FName param_2,FName param_3,FName param_4,
          FName param_5)

{
  (this->Stats).PrecacheData.StatFName.ComparisonIndex = 0;
  (this->Stats).PrecacheData.StatFName.Number = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Stats).PrecacheData.StatsLock,4000);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->Stats).PrecacheData.PerVertexFactoryCount);
  FPrecacheUsageData::Empty((FPrecacheUsageData *)this);
  (this->Stats).UsageData.StatFName = param_4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Stats).UsageData.StatsLock,4000)
  ;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->Stats).UsageData.PerVertexFactoryCount);
  FPrecacheUsageData::Empty(&(this->Stats).UsageData);
  (this->Stats).HitData.StatFName = param_3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Stats).HitData.StatsLock,4000);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->Stats).HitData.PerVertexFactoryCount);
  FPrecacheUsageData::Empty(&(this->Stats).HitData);
  (this->Stats).MissData.StatFName = param_2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Stats).MissData.StatsLock,4000);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->Stats).MissData.PerVertexFactoryCount);
  FPrecacheUsageData::Empty(&(this->Stats).MissData);
  (this->Stats).TooLateData.StatFName = param_5;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Stats).TooLateData.StatsLock,4000);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->Stats).TooLateData.PerVertexFactoryCount);
  FPrecacheUsageData::Empty(&(this->Stats).TooLateData);
  (this->Stats).UntrackedData.StatFName = param_1;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Stats).UntrackedData.StatsLock,4000);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->Stats).UntrackedData.PerVertexFactoryCount);
  FPrecacheUsageData::Empty(&(this->Stats).UntrackedData);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StateMapLock,4000);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
              *)&this->HashedStateMap);
  return this;
}

// GetPrecacheData @ 148409a20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
PSOCollectorStats::FPrecacheStatsCollector::GetPrecacheData
          (FPrecacheStatsCollector *this,ulong64 param_1,FString *param_2,int *param_3,
          FVertexFactoryType **param_4)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *pTVar3;
  bool bVar4;
  int iVar5;
  uint local_res8 [2];
  ulong64 local_res10;
  
  lpCriticalSection = &this->StateMapLock;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
  ::FindIdByHash((TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
                  *)&this->HashedStateMap,(FHashType)(uint)local_res8,
                 (ulong64 *)(ulonglong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1 & 0x7fffffff));
  if (local_res8[0] != 0xffffffff) {
    pTVar3 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&this->HashedStateMap,local_res8[0]);
    puVar1 = &(pTVar3->Pair).field_0x8;
    if ((puVar1 != (undefined1 *)0x0) && (*puVar1 != '\0')) {
      iVar2 = *(int *)&(pTVar3->Pair).field_0x18;
      iVar5 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(param_2,*(wchar_t **)&(pTVar3->Pair).field_0x10,iVar5);
      *param_3 = *(int *)&(pTVar3->Pair).field_0x20;
      bVar4 = true;
      *param_4 = *(FVertexFactoryType **)&(pTVar3->Pair).field_0x28;
      goto LAB_148409adb;
    }
  }
  bVar4 = false;
LAB_148409adb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// IsPrecached @ 14840f700

bool __thiscall
PSOCollectorStats::FPrecacheStatsCollector::IsPrecached
          (FPrecacheStatsCollector *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *pTVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint local_res8 [2];
  ulong64 local_res10;
  
  lpCriticalSection = &this->StateMapLock;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
  ::FindIdByHash((TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
                  *)&this->HashedStateMap,(FHashType)(uint)local_res8,
                 (ulong64 *)(ulonglong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1 & 0x7fffffff));
  if (local_res8[0] != 0xffffffff) {
    pTVar1 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&this->HashedStateMap,local_res8[0]);
    puVar2 = &(pTVar1->Pair).field_0x8;
    if ((puVar2 != (undefined1 *)0x0) && (*puVar2 != '\0')) {
      bVar3 = true;
      goto LAB_14840f77e;
    }
  }
  bVar3 = false;
LAB_14840f77e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// IsStateTracked @ 14840fd80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
PSOCollectorStats::FPrecacheStatsCollector::IsStateTracked
          (EPSOPrecacheType param_1,int param_2,FVertexFactoryType *param_3)

{
  longlong lVar1;
  
  if (param_1 == MeshPass) {
    if (param_2 == -1) {
      return false;
    }
    if (0x3f < (uint)param_2) {
      return param_2 != -1;
    }
    lVar1 = 0;
    if (2 < (int)GMaxRHIFeatureLevel) {
      lVar1 = 0x40;
    }
    if (FPSOCollectorCreateManager::PSOCollectors[0][lVar1 + param_2].CreateFunction !=
        (_func___cdecl_IPSOCollector_ptr_Type *)0x0) {
      if (param_3 == (FVertexFactoryType *)0x0) {
        return true;
      }
      if ((param_3->Flags & SupportsPSOPrecaching) != None) {
        return true;
      }
    }
  }
  else if ((param_2 != -1) && ((uint)param_2 < 4)) {
    return true;
  }
  return false;
}

// UpdatePrecacheStats @ 14842b2d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
PSOCollectorStats::FPrecacheStatsCollector::UpdatePrecacheStats
          (FPrecacheStatsCollector *this,EPSOPrecacheType param_1,ulong64 param_2,int param_3,
          FVertexFactoryType *param_4,bool param_5,EPSOPrecacheResult *param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *pTVar2;
  bool bVar3;
  EPSOPrecacheResult EVar4;
  ulong64 local_res18;
  uint local_68 [2];
  bool local_60 [8];
  void *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  EVar4 = Unknown;
  lpCriticalSection = &this->StateMapLock;
  local_res18 = param_2;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_60[2] = false;
    local_60[3] = false;
    local_60[4] = false;
    local_60[5] = false;
    local_60[6] = false;
    local_60[7] = false;
    local_44 = 0;
    local_60[0] = false;
    local_60[1] = false;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
    ::FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage>
              ((TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
                *)&this->HashedStateMap,(FHashType)(uint)local_68,
               (ulong64 *)(ulonglong)((int)(param_2 >> 0x20) * 0x17 + (int)param_2 & 0x7fffffff),
               (FShaderStateUsage *)&local_res18,local_60);
    pTVar2 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&this->HashedStateMap,local_68[0]);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((pTVar2->Pair).field_0x9 == '\0') {
      (pTVar2->Pair).field_0x9 = 1;
      bVar3 = true;
      cVar1 = (pTVar2->Pair).field_0x8;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FPrecacheUsageData::UpdateStats(&(this->Stats).UsageData,param_1,param_3,param_4);
      if (param_5) {
        if (cVar1 == '\0') {
          FPrecacheUsageData::UpdateStats(&(this->Stats).MissData,param_1,param_3,param_4);
          EVar4 = Missed;
        }
        else if (*param_6 == Active) {
          FPrecacheUsageData::UpdateStats(&(this->Stats).TooLateData,param_1,param_3,param_4);
          EVar4 = TooLate;
        }
        else {
          FPrecacheUsageData::UpdateStats(&(this->Stats).HitData,param_1,param_3,param_4);
          EVar4 = Complete;
        }
      }
      else {
        FPrecacheUsageData::UpdateStats(&(this->Stats).UntrackedData,param_1,param_3,param_4);
        EVar4 = Untracked;
      }
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar3 = false;
    }
    *param_6 = EVar4;
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

