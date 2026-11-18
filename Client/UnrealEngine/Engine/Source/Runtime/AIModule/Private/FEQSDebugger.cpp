// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// GetAllQueriesForOwner @ 146f4fdc0

TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> * __thiscall
FEQSDebugger::GetAllQueriesForOwner(FEQSDebugger *this,UObject *param_1)

{
  FObjectKey FVar1;
  TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    local_res8.ObjectIndex = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    FVar1 = local_res8;
    uVar3 = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    uVar4 = local_res8.ObjectSerialNumber;
    local_res8 = FVar1;
  }
  uVar6 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar5 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar6 << 0x10;
  uVar3 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar5 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 10;
  pTVar2 = TMapBase<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FObjectKey>
                     ((TMapBase<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->StoredQueries,(uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf,&local_res8);
  return pTVar2;
}

// LoadStats @ 146f5c0e0

void __cdecl FEQSDebugger::LoadStats(FString *param_1)

{
  longlong *plVar1;
  IFileManager *pIVar2;
  FArchive *this;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  int iVar5;
  uint local_res8 [2];
  FName local_res10;
  FString local_b8;
  FStatsInfo local_a8;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,pwVar3,0);
  if (this != (FArchive *)0x0) {
    TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FEQSDebugger::FStatsInfo>,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>,FDefaultSetAllocator>
             *)&UEnvQueryManager::DebuggerStats);
    local_res8[0] = UEnvQueryManager::DebuggerStats._8_4_ - UEnvQueryManager::DebuggerStats._52_4_;
    plVar1 = *(longlong **)&this->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((this->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this + 0x188))(this,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    iVar5 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        local_a8.MostExpensiveDuration = 0.0;
        local_a8.TotalAvgDuration = 0.0;
        local_a8.LastTickTime = 0.0;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        local_a8.MostExpensive.OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.MostExpensive.OptionStats.ArrayNum = 0;
        local_a8.MostExpensive.OptionStats.ArrayMax = 0;
        local_a8.MostExpensive.OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.MostExpensive.OptionData.ArrayNum = 0;
        local_a8.MostExpensive.OptionData.ArrayMax = 0;
        local_a8.TotalAvgData.OptionStats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.TotalAvgData.OptionStats.ArrayNum = 0;
        local_a8.TotalAvgData.OptionStats.ArrayMax = 0;
        local_a8.TotalAvgData.OptionData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.TotalAvgData.OptionData.ArrayNum = 0;
        local_a8.TotalAvgData.OptionData.ArrayMax = 0;
        local_a8.TotalAvgCount = 0;
        local_a8.TickPct.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.TickPct.ArrayNum = 0;
        local_a8.TickPct.ArrayMax = 0;
        local_a8.LastTickFrame = 0;
        local_a8.FirstTickEntry = 0xffff;
        local_a8.LastTickEntry = 0;
        ::operator<<(this,&local_b8);
        ::operator<<(this,&local_a8);
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar4.Data = local_b8.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,(wchar_t *)FVar4.Data);
        TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
        ::Emplace<FName,FEQSDebugger::FStatsInfo_const_&>
                  ((TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
                    *)&UEnvQueryManager::DebuggerStats,&local_res10,&local_a8);
        if (local_a8.TickPct.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.TickPct.AllocatorInstance.Data);
        }
        DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
                  ((FOptionData *)local_a8.TotalAvgData.OptionData.AllocatorInstance.Data,
                   local_a8.TotalAvgData.OptionData.ArrayNum);
        if ((FOptionData *)local_a8.TotalAvgData.OptionData.AllocatorInstance.Data !=
            (FOptionData *)0x0) {
          FMemory::Free(local_a8.TotalAvgData.OptionData.AllocatorInstance.Data);
        }
        DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
                  ((FOptionStat *)local_a8.TotalAvgData.OptionStats.AllocatorInstance.Data,
                   local_a8.TotalAvgData.OptionStats.ArrayNum);
        if ((FOptionStat *)local_a8.TotalAvgData.OptionStats.AllocatorInstance.Data !=
            (FOptionStat *)0x0) {
          FMemory::Free(local_a8.TotalAvgData.OptionStats.AllocatorInstance.Data);
        }
        DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
                  ((FOptionData *)local_a8.MostExpensive.OptionData.AllocatorInstance.Data,
                   local_a8.MostExpensive.OptionData.ArrayNum);
        if ((FOptionData *)local_a8.MostExpensive.OptionData.AllocatorInstance.Data !=
            (FOptionData *)0x0) {
          FMemory::Free(local_a8.MostExpensive.OptionData.AllocatorInstance.Data);
        }
        DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
                  ((FOptionStat *)local_a8.MostExpensive.OptionStats.AllocatorInstance.Data,
                   local_a8.MostExpensive.OptionStats.ArrayNum);
        if ((FOptionStat *)local_a8.MostExpensive.OptionStats.AllocatorInstance.Data !=
            (FOptionStat *)0x0) {
          FMemory::Free(local_a8.MostExpensive.OptionStats.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_res8[0]);
    }
    (**(code **)(*(longlong *)this + 0x210))(this);
    (*(code *)**(undefined8 **)this)(this,1);
  }
  return;
}

