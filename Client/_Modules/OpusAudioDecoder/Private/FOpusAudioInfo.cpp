// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpusAudioDecoder
// Functions: 11

// FOpusAudioInfo @ 146bc9ee0

FOpusAudioInfo * __thiscall FOpusAudioInfo::FOpusAudioInfo(FOpusAudioInfo *this)

{
  IStreamedCompressedInfo::IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  this->_padding_ = (longlong)&___7FOpusAudioInfo__6B_;
  this->OpusDecoderWrapper = (FOpusDecoderWrapper *)0x0;
  (this->Header).Version = '\0';
  (this->Header).NumChannels = '\0';
  (this->Header).SampleRate = 0;
  (this->Header).EncodedSampleRate = 0;
  (this->Header).ActiveSampleCount = 0;
  (this->Header).NumEncodedFrames = 0;
  (this->Header).NumPreSkipSamples = 0;
  (this->Header).NumSilentSamplesAtBeginning = 0;
  (this->Header).NumSilentSamplesAtEnd = 0;
  this->NumRemainingSamplesToSkip = 0;
  (this->PreviousDecodedUnusedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousDecodedUnusedSamples).ArrayNum = 0;
  (this->PreviousDecodedUnusedSamples).ArrayMax = 0;
  return this;
}

// ~FOpusAudioInfo @ 146bc9f70

void __thiscall FOpusAudioInfo::~FOpusAudioInfo(FOpusAudioInfo *this)

