// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 19

// FVoiceCaptureWindows @ 14ec3a630

FVoiceCaptureWindows * __thiscall
FVoiceCaptureWindows::FVoiceCaptureWindows(FVoiceCaptureWindows *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FTSTicker *pFVar4;
  FVoiceCaptureWindowsVars *pFVar5;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IVoiceCapture__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  pFVar4 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)&this->_padding_,0.0,pFVar4);
  fVar3 = __real_473b8000;
  fVar2 = __real_42c80000;
  fVar1 = __real_41200000;
  this->_padding_ = (longlong)&_vftable__for__IVoiceCapture__;
  this->CV = (FVoiceCaptureWindowsVars *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  this->LastCaptureTime = 0.0;
  this->VoiceCaptureState = UnInitialized;
  (this->UncompressedAudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UncompressedAudioBuffer).ArrayNum = 0;
  (this->UncompressedAudioBuffer).ArrayMax = 0;
  (this->ConversionBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConversionBuffer).RawPCMData.ArrayNum = 0;
  (this->ConversionBuffer).RawPCMData.ArrayMax = 0;
  (this->ConversionBuffer).NumSamples = 0;
  (this->ConversionBuffer).NumFrames = 0;
  (this->ConversionBuffer).NumChannels = 0;
  (this->ConversionBuffer).SampleRate = 0;
  (this->ConversionBuffer).SampleDuration = 0.0;
  (this->LookaheadBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookaheadBuffer).InternalBuffer.ArrayNum = 0;
  (this->LookaheadBuffer).InternalBuffer.ArrayMax = 0;
  (this->ReleaseBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleaseBuffer).InternalBuffer.ArrayNum = 0;
  (this->ReleaseBuffer).InternalBuffer.ArrayMax = 0;
  Audio::FAttackRelease::FAttackRelease
            ((FAttackRelease *)&this->MicLevelDetector,fVar3,fVar1,fVar2,true);
  fVar1 = __real_40a00000;
  (this->MicLevelDetector).Value = 0.0;
  (this->MicLevelDetector).Mode = Peak;
  (this->MicLevelDetector).AnalysisValue = 0.0;
  (this->MicLevelDetector).AnalysisWindowMsec = 5.0;
  (this->MicLevelDetector).AnalysisFilterAlpha = 0.0;
  (this->MicLevelDetector).AnalysisFilterBeta = 1.0;
  Audio::FInlineEnvelopeFollower::SetAnalysisWindow(&this->MicLevelDetector,fVar1);
  (this->NoiseGateAttenuator).StartValue = 0.0;
  (this->NoiseGateAttenuator).CurrentValue = 0.0;
  (this->NoiseGateAttenuator).DeltaValue = 0.0;
  (this->NoiseGateAttenuator).SampleRate = 44100.0;
  (this->NoiseGateAttenuator).DurationTicks = 0;
  (this->NoiseGateAttenuator).DefaultDurationTicks = 0;
  (this->NoiseGateAttenuator).CurrentTick = 0;
  (this->NoiseGateAttenuator).bIsInit = true;
  pFVar5 = ::operator_new(0x90);
  if (pFVar5 != (FVoiceCaptureWindowsVars *)0x0) {
    pFVar5->VoiceCaptureDev = (IDirectSoundCapture *)0x0;
    pFVar5->VoiceCaptureBuffer8 = (IDirectSoundCaptureBuffer8 *)0x0;
    pFVar5->StopEvent = (void *)0xffffffffffffffff;
    pFVar5->NextCaptureOffset = 0;
    (pFVar5->VoiceCaptureDeviceGuid).Data1 = 0;
    (pFVar5->VoiceCaptureDeviceGuid).Data2 = 0;
    (pFVar5->VoiceCaptureDeviceGuid).Data3 = 0;
    (pFVar5->VoiceCaptureDeviceGuid).Data4[0] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[1] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[2] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[3] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[4] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[5] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[6] = '\0';
    (pFVar5->VoiceCaptureDeviceGuid).Data4[7] = '\0';
    (pFVar5->VoiceCaptureDevCaps).dwSize = 0;
    (pFVar5->VoiceCaptureDevCaps).dwFlags = 0;
    (pFVar5->VoiceCaptureDevCaps).dwFormats = 0;
    (pFVar5->VoiceCaptureDevCaps).dwChannels = 0;
    (pFVar5->WavFormat).wFormatTag = 0;
    (pFVar5->WavFormat).nChannels = 0;
    (pFVar5->WavFormat).nSamplesPerSec = 0;
    (pFVar5->WavFormat).nAvgBytesPerSec = 0;
    (pFVar5->WavFormat).nBlockAlign = 0;
    (pFVar5->WavFormat).wBitsPerSample = 0;
    (pFVar5->WavFormat).cbSize = 0;
    (pFVar5->VoiceCaptureBufferDesc).dwSize = 0;
    (pFVar5->VoiceCaptureBufferDesc).dwFlags = 0;
    (pFVar5->VoiceCaptureBufferDesc).dwBufferBytes = 0;
    (pFVar5->VoiceCaptureBufferDesc).dwReserved = 0;
    (pFVar5->VoiceCaptureBufferDesc).lpwfxFormat = (tWAVEFORMATEX *)0x0;
    *(undefined8 *)&(pFVar5->VoiceCaptureBufferDesc).dwFXCount = 0;
    (pFVar5->VoiceCaptureBufferDesc).lpDSCFXDesc = (_DSCEFFECTDESC *)0x0;
    (pFVar5->VoiceCaptureBufferCaps8).dwSize = 0;
    (pFVar5->VoiceCaptureBufferCaps8).dwFlags = 0;
    (pFVar5->VoiceCaptureBufferCaps8).dwBufferBytes = 0;
    (pFVar5->VoiceCaptureBufferCaps8).dwReserved = 0;
    this->CV = pFVar5;
    return this;
  }
  this->CV = (FVoiceCaptureWindowsVars *)0x0;
  return this;
}

// ~FVoiceCaptureWindows @ 14ec3aa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceCaptureWindows::~FVoiceCaptureWindows(FVoiceCaptureWindows *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FVoiceCaptureDeviceWindows *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  this->_padding_ = (longlong)&_vftable__for__IVoiceCapture__;
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  Stop(this);
  FVoiceCaptureWindowsVars::Reset(this->CV);
  this->VoiceCaptureState = UnInitialized;
  pFVar5 = FVoiceCaptureDeviceWindows::Singleton;
  if (FVoiceCaptureDeviceWindows::Singleton != (FVoiceCaptureDeviceWindows *)0x0) {
    pFVar3 = (FVoiceCaptureDeviceWindows::Singleton->ActiveVoiceCaptures).AllocatorInstance.Data;
    iVar8 = (FVoiceCaptureDeviceWindows::Singleton->ActiveVoiceCaptures).ArrayNum;
    for (pFVar10 = pFVar3; pFVar10 != pFVar3 + (longlong)iVar8 * 8; pFVar10 = pFVar10 + 8) {
      if (*(FVoiceCaptureWindows **)pFVar10 == this) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar9 < iVar8) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (pFVar5->ActiveVoiceCaptures).ArrayNum;
          pFVar3 = (pFVar5->ActiveVoiceCaptures).AllocatorInstance.Data;
          iVar8 = iVar2 + ~uVar9;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar9 * 8,pFVar3 + (longlong)(iVar2 - iVar8) * 8,
                    (longlong)iVar8 << 3);
          }
          piVar1 = &(pFVar5->ActiveVoiceCaptures).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)pFVar5,(pFVar5->ActiveVoiceCaptures).ArrayNum,
                     &(pFVar5->ActiveVoiceCaptures).ArrayMax);
          goto LAB_14ec3ab23;
        }
        break;
      }
    }
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
  }
LAB_14ec3ab23:
  if (this->CV != (FVoiceCaptureWindowsVars *)0x0) {
    ::operator_delete(this->CV,0x90);
    this->CV = (FVoiceCaptureWindowsVars *)0x0;
  }
  pFVar3 = (this->ReleaseBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LookaheadBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ConversionBuffer).RawPCMData.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->UncompressedAudioBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)&this->_padding_);
  IVoiceCapture::~IVoiceCapture((IVoiceCapture *)this);
  return;
}

// ChangeDevice @ 14ec3b7d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVoiceCaptureWindows::ChangeDevice
          (FVoiceCaptureWindows *this,FString *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (this->VoiceCaptureState != UnInitialized) {
    bVar1 = CreateCaptureBuffer(this,param_1,param_2,param_3);
    return bVar1;
  }
  if (2 < (byte)LogVoiceCapture._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
  }
  return false;
}

// CreateCaptureBuffer @ 14ec3bab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVoiceCaptureWindows::CreateCaptureBuffer
          (FVoiceCaptureWindows *this,FString *param_1,int param_2,int param_3)

