// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddStateToCache<FGraphicsMinimalPipelineStateInitializer> @ 144704160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
PSOCollectorStats::FPrecacheStatsCollector::
AddStateToCache<FGraphicsMinimalPipelineStateInitializer>
          (FPrecacheStatsCollector *this,EPSOPrecacheType param_1,
          FGraphicsMinimalPipelineStateInitializer *param_2,
          _func___cdecl_ulong64_FGraphicsMinimalPipelineStateInitializer_ptr *param_3,
          FMaterial *param_4,int param_5,FVertexFactoryType *param_6)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  TKeyValue<unsigned___int64,PSOCollectorStats::FShaderStateUsage> *pTVar4;
  FString *pFVar5;
  bool bVar6;
  uint local_74;
  undefined1 local_70 [16];
  void *local_60 [2];
  bool local_50 [8];
  void *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_74 = 0;
  bVar2 = IsPrecachingValidationEnabled();
  if (!bVar2) {
    return false;
  }
  pFVar3 = (FScriptContainerElement *)(*param_3)(param_2);
  lpCriticalSection = &this->StateMapLock;
  local_70._0_8_ = pFVar3;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_50[2] = false;
    local_50[3] = false;
    local_50[4] = false;
    local_50[5] = false;
    local_50[6] = false;
    local_50[7] = false;
    local_34 = 0;
    local_50[0] = false;
    local_50[1] = false;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_38 = 0xffffffff;
    local_30 = 0;
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
    ::FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,PSOCollectorStats::FShaderStateUsage>
              ((TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
                *)&this->HashedStateMap,(FHashType)(uint)&local_74,
               (ulong64 *)
               (ulonglong)((int)((ulonglong)pFVar3 >> 0x20) * 0x17 + (int)pFVar3 & 0x7fffffff),
               (FShaderStateUsage *)local_70,local_50);
    pTVar4 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<unsigned___int64,PSOCollectorStats::FShaderStateUsage,TDefaultMapHashableKeyFuncs<unsigned___int64,PSOCollectorStats::FShaderStateUsage,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)&this->HashedStateMap,local_74);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((pTVar4->Pair).field_0x8 == '\0') {
      bVar2 = true;
      (pTVar4->Pair).field_0x8 = 1;
      bVar6 = param_4 == (FMaterial *)0x0;
      if (bVar6) {
        pFVar5 = ::FString::FString((FString *)local_70,L"Unknown");
      }
      else {
        pFVar5 = (FString *)(**(code **)(param_4->_padding_ + 0x398))(param_4,local_60);
      }
      puVar1 = &(pTVar4->Pair).field_0x10;
      if ((FString *)puVar1 != pFVar5) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&(pTVar4->Pair).field_0x18 = (pFVar5->Data).ArrayNum;
        *(int *)&(pTVar4->Pair).field_0x1c = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if ((bVar6) && ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0))
      {
        FMemory::Free((void *)local_70._0_8_);
      }
      if ((!bVar6) && (local_60[0] != (void *)0x0)) {
        FMemory::Free(local_60[0]);
      }
      *(FVertexFactoryType **)&(pTVar4->Pair).field_0x28 = param_6;
      *(int *)&(pTVar4->Pair).field_0x20 = param_5;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FPrecacheUsageData::UpdateStats((FPrecacheUsageData *)this,param_1,param_5,param_6);
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar2 = false;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

