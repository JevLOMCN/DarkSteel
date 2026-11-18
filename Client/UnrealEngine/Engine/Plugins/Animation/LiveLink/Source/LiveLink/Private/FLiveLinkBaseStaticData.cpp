// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// FindPropertyValue @ 14d042350

bool __thiscall
FLiveLinkBaseStaticData::FindPropertyValue
          (FLiveLinkBaseStaticData *this,FLiveLinkBaseFrameData *param_1,FName param_2,
          float *param_3)

{
  int iVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  
  iVar1 = (param_1->PropertyValues).ArrayNum;
  iVar2 = (this->PropertyNames).ArrayNum;
  if (iVar2 == iVar1) {
    pFVar3 = (FName *)(this->PropertyNames).AllocatorInstance.Data;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + iVar2; pFVar9 = pFVar9 + 1) {
      if (*pFVar9 == param_2) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
        if (uVar8 == 0xffffffff) {
          return false;
        }
        uVar7 = 0;
        if ((int)uVar8 < iVar1) {
          uVar7 = ~uVar8 >> 0x1f;
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
        *param_3 = *(float *)((param_1->PropertyValues).AllocatorInstance.Data +
                             (longlong)(int)uVar8 * 4);
        return true;
      }
    }
  }
  return false;
}

