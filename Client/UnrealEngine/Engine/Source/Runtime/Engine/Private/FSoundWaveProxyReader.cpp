// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// FSoundWaveProxyReader @ 148710860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSoundWaveProxyReader * __thiscall
FSoundWaveProxyReader::FSoundWaveProxyReader
          (FSoundWaveProxyReader *this,TSharedRef<FSoundWaveProxy,1> *param_1,FSettings *param_2)

{
  int *piVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSoundWaveProxy *pFVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  EDecodeResult EVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_148 [32];
  FString local_118;
  FString local_108;
  TStringBuilderBase<wchar_t> local_f8;
  wchar_t local_d8 [64];
  ulonglong local_58 [6];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_148;
  (this->WaveProxy).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WaveProxy).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar13 = param_2->StartTimeInSeconds;
  bVar6 = param_2->bIsLooping;
  uVar5 = *(undefined3 *)&param_2->field_0x9;
  fVar14 = param_2->LoopStartTimeInSeconds;
  piVar1 = &(this->DecoderOutput).InternalBuffer.ArrayNum;
  piVar2 = &(this->DecoderOutput).InternalBuffer.ArrayMax;
  EVar12 = Fail;
  (this->Settings).MaxDecodeSizeInFrames = param_2->MaxDecodeSizeInFrames;
  (this->Settings).StartTimeInSeconds = fVar13;
  (this->Settings).bIsLooping = bVar6;
  *(undefined3 *)&(this->Settings).field_0x9 = uVar5;
  (this->Settings).LoopStartTimeInSeconds = fVar14;
  bVar6 = param_2->bMaintainAudioSync;
  uVar5 = *(undefined3 *)&param_2->field_0x15;
  (this->Settings).LoopDurationInSeconds = param_2->LoopDurationInSeconds;
  (this->Settings).bMaintainAudioSync = bVar6;
  *(undefined3 *)&(this->Settings).field_0x15 = uVar5;
  this->SampleRate = 0.0;
  this->NumChannels = 0;
  this->DecodeResult = MoreDataRemaining;
  this->NumFramesInWave = 0;
  this->DurationInSeconds = 0.0;
  this->MaxLoopStartTimeInSeconds = 0.0;
  this->bIsDecoderValid = false;
  this->bFallbackSeekMethodWarningLogged = false;
  (this->CompressedAudioInfo).Ptr = (ICompressedAudioInfo *)0x0;
  (this->DecoderOutput).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NumDecodeSamplesToDiscard = 0;
  this->CurrentFrameIndex = 0;
  this->LoopStartFrameIndex = 0;
  this->LoopEndFrameIndex = -1;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->DecoderOutput).ReadCounter.Counter = 0;
  (this->DecoderOutput).WriteCounter.Counter = 0;
  (this->DecoderOutput).Capacity = 1;
  LOCK();
  (this->DecoderOutput).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->DecoderOutput).WriteCounter.Counter = 0;
  UNLOCK();
  iVar7 = *piVar2;
  *piVar1 = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->DecoderOutput,0,piVar2);
  }
  uVar8 = (this->DecoderOutput).Capacity;
  iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar8,(ForAnyElementType *)&this->DecoderOutput,piVar1,piVar2);
  memset((this->DecoderOutput).InternalBuffer.AllocatorInstance.Data + (longlong)iVar7 * 4,0,
         (longlong)(int)uVar8 << 2);
  (this->ResidualBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResidualBuffer).ArrayNum = 0;
  (this->ResidualBuffer).ArrayMax = 0;
  (this->SampleConversionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleConversionBuffer).ArrayNum = 0;
  (this->SampleConversionBuffer).ArrayMax = 0;
  pFVar4 = (this->WaveProxy).Object;
  this->bIsFirstDecode = true;
  this->bPreviousIsStreaming = true;
  this->NumFramesPerDecode = 1;
  fVar13 = FSoundWaveProxy::GetSampleRate(pFVar4);
  pFVar4 = (this->WaveProxy).Object;
  this->SampleRate = fVar13;
  uVar8 = FSoundWaveProxy::GetNumChannels(pFVar4);
  pFVar4 = (this->WaveProxy).Object;
  this->NumChannels = uVar8;
  iVar7 = FSoundWaveProxy::GetNumFrames(pFVar4);
  pFVar4 = (this->WaveProxy).Object;
  this->NumFramesInWave = iVar7;
  fVar13 = FSoundWaveProxy::GetDuration(pFVar4);
  this->DurationInSeconds = fVar13;
  fVar13 = fVar13 - __real_3d4ccccd;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  this->MaxLoopStartTimeInSeconds = fVar13;
  if (5 < (byte)LogAudioTiming._0_1_) {
    pFVar9 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
    pFVar10 = ::FName::ToString(pFVar9,&local_118);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    bVar6 = Audio::MatchesLogFilter(pwVar11);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pFVar9 = FSoundWaveProxy::GetFName(param_1->Object);
      ::FName::ToString(pFVar9,&local_108);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
  }
  fVar13 = (this->Settings).StartTimeInSeconds;
  if (this->DurationInSeconds <= fVar13) {
    fVar13 = this->DurationInSeconds;
  }
  fVar14 = (this->Settings).LoopStartTimeInSeconds;
  fVar15 = this->MaxLoopStartTimeInSeconds;
  if (fVar14 <= this->MaxLoopStartTimeInSeconds) {
    fVar15 = fVar14;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  (this->Settings).StartTimeInSeconds = fVar13;
  fVar13 = (this->Settings).LoopDurationInSeconds;
  (this->Settings).LoopStartTimeInSeconds = fVar15;
  fVar14 = __real_4b488020;
  if ((0.0 < fVar13) && (fVar14 = fVar13, fVar13 <= __real_3d4ccccd)) {
    fVar14 = __real_3d4ccccd;
  }
  (this->Settings).LoopDurationInSeconds = fVar14;
  this->CurrentFrameIndex = 0;
  UpdateLoopBoundaries(this);
  uVar8 = (this->Settings).MaxDecodeSizeInFrames;
  if (uVar8 < 0x80) {
    uVar8 = 0x80;
  }
  (this->Settings).MaxDecodeSizeInFrames = uVar8;
  bVar6 = InitializeDecoder(this,(this->Settings).StartTimeInSeconds);
  this->bIsDecoderValid = bVar6;
  if ((!bVar6) && (2 < (byte)LogAudio._0_1_)) {
    pFVar9 = FSoundWaveProxy::GetPackageName(param_1->Object);
    local_f8.Base = local_d8;
    local_f8.bIsDynamic = false;
    local_f8.bIsExternal = false;
    local_f8.CurPos = local_d8;
    local_f8.End = (wchar_t *)local_58;
    ::FName::AppendString(pFVar9,&local_f8);
    if (local_f8.End < local_f8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_f8,1);
    }
    *local_f8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f8);
  }
  if (this->bIsDecoderValid != false) {
    EVar12 = this->DecodeResult;
  }
  this->DecodeResult = EVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// CanProduceMoreAudio @ 1487292c0