{
  FOpusDecoderWrapper *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->OpusDecoderWrapper;
  this->_padding_ = (longlong)&___7FOpusAudioInfo__6B_;
  if (pFVar1 != (FOpusDecoderWrapper *)0x0) {
    FMemory::Free(pFVar1->Decoder);
    ::operator_delete(pFVar1,0x10);
    this->OpusDecoderWrapper = (FOpusDecoderWrapper *)0x0;
  }
  pFVar2 = (this->PreviousDecodedUnusedSamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  return;
}

// CreateDecoder @ 146bca080

bool __thiscall FOpusAudioInfo::CreateDecoder(FOpusAudioInfo *this)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FOpusDecoderWrapper *pFVar8;
  OpusMSDecoder *pOVar9;
  ulonglong uVar10;
  
  if (this->OpusDecoderWrapper != (FOpusDecoderWrapper *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OpusDecoderWrapper == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpusAudioDecoder\\Module\\Private\\OpusAudioInfo.cpp"
                       ,0xa5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar8 = ::operator_new(0x10);
  if (pFVar8 == (FOpusDecoderWrapper *)0x0) {
    pFVar8 = (FOpusDecoderWrapper *)0x0;
  }
  else {
    bVar2 = (byte)this->_padding_;
    uVar10 = (ulonglong)bVar2;
    uVar3 = (this->Header).EncodedSampleRate;
    if (8 < bVar2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels <= 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpusAudioDecoder\\Module\\Private\\OpusAudioInfo.cpp"
                         ,0x2e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = opus_multistream_decoder_get_size
                      (*(undefined4 *)(L"LogOpusAudioDecoder" + uVar10 * 8 + 0x10));
    pOVar9 = FMemory::Malloc((longlong)iVar7,0);
    pFVar8->Decoder = pOVar9;
    iVar7 = opus_multistream_decoder_init
                      (pOVar9,uVar3,bVar2,
                       *(undefined4 *)(L"LogOpusAudioDecoder" + uVar10 * 8 + 0x10),
                       *(undefined4 *)(L"LogOpusAudioDecoder" + uVar10 * 8 + 0x12),
                       &UNK_151410d08 + uVar10 * 0x10);
    pFVar8->DecError = iVar7;
  }
  this->OpusDecoderWrapper = pFVar8;
  if (pFVar8->DecError != 0) {
    if (pFVar8 != (FOpusDecoderWrapper *)0x0) {
      FMemory::Free(pFVar8->Decoder);
      ::operator_delete(pFVar8,0x10);
    }
    this->OpusDecoderWrapper = (FOpusDecoderWrapper *)0x0;
    return false;
  }
  this->NumRemainingSamplesToSkip =
       (this->Header).NumSilentSamplesAtBeginning + (this->Header).NumPreSkipSamples;
  piVar1 = &(this->PreviousDecodedUnusedSamples).ArrayMax;
  (this->PreviousDecodedUnusedSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PreviousDecodedUnusedSamples).AllocatorInstance,0,piVar1);
  }
  return true;
}

// Decode @ 146bca220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDecodeResult * __thiscall
FOpusAudioInfo::Decode
          (FOpusAudioInfo *this,FDecodeResult *__return_storage_ptr__,uchar *param_1,int param_2,
          uchar *param_3,int param_4)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDecodeResult *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  uint uVar11;
  int *_Size;
  uint uVar12;
  byte *pbVar13;
  int local_res18;
  int *in_stack_ffffffffffffff80;
  int *piVar14;
  int local_68;
  int local_64;
  undefined8 local_58;
  
  local_58 = 0xffffffffffffffff;
  iVar8 = -1;
  if (this->OpusDecoderWrapper != (FOpusDecoderWrapper *)0x0) {
    iVar3 = (uint)(byte)this->_padding_ * 2;
    local_64 = 0;
    local_res18 = (int)param_1;
    iVar8 = 0;
    if (0 < param_4) {
      this_00 = &this->PreviousDecodedUnusedSamples;
      piVar1 = &(this->PreviousDecodedUnusedSamples).ArrayNum;
      local_68 = param_2;
      do {
        piVar14 = &this->NumRemainingSamplesToSkip;
        if (*piVar1 != 0) {
          if ((*piVar14 != 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumRemainingSamplesToSkip == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpusAudioDecoder\\Module\\Private\\OpusAudioInfo.cpp"
                                 ,0xd6,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FDecodeResult *)(*pcVar2)();
            return pFVar7;
          }
          uVar12 = (this->PreviousDecodedUnusedSamples).ArrayNum;
          uVar11 = param_4;
          if ((int)uVar12 <= param_4) {
            uVar11 = uVar12;
          }
          _Size = (int *)(longlong)(int)uVar11;
          memcpy(param_3,(this_00->AllocatorInstance).Data,(size_t)_Size);
          uVar12 = 0;
          if ((int)uVar11 <= *piVar1) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (in_stack_ffffffffffffff80 = _Size,
             bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FDecodeResult *)(*pcVar2)();
            return pFVar7;
          }
          if (uVar11 != 0) {
            pFVar9 = (this_00->AllocatorInstance).Data;
            if (*piVar1 - uVar11 != 0) {
              memmove(pFVar9,pFVar9 + (longlong)_Size,(longlong)(int)(*piVar1 - uVar11));
            }
            *piVar1 = *piVar1 - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&this_00->AllocatorInstance,*piVar1,
                       &(this->PreviousDecodedUnusedSamples).ArrayMax);
          }
          param_3 = param_3 + (longlong)_Size;
          param_4 = param_4 - uVar11;
          iVar8 = local_64 + (int)uVar11 / iVar3;
          if ((param_4 == 0) ||
             (local_64 = iVar8, (this->PreviousDecodedUnusedSamples).ArrayNum != 0)) {
            __return_storage_ptr__->NumCompressedBytesConsumed = (int)param_1 - local_res18;
            __return_storage_ptr__->NumPcmBytesProduced = iVar8 * iVar3;
            goto LAB_146bca807;
          }
        }
        iVar8 = local_64;
        if (local_68 < 1) break;
        pbVar13 = param_1;
        uVar12 = param_2;
        iVar8 = param_2;
        if ((char)this->_padding_ == '\0') {
          uVar12 = (uint)param_1[1] * 0x100 + (uint)*param_1;
          pbVar13 = param_1 + 2;
          iVar8 = uVar12 + 2;
        }
        in_stack_ffffffffffffff80 =
             (int *)((ulonglong)in_stack_ffffffffffffff80 & 0xffffffff00000000);
        iVar5 = opus_multistream_decode
                          (this->OpusDecoderWrapper->Decoder,pbVar13,uVar12 & 0xffff,param_3,
                           param_4 / iVar3,in_stack_ffffffffffffff80);
        if (iVar5 < 0) {
          if (iVar5 == -2) {
            iVar6 = (**(code **)(this->_padding_ + 0xc0))(this);
            iVar5 = (this->PreviousDecodedUnusedSamples).ArrayNum;
            piVar14 = &(this->PreviousDecodedUnusedSamples).ArrayMax;
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar6 * iVar3,&this_00->AllocatorInstance,piVar1,piVar14);
            in_stack_ffffffffffffff80 = (int *)((ulonglong)piVar14 & 0xffffffff00000000);
            iVar5 = opus_multistream_decode
                              (this->OpusDecoderWrapper->Decoder,pbVar13,uVar12 & 0xffff,
                               (this_00->AllocatorInstance).Data + iVar5,iVar6,
                               in_stack_ffffffffffffff80);
            if (-1 < iVar5) {
              iVar6 = *piVar1;
              uVar12 = iVar5 * iVar3;
              if (iVar6 < (int)uVar12) {
                in_stack_ffffffffffffff80 = &(this->PreviousDecodedUnusedSamples).ArrayMax;
                iVar5 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (1,1,uVar12 - iVar6,&this_00->AllocatorInstance,piVar1,
                                   in_stack_ffffffffffffff80);
                memset((this_00->AllocatorInstance).Data + iVar5,0,(longlong)(int)(uVar12 - iVar6));
              }
              else {
                if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
                }
                if ((int)uVar12 < iVar6) {
                  uVar11 = iVar6 - uVar12;
                  if ((int)(uVar12 | uVar11) < 0) {
                    in_stack_ffffffffffffff80 = (int *)(longlong)(int)uVar11;
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      );
                    if (bVar4) {
                      pcVar2 = (code *)swi(3);
                      pFVar7 = (FDecodeResult *)(*pcVar2)();
                      return pFVar7;
                    }
                  }
                  if (uVar11 != 0) {
                    pFVar9 = (this_00->AllocatorInstance).Data + (int)uVar12;
                    iVar5 = (*piVar1 - uVar12) - uVar11;
                    if (iVar5 != 0) {
                      memmove(pFVar9,pFVar9 + (int)uVar11,(longlong)iVar5);
                    }
                    *piVar1 = *piVar1 - uVar11;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,&this_00->AllocatorInstance,*piVar1,
                               &(this->PreviousDecodedUnusedSamples).ArrayMax);
                  }
                }
              }
              piVar14 = &this->NumRemainingSamplesToSkip;
              if (*piVar14 != 0) {
                uVar11 = *piVar14 * iVar3;
                if ((int)uVar11 < (int)uVar12) {
                  uVar12 = 0;
                  if ((int)uVar11 <= *piVar1) {
                    uVar12 = ~uVar11 >> 0x1f;
                  }
                  if (uVar12 == 0) {
                    in_stack_ffffffffffffff80 = (int *)(longlong)(int)uVar11;
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      );
                    if (bVar4) {
                      pcVar2 = (code *)swi(3);
                      pFVar7 = (FDecodeResult *)(*pcVar2)();
                      return pFVar7;
                    }
                  }
                  if (uVar11 != 0) {
                    pFVar9 = (this_00->AllocatorInstance).Data;
                    if (*piVar1 - uVar11 != 0) {
                      memmove(pFVar9,pFVar9 + (int)uVar11,(longlong)(int)(*piVar1 - uVar11));
                    }
                    *piVar1 = *piVar1 - uVar11;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,&this_00->AllocatorInstance,*piVar1,
                               &(this->PreviousDecodedUnusedSamples).ArrayMax);
                  }
                  this->NumRemainingSamplesToSkip = 0;
                }
                else {
                  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
                  *piVar14 = *piVar14 - (int)uVar12 / iVar3;
                }
              }
              goto LAB_146bca764;
            }
            if ((byte)LogOpusAudioDecoder._0_1_ < 2) goto LAB_146bca7c7;
            pFVar10 = &::LOG_Static;
          }
          else {
            if ((byte)LogOpusAudioDecoder._0_1_ < 2) goto LAB_146bca7c7;
            pFVar10 = &::LOG_Static;
          }
          UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogOpusAudioDecoder);
