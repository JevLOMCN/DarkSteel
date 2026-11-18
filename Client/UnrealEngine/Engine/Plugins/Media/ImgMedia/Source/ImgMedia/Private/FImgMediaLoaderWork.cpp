// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 5

// FImgMediaLoaderWork @ 14ea38810

FImgMediaLoaderWork * __thiscall
FImgMediaLoaderWork::FImgMediaLoaderWork
          (FImgMediaLoaderWork *this,TSharedRef<FImgMediaLoader,1> *param_1,
          TSharedRef<IImgMediaReader,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->FrameNumber = -1;
  this->_padding_ = (longlong)&___7FImgMediaLoaderWork__6B_;
  this->_padding_ = 0;
  *(undefined8 *)&this->MipTiles = 0;
  *(undefined8 *)&(this->MipTiles).field_0x8 = 0;
  *(undefined8 *)&(this->MipTiles).field_0x20 = 0;
  *(undefined4 *)&(this->MipTiles).field_0x28 = 0;
  *(undefined4 *)&(this->MipTiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->MipTiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MipTiles).field_0x34 = 0;
  *(undefined8 *)&(this->MipTiles).field_0x40 = 0;
  *(undefined4 *)&(this->MipTiles).field_0x48 = 0;
  (this->ExistingFrame).Object = (FImgMediaFrame *)0x0;
  (this->ExistingFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OwnerPtr).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OwnerPtr).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->Reader).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Reader).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// Abandon @ 14ea407a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImgMediaLoaderWork::Abandon(FImgMediaLoaderWork *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderAbandonWork> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar9;
  FName FVar10;
  undefined1 auStackY_10b8 [32];
  LARGE_INTEGER local_1058;
  TSharedPtr<FImgMediaFrame,1> local_1050;
  FName local_1040;
  uchar local_1028 [2];
  int local_1026;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14ea407b8;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_10b8;
  FVar8 = StatPtr_STAT_ImgMedia_LoaderAbandonWork;
  if (StatPtr_STAT_ImgMedia_LoaderAbandonWork ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderAbandonWork>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_1050,"STAT_ImgMedia_LoaderAbandonWork");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderAbandonWork>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderAbandonWork,*pFVar7
                       ,L"ImgMedia Loader Abadon Work","STATGROUP_Media","STATCAT_Advanced",L"Media"
                       ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_1040.ComparisonIndex.Value = 0;
  local_1040.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar6 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1058.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1058.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1058.s.LowPart = FVar9.Value;
        local_1058.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1058.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoaderWork.cpp"
                   ,0x36);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1058.s.LowPart = FVar9.Value;
      local_1058.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      goto LAB_14ea408f6;
    }
  }
  bVar4 = false;
  FVar10 = local_1040;
LAB_14ea408f6:
  FCsvProfiler::RecordEventfInternal(_GCsvCategory_ImgMedia.Index,L"LoaderAbandon %d");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint55 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint55,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoaderWork.cpp"
                 ,0x37,L"ImgMedia/LoaderAbandon %d");
      __BookmarkPoint55 = true;
    }
    iVar2 = this->FrameNumber;
    uVar6 = CallstackTrace_GetCurrentId();
    local_1028[0] = '\x01';
    local_1028[1] = 'D';
    local_1026 = iVar2;
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint55,uVar6,6,local_1028);
  }
  local_1050.Object = (FImgMediaFrame *)0x0;
  local_1050.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Finalize(this,&local_1050,0.0);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1050.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)FVar10 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_1058);
      local_1050.Object = (FImgMediaFrame *)(ulonglong)local_1058.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_1050);
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
  return;
}

// DoThreadedWork @ 14ea471f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImgMediaLoaderWork::DoThreadedWork(FImgMediaLoaderWork *this)

