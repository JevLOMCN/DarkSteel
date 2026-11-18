// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 15

// FWindowsVideoRecordingSystem @ 148d24eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsVideoRecordingSystem * __thiscall
FWindowsVideoRecordingSystem::FWindowsVideoRecordingSystem(FWindowsVideoRecordingSystem *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->RecordState = (TAtomic<EVideoRecordingState>)0x0;
  (this->Parameters).RecordingLengthSeconds = 0;
  (this->Parameters).bAutoStart = false;
  (this->Parameters).bAutoContinue = false;
  (this->Parameters).bExportToLibrary = true;
  this->_padding_ = (longlong)&___7FWindowsVideoRecordingSystem__6B_;
  (this->Parameters).UserId.InternalId = -1;
  (this->BaseFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFilename).Data.ArrayNum = 0;
  (this->BaseFilename).Data.ArrayMax = 0;
  (this->CurrentFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFilename).Data.ArrayNum = 0;
  (this->CurrentFilename).Data.ArrayMax = 0;
  this->RecordingIndex = 0;
  this->CurrentStartRecordingCycles = 0;
  this->CyclesBeforePausing = 0;
  (this->Recorder).Ptr = (FHighlightRecorder *)0x0;
  this->bAudioFormatChecked = false;
  (this->ScreenshotAndRecorderHandler).Ptr = (FWindowsScreenRecording *)0x0;
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  EnableRecording(this,true);
  return this;
}

// ~FWindowsVideoRecordingSystem @ 148d250a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsVideoRecordingSystem::~FWindowsVideoRecordingSystem(FWindowsVideoRecordingSystem *this)