LAB_146bca7c7:
          __return_storage_ptr__->NumCompressedBytesConsumed = -1;
          __return_storage_ptr__->NumPcmBytesProduced = -1;
          __return_storage_ptr__->NumAudioFramesProduced = -1;
          return __return_storage_ptr__;
        }
        iVar6 = *piVar14;
        if (iVar6 != 0) {
          if (iVar6 < iVar5) {
            memmove(param_3,param_3 + iVar6 * iVar3,(longlong)((iVar5 - iVar6) * iVar3));
            iVar5 = iVar5 - *piVar14;
            *piVar14 = 0;
          }
          else {
            *piVar14 = iVar6 - iVar5;
            iVar5 = 0;
          }
        }
        local_64 = local_64 + iVar5;
        param_4 = param_4 - iVar5 * iVar3;
        param_3 = param_3 + iVar5 * iVar3;
LAB_146bca764:
        local_68 = local_68 - iVar8;
        param_1 = param_1 + iVar8;
        iVar8 = local_64;
      } while (0 < param_4);
    }
    local_58 = CONCAT44(iVar8 * iVar3,(int)param_1 - local_res18);
  }
  __return_storage_ptr__->NumCompressedBytesConsumed = (undefined4)local_58;
  __return_storage_ptr__->NumPcmBytesProduced = local_58._4_4_;