{
  FSharedReferencer<1> *pFVar1;
  int *piVar2;
  int iVar3;
  IImgMediaReader *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReadFrame> FVar11;
  FImgMediaFrame *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderFinalizeWork> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  ForAnyElementType FVar17;
  FName FVar18;
  FSharedReferencer<1> FVar19;
  FNameEntryId FVar20;
  FImgMediaFrame *pFVar21;
  bool bVar22;
  double dVar23;
  FSharedReferencer<1> FVar24;
  float fVar25;
  FColor_u_0 local_res10 [2];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  TSharedPtr<FImgMediaFrame,1> local_128;
  FName local_118;
  FName local_108;
  FName local_100;
  TRawPtrProxy<FImgMediaFrame> local_f0;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  FString local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FImgMediaFrame *local_98;
  FImgMediaFrame *local_90;
  FName local_88;
  FName local_80;
  TSharedPtr<FImgMediaFrame,1> local_78 [3];
  
  fVar25 = 0.0;
  local_128.Object = (FImgMediaFrame *)0x0;
  local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (5 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  pFVar21 = (FImgMediaFrame *)0x0;
  FVar20.Value = 0;
  if (this->FrameNumber == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar19.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar21 = (FImgMediaFrame *)0x0;
    FVar24.ReferenceController = (TReferenceControllerBase<1> *)(FImgMediaFrame *)0x0;
  }
  else {
    FVar11 = StatPtr_STAT_ImgMedia_LoaderReadFrame;
    if (StatPtr_STAT_ImgMedia_LoaderReadFrame ==
        (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReadFrame>)0x0) {
      pFVar13 = ::FName::FName(&local_88,"STAT_ImgMedia_LoaderReadFrame");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderReadFrame>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderReadFrame,
                          *pFVar13,L"ImgMedia Loader Read Frame","STATGROUP_Media",
                          "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar18 = *(FName *)FVar11;
    bVar7 = false;
    bVar6 = false;
    local_100.ComparisonIndex.Value = 0;
    local_100.Number = 0;
    bVar22 = false;
    bVar8 = false;
    if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_14ea473b7:
      bVar7 = bVar22;
      bVar6 = bVar8;
      bVar8 = false;
      FVar18 = local_100;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
        bVar7 = false;
        bVar6 = true;
        bVar22 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res20.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
          local_res20.Number = FVar18.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoaderWork.cpp"
                     ,0x49);
          bVar7 = true;
          bVar6 = true;
          bVar22 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea473b7;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
    }
    ::FString::PrintfImpl(&local_c8,L"ImgMedia_LoaderReadFrame %d");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar17.Data = local_c8.Data.AllocatorInstance.Data;
    }
    bVar22 = -1 < CpuChannel->Enabled;
    if (bVar22) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar17.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoaderWork.cpp"
                 ,0x4a);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar12 = (this->ExistingFrame).Object;
    if (pFVar12 == (FImgMediaFrame *)0x0) {
      pFVar12 = ::operator_new(0x160);
      local_f0.Object = pFVar21;
      if (pFVar12 != (FImgMediaFrame *)0x0) {
        memset(pFVar12,0,0x160);
        local_f0.Object = FImgMediaFrame::FImgMediaFrame(pFVar12);
      }
      TSharedPtr<FImgMediaFrame,1>::operator=<FImgMediaFrame>(&local_128,&local_f0);
      FVar19.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
    }
    else {
      FVar19.ReferenceController = (this->ExistingFrame).SharedReferenceCount.ReferenceController;
      if ((FImgMediaFrame *)FVar19.ReferenceController != (FImgMediaFrame *)0x0) {
        LOCK();
        pFVar1 = &(((FImgMediaFrame *)FVar19.ReferenceController)->Data).SharedReferenceCount;
        *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + 1;
        UNLOCK();
      }
      local_128.Object = pFVar12;
      local_128.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      LOCK();
      pFVar12->NumTilesRead = (atomic<int>)0x0;
      UNLOCK();
    }
    QueryPerformanceCounter(&local_e8);
    dVar23 = (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (((this->Reader).Object == (IImgMediaReader *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = (this->Reader).Object;
    pcVar5 = *(code **)((longlong)*pIVar4 + 8);
    local_98 = local_128.Object;
    if ((FImgMediaFrame *)FVar19.ReferenceController != (FImgMediaFrame *)0x0) {
      LOCK();
      pFVar1 = &(((FImgMediaFrame *)FVar19.ReferenceController)->Data).SharedReferenceCount;
      *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + 1;
      UNLOCK();
    }
    local_90 = (FImgMediaFrame *)FVar19.ReferenceController;
    cVar10 = (*pcVar5)(pIVar4,this->FrameNumber,&this->MipTiles,&local_98);
    if (cVar10 == '\0') {
      if ((this->ExistingFrame).Object == (FImgMediaFrame *)0x0) {
        local_128.Object = (FImgMediaFrame *)0x0;
        pFVar12 = (FImgMediaFrame *)FVar19.ReferenceController;
        if ((FImgMediaFrame *)FVar19.ReferenceController != (FImgMediaFrame *)0x0) {
          local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          LOCK();
          pFVar1 = &(((FImgMediaFrame *)FVar19.ReferenceController)->Data).SharedReferenceCount;
          iVar3 = *(int *)&pFVar1->ReferenceController;
          *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + -1;
          UNLOCK();
          pFVar12 = pFVar21;
          if (iVar3 == 1) {
            (**(code **)(((FImgMediaFrame *)FVar19.ReferenceController)->Data).Object)();
            LOCK();
            piVar2 = (int *)((longlong)
                             &(((FImgMediaFrame *)FVar19.ReferenceController)->Data).
                              SharedReferenceCount.ReferenceController + 4);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)((longlong)(((FImgMediaFrame *)FVar19.ReferenceController)->Data).Object +
                          8))(FVar19.ReferenceController,1);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FVar19.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      }
    }
    else {
      QueryPerformanceCounter(&local_e0);
      fVar25 = (float)((double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar23);
    }
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar21 = local_128.Object;
    FVar24.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
    if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      pFVar21 = local_128.Object;
      FVar24.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
      if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
        local_b8.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
        local_b8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_d8);
        local_b8.StatData.Pad[4] = '\0';
        local_b8.StatData.Pad[5] = '\0';
        local_b8.StatData.Pad[6] = '\0';
        local_b8.StatData.Pad[7] = '\0';
        local_b8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
        local_b8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
        local_b8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
        local_b8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar15,&local_b8);
        piVar2 = &pFVar15->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar15,false,false);
          pFVar21 = local_128.Object;
          FVar24.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
        }
        else {
          pFVar21 = local_128.Object;
          FVar24.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
            pFVar21 = local_128.Object;
            FVar24.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
          }
        }
      }
    }
  }
  FVar14 = StatPtr_STAT_ImgMedia_LoaderFinalizeWork;
  if (StatPtr_STAT_ImgMedia_LoaderFinalizeWork ==
      (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderFinalizeWork>)0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_ImgMedia_LoaderFinalizeWork");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ImgMedia_LoaderFinalizeWork>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImgMedia_LoaderFinalizeWork,
                        *pFVar13,L"ImgMedia Loader Finalize Work","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_108.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Loader\\ImgMediaLoaderWork.cpp"
                   ,0x65);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      FVar20.Value = local_118.ComparisonIndex.Value;
      goto LAB_14ea477ad;
    }
  }
  bVar7 = false;
  FVar18 = local_118;
