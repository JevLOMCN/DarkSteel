// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// CollectResults @ 149032e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraDICollisionQueryBatch::CollectResults(FNiagaraDICollisionQueryBatch *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NiagaraCollision> FVar10;
  UObject *pUVar11;
  undefined8 uVar12;
  FName FVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FWeakObjectPtr *this_00;
  uint uVar18;
  FTraceHandle *pFVar19;
  uint uVar20;
  undefined1 auStackY_248 [32];
  longlong local_1d8;
  FColor_u_0 local_1c8;
  uint local_1c4;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a0;
  FTraceDatum local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCollision.cpp"
                         ,0x3f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (__CsvProfilerStat64 == false) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_Collision",_GCsvCategory_Particles.Index);
    __CsvProfilerStat64 = true;
  }
  uVar18 = _GCsvCategory_Particles.Index;
  local_1c4 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_Collision",_GCsvCategory_Particles.Index,"CSV_CoreSystems_Collision");
  if (this->CollisionWorld == (UWorld *)0x0) goto LAB_14903343c;
  uVar14 = (longlong)(int)this->CurrBuffer ^ 1;
  iVar1 = this->CollisionTraces[uVar14].ArrayNum;
  lVar16 = (longlong)iVar1;
  if (iVar1 < 1) goto LAB_14903343c;
  FVar10 = StatPtr_STAT_NiagaraCollision;
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar9 = ::FName::FName(&local_1a0,"STAT_NiagaraCollision");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar9,
                        L"Collision","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar6 = false;
  bVar4 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  bVar5 = false;
  bVar7 = false;
  if ((FVar13.ComparisonIndex.Value.Value == 0) && (FVar13.Number == 0)) {
LAB_149033070:
    bVar4 = bVar7;
    bVar6 = bVar5;
    bVar5 = false;
    local_1b8 = local_1b0;
    FVar13 = local_1b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar4 = true;
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_1c0.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCollision.cpp"
                   ,0x49);
        bVar6 = true;
        bVar4 = true;
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149033070;
    local_1b8 = FVar13;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  (this->CollisionResults).ArrayNum = 0;
  if ((this->CollisionResults).ArrayMax < iVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,&(this->CollisionResults).AllocatorInstance,0,
               &(this->CollisionResults).ArrayMax);
  }
  uVar20 = 0;
  if (0 < lVar16) {
    local_1d8 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar20 < this->CollisionTraces[uVar14].ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar19 = (FTraceHandle *)(this->CollisionTraces[uVar14].AllocatorInstance.Data + local_1d8);
      FTraceDatum::FTraceDatum(&local_198);
      bVar7 = UWorld::QueryTraceData(this->CollisionWorld,pFVar19,&local_198);
      if (((bVar7) && (local_198.OutHits.ArrayNum != 0)) &&
         (uVar18 = 0, 0 < local_198.OutHits.ArrayNum)) {
        lVar15 = 0;
        uVar12 = local_198.OutHits._8_8_;
        do {
          uVar8 = 0;
          if ((int)uVar18 < (int)uVar12) {
            uVar8 = ~uVar18 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar12 = local_198.OutHits._8_8_, bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((byte)local_198.OutHits.AllocatorInstance.Data[lVar15 + 0xad] & 1) != 0) {
            uVar8 = 0;
            if ((int)uVar18 < (int)uVar12) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar17 = local_198.OutHits.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x100;
            if ((pFVar17 != (FScriptContainerElement *)0x0) && (((byte)pFVar17[0xad] & 1) != 0)) {
              uVar18 = (this->CollisionResults).ArrayNum;
              if (uVar18 == (this->CollisionResults).ArrayMax) {
                uVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x858,&(this->CollisionResults).AllocatorInstance,
                                    &(this->CollisionResults).ArrayMax);
              }
              (this->CollisionResults).ArrayNum = uVar18 + 1;
              pFVar19[1].field0_0x0._Data.FrameNumber = uVar18;
              uVar8 = 0;
              if ((int)uVar18 < (this->CollisionResults).ArrayNum) {
                uVar8 = ~uVar18 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this->CollisionResults).AllocatorInstance.Data;
              lVar15 = (longlong)(int)uVar18 * 0x58;
              pFVar2[lVar15 + 0x54] = (FScriptContainerElement)((byte)pFVar17[0xad] >> 1 & 1);
              uVar12 = *(undefined8 *)(pFVar17 + 0x30);
              *(undefined8 *)(pFVar2 + lVar15) = *(undefined8 *)(pFVar17 + 0x28);
              *(undefined8 *)(pFVar2 + lVar15 + 8) = uVar12;
              *(undefined8 *)(pFVar2 + lVar15 + 0x10) = *(undefined8 *)(pFVar17 + 0x38);
              uVar12 = *(undefined8 *)(pFVar17 + 0x60);
              *(undefined8 *)(pFVar2 + lVar15 + 0x18) = *(undefined8 *)(pFVar17 + 0x58);
              *(undefined8 *)(pFVar2 + lVar15 + 0x18 + 8) = uVar12;
              this_00 = (FWeakObjectPtr *)(pFVar17 + 0xb0);
              *(undefined8 *)(pFVar2 + lVar15 + 0x28) = *(undefined8 *)(pFVar17 + 0x68);
              bVar7 = FWeakObjectPtr::IsValid(this_00);
              if (bVar7) {
                pUVar11 = FWeakObjectPtr::Get(this_00);
                *(uint *)(pFVar2 + lVar15 + 0x48) = (uint)(byte)pUVar11[2].field_0x10;
                pUVar11 = FWeakObjectPtr::Get(this_00);
                *(undefined4 *)(pFVar2 + lVar15 + 0x4c) = *(undefined4 *)(pUVar11 + 1);
                pUVar11 = FWeakObjectPtr::Get(this_00);
                *(undefined4 *)(pFVar2 + lVar15 + 0x50) = *(undefined4 *)&pUVar11[1].field_0xc;
              }
              else {
                *(undefined8 *)(pFVar2 + lVar15 + 0x48) = 0;
                *(undefined4 *)(pFVar2 + lVar15 + 0x50) = 0;
              }
            }
            break;
          }
          uVar18 = uVar18 + 1;
          lVar15 = lVar15 + 0x100;
        } while ((int)uVar18 < (int)uVar12);
      }
      if (local_198.OutHits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.OutHits.AllocatorInstance.Data);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_198.Delegate);
      if ((void *)local_198._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_198._padding_);
      }
      if ((void *)local_198._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_198._padding_);
      }
      local_1d8 = local_1d8 + 0xd8;
      uVar20 = uVar20 + 1;
      lVar16 = lVar16 + -1;
      FVar13 = local_1b8;
      uVar18 = local_1c4;
    } while (lVar16 != 0);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
