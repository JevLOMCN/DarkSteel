// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 11

// operator() @ 14ca0ad80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FCodecV1Decoder::DecodeFrameData'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  FCodecV1Decoder *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_CodecV1Decoder> FVar17;
  FHuffmanBitStreamReader *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_DecodeIndexStream> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_DecodePositionStream> FVar22;
  longlong lVar23;
  FThreadSafeStaticStat<FStat_STAT_DecodeImportedVertexNumbersStream> FVar24;
  FThreadSafeStaticStat<FStat_STAT_DecodeColorStream> FVar25;
  TStatId TVar26;
  ulonglong uVar27;
  FName FVar28;
  uint uVar29;
  FName FVar30;
  uint uVar31;
  uint local_res18;
  uint local_res20;
  uint local_298;
  FColor_u_0 local_278;
  FColor_u_0 local_274;
  FColor_u_0 local_270;
  FColor_u_0 local_26c;
  FColor_u_0 local_268 [2];
  FName local_260;
  byte local_258;
  FName local_250;
  byte local_248;
  FName local_240;
  byte local_238;
  FName local_230;
  byte local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1e8;
  FName local_1d8;
  FName local_1c8;
  FName local_1b8;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  LARGE_INTEGER local_198;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  FStatMessage local_180;
  FStatMessage local_170;
  FStatMessage local_160;
  FStatMessage local_150;
  FStatMessage local_140;
  FSourceLocation local_128;
  FSourceLocation local_108;
  FSourceLocation local_e8;
  FSourceLocation local_c8;
  FHuffmanBitStreamReader local_a8 [2];
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  uVar27 = 0;
  uVar31 = 0;
  uVar29 = 0;
  FVar17 = StatPtr_STAT_CodecV1Decoder;
  if (StatPtr_STAT_CodecV1Decoder == (FThreadSafeStaticStat<FStat_STAT_CodecV1Decoder>)0x0) {
    pFVar16 = ::FName::FName(local_48,"STAT_CodecV1Decoder");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_CodecV1Decoder>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CodecV1Decoder,*pFVar16,
                        L"FCodecV1Decoder","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar17;
  bVar9 = false;
  bVar8 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14ca0aee3:
    bVar9 = bVar11;
    bVar8 = bVar10;
    bVar10 = false;
    FVar30 = local_1f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_278.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_278._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_220.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                   ,0x4c1);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0aee3;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar10 = true;
  }
  local_298 = *(uint *)((longlong)this + 0xc);
  local_res20 = *(uint *)((longlong)this + 0x10);
  local_res18 = 0;
  if (*(char *)((longlong)this + 0x14) != '\0') {
    uVar15 = *(uint *)((longlong)this + 8);
    uVar13 = local_298 / uVar15;
    uVar31 = uVar13 * param_1;
    uVar14 = local_res20 / uVar15;
    local_res18 = uVar14 * param_1;
    local_298 = local_298 - uVar31;
    if (param_1 + 1U != uVar15) {
      local_298 = uVar13;
    }
    local_res20 = local_res20 - local_res18;
    if (param_1 + 1U != uVar15) {
      local_res20 = uVar14;
    }
    lVar23 = *(longlong *)((longlong)this + 0x28);
    uVar15 = uVar29;
    if (param_1 < *(int *)(lVar23 + 0x28)) {
      uVar15 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(longlong *)(lVar23 + 0x20) != 0) {
      lVar23 = *(longlong *)(lVar23 + 0x20);
    }
    uVar27 = (ulonglong)*(uint *)(lVar23 + (longlong)param_1 * 4);
  }
  local_a8[0].BitBuffer = 0;
  local_a8[0].BitBufferBits = 0;
  local_a8[0].BytePos = 0;
  local_a8[0].Bytes = (uchar *)(uVar27 + **(longlong **)((longlong)this + 0x18));
  local_a8[0].NumBytes =
       (ulong64)(uint)((int)(*(longlong **)((longlong)this + 0x18))[1] - (int)uVar27);
  pFVar18 = local_a8;
  if (*(char *)((longlong)this + 0x14) == '\0') {
    pFVar18 = *(FHuffmanBitStreamReader **)((longlong)this + 0x20);
  }
  if ((local_298 != 0) && (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb8) == '\0')) {
    FVar19 = StatPtr_STAT_DecodeIndexStream;
    if (StatPtr_STAT_DecodeIndexStream == (FThreadSafeStaticStat<FStat_STAT_DecodeIndexStream>)0x0)
    {
      pFVar16 = ::FName::FName(&local_50,"STAT_DecodeIndexStream");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_DecodeIndexStream>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeIndexStream,*pFVar16,
                          L"DecodeIndexStream","STATGROUP_GeometryCache","STATCAT_Advanced",
                          L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar19;
    bVar6 = false;
    bVar11 = false;
    local_1e8.ComparisonIndex.Value = 0;
    local_1e8.Number = 0;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14ca0b12e:
      bVar7 = false;
      FVar28 = local_1e8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_274.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_274._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar6 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_218.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_218.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_218,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                     ,0x4d7);
          bVar6 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0b12e;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar6 = false;
      bVar7 = true;
    }
    pFVar2 = *(FCodecV1Decoder **)this;
    lVar23 = *(longlong *)((longlong)this + 0x30);
    uVar15 = uVar29;
    if ((int)uVar31 < *(int *)(lVar23 + 0xa8)) {
      uVar15 = ~uVar31 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeIndexStream
              (pFVar2,pFVar18,(uint *)(*(longlong *)(lVar23 + 0xa0) + (longlong)(int)uVar31 * 4),4,
               local_298);
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_180.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
        local_180.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1a0);
        local_180.StatData.Pad[4] = '\0';
        local_180.StatData.Pad[5] = '\0';
        local_180.StatData.Pad[6] = '\0';
        local_180.StatData.Pad[7] = '\0';
        local_180.StatData.Pad[0] = local_1a0.s.LowPart._0_1_;
        local_180.StatData.Pad[1] = local_1a0.s.LowPart._1_1_;
        local_180.StatData.Pad[2] = local_1a0.s.LowPart._2_1_;
        local_180.StatData.Pad[3] = local_1a0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_180);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  if (local_res20 == 0) goto LAB_14ca0bec4;
  FVar22 = StatPtr_STAT_DecodePositionStream;
  if (StatPtr_STAT_DecodePositionStream ==
      (FThreadSafeStaticStat<FStat_STAT_DecodePositionStream>)0x0) {
    pFVar16 = ::FName::FName(&local_58,"STAT_DecodePositionStream");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_DecodePositionStream>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodePositionStream,*pFVar16,
                        L"DecodePositionStream","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar22;
  bVar6 = false;
  bVar11 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14ca0b3b1:
    bVar7 = false;
    FVar28 = local_1d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_270.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_270._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar6 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_210.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                   ,0x4de);
        bVar6 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0b3b1;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar6 = false;
    bVar7 = true;
  }
  plVar3 = *(longlong **)((longlong)this + 0x30);
  pFVar2 = *(FCodecV1Decoder **)this;
  uVar31 = ~local_res18 >> 0x1f;
  if ((int)local_res18 < (int)plVar3[1]) {
    uVar29 = uVar31;
  }
  if ((uVar29 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = (longlong)(int)local_res18;
  FCodecV1Decoder::DecodePositionStream
            (pFVar2,pFVar18,(TVector<float> *)(*plVar3 + lVar23 * 0xc),0xc,local_res20);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_170.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_170.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_198);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_198.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_198.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_198.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_198.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_170);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  uVar29 = 0;
  if (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb5) != '\0') {
    FVar24 = StatPtr_STAT_DecodeImportedVertexNumbersStream;
    if (StatPtr_STAT_DecodeImportedVertexNumbersStream ==
        (FThreadSafeStaticStat<FStat_STAT_DecodeImportedVertexNumbersStream>)0x0) {
      pFVar16 = ::FName::FName(&local_60,"STAT_DecodeImportedVertexNumbersStream");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_DecodeImportedVertexNumbersStream>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_DecodeImportedVertexNumbersStream,*pFVar16,
                          L"DecodeImportedVertexNumbersStream","STATGROUP_GeometryCache",
                          "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar28 = *(FName *)FVar24;
    bVar6 = false;
    bVar11 = false;
    local_1c8.ComparisonIndex.Value = 0;
    local_1c8.Number = 0;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14ca0b64d:
      bVar7 = false;
      FVar28 = local_1c8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_26c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_26c._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
        bVar6 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_208.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_208.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_208,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                     ,0x4e4);
          bVar6 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0b64d;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar6 = false;
      bVar7 = true;
    }
    lVar4 = *(longlong *)((longlong)this + 0x30);
    pFVar2 = *(FCodecV1Decoder **)this;
    uVar15 = uVar29;
    if ((int)local_res18 < *(int *)(lVar4 + 0x58)) {
      uVar15 = uVar31;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeIndexStream
              (pFVar2,pFVar18,(uint *)(*(longlong *)(lVar4 + 0x50) + lVar23 * 4),4,local_res20);
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_160.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
        local_160.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_190);
        local_160.StatData.Pad[4] = '\0';
        local_160.StatData.Pad[5] = '\0';
        local_160.StatData.Pad[6] = '\0';
        local_160.StatData.Pad[7] = '\0';
        local_160.StatData.Pad[0] = local_190.s.LowPart._0_1_;
        local_160.StatData.Pad[1] = local_190.s.LowPart._1_1_;
        local_160.StatData.Pad[2] = local_190.s.LowPart._2_1_;
        local_160.StatData.Pad[3] = local_190.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_160);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb3) != '\0') {
    FVar25 = StatPtr_STAT_DecodeColorStream;
    if (StatPtr_STAT_DecodeColorStream == (FThreadSafeStaticStat<FStat_STAT_DecodeColorStream>)0x0)
    {
      pFVar16 = ::FName::FName(&local_68,"STAT_DecodeColorStream");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_DecodeColorStream>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeColorStream,*pFVar16,
                          L"DecodeColorStream","STATGROUP_GeometryCache","STATCAT_Advanced",
                          L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar25;
    bVar11 = false;
    bVar6 = false;
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14ca0b8d6:
      bVar7 = false;
      FVar28 = local_1b8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_268[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_268[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
        bVar11 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_200.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_200.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_200,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                     ,0x4ea);
          bVar11 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0b8d6;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar7 = true;
    }
    lVar4 = *(longlong *)((longlong)this + 0x30);
    pFVar2 = *(FCodecV1Decoder **)this;
    uVar15 = uVar29;
    if ((int)local_res18 < *(int *)(lVar4 + 0x48)) {
      uVar15 = uVar31;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeColorStream
              (pFVar2,pFVar18,(FColor *)(*(longlong *)(lVar4 + 0x40) + lVar23 * 4),4,local_res20);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_150.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
        local_150.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_188);
        local_150.StatData.Pad[4] = '\0';
        local_150.StatData.Pad[5] = '\0';
        local_150.StatData.Pad[6] = '\0';
        local_150.StatData.Pad[7] = '\0';
        local_150.StatData.Pad[0] = local_188.s.LowPart._0_1_;
        local_150.StatData.Pad[1] = local_188.s.LowPart._1_1_;
        local_150.StatData.Pad[2] = local_188.s.LowPart._2_1_;
        local_150.StatData.Pad[3] = local_188.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_150);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb0) != '\0') {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_DecodeTangentXStream,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_DecodeTangentXStream,1> *)
                        &StatPtr_STAT_DecodeTangentXStream);
    local_128.Impl._Line = 0x4f0;
    local_128.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
    ;
    local_128.Impl._Column = 5;
    local_128.Impl._Function =
         "auto __cdecl FCodecV1Decoder::DecodeFrameData::<lambda_1>::operator ()(int) const";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_240,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_128);
    lVar4 = *(longlong *)((longlong)this + 0x30);
    pFVar2 = *(FCodecV1Decoder **)this;
    uVar15 = uVar29;
    if ((int)local_res18 < *(int *)(lVar4 + 0x28)) {
      uVar15 = uVar31;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeNormalStream
              (pFVar2,pFVar18,(FPackedNormal *)(*(longlong *)(lVar4 + 0x20) + lVar23 * 4),4,
               local_res20,&(pFVar2->DecodingContext).ResidualNormalTangentXTable);
    if ((local_238 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_238 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_238 & 4) != 0) {
      FThreadStats::AddMessage(local_240,CycleScopeEnd);
    }
    local_238 = 0;
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb1) != '\0') {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_DecodeTangentZStream,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_DecodeTangentZStream,1> *)
                        &StatPtr_STAT_DecodeTangentZStream);
    local_108.Impl._Line = 0x4f6;
    local_108.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
    ;
    local_108.Impl._Column = 5;
    local_108.Impl._Function =
         "auto __cdecl FCodecV1Decoder::DecodeFrameData::<lambda_1>::operator ()(int) const";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_250,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_108);
    lVar4 = *(longlong *)((longlong)this + 0x30);
    pFVar2 = *(FCodecV1Decoder **)this;
    uVar15 = uVar29;
    if ((int)local_res18 < *(int *)(lVar4 + 0x38)) {
      uVar15 = uVar31;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeNormalStream
              (pFVar2,pFVar18,(FPackedNormal *)(*(longlong *)(lVar4 + 0x30) + lVar23 * 4),4,
               local_res20,&(pFVar2->DecodingContext).ResidualNormalTangentZTable);
    if ((local_248 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_248 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_248 & 4) != 0) {
      FThreadStats::AddMessage(local_250,CycleScopeEnd);
    }
    local_248 = 0;
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb2) != '\0') {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_DecodeUVStream,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_DecodeUVStream,1> *)
                        &StatPtr_STAT_DecodeUVStream);
    local_e8.Impl._Line = 0x4fc;
    local_e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
    ;
    local_e8.Impl._Column = 5;
    local_e8.Impl._Function =
         "auto __cdecl FCodecV1Decoder::DecodeFrameData::<lambda_1>::operator ()(int) const";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_260,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_e8);
    lVar23 = *(longlong *)((longlong)this + 0x30);
    pFVar2 = *(FCodecV1Decoder **)this;
    uVar31 = uVar29;
    if ((int)local_res18 < *(int *)(lVar23 + 0x18)) {
      uVar31 = ~local_res18 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeUVStream
              (pFVar2,pFVar18,
               (TVector2<float> *)(*(longlong *)(lVar23 + 0x10) + (longlong)(int)local_res18 * 8),8,
               local_res20);
    if ((local_258 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_258 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_258 & 4) != 0) {
      FThreadStats::AddMessage(local_260,CycleScopeEnd);
    }
    local_258 = 0;
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x30) + 0xb4) != '\0') {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_DecodeMotionVectorStream,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_DecodeMotionVectorStream,1> *)
                        &StatPtr_STAT_DecodeMotionVectorStream);
    local_c8.Impl._Line = 0x502;
    local_c8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
    ;
    local_c8.Impl._Column = 5;
    local_c8.Impl._Function =
         "auto __cdecl FCodecV1Decoder::DecodeFrameData::<lambda_1>::operator ()(int) const";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_230,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_c8);
    lVar23 = *(longlong *)((longlong)this + 0x30);
    pFVar2 = *(FCodecV1Decoder **)this;
    if ((int)local_res18 < *(int *)(lVar23 + 0x68)) {
      uVar29 = ~local_res18 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FCodecV1Decoder::DecodeMotionVectorStream
              (pFVar2,pFVar18,
               (TVector<float> *)(*(longlong *)(lVar23 + 0x60) + (longlong)(int)local_res18 * 0xc),
               0xc,local_res20);
    if ((local_228 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_228 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_228 & 4) != 0) {
      FThreadStats::AddMessage(local_230,CycleScopeEnd);
    }
  }
