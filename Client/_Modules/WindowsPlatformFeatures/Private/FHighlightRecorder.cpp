// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 19

// <lambda_invoker_cdecl> @ 148d24ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FHighlightRecorder::SaveCmd'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (bool param_1,FString *param_2)

{
  if (4 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_`public:_static_void___cdecl_FHighlightRecorder::SaveCmd(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64,FOutputDevice&___ptr64)'::`2'::<lambda_1>::operator()(bool,FString_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
    return;
  }
  return;
}

// FHighlightRecorder @ 148d24d10

FHighlightRecorder * __thiscall FHighlightRecorder::FHighlightRecorder(FHighlightRecorder *this)

{
  code *pcVar1;
  bool bVar2;
  FHighlightRecorder *pFVar3;
  
  this->_padding_ = (longlong)&___7FHighlightRecorder__6B_;
  this->State = (TAtomic<FHighlightRecorder::EState>)0x0;
  (this->Mp4Writer).Ptr = (FWmfMp4Writer *)0x0;
  (this->RingBuffer).MaxDuration.Ticks = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->RingBuffer).Mutex,4000);
  (this->RingBuffer).bCleanupPaused = (FThreadSafeBool)0x0;
  (this->RingBuffer).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RingBuffer).Samples.ArrayNum = 0;
  (this->RingBuffer).Samples.ArrayMax = 0;
  (this->RecordingStartTime).Ticks = 0;
  this->NumPushedFrames = 0;
  (this->PauseTimestamp).Ticks = 0;
  (this->TotalPausedDuration).Ticks = 0;
  (this->BackgroundSaving).Ptr = (FThread *)0x0;
  *(undefined8 *)&this->DoneCallback = 0;
  *(undefined8 *)&(this->DoneCallback).field_0x28 = 0;
  this->bSaving = (FThreadSafeBool)0x0;
  this->AudioStreamIndex = 0;
  this->VideoStreamIndex = 0;
  if (Singleton != (FHighlightRecorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\HighlightRecorder.cpp"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHighlightRecorder *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FHighlightRecorder @ 148d24fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHighlightRecorder::~FHighlightRecorder(FHighlightRecorder *this)

{
  longlong *plVar1;
  FThread *this_00;
  FScriptContainerElement *pFVar2;
  FWmfMp4Writer *pFVar3;
  IMFSinkWriter *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FHighlightRecorder__6B_;
  Stop(this);
  if (4 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
  }
  if (*(longlong *)&this->DoneCallback != 0) {
    plVar1 = *(longlong **)&(this->DoneCallback).field_0x28;
    plVar5 = (longlong *)&(this->DoneCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  this_00 = (this->BackgroundSaving).Ptr;
  if (this_00 != (FThread *)0x0) {
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  DestructItems<AVEncoder::FMediaPacket,int>
            ((FMediaPacket *)(this->RingBuffer).Samples.AllocatorInstance.Data,
             (this->RingBuffer).Samples.ArrayNum);
  pFVar2 = (this->RingBuffer).Samples.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->RingBuffer).Mutex);
  pFVar3 = (this->Mp4Writer).Ptr;
  if (pFVar3 != (FWmfMp4Writer *)0x0) {
    pIVar4 = (pFVar3->Writer).Reference;
    if (pIVar4 != (IMFSinkWriter *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    ::operator_delete(pFVar3,8);
  }
  return;
}

// operator() @ 148d25380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>::operator()(void *this)

{
  double dVar1;
  FHighlightRecorder *this_00;
  code *pcVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  
  this_00 = *(FHighlightRecorder **)this;
  dVar1 = *(double *)((longlong)this + 0x18);
  if (!__CsvProfilerStat220) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_SaveInBackground",_GCsvCategory_WindowsVideoRecordingSystem.Index)
    ;
    __CsvProfilerStat220 = true;
  }
  uVar4 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_SaveInBackground",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_SaveInBackground");
  QueryPerformanceCounter(&local_res8);
  bVar5 = FHighlightRecorder::SaveHighlightInBackgroundImpl
                    (this_00,(FString *)((longlong)this + 8),dVar1);
  QueryPerformanceCounter(&local_res8);
  if (4 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
  }
  local_res8.s.LowPart._0_1_ = bVar5;
  UE::Core::Private::Function::CheckCallable(*(void **)&this_00->DoneCallback);
  pcVar2 = *(code **)&this_00->DoneCallback;
  plVar3 = *(longlong **)&(this_00->DoneCallback).field_0x28;
  plVar7 = (longlong *)&(this_00->DoneCallback).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar7 = plVar3;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar6,&local_res8,(FString *)((longlong)this + 8));
  LOCK();
  this_00->bSaving = (FThreadSafeBool)0x0;
  UNLOCK();
  FCsvProfiler::EndStat("HighlightRecorder_SaveInBackground",uVar4);
  return;
}

// GetRecordingTime @ 148d27790

FTimespan __thiscall FHighlightRecorder::GetRecordingTime(FHighlightRecorder *this)

{
  longlong *in_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar2 [16];
  LARGE_INTEGER local_res8;
  undefined1 auVar1 [16];
  
  QueryPerformanceCounter(&local_res8);
  auVar1._8_8_ = extraout_XMM0_Qb;
  auVar1._0_8_ = extraout_XMM0_Qa;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
  auVar2 = roundpd(auVar1,auVar2,1);
  *in_RDX = ((longlong)auVar2._0_8_ - (this->TotalPausedDuration).Ticks) -
            (this->RecordingStartTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetSavingStart @ 148d27900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHighlightRecorder::GetSavingStart
          (FHighlightRecorder *this,
          TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> *param_1,FTimespan param_2,
          int *param_3,FTimespan *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  FStaticBasicLogRecord *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  LARGE_INTEGER local_res8;
  undefined1 auVar11 [16];
  
  QueryPerformanceCounter(&local_res8);
  auVar11._8_8_ = extraout_XMM0_Qb;
  auVar11._0_8_ = extraout_XMM0_Qa;
  auVar12._8_8_ = 0;
  auVar12._0_8_ =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle * __real_416312d000000000
       + __real_42e312d000000010;
  auVar12 = roundpd(auVar11,auVar12,1);
  param_4->Ticks =
       (((longlong)auVar12._0_8_ - (this->TotalPausedDuration).Ticks) -
       (this->RecordingStartTime).Ticks) - param_2.Ticks;
  if (param_1->ArrayNum == 0) {
    *param_3 = 0;
    if ((byte)HighlightRecorder._0_1_ < 2) {
      return false;
    }
    pFVar8 = &::LOG_Static;
  }
  else {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar10 = *(longlong *)((param_1->AllocatorInstance).Data + 8);
    if (param_4->Ticks < lVar10) {
      param_4->Ticks = lVar10;
      *param_3 = 0;
      return true;
    }
    uVar7 = param_1->ArrayNum;
    uVar9 = 0;
    if (uVar7 != 0) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (int)uVar7) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar10 + 8);
        if (param_4->Ticks <= lVar1) {
          uVar7 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          if ((*(int *)(pFVar2 + lVar10) == 1) &&
             (pFVar2[lVar10 + 0x28] != (FScriptContainerElement)0x0)) {
            param_4->Ticks = lVar1;
            *param_3 = uVar9;
            return true;
          }
        }
        uVar7 = param_1->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x40;
      } while (uVar9 != uVar7);
    }
    if ((byte)HighlightRecorder._0_1_ < 2) {
      return false;
    }
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&HighlightRecorder);
  return false;
}

