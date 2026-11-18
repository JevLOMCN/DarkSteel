// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// Run @ 145ccd7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FRHIFrameOffsetThread::Run(FRHIFrameOffsetThread *this)

{
  TArray<FRHIFrameOffsetThread::FFrameDebugInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TConsoleVariableData<int> *pTVar12;
  TConsoleVariableData<float> *pTVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  FRHIFrameOffsetThread *pFVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStackY_1138 [32];
  LARGE_INTEGER local_10f8;
  LPCRITICAL_SECTION local_10f0;
  FRHIFrameOffsetThread *local_10e8;
  ulong64 local_10e0;
  double dStack_10d8;
  double local_10d0;
  ulong64 uStack_10c8;
  uchar local_10b8 [4];
  undefined8 local_10b4;
  undefined8 local_10ac;
  double local_10a4;
  ulonglong local_b8;
  
  dVar11 = __real_3f50624dd2f1a9fc;
  dVar10 = __real_43e0000000000000;
  dVar9 = __real_408f400000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1138;
  if (bRun) {
    uVar24 = (undefined4)__real_bff0000000000000;
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CS;
    local_10f0 = lpCriticalSection;
    local_10e8 = this;
    do {
      (**(code **)(GDynamicRHI->_padding_ + 0x458))(GDynamicRHI,&local_10e0,uVar24);
      pTVar12 = CVarRHISyncInterval.Ref;
      bVar14 = IsInParallelGameThread();
      if ((bVar14) || (bVar14 = IsInGameThread(), bVar14)) {
        lVar19 = 0;
      }
      else {
        lVar19 = 4;
      }
      iVar16 = *(int *)((longlong)pTVar12->ShadowedValue + lVar19);
      iVar15 = 0;
      if (0 < iVar16) {
        iVar15 = iVar16;
      }
      iVar16 = FWindowsPlatformMisc::GetMaxRefreshRate();
      pTVar13 = CVarRHISyncSlackMS.Ref;
      dVar23 = (double)iVar15 / (double)iVar16;
      bVar14 = IsInParallelGameThread();
      if ((bVar14) || (bVar14 = IsInGameThread(), bVar14)) {
        lVar19 = 0;
      }
      else {
        lVar19 = 4;
      }
      dVar7 = local_10d0 + dVar23;
      dVar8 = (double)*(float *)((longlong)pTVar13->ShadowedValue + lVar19) * dVar11;
      if (dVar23 <= dVar8) {
        dVar8 = dVar23;
      }
      QueryPerformanceCounter(&local_10f8);
      dVar7 = (dVar7 - dVar8) -
              (double)(ulonglong)local_10f8.QuadPart * FGenericPlatformTime::SecondsPerCycle64;
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      FWindowsPlatformProcess::Sleep((float)dVar7);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      iVar16 = (this->FrameDebugInfos).ArrayNum;
      (this->LastFlipFrame).PresentIndex = local_10e0;
      (this->LastFlipFrame).FlipTimeInSeconds = dStack_10d8;
      (this->LastFlipFrame).VBlankTimeInSeconds = local_10d0;
      (this->LastFlipFrame).VBlankTimeInCycles = uStack_10c8;
      (this->LastFlipFrame).PresentIndex = (this->LastFlipFrame).PresentIndex + 1;
      uVar22 = iVar16 - 1;
      (this->LastFlipFrame).FlipTimeInSeconds =
           (dVar23 + (this->LastFlipFrame).FlipTimeInSeconds) - dVar8;
      (this->LastFlipFrame).VBlankTimeInSeconds =
           (dVar23 + (this->LastFlipFrame).VBlankTimeInSeconds) - dVar8;
      pFVar20 = this;
      if (-1 < (int)uVar22) {
        pTVar1 = &this->FrameDebugInfos;
        lVar19 = (longlong)(int)uVar22 * 0x18;
        do {
          uVar21 = ~uVar22 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar22 < (this->FrameDebugInfos).ArrayNum) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            uVar22 = (*pcVar6)();
            return uVar22;
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (local_10e0 == *(ulong64 *)(pFVar3 + lVar19)) {
            lVar18 = 0;
            dVar23 = local_10d0 / FGenericPlatformTime::SecondsPerCycle64;
            if ((dVar10 <= dVar23) && (dVar23 = dVar23 - dVar10, dVar23 < dVar10)) {
              lVar18 = -0x8000000000000000;
            }
            GInputLatencyTime = ((longlong)dVar23 + lVar18) - *(longlong *)(pFVar3 + lVar19 + 0x10);
            if ((GVsyncInformationInsights != false) && (-1 < BookmarkChannel->Enabled)) {
              if (`public:_virtual_unsigned_int___cdecl_FRHIFrameOffsetThread::Run(void)___ptr64'::
                  __l16::__BookmarkPoint262 == false) {
                FMiscTrace::OutputBookmarkSpec
                          (&`public:_virtual_unsigned_int___cdecl_FRHIFrameOffsetThread::Run(void)___ptr64'
                            ::__l16::__BookmarkPoint262,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIUtilities.cpp"
                           ,0x106,L"Vsync P:%llu F:%llu Lat:%.2f");
                `public:_virtual_unsigned_int___cdecl_FRHIFrameOffsetThread::Run(void)___ptr64'::
                __l16::__BookmarkPoint262 = true;
              }
              dVar7 = (double)GInputLatencyTime * FGenericPlatformTime::SecondsPerCycle64;
              uVar4 = *(undefined8 *)(pFVar3 + lVar19 + 8);
              uVar5 = *(undefined8 *)(pFVar3 + lVar19);
              uVar17 = CallstackTrace_GetCurrentId();
              local_10b8[0] = '\x03';
              local_10b8[1] = 'H';
              local_10b8[2] = 'H';
              local_10b8[3] = 0x88;
              local_10b4 = uVar5;
              local_10ac = uVar4;
              local_10a4 = dVar7 * dVar9;
              FMiscTrace::OutputBookmarkInternalCycles
                        ((longlong)dVar23 + lVar18,
                         &`public:_virtual_unsigned_int___cdecl_FRHIFrameOffsetThread::Run(void)___ptr64'
                          ::__l16::__BookmarkPoint262,uVar17,0x1c,local_10b8);
            }
          }
          if (*(ulonglong *)(pFVar3 + lVar19) <= local_10e0) {
            uVar17 = 0;
            if ((int)uVar22 < (this->FrameDebugInfos).ArrayNum) {
              uVar17 = uVar21;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return uVar22;
            }
            iVar15 = (this->FrameDebugInfos).ArrayNum;
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            iVar16 = iVar15 + ~uVar22;
            if (1 < iVar16) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              memmove(pFVar3 + lVar19,pFVar3 + (longlong)(iVar15 - iVar16) * 0x18,
                      (longlong)iVar16 * 0x18);
            }
            piVar2 = &(this->FrameDebugInfos).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&pTVar1->AllocatorInstance,(this->FrameDebugInfos).ArrayNum,
                       &(this->FrameDebugInfos).ArrayMax);
          }
          lVar19 = lVar19 + -0x18;
          uVar22 = uVar22 - 1;
          lpCriticalSection = local_10f0;
          pFVar20 = local_10e8;
        } while (-1 < (int)uVar22);
      }
      LeaveCriticalSection(lpCriticalSection);
      if (WaitEvent != (FEvent *)0x0) {
        (**(code **)(WaitEvent->_padding_ + 0x10))();
      }
      this = pFVar20;
    } while (bRun != false);
  }
  return 0;
}

// Stop @ 145ccdcf0

void __thiscall FRHIFrameOffsetThread::Stop(FRHIFrameOffsetThread *this)

{
  bRun = false;
                    /* WARNING: Could not recover jumptable at 0x000145ccdd01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x460))();
  return;
}

// Shutdown @ 145cf27d0

void __cdecl FRHIFrameOffsetThread::Shutdown(void)

{
  if (bInitialized) {
    bInitialized = false;
    if (WaitEvent != (FEvent *)0x0) {
      FGenericPlatformProcess::ReturnSynchEventToPool(WaitEvent);
      WaitEvent = (FEvent *)0x0;
    }
    if (Thread != (FRunnableThread *)0x0) {
      (**(code **)(Thread->_padding_ + 0x18))(Thread,1);
      if (Thread != (FRunnableThread *)0x0) {
        (**(code **)(Thread->_padding_ + 0x30))(Thread,1);
      }
      Thread = (FRunnableThread *)0x0;
    }
  }
  return;
}

