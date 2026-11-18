// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 147940970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParallelAnimationEvaluationTask::DoTask
          (FParallelAnimationEvaluationTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2
          )

{
  TConsoleVariableData<float> *pTVar1;
  uint uVar2;
  bool bVar3;
  atomic<float> aVar4;
  USkeletalMeshComponent *this_00;
  longlong lVar5;
  FParallelAnimationEvaluationStats *pFVar6;
  atomic<float> aVar7;
  atomic<float> aVar8;
  atomic<float> aVar9;
  LARGE_INTEGER local_res8;
  FName local_38;
  byte local_30;
  
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  uVar2 = MXCSR;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    MXCSR = MXCSR | 0x8000;
    local_res8.s.LowPart = MXCSR;
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_38,(UObjectBaseUtility *)this_00);
    pTVar1 = CVarStallParallelAnimation.Ref;
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 1;
    }
    if (0.0 < pTVar1->ShadowedValue[lVar5]) {
      FWindowsPlatformProcess::Sleep(pTVar1->ShadowedValue[lVar5] * __real_3a83126f);
    }
    if (param_1 != GameThread) {
      GInitRunaway();
    }
    QueryPerformanceCounter(&local_res8);
    lVar5 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    USkeletalMeshComponent::ParallelAnimationEvaluation(this_00);
    QueryPerformanceCounter(&local_res8);
    aVar9 = (atomic<float>)
            (float)((double)(ulonglong)
                            (CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) - lVar5) *
                    FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
    pFVar6 = FParallelAnimationEvaluationStats::Get();
    aVar8 = pFVar6->TotalTime;
    do {
      LOCK();
      aVar7 = pFVar6->TotalTime;
      bVar3 = aVar8 == aVar7;
      if (bVar3) {
        pFVar6->TotalTime = (atomic<float>)((float)aVar8 + (float)aVar9);
        aVar7 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar7;
    } while (!bVar3);
    aVar8 = pFVar6->MinTime;
    do {
      aVar7 = aVar8;
      if ((float)aVar9 <= (float)aVar8) {
        aVar7 = aVar9;
      }
      LOCK();
      aVar4 = pFVar6->MinTime;
      bVar3 = aVar8 == aVar4;
      if (bVar3) {
        pFVar6->MinTime = aVar7;
        aVar4 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar4;
    } while (!bVar3);
    aVar8 = pFVar6->MaxTime;
    do {
      aVar7 = aVar8;
      if ((float)aVar8 <= (float)aVar9) {
        aVar7 = aVar9;
      }
      LOCK();
      aVar4 = pFVar6->MaxTime;
      bVar3 = aVar8 == aVar4;
      if (bVar3) {
        pFVar6->MaxTime = aVar7;
        aVar4 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar4;
    } while (!bVar3);
    LOCK();
    pFVar6->NumberOfTasks = (atomic<int>)((int)pFVar6->NumberOfTasks + 1);
    UNLOCK();
    if ((local_30 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_30 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_30 & 4) != 0) {
      FThreadStats::AddMessage(local_38,CycleScopeEnd);
    }
  }
  MXCSR = uVar2;
  return;
}

