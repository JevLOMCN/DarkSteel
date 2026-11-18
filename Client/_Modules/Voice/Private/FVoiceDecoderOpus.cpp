// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 7

// FVoiceDecoderOpus @ 14ec3a820

FVoiceDecoderOpus * __thiscall FVoiceDecoderOpus::FVoiceDecoderOpus(FVoiceDecoderOpus *this)

{
  this->_padding_ = (longlong)&___7FVoiceDecoderOpus__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->SampleRate = 0;
  this->NumChannels = 0;
  this->FrameSize = 0;
  this->Decoder = (OpusDecoder *)0x0;
  *(undefined8 *)(this->Entropy + 4) = 0;
  this->LastGeneration = '\0';
  this->Entropy[0] = 0;
  this->Entropy[1] = 0;
  this->Entropy[2] = 0;
  this->Entropy[3] = 0;
  return this;
}

// ~FVoiceDecoderOpus @ 14ec3ac70

void __thiscall FVoiceDecoderOpus::~FVoiceDecoderOpus(FVoiceDecoderOpus *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FVoiceDecoderOpus__6B_;
  FMemory::Free(this->Decoder);
  this->Decoder = (OpusDecoder *)0x0;
  this->_padding_ = (longlong)&___7IVoiceDecoder__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ec3acc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Decode @ 14ec3cca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVoiceDecoderOpus::Decode
          (FVoiceDecoderOpus *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Voice_Decoding> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Decode_SampleRate> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Decode_NumChannels> FVar16;
  char *_Str;
  size_t sVar17;
  FThreadSafeStaticStat<FStat_STAT_Decode_CompressionRatio> FVar18;
  FThreadSafeStaticStat<FStat_STAT_Decode_OutSize> FVar19;
  ushort uVar20;
  ulonglong uVar21;
  int iVar22;
  FName FVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  uchar auVar28 [8];
  undefined1 auStackY_2b8 [32];
  int local_238;
  FColor_u_0 local_220 [2];
  FName local_218;
  FName local_210;
  FName local_200;
  FName local_1f8;
  uchar *local_1f0;
  uchar *local_1e8;
  uchar *local_1e0;
  FName local_1d8;
  FStatMessage local_1d0;
  FStatMessage local_1c0;
  FStatMessage local_1b0;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FVar12 = StatPtr_STAT_Voice_Decoding;
  local_1f0 = param_3;
  local_1e0 = param_1;
  if (StatPtr_STAT_Voice_Decoding == (FThreadSafeStaticStat<FStat_STAT_Voice_Decoding>)0x0) {
    pFVar11 = ::FName::FName(&local_1a0,"STAT_Voice_Decoding");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Voice_Decoding>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Voice_Decoding,*pFVar11,
                        L"VoiceDecode","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar12;
  bVar5 = false;
  bVar6 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar7 = false;
  bVar8 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14ec3ce1e:
    bVar6 = bVar8;
    bVar5 = bVar7;
    bVar7 = false;
    FVar23 = local_210;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_220[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_220[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_218.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                   ,0x25e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec3ce1e;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
  }
  FVar13 = StatPtr_STAT_Decode_SampleRate;
  if (StatPtr_STAT_Decode_SampleRate == (FThreadSafeStaticStat<FStat_STAT_Decode_SampleRate>)0x0) {
    pFVar11 = ::FName::FName(&local_198,"STAT_Decode_SampleRate");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Decode_SampleRate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_SampleRate,*pFVar11,
                        L"Dec_SampleRate","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  iVar22 = this->SampleRate;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_1d0.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_200 = FVar3;
    local_1d0.StatData.Pad = (uchar  [8])(longlong)iVar22;
    local_1d0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_1d0);
    FStatsTrace::Set(&local_200,(longlong)iVar22);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  FVar16 = StatPtr_STAT_Decode_NumChannels;
  if (StatPtr_STAT_Decode_NumChannels == (FThreadSafeStaticStat<FStat_STAT_Decode_NumChannels>)0x0)
  {
    pFVar11 = ::FName::FName(&local_190,"STAT_Decode_NumChannels");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Decode_NumChannels>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_NumChannels,*pFVar11,
                        L"Dec_NumChannels","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar16;
  iVar22 = this->NumChannels;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_1c0.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_1f8 = FVar3;
    local_1c0.StatData.Pad = (uchar  [8])(longlong)iVar22;
    local_1c0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_1c0);
    FStatsTrace::Set(&local_1f8,(longlong)iVar22);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  if ((param_1 == (uchar *)0x0) || (param_2 < 2)) {
    *param_4 = 0;
    goto LAB_14ec3d5e7;
  }
  iVar22 = this->FrameSize * this->NumChannels;
  bVar1 = *param_1;
  bVar2 = param_1[1];
  if (((uint)bVar2 != this->LastGeneration + 1) && (5 < (byte)LogVoiceDecode._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
  }
  uVar24 = (uint)bVar1;
  if ((uVar24 == 0) || ((int)(0xc000 / (longlong)(iVar22 * 2)) < (int)uVar24)) {
    if (2 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    }
    uVar26 = 0;
  }
  else {
    uVar26 = uVar24 * 2 + 2;
    if (param_2 < uVar26) {
LAB_14ec3d357:
      if (2 < (byte)LogVoiceDecode._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_decod_15304e3d0,
                   (FLogCategoryBase *)&LogVoiceDecode);
      }
    }
    else {
      uVar21 = 0;
      uVar9 = 0;
      uVar27 = uVar21;
      if (uVar24 != 0) {
        do {
          uVar20 = *(ushort *)(param_1 + uVar21 * 2 + 2);
          if (uVar20 < (ushort)uVar9) goto LAB_14ec3d357;
          uVar21 = uVar21 + 1;
          uVar27 = (ulonglong)((int)uVar27 + (uVar20 - uVar9));
          uVar9 = (uint)uVar20;
        } while ((longlong)uVar21 < (longlong)(int)uVar24);
      }
      uVar21 = 0;
      if (param_2 < (int)uVar27 + uVar26) goto LAB_14ec3d357;
      local_1e8 = param_1 + uVar26;
      local_238 = 0;
      uVar20 = 0;
      if (uVar24 != 0) {
        uVar27 = uVar21;
        do {
          uVar26 = (uint)uVar21;
          if ((int)(*param_4 - uVar26) < iVar22 * 0xc) {
            if (2 < (byte)LogVoiceDecode._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
            }
            break;
          }
          if (*(ushort *)(param_1 + uVar27 * 2 + 2) == 0) {
            if (5 < (byte)LogVoiceDecode._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
            }
          }
          else {
            iVar25 = (uint)*(ushort *)(param_1 + uVar27 * 2 + 2) - (uint)uVar20;
            if ((this->Decoder == (OpusDecoder *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Decoder",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceCodecOpus.cpp"
                                   ,0x297,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = opus_decode(this->Decoder,local_1e8 + local_238);
            if (iVar10 < 0) {
              _Str = (char *)opus_strerror(iVar10);
              if (2 < (byte)LogVoiceDecode._0_1_) {
                local_178._padding_ = 0;
                if (_Str == (char *)0x0) {
                  local_178.Ptr = (wchar_t *)0x0;
                  local_178.StringLength = 0;
                }
                else {
                  sVar17 = strlen(_Str);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_178,_Str,(int)sVar17,Yes);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode)
                ;
                if ((void *)local_178._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_178._padding_);
                  local_238 = local_238 + iVar25;
                  uVar20 = *(ushort *)(local_1e0 + uVar27 * 2 + 2);
                  param_1 = local_1e0;
                  goto LAB_14ec3d30f;
                }
              }
            }
            else {
              if ((iVar10 != this->FrameSize) && (2 < (byte)LogVoiceDecode._0_1_)) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode)
                ;
              }
              uVar21 = (ulonglong)(uVar26 + iVar10 * this->NumChannels * 2);
            }
            local_238 = local_238 + iVar25;
            uVar20 = *(ushort *)(local_1e0 + uVar27 * 2 + 2);
            param_1 = local_1e0;
          }
LAB_14ec3d30f:
          uVar26 = (uint)uVar21;
          uVar27 = uVar27 + 1;
        } while ((longlong)uVar27 < (longlong)(int)uVar24);
        goto LAB_14ec3d3aa;
      }
    }
    uVar26 = 0;
  }
LAB_14ec3d3aa:
  *param_4 = uVar26;
  if (6 < (byte)LogVoiceDecode._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
  }
  FVar18 = StatPtr_STAT_Decode_CompressionRatio;
  if (StatPtr_STAT_Decode_CompressionRatio ==
      (FThreadSafeStaticStat<FStat_STAT_Decode_CompressionRatio>)0x0) {
    pFVar11 = ::FName::FName(&local_188,"STAT_Decode_CompressionRatio");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Decode_CompressionRatio>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_CompressionRatio,*pFVar11,
                        L"Dec_CompRatio","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                        NumBits,false,false,MCR_Invalid);
  }
  FThreadStats::AddMessage<double>
            (*(FName *)FVar18,Set,(double)((float)param_2 / (float)*param_4),false);
  FVar19 = StatPtr_STAT_Decode_OutSize;
  if (StatPtr_STAT_Decode_OutSize == (FThreadSafeStaticStat<FStat_STAT_Decode_OutSize>)0x0) {
    pFVar11 = ::FName::FName(&local_180,"STAT_Decode_OutSize");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Decode_OutSize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_OutSize,*pFVar11,
                        L"Dec_OutSize","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar19;
  auVar28[4] = '\0';
  auVar28[5] = '\0';
  auVar28[6] = '\0';
  auVar28[7] = '\0';
  auVar28._0_4_ = *param_4;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_1b0.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_1d8 = FVar3;
    local_1b0.StatData.Pad = auVar28;
    local_1b0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_1b0);
    FStatsTrace::Set(&local_1d8,(long64)auVar28);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
      this->LastGeneration = bVar2;
      goto LAB_14ec3d5e7;
    }
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  this->LastGeneration = bVar2;
LAB_14ec3d5e7:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// Destroy @ 14ec3d670

void __thiscall FVoiceDecoderOpus::Destroy(FVoiceDecoderOpus *this)

{
  FMemory::Free(this->Decoder);
  this->Decoder = (OpusDecoder *)0x0;
  return;
}

// DumpState @ 14ec3dc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceDecoderOpus::DumpState(FVoiceDecoderOpus *this)

{
  OpusDecoder *pOVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  pOVar1 = this->Decoder;
  if (pOVar1 == (OpusDecoder *)0x0) {
    if (3 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
      return;
    }
  }
  else {
    local_res8[0] = 0;
    iVar2 = opus_decoder_ctl(pOVar1,0xfcd,local_res8);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceDecode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    }
    local_res10[0] = 0;
    iVar2 = opus_decoder_ctl(pOVar1,0xfc1,local_res10);
    if ((iVar2 != 0) && (2 < (byte)LogVoiceDecode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    }
    if (3 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
      if (3 < (byte)LogVoiceDecode._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
        if (3 < (byte)LogVoiceDecode._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
          return;
        }
      }
    }
  }
  return;
}

// Init @ 14ec3f860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FVoiceDecoderOpus::Init(FVoiceDecoderOpus *this,int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  OpusDecoder *pOVar4;
  undefined1 auStack_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (3 < (byte)LogVoiceDecode._0_1_) {
    pcVar2 = (char *)opus_get_version_string();
    local_148._padding_ = 0;
    if (pcVar2 == (char *)0x0) {
      local_148.Ptr = (wchar_t *)0x0;
      local_148.StringLength = 0;
    }
    else {
      sVar3 = strlen(pcVar2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar2,(int)sVar3,Yes);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if ((((param_1 == 8000) || (param_1 == 12000)) || (param_1 == 16000)) ||
     ((param_1 == 24000 || (param_1 == 48000)))) {
    if (param_2 - 1U < 2) {
      this->SampleRate = param_1;
      this->NumChannels = param_2;
      this->FrameSize = param_1 / 0x32;
      iVar1 = opus_decoder_get_size(param_2);
      pOVar4 = FMemory::Malloc((longlong)iVar1,0);
      this->Decoder = pOVar4;
      iVar1 = opus_decoder_init(pOVar4,this->SampleRate,this->NumChannels);
      if (iVar1 != 0) {
        if (2 < (byte)LogVoiceDecode._0_1_) {
          pcVar2 = (char *)opus_strerror(iVar1);
          local_148._padding_ = 0;
          if (pcVar2 == (char *)0x0) {
            local_148.Ptr = (wchar_t *)0x0;
            local_148.StringLength = 0;
          }
          else {
            sVar3 = strlen(pcVar2);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,pcVar2,(int)sVar3,Yes);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        (**(code **)(this->_padding_ + 0x20))(this);
      }
      return iVar1 == 0;
    }
    if (2 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    }
  }
  else if (2 < (byte)LogVoiceDecode._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
  }
  return false;
}

// Reset @ 14ec419f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVoiceDecoderOpus::Reset(FVoiceDecoderOpus *this)

{
  int iVar1;
  
  if (this->Decoder != (OpusDecoder *)0x0) {
    iVar1 = opus_decoder_ctl(this->Decoder,0xfbc);
    if ((iVar1 != 0) && (2 < (byte)LogVoiceDecode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
      return;
    }
  }
  return;
}