// SaveStats @ 146f72e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FEQSDebugger::SaveStats(FString *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  IFileManager *pIVar8;
  FArchive *this;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FName *pFVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20;
  undefined4 uStack_11c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FString local_e8;
  FName local_d8;
  FStatsInfo local_d0;
  
  pIVar8 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,pwVar11);
  if (this != (FArchive *)0x0) {
    local_res18[0] = UEnvQueryManager::DebuggerStats._8_4_ - UEnvQueryManager::DebuggerStats._52_4_;
    plVar2 = *(longlong **)&this->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((this->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(this,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    iVar14 = 0;
    uVar6 = 1;
    iVar15 = 0;
    uVar13 = UEnvQueryManager::DebuggerStats._40_4_;
    uVar7 = 0;
    if (uVar13 != 0) {
      puVar16 = (uint *)&UEnvQueryManager::DebuggerStats.field_0x10;
      if (UEnvQueryManager::DebuggerStats._32_8_ != 0) {
        puVar16 = (uint *)UEnvQueryManager::DebuggerStats._32_8_;
      }
      uVar7 = *puVar16;
      while (uVar7 == 0) {
        lVar9 = (longlong)iVar14;
        iVar15 = iVar15 + 0x20;
        iVar14 = iVar14 + 1;
        uVar7 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_146f72f90;
        uVar7 = puVar16[lVar9 + 1];
      }
      uVar6 = -uVar7 & uVar7;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uVar7 = iVar15 + -1 + local_res20;
      if ((int)uVar13 < (int)uVar7) {
        uVar7 = uVar13;
      }
    }
LAB_146f72f90:
    bVar4 = UEnvQueryManager::DebuggerStats._40_1_;
    uVar17 = uVar13 & 0xffffffe0;
    TStack_110.CurrentBitIndex = uVar7;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uVar6,iVar14);
    iVar14 = (int)uVar13 >> 5;
    TStack_110._28_4_ = uVar7;
    TStack_110.BaseBitIndex = iVar15;
    uStack_f0 = CONCAT44(uStack_11c,
                         UEnvQueryManager::DebuggerStats._8_4_ -
                         UEnvQueryManager::DebuggerStats._52_4_);
    TStack_110.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&UEnvQueryManager::DebuggerStats.field_0x10;
    uVar7 = uVar13;
    if ((int)uVar13 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = UEnvQueryManager::DebuggerStats._40_4_;
    }
    if (uVar13 != uVar7) {
      lVar9 = 0x154c141e0;
      if (UEnvQueryManager::DebuggerStats._32_8_ != 0) {
        lVar9 = UEnvQueryManager::DebuggerStats._32_8_;
      }
      uVar13 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        uVar17 = uVar17 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_146f730c1;
        uVar13 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar13 = (int)lVar9 + -1 + uVar17;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_146f730c1:
    while( true ) {
      if (UEnvQueryManager::DebuggerStats._8_4_ - UEnvQueryManager::DebuggerStats._52_4_ !=
          (int)uStack_f0) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_110.CurrentBitIndex == uVar13) &&
         (TStack_110.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&UEnvQueryManager::DebuggerStats.field_0x10))
      break;
      pFVar12 = (FName *)((longlong)TStack_110.CurrentBitIndex * 0x90 +
                         UEnvQueryManager::DebuggerStats._0_8_);
      local_d8 = *pFVar12;
      FStatsInfo::FStatsInfo(&local_d0,(FStatsInfo *)(pFVar12 + 1));
      ::FName::ToString(&local_d8,&local_e8);
      ::operator<<(this,&local_e8);
      ::operator<<(this,&local_d0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      FStatsInfo::~FStatsInfo(&local_d0);
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
    (**(code **)(*(longlong *)this + 0x210))(this);
    (*(code *)**(undefined8 **)this)(this,1);
    if (3 < (byte)LogEQS._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    }
  }
  return;
}

// StoreQuery @ 146f776c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEQSDebugger::StoreQuery(FEQSDebugger *this,TSharedPtr<FEnvQueryInstance,1> *param_1)

{
  TMap<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FEnvQueryInstance *pFVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FObjectKey FVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreQuery> FVar12;
  UObject *pUVar13;
  TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  FName FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  FColor_u_0 local_res10 [2];
  undefined4 local_res18;
  FObjectKey local_res20;
  FWeakObjectPtr local_108;
  FName local_100;
  FWeakObjectPtr local_f8;
  FName local_f0;
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_a8;
  char local_a0;
  char cStack_9f;
  UObject *local_98;
  FName local_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  uVar17 = 0;
  uVar15 = 0;
  FVar12 = StatPtr_STAT_AI_EQS_Debug_StoreQuery;
  if (StatPtr_STAT_AI_EQS_Debug_StoreQuery ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreQuery>)0x0) {
    pFVar11 = ::FName::FName(&local_90,"STAT_AI_EQS_Debug_StoreQuery");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreQuery>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Debug_StoreQuery,*pFVar11,
                        L"EQS Debug StoreQuery","STATGROUP_AI_EQS","STATCAT_Advanced",
                        L"Environment Query",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar6 = false;
  bVar5 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_100.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                   ,0x4b2);
        bVar6 = true;
        bVar5 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_146f77816;
    }
  }
  bVar6 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  FVar16 = local_f0;
