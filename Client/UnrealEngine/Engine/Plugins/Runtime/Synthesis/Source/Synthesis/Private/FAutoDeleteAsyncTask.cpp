// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// Abandon @ 14f0c96c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask>::Abandon
          (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *pTVar3;
  FEffectConvolutionReverb *pFVar4;
  FConvolutionReverb *this_00;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FConvolutionReverb *this_03;
  FConvolutionReverb *pFVar13;
  FConvolutionReverb *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER LStack_88;
  FName FStack_80;
  FStatMessage FStack_70;
  undefined8 uStack_60;
  FInheritedContextScope FStack_58;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId'::__l2::FStat_CreateConvolutionReverbTask>
    ::
    FThreadSafeStaticStat<_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId_::__l2::FStat_CreateConvolutionReverbTask>
              (&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_CreateConvolutionReverbTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_03 = (FConvolutionReverb *)0x0;
  pTVar11 = _StatPtr_CreateConvolutionReverbTask;
  if (_StatPtr_CreateConvolutionReverbTask == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName((FName *)&FStack_70,"CreateConvolutionReverbTask");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_CreateConvolutionReverbTask,*pFVar10,
                         L"CreateConvolutionReverbTask","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar8 = false;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar12 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar12 == 0)) {
LAB_14f0d568b:
    bVar6 = false;
    FVar16 = FStack_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_88.s,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_88.s.LowPart = FVar15.Value;
        LStack_88.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_88.s,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_14f0d568b;
    LStack_88.s.LowPart = FVar15.Value;
    LStack_88.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  Audio::FConvolutionReverb::CreateConvolutionReverb
            ((FConvolutionReverbInitData *)&LStack_88.s,
             (FConvolutionReverbSettings *)&(this->Task).InitData);
  pFVar14 = (FConvolutionReverb *)(this->Task).EffectPtr.WeakReferenceCount.ReferenceController;
  pFVar13 = pFVar14;
  if (pFVar14 != (FConvolutionReverb *)0x0) {
    aVar7 = *(atomic<int> *)&(pFVar14->Settings).bRearChannelFlip;
    do {
      pFVar13 = this_03;
      if (aVar7 == (atomic<int>)0x0) goto LAB_14f0d5705;
      paVar1 = (atomic<int> *)&(pFVar14->Settings).bRearChannelFlip;
      LOCK();
      aVar9 = *paVar1;
      bVar17 = aVar7 == aVar9;
      if (bVar17) {
        *paVar1 = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar17);
    pFVar4 = (this->Task).EffectPtr.Object;
    pFVar13 = pFVar14;
    if (pFVar4 != (FEffectConvolutionReverb *)0x0) {
      pFVar13 = (FConvolutionReverb *)CONCAT44(LStack_88.s.HighPart,LStack_88.s.LowPart);
      lpCriticalSection = &pFVar4->VersionDataCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      (pFVar4->QueuedVersionData).ConvolutionID = (this->Task).VersionData.ConvolutionID;
      pTVar3 = &pFVar4->QueuedReverb;
      if (pTVar3 != (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                     *)&uStack_60) {
        this_00 = pTVar3->Ptr;
        pTVar3->Ptr = pFVar13;
        pFVar13 = this_03;
        if (this_00 != (FConvolutionReverb *)0x0) {
          Audio::FConvolutionReverb::~FConvolutionReverb(this_00);
          ::operator_delete(this_00,0xd0);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          goto LAB_14f0d570a;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar13 != (FConvolutionReverb *)0x0) {
        Audio::FConvolutionReverb::~FConvolutionReverb(pFVar13);
        ::operator_delete(pFVar13,0xd0);
        this_03 = (FConvolutionReverb *)0x0;
      }
      goto LAB_14f0d570a;
    }
  }
LAB_14f0d5705:
  this_03 = (FConvolutionReverb *)CONCAT44(LStack_88.s.HighPart,LStack_88.s.LowPart);
  pFVar14 = pFVar13;
LAB_14f0d570a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  if (this_03 != (FConvolutionReverb *)0x0) {
    Audio::FConvolutionReverb::~FConvolutionReverb(this_03);
    ::operator_delete(this_03,0xd0);
  }
  if (this != (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *)0x0)
  {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_70.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      FStack_70.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_88);
      FStack_70.StatData.Pad[4] = '\0';
      FStack_70.StatData.Pad[5] = '\0';
      FStack_70.StatData.Pad[6] = '\0';
      FStack_70.StatData.Pad[7] = '\0';
      FStack_70.StatData.Pad[0] = LStack_88.s.LowPart._0_1_;
      FStack_70.StatData.Pad[1] = LStack_88.s.LowPart._1_1_;
      FStack_70.StatData.Pad[2] = LStack_88.s.LowPart._2_1_;
      FStack_70.StatData.Pad[3] = LStack_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_70);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_58.MetaScope);
  FMemScope::~FMemScope(&FStack_58.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_58,FStack_58.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 14f0d5520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask>::DoThreadedWork
          (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *pTVar3;
  FEffectConvolutionReverb *pFVar4;
  FConvolutionReverb *this_00;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FConvolutionReverb *this_03;
  FConvolutionReverb *pFVar13;
  FConvolutionReverb *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER LStack_88;
  FName FStack_80;
  FStatMessage FStack_70;
  undefined8 uStack_60;
  FInheritedContextScope FStack_58;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId'::__l2::FStat_CreateConvolutionReverbTask>
    ::
    FThreadSafeStaticStat<_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId_::__l2::FStat_CreateConvolutionReverbTask>
              (&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_CreateConvolutionReverbTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_03 = (FConvolutionReverb *)0x0;
  pTVar11 = _StatPtr_CreateConvolutionReverbTask;
  if (_StatPtr_CreateConvolutionReverbTask == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName((FName *)&FStack_70,"CreateConvolutionReverbTask");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_CreateConvolutionReverbTask,*pFVar10,
                         L"CreateConvolutionReverbTask","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar8 = false;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar12 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar12 == 0)) {
LAB_14f0d568b:
    bVar6 = false;
    FVar16 = FStack_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_88.s,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_88.s.LowPart = FVar15.Value;
        LStack_88.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_88.s,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_14f0d568b;
    LStack_88.s.LowPart = FVar15.Value;
    LStack_88.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  Audio::FConvolutionReverb::CreateConvolutionReverb
            ((FConvolutionReverbInitData *)&LStack_88.s,
             (FConvolutionReverbSettings *)&(this->Task).InitData);
  pFVar14 = (FConvolutionReverb *)(this->Task).EffectPtr.WeakReferenceCount.ReferenceController;
  pFVar13 = pFVar14;
  if (pFVar14 != (FConvolutionReverb *)0x0) {
    aVar7 = *(atomic<int> *)&(pFVar14->Settings).bRearChannelFlip;
    do {
      pFVar13 = this_03;
      if (aVar7 == (atomic<int>)0x0) goto LAB_14f0d5705;
      paVar1 = (atomic<int> *)&(pFVar14->Settings).bRearChannelFlip;
      LOCK();
      aVar9 = *paVar1;
      bVar17 = aVar7 == aVar9;
      if (bVar17) {
        *paVar1 = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar17);
    pFVar4 = (this->Task).EffectPtr.Object;
    pFVar13 = pFVar14;
    if (pFVar4 != (FEffectConvolutionReverb *)0x0) {
      pFVar13 = (FConvolutionReverb *)CONCAT44(LStack_88.s.HighPart,LStack_88.s.LowPart);
      lpCriticalSection = &pFVar4->VersionDataCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      (pFVar4->QueuedVersionData).ConvolutionID = (this->Task).VersionData.ConvolutionID;
      pTVar3 = &pFVar4->QueuedReverb;
      if (pTVar3 != (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                     *)&uStack_60) {
        this_00 = pTVar3->Ptr;
        pTVar3->Ptr = pFVar13;
        pFVar13 = this_03;
        if (this_00 != (FConvolutionReverb *)0x0) {
          Audio::FConvolutionReverb::~FConvolutionReverb(this_00);
          ::operator_delete(this_00,0xd0);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          goto LAB_14f0d570a;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar13 != (FConvolutionReverb *)0x0) {
        Audio::FConvolutionReverb::~FConvolutionReverb(pFVar13);
        ::operator_delete(pFVar13,0xd0);
        this_03 = (FConvolutionReverb *)0x0;
      }
      goto LAB_14f0d570a;
    }
  }
LAB_14f0d5705:
  this_03 = (FConvolutionReverb *)CONCAT44(LStack_88.s.HighPart,LStack_88.s.LowPart);
  pFVar14 = pFVar13;
LAB_14f0d570a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  if (this_03 != (FConvolutionReverb *)0x0) {
    Audio::FConvolutionReverb::~FConvolutionReverb(this_03);
    ::operator_delete(this_03,0xd0);
  }
  if (this != (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *)0x0)
  {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_70.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      FStack_70.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_88);
      FStack_70.StatData.Pad[4] = '\0';
      FStack_70.StatData.Pad[5] = '\0';
      FStack_70.StatData.Pad[6] = '\0';
      FStack_70.StatData.Pad[7] = '\0';
      FStack_70.StatData.Pad[0] = LStack_88.s.LowPart._0_1_;
      FStack_70.StatData.Pad[1] = LStack_88.s.LowPart._1_1_;
      FStack_70.StatData.Pad[2] = LStack_88.s.LowPart._2_1_;
      FStack_70.StatData.Pad[3] = LStack_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_70);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_58.MetaScope);
  FMemScope::~FMemScope(&FStack_58.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_58,FStack_58.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 14f0d5530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask>::DoWork
          (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *pTVar3;
  FEffectConvolutionReverb *pFVar4;
  FConvolutionReverb *this_00;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FConvolutionReverb *this_03;
  FConvolutionReverb *pFVar13;
  FConvolutionReverb *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER local_88;
  FName local_80;
  FStatMessage local_70;
  undefined8 local_60;
  FInheritedContextScope local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId'::__l2::FStat_CreateConvolutionReverbTask>
    ::
    FThreadSafeStaticStat<_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId_::__l2::FStat_CreateConvolutionReverbTask>
              (&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_CreateConvolutionReverbTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_03 = (FConvolutionReverb *)0x0;
  pTVar11 = _StatPtr_CreateConvolutionReverbTask;
  if (_StatPtr_CreateConvolutionReverbTask == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_70,"CreateConvolutionReverbTask");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_AudioConvReverbIntrinsics::FCreateConvolutionReverbTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_CreateConvolutionReverbTask,*pFVar10,
                         L"CreateConvolutionReverbTask","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar12 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar12 == 0)) {
LAB_14f0d568b:
    bVar6 = false;
    FVar16 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88.s,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.s.LowPart = FVar15.Value;
        local_88.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88.s,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_14f0d568b;
    local_88.s.LowPart = FVar15.Value;
    local_88.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  Audio::FConvolutionReverb::CreateConvolutionReverb
            ((FConvolutionReverbInitData *)&local_88.s,
             (FConvolutionReverbSettings *)&(this->Task).InitData);
  pFVar14 = (FConvolutionReverb *)(this->Task).EffectPtr.WeakReferenceCount.ReferenceController;
  pFVar13 = pFVar14;
  if (pFVar14 != (FConvolutionReverb *)0x0) {
    aVar7 = *(atomic<int> *)&(pFVar14->Settings).bRearChannelFlip;
    do {
      pFVar13 = this_03;
      if (aVar7 == (atomic<int>)0x0) goto LAB_14f0d5705;
      paVar1 = (atomic<int> *)&(pFVar14->Settings).bRearChannelFlip;
      LOCK();
      aVar9 = *paVar1;
      bVar17 = aVar7 == aVar9;
      if (bVar17) {
        *paVar1 = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar17);
    pFVar4 = (this->Task).EffectPtr.Object;
    pFVar13 = pFVar14;
    if (pFVar4 != (FEffectConvolutionReverb *)0x0) {
      pFVar13 = (FConvolutionReverb *)CONCAT44(local_88.s.HighPart,local_88.s.LowPart);
      lpCriticalSection = &pFVar4->VersionDataCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      (pFVar4->QueuedVersionData).ConvolutionID = (this->Task).VersionData.ConvolutionID;
      pTVar3 = &pFVar4->QueuedReverb;
      if (pTVar3 != (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                     *)&local_60) {
        this_00 = pTVar3->Ptr;
        pTVar3->Ptr = pFVar13;
        pFVar13 = this_03;
        if (this_00 != (FConvolutionReverb *)0x0) {
          Audio::FConvolutionReverb::~FConvolutionReverb(this_00);
          ::operator_delete(this_00,0xd0);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          goto LAB_14f0d570a;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar13 != (FConvolutionReverb *)0x0) {
        Audio::FConvolutionReverb::~FConvolutionReverb(pFVar13);
        ::operator_delete(pFVar13,0xd0);
        this_03 = (FConvolutionReverb *)0x0;
      }
      goto LAB_14f0d570a;
    }
  }
LAB_14f0d5705:
  this_03 = (FConvolutionReverb *)CONCAT44(local_88.s.HighPart,local_88.s.LowPart);
  pFVar14 = pFVar13;
LAB_14f0d570a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  if (this_03 != (FConvolutionReverb *)0x0) {
    Audio::FConvolutionReverb::~FConvolutionReverb(this_03);
    ::operator_delete(this_03,0xd0);
  }
  if (this != (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *)0x0)
  {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_70.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_70);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_58.MetaScope);
  FMemScope::~FMemScope(&local_58.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_58,local_58.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// StartBackgroundTask @ 14f1033d0

void __thiscall
FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask>::StartBackgroundTask
          (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *this,
          FQueuedThreadPool *param_1,EQueuedWorkPriority param_2)

{
  int iVar1;
  uint uVar2;
  FLowLevelMemTracker *pFVar3;
  FTagData *pFVar4;
  FTagData *pFVar5;
  
  pFVar5 = (FTagData *)0x0;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,None);
  }
  this->_padding_ = (longlong)pFVar4;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,Assets);
  }
  this->_padding_ = (longlong)pFVar4;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,AssetClasses);
  }
  this->_padding_ = (longlong)pFVar4;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar5 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,UObjectClasses);
  }
  this->_padding_ = (longlong)pFVar5;
  iVar1 = MemoryTrace_GetActiveTag();
  *(int *)&this->_padding_ = iVar1;
  uVar2 = FMetadataTrace::SaveStack();
  *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
  if (param_1 == (FQueuedThreadPool *)0x0) {
    DoWork(this);
  }
  else {
    (**(code **)((longlong)*param_1 + 0x18))(param_1,this,param_2);
  }
  return;
}

