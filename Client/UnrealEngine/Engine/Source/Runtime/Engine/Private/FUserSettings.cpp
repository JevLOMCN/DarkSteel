// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// PullEditorRenderingSettings @ 147e760d0

void __thiscall
FStaticResolutionFractionHeuristic::FUserSettings::PullEditorRenderingSettings
          (FUserSettings *this,EViewStatusForScreenPercentage param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                     ,0x13d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PullEditorRenderingSettings @ 147e76110

void __thiscall
FStaticResolutionFractionHeuristic::FUserSettings::PullEditorRenderingSettings
          (FUserSettings *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2) || (param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0x13d,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0x13d,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// PullRunTimeRenderingSettings @ 147e76170

void __thiscall
FStaticResolutionFractionHeuristic::FUserSettings::PullRunTimeRenderingSettings
          (FUserSettings *this,EViewStatusForScreenPercentage param_1)

{
  code *pcVar1;
  float fVar2;
  TConsoleVariableData<float> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  EScreenPercentageMode EVar9;
  EScreenPercentageMode EVar10;
  TConsoleVariableData<int> *pTVar11;
  float fVar12;
  
  pTVar3 = CVarScreenPercentage.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar7 = CVarScreenPercentageMinResolution.Ref;
  fVar2 = __real_3c23d70a;
  fVar12 = pTVar3->ShadowedValue[0] * __real_3c23d70a;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->MinRenderingResolution = pTVar7->ShadowedValue[0];
  pTVar3 = CVarScreenPercentageMaxResolution.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->MaxRenderingResolution = pTVar3->ShadowedValue[0];
  pTVar3 = CVarScreenPercentageDefault.Ref;
  if (fVar12 <= 0.0) {
    bVar8 = IsInParallelGameThread();
    if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar12 = pTVar3->ShadowedValue[0];
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    this->GlobalResolutionFraction = fVar12 * fVar2;
    pTVar6 = CVarScreenPercentageDefaultPathTracerMode.Ref;
    pTVar5 = CVarScreenPercentageDefaultVRMode.Ref;
    pTVar4 = CVarScreenPercentageDefaultMobileMode.Ref;
    pTVar11 = CVarScreenPercentageDefaultDesktopMode.Ref;
    if (param_1 == PathTracer) {
      bVar8 = IsInParallelGameThread();
      pTVar11 = pTVar6;
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (param_1 == VR) {
      bVar8 = IsInParallelGameThread();
      pTVar11 = pTVar5;
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (param_1 == Mobile) {
      bVar8 = IsInParallelGameThread();
      pTVar11 = pTVar4;
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (param_1 != Desktop) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                           ,0xff,L"");
        if (!bVar8) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar8 = IsInParallelGameThread();
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar10 = BasedOnDPIScale;
    if (pTVar11->ShadowedValue[0] < 2) {
      EVar10 = pTVar11->ShadowedValue[0];
    }
    EVar9 = Manual;
    if (0 < (int)EVar10) {
      EVar9 = EVar10;
    }
    this->Mode = EVar9;
  }
  else {
    this->GlobalResolutionFraction = fVar12;
    this->Mode = Manual;
    pTVar3 = CVarAutoPixelCountMultiplier.Ref;
    bVar8 = IsInParallelGameThread();
    if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->AutoPixelCountMultiplier = pTVar3->ShadowedValue[0];
  }
  return;
}

// PullRunTimeRenderingSettings @ 147e76500

void __thiscall
FStaticResolutionFractionHeuristic::FUserSettings::PullRunTimeRenderingSettings(FUserSettings *this)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  
  this->Mode = Manual;
  pTVar2 = CVarScreenPercentage.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this->GlobalResolutionFraction = pTVar2->ShadowedValue[0] * __real_3c23d70a;
  pTVar2 = CVarScreenPercentageMinResolution.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this->MinRenderingResolution = pTVar2->ShadowedValue[0];
  pTVar2 = CVarScreenPercentageMaxResolution.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this->MaxRenderingResolution = pTVar2->ShadowedValue[0];
  pTVar2 = CVarAutoPixelCountMultiplier.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this->AutoPixelCountMultiplier = pTVar2->ShadowedValue[0];
  if (this->GlobalResolutionFraction <= 0.0) {
    this->GlobalResolutionFraction = 1.0;
    this->Mode = Manual;
  }
  return;
}