bool __thiscall FSoundWaveProxyReader::CanProduceMoreAudio(FSoundWaveProxyReader *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = (this->DecoderOutput).ReadCounter.Counter;
  iVar2 = (this->DecoderOutput).WriteCounter.Counter;
  iVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar4 = iVar4 + (this->DecoderOutput).Capacity;
  }
  if ((this->bIsDecoderValid == false) || (this->DecodeResult != MoreDataRemaining)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((iVar4 == 0) && (!bVar3)) {
    return false;
  }
  return true;
}

// ClampLoopDuration @ 14872a110

float __thiscall FSoundWaveProxyReader::ClampLoopDuration(FSoundWaveProxyReader *this,float param_1)

{
  if (param_1 <= 0.0) {
    return __real_4b488020;
  }
  if (param_1 <= __real_3d4ccccd) {
    param_1 = __real_3d4ccccd;
  }
  return param_1;
}

// ClampLoopStartTime @ 14872a140

float __thiscall
FSoundWaveProxyReader::ClampLoopStartTime(FSoundWaveProxyReader *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->MaxLoopStartTimeInSeconds;
  if (param_1 <= this->MaxLoopStartTimeInSeconds) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// ConformDecodeSize @ 14872ce40

uint __cdecl FSoundWaveProxyReader::ConformDecodeSize(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xffffff80;
  uVar3 = 0x80;
  if (0x80 < uVar4) {
    uVar3 = uVar4;
  }
  if (uVar3 % uVar4 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ConformedDecodeSizeInFrames % QuantizedDecodeSizeInFrames) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3;
}

// Create @ 14872db00

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_> __cdecl
FSoundWaveProxyReader::Create(TSharedRef<FSoundWaveProxy,1> *param_1,FSettings *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  int iVar3;
  FName *pFVar4;
  FSoundWaveProxyReader *pFVar5;
  FSettings *in_R8;
  float fVar6;
  TSharedRef<FSoundWaveProxy,1> local_18;
  
  fVar6 = FSoundWaveProxy::GetSampleRate(*(FSoundWaveProxy **)param_2);
  if (0.0 < fVar6) {
    uVar2 = FSoundWaveProxy::GetNumChannels(*(FSoundWaveProxy **)param_2);
    if (uVar2 == 0) {
      if (2 < (byte)LogAudio._0_1_) {
        pFVar4 = FSoundWaveProxy::GetPackageName(*(FSoundWaveProxy **)param_2);
        ::FName::ToString(pFVar4,(FString *)&local_18);
        FSoundWaveProxy::GetNumChannels(*(FSoundWaveProxy **)param_2);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        goto LAB_14872db86;
      }
    }
    else {
      iVar3 = FSoundWaveProxy::GetNumFrames(*(FSoundWaveProxy **)param_2);
      if (iVar3 < 1) {
        if (2 < (byte)LogAudio._0_1_) {
          pFVar4 = FSoundWaveProxy::GetPackageName(*(FSoundWaveProxy **)param_2);
          ::FName::ToString(pFVar4,(FString *)&local_18);
          FSoundWaveProxy::GetNumFrames(*(FSoundWaveProxy **)param_2);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          goto LAB_14872db86;
        }
      }
      else {
        pFVar5 = ::operator_new(0xa8);
        if (pFVar5 != (FSoundWaveProxyReader *)0x0) {
          local_18.Object = *(FSoundWaveProxy **)param_2;
          local_18.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)&param_2->bIsLooping;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar5 = FSoundWaveProxyReader(pFVar5,&local_18,in_R8);
          goto LAB_14872db97;
        }
      }
    }
  }
  else if (2 < (byte)LogAudio._0_1_) {
    pFVar4 = FSoundWaveProxy::GetPackageName(*(FSoundWaveProxy **)param_2);
    ::FName::ToString(pFVar4,(FString *)&local_18);
    FSoundWaveProxy::GetSampleRate(*(FSoundWaveProxy **)param_2);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
LAB_14872db86:
    if (local_18.Object != (FSoundWaveProxy *)0x0) {
      FMemory::Free(local_18.Object);
    }
  }
  pFVar5 = (FSoundWaveProxyReader *)0x0;
LAB_14872db97:
  pTVar1 = *(TReferenceControllerBase<1> **)&param_2->bIsLooping;
  param_1->Object = (FSoundWaveProxy *)pFVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_>)
         (FSoundWaveProxyReader *)param_1;
}