// InitialiseMp4Writer @ 148d27cf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHighlightRecorder::InitialiseMp4Writer(FHighlightRecorder *this,FString *param_1,bool param_2)

{
  IMFSinkWriter *pIVar1;
  char cVar2;
  int iVar3;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar4;
  FWmfMp4Writer *pFVar5;
  FWmfMp4Writer *pFVar6;
  FGameplayMediaEncoder *pFVar7;
  FAudioConfig *pFVar8;
  FAudioConfig *pFVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  ulong local_res20;
  char local_res24;
  FString local_a8;
  FAudioConfig local_98;
  FAudioConfig local_78;
  undefined1 local_58 [24];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  FPaths::GetPath(&local_a8,param_1);
  this_00 = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this_00);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar11.Data = local_a8.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x118))(pIVar4,FVar11.Data);
  if (cVar2 == '\0') {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar11.Data = local_a8.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x120))(pIVar4,FVar11.Data);
    if (cVar2 != '\0') goto LAB_148d27daa;
    if (1 < (byte)HighlightRecorder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      bVar12 = false;
      goto LAB_148d280ac;
    }
  }
  else {
LAB_148d27daa:
    pFVar5 = ::operator_new(8);
    pFVar6 = (FWmfMp4Writer *)0x0;
    if (pFVar5 != (FWmfMp4Writer *)0x0) {
      (pFVar5->Writer).Reference = (IMFSinkWriter *)0x0;
      pFVar6 = pFVar5;
    }
    pFVar5 = (this->Mp4Writer).Ptr;
    if ((pFVar5 != pFVar6) && ((this->Mp4Writer).Ptr = pFVar6, pFVar5 != (FWmfMp4Writer *)0x0)) {
      pIVar1 = (pFVar5->Writer).Reference;
      if (pIVar1 != (IMFSinkWriter *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      ::operator_delete(pFVar5,8);
    }
    pFVar6 = (this->Mp4Writer).Ptr;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pIVar1 = (pFVar6->Writer).Reference;
    if (pIVar1 != (IMFSinkWriter *)0x0) {
      (pFVar6->Writer).Reference = (IMFSinkWriter *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    iVar3 = MFCreateSinkWriterFromURL(pwVar14,0,0,pFVar6);
    if (iVar3 < 0) {
      if (1 < (byte)WMF._0_1_) {
        GetComErrorDescription(&local_98.Codec,iVar3);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
        if (local_98.Codec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Codec.Data.AllocatorInstance.Data);
          bVar12 = false;
          goto LAB_148d280ac;
        }
      }
    }
    else {
      if (5 < (byte)WMF._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&WMF);
      }
      if (!param_2) {
LAB_148d27fcd:
        pFVar7 = FGameplayMediaEncoder::Get();
        ::FString::FString(&local_98.Codec,&(pFVar7->VideoConfig).Codec);
        local_98.Samplerate = (pFVar7->VideoConfig).Width;
        local_98.NumChannels = (pFVar7->VideoConfig).Height;
        local_98.Bitrate = (pFVar7->VideoConfig).Framerate;
        local_98._28_4_ = (pFVar7->VideoConfig).Bitrate;
        pFVar7 = FGameplayMediaEncoder::Get();
        ::FString::FString(&local_78.Codec,&(pFVar7->VideoConfig).Codec);
        local_58._12_4_ = local_78.Codec.Data.ArrayMax;
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_78.Codec.Data.ArrayNum != 0) {
          FVar11.Data = local_78.Codec.Data.AllocatorInstance.Data;
        }
        local_58._16_8_ = local_98.Codec.Data.AllocatorInstance.Data;
        local_40 = local_98.Codec.Data.ArrayNum;
        local_3c = local_98.Codec.Data.ArrayMax;
        local_38 = local_98.Samplerate;
        local_34 = local_98.NumChannels;
        local_30 = local_98.Bitrate;
        local_2c = local_98._28_4_;
        local_58._0_8_ = local_78.Codec.Data.AllocatorInstance.Data;
        local_58._8_4_ = local_78.Codec.Data.ArrayNum;
        iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,"");
        if (iVar3 == 0) {
          if (1 < (byte)HighlightRecorder._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
          }
LAB_148d2808e:
          bVar12 = false;
        }
        else {
          FWmfMp4Writer::CreateVideoStream
                    ((this->Mp4Writer).Ptr,(FString *)&local_res20,(FVideoConfig *)local_58);
          if (local_res24 == '\0') goto LAB_148d2808e;
          this->VideoStreamIndex = local_res20;
          iVar3 = (**(code **)((longlong)*(((this->Mp4Writer).Ptr)->Writer).Reference + 0x28))();
          if (iVar3 < 0) {
            if (1 < (byte)WMF._0_1_) {
              GetComErrorDescription(&local_98.Codec,iVar3);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
              if (local_98.Codec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Codec.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_148d2808e;
          }
          bVar12 = true;
        }
        if ((FScriptContainerElement *)local_58._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_58._16_8_);
        }
        if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_58._0_8_);
        }
        goto LAB_148d280ac;
      }
      pFVar7 = FGameplayMediaEncoder::Get();
      pFVar8 = FGameplayMediaEncoder::GetAudioConfig(pFVar7,&local_98);
      pFVar7 = FGameplayMediaEncoder::Get();
      pFVar9 = FGameplayMediaEncoder::GetAudioConfig(pFVar7,&local_78);
      pFVar15 = (pFVar9->Codec).Data.AllocatorInstance.Data;
      (pFVar9->Codec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58._12_4_ = (pFVar9->Codec).Data.ArrayMax;
      iVar3 = (pFVar9->Codec).Data.ArrayNum;
      (pFVar9->Codec).Data.ArrayNum = 0;
      (pFVar9->Codec).Data.ArrayMax = 0;
      pFVar13 = (pFVar8->Codec).Data.AllocatorInstance.Data;
      (pFVar8->Codec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40 = (pFVar8->Codec).Data.ArrayNum;
      local_3c = (pFVar8->Codec).Data.ArrayMax;
      (pFVar8->Codec).Data.ArrayNum = 0;
      (pFVar8->Codec).Data.ArrayMax = 0;
      local_38 = pFVar8->Samplerate;
      local_34 = pFVar8->NumChannels;
      local_30 = pFVar8->Bitrate;
      local_58._0_8_ = pFVar15;
      local_58._8_4_ = iVar3;
      local_58._16_8_ = pFVar13;
      if (local_78.Codec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Codec.Data.AllocatorInstance.Data);
      }
      if (local_98.Codec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Codec.Data.AllocatorInstance.Data);
      }
      pFVar10 = (FScriptContainerElement *)L"";
      if (iVar3 != 0) {
        pFVar10 = pFVar15;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar10,"");
      if (iVar3 == 0) {
        if (1 < (byte)HighlightRecorder._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
        }
      }
      else {
        FWmfMp4Writer::CreateAudioStream
                  ((this->Mp4Writer).Ptr,(FString *)&local_res20,(FAudioConfig *)local_58);
        pFVar13 = (FScriptContainerElement *)local_58._16_8_;
        pFVar15 = (FScriptContainerElement *)local_58._0_8_;
        if (local_res24 != '\0') {
          this->AudioStreamIndex = local_res20;
          if ((FScriptContainerElement *)local_58._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_58._16_8_);
          }
          if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_58._0_8_);
          }
          goto LAB_148d27fcd;
        }
      }
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
    }
  }
  bVar12 = false;