LAB_146f77816:
  this_00 = &this->StoredQueries;
  TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  local_a0 = '\0';
  cStack_9f = '\0';
  stack0xffffffffffffff38 = local_78._16_16_;
  local_d8 = (longlong *)local_78._0_8_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar18 = local_78._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar21 = (longlong)(int)uVar18 * 0x20;
      local_f8.ObjectIndex = *(int *)(lVar21 + *local_d8);
      local_f8.ObjectSerialNumber = *(int *)(lVar21 + 4 + *local_d8);
      pUVar13 = FWeakObjectPtr::Get(&local_f8);
      if (pUVar13 == (UObject *)0x0) {
        TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,(int)uVar18);
        local_a0 = '\x01';
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar18 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if ((local_a0 != '\0') && (cStack_9f != '\0')) {
      uVar19 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (uVar19 < 4) {
        iVar10 = 1;
      }
      else {
        uVar18 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_res18 = (undefined4)lVar21;
        iVar10 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_a8->HashSize < iVar10)) || (iVar10 < local_a8->HashSize)) {
        local_a8->HashSize = iVar10;
        TSet<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  pFVar1 = param_1->Object;
  if ((pFVar1 != (FEnvQueryInstance *)0x0) && ((pFVar1->World).field0_0x0.DebugPtr != (UWorld *)0x0)
     ) {
    pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&pFVar1->_padding_ + 4));
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    uVar19 = uVar15;
    if (pUVar13 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      local_108.ObjectIndex = 0;
      local_108.ObjectSerialNumber = 0;
      local_98 = pUVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_98);
      local_res20.ObjectIndex = local_108.ObjectIndex;
      local_res20.ObjectSerialNumber = local_108.ObjectSerialNumber;
      FVar7 = local_res20;
      uVar15 = local_108.ObjectIndex;
      local_res20.ObjectSerialNumber = local_108.ObjectSerialNumber;
      uVar19 = local_res20.ObjectSerialNumber;
      local_res20 = FVar7;
    }
    uVar15 = uVar15 - uVar19 ^ uVar19 >> 0xd;
    uVar20 = (-0x61c88647 - uVar19) - uVar15 ^ uVar15 << 8;
    uVar19 = (uVar19 - uVar20) - uVar15 ^ uVar20 >> 0xd;
    uVar15 = (uVar15 - uVar19) - uVar20 ^ uVar19 >> 0xc;
    uVar20 = (uVar20 - uVar15) - uVar19 ^ uVar15 << 0x10;
    uVar19 = (uVar19 - uVar20) - uVar15 ^ uVar20 >> 5;
    uVar15 = (uVar15 - uVar19) - uVar20 ^ uVar19 >> 3;
    uVar20 = (uVar20 - uVar15) - uVar19 ^ uVar15 << 10;
    pTVar14 = TMapBase<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FObjectKey>
                        ((TMapBase<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_00,(uVar19 - uVar20) - uVar15 ^ uVar20 >> 0xf,&local_res20);
    iVar10 = pTVar14->ArrayNum;
    uVar18 = uVar17;
    if (0 < iVar10) {
      do {
        uVar19 = (uint)uVar17;
        uVar15 = 0;
        if ((int)uVar19 < iVar10) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar21 = *(longlong *)((pTVar14->AllocatorInstance).Data + uVar18);
        if (lVar21 != 0) {
          if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = (param_1->Object->QueryName).Data.ArrayNum;
          if (iVar10 == *(int *)(lVar21 + 0x48)) {
            if (1 < iVar10) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)
                                  (param_1->Object->QueryName).Data.AllocatorInstance.Data,
                                  *(wchar_t **)(lVar21 + 0x40));
              bVar9 = iVar10 == 0;
              goto LAB_146f77afd;
            }
          }
          else {
            bVar9 = iVar10 + *(int *)(lVar21 + 0x48) == 1;
LAB_146f77afd:
            if (!bVar9) goto LAB_146f77b04;
          }
          if (uVar19 != 0xffffffff) goto LAB_146f77b63;
          break;
        }