{
  TMap<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>_>
  *this_00;
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FVoiceCaptureWindowsVars *pFVar3;
  IDirectSoundCapture *pIVar4;
  IDirectSoundCaptureBuffer8 *pIVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ushort uVar12;
  ushort uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  HANDLE pvVar19;
  FStaticBasicLogRecord *pFVar20;
  FCaptureDeviceInfo *pFVar21;
  ulonglong uVar22;
  longlong *local_res8;
  FScriptContainerElement local_48 [8];
  longlong *local_40;
  undefined4 local_38 [2];
  void *local_30;
  
  (**(code **)(this->_padding_ + 0x20))();
  FVoiceCaptureWindowsVars::Reset(this->CV);
  this->VoiceCaptureState = NotCapturing;
  if (param_2 - 8000U < 0x9c41) {
    if (2 < (uint)param_3) {
      if ((byte)LogVoiceCapture._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      return false;
    }
    if (FVoiceCaptureDeviceWindows::Singleton == (FVoiceCaptureDeviceWindows *)0x0) {
      if ((byte)LogVoiceCapture._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      return false;
    }
    iVar17 = (param_1->Data).ArrayNum;
    lVar18 = 0;
    if (iVar17 < 2) {
      pFVar21 = &FVoiceCaptureDeviceWindows::Singleton->DefaultVoiceCaptureDevice;
    }
    else {
      this_00 = &FVoiceCaptureDeviceWindows::Singleton->Devices;
      uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>
                         (iVar17 + -1,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      iVar17 = TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
                           *)this_00,uVar16,param_1);
      if (iVar17 != -1) {
        lVar18 = (longlong)iVar17 * 0x40 + *(longlong *)&this_00->field_0x0;
      }
      pFVar21 = (FCaptureDeviceInfo *)(lVar18 + 0x10);
      if (lVar18 == 0) {
        pFVar21 = (FCaptureDeviceInfo *)0x0;
      }
    }
    if (pFVar21 == (FCaptureDeviceInfo *)0x0) {
      if ((byte)LogVoiceCapture._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      return false;
    }
    if (3 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
    pFVar3 = this->CV;
    uVar12 = (pFVar21->DeviceId).Data2;
    uVar13 = (pFVar21->DeviceId).Data3;
    uVar10 = *(undefined4 *)(pFVar21->DeviceId).Data4;
    uVar11 = *(undefined4 *)((pFVar21->DeviceId).Data4 + 4);
    (pFVar3->VoiceCaptureDeviceGuid).Data1 = (pFVar21->DeviceId).Data1;
    (pFVar3->VoiceCaptureDeviceGuid).Data2 = uVar12;
    (pFVar3->VoiceCaptureDeviceGuid).Data3 = uVar13;
    *(undefined4 *)(pFVar3->VoiceCaptureDeviceGuid).Data4 = uVar10;
    *(undefined4 *)((pFVar3->VoiceCaptureDeviceGuid).Data4 + 4) = uVar11;
    iVar17 = DirectSoundCaptureCreate8(&pFVar21->DeviceId,&this->CV->VoiceCaptureDev,0);
    if (iVar17 < 0) {
      if ((byte)LogVoiceCapture._0_1_ < 3) {
        return false;
      }
      pFVar20 = &::LOG_Static;
    }
    else {
      (this->CV->VoiceCaptureDevCaps).dwSize = 0x10;
      pIVar4 = this->CV->VoiceCaptureDev;
      iVar17 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&this->CV->VoiceCaptureDevCaps);
      if (iVar17 < 0) {
        if ((byte)LogVoiceCapture._0_1_ < 3) {
          return false;
        }
        pFVar20 = &::LOG_Static;
      }
      else {
        (this->CV->WavFormat).wFormatTag = 1;
        (this->CV->WavFormat).nChannels = (ushort)param_3;
        (this->CV->WavFormat).wBitsPerSample = 0x10;
        (this->CV->WavFormat).nSamplesPerSec = param_2;
        pFVar3 = this->CV;
        iVar17 = (uint)(pFVar3->WavFormat).wBitsPerSample * (uint)(pFVar3->WavFormat).nChannels;
        (pFVar3->WavFormat).nBlockAlign = (ushort)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
        pFVar3 = this->CV;
        (pFVar3->WavFormat).nAvgBytesPerSec =
             (uint)(pFVar3->WavFormat).nBlockAlign * (pFVar3->WavFormat).nSamplesPerSec;
        (this->CV->WavFormat).cbSize = 0;
        (this->CV->VoiceCaptureBufferDesc).dwSize = 0x28;
        (this->CV->VoiceCaptureBufferDesc).dwFlags = 0;
        (this->CV->VoiceCaptureBufferDesc).dwBufferBytes =
             (this->CV->WavFormat).nAvgBytesPerSec >> 1;
        (this->CV->VoiceCaptureBufferDesc).dwReserved = 0;
        (this->CV->VoiceCaptureBufferDesc).lpwfxFormat = &this->CV->WavFormat;
        (this->CV->VoiceCaptureBufferDesc).dwFXCount = 0;
        (this->CV->VoiceCaptureBufferDesc).lpDSCFXDesc = (_DSCEFFECTDESC *)0x0;
        local_res8 = (longlong *)0x0;
        pIVar4 = this->CV->VoiceCaptureDev;
        iVar17 = (**(code **)((longlong)*pIVar4 + 0x18))
                           (pIVar4,&this->CV->VoiceCaptureBufferDesc,&local_res8,0);
        if (iVar17 < 0) {
          if ((byte)LogVoiceCapture._0_1_ < 3) {
            return false;
          }
          pFVar20 = (FStaticBasicLogRecord *)&PTR_u_Failed_to_creat_15304eb00;
        }
        else {
          iVar17 = (**(code **)*local_res8)
                             (local_res8,&IID_IDirectSoundCaptureBuffer8,
                              &this->CV->VoiceCaptureBuffer8);
          (**(code **)(*local_res8 + 0x10))();
          local_res8 = (longlong *)0x0;
          if (iVar17 < 0) {
            if ((byte)LogVoiceCapture._0_1_ < 3) {
              return false;
            }
            pFVar20 = &::LOG_Static;
          }
          else {
            (this->CV->VoiceCaptureBufferCaps8).dwSize = 0x10;
            pIVar5 = this->CV->VoiceCaptureBuffer8;
            iVar17 = (**(code **)((longlong)*pIVar5 + 0x18))
                               (pIVar5,&this->CV->VoiceCaptureBufferCaps8);
            if (-1 < iVar17) {
              local_40 = (longlong *)0x0;
              bVar14 = false;
              pIVar5 = this->CV->VoiceCaptureBuffer8;
              iVar17 = (**(code **)*pIVar5)(pIVar5,&IID_IDirectSoundNotify,&local_40);
              if (iVar17 < 0) {
                if ((byte)LogVoiceCapture._0_1_ < 3) {
                  return false;
                }
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
              }
              else {
                pvVar19 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
                this->CV->StopEvent = pvVar19;
                pvVar6 = this->CV->StopEvent;
                if ((pvVar6 == (void *)0x0) || (pvVar6 == (void *)0xffffffffffffffff)) {
                  if (2 < (byte)LogVoiceCapture._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
                  }
                }
                else {
                  local_38[0] = 0xffffffff;
                  local_30 = pvVar6;
                  iVar17 = (**(code **)(*local_40 + 0x18))(local_40,1,local_38);
                  if (iVar17 < 0) {
                    if (2 < (byte)LogVoiceCapture._0_1_) {
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
                    }
                    CloseHandle(this->CV->StopEvent);
                    this->CV->StopEvent = (void *)0xffffffffffffffff;
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                }
                (**(code **)(*local_40 + 0x10))();
                if (bVar14) {
                  dVar9 = FWindowsPlatformTime::Seconds();
                  pTVar2 = &this->UncompressedAudioBuffer;
                  this->LastCaptureTime = dVar9;
                  uVar16 = (this->CV->VoiceCaptureBufferDesc).dwBufferBytes;
                  uVar22 = (ulonglong)uVar16;
                  local_48[0] = (FScriptContainerElement)0x0;
                  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum(uVar22);
                  }
                  piVar1 = &(this->UncompressedAudioBuffer).ArrayMax;
                  (this->UncompressedAudioBuffer).ArrayNum = 0;
                  if (*piVar1 != uVar16) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,uVar16,&pTVar2->AllocatorInstance,0,piVar1);
                  }
                  if (0 < (int)uVar16) {
                    do {
                      pFVar7 = (pTVar2->AllocatorInstance).Data;
                      if (((pFVar7 <= local_48) && (local_48 < pFVar7 + *piVar1)) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar14)) {
                        pcVar8 = (code *)swi(3);
                        uVar15 = (*pcVar8)();
                        return (bool)uVar15;
                      }
                      iVar17 = (this->UncompressedAudioBuffer).ArrayNum;
                      if (iVar17 == *piVar1) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x101,&pTVar2->AllocatorInstance,piVar1);
                      }
                      (this->UncompressedAudioBuffer).ArrayNum = iVar17 + 1;
                      (pTVar2->AllocatorInstance).Data[iVar17] = local_48[0];
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  if (((this->UncompressedAudioBuffer).ArrayMax <
                       (int)(this->CV->VoiceCaptureBufferCaps8).dwBufferBytes) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("UncompressedAudioBuffer.Max() >= (int32)CV->VoiceCaptureBufferCaps8.dwBufferBytes"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                                          ,0x117,L""), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    uVar15 = (*pcVar8)();
                    return (bool)uVar15;
                  }
                  this->NumInputChannels = (uint)(this->CV->WavFormat).nChannels;
                  FVoiceDelayBuffer<short>::Init
                            (&this->ReleaseBuffer,(this->CV->VoiceCaptureBufferCaps8).dwBufferBytes)
                  ;
                  iVar17 = (this->ReleaseBuffer).WriteIndex + -1;
                  if (iVar17 < 0) {
                    iVar17 = iVar17 + (this->ReleaseBuffer).InternalBuffer.ArrayNum;
                  }
                  (this->ReleaseBuffer).ReadIndex = iVar17;
                  return true;
                }
              }
              if ((byte)LogVoiceCapture._0_1_ < 3) {
                return false;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
              return false;
            }
            if ((byte)LogVoiceCapture._0_1_ < 3) {
              return false;
            }
            pFVar20 = &::LOG_Static;
          }
        }
      }
    }
  }
  else {
    if ((byte)LogVoiceCapture._0_1_ < 3) {
      return false;
    }
    pFVar20 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar20,(FLogCategoryBase *)&LogVoiceCapture);
  return false;
}

