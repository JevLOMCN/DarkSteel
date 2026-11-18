// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 1

// FromCommaDelimitedString @ 148c023e0

void __thiscall
FAutomationPerformanceSnapshot::FromCommaDelimitedString
          (FAutomationPerformanceSnapshot *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_18,L",",false);
  if (local_18.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0;
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 8) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange(&this->Changelist,*(wchar_t **)local_18.AllocatorInstance.Data,iVar4);
  if (local_18.ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x18) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x18) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->BuildConfiguration,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x10),iVar4);
  if (local_18.ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x28) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x28) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange(&this->MapName,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x20),iVar4)
  ;
  if (local_18.ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x38) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x38) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->SequenceName,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x30),iVar4);
  if (local_18.ArrayNum < 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0;
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x48) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x48) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->AverageFPS,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x40),iVar4);
  if (local_18.ArrayNum < 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x58) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x58) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->AverageFrameTime,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x50),iVar4);
  if (local_18.ArrayNum < 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x68) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x68) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->AverageGameThreadTime,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x60),
             iVar4);
  if (local_18.ArrayNum < 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x78) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x78) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->AverageRenderThreadTime,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x70),
             iVar4);
  if (local_18.ArrayNum < 9) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x88) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x88) == 0) {
    iVar4 = iVar3;
  }
  ::FString::AssignRange
            (&this->AverageGPUTime,*(wchar_t **)(local_18.AllocatorInstance.Data + 0x80),iVar4);
  if (local_18.ArrayNum < 10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x98) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0x98) == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&this->PercentOfFramesAtLeast30FPS,
             *(wchar_t **)(local_18.AllocatorInstance.Data + 0x90),iVar4);
  if (local_18.ArrayNum < 0xb) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0xa8) + -1;
  if (*(int *)(local_18.AllocatorInstance.Data + 0xa8) == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&this->PercentOfFramesAtLeast60FPS,
             *(wchar_t **)(local_18.AllocatorInstance.Data + 0xa0),iVar4);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

