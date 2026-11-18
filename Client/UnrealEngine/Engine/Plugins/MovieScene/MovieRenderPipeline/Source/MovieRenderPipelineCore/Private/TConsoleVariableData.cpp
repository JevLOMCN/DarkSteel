// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// GetValueOnGameThread @ 14dcd4fa0

float __thiscall
TConsoleVariableData<float>::GetValueOnGameThread(TConsoleVariableData<float> *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
  }
  return this->ShadowedValue[0];
}