// CreateNotifications @ 14ec3c160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceCaptureWindows::CreateNotifications(FVoiceCaptureWindows *this,uint param_1)

{
  IDirectSoundCaptureBuffer8 *pIVar1;
  int iVar2;
  HANDLE pvVar3;
  longlong *local_res8;
  undefined4 local_18 [2];
  void *local_10;
  
  local_res8 = (longlong *)0x0;
  pIVar1 = this->CV->VoiceCaptureBuffer8;
  iVar2 = (**(code **)*pIVar1)(pIVar1,&IID_IDirectSoundNotify,&local_res8);
  if (iVar2 < 0) {
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
    return false;
  }
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  this->CV->StopEvent = pvVar3;
  local_10 = this->CV->StopEvent;
  if ((local_10 != (void *)0x0) && (local_10 != (void *)0xffffffffffffffff)) {
    local_18[0] = 0xffffffff;
    iVar2 = (**(code **)(*local_res8 + 0x18))(local_res8,1,local_18);
    if (-1 < iVar2) {
      (**(code **)(*local_res8 + 0x10))();
      return true;
    }
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
    CloseHandle(this->CV->StopEvent);
    this->CV->StopEvent = (void *)0xffffffffffffffff;
    (**(code **)(*local_res8 + 0x10))();
    return false;
  }
  if (2 < (byte)LogVoiceCapture._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
  }
  (**(code **)(*local_res8 + 0x10))();
  return false;
}

// DumpState @ 14ec3d820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceCaptureWindows::DumpState(FVoiceCaptureWindows *this)

{
  FString local_18;
  
  if (this->CV == (FVoiceCaptureWindowsVars *)0x0) {
    if (3 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      return;
    }
  }
  else if (3 < (byte)LogVoiceCapture._0_1_) {
    PrintMSGUID(&local_18,&this->CV->VoiceCaptureDeviceGuid);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (((((((3 < (byte)LogVoiceCapture._0_1_) &&
            (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
            3 < (byte)LogVoiceCapture._0_1_)) &&
           (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
           3 < (byte)LogVoiceCapture._0_1_)) &&
          (((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
            3 < (byte)LogVoiceCapture._0_1_ &&
            (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
            3 < (byte)LogVoiceCapture._0_1_)) &&
           ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
            3 < (byte)LogVoiceCapture._0_1_ &&
            ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
             3 < (byte)LogVoiceCapture._0_1_ &&
             (UE::Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)&PTR_u___SamplesPerSec_15304f5a8,
                         (FLogCategoryBase *)&LogVoiceCapture), 3 < (byte)LogVoiceCapture._0_1_)))))
           ))) && ((UE::Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
                   3 < (byte)LogVoiceCapture._0_1_ &&
                   (((UE::Logging::Private::BasicLog<4>
                                (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
                     3 < (byte)LogVoiceCapture._0_1_ &&
                     (UE::Logging::Private::BasicLog<4>
                                (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
                     3 < (byte)LogVoiceCapture._0_1_)) &&
                    (UE::Logging::Private::BasicLog<4>
                               (&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
                    3 < (byte)LogVoiceCapture._0_1_)))))) &&
        (((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
          3 < (byte)LogVoiceCapture._0_1_ &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
          3 < (byte)LogVoiceCapture._0_1_)) &&
         (((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
           3 < (byte)LogVoiceCapture._0_1_ &&
           ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
            3 < (byte)LogVoiceCapture._0_1_ &&
            (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
            3 < (byte)LogVoiceCapture._0_1_)))) &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
          3 < (byte)LogVoiceCapture._0_1_)))))) &&
       ((((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
          3 < (byte)LogVoiceCapture._0_1_ &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
          3 < (byte)LogVoiceCapture._0_1_)) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
         3 < (byte)LogVoiceCapture._0_1_)) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture),
        3 < (byte)LogVoiceCapture._0_1_)))) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      return;
    }
  }
  return;
}

// FreeCaptureBuffer @ 14ec3e9c0

void __thiscall FVoiceCaptureWindows::FreeCaptureBuffer(FVoiceCaptureWindows *this)

{
  (**(code **)(this->_padding_ + 0x20))();
  FVoiceCaptureWindowsVars::Reset(this->CV);
  this->VoiceCaptureState = UnInitialized;
  return;
}

// GetBufferSize @ 14ec3eb30

int __thiscall FVoiceCaptureWindows::GetBufferSize(FVoiceCaptureWindows *this)

{
  if (this->VoiceCaptureState != UnInitialized) {
    return (this->CV->VoiceCaptureBufferCaps8).dwBufferBytes;
  }
  return 0;
}

// GetCaptureState @ 14ec3eb50

Type __thiscall FVoiceCaptureWindows::GetCaptureState(FVoiceCaptureWindows *this,uint *param_1)

{
  if ((this->VoiceCaptureState != UnInitialized) && (this->VoiceCaptureState != Error)) {
    *param_1 = (this->UncompressedAudioBuffer).ArrayNum;
    return this->VoiceCaptureState;
  }
  *param_1 = 0;
  return this->VoiceCaptureState;
}

// GetCurrentAmplitude @ 14ec3eb90

float __thiscall FVoiceCaptureWindows::GetCurrentAmplitude(FVoiceCaptureWindows *this)

{
  return (this->MicLevelDetector).Value;
}

// GetVoiceData @ 14ec3ebb0

Type __thiscall
FVoiceCaptureWindows::GetVoiceData
          (FVoiceCaptureWindows *this,uchar *param_1,uint param_2,uint *param_3)

{
  Type TVar1;
  
  TVar1 = (**(code **)(this->_padding_ + 0x40))();
  return TVar1;
}