// Decode @ 14872f520

EDecodeResult __thiscall FSoundWaveProxyReader::Decode(FSoundWaveProxyReader *this)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ICompressedAudioInfo *pIVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  EDecodeResult EVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int local_res10 [2];
  uint local_res18;
  uint local_res20;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<short_const_,int> local_58;
  
  if (((this->CompressedAudioInfo).Ptr == (ICompressedAudioInfo *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompressedAudioInfo.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                          ,0x232,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar13 = (*pcVar7)();
    return EVar13;
  }
  pFVar3 = (this->ResidualBuffer).AllocatorInstance.Data;
  iVar8 = (this->ResidualBuffer).ArrayNum * 2;
  uVar15 = this->NumFramesPerDecode;
  local_res18 = uVar15;
  if (this->bIsFirstDecode == false) {
    bVar10 = FSoundWaveProxy::IsStreaming((this->WaveProxy).Object);
    if (this->bPreviousIsStreaming != bVar10) {
      return Finished;
    }
  }
  else {
    this->bIsFirstDecode = false;
  }
  bVar10 = FSoundWaveProxy::IsStreaming((this->WaveProxy).Object);
  uVar9 = local_58._12_4_;
  local_res10[0] = 0;
  this->bPreviousIsStreaming = bVar10;
  while( true ) {
    if ((int)uVar15 < 1) {
      return MoreDataRemaining;
    }
    bVar10 = FSoundWaveProxy::IsStreaming((this->WaveProxy).Object);
    pIVar4 = (this->CompressedAudioInfo).Ptr;
    if (bVar10) {
      local_res10[0] = 0;
      cVar11 = (**(code **)(pIVar4->_padding_ + 0x78))(pIVar4,pFVar3,0,iVar8,local_res10);
    }
    else {
      local_res10[0] = iVar8;
      cVar11 = (**(code **)(pIVar4->_padding_ + 0x10))(pIVar4,pFVar3,0,iVar8);
    }
    cVar12 = (**(code **)(((this->CompressedAudioInfo).Ptr)->_padding_ + 0x68))();
    if (cVar12 != '\0') {
      return Fail;
    }
    if (local_res10[0] == 0) {
      return (cVar11 != '\0') + MoreDataRemaining;
    }
    pFVar5 = (this->SampleConversionBuffer).AllocatorInstance.Data;
    iVar16 = (int)((ulonglong)(longlong)local_res10[0] >> 1);
    uVar14 = (uint)((longlong)
                    ((ulonglong)(uint)(iVar16 >> 0x1f) << 0x20 |
                    (ulonglong)(longlong)local_res10[0] >> 1 & 0xffffffff) /
                   (longlong)this->NumChannels);
    if ((iVar16 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) break;
    pFVar6 = (this->ResidualBuffer).AllocatorInstance.Data;
    if ((iVar16 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar13 = (*pcVar7)();
      return EVar13;
    }
    local_68._12_4_ = uVar9;
    local_68.ArrayNum = iVar16;
    local_58._12_4_ = uStack_6c;
    local_58.ArrayNum = iVar16;
    local_68.DataPtr = (float *)pFVar5;
    local_58.DataPtr = (short *)pFVar6;
    Audio::ArrayPcm16ToFloat(&local_58,&local_68);
    puVar1 = &(this->DecoderOutput).Capacity;
    pFVar5 = (this->SampleConversionBuffer).AllocatorInstance.Data;
    pFVar6 = (this->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
    local_res20 = (this->DecoderOutput).WriteCounter.Counter;
    iVar17 = (this->DecoderOutput).ReadCounter.Counter;
    iVar2 = (this->DecoderOutput).WriteCounter.Counter;
    if (iVar2 < iVar17) {
      uVar15 = (iVar2 - iVar17) + *puVar1;
    }
    else {
      uVar15 = iVar2 - iVar17;
    }
    iVar17 = ~uVar15 + *puVar1;
    if (iVar16 < iVar17) {
      iVar17 = iVar16;
    }
    iVar16 = *puVar1 - local_res20;
    if (iVar17 < iVar16) {
      iVar16 = iVar17;
    }
    memcpy(pFVar6 + (ulonglong)local_res20 * 4,pFVar5,(longlong)iVar16 * 4);
    memcpy(pFVar6,pFVar5 + (longlong)iVar16 * 4,(longlong)(iVar17 - iVar16) << 2);
    LOCK();
    (this->DecoderOutput).WriteCounter.Counter = (local_res20 + iVar17) % *puVar1;
    UNLOCK();
    uVar15 = local_res18;
    if ((int)uVar14 < (int)local_res18) {
      uVar15 = uVar14;
    }
    uVar15 = local_res18 - uVar15;
    local_res18 = uVar15;
    if (cVar11 != '\0') {
      return Finished;
    }
  }
  pcVar7 = (code *)swi(3);
  EVar13 = (*pcVar7)();
  return EVar13;
}

// DiscardSamples @ 148730370

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSoundWaveProxyReader::DiscardSamples(FSoundWaveProxyReader *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDecodeResult EVar4;
  int iVar5;
  FName *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FString local_28;
  FString local_18;
  
  uVar8 = 0;
  if (param_1 < 1) {
    return 0;
  }
  do {
    EVar4 = Decode(this);
    this->DecodeResult = EVar4;
    iVar5 = (this->DecoderOutput).ReadCounter.Counter;
    iVar1 = (this->DecoderOutput).WriteCounter.Counter;
    if (iVar1 < iVar5) {
      iVar5 = (this->DecoderOutput).Capacity - iVar5;
    }
    else {
      iVar5 = -iVar5;
    }
    uVar7 = iVar1 + iVar5;
    uVar9 = param_1;
    if ((int)uVar7 < param_1) {
      uVar9 = uVar7;
    }
    if ((int)uVar9 < 1) {
      if ((byte)LogAudio._0_1_ < 2) {
        return uVar8;
      }
      pFVar6 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
      ::FName::ToString(pFVar6,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      goto LAB_1487304c8;
    }
    if ((0x7ffffffe < uVar9) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                           ,0x43e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = (this->DecoderOutput).ReadCounter.Counter;
    iVar1 = (this->DecoderOutput).WriteCounter.Counter;
    if (iVar1 < iVar5) {
      iVar5 = (this->DecoderOutput).Capacity - iVar5;
    }
    else {
      iVar5 = -iVar5;
    }
    uVar8 = iVar1 + iVar5;
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar9;
    }
    param_1 = param_1 - uVar8;
    LOCK();
    (this->DecoderOutput).ReadCounter.Counter =
         ((this->DecoderOutput).ReadCounter.Counter + uVar8) % (this->DecoderOutput).Capacity;
    UNLOCK();
    if (param_1 < 1) {
      return uVar8;
    }
  } while (this->DecodeResult == MoreDataRemaining);
  if (1 < (byte)LogAudio._0_1_) {
    pFVar6 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
    ::FName::ToString(pFVar6,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
LAB_1487304c8:
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return uVar8;
}

// InitializeDecoder @ 148749920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSoundWaveProxyReader::InitializeDecoder(FSoundWaveProxyReader *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  ICompressedAudioInfo *pIVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  IAudioInfoFactoryRegistry *pIVar13;
  longlong *plVar14;
  ICompressedAudioInfo *pIVar15;
  uchar *puVar16;
  uint uVar17;
  ICompressedAudioInfo *pIVar18;
  uint uVar19;
  bool bVar20;
  FName local_res18 [2];
  TSharedPtr<FSoundWaveProxy,1> local_130;
  FSoundQualityInfo local_120;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId390,"FSoundWaveProxyReader::InitializeDecoder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
               ,0x186);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
  }
  pFVar12 = FSoundWaveProxy::GetRuntimeFormat((this->WaveProxy).Object);
  local_res18[0] = *pFVar12;
  pIVar13 = IAudioInfoFactoryRegistry::Get();
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x18))(pIVar13);
  if (plVar14 == (longlong *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2294197583347712394>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                       ,0x18a,"Factory");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (1 < (byte)LogAudio._0_1_) {
      ::FName::ToString(local_res18,&local_e8);
      pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
      ::FName::ToString(pFVar12,&local_f8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      local_58[0].Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        local_58[0].Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      }
LAB_14874a204:
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pIVar15 = (ICompressedAudioInfo *)(**(code **)(*plVar14 + 8))(plVar14);
    if (pIVar15 != (ICompressedAudioInfo *)0x0) {
      pIVar18 = (ICompressedAudioInfo *)0x0;
      local_120.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.DebugName.Data.ArrayNum = 0;
      local_120.DebugName.Data.ArrayMax = 0;
      bVar7 = FSoundWaveProxy::IsStreaming((this->WaveProxy).Object);
      if (bVar7) {
        local_130.Object = (this->WaveProxy).Object;
        local_130.SharedReferenceCount.ReferenceController =
             (this->WaveProxy).SharedReferenceCount.ReferenceController;
        if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar7 = ICompressedAudioInfo::StreamCompressedInfo(pIVar15,&local_130,&local_120);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130.SharedReferenceCount.ReferenceController);
        if (!bVar7) {
          if (1 < (byte)LogAudio._0_1_) {
            pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
            ::FName::ToString(pFVar12,&local_d8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
LAB_148749bc3:
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_148749bcd;
        }
LAB_148749bd8:
        pIVar5 = (this->CompressedAudioInfo).Ptr;
        if ((pIVar5 != pIVar15) &&
           ((this->CompressedAudioInfo).Ptr = pIVar15, pIVar5 != (ICompressedAudioInfo *)0x0)) {
          (**(code **)pIVar5->_padding_)();
        }
        this->SampleRate = (float)local_120.SampleRate;
        iVar11 = (int)(longlong)((float)local_120.SampleRate * local_120.Duration);
        if (iVar11 != 0) {
          this->NumFramesInWave = iVar11;
        }
        if (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          bVar7 = FSoundWaveProxy::IsSeekable((this->WaveProxy).Object);
          if (bVar7) {
            pIVar15 = (this->CompressedAudioInfo).Ptr;
            (**(code **)(pIVar15->_padding_ + 0x18))(pIVar15,param_1);
          }
          else if (2 < (byte)LogAudio._0_1_) {
            pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
            ::FName::ToString(pFVar12,&local_a8);
            ::FName::ToString(local_res18,&local_b8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
        }
        iVar10 = (int)(param_1 * this->SampleRate);
        iVar11 = this->NumFramesInWave;
        if (iVar10 < this->NumFramesInWave) {
          iVar11 = iVar10;
        }
        iVar10 = 0;
        if (0 < iVar11) {
          iVar10 = iVar11;
        }
        uVar17 = (this->Settings).MaxDecodeSizeInFrames & 0xffffff80;
        this->CurrentFrameIndex = iVar10;
        uVar19 = 0x80;
        if (0x80 < uVar17) {
          uVar19 = uVar17;
        }
        if ((uVar19 % uVar17 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ConformedDecodeSizeInFrames % QuantizedDecodeSizeInFrames) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                               ,0x29,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        puVar3 = &this->NumFramesPerDecode;
        piVar1 = &(this->ResidualBuffer).ArrayNum;
        uVar17 = *puVar3;
        if (*puVar3 < uVar19) {
          uVar17 = uVar19;
        }
        piVar2 = &this->NumChannels;
        *puVar3 = uVar17;
        uVar17 = uVar17 * *piVar2;
        iVar11 = *piVar1;
        if (iVar11 < (int)uVar17) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (2,2,uVar17 - iVar11,&(this->ResidualBuffer).AllocatorInstance,piVar1,
                              &(this->ResidualBuffer).ArrayMax);
          memset((this->ResidualBuffer).AllocatorInstance.Data + (longlong)iVar10 * 2,0,
                 (longlong)(int)(uVar17 - iVar11) * 2);
        }
        else {
          if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
          }
          if ((int)uVar17 < iVar11) {
            uVar19 = iVar11 - uVar17;
            if (((int)(uVar19 | uVar17) < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if (uVar19 != 0) {
              pFVar4 = (this->ResidualBuffer).AllocatorInstance.Data + (longlong)(int)uVar17 * 2;
              iVar11 = ((this->ResidualBuffer).ArrayNum - uVar17) - uVar19;
              if (iVar11 != 0) {
                memmove(pFVar4,pFVar4 + (longlong)(int)uVar19 * 2,(longlong)iVar11 * 2);
              }
              iVar11 = (this->ResidualBuffer).ArrayNum - uVar19;
              (this->ResidualBuffer).ArrayNum = iVar11;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,&(this->ResidualBuffer).AllocatorInstance,iVar11,
                         &(this->ResidualBuffer).ArrayMax);
            }
          }
        }
        uVar19 = *puVar3 * *piVar2;
        piVar1 = &(this->SampleConversionBuffer).ArrayNum;
        iVar11 = *piVar1;
        if (iVar11 < (int)uVar19) {
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar19 - iVar11,&(this->SampleConversionBuffer).AllocatorInstance,piVar1,
                     &(this->SampleConversionBuffer).ArrayMax);
        }
        else {
          if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
          }
          if ((int)uVar19 < iVar11) {
            uVar17 = iVar11 - uVar19;
            if (((int)(uVar17 | uVar19) < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if (uVar17 != 0) {
              pFVar4 = (this->SampleConversionBuffer).AllocatorInstance.Data +
                       (longlong)(int)uVar19 * 4;
              iVar11 = ((this->SampleConversionBuffer).ArrayNum - uVar17) - uVar19;
              if (iVar11 != 0) {
                memmove(pFVar4,pFVar4 + (longlong)(int)uVar17 * 4,(longlong)iVar11 << 2);
              }
              iVar11 = (this->SampleConversionBuffer).ArrayNum - uVar17;
              (this->SampleConversionBuffer).ArrayNum = iVar11;
              UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,&(this->SampleConversionBuffer).AllocatorInstance,iVar11,
                         &(this->SampleConversionBuffer).ArrayMax);
            }
          }
        }
        uVar19 = *puVar3 * *piVar2 * 2;
        if ((this->DecoderOutput).Capacity <= uVar19) {
          uVar19 = uVar19 + 1;
          if ((0x7ffffffe < uVar19) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewCapacity < (uint32)TNumericLimits<int32>::Max()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                                 ,0x386,L"Max capacity overflow. Requested %d. Maximum allowed %d"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                    (&(this->DecoderOutput).InternalBuffer,uVar19 - (this->DecoderOutput).Capacity);
          (this->DecoderOutput).Capacity = uVar19;
        }
        LOCK();
        (this->DecoderOutput).ReadCounter.Counter = 0;
        UNLOCK();
        LOCK();
        (this->DecoderOutput).WriteCounter.Counter = 0;
        UNLOCK();
        this->NumDecodeSamplesToDiscard = 0;
        if (((GSoundWaveProxyReaderSimulateSeekOnNonSeekable != 0) && (param_1 != 0.0)) &&
           (bVar7 = FSoundWaveProxy::IsSeekable((this->WaveProxy).Object), !bVar7)) {
          if (this->bFallbackSeekMethodWarningLogged == false) {
            if (2 < (byte)LogAudio._0_1_) {
              pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
              ::FName::ToString(pFVar12,&local_98);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            this->bFallbackSeekMethodWarningLogged = true;
          }
          DiscardSamples(this,this->CurrentFrameIndex * this->NumChannels);
        }
        if ((this->CompressedAudioInfo).Ptr == (ICompressedAudioInfo *)0x0) {
          if (1 < (byte)LogAudio._0_1_) {
            pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
            ::FName::ToString(pFVar12,&local_78);
            ::FName::ToString(local_res18,&local_88);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          this->DecodeResult = Fail;
          bVar7 = false;
        }
        else {
          this->DecodeResult = MoreDataRemaining;
          bVar7 = true;
        }
      }
      else {
        pcVar6 = *(code **)(pIVar15->_padding_ + 8);
        iVar11 = FSoundWaveProxy::GetResourceSize((this->WaveProxy).Object);
        puVar16 = FSoundWaveProxy::GetResourceData((this->WaveProxy).Object);
        cVar9 = (*pcVar6)(pIVar15,puVar16,iVar11,&local_120);
        if (cVar9 != '\0') goto LAB_148749bd8;
        if (1 < (byte)LogAudio._0_1_) {
          pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
          ::FName::ToString(pFVar12,&local_c8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
          goto LAB_148749bc3;
        }
LAB_148749bcd:
        bVar7 = false;
        pIVar18 = pIVar15;
      }
      if (local_120.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.DebugName.Data.AllocatorInstance.Data);
      }
      if (pIVar18 != (ICompressedAudioInfo *)0x0) {
        (**(code **)pIVar18->_padding_)(pIVar18,1);
      }
      goto LAB_14874a211;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2294197583347712403>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                       ,0x193,"InfoInstance.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (1 < (byte)LogAudio._0_1_) {
      ::FName::ToString(local_res18,local_58);
      pFVar12 = FSoundWaveProxy::GetPackageName((this->WaveProxy).Object);
      ::FName::ToString(pFVar12,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_14874a204;
    }
  }
  bVar7 = false;
LAB_14874a211:
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// PopAudio @ 14874eea0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSoundWaveProxyReader::PopAudio
          (FSoundWaveProxyReader *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  EDecodeResult EVar10;
  int iVar11;
  FName *pFVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  int iVar15;
  FScriptContainerElement *_Dst;
  bool bVar16;
  undefined1 local_res8 [8];
  int local_res18;
  int iStack_e0;
  undefined1 local_e8 [16];
  undefined4 uStack_cc;
  TArrayView<float,int> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId237,"FSoundWaveProxyReader::PopAudio",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
               ,0xed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId237);
  }
  if ((this->NumChannels == 0) || (this->bIsDecoderValid == false)) {
    if (0 < param_1->ArrayNum) {
      memset((param_1->AllocatorInstance).Data,0,(longlong)param_1->ArrayNum << 2);
    }
    local_res18 = 0;
  }
  else {
    if ((param_1->ArrayNum % this->NumChannels != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 == (OutBuffer.Num() % NumChannels)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                           ,0xf8,
                           L"Output buffer size must be evenly divisible by the number of channels")
       , bVar6)) {
      pcVar2 = (code *)swi(3);
      iVar8 = (*pcVar2)();
      return iVar8;
    }
    _Dst = (param_1->AllocatorInstance).Data;
    iVar8 = param_1->ArrayNum;
    uVar3 = param_1->AllocatorInstance;
    iVar4 = param_1->ArrayNum;
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      iVar8 = (*pcVar2)();
      return iVar8;
    }
    pFVar5 = (FScriptContainerElement *)CONCAT44(local_c8.DataPtr._4_4_,local_c8.DataPtr._0_4_);
    iVar11 = (this->DecoderOutput).ReadCounter.Counter;
    iVar9 = (this->DecoderOutput).WriteCounter.Counter;
    iVar15 = iVar9 - iVar11;
    local_res18 = 0;
    if (iVar9 < iVar11) {
      iVar15 = iVar15 + (this->DecoderOutput).Capacity;
    }
    if ((this->bIsDecoderValid == false) || (this->DecodeResult != MoreDataRemaining)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((iVar15 != 0) || (bVar7 = false, bVar6)) {
      bVar7 = true;
    }
    if (0 < param_1->ArrayNum) {
      iVar11 = param_1->ArrayNum;
      local_c8.DataPtr = (float *)uVar3;
      while (bVar7) {
        local_c8.ArrayNum = iVar4;
        local_c8._12_4_ = local_e8._12_4_;
        iVar9 = PopAudioFromDecoderOutput(this,&local_c8);
        local_res18 = local_res18 + iVar9;
        iVar4 = iVar11 - iVar9;
        if (iVar9 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        if (iVar4 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15c,L"Invalid count (%lld)");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        if (iVar8 < iVar11) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            );
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        _Dst = _Dst + (longlong)iVar9 * 4;
        if (iVar4 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        if (6 < (byte)LogAudioTiming._0_1_) {
          pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
          pFVar13 = ::FName::ToString(pFVar12,&local_b8);
          if ((pFVar13->Data).ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
          bVar7 = Audio::MatchesLogFilter(pwVar14);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
            ::FName::ToString(pFVar12,&local_a8);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((this->Settings).bIsLooping != false) {
          iVar8 = (this->DecoderOutput).ReadCounter.Counter;
          iVar11 = (this->DecoderOutput).WriteCounter.Counter;
          if (iVar11 < iVar8) {
            iVar8 = (this->DecoderOutput).Capacity - iVar8;
          }
          else {
            iVar8 = -iVar8;
          }
          if ((iVar11 + iVar8 == 0) &&
             ((!bVar6 || (this->LoopEndFrameIndex <= this->CurrentFrameIndex)))) {
            if (5 < (byte)LogAudioTiming._0_1_) {
              pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
              pFVar13 = ::FName::ToString(pFVar12,&local_98);
              if ((pFVar13->Data).ArrayNum == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
              bVar6 = Audio::MatchesLogFilter(pwVar14);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (bVar6) {
                pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
                ::FName::ToString(pFVar12,&local_88);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming)
                ;
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
            }
            SeekToTime(this,(this->Settings).LoopStartTimeInSeconds);
            if ((this->bIsDecoderValid == false) || (this->DecodeResult == Fail)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
          }
        }
        pFVar5 = (FScriptContainerElement *)local_c8.DataPtr;
        if (0 < iVar4) {
          iVar8 = (this->DecoderOutput).ReadCounter.Counter;
          iVar11 = (this->DecoderOutput).WriteCounter.Counter;
          if (iVar11 < iVar8) {
            iVar8 = (this->DecoderOutput).Capacity - iVar8;
          }
          else {
            iVar8 = -iVar8;
          }
          if ((iVar11 + iVar8 == 0) && (bVar6)) {
            EVar10 = Decode(this);
            bVar6 = EVar10 == MoreDataRemaining;
            this->DecodeResult = EVar10;
            pFVar5 = (FScriptContainerElement *)local_c8.DataPtr;
          }
        }
        iVar11 = (this->DecoderOutput).ReadCounter.Counter;
        puVar1 = &(this->DecoderOutput).Capacity;
        iVar9 = (this->DecoderOutput).WriteCounter.Counter;
        if (iVar9 < iVar11) {
          iVar11 = *puVar1 - iVar11;
        }
        else {
          iVar11 = -iVar11;
        }
        iVar8 = iVar4;
        if ((iVar9 + iVar11 != 0) || (bVar6)) {
          iVar11 = (this->DecoderOutput).ReadCounter.Counter;
          bVar7 = true;
          iVar9 = (this->DecoderOutput).WriteCounter.Counter;
          if (iVar9 < iVar11) {
            iVar9 = (iVar9 - iVar11) + *puVar1;
          }
          else {
            iVar9 = iVar9 - iVar11;
          }
          if (iVar9 == 0) {
            if (5 < (byte)LogAudioTiming._0_1_) {
              local_c8.DataPtr = (float *)pFVar5;
              pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
              bVar6 = Audio::MatchesLogFilter(pFVar12);
              pFVar5 = (FScriptContainerElement *)local_c8.DataPtr;
              if (bVar6) {
                pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
                ::FName::ToString(pFVar12,&local_78);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming)
                ;
                pFVar5 = (FScriptContainerElement *)local_c8.DataPtr;
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  pFVar5 = (FScriptContainerElement *)local_c8.DataPtr;
                }
              }
            }
            break;
          }
        }
        else {
          bVar7 = false;
        }
        local_e8._12_4_ = uStack_cc;
        iVar11 = iVar4;
        local_c8.DataPtr = (float *)_Dst;
        if (iVar4 < 1) break;
      }
    }
    local_c8.DataPtr = (float *)pFVar5;
    if (5 < (byte)LogAudioTiming._0_1_) {
      pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
      bVar6 = Audio::MatchesLogFilter(pFVar12);
      if (bVar6) {
        pFVar12 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
        ::FName::ToString(pFVar12,local_68);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        }
      }
    }
    if (0 < iVar8) {
      memset(_Dst,0,(longlong)iVar8 << 2);
      if ((this->Settings).bMaintainAudioSync != false) {
        if ((this->Settings).bIsLooping != false) {
          `FSoundWaveProxyReader::PopAudio'[::A]::<lambda_1>::operator()(local_res8);
        }
        this->NumDecodeSamplesToDiscard = this->NumDecodeSamplesToDiscard + iVar8;
        this->CurrentFrameIndex = this->CurrentFrameIndex + iVar8 / this->NumChannels;
        if (this->NumFramesInWave < this->CurrentFrameIndex) {
          this->CurrentFrameIndex = this->NumFramesInWave;
        }
      }
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_res18;
}

// PopAudioFromDecoderOutput @ 14874f5b0

int __thiscall
FSoundWaveProxyReader::PopAudioFromDecoderOutput
          (FSoundWaveProxyReader *this,TArrayView<float,int> *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *_Dst;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (this->NumChannels < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                       ,0x159,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = Audio::TCircularAudioBuffer<float,16>::Pop
                    (&this->DecoderOutput,this->NumDecodeSamplesToDiscard);
  piVar1 = &this->NumDecodeSamplesToDiscard;
  *piVar1 = *piVar1 - iVar7;
  if (*piVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumDecodeSamplesToDiscard >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWaveProxyReader.cpp"
                       ,0x15d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->DecoderOutput).ReadCounter.Counter;
  iVar8 = (this->DecoderOutput).WriteCounter.Counter;
  iVar9 = iVar8 - iVar7;
  if (iVar8 < iVar7) {
    iVar9 = iVar9 + (this->DecoderOutput).Capacity;
  }
  if (iVar9 == 0) {
    return 0;
  }
  uVar2 = (this->DecoderOutput).ReadCounter.Counter;
  uVar3 = param_1->ArrayNum;
  _Dst = param_1->DataPtr;
  _Src = (this->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
  iVar7 = (this->DecoderOutput).ReadCounter.Counter;
  iVar8 = (this->DecoderOutput).WriteCounter.Counter;
  uVar11 = iVar8 - iVar7;
  if (iVar8 < iVar7) {
    uVar11 = uVar11 + (this->DecoderOutput).Capacity;
  }
  if ((int)uVar3 < (int)uVar11) {
    uVar11 = uVar3;
  }
  uVar10 = (this->DecoderOutput).Capacity - uVar2;
  if ((int)uVar11 < (int)uVar10) {
    uVar10 = uVar11;
  }
  memcpy(_Dst,_Src + (ulonglong)uVar2 * 4,(longlong)(int)uVar10 * 4);
  memcpy(_Dst + (int)uVar10,_Src,(longlong)(int)(uVar11 - uVar10) << 2);
  if (0x7ffffffe < uVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x3f7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x426,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  LOCK();
  (this->DecoderOutput).ReadCounter.Counter =
       ((this->DecoderOutput).ReadCounter.Counter + uVar11) % (this->DecoderOutput).Capacity;
  UNLOCK();
  iVar7 = this->NumChannels;
  iVar8 = (int)uVar11 / iVar7;
  iVar9 = this->CurrentFrameIndex + iVar8;
  bVar6 = (this->Settings).bIsLooping;
  this->CurrentFrameIndex = iVar9;
  if ((bVar6 != false) && (iVar4 = this->LoopEndFrameIndex, iVar4 <= iVar9)) {
    this->CurrentFrameIndex = iVar4;
    iVar8 = (iVar4 - iVar9) + iVar8;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    if ((this->DecoderOutput).Capacity == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSamples < Capacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x45b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    iVar9 = (this->DecoderOutput).WriteCounter.Counter;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (this->DecoderOutput).Capacity;
    }
    LOCK();
    (this->DecoderOutput).ReadCounter.Counter = iVar9;
    UNLOCK();
    return iVar8 * iVar7;
  }
  return uVar11;
}

// SeekToFrame @ 1487560b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSoundWaveProxyReader::SeekToFrame(FSoundWaveProxyReader *this,uint param_1)

{
  ICompressedAudioInfo *pIVar1;
  bool bVar2;
  FName *pFVar3;
  FString local_28 [2];
  
  if (this->bIsDecoderValid == false) {
    this->CurrentFrameIndex = param_1;
    if (5 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    return false;
  }
  if (param_1 != this->CurrentFrameIndex) {
    if (5 < (byte)LogAudioTiming._0_1_) {
      pFVar3 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
      bVar2 = Audio::MatchesLogFilter(pFVar3);
      if (bVar2) {
        pFVar3 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
        ::FName::ToString(pFVar3,local_28);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
      }
    }
    bVar2 = FSoundWaveProxy::IsSeekable((this->WaveProxy).Object);
    if ((!bVar2) ||
       (pIVar1 = (this->CompressedAudioInfo).Ptr, pIVar1 == (ICompressedAudioInfo *)0x0)) {
      bVar2 = InitializeDecoder(this,(float)param_1 * this->SampleRate);
      this->bIsDecoderValid = bVar2;
      return bVar2;
    }
    (**(code **)(pIVar1->_padding_ + 0x20))();
    this->CurrentFrameIndex = param_1;
    Audio::TCircularAudioBuffer<float,16>::SetNum(&this->DecoderOutput,0,false);
    this->NumDecodeSamplesToDiscard = 0;
    this->DecodeResult = MoreDataRemaining;
  }
  return true;
}

// SeekToTime @ 148756220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSoundWaveProxyReader::SeekToTime(FSoundWaveProxyReader *this,float param_1)

{
  ICompressedAudioInfo *pIVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FString local_38 [3];
  
  iVar4 = (int)(param_1 * this->SampleRate);
  iVar2 = this->NumFramesInWave;
  if (iVar4 < this->NumFramesInWave) {
    iVar2 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  if (this->bIsDecoderValid == false) {
    this->CurrentFrameIndex = iVar4;
    if (5 < (byte)LogAudio._0_1_) {
      pFVar5 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
      ::FName::ToString(pFVar5,local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (iVar4 != this->CurrentFrameIndex) {
    if (5 < (byte)LogAudioTiming._0_1_) {
      pFVar5 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
      bVar3 = Audio::MatchesLogFilter(pFVar5);
      if (bVar3) {
        pFVar5 = FSoundWaveProxy::GetFName((this->WaveProxy).Object);
        ::FName::ToString(pFVar5,local_38);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
        }
      }
    }
    bVar3 = FSoundWaveProxy::IsSeekable((this->WaveProxy).Object);
    if ((!bVar3) ||
       (pIVar1 = (this->CompressedAudioInfo).Ptr, pIVar1 == (ICompressedAudioInfo *)0x0)) {
      bVar3 = InitializeDecoder(this,param_1);
      this->bIsDecoderValid = bVar3;
      return bVar3;
    }
    (**(code **)(pIVar1->_padding_ + 0x20))();
    this->CurrentFrameIndex = iVar4;
    Audio::TCircularAudioBuffer<float,16>::SetNum(&this->DecoderOutput,0,false);
    this->NumDecodeSamplesToDiscard = 0;
    this->DecodeResult = MoreDataRemaining;
  }
  return true;
}

// SetIsLooping @ 14875b010

void __thiscall FSoundWaveProxyReader::SetIsLooping(FSoundWaveProxyReader *this,bool param_1)

{
  if ((this->Settings).bIsLooping != param_1) {
    (this->Settings).bIsLooping = param_1;
    UpdateLoopBoundaries(this);
    return;
  }
  return;
}

// SetLoopDuration @ 14875b030

void __thiscall FSoundWaveProxyReader::SetLoopDuration(FSoundWaveProxyReader *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_4b488020;
  if ((0.0 < param_1) && (fVar1 = param_1, param_1 <= __real_3d4ccccd)) {
    fVar1 = __real_3d4ccccd;
  }
  if ((float)((uint)((this->Settings).LoopDurationInSeconds - fVar1) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    return;
  }
  (this->Settings).LoopDurationInSeconds = fVar1;
  UpdateLoopBoundaries(this);
  return;
}

// SetLoopStartTime @ 14875b080

void __thiscall FSoundWaveProxyReader::SetLoopStartTime(FSoundWaveProxyReader *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->MaxLoopStartTimeInSeconds;
  if (param_1 <= this->MaxLoopStartTimeInSeconds) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)((this->Settings).LoopStartTimeInSeconds - fVar1) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    (this->Settings).LoopStartTimeInSeconds = fVar1;
    UpdateLoopBoundaries(this);
    return;
  }
  return;
}

// UpdateLoopBoundaries @ 14875e460

void __thiscall FSoundWaveProxyReader::UpdateLoopBoundaries(FSoundWaveProxyReader *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((this->Settings).bIsLooping != false) {
    fVar1 = this->SampleRate;
    fVar2 = (this->Settings).LoopStartTimeInSeconds;
    fVar3 = (fVar2 + (this->Settings).LoopDurationInSeconds) * fVar1;
    fVar4 = (float)(this->LoopStartFrameIndex -
                   ((int)ROUND(__real_bf000000 - fVar1 * __real_3dcccccd) >> 1));
    if ((float)this->NumFramesInWave <= fVar3) {
      fVar3 = (float)this->NumFramesInWave;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    this->LoopStartFrameIndex = (int)ROUND((fVar1 + fVar1) * fVar2 - __real_3f000000) >> 1;
    this->LoopEndFrameIndex = (int)fVar4;
    return;
  }
  this->LoopStartFrameIndex = 0;
  this->LoopEndFrameIndex = this->NumFramesInWave;
  return;
}

// operator() @ 150530270

bool __thiscall `FSoundWaveProxyReader::PopAudio'[::A]::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2294197583347712324>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2294197583347712324>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