LAB_14903343c:
  FCsvProfiler::EndStat("CoreSystems_Collision",uVar18);
  return;
}

// DispatchQueries @ 14903e330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraDICollisionQueryBatch::DispatchQueries(FNiagaraDICollisionQueryBatch *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FTraceHandle_u_0 FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraCollision> FVar11;
  FTraceHandle *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  ulonglong uVar14;
  FTraceHandle_u_0 *pFVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  FName local_res18;
  FName local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FTraceHandle local_58;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCollision.cpp"
                         ,0x1c,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (__CsvProfilerStat29 == false) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_Collision",_GCsvCategory_Particles.Index);
    __CsvProfilerStat29 = true;
  }
  uVar16 = _GCsvCategory_Particles.Index;
  local_res10 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_Collision",_GCsvCategory_Particles.Index,"CSV_CoreSystems_Collision");
  uVar9 = this->CurrBuffer ^ 1;
  this->CurrBuffer = uVar9;
  if (this->CollisionWorld == (UWorld *)0x0) goto LAB_14903e753;
  uVar14 = (longlong)(int)uVar9 ^ 1;
  iVar2 = this->CollisionTraces[uVar14].ArrayNum;
  lVar18 = (longlong)iVar2;
  if (iVar2 < 1) goto LAB_14903e753;
  uVar9 = 0;
  FVar11 = StatPtr_STAT_NiagaraCollision;
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar10 = ::FName::FName(&local_80,"STAT_NiagaraCollision");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar10,
                        L"Collision","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value == 0) && (FVar13.Number == 0)) {