LAB_14ca0bec4:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_140.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
      local_140.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1a8);
      local_140.StatData.Pad[4] = '\0';
      local_140.StatData.Pad[5] = '\0';
      local_140.StatData.Pad[6] = '\0';
      local_140.StatData.Pad[7] = '\0';
      local_140.StatData.Pad[0] = local_1a8.s.LowPart._0_1_;
      local_140.StatData.Pad[1] = local_1a8.s.LowPart._1_1_;
      local_140.StatData.Pad[2] = local_1a8.s.LowPart._2_1_;
      local_140.StatData.Pad[3] = local_1a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_140);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  return;
}

// DecodeColorStream @ 14ca12080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCodecV1Decoder::DecodeColorStream
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,FColor *param_2,ulong64 param_3,
          uint param_4)

{
  char cVar1;
  uint uVar2;
  uchar *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uchar *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_res18;
  ulonglong local_58;
  uint local_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  local_58 = (ulonglong)param_4;
  if (param_4 != 0) {
    puVar10 = &(param_2->field0_0x0)._s_0.G;
    local_50 = (uint)___xmm_000000ff000000800000008000000080;
    iStack_4c = (int)((ulonglong)___xmm_000000ff000000800000008000000080 >> 0x20);
    uStack_44 = (uint)((ulonglong)_UNK_1528e5728 >> 0x20);
    uStack_48 = (uint)_UNK_1528e5728;
    uVar6 = uStack_48 & 0xff;
    uVar11 = uStack_44 & 0xff;
    local_res18 = iStack_4c;
    param_4 = local_50;
    do {
      uVar2 = param_1->BitBufferBits;
      puVar3 = param_1->Bytes;
      uVar13 = (0x3f - uVar2 >> 3) + param_1->BytePos;
      uVar9 = *(longlong *)(puVar3 + param_1->BytePos) << ((byte)uVar2 & 0x3f) | param_1->BitBuffer;
      param_1->BytePos = uVar13;
      uVar7 = uVar9 >> 1;
      param_1->BitBuffer = uVar7;
      uVar2 = (uVar2 | 0x38) - 1;
      param_1->BitBufferBits = uVar2;
      if ((uVar9 & 1) == 0) {
        uVar7 = *(longlong *)(puVar3 + uVar13) << ((byte)uVar2 & 0x3f) | uVar7;
        param_1->BitBuffer = uVar7;
        uVar11 = (uint)uVar7 & 0x7ff;
        param_1->BitBufferBits = uVar2 | 0x38;
        uVar13 = (0x3f - uVar2 >> 3) + uVar13;
        param_1->BytePos = uVar13;
        bVar4 = (this->DecodingContext).ResidualColorTable.TableEntries[uVar11].Length;
        uVar6 = (uVar2 | 0x38) - (int)(char)bVar4;
        uVar7 = uVar7 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar7;
        param_1->BitBufferBits = uVar6;
        cVar1 = (&(this->DecodingContext).ResidualImportedVertexNumbersTable)[1].TableEntries
                [uVar11].Symbol;
        iVar8 = cVar1 + -2;
        uVar9 = uVar7;
        if ('\x03' < cVar1) {
          uVar6 = uVar6 - (iVar8 >> 1);
          param_1->BitBufferBits = uVar6;
          bVar4 = (byte)(iVar8 >> 1);
          uVar9 = uVar7 >> (bVar4 & 0x3f);
          param_1->BitBuffer = uVar9;
          iVar8 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar7) + CachedHighBitsLUT[cVar1];
        }
        uVar9 = *(longlong *)(puVar3 + uVar13) << ((byte)uVar6 & 0x3f) | uVar9;
        param_1->BitBuffer = uVar9;
        uVar11 = (uint)uVar9 & 0x7ff;
        param_1->BitBufferBits = uVar6 | 0x38;
        uVar13 = (0x3f - uVar6 >> 3) + uVar13;
        param_1->BytePos = uVar13;
        bVar4 = (this->DecodingContext).ResidualColorTable.TableEntries[uVar11].Length;
        uVar6 = (uVar6 | 0x38) - (int)(char)bVar4;
        uVar9 = uVar9 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar9;
        param_1->BitBufferBits = uVar6;
        cVar1 = (&(this->DecodingContext).ResidualImportedVertexNumbersTable)[1].TableEntries
                [uVar11].Symbol;
        iStack_4c = cVar1 + -2;
        uVar7 = uVar9;
        if ('\x03' < cVar1) {
          uVar6 = uVar6 - (iStack_4c >> 1);
          param_1->BitBufferBits = uVar6;
          bVar4 = (byte)(iStack_4c >> 1);
          uVar7 = uVar9 >> (bVar4 & 0x3f);
          param_1->BitBuffer = uVar7;
          iStack_4c = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar9) + CachedHighBitsLUT[cVar1];
        }
        uVar7 = *(longlong *)(puVar3 + uVar13) << ((byte)uVar6 & 0x3f) | uVar7;
        param_1->BitBuffer = uVar7;
        uVar11 = (uint)uVar7 & 0x7ff;
        uVar13 = uVar13 + (0x3f - uVar6 >> 3);
        param_1->BitBufferBits = uVar6 | 0x38;
        param_1->BytePos = uVar13;
        bVar4 = (this->DecodingContext).ResidualColorTable.TableEntries[uVar11].Length;
        uVar6 = (uVar6 | 0x38) - (int)(char)bVar4;
        uVar7 = uVar7 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar7;
        param_1->BitBufferBits = uVar6;
        cVar1 = (&(this->DecodingContext).ResidualImportedVertexNumbersTable)[1].TableEntries
                [uVar11].Symbol;
        iVar12 = cVar1 + -2;
        uVar9 = uVar7;
        if ('\x03' < cVar1) {
          uVar6 = uVar6 - (iVar12 >> 1);
          param_1->BitBufferBits = uVar6;
          bVar4 = (byte)(iVar12 >> 1);
          uVar9 = uVar7 >> (bVar4 & 0x3f);
          param_1->BitBuffer = uVar9;
          iVar12 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar7) + CachedHighBitsLUT[cVar1];
        }
        uVar9 = *(longlong *)(puVar3 + uVar13) << ((byte)uVar6 & 0x3f) | uVar9;
        param_1->BitBuffer = uVar9;
        uVar11 = (uint)uVar9 & 0x7ff;
        param_1->BitBufferBits = uVar6 | 0x38;
        param_1->BytePos = (0x3f - uVar6 >> 3) + uVar13;
        bVar4 = (this->DecodingContext).ResidualColorTable.TableEntries[uVar11].Length;
        uVar6 = (uVar6 | 0x38) - (int)(char)bVar4;
        uVar9 = uVar9 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar9;
        param_1->BitBufferBits = uVar6;
        cVar1 = (&(this->DecodingContext).ResidualImportedVertexNumbersTable)[1].TableEntries
                [uVar11].Symbol;
        iVar5 = cVar1 + -2;
        if ('\x03' < cVar1) {
          bVar4 = (byte)(iVar5 >> 1);
          param_1->BitBuffer = uVar9 >> (bVar4 & 0x3f);
          param_1->BitBufferBits = uVar6 - (iVar5 >> 1);
          iVar5 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar9) + CachedHighBitsLUT[cVar1];
        }
        uStack_48 = uStack_48 + iVar12;
        local_50 = param_4 + iVar8;
        iStack_4c = local_res18 + iStack_4c;
        uStack_44 = uStack_44 + iVar5;
        uVar6 = uStack_48;
        uVar11 = uStack_44;
        local_res18 = iStack_4c;
        param_4 = local_50;
      }
      puVar10[1] = (uchar)local_50;
      *puVar10 = (uchar)iStack_4c;
      ((FColor_u_0_s_0 *)(puVar10 + -1))->B = (uchar)uVar6;
      puVar10[2] = (uchar)uVar11;
      puVar10 = puVar10 + param_3;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  return;
}

