// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 10

// FVoiceEncoderOpus @ 14ec3a860

FVoiceEncoderOpus * __thiscall FVoiceEncoderOpus::FVoiceEncoderOpus(FVoiceEncoderOpus *this)

{
  this->_padding_ = (longlong)&___7FVoiceEncoderOpus__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->SampleRate = 0;
  this->NumChannels = 0;
  this->FrameSize = 0;
  this->Encoder = (OpusEncoder *)0x0;
  *(undefined8 *)(this->Entropy + 4) = 0;
  this->Generation = '\0';
  this->Entropy[0] = 0;
  this->Entropy[1] = 0;
  this->Entropy[2] = 0;
  this->Entropy[3] = 0;
  return this;
}

// ~FVoiceEncoderOpus @ 14ec3ace0

void __thiscall FVoiceEncoderOpus::~FVoiceEncoderOpus(FVoiceEncoderOpus *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FVoiceEncoderOpus__6B_;
  FMemory::Free(this->Encoder);
  this->Encoder = (OpusEncoder *)0x0;
  this->_padding_ = (longlong)&___7IVoiceEncoder__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ec3ad33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Destroy @ 14ec3d6a0

void __thiscall FVoiceEncoderOpus::Destroy(FVoiceEncoderOpus *this)

{
  FMemory::Free(this->Encoder);
  this->Encoder = (OpusEncoder *)0x0;
  return;
}

// DumpState @ 14ec3dd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEncoderOpus::DumpState(FVoiceEncoderOpus *this)

{
  OpusEncoder *pOVar1;
  int iVar2;
  undefined4 auStackX_10 [2];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 auStack_10 [2];
  
  pOVar1 = this->Encoder;
  if (pOVar1 != (OpusEncoder *)0x0) {
    auStackX_20[0] = 0;
    iVar2 = opus_encoder_ctl(pOVar1,0xfa3,auStackX_20);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    uStack_14 = 0;
    iVar2 = opus_encoder_ctl(pOVar1,0xfa7,&uStack_14);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    uStack_18 = 0;
    iVar2 = opus_encoder_ctl(pOVar1,0xfbd,&uStack_18);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    auStackX_10[0] = 0;
    iVar2 = opus_encoder_ctl(pOVar1,0xfa1,auStackX_10);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    auStackX_18[0] = 0;
    iVar2 = opus_encoder_ctl(pOVar1,0xfb9,auStackX_18);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    auStack_10[0] = 0;
    iVar2 = opus_encoder_ctl(pOVar1,0xfab,auStack_10);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    if (3 < (byte)LogVoiceEncode._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Opus_Encoder_De_15304d5d8,
                 (FLogCategoryBase *)&LogVoiceEncode);
      if (3 < (byte)LogVoiceEncode._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
        if (3 < (byte)LogVoiceEncode._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
          if (3 < (byte)LogVoiceEncode._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
            if (3 < (byte)LogVoiceEncode._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
              if (3 < (byte)LogVoiceEncode._0_1_) {
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode)
                ;
                if (3 < (byte)LogVoiceEncode._0_1_) {
                  UE::Logging::Private::BasicLog<4>
                            (&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  if (3 < (byte)LogVoiceEncode._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    return;
  }
  return;
}

// Encode @ 14ec3dea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FVoiceEncoderOpus::Encode
          (FVoiceEncoderOpus *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Voice_Encoding> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Encode_SampleRate> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_Encode_NumChannels> FVar15;
  FThreadSafeStaticStat<FStat_STAT_Encode_Bitrate> FVar16;
  char *_Str;
  size_t sVar17;
  FThreadSafeStaticStat<FStat_STAT_Encode_CompressionRatio> FVar18;
  FThreadSafeStaticStat<FStat_STAT_Encode_OutSize> FVar19;
  undefined2 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  FNameEntryId FVar24;
  int iVar25;
  uint *puVar26;
  FName FVar27;
  longlong lVar28;
  uchar auVar29 [8];
  undefined1 auStackY_2f8 [32];
  FName local_290;
  uint local_288;
  uint uStack_284;
  uint *local_280;
  int local_278;
  int local_274;
  uint local_270;
  int local_26c;
  uchar *local_268;
  FVoiceEncoderOpus *local_260;
  FColor_u_0 local_258 [2];
  FName local_250;
  FName local_240;
  FName local_238;
  uchar *local_230;
  uchar *local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FStatMessage local_208;
  FStatMessage local_1f8;
  FStatMessage local_1e8;
  FStatMessage local_1d8;
  FStatMessage local_1c8;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_280 = param_4;
  local_270 = param_2;
  local_268 = param_3;
  local_260 = this;
  local_230 = param_1;
  if ((this->Encoder == (OpusEncoder *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Encoder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                         ,0x117,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  FVar11 = StatPtr_STAT_Voice_Encoding;
  if (StatPtr_STAT_Voice_Encoding == (FThreadSafeStaticStat<FStat_STAT_Voice_Encoding>)0x0) {
    pFVar10 = ::FName::FName(&local_1b8,"STAT_Voice_Encoding");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Voice_Encoding>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Voice_Encoding,*pFVar10,
                        L"VoiceEncode","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar11;
  bVar5 = false;
  bVar3 = false;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  bVar4 = false;
  bVar6 = false;
  FVar24 = FVar27.ComparisonIndex.Value;
  uVar21 = FVar27.Number;
  if ((FVar24.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_258[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_258[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar3 = true;
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar24.Value;
        local_290.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                   ,0x118);
        bVar5 = true;
        bVar3 = true;
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_288 = FVar24.Value;
      uStack_284 = uVar21;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar4 = true;
      goto LAB_14ec3e05b;
    }
  }
  bVar3 = bVar6;
  bVar5 = bVar4;
  bVar4 = false;
  FVar27 = local_250;
LAB_14ec3e05b:
  FVar12 = StatPtr_STAT_Encode_SampleRate;
  if (StatPtr_STAT_Encode_SampleRate == (FThreadSafeStaticStat<FStat_STAT_Encode_SampleRate>)0x0) {
    pFVar10 = ::FName::FName(&local_1b0,"STAT_Encode_SampleRate");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Encode_SampleRate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_SampleRate,*pFVar10,
                        L"Enc_SampleRate","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  iVar7 = this->SampleRate;
  uVar21 = FVar1.Number;
  FVar24 = FVar1.ComparisonIndex.Value;
  local_288 = FVar24.Value;
  uStack_284 = uVar21;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_208.NameAndInfo.Number = uVar21 & 0xffff8fff | 0x8000;
    local_240 = FVar1;
    local_208.StatData.Pad = (uchar  [8])(longlong)iVar7;
    local_208.NameAndInfo.Index.Value = FVar24.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_208);
    FStatsTrace::Set(&local_240,(longlong)iVar7);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  FVar15 = StatPtr_STAT_Encode_NumChannels;
  if (StatPtr_STAT_Encode_NumChannels == (FThreadSafeStaticStat<FStat_STAT_Encode_NumChannels>)0x0)
  {
    pFVar10 = ::FName::FName(&local_1a8,"STAT_Encode_NumChannels");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_Encode_NumChannels>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_NumChannels,*pFVar10,
                        L"Enc_NumChannels","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar15;
  iVar7 = this->NumChannels;
  uVar21 = FVar1.Number;
  uStack_284 = uVar21;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_288 = FVar1.ComparisonIndex.Value.Value;
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_1f8.NameAndInfo.Number = uVar21 & 0xffff8fff | 0x8000;
    local_238 = FVar1;
    local_1f8.StatData.Pad = (uchar  [8])(longlong)iVar7;
    local_1f8.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_1f8);
    FStatsTrace::Set(&local_238,(longlong)iVar7);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  uVar21 = local_270;
  local_288 = this->FrameSize * this->NumChannels * 2;
  iVar7 = (int)(0xc000 / (longlong)(int)local_288);
  if ((int)local_270 / (int)local_288 < iVar7) {
    iVar7 = (int)local_270 / (int)local_288;
  }
  uVar22 = local_270 % local_288;
  if (iVar7 == 0) {
    if ((uVar22 != local_270) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRemainder == RawDataSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                           ,0x128,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
LAB_14ec3e66d:
    *local_280 = 0;
  }
  else {
    if ((0xfe < iVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFramesToEncode < ((uint8) 0xff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                           ,0x12e,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
    iVar23 = iVar7 * 2 + 2;
    iVar25 = 0;
    local_228 = local_268 + iVar23;
    local_278 = 0;
    *local_268 = (uchar)iVar7;
    local_268[1] = this->Generation;
    if (0 < iVar7) {
      lVar28 = 0;
      local_274 = 0;
      do {
        iVar23 = opus_encode(this->Encoder,local_230 + local_274,this->FrameSize,local_228 + iVar25)
        ;
        if (iVar23 < 0) {
          _Str = (char *)opus_strerror(iVar23);
          if (2 < (byte)LogVoiceEncode._0_1_) {
            local_188._padding_ = 0;
            if (_Str == (char *)0x0) {
              local_188.Ptr = (wchar_t *)0x0;
              local_188.StringLength = 0;
            }
            else {
              sVar17 = strlen(_Str);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_188,_Str,(int)sVar17,Yes);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
            if ((void *)local_188._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_188._padding_);
            }
          }
          uVar22 = 0;
          *local_268 = '\0';
          goto LAB_14ec3e66d;
        }
        if (iVar23 == 1) {
          if (2 < (byte)LogVoiceEncode._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
          }
          uVar20 = 0;
        }
        else {
          iVar25 = iVar25 + iVar23;
          if ((0xfffe < iVar25) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CompressedBufferOffset < ((uint16) 0xffff)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                                 ,0x164,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            iVar7 = (*pcVar2)();
            return iVar7;
          }
          uVar20 = (undefined2)iVar25;
        }
        *(undefined2 *)(local_268 + lVar28 + 2) = uVar20;
        lVar28 = lVar28 + 2;
        local_278 = local_278 + 1;
        local_274 = local_274 + local_288;
        this = local_260;
      } while (local_278 < iVar7);
      iVar23 = iVar7 * 2 + 2;
      uVar21 = local_270;
    }
    puVar26 = local_280;
    *local_280 = iVar25 + iVar23;
    if (6 < (byte)LogVoiceEncode._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
    local_26c = 0;
    opus_encoder_ctl(this->Encoder,0xfa3);
    FVar16 = StatPtr_STAT_Encode_Bitrate;
    if (StatPtr_STAT_Encode_Bitrate == (FThreadSafeStaticStat<FStat_STAT_Encode_Bitrate>)0x0) {
      pFVar10 = ::FName::FName(&local_1a0,"STAT_Encode_Bitrate");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_Encode_Bitrate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_Bitrate,*pFVar10,
                          L"Enc_Bitrate","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar16;
    auVar29 = (uchar  [8])(longlong)local_26c;
    uVar8 = FVar1.Number;
    FVar24 = FVar1.ComparisonIndex.Value;
    local_290.ComparisonIndex.Value = FVar24.Value;
    local_290.Number = uVar8;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_1e8.NameAndInfo.Number = uVar8 & 0xffff8fff | 0x8000;
      local_220 = FVar1;
      local_1e8.StatData.Pad = auVar29;
      local_1e8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_1e8);
      FStatsTrace::Set(&local_220,(long64)auVar29);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
        puVar26 = local_280;
      }
      else {
        puVar26 = local_280;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
          puVar26 = local_280;
        }
      }
    }
    FVar18 = StatPtr_STAT_Encode_CompressionRatio;
    if (StatPtr_STAT_Encode_CompressionRatio ==
        (FThreadSafeStaticStat<FStat_STAT_Encode_CompressionRatio>)0x0) {
      pFVar10 = ::FName::FName(&local_198,"STAT_Encode_CompressionRatio");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_Encode_CompressionRatio>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_CompressionRatio,
                          *pFVar10,L"Enc_CompRatio","STATGROUP_Voice","STATCAT_Advanced",L"Voice",
                          true,false,NumBits,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar18;
    FVar24 = FVar1.ComparisonIndex.Value;
    uVar9 = FVar1.Number;
    uVar8 = *puVar26;
    local_290.ComparisonIndex.Value = FVar24.Value;
    local_290.Number = uVar9;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_1d8.NameAndInfo.Number = uVar9 & 0xffff8fff | 0x8000;
      local_218 = FVar1;
      local_1d8.StatData.Pad = (uchar  [8])(double)((float)uVar8 / (float)uVar21);
      local_1d8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_1d8);
      FStatsTrace::Set(&local_218,(double)((float)uVar8 / (float)uVar21));
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
        puVar26 = local_280;
      }
      else {
        puVar26 = local_280;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
          puVar26 = local_280;
        }
      }
    }
    FVar19 = StatPtr_STAT_Encode_OutSize;
    if (StatPtr_STAT_Encode_OutSize == (FThreadSafeStaticStat<FStat_STAT_Encode_OutSize>)0x0) {
      pFVar10 = ::FName::FName(&local_190,"STAT_Encode_OutSize");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_Encode_OutSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_OutSize,*pFVar10,
                          L"Enc_OutSize","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar19;
    auVar29[4] = '\0';
    auVar29[5] = '\0';
    auVar29[6] = '\0';
    auVar29[7] = '\0';
    auVar29._0_4_ = *puVar26;
    uVar21 = FVar1.Number;
    FVar24 = FVar1.ComparisonIndex.Value;
    local_290.ComparisonIndex.Value = FVar24.Value;
    local_290.Number = uVar21;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_1c8.NameAndInfo.Number = uVar21 & 0xffff8fff | 0x8000;
      local_210 = FVar1;
      local_1c8.StatData.Pad = auVar29;
      local_1c8.NameAndInfo.Index.Value = FVar24.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_1c8);
      FStatsTrace::Set(&local_210,(long64)auVar29);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
    uVar21 = local_260->Generation + 1;
    local_260->Generation = (char)uVar21 + (char)(uVar21 / 0xff);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return uVar22;
}

// Init @ 14ec3faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVoiceEncoderOpus::Init(FVoiceEncoderOpus *this,int param_1,int param_2,EAudioEncodeHint param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  OpusEncoder *pOVar4;
  undefined1 auStack_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (3 < (byte)LogVoiceEncode._0_1_) {
    pcVar2 = (char *)opus_get_version_string();
    local_158._padding_ = 0;
    if (pcVar2 == (char *)0x0) {
      local_158.Ptr = (wchar_t *)0x0;
      local_158.StringLength = 0;
    }
    else {
      sVar3 = strlen(pcVar2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar2,(int)sVar3,Yes);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if ((((param_1 == 8000) || (param_1 == 12000)) || (param_1 == 16000)) ||
     ((param_1 == 24000 || (param_1 == 48000)))) {
    if (param_2 - 1U < 2) {
      this->SampleRate = param_1;
      this->NumChannels = param_2;
      this->FrameSize = param_1 / 0x32;
      iVar1 = opus_encoder_get_size(param_2);
      pOVar4 = FMemory::Malloc((longlong)iVar1,0);
      this->Encoder = pOVar4;
      iVar1 = opus_encoder_init(pOVar4,this->SampleRate,this->NumChannels,
                                (param_3 == VoiceEncode_Audio) + 0x800);
      if (iVar1 == 0) {
        opus_encoder_ctl(this->Encoder,0xfa6,1);
        opus_encoder_ctl(this->Encoder,0xfb4,0);
        opus_encoder_ctl(this->Encoder,0xfaa,1);
        opus_encoder_ctl(this->Encoder,0xfac,0);
        return true;
      }
      if (2 < (byte)LogVoiceEncode._0_1_) {
        pcVar2 = (char *)opus_strerror(iVar1);
        local_158._padding_ = 0;
        if (pcVar2 == (char *)0x0) {
          local_158.Ptr = (wchar_t *)0x0;
          local_158.StringLength = 0;
        }
        else {
          sVar3 = strlen(pcVar2);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,pcVar2,(int)sVar3,Yes);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      (**(code **)(this->_padding_ + 0x38))(this);
      return iVar1 == 0;
    }
    if (2 < (byte)LogVoiceEncode._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
    }
  }
  else if (2 < (byte)LogVoiceEncode._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  return false;
}

// Reset @ 14ec41a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceEncoderOpus::Reset(FVoiceEncoderOpus *this)

{
  int iVar1;
  
  if (this->Encoder != (OpusEncoder *)0x0) {
    iVar1 = opus_encoder_ctl(this->Encoder,0xfbc);
    if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
      return;
    }
  }
  return;
}

// SetBitrate @ 14ec41a90

bool __thiscall FVoiceEncoderOpus::SetBitrate(FVoiceEncoderOpus *this,int param_1)

{
  int iVar1;
  
  if ((param_1 - 500U < 0x7ce0d) && (this->Encoder != (OpusEncoder *)0x0)) {
    iVar1 = opus_encoder_ctl(this->Encoder,0xfa2,param_1);
    return iVar1 == 0;
  }
  return false;
}

// SetComplexity @ 14ec41ad0

bool __thiscall FVoiceEncoderOpus::SetComplexity(FVoiceEncoderOpus *this,int param_1)

{
  int iVar1;
  
  if (((uint)param_1 < 0xb) && (this->Encoder != (OpusEncoder *)0x0)) {
    iVar1 = opus_encoder_ctl(this->Encoder,0xfaa,param_1);
    return iVar1 == 0;
  }
  return false;
}

// SetVBR @ 14ec41b10

bool __thiscall FVoiceEncoderOpus::SetVBR(FVoiceEncoderOpus *this,bool param_1)

{
  int iVar1;
  
  if (this->Encoder != (OpusEncoder *)0x0) {
    iVar1 = opus_encoder_ctl(this->Encoder,0xfa6,param_1);
    return iVar1 == 0;
  }
  return false;
}