LAB_14903e556:
    bVar5 = false;
    local_res20 = local_78;
    FVar13 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_res18.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCollision.cpp"
                   ,0x29);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14903e556;
    local_res20 = FVar13;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  if (0 < iVar2) {
    lVar17 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar9 < this->CollisionTraces[uVar14].ArrayNum) {
        uVar16 = ~uVar9 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (FTraceHandle_u_0 *)(this->CollisionTraces[uVar14].AllocatorInstance.Data + lVar17);
      pFVar12 = UWorld::AsyncLineTraceByChannel
                          (this->CollisionWorld,&local_58,Single,
                           (TVector<double> *)&pFVar15[0x14]._Data,
                           (TVector<double> *)&pFVar15[0x17]._Data,pFVar15[0x1a]._Data.FrameNumber,
                           (FCollisionQueryParams *)&pFVar15[3]._Data,
                           &FCollisionResponseParams::DefaultResponseParam,
                           (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                            *)0x0,uVar9);
      uVar9 = uVar9 + 1;
      lVar17 = lVar17 + 0xd8;
      FVar4 = *(FTraceHandle_u_0 *)&pFVar12->bTransactional;
      *pFVar15 = pFVar12->field0_0x0;
      pFVar15[1] = FVar4;
      lVar18 = lVar18 + -1;
      FVar13 = local_res20;
      uVar16 = local_res10;
    } while (lVar18 != 0);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14903e753:
  FCsvProfiler::EndStat("CoreSystems_Collision",uVar16);
  return;
}

// GetQueryResult @ 149048620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraDICollisionQueryBatch::GetQueryResult
          (FNiagaraDICollisionQueryBatch *this,uint param_1,FNiagaraDICollsionQueryResult *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = this->CurrBuffer ^ 1;
  if ((-1 < (int)param_1) && ((int)param_1 < this->CollisionTraces[(int)uVar7].ArrayNum)) {
    uVar8 = 0;
    if ((int)param_1 < this->CollisionTraces[(int)uVar7].ArrayNum) {
      uVar8 = ~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar7 = *(uint *)(this->CollisionTraces[(int)uVar7].AllocatorInstance.Data +
                     (longlong)(int)param_1 * 0xd8 + 0x10);
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->CollisionResults).ArrayNum)) {
      uVar8 = 0;
      if ((int)uVar7 < (this->CollisionResults).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this->CollisionResults).AllocatorInstance.Data;
      lVar9 = (longlong)(int)uVar7 * 0x58;
      dVar4 = *(double *)(pFVar2 + lVar9 + 8);
      (param_2->CollisionPos).field0_0x0._s_0.X = *(double *)(pFVar2 + lVar9);
      (param_2->CollisionPos).field0_0x0._s_0.Y = dVar4;
      dVar4 = *(double *)(pFVar2 + lVar9 + 0x10 + 8);
      (param_2->CollisionPos).field0_0x0._s_0.Z = *(double *)(pFVar2 + lVar9 + 0x10);
      (param_2->CollisionNormal).field0_0x0._s_0.X = dVar4;
      dVar4 = *(double *)(pFVar2 + lVar9 + 0x20 + 8);
      (param_2->CollisionNormal).field0_0x0._s_0.Y = *(double *)(pFVar2 + lVar9 + 0x20);
      (param_2->CollisionNormal).field0_0x0._s_0.Z = dVar4;
      dVar4 = *(double *)(pFVar2 + lVar9 + 0x30 + 8);
      (param_2->CollisionVelocity).field0_0x0._s_0.X = *(double *)(pFVar2 + lVar9 + 0x30);
      (param_2->CollisionVelocity).field0_0x0._s_0.Y = dVar4;
      uVar1 = *(undefined8 *)(pFVar2 + lVar9 + 0x40 + 8);
      (param_2->CollisionVelocity).field0_0x0._s_0.Z = *(double *)(pFVar2 + lVar9 + 0x40);
      param_2->PhysicalMaterialIdx = (int)uVar1;
      param_2->Friction = (float)(int)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)(pFVar2 + lVar9 + 0x50);
      param_2->Restitution = (float)(int)uVar1;
      param_2->IsInsideMesh = (bool)(char)((ulonglong)uVar1 >> 0x20);
      *(int3 *)&param_2->field_0x55 = (int3)((ulonglong)uVar1 >> 0x28);
      return true;
    }
  }
  return false;
}