// DecodeFrameData @ 14ca12420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FCodecV1Decoder::DecodeFrameData
          (FCodecV1Decoder *this,FBufferReader *param_1,FGeometryCacheMeshData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FGeometryCacheMeshData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_SetupAndReadTables> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar14;
  FName FVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_81f8 [32];
  <lambda_1> local_8198;
  int local_8194;
  FColor_u_0 local_8190;
  int local_818c;
  uint local_8188;
  uint local_8180;
  uint uStack_817c;
  FHuffmanBitStreamReader local_8178;
  FName local_8158;
  FName local_8150;
  LARGE_INTEGER local_8140;
  LARGE_INTEGER local_8138;
  FCodecV1Decoder *local_8130;
  LARGE_INTEGER local_8128;
  FStatMessage local_8120;
  TArrayView<std::nullptr_t,int> local_8110;
  code *local_8100;
  FCodecV1Decoder **local_80f8;
  FCodecV1Decoder *local_80f0;
  int local_80e8;
  int local_80e4;
  uint local_80e0;
  <lambda_1> local_80dc;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_80d8;
  FHuffmanBitStreamReader *local_80d0;
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_80c8;
  FGeometryCacheMeshData *local_80c0;
  FName local_80b8 [2];
  undefined1 local_80a8 [32784];
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_81f8;
  local_8130 = this;
  QueryPerformanceCounter(&local_8140);
  FBufferReaderBase::Serialize((FBufferReaderBase *)param_1,&local_98,0x10);
  if (2 < local_98 - 0x7b) {
    if (1 < (byte)LogGeoCaStreamingCodecV1._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreamingCodecV1)
      ;
    }
    return false;
  }
  TArrayPrivateFriend::Serialize<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&param_2->BatchesInfo);
  UE::Math::operator<<((FArchive *)param_1,&param_2->BoundingBox);
  local_818c = local_90;
  local_8188 = local_8c;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 8;
  if (local_98 == 0x7b) {
    local_8198 = (<lambda_1>)0x0;
    local_8194 = 1;
  }
  else {
    if ((1 < local_98 - 0x7c) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header.Magic == 124 || Header.Magic == 125",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                           ,0x468,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_8198 = (<lambda_1>)0x1;
    TArrayPrivateFriend::
    Serialize<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ((FArchive *)param_1,&local_88);
    local_8194 = local_88.ArrayNum;
  }
  memset(local_80a8,0,0x8008);
  memcpy(&this->DecodingContext,local_80a8,0x8008);
  (this->DecodingContext).MeshData = param_2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_2->TempBytes,local_94 + 0x10,No);
  FBufferReaderBase::Serialize
            ((FBufferReaderBase *)param_1,(param_2->TempBytes).AllocatorInstance.Data,
             (ulonglong)local_94);
  local_8178.Bytes = (uchar *)(param_2->TempBytes).AllocatorInstance.Data;
  local_8178.NumBytes = (ulong64)(uint)(param_2->TempBytes).ArrayNum;
  local_8178.BitBuffer = 0;
  local_8178.BitBufferBits = 0;
  local_8178.BytePos = 0;
  ReadCodedStreamDescription(this,&local_8178,local_98);
  FVar13 = StatPtr_STAT_SetupAndReadTables;
  if (StatPtr_STAT_SetupAndReadTables == (FThreadSafeStaticStat<FStat_STAT_SetupAndReadTables>)0x0)
  {
    pFVar12 = ::FName::FName(local_80b8,"STAT_SetupAndReadTables");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_SetupAndReadTables>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetupAndReadTables,*pFVar12,
                        L"SetupAndReadTables","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_8150.ComparisonIndex.Value = 0;
  local_8150.Number = 0;
  bVar9 = false;
  bVar6 = false;
  FVar15 = *(FName *)FVar13;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar17 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_8190.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_8190._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_8158.ComparisonIndex.Value = FVar14.Value;
        local_8158.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_8158,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                   ,0x47c);
        bVar9 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_8180 = FVar14.Value;
      uStack_817c = uVar17;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_14ca12733;
    }
  }
  bVar5 = false;
  FVar15 = local_8150;
