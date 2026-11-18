// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 7

// Decode @ 146bcc2c0

FDecodeResult * __thiscall
AdpcmAudioInfoPrivate::FAdpcmImpl::Decode
          (FAdpcmImpl *this,FDecodeResult *__return_storage_ptr__,uchar *param_1,int param_2,
          uchar *param_3,int param_4)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FDecodeResult *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uchar *local_res8;
  int local_res18;
  uint local_res20;
  short *local_58;
  uchar *local_50;
  
  param_4 = (int)(((ulonglong)(longlong)param_4 >> 1) / (ulonglong)(longlong)(int)this->_padding_);
  local_58 = (short *)param_3;
  bVar2 = DrainReservoir(this,&local_58,(uint *)&param_4);
  local_res8 = param_1;
  local_res20 = param_2;
  if (bVar2) {
    do {
      uVar9 = *(int *)((longlong)&this->_padding_ + 4) - this->TotalFramesDecoded;
      if (this->UncompressedBlockSamples < uVar9) {
        uVar9 = this->UncompressedBlockSamples;
      }
      if ((uVar9 == 0) ||
         (iVar12 = (int)this->_padding_, local_res20 < iVar12 * this->CompressedBlockSize)) break;
      uVar7 = 0;
      if (0 < iVar12) {
        lVar10 = 0;
        do {
          local_50 = local_res8 + uVar7 * this->ChannelBlockStride;
          uVar6 = 0;
          if ((int)uVar7 < (this->Reservoir).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FDecodeResult *)(*pcVar1)();
            return pFVar5;
          }
          pFVar11 = (this->Reservoir).AllocatorInstance.Data + lVar10;
          iVar12 = *(int *)&pFVar11[8].field_0x0 - this->ReservoirStart;
          if ((iVar12 < 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBefore >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                                 ,0xfb,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FDecodeResult *)(*pcVar1)();
            return pFVar5;
          }
          iVar4 = *(int *)&pFVar11[8].field_0x0;
          uVar6 = iVar12 + uVar9;
          if (iVar4 < (int)uVar6) {
            iVar3 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,uVar6 - iVar4,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 8),
                               (int *)(pFVar11 + 0xc));
            memset((void *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar3 * 2),0,
                   (longlong)(int)(uVar6 - iVar4) * 2);
          }
          else {
            if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
            }
            if ((int)uVar6 < iVar4) {
              uVar8 = iVar4 - uVar6;
              if (((int)(uVar8 | uVar6) < 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                pFVar5 = (FDecodeResult *)(*pcVar1)();
                return pFVar5;
              }
              if (uVar8 != 0) {
                _Dst = (void *)(*(longlong *)&pFVar11->field_0x0 + (longlong)(int)uVar6 * 2);
                iVar4 = (*(int *)&pFVar11[8].field_0x0 - uVar6) - uVar8;
                if (iVar4 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 2),
                          (longlong)iVar4 * 2);
                }
                *(uint *)&pFVar11[8].field_0x0 = *(int *)&pFVar11[8].field_0x0 - uVar8;
              }
            }
          }
          bVar2 = ADPCM::DecodeBlock(local_50,this->CompressedBlockSize,
                                     (short *)(*(longlong *)&pFVar11->field_0x0 +
                                              (longlong)iVar12 * 2),uVar9);
          if (!bVar2) {
            *(undefined1 *)(this->_padding_ + 8) = 1;
            goto LAB_146bcc549;
          }
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((int)uVar7 < (int)this->_padding_);
      }
      this->TotalFramesDecoded = this->TotalFramesDecoded + uVar9;
      local_res20 = local_res20 - this->SrcAdvanceStride;
      local_res8 = local_res8 + this->SrcAdvanceStride;
      bVar2 = DrainReservoir(this,&local_58,(uint *)&param_4);
    } while (bVar2);
  }
LAB_146bcc549:
  __return_storage_ptr__->NumPcmBytesProduced = (int)local_58 - (int)param_3;
  lVar10 = this->_padding_;
  local_res18 = (int)param_1;
  __return_storage_ptr__->NumCompressedBytesConsumed = (int)local_res8 - local_res18;
  __return_storage_ptr__->NumAudioFramesProduced =
       (int)((ulonglong)(longlong)(((int)local_58 - (int)param_3) / (int)lVar10) >> 1);
  return __return_storage_ptr__;
}

// DrainReservoir @ 146bcce80

bool __thiscall
AdpcmAudioInfoPrivate::FAdpcmImpl::DrainReservoir(FAdpcmImpl *this,short **param_1,uint *param_2)

