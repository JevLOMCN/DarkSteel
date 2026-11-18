// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// GetValueOnAnyThread @ 146450710

int __thiscall
TAutoConsoleVariable<int>::GetValueOnAnyThread(TAutoConsoleVariable<int> *this,bool param_1)

{
  TConsoleVariableData<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pTVar1 = this->Ref;
  if (param_1) {
    bVar3 = IsInActualRenderingThread();
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6e9,"!IsInActualRenderingThread()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
  }
  else {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        return pTVar1->ShadowedValue[1];
      }
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetValueOnAnyThread @ 146450790

bool __thiscall
TAutoConsoleVariable<bool>::GetValueOnAnyThread(TAutoConsoleVariable<bool> *this,bool param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = this->Ref;
  if (param_1) {
    bVar3 = IsInActualRenderingThread();
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6e9,"!IsInActualRenderingThread()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  else {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        return pTVar1->ShadowedValue[1];
      }
    }
  }
  return pTVar1->ShadowedValue[0];
}