LAB_14ca12733:
  pFVar3 = (this->DecodingContext).MeshData;
  if ((pFVar3->VertexInfo).bConstantIndices == false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualIndicesTable,&local_8178);
  }
  FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualVertexPosTable,&local_8178);
  if ((pFVar3->VertexInfo).bHasImportedVertexNumbers != false) {
    FHuffmanDecodeTable::Initialize
              (&(this->DecodingContext).ResidualImportedVertexNumbersTable,&local_8178);
  }
  if ((pFVar3->VertexInfo).bHasColor0 != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualColorTable,&local_8178);
  }
  if ((pFVar3->VertexInfo).bHasTangentX != false) {
    FHuffmanDecodeTable::Initialize
              (&(this->DecodingContext).ResidualNormalTangentXTable,&local_8178);
  }
  if ((pFVar3->VertexInfo).bHasTangentZ != false) {
    FHuffmanDecodeTable::Initialize
              (&(this->DecodingContext).ResidualNormalTangentZTable,&local_8178);
  }
  if ((pFVar3->VertexInfo).bHasUV0 != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualUVTable,&local_8178);
  }
  if ((pFVar3->VertexInfo).bHasMotionVectors != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualMotionVectorTable,&local_8178);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_8120.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_8120.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_8138);
      local_8120.StatData.Pad[4] = '\0';
      local_8120.StatData.Pad[5] = '\0';
      local_8120.StatData.Pad[6] = '\0';
      local_8120.StatData.Pad[7] = '\0';
      local_8120.StatData.Pad[0] = local_8138.s.LowPart._0_1_;
      local_8120.StatData.Pad[1] = local_8138.s.LowPart._1_1_;
      local_8120.StatData.Pad[2] = local_8138.s.LowPart._2_1_;
      local_8120.StatData.Pad[3] = local_8138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_8120);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((param_2->VertexInfo).bConstantIndices == false) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_2->Indices,local_90,No);
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_2->Positions,local_8c,No);
  if (-1 < (int)local_8c) {
    uVar17 = (param_2->ImportedVertexNumbers).ArrayMax;
    if ((int)uVar17 < (int)local_8c) {
      (param_2->ImportedVertexNumbers).ArrayNum = 0;
      if (uVar17 != local_8c) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_8c,&(param_2->ImportedVertexNumbers).AllocatorInstance,0,
                   &(param_2->ImportedVertexNumbers).ArrayMax);
      }
    }
    else {
      (param_2->ImportedVertexNumbers).ArrayNum = 0;
    }
    if ((param_2->VertexInfo).bHasImportedVertexNumbers != false) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->ImportedVertexNumbers,local_8c,No);
    }
    if ((param_2->VertexInfo).bHasColor0 == false) {
      iVar11 = (param_2->Colors).ArrayNum;
      piVar1 = &(param_2->Colors).ArrayNum;
      if (iVar11 < (int)local_8c) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,local_8c - iVar11,&(param_2->Colors).AllocatorInstance,piVar1,
                            &(param_2->Colors).ArrayMax);
        memset((param_2->Colors).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
               (longlong)(int)(local_8c - iVar11) << 2);
      }
      else if ((int)local_8c < iVar11) {
        uVar17 = iVar11 - local_8c;
        if (((int)(uVar17 | local_8c) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        if (uVar17 != 0) {
          pFVar2 = (param_2->Colors).AllocatorInstance.Data + (longlong)(int)local_8c * 4;
          iVar11 = (*piVar1 - local_8c) - uVar17;
          if (iVar11 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar17 * 4,(longlong)iVar11 << 2);
          }
          *piVar1 = *piVar1 - uVar17;
        }
      }
    }
    else {
      TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&param_2->Colors,local_8c,No);
    }
    if ((param_2->VertexInfo).bHasTangentX == false) {
      TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&param_2->TangentsX,local_8c,No);
    }
    else {
      TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->TangentsX,local_8c,No);
    }
    if ((param_2->VertexInfo).bHasTangentZ == false) {
      TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&param_2->TangentsZ,local_8c,No);
    }
    else {
      TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->TangentsZ,local_8c,No);
    }
    if ((param_2->VertexInfo).bHasUV0 == false) {
      iVar11 = (param_2->TextureCoordinates).ArrayNum;
      piVar1 = &(param_2->TextureCoordinates).ArrayNum;
      if (iVar11 < (int)local_8c) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,local_8c - iVar11,&(param_2->TextureCoordinates).AllocatorInstance,
                            piVar1,&(param_2->TextureCoordinates).ArrayMax);
        memset((param_2->TextureCoordinates).AllocatorInstance.Data + (longlong)iVar10 * 8,0,
               (longlong)(int)(local_8c - iVar11) << 3);
      }
      else {
        if ((int)local_8c < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_8c);
        }
        if ((int)local_8c < iVar11) {
          uVar17 = iVar11 - local_8c;
          if (((int)(uVar17 | local_8c) < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if (uVar17 != 0) {
            pFVar2 = (param_2->TextureCoordinates).AllocatorInstance.Data +
                     (longlong)(int)local_8c * 8;
            iVar11 = (*piVar1 - local_8c) - uVar17;
            if (iVar11 != 0) {
              memmove(pFVar2,pFVar2 + (longlong)(int)uVar17 * 8,(longlong)iVar11 << 3);
            }
            *piVar1 = *piVar1 - uVar17;
          }
        }
      }
    }
    else {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->TextureCoordinates,local_8c,No);
    }
    if ((param_2->VertexInfo).bHasMotionVectors == false) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&param_2->MotionVectors,local_8c,No);
    }
    else {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->MotionVectors,local_8c,No);
    }
    local_80f0 = local_8130;
    local_80e4 = local_818c;
    local_80dc = local_8198;
    local_80d8 = &param_2->TempBytes;
    local_80d0 = &local_8178;
    local_80c8 = &local_88;
    local_8100 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FCodecV1Decoder::DecodeFrameData'::__l2::<lambda_1>,void,int>::
                 Call;
    local_80f8 = &local_80f0;
    local_80e8 = local_8194;
    local_80e0 = local_8188;
    local_8110.DataPtr = (void **)0x0;
    local_8110.ArrayNum = 0;
    local_80c0 = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_8194,1,(TFunctionRef<void___cdecl(int)> *)&local_8100,
               local_8198,None,&local_8110);
    pTVar7 = CVarCodecDebug.Ref;
    bVar9 = IsInParallelGameThread();
    if ((bVar9) || (bVar9 = IsInGameThread(), lVar16 = 4, bVar9)) {
      lVar16 = 0;
    }
    if ((*(int *)((longlong)pTVar7->ShadowedValue + lVar16) == 1) &&
       (QueryPerformanceCounter(&local_8128), 4 < (byte)LogGeoCaStreamingCodecV1._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreamingCodecV1)
      ;
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_8c);
}