{
  TArray<TArray<short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  short *psVar13;
  uint *puVar14;
  short *psVar15;
  FScriptContainerElement *pFVar16;
  uint local_res8;
  longlong local_res20;
  
  if (((int)this->_padding_ < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,0xa7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((int)this->_padding_ != (this->Reservoir).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels == Reservoir.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,0xa8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar1 = &this->Reservoir;
  if (this->NumFramesToSkip != 0) {
    if (((this->Reservoir).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar12 = *(int *)((pTVar1->AllocatorInstance).Data + 8) - this->ReservoirStart;
    if (((int)uVar12 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFramesBeforeSkip >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                           ,0xae,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar10 = this->NumFramesToSkip;
    uVar7 = uVar10;
    if ((int)uVar12 < (int)uVar10) {
      uVar7 = uVar12;
    }
    this->ReservoirStart = this->ReservoirStart + uVar7;
    this->NumFramesToSkip = uVar10 - uVar7;
  }
  if (((this->Reservoir).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar12 = *(int *)((pTVar1->AllocatorInstance).Data + 8) - this->ReservoirStart;
  if (((int)uVar12 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSrcFrames >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,0xb5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((int)*param_2 < (int)uVar12) {
    uVar12 = *param_2;
  }
  if (0 < (int)uVar12) {
    iVar8 = (int)this->_padding_;
    if (iVar8 == 1) {
      if (((this->Reservoir).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      memcpy(*param_1,(void *)(*(longlong *)(pTVar1->AllocatorInstance).Data +
                              (ulonglong)this->ReservoirStart * 2),(longlong)(int)uVar12 * 2);
    }
    else {
      local_res8 = 0;
      if (0 < iVar8) {
        local_res20 = 0;
        do {
          psVar15 = *param_1 + (int)local_res8;
          if ((iVar8 * 2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("BytesBetweenElements >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                 ,0x40,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar10 = 0;
          if ((int)local_res8 < (this->Reservoir).ArrayNum) {
            uVar10 = ~local_res8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          psVar13 = (short *)(*(longlong *)((this->Reservoir).AllocatorInstance.Data + local_res20)
                             + (ulonglong)this->ReservoirStart * 2);
          iVar9 = 0;
          do {
            sVar3 = *psVar13;
            psVar13 = psVar13 + 1;
            if ((iVar9 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                   ,0x96,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            *psVar15 = sVar3;
            iVar9 = iVar9 + 1;
            psVar15 = (short *)((longlong)psVar15 + (longlong)(iVar8 * 2));
          } while (iVar9 < (int)uVar12);
          local_res8 = local_res8 + 1;
          iVar8 = (int)this->_padding_;
          local_res20 = local_res20 + 0x10;
        } while ((int)local_res8 < iVar8);
      }
    }
    puVar14 = &this->ReservoirStart;
    *puVar14 = *puVar14 + uVar12;
    if (((this->Reservoir).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (*puVar14 == *(uint *)((this->Reservoir).AllocatorInstance.Data + 8)) {
      uVar10 = 0;
      if (0 < (int)this->_padding_) {
        lVar11 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < (this->Reservoir).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar16 = (this->Reservoir).AllocatorInstance.Data + lVar11;
          iVar8 = *(int *)&pFVar16[8].field_0x0;
          pFVar2 = pFVar16 + 8;
          if (iVar8 < 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,-iVar8,(ForAnyElementType *)pFVar16,(int *)pFVar2,
                               (int *)(pFVar16 + 0xc));
            memset((void *)(*(longlong *)&pFVar16->field_0x0 + (longlong)iVar9 * 2),0,
                   (longlong)-iVar8 * 2);
          }
          else if (0 < iVar8) {
            *(int *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - iVar8;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((int)uVar10 < (int)this->_padding_);
      }
      this->ReservoirStart = 0;
    }
    *param_2 = *param_2 - uVar12;
    *param_1 = *param_1 + (int)(uVar12 * (int)this->_padding_);
  }
  return *param_2 != 0;
}

// GetFrameSize @ 146bcd3e0

int __thiscall AdpcmAudioInfoPrivate::FAdpcmImpl::GetFrameSize(FAdpcmImpl *this)

{
  return this->CompressedBlockSize * (int)this->_padding_;
}

// GetMaxFrameSizeSamples @ 146bcd640

uint __thiscall AdpcmAudioInfoPrivate::FAdpcmImpl::GetMaxFrameSizeSamples(FAdpcmImpl *this)

{
  return this->UncompressedBlockSamples;
}

// ParseWaveHeader @ 146bcd740

bool __thiscall
AdpcmAudioInfoPrivate::FAdpcmImpl::ParseWaveHeader
          (FAdpcmImpl *this,FWaveModInfo *param_1,WaveFormatHeader *param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2->wFormatTag == 2) {
    if (0x35 < param_3) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)&param_2[2].wBitsPerSample;
      uVar2 = param_2[1].wFormatTag;
      this->UncompressedBlockSamples = (uint)uVar2;
      uVar10 = (uint)this->_padding_;
      this->UncompressedBlockSize = (uint)uVar2 + (uint)uVar2;
      piVar1 = &(this->Reservoir).ArrayNum;
      uVar3 = *param_1->pBlockAlign;
      this->CompressedBlockSize = (uint)uVar3;
      uVar5 = (ulonglong)((param_1->SampleDataSize - 1) + (uint)uVar3) / (ulonglong)uVar3;
      uVar11 = (uint)uVar5;
      this->TotalBlocks = uVar11;
      this->TotalBlocksPerChannel = (uint)(uVar5 / uVar10);
      *(uint *)((longlong)&this->_padding_ + 4) = uVar11 * uVar2 * 2;
      iVar4 = *piVar1;
      if (iVar4 < (int)uVar10) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,uVar10 - iVar4,&(this->Reservoir).AllocatorInstance,piVar1,
                           &(this->Reservoir).ArrayMax);
        memset((this->Reservoir).AllocatorInstance.Data + (longlong)iVar9 * 0x10,0,
               (longlong)(int)(uVar10 - iVar4) << 4);
      }
      else {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if ((int)uVar10 < iVar4) {
          uVar11 = iVar4 - uVar10;
          if (((int)(uVar11 | uVar10) < 0) &&
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
          if (uVar11 != 0) {
            TArray<TArray<short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
            RemoveAtImpl(&this->Reservoir,uVar10,uVar11);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(this->Reservoir).AllocatorInstance,*piVar1,
                       &(this->Reservoir).ArrayMax);
          }
        }
      }
      bVar7 = FPcmAudioInfoHybrid::IsStreaming((FPcmAudioInfoHybrid *)this->_padding_);
      uVar10 = this->CompressedBlockSize;
      if (bVar7) {
        uVar11 = uVar10;
        uVar10 = uVar10 * (int)this->_padding_;
      }
      else {
        uVar11 = uVar10 * this->TotalBlocksPerChannel;
      }
      this->ChannelBlockStride = uVar11;
      this->SrcAdvanceStride = uVar10;
      return true;
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5351384063741526033>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                       ,0x11,"FormatHeader->wFormatTag == 2");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  return false;
}

// PrepareToLoop @ 146bcd990

void __thiscall AdpcmAudioInfoPrivate::FAdpcmImpl::PrepareToLoop(FAdpcmImpl *this)

{
  this->TotalFramesDecoded = 0;
  return;
}

// SeekToFrame @ 146bce5b0

void __thiscall AdpcmAudioInfoPrivate::FAdpcmImpl::SeekToFrame(FAdpcmImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  
  uVar5 = *(int *)((longlong)&this->_padding_ + 4) - 1;
  if (param_1 < uVar5) {
    uVar5 = param_1;
  }
  uVar10 = 0;
  if (uVar5 != 0) {
    uVar10 = (ulonglong)uVar5;
  }
  uVar5 = (uint)(uVar10 / this->UncompressedBlockSamples);
  if ((this->TotalBlocksPerChannel <= uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SeekFrameBlockIndex < TotalBlocksPerChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = uVar5 * this->UncompressedBlockSamples;
  uVar6 = this->SrcAdvanceStride;
  if ((*(uint *)((longlong)&this->_padding_ + 4) <= uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockFrameStart < TotalSamplesPerChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,0x5e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (int)uVar10 - uVar8;
  if (((int)uVar9 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FramesToSkip >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,0x62,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((int)this->UncompressedBlockSamples <= (int)uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FramesToSkip < (int32)UncompressedBlockSamples",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->TotalFramesDecoded = uVar8;
  this->NumFramesToSkip = uVar9;
  FPcmAudioInfoHybrid::SeekToAbs
            ((FPcmAudioInfoHybrid *)this->_padding_,(ulonglong)(uVar5 * uVar6),(ulonglong)param_1);
  uVar5 = 0;
  this->ReservoirStart = 0;
  if (0 < (int)this->_padding_) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar5 < (this->Reservoir).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (this->Reservoir).AllocatorInstance.Data + lVar11;
      iVar2 = *(int *)&pFVar12[8].field_0x0;
      pFVar1 = pFVar12 + 8;
      if (iVar2 < 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,-iVar2,(ForAnyElementType *)pFVar12,(int *)pFVar1,
                           (int *)(pFVar12 + 0xc));
        memset((void *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar7 * 2),0,
               (longlong)-iVar2 * 2);
      }
      else if (0 < iVar2) {
        *(int *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - iVar2;
      }
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar5 < (int)this->_padding_);
  }
  return;
}

