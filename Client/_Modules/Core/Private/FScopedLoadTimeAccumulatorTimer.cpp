// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FScopedLoadTimeAccumulatorTimer @ 141987050

FScopedLoadTimeAccumulatorTimer * __thiscall
FScopedLoadTimeAccumulatorTimer::FScopedLoadTimeAccumulatorTimer
          (FScopedLoadTimeAccumulatorTimer *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLoadTimeTracker *pFVar5;
  FScopedLoadTimeAccumulatorTimer *pFVar6;
  TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
  *this_00;
  double *pdVar7;
  double dVar8;
  LARGE_INTEGER local_res8;
  
  pFVar5 = FLoadTimeTracker::Get();
  if (pFVar5->bAccumulating == false) {
    pdVar7 = &DummyTimer;
  }
  else {
    pFVar5 = FLoadTimeTracker::Get();
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\LoadTimeTracker.cpp"
                         ,0x2a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FScopedLoadTimeAccumulatorTimer *)(*pcVar2)();
        return pFVar6;
      }
    }
    FVar1 = *param_1;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    this_00 = (TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
               *)TMapBase<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
                 ::FindOrAddImpl<FName_const_&>
                           ((TMapBase<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
                             *)&pFVar5->AccumulatedTimeInfo,uVar4 + FVar1.Number,param_1);
    FVar1 = *param_2;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    pdVar7 = &TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
              ::FindOrAddImpl<FName_const_&>(this_00,uVar4 + FVar1.Number,param_2)->Time;
    ((FTimeAndCount *)pdVar7)->Count = ((FTimeAndCount *)pdVar7)->Count + 1;
  }
  QueryPerformanceCounter(&local_res8);
  dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(double **)&this->field_0x8 = pdVar7;
  *(double *)this = dVar8 + __real_4170000000000000;
  return this;
}

