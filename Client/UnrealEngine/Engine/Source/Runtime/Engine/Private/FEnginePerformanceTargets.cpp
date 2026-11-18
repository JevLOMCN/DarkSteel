// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GetHitchFrameTimeThresholdMS @ 1481fabb0

float __cdecl FEnginePerformanceTargets::GetHitchFrameTimeThresholdMS(void)

{
  return GHitchThresholdMS;
}

// GetHitchToNonHitchRatio @ 1481fabc0

float __cdecl FEnginePerformanceTargets::GetHitchToNonHitchRatio(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  pTVar2 = GTargetFrameTimeThresholdCVar.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
    }
  }
  pTVar3 = GHitchVersusNonHitchMinimumRatioCVar.Ref;
  fVar5 = GHitchThresholdMS / pTVar2->ShadowedValue[0];
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
    }
  }
  fVar6 = pTVar3->ShadowedValue[0];
  if (fVar5 <= pTVar3->ShadowedValue[0]) {
    fVar6 = fVar5;
  }
  if (fVar6 <= __real_3f800000) {
    fVar6 = __real_3f800000;
  }
  return fVar6;
}

// GetMinTimeBetweenHitchesMS @ 1481fc730

float __cdecl FEnginePerformanceTargets::GetMinTimeBetweenHitchesMS(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  
  pTVar2 = GHitchDeadTimeWindowCVar.Ref;
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
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// GetTargetFrameTimeThresholdMS @ 1481ff9f0

float __cdecl FEnginePerformanceTargets::GetTargetFrameTimeThresholdMS(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  
  pTVar2 = GTargetFrameTimeThresholdCVar.Ref;
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
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// GetUnacceptableFrameTimeThresholdMS @ 1481ffc20

float __cdecl FEnginePerformanceTargets::GetUnacceptableFrameTimeThresholdMS(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  
  pTVar2 = GUnacceptableFrameTimeThresholdCVar.Ref;
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
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

