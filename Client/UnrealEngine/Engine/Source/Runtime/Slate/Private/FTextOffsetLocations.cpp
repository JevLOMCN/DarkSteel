// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// GetTextLength @ 14287c730

int __thiscall FTextLayout::FTextOffsetLocations::GetTextLength(FTextOffsetLocations *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = (this->OffsetData).ArrayNum;
  if (iVar5 != 0) {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    pFVar1 = (this->OffsetData).AllocatorInstance.Data;
    lVar6 = (longlong)(this->OffsetData).ArrayNum;
    iVar7 = *(int *)(pFVar1 + lVar6 * 8 + -4) + *(int *)(pFVar1 + lVar6 * 8 + -8);
  }
  return iVar7;
}

// OffsetToTextLocation @ 142884cb0

FTextLocation __thiscall
FTextLayout::FTextOffsetLocations::OffsetToTextLocation(FTextOffsetLocations *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTextLocation FVar5;
  int in_register_00000014;
  uint uVar6;
  longlong lVar7;
  int in_R8D;
  int iVar8;
  
  FVar5.Offset = in_register_00000014;
  FVar5.LineIndex = param_1;
  iVar8 = (this->OffsetData).ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar8) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FTextLocation)(*pcVar2)();
        return FVar5;
      }
      pFVar1 = (this->OffsetData).AllocatorInstance.Data;
      iVar8 = *(int *)(pFVar1 + lVar7);
      if ((iVar8 <= in_R8D) && (in_R8D <= *(int *)(pFVar1 + lVar7 + 4) + iVar8)) {
        *(uint *)FVar5 = uVar6;
        *(int *)((longlong)FVar5 + 4) = in_R8D - iVar8;
        return FVar5;
      }
      iVar8 = (this->OffsetData).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar8);
  }
  *(undefined8 *)FVar5 = 0;
  return FVar5;
}

// TextLocationToOffset @ 14289d710

int __thiscall
FTextLayout::FTextOffsetLocations::TextLocationToOffset
          (FTextOffsetLocations *this,FTextLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = param_1->LineIndex;
  if ((-1 < iVar3) && (iVar3 < (this->OffsetData).ArrayNum)) {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((this->OffsetData).AllocatorInstance.Data + (longlong)iVar3 * 8) +
           param_1->Offset;
  }
  return -1;
}