// PerformQuery @ 14905d5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraDICollisionQueryBatch::PerformQuery
          (FNiagaraDICollisionQueryBatch *this,TVector<double> *param_1,TVector<double> *param_2,
          FNiagaraDICollsionQueryResult *param_3,ECollisionChannel param_4,bool param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraCollision> FVar8;
  UObject *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  undefined1 auStackY_288 [32];
  FColor_u_0 local_228;
  uint uStack_224;
  LARGE_INTEGER local_220;
  FName local_218;
  FStatMessage local_208;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined2 uStack_1eb;
  undefined1 uStack_1e9;
  undefined1 local_1e8 [48];
  double dStack_1b8;
  double local_1b0;
  double local_190;
  double dStack_188;
  double local_180;
  int local_144;
  byte local_13b;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  FWeakObjectPtr FStack_128;
  IActorInstanceManagerInterface *local_120;
  undefined8 uStack_118;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if ((this->CollisionWorld == (UWorld *)0x0) || (GNiagaraCollisionCPUEnabled == 0)) {
    return false;
  }
  FVar11.Value = 0;
  FVar8 = StatPtr_STAT_NiagaraCollision;
  local_220 = (LARGE_INTEGER)param_2;
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_208,"STAT_NiagaraCollision");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar7,
                       L"Collision","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FVar13 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.Bits = FVar12.Bits;
        uStack_224 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_228._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCollision.cpp"
                   ,0x97);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_228.Bits = FVar12.Bits;
      uStack_224 = uVar10;
      local_218 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_218.ComparisonIndex.Value;
      goto LAB_14905d74d;
    }
  }
  bVar3 = false;
  FVar13 = local_218;
LAB_14905d74d:
  if (__CsvProfilerStat152 == false) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_Collision",_GCsvCategory_Particles.Index);
    __CsvProfilerStat152 = true;
  }
  uVar10 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_Collision",_GCsvCategory_Particles.Index,"CSV_CoreSystems_Collision");
  FCollisionQueryParams::FCollisionQueryParams
            (&local_e8,TraceTagName,&this->StatId,false,(AActor *)0x0);
  local_e8.OwnerTag = CollisionTagName;
  local_e8.bTraceComplex = param_5;
  local_e8.bFindInitialOverlaps = false;
  local_e8.bReturnFaceIndex = false;
  local_e8.bReturnPhysicalMaterial = true;
  local_e8.bIgnoreTouches = true;
  memset(local_1e8,0,0x100);
  uStack_1eb = 0;
  uStack_1e9 = 0;
  local_1f8 = 0;
  uStack_1ec = 0;
  local_130.ObjectIndex = 0;
  local_130.ObjectSerialNumber = 0;
  FStack_128.ObjectIndex = 0;
  FStack_128.ObjectSerialNumber = 0;
  uStack_1f0 = 0xffffffff;
  uStack_118._0_4_ = -1;
  uStack_118._4_1_ = Invalid;
  uStack_118._5_3_ = 0;
  local_1e8._4_4_ = 1.0;
  local_120 = (IActorInstanceManagerInterface *)0x0;
  local_144 = -1;
  bVar5 = UWorld::LineTraceSingleByChannel
                    (this->CollisionWorld,(FHitResult *)local_1e8,param_1,
                     (TVector<double> *)local_220,param_4,&local_e8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (bVar5) {
    (param_3->CollisionPos).field0_0x0._s_0.X = (double)local_1e8._40_8_;
    (param_3->CollisionPos).field0_0x0._s_0.Y = dStack_1b8;
    (param_3->CollisionPos).field0_0x0._s_0.Z = local_1b0;
    param_3->IsInsideMesh = (bool)(local_13b >> 1 & 1);
    (param_3->CollisionNormal).field0_0x0._s_0.X = local_190;
    (param_3->CollisionNormal).field0_0x0._s_0.Y = dStack_188;
    (param_3->CollisionNormal).field0_0x0._s_0.Z = local_180;
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1e8 + 0xb0));
    if (bVar6) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1e8 + 0xb0));
      param_3->PhysicalMaterialIdx = (uint)(byte)pUVar9[2].field_0x10;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1e8 + 0xb0));
      param_3->Friction = *(float *)(pUVar9 + 1);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1e8 + 0xb0));
      param_3->Restitution = *(float *)&pUVar9[1].field_0xc;
    }
    else {
      param_3->PhysicalMaterialIdx = 0;
      param_3->Friction = 0.0;
      param_3->Restitution = 0.0;
    }
  }
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  FCsvProfiler::EndStat("CoreSystems_Collision",uVar10);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_208.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_208.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_220);
      local_208.StatData.Pad = (uchar  [8])(local_220.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_208);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar5;
}

