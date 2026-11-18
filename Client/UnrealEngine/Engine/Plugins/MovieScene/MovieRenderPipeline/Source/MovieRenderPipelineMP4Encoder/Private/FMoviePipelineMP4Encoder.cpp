// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineMP4Encoder
// Functions: 9

// FMoviePipelineMP4Encoder @ 14de31db0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

FMoviePipelineMP4Encoder * __thiscall
FMoviePipelineMP4Encoder::FMoviePipelineMP4Encoder
          (FMoviePipelineMP4Encoder *this,FMoviePipelineMP4EncoderOptions *param_1)

{
  ::FString::FString((FString *)this,&param_1->OutputFilename);
  (this->Options).Width = param_1->Width;
  (this->Options).Height = param_1->Height;
  (this->Options).FrameRate = param_1->FrameRate;
  (this->Options).bIncludeAudio = param_1->bIncludeAudio;
  (this->Options).AudioChannelCount = param_1->AudioChannelCount;
  (this->Options).AudioSampleRate = param_1->AudioSampleRate;
  (this->Options).AudioAverageBitRate = param_1->AudioAverageBitRate;
  (this->Options).CommonMeanBitRate = param_1->CommonMeanBitRate;
  (this->Options).CommonMaxBitRate = param_1->CommonMaxBitRate;
  (this->Options).CommonQualityVsSpeed = param_1->CommonQualityVsSpeed;
  (this->Options).CommonConstantRateFactor = param_1->CommonConstantRateFactor;
  (this->Options).EncodingProfile = param_1->EncodingProfile;
  (this->Options).EncodingLevel = param_1->EncodingLevel;
  (this->Options).EncodingRateControl = param_1->EncodingRateControl;
  this->NumVideoSamplesWritten = 0;
  this->NumAudioSamplesWritten = 0;
  this->SinkWriter = (IMFSinkWriter *)0x0;
  this->VideoStreamIndex = 0;
  this->AudioStreamIndex = 0;
  this->bInitialized = false;
  this->bFinalized = false;
  return this;
}

// ~FMoviePipelineMP4Encoder @ 14de32190

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void __thiscall FMoviePipelineMP4Encoder::~FMoviePipelineMP4Encoder(FMoviePipelineMP4Encoder *this)