LAB_146bca807:
  __return_storage_ptr__->NumAudioFramesProduced = iVar8;
  return __return_storage_ptr__;
}

// GetFrameSize @ 146bca830

int __thiscall FOpusAudioInfo::GetFrameSize(FOpusAudioInfo *this)

{
  ushort local_res10 [12];
  
  local_res10[0] = 0;
  IStreamedCompressedInfo::Read((IStreamedCompressedInfo *)this,local_res10,2);
  return (int)local_res10[0];
}

// GetMaxFrameSizeSamples @ 146bca860

uint __thiscall FOpusAudioInfo::GetMaxFrameSizeSamples(FOpusAudioInfo *this)

{
  return ((this->Header).EncodedSampleRate * 0x28) / 1000;
}

// ParseHeader @ 146bca8c0

bool __cdecl FOpusAudioInfo::ParseHeader(FHeader *param_1,uint *param_2,uchar *param_3,uint param_4)

{
  *param_2 = 0;
  if (0x29 < (int)param_4) {
    *(undefined8 *)param_1->Identifier = *(undefined8 *)param_3;
    *param_2 = *param_2 + 8;
    if (*&param_1->Identifier == FHeader::OPUS_ID) {
      param_1->Version = param_3[8];
      *param_2 = *param_2 + 1;
      param_1->NumChannels = param_3[9];
      *param_2 = *param_2 + 1;
      param_1->SampleRate = *(uint *)(param_3 + 10);
      *param_2 = *param_2 + 4;
      param_1->EncodedSampleRate = *(uint *)(param_3 + 0xe);
      *param_2 = *param_2 + 4;
      param_1->ActiveSampleCount = *(ulong64 *)(param_3 + 0x12);
      *param_2 = *param_2 + 8;
      param_1->NumEncodedFrames = *(uint *)(param_3 + 0x1a);
      *param_2 = *param_2 + 4;
      param_1->NumPreSkipSamples = *(int *)(param_3 + 0x1e);
      *param_2 = *param_2 + 4;
      param_1->NumSilentSamplesAtBeginning = *(int *)(param_3 + 0x22);
      *param_2 = *param_2 + 4;
      param_1->NumSilentSamplesAtEnd = *(int *)(param_3 + 0x26);
      *param_2 = *param_2 + 4;
      return true;
    }
  }
  return false;
}

// ParseHeader @ 146bca950

bool __thiscall
FOpusAudioInfo::ParseHeader
          (FOpusAudioInfo *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  char acVar4 [8];
  ulong64 uVar5;
  int iVar6;
  uint uVar7;
  
  this->_padding_ = (longlong)param_1;
  *(uint *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Header).Identifier[0] = '\0';
  (this->Header).Identifier[1] = '\0';
  (this->Header).Identifier[2] = '\0';
  (this->Header).Identifier[3] = '\0';
  (this->Header).Identifier[4] = '\0';
  (this->Header).Identifier[5] = '\0';
  (this->Header).Identifier[6] = '\0';
  (this->Header).Identifier[7] = '\0';
  (this->Header).Version = '\0';
  (this->Header).NumChannels = '\0';
  (this->Header).SampleRate = 0;
  (this->Header).EncodedSampleRate = 0;
  (this->Header).ActiveSampleCount = 0;
  (this->Header).NumEncodedFrames = 0;
  (this->Header).NumPreSkipSamples = 0;
  (this->Header).NumSilentSamplesAtBeginning = 0;
  (this->Header).NumSilentSamplesAtEnd = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (0x29 < (int)param_2) {
    acVar4 = *(char (*) [8])param_1;
    *&(this->Header).Identifier = acVar4;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
    if (acVar4 == FHeader::OPUS_ID) {
      (this->Header).Version = param_1[8];
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      (this->Header).NumChannels = param_1[9];
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      (this->Header).SampleRate = *(uint *)(param_1 + 10);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 4;
      (this->Header).EncodedSampleRate = *(uint *)(param_1 + 0xe);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 4;
      (this->Header).ActiveSampleCount = *(ulong64 *)(param_1 + 0x12);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 8;
      (this->Header).NumEncodedFrames = *(uint *)(param_1 + 0x1a);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 4;
      (this->Header).NumPreSkipSamples = *(int *)(param_1 + 0x1e);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 4;
      (this->Header).NumSilentSamplesAtBeginning = *(int *)(param_1 + 0x22);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 4;
      (this->Header).NumSilentSamplesAtEnd = *(int *)(param_1 + 0x26);
      iVar6 = *(int *)((longlong)&this->_padding_ + 4) + 4;
      *(int *)((longlong)&this->_padding_ + 4) = iVar6;
      bVar2 = (this->Header).NumChannels;
      *(int *)&this->_padding_ = iVar6;
      uVar5 = (this->Header).ActiveSampleCount;
      *(byte *)&this->_padding_ = bVar2;
      *(uint *)&this->_padding_ = (uint)bVar2 * (int)uVar5;
      if (param_3 != (FSoundQualityInfo *)0x0) {
        uVar3 = (this->Header).SampleRate;
        param_3->SampleRate = uVar3;
        uVar7 = (uint)(this->Header).NumChannels;
        param_3->NumChannels = uVar7;
        param_3->SampleDataSize = uVar7 * (int)(this->Header).ActiveSampleCount * 2;
        param_3->Duration = (float)((double)(this->Header).ActiveSampleCount / (double)uVar3);
      }
      return true;
    }
  }
  return false;
}