// DecodeIndexStream @ 14ca12d00

void __thiscall
FCodecV1Decoder::DecodeIndexStream
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,uint *param_2,ulong64 param_3,
          uint param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  if (param_4 != 0) {
    uVar5 = (ulonglong)param_4;
    do {
      uVar6 = param_1->BitBufferBits;
      uVar8 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar6 & 0x3f) |
              param_1->BitBuffer;
      param_1->BitBuffer = uVar8;
      param_1->BitBufferBits = uVar6 | 0x38;
      uVar4 = (uint)uVar8 & 0x7ff;
      param_1->BytePos = (0x3f - uVar6 >> 3) + param_1->BytePos;
      bVar3 = (this->DecodingContext).ResidualIndicesTable.TableEntries[uVar4].Length;
      uVar6 = (uVar6 | 0x38) - (int)(char)bVar3;
      uVar8 = uVar8 >> (bVar3 & 0x3f);
      param_1->BitBuffer = uVar8;
      param_1->BitBufferBits = uVar6;
      cVar1 = (this->DecodingContext).ResidualIndicesTable.TableEntries[uVar4].Symbol;
      iVar2 = cVar1 + -2;
      if ('\x03' < cVar1) {
        bVar3 = (byte)(iVar2 >> 1);
        param_1->BitBuffer = uVar8 >> (bVar3 & 0x3f);
        param_1->BitBufferBits = uVar6 - (iVar2 >> 1);
        iVar2 = ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)uVar8) + CachedHighBitsLUT[cVar1];
      }
      uVar7 = uVar7 + iVar2;
      *param_2 = uVar7;
      param_2 = (uint *)((longlong)param_2 + param_3);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// DecodeMotionVectorStream @ 14ca130b0

void __thiscall
FCodecV1Decoder::DecodeMotionVectorStream
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,TVector<float> *param_2,
          ulong64 param_3,uint param_4)

{
  char cVar1;
  uchar *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 local_res18;
  ulonglong local_48;
  
  puVar2 = param_1->Bytes;
  uVar11 = param_1->BitBufferBits;
  iVar17 = 0;
  iVar15 = 0;
  iVar16 = 0;
  uVar10 = *(longlong *)(puVar2 + param_1->BytePos) << ((byte)uVar11 & 0x3f) | param_1->BitBuffer;
  uVar4 = (uVar11 | 0x38) - 8;
  param_1->BitBufferBits = uVar4;
  uVar11 = (0x3f - uVar11 >> 3) + param_1->BytePos;
  param_1->BytePos = uVar11;
  uVar6 = uVar10 >> 8;
  uVar13 = (0x3f - uVar4 >> 3) + uVar11;
  param_1->BitBuffer = uVar6;
  uVar6 = *(longlong *)(puVar2 + uVar11) << ((byte)uVar4 & 0x3f) | uVar6;
  param_1->BytePos = uVar13;
  uVar11 = (uVar4 | 0x38) - 8;
  param_1->BitBufferBits = uVar11;
  uVar7 = uVar6 >> 8;
  uVar4 = (0x3f - uVar11 >> 3) + uVar13;
  param_1->BitBuffer = uVar7;
  uVar7 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar11 & 0x3f) | uVar7;
  param_1->BytePos = uVar4;
  uVar11 = (uVar11 | 0x38) - 8;
  param_1->BitBufferBits = uVar11;
  uVar8 = uVar7 >> 8;
  param_1->BitBuffer = uVar8;
  uVar8 = *(longlong *)(puVar2 + uVar4) << ((byte)uVar11 & 0x3f) | uVar8;
  param_1->BytePos = (0x3f - uVar11 >> 3) + uVar4;
  local_res18 = (float)CONCAT13((char)uVar8,CONCAT12((char)uVar7,CONCAT11((char)uVar6,(char)uVar10))
                               );
  param_1->BitBufferBits = (uVar11 | 0x38) - 8;
  param_1->BitBuffer = uVar8 >> 8;
  local_48 = (ulonglong)param_4;
  if (param_4 != 0) {
    pfVar9 = &(param_2->field0_0x0)._s_0.Z;
    do {
      uVar11 = param_1->BitBufferBits;
      uVar13 = (0x3f - uVar11 >> 3) + param_1->BytePos;
      uVar7 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar11 & 0x3f) |
              param_1->BitBuffer;
      param_1->BitBuffer = uVar7;
      param_1->BitBufferBits = uVar11 | 0x38;
      uVar4 = (uint)uVar7 & 0x7ff;
      param_1->BytePos = uVar13;
      bVar3 = (this->DecodingContext).ResidualMotionVectorTable.TableEntries[uVar4].Length;
      uVar11 = (uVar11 | 0x38) - (int)(char)bVar3;
      uVar7 = uVar7 >> (bVar3 & 0x3f);
      param_1->BitBuffer = uVar7;
      param_1->BitBufferBits = uVar11;
      cVar1 = (&(this->DecodingContext).ResidualUVTable)[1].TableEntries[uVar4].Symbol;
      iVar14 = cVar1 + -2;
      uVar6 = uVar7;
      if ('\x03' < cVar1) {
        uVar11 = uVar11 - (iVar14 >> 1);
        bVar3 = (byte)(iVar14 >> 1);
        uVar6 = uVar7 >> (bVar3 & 0x3f);
        param_1->BitBuffer = uVar6;
        param_1->BitBufferBits = uVar11;
        iVar14 = ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)uVar7) + CachedHighBitsLUT[cVar1];
      }
      uVar6 = *(longlong *)(param_1->Bytes + uVar13) << ((byte)uVar11 & 0x3f) | uVar6;
      param_1->BitBuffer = uVar6;
      uVar4 = (uint)uVar6 & 0x7ff;
      uVar13 = (0x3f - uVar11 >> 3) + uVar13;
      param_1->BitBufferBits = uVar11 | 0x38;
      param_1->BytePos = uVar13;
      bVar3 = (this->DecodingContext).ResidualMotionVectorTable.TableEntries[uVar4].Length;
      uVar11 = (uVar11 | 0x38) - (int)(char)bVar3;
      uVar6 = uVar6 >> (bVar3 & 0x3f);
      param_1->BitBuffer = uVar6;
      param_1->BitBufferBits = uVar11;
      cVar1 = (&(this->DecodingContext).ResidualUVTable)[1].TableEntries[uVar4].Symbol;
      iVar12 = cVar1 + -2;
      uVar7 = uVar6;
      if ('\x03' < cVar1) {
        uVar11 = uVar11 - (iVar12 >> 1);
        bVar3 = (byte)(iVar12 >> 1);
        uVar7 = uVar6 >> (bVar3 & 0x3f);
        param_1->BitBuffer = uVar7;
        param_1->BitBufferBits = uVar11;
        iVar12 = ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)uVar6) + CachedHighBitsLUT[cVar1];
      }
      uVar7 = *(longlong *)(param_1->Bytes + uVar13) << ((byte)uVar11 & 0x3f) | uVar7;
      param_1->BitBufferBits = uVar11 | 0x38;
      param_1->BitBuffer = uVar7;
      uVar4 = (uint)uVar7 & 0x7ff;
      param_1->BytePos = (0x3f - uVar11 >> 3) + uVar13;
      bVar3 = (this->DecodingContext).ResidualMotionVectorTable.TableEntries[uVar4].Length;
      uVar11 = (uVar11 | 0x38) - (int)(char)bVar3;
      uVar7 = uVar7 >> (bVar3 & 0x3f);
      param_1->BitBuffer = uVar7;
      param_1->BitBufferBits = uVar11;
      cVar1 = (&(this->DecodingContext).ResidualUVTable)[1].TableEntries[uVar4].Symbol;
      iVar5 = cVar1 + -2;
      if ('\x03' < cVar1) {
        bVar3 = (byte)(iVar5 >> 1);
        param_1->BitBuffer = uVar7 >> (bVar3 & 0x3f);
        param_1->BitBufferBits = uVar11 - (iVar5 >> 1);
        iVar5 = ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)uVar7) + CachedHighBitsLUT[cVar1];
      }
      iVar17 = iVar17 + iVar14;
      iVar15 = iVar15 + iVar12;
      iVar16 = iVar16 + iVar5;
      ((TVector<float>_u_0_s_0 *)(pfVar9 + -2))->X = (float)iVar17 * local_res18;
      pfVar9[-1] = (float)iVar15 * local_res18;
      *pfVar9 = (float)iVar16 * local_res18;
      pfVar9 = (float *)((longlong)pfVar9 + param_3);
      local_48 = local_48 - 1;
    } while (local_48 != 0);
  }
  return;
}