LAB_14ea477ad:
  if ((FImgMediaFrame *)FVar19.ReferenceController != (FImgMediaFrame *)0x0) {
    LOCK();
    pFVar1 = &(((FImgMediaFrame *)FVar19.ReferenceController)->Data).SharedReferenceCount;
    *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + 1;
    UNLOCK();
  }
  local_78[0].Object = pFVar21;
  local_78[0].SharedReferenceCount.ReferenceController = FVar24.ReferenceController;
  Finalize(this,local_78,fVar25);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_a8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_a8.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&local_d0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_a8);
      piVar2 = &pFVar15->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  return;
}

// Finalize @ 14ea49250

void __thiscall
FImgMediaLoaderWork::Finalize
          (FImgMediaLoaderWork *this,TSharedPtr<FImgMediaFrame,1> *param_1,float param_2)

{
  FImgMediaLoader *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<FImgMediaFrame,1> local_38;
  TSharedPtr<FImgMediaFrame,1> local_28 [2];
  
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ExistingFrame != (TSharedPtr<FImgMediaFrame,1> *)&local_48) {
    (this->ExistingFrame).Object = (FImgMediaFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ExistingFrame).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  pTVar3 = (this->OwnerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea492d4;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->OwnerPtr).Object;
    if (this_00 != (FImgMediaLoader *)0x0) {
      FImgMediaLoader::NotifyWorkComplete
                (this_00,this,this->JobID,this->FrameNumber,param_1,param_2);
      goto LAB_14ea4934d;
    }
  }
LAB_14ea492d4:
  local_38.Object = (FImgMediaFrame *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_38) {
    param_1->Object = (FImgMediaFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_28[0].Object = (FImgMediaFrame *)0x0;
  local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != local_28) {
    param_1->Object = (FImgMediaFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_28[0].SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  if (this != (FImgMediaLoaderWork *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
LAB_14ea4934d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Initialize @ 14ea514c0

void __thiscall
FImgMediaLoaderWork::Initialize
          (FImgMediaLoaderWork *this,int param_1,int param_2,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_3,TSharedPtr<FImgMediaFrame,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FImgMediaFrame *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 local_28 [8];
  FKeyComparisonClass<TLess<int>_> local_20;
  
  this->JobID = param_1;
  this->FrameNumber = param_2;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  ::operator=(&this->MipTiles,param_3);
  pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
  pFVar2 = param_4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ExistingFrame).SharedReferenceCount.ReferenceController;
  (this->ExistingFrame).Object = pFVar2;
  (this->ExistingFrame).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_20.Predicate.Predicate = (TDereferenceWrapper<int,TLess<int>_>)local_28;
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>::FKeyComparisonClass<TLess<int>_>_>
            ((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
              *)&this->MipTiles,&local_20);
  *(undefined4 *)&param_3->field_0x48 = 0;
  if (*(void **)&param_3->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FImgMediaTileSelection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

