// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Add @ 14844c950

void __thiscall Nanite::FHierarchyDepthManager::Add(FHierarchyDepthManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((int)param_1 < (this->DepthHistogram).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->DepthHistogram).AllocatorInstance.Data + (longlong)(int)param_1 * 4;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  return;
}

// Remove @ 148484ba0

void __thiscall Nanite::FHierarchyDepthManager::Remove(FHierarchyDepthManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((int)param_1 < (this->DepthHistogram).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->DepthHistogram).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(int)param_1 * 4;
  if (*(int *)(pFVar2 + (longlong)(int)param_1 * 4) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteStreamingManager.cpp"
                       ,0x197,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)pFVar1 = *(int *)pFVar1 + -1;
  return;
}