LAB_148d280ac:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// OnMediaSample @ 148d289b0

void __thiscall FHighlightRecorder::OnMediaSample(FHighlightRecorder *this,FMediaPacket *param_1)

{
  longlong lVar1;
  ForAnyElementType _Src;
  int iVar2;
  size_t _Size;
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  FMediaPacket local_f8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FMediaPacket local_a8 [2];
  
  if (this->State == (TAtomic<FHighlightRecorder::EState>)0x1) {
    if ((this->NumPushedFrames == 0) && (param_1->Type == Video)) {
      if ((param_1->field4_0x28).Video.bKeyFrame == false) {
        return;
      }
      this->NumPushedFrames = 1;
    }
    AVEncoder::FMediaPacket::FMediaPacket(local_a8,param_1);
    AVEncoder::FMediaPacket::FMediaPacket(&local_f8,param_1);
    iVar2 = local_f8.Data.ArrayNum;
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    _Size = (size_t)local_f8.Data.ArrayNum;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    local_120.Data = (FScriptContainerElement *)0x0;
    local_114 = 0;
    local_100 = 0;
    local_118 = iVar2;
    local_b8 = local_f8.field4_0x28._0_8_;
    uStack_b0 = local_f8.field4_0x28._8_8_;
    local_110 = 0;
    uStack_108 = 0;
    if (iVar2 == 0) {
      local_114 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar2,0,&local_120,iVar2,&local_114);
      if (iVar2 != 0) {
        memcpy(local_120.Data,_Src.Data,_Size);
      }
    }
    lVar1 = (this->TotalPausedDuration).Ticks;
    local_100 = local_f8.field4_0x28.Video.Framerate;
    local_110 = local_b8;
    uStack_108 = uStack_b0;
    if (lVar1 != 0) {
      local_a8[0].Timestamp.Ticks = local_a8[0].Timestamp.Ticks - lVar1;
    }
    FWmfRingBuffer::Push(&this->RingBuffer,local_a8);
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
    if (_Src.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Pause @ 148d28b70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHighlightRecorder::Pause(FHighlightRecorder *this,bool param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  bool bVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  LARGE_INTEGER local_res8;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (!__CsvProfilerStat85) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_Pause",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat85 = true;
  }
  uVar5 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_Pause",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_Pause");
  if (this->State == (TAtomic<FHighlightRecorder::EState>)0x0) {
    if (1 < (byte)HighlightRecorder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
    }
    bVar6 = false;
    goto LAB_148d28d6f;
  }
  lVar1 = (this->PauseTimestamp).Ticks;
  if (param_1) {
    if (lVar1 == 0) {
      QueryPerformanceCounter(&local_res8);
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar7._0_8_ = extraout_XMM0_Qa;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                     __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
      auVar8 = roundpd(auVar7,auVar3,1);
      (this->PauseTimestamp).Ticks =
           ((longlong)auVar8._0_8_ - (this->TotalPausedDuration).Ticks) -
           (this->RecordingStartTime).Ticks;
      LOCK();
      this->State = (TAtomic<FHighlightRecorder::EState>)0x2;
      UNLOCK();
      if (4 < (byte)HighlightRecorder._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      }
    }
  }
  else {
    if (lVar1 == 0) {
      QueryPerformanceCounter(&local_res8);
      auVar9._8_8_ = extraout_XMM0_Qb_00;
      auVar9._0_8_ = extraout_XMM0_Qa_00;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                     __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
      auVar8 = roundpd(auVar9,auVar8,1);
      if ((this->PauseTimestamp).Ticks !=
          ((longlong)auVar8._0_8_ - (this->TotalPausedDuration).Ticks) -
          (this->RecordingStartTime).Ticks) goto LAB_148d28d6d;
    }
    QueryPerformanceCounter(&local_res8);
    auVar10._8_8_ = extraout_XMM0_Qb_01;
    auVar10._0_8_ = extraout_XMM0_Qa_01;
    lVar1 = (this->TotalPausedDuration).Ticks;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                   __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
    auVar8 = roundpd(auVar10,auVar4,1);
    lVar2 = (this->PauseTimestamp).Ticks;
    (this->PauseTimestamp).Ticks = 0;
    (this->TotalPausedDuration).Ticks =
         lVar1 + ((((longlong)auVar8._0_8_ - lVar1) - (this->RecordingStartTime).Ticks) - lVar2);
    LOCK();
    this->State = (TAtomic<FHighlightRecorder::EState>)0x1;
    UNLOCK();
    if (4 < (byte)HighlightRecorder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
    }
  }
LAB_148d28d6d:
  bVar6 = true;
LAB_148d28d6f:
  FCsvProfiler::EndStat("HighlightRecorder_Pause",uVar5);
  return bVar6;
}

