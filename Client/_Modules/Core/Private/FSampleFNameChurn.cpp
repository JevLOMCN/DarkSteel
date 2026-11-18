// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// NameCreationHook @ 141a8baa0

void __thiscall FSampleFNameChurn::NameCreationHook(FSampleFNameChurn *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  FOutputDeviceRedirector *pFVar7;
  
  pTVar4 = CVarLogGameThreadFNameChurn.Ref;
  bVar6 = IsInParallelGameThread();
  if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = pTVar4->ShadowedValue[0];
  if (0 < iVar1 == this->bEnabled) {
    if (this->bEnabled != false) {
      bVar6 = IsInGameThread();
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x1646,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->DumpFrame == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DumpFrame",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x1647,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CountDown = this->CountDown + -1;
      pTVar4 = CVarLogGameThreadFNameChurn_SampleFrequency.Ref;
      if (this->CountDown < 1) {
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this->CountDown = pTVar4->ShadowedValue[0];
        bVar6 = IsInGameThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                               ,0x1656,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar4 = CVarLogGameThreadFNameChurn_RemoveAliases.Ref;
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar5 = CVarLogGameThreadFNameChurn_StackLen.Ref;
        iVar1 = pTVar4->ShadowedValue[0];
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar4 = CVarLogGameThreadFNameChurn_StackIgnore.Ref;
        iVar2 = pTVar5->ShadowedValue[0];
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FStackTracker::CaptureStackTrace
                  (&this->GGameThreadFNameChurnTracker,pTVar4->ShadowedValue[0],(void *)0x0,iVar2,
                   0 < iVar1);
        pTVar4 = CVarLogGameThreadFNameChurn_PrintFrequency.Ref;
        if (this->DumpFrame < GFrameCounter) {
          bVar6 = IsInParallelGameThread();
          if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007945>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this->DumpFrame = (longlong)pTVar4->ShadowedValue[0] + GFrameCounter;
          pFVar7 = FOutputDeviceRedirector::Get();
          pTVar4 = CVarLogGameThreadFNameChurn_SampleFrequency.Ref;
          bVar6 = IsInParallelGameThread();
          if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007945>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar5 = CVarLogGameThreadFNameChurn_PrintFrequency.Ref;
          iVar1 = pTVar4->ShadowedValue[0];
          bVar6 = IsInParallelGameThread();
          if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007945>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar4 = CVarLogGameThreadFNameChurn_Threshhold.Ref;
          iVar2 = pTVar5->ShadowedValue[0];
          bVar6 = IsInParallelGameThread();
          if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007945>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FStackTracker::DumpStackTraces
                    (&this->GGameThreadFNameChurnTracker,pTVar4->ShadowedValue[0],
                     (FOutputDevice *)pFVar7,(float)iVar1 / (float)iVar2);
          FStackTracker::ResetTracking(&this->GGameThreadFNameChurnTracker);
        }
      }
    }
  }
  else {
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0x1634,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->bEnabled = 0 < iVar1;
    pTVar4 = CVarLogGameThreadFNameChurn_SampleFrequency.Ref;
    if (iVar1 < 1) {
      FStackTracker::ToggleTracking(&this->GGameThreadFNameChurnTracker,false,true);
      this->DumpFrame = 0;
      FStackTracker::ResetTracking(&this->GGameThreadFNameChurnTracker);
    }
    else {
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CountDown = pTVar4->ShadowedValue[0];
      pTVar4 = CVarLogGameThreadFNameChurn_PrintFrequency.Ref;
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->DumpFrame = (longlong)pTVar4->ShadowedValue[0] + GFrameCounter;
      FStackTracker::ResetTracking(&this->GGameThreadFNameChurnTracker);
      FStackTracker::ToggleTracking(&this->GGameThreadFNameChurnTracker,true,true);
    }
  }
  return;
}

