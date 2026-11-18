// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Run @ 141967e60

/* WARNING: Enum "Type": Some values do not have unique names */

FCsvBenchmarkResult * __thiscall
FCsvBenchmark::Run(FCsvBenchmark *this,FCsvBenchmarkResult *__return_storage_ptr__,int param_1)

{
  FBlock *pFVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FCsvProfilerThreadData *pFVar8;
  FCsvProfiler *pFVar9;
  ulonglong uVar10;
  LARGE_INTEGER LVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  int local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_d8;
  int local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  ulonglong local_88;
  LARGE_INTEGER local_80;
  FScopedCsvStatExclusive local_78 [7];
  
  uVar17 = (ulonglong)(uint)param_1;
  local_res8 = (LARGE_INTEGER)this;
  local_res10 = (LARGE_INTEGER)__return_storage_ptr__;
  local_res18 = param_1;
  if (!`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l2::
       __CsvProfilerStat710) {
    FCsvProfilerTrace::OutputInlineStatExclusive("CsvBench");
    `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l2::
    __CsvProfilerStat710 = true;
  }
  local_78[0].StatName = "CsvBench";
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
    if (GCsvProfilerNamedEventsExclusive != false) {
      local_res20.s.LowPart = 0xffff8080;
      CsvBeginNamedEvent((FColor)0xffff8080,"CSV_CsvBench");
    }
    pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
      pFVar8 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res20);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              ("CsvBench",_GCsvCategory_Exclusive.Index,
               CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart));
    uVar10 = (pFVar8->TimingMarkers).Counter;
    uVar14 = uVar10 & 0xff;
    if ((char)uVar10 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar8->TimingMarkers);
    }
    uVar4 = _GCsvCategory_Exclusive.Index;
    pFVar1 = (pFVar8->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar14) =
         CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart);
    pFVar1->Entries[uVar14].field_0x15 = 0x12;
    *(char **)&pFVar1->Entries[uVar14].field_0x8 = "CsvBench";
    *(uint *)&pFVar1->Entries[uVar14].field_0x10 = uVar4;
    (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
  }
  this->bIsRunning = true;
  __return_storage_ptr__->TimingStatTimeNs = 0.0;
  __return_storage_ptr__->CustomStatTimeNs = 0.0;
  QueryPerformanceCounter(&local_d8);
  QueryPerformanceCounter(&local_80);
  uVar10 = uVar17;
  if (0 < param_1) {
    do {
      local_88 = uVar10;
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
          __CsvProfilerStat718 == false) {
        FCsvProfilerTrace::OutputInlineStat("TimingStat1",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
        __CsvProfilerStat718 = true;
      }
      uVar4 = _GCsvCategory_CsvBench.Index;
      uVar10 = (ulonglong)_GCsvCategory_CsvBench.Index;
      if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar10] != false)) {
        if (GCsvProfilerNamedEventsTiming != false) {
          local_res20.s.LowPart = 0xffff80ff;
          CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_TimingStat1");
        }
        pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
        if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
          pFVar8 = FCsvProfilerThreadData::CreateTLSData();
        }
        QueryPerformanceCounter(&local_c8);
        FCsvProfilerTrace::OutputBeginStat("TimingStat1",uVar4,local_c8.QuadPart);
        uVar14 = (pFVar8->TimingMarkers).Counter;
        uVar15 = uVar14 & 0xff;
        if ((char)uVar14 == '\0') {
          TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                    (&pFVar8->TimingMarkers);
        }
        pFVar1 = (pFVar8->TimingMarkers).TailBlock;
        ((LARGE_INTEGER *)(pFVar1->Entries + uVar15))->QuadPart = (LONGLONG)local_c8;
        pFVar1->Entries[uVar15].field_0x15 = 2;
        *(char **)&pFVar1->Entries[uVar15].field_0x8 = "TimingStat1";
        *(uint *)&pFVar1->Entries[uVar15].field_0x10 = uVar4;
        (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
      }
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
          __CsvProfilerStat719 == false) {
        FCsvProfilerTrace::OutputInlineStat("TimingStat2",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
        __CsvProfilerStat719 = true;
      }
      uVar5 = _GCsvCategory_CsvBench.Index;
      uVar14 = (ulonglong)_GCsvCategory_CsvBench.Index;
      if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar14] != false)) {
        if (GCsvProfilerNamedEventsTiming != false) {
          CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_TimingStat2");
        }
        pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
        if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
          pFVar8 = FCsvProfilerThreadData::CreateTLSData();
        }
        QueryPerformanceCounter(&local_c0);
        FCsvProfilerTrace::OutputBeginStat("TimingStat2",uVar5,local_c0.QuadPart);
        uVar15 = (pFVar8->TimingMarkers).Counter;
        uVar16 = uVar15 & 0xff;
        if ((char)uVar15 == '\0') {
          TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                    (&pFVar8->TimingMarkers);
        }
        pFVar1 = (pFVar8->TimingMarkers).TailBlock;
        ((LARGE_INTEGER *)(pFVar1->Entries + uVar16))->QuadPart = (LONGLONG)local_c0;
        *(char **)&pFVar1->Entries[uVar16].field_0x8 = "TimingStat2";
        pFVar1->Entries[uVar16].field_0x15 = 2;
        *(uint *)&pFVar1->Entries[uVar16].field_0x10 = uVar5;
        (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
      }
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
          __CsvProfilerStat720 == false) {
        FCsvProfilerTrace::OutputInlineStat("TimingStat3",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
        __CsvProfilerStat720 = true;
      }
      uVar6 = _GCsvCategory_CsvBench.Index;
      uVar15 = (ulonglong)_GCsvCategory_CsvBench.Index;
      if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar15] != false)) {
        if (GCsvProfilerNamedEventsTiming != false) {
          CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_TimingStat3");
        }
        pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
        if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
          pFVar8 = FCsvProfilerThreadData::CreateTLSData();
        }
        QueryPerformanceCounter(&local_b8);
        FCsvProfilerTrace::OutputBeginStat("TimingStat3",uVar6,local_b8.QuadPart);
        uVar16 = (pFVar8->TimingMarkers).Counter;
        uVar13 = uVar16 & 0xff;
        if ((char)uVar16 == '\0') {
          TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                    (&pFVar8->TimingMarkers);
        }
        pFVar1 = (pFVar8->TimingMarkers).TailBlock;
        ((LARGE_INTEGER *)(pFVar1->Entries + uVar13))->QuadPart = (LONGLONG)local_b8;
        *(char **)&pFVar1->Entries[uVar13].field_0x8 = "TimingStat3";
        pFVar1->Entries[uVar13].field_0x15 = 2;
        *(uint *)&pFVar1->Entries[uVar13].field_0x10 = uVar6;
        (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
      }
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
          __CsvProfilerStat721 == false) {
        FCsvProfilerTrace::OutputInlineStat("TimingStat4",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l7::
        __CsvProfilerStat721 = true;
      }
      uVar7 = _GCsvCategory_CsvBench.Index;
      uVar16 = (ulonglong)_GCsvCategory_CsvBench.Index;
      if (GCsvProfilerIsCapturing != false) {
        if (GCsvCategoriesEnabled[uVar16] != false) {
          if (GCsvProfilerNamedEventsTiming != false) {
            CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_TimingStat4");
          }
          pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
          if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
            pFVar8 = FCsvProfilerThreadData::CreateTLSData();
          }
          QueryPerformanceCounter(&local_b0);
          FCsvProfilerTrace::OutputBeginStat("TimingStat4",uVar7,local_b0.QuadPart);
          uVar13 = (pFVar8->TimingMarkers).Counter;
          uVar12 = uVar13 & 0xff;
          if ((char)uVar13 == '\0') {
            TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                      (&pFVar8->TimingMarkers);
          }
          pFVar1 = (pFVar8->TimingMarkers).TailBlock;
          ((LARGE_INTEGER *)(pFVar1->Entries + uVar12))->QuadPart = (LONGLONG)local_b0;
          *(char **)&pFVar1->Entries[uVar12].field_0x8 = "TimingStat4";
          pFVar1->Entries[uVar12].field_0x15 = 2;
          *(uint *)&pFVar1->Entries[uVar12].field_0x10 = uVar7;
          (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
        }
        if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar16] != false)) {
          pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
          if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
            pFVar8 = FCsvProfilerThreadData::CreateTLSData();
          }
          QueryPerformanceCounter(&local_a8);
          FCsvProfilerTrace::OutputEndStat("TimingStat4",uVar7,local_a8.QuadPart);
          uVar16 = (pFVar8->TimingMarkers).Counter;
          uVar13 = uVar16 & 0xff;
          if ((char)uVar16 == '\0') {
            TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                      (&pFVar8->TimingMarkers);
          }
          pFVar1 = (pFVar8->TimingMarkers).TailBlock;
          ((LARGE_INTEGER *)(pFVar1->Entries + uVar13))->QuadPart = (LONGLONG)local_a8;
          *(char **)&pFVar1->Entries[uVar13].field_0x8 = "TimingStat4";
          pFVar1->Entries[uVar13].field_0x15 = 0;
          *(uint *)&pFVar1->Entries[uVar13].field_0x10 = uVar7;
          (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
          if (GCsvProfilerNamedEventsTiming != false) {
            if (CpuChannel->Enabled < 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            else {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
        }
      }
      if (GCsvProfilerIsCapturing != false) {
        if (GCsvCategoriesEnabled[uVar15] != false) {
          pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
          if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
            pFVar8 = FCsvProfilerThreadData::CreateTLSData();
          }
          QueryPerformanceCounter(&local_a0);
          FCsvProfilerTrace::OutputEndStat("TimingStat3",uVar6,local_a0.QuadPart);
          uVar15 = (pFVar8->TimingMarkers).Counter;
          uVar16 = uVar15 & 0xff;
          if ((char)uVar15 == '\0') {
            TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                      (&pFVar8->TimingMarkers);
          }
          pFVar1 = (pFVar8->TimingMarkers).TailBlock;
          ((LARGE_INTEGER *)(pFVar1->Entries + uVar16))->QuadPart = (LONGLONG)local_a0;
          *(char **)&pFVar1->Entries[uVar16].field_0x8 = "TimingStat3";
          pFVar1->Entries[uVar16].field_0x15 = 0;
          *(uint *)&pFVar1->Entries[uVar16].field_0x10 = uVar6;
          (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
          if (GCsvProfilerNamedEventsTiming != false) {
            if (CpuChannel->Enabled < 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            else {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
        }
        if (GCsvProfilerIsCapturing != false) {
          if (GCsvCategoriesEnabled[uVar14] != false) {
            pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
            if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
              pFVar8 = FCsvProfilerThreadData::CreateTLSData();
            }
            QueryPerformanceCounter(&local_98);
            FCsvProfilerTrace::OutputEndStat("TimingStat2",uVar5,local_98.QuadPart);
            uVar14 = (pFVar8->TimingMarkers).Counter;
            uVar15 = uVar14 & 0xff;
            if ((char)uVar14 == '\0') {
              TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                        (&pFVar8->TimingMarkers);
            }
            pFVar1 = (pFVar8->TimingMarkers).TailBlock;
            ((LARGE_INTEGER *)(pFVar1->Entries + uVar15))->QuadPart = (LONGLONG)local_98;
            pFVar1->Entries[uVar15].field_0x15 = 0;
            *(char **)&pFVar1->Entries[uVar15].field_0x8 = "TimingStat2";
            *(uint *)&pFVar1->Entries[uVar15].field_0x10 = uVar5;
            (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
            if (GCsvProfilerNamedEventsTiming != false) {
              if (CpuChannel->Enabled < 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              else {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
          if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar10] != false)) {
            pFVar8 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
            if (pFVar8 == (FCsvProfilerThreadData *)0x0) {
              pFVar8 = FCsvProfilerThreadData::CreateTLSData();
            }
            QueryPerformanceCounter(&local_90);
            FCsvProfilerTrace::OutputEndStat("TimingStat1",uVar4,local_90.QuadPart);
            uVar10 = (pFVar8->TimingMarkers).Counter;
            uVar14 = uVar10 & 0xff;
            if ((char)uVar10 == '\0') {
              TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                        (&pFVar8->TimingMarkers);
            }
            pFVar1 = (pFVar8->TimingMarkers).TailBlock;
            ((LARGE_INTEGER *)(pFVar1->Entries + uVar14))->QuadPart = (LONGLONG)local_90;
            pFVar1->Entries[uVar14].field_0x15 = 0;
            *(char **)&pFVar1->Entries[uVar14].field_0x8 = "TimingStat1";
            *(uint *)&pFVar1->Entries[uVar14].field_0x10 = uVar4;
            (pFVar8->TimingMarkers).Counter = (pFVar8->TimingMarkers).Counter + 1;
            if (GCsvProfilerNamedEventsTiming != false) {
              if (CpuChannel->Enabled < 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              else {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
        }
      }
      uVar17 = uVar17 - 1;
      uVar10 = local_88;
      __return_storage_ptr__ = (FCsvBenchmarkResult *)local_res10;
      this = (FCsvBenchmark *)local_res8;
      param_1 = local_res18;
    } while (uVar17 != 0);
  }
  QueryPerformanceCounter(&local_res10);
  dVar2 = __real_3ff0000000000000 / (double)(param_1 * 4);
  __return_storage_ptr__->TimingStatTimeNs =
       (double)(ulonglong)(local_res10.QuadPart - (longlong)local_80) *
       FGenericPlatformTime::SecondsPerCycle64 * __real_41cdcd6500000000 * dVar2;
  QueryPerformanceCounter(&local_res8);
  fVar3 = __real_3f800000;
  if (0 < param_1) {
    do {
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l22::
          __CsvProfilerStat728 == false) {
        FCsvProfilerTrace::OutputInlineStat("CustomStat",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l22::
        __CsvProfilerStat728 = true;
      }
      FCsvProfiler::RecordCustomStat("CustomStat",_GCsvCategory_CsvBench.Index,fVar3,Accumulate);
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l26::
          __CsvProfilerStat729 == false) {
        FCsvProfilerTrace::OutputInlineStat("CustomStat",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l26::
        __CsvProfilerStat729 = true;
      }
      FCsvProfiler::RecordCustomStat("CustomStat",_GCsvCategory_CsvBench.Index,fVar3,Accumulate);
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l30::
          __CsvProfilerStat730 == false) {
        FCsvProfilerTrace::OutputInlineStat("CustomStat",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l30::
        __CsvProfilerStat730 = true;
      }
      FCsvProfiler::RecordCustomStat("CustomStat",_GCsvCategory_CsvBench.Index,fVar3,Accumulate);
      if (`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l34::
          __CsvProfilerStat731 == false) {
        FCsvProfilerTrace::OutputInlineStat("CustomStat",_GCsvCategory_CsvBench.Index);
        `public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l34::
        __CsvProfilerStat731 = true;
      }
      FCsvProfiler::RecordCustomStat("CustomStat",_GCsvCategory_CsvBench.Index,fVar3,Accumulate);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  QueryPerformanceCounter(&local_res10);
  *(double *)((longlong)__return_storage_ptr__ + 8) =
       (double)(ulonglong)(local_res10.QuadPart - (longlong)local_res8) *
       FGenericPlatformTime::SecondsPerCycle64 * __real_41cdcd6500000000 * dVar2;
  QueryPerformanceCounter(&local_res10);
  if (4 < (byte)LogCsvProfiler._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l38
                ::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  if ((4 < (byte)LogCsvProfiler._0_1_) &&
     (UE::Logging::Private::BasicLog<5>
                (&`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::
                  __l56::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler),
     4 < (byte)LogCsvProfiler._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_struct_FCsvBenchmarkResult___cdecl_FCsvBenchmark::Run(int)___ptr64'::__l74
                ::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
  }
  ::FString::PrintfImpl((FString *)&local_d8.s,L"%f");
  LVar11 = (LARGE_INTEGER)L"";
  if (local_d0 != 0) {
    LVar11 = local_d8;
  }
  pFVar9 = FCsvProfiler::Get();
  FCsvProfiler::SetMetadataInternal
            (pFVar9,L"CsvBench_TimingStat_ns",(wchar_t *)LVar11,true,Persistent);
  if ((wchar_t *)local_d8.QuadPart != (wchar_t *)0x0) {
    FMemory::Free((void *)local_d8);
  }
  ::FString::PrintfImpl((FString *)&local_d8.s,L"%f");
  LVar11 = (LARGE_INTEGER)L"";
  if (local_d0 != 0) {
    LVar11 = local_d8;
  }
  pFVar9 = FCsvProfiler::Get();
  FCsvProfiler::SetMetadataInternal
            (pFVar9,L"CsvBench_CustomStat_ns",(wchar_t *)LVar11,true,Persistent);
  if ((wchar_t *)local_d8.QuadPart != (wchar_t *)0x0) {
    FMemory::Free((void *)local_d8);
  }
  ::FString::PrintfImpl((FString *)&local_d8.s,L"%f");
  LVar11 = (LARGE_INTEGER)L"";
  if (local_d0 != 0) {
    LVar11 = local_d8;
  }
  pFVar9 = FCsvProfiler::Get();
  FCsvProfiler::SetMetadataInternal
            (pFVar9,L"CsvBench_Duration_ms",(wchar_t *)LVar11,true,Persistent);
  if ((wchar_t *)local_d8.QuadPart != (wchar_t *)0x0) {
    FMemory::Free((void *)local_d8);
  }
  *this = false;
  FScopedCsvStatExclusive::~FScopedCsvStatExclusive(local_78);
  return (FCsvBenchmarkResult *)(LONGLONG)__return_storage_ptr__;
}

