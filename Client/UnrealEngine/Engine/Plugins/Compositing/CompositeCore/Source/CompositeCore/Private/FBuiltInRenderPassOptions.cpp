// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 1

// FBuiltInRenderPassOptions @ 14ea75c90

FBuiltInRenderPassOptions * __thiscall
UE::CompositeCore::FBuiltInRenderPassOptions::FBuiltInRenderPassOptions
          (FBuiltInRenderPassOptions *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FBuiltInRenderPassOptions *pFVar4;
  
  (this->ViewUserFlagsOverride).bIsSet = false;
  this->bEnableUnlitViewmode = true;
  pTVar2 = CVarCompositeCoreDebugDilationSize.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBuiltInRenderPassOptions *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  this->DilationSize = pTVar2->ShadowedValue[0];
  this->bOpacifyOutput = true;
  return this;
}

