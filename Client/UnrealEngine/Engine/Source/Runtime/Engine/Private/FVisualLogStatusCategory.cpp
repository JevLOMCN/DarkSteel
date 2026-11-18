// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetDesc @ 1489e7d40

bool __thiscall
FVisualLogStatusCategory::GetDesc
          (FVisualLogStatusCategory *this,int param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  longlong lVar12;
  FString local_48;
  FString local_38;
  
  if ((-1 < param_1) && (param_1 < (this->Data).ArrayNum)) {
    pFVar2 = (this->Data).AllocatorInstance.Data;
    lVar12 = (longlong)param_1 * 0x10;
    psVar3 = *(short **)(pFVar2 + lVar12);
    for (psVar10 = psVar3; psVar10 != psVar3 + *(int *)(pFVar2 + lVar12 + 8); psVar10 = psVar10 + 1)
    {
      if (*psVar10 == 0x7c) {
        uVar9 = (uint)((longlong)psVar10 - (longlong)psVar3 >> 1);
        if (uVar9 == 0xffffffff) {
          return false;
        }
        uVar7 = 0;
        if (param_1 < (this->Data).ArrayNum) {
          uVar7 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (this->Data).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar2 + lVar12 + 8);
        uVar7 = iVar1 - 1;
        if (iVar1 == 0) {
          uVar7 = 0;
        }
        if ((int)uVar9 < (int)uVar7) {
          uVar7 = uVar9;
        }
        uVar11 = 0;
        if (0 < (int)uVar7) {
          uVar11 = uVar7;
        }
        if (iVar1 == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(pFVar2 + lVar12);
        }
        ::FString::ConstructFromPtrSize(&local_48,pwVar8,uVar11);
        if (param_2 != &local_48) {
          pFVar2 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_2->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          (param_2->Data).ArrayNum = local_48.Data.ArrayNum;
          (param_2->Data).ArrayMax = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        uVar7 = 0;
        if (param_1 < (this->Data).ArrayNum) {
          uVar7 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        ::FString::RightChop
                  ((FString *)((this->Data).AllocatorInstance.Data + lVar12),&local_38,uVar9 + 1);
        if (param_3 != &local_38) {
          pFVar2 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_38.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

