// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// PrintLevel @ 147d1f050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterTree::PrintLevel
          (FClusterTree *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  uVar3 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  lVar8 = (longlong)param_1 * 0x40;
  if (param_2 == param_3) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    bVar4 = true;
  }
  else {
    iVar7 = *(int *)(pFVar1 + lVar8 + 0xc);
    if (iVar7 < 0) {
      bVar4 = false;
    }
    else {
      bVar4 = false;
      if (iVar7 <= *(int *)(pFVar1 + lVar8 + 0x1c)) {
        do {
          bVar6 = PrintLevel(this,iVar7,param_2,param_3 + 1,param_1);
          if ((bVar6) || (bVar4 != false)) {
            bVar4 = true;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= *(int *)(pFVar1 + lVar8 + 0x1c));
      }
    }
  }
  return bVar4;
}