LAB_146f77b04:
        iVar10 = pTVar14->ArrayNum;
        uVar17 = (ulonglong)(uVar19 + 1);
        uVar18 = uVar18 + 0x18;
      } while ((int)(uVar19 + 1) < iVar10);
    }
    uVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,1,&pTVar14->AllocatorInstance,&pTVar14->ArrayNum,&pTVar14->ArrayMax);
    DefaultConstructItems<FEQSDebugger::FEnvQueryInfo,int>
              ((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x18,1);
LAB_146f77b63:
    uVar15 = 0;
    if ((int)uVar19 < pTVar14->ArrayNum) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (pTVar14->AllocatorInstance).Data;
    pFVar1 = param_1->Object;
    lVar21 = (longlong)(int)uVar19;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88 = *(undefined8 *)(pFVar2 + lVar21 * 0x18);
    pTStack_80 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar21 * 0x18 + 8);
    *(FEnvQueryInstance **)(pFVar2 + lVar21 * 0x18) = pFVar1;
    *(TReferenceControllerBase<1> **)(pFVar2 + lVar21 * 0x18 + 8) = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
    if ((param_1->Object == (FEnvQueryInstance *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(double *)(pFVar2 + lVar21 * 0x18 + 0x10) =
         ((param_1->Object->World).field0_0x0.DebugPtr)->TimeSeconds;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// StoreStats @ 146f77c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEQSDebugger::StoreStats(FEQSDebugger *this,FEnvQueryInstance *param_1)

{
  int *piVar1;
  double dVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreStats> FVar10;
  FName *pFVar11;
  FStatsInfo *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar12;
  longlong lVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_48 [2];
  
  FVar16.Value = 0;
  FVar10 = StatPtr_STAT_AI_EQS_Debug_StoreStats;
  if (StatPtr_STAT_AI_EQS_Debug_StoreStats ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreStats>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_AI_EQS_Debug_StoreStats");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreStats>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Debug_StoreStats,*pFVar9,
                        L"EQS Debug StoreStats","STATGROUP_AI_EQS","STATCAT_Advanced",
                        L"Environment Query",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar7 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar14.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryManager.cpp"
                   ,0x494);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar14.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_146f77df3;
    }
  }
  bVar5 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_146f77df3:
  if ((param_1->QueryName).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->QueryName).Data.AllocatorInstance.Data;
  }
  pFVar9 = ::FName::FName((FName *)&local_res10.s,pwVar12);
  FVar3 = *pFVar9;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar7 = uVar7 + FVar3.Number;
  if (UEnvQueryManager::DebuggerStats._8_4_ != UEnvQueryManager::DebuggerStats._52_4_) {
    lVar13 = 0x154c14208;
    if (UEnvQueryManager::DebuggerStats._64_8_ != 0) {
      lVar13 = UEnvQueryManager::DebuggerStats._64_8_;
    }
    uVar8 = *(uint *)(lVar13 + (ulonglong)(UEnvQueryManager::DebuggerStats._72_4_ - 1 & uVar7) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar11 = (FName *)((longlong)(int)uVar8 * 0x90 + UEnvQueryManager::DebuggerStats._0_8_);
        if (*pFVar11 == *pFVar9) {
          if (pFVar11 != (FName *)0x0) {
            this_00 = (FStatsInfo *)(pFVar11 + 1);
            goto LAB_146f77ea2;
          }
          break;
        }
        uVar8 = pFVar11[0x11].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  this_00 = TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
            ::EmplaceByHash<FName>
                      ((TMapBase<FName,FEQSDebugger::FStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEQSDebugger::FStatsInfo,0>_>
                        *)&UEnvQueryManager::DebuggerStats,uVar7,pFVar9);
LAB_146f77ea2:
  dVar2 = param_1->TotalExecutionTime;
  if (this_00->MostExpensiveDuration <= dVar2 && dVar2 != this_00->MostExpensiveDuration) {
    this_00->MostExpensiveDuration = dVar2;
    FEnvQueryDebugProfileData::operator=
              (&this_00->MostExpensive,(FEnvQueryDebugProfileData *)&param_1->DebugData);
  }
  if (this_00->TotalAvgCount < 100000) {
    FEnvQueryDebugProfileData::Add
              (&this_00->TotalAvgData,(FEnvQueryDebugProfileData *)&param_1->DebugData);
    this_00->TotalAvgCount = this_00->TotalAvgCount + 1;
    dVar2 = dVar2 + this_00->TotalAvgDuration;
  }
  else {
    FEnvQueryDebugProfileData::operator=
              (&this_00->TotalAvgData,(FEnvQueryDebugProfileData *)&param_1->DebugData);
    this_00->TotalAvgCount = 1;
  }
  this_00->TotalAvgDuration = dVar2;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res10);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// StoreTickTime @ 146f782f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEQSDebugger::StoreTickTime
          (FEQSDebugger *this,FEnvQueryInstance *param_1,double param_2,double param_3)

{
  return;
}