// DecodeNormalStream @ 14ca13420

void __thiscall
FCodecV1Decoder::DecodeNormalStream
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,FPackedNormal *param_2,
          ulong64 param_3,uint param_4,FHuffmanDecodeTable *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  schar *psVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  ulonglong local_res18;
  
  local_res18 = (ulonglong)param_4;
  cVar6 = -0x80;
  cVar13 = -0x80;
  cVar12 = -0x80;
  if (param_4 != 0) {
    psVar7 = &(param_2->Vector)._s_0.Z;
    cVar11 = cVar13;
    do {
      uVar3 = param_1->BitBufferBits;
      param_1->BitBuffer =
           param_1->BitBuffer |
           *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar3 & 0x3f);
      uVar8 = uVar3 | 0x38;
      param_1->BitBufferBits = uVar8;
      param_1->BytePos = (0x3f - uVar3 >> 3) + param_1->BytePos;
      uVar3 = (uint)param_1->BitBuffer & 0x7ff;
      bVar1 = param_5->TableEntries[uVar3].Length;
      iVar10 = (int)(char)bVar1;
      uVar5 = param_1->BitBuffer >> (bVar1 & 0x3f);
      param_1->BitBufferBits = uVar8 - iVar10;
      param_1->BitBuffer = uVar5;
      uVar4 = (uint)uVar5 & 0x7ff;
      bVar1 = param_5->TableEntries[uVar4].Length;
      iVar9 = (int)(char)bVar1;
      cVar6 = cVar6 + param_5->TableEntries[uVar3].Symbol;
      uVar5 = uVar5 >> (bVar1 & 0x3f);
      param_1->BitBuffer = uVar5;
      param_1->BitBufferBits = (uVar8 - iVar9) - iVar10;
      cVar13 = cVar13 + param_5->TableEntries[uVar4].Symbol;
      uVar3 = (uint)uVar5 & 0x7ff;
      bVar1 = param_5->TableEntries[uVar3].Length;
      uVar5 = uVar5 >> (bVar1 & 0x3f);
      param_1->BitBuffer = uVar5;
      param_1->BitBufferBits = ((uVar8 - (int)(char)bVar1) - iVar9) - iVar10;
      cVar11 = cVar11 + param_5->TableEntries[uVar3].Symbol;
      uVar3 = (uint)uVar5 & 0x7ff;
      bVar2 = param_5->TableEntries[uVar3].Length;
      param_1->BitBuffer = uVar5 >> (bVar2 & 0x3f);
      param_1->BitBufferBits = (((uVar8 - (int)(char)bVar2) - (int)(char)bVar1) - iVar9) - iVar10;
      cVar12 = cVar12 + param_5->TableEntries[uVar3].Symbol;
      psVar7[1] = cVar12;
      ((<unnamed_type_Vector>_s_0 *)(psVar7 + -2))->X = cVar6;
      psVar7[-1] = cVar13;
      *psVar7 = cVar11;
      psVar7 = psVar7 + param_3;
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
  }
  return;
}

// DecodePositionStream @ 14ca135a0

void __thiscall
FCodecV1Decoder::DecodePositionStream
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,TVector<float> *param_2,
          ulong64 param_3,uint param_4)

