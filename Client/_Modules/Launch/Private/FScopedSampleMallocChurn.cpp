// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 3

// FScopedSampleMallocChurn @ 148d9c1e0

FScopedSampleMallocChurn * __thiscall
FScopedSampleMallocChurn::FScopedSampleMallocChurn(FScopedSampleMallocChurn *this)

{
  TFunction<void___cdecl(int)> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  FScopedSampleMallocChurn *pFVar6;
  
  pTVar4 = CVarLogGameThreadMallocChurn.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FScopedSampleMallocChurn *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  this->bEnabled = 0 < pTVar4->ShadowedValue[0];
  pTVar4 = CVarLogGameThreadMallocChurn_SampleFrequency.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FScopedSampleMallocChurn *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  this->CountDown = pTVar4->ShadowedValue[0];
  pTVar1 = &this->Hook;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Hook).field_0x28 = 0;
  *(undefined ***)&(this->Hook).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FScopedSampleMallocChurn__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar2 = &(this->Hook).field_0x18;
  *(FScopedSampleMallocChurn **)puVar2 = this;
  if (puVar2 != (undefined1 *)0x0) {
    *(code **)pTVar1 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,void,int>
         ::Call;
  }
  if (this->bEnabled == false) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x150d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FScopedSampleMallocChurn *)(*pcVar3)();
        return pFVar6;
      }
    }
    FStackTracker::ToggleTracking(&GGameThreadMallocChurnTracker,false,true);
    if (DumpFrame != 0) {
      DumpFrame = 0;
      FStackTracker::ResetTracking(&GGameThreadMallocChurnTracker);
    }
  }
  else {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x1501,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FScopedSampleMallocChurn *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (GGameThreadMallocHook != (TFunction<void___cdecl(int)> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GGameThreadMallocHook",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x1502,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FScopedSampleMallocChurn *)(*pcVar3)();
        return pFVar6;
      }
    }
    pTVar4 = CVarLogGameThreadMallocChurn_PrintFrequency.Ref;
    if (DumpFrame == 0) {
      bVar5 = IsInParallelGameThread();
      if (!bVar5) {
        bVar5 = IsInGameThread();
        if (!bVar5) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FScopedSampleMallocChurn *)(*pcVar3)();
            return pFVar6;
          }
        }
      }
      DumpFrame = (longlong)pTVar4->ShadowedValue[0] + GFrameCounter;
      FStackTracker::ResetTracking(&GGameThreadMallocChurnTracker);
    }
    FStackTracker::ToggleTracking(&GGameThreadMallocChurnTracker,true,true);
    GGameThreadMallocHook = pTVar1;
  }
  return this;
}

// ~FScopedSampleMallocChurn @ 148d9cd20

void __thiscall FScopedSampleMallocChurn::~FScopedSampleMallocChurn(FScopedSampleMallocChurn *this)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  FOutputDeviceRedirector *pFVar8;
  longlong *plVar9;
  
  if (this->bEnabled != false) {
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x151a,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GGameThreadMallocHook != &this->Hook) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GGameThreadMallocHook == &Hook",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x151b,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    GGameThreadMallocHook = (TFunction<void___cdecl(int)> *)0x0;
    FStackTracker::ToggleTracking(&GGameThreadMallocChurnTracker,false,true);
    if (DumpFrame == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DumpFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x151e,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar5 = CVarLogGameThreadMallocChurn_PrintFrequency.Ref;
    if (DumpFrame < GFrameCounter) {
      bVar7 = IsInParallelGameThread();
      if (!bVar7) {
        bVar7 = IsInGameThread();
        if (!bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      DumpFrame = (longlong)pTVar5->ShadowedValue[0] + GFrameCounter;
      pFVar8 = FOutputDeviceRedirector::Get();
      pTVar5 = CVarLogGameThreadMallocChurn_SampleFrequency.Ref;
      bVar7 = IsInParallelGameThread();
      if (!bVar7) {
        bVar7 = IsInGameThread();
        if (!bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      pTVar6 = CVarLogGameThreadMallocChurn_PrintFrequency.Ref;
      iVar1 = pTVar5->ShadowedValue[0];
      bVar7 = IsInParallelGameThread();
      if (!bVar7) {
        bVar7 = IsInGameThread();
        if (!bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      pTVar5 = CVarLogGameThreadMallocChurn_Threshhold.Ref;
      iVar2 = pTVar6->ShadowedValue[0];
      bVar7 = IsInParallelGameThread();
      if (!bVar7) {
        bVar7 = IsInGameThread();
        if (!bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      FStackTracker::DumpStackTraces
                (&GGameThreadMallocChurnTracker,pTVar5->ShadowedValue[0],(FOutputDevice *)pFVar8,
                 (float)iVar1 / (float)iVar2);
      FStackTracker::ResetTracking(&GGameThreadMallocChurnTracker);
    }
  }
  if (*(longlong *)&this->Hook != 0) {
    plVar3 = *(longlong **)&(this->Hook).field_0x28;
    plVar9 = (longlong *)&(this->Hook).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d9cf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x10))();
    return;
  }
  return;
}

// operator() @ 148d9d5e0

void __thiscall
`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)this;
  piVar1 = (int *)(lVar4 + 4);
  *piVar1 = *piVar1 + -1;
  pTVar6 = CVarLogGameThreadMallocChurn_SampleFrequency.Ref;
  if (*(int *)(lVar4 + 4) < 1) {
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    *(int *)(*(longlong *)this + 4) = pTVar6->ShadowedValue[0];
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Launch\\Private\\LaunchEngineLoop.cpp"
                         ,0x1528,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar6 = CVarLogGameThreadMallocChurn_RemoveAliases.Ref;
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    pTVar7 = CVarLogGameThreadMallocChurn_StackLen.Ref;
    iVar2 = pTVar6->ShadowedValue[0];
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    pTVar6 = CVarLogGameThreadMallocChurn_StackIgnore.Ref;
    iVar3 = pTVar7->ShadowedValue[0];
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    FStackTracker::CaptureStackTrace
              (&FScopedSampleMallocChurn::GGameThreadMallocChurnTracker,pTVar6->ShadowedValue[0],
               (void *)0x0,iVar3,0 < iVar2);
  }
  return;
}

