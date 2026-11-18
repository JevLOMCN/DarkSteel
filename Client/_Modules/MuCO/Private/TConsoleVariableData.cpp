// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// GetShadowIndex @ 14ac24a00

uint __cdecl TConsoleVariableData<bool>::GetShadowIndex(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1) {
    bVar2 = IsInActualRenderingThread();
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6e9,"!IsInActualRenderingThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
  }
  else {
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        return 1;
      }
    }
  }
  return 0;
}