{
  char cVar1;
  uchar *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_res18;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar2 = param_1->Bytes;
  uVar5 = param_1->BitBufferBits;
  lVar3 = *(longlong *)(puVar2 + param_1->BytePos);
  uVar13 = (0x3f - uVar5 >> 3) + param_1->BytePos;
  param_1->BytePos = uVar13;
  uVar12 = lVar3 << ((byte)uVar5 & 0x3f) | param_1->BitBuffer;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBufferBits = uVar5;
  uVar7 = uVar12 >> 8;
  param_1->BitBuffer = uVar7;
  uVar7 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar7;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar8 = uVar7 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar8;
  param_1->BitBufferBits = uVar5;
  uVar8 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar8;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar9 = uVar8 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar9;
  param_1->BitBufferBits = uVar5;
  uVar9 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar9;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  local_48 = (float)CONCAT13((char)uVar9,CONCAT12((char)uVar8,CONCAT11((char)uVar7,(char)uVar12)));
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BytePos = uVar13;
  param_1->BitBufferBits = uVar5;
  uVar9 = uVar9 >> 8;
  param_1->BitBuffer = uVar9;
  uVar9 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar9;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar7 = uVar9 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar7;
  param_1->BitBufferBits = uVar5;
  uVar7 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar7;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar8 = uVar7 >> 8;
  param_1->BitBuffer = uVar8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBufferBits = uVar5;
  uVar8 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar8;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar12 = uVar8 >> 8;
  param_1->BitBuffer = uVar12;
  param_1->BitBufferBits = uVar5;
  uVar12 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar12;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  local_44 = CONCAT13((char)uVar12,CONCAT12((char)uVar8,CONCAT11((char)uVar7,(char)uVar9)));
  param_1->BytePos = uVar13;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar12 = uVar12 >> 8;
  param_1->BitBuffer = uVar12;
  param_1->BitBufferBits = uVar5;
  uVar12 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar12;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar7 = uVar12 >> 8;
  param_1->BitBuffer = uVar7;
  param_1->BitBufferBits = uVar5;
  uVar7 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar7;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar8 = uVar7 >> 8;
  param_1->BitBuffer = uVar8;
  param_1->BitBufferBits = uVar5;
  uVar8 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar8;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar9 = uVar8 >> 8;
  param_1->BitBuffer = uVar9;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBufferBits = uVar5;
  uVar9 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar9;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  local_40 = CONCAT13((char)uVar9,CONCAT12((char)uVar8,CONCAT11((char)uVar7,(char)uVar12)));
  param_1->BytePos = uVar13;
  uVar9 = uVar9 >> 8;
  param_1->BitBuffer = uVar9;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBufferBits = uVar5;
  uVar9 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar9;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BytePos = uVar13;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar7 = uVar9 >> 8;
  param_1->BitBuffer = uVar7;
  param_1->BitBufferBits = uVar5;
  uVar7 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar7;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  uVar8 = uVar7 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar8;
  param_1->BitBufferBits = uVar5;
  param_1->BytePos = uVar13;
  uVar8 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar8;
  uVar13 = (0x3f - uVar5 >> 3) + uVar13;
  uVar12 = uVar8 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar12;
  param_1->BytePos = uVar13;
  param_1->BitBufferBits = uVar5;
  uVar12 = *(longlong *)(puVar2 + uVar13) << ((byte)uVar5 & 0x3f) | uVar12;
  param_1->BytePos = (0x3f - uVar5 >> 3) + uVar13;
  param_1->BitBuffer = uVar12 >> 8;
  local_50 = (ulonglong)param_4;
  param_1->BitBufferBits = (uVar5 | 0x38) - 8;
  local_3c = CONCAT13((char)uVar12,CONCAT12((char)uVar8,CONCAT11((char)uVar7,(char)uVar9)));
  local_res18 = 0;
  if (param_4 != 0) {
    pfVar10 = &(param_2->field0_0x0)._s_0.Z;
    iVar16 = 0;
    iVar17 = 0;
    do {
      uVar5 = param_1->BitBufferBits;
      puVar2 = param_1->Bytes;
      uVar11 = (0x3f - uVar5 >> 3) + param_1->BytePos;
      uVar8 = *(longlong *)(puVar2 + param_1->BytePos) << ((byte)uVar5 & 0x3f) | param_1->BitBuffer;
      param_1->BitBuffer = uVar8;
      param_1->BitBufferBits = uVar5 | 0x38;
      uVar13 = (uint)uVar8 & 0x7ff;
      param_1->BytePos = uVar11;
      bVar4 = (this->DecodingContext).ResidualVertexPosTable.TableEntries[uVar13].Length;
      uVar5 = (uVar5 | 0x38) - (int)(char)bVar4;
      uVar8 = uVar8 >> (bVar4 & 0x3f);
      param_1->BitBuffer = uVar8;
      param_1->BitBufferBits = uVar5;
      cVar1 = (&(this->DecodingContext).ResidualIndicesTable)[1].TableEntries[uVar13].Symbol;
      iVar15 = cVar1 + -2;
      uVar7 = uVar8;
      if ('\x03' < cVar1) {
        uVar5 = uVar5 - (iVar15 >> 1);
        bVar4 = (byte)(iVar15 >> 1);
        uVar7 = uVar8 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar7;
        param_1->BitBufferBits = uVar5;
        iVar15 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar8) + CachedHighBitsLUT[cVar1];
      }
      uVar7 = *(longlong *)(puVar2 + uVar11) << ((byte)uVar5 & 0x3f) | uVar7;
      param_1->BitBuffer = uVar7;
      uVar13 = (uint)uVar7 & 0x7ff;
      uVar11 = (0x3f - uVar5 >> 3) + uVar11;
      param_1->BitBufferBits = uVar5 | 0x38;
      param_1->BytePos = uVar11;
      bVar4 = (this->DecodingContext).ResidualVertexPosTable.TableEntries[uVar13].Length;
      uVar5 = (uVar5 | 0x38) - (int)(char)bVar4;
      uVar7 = uVar7 >> (bVar4 & 0x3f);
      param_1->BitBuffer = uVar7;
      param_1->BitBufferBits = uVar5;
      cVar1 = (&(this->DecodingContext).ResidualIndicesTable)[1].TableEntries[uVar13].Symbol;
      iVar14 = cVar1 + -2;
      uVar8 = uVar7;
      if ('\x03' < cVar1) {
        uVar5 = uVar5 - (iVar14 >> 1);
        bVar4 = (byte)(iVar14 >> 1);
        uVar8 = uVar7 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar8;
        param_1->BitBufferBits = uVar5;
        iVar14 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar7) + CachedHighBitsLUT[cVar1];
      }
      uVar8 = *(longlong *)(puVar2 + uVar11) << ((byte)uVar5 & 0x3f) | uVar8;
      param_1->BitBuffer = uVar8;
      uVar13 = (uint)uVar8 & 0x7ff;
      param_1->BitBufferBits = uVar5 | 0x38;
      param_1->BytePos = (0x3f - uVar5 >> 3) + uVar11;
      bVar4 = (this->DecodingContext).ResidualVertexPosTable.TableEntries[uVar13].Length;
      uVar5 = (uVar5 | 0x38) - (int)(char)bVar4;
      uVar8 = uVar8 >> (bVar4 & 0x3f);
      param_1->BitBuffer = uVar8;
      param_1->BitBufferBits = uVar5;
      cVar1 = (&(this->DecodingContext).ResidualIndicesTable)[1].TableEntries[uVar13].Symbol;
      iVar6 = cVar1 + -2;
      if ('\x03' < cVar1) {
        bVar4 = (byte)(iVar6 >> 1);
        param_1->BitBuffer = uVar8 >> (bVar4 & 0x3f);
        param_1->BitBufferBits = uVar5 - (iVar6 >> 1);
        iVar6 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar8) + CachedHighBitsLUT[cVar1];
      }
      ((TVector<float>_u_0_s_0 *)(pfVar10 + -2))->X = (float)(iVar16 + local_44 + iVar15) * local_48
      ;
      pfVar10[-1] = (float)(iVar17 + local_40 + iVar14) * local_48;
      *pfVar10 = (float)(local_res18 + local_3c + iVar6) * local_48;
      pfVar10 = (float *)((longlong)pfVar10 + param_3);
      local_50 = local_50 - 1;
      iVar16 = iVar16 + iVar15;
      iVar17 = iVar17 + iVar14;
      local_res18 = local_res18 + iVar6;
    } while (local_50 != 0);
  }
  return;
}

// DecodeUVStream @ 14ca14600

void __thiscall
FCodecV1Decoder::DecodeUVStream
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,TVector2<float> *param_2,
          ulong64 param_3,uint param_4)