{
  FWindowsScreenRecording *pFVar1;
  FHighlightRecorder *this_00;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FWindowsVideoRecordingSystem__6B_;
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  EnableRecording(this,false);
  pFVar1 = (this->ScreenshotAndRecorderHandler).Ptr;
  if (pFVar1 != (FWindowsScreenRecording *)0x0) {
    ::operator_delete((pFVar1->CurrentHandle).Ptr,0x18);
    ::operator_delete(pFVar1,8);
  }
  this_00 = (this->Recorder).Ptr;
  if (this_00 != (FHighlightRecorder *)0x0) {
    FHighlightRecorder::_scalar_deleting_destructor_(this_00,1);
  }
  pFVar2 = (this->CurrentFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BaseFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IVideoRecordingSystem__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// operator() @ 148d25180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>::operator()
          (void *this,bool param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 uVar8;
  TStatIdData *local_res18;
  FConstructor local_res20;
  undefined8 *local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  lVar3 = *(longlong *)this;
  if ((*(char *)(lVar3 + 0x39) == '\0') || (*(char *)((longlong)this + 8) != '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_88.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_60);
  local_48 = &local_88;
  puVar6 = UE::Core::Private::DelegateAllocate(0x40,&local_88);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N_NVFString___N__6B_
    ;
    *(bool *)(puVar6 + 1) = param_1;
    *(undefined1 *)((longlong)puVar6 + 9) = uVar8;
    ::FString::FString((FString *)(puVar6 + 2),param_2);
    *(undefined1 *)(puVar6 + 4) = 1;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[5] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWindowsVideoRecordingSystem____A6AXXZUFDefaultDelegateUserPolicy___N_NVFString___N__6B_
    ;
    puVar6[7] = FWindowsVideoRecordingSystem::FinalizeCallbackOnGameThread;
    puVar6[6] = lVar3;
    if (lVar3 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  local_res18 = &TStatId::TStatId_NAME_None;
  local_res20.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
  ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
            (&local_res20,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_98,
             (TStatId *)&local_90,(Type *)&local_res18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_78);
  if ((local_88.DelegateSize != 0) &&
     (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  return;
}

// EnableRecording @ 148d26640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsVideoRecordingSystem::EnableRecording(FWindowsVideoRecordingSystem *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  ulong dwAffinity;
  FWindowsScreenRecording *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_EnableRecording> FVar10;
  FHighlightRecorder *pFVar11;
  FHighlightRecorder *pFVar12;
  FHighlightRecorder *pFVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar14;
  FWindowHandle *pFVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  pFVar13 = (FHighlightRecorder *)0x0;
  FVar10 = StatPtr_STAT_VideoRecordingSystem_EnableRecording;
  if (StatPtr_STAT_VideoRecordingSystem_EnableRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_EnableRecording>)0x0) {
    pFVar9 = ::FName::FName(&local_50,"STAT_VideoRecordingSystem_EnableRecording");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_EnableRecording>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_VideoRecordingSystem_EnableRecording,*pFVar9,
                        L"EnableRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
                        L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar8 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar8 == 0)) {
LAB_148d26790:
    bVar5 = false;
    FVar17 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                   ,0xb2);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d26790;
    local_58.s.LowPart = FVar16.Value;
    local_58.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  if (__CsvProfilerStat179 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("EnableRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat179 = true;
  }
  uVar8 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("EnableRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index,"CSV_EnableRecording"
            );
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar14 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar14,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) {
    if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    }
    goto LAB_148d269c2;
  }
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  pFVar11 = (this->Recorder).Ptr;
  if (param_1) {
    if (pFVar11 == (FHighlightRecorder *)0x0) {
      pFVar11 = ::operator_new(0xd0);
      pFVar12 = pFVar13;
      if (pFVar11 != (FHighlightRecorder *)0x0) {
        pFVar12 = FHighlightRecorder::FHighlightRecorder(pFVar11);
      }
      pFVar11 = (this->Recorder).Ptr;
      if ((pFVar11 != pFVar12) &&
         ((this->Recorder).Ptr = pFVar12, pFVar11 != (FHighlightRecorder *)0x0)) goto LAB_148d268a5;
    }
  }
  else if (pFVar11 != (FHighlightRecorder *)0x0) {
    (this->Recorder).Ptr = (FHighlightRecorder *)0x0;
LAB_148d268a5:
    FHighlightRecorder::_scalar_deleting_destructor_(pFVar11,1);
  }
  if ((this->ScreenshotAndRecorderHandler).Ptr == (FWindowsScreenRecording *)0x0) {
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FHighlightRecorder *)0x0) {
      pFVar11->_padding_ = 0;
      pFVar13 = pFVar11;
    }
    pFVar11 = (FHighlightRecorder *)(this->ScreenshotAndRecorderHandler).Ptr;
    if ((pFVar11 != pFVar13) &&
       ((this->ScreenshotAndRecorderHandler).Ptr = (FWindowsScreenRecording *)pFVar13,
       pFVar11 != (FHighlightRecorder *)0x0)) {
      ::operator_delete((void *)pFVar11->_padding_,0x18);
      ::operator_delete(pFVar11,8);
    }
  }
  this_00 = (this->ScreenshotAndRecorderHandler).Ptr;
  bVar7 = FWindowsScreenRecording::GetCurrentlyActiveHandle(this_00);
  if (param_1) {
    if (!bVar7) goto LAB_148d269c2;
    if (((this_00->CurrentHandle).Ptr == (FWindowHandle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                           ,0x4c,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->CurrentHandle).Ptr)->DisableCount < 1) goto LAB_148d269c2;
    LOCK();
    piVar1 = &((this_00->CurrentHandle).Ptr)->DisableCount;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_148d269c2;
    pFVar15 = (this_00->CurrentHandle).Ptr;
    dwAffinity = pFVar15->Affinity;
  }
  else {
    if (!bVar7) goto LAB_148d269c2;
    if (((this_00->CurrentHandle).Ptr == (FWindowHandle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                           ,0x36,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    piVar1 = &((this_00->CurrentHandle).Ptr)->DisableCount;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 != 0) goto LAB_148d269c2;
    pFVar15 = (this_00->CurrentHandle).Ptr;
    dwAffinity = 1;
  }
  SetWindowDisplayAffinity((HWND)pFVar15->WindowsHandle,dwAffinity);
LAB_148d269c2:
  FCsvProfiler::EndStat("EnableRecording",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
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

// FinalizeCallbackOnGameThread @ 148d26cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsVideoRecordingSystem::FinalizeCallbackOnGameThread
          (FWindowsVideoRecordingSystem *this,bool param_1,bool param_2,FString *param_3,
          bool param_4)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  LOCK();
  this->RecordState = (TAtomic<EVideoRecordingState>)0x0;
  UNLOCK();
  if (param_2) {
    NextRecording(this);
    LOCK();
    this->RecordState = (TAtomic<EVideoRecordingState>)0x2;
    UNLOCK();
  }
  else {
    FHighlightRecorder::Stop((this->Recorder).Ptr);
  }
  if (param_4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_38);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    bVar5 = false;
    uVar9 = (int)this->_padding_ - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(lVar10 + 8 + this->_padding_) == 0) ||
            (plVar2 = *(longlong **)(lVar10 + this->_padding_), plVar2 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_3), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  pFVar3 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// FinalizeRecording @ 148d26e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsVideoRecordingSystem::FinalizeRecording
          (FWindowsVideoRecordingSystem *this,bool param_1,FText *param_2,FText *param_3,
          bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_FinalizeRecording> FVar8;
  FString *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  wchar_t *pwVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  char local_res10;
  FStatMessage local_88;
  FName local_78;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  code *local_68 [2];
  undefined **local_58;
  FWindowsVideoRecordingSystem *local_50;
  bool local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined8 local_40;
  
  FVar8 = StatPtr_STAT_VideoRecordingSystem_FinalizeRecording;
  local_res10 = param_1;
  if (StatPtr_STAT_VideoRecordingSystem_FinalizeRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_FinalizeRecording>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_88,"STAT_VideoRecordingSystem_FinalizeRecording");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_FinalizeRecording>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_VideoRecordingSystem_FinalizeRecording,*pFVar7,
                       L"FinalizeRecording","STATGROUP_VideoRecordingSystem","STATCAT_Advanced",
                       L"VideoRecordingSystem",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                   ,0x165);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_148d26fb5;
    }
  }
  bVar4 = false;
  FVar13 = local_78;
LAB_148d26fb5:
  if (__CsvProfilerStat358 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("FinalizeRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat358 = true;
  }
  local_res8.s.LowPart = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("FinalizeRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_FinalizeRecording");
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  if (this->RecordState == (TAtomic<EVideoRecordingState>)0x0) {
    if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    }
  }
  else if (local_res10 == '\0') {
    pFVar9 = ::FString::FString((FString *)&local_88,&this->CurrentFilename);
    if (((this->Parameters).bAutoContinue == false) || (param_4)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    }
    LOCK();
    this->RecordState = (TAtomic<EVideoRecordingState>)0x0;
    UNLOCK();
    if (bVar6) {
      NextRecording(this);
      LOCK();
      this->RecordState = (TAtomic<EVideoRecordingState>)0x2;
      UNLOCK();
    }
    else {
      FHighlightRecorder::Stop((this->Recorder).Ptr);
    }
    pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    local_40 = 0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::`47'::<lambda_1>,0,0>
                ::_vftable_;
    local_48 = param_4;
    local_47 = local_6f;
    local_43 = local_6b;
    local_41 = local_69;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,void,bool,FString_const_&>
                  ::Call;
    if ((this->CurrentFilename).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(this->CurrentFilename).Data.AllocatorInstance.Data;
    }
    local_50 = this;
    bVar6 = FHighlightRecorder::SaveHighlight
                      ((this->Recorder).Ptr,pwVar11,
                       (TFunction<void___cdecl(bool,FString_const_&)> *)local_68,
                       (double)(this->Parameters).RecordingLengthSeconds);
    if (bVar6) {
      LOCK();
      this->RecordState = (TAtomic<EVideoRecordingState>)0x5;
      UNLOCK();
    }
    else if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    }
  }
  FCsvProfiler::EndStat("FinalizeRecording",local_res8.s.LowPart);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
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

// GetCurrentRecordingSeconds @ 148d27410

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FWindowsVideoRecordingSystem::GetCurrentRecordingSeconds(FWindowsVideoRecordingSystem *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)((this->CyclesBeforePausing - this->CurrentStartRecordingCycles) +
                  local_res8[0].QuadPart) * FGenericPlatformTime::SecondsPerCycle;
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  return (float)dVar1;
}

// GetMaximumRecordingSeconds @ 148d27750

ulong64 __thiscall
FWindowsVideoRecordingSystem::GetMaximumRecordingSeconds(FWindowsVideoRecordingSystem *this)

{
  return 900;
}

// GetMinimumRecordingSeconds @ 148d27760

ulong64 __thiscall
FWindowsVideoRecordingSystem::GetMinimumRecordingSeconds(FWindowsVideoRecordingSystem *this)

{
  return 6;
}

// GetRecordingState @ 148d27780

EVideoRecordingState __thiscall
FWindowsVideoRecordingSystem::GetRecordingState(FWindowsVideoRecordingSystem *this)

{
  return (EVideoRecordingState)this->RecordState;
}

// IsEnabled @ 148d283f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsVideoRecordingSystem::IsEnabled(FWindowsVideoRecordingSystem *this)

{
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  return (this->Recorder).Ptr != (FHighlightRecorder *)0x0;
}

// NewRecording @ 148d28440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsVideoRecordingSystem::NewRecording
          (FWindowsVideoRecordingSystem *this,wchar_t *param_1,FVideoRecordingParameters *param_2)

{
  FString *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FPlatformUserId FVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_NewRecording> FVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FString local_58;
  FStatMessage local_48;
  
  FVar15 = StatPtr_STAT_VideoRecordingSystem_NewRecording;
  if (StatPtr_STAT_VideoRecordingSystem_NewRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_NewRecording>)0x0) {
    pFVar14 = ::FName::FName(&local_70,"STAT_VideoRecordingSystem_NewRecording");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_NewRecording>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingSystem_NewRecording
                        ,*pFVar14,L"NewRecording","STATGROUP_VideoRecordingSystem",
                        "STATCAT_Advanced",L"VideoRecordingSystem",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar16 == 0)) {
LAB_148d28590:
    bVar6 = false;
    FVar18 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                   ,0xe9);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148d28590;
    local_78.s.LowPart = FVar17.Value;
    local_78.s.HighPart = uVar16;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar6 = true;
  }
  if (__CsvProfilerStat234 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NewRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat234 = true;
  }
  uVar16 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("NewRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index,"CSV_NewRecording");
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  cVar11 = (**(code **)(this->_padding_ + 0x10))(this);
  if (cVar11 == '\0') {
    if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
      bVar12 = false;
      goto LAB_148d2879d;
    }
  }
  else if (this->RecordState == (TAtomic<EVideoRecordingState>)0x0) {
    uVar4 = param_2->RecordingLengthSeconds;
    bVar12 = param_2->bAutoStart;
    bVar8 = param_2->bAutoContinue;
    bVar9 = param_2->bExportToLibrary;
    uVar13 = param_2->field_0xb;
    FVar10.InternalId = (param_2->UserId).InternalId;
    this->RecordingIndex = 0;
    (this->Parameters).RecordingLengthSeconds = uVar4;
    (this->Parameters).bAutoStart = bVar12;
    (this->Parameters).bAutoContinue = bVar8;
    (this->Parameters).bExportToLibrary = bVar9;
    (this->Parameters).field_0xb = uVar13;
    (this->Parameters).UserId = (FPlatformUserId)FVar10.InternalId;
    ::FString::FString(&local_58,"recording");
    this_00 = &this->BaseFilename;
    if (this_00 != &local_58) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->BaseFilename).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->BaseFilename).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this->CyclesBeforePausing = 0;
    this->CurrentStartRecordingCycles = 0;
    if (param_1 != (wchar_t *)0x0) {
      ::FString::operator=(this_00,param_1);
    }
    NextRecording(this);
    if ((((this->Recorder).Ptr)->State != (TAtomic<FHighlightRecorder::EState>)0x0) ||
       (bVar12 = FHighlightRecorder::Start
                           ((this->Recorder).Ptr,(double)(this->Parameters).RecordingLengthSeconds),
       bVar12)) {
      bVar12 = FHighlightRecorder::Pause((this->Recorder).Ptr,true);
      if ((!bVar12) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("bPauseRet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                              ,0x112,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      LOCK();
      this->RecordState = (TAtomic<EVideoRecordingState>)0x4;
      UNLOCK();
      if ((this->Parameters).bAutoStart != false) {
        (**(code **)(this->_padding_ + 0x20))(this);
      }
      bVar12 = true;
      goto LAB_148d2879d;
    }
  }
  else if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    bVar12 = false;
    goto LAB_148d2879d;
  }
  bVar12 = false;
LAB_148d2879d:
  FCsvProfiler::EndStat("NewRecording",uVar16);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
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
  return bVar12;
}

// NextRecording @ 148d288b0

void __thiscall FWindowsVideoRecordingSystem::NextRecording(FWindowsVideoRecordingSystem *this)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  if ((this->Parameters).bAutoContinue == false) {
    ::FString::ConcatFC(&local_18,&this->BaseFilename,L".mp4");
    pFVar3 = &this->CurrentFilename;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (pFVar3 != &local_18) {
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->CurrentFilename).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->CurrentFilename).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar2.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    this->RecordingIndex = this->RecordingIndex + 1;
    ::FString::PrintfImpl(&local_28,L"%s_%llu.mp4");
    pFVar3 = &this->CurrentFilename;
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
    if (pFVar3 != &local_28) {
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->CurrentFilename).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->CurrentFilename).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar2.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return;
}

// PauseRecording @ 148d28df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsVideoRecordingSystem::PauseRecording(FWindowsVideoRecordingSystem *this)

{
  int *piVar1;
  FHighlightRecorder *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_PauseRecording> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  FVar8 = StatPtr_STAT_VideoRecordingSystem_PauseRecording;
  if (StatPtr_STAT_VideoRecordingSystem_PauseRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_PauseRecording>)0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_VideoRecordingSystem_PauseRecording");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_PauseRecording>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_VideoRecordingSystem_PauseRecording,*pFVar7,L"PauseRecording",
                       "STATGROUP_VideoRecordingSystem","STATCAT_Advanced",L"VideoRecordingSystem",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                   ,0x13c);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148d28f3f;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_148d28f3f:
  if (__CsvProfilerStat317 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PauseRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat317 = true;
  }
  uVar9 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("PauseRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index,"CSV_PauseRecording");
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  if (this->RecordState == (TAtomic<EVideoRecordingState>)0x2) {
    if (4 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    }
    QueryPerformanceCounter(&local_res18);
    this_00 = (this->Recorder).Ptr;
    this->CyclesBeforePausing =
         this->CyclesBeforePausing +
         (CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) - this->CurrentStartRecordingCycles
         );
    bVar6 = FHighlightRecorder::Pause(this_00,true);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPauseRet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                         ,0x14c,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    this->RecordState = (TAtomic<EVideoRecordingState>)0x4;
    UNLOCK();
  }
  else if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  FCsvProfiler::EndStat("PauseRecording",uVar9);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_40);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// StartRecording @ 148d2a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsVideoRecordingSystem::StartRecording(FWindowsVideoRecordingSystem *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_StartRecording> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  FVar8 = StatPtr_STAT_VideoRecordingSystem_StartRecording;
  if (StatPtr_STAT_VideoRecordingSystem_StartRecording ==
      (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_StartRecording>)0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_VideoRecordingSystem_StartRecording");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VideoRecordingSystem_StartRecording>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_VideoRecordingSystem_StartRecording,*pFVar7,L"StartRecording",
                       "STATGROUP_VideoRecordingSystem","STATCAT_Advanced",L"VideoRecordingSystem",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                   ,0x11f);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148d2aa12;
    }
  }
  bVar4 = false;
  FVar11 = local_60;
LAB_148d2aa12:
  if (__CsvProfilerStat288 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StartRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat288 = true;
  }
  uVar9 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("StartRecording",_GCsvCategory_WindowsVideoRecordingSystem.Index,"CSV_StartRecording");
  if (5 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  if (this->RecordState == (TAtomic<EVideoRecordingState>)0x4) {
    if (4 < (byte)WindowsVideoRecordingSystem._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
    }
    if (((this->Recorder).Ptr)->State == (TAtomic<FHighlightRecorder::EState>)0x0) {
      FHighlightRecorder::Start
                ((this->Recorder).Ptr,(double)(this->Parameters).RecordingLengthSeconds);
    }
    if (((((this->Recorder).Ptr)->State == (TAtomic<FHighlightRecorder::EState>)0x2) &&
        (bVar6 = FHighlightRecorder::Pause((this->Recorder).Ptr,false), !bVar6)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPauseRet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\WindowsVideoRecordingSystem.cpp"
                           ,0x133,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    this->RecordState = (TAtomic<EVideoRecordingState>)0x2;
    UNLOCK();
    QueryPerformanceCounter(&local_res18);
    this->CurrentStartRecordingCycles = CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart);
  }
  else if (2 < (byte)WindowsVideoRecordingSystem._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&WindowsVideoRecordingSystem);
  }
  FCsvProfiler::EndStat("StartRecording",uVar9);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

