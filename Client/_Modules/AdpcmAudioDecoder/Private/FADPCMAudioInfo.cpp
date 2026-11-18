// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 25

// FADPCMAudioInfo @ 146bcbcb0

FADPCMAudioInfo * __thiscall FADPCMAudioInfo::FADPCMAudioInfo(FADPCMAudioInfo *this)

{
  undefined1 *puVar1;
  
  ICompressedAudioInfo::ICompressedAudioInfo((ICompressedAudioInfo *)this);
  this->_padding_ = (longlong)&___7FADPCMAudioInfo__6B_;
  (this->WaveInfo).WaveCues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveInfo).WaveCues.ArrayNum = 0;
  (this->WaveInfo).WaveCues.ArrayMax = 0;
  (this->WaveInfo).WaveSampleLoops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveInfo).WaveSampleLoops.ArrayNum = 0;
  (this->WaveInfo).WaveSampleLoops.ArrayMax = 0;
  (this->WaveInfo).TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
  this->NumConsecutiveReadFailiures = 0;
  this->UncompressedBlockSize = 0;
  this->CompressedBlockSize = 0;
  this->BlockSize = 0;
  this->StreamBufferSize = 0;
  this->TotalDecodedSize = 0;
  this->NumChannels = 0;
  this->Format = 0;
  this->PreviouslyRequestedChunkIndex = 0;
  this->UncompressedBlockData = (uchar *)0x0;
  this->SamplesPerBlock = 0;
  this->FirstChunkSampleDataOffset = 0;
  this->FirstChunkSampleDataIndex = 0;
  FAudioChunkHandle::FAudioChunkHandle(&this->CurCompressedChunkHandle);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CurCompressedChunkHandleCriticalSection,4000);
  this->bNewSeekRequest = '\0';
  this->bSeekedFowardToNextChunk = '\0';
  this->bSeekPendingRead = '\0';
  this->bDecompressorReleased = false;
  this->TargetSeekFrame = (atomic<unsigned_int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StreamSeekCriticalSection,4000);
  return this;
}

// ~FADPCMAudioInfo @ 146bcbdc0

void __thiscall FADPCMAudioInfo::~FADPCMAudioInfo(FADPCMAudioInfo *this)