// GetVoiceData @ 14ec3ebe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __thiscall
FVoiceCaptureWindows::GetVoiceData
          (FVoiceCaptureWindows *this,uchar *param_1,uint param_2,uint *param_3,ulong64 *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TSampleBuffer<float> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  uint uVar10;
  Type TVar11;
  int iVar12;
  ulong64 uVar13;
  float *_Dst;
  FLinearColor *this_00;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  Type local_res8;
  FColor local_res20;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  TArrayView<float,int> local_88;
  FString local_78;
  TArrayView<short_const_,int> local_68;
  FLinearColor local_58 [2];
  
  local_res8 = this->VoiceCaptureState;
  *param_3 = 0;
  if ((this->VoiceCaptureState == Ok) || (this->VoiceCaptureState == Stopping)) {
    uVar18 = (this->UncompressedAudioBuffer).ArrayNum;
    if (param_2 < uVar18) {
      local_res8 = BufferTooSmall;
    }
    else {
      *param_3 = uVar18;
      memcpy(param_1,(this->UncompressedAudioBuffer).AllocatorInstance.Data,(ulonglong)uVar18);
      this->VoiceCaptureState = NoData;
      piVar3 = &(this->UncompressedAudioBuffer).ArrayMax;
      (this->UncompressedAudioBuffer).ArrayNum = 0;
      if (*piVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->UncompressedAudioBuffer).AllocatorInstance,0,piVar3);
      }
      *param_4 = this->CurrentSampleStart;
    }
  }
  iVar9 = Audio::FPatchSplitter::Num((FPatchSplitter *)&this->_padding_);
  if (0 < iVar9) {
    pTVar4 = &this->ConversionBuffer;
    iVar9 = (this->ConversionBuffer).RawPCMData.ArrayMax;
    piVar3 = &(this->ConversionBuffer).RawPCMData.ArrayMax;
    uVar18 = *param_3 >> 1;
    piVar1 = &(this->ConversionBuffer).RawPCMData.ArrayNum;
    *piVar1 = 0;
    if (iVar9 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pTVar4,0,piVar3);
    }
    (this->ConversionBuffer).NumSamples = 0;
    (this->ConversionBuffer).NumFrames = 0;
    (this->ConversionBuffer).NumChannels = 0;
    (this->ConversionBuffer).SampleRate = 0;
    (this->ConversionBuffer).SampleDuration = 0.0;
    (this->ConversionBuffer).NumChannels = this->NumInputChannels;
    (this->ConversionBuffer).SampleRate = 16000;
    uVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar18,(ForAnyElementType *)pTVar4,piVar1,piVar3);
    uVar14 = 0;
    if ((int)uVar10 < *piVar1) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      TVar11 = (*pcVar6)();
      return TVar11;
    }
    local_68.ArrayNum = uVar18;
    local_88.DataPtr =
         (float *)((pTVar4->RawPCMData).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
    local_88._12_4_ = local_68._12_4_;
    local_88.ArrayNum = uVar18;
    local_68.DataPtr = (short *)param_1;
    Audio::ArrayPcm16ToFloat(&local_68,&local_88);
    piVar2 = &(this->ConversionBuffer).NumSamples;
    *piVar2 = *piVar2 + uVar18;
    iVar9 = (this->ConversionBuffer).NumSamples / (this->ConversionBuffer).NumChannels;
    (this->ConversionBuffer).NumFrames = iVar9;
    (this->ConversionBuffer).SampleDuration =
         (float)iVar9 / (float)(this->ConversionBuffer).SampleRate;
    if ((1 < this->NumInputChannels) && (*piVar1 != 0)) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (longlong)iVar9;
      uVar13 = SUB168(ZEXT816(4) * auVar7,0);
      if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      _Dst = operator_new__(uVar13);
      operator_delete__((void *)0x0);
      memset(_Dst,0,(longlong)(this->ConversionBuffer).NumFrames << 2);
      uVar18 = (this->ConversionBuffer).NumFrames;
      pFVar5 = (pTVar4->RawPCMData).AllocatorInstance.Data;
      iVar9 = 0;
      pfVar16 = _Dst;
      if (0 < (int)uVar18) {
        do {
          iVar12 = (this->ConversionBuffer).NumChannels;
          iVar15 = 0;
          if (0 < iVar12) {
            fVar19 = *pfVar16;
            do {
              iVar12 = iVar12 * iVar9 + iVar15;
              iVar15 = iVar15 + 1;
              fVar19 = fVar19 + *(float *)(pFVar5 + (longlong)iVar12 * 4);
              *pfVar16 = fVar19;
              iVar12 = (this->ConversionBuffer).NumChannels;
            } while (iVar15 < iVar12);
          }
          uVar18 = (this->ConversionBuffer).NumFrames;
          iVar9 = iVar9 + 1;
          pfVar16 = pfVar16 + 1;
        } while (iVar9 < (int)uVar18);
      }
      (this->ConversionBuffer).NumChannels = 1;
      (this->ConversionBuffer).NumSamples = uVar18;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      *piVar1 = 0;
      if (*piVar3 < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar18,(ForAnyElementType *)pTVar4,0,piVar3);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(this->ConversionBuffer).NumSamples,(ForAnyElementType *)pTVar4,piVar1,piVar3);
      memcpy((pTVar4->RawPCMData).AllocatorInstance.Data,_Dst,
             (longlong)(this->ConversionBuffer).NumSamples << 2);
      operator_delete__(_Dst);
    }
    Audio::FPatchSplitter::PushAudio
              ((FPatchSplitter *)&this->_padding_,
               (float *)(pTVar4->RawPCMData).AllocatorInstance.Data,
               (this->ConversionBuffer).NumSamples);
  }
  if ((DisplayAmplitudeCvar != 0) && (GEngine != (UEngine *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      TimeLastPrinted = FWindowsPlatformTime::Seconds();
      _Init_thread_footer(&::_TSS0);
    }
    QueryPerformanceCounter(&local_98);
    if (__real_3fa999999999999a <
        ((double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
        ) - TimeLastPrinted) {
      fVar19 = (this->MicLevelDetector).Value;
      ::FString::PrintfImpl(&local_78,L"Mic Amp: %.2f");
      uVar18 = (int)ROUND(fVar19 * __real_42800000 - __real_3f000000) >> 1;
      if (0 < (int)uVar18) {
        uVar17 = (ulonglong)uVar18;
        do {
          ::FString::AppendChar(&local_78,L'|');
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      this_00 = FLinearColor::LerpUsingHSV(local_58,&FLinearColor::Green,&FLinearColor::Red,fVar19);
      FLinearColor::ToFColorSRGB(this_00);
      UEngine::AddOnScreenDebugMessage
                (GEngine,0x1e,__real_3d4ccccd,local_res20,&local_78,false,
                 &UE::Math::TVector2<double>::UnitVector);
      QueryPerformanceCounter(&local_90);
      TimeLastPrinted =
           (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return local_res8;
}

// Init @ 14ec3f580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVoiceCaptureWindows::Init(FVoiceCaptureWindows *this,FString *param_1,int param_2,int param_3)

{
  FInlineEnvelopeFollower *this_00;
  code *pcVar1;
  FVoiceCaptureDeviceWindows *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  IConsoleManager *pIVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pFVar2 = FVoiceCaptureDeviceWindows::Singleton;
  if (FVoiceCaptureDeviceWindows::Singleton == (FVoiceCaptureDeviceWindows *)0x0) {
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
    bVar3 = false;
  }
  else {
    uVar7 = (ulonglong)_tls_index;
    this->SampleCounter = 0;
    this->CachedSampleStart = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0)
    {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar5 = IConsoleManager::Get();
        SilenceDetectionAttackCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"voice.SilenceDetectionAttackTime",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (SilenceDetectionAttackCVar == (IConsoleVariable *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SilenceDetectionAttackCVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                         ,0x7a,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS1)
    {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        pIVar5 = IConsoleManager::Get();
        SilenceDetectionReleaseCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"voice.SilenceDetectionReleaseTime",1);
        _Init_thread_footer(&::_TSS1);
      }
    }
    if (SilenceDetectionReleaseCVar == (IConsoleVariable *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SilenceDetectionReleaseCVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                         ,0x7c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    fVar10 = (float)param_2;
    fVar8 = (float)(**(code **)(*(longlong *)SilenceDetectionAttackCVar + 0xd0))();
    fVar9 = (float)(**(code **)(*(longlong *)SilenceDetectionReleaseCVar + 0xd0))();
    this_00 = &this->MicLevelDetector;
    Audio::FAttackRelease::SetSampleRate((FAttackRelease *)this_00,fVar10);
    Audio::FAttackRelease::SetAttackTime((FAttackRelease *)this_00,fVar8);
    Audio::FAttackRelease::SetReleaseTime((FAttackRelease *)this_00,fVar9);
    (this->MicLevelDetector).Mode = Peak;
    Audio::FAttackRelease::SetAnalog((FAttackRelease *)this_00,false);
    Audio::FInlineEnvelopeFollower::SetAnalysisWindow(this_00,__real_40a00000);
    fVar8 = (float)(**(code **)(*(longlong *)SilenceDetectionAttackCVar + 0xd0))();
    iVar6 = (int)(fVar8 * fVar10 * __real_3a83126f);
    FVoiceDelayBuffer<short>::Init(&this->LookaheadBuffer,iVar6 + 1);
    iVar6 = (this->LookaheadBuffer).WriteIndex - iVar6;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (this->LookaheadBuffer).InternalBuffer.ArrayNum;
    }
    (this->LookaheadBuffer).ReadIndex = iVar6;
    (this->NoiseGateAttenuator).SampleRate = fVar10;
    (this->NoiseGateAttenuator).bIsInit = true;
    this->bIsMicActive = false;
    this->bWasMicAboveNoiseGateThreshold = false;
    if ((param_1->Data).ArrayNum < 2) {
      param_1 = &(pFVar2->DefaultVoiceCaptureDevice).DeviceName;
    }
    bVar3 = CreateCaptureBuffer(this,param_1,param_2,param_3);
  }
  return bVar3;
}

// IsCapturing @ 14ec3fda0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceCaptureWindows::IsCapturing(FVoiceCaptureWindows *this)

{
  IDirectSoundCaptureBuffer8 *pIVar1;
  int iVar2;
  undefined4 local_res8 [8];
  
  pIVar1 = this->CV->VoiceCaptureBuffer8;
  if (pIVar1 != (IDirectSoundCaptureBuffer8 *)0x0) {
    local_res8[0] = 0;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_res8);
    if ((iVar2 < 0) && (2 < (byte)LogVoiceCapture._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
    return (bool)((byte)local_res8[0] & 1);
  }
  return false;
}

// ProcessData @ 14ec3ff30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceCaptureWindows::ProcessData(FVoiceCaptureWindows *this)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined2 uVar3;
  int iVar4;
  Type TVar5;
  IDirectSoundCaptureBuffer8 *pIVar6;
  FVoiceCaptureWindowsVars *pFVar7;
  code *pcVar8;
  double dVar9;
  size_t _Size;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  IConsoleManager *pIVar22;
  short *psVar23;
  int iVar24;
  uint uVar25;
  FScriptContainerElement *_Dst;
  ulonglong uVar26;
  int *piVar27;
  FStaticBasicLogRecord *pFVar28;
  uint uVar29;
  FScriptContainerElement *_Src;
  uint *puVar30;
  short sVar31;
  FScriptContainerElement *pFVar32;
  undefined2 *puVar33;
  int *piVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  uint *puVar42;
  int local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  int local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  longlong local_108;
  longlong local_100;
  LARGE_INTEGER local_f8 [23];
  
  local_118 = 0;
  local_144 = 0;
  pIVar6 = this->CV->VoiceCaptureBuffer8;
  if ((pIVar6 == (IDirectSoundCaptureBuffer8 *)0x0) ||
     (iVar18 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,&local_118,&local_144), iVar18 < 0)) {
    if ((byte)LogVoiceCapture._0_1_ < 3) goto LAB_14ec415d2;
    pFVar28 = &::LOG_Static;
  }
  else {
    pFVar7 = this->CV;
    uVar26 = (ulonglong)
             (((pFVar7->VoiceCaptureBufferCaps8).dwBufferBytes - pFVar7->NextCaptureOffset) +
             local_144) % (ulonglong)(pFVar7->VoiceCaptureBufferCaps8).dwBufferBytes;
    if ((int)uVar26 == 0) {
      return;
    }
    local_res18[0] = 0;
    puVar42 = local_res20;
    local_100 = 0;
    local_res20[0] = 0;
    local_108 = 0;
    iVar18 = (**(code **)((longlong)*pFVar7->VoiceCaptureBuffer8 + 0x40))
                       (pFVar7->VoiceCaptureBuffer8,pFVar7->NextCaptureOffset,uVar26,&local_100,
                        local_res18,&local_108,puVar42,0);
    if (-1 < iVar18) {
      piVar34 = &(this->UncompressedAudioBuffer).ArrayNum;
      piVar27 = &(this->UncompressedAudioBuffer).ArrayMax;
      local_110 = local_res18[0];
      local_114 = local_res20[0];
      if ((uint)*piVar27 < *piVar34 + local_res20[0] + local_res18[0]) {
        if (2 < (byte)LogVoiceCapture._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
        }
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty
                  (&this->UncompressedAudioBuffer,(this->UncompressedAudioBuffer).ArrayMax);
        this->VoiceCaptureState = NoData;
      }
      uVar21 = (this->UncompressedAudioBuffer).ArrayMax;
      piVar1 = &(this->ReleaseBuffer).InternalBuffer.ArrayNum;
      local_130 = *piVar34;
      uVar25 = uVar21;
      if (local_res18[0] < uVar21) {
        uVar25 = local_res18[0];
      }
      iVar18 = (this->ReleaseBuffer).WriteIndex;
      uVar29 = uVar21 - uVar25;
      if (local_res20[0] < uVar21 - uVar25) {
        uVar29 = local_res20[0];
      }
      iVar19 = (this->ReleaseBuffer).ReadIndex;
      if (iVar18 < iVar19) {
        iVar19 = *piVar1 - iVar19;
      }
      else {
        iVar19 = -iVar19;
      }
      local_res18[0] = uVar25;
      local_res20[0] = uVar29;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar29 + (iVar19 + iVar18) * 2 + uVar25,
                 &(this->UncompressedAudioBuffer).AllocatorInstance,piVar34,piVar27);
      pFVar32 = (this->UncompressedAudioBuffer).AllocatorInstance.Data + local_130;
      iVar18 = (this->ReleaseBuffer).WriteIndex;
      local_128 = (FScriptContainerElement *)local_100;
      iVar19 = (this->ReleaseBuffer).ReadIndex;
      if (iVar18 < iVar19) {
        iVar24 = *piVar1 - iVar19;
      }
      else {
        iVar24 = -iVar19;
      }
      iVar4 = (this->ReleaseBuffer).InternalBuffer.ArrayNum;
      iVar19 = iVar19 % iVar4;
      iVar20 = (this->ReleaseBuffer).WriteIndex - iVar19;
      (this->ReleaseBuffer).ReadIndex = iVar19;
      local_res10 = iVar20 + iVar4;
      if (iVar19 <= iVar18) {
        local_res10 = iVar20;
      }
      if (iVar24 + iVar18 < local_res10) {
        local_res10 = iVar24 + iVar18;
      }
      if (local_res10 == 0) {
        local_res10 = 0;
      }
      else {
        _Src = (this->ReleaseBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar19 * 2;
        _Dst = pFVar32;
        iVar24 = local_res10;
        if (iVar18 < iVar19) {
          _Size = (longlong)(iVar4 - iVar19) * 2;
          memcpy(pFVar32,_Src,_Size);
          _Src = (this->ReleaseBuffer).InternalBuffer.AllocatorInstance.Data;
          _Dst = pFVar32 + _Size;
          iVar24 = local_res10 - (iVar4 - iVar19);
        }
        memcpy(_Dst,_Src,(longlong)iVar24 * 2);
        piVar34 = &(this->ReleaseBuffer).ReadIndex;
        *piVar34 = *piVar34 + local_res10;
      }
      uVar15 = _tls_index;
      uVar26 = (ulonglong)_tls_index;
      local_120 = pFVar32 + (longlong)local_res10 * 2;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar22 = IConsoleManager::Get();
        SilenceDetectionThresholdCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"voice.SilenceDetectionThreshold",1);
        _Init_thread_footer(&::_TSS0);
      }
      if ((SilenceDetectionThresholdCVar == (IConsoleVariable *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("SilenceDetectionThresholdCVar",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                              ,0x1b6,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_140 = (float)(**(code **)(*(longlong *)SilenceDetectionThresholdCVar + 0xd0))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar22 = IConsoleManager::Get();
        NoiseGateThresholdCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"voice.MicNoiseGateThreshold",1);
        _Init_thread_footer(&::_TSS1);
      }
      if ((NoiseGateThresholdCVar == (IConsoleVariable *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("NoiseGateThresholdCVar",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                              ,0x1ba,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_13c = (float)(**(code **)(*(longlong *)NoiseGateThresholdCVar + 0xd0))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar15 * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        pIVar22 = IConsoleManager::Get();
        NoiseGateAttackTimeCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"voice.MicNoiseAttackTime",1);
        _Init_thread_footer(&::_TSS2);
      }
      if ((NoiseGateAttackTimeCVar == (IConsoleVariable *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("NoiseGateAttackTimeCVar",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                              ,0x1be,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_138 = (float)(**(code **)(*(longlong *)NoiseGateAttackTimeCVar + 0xd0))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) <
           ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        pIVar22 = IConsoleManager::Get();
        NoiseGateReleaseTimeCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"voice.MicNoiseReleaseTime",1);
        _Init_thread_footer(&::_TSS3);
      }
      if ((NoiseGateReleaseTimeCVar == (IConsoleVariable *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("NoiseGateReleaseTimeCVar",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                              ,0x1c2,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_134 = (float)(**(code **)(*(longlong *)NoiseGateReleaseTimeCVar + 0xd0))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar15 * 8) +
                   0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        pIVar22 = IConsoleManager::Get();
        MicInputGainCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"voice.MicInputGain",1);
        _Init_thread_footer(&::_TSS4);
      }
      if ((MicInputGainCVar == (IConsoleVariable *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("MicInputGainCVar",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                              ,0x1c6,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar36 = (float)(**(code **)(*(longlong *)MicInputGainCVar + 0xd0))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar15 * 8) +
                   0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
        pIVar22 = IConsoleManager::Get();
        MicStereoBiasCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"voice.MicStereoBias",1);
        _Init_thread_footer(&::_TSS5);
      }
      if ((MicStereoBiasCVar == (IConsoleVariable *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("MicStereoBiasCVar",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                              ,0x1ca,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar37 = (float)(**(code **)(*(longlong *)MicStereoBiasCVar + 0xd0))();
      fVar14 = __real_30800000;
      fVar41 = __real_38000000;
      fVar38 = __real_3fa2f983;
      fVar13 = __real_46fffe00;
      fVar12 = __real_c0000000;
      fVar11 = __real_40000000;
      fVar10 = __real_38000100;
      fVar40 = __real_3f800000;
      if (__real_3f800000 <= fVar37) {
        fVar37 = __real_3f800000;
      }
      iVar18 = 0;
      if (fVar37 <= __real_bf800000) {
        fVar37 = __real_bf800000;
      }
      this->CurrentSampleStart = this->CachedSampleStart;
      uVar21 = local_res18[0] >> 1;
      bVar16 = false;
      fVar39 = fVar37 * __real_3f490fdb + __real_4016cbe4;
      fVar37 = fVar37 * __real_3f490fdb + __real_3f490fdb;
      fVar39 = (fVar38 - (float)((uint)fVar39 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                         __real_3ecf817a) * fVar39;
      if (fVar40 <= fVar39) {
        fVar39 = fVar40;
      }
      if (fVar39 <= 0.0) {
        fVar39 = 0.0;
      }
      fVar37 = (fVar38 - (float)((uint)fVar37 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                         __real_3ecf817a) * fVar37;
      if (fVar40 <= fVar37) {
        fVar37 = fVar40;
      }
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      fVar38 = fVar39;
      if (fVar39 <= fVar37) {
        fVar38 = fVar37;
      }
      fVar37 = (fVar40 / fVar38) * fVar37;
      fVar39 = (fVar40 / fVar38) * fVar39;
      if (uVar21 != 0) {
        do {
          pFVar32 = local_128;
          uVar26 = (ulonglong)(uint)this->NumInputChannels;
          sVar31 = 0;
          if (0 < this->NumInputChannels) {
            psVar23 = (short *)((longlong)local_128 + (longlong)iVar18 * 2);
            sVar31 = 0;
            do {
              sVar31 = sVar31 + *psVar23;
              psVar23 = psVar23 + 1;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          TVar5 = (this->MicLevelDetector).Mode;
          fVar40 = (float)(int)sVar31;
          fVar41 = fVar40 * fVar41;
          if (TVar5 == MeanSquared) {
            fVar41 = fVar40 * fVar40 * (this->MicLevelDetector).AnalysisFilterBeta * fVar14 +
                     (this->MicLevelDetector).AnalysisFilterAlpha *
                     (this->MicLevelDetector).AnalysisValue;
            fVar40 = fVar41;
LAB_14ec4084d:
            (this->MicLevelDetector).AnalysisValue = fVar40;
          }
          else {
            if (TVar5 == RootMeanSquared) {
              fVar40 = fVar40 * fVar40 * (this->MicLevelDetector).AnalysisFilterBeta * fVar14 +
                       (this->MicLevelDetector).AnalysisFilterAlpha *
                       (this->MicLevelDetector).AnalysisValue;
              fVar41 = SQRT(fVar40);
              goto LAB_14ec4084d;
            }
            if (TVar5 == Peak) {
              fVar41 = (float)((uint)fVar41 & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            else {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                                  ,0x1bf,L"");
              if (bVar17) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
          }
          fVar40 = (this->MicLevelDetector).Value - fVar41;
          if (__real_00000000 < fVar40) {
            fVar38 = *(float *)((longlong)&(this->MicLevelDetector)._padding_ + 4);
          }
          else {
            fVar38 = *(float *)((longlong)&(this->MicLevelDetector)._padding_ + 4);
          }
          fVar41 = fVar40 * fVar38 + fVar41;
          (this->MicLevelDetector).Value = fVar41;
          iVar19 = (this->LookaheadBuffer).InternalBuffer.ArrayNum;
          piVar34 = (int *)(longlong)iVar19;
          uVar29 = (this->LookaheadBuffer).WriteIndex % iVar19;
          (this->LookaheadBuffer).WriteIndex = uVar29 + 1;
          uVar25 = 0;
          if ((int)uVar29 < iVar19) {
            uVar25 = ~uVar29 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             piVar27 = piVar34, bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(short *)((this->LookaheadBuffer).InternalBuffer.AllocatorInstance.Data +
                    (longlong)(int)uVar29 * 2) = sVar31;
          iVar19 = (this->LookaheadBuffer).InternalBuffer.ArrayNum;
          piVar34 = (int *)(longlong)iVar19;
          uVar29 = (this->LookaheadBuffer).ReadIndex % iVar19;
          (this->LookaheadBuffer).ReadIndex = uVar29 + 1;
          uVar25 = 0;
          if ((int)uVar29 < iVar19) {
            uVar25 = ~uVar29 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             piVar27 = piVar34, bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this->bIsMicActive = local_140 < fVar41;
          if (fVar41 <= local_13c) {
            if (this->bWasMicAboveNoiseGateThreshold != false) {
              if ((this->NoiseGateAttenuator).bIsInit == false) {
                iVar19 = (int)(local_134 * (this->NoiseGateAttenuator).SampleRate);
                (this->NoiseGateAttenuator).DurationTicks = iVar19;
                (this->NoiseGateAttenuator).CurrentTick = 0;
                if (iVar19 != 0) {
                  fVar40 = (this->NoiseGateAttenuator).CurrentValue;
                  fVar38 = (float)((uint)fVar40 ^ __xmm_80000000800000008000000080000000);
                  goto LAB_14ec40a5a;
                }
                (this->NoiseGateAttenuator).CurrentValue = 0.0;
              }
              else {
                (this->NoiseGateAttenuator).bIsInit = false;
                (this->NoiseGateAttenuator).DurationTicks = 0;
                (this->NoiseGateAttenuator).CurrentTick = 0;
                (this->NoiseGateAttenuator).CurrentValue = 0.0;
              }
            }
          }
          else if (this->bWasMicAboveNoiseGateThreshold == false) {
            if ((this->NoiseGateAttenuator).bIsInit == false) {
              iVar19 = (int)(local_138 * (this->NoiseGateAttenuator).SampleRate);
              (this->NoiseGateAttenuator).DurationTicks = iVar19;
              (this->NoiseGateAttenuator).CurrentTick = 0;
              if (iVar19 == 0) {
                (this->NoiseGateAttenuator).CurrentValue = 1.0;
              }
              else {
                fVar40 = (this->NoiseGateAttenuator).CurrentValue;
                fVar38 = __real_3f800000 - fVar40;
LAB_14ec40a5a:
                (this->NoiseGateAttenuator).StartValue = fVar40;
                (this->NoiseGateAttenuator).DeltaValue = fVar38;
              }
            }
            else {
              (this->NoiseGateAttenuator).bIsInit = false;
              (this->NoiseGateAttenuator).DurationTicks = 0;
              (this->NoiseGateAttenuator).CurrentTick = 0;
              (this->NoiseGateAttenuator).CurrentValue = 1.0;
            }
          }
          this->bWasMicAboveNoiseGateThreshold = local_13c < fVar41;
          if (this->bIsMicActive == false) {
            bVar16 = true;
          }
          else {
            iVar19 = (this->NoiseGateAttenuator).DurationTicks;
            iVar24 = (this->NoiseGateAttenuator).CurrentTick;
            if (bVar16) {
              if (iVar24 < iVar19) {
                (this->NoiseGateAttenuator).CurrentTick = iVar24 + 1;
                fVar40 = ((float)iVar24 * (this->NoiseGateAttenuator).DeltaValue) / (float)iVar19 +
                         (this->NoiseGateAttenuator).StartValue;
                (this->NoiseGateAttenuator).CurrentValue = fVar40;
              }
              else {
                fVar40 = (this->NoiseGateAttenuator).CurrentValue;
              }
              iVar19 = this->NumInputChannels;
              uVar25 = 0;
              if (0 < iVar19) {
                psVar23 = (short *)((longlong)pFVar32 + (longlong)iVar18 * 2);
                do {
                  fVar38 = fVar37;
                  if ((uVar25 & 1) == 0) {
                    fVar38 = fVar39;
                  }
                  uVar25 = uVar25 + 1;
                  fVar38 = (float)(int)*psVar23 * fVar10 * fVar40 * fVar36 * fVar38;
                  if (fVar11 <= fVar38) {
                    fVar38 = fVar11;
                  }
                  if (fVar38 <= fVar12) {
                    fVar38 = fVar12;
                  }
                  *psVar23 = (short)(int)(fVar38 * fVar13);
                  psVar23 = psVar23 + 1;
                  iVar19 = this->NumInputChannels;
                } while ((int)uVar25 < iVar19);
              }
              lVar35 = (longlong)iVar19;
              if (0 < iVar19) {
                puVar33 = (undefined2 *)((longlong)pFVar32 + (longlong)iVar18 * 2);
                do {
                  iVar19 = (this->ReleaseBuffer).InternalBuffer.ArrayNum;
                  piVar34 = (int *)(longlong)iVar19;
                  uVar29 = (this->ReleaseBuffer).WriteIndex % iVar19;
                  (this->ReleaseBuffer).WriteIndex = uVar29;
                  uVar3 = *puVar33;
                  (this->ReleaseBuffer).WriteIndex = uVar29 + 1;
                  uVar25 = 0;
                  if ((int)uVar29 < iVar19) {
                    uVar25 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), piVar27 = piVar34, bVar17)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  puVar33 = puVar33 + 1;
                  *(undefined2 *)
                   ((this->ReleaseBuffer).InternalBuffer.AllocatorInstance.Data +
                   (longlong)(int)uVar29 * 2) = uVar3;
                  lVar35 = lVar35 + -1;
                } while (lVar35 != 0);
              }
              if (this->bSampleStartCached == false) {
                this->CachedSampleStart = this->SampleCounter;
                this->bSampleStartCached = true;
              }
            }
            else {
              if (iVar24 < iVar19) {
                (this->NoiseGateAttenuator).CurrentTick = iVar24 + 1;
                fVar40 = ((float)iVar24 * (this->NoiseGateAttenuator).DeltaValue) / (float)iVar19 +
                         (this->NoiseGateAttenuator).StartValue;
                (this->NoiseGateAttenuator).CurrentValue = fVar40;
              }
              else {
                fVar40 = (this->NoiseGateAttenuator).CurrentValue;
              }
              iVar19 = this->NumInputChannels;
              uVar25 = 0;
              if (0 < iVar19) {
                psVar23 = (short *)((longlong)pFVar32 + (longlong)iVar18 * 2);
                do {
                  fVar38 = fVar37;
                  if ((uVar25 & 1) == 0) {
                    fVar38 = fVar39;
                  }
                  uVar25 = uVar25 + 1;
                  fVar38 = (float)(int)*psVar23 * fVar10 * fVar40 * fVar36 * fVar38;
                  if (fVar11 <= fVar38) {
                    fVar38 = fVar11;
                  }
                  if (fVar38 <= fVar12) {
                    fVar38 = fVar12;
                  }
                  *psVar23 = (short)(int)(fVar38 * fVar13);
                  psVar23 = psVar23 + 1;
                  iVar19 = this->NumInputChannels;
                } while ((int)uVar25 < iVar19);
              }
              memcpy(local_120 + (longlong)iVar18 * 2,
                     (void *)((longlong)pFVar32 + (longlong)iVar18 * 2),(longlong)iVar19 * 2);
              local_res10 = local_res10 + this->NumInputChannels;
            }
          }
          this->SampleCounter = this->SampleCounter + 1;
          iVar18 = iVar18 + this->NumInputChannels;
          fVar41 = __real_38000000;
        } while (iVar18 < (int)uVar21);
      }
      local_128 = local_120;
      iVar18 = 0;
      local_120 = (FScriptContainerElement *)local_108;
      local_128 = local_128 + (ulonglong)uVar21 * 2;
      uVar21 = local_res20[0] >> 1;
      pFVar32 = (FScriptContainerElement *)local_108;
      if (uVar21 != 0) {
        do {
          uVar26 = (ulonglong)(uint)this->NumInputChannels;
          sVar31 = 0;
          if (0 < this->NumInputChannels) {
            psVar23 = (short *)((longlong)pFVar32 + (longlong)iVar18 * 2);
            sVar31 = 0;
            do {
              sVar31 = sVar31 + *psVar23;
              psVar23 = psVar23 + 1;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          TVar5 = (this->MicLevelDetector).Mode;
          fVar40 = (float)(int)sVar31;
          fVar41 = fVar40 * fVar41;
          if (TVar5 == MeanSquared) {
            fVar40 = (this->MicLevelDetector).AnalysisFilterBeta * fVar14 * fVar40 * fVar40 +
                     (this->MicLevelDetector).AnalysisFilterAlpha *
                     (this->MicLevelDetector).AnalysisValue;
            fVar41 = fVar40;
LAB_14ec40e19:
            (this->MicLevelDetector).AnalysisValue = fVar40;
          }
          else {
            if (TVar5 == RootMeanSquared) {
              fVar40 = (this->MicLevelDetector).AnalysisFilterBeta * fVar14 * fVar40 * fVar40 +
                       (this->MicLevelDetector).AnalysisFilterAlpha *
                       (this->MicLevelDetector).AnalysisValue;
              fVar41 = SQRT(fVar40);
              goto LAB_14ec40e19;
            }
            if (TVar5 == Peak) {
              fVar41 = (float)((uint)fVar41 & __xmm_7fffffff7fffffff7fffffff7fffffff);
            }
            else {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                                  ,0x1bf,L"");
              if (bVar17) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
          }
          fVar40 = (this->MicLevelDetector).Value - fVar41;
          if (__real_00000000 < fVar40) {
            fVar38 = *(float *)((longlong)&(this->MicLevelDetector)._padding_ + 4);
          }
          else {
            fVar38 = *(float *)((longlong)&(this->MicLevelDetector)._padding_ + 4);
          }
          fVar41 = fVar40 * fVar38 + fVar41;
          (this->MicLevelDetector).Value = fVar41;
          iVar19 = (this->LookaheadBuffer).InternalBuffer.ArrayNum;
          piVar34 = (int *)(longlong)iVar19;
          uVar29 = (this->LookaheadBuffer).WriteIndex % iVar19;
          (this->LookaheadBuffer).WriteIndex = uVar29 + 1;
          uVar25 = 0;
          if ((int)uVar29 < iVar19) {
            uVar25 = ~uVar29 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             piVar27 = piVar34, bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(short *)((this->LookaheadBuffer).InternalBuffer.AllocatorInstance.Data +
                    (longlong)(int)uVar29 * 2) = sVar31;
          iVar19 = (this->LookaheadBuffer).InternalBuffer.ArrayNum;
          piVar34 = (int *)(longlong)iVar19;
          uVar29 = (this->LookaheadBuffer).ReadIndex % iVar19;
          (this->LookaheadBuffer).ReadIndex = uVar29 + 1;
          uVar25 = 0;
          if ((int)uVar29 < iVar19) {
            uVar25 = ~uVar29 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             piVar27 = piVar34, bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this->bIsMicActive = local_140 < fVar41;
          if (fVar41 <= local_13c) {
            if (this->bWasMicAboveNoiseGateThreshold != false) {
              if ((this->NoiseGateAttenuator).bIsInit == false) {
                iVar19 = (int)(local_134 * (this->NoiseGateAttenuator).SampleRate);
                (this->NoiseGateAttenuator).DurationTicks = iVar19;
                (this->NoiseGateAttenuator).CurrentTick = 0;
                if (iVar19 != 0) {
                  fVar40 = (this->NoiseGateAttenuator).CurrentValue;
                  fVar38 = (float)((uint)fVar40 ^ __xmm_80000000800000008000000080000000);
                  goto LAB_14ec41026;
                }
                (this->NoiseGateAttenuator).CurrentValue = 0.0;
              }
              else {
                (this->NoiseGateAttenuator).bIsInit = false;
                (this->NoiseGateAttenuator).DurationTicks = 0;
                (this->NoiseGateAttenuator).CurrentTick = 0;
                (this->NoiseGateAttenuator).CurrentValue = 0.0;
              }
            }
          }
          else if (this->bWasMicAboveNoiseGateThreshold == false) {
            if ((this->NoiseGateAttenuator).bIsInit == false) {
              iVar19 = (int)(local_138 * (this->NoiseGateAttenuator).SampleRate);
              (this->NoiseGateAttenuator).DurationTicks = iVar19;
              (this->NoiseGateAttenuator).CurrentTick = 0;
              if (iVar19 == 0) {
                (this->NoiseGateAttenuator).CurrentValue = 1.0;
              }
              else {
                fVar40 = (this->NoiseGateAttenuator).CurrentValue;
                fVar38 = __real_3f800000 - fVar40;
LAB_14ec41026:
                (this->NoiseGateAttenuator).StartValue = fVar40;
                (this->NoiseGateAttenuator).DeltaValue = fVar38;
              }
            }
            else {
              (this->NoiseGateAttenuator).bIsInit = false;
              (this->NoiseGateAttenuator).DurationTicks = 0;
              (this->NoiseGateAttenuator).CurrentTick = 0;
              (this->NoiseGateAttenuator).CurrentValue = 1.0;
            }
          }
          this->bWasMicAboveNoiseGateThreshold = local_13c < fVar41;
          if (this->bIsMicActive == false) {
            bVar16 = true;
          }
          else {
            iVar19 = (this->NoiseGateAttenuator).DurationTicks;
            iVar24 = (this->NoiseGateAttenuator).CurrentTick;
            if (bVar16) {
              if (iVar24 < iVar19) {
                (this->NoiseGateAttenuator).CurrentTick = iVar24 + 1;
                fVar40 = ((float)iVar24 * (this->NoiseGateAttenuator).DeltaValue) / (float)iVar19 +
                         (this->NoiseGateAttenuator).StartValue;
                (this->NoiseGateAttenuator).CurrentValue = fVar40;
              }
              else {
                fVar40 = (this->NoiseGateAttenuator).CurrentValue;
              }
              iVar19 = this->NumInputChannels;
              uVar25 = 0;
              if (0 < iVar19) {
                psVar23 = (short *)((longlong)pFVar32 + (longlong)iVar18 * 2);
                do {
                  fVar38 = fVar37;
                  if ((uVar25 & 1) == 0) {
                    fVar38 = fVar39;
                  }
                  uVar25 = uVar25 + 1;
                  fVar38 = (float)(int)*psVar23 * fVar10 * fVar40 * fVar36 * fVar38;
                  if (fVar11 <= fVar38) {
                    fVar38 = fVar11;
                  }
                  if (fVar38 <= fVar12) {
                    fVar38 = fVar12;
                  }
                  *psVar23 = (short)(int)(fVar38 * fVar13);
                  psVar23 = psVar23 + 1;
                  iVar19 = this->NumInputChannels;
                } while ((int)uVar25 < iVar19);
              }
              lVar35 = (longlong)iVar19;
              if (0 < iVar19) {
                puVar33 = (undefined2 *)((longlong)pFVar32 + (longlong)iVar18 * 2);
                do {
                  iVar19 = (this->ReleaseBuffer).InternalBuffer.ArrayNum;
                  piVar34 = (int *)(longlong)iVar19;
                  uVar29 = (this->ReleaseBuffer).WriteIndex % iVar19;
                  (this->ReleaseBuffer).WriteIndex = uVar29;
                  uVar3 = *puVar33;
                  (this->ReleaseBuffer).WriteIndex = uVar29 + 1;
                  uVar25 = 0;
                  if ((int)uVar29 < iVar19) {
                    uVar25 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), piVar27 = piVar34, bVar17)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  puVar33 = puVar33 + 1;
                  *(undefined2 *)
                   ((this->ReleaseBuffer).InternalBuffer.AllocatorInstance.Data +
                   (longlong)(int)uVar29 * 2) = uVar3;
                  lVar35 = lVar35 + -1;
                  pFVar32 = local_120;
                } while (lVar35 != 0);
              }
              if (this->bSampleStartCached == false) {
                this->CachedSampleStart = this->SampleCounter;
                this->bSampleStartCached = true;
              }
            }
            else {
              if (iVar24 < iVar19) {
                (this->NoiseGateAttenuator).CurrentTick = iVar24 + 1;
                fVar40 = ((float)iVar24 * (this->NoiseGateAttenuator).DeltaValue) / (float)iVar19 +
                         (this->NoiseGateAttenuator).StartValue;
                (this->NoiseGateAttenuator).CurrentValue = fVar40;
              }
              else {
                fVar40 = (this->NoiseGateAttenuator).CurrentValue;
              }
              iVar19 = this->NumInputChannels;
              uVar25 = 0;
              if (0 < iVar19) {
                psVar23 = (short *)((longlong)pFVar32 + (longlong)iVar18 * 2);
                do {
                  fVar38 = fVar37;
                  if ((uVar25 & 1) == 0) {
                    fVar38 = fVar39;
                  }
                  uVar25 = uVar25 + 1;
                  fVar38 = (float)(int)*psVar23 * fVar10 * fVar40 * fVar36 * fVar38;
                  if (fVar11 <= fVar38) {
                    fVar38 = fVar11;
                  }
                  if (fVar38 <= fVar12) {
                    fVar38 = fVar12;
                  }
                  *psVar23 = (short)(int)(fVar38 * fVar13);
                  psVar23 = psVar23 + 1;
                  iVar19 = this->NumInputChannels;
                } while ((int)uVar25 < iVar19);
              }
              memcpy(local_128 + (longlong)iVar18 * 2,
                     (void *)((longlong)pFVar32 + (longlong)iVar18 * 2),(longlong)iVar19 * 2);
              local_res10 = local_res10 + this->NumInputChannels;
            }
          }
          this->SampleCounter = this->SampleCounter + 1;
          iVar18 = iVar18 + this->NumInputChannels;
          fVar41 = __real_38000000;
        } while (iVar18 < (int)uVar21);
      }
      if (this->bSampleStartCached == false) {
        this->CachedSampleStart = this->SampleCounter;
      }
      pTVar2 = &this->UncompressedAudioBuffer;
      piVar34 = &(this->UncompressedAudioBuffer).ArrayNum;
      this->bSampleStartCached = false;
      iVar18 = *piVar34;
      puVar30 = (uint *)(longlong)iVar18;
      uVar21 = local_130 + local_res10 * 2;
      if (iVar18 < (int)uVar21) {
        piVar27 = &(this->UncompressedAudioBuffer).ArrayMax;
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,uVar21 - iVar18,&pTVar2->AllocatorInstance,piVar34,piVar27);
        memset((pTVar2->AllocatorInstance).Data + iVar19,0,(longlong)(int)(uVar21 - iVar18));
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        if ((int)uVar21 < iVar18) {
          uVar25 = iVar18 - uVar21;
          if ((int)(uVar21 | uVar25) < 0) {
            piVar27 = (int *)(longlong)(int)uVar25;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            puVar42 = puVar30;
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (uVar25 != 0) {
            pFVar32 = (pTVar2->AllocatorInstance).Data + (int)uVar21;
            iVar18 = ((this->UncompressedAudioBuffer).ArrayNum - uVar25) - uVar21;
            if (iVar18 != 0) {
              memmove(pFVar32,pFVar32 + (int)uVar25,(longlong)iVar18);
            }
            piVar34 = &(this->UncompressedAudioBuffer).ArrayNum;
            *piVar34 = *piVar34 - uVar25;
          }
        }
      }
      pIVar6 = this->CV->VoiceCaptureBuffer8;
      (**(code **)((longlong)*pIVar6 + 0x58))
                (pIVar6,local_100,local_110,local_108,local_114,piVar27,puVar42);
      pFVar7 = this->CV;
      pFVar7->NextCaptureOffset =
           (pFVar7->NextCaptureOffset + local_res18[0]) %
           (pFVar7->VoiceCaptureBufferCaps8).dwBufferBytes;
      pFVar7 = this->CV;
      pFVar7->NextCaptureOffset =
           (pFVar7->NextCaptureOffset + local_res20[0]) %
           (pFVar7->VoiceCaptureBufferCaps8).dwBufferBytes;
      this->VoiceCaptureState = (local_res10 < 1) + Ok;
      QueryPerformanceCounter(local_f8);
      dVar9 = (double)local_f8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (6 < (byte)LogVoiceCapture._0_1_) {
        switch(this->VoiceCaptureState) {
        case UnInitialized:
          break;
        case NotCapturing:
          break;
        case Ok:
          break;
        case NoData:
          break;
        case Stopping:
          break;
        case BufferTooSmall:
          break;
        case Error:
        }
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      }
      this->LastCaptureTime = dVar9;
      return;
    }
    if ((byte)LogVoiceCapture._0_1_ < 3) goto LAB_14ec415d2;
    pFVar28 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar28,(FLogCategoryBase *)&LogVoiceCapture);
LAB_14ec415d2:
  this->VoiceCaptureState = Error;
  return;
}

// Shutdown @ 14ec41c40

void __thiscall FVoiceCaptureWindows::Shutdown(FVoiceCaptureWindows *this)

{
  (**(code **)(this->_padding_ + 0x20))();
  FVoiceCaptureWindowsVars::Reset(this->CV);
  this->VoiceCaptureState = UnInitialized;
  return;
}

// Start @ 14ec41cb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceCaptureWindows::Start(FVoiceCaptureWindows *this)

{
  IDirectSoundCaptureBuffer8 *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (this->VoiceCaptureState == UnInitialized) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceCaptureState != EVoiceCaptureState::UnInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                       ,0x132,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = this->CV->VoiceCaptureBuffer8;
  if (pIVar1 == (IDirectSoundCaptureBuffer8 *)0x0) {
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
      return false;
    }
  }
  else {
    iVar5 = (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,1);
    if (-1 < iVar5) {
      this->VoiceCaptureState = NoData;
      return true;
    }
    if (2 < (byte)LogVoiceCapture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    }
  }
  return false;
}

// Stop @ 14ec41d70

void __thiscall FVoiceCaptureWindows::Stop(FVoiceCaptureWindows *this)

{
  IDirectSoundCaptureBuffer8 *pIVar1;
  
  pIVar1 = this->CV->VoiceCaptureBuffer8;
  if (((pIVar1 != (IDirectSoundCaptureBuffer8 *)0x0) && (this->VoiceCaptureState != Stopping)) &&
     (this->VoiceCaptureState != NotCapturing)) {
    (**(code **)((longlong)*pIVar1 + 0x50))();
    this->VoiceCaptureState = Stopping;
  }
  return;
}

// Tick @ 14ec41dc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceCaptureWindows::Tick(FVoiceCaptureWindows *this,float param_1)

{
  int *piVar1;
  int iVar2;
  HANDLE hHandle;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  DWORD DVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FVoiceCaptureWindows::Tick(float)_::_2_::FStat_STAT_FVoiceCaptureWindows_Tick>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FVoiceCaptureWindows_Tick ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FVoiceCaptureWindows::Tick(float)_::_2_::FStat_STAT_FVoiceCaptureWindows_Tick>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FVoiceCaptureWindows_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FVoiceCaptureWindows_Tick,*pFVar7,
                   L"STAT_FVoiceCaptureWindows_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FVoiceCaptureWindows_Tick;
  if (StatPtr_STAT_FVoiceCaptureWindows_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FVoiceCaptureWindows::Tick(float)_::_2_::FStat_STAT_FVoiceCaptureWindows_Tick>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_FVoiceCaptureWindows_Tick");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FVoiceCaptureWindows::Tick(float)_::_2_::FStat_STAT_FVoiceCaptureWindows_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FVoiceCaptureWindows_Tick,
                         *pFVar7,L"STAT_FVoiceCaptureWindows_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\Windows\\VoiceCaptureWindows.cpp"
                   ,0x32a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14ec41f45;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14ec41f45:
  iVar2 = (int)this->_padding_;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    ProcessData((FVoiceCaptureWindows *)&this[-1].LookaheadBuffer);
    hHandle = *(HANDLE *)(this->_padding_ + 0x80);
    if (hHandle != (HANDLE)0xffffffffffffffff) {
      DVar6 = WaitForSingleObject(hHandle,0);
      if (DVar6 == 0) {
        if (5 < (byte)LogVoiceCapture._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
        }
        ResetEvent(*(HANDLE *)(this->_padding_ + 0x80));
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        *(undefined4 *)&this->_padding_ = 1;
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar2);
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  return true;
}

