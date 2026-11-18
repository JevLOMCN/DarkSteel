// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 11

// FRadAudioInfo @ 146bc5230

FRadAudioInfo * __thiscall FRadAudioInfo::FRadAudioInfo(FRadAudioInfo *this)

{
  IStreamedCompressedInfo::IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  this->_padding_ = (longlong)&___7FRadAudioInfo__6B_;
  (this->OutputReservoir).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputReservoir).ArrayNum = 0;
  (this->OutputReservoir).ArrayMax = 0;
  this->Decoder = (RadAudioDecoder *)0x0;
  (this->RawMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawMemory).ArrayNum = 0;
  (this->RawMemory).ArrayMax = 0;
  this->bErrorStateLatch = false;
  return this;
}

// ~FRadAudioInfo @ 146bc52b0

void __thiscall FRadAudioInfo::~FRadAudioInfo(FRadAudioInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRadAudioInfo__6B_;
  pFVar1 = (this->RawMemory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputReservoir).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  return;
}

// CreateDecoder @ 146bc53f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRadAudioInfo::CreateDecoder(FRadAudioInfo *this)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  RadAudioDecoder *pRVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  RadAFileHeader *pRVar9;
  FScriptContainerElement *_Dst;
  uint uVar10;
  uint uVar11;
  uint local_res8 [2];
  
  if ((*(int *)((longlong)&this->_padding_ + 4) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcBufferOffset == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RadAudioCodec\\Module\\Private\\RadAudioInfo.cpp"
                         ,0xf3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pRVar9 = UERARadAGetFileHeader_1((uchar *)this->_padding_,(ulonglong)(uint)this->_padding_);
  if (pRVar9 != (RadAFileHeader *)0x0) {
    local_res8[0] = 0;
    iVar7 = UERARadAGetMemoryNeededToOpen_1
                      ((uchar *)this->_padding_,(ulonglong)(uint)this->_padding_,local_res8);
    if (iVar7 == 0) {
      pTVar2 = &this->RawMemory;
      iVar7 = (this->RawMemory).ArrayNum;
      piVar1 = &(this->RawMemory).ArrayNum;
      uVar11 = local_res8[0] + 0xc;
      if (iVar7 < (int)uVar11) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar11 - iVar7,&pTVar2->AllocatorInstance,piVar1,
                           &(this->RawMemory).ArrayMax);
        memset((pTVar2->AllocatorInstance).Data + iVar8,0,(longlong)(int)(uVar11 - iVar7));
      }
      else {
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if ((int)uVar11 < iVar7) {
          uVar10 = iVar7 - uVar11;
          if (((int)(uVar10 | uVar11) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (uVar10 != 0) {
            _Dst = (pTVar2->AllocatorInstance).Data + (int)uVar11;
            iVar7 = (*piVar1 - uVar10) - uVar11;
            if (iVar7 != 0) {
              memmove(_Dst,_Dst + (int)uVar10,(longlong)iVar7);
            }
            *piVar1 = *piVar1 - uVar10;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&pTVar2->AllocatorInstance,*piVar1,&(this->RawMemory).ArrayMax);
          }
        }
      }
      pRVar3 = (RadAudioDecoder *)(pTVar2->AllocatorInstance).Data;
      this->Decoder = pRVar3;
      iVar7 = UERARadAOpenDecoder_1
                        ((uchar *)this->_padding_,(ulonglong)(uint)this->_padding_,
                         (RadAContainer *)(pRVar3 + 1),(ulonglong)local_res8[0]);
      if (iVar7 != 0) {
        iVar7 = pRVar9->rada_header_bytes + 0x28;
        if (pRVar9->seek_table_entry_count != 0) {
          iVar7 = iVar7 + (((uint)pRVar9->bits_for_seek_table_samples +
                           (uint)pRVar9->bits_for_seek_table_bytes) *
                           (uint)pRVar9->seek_table_entry_count + 0x3f >> 6) * 8 + 0x40;
        }
        *(int *)((longlong)&this->_padding_ + 4) = iVar7;
        return true;
      }
      if (1 < (byte)LogRadAudioDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
      }
      *piVar1 = 0;
      if ((this->RawMemory).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&pTVar2->AllocatorInstance,0,&(this->RawMemory).ArrayMax);
      }
    }
    else {
      if (1 < (byte)LogRadAudioDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
      }
      if ((8 < (uint)this->_padding_) && (1 < (byte)LogRadAudioDecoder._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
      }
    }
  }
  return false;
}

