// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DoOneMatch @ 147550650

bool __thiscall
FSyncPattern::DoOneMatch
          (FSyncPattern *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar6 = param_2;
  while( true ) {
    uVar5 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    uVar5 = 0;
    if ((int)uVar6 < (this->MarkerNames).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if (*(longlong *)((this->MarkerNames).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) !=
        *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 8)) {
      return false;
    }
    uVar6 = (int)(uVar6 + 1) % (this->MarkerNames).ArrayNum;
    uVar7 = (int)(uVar7 + 1) % param_1->ArrayNum;
    if ((uVar6 == param_2) && (uVar7 == 0)) {
      return true;
    }
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// DoesPatternMatch @ 147550780

bool __thiscall
FSyncPattern::DoesPatternMatch
          (FSyncPattern *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  
  piVar1 = &(this->MarkerNames).ArrayNum;
  if (((param_1->ArrayNum < 1) || (*piVar1 < 1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestMarkerNames.Num() > 0 && MarkerNames.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceUtilities.cpp"
                         ,0x26,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  FVar2 = *(FName *)(param_1->AllocatorInstance).Data;
  uVar9 = IndexOf(this,FVar2,0);
  uVar14 = (ulonglong)(int)uVar9;
  uVar16 = uVar14;
  do {
    if (uVar9 == 0xffffffff) {
      return false;
    }
    uVar11 = uVar14 & 0xffffffff;
    uVar13 = 0;
    while( true ) {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar10 = (uint)uVar11;
      uVar9 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar15 = *piVar1;
      if (*(longlong *)((this->MarkerNames).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) !=
          *(longlong *)(pFVar3 + (longlong)(int)uVar12 * 8)) break;
      uVar4 = (longlong)(int)(uVar10 + 1) % (longlong)iVar15;
      uVar11 = uVar4 & 0xffffffff;
      uVar5 = (longlong)(int)(uVar12 + 1) % (longlong)param_1->ArrayNum;
      uVar13 = uVar5 & 0xffffffff;
      if (((int)uVar4 == (int)uVar14) && ((int)uVar5 == 0)) {
        return true;
      }
    }
    uVar9 = (int)uVar14 + 1;
    if (iVar15 <= (int)uVar9) {
      return false;
    }
    while( true ) {
      uVar14 = (ulonglong)uVar9;
      uVar16 = uVar16 + 1;
      uVar12 = 0;
      if ((int)uVar9 < iVar15) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (*(FName *)((this->MarkerNames).AllocatorInstance.Data + uVar16 * 8) == FVar2) break;
      iVar15 = *piVar1;
      uVar9 = uVar9 + 1;
      if (iVar15 <= (int)uVar9) {
        return false;
      }
    }
  } while( true );
}

// IndexOf @ 147563ac0

int __thiscall FSyncPattern::IndexOf(FSyncPattern *this,FName param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_2;
  iVar4 = (this->MarkerNames).ArrayNum;
  if (param_2 < iVar4) {
    lVar5 = uVar7 * 8;
    do {
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->MarkerNames).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      iVar4 = (this->MarkerNames).ArrayNum;
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar5 = lVar5 + 8;
    } while ((int)(uVar6 + 1) < iVar4);
  }
  return -1;
}