// PrepareToLoop @ 146bcaae0

void __thiscall FOpusAudioInfo::PrepareToLoop(FOpusAudioInfo *this)

{
  int *piVar1;
  
  this->NumRemainingSamplesToSkip =
       (this->Header).NumSilentSamplesAtBeginning + (this->Header).NumPreSkipSamples;
  piVar1 = &(this->PreviousDecodedUnusedSamples).ArrayMax;
  (this->PreviousDecodedUnusedSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PreviousDecodedUnusedSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// SeekToFrame @ 146bcab30

void __thiscall FOpusAudioInfo::SeekToFrame(FOpusAudioInfo *this,uint param_1)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  
  iVar5 = 0;
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x90))();
  if (*plVar8 == 0) {
    lVar3 = this->_padding_;
    if ((lVar3 != 0) && (uVar4 = (uint)this->_padding_, uVar4 != 0)) {
      pbVar2 = (byte *)(lVar3 + (ulonglong)uVar4);
      uVar11 = (byte)this->_padding_ * param_1;
      uVar4 = 0;
      for (pbVar9 = (byte *)((ulonglong)(uint)this->_padding_ + lVar3); iVar5 = 0, pbVar9 < pbVar2;
          pbVar9 = pbVar9 + (iVar10 + 2)) {
        iVar10 = (uint)pbVar9[1] * 0x100 + (uint)*pbVar9;
        iVar5 = opus_packet_get_nb_frames(pbVar9 + 2,iVar10);
        iVar6 = opus_packet_get_samples_per_frame(pbVar9 + 2,(this->Header).EncodedSampleRate);
        uVar7 = iVar6 * (uint)(byte)this->_padding_ * iVar5 + uVar4;
        if ((uVar4 <= uVar11) && (uVar11 < uVar7)) {
          *(uint *)((longlong)&this->_padding_ + 4) = uVar4;
          *(int *)((longlong)&this->_padding_ + 4) = (int)pbVar9 - (int)this->_padding_;
          iVar5 = uVar11 - uVar4;
          break;
        }
        uVar4 = uVar7;
      }
      if (pbVar2 <= pbVar9) {
        *(int *)((longlong)&this->_padding_ + 4) = (int)this->_padding_;
        *(uint *)((longlong)&this->_padding_ + 4) = uVar11;
      }
    }
  }
  else {
    IStreamedCompressedInfo::SeekToFrame((IStreamedCompressedInfo *)this,param_1);
  }
  this->NumRemainingSamplesToSkip =
       (this->Header).NumSilentSamplesAtBeginning + (this->Header).NumPreSkipSamples + iVar5;
  piVar1 = &(this->PreviousDecodedUnusedSamples).ArrayMax;
  (this->PreviousDecodedUnusedSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PreviousDecodedUnusedSamples).AllocatorInstance,0,piVar1);
  }
  return;
}

// SeekToTime @ 146bcacb0

void __thiscall FOpusAudioInfo::SeekToTime(FOpusAudioInfo *this,float param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x90))();
  if (*plVar1 != 0) {
    IStreamedCompressedInfo::SeekToTime((IStreamedCompressedInfo *)this,param_1);
    return;
  }
  if ((this->_padding_ != 0) && ((int)this->_padding_ != 0)) {
    lVar2 = 0;
    if (0.0 < param_1) {
      lVar2 = (longlong)((float)(this->Header).SampleRate * param_1);
    }
    (**(code **)(this->_padding_ + 0x20))(this,lVar2);
  }
  return;
}