// Decode @ 146bc5690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDecodeResult * __thiscall
FRadAudioInfo::Decode
          (FRadAudioInfo *this,FDecodeResult *__return_storage_ptr__,uchar *param_1,int param_2,
          uchar *param_3,int param_4)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  RadAExamineBlockResult RVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  float **ppfVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_180;
  int local_178 [4];
  FScriptContainerElement *local_168;
  __uint64 local_160;
  float *local_158 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar13 = (ulonglong)(uint)param_4 / (ulonglong)(uint)this->_padding_;
  local_168 = (FScriptContainerElement *)param_3;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178[0] = 0;
  local_178[1] = 0;
  uVar6 = 0;
  local_178[3] = param_2;
  if ((int)uVar13 != 0) {
    do {
      uVar8 = (uint)uVar13;
      uVar9 = this->Decoder->OutputReservoirValidFrames;
      uVar5 = this->Decoder->OutputReservoirReadFrames;
      if (uVar5 < uVar9) {
        uVar6 = (uint)uVar9 - (uint)uVar5;
        uVar10 = uVar8;
        if (uVar6 < uVar8) {
          uVar10 = uVar6;
        }
        uVar6 = uVar10 * (int)this->_padding_;
        memcpy(param_3,(this->OutputReservoir).AllocatorInstance.Data +
                       (uint)uVar5 * (int)this->_padding_,(ulonglong)uVar6);
        param_3 = param_3 + uVar6;
        puVar1 = &this->Decoder->OutputReservoirReadFrames;
        *puVar1 = *puVar1 + (short)uVar10;
        uVar13 = (ulonglong)(uVar8 - uVar10);
        uVar6 = 0;
        local_168 = (FScriptContainerElement *)param_3;
        if (uVar8 - uVar10 == 0) goto LAB_146bc5a0d;
      }
      uVar9 = 0;
      uVar6 = (uint)uVar13;
      if (param_2 == 0) goto LAB_146bc5a0d;
      local_178[2] = 0;
      RVar4 = UERARadAExamineBlock_1
                        ((RadAContainer *)(this->Decoder + 1),param_1,(ulonglong)(uint)param_2,
                         (uint *)(local_178 + 2));
      if (RVar4 != Valid) {
        if (2 < (byte)LogRadAudioDecoder._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
        }
        if ((7 < (uint)param_2) && (2 < (byte)LogRadAudioDecoder._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
        }
        goto LAB_146bc5a0d;
      }
      if (local_178[0] == 0) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(uint)(byte)this->_padding_ << 10,&local_180,local_178,local_178 + 1);
      }
      local_160 = 0;
      uVar5 = UERARadADecodeBlock_1
                        ((RadAContainer *)(this->Decoder + 1),param_1,(ulonglong)(uint)param_2,
                         (float *)local_180.Data,0x400,&local_160);
      if (uVar5 == 0xfffe) {
        if (1 < (byte)LogRadAudioDecoder._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
        }
        this->bErrorStateLatch = true;
        __return_storage_ptr__->NumCompressedBytesConsumed = -1;
        __return_storage_ptr__->NumPcmBytesProduced = -1;
        __return_storage_ptr__->NumAudioFramesProduced = -1;
        goto LAB_146bc5a36;
      }
      if (uVar5 == 0xffff) goto LAB_146bc5a0d;
      param_1 = param_1 + local_160;
      param_2 = param_2 - (int)local_160;
      iVar7 = this->Decoder->ConsumeFrameCount;
      if (iVar7 != 0) {
        uVar9 = uVar5;
        if (iVar7 < (short)uVar5) {
          uVar9 = (ushort)iVar7;
        }
        if (uVar9 != 0) {
          uVar5 = uVar5 - uVar9;
        }
        this->Decoder->ConsumeFrameCount = iVar7 - (short)uVar9;
      }
      if (uVar5 != 0) {
        pFVar12 = (FScriptContainerElement *)param_3;
        if (uVar6 < 0x400) {
          piVar2 = &(this->OutputReservoir).ArrayNum;
          if (*piVar2 == 0) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(int)this->_padding_ << 10,&(this->OutputReservoir).AllocatorInstance,
                       piVar2,&(this->OutputReservoir).ArrayMax);
          }
          param_3 = (uchar *)(this->OutputReservoir).AllocatorInstance.Data;
          pFVar12 = local_168;
        }
        bVar3 = (byte)this->_padding_;
        iVar7 = 0;
        if (bVar3 != 0) {
          ppfVar11 = local_158;
          do {
            uVar8 = iVar7 << 10;
            iVar7 = iVar7 + 1;
            *ppfVar11 = (float *)(local_180.Data + ((ulonglong)uVar8 + (longlong)(short)uVar9) * 4);
            ppfVar11 = ppfVar11 + 1;
          } while (iVar7 < (int)(uint)bVar3);
        }
        uVar8 = (uint)(short)uVar5;
        UERARadAInterleave_1((short *)param_3,local_158,(uint)bVar3,uVar8);
        if ((FScriptContainerElement *)param_3 == (this->OutputReservoir).AllocatorInstance.Data) {
          this->Decoder->OutputReservoirValidFrames = uVar5;
          this->Decoder->OutputReservoirReadFrames = 0;
          param_3 = (uchar *)pFVar12;
        }
        else {
          uVar13 = (ulonglong)(uVar6 - uVar8);
          param_3 = (uchar *)(pFVar12 + uVar8 * (int)this->_padding_);
          local_168 = (FScriptContainerElement *)param_3;
        }
      }
    } while ((int)uVar13 != 0);
    uVar6 = 0;
  }
