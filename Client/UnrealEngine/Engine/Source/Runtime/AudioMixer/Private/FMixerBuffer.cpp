// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 19

// FMixerBuffer @ 1464d8140

FMixerBuffer * __thiscall
Audio::FMixerBuffer::FMixerBuffer
          (FMixerBuffer *this,FAudioDevice *param_1,USoundWave *param_2,Type param_3)

{
  float fVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMixerBuffer_Audio__6B_;
  this->RealtimeAsyncHeaderParseTask = (IAudioTask *)0x0;
  this->DecompressionState = (ICompressedAudioInfo *)0x0;
  this->BufferType = param_3;
  fVar1 = USoundWave::GetSampleRateForCurrentPlatform(param_2);
  this->NumFrames = 0;
  this->Data = (uchar *)0x0;
  this->DataSize = 0;
  this->BitsPerSample = 0x10;
  this->bIsDynamicResource = false;
  this->SampleRate = (int)fVar1;
  this->bIsRealTimeSourceReady = (FThreadSafeBool)0x0;
  *(int *)((longlong)&this->_padding_ + 4) = param_2->NumChannels;
  return this;
}

// ~FMixerBuffer @ 1464dc160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerBuffer::~FMixerBuffer(FMixerBuffer *this)

{
  ICompressedAudioInfo *pIVar1;
  
  this->_padding_ = (longlong)&___7FMixerBuffer_Audio__6B_;
  if ((char)this->_padding_ != '\0') {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  pIVar1 = this->DecompressionState;
  if (pIVar1 != (ICompressedAudioInfo *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    this->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  if (((this->BufferType == PCM) ||
      ((this->BufferType == PCMPreview && (this->bIsDynamicResource != false)))) &&
     (this->Data != (uchar *)0x0)) {
    FMemory::Free(this->Data);
  }
  FSoundBuffer::~FSoundBuffer((FSoundBuffer *)this);
  return;
}

// CreateNativeBuffer @ 1464f89e0

FMixerBuffer * __cdecl
Audio::FMixerBuffer::CreateNativeBuffer(FAudioDevice *param_1,USoundWave *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMixerBuffer *pFVar3;
  
  if ((param_2->PrecacheState).Counter != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWave->GetPrecacheState() == ESoundWavePrecacheState::Done",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMixerBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = ::operator_new(0x68);
  if (pFVar3 != (FMixerBuffer *)0x0) {
    pFVar3 = FMixerBuffer(pFVar3,param_1,param_2,PCM);
    return pFVar3;
  }
  return (FMixerBuffer *)0x0;
}

// CreatePreviewBuffer @ 1464f8a60

FMixerBuffer * __cdecl
Audio::FMixerBuffer::CreatePreviewBuffer(FAudioDevice *param_1,USoundWave *param_2)

{
  FMixerBuffer *pFVar1;
  
  pFVar1 = ::operator_new(0x68);
  if (pFVar1 == (FMixerBuffer *)0x0) {
    pFVar1 = (FMixerBuffer *)0x0;
  }
  else {
    pFVar1 = FMixerBuffer(pFVar1,param_1,param_2,PCMPreview);
  }
  pFVar1->bIsDynamicResource = param_2->bDynamicResource;
  return pFVar1;
}

// CreateProceduralBuffer @ 1464f8ac0

FMixerBuffer * __cdecl
Audio::FMixerBuffer::CreateProceduralBuffer(FAudioDevice *param_1,USoundWave *param_2)

{
  FMixerBuffer *this;
  FMixerBuffer *pFVar1;
  
  this = ::operator_new(0x68);
  pFVar1 = (FMixerBuffer *)0x0;
  if (this != (FMixerBuffer *)0x0) {
    pFVar1 = FMixerBuffer(this,param_1,param_2,PCMRealTime);
  }
  *(undefined4 *)&pFVar1->_padding_ = 0;
  param_2->ResourceID = 0;
  return pFVar1;
}

// CreateRealTimeBuffer @ 1464f8b20

FMixerBuffer * __cdecl
Audio::FMixerBuffer::CreateRealTimeBuffer(FAudioDevice *param_1,USoundWave *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMixerBuffer *pFVar3;
  FMixerBuffer *this;
  uchar *puVar4;
  IAudioInfoFactoryRegistry *pIVar5;
  longlong *plVar6;
  ICompressedAudioInfo *pIVar7;
  FHeaderDecodeHandle *this_00;
  FMixerBuffer *pFVar8;
  undefined8 local_res8;
  FHeaderParseAudioTaskData local_18;
  
  if ((param_1 == (FAudioDevice *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                         ,0x15f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerBuffer *)(*pcVar1)();
    return pFVar3;
  }
  if ((param_2 == (USoundWave *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWave",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                         ,0x160,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerBuffer *)(*pcVar1)();
    return pFVar3;
  }
  if (((param_2->PrecacheState).Counter != 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWave->GetPrecacheState() == ESoundWavePrecacheState::Done",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                         ,0x161,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerBuffer *)(*pcVar1)();
    return pFVar3;
  }
  this = ::operator_new(0x68);
  pFVar8 = (FMixerBuffer *)0x0;
  pFVar3 = pFVar8;
  if (this != (FMixerBuffer *)0x0) {
    pFVar3 = FMixerBuffer(this,param_1,param_2,PCMRealTime);
  }
  USoundWave::GetRuntimeFormat(param_2);
  puVar4 = USoundWave::GetResourceData(param_2);
  if (puVar4 == (uchar *)0x0) {
    (**(code **)(param_2->_padding_ + 0x3d8))(param_2,local_res8);
  }
  pIVar5 = IAudioInfoFactoryRegistry::Get();
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,local_res8);
  if (plVar6 == (longlong *)0x0) {
    pFVar3->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  else {
    pIVar7 = (ICompressedAudioInfo *)(**(code **)(*plVar6 + 8))(plVar6);
    pFVar3->DecompressionState = pIVar7;
    if (pIVar7 != (ICompressedAudioInfo *)0x0) goto LAB_1464f8c72;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Buffer->DecompressionState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                     ,0x16d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerBuffer *)(*pcVar1)();
    return pFVar3;
  }
LAB_1464f8c72:
  if (pFVar3->DecompressionState == (ICompressedAudioInfo *)0x0) {
    (param_2->DecompressionType).Value = '\x01';
    param_2->NumChannels = 0;
    USoundWave::RemoveAudioResource(param_2);
    (**(code **)pFVar3->_padding_)(pFVar3,1);
    return (FMixerBuffer *)0x0;
  }
  local_18.MixerBuffer = pFVar3;
  local_18.SoundWave = param_2;
  if ((pFVar3->RealtimeAsyncHeaderParseTask != (IAudioTask *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->RealtimeAsyncHeaderParseTask == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                         ,0x175,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerBuffer *)(*pcVar1)();
    return pFVar3;
  }
  this_00 = ::operator_new(0x10);
  if (this_00 != (FHeaderDecodeHandle *)0x0) {
    pFVar8 = (FMixerBuffer *)FHeaderDecodeHandle::FHeaderDecodeHandle(this_00,&local_18);
  }
  pFVar3->RealtimeAsyncHeaderParseTask = (IAudioTask *)pFVar8;
  *(int *)((longlong)&pFVar3->_padding_ + 4) = param_2->NumChannels;
  return pFVar3;
}

// CreateStreamingBuffer @ 1464f8d70

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerBuffer * __cdecl
Audio::FMixerBuffer::CreateStreamingBuffer(FAudioDevice *param_1,USoundWave *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FMixerBuffer *this;
  FMixerBuffer *pFVar7;
  IAudioInfoFactoryRegistry *pIVar8;
  FName FVar9;
  longlong *plVar10;
  ICompressedAudioInfo *this_00;
  FMixerBuffer *pFVar11;
  ulonglong uVar12;
  FName local_res10;
  FName local_res18 [2];
  FString local_78;
  FString local_68;
  FSoundQualityInfo local_58;
  
  if (param_2 == (USoundWave *)0x0) {
    return (FMixerBuffer *)0x0;
  }
  bVar3 = USoundWave::HasError(param_2);
  if (bVar3) {
    if ((byte)LogAudioMixer._0_1_ < 7) {
      return (FMixerBuffer *)0x0;
    }
    local_res10 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res10,&local_78);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (FMixerBuffer *)0x0;
    }
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    return (FMixerBuffer *)0x0;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId283,"FMixerBuffer::CreateStreamingBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
               ,0x11b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId283);
  }
  this = ::operator_new(0x68);
  pFVar11 = (FMixerBuffer *)0x0;
  pFVar7 = pFVar11;
  if (this != (FMixerBuffer *)0x0) {
    pFVar7 = FMixerBuffer(this,param_1,param_2,Streaming);
  }
  local_58.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.DebugName.Data.ArrayNum = 0;
  local_58.DebugName.Data.ArrayMax = 0;
  local_58.Quality = 0;
  local_58.NumChannels = 0;
  local_58.SampleRate = 0;
  local_58.SampleDataSize = 0;
  local_58.Duration = 0.0;
  local_58.bStreaming = false;
  local_58._21_1_ = 0;
  local_58._padding_ = 0;
  pIVar8 = IAudioInfoFactoryRegistry::Get();
  FVar9 = USoundWave::GetRuntimeFormat(param_2);
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,*(undefined8 *)FVar9);
  if (plVar10 == (longlong *)0x0) {
    pFVar7->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  else {
    this_00 = (ICompressedAudioInfo *)(**(code **)(*plVar10 + 8))(plVar10);
    pFVar7->DecompressionState = this_00;
    if ((this_00 != (ICompressedAudioInfo *)0x0) &&
       (bVar4 = ICompressedAudioInfo::StreamCompressedInfo(this_00,param_2,&local_58), bVar4)) {
      if (local_58.SampleRate != 0) {
        USoundWave::SetSampleRate(param_2,local_58.SampleRate,true);
      }
      uVar12 = (ulonglong)local_58.NumChannels;
      if (local_58.NumChannels != 0) {
        if (8 < local_58.NumChannels) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8947371335265287891>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                             ,0x12d,"QualityInfo.NumChannels <= 8");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FMixerBuffer *)(*pcVar2)();
            return pFVar11;
          }
          uVar12 = (ulonglong)local_58._0_8_ >> 0x20;
        }
        param_2->NumChannels = (int)uVar12;
      }
      if (local_58.SampleDataSize != 0) {
        if ((int)uVar12 != 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar12;
          auVar1 = (ZEXT816(0) << 0x40 | ZEXT416(local_58.SampleDataSize >> 1)) / auVar1;
          uVar6 = auVar1._0_4_;
          if ((auVar1._0_8_ != (ulonglong)uVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FMixerBuffer *)(*pcVar2)();
            return pFVar11;
          }
          USoundWave::SetNumFrames(param_2,uVar6);
        }
        param_2->RawPCMDataSize = local_58.SampleDataSize;
      }
      pFVar11 = pFVar7;
      if (local_58.Duration != 0.0) {
        if (local_58.Duration <= 0.0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8947371335265287875>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                             ,0x13d,"QualityInfo.Duration > 0.0f");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FMixerBuffer *)(*pcVar2)();
            return pFVar11;
          }
        }
        *(float *)((longlong)&param_2->_padding_ + 4) = local_58.Duration;
      }
      goto LAB_1464f909b;
    }
  }
  if (pFVar7->DecompressionState != (ICompressedAudioInfo *)0x0) {
    USoundWave::SetError(param_2,L"ICompressedAudioInfo::StreamCompressedInfo failed");
  }
  cVar5 = (**(code **)(param_2->_padding_ + 0x410))(param_2);
  if (cVar5 == '\0') {
    if (2 < (byte)LogAudioMixer._0_1_) {
      local_res18[0] = (FName)param_2->_padding_;
      ::FName::ToString(local_res18,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    (param_2->DecompressionType).Value = '\x01';
    param_2->NumChannels = 0;
    USoundWave::RemoveAudioResource(param_2);
  }
  (**(code **)pFVar7->_padding_)(pFVar7,1);
LAB_1464f909b:
  if (local_58.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DebugName.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar11;
}

// EnsureHeaderParseTaskFinished @ 1464fdb20

void __thiscall Audio::FMixerBuffer::EnsureHeaderParseTaskFinished(FMixerBuffer *this)

{
  IAudioTask *pIVar1;
  
  if (this->RealtimeAsyncHeaderParseTask != (IAudioTask *)0x0) {
    (**(code **)((longlong)*this->RealtimeAsyncHeaderParseTask + 0x18))();
    pIVar1 = this->RealtimeAsyncHeaderParseTask;
    if (pIVar1 != (IAudioTask *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    this->RealtimeAsyncHeaderParseTask = (IAudioTask *)0x0;
  }
  return;
}

// GetCurrentChunkIndex @ 146501a60

int __thiscall Audio::FMixerBuffer::GetCurrentChunkIndex(FMixerBuffer *this)

{
  int iVar1;
  
  if (this->DecompressionState != (ICompressedAudioInfo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146501a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->DecompressionState->_padding_ + 0x80))();
    return iVar1;
  }
  return 0;
}

// GetCurrentChunkOffset @ 146501a90

int __thiscall Audio::FMixerBuffer::GetCurrentChunkOffset(FMixerBuffer *this)

{
  int iVar1;
  
  if (this->DecompressionState != (ICompressedAudioInfo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146501a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->DecompressionState->_padding_ + 0x88))();
    return iVar1;
  }
  return 0;
}

// GetDecompressionState @ 146501b60

ICompressedAudioInfo * __thiscall
Audio::FMixerBuffer::GetDecompressionState(FMixerBuffer *this,bool param_1)

{
  ICompressedAudioInfo *pIVar1;
  
  pIVar1 = this->DecompressionState;
  if (param_1) {
    this->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  return pIVar1;
}

// GetPCMData @ 146504660

void __thiscall Audio::FMixerBuffer::GetPCMData(FMixerBuffer *this,uchar **param_1,uint *param_2)

{
  *param_1 = this->Data;
  *param_2 = this->DataSize;
  return;
}

// GetSize @ 146505890

int __thiscall Audio::FMixerBuffer::GetSize(FMixerBuffer *this)

{
  Type TVar1;
  int iVar2;
  
  TVar1 = this->BufferType;
  if ((TVar1 == PCM) || (TVar1 == PCMPreview)) {
    return this->DataSize;
  }
  if (TVar1 == PCMRealTime) {
    if (this->DecompressionState != (ICompressedAudioInfo *)0x0) {
      iVar2 = (**(code **)(this->DecompressionState->_padding_ + 0x38))();
      return *(int *)((longlong)&this->_padding_ + 4) * 0x2580 + iVar2;
    }
    return *(int *)((longlong)&this->_padding_ + 4) * 0x2580;
  }
  if (TVar1 != Streaming) {
    return 0;
  }
  return *(int *)((longlong)&this->_padding_ + 4) * 0x2580;
}

// GetType @ 146505bc0

Type __thiscall Audio::FMixerBuffer::GetType(FMixerBuffer *this)

{
  return this->BufferType;
}

// Init @ 146505e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMixerBuffer * __cdecl
Audio::FMixerBuffer::Init(FAudioDevice *param_1,USoundWave *param_2,bool param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FMixerBuffer *pFVar4;
  FMixerBuffer *this;
  uint uVar5;
  undefined7 in_register_00000081;
  bool bVar6;
  
  if ((param_2 == (USoundWave *)0x0) || (param_2->NumChannels == 0)) {
    return (FMixerBuffer *)0x0;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    in_register_00000081 = 0x1512ce8;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"FMixerBuffer::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  FAudioDevice::GetAudioDeviceManager();
  bVar1 = (param_2->DecompressionType).Value;
  pFVar4 = (FMixerBuffer *)0x0;
  uVar5 = (uint)bVar1;
  if ((!param_3) || ((bVar1 < 6 && ((0x29U >> (uVar5 & 0x1f) & 1) != 0)))) {
    if (uVar5 == 0) {
      (**(code **)(param_1->_padding_ + 0x60))(param_1,param_2,CONCAT71(in_register_00000081,1),0,0)
      ;
      if (((param_2->DecompressionType).Value == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InWave->DecompressionType != DTYPE_Setup",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                             ,0xcd,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMixerBuffer *)(*pcVar2)();
        return pFVar4;
      }
      pFVar4 = Init(param_1,param_2,param_3);
      goto LAB_146505f89;
    }
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        this = ::operator_new(0x68);
        if (this == (FMixerBuffer *)0x0) {
          _DAT_00000008 = 0;
          param_2->ResourceID = 0;
        }
        else {
          pFVar4 = FMixerBuffer(this,param_1,param_2,PCMRealTime);
          *(undefined4 *)&pFVar4->_padding_ = 0;
          param_2->ResourceID = 0;
        }
      }
      else if (uVar5 == 5) {
        pFVar4 = CreateStreamingBuffer(param_1,param_2);
      }
      goto LAB_146505f89;
    }
  }
  pFVar4 = CreateRealTimeBuffer(param_1,param_2);
LAB_146505f89:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar4;
}

// IsRealTimeBuffer @ 14650f0b0

bool __thiscall Audio::FMixerBuffer::IsRealTimeBuffer(FMixerBuffer *this)

{
  if ((this->BufferType != PCMRealTime) && (this->BufferType != Streaming)) {
    return false;
  }
  return true;
}

// IsRealTimeSourceReady @ 14650f0d0

bool __thiscall Audio::FMixerBuffer::IsRealTimeSourceReady(FMixerBuffer *this)

{
  IAudioTask *pIVar1;
  char cVar2;
  
  if (this->RealtimeAsyncHeaderParseTask != (IAudioTask *)0x0) {
    cVar2 = (**(code **)((longlong)*this->RealtimeAsyncHeaderParseTask + 8))();
    if (cVar2 != '\0') {
      pIVar1 = this->RealtimeAsyncHeaderParseTask;
      if (pIVar1 != (IAudioTask *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
      this->RealtimeAsyncHeaderParseTask = (IAudioTask *)0x0;
    }
    return (bool)cVar2;
  }
  return true;
}

// ReadCompressedInfo @ 146516c80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerBuffer::ReadCompressedInfo(FMixerBuffer *this,USoundWave *param_1)

{
  ICompressedAudioInfo *pIVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uchar *puVar5;
  FStaticBasicLogRecord *pFVar6;
  bool bVar7;
  bool bVar8;
  undefined1 local_48 [4];
  uint local_44;
  uint local_3c;
  void *local_30;
  undefined8 local_28;
  
  if (this->DecompressionState == (ICompressedAudioInfo *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return false;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"FMixerBuffer::ReadCompressedInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  local_30 = (void *)0x0;
  local_28 = 0;
  puVar5 = USoundWave::GetResourceData(param_1);
  if ((puVar5 == (uchar *)0x0) || (iVar4 = USoundWave::GetResourceSize(param_1), iVar4 == 0)) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      pFVar6 = &::LOG_Static;
LAB_146516df6:
      UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    pIVar1 = this->DecompressionState;
    pcVar2 = *(code **)(pIVar1->_padding_ + 8);
    iVar4 = USoundWave::GetResourceSize(param_1);
    puVar5 = USoundWave::GetResourceData(param_1);
    cVar3 = (*pcVar2)(pIVar1,puVar5,iVar4,local_48);
    if (cVar3 != '\0') {
      bVar7 = true;
      this->NumFrames = (uint)((ulonglong)local_3c / ((ulonglong)local_44 * 2));
      goto LAB_146516e05;
    }
    if (2 < (byte)LogAudioMixer._0_1_) {
      if ((int)this->_padding_ == 0) {
        pFVar6 = &::LOG_Static;
      }
      else {
        pFVar6 = &::LOG_Static;
      }
      goto LAB_146516df6;
    }
  }
  bVar7 = false;
LAB_146516e05:
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// Seek @ 14651ec50

void __thiscall Audio::FMixerBuffer::Seek(FMixerBuffer *this,float param_1)

{
  ICompressedAudioInfo *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId165,"FMixerBuffer::Seek",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
               ,0xa5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId165);
  }
  pIVar1 = this->DecompressionState;
  if (pIVar1 == (ICompressedAudioInfo *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8947371335265288025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBuffer.cpp"
                       ,0xa7,"DecompressionState");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,param_1);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

