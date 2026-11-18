// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// FOggVorbisEncoder @ 1444f1240

FOggVorbisEncoder * __thiscall
FOggVorbisEncoder::FOggVorbisEncoder(FOggVorbisEncoder *this,FSoundQualityInfo *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOggVorbisEncoder *pFVar4;
  
  Audio::IAudioEncoder::IAudioEncoder((IAudioEncoder *)this,param_2 * 4,0x40000);
  this->_padding_ = (longlong)&___7FOggVorbisEncoder__6B_;
  this->NumChannels = param_1->NumChannels;
  this->PrivateState = (FOggVorbisEncoderPrivateState *)0x0;
  StartFile(this,param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  iVar3 = Audio::TCircularAudioBuffer<unsigned_char,16>::Push
                    ((TCircularAudioBuffer<unsigned_char,16> *)&this->_padding_,
                     (uchar *)this->_padding_,(uint)this->_padding_);
  if (iVar3 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Remainder > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\IAudioEncoder.cpp"
                       ,0x5d,
                       L"Insufficient slack for header! Please use a larger value for DataBufferSlack."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOggVorbisEncoder *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// EncodeChunk @ 1444fa350

bool __thiscall
FOggVorbisEncoder::EncodeChunk
          (FOggVorbisEncoder *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FOggVorbisEncoderPrivateState *pFVar1;
  uchar *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 local_res10 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_res18;
  
  local_res18 = param_2;
  if ((0x400 < param_1->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() <= 1024",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OggVorbisEncoder.cpp"
                         ,0x9f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((this->PrivateState == (FOggVorbisEncoderPrivateState *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateState != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OggVorbisEncoder.cpp"
                         ,0xa0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar3 = (longlong)param_1->ArrayNum / (longlong)this->NumChannels;
  uVar11 = (ulonglong)(int)uVar3;
  plVar9 = (longlong *)vorbis_analysis_buffer(&this->PrivateState->DspState,uVar3 & 0xffffffff);
  iVar14 = 0;
  if (0 < (int)uVar3) {
    lVar12 = 0;
    do {
      iVar8 = this->NumChannels;
      iVar10 = 0;
      plVar15 = plVar9;
      if (0 < iVar8) {
        do {
          uVar13 = iVar8 * iVar14 + iVar10;
          uVar7 = 0;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
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
          iVar10 = iVar10 + 1;
          *(undefined4 *)(*plVar15 + lVar12 * 4) =
               *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 4);
          iVar8 = this->NumChannels;
          plVar15 = plVar15 + 1;
        } while (iVar10 < iVar8);
      }
      iVar14 = iVar14 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (longlong)uVar11);
    uVar11 = uVar3 & 0xffffffff;
    param_2 = local_res18;
  }
  vorbis_analysis_wrote(&this->PrivateState->DspState,uVar11 & 0xffffffff);
  iVar14 = vorbis_analysis_blockout(&this->PrivateState->DspState,&this->PrivateState->CurrentBlock)
  ;
  do {
    if (iVar14 != 1) {
      return true;
    }
    vorbis_analysis(&this->PrivateState->CurrentBlock,0);
    vorbis_bitrate_addblock(&this->PrivateState->CurrentBlock);
    iVar14 = vorbis_bitrate_flushpacket
                       (&this->PrivateState->DspState,&this->PrivateState->CurrentPacket);
    while (iVar14 != 0) {
      iVar14 = ogg_stream_packetin(this->PrivateState,&this->PrivateState->CurrentPacket);
      if (iVar14 != 0) {
        local_res10[0] = 0;
        `FOggVorbisEncoderPrivateState::PushPacket'::__l2::<lambda_1>::operator()(local_res10);
      }
      pFVar1 = this->PrivateState;
      do {
        iVar14 = ogg_stream_pageout(pFVar1,&pFVar1->CurrentPage);
        if (iVar14 == 0) break;
        puVar2 = (pFVar1->CurrentPage).header;
        iVar14 = (pFVar1->CurrentPage).header_len;
        if (((puVar2 == (uchar *)0x0) && (iVar14 != 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar14,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        if (iVar14 != 0) {
          memcpy((param_2->AllocatorInstance).Data + iVar8,puVar2,(longlong)iVar14);
        }
        puVar2 = (pFVar1->CurrentPage).body;
        iVar14 = (pFVar1->CurrentPage).body_len;
        if (((puVar2 == (uchar *)0x0) && (iVar14 != 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar14,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        if (iVar14 != 0) {
          memcpy((param_2->AllocatorInstance).Data + iVar8,puVar2,(longlong)iVar14);
        }
        iVar14 = ogg_page_eos(&pFVar1->CurrentPage);
      } while (iVar14 == 0);
      iVar14 = vorbis_bitrate_flushpacket
                         (&this->PrivateState->DspState,&this->PrivateState->CurrentPacket);
    }
    iVar14 = vorbis_analysis_blockout(&this->PrivateState->DspState);
  } while( true );
}

// EndFile @ 1444faac0

bool __thiscall
FOggVorbisEncoder::EndFile
          (FOggVorbisEncoder *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FOggVorbisEncoderPrivateState *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->PrivateState == (FOggVorbisEncoderPrivateState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateState != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OggVorbisEncoder.cpp"
                       ,199,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  FOggVorbisEncoderPrivateState::FlushPages(this->PrivateState,param_1);
  vorbis_analysis_wrote(&this->PrivateState->DspState,0);
  pFVar1 = this->PrivateState;
  if (pFVar1 != (FOggVorbisEncoderPrivateState *)0x0) {
    ogg_stream_clear(pFVar1);
    vorbis_block_clear(&pFVar1->CurrentBlock);
    vorbis_dsp_clear(&pFVar1->DspState);
    vorbis_info_clear(&pFVar1->BitstreamSettings);
    ::operator_delete(pFVar1,0x2f8);
  }
  this->PrivateState = (FOggVorbisEncoderPrivateState *)0x0;
  return true;
}

// GetCompressedPacketSize @ 1445037d0

int __thiscall FOggVorbisEncoder::GetCompressedPacketSize(FOggVorbisEncoder *this)

{
  return 0;
}

// SamplesRequiredPerEncode @ 144518a70

long64 __thiscall FOggVorbisEncoder::SamplesRequiredPerEncode(FOggVorbisEncoder *this)

{
  return 0x400;
}

// StartFile @ 14451dc70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOggVorbisEncoder::StartFile
          (FOggVorbisEncoder *this,FSoundQualityInfo *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FOggVorbisEncoderPrivateState *pFVar5;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8 [32];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [48];
  
  if (param_2->ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutFileStart.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OggVorbisEncoder.cpp"
                       ,0x7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->PrivateState != (FOggVorbisEncoderPrivateState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateState == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OggVorbisEncoder.cpp"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = ::operator_new(0x2f8);
  if (pFVar5 == (FOggVorbisEncoderPrivateState *)0x0) {
    pFVar5 = (FOggVorbisEncoderPrivateState *)0x0;
  }
  else {
    vorbis_info_init(&pFVar5->BitstreamSettings);
    iVar4 = vorbis_encode_init_vbr
                      (&pFVar5->BitstreamSettings,param_1->NumChannels,param_1->SampleRate,
                       (float)param_1->Quality * __real_3c23d70a);
    if ((iVar4 != 0) && (2 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_FOggVorbisEncoderPrivateState::FOggVorbisEncoderPrivateState(FSoundQualityInfo_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    vorbis_analysis_init(&pFVar5->DspState,&pFVar5->BitstreamSettings);
    vorbis_block_init(&pFVar5->DspState,&pFVar5->CurrentBlock);
    ogg_stream_init(pFVar5,0);
  }
  this->PrivateState = pFVar5;
  vorbis_comment_init(local_c8);
  vorbis_comment_add_tag(local_c8,"ENCODER","UnrealEngine4Runtime");
  vorbis_analysis_headerout(&this->PrivateState->DspState,local_c8,local_a8,local_80,local_58);
  vorbis_comment_clear(local_c8);
  iVar4 = ogg_stream_packetin(this->PrivateState,local_a8);
  if (iVar4 != 0) {
    `FOggVorbisEncoderPrivateState::PushPacket'::__l2::<lambda_1>::operator()(local_res8);
  }
  iVar4 = ogg_stream_packetin(this->PrivateState,local_80);
  if (iVar4 != 0) {
    `FOggVorbisEncoderPrivateState::PushPacket'::__l2::<lambda_1>::operator()(local_res18);
  }
  iVar4 = ogg_stream_packetin(this->PrivateState,local_58);
  if (iVar4 != 0) {
    `FOggVorbisEncoderPrivateState::PushPacket'::__l2::<lambda_1>::operator()(local_res20);
  }
  FOggVorbisEncoderPrivateState::FlushPages(this->PrivateState,param_2);
  return true;
}

