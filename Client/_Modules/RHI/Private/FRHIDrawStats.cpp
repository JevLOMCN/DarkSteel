// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Accumulate @ 145c90a70

void __thiscall FRHIDrawStats::Accumulate(FRHIDrawStats *this,FRHIDrawStats *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (GNumExplicitGPUsForRendering != 0) {
    do {
      lVar3 = 4;
      puVar1 = &this->GPUs[uVar5].Categories[1].Triangles;
      lVar2 = (longlong)param_1 + (uVar5 * 0x300 - (longlong)(this->GPUs + uVar5));
      do {
        puVar1[-7] = puVar1[-7] + *(int *)((longlong)puVar1 + lVar2 + -0x1c);
        puVar1[-6] = puVar1[-6] + *(int *)((longlong)puVar1 + lVar2 + -0x18);
        puVar1[-5] = puVar1[-5] + *(int *)((longlong)puVar1 + lVar2 + -0x14);
        puVar1[-4] = puVar1[-4] + *(int *)((longlong)puVar1 + lVar2 + -0x10);
        puVar1[-3] = puVar1[-3] + *(int *)((longlong)puVar1 + lVar2 + -0xc);
        puVar1[-2] = puVar1[-2] + *(int *)((longlong)puVar1 + lVar2 + -8);
        ((FPerCategory *)(puVar1 + -1))->Draws =
             ((FPerCategory *)(puVar1 + -1))->Draws + *(int *)((longlong)puVar1 + lVar2 + -4);
        *puVar1 = *puVar1 + *(int *)((longlong)puVar1 + lVar2);
        puVar1[1] = puVar1[1] + *(int *)((longlong)puVar1 + lVar2 + 4);
        puVar1[2] = puVar1[2] + *(int *)((longlong)puVar1 + lVar2 + 8);
        puVar1[3] = puVar1[3] + *(int *)((longlong)puVar1 + lVar2 + 0xc);
        puVar1[4] = puVar1[4] + *(int *)((longlong)puVar1 + lVar2 + 0x10);
        puVar1[5] = puVar1[5] + *(int *)((longlong)puVar1 + lVar2 + 0x14);
        puVar1[6] = puVar1[6] + *(int *)((longlong)puVar1 + lVar2 + 0x18);
        puVar1[7] = puVar1[7] + *(int *)((longlong)puVar1 + lVar2 + 0x1c);
        puVar1[8] = puVar1[8] + *(int *)((longlong)puVar1 + lVar2 + 0x20);
        puVar1[9] = puVar1[9] + *(int *)((longlong)puVar1 + lVar2 + 0x24);
        puVar1[10] = puVar1[10] + *(int *)((longlong)puVar1 + lVar2 + 0x28);
        puVar1[0xb] = puVar1[0xb] + *(int *)((longlong)puVar1 + lVar2 + 0x2c);
        puVar1[0xc] = puVar1[0xc] + *(int *)((longlong)puVar1 + lVar2 + 0x30);
        puVar1[0xd] = puVar1[0xd] + *(int *)((longlong)puVar1 + lVar2 + 0x34);
        puVar1[0xe] = puVar1[0xe] + *(int *)((longlong)puVar1 + lVar2 + 0x38);
        puVar1[0xf] = puVar1[0xf] + *(int *)((longlong)puVar1 + lVar2 + 0x3c);
        puVar1[0x10] = puVar1[0x10] + *(int *)((longlong)puVar1 + lVar2 + 0x40);
        puVar1[0x11] = puVar1[0x11] + *(int *)((longlong)puVar1 + lVar2 + 0x44);
        puVar1[0x12] = puVar1[0x12] + *(int *)((longlong)puVar1 + lVar2 + 0x48);
        puVar1[0x13] = puVar1[0x13] + *(int *)((longlong)puVar1 + lVar2 + 0x4c);
        puVar1[0x14] = puVar1[0x14] + *(int *)((longlong)puVar1 + lVar2 + 0x50);
        puVar1[0x15] = puVar1[0x15] + *(int *)((longlong)puVar1 + lVar2 + 0x54);
        puVar1[0x16] = puVar1[0x16] + *(int *)((longlong)puVar1 + lVar2 + 0x58);
        puVar1[0x17] = puVar1[0x17] + *(int *)((longlong)puVar1 + lVar2 + 0x5c);
        puVar1[0x18] = puVar1[0x18] + *(int *)((longlong)puVar1 + lVar2 + 0x60);
        puVar1[0x19] = puVar1[0x19] + *(int *)((longlong)puVar1 + lVar2 + 100);
        puVar1[0x1a] = puVar1[0x1a] + *(int *)((longlong)puVar1 + lVar2 + 0x68);
        puVar1[0x1b] = puVar1[0x1b] + *(int *)((longlong)puVar1 + lVar2 + 0x6c);
        puVar1[0x1c] = puVar1[0x1c] + *(int *)((longlong)puVar1 + lVar2 + 0x70);
        puVar1[0x1d] = puVar1[0x1d] + *(int *)((longlong)puVar1 + lVar2 + 0x74);
        puVar1[0x1e] = puVar1[0x1e] + *(int *)((longlong)puVar1 + lVar2 + 0x78);
        puVar1[0x1f] = puVar1[0x1f] + *(int *)((longlong)puVar1 + lVar2 + 0x7c);
        puVar1[0x20] = puVar1[0x20] + *(int *)((longlong)puVar1 + lVar2 + 0x80);
        puVar1[0x21] = puVar1[0x21] + *(int *)((longlong)puVar1 + lVar2 + 0x84);
        puVar1[0x22] = puVar1[0x22] + *(int *)((longlong)puVar1 + lVar2 + 0x88);
        puVar1[0x23] = puVar1[0x23] + *(int *)((longlong)puVar1 + lVar2 + 0x8c);
        puVar1[0x24] = puVar1[0x24] + *(int *)((longlong)puVar1 + lVar2 + 0x90);
        puVar1[0x25] = puVar1[0x25] + *(int *)((longlong)puVar1 + lVar2 + 0x94);
        puVar1[0x26] = puVar1[0x26] + *(int *)((longlong)puVar1 + lVar2 + 0x98);
        puVar1[0x27] = puVar1[0x27] + *(int *)((longlong)puVar1 + lVar2 + 0x9c);
        puVar1[0x28] = puVar1[0x28] + *(int *)((longlong)puVar1 + lVar2 + 0xa0);
        puVar1 = puVar1 + 0x30;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < GNumExplicitGPUsForRendering);
  }
  return;
}

// ProcessAsFrameStats @ 145cb4f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHIDrawStats::ProcessAsFrameStats(FRHIDrawStats *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  LARGE_INTEGER LVar25;
  bool bVar26;
  ulonglong uVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_RHITriangles> FVar29;
  FThreadStats *pFVar30;
  FThreadStatsPool *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_RHILines> FVar32;
  FThreadSafeStaticStat<FStat_STAT_RHIDrawPrimitiveCalls> FVar33;
  int iVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  longlong lVar38;
  uchar auVar39 [8];
  int iVar40;
  uchar auVar41 [8];
  uchar auVar42 [8];
  double dVar43;
  undefined1 auStackY_3f8 [32];
  uint local_394;
  LARGE_INTEGER local_390;
  uint local_388;
  int local_384;
  int local_380;
  int local_37c;
  uint local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  FStatMessage local_360;
  int local_350;
  int local_34c;
  FRHIDrawStats *local_348;
  int local_338 [192];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_348 = this;
  QueryPerformanceCounter(&local_390);
  dVar43 = (double)local_390.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  bVar26 = __real_3fe0000000000000 < dVar43 - LastTime;
  if (bVar26) {
    LastTime = dVar43;
  }
  local_388 = 0;
  local_378 = 0;
  local_394 = 0;
  local_37c = 0;
  local_384 = 0;
  local_380 = 0;
  memset(local_338,0,0x300);
  puVar35 = &this->GPUs[0].Categories[1].Lines;
  lVar38 = 0;
  do {
    iVar36 = 0;
    iVar40 = 0;
    local_368 = 0;
    local_374 = 0;
    local_36c = 0;
    local_370 = 0;
    uVar37 = 2;
    do {
      iVar1 = puVar35[-7];
      uVar27 = (ulonglong)(uVar37 - 2);
      iVar2 = puVar35[-8];
      local_338[uVar27 * 6] = local_338[uVar27 * 6] + iVar2;
      local_338[uVar27 * 6 + 1] = local_338[uVar27 * 6 + 1] + iVar1;
      iVar3 = puVar35[-6];
      local_338[uVar27 * 6 + 2] = local_338[uVar27 * 6 + 2] + iVar3;
      iVar4 = puVar35[-5];
      local_338[uVar27 * 6 + 3] = local_338[uVar27 * 6 + 3] + iVar4;
      iVar5 = puVar35[-4];
      local_338[uVar27 * 6 + 4] = local_338[uVar27 * 6 + 4] + iVar5;
      iVar6 = puVar35[-3];
      local_338[uVar27 * 6 + 5] = local_338[uVar27 * 6 + 5] + iVar6;
      if ((bVar26) && ((int)(uVar37 - 2) < Manager.NumCategory)) {
        Manager.DisplayCounts.Elements[uVar37 - 2].Elements[lVar38] = iVar2;
      }
      uVar7 = ((FPerCategory *)(puVar35 + -2))->Draws;
      uVar27 = (ulonglong)(uVar37 - 1);
      uVar8 = puVar35[-1];
      local_338[uVar27 * 6] = local_338[uVar27 * 6] + uVar7;
      local_338[uVar27 * 6 + 1] = local_338[uVar27 * 6 + 1] + uVar8;
      uVar9 = *puVar35;
      local_338[uVar27 * 6 + 2] = local_338[uVar27 * 6 + 2] + uVar9;
      uVar10 = puVar35[1];
      local_338[uVar27 * 6 + 3] = local_338[uVar27 * 6 + 3] + uVar10;
      uVar11 = puVar35[2];
      local_338[uVar27 * 6 + 4] = local_338[uVar27 * 6 + 4] + uVar11;
      uVar12 = puVar35[3];
      local_338[uVar27 * 6 + 5] = local_338[uVar27 * 6 + 5] + uVar12;
      if ((bVar26) && ((int)(uVar37 - 1) < Manager.NumCategory)) {
        Manager.DisplayCounts.Elements[uVar37 - 1].Elements[lVar38] = uVar7;
      }
      iVar13 = puVar35[5];
      iVar14 = puVar35[4];
      iVar15 = puVar35[6];
      iVar16 = puVar35[7];
      iVar17 = puVar35[8];
      iVar18 = puVar35[9];
      uVar27 = (ulonglong)uVar37;
      local_338[uVar27 * 6 + 4] = local_338[uVar27 * 6 + 4] + iVar17;
      local_338[uVar27 * 6 + 5] = local_338[uVar27 * 6 + 5] + iVar18;
      local_338[uVar27 * 6] = local_338[uVar27 * 6] + iVar14;
      local_338[uVar27 * 6 + 1] = local_338[uVar27 * 6 + 1] + iVar13;
      local_338[uVar27 * 6 + 2] = local_338[uVar27 * 6 + 2] + iVar15;
      local_338[uVar27 * 6 + 3] = local_338[uVar27 * 6 + 3] + iVar16;
      local_364 = local_368 + iVar4 + uVar10 + iVar16;
      local_350 = local_36c + iVar5 + uVar11 + iVar17;
      local_34c = local_370 + iVar6 + uVar12 + iVar18;
      iVar34 = local_394 + iVar3 + uVar9 + iVar15;
      local_390.s.LowPart = iVar34;
      if ((bVar26) && ((int)uVar37 < Manager.NumCategory)) {
        Manager.DisplayCounts.Elements[uVar27].Elements[lVar38] = iVar14;
      }
      iVar19 = puVar35[10];
      uVar27 = (ulonglong)(uVar37 + 1);
      iVar20 = puVar35[0xb];
      local_338[uVar27 * 6] = local_338[uVar27 * 6] + iVar19;
      local_338[uVar27 * 6 + 1] = local_338[uVar27 * 6 + 1] + iVar20;
      iVar21 = puVar35[0xc];
      iVar40 = uVar7 + iVar40 + iVar2 + iVar14 + iVar19;
      local_338[uVar27 * 6 + 2] = local_338[uVar27 * 6 + 2] + iVar21;
      iVar22 = puVar35[0xd];
      local_338[uVar27 * 6 + 3] = local_338[uVar27 * 6 + 3] + iVar22;
      iVar23 = puVar35[0xe];
      local_338[uVar27 * 6 + 4] = local_338[uVar27 * 6 + 4] + iVar23;
      iVar24 = puVar35[0xf];
      local_338[uVar27 * 6 + 5] = local_338[uVar27 * 6 + 5] + iVar24;
      local_374 = iVar15 + iVar3 + local_374 + uVar9 + iVar21;
      iVar36 = iVar36 + iVar1 + uVar8 + iVar13 + iVar20;
      local_368 = local_364 + iVar22;
      local_36c = local_350 + iVar23;
      local_384 = iVar23 + iVar17 + uVar11 + iVar5 + local_384;
      local_370 = local_34c + iVar24;
      local_380 = iVar24 + iVar18 + uVar12 + iVar6 + local_380;
      local_388 = local_388 + iVar2 + uVar7 + iVar14 + iVar19;
      local_378 = local_378 + iVar1 + uVar8 + iVar13 + iVar20;
      local_394 = iVar34 + iVar21;
      local_37c = local_37c + iVar4 + uVar10 + iVar16 + iVar22;
      if ((bVar26) && ((int)(uVar37 + 1) < Manager.NumCategory)) {
        Manager.DisplayCounts.Elements[uVar27].Elements[lVar38] = iVar19;
      }
      puVar35 = puVar35 + 0x18;
      iVar1 = uVar37 + 2;
      uVar37 = uVar37 + 4;
    } while (iVar1 < 0x20);
    GNumDrawCallsRHI[lVar38] = iVar40;
    uVar37 = 0;
    GNumPrimitivesDrawnRHI[lVar38] = local_370 + iVar36 + local_36c + local_368 + local_374;
    lVar38 = lVar38 + 1;
  } while (lVar38 < 8);
  if (__CsvProfilerStat1312 == false) {
    FCsvProfilerTrace::OutputInlineStat("DrawCalls",_GCsvCategory_RHI.Index);
    __CsvProfilerStat1312 = true;
  }
  auVar41[4] = '\0';
  auVar41[5] = '\0';
  auVar41[6] = '\0';
  auVar41[7] = '\0';
  auVar41[0] = (undefined1)local_388;
  auVar41[1] = local_388._1_1_;
  auVar41[2] = local_388._2_1_;
  auVar41[3] = local_388._3_1_;
  FCsvProfiler::RecordCustomStat("DrawCalls",_GCsvCategory_RHI.Index,local_388,Set);
  if (__CsvProfilerStat1313 == false) {
    FCsvProfilerTrace::OutputInlineStat("PrimitivesDrawn",_GCsvCategory_RHI.Index);
    __CsvProfilerStat1313 = true;
  }
  auVar39[4] = '\0';
  auVar39[5] = '\0';
  auVar39[6] = '\0';
  auVar39[7] = '\0';
  auVar39[0] = (undefined1)local_378;
  auVar39[1] = local_378._1_1_;
  auVar39[2] = local_378._2_1_;
  auVar39[3] = local_378._3_1_;
  FCsvProfiler::RecordCustomStat
            ("PrimitivesDrawn",_GCsvCategory_RHI.Index,
             local_384 + local_380 + local_37c + local_394 + local_378,Set);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar29 = StatPtr_STAT_RHITriangles;
    if (StatPtr_STAT_RHITriangles == (FThreadSafeStaticStat<FStat_STAT_RHITriangles>)0x0) {
      pFVar28 = ::FName::FName((FName *)&local_390.s,"STAT_RHITriangles");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_RHITriangles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITriangles,*pFVar28,
                          L"Triangles drawn","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,false,false,MCR_Invalid);
    }
    LVar25 = *(LARGE_INTEGER *)FVar29;
    local_390 = LVar25;
    if (((LVar25.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_360.NameAndInfo.Number = LVar25.s.HighPart & 0xffff8fffU | 0x8000;
      local_390 = LVar25;
      local_360.StatData.Pad = auVar39;
      local_360.NameAndInfo.Index.Value = LVar25.s.LowPart;
      FThreadStats::AddStatMessage(pFVar30,&local_360);
      FStatsTrace::Set((FName *)&local_390.s,(long64)auVar39);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar32 = StatPtr_STAT_RHILines;
      if (StatPtr_STAT_RHILines == (FThreadSafeStaticStat<FStat_STAT_RHILines>)0x0) {
        pFVar28 = ::FName::FName((FName *)&local_390.s,"STAT_RHILines");
        FVar32 = (FThreadSafeStaticStat<FStat_STAT_RHILines>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHILines,*pFVar28,
                            L"Lines drawn","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                            ST_int64,false,false,MCR_Invalid);
      }
      LVar25.s = *(_struct_19 *)FVar32;
      auVar42[4] = '\0';
      auVar42[5] = '\0';
      auVar42[6] = '\0';
      auVar42[7] = '\0';
      auVar42._0_4_ = local_394;
      local_390.s = LVar25.s;
      if (((LVar25.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar30 == (FThreadStats *)0x0) {
          pFVar31 = FThreadStatsPool::Get();
          pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
        }
        local_360.NameAndInfo.Number = LVar25.s.HighPart & 0xffff8fffU | 0x8000;
        local_390.s = LVar25.s;
        local_360.StatData.Pad = auVar42;
        local_360.NameAndInfo.Index.Value = LVar25.s.LowPart;
        FThreadStats::AddStatMessage(pFVar30,&local_360);
        FStatsTrace::Set((FName *)&local_390.s,(long64)auVar42);
        if (pFVar30->ScopeCount == 0) {
          FThreadStats::Flush(pFVar30,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar30,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar33 = StatPtr_STAT_RHIDrawPrimitiveCalls;
        if (StatPtr_STAT_RHIDrawPrimitiveCalls ==
            (FThreadSafeStaticStat<FStat_STAT_RHIDrawPrimitiveCalls>)0x0) {
          pFVar28 = ::FName::FName((FName *)&local_390.s,"STAT_RHIDrawPrimitiveCalls");
          FVar33 = (FThreadSafeStaticStat<FStat_STAT_RHIDrawPrimitiveCalls>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIDrawPrimitiveCalls,
                              *pFVar28,L"DrawPrimitive calls","STATGROUP_RHI","STATCAT_Advanced",
                              L"RHI",true,true,ST_int64,false,false,MCR_Invalid);
        }
        LVar25 = *(LARGE_INTEGER *)FVar33;
        local_390 = LVar25;
        if (((LVar25.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar30 == (FThreadStats *)0x0) {
            pFVar31 = FThreadStatsPool::Get();
            pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
          }
          local_360.NameAndInfo.Number = LVar25.s.HighPart & 0xffff8fffU | 0x8000;
          local_390 = LVar25;
          local_360.StatData.Pad = auVar41;
          local_360.NameAndInfo.Index.Value = LVar25.s.LowPart;
          FThreadStats::AddStatMessage(pFVar30,&local_360);
          FStatsTrace::Set((FName *)&local_390.s,(long64)auVar41);
          if (pFVar30->ScopeCount == 0) {
            FThreadStats::Flush(pFVar30,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar30,false,false);
          }
        }
      }
    }
  }
  if (0 < Manager.NumCategory) {
    do {
      FCsvProfiler::RecordCustomStat
                (&Manager.Array.Elements[uVar37]->Name,_GCsvCategory_DrawCall.Index,
                 local_338[(ulonglong)uVar37 * 6],Set);
      uVar37 = uVar37 + 1;
    } while ((int)uVar37 < Manager.NumCategory);
  }
  memset(local_348,0,0x1800);
  return;
}