{
  char cVar1;
  uchar *puVar2;
  TVector2<float>_u_0 TVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined4 local_60;
  
  puVar2 = param_1->Bytes;
  uVar5 = param_1->BitBufferBits;
  uVar20 = (0x3f - uVar5 >> 3) + param_1->BytePos;
  uVar19 = *(longlong *)(puVar2 + param_1->BytePos) << ((byte)uVar5 & 0x3f) | param_1->BitBuffer;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BytePos = uVar20;
  param_1->BitBufferBits = uVar5;
  uVar8 = uVar19 >> 8;
  param_1->BitBuffer = uVar8;
  uVar8 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar8;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  param_1->BytePos = uVar20;
  uVar9 = uVar8 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar9;
  param_1->BitBufferBits = uVar5;
  uVar9 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar9;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  param_1->BytePos = uVar20;
  uVar10 = uVar9 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar10;
  param_1->BitBufferBits = uVar5;
  uVar10 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar10;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BytePos = uVar20;
  param_1->BitBufferBits = uVar5;
  uVar11 = uVar10 >> 8;
  param_1->BitBuffer = uVar11;
  uVar11 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar11;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  uVar12 = uVar11 >> 8;
  param_1->BitBuffer = uVar12;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BytePos = uVar20;
  param_1->BitBufferBits = uVar5;
  uVar12 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar12;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  param_1->BytePos = uVar20;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar13 = uVar12 >> 8;
  param_1->BitBuffer = uVar13;
  param_1->BitBufferBits = uVar5;
  uVar13 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar13;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  param_1->BytePos = uVar20;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar14 = uVar13 >> 8;
  param_1->BitBuffer = uVar14;
  param_1->BitBufferBits = uVar5;
  uVar14 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar14;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  param_1->BytePos = uVar20;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar15 = uVar14 >> 8;
  param_1->BitBuffer = uVar15;
  param_1->BitBufferBits = uVar5;
  uVar15 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar15;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  param_1->BytePos = uVar20;
  uVar5 = (uVar5 | 0x38) - 8;
  uVar16 = uVar15 >> 8;
  param_1->BitBuffer = uVar16;
  param_1->BitBufferBits = uVar5;
  uVar16 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar16;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  uVar17 = uVar16 >> 8;
  uVar5 = (uVar5 | 0x38) - 8;
  param_1->BitBuffer = uVar17;
  param_1->BytePos = uVar20;
  param_1->BitBufferBits = uVar5;
  fVar23 = __real_40000000;
  uVar17 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar5 & 0x3f) | uVar17;
  fVar25 = (float)CONCAT13((char)uVar14,CONCAT12((char)uVar13,CONCAT11((char)uVar12,(char)uVar11)));
  uVar6 = (uVar5 | 0x38) - 8;
  param_1->BitBufferBits = uVar6;
  uVar20 = (0x3f - uVar5 >> 3) + uVar20;
  uVar11 = uVar17 >> 8;
  param_1->BytePos = uVar20;
  param_1->BitBuffer = uVar11;
  uVar11 = *(longlong *)(puVar2 + uVar20) << ((byte)uVar6 & 0x3f) | uVar11;
  param_1->BytePos = (0x3f - uVar6 >> 3) + uVar20;
  local_60 = (float)CONCAT13((char)uVar11,CONCAT12((char)uVar17,CONCAT11((char)uVar16,(char)uVar15))
                            );
  if (fVar25 <= local_60) {
    fVar25 = local_60;
  }
  param_1->BitBuffer = uVar11 >> 8;
  param_1->BitBufferBits = (uVar6 | 0x38) - 8;
  fVar23 = powf(fVar23,(float)CONCAT13((char)uVar10,
                                       CONCAT12((char)uVar9,CONCAT11((char)uVar8,(char)uVar19))));
  iVar18 = 0;
  iVar22 = 0;
  if (param_4 != 0) {
    uVar8 = (ulonglong)param_4;
    do {
      uVar5 = param_1->BitBufferBits;
      uVar20 = (0x3f - uVar5 >> 3) + param_1->BytePos;
      uVar10 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar5 & 0x3f) |
               param_1->BitBuffer;
      param_1->BitBuffer = uVar10;
      param_1->BitBufferBits = uVar5 | 0x38;
      uVar6 = (uint)uVar10 & 0x7ff;
      param_1->BytePos = uVar20;
      bVar4 = (this->DecodingContext).ResidualUVTable.TableEntries[uVar6].Length;
      uVar5 = (uVar5 | 0x38) - (int)(char)bVar4;
      uVar10 = uVar10 >> (bVar4 & 0x3f);
      param_1->BitBuffer = uVar10;
      param_1->BitBufferBits = uVar5;
      cVar1 = (&(this->DecodingContext).ResidualNormalTangentZTable)[1].TableEntries[uVar6].Symbol;
      iVar21 = cVar1 + -2;
      uVar9 = uVar10;
      if ('\x03' < cVar1) {
        uVar5 = uVar5 - (iVar21 >> 1);
        bVar4 = (byte)(iVar21 >> 1);
        uVar9 = uVar10 >> (bVar4 & 0x3f);
        param_1->BitBuffer = uVar9;
        param_1->BitBufferBits = uVar5;
        iVar21 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar10) + CachedHighBitsLUT[cVar1];
      }
      uVar9 = *(longlong *)(param_1->Bytes + uVar20) << ((byte)uVar5 & 0x3f) | uVar9;
      param_1->BitBuffer = uVar9;
      uVar6 = (uint)uVar9 & 0x7ff;
      param_1->BitBufferBits = uVar5 | 0x38;
      param_1->BytePos = (0x3f - uVar5 >> 3) + uVar20;
      bVar4 = (this->DecodingContext).ResidualUVTable.TableEntries[uVar6].Length;
      uVar5 = (uVar5 | 0x38) - (int)(char)bVar4;
      uVar9 = uVar9 >> (bVar4 & 0x3f);
      param_1->BitBuffer = uVar9;
      param_1->BitBufferBits = uVar5;
      cVar1 = (&(this->DecodingContext).ResidualNormalTangentZTable)[1].TableEntries[uVar6].Symbol;
      iVar7 = cVar1 + -2;
      if ('\x03' < cVar1) {
        bVar4 = (byte)(iVar7 >> 1);
        param_1->BitBuffer = uVar9 >> (bVar4 & 0x3f);
        param_1->BitBufferBits = uVar5 - (iVar7 >> 1);
        iVar7 = ((int)(1L << (bVar4 & 0x3f)) - 1U & (uint)uVar9) + CachedHighBitsLUT[cVar1];
      }
      iVar18 = iVar18 + iVar21;
      iVar22 = iVar22 + iVar7;
      fVar24 = (float)iVar22 * (fVar25 / (float)(int)fVar23);
      uStack_64 = SUB41(fVar24,0);
      uStack_63 = (undefined1)((uint)fVar24 >> 8);
      uStack_62 = (undefined1)((uint)fVar24 >> 0x10);
      uStack_61 = (undefined1)((uint)fVar24 >> 0x18);
      TVar3._4_1_ = uStack_64;
      TVar3._s_0.X = (float)iVar18 * (fVar25 / (float)(int)fVar23);
      TVar3._5_1_ = uStack_63;
      TVar3._6_1_ = uStack_62;
      TVar3._7_1_ = uStack_61;
      *param_2 = (TVector2<float>)TVar3;
      param_2 = (TVector2<float> *)((longlong)param_2 + param_3);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// InitLUT @ 14ca21690

void __cdecl FCodecV1Decoder::InitLUT(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = 1;
  piVar3 = CachedHighBitsLUT + 5;
  piVar4 = CachedHighBitsLUT + 4;
  do {
    bVar1 = (byte)iVar2;
    *piVar4 = 1 << (bVar1 & 0x1f);
    iVar2 = iVar2 + 1;
    *piVar3 = -2 << (bVar1 & 0x1f);
    piVar3 = piVar3 + 2;
    piVar4 = piVar4 + 2;
  } while (iVar2 < 0x1f);
  return;
}

// ReadCodedStreamDescription @ 14ca28a90

void __thiscall
FCodecV1Decoder::ReadCodedStreamDescription
          (FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1,uint param_2)

{
  uint uVar1;
  FGeometryCacheMeshData *pFVar2;
  ulonglong uVar3;
  
  pFVar2 = (this->DecodingContext).MeshData;
  (pFVar2->VertexInfo).bHasTangentX = false;
  (pFVar2->VertexInfo).bHasTangentZ = false;
  (pFVar2->VertexInfo).bHasUV0 = false;
  (pFVar2->VertexInfo).bHasColor0 = false;
  (pFVar2->VertexInfo).bHasMotionVectors = false;
  (pFVar2->VertexInfo).bHasImportedVertexNumbers = false;
  (pFVar2->VertexInfo).bConstantUV0 = false;
  (pFVar2->VertexInfo).bConstantColor0 = false;
  (pFVar2->VertexInfo).bConstantIndices = false;
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bHasTangentX = (bool)((byte)uVar3 & 1);
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bHasTangentZ = (bool)((byte)uVar3 & 1);
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bHasUV0 = (bool)((byte)uVar3 & 1);
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bHasColor0 = (bool)((byte)uVar3 & 1);
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bHasMotionVectors = (bool)((byte)uVar3 & 1);
  if (0x7c < param_2) {
    uVar1 = param_1->BitBufferBits;
    uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
            param_1->BitBuffer;
    param_1->BitBufferBits = (uVar1 | 0x38) - 1;
    param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
    param_1->BitBuffer = uVar3 >> 1;
    (pFVar2->VertexInfo).bHasImportedVertexNumbers = (bool)((byte)uVar3 & 1);
  }
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bConstantUV0 = (bool)((byte)uVar3 & 1);
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  (pFVar2->VertexInfo).bConstantColor0 = (bool)((byte)uVar3 & 1);
  uVar1 = param_1->BitBufferBits;
  uVar3 = *(longlong *)(param_1->Bytes + param_1->BytePos) << ((byte)uVar1 & 0x3f) |
          param_1->BitBuffer;
  param_1->BytePos = (0x3f - uVar1 >> 3) + param_1->BytePos;
  param_1->BitBuffer = uVar3 >> 1;
  param_1->BitBufferBits = (uVar1 | 0x38) - 1;
  (pFVar2->VertexInfo).bConstantIndices = (bool)((byte)uVar3 & 1);
  return;
}

// SetupAndReadTables @ 14ca2b6f0

void __thiscall
FCodecV1Decoder::SetupAndReadTables(FCodecV1Decoder *this,FHuffmanBitStreamReader *param_1)

{
  FGeometryCacheMeshData *pFVar1;
  
  pFVar1 = (this->DecodingContext).MeshData;
  if ((pFVar1->VertexInfo).bConstantIndices == false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualIndicesTable,param_1);
  }
  FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualVertexPosTable,param_1);
  if ((pFVar1->VertexInfo).bHasImportedVertexNumbers != false) {
    FHuffmanDecodeTable::Initialize
              (&(this->DecodingContext).ResidualImportedVertexNumbersTable,param_1);
  }
  if ((pFVar1->VertexInfo).bHasColor0 != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualColorTable,param_1);
  }
  if ((pFVar1->VertexInfo).bHasTangentX != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualNormalTangentXTable,param_1);
  }
  if ((pFVar1->VertexInfo).bHasTangentZ != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualNormalTangentZTable,param_1);
  }
  if ((pFVar1->VertexInfo).bHasUV0 != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualUVTable,param_1);
  }
  if ((pFVar1->VertexInfo).bHasMotionVectors != false) {
    FHuffmanDecodeTable::Initialize(&(this->DecodingContext).ResidualMotionVectorTable,param_1);
  }
  return;
}