{
  FScriptContainerElement *pFVar1;
  
  Finalize(this);
  pFVar1 = (this->Options).OutputFilename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Finalize @ 14de32e00

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMoviePipelineMP4Encoder::Finalize(FMoviePipelineMP4Encoder *this)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((this->bFinalized == false) && (this->bInitialized != false)) {
    if (this->SinkWriter != (IMFSinkWriter *)0x0) {
      iVar1 = (**(code **)((longlong)*this->SinkWriter + 0x58))();
      if ((iVar1 < 0) && (1 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      (**(code **)((longlong)*this->SinkWriter + 0x10))();
      this->SinkWriter = (IMFSinkWriter *)0x0;
    }
    HVar2 = MFShutdown();
    if ((HVar2 < 0) && (1 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    FWindowsPlatformMisc::CoUninitialize();
    this->bFinalized = true;
  }
  return;
}

// Initialize @ 14de33200

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMoviePipelineMP4Encoder::Initialize(FMoviePipelineMP4Encoder *this)

{
  bool bVar1;
  HRESULT HVar2;
  
  bVar1 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
  if (bVar1) {
    HVar2 = MFStartup(0x20070,0);
    if (HVar2 < 0) {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        return false;
      }
    }
    else {
      bVar1 = InitializeEncoder(this);
      if (bVar1) {
        this->bInitialized = true;
        return true;
      }
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
  }
  else if (1 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return false;
  }
  return false;
}

// InitializeEncoder @ 14de332b0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMoviePipelineMP4Encoder::InitializeEncoder(FMoviePipelineMP4Encoder *this)

{
  EMoviePipelineMP4EncodeProfile EVar1;
  EMoviePipelineMP4EncodeLevel EVar2;
  EMoviePipelineMP4EncodeRateControlMode EVar3;
  _func_17603 *p_Var4;
  IMFSinkWriter *pIVar5;
  code *pcVar6;
  IMFMediaType *pIVar7;
  bool bVar8;
  undefined1 uVar9;
  HRESULT HVar10;
  uint uVar11;
  wchar_t *pwVar12;
  GUID *guidKey;
  UINT32 UVar13;
  UINT32 unValue;
  IMFMediaType *local_res8;
  IMFAttributes *local_res10;
  IMFMediaType *local_res18;
  IMFMediaType *local_res20;
  IMFMediaType *local_78;
  IMFAttributes *local_70;
  ICodecAPI *local_68;
  FString local_60 [2];
  
  this->SinkWriter = (IMFSinkWriter *)0x0;
  local_res8 = (IMFMediaType *)0x0;
  local_res18 = (IMFMediaType *)0x0;
  local_78 = (IMFMediaType *)0x0;
  local_res20 = (IMFMediaType *)0x0;
  local_70 = (IMFAttributes *)0x0;
  HVar10 = MFCreateAttributes(&local_70,1);
  UVar13 = 0;
  if (-1 < HVar10) {
    (*local_70->lpVtbl->SetUINT32)(local_70,(GUID *)&_GUID_9c27891a_ed7a_40e1_88e8_b22727a024ee,0);
    (*local_70->lpVtbl->SetUINT32)(local_70,(GUID *)&MF_READWRITE_ENABLE_HARDWARE_TRANSFORMS,1);
    (*local_70->lpVtbl->SetUINT32)(local_70,(GUID *)&MF_SINK_WRITER_DISABLE_THROTTLING,1);
    if ((this->Options).OutputFilename.Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->Options).OutputFilename.Data.AllocatorInstance.Data;
    }
    HVar10 = MFCreateSinkWriterFromURL(pwVar12,0,local_70,&this->SinkWriter);
    if (-1 < HVar10) {
      HVar10 = MFCreateMediaType(&local_res8);
      if (((((((local_res8 != (IMFMediaType *)0x0) && (-1 < HVar10)) &&
             (HVar10 = (*local_res8->lpVtbl->SetGUID)
                                 (local_res8,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Video),
             -1 < HVar10)) &&
            ((HVar10 = (*local_res8->lpVtbl->SetGUID)
                                 (local_res8,(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFVideoFormat_H264),
             -1 < HVar10 &&
             (HVar10 = (*local_res8->lpVtbl->SetUINT32)(local_res8,(GUID *)&MF_MT_INTERLACE_MODE,2),
             -1 < HVar10)))) &&
           ((HVar10 = (*local_res8->lpVtbl->SetUINT64)
                                (local_res8,(GUID *)&MF_MT_FRAME_SIZE,
                                 CONCAT44((this->Options).Width,(this->Options).Height)),
            -1 < HVar10 &&
            ((HVar10 = (*local_res8->lpVtbl->SetUINT64)
                                 (local_res8,(GUID *)&MF_MT_FRAME_RATE,
                                  CONCAT44((this->Options).FrameRate.Numerator,
                                           (this->Options).FrameRate.Denominator)), -1 < HVar10 &&
             (HVar10 = (*local_res8->lpVtbl->SetUINT64)
                                 (local_res8,(GUID *)&MF_MT_PIXEL_ASPECT_RATIO,0x100000001),
             -1 < HVar10)))))) &&
          (HVar10 = (*local_res8->lpVtbl->SetUINT32)(local_res8,(GUID *)&MF_MT_VIDEO_PRIMARIES,2),
          -1 < HVar10)) &&
         ((((HVar10 = (*local_res8->lpVtbl->SetUINT32)
                                (local_res8,(GUID *)&MF_MT_TRANSFER_FUNCTION,7), -1 < HVar10 &&
            (HVar10 = (*local_res8->lpVtbl->SetUINT32)(local_res8,(GUID *)&MF_MT_YUV_MATRIX,1),
            -1 < HVar10)) &&
           (HVar10 = (*local_res8->lpVtbl->SetUINT32)
                               (local_res8,(GUID *)&MF_MT_VIDEO_NOMINAL_RANGE,2), -1 < HVar10)) &&
          (HVar10 = (*local_res8->lpVtbl->SetUINT32)
                              (local_res8,(GUID *)&_GUID_98332df8_03cd_476b_89fa_3f9e442dec9f,
                               (this->Options).CommonQualityVsSpeed), pIVar7 = local_res8,
          -1 < HVar10)))) {
        EVar1 = (this->Options).EncodingProfile;
        p_Var4 = local_res8->lpVtbl->SetUINT32;
        if (EVar1 == Baseline) {
          unValue = 0x42;
        }
        else if (EVar1 == Main) {
          unValue = 0x4d;
        }
        else if (EVar1 == High) {
          unValue = 100;
        }
        else {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineMP4Encoder\\Private\\Windows\\MoviePipelineMP4Encoder.cpp"
                             ,0x171,L"");
          unValue = UVar13;
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        HVar10 = (*p_Var4)(pIVar7,(GUID *)&MF_MT_MPEG2_PROFILE,unValue);
        if (-1 < HVar10) {
          EVar2 = (this->Options).EncodingLevel;
          uVar11 = 0xffffffff;
          if (EVar2 != Auto) {
            uVar11 = (uint)EVar2;
          }
          HVar10 = (*local_res8->lpVtbl->SetUINT32)(local_res8,(GUID *)&MF_MT_MPEG2_LEVEL,uVar11);
          if ((-1 < HVar10) &&
             (HVar10 = (*local_res8->lpVtbl->SetUINT32)
                                 (local_res8,(GUID *)&_GUID_ee6cad62_d305_4248_a50e_e1b255f7caf8,1),
             pIVar7 = local_res8, -1 < HVar10)) {
            EVar3 = (this->Options).EncodingRateControl;
            p_Var4 = local_res8->lpVtbl->SetUINT32;
            if (EVar3 == ConstantQP) {
LAB_14de3366d:
              UVar13 = 1;
            }
            else if (EVar3 == Quality) {
              UVar13 = 3;
            }
            else if (EVar3 == VariableBitRate) {
              UVar13 = 2;
            }
            else {
              if (EVar3 == VariableBitRate_Constrained) goto LAB_14de3366d;
              if ((EVar3 != ConstantBitRate) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineMP4Encoder\\Private\\Windows\\MoviePipelineMP4Encoder.cpp"
                                     ,0x180,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
            }
            HVar10 = (*p_Var4)(pIVar7,(GUID *)&_GUID_1c0608e9_370c_4710_8a58_cb6181c42423,UVar13);
            if (-1 < HVar10) {
              HVar10 = (*local_res8->lpVtbl->SetUINT32)
                                 (local_res8,(GUID *)&_GUID_8d390aac_dc5c_4200_b57f_814d04babab2,2);
            }
          }
        }
      }
      if ((-1 < HVar10) && (pIVar5 = this->SinkWriter, pIVar5 != (IMFSinkWriter *)0x0)) {
        HVar10 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,local_res8,&this->VideoStreamIndex);
      }
    }
  }
  if ((this->Options).bIncludeAudio == false) {
LAB_14de338fe:
    if (-1 < HVar10) {
      HVar10 = MFCreateMediaType(&local_res18);
      if (local_res18 != (IMFMediaType *)0x0) {
        if ((((-1 < HVar10) &&
             (HVar10 = (*local_res18->lpVtbl->SetGUID)
                                 (local_res18,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Video),
             -1 < HVar10)) &&
            (HVar10 = (*local_res18->lpVtbl->SetGUID)
                                (local_res18,(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFVideoFormat_ARGB32),
            -1 < HVar10)) &&
           (((HVar10 = (*local_res18->lpVtbl->SetUINT32)
                                 (local_res18,(GUID *)&MF_MT_INTERLACE_MODE,2), -1 < HVar10 &&
             (HVar10 = (*local_res18->lpVtbl->SetUINT64)
                                 (local_res18,(GUID *)&MF_MT_FRAME_SIZE,
                                  CONCAT44((this->Options).Width,(this->Options).Height)),
             -1 < HVar10)) &&
            ((HVar10 = (*local_res18->lpVtbl->SetUINT64)
                                 (local_res18,(GUID *)&MF_MT_FRAME_RATE,
                                  CONCAT44((this->Options).FrameRate.Numerator,
                                           (this->Options).FrameRate.Denominator)), -1 < HVar10 &&
             (HVar10 = (*local_res18->lpVtbl->SetUINT64)
                                 (local_res18,(GUID *)&MF_MT_PIXEL_ASPECT_RATIO,0x100000001),
             -1 < HVar10)))))) {
          HVar10 = (*local_res18->lpVtbl->SetUINT32)
                             (local_res18,(GUID *)&MF_MT_ALL_SAMPLES_INDEPENDENT,1);
        }
        UVar13 = (this->Options).Width * 4;
        if (HVar10 < 0) goto LAB_14de33c54;
        HVar10 = (*local_res18->lpVtbl->SetUINT32)(local_res18,(GUID *)&MF_MT_DEFAULT_STRIDE,UVar13)
        ;
        if (-1 < HVar10) {
          HVar10 = (*local_res18->lpVtbl->SetUINT32)
                             (local_res18,(GUID *)&MF_MT_SAMPLE_SIZE,UVar13 * (this->Options).Height
                             );
        }
      }
      if ((-1 < HVar10) && (this->SinkWriter != (IMFSinkWriter *)0x0)) {
        local_res10 = (IMFAttributes *)0x0;
        HVar10 = MFCreateAttributes(&local_res10,1);
        if (local_res10 == (IMFAttributes *)0x0) {
LAB_14de33c2b:
          if (-1 < HVar10) {
            HVar10 = (**(code **)((longlong)*this->SinkWriter + 0x20))
                               (this->SinkWriter,this->VideoStreamIndex,local_res18);
          }
        }
        else {
          EVar3 = (this->Options).EncodingRateControl;
          if (EVar3 != ConstantBitRate) {
            if (EVar3 == VariableBitRate_Constrained) {
              if (HVar10 < 0) goto LAB_14de33c46;
              HVar10 = (*local_res10->lpVtbl->SetUINT32)
                                 (local_res10,(GUID *)&_GUID_0db96574_b6a4_4c8b_8106_3773de0310cd,
                                  (this->Options).CommonMeanBitRate);
              if ((-1 < HVar10) &&
                 (HVar10 = (*local_res10->lpVtbl->SetUINT32)
                                     (local_res10,
                                      (GUID *)&_GUID_9651eae4_39b9_4ebf_85ef_d7f444ec7465,
                                      (this->Options).CommonMaxBitRate), -1 < HVar10)) {
                uVar11 = (this->Options).CommonMeanBitRate;
                guidKey = &_GUID_f7222374_2144_4815_b550_a37f8e12ee52;
                goto LAB_14de33c18;
              }
            }
            else if (EVar3 == VariableBitRate) {
              if (HVar10 < 0) goto LAB_14de33c46;
              HVar10 = (*local_res10->lpVtbl->SetUINT32)
                                 (local_res10,(GUID *)&_GUID_9651eae4_39b9_4ebf_85ef_d7f444ec7465,
                                  (this->Options).CommonMaxBitRate);
              if (-1 < HVar10) {
                uVar11 = (this->Options).CommonMeanBitRate;
                guidKey = &_GUID_f7222374_2144_4815_b550_a37f8e12ee52;
                goto LAB_14de33c18;
              }
            }
            else if (EVar3 == Quality) {
              if (HVar10 < 0) goto LAB_14de33c46;
              HVar10 = (*local_res10->lpVtbl->SetUINT32)
                                 (local_res10,(GUID *)&_GUID_1c0608e9_370c_4710_8a58_cb6181c42423,3)
              ;
              if ((-1 < HVar10) &&
                 (HVar10 = (*local_res10->lpVtbl->SetUINT64)
                                     (local_res10,
                                      (GUID *)&_GUID_2cb5696b_23fb_4ce1_a0f9_ef5b90fd55ca,
                                      (ulonglong)(this->Options).CommonConstantRateFactor),
                 -1 < HVar10)) {
                uVar11 = 0;
                guidKey = &_GUID_fcbf57a3_7ea5_4b0c_9644_69b40c39c391;
                goto LAB_14de33c18;
              }
            }
            else if (EVar3 == ConstantQP) {
              if (HVar10 < 0) goto LAB_14de33c46;
              HVar10 = (*local_res10->lpVtbl->SetUINT32)
                                 (local_res10,(GUID *)&_GUID_fcbf57a3_7ea5_4b0c_9644_69b40c39c391,
                                  (this->Options).CommonConstantRateFactor);
              if ((-1 < HVar10) &&
                 (HVar10 = (*local_res10->lpVtbl->SetUINT32)
                                     (local_res10,
                                      (GUID *)&_GUID_0ee22c6a_a37c_4568_b5f1_9d4c2b3ab886,
                                      (this->Options).CommonConstantRateFactor), -1 < HVar10)) {
                uVar11 = (this->Options).CommonConstantRateFactor;
                guidKey = &_GUID_3daf6f66_a6a7_45e0_a8e5_f2743f46a3a2;
                goto LAB_14de33c18;
              }
            }
            goto LAB_14de33c2b;
          }
          if (-1 < HVar10) {
            HVar10 = (*local_res10->lpVtbl->SetUINT32)
                               (local_res10,(GUID *)&_GUID_f7222374_2144_4815_b550_a37f8e12ee52,
                                (this->Options).CommonMeanBitRate);
            if (-1 < HVar10) {
              uVar11 = (this->Options).CommonMeanBitRate;
              guidKey = &_GUID_0db96574_b6a4_4c8b_8106_3773de0310cd;
LAB_14de33c18:
              HVar10 = (*local_res10->lpVtbl->SetUINT32)(local_res10,(GUID *)guidKey,uVar11);
            }
            goto LAB_14de33c2b;
          }
        }
LAB_14de33c46:
        if (local_res10 != (IMFAttributes *)0x0) {
          (*local_res10->lpVtbl->Release)(local_res10);
        }
      }
    }
  }
  else if (-1 < HVar10) {
    HVar10 = MFCreateMediaType(&local_78);
    if ((((local_78 != (IMFMediaType *)0x0) && (-1 < HVar10)) &&
        (HVar10 = (*local_78->lpVtbl->SetGUID)
                            (local_78,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Audio),
        -1 < HVar10)) &&
       (((HVar10 = (*local_78->lpVtbl->SetGUID)
                             (local_78,(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFAudioFormat_AAC),
         -1 < HVar10 &&
         (HVar10 = (*local_78->lpVtbl->SetUINT32)
                             (local_78,(GUID *)&MF_MT_AUDIO_BITS_PER_SAMPLE,0x10), -1 < HVar10)) &&
        ((HVar10 = (*local_78->lpVtbl->SetUINT32)
                             (local_78,(GUID *)&MF_MT_AUDIO_SAMPLES_PER_SECOND,
                              (this->Options).AudioSampleRate), -1 < HVar10 &&
         (HVar10 = (*local_78->lpVtbl->SetUINT32)
                             (local_78,(GUID *)&MF_MT_AUDIO_NUM_CHANNELS,
                              (this->Options).AudioChannelCount), -1 < HVar10)))))) {
      HVar10 = (*local_78->lpVtbl->SetUINT32)
                         (local_78,(GUID *)&MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
                          (this->Options).AudioAverageBitRate);
    }
    if ((-1 < HVar10) &&
       ((pIVar5 = this->SinkWriter, pIVar5 == (IMFSinkWriter *)0x0 ||
        (HVar10 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,local_78,&this->AudioStreamIndex),
        -1 < HVar10)))) {
      HVar10 = MFCreateMediaType(&local_res20);
      if (((local_res20 != (IMFMediaType *)0x0) &&
          (((((-1 < HVar10 &&
              (HVar10 = (*local_res20->lpVtbl->SetGUID)
                                  (local_res20,(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Audio)
              , -1 < HVar10)) &&
             (HVar10 = (*local_res20->lpVtbl->SetGUID)
                                 (local_res20,(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFAudioFormat_PCM),
             -1 < HVar10)) &&
            ((HVar10 = (*local_res20->lpVtbl->SetUINT32)
                                 (local_res20,(GUID *)&MF_MT_AUDIO_BITS_PER_SAMPLE,0x10),
             -1 < HVar10 &&
             (HVar10 = (*local_res20->lpVtbl->SetUINT32)
                                 (local_res20,(GUID *)&MF_MT_AUDIO_SAMPLES_PER_SECOND,
                                  (this->Options).AudioSampleRate), -1 < HVar10)))) &&
           (HVar10 = (*local_res20->lpVtbl->SetUINT32)
                               (local_res20,(GUID *)&MF_MT_AUDIO_NUM_CHANNELS,
                                (this->Options).AudioChannelCount), -1 < HVar10)))) &&
         ((HVar10 = (*local_res20->lpVtbl->SetUINT32)
                              (local_res20,(GUID *)&MF_MT_ALL_SAMPLES_INDEPENDENT,1), -1 < HVar10 &&
          (HVar10 = (*local_res20->lpVtbl->SetUINT32)
                              (local_res20,(GUID *)&MF_MT_AUDIO_BLOCK_ALIGNMENT,
                               (this->Options).AudioChannelCount * 2), -1 < HVar10)))) {
        HVar10 = (*local_res20->lpVtbl->SetUINT32)
                           (local_res20,(GUID *)&MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
                            (this->Options).AudioSampleRate * (this->Options).AudioChannelCount * 2)
        ;
      }
      goto LAB_14de338fe;
    }
  }
LAB_14de33c54:
  if ((this->Options).bIncludeAudio == false) {
LAB_14de33c8a:
    if (HVar10 < 0) goto LAB_14de33d26;
  }
  else {
    if (HVar10 < 0) goto LAB_14de33d26;
    pIVar5 = this->SinkWriter;
    if (pIVar5 != (IMFSinkWriter *)0x0) {
      HVar10 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,this->AudioStreamIndex,local_res20,0);
      goto LAB_14de33c8a;
    }
  }
  pIVar5 = this->SinkWriter;
  if (pIVar5 != (IMFSinkWriter *)0x0) {
    local_68 = (ICodecAPI *)0x0;
    HVar10 = (**(code **)((longlong)*pIVar5 + 0x60))
                       (pIVar5,this->VideoStreamIndex,&GUID_NULL,
                        &_GUID_901db4c7_31ce_41a2_85dc_8fa0bf41b8da,&local_68);
    ::`anonymous_namespace'::GetCodecApiDllPath(local_60,local_68);
    if (3 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (HVar10 < 0) goto LAB_14de33d26;
  }
  if (this->SinkWriter != (IMFSinkWriter *)0x0) {
    (**(code **)((longlong)*this->SinkWriter + 0x28))();
  }
  if (this->SinkWriter != (IMFSinkWriter *)0x0) {
    (**(code **)((longlong)*this->SinkWriter + 8))();
  }
LAB_14de33d26:
  if (this->SinkWriter != (IMFSinkWriter *)0x0) {
    (**(code **)((longlong)*this->SinkWriter + 0x10))();
  }
  if (local_res8 != (IMFMediaType *)0x0) {
    (*local_res8->lpVtbl->Release)(local_res8);
  }
  if (local_res18 != (IMFMediaType *)0x0) {
    (*local_res18->lpVtbl->Release)(local_res18);
  }
  if (local_78 != (IMFMediaType *)0x0) {
    (*local_78->lpVtbl->Release)(local_78);
  }
  if (local_res20 != (IMFMediaType *)0x0) {
    (*local_res20->lpVtbl->Release)(local_res20);
  }
  return HVar10 == 0;
}

// WriteAudioSample @ 14de34a90

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMoviePipelineMP4Encoder::WriteAudioSample
          (FMoviePipelineMP4Encoder *this,TArrayView<short,int> *param_1)

{
  DWORD cbMaxLength;
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  HRESULT HVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  FMoviePipelineMP4Encoder *local_res8;
  IMFSample *local_res18;
  IMFMediaBuffer *local_res20;
  BYTE *local_68 [6];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,"MRQ_WMFSink_WriteAudioSample",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineMP4Encoder\\Private\\Windows\\MoviePipelineMP4Encoder.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  if ((this->Options).bIncludeAudio == false) {
    bVar3 = true;
  }
  else if (((this->bInitialized != false) || (this->bFinalized != false)) ||
          (local_res8 = this,
          bVar3 = `FMoviePipelineMP4Encoder::WriteAudioSample'::__l6::<lambda_1>::operator()
                            (&local_res8), bVar3)) {
    dVar2 = __real_43e0000000000000;
    dVar1 = __real_416312d000000000;
    iVar9 = (int)(((double)(this->Options).FrameRate.Denominator /
                  (double)(this->Options).FrameRate.Numerator) *
                 (double)(this->Options).AudioSampleRate);
    iVar4 = (int)((uint)param_1->ArrayNum / (this->Options).AudioChannelCount) / iVar9;
    iVar5 = 0;
    iVar8 = iVar5;
    if (0 < iVar4) {
      do {
        local_res18 = (IMFSample *)0x0;
        local_res20 = (IMFMediaBuffer *)0x0;
        cbMaxLength = iVar9 * (this->Options).AudioChannelCount * 2;
        HVar6 = MFCreateMemoryBuffer(cbMaxLength,&local_res20);
        if (HVar6 < 0) {
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
LAB_14de34e55:
          bVar3 = false;
          goto LAB_14de34de3;
        }
        local_68[0] = (BYTE *)0x0;
        iVar5 = (*local_res20->lpVtbl->Lock)(local_res20,local_68,(DWORD *)0x0,(DWORD *)0x0);
        if (-1 < iVar5) {
          iVar5 = MFCopyImage(local_68[0],cbMaxLength,
                              (BYTE *)(param_1->DataPtr +
                                      iVar8 * (this->Options).AudioChannelCount * iVar9),cbMaxLength
                              ,cbMaxLength,1);
        }
        (*local_res20->lpVtbl->Unlock)(local_res20);
        if (((iVar5 < 0) ||
            (iVar5 = (*local_res20->lpVtbl->SetCurrentLength)(local_res20,cbMaxLength), iVar5 < 0))
           || (iVar5 = MFCreateSample(&local_res18), iVar5 < 0)) {
LAB_14de34da3:
          if (local_res18 != (IMFSample *)0x0) {
            (*local_res18->lpVtbl->Release)(local_res18);
          }
        }
        else {
          if (local_res18 != (IMFSample *)0x0) {
            iVar5 = (*local_res18->lpVtbl->AddBuffer)(local_res18,local_res20);
            if (iVar5 < 0) goto LAB_14de34da3;
            if (local_res18 != (IMFSample *)0x0) {
              lVar7 = 0;
              dVar11 = ((double)(this->Options).FrameRate.Denominator /
                       (double)(this->Options).FrameRate.Numerator) * dVar1;
              if ((dVar2 <= dVar11) && (dVar11 = dVar11 - dVar2, dVar11 < dVar2)) {
                lVar7 = -0x8000000000000000;
              }
              iVar5 = (*local_res18->lpVtbl->SetSampleDuration)
                                (local_res18,(longlong)dVar11 + lVar7);
            }
          }
          if (iVar5 < 0) goto LAB_14de34da3;
          if (local_res18 != (IMFSample *)0x0) {
            lVar7 = 0;
            dVar11 = ((double)(this->Options).FrameRate.Denominator /
                     (double)(this->Options).FrameRate.Numerator) * dVar1;
            if ((dVar2 <= dVar11) && (dVar11 = dVar11 - dVar2, dVar11 < dVar2)) {
              lVar7 = -0x8000000000000000;
            }
            iVar5 = (*local_res18->lpVtbl->SetSampleTime)
                              (local_res18,((longlong)dVar11 + lVar7) * this->NumAudioSamplesWritten
                              );
            this->NumAudioSamplesWritten = this->NumAudioSamplesWritten + 1;
            if (-1 < iVar5) {
              if (local_res18 == (IMFSample *)0x0) goto LAB_14de34db1;
              iVar5 = (**(code **)((longlong)*this->SinkWriter + 0x30))
                                (this->SinkWriter,this->AudioStreamIndex);
            }
            goto LAB_14de34da3;
          }
        }
LAB_14de34db1:
        if (local_res20 != (IMFMediaBuffer *)0x0) {
          (*local_res20->lpVtbl->Release)(local_res20);
        }
        if (iVar5 < 0) goto LAB_14de34e55;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
    bVar3 = iVar5 == 0;
  }
  else {
    bVar3 = false;
  }
LAB_14de34de3:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// WriteFrame @ 14de34e60

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMoviePipelineMP4Encoder::WriteFrame(FMoviePipelineMP4Encoder *this,uchar *param_1)

{
  double dVar1;
  bool bVar2;
  HRESULT HVar3;
  longlong lVar4;
  int dwWidthInBytes;
  DWORD cbMaxLength;
  bool bVar5;
  double dVar6;
  FMoviePipelineMP4Encoder *local_res8;
  IMFSample *local_res18;
  IMFMediaBuffer *local_res20;
  BYTE *local_48 [4];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId142,"WMFVideoEncoder_WriteFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineMP4Encoder\\Private\\Windows\\MoviePipelineMP4Encoder.cpp"
               ,0x8e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId142);
  }
  if (((this->bInitialized != false) || (this->bFinalized != false)) ||
     (local_res8 = this,
     bVar2 = `FMoviePipelineMP4Encoder::WriteFrame'::__l3::<lambda_1>::operator()(&local_res8),
     bVar2)) {
    dwWidthInBytes = (this->Options).Width * 4;
    local_res18 = (IMFSample *)0x0;
    cbMaxLength = dwWidthInBytes * (this->Options).Height;
    local_res20 = (IMFMediaBuffer *)0x0;
    HVar3 = MFCreateMemoryBuffer(cbMaxLength,&local_res20);
    if (-1 < HVar3) {
      local_48[0] = (BYTE *)0x0;
      HVar3 = (*local_res20->lpVtbl->Lock)(local_res20,local_48,(DWORD *)0x0,(DWORD *)0x0);
      if ((((HVar3 < 0) ||
           (HVar3 = MFCopyImage(local_48[0],dwWidthInBytes,param_1,dwWidthInBytes,dwWidthInBytes,
                                (this->Options).Height), HVar3 < 0)) ||
          ((HVar3 = (*local_res20->lpVtbl->Unlock)(local_res20), HVar3 < 0 ||
           ((HVar3 = (*local_res20->lpVtbl->SetCurrentLength)(local_res20,cbMaxLength), HVar3 < 0 ||
            (HVar3 = MFCreateSample(&local_res18), HVar3 < 0)))))) ||
         ((local_res18 != (IMFSample *)0x0 &&
          (HVar3 = (*local_res18->lpVtbl->AddBuffer)(local_res18,local_res20), HVar3 < 0)))) {
LAB_14de35116:
        if (local_res18 != (IMFSample *)0x0) {
          (*local_res18->lpVtbl->Release)(local_res18);
        }
      }
      else {
        dVar1 = __real_43e0000000000000;
        if (local_res18 != (IMFSample *)0x0) {
          lVar4 = 0;
          dVar6 = ((double)(this->Options).FrameRate.Denominator /
                  (double)(this->Options).FrameRate.Numerator) * __real_416312d000000000;
          if ((__real_43e0000000000000 <= dVar6) &&
             (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
            lVar4 = -0x8000000000000000;
          }
          HVar3 = (*local_res18->lpVtbl->SetSampleTime)
                            (local_res18,((longlong)dVar6 + lVar4) * this->NumVideoSamplesWritten);
          this->NumVideoSamplesWritten = this->NumVideoSamplesWritten + 1;
        }
        if (HVar3 < 0) goto LAB_14de35116;
        if (local_res18 != (IMFSample *)0x0) {
          lVar4 = 0;
          dVar6 = ((double)(this->Options).FrameRate.Denominator /
                  (double)(this->Options).FrameRate.Numerator) * __real_416312d000000000;
          if ((dVar1 <= dVar6) && (dVar6 = dVar6 - dVar1, dVar6 < dVar1)) {
            lVar4 = -0x8000000000000000;
          }
          HVar3 = (*local_res18->lpVtbl->SetSampleDuration)(local_res18,(longlong)dVar6 + lVar4);
          if (-1 < HVar3) {
            if (local_res18 == (IMFSample *)0x0) goto LAB_14de35124;
            HVar3 = (**(code **)((longlong)*this->SinkWriter + 0x30))
                              (this->SinkWriter,this->VideoStreamIndex);
          }
          goto LAB_14de35116;
        }
      }
LAB_14de35124:
      if (local_res20 != (IMFMediaBuffer *)0x0) {
        (*local_res20->lpVtbl->Release)(local_res20);
      }
      bVar2 = HVar3 == 0;
      goto LAB_14de35142;
    }
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  bVar2 = false;
LAB_14de35142:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// operator() @ 15058fd60

bool __thiscall `FMoviePipelineMP4Encoder::WriteFrame'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1417868674068381553>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1417868674068381553>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15058fdb0

bool __thiscall
`FMoviePipelineMP4Encoder::WriteAudioSample'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1417868674068381443>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1417868674068381443>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