// PauseCmd @ 148d28db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FHighlightRecorder::PauseCmd(void)

{
  if (Singleton != (FHighlightRecorder *)0x0) {
    Pause(Singleton,true);
    return;
  }
  if (1 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`private:_static_bool___cdecl_FHighlightRecorder::CheckSingleton(void)'::__l8::
                LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
    return;
  }
  return;
}

// ResumeCmd @ 148d295a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FHighlightRecorder::ResumeCmd(void)

{
  if (Singleton != (FHighlightRecorder *)0x0) {
    Pause(Singleton,false);
    return;
  }
  if (1 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`private:_static_bool___cdecl_FHighlightRecorder::CheckSingleton(void)'::__l8::
                LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
    return;
  }
  return;
}

// SaveCmd @ 148d295e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FHighlightRecorder::SaveCmd
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  wchar_t *_Str;
  ForAnyElementType FVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  if (Singleton == (FHighlightRecorder *)0x0) {
    if (1 < (byte)HighlightRecorder._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`private:_static_bool___cdecl_FHighlightRecorder::CheckSingleton(void)'::__l8::
                  LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      return;
    }
  }
  else {
    if (2 < param_1->ArrayNum) {
      FOutputDevice::LogfImpl
                (param_3,Error,
                 L"0-2 parameters expected: Save [filename=\"test.mp4\"] [max_duration_secs= ring buffer duration]"
                );
      return;
    }
    ::FString::FString(&local_58,"test.mp4");
    if ((0 < param_1->ArrayNum) &&
       (pFVar2 = (param_1->AllocatorInstance).Data, (FScriptContainerElement *)&local_58 != pFVar2))
    {
      iVar1 = *(int *)(pFVar2 + 8);
      _Src = *(void **)pFVar2;
      local_58.Data.ArrayNum = iVar1;
      if (((iVar1 != 0) || (local_58.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,local_58.Data.ArrayMax,(ForAnyElementType *)&local_58,iVar1,
                     &local_58.Data.ArrayMax), iVar1 != 0)) {
        memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    uVar7 = (undefined4)__real_40ac200000000000;
    uVar8 = (undefined4)((ulonglong)__real_40ac200000000000 >> 0x20);
    if (param_1->ArrayNum == 2) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 0x18) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(pFVar2 + 0x10);
      }
      dVar6 = wcstod(_Str,(wchar_t **)0x0);
      uVar7 = SUB84(dVar6,0);
      uVar8 = (int)((ulonglong)dVar6 >> 0x20);
    }
    if ((Singleton == (FHighlightRecorder *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\HighlightRecorder.h"
                           ,0xc5,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    local_38 = &
               ___7__TFunction_OwnedObject_P6AX_NAEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = 0;
    local_30 = `FHighlightRecorder::SaveCmd'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(bool,FString_const_&),void,bool,FString_const_&>
                  ::Call;
    SaveHighlight(Singleton,(wchar_t *)FVar5.Data,
                  (TFunction<void___cdecl(bool,FString_const_&)> *)local_48,
                  (double)CONCAT44(uVar8,uVar7));
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SaveHighlight @ 148d297d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHighlightRecorder::SaveHighlight
          (FHighlightRecorder *this,wchar_t *param_1,
          TFunction<void___cdecl(bool,FString_const_&)> *param_2,double param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar11;
  FString *pFVar12;
  FThread *pFVar13;
  FThread *pFVar14;
  FStaticBasicLogRecord *pFVar15;
  code **ppcVar16;
  longlong *plVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FThread *pFVar20;
  bool bVar21;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  code *local_d0;
  FThreadAffinity local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  ulonglong local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar14 = (FThread *)0x0;
  local_b8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data & 0xffffffff00000000;
  if (!__CsvProfilerStat177) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_Save",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat177 = true;
  }
  uVar9 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_Save",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_Save");
  if (this->State == (TAtomic<FHighlightRecorder::EState>)0x0) {
    if ((byte)HighlightRecorder._0_1_ < 2) goto LAB_148d29892;
    pFVar15 = &::LOG_Static;
  }
  else {
    if (this->bSaving == (FThreadSafeBool)0x0) {
      if (4 < (byte)HighlightRecorder._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      }
      this_00 = FPlatformFileManager::Get();
      pIVar11 = FPlatformFileManager::GetPlatformFile(this_00);
      pcVar1 = *(code **)((longlong)*pIVar11 + 0x220);
      pFVar12 = FPaths::VideoCaptureDir((FString *)&local_c8);
      ::FString::ConcatFC(&local_b8,pFVar12,param_1);
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar19.Data = local_b8.Data.AllocatorInstance.Data;
      }
      (*pcVar1)(pIVar11,&local_a8,FVar19.Data);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if ((void *)local_c8.ThreadAffinityMask != (void *)0x0) {
        FMemory::Free((void *)local_c8.ThreadAffinityMask);
      }
      LOCK();
      this->bSaving = (FThreadSafeBool)0x1;
      UNLOCK();
      bVar21 = __CsvProfilerStat200 == false;
      uVar2 = *(undefined8 *)&param_2->field_0x8;
      uVar3 = *(undefined8 *)&this->DoneCallback;
      uVar4 = *(undefined8 *)&(this->DoneCallback).field_0x8;
      uVar5 = *(undefined8 *)&(this->DoneCallback).field_0x10;
      uVar6 = *(undefined8 *)&(this->DoneCallback).field_0x18;
      uVar7 = *(undefined8 *)&(this->DoneCallback).field_0x20;
      uVar8 = *(undefined8 *)&(this->DoneCallback).field_0x28;
      *(undefined8 *)&this->DoneCallback = *(undefined8 *)param_2;
      *(undefined8 *)&(this->DoneCallback).field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&param_2->field_0x18;
      *(undefined8 *)&(this->DoneCallback).field_0x10 = *(undefined8 *)&param_2->field_0x10;
      *(undefined8 *)&(this->DoneCallback).field_0x18 = uVar2;
      uVar2 = *(undefined8 *)&param_2->field_0x28;
      *(undefined8 *)&(this->DoneCallback).field_0x20 = *(undefined8 *)&param_2->field_0x20;
      *(undefined8 *)&(this->DoneCallback).field_0x28 = uVar2;
      *(undefined8 *)param_2 = uVar3;
      *(undefined8 *)&param_2->field_0x8 = uVar4;
      *(undefined8 *)&param_2->field_0x10 = uVar5;
      *(undefined8 *)&param_2->field_0x18 = uVar6;
      *(undefined8 *)&param_2->field_0x20 = uVar7;
      *(undefined8 *)&param_2->field_0x28 = uVar8;
      if (bVar21) {
        FCsvProfilerTrace::OutputInlineStat
                  ("HighlightRecorder_SaveThreadCreation",
                   _GCsvCategory_WindowsVideoRecordingSystem.Index);
        __CsvProfilerStat200 = true;
      }
      uVar10 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
      FCsvProfiler::BeginStat
                ("HighlightRecorder_SaveThreadCreation",
                 _GCsvCategory_WindowsVideoRecordingSystem.Index,
                 "CSV_HighlightRecorder_SaveThreadCreation");
      pFVar20 = (this->BackgroundSaving).Ptr;
      if ((pFVar20 != (FThread *)0x0) && (bVar21 = ::FThread::IsJoinable(pFVar20), bVar21)) {
        ::FThread::Join((this->BackgroundSaving).Ptr);
      }
      pFVar13 = ::operator_new(0x10);
      pFVar20 = pFVar14;
      if (pFVar13 != (FThread *)0x0) {
        local_e0.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.AllocatorInstance.Data = local_a8;
        iVar18 = (int)local_a0;
        local_d8 = CONCAT44(local_d8._4_4_,iVar18);
        local_c8.ThreadAffinityMask = 0xffffffffffffffff;
        local_c8.ProcessorGroup = 0;
        local_c8._10_6_ = 0;
        if (iVar18 == 0) {
          local_d8 = local_a0 & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar18,0,&local_e0,iVar18,(int *)((longlong)&local_d8 + 4));
          memcpy(local_e0.Data,local_b8.Data.AllocatorInstance.Data,(longlong)iVar18 * 2);
        }
        local_98[0] = (code *)0x0;
        local_d0 = (code *)param_3;
        local_70 = FMemory::Malloc(0x28,8);
        *local_70 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::`66'::<lambda_1>,1,1>
                             ::_vftable_;
        local_70[1] = (code *)this;
        local_70[2] = (code *)0x0;
        local_70[2] = (code *)local_e0.Data;
        local_e0.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(local_70 + 3) = (undefined4)local_d8;
        *(undefined4 *)((longlong)local_70 + 0x1c) = local_d8._4_4_;
        local_d8 = 0;
        local_70[4] = local_d0;
        if (local_70 + 1 != (code **)0x0) {
          local_98[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,void>
                        ::Call;
        }
        pFVar14 = ::FThread::FThread(pFVar13,L"Highlight Saving",
                                     (TUniqueFunction<void___cdecl(void)> *)local_98,0,TPri_Normal,
                                     &local_c8,NonForkable);
        pFVar20 = (FThread *)&DAT_00000003;
      }
      pFVar13 = (this->BackgroundSaving).Ptr;
      if ((pFVar13 != pFVar14) &&
         ((this->BackgroundSaving).Ptr = pFVar14, pFVar13 != (FThread *)0x0)) {
        ::FThread::~FThread(pFVar13);
        ::operator_delete(pFVar13,0x10);
      }
      if ((((ulonglong)pFVar20 & 2) != 0) &&
         (pFVar20 = (FThread *)(ulonglong)((uint)pFVar20 & 0xfffffffd), local_98[0] != (code *)0x0))
      {
        ppcVar16 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar16 = local_70;
        }
        (**(code **)(*ppcVar16 + 0x10))();
      }
      if ((((ulonglong)pFVar20 & 1) != 0) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data);
      }
      FCsvProfiler::EndStat("HighlightRecorder_SaveThreadCreation",uVar10);
      if (local_a8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8);
      }
      FCsvProfiler::EndStat("HighlightRecorder_Save",uVar9);
      if (*(longlong *)param_2 != 0) {
        plVar17 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar17 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      return true;
    }
    if ((byte)HighlightRecorder._0_1_ < 2) goto LAB_148d29892;
    pFVar15 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&HighlightRecorder);
LAB_148d29892:
  FCsvProfiler::EndStat("HighlightRecorder_Save",uVar9);
  if (*(longlong *)param_2 != 0) {
    plVar17 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return false;
}

// SaveHighlightInBackground @ 148d29c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHighlightRecorder::SaveHighlightInBackground
          (FHighlightRecorder *this,FString *param_1,double param_2)

{
  code *pcVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  
  if (!__CsvProfilerStat220) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_SaveInBackground",_GCsvCategory_WindowsVideoRecordingSystem.Index)
    ;
    __CsvProfilerStat220 = true;
  }
  uVar3 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_SaveInBackground",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_SaveInBackground");
  QueryPerformanceCounter(&local_res8);
  bVar4 = SaveHighlightInBackgroundImpl(this,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (4 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
  }
  local_res8._0_1_ = bVar4;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->DoneCallback);
  pcVar1 = *(code **)&this->DoneCallback;
  plVar2 = *(longlong **)&(this->DoneCallback).field_0x28;
  plVar6 = (longlong *)&(this->DoneCallback).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar1)(uVar5,&local_res8,param_1);
  LOCK();
  this->bSaving = (FThreadSafeBool)0x0;
  UNLOCK();
  FCsvProfiler::EndStat("HighlightRecorder_SaveInBackground",uVar3);
  return bVar4;
}

// SaveHighlightInBackgroundImpl @ 148d29dc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHighlightRecorder::SaveHighlightInBackgroundImpl
          (FHighlightRecorder *this,FString *param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  FStaticBasicLogRecord *pFVar7;
  FMediaPacket *pFVar8;
  FTimespan FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  LARGE_INTEGER local_res8;
  FString *local_res10;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68 [3];
  undefined1 auVar17 [16];
  
  lpCriticalSection = &(this->RingBuffer).Mutex;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar14 = 0;
  pTVar1 = &(this->RingBuffer).Samples;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if ((TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> *)&local_78 != pTVar1) {
    DestructItems<AVEncoder::FMediaPacket,int>((FMediaPacket *)0x0,0);
    iVar6 = (this->RingBuffer).Samples.ArrayNum;
    pFVar8 = (FMediaPacket *)(pTVar1->AllocatorInstance).Data;
    local_70 = CONCAT44(local_70._4_4_,iVar6);
    if ((iVar6 == 0) && (local_70._4_4_ == 0)) {
      local_70 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar6,local_70._4_4_,&local_78,iVar6,(int *)((longlong)&local_70 + 4));
      ConstructItems<AVEncoder::FMediaPacket,AVEncoder::FMediaPacket,int>
                (local_78.Data,pFVar8,iVar6);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((uint)local_70 == 0) {
    uVar11 = 0;
    if (1 < (byte)HighlightRecorder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      goto LAB_148d2a098;
    }
  }
  else {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_2 * __real_416312d000000000 + __real_3fe0000000000000;
    auVar16 = roundpd(auVar16,auVar16,1);
    QueryPerformanceCounter(&local_res8);
    auVar17._8_8_ = extraout_XMM0_Qb;
    auVar17._0_8_ = extraout_XMM0_Qa;
    uVar13 = (ulonglong)(int)(uint)local_70;
    auVar18._8_8_ = 0;
    auVar18._0_8_ =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle *
         __real_416312d000000000 + __real_42e312d000000010;
    auVar18 = roundpd(auVar17,auVar18,1);
    lVar15 = (((longlong)auVar18._0_8_ - (this->TotalPausedDuration).Ticks) -
             (this->RecordingStartTime).Ticks) - (longlong)auVar16._0_8_;
    if ((uint)local_70 == 0) {
      uVar11 = 0;
      if (1 < (byte)HighlightRecorder._0_1_) {
        pFVar7 = &::LOG_Static;
LAB_148d2a077:
        UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&HighlightRecorder);
LAB_148d2a098:
        uVar11 = (uint)local_70;
      }
    }
    else {
      if ((int)(uint)local_70 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar13 = local_70 & 0xffffffff;
      }
      uVar10 = 0;
      FVar9.Ticks = *(long64 *)(local_78.Data + 8);
      if (lVar15 < FVar9.Ticks) {
LAB_148d2a0f9:
        bVar3 = false;
        if (uVar10 != (uint)uVar13) {
          lVar14 = (longlong)(int)uVar10 << 6;
          uVar11 = uVar10;
          do {
            uVar12 = 0;
            if ((int)uVar11 < (int)uVar13) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              uVar13 = local_70 & 0xffffffff;
            }
            if (*(int *)(local_78.Data + lVar14) == 0) {
              bVar3 = true;
              break;
            }
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + 0x40;
          } while (uVar11 != (uint)uVar13);
        }
        bVar3 = InitialiseMp4Writer(this,local_res10,bVar3);
        if (bVar3) {
          uVar13 = (ulonglong)(int)(uint)local_70;
          uVar12 = ~uVar10 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar10 < (int)(uint)local_70) {
            uVar11 = uVar12;
          }
          if (uVar11 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            uVar13 = local_70 & 0xffffffff;
          }
          iVar6 = (int)uVar13;
          lVar14 = (longlong)(int)uVar10 * 0x40;
          if ((*(int *)&local_78.Data[lVar14].field_0x0 != 1) ||
             (local_78.Data[lVar14 + 0x28] == (FScriptContainerElement)0x0)) {
            uVar11 = 0;
            if ((int)uVar10 < iVar6) {
              uVar11 = uVar12;
            }
            if (uVar11 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              iVar6 = (int)local_70;
            }
            uVar11 = 0;
            if ((int)uVar10 < iVar6) {
              uVar11 = uVar12;
            }
            if ((uVar11 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Samples[FirstSampleIndex].IsVideoKeyFrame()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\HighlightRecorder.cpp"
                               ,0x113,L"t %.3f d %.3f");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            uVar13 = local_70 & 0xffffffff;
          }
          uVar11 = (uint)uVar13;
          if (uVar10 == uVar11) {
            if ((byte)HighlightRecorder._0_1_ < 2) goto LAB_148d2a09c;
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
          }
          else {
            if (5 < (byte)HighlightRecorder._0_1_) {
              uVar12 = 0;
              if ((int)(uVar11 - 1) < (int)uVar11) {
                uVar12 = ~(uVar11 - 1) >> 0x1f;
              }
              if (uVar12 == 0) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                uVar11 = (uint)local_70;
              }
              uVar12 = 0;
              if ((int)(uVar11 - 1) < (int)uVar11) {
                uVar12 = ~(uVar11 - 1) >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
              uVar13 = local_70 & 0xffffffff;
            }
            if (uVar10 != (uint)uVar13) {
              do {
                uVar11 = 0;
                if ((int)uVar10 < (int)uVar13) {
                  uVar11 = ~uVar10 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                lVar15 = 0xc4;
                pFVar8 = (FMediaPacket *)(local_78.Data + lVar14);
                (pFVar8->Timestamp).Ticks = (pFVar8->Timestamp).Ticks - FVar9.Ticks;
                if (pFVar8->Type != Audio) {
                  lVar15 = 200;
                }
                bVar3 = FWmfMp4Writer::Write
                                  ((this->Mp4Writer).Ptr,pFVar8,
                                   *(ulong *)((longlong)
                                              (this->RingBuffer).Mutex.CriticalSection.Opaque1 +
                                             lVar15 + -0x20));
                if (!bVar3) goto LAB_148d2a098;
                uVar13 = local_70 & 0xffffffff;
                uVar10 = uVar10 + 1;
                lVar14 = lVar14 + 0x40;
              } while (uVar10 != (uint)local_70);
            }
            iVar6 = (**(code **)((longlong)*(((this->Mp4Writer).Ptr)->Writer).Reference + 0x58))();
            if (-1 < iVar6) {
              if (6 < (byte)WMF._0_1_) {
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&WMF);
              }
              bVar3 = true;
              uVar11 = (uint)local_70;
              goto LAB_148d2a09e;
            }
            if (1 < (byte)WMF._0_1_) {
              GetComErrorDescription(local_68,iVar6);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&WMF);
              if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
              }
            }
          }
        }
        goto LAB_148d2a098;
      }
      uVar11 = 0;
      if ((int)uVar13 != 0) {
        do {
          uVar11 = 0;
          if ((int)uVar10 < (int)uVar13) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            uVar13 = local_70 & 0xffffffff;
          }
          FVar9.Ticks = *(long64 *)(local_78.Data + lVar14 + 8);
          if (lVar15 <= FVar9.Ticks) {
            uVar11 = 0;
            if ((int)uVar10 < (int)uVar13) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              uVar13 = local_70 & 0xffffffff;
            }
            if ((*(int *)(local_78.Data + lVar14) == 1) &&
               (local_78.Data[lVar14 + 0x28] != (FScriptContainerElement)0x0)) goto LAB_148d2a0f9;
          }
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x40;
          uVar11 = (uint)uVar13;
        } while (uVar10 != uVar11);
      }
      if (1 < (byte)HighlightRecorder._0_1_) {
        pFVar7 = &::LOG_Static;
        goto LAB_148d2a077;
      }
    }
  }
LAB_148d2a09c:
  bVar3 = false;
LAB_148d2a09e:
  DestructItems<AVEncoder::FMediaPacket,int>((FMediaPacket *)local_78.Data,uVar11);
  if ((FMediaPacket *)local_78.Data != (FMediaPacket *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return bVar3;
}

// Start @ 148d2a570

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHighlightRecorder::Start(FHighlightRecorder *this,double param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  FGameplayMediaEncoder *this_00;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  LARGE_INTEGER local_res8;
  undefined1 auVar7 [16];
  
  if (!__CsvProfilerStat53) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_Start",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat53 = true;
  }
  uVar3 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_Start",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_Start");
  if (this->State == (TAtomic<FHighlightRecorder::EState>)0x0) {
    lpCriticalSection = &(this->RingBuffer).Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<AVEncoder::FMediaPacket,int>
              ((FMediaPacket *)(this->RingBuffer).Samples.AllocatorInstance.Data,
               (this->RingBuffer).Samples.ArrayNum);
    piVar1 = &(this->RingBuffer).Samples.ArrayMax;
    (this->RingBuffer).Samples.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->RingBuffer).Samples.AllocatorInstance,0,piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1 * __real_416312d000000000 + __real_3fe0000000000000;
    auVar6 = roundpd(auVar5,auVar5,1);
    (this->RingBuffer).MaxDuration.Ticks = (longlong)auVar6._0_8_;
    QueryPerformanceCounter(&local_res8);
    auVar7._8_8_ = extraout_XMM0_Qb;
    auVar7._0_8_ = extraout_XMM0_Qa;
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    (this->PauseTimestamp).Ticks = 0;
    (this->TotalPausedDuration).Ticks = 0;
    this->NumPushedFrames = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (dVar2 + __real_4170000000000000) * __real_416312d000000000 +
                   __real_3fe0000000000000;
    auVar6 = roundpd(auVar7,auVar6,1);
    (this->RecordingStartTime).Ticks = (longlong)auVar6._0_8_;
    this_00 = FGameplayMediaEncoder::Get();
    bVar4 = FGameplayMediaEncoder::RegisterListener(this_00,(IGameplayMediaEncoderListener *)this);
    if (bVar4) {
      LOCK();
      this->State = (TAtomic<FHighlightRecorder::EState>)0x1;
      UNLOCK();
      if (4 < (byte)HighlightRecorder._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      }
      bVar4 = true;
      goto LAB_148d2a72a;
    }
  }
  else if (1 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
    bVar4 = false;
    goto LAB_148d2a72a;
  }
  bVar4 = false;
LAB_148d2a72a:
  FCsvProfiler::EndStat("HighlightRecorder_Start",uVar3);
  return bVar4;
}

// Start @ 148d2a760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FHighlightRecorder::Start
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FHighlightRecorder *this;
  FHighlightRecorder *pFVar4;
  wchar_t *_Str;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pFVar4 = Singleton;
  if (Singleton == (FHighlightRecorder *)0x0) {
    this = ::operator_new(0xd0);
    pFVar4 = (FHighlightRecorder *)0x0;
    if (this != (FHighlightRecorder *)0x0) {
      pFVar4 = FHighlightRecorder(this);
    }
  }
  Singleton = pFVar4;
  if (1 < param_1->ArrayNum) {
    FOutputDevice::LogfImpl
              (param_3,Error,L"zero or one parameter expected: Start [max_duration_secs=30.0]");
    return;
  }
  uVar6 = (undefined4)__real_403e000000000000;
  uVar7 = (undefined4)((ulonglong)__real_403e000000000000 >> 0x20);
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar5 = wcstod(_Str,(wchar_t **)0x0);
    uVar6 = SUB84(dVar5,0);
    uVar7 = (int)((ulonglong)dVar5 >> 0x20);
  }
  if ((Singleton == (FHighlightRecorder *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\WindowsPlatformFeatures\\Private\\HighlightRecorder.h"
                         ,0xc5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Start(Singleton,(double)CONCAT44(uVar7,uVar6));
  return;
}

// Stop @ 148d2acc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHighlightRecorder::Stop(FHighlightRecorder *this)

{
  FThread *pFVar1;
  uint uVar2;
  FGameplayMediaEncoder *this_00;
  
  if (!__CsvProfilerStat115) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_Stop",_GCsvCategory_WindowsVideoRecordingSystem.Index);
    __CsvProfilerStat115 = true;
  }
  uVar2 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_Stop",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_Stop");
  this_00 = FGameplayMediaEncoder::Get();
  FGameplayMediaEncoder::UnregisterListener(this_00,(IGameplayMediaEncoderListener *)this);
  LOCK();
  this->State = (TAtomic<FHighlightRecorder::EState>)0x0;
  UNLOCK();
  pFVar1 = (this->BackgroundSaving).Ptr;
  if (pFVar1 != (FThread *)0x0) {
    ::FThread::Join(pFVar1);
    pFVar1 = (this->BackgroundSaving).Ptr;
    if (pFVar1 != (FThread *)0x0) {
      (this->BackgroundSaving).Ptr = (FThread *)0x0;
      ::FThread::~FThread(pFVar1);
      ::operator_delete(pFVar1,0x10);
    }
  }
  if (4 < (byte)HighlightRecorder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
  }
  FCsvProfiler::EndStat("HighlightRecorder_Stop",uVar2);
  return;
}

// StopCmd @ 148d2adb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FHighlightRecorder::StopCmd(void)

{
  if (Singleton == (FHighlightRecorder *)0x0) {
    if (1 < (byte)HighlightRecorder._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`private:_static_bool___cdecl_FHighlightRecorder::CheckSingleton(void)'::__l8::
                  LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
      return;
    }
  }
  else {
    Stop(Singleton);
    if (Singleton != (FHighlightRecorder *)0x0) {
      _scalar_deleting_destructor_(Singleton,1);
    }
    Singleton = (FHighlightRecorder *)0x0;
  }
  return;
}