// SubmitQuery @ 14906a520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FNiagaraDICollisionQueryBatch::SubmitQuery
          (FNiagaraDICollisionQueryBatch *this,TVector<double> *param_1,TVector<double> *param_2,
          ECollisionChannel param_3,bool param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStackY_e8 [32];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (GNiagaraCollisionCPUEnabled == 0) {
    iVar3 = -1;
  }
  else {
    FCollisionQueryParams::FCollisionQueryParams
              (&local_b8,TraceTagName,&this->StatId,false,(AActor *)0x0);
    iVar3 = -1;
    dVar6 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    local_b8.OwnerTag = CollisionTagName;
    local_b8.bFindInitialOverlaps = false;
    local_b8.bReturnFaceIndex = false;
    local_b8.bReturnPhysicalMaterial = true;
    local_b8.bIgnoreTouches = true;
    local_b8.bTraceComplex = param_4;
    if (__real_3e45798ee0000000 < dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4) {
      AcquireSRWLockExclusive((PSRWLOCK)this);
      uVar2 = this->CurrBuffer;
      iVar3 = this->CollisionTraces[(int)uVar2].ArrayNum;
      piVar1 = &this->CollisionTraces[(int)uVar2].ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8d8,&this->CollisionTraces[(int)uVar2].AllocatorInstance,piVar1);
      }
      this->CollisionTraces[(int)uVar2].ArrayNum = iVar3 + 1;
      FNiagaraCollisionTrace::FNiagaraCollisionTrace
                ((FNiagaraCollisionTrace *)
                 (this->CollisionTraces[(int)uVar2].AllocatorInstance.Data + (longlong)iVar3 * 0xd8)
                 ,param_1,param_2,param_3,&local_b8);
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
    if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return iVar3;
}

// ~FNiagaraDICollisionQueryBatch @ 1490b7670

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
FNiagaraDICollisionQueryBatch::~FNiagaraDICollisionQueryBatch(FNiagaraDICollisionQueryBatch *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> *pTVar3;
  BOOLEAN BVar4;
  bool bVar5;
  TArray<FNiagaraDICollsionQueryResult,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  
  pTVar6 = &this->CollisionResults;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar7 = 2;
  do {
    pTVar3 = (TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> *)(pTVar6 + -1);
    pTVar6 = pTVar6 + -1;
    lVar7 = lVar7 + -1;
    DestructItems<FNiagaraCollisionTrace,int>
              ((FNiagaraCollisionTrace *)
               (((TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> *)pTVar6)->
               AllocatorInstance).Data,pTVar3->ArrayNum);
    pFVar1 = (((TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> *)pTVar6)->
             AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pFVar1 = (this->CollisionEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001490b76f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

