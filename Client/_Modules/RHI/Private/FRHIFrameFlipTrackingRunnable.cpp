// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 6

// FRHIFrameFlipTrackingRunnable @ 145cd1080

FRHIFrameFlipTrackingRunnable * __thiscall
FRHIFrameFlipTrackingRunnable::FRHIFrameFlipTrackingRunnable(FRHIFrameFlipTrackingRunnable *this)

{
  this->_padding_ = (longlong)&___7FRHIFrameFlipTrackingRunnable__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  (this->FramePairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramePairs).ArrayNum = 0;
  (this->FramePairs).ArrayMax = 0;
  return this;
}

// Initialize @ 145cdf710

void __cdecl FRHIFrameFlipTrackingRunnable::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FGenericPlatformMisc::UseRenderThread();
  if (bVar2) {
    if (Thread != (FRunnableThread *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                         ,0x1d7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bInitialized = true;
    bRun = true;
    Thread = FRunnableThread::Create
                       ((FRunnable *)&Singleton,L"RHIFrameFlipThread",0,TPri_AboveNormal,
                        0xffffffffffffffff,None);
  }
  return;
}

// Run @ 145cf0f70

uint __thiscall FRHIFrameFlipTrackingRunnable::Run(FRHIFrameFlipTrackingRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FRHIFrameFlipTrackingRunnable::FFramePair,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulong64 uVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0 [20];
  
  uVar17 = 0;
  QueryPerformanceCounter(&local_res18);
  dVar4 = __real_4170000000000000;
  bVar10 = true;
  dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  bVar9 = FGenericPlatformMisc::UseRenderThread();
  dVar6 = __real_3ff051eb851eb852;
  dVar5 = __real_bff0000000000000;
  dVar3 = __real_408f400000000000;
  if ((bVar9) && (bRun != false)) {
    lpCriticalSection = &this->CS;
    do {
      pTVar8 = CVarRHISyncInterval.Ref;
      bVar9 = IsInParallelGameThread();
      if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
        lVar15 = 0;
      }
      else {
        lVar15 = 4;
      }
      iVar12 = *(int *)((longlong)pTVar8->ShadowedValue + lVar15);
      iVar16 = 0;
      if (0 < iVar12) {
        iVar16 = iVar12;
      }
      iVar12 = FWindowsPlatformMisc::GetMaxRefreshRate();
      dVar20 = ((double)iVar16 / (double)iVar12) * dVar6 + dVar2;
      QueryPerformanceCounter(&local_res20);
      dVar19 = dVar5;
      if (((iVar16 != 0) && (!bVar10)) &&
         (dVar19 = dVar20 - ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                            dVar4), dVar19 <= 0.0)) {
        dVar19 = 0.0;
      }
      if ((FRHIFrameOffsetThread::WaitEvent == (FEvent *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton.WaitEvent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                             ,299,L""), bVar9)) {
        pcVar1 = (code *)swi(3);
        uVar13 = (*pcVar1)();
        return uVar13;
      }
      if (dVar19 < 0.0) {
        lVar15 = 0xffffffff;
      }
      else {
        lVar15 = (longlong)(dVar19 * dVar3);
      }
      (**(code **)(FRHIFrameOffsetThread::WaitEvent->_padding_ + 0x20))
                (FRHIFrameOffsetThread::WaitEvent,lVar15,0);
      EnterCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
      dVar19 = FRHIFrameOffsetThread::Singleton.LastFlipFrame.VBlankTimeInSeconds;
      uVar7 = FRHIFrameOffsetThread::Singleton.LastFlipFrame.PresentIndex;
      LeaveCriticalSection((LPCRITICAL_SECTION)&FRHIFrameOffsetThread::Singleton.CS);
      QueryPerformanceCounter(&local_e8);
      pTVar8 = CVarRHISyncAllowEarlyKick.Ref;
      dVar18 = (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      if (uVar17 < uVar7) {
        bVar10 = IsInParallelGameThread();
        uVar17 = uVar7;
        dVar2 = dVar19;
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          bVar10 = pTVar8->ShadowedValue[0] == 0;
        }
        else {
          bVar10 = pTVar8->ShadowedValue[1] == 0;
        }
      }
      else if (((iVar16 != 0) && (!bVar10)) && (dVar20 < dVar18)) {
        uVar17 = uVar7 + 1;
        dVar2 = dVar18;
      }
      bVar9 = false;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar13 = (this->FramePairs).ArrayNum - 1;
      if (-1 < (int)uVar13) {
        this_00 = &this->FramePairs;
        lVar15 = (longlong)(int)uVar13 << 4;
        do {
          uVar14 = 0;
          if ((int)uVar13 < (this->FramePairs).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar13 = (*pcVar1)();
            return uVar13;
          }
          if (*(ulonglong *)((this_00->AllocatorInstance).Data + lVar15) <= uVar17) {
            uVar14 = 0;
            if ((int)uVar13 < (this->FramePairs).ArrayNum) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar1 = (code *)swi(3);
              uVar13 = (*pcVar1)();
              return uVar13;
            }
            TArray<FRHIFrameFlipTrackingRunnable::FFramePair,TSizedDefaultAllocator<32>_>::
            RemoveAtSwapImpl(this_00,uVar13);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_00->AllocatorInstance,(this->FramePairs).ArrayNum,
                       &(this->FramePairs).ArrayMax);
            bVar9 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
        if (bVar9) {
          QueryPerformanceCounter(local_e0);
          dVar19 = (double)local_e0[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
          GRHIFrameTimeMS = (float)((dVar19 - GLastRHITimeInSeconds) * dVar3);
          GLastRHITimeInSeconds = dVar19;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    } while (bRun != false);
  }
  return 0;
}

// Shutdown @ 145cf26f0

void __cdecl FRHIFrameFlipTrackingRunnable::Shutdown(void)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformMisc::UseRenderThread();
  if ((bVar1) && (bInitialized != false)) {
    bInitialized = false;
    if (Thread != (FRunnableThread *)0x0) {
      (**(code **)(Thread->_padding_ + 0x18))(Thread,1);
      if (Thread != (FRunnableThread *)0x0) {
        (**(code **)(Thread->_padding_ + 0x30))(Thread,1);
      }
      Thread = (FRunnableThread *)0x0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&Singleton.CS);
    DestructItems<FRHIFrameFlipTrackingRunnable::FFramePair,int>
              ((FFramePair *)Singleton.FramePairs.AllocatorInstance.Data,
               Singleton.FramePairs.ArrayNum);
    Singleton.FramePairs.ArrayNum = 0;
    if (Singleton.FramePairs.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&Singleton.FramePairs.AllocatorInstance,0,&Singleton.FramePairs.ArrayMax);
    }
    FRHIFrameOffsetThread::Shutdown();
                    /* WARNING: Could not recover jumptable at 0x000145cf27ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&Singleton.CS);
    return;
  }
  return;
}

// Stop @ 145cf2a40

void __thiscall FRHIFrameFlipTrackingRunnable::Stop(FRHIFrameFlipTrackingRunnable *this)

{
  bRun = false;
                    /* WARNING: Could not recover jumptable at 0x000145cf2a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(FRHIFrameOffsetThread::WaitEvent->_padding_ + 0x10))();
  return;
}

// TriggerTaskEventOnFlip @ 145cf2bc0

void __cdecl
FRHIFrameFlipTrackingRunnable::TriggerTaskEventOnFlip(ulong64 param_1,FTaskEvent param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  longlong lVar7;
  
  bVar6 = FGenericPlatformMisc::UseRenderThread();
  if (bVar6) {
    EnterCriticalSection((LPCRITICAL_SECTION)&Singleton.CS);
    if (Thread == (FRunnableThread *)0x0) {
      if (CpuChannel->Enabled < 0) {
        UE::Tasks::FTaskEvent::Trigger((FTaskEvent *)param_2);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId528,"SyncTrigger_Swapchain",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                   ,0x210);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId528);
        UE::Tasks::FTaskEvent::Trigger((FTaskEvent *)param_2);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      if (Singleton.FramePairs.ArrayNum == Singleton.FramePairs.ArrayMax) {
        Singleton.FramePairs.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&Singleton.FramePairs.AllocatorInstance,&Singleton.FramePairs.ArrayMax
                       );
      }
      FVar5.Data = Singleton.FramePairs.AllocatorInstance.Data;
      lVar7 = (longlong)Singleton.FramePairs.ArrayNum;
      Singleton.FramePairs.ArrayNum = Singleton.FramePairs.ArrayNum + 1;
      *(ulong64 *)(Singleton.FramePairs.AllocatorInstance.Data + lVar7 * 0x10) = param_1;
      *(undefined8 *)(FVar5.Data + lVar7 * 0x10 + 8) = 0;
      lVar3 = *(longlong *)param_2;
      *(longlong *)(FVar5.Data + lVar7 * 0x10 + 8) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
        UNLOCK();
      }
      (**(code **)(FRHIFrameOffsetThread::WaitEvent->_padding_ + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&Singleton.CS);
  }
  puVar4 = *(undefined8 **)param_2;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

