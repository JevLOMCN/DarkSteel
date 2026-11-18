// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// GetValueOnRenderThread @ 144779770

int __thiscall TConsoleVariableData<int>::GetValueOnRenderThread(TConsoleVariableData<int> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return this->ShadowedValue[1];
}

// GetValueOnRenderThread @ 144bcfa20

float __thiscall
TConsoleVariableData<float>::GetValueOnRenderThread(TConsoleVariableData<float> *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return this->ShadowedValue[1];
}

// GetValueOnAnyThread @ 1450dd4a0

int __thiscall
TConsoleVariableData<int>::GetValueOnAnyThread(TConsoleVariableData<int> *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1) {
    bVar2 = IsInActualRenderingThread();
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6e9,"!IsInActualRenderingThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  else {
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        return this->ShadowedValue[1];
      }
    }
  }
  return this->ShadowedValue[0];
}

// GetValueOnRenderThread @ 1450dd520

bool __thiscall TConsoleVariableData<bool>::GetValueOnRenderThread(TConsoleVariableData<bool> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->ShadowedValue[1];
}

// GetValueOnGameThread @ 14532e520

int __thiscall TConsoleVariableData<int>::GetValueOnGameThread(TConsoleVariableData<int> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
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
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return this->ShadowedValue[0];
}

// GetShadowIndex @ 145683d50

uint __cdecl TConsoleVariableData<int>::GetShadowIndex(bool param_1)

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

