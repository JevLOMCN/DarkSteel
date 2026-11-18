// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FState @ 145d8ee30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FState * __thiscall FRDGScopeState::FState::FState(FState *this,bool param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FState *pFVar5;
  ERDGScopeMode EVar6;
  
  this->bImmediate = param_1;
  this->Current = (FRDGScope *)0x0;
  this->ActiveBudget = (FBudget *)0x0;
  this->Mask = 0;
  this->bParallelExecute = param_2;
  iVar1 = RDGChannel->Enabled;
  bVar4 = FRDGBuilder::IsDumpingFrame();
  if ((!bVar4) && (GRHIGlobals.TriggerGPUProfile == false)) {
    bVar4 = UE::RHI::GPUProfiler::IsProfiling();
    pTVar3 = CVarRDGEvents.Ref;
    if (!bVar4) {
      bVar4 = IsInParallelRenderingThread();
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FState *)(*pcVar2)();
          return pFVar5;
        }
      }
      EVar6 = (ERDGScopeMode)pTVar3->ShadowedValue[1];
      if (((EVar6 == Disabled) || (EVar6 == TopLevelOnly)) || (EVar6 == AllEvents)) {
        if (-1 < iVar1) {
          EVar6 = AllEventsAndPassNames;
        }
      }
      else if (EVar6 != AllEventsAndPassNames) {
        this->ScopeMode = Disabled;
        return this;
      }
      this->ScopeMode = EVar6;
      return this;
    }
  }
  this->ScopeMode = AllEventsAndPassNames;
  return this;
}

