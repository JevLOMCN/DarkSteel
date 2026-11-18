// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DoTask @ 1475c02d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightProfileManagerAsyncTask::DoTask
          (FSkinWeightProfileManagerAsyncTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  FSkinWeightProfilesData *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManagerAsyncTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_16_::FStat_STAT_SkinWeightProfileManager_TickMeshAsync>
  FVar14;
  UStreamableRenderAsset *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong *plVar15;
  ulonglong uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FSkinWeightProfileManager *pFVar19;
  uint *puVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res20 [8];
  uint local_a8;
  FColor_u_0 local_a0 [2];
  FName local_98;
  uint local_90;
  uint uStack_8c;
  longlong local_88;
  FName local_80;
  LARGE_INTEGER local_70;
  uint *local_68;
  FSkinWeightProfileManager *local_60;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  if (!__CsvProfilerStat484) {
    FCsvProfilerTrace::OutputInlineStat("SkinWeightProfileManagerAsync",0);
    __CsvProfilerStat484 = true;
  }
  FCsvProfiler::BeginStat("SkinWeightProfileManagerAsync",0,"CSV_SkinWeightProfileManagerAsync");
  pFVar19 = this->Owner;
  local_60 = pFVar19;
  if (((pFVar19->PendingSetProfileRequests).ArrayNum <= pFVar19->LastGamethreadProfileIndex) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->LastGamethreadProfileIndex < OwnerRequests.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                         ,0x1e9,L"Invalid state"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8 = 0;
  if (-1 < this->Owner->LastGamethreadProfileIndex) {
    local_88 = 0;
    do {
      lVar21 = local_88;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_STAT_SkinWeightProfileManager_TickMeshAsync =
             (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManagerAsyncTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_16_::FStat_STAT_SkinWeightProfileManager_TickMeshAsync>
              )0x0;
        pFVar13 = ::FName::FName(&local_48,"STAT_SkinWeightProfileManager_TickMeshAsync");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinWeightProfileManager_TickMeshAsync
                   ,*pFVar13,L"STAT_SkinWeightProfileManager_TickMeshAsync","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      FVar14 = StatPtr_STAT_SkinWeightProfileManager_TickMeshAsync;
      if (StatPtr_STAT_SkinWeightProfileManager_TickMeshAsync ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManagerAsyncTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_16_::FStat_STAT_SkinWeightProfileManager_TickMeshAsync>
           )0x0) {
        pFVar13 = ::FName::FName(&local_40,"STAT_SkinWeightProfileManager_TickMeshAsync");
        FVar14 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManagerAsyncTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_16_::FStat_STAT_SkinWeightProfileManager_TickMeshAsync>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_SkinWeightProfileManager_TickMeshAsync,*pFVar13,
                              L"STAT_SkinWeightProfileManager_TickMeshAsync","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar18 = *(FName *)FVar14;
      bVar9 = false;
      bVar7 = false;
      local_80.ComparisonIndex.Value = 0;
      local_80.Number = 0;
      FVar17 = FVar18.ComparisonIndex.Value;
      uVar11 = FVar18.Number;
      if ((FVar17.Value == 0) && (uVar11 == 0)) {
LAB_1475c0586:
        bVar6 = false;
        FVar18 = local_80;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_a0[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_a0[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
          bVar9 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_98.ComparisonIndex.Value = FVar17.Value;
            local_98.Number = uVar11;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_98,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                       ,0x1ed);
            bVar9 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1475c0586;
        local_90 = FVar17.Value;
        uStack_8c = uVar11;
        local_80 = FVar18;
        FThreadStats::AddMessage(FVar18,CycleScopeStart);
        bVar6 = true;
      }
      uVar11 = 0;
      if ((int)local_a8 < (pFVar19->PendingSetProfileRequests).ArrayNum) {
        uVar11 = ~local_a8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar22 = (pFVar19->PendingSetProfileRequests).AllocatorInstance.Data + lVar21;
      this_01 = (UStreamableRenderAsset *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar22 + 0x58));
      if (this_01 == (UStreamableRenderAsset *)0x0) {
LAB_1475c08f7:
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar6) {
          FThreadStats::AddMessage(FVar18,CycleScopeEnd);
        }
      }
      else {
        if ((GSkipHasPendingInitOrStreamingSkeletalMesh == 0) ||
           (bVar10 = UStreamableRenderAsset::HasPendingInitOrStreaming(this_01,false), !bVar10)) {
          plVar15 = (longlong *)(**(code **)(this_01->_padding_ + 0x398))(this_01);
          if (plVar15 != (longlong *)0x0) {
            uVar11 = *(uint *)(pFVar22 + 0x18);
            uVar16 = (ulonglong)(int)uVar11;
            puVar20 = *(uint **)&pFVar22[0x10].field_0x0;
            local_68 = puVar20 + uVar16;
LAB_1475c0740:
            puVar8 = local_68;
            if (*(int *)(pFVar22 + 0x18) != (int)uVar16) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            pFVar19 = local_60;
            lVar21 = local_88;
            if (puVar20 == puVar8) goto LAB_1475c08f7;
            uVar2 = *puVar20;
            uVar12 = 0;
            if ((int)uVar2 < (int)plVar15[1]) {
              uVar12 = ~uVar2 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = *(longlong *)(*plVar15 + (longlong)(int)uVar2 * 8);
            this_00 = (FSkinWeightProfilesData *)(lVar21 + 0x328);
            if ((GHandleDelayedLoads == 0) ||
               (bVar10 = FSkinWeightProfilesData::HasProfileStack
                                   (this_00,(FSkinWeightProfileStack *)pFVar22), !bVar10)) {
              if (GAllowCPU != 0) {
                if (GHandleDelayedLoads == 0) {
LAB_1475c0809:
                  if (*(char *)(lVar21 + 0x1b8) == '\0') goto LAB_1475c0816;
                }
                else {
                  bVar10 = FSkinWeightDataVertexBuffer::IsWeightDataValid
                                     ((FSkinWeightDataVertexBuffer *)(lVar21 + 0x188));
                  if (!bVar10) {
                    if (GHandleDelayedLoads != 0) goto LAB_1475c0816;
                    goto LAB_1475c0809;
                  }
                }
LAB_1475c08bb:
                FSkinWeightProfilesData::InitialiseProfileBuffer
                          (this_00,(FSkinWeightProfileStack *)pFVar22);
                goto LAB_1475c08c6;
              }
LAB_1475c0816:
              lpCriticalSection = (LPCRITICAL_SECTION)(lVar21 + 0x3f0);
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              lVar4 = *(longlong *)(lVar21 + 0x418);
              LeaveCriticalSection(lpCriticalSection);
              if (lVar4 == 0) {
                FSkinWeightProfilesData::EnqueueGPUReadback(this_00);
                uVar16 = (ulonglong)uVar11;
                puVar20 = puVar20 + 1;
                goto LAB_1475c0740;
              }
              bVar10 = FSkinWeightProfilesData::IsGPUReadbackFinished(this_00);
              if (bVar10) {
                bVar10 = FSkinWeightProfilesData::IsGPUReadbackFinished(this_00);
                if (bVar10) {
                  EnterCriticalSection(lpCriticalSection);
                  iVar3 = *(int *)(lVar21 + 0x428);
                  LeaveCriticalSection(lpCriticalSection);
                  if (iVar3 < 1) {
                    FSkinWeightProfilesData::EnqueueDataReadback(this_00);
                    uVar16 = (ulonglong)uVar11;
                    puVar20 = puVar20 + 1;
                    goto LAB_1475c0740;
                  }
                }
                bVar10 = FSkinWeightProfilesData::IsDataReadbackFinished(this_00);
                if (bVar10) goto LAB_1475c08bb;
              }
            }
LAB_1475c08c6:
            uVar16 = (ulonglong)uVar11;
            puVar20 = puVar20 + 1;
            goto LAB_1475c0740;
          }
          goto LAB_1475c08f7;
        }
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          this_02 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_02 == (FThreadStats *)0x0) {
            this_03 = FThreadStatsPool::Get();
            this_02 = FThreadStatsPool::GetFromPool(this_03);
          }
          if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
            local_58.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
            local_58.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_70);
            local_58.StatData.Pad[4] = '\0';
            local_58.StatData.Pad[5] = '\0';
            local_58.StatData.Pad[6] = '\0';
            local_58.StatData.Pad[7] = '\0';
            local_58.StatData.Pad[0] = local_70.s.LowPart._0_1_;
            local_58.StatData.Pad[1] = local_70.s.LowPart._1_1_;
            local_58.StatData.Pad[2] = local_70.s.LowPart._2_1_;
            local_58.StatData.Pad[3] = local_70.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_02,&local_58);
            piVar1 = &this_02->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this_02,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_02,false,false);
            }
          }
        }
      }
      local_a8 = local_a8 + 1;
      local_88 = lVar21 + 0x70;
    } while ((int)local_a8 <= this->Owner->LastGamethreadProfileIndex);
  }
  FCsvProfiler::EndStat("SkinWeightProfileManagerAsync",0);
  return;
}

// GetDesiredThread @ 1475d44c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FSkinWeightProfileManagerAsyncTask::GetDesiredThread(FSkinWeightProfileManagerAsyncTask *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  Type TVar3;
  longlong lVar4;
  
  pTVar1 = CVarForceSkinWeightProfileManagerAsyncTaskOnGT.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar4 = 4;
      goto LAB_1475d44e8;
    }
  }
  lVar4 = 0;
LAB_1475d44e8:
  TVar3 = AnyBackgroundHiPriTask;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) {
    TVar3 = GameThread;
  }
  return TVar3;
}

