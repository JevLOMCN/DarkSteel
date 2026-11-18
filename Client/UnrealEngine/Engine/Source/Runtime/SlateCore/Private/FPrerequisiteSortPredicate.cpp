// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator() @ 1425c43d0

bool __thiscall
`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSortPredicate::
operator()(void *this,FPrerequisiteSort *param_1,FPrerequisiteSort *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  uVar7 = param_1->AttributeIndex;
  plVar2 = *(longlong **)this;
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar8 = param_2->AttributeIndex;
  lVar13 = (longlong)(int)uVar7 * 0x58 + *plVar2;
  plVar2 = *(longlong **)this;
  uVar7 = 0;
  if ((int)uVar8 < (int)plVar2[1]) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar11 = *plVar2 + (longlong)(int)uVar8 * 0x58;
  if (*(byte *)(lVar13 + 0x20) == *(byte *)(lVar11 + 0x20)) {
    cVar6 = *(char *)(lVar13 + 0x51);
    if (cVar6 == *(char *)(lVar11 + 0x51)) {
      iVar9 = param_2->Depth;
      iVar1 = param_1->Depth;
      bVar4 = SBORROW4(iVar1,iVar9);
      iVar12 = iVar1 - iVar9;
      if (iVar1 == iVar9) {
        uVar7 = param_1->PrerequisitesIndex;
        if (uVar7 == param_2->PrerequisitesIndex) {
          uVar7 = param_1->AttributeIndex;
          plVar2 = *(longlong **)this;
          uVar8 = 0;
          if ((int)uVar7 < (int)plVar2[1]) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar8 = param_2->AttributeIndex;
          uVar7 = *(uint *)((longlong)(int)uVar7 * 0x58 + 0x1c + *plVar2);
          uVar10 = 0;
          if ((int)uVar8 < (int)plVar2[1]) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          return uVar7 < *(uint *)((longlong)(int)uVar8 * 0x58 + 0x1c + *plVar2);
        }
        if (uVar7 == 0xffffffff) {
          iVar12 = *(int *)(lVar13 + 0x1c);
        }
        else {
          plVar2 = *(longlong **)this;
          uVar8 = 0;
          if ((int)uVar7 < (int)plVar2[1]) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar12 = *(int *)((longlong)(int)uVar7 * 0x58 + 0x1c + *plVar2);
        }
        uVar7 = param_2->PrerequisitesIndex;
        if (uVar7 == 0xffffffff) {
          iVar9 = *(int *)(lVar11 + 0x1c);
        }
        else {
          plVar2 = *(longlong **)this;
          uVar8 = 0;
          if ((int)uVar7 < (int)plVar2[1]) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar9 = *(int *)((longlong)(int)uVar7 * 0x58 + 0x1c + *plVar2);
        }
        bVar4 = SBORROW4(iVar12,iVar9);
        iVar12 = iVar12 - iVar9;
      }
      cVar6 = bVar4 != iVar12 < 0;
    }
  }
  else if (*(longlong *)(lVar13 + 0x14) == 0) {
    cVar6 = '\x01';
  }
  else if (*(longlong *)(lVar11 + 0x14) == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = *(byte *)(lVar13 + 0x20) < *(byte *)(lVar11 + 0x20);
  }
  return (bool)cVar6;
}

