// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 8

// FWindowedHitRate @ 14b2a7600

FWindowedHitRate * __thiscall
Metasound::OperatorPoolPrivate::FWindowedHitRate::FWindowedHitRate(FWindowedHitRate *this)

{
  float fVar1;
  
  (this->History).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->History).ArrayNum = 0;
  (this->History).ArrayMax = 0;
  this->CurrHitCount = 0;
  this->CurrTotal = 0;
  this->RunningHitCount = 0;
  fVar1 = MetasoundPoolHitRateWindowSecondsCVar;
  this->RunningTotal = 0;
  this->PreviousTimeCycles = 0;
  this->CurrTTLSeconds = fVar1;
  this->bIsFirstUpdate = true;
  return this;
}

// AddHit @ 14b2aab30

void __thiscall Metasound::OperatorPoolPrivate::FWindowedHitRate::AddHit(FWindowedHitRate *this)

{
  this->CurrHitCount = this->CurrHitCount + 1;
  this->CurrTotal = this->CurrTotal + 1;
  return;
}

// AddMiss @ 14b2aab40

void __thiscall Metasound::OperatorPoolPrivate::FWindowedHitRate::AddMiss(FWindowedHitRate *this)

{
  this->CurrTotal = this->CurrTotal + 1;
  return;
}

// ExpireResult @ 14b2b0630

void __thiscall
Metasound::OperatorPoolPrivate::FWindowedHitRate::ExpireResult
          (FWindowedHitRate *this,IntermediateResult *param_1)

{
  this->RunningHitCount = this->RunningHitCount - param_1->NumHits;
  this->RunningTotal = this->RunningTotal - param_1->Total;
  return;
}

// FirstUpdate @ 14b2b0c30

void __thiscall
Metasound::OperatorPoolPrivate::FWindowedHitRate::FirstUpdate(FWindowedHitRate *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->PreviousTimeCycles = (ulong64)local_res8[0];
  return;
}

// SetWindowLength @ 14b2b8560

void __thiscall
Metasound::OperatorPoolPrivate::FWindowedHitRate::SetWindowLength
          (FWindowedHitRate *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 != 0.0) {
    fVar1 = this->CurrTTLSeconds;
    this->CurrTTLSeconds = param_1;
    TickResults(this,fVar1 - param_1);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8479151279308799867>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                     ,0x85,"InNewLengthSeconds");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// TickResults @ 14b2b8a50

void __thiscall
Metasound::OperatorPoolPrivate::FWindowedHitRate::TickResults(FWindowedHitRate *this,float param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = (this->History).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11 * 0xc;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < (this->History).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->History).AllocatorInstance.Data;
      fVar2 = *(float *)(pFVar4 + lVar10 + 8);
      *(float *)(pFVar4 + lVar10 + 8) = fVar2 - param_1;
      if (fVar2 - param_1 < 0.0) {
        this->RunningHitCount = this->RunningHitCount - *(int *)(pFVar4 + lVar10);
        this->RunningTotal = this->RunningTotal - *(int *)(pFVar4 + lVar10 + 4);
        uVar7 = 0;
        if ((int)uVar11 < (this->History).ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->History).ArrayNum;
        pFVar4 = (this->History).AllocatorInstance.Data;
        iVar8 = iVar3 + ~uVar11;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + lVar10,pFVar4 + (longlong)(iVar3 - iVar8) * 0xc,(longlong)iVar8 * 0xc);
        }
        piVar1 = &(this->History).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)this,(this->History).ArrayNum,
                   &(this->History).ArrayMax);
      }
      lVar10 = lVar10 + -0xc;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return;
}

// Update @ 14b2ba400

void __thiscall Metasound::OperatorPoolPrivate::FWindowedHitRate::Update(FWindowedHitRate *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  double dVar9;
  float fVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  if (this->bIsFirstUpdate != false) {
    this->bIsFirstUpdate = false;
    QueryPerformanceCounter(&local_res8);
    this->PreviousTimeCycles = (ulong64)local_res8;
  }
  if (this->CurrTTLSeconds != MetasoundPoolHitRateWindowSecondsCVar) {
    if (MetasoundPoolHitRateWindowSecondsCVar == 0.0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8479151279308799867>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundOperatorCache.cpp"
                         ,0x85,"InNewLengthSeconds");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      fVar10 = this->CurrTTLSeconds - MetasoundPoolHitRateWindowSecondsCVar;
      this->CurrTTLSeconds = MetasoundPoolHitRateWindowSecondsCVar;
      TickResults(this,fVar10);
    }
  }
  uVar2 = this->CurrTotal;
  piVar1 = &(this->History).ArrayMax;
  uVar5 = *(undefined8 *)&this->CurrHitCount;
  this->RunningHitCount = this->RunningHitCount + this->CurrHitCount;
  fVar10 = this->CurrTTLSeconds;
  this->CurrHitCount = 0;
  this->CurrTotal = 0;
  this->RunningTotal = this->RunningTotal + uVar2;
  iVar8 = (this->History).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->History).ArrayNum = iVar8 + 1;
  pFVar3 = (this->History).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0xc) = uVar5;
  *(float *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = fVar10;
  QueryPerformanceCounter(&local_res10);
  dVar9 = (double)(local_res10.QuadPart - this->PreviousTimeCycles) *
          FGenericPlatformTime::SecondsPerCycle64;
  this->PreviousTimeCycles = (ulong64)local_res10;
  TickResults(this,(float)dVar9);
  if (this->RunningTotal != 0) {
    fVar10 = (float)this->RunningHitCount / (float)this->RunningTotal;
    dVar9 = (double)fVar10;
    if ((__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.Value != dVar9) &&
       (__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.Value = dVar9,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId ==
          (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterName,
                           TraceCounterType_Float,
                           __GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterFlags & 0xf
                          );
        LOCK();
        if (__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId ==
            (atomic<unsigned_int>)0x0) {
          __GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId._2_2_ = 0;
          __GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId._0_2_,
                 __GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.Value);
    }
    if (__CsvProfilerStat116 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("WindowedCacheHitRatio",_GCsvCategory_MetaSound_OperatorPool.Index);
      __CsvProfilerStat116 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("WindowedCacheHitRatio",_GCsvCategory_MetaSound_OperatorPool.Index,fVar10,Set);
  }
  return;
}