LAB_146bc5a0d:
  uVar8 = (uint)this->_padding_;
  uVar6 = param_4 - uVar8 * uVar6;
  __return_storage_ptr__->NumCompressedBytesConsumed = local_178[3] - param_2;
  __return_storage_ptr__->NumPcmBytesProduced = uVar6;
  __return_storage_ptr__->NumAudioFramesProduced = uVar6 / uVar8;
LAB_146bc5a36:
  if (local_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data);
  }
  return __return_storage_ptr__;
}

// GetFrameSize @ 146bc5ab0

int __thiscall FRadAudioInfo::GetFrameSize(FRadAudioInfo *this)

{
  uint uVar1;
  RadAExamineBlockResult RVar2;
  uint local_res8 [8];
  
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  local_res8[0] = 0;
  RVar2 = UERARadAExamineBlock_1
                    ((RadAContainer *)(this->Decoder + 1),
                     (uchar *)((ulonglong)uVar1 + this->_padding_),
                     (ulonglong)((int)this->_padding_ - uVar1),local_res8);
  if ((RVar2 != Valid) || (0x7fffffff < local_res8[0])) {
    this->bErrorStateLatch = true;
    local_res8[0] = 0;
  }
  return local_res8[0];
}

// GetMaxFrameSizeSamples @ 146bc5b10

uint __thiscall FRadAudioInfo::GetMaxFrameSizeSamples(FRadAudioInfo *this)

{
  return 0x400;
}

// HasError @ 146bc5b50

bool __thiscall FRadAudioInfo::HasError(FRadAudioInfo *this)

