// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// DoWork @ 1464fc170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAsyncDecodeWorker::DoWork(FAsyncDecodeWorker *this)

{
  double *pdVar1;
  int *piVar2;
  EAudioTaskType EVar3;
  FName FVar4;
  float *pfVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  TStatIdData *pTVar15;
  ulonglong uVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar17;
  longlong lVar18;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FName local_138;
  byte local_130;
  FName local_128;
  byte local_120;
  ForAnyElementType local_118;
  int local_110 [2];
  FStatMessage local_108;
  FName local_f8;
  FName local_f0;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  LARGE_INTEGER local_d8;
  FName *local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8 [2];
  float *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<short_const_,int> local_98;
  FName local_88;
  FName local_80 [2];
  FName local_70;
  FName local_68 [2];
  TArrayView<float,int> local_58;
  
  uVar8 = MXCSR;
  EVar3 = this->TaskType;
  uVar12 = MXCSR | 0x8000;
  local_res8 = (FName)(CONCAT44(local_res8.Number,MXCSR) | 0x8000);
  MXCSR = uVar12;
  if (EVar3 == Procedural) {
    FMixerSourceBuffer::DoProceduralRendering
              ((this->ProceduralTaskData).SourceBuffer,&this->ProceduralTaskData,
               &this->ProceduralResult);
  }
  else if (EVar3 == Header) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::__l6::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'
                             ::__l6::_thread_safe_static_guard_0__),
       `public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::__l6::
       _thread_safe_static_guard_0__ == -1)) {
      _StatPtr_STAT_FAsyncDecodeWorker_Header = (TStatIdData *)0x0;
      pFVar14 = ::FName::FName(&local_70,"STAT_FAsyncDecodeWorker_Header");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::__l6::
                  StatPtr_STAT_FAsyncDecodeWorker_Header,*pFVar14,L"STAT_FAsyncDecodeWorker_Header",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::
                           __l6::_thread_safe_static_guard_0__);
    }
    pTVar15 = _StatPtr_STAT_FAsyncDecodeWorker_Header;
    if (_StatPtr_STAT_FAsyncDecodeWorker_Header == (TStatIdData *)0x0) {
      pFVar14 = ::FName::FName(local_68,"STAT_FAsyncDecodeWorker_Header");
      pTVar15 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::
                            __l6::StatPtr_STAT_FAsyncDecodeWorker_Header,*pFVar14,
                           L"STAT_FAsyncDecodeWorker_Header","STATGROUP_Quick","STATCAT_Advanced",
                           L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    local_120 = 0;
    FVar4 = *(FName *)&pTVar15->Name;
    if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8,(pTVar15->StatDescriptionAnsi).Ptr);
        local_120 = local_120 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_res8 = FVar4;
          local_f0.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
          local_f0.Number = FVar4.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f0,(pTVar15->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceDecode.cpp"
                     ,0x4d);
          local_120 = local_120 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_res8 = FVar4;
        local_128 = FVar4;
        FThreadStats::AddMessage(FVar4,CycleScopeStart);
        local_120 = local_120 | 4;
      }
    }
    (**(code **)(((this->HeaderParseAudioData).MixerBuffer)->_padding_ + 0x18))
              ((this->HeaderParseAudioData).MixerBuffer,(this->HeaderParseAudioData).SoundWave);
    if ((local_120 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_120 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FVar4 = local_128;
    if (((((local_120 & 4) != 0) && (local_128 != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_108.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
        local_108.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(local_b8);
        local_108.StatData.Pad = (uchar  [8])(local_b8[0].QuadPart & 0xffffffff);
        FThreadStats::AddStatMessage(this_00,&local_108);
        piVar2 = &this_00->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  else if (EVar3 == Decode) {
    QueryPerformanceCounter(&local_d8);
    local_c0 = local_d8;
    lVar18 = 2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::__l7::
         _thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'
                             ::__l7::_thread_safe_static_guard_1__),
       `public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::__l7::
       _thread_safe_static_guard_1__ == -1)) {
      _StatPtr_STAT_FAsyncDecodeWorker_Decode = (TStatIdData *)0x0;
      pFVar14 = ::FName::FName(&local_88,"STAT_FAsyncDecodeWorker_Decode");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::__l7::
                  StatPtr_STAT_FAsyncDecodeWorker_Decode,*pFVar14,L"STAT_FAsyncDecodeWorker_Decode",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::
                           __l7::_thread_safe_static_guard_1__);
    }
    pTVar15 = _StatPtr_STAT_FAsyncDecodeWorker_Decode;
    if (_StatPtr_STAT_FAsyncDecodeWorker_Decode == (TStatIdData *)0x0) {
      pFVar14 = ::FName::FName(local_80,"STAT_FAsyncDecodeWorker_Decode");
      pTVar15 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_void___cdecl_Audio::FAsyncDecodeWorker::DoWork(void)___ptr64'::
                            __l7::StatPtr_STAT_FAsyncDecodeWorker_Decode,*pFVar14,
                           L"STAT_FAsyncDecodeWorker_Decode","STATGROUP_Quick","STATCAT_Advanced",
                           L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_138.ComparisonIndex.Value = 0;
    local_138.Number = 0;
    local_130 = 0;
    FVar4 = *(FName *)&pTVar15->Name;
    if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(pTVar15->StatDescriptionAnsi).Ptr);
        local_130 = local_130 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_res8 = FVar4;
          local_f8.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
          local_f8.Number = FVar4.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f8,(pTVar15->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceDecode.cpp"
                     ,0x57);
          local_130 = local_130 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_res8 = FVar4;
        local_138 = FVar4;
        FThreadStats::AddMessage(FVar4,CycleScopeStart);
        local_130 = local_130 | 4;
      }
    }
    iVar17 = (this->DecodeTaskData).NumChannels;
    local_d0 = &local_138;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110[0] = 0;
    local_110[1] = 0;
    iVar7 = iVar17 * (this->DecodeTaskData).NumFramesToDecode * 2;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar7,&local_118,local_110,local_110 + 1);
    memset(local_118.Data + iVar13,0,(longlong)iVar7);
    if ((this->DecodeTaskData).bSkipFirstBuffer != false) {
      iVar7 = iVar17 * (this->DecodeTaskData).NumPrecacheFrames * 2;
      local_res20[0] = iVar7;
      if ((this->DecodeTaskData).BufferType == Streaming) {
        do {
          (**(code **)(((this->DecodeTaskData).DecompressionState)->_padding_ + 0x78))
                    ((this->DecodeTaskData).DecompressionState,local_118.Data,
                     (this->DecodeTaskData).bLoopingMode,iVar7,local_res20);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      else {
        do {
          (**(code **)(((this->DecodeTaskData).DecompressionState)->_padding_ + 0x10))
                    ((this->DecodeTaskData).DecompressionState,local_118.Data,
                     (this->DecodeTaskData).bLoopingMode,iVar7);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
    }
    local_res18[0] = iVar17 * (this->DecodeTaskData).NumFramesToDecode * 2;
    lVar18 = ((this->DecodeTaskData).DecompressionState)->_padding_;
    if ((this->DecodeTaskData).BufferType == Streaming) {
      uVar10 = (**(code **)(lVar18 + 0x78))
                         ((this->DecodeTaskData).DecompressionState,local_118.Data,
                          (this->DecodeTaskData).bLoopingMode,local_res18[0],local_res18);
    }
    else {
      uVar10 = (**(code **)(lVar18 + 0x10))
                         ((this->DecodeTaskData).DecompressionState,local_118.Data,
                          (this->DecodeTaskData).bLoopingMode,local_res18[0]);
    }
    pfVar5 = (this->DecodeTaskData).AudioData;
    (this->DecodeResult).bIsFinishedOrLooped = (bool)uVar10;
    iVar17 = (int)((ulonglong)(longlong)local_res18[0] >> 1);
    (this->DecodeResult).NumSamplesWritten = iVar17;
    if ((iVar17 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9.Data = local_118.Data;
    uStack_9c = local_98._12_4_;
    local_a8 = pfVar5;
    iStack_a0 = iVar17;
    if ((iVar17 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_58._12_4_ = uStack_9c;
    local_58.ArrayNum = iStack_a0;
    local_e8 = FVar9.Data;
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = iVar17;
    local_58.DataPtr = local_a8;
    local_98.DataPtr = (short *)FVar9.Data;
    iStack_e0 = iVar17;
    ArrayPcm16ToFloat(&local_98,&local_58);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if ((local_130 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_130 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_130 & 4) != 0) {
      FThreadStats::AddMessage(local_138,CycleScopeEnd);
    }
    local_130 = 0;
    QueryPerformanceCounter(&local_c8);
    pdVar1 = &(this->DecodeResult).CPUDuration;
    if (pdVar1 != (double *)0x0) {
      uVar16 = local_c8.QuadPart - (longlong)local_c0;
      if ((longlong)uVar16 < 0) {
        *pdVar1 = (double)uVar16 * FGenericPlatformTime::SecondsPerCycle64;
      }
      else {
        *pdVar1 = (double)(longlong)uVar16 * FGenericPlatformTime::SecondsPerCycle64;
      }
    }
  }
  LOCK();
  this->bIsDone = (FThreadSafeBool)0x1;
  UNLOCK();
  MXCSR = uVar8;
  return;
}

