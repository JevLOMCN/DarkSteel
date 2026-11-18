// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FCsvProfilerProcessingThread @ 14191b4f0

void __thiscall
FCsvProfilerProcessingThread::~FCsvProfilerProcessingThread(FCsvProfilerProcessingThread *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FCsvProfilerProcessingThread__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StallGameThreadCs);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Exit @ 14193a660

void __thiscall FCsvProfilerProcessingThread::Exit(FCsvProfilerProcessingThread *this)

{
  return;
}

// Init @ 14194ebd0

bool __thiscall FCsvProfilerProcessingThread::Init(FCsvProfilerProcessingThread *this)

{
  return true;
}

// Run @ 141968a50

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FCsvProfilerProcessingThread::Run(FCsvProfilerProcessingThread *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  FMemScope local_res18;
  
  GCsvProcessingThreadId = GetCurrentThreadId();
  GGameThreadIsCsvProcessingThread = false;
  FMemory::SetupTLSCachesOnCurrentThread();
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,CsvProfiler,true);
  fVar3 = __real_3ba3d70a;
  fVar2 = __real_3a83126f;
  uVar12 = 0;
  fVar15 = 0.0;
  uVar11 = uVar12;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if ((this->StopCounter).Counter == 0) {
    do {
      pTVar5 = CVarCsvProcessingThreadTimeBetweenUpdates.Ref;
      bVar7 = IsInParallelGameThread();
      if (bVar7) {
LAB_141968b5e:
        uVar8 = uVar12;
      }
      else {
        bVar7 = IsInGameThread();
        uVar8 = 4;
        if (bVar7) goto LAB_141968b5e;
      }
      pTVar4 = CVarCsvPauseProcessingThread.Ref;
      fVar16 = *(float *)((longlong)pTVar5->ShadowedValue + uVar8);
      bVar7 = IsInParallelGameThread();
      if (bVar7) {
LAB_141968b84:
        uVar8 = uVar12;
      }
      else {
        bVar7 = IsInGameThread();
        uVar8 = 4;
        if (bVar7) goto LAB_141968b84;
      }
      fVar14 = fVar3;
      if ((*(int *)((longlong)pTVar4->ShadowedValue + uVar8) == 0) &&
         (GCsvBenchmark.bIsRunning == false)) {
        local_res10[0] = 0;
        fVar14 = FCsvProfiler::ProcessStatData(this->CsvProfiler,local_res10);
        uVar6 = local_res10[0];
        if (GCsvProfilerIsWritingFile != false) {
          FCsvProfiler::FinalizeCsvFile(this->CsvProfiler);
          (**(code **)(this->CsvProfiler->FileWriteBlockingEvent->_padding_ + 0x10))();
        }
        pTVar5 = CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs.Ref;
        if ((int)uVar11 == 0) {
          bVar7 = IsInParallelGameThread();
          if (bVar7) {
LAB_141968c43:
            uVar8 = uVar12;
          }
          else {
            bVar7 = IsInGameThread();
            uVar8 = 4;
            if (bVar7) goto LAB_141968c43;
          }
          pTVar4 = CVarCsvProcessingThreadGtStallUpdateEscalationThreshold.Ref;
          fVar1 = *(float *)((longlong)pTVar5->ShadowedValue + uVar8);
          uVar8 = uVar12;
          if ((((0.0 < fVar1) && (fVar1 < fVar15)) && (fVar15 < fVar14)) && ((uint)uVar13 < uVar6))
          {
            uVar10 = (int)uVar9 + 1;
            bVar7 = IsInParallelGameThread();
            if (bVar7) {
LAB_141968c91:
              uVar9 = uVar12;
            }
            else {
              bVar7 = IsInGameThread();
              uVar9 = 4;
              if (bVar7) goto LAB_141968c91;
            }
            uVar8 = (ulonglong)uVar10;
            if (*(int *)((longlong)pTVar4->ShadowedValue + uVar9) <= (int)uVar10) {
              EnterCriticalSection((LPCRITICAL_SECTION)&this->StallGameThreadCs);
              uVar11 = 2;
              if (((2 < (byte)LogCsvProfiler._0_1_) &&
                  (UE::Logging::Private::BasicLog<3>
                             (&`public:_virtual_unsigned_int___cdecl_FCsvProfilerProcessingThread::Run(void)___ptr64'
                               ::__l25::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler),
                  2 < (byte)LogCsvProfiler._0_1_)) &&
                 (UE::Logging::Private::BasicLog<3>
                            (&`public:_virtual_unsigned_int___cdecl_FCsvProfilerProcessingThread::Run(void)___ptr64'
                              ::__l43::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler),
                 2 < (byte)LogCsvProfiler._0_1_)) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_virtual_unsigned_int___cdecl_FCsvProfilerProcessingThread::Run(void)___ptr64'
                            ::__l61::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
              }
              FWindowsPlatformProcess::SetThreadPriority(TPri_AboveNormal);
              uVar8 = uVar12;
            }
          }
        }
        else {
          uVar10 = (int)uVar11 - 1;
          uVar8 = uVar9;
          if ((uVar10 == 0) || (uVar11 = (ulonglong)uVar10, fVar14 < fVar16)) {
            FWindowsPlatformProcess::SetThreadPriority(this->Priority);
            LeaveCriticalSection((LPCRITICAL_SECTION)&this->StallGameThreadCs);
            uVar11 = uVar12;
          }
        }
        fVar16 = fVar16 - fVar14;
        uVar13 = (ulonglong)uVar6;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        uVar9 = uVar8;
        fVar15 = fVar14;
        fVar14 = fVar16 * fVar2;
      }
      FWindowsPlatformProcess::Sleep(fVar14);
    } while ((this->StopCounter).Counter == 0);
    if ((int)uVar11 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->StallGameThreadCs);
    }
  }
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// Stop @ 14196f0f0

void __thiscall FCsvProfilerProcessingThread::Stop(FCsvProfilerProcessingThread *this)

{
  LOCK();
  (this->StopCounter).Counter = (this->StopCounter).Counter + 1;
  UNLOCK();
  return;
}