{
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FADPCMAudioInfo__6B_;
  if (this->UncompressedBlockData != (uchar *)0x0) {
    FMemory::Free(this->UncompressedBlockData);
    this->UncompressedBlockData = (uchar *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StreamSeekCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurCompressedChunkHandleCriticalSection);
  FAudioChunkHandle::~FAudioChunkHandle(&this->CurCompressedChunkHandle);
  TVar1 = (this->WaveInfo).TimecodeInfo;
  if (TVar1 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  pFVar2 = (this->WaveInfo).WaveSampleLoops.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FWaveCue,int>
            ((FWaveCue *)(this->WaveInfo).WaveCues.AllocatorInstance.Data,
             (this->WaveInfo).WaveCues.ArrayNum);
  pFVar2 = (this->WaveInfo).WaveCues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ICompressedAudioInfo::~ICompressedAudioInfo((ICompressedAudioInfo *)this);
  return;
}

// EnableHalfRate @ 146bcd340

void __thiscall FADPCMAudioInfo::EnableHalfRate(FADPCMAudioInfo *this,bool param_1)

{
  return;
}

// ExpandFile @ 146bcd350

void __thiscall
FADPCMAudioInfo::ExpandFile(FADPCMAudioInfo *this,uchar *param_1,FSoundQualityInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                       ,0x1ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146bcd3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0,this->TotalDecodedSize);
  return;
}

// GetCurrentChunkIndex @ 146bcd3c0

int __thiscall FADPCMAudioInfo::GetCurrentChunkIndex(FADPCMAudioInfo *this)

{
  return this->CurrentChunkIndex;
}

// GetCurrentChunkOffset @ 146bcd3d0

int __thiscall FADPCMAudioInfo::GetCurrentChunkOffset(FADPCMAudioInfo *this)

{
  return this->CurrentChunkBufferOffset;
}

// GetLoadedChunk @ 146bcd420

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
FADPCMAudioInfo::GetLoadedChunk
          (FADPCMAudioInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar5;
  FAudioChunkHandle *pFVar6;
  FAudioChunkHandle *this_01;
  uint local_res18 [4];
  ulonglong in_stack_ffffffffffffff88;
  TArrayView<unsigned_char_const_,int> local_68;
  FADPCMAudioInfo *local_58;
  uint *local_50;
  FAudioChunkHandle local_48;
  
  local_res18[0] = param_2;
  if ((param_2 == 0) ||
     (uVar3 = rand(), ChanceForIntentionalChunkMissCVar <= (float)(uVar3 & 0x7fff) * __real_38000100
     )) {
    if (param_1->Object == (FSoundWaveProxy *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7508409423971222527>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x3ff,"InSoundWave.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar1)();
        return puVar4;
      }
    }
    else {
      uVar3 = FSoundWaveProxy::GetNumChunks(param_1->Object);
      if (local_res18[0] < uVar3) {
        if (local_res18[0] != 0) {
          if ((((this->bSeekPendingRead == '\0') &&
               (local_res18[0] != this->FirstChunkSampleDataIndex)) &&
              (local_res18[0] != this->PreviouslyRequestedChunkIndex)) &&
             (local_res18[0] != this->PreviouslyRequestedChunkIndex + 1)) {
            local_50 = local_res18;
            local_58 = this;
            `FADPCMAudioInfo::GetLoadedChunk'::__l32::<lambda_1>::operator()(&local_58);
          }
          this_00 = IStreamingManager::Get();
          pIVar5 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
          this_01 = &this->CurCompressedChunkHandle;
          pFVar6 = (FAudioChunkHandle *)
                   (**(code **)(*(longlong *)pIVar5 + 0xb0))
                             (pIVar5,&local_48,param_1,local_res18[0],
                              in_stack_ffffffffffffff88 & 0xffffffffffffff00,1);
          FAudioChunkHandle::operator=(this_01,pFVar6);
          FAudioChunkHandle::~FAudioChunkHandle(&local_48);
          uVar3 = FAudioChunkHandle::Num(this_01);
          *param_3 = uVar3;
          this->PreviouslyRequestedChunkIndex = local_res18[0];
          puVar4 = FAudioChunkHandle::GetData(this_01);
          return puVar4;
        }
        FSoundWaveProxy::GetZerothChunk(&local_68,param_1,true);
        *param_3 = local_68.ArrayNum;
        this->PreviouslyRequestedChunkIndex = local_res18[0];
        return local_68.DataPtr;
      }
    }
  }
  else if (3 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    *param_3 = 0;
    return (uchar *)0x0;
  }
  *param_3 = 0;
  return (uchar *)0x0;
}

// GetSourceBufferSize @ 146bcd660

uint __thiscall FADPCMAudioInfo::GetSourceBufferSize(FADPCMAudioInfo *this)

{
  return this->SrcBufferDataSize;
}

// GetStreamBufferSize @ 146bcd670

int __thiscall FADPCMAudioInfo::GetStreamBufferSize(FADPCMAudioInfo *this)

{
  return this->StreamBufferSize;
}

// ProcessSeekRequest @ 146bcd9b0

void __thiscall FADPCMAudioInfo::ProcessSeekRequest(FADPCMAudioInfo *this)

{
  if (this->bNewSeekRequest != 0) {
    SeekToFrameInternal(this,(uint)this->TargetSeekFrame);
    return;
  }
  return;
}

// ReadCompressedData @ 146bcd9d0

bool __thiscall
FADPCMAudioInfo::ReadCompressedData(FADPCMAudioInfo *this,uchar *param_1,bool param_2,uint param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uchar *_Dst;
  uint uVar10;
  uint uVar11;
  ulonglong _Size;
  ulonglong uVar12;
  
  uVar6 = this->NumChannels * 2;
  _Size = (ulonglong)param_3;
  if ((param_1 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Destination",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x143,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_3 % uVar6 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferSize % ChannelSampleSize == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x144,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (this->bNewSeekRequest != 0) {
    SeekToFrameInternal(this,(uint)this->TargetSeekFrame);
  }
  uVar10 = this->TotalSamplesPerChannel;
  uVar11 = this->TotalSamplesStreamed;
  if ((uVar10 <= uVar11) && (!param_2)) {
    memset(param_1,0,_Size);
    return true;
  }
  bVar3 = false;
  _Dst = param_1;
  if (this->Format == 2) {
    while (param_3 != 0) {
      uVar6 = this->UncompressedBlockSize;
      uVar10 = this->CurrentUncompressedBlockSampleIndex;
      if (uVar6 >> 1 <= uVar10) {
        iVar8 = 0;
        if (0 < this->NumChannels) {
          do {
            bVar5 = ADPCM::DecodeBlock((this->WaveInfo).SampleDataStart +
                                       (iVar8 * this->TotalCompressedBlocksPerChannel +
                                       this->CurrentCompressedBlockIndex) *
                                       this->CompressedBlockSize,this->CompressedBlockSize,
                                       (short *)(this->UncompressedBlockData +
                                                iVar8 * this->UncompressedBlockSize));
            if (!bVar5) {
              memset(param_1,0,_Size);
              *(undefined1 *)&this->_padding_ = 1;
              return true;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < this->NumChannels);
          uVar6 = this->UncompressedBlockSize;
        }
        this->CurrentCompressedBlockIndex = this->CurrentCompressedBlockIndex + 1;
        uVar10 = 0;
        this->CurrentUncompressedBlockSampleIndex = 0;
      }
      uVar10 = (uVar6 >> 1) - uVar10;
      uVar6 = (uint)(_Size / (ulonglong)((longlong)this->NumChannels * 2));
      if (uVar10 < uVar6) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DecompressedSamplesToCopy > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                             ,0x171,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar11 = 0;
      uVar10 = this->TotalSamplesPerChannel - this->TotalSamplesStreamed;
      if (uVar10 < uVar6) {
        uVar6 = uVar10;
      }
      if (uVar6 != 0) {
        do {
          iVar8 = 0;
          if (0 < this->NumChannels) {
            do {
              uVar10 = iVar8 * this->UncompressedBlockSize;
              iVar8 = iVar8 + 1;
              *(undefined2 *)_Dst =
                   *(undefined2 *)
                    (this->UncompressedBlockData +
                    (ulonglong)uVar10 +
                    (ulonglong)(this->CurrentUncompressedBlockSampleIndex + uVar11) * 2);
              _Dst = _Dst + 2;
            } while (iVar8 < this->NumChannels);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
      this->TotalSamplesStreamed = this->TotalSamplesStreamed + uVar6;
      this->CurrentUncompressedBlockSampleIndex = this->CurrentUncompressedBlockSampleIndex + uVar6;
      param_3 = (int)_Size + uVar6 * this->NumChannels * -2;
      _Size = (ulonglong)param_3;
      if (this->TotalSamplesPerChannel <= this->TotalSamplesStreamed) {
        bVar3 = true;
        if (!param_2) goto LAB_146bcdd0c;
        this->CurrentUncompressedBlockSampleIndex = this->UncompressedBlockSize >> 1;
        this->CurrentCompressedBlockIndex = 0;
        this->TotalSamplesStreamed = 0;
      }
    }
  }
  else {
    uVar12 = 0;
    do {
      do {
        if (param_3 == 0) goto LAB_146bcdd16;
        uVar7 = (uint)(_Size / uVar6);
        uVar9 = uVar10 - uVar11;
        if (uVar7 <= uVar10 - uVar11) {
          uVar9 = uVar7;
        }
        memcpy(param_1 + uVar12 * 2,(this->WaveInfo).SampleDataStart + uVar11 * uVar6,
               (ulonglong)(uVar9 * uVar6));
        this->TotalSamplesStreamed = this->TotalSamplesStreamed + uVar9;
        param_3 = (int)_Size - uVar9 * uVar6;
        _Size = (ulonglong)param_3;
        uVar11 = this->TotalSamplesStreamed;
        uVar12 = (ulonglong)((int)uVar12 + uVar9 * this->NumChannels);
        uVar10 = this->TotalSamplesPerChannel;
      } while (uVar11 < uVar10);
      uVar11 = 0;
      this->TotalSamplesStreamed = 0;
      bVar3 = true;
    } while (param_2);
    _Dst = param_1 + uVar12 * 2;
LAB_146bcdd0c:
    bVar3 = true;
    memset(_Dst,0,_Size);
  }
LAB_146bcdd16:
  this->bNewSeekRequest = '\0';
  this->bSeekPendingRead = '\0';
  return bVar3;
}

// ReadCompressedInfo @ 146bcdd40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FADPCMAudioInfo::ReadCompressedInfo
          (FADPCMAudioInfo *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  ushort uVar1;
  ushort uVar2;
  FScriptContainerElement *_Src;
  ushort *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  uchar *puVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  uint uVar11;
  void *local_res10;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  if (param_1 == (uchar *)0x0) {
    if (param_3 == (FSoundQualityInfo *)0x0) {
      pFVar7 = ::FString::FString(&local_18,L"Unknown");
      FVar9.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_20 = (param_3->DebugName).Data.ArrayNum;
      lVar10 = (longlong)local_20;
      _Src = (param_3->DebugName).Data.AllocatorInstance.Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      FVar9.Data = (FScriptContainerElement *)0x0;
      if (local_20 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar10 * 2);
        FVar9.Data = local_28.Data;
      }
    }
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
  }
  else {
    this->SrcBufferData = param_1;
    this->SrcBufferDataSize = param_2;
    bVar5 = FWaveModInfo::ReadWaveInfo
                      (&this->WaveInfo,param_1,param_2,(FString *)0x0,false,&local_res10);
    if (bVar5) {
      uVar1 = *(this->WaveInfo).pFormatTag;
      puVar3 = (this->WaveInfo).pChannels;
      this->Format = (uint)uVar1;
      uVar2 = *puVar3;
      this->NumChannels = (uint)uVar2;
      if (uVar1 == 2) {
        this->TotalSamplesPerChannel = *(uint *)((longlong)local_res10 + 0x32);
        this->SamplesPerBlock = (uint)*(ushort *)((longlong)local_res10 + 0x12);
        uVar1 = *(this->WaveInfo).pBlockAlign;
        this->BlockSize = (uint)uVar1;
        this->CompressedBlockSize = (uint)uVar1;
        uVar11 = (uint)uVar1 * 4 - 0x18;
        this->UncompressedBlockSize = uVar11;
        this->StreamBufferSize = (int)(0x12c0 / (ulonglong)((uint)uVar1 * 2 - 0xc)) * uVar11;
        this->TotalDecodedSize =
             ((((this->WaveInfo).SampleDataSize - 1) + (uint)uVar1) / (uint)uVar1) * uVar11;
        puVar8 = FMemory::Realloc(this->UncompressedBlockData,(ulonglong)(uVar11 * uVar2),0);
        this->UncompressedBlockData = puVar8;
        if ((puVar8 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("UncompressedBlockData != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                               ,0x116,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this->TotalCompressedBlocksPerChannel =
             (uint)(((ulonglong)(((this->WaveInfo).SampleDataSize - 1) + this->CompressedBlockSize)
                    / (ulonglong)this->CompressedBlockSize) / (ulonglong)(uint)this->NumChannels);
      }
      else {
        if (uVar1 != 1) {
          if ((byte)LogAudio._0_1_ < 2) {
            return false;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          return false;
        }
        uVar11 = (this->WaveInfo).SampleDataSize;
        this->TotalDecodedSize = uVar11;
        this->CompressedBlockSize = 0;
        this->BlockSize = 0;
        this->TotalSamplesPerChannel =
             SUB164((ZEXT816(0) << 0x40 | ZEXT416(uVar11 >> 1)) / ZEXT216(uVar2),0);
        this->UncompressedBlockSize = 0;
        this->StreamBufferSize = 0;
        this->UncompressedBlockData = (uchar *)0x0;
        this->TotalCompressedBlocksPerChannel = 0;
      }
      if (param_3 != (FSoundQualityInfo *)0x0) {
        uVar11 = *(this->WaveInfo).pSamplesPerSec;
        param_3->SampleRate = uVar11;
        param_3->NumChannels = (uint)*(this->WaveInfo).pChannels;
        param_3->SampleDataSize = this->TotalDecodedSize;
        param_3->Duration = (float)this->TotalSamplesPerChannel / (float)uVar11;
      }
      this->CurrentUncompressedBlockSampleIndex = this->UncompressedBlockSize >> 1;
      this->CurrentCompressedBlockIndex = 0;
      this->TotalSamplesStreamed = 0;
      return true;
    }
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  return false;
}

// ReleaseStreamChunk @ 146bce1c0

bool __thiscall FADPCMAudioInfo::ReleaseStreamChunk(FADPCMAudioInfo *this,bool param_1)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  BOOL BVar2;
  FAudioChunkHandle *pFVar3;
  FAudioChunkHandle local_38;
  
  this->bNewSeekRequest = '\0';
  this->bSeekPendingRead = '\0';
  lpCriticalSection = &this->CurCompressedChunkHandleCriticalSection;
  if (param_1) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (BVar2 == 0) {
      return false;
    }
  }
  pFVar3 = FAudioChunkHandle::FAudioChunkHandle(&local_38);
  FAudioChunkHandle::operator=(&this->CurCompressedChunkHandle,pFVar3);
  FAudioChunkHandle::~FAudioChunkHandle(&local_38);
  this->bDecompressorReleased = true;
  this->CurrentChunkBufferOffset = 0;
  this->CurrentChunkDataSize = 0;
  this->CurCompressedChunkData = (uchar *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// ResetSeekState @ 146bce2f0

void __thiscall FADPCMAudioInfo::ResetSeekState(FADPCMAudioInfo *this)

{
  undefined1 *puVar1;
  
  this->bNewSeekRequest = '\0';
  this->bSeekPendingRead = '\0';
  return;
}

// SeekToFrame @ 146bce590

void __thiscall FADPCMAudioInfo::SeekToFrame(FADPCMAudioInfo *this,uint param_1)

{
  if (bDisableADPCMSeekingCVar == 0) {
    LOCK();
    this->TargetSeekFrame = (atomic<unsigned_int>)param_1;
    UNLOCK();
    this->bNewSeekRequest = '\x01';
  }
  return;
}

// SeekToFrameInternal @ 146bce7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FADPCMAudioInfo::SeekToFrameInternal(FADPCMAudioInfo *this,uint param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FSoundWaveProxy *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int *local_res8;
  int local_res10 [2];
  
  uVar12 = 0;
  uVar6 = 0;
  this->CurCompressedChunkData = (uchar *)0x0;
  if (this->UncompressedBlockData != (uchar *)0x0) {
    memset(this->UncompressedBlockData,0,
           (ulonglong)(this->NumChannels * this->UncompressedBlockSize));
  }
  if (5 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  if (param_1 == 0) {
    this->bNewSeekRequest = '\0';
    this->bSeekPendingRead = '\0';
    this->CurrentUncompressedBlockSampleIndex = this->UncompressedBlockSize >> 1;
    this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
    this->CurrentChunkBufferOffset = this->FirstChunkSampleDataOffset;
    this->CurrentCompressedBlockIndex = 0;
    this->TotalSamplesStreamed = 0;
    return;
  }
  if (((this->WaveInfo).pSamplesPerSec == (uint *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaveInfo.pSamplesPerSec != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x7d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = this->TotalSamplesPerChannel - 1;
  if (param_1 < uVar5) {
    uVar5 = param_1;
  }
  this->TotalSamplesStreamed = uVar5;
  if ((FSoundWaveProxy *)this->_padding_ == (FSoundWaveProxy *)0x0) {
    if (this->Format == 1) {
      if (uVar5 != 0) {
        uVar6 = uVar5;
      }
      this->bSeekPendingRead = '\x01';
      this->TotalSamplesStreamed = uVar6;
    }
    else {
      if (uVar5 != 0) {
        uVar12 = (ulonglong)uVar5;
      }
      uVar6 = (uint)(uVar12 / this->SamplesPerBlock);
      this->CurrentCompressedBlockIndex = uVar6;
      this->bSeekPendingRead = '\x01';
      this->TotalSamplesStreamed = uVar6 * this->SamplesPerBlock;
    }
  }
  else {
    uVar5 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
    if (uVar5 == 0) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->
                         ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
      uVar5 = FSoundWaveProxy::GetNumChunks(pFVar9);
      if (this->Format == 2) {
        uVar6 = this->TotalSamplesStreamed / this->SamplesPerBlock;
        iVar10 = this->NumChannels * this->BlockSize;
        this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
        this->CurrentCompressedBlockIndex = uVar6;
        this->CurrentChunkBufferOffset = this->FirstChunkSampleDataOffset;
        if (uVar6 != 0) {
          while( true ) {
            if ((this->_padding_ == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = FSoundWaveProxy::GetSizeOfChunk
                              ((FSoundWaveProxy *)this->_padding_,this->CurrentChunkIndex);
            uVar6 = this->CurrentChunkBufferOffset + iVar10;
            if (uVar7 <= uVar6) {
              local_res10[0] = (this->CurrentChunkBufferOffset - uVar7) + iVar10;
              if (local_res10[0] != 0) {
                local_res8 = local_res10;
                `FADPCMAudioInfo::SeekToFrameInternal'::__l72::<lambda_1>::operator()(&local_res8);
              }
              this->CurrentChunkIndex = this->CurrentChunkIndex + 1;
              uVar6 = 0;
            }
            this->CurrentChunkBufferOffset = uVar6;
            if (uVar5 <= this->CurrentChunkIndex) break;
            uVar6 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar6;
            if (this->CurrentCompressedBlockIndex <= uVar6) {
              this->bSeekPendingRead = '\x01';
              return;
            }
          }
          this->bSeekPendingRead = '\x01';
          this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
          this->CurrentChunkBufferOffset = this->FirstChunkSampleDataOffset;
          return;
        }
      }
      else {
        if (this->Format != 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                             ,0xe3,L"");
          if (!bVar4) {
            return;
          }
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = this->FirstChunkSampleDataIndex;
        uVar3 = this->NumChannels * 2;
        uVar11 = uVar3 * this->TotalSamplesStreamed;
        pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->
                           ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
        uVar8 = FSoundWaveProxy::GetSizeOfChunk(pFVar9,uVar7);
        if (uVar8 < uVar11) {
          do {
            uVar6 = (uint)uVar12;
            if (uVar5 <= uVar7) {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7508409423971221709>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                 ,0xcd,"TargetChunkInRange");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              break;
            }
            this->CurrentChunkBufferOffset = this->CurrentChunkBufferOffset - uVar8;
            uVar7 = uVar7 + 1;
            uVar6 = uVar6 + uVar8;
            uVar12 = (ulonglong)uVar6;
            if ((this->_padding_ == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = FSoundWaveProxy::GetSizeOfChunk((FSoundWaveProxy *)this->_padding_,uVar7);
          } while (uVar6 + uVar8 < uVar11);
          if ((uVar11 < uVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentBytes <= TotalByteSizeToSeek",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                 ,0xda,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        this->CurrentChunkIndex = uVar7;
        this->CurrentChunkBufferOffset = (uVar11 - (uVar11 - uVar6) % uVar3) - uVar6;
      }
      this->bSeekPendingRead = '\x01';
    }
  }
  return;
}

// SeekToTime @ 146bcebe0

void __thiscall FADPCMAudioInfo::SeekToTime(FADPCMAudioInfo *this,float param_1)

{
  if (bDisableADPCMSeekingCVar == 0) {
    LOCK();
    this->TargetSeekFrame = SUB84((longlong)((float)*(this->WaveInfo).pSamplesPerSec * param_1),0);
    UNLOCK();
    this->bNewSeekRequest = '\x01';
  }
  return;
}

// StreamCompressedData @ 146bcec60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FADPCMAudioInfo::StreamCompressedData
          (FADPCMAudioInfo *this,uchar *param_1,bool param_2,uint param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  FSoundWaveProxy *pFVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uchar *_Dst;
  bool local_res8;
  uint local_res20;
  undefined1 local_58;
  undefined1 local_57 [3];
  uint local_54;
  
  lpCriticalSection = &this->CurCompressedChunkHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *param_4 = 0;
  if (this->bDecompressorReleased == false) {
    if ((param_1 == (uchar *)0x0) || (param_3 == 0)) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
LAB_146bcf73e:
      local_res8 = false;
    }
    else if (this->NumChannels == 0) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      memset(param_1,0,(ulonglong)param_3);
      local_res8 = true;
    }
    else {
      local_54 = this->NumChannels * 2;
      if (param_3 % local_54 == 0) {
        if (this->bNewSeekRequest != 0) {
          SeekToFrameInternal(this,(uint)this->TargetSeekFrame);
        }
        local_res8 = false;
        _Dst = param_1;
        uVar5 = local_54;
        local_res20 = param_3;
        if (this->Format == 2) {
          do {
            if (this->CurCompressedChunkData == (uchar *)0x0) goto LAB_146bceed7;
            uVar10 = this->CurrentUncompressedBlockSampleIndex;
            if (this->UncompressedBlockSize >> 1 <= uVar10) {
              if (this->CurCompressedChunkData == (uchar *)0x0) {
LAB_146bceed7:
                if ((this->_padding_ == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                uVar10 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
                uVar5 = this->CurrentChunkIndex;
                local_res20 = param_3;
                if (uVar10 <= uVar5) {
                  uVar5 = this->FirstChunkSampleDataIndex;
                  this->CurrentChunkIndex = uVar5;
                  this->CurrentChunkBufferOffset = this->FirstChunkSampleDataOffset;
                  local_res8 = true;
                  this->CurrentUncompressedBlockSampleIndex = 0;
                  this->TotalSamplesStreamed = 0;
                  this->CurCompressedChunkData = (uchar *)0x0;
                  if (!param_2) goto LAB_146bcf1b8;
                }
                puVar8 = GetLoadedChunk(this,(TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_,uVar5
                                        ,&this->CurrentChunkDataSize);
                this->CurCompressedChunkData = puVar8;
                if (puVar8 == (uchar *)0x0) {
                  if ((this->bSeekPendingRead == '\0') && (5 < (byte)LogAudio._0_1_)) {
                    UE::Logging::Private::BasicLog<6>
                              ((FStaticBasicLogRecord *)&PTR_u_Missed_Deadline_1514124b8,
                               (FLogCategoryBase *)&LogAudio);
                  }
                  if ((ADPCMOnlySeekForwardOneChunkCVar == 0) ||
                     (this->bSeekedFowardToNextChunk == '\0')) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (((ADPCMDisableSeekForwardOnChunkMissesCVar == 0) && (!bVar3)) &&
                     ((this->bSeekPendingRead != '\0' ||
                      (this->FirstChunkSampleDataIndex < this->CurrentChunkIndex)))) {
                    puVar12 = &this->CurrentChunkBufferOffset;
                    uVar5 = this->TotalSamplesStreamed;
                    if (this->TotalSamplesPerChannel - this->TotalSamplesStreamed <
                        param_3 / local_54) {
                      this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
                      *puVar12 = this->FirstChunkSampleDataOffset;
                      this->CurrentUncompressedBlockSampleIndex = 0;
                      this->TotalSamplesStreamed = 0;
                      this->CurCompressedChunkData = (uchar *)0x0;
                      uVar5 = 0;
                      if (!param_2) {
                        memset(_Dst,0,(ulonglong)param_3);
                        local_res8 = true;
                        break;
                      }
                    }
                    *puVar12 = *puVar12 +
                               (param_3 / (this->NumChannels * this->UncompressedBlockSize)) *
                               this->CompressedBlockSize * this->NumChannels;
                    this->TotalSamplesStreamed = param_3 / local_54 + uVar5;
                    pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                       ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
                    uVar5 = FSoundWaveProxy::GetSizeOfChunk(pFVar9,this->CurrentChunkIndex);
                    if (uVar5 <= *puVar12) {
                      if ((this->bSeekedFowardToNextChunk != '\0') &&
                         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                            (&bGEnsureHasExecuted<7508409423971222253>,true,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                             ,0x2ed,"!bSeekedFowardToNextChunk"), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        uVar4 = (*pcVar2)();
                        return (bool)uVar4;
                      }
                      if ((this->bSeekPendingRead == '\0') &&
                         (this->CurrentChunkIndex != this->PreviouslyRequestedChunkIndex)) {
                        local_58 = 0;
                        `FADPCMAudioInfo::StreamCompressedData'::__l165::<lambda_1>::operator()
                                  (&local_58);
                      }
                      this->CurrentChunkIndex = this->CurrentChunkIndex + 1;
                      *puVar12 = *puVar12 - uVar5;
                      pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                         ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
                      uVar5 = FSoundWaveProxy::GetSizeOfChunk(pFVar9,this->CurrentChunkIndex);
                      if ((uVar5 <= *puVar12) &&
                         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                            (&bGEnsureHasExecuted<7508409423971222261>,true,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                             ,0x2f5,
                                             "CurrentChunkBufferOffset < StreamingSoundWave->GetSizeOfChunk(CurrentChunkIndex)"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        uVar4 = (*pcVar2)();
                        return (bool)uVar4;
                      }
                      this->bSeekedFowardToNextChunk = '\x01';
                      if ((*puVar12 % this->CompressedBlockSize != 0) &&
                         (bVar3 = `FADPCMAudioInfo::StreamCompressedData'::__l166::<lambda_2>::
                                  operator()(local_57), !bVar3)) {
                        *puVar12 = *puVar12 & -this->CompressedBlockSize;
                      }
                      uVar5 = this->CurrentChunkIndex;
                      pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                         ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
                      uVar10 = FSoundWaveProxy::GetNumChunks(pFVar9);
                      if (uVar10 <= uVar5) {
                        this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
                        *puVar12 = this->FirstChunkSampleDataOffset;
                        this->CurrentUncompressedBlockSampleIndex = 0;
                        this->TotalSamplesStreamed = 0;
                        this->CurCompressedChunkData = (uchar *)0x0;
                        if (!param_2) goto LAB_146bcf1b8;
                      }
                    }
                  }
                  memset(_Dst,0,(ulonglong)param_3);
                  goto LAB_146bcf73e;
                }
                if ((this->CurrentChunkIndex == this->FirstChunkSampleDataIndex) &&
                   (this->bSeekPendingRead == '\0')) {
                  this->CurrentChunkBufferOffset = this->FirstChunkSampleDataOffset;
                }
                this->bNewSeekRequest = '\0';
                this->bSeekPendingRead = '\0';
              }
              else if (this->CurrentChunkDataSize <= this->CurrentChunkBufferOffset) {
                if (this->bSeekedFowardToNextChunk == '\0') {
                  if (((this->bSeekPendingRead == '\0') &&
                      (this->CurrentChunkIndex != this->PreviouslyRequestedChunkIndex)) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("bSeekPendingRead || CurrentChunkIndex == PreviouslyRequestedChunkIndex"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                         ,0x297,L""), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  uVar5 = this->CurrentChunkIndex + 1;
                  this->CurrentChunkIndex = uVar5;
                  if (this->bSeekPendingRead == '\0') {
                    if ((uVar5 == this->FirstChunkSampleDataIndex) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("CurrentChunkIndex != FirstChunkSampleDataIndex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                           ,0x29e,L""), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      uVar4 = (*pcVar2)();
                      return (bool)uVar4;
                    }
                    this->CurrentChunkBufferOffset = 0;
                  }
                }
                this->bSeekedFowardToNextChunk = '\0';
                goto LAB_146bceed7;
              }
              iVar13 = 0;
              if (0 < this->NumChannels) {
                do {
                  bVar3 = ADPCM::DecodeBlock(this->CurCompressedChunkData +
                                             (ulonglong)this->CurrentChunkBufferOffset +
                                             (ulonglong)(this->CompressedBlockSize * iVar13),
                                             this->CompressedBlockSize,
                                             (short *)(this->UncompressedBlockData +
                                                      iVar13 * this->UncompressedBlockSize));
                  if (!bVar3) {
                    memset(param_1,0,(ulonglong)param_3);
                    *(undefined1 *)&this->_padding_ = 1;
                    local_res8 = true;
                    goto LAB_146bcf741;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < this->NumChannels);
              }
              uVar10 = 0;
              this->CurrentUncompressedBlockSampleIndex = 0;
              this->CurrentChunkBufferOffset =
                   this->CurrentChunkBufferOffset + this->CompressedBlockSize * this->NumChannels;
              uVar5 = local_54;
            }
            uVar10 = (this->UncompressedBlockSize >> 1) - uVar10;
            uVar7 = param_3 / uVar5;
            if (uVar10 < param_3 / uVar5) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DecompressedSamplesToCopy > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                   ,0x339,L""), uVar5 = local_54, bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            uVar10 = this->TotalSamplesPerChannel - this->TotalSamplesStreamed;
            if (uVar10 < uVar7) {
              uVar7 = uVar10;
            }
            uVar10 = 0;
            if (uVar7 != 0) {
              do {
                uVar11 = 0;
                if (0 < this->NumChannels) {
                  do {
                    uVar6 = uVar11 * this->UncompressedBlockSize;
                    uVar11 = uVar11 + 1;
                    *(undefined2 *)_Dst =
                         *(undefined2 *)
                          (this->UncompressedBlockData +
                          (ulonglong)uVar6 +
                          (ulonglong)(this->CurrentUncompressedBlockSampleIndex + uVar10) * 2);
                    _Dst = _Dst + 2;
                    *param_4 = *param_4 + 2;
                  } while ((int)uVar11 < this->NumChannels);
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar7);
            }
            puVar12 = &this->CurrentUncompressedBlockSampleIndex;
            this->TotalSamplesStreamed = this->TotalSamplesStreamed + uVar7;
            *puVar12 = *puVar12 + uVar7;
            param_3 = param_3 - uVar7 * uVar5;
            if (this->TotalSamplesPerChannel <= this->TotalSamplesStreamed) {
              local_res8 = true;
              *puVar12 = 0;
              this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
              this->CurrentChunkBufferOffset = 0;
              this->TotalSamplesStreamed = 0;
              this->CurCompressedChunkData = (uchar *)0x0;
              if (!param_2) goto LAB_146bcf183;
            }
          } while (param_3 != 0);
        }
        else {
          do {
            puVar8 = this->CurCompressedChunkData;
            if (puVar8 == (uchar *)0x0) {
LAB_146bcf4bf:
              if ((this->_padding_ == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              uVar7 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
              uVar5 = this->CurrentChunkIndex;
              puVar12 = &this->CurrentChunkBufferOffset;
              uVar10 = 0;
              if (uVar7 <= uVar5) {
                uVar5 = this->FirstChunkSampleDataIndex;
                this->CurrentChunkIndex = uVar5;
                *puVar12 = this->FirstChunkSampleDataOffset;
                local_res8 = true;
                this->TotalSamplesStreamed = 0;
                this->CurCompressedChunkData = (uchar *)0x0;
                if (!param_2) goto LAB_146bcf1b8;
              }
              puVar8 = GetLoadedChunk(this,(TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_,uVar5,
                                      &this->CurrentChunkDataSize);
              uVar4 = this->field_0x17c;
              this->CurCompressedChunkData = puVar8;
              if (puVar8 == (uchar *)0x0) {
                if ((this->bSeekPendingRead == '\0') && (5 < (byte)LogAudio._0_1_)) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
                }
                memset(_Dst,0,(ulonglong)local_res20);
                this->NumConsecutiveReadFailiures = this->NumConsecutiveReadFailiures + 1;
                if ((2 < (byte)LogAudio._0_1_) &&
                   (ADPCMReadFailiureTimeoutCVar < this->NumConsecutiveReadFailiures)) {
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
                }
                local_res8 = ADPCMReadFailiureTimeoutCVar < this->NumConsecutiveReadFailiures;
                break;
              }
              this->NumConsecutiveReadFailiures = 0;
              if (this->bSeekPendingRead == '\0') {
                if (this->CurrentChunkIndex == this->FirstChunkSampleDataIndex) {
                  uVar10 = this->FirstChunkSampleDataOffset;
                  *puVar12 = uVar10;
                }
                else {
                  *puVar12 = 0;
                }
              }
              else {
                uVar10 = *puVar12;
              }
              this->field_0x17c = uVar4 & 0xfc;
              uVar5 = local_54;
            }
            else {
              uVar10 = this->CurrentChunkBufferOffset;
              if (this->CurrentChunkDataSize <= uVar10) {
                this->CurrentChunkIndex = this->CurrentChunkIndex + 1;
                goto LAB_146bcf4bf;
              }
            }
            puVar12 = &this->CurrentChunkBufferOffset;
            uVar11 = (this->CurrentChunkDataSize - uVar10) / uVar5;
            uVar7 = local_res20 / uVar5;
            if (uVar11 < local_res20 / uVar5) {
              uVar7 = uVar11;
            }
            if (uVar7 == 0) {
              *puVar12 = this->CurrentChunkDataSize;
            }
            else {
              uVar11 = this->TotalSamplesPerChannel - this->TotalSamplesStreamed;
              if (uVar7 <= uVar11) {
                uVar11 = uVar7;
              }
              uVar5 = uVar11 * uVar5;
              memcpy(_Dst,puVar8 + uVar10,(ulonglong)uVar5);
              uVar10 = uVar11 * this->NumChannels;
              param_3 = local_res20 - uVar5;
              _Dst = _Dst + (ulonglong)uVar10 * 2;
              *param_4 = *param_4 + uVar10 * 2;
              this->TotalSamplesStreamed = this->TotalSamplesStreamed + uVar11;
              *puVar12 = *puVar12 + uVar5;
              uVar5 = local_54;
              local_res20 = param_3;
              if (this->TotalSamplesPerChannel <= this->TotalSamplesStreamed) {
                this->CurrentChunkIndex = this->FirstChunkSampleDataIndex;
                *puVar12 = this->FirstChunkSampleDataOffset;
                local_res8 = true;
                this->TotalSamplesStreamed = 0;
                this->CurCompressedChunkData = (uchar *)0x0;
                if (!param_2) goto LAB_146bcf183;
              }
            }
          } while (local_res20 != 0);
        }
      }
      else {
        if (1 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        memset(param_1,0,(ulonglong)param_3);
        local_res8 = true;
      }
    }
  }
  else {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    if (param_1 != (uchar *)0x0) {
      memset(param_1,0,(ulonglong)param_3);
    }
    local_res8 = true;
  }
LAB_146bcf741:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return local_res8;
LAB_146bcf1b8:
  memset(_Dst,0,(ulonglong)local_res20);
  local_res8 = true;
  goto LAB_146bcf741;
LAB_146bcf183:
  memset(_Dst,0,(ulonglong)param_3);
  local_res8 = true;
  goto LAB_146bcf741;
}

// StreamCompressedInfoInternal @ 146bcf780

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FADPCMAudioInfo::StreamCompressedInfoInternal
          (FADPCMAudioInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,FSoundQualityInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar10;
  FAudioChunkHandle *pFVar11;
  uchar *puVar12;
  uint local_res8 [2];
  void *local_res20;
  ulonglong in_stack_ffffffffffffff58;
  FString local_90;
  TArrayView<unsigned_char_const_,int> local_80;
  FADPCMAudioInfo *local_70;
  uint *local_68;
  FAudioChunkHandle local_60;
  
  lpCriticalSection = &this->CurCompressedChunkHandleCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_2 == (FSoundQualityInfo *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("QualityInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x1e6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (((FSoundWaveProxy *)this->_padding_ != param_1->Object) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingSoundWave == InWaveProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x1e7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7508409423971221992>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                       ,0x1e8,"InWaveProxy.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else {
    puVar1 = &this->CurrentChunkDataSize;
    this->CurrentChunkIndex = 0;
    local_res8[0] = 0;
    if (param_1->Object == (FSoundWaveProxy *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7508409423971222527>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                         ,0x3ff,"InSoundWave.IsValid()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
LAB_146bcf8c8:
      *puVar1 = 0;
    }
    else {
      uVar8 = FSoundWaveProxy::GetNumChunks(param_1->Object);
      if (uVar8 <= local_res8[0]) goto LAB_146bcf8c8;
      if (local_res8[0] == 0) {
        FSoundWaveProxy::GetZerothChunk(&local_80,param_1,true);
        *puVar1 = local_80.ArrayNum;
        this->PreviouslyRequestedChunkIndex = local_res8[0];
        puVar12 = local_80.DataPtr;
      }
      else {
        if ((((this->bSeekPendingRead == '\0') && (local_res8[0] != this->FirstChunkSampleDataIndex)
             ) && (local_res8[0] != this->PreviouslyRequestedChunkIndex)) &&
           (local_res8[0] != this->PreviouslyRequestedChunkIndex + 1)) {
          local_68 = local_res8;
          local_70 = this;
          `FADPCMAudioInfo::GetLoadedChunk'::__l32::<lambda_1>::operator()(&local_70);
        }
        this_00 = IStreamingManager::Get();
        pIVar10 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
        pFVar11 = (FAudioChunkHandle *)
                  (**(code **)(*(longlong *)pIVar10 + 0xb0))
                            (pIVar10,&local_60,param_1,local_res8[0],
                             in_stack_ffffffffffffff58 & 0xffffffffffffff00,1);
        FAudioChunkHandle::operator=(&this->CurCompressedChunkHandle,pFVar11);
        FAudioChunkHandle::~FAudioChunkHandle(&local_60);
        uVar8 = FAudioChunkHandle::Num(&this->CurCompressedChunkHandle);
        *puVar1 = uVar8;
        this->PreviouslyRequestedChunkIndex = local_res8[0];
        puVar12 = FAudioChunkHandle::GetData(&this->CurCompressedChunkHandle);
      }
      if (puVar12 != (uchar *)0x0) {
        this->SrcBufferData = (uchar *)0x0;
        this->SrcBufferDataSize = 0;
        local_res20 = (void *)0x0;
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_90.Data.ArrayNum = 0;
        local_90.Data.ArrayMax = 0;
        bVar6 = FWaveModInfo::ReadWaveInfo
                          (&this->WaveInfo,puVar12,*puVar1,&local_90,true,&local_res20);
        if (bVar6) {
          uVar8 = *(int *)&(this->WaveInfo).SampleDataStart - (int)puVar12;
          if (((int)uVar8 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("SampleDataOffset > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                 ,0x206,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (uVar8 < *puVar1) {
            uVar9 = *(int *)&(this->WaveInfo).SampleDataStart - (int)puVar12;
            uVar8 = 0;
          }
          else {
            this->CurrentChunkIndex = this->CurrentChunkIndex + 1;
            puVar12 = GetLoadedChunk(this,param_1,this->CurrentChunkIndex,puVar1);
            uVar8 = this->CurrentChunkIndex;
            uVar9 = 0;
          }
          this->FirstChunkSampleDataIndex = uVar8;
          this->FirstChunkSampleDataOffset = uVar9;
          this->PreviouslyRequestedChunkIndex = this->CurrentChunkIndex;
          puVar4 = (this->WaveInfo).pFormatTag;
          this->SrcBufferData = puVar12;
          this->CurrentChunkBufferOffset = 0;
          this->CurCompressedChunkData = (uchar *)0x0;
          this->bDecompressorReleased = false;
          this->CurrentUncompressedBlockSampleIndex = 0;
          this->TotalSamplesStreamed = 0;
          uVar2 = *puVar4;
          puVar4 = (this->WaveInfo).pChannels;
          this->Format = (uint)uVar2;
          uVar3 = *puVar4;
          this->NumChannels = (uint)uVar3;
          if (uVar2 == 2) {
            if ((local_res20 == (void *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FormatHeader",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                   ,0x222,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            this->TotalSamplesPerChannel = *(uint *)((longlong)local_res20 + 0x32);
            this->SamplesPerBlock = (uint)*(ushort *)((longlong)local_res20 + 0x12);
            uVar2 = *(this->WaveInfo).pBlockAlign;
            this->BlockSize = (uint)uVar2;
            this->CompressedBlockSize = (uint)uVar2;
            uVar8 = (uint)uVar2 * 4 - 0x18;
            this->UncompressedBlockSize = uVar8;
            this->StreamBufferSize = (int)(0x12c0 / (ulonglong)((uint)uVar2 * 2 - 0xc)) * uVar8;
            this->TotalDecodedSize =
                 ((((this->WaveInfo).SampleDataSize - 1) + (uint)uVar2) / (uint)uVar2) * uVar8;
            puVar12 = FMemory::Realloc(this->UncompressedBlockData,
                                       (ulonglong)(uVar8 * this->NumChannels),0);
            this->UncompressedBlockData = puVar12;
            if ((puVar12 == (uchar *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("UncompressedBlockData != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\ADPCMAudioInfo.cpp"
                                   ,0x234,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          else {
            if (uVar2 != 1) {
              if (1 < (byte)LogAudio._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              }
              goto LAB_146bcfcae;
            }
            uVar8 = (this->WaveInfo).SampleDataSize;
            this->TotalDecodedSize = uVar8;
            this->StreamBufferSize = uVar8;
            this->CompressedBlockSize = 0;
            this->BlockSize = 0;
            this->TotalSamplesPerChannel =
                 (uint)(((ulonglong)(longlong)(int)uVar8 >> 1) / (ulonglong)uVar3);
            this->UncompressedBlockSize = 0;
          }
          if (param_2 != (FSoundQualityInfo *)0x0) {
            uVar8 = *(this->WaveInfo).pSamplesPerSec;
            param_2->SampleRate = uVar8;
            param_2->NumChannels = (uint)*(this->WaveInfo).pChannels;
            param_2->SampleDataSize = this->TotalDecodedSize;
            param_2->Duration = (float)this->TotalSamplesPerChannel / (float)uVar8;
          }
          bVar6 = true;
        }
        else {
          if (2 < (byte)LogAudio._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          }
LAB_146bcfcae:
          bVar6 = false;
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        goto LAB_146bcfcbe;
      }
    }
    if (2 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  bVar6 = false;
LAB_146bcfcbe:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// SupportsStreaming @ 146bcfd10

bool __thiscall FADPCMAudioInfo::SupportsStreaming(FADPCMAudioInfo *this)

{
  return true;
}

// UsesVorbisChannelOrdering @ 146bcfd20

bool __thiscall FADPCMAudioInfo::UsesVorbisChannelOrdering(FADPCMAudioInfo *this)

{
  return false;
}

// operator() @ 1504fa380

bool __thiscall `FADPCMAudioInfo::GetLoadedChunk'::__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7508409423971222542>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7508409423971222542>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fa3e0

bool __thiscall `FADPCMAudioInfo::SeekToFrameInternal'::__l72::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7508409423971221679>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7508409423971221679>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fa430

bool __thiscall `FADPCMAudioInfo::StreamCompressedData'::__l165::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7508409423971222256>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7508409423971222256>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fa470

bool __thiscall `FADPCMAudioInfo::StreamCompressedData'::__l166::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7508409423971222265>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7508409423971222265>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