{
  bool bVar1;
  
  if (this->bErrorStateLatch == false) {
    bVar1 = ICompressedAudioInfo::HasError((ICompressedAudioInfo *)this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// ParseHeader @ 146bc5bd0

bool __thiscall
FRadAudioInfo::ParseHeader
          (FRadAudioInfo *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  byte bVar1;
  ERadASampleRate EVar2;
  ushort uVar3;
  uint uVar4;
  RadAFileHeader *pRVar5;
  uint uVar6;
  uint uVar7;
  
  this->_padding_ = (longlong)param_1;
  uVar7 = 0;
  *(uint *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  pRVar5 = UERARadAGetFileHeader_1(param_1,(ulonglong)param_2);
  if (pRVar5 != (RadAFileHeader *)0x0) {
    bVar1 = pRVar5->channels;
    if (bVar1 == 0) {
      *(undefined4 *)&this->_padding_ = 0;
    }
    else {
      uVar6 = (uint)pRVar5->frame_count;
      uVar4 = uVar6 * bVar1;
      *(uint *)&this->_padding_ = uVar4;
      if (uVar4 / bVar1 != uVar6) {
        return false;
      }
    }
    *(uchar *)&this->_padding_ = pRVar5->channels;
    uVar3 = pRVar5->seek_table_entry_count;
    if ((uint)uVar3 + (uint)uVar3 + 0x28 <= param_2) {
      uVar6 = pRVar5->rada_header_bytes + 0x28;
      if (uVar3 != 0) {
        uVar6 = uVar6 + (((uint)pRVar5->bits_for_seek_table_samples +
                         (uint)pRVar5->bits_for_seek_table_bytes) * (uint)uVar3 + 0x3f >> 6) * 8 +
                0x40;
      }
      *(uint *)&this->_padding_ = uVar6;
      if (uVar6 <= param_2) {
        if (param_3 != (FSoundQualityInfo *)0x0) {
          EVar2 = pRVar5->sample_rate;
          if (EVar2 == Rate_24000) {
            uVar7 = 24000;
          }
          else if (EVar2 == Rate_32000) {
            uVar7 = 32000;
          }
          else if (EVar2 == Rate_44100) {
            uVar7 = 0xac44;
          }
          else if (EVar2 == Rate_48000) {
            uVar7 = 48000;
          }
          param_3->SampleRate = uVar7;
          bVar1 = pRVar5->channels;
          param_3->NumChannels = (uint)bVar1;
          param_3->SampleDataSize = (uint)bVar1 * (int)pRVar5->frame_count * 2;
          if (uVar7 != 0) {
            param_3->Duration = (float)pRVar5->frame_count / (float)uVar7;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// PrepareToLoop @ 146bc5d50

void __thiscall FRadAudioInfo::PrepareToLoop(FRadAudioInfo *this)

{
  UERARadANotifySeek_1((RadAContainer *)(this->Decoder + 1));
  return;
}

// SeekToFrame @ 146bc5db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRadAudioInfo::SeekToFrame(FRadAudioInfo *this,uint param_1)

{
  RadAudioDecoder *pRVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  __uint64 _Var6;
  FSoundWaveProxy *this_00;
  uint uVar7;
  uint uVar8;
  RadAudioDecoder *pRVar9;
  ulonglong uVar10;
  __uint64 local_res8;
  
  pRVar1 = this->Decoder;
  pRVar9 = pRVar1 + 1;
  if (pRVar1[3].OutputReservoirValidFrames == 0) {
    IStreamedCompressedInfo::SeekToFrame((IStreamedCompressedInfo *)this,param_1);
    UERARadANotifySeek_1((RadAContainer *)pRVar9);
    return;
  }
  uVar10._0_4_ = pRVar1[2].ConsumeFrameCount;
  uVar10._4_2_ = pRVar1[2].OutputReservoirValidFrames;
  uVar10._6_2_ = pRVar1[2].OutputReservoirReadFrames;
  if (uVar10 <= param_1) {
    param_1 = (undefined4)uVar10 - 1;
  }
  uVar7 = 0;
  local_res8 = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = (byte)this->_padding_ * param_1;
  _Var6 = UERARadASeekTableLookup_1
                    ((RadAContainer *)pRVar9,(ulonglong)param_1,&local_res8,(__uint64 *)0x0);
  UERARadANotifySeek_1((RadAContainer *)pRVar9);
  if (_Var6 < 0x80000000) {
    this->Decoder->ConsumeFrameCount = param_1 - (int)local_res8;
    this->Decoder->OutputReservoirValidFrames = 0;
    this->Decoder->OutputReservoirReadFrames = 0;
    if (this->_padding_ == 0) {
      *(int *)((longlong)&this->_padding_ + 4) = (int)_Var6;
    }
    else {
      this_00 = TSharedPtr<FSoundWaveProxy,1>::operator->
                          ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
      uVar4 = FSoundWaveProxy::GetNumChunks(this_00);
      uVar10 = _Var6 & 0xffffffff;
      if (uVar4 != 0) {
        do {
          if ((this->_padding_ == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar5 = FSoundWaveProxy::GetSizeOfChunk((FSoundWaveProxy *)this->_padding_,uVar7);
          uVar8 = (uint)uVar10;
          if (uVar8 < uVar5) {
            if ((*(uint *)((longlong)&this->_padding_ + 4) == uVar7) && (this->_padding_ != 0)) {
              *(uint *)((longlong)&this->_padding_ + 4) = uVar8;
              return;
            }
            LOCK();
            *(uint *)&this->_padding_ = uVar7;
            UNLOCK();
            *(uint *)((longlong)&this->_padding_ + 4) = uVar8;
            return;
          }
          uVar10 = (ulonglong)(uVar8 - uVar5);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      if (1 < (byte)LogRadAudioDecoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
      }
    }
  }
  else if (1 < (byte)LogRadAudioDecoder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRadAudioDecoder);
  }
  return;
}

// SeekToTime @ 146bc5f70

void __thiscall FRadAudioInfo::SeekToTime(FRadAudioInfo *this,float param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if (this->Decoder[3].OutputReservoirValidFrames != 0) {
    lVar2 = 0;
    if (0.0 < param_1) {
      cVar1 = *(char *)((longlong)&this->Decoder[2].SeekTableByteCount + 3);
      fVar3 = __real_46bb8000;
      if ((((cVar1 != '\0') && (fVar3 = __real_46fa0000, cVar1 != '\x01')) &&
          (fVar3 = __real_472c4400, cVar1 != '\x02')) && (fVar3 = 0.0, cVar1 == '\x03')) {
        fVar3 = __real_473b8000;
      }
      lVar2 = (longlong)(fVar3 * param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x000146bc5ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,lVar2);
    return;
  }
  IStreamedCompressedInfo::SeekToTime((IStreamedCompressedInfo *)this,param_1);
  UERARadANotifySeek_1((RadAContainer *)(this->Decoder + 1));
  return;
}

