// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// DoMatch @ 14aac36c0

bool __thiscall
UE::Mutable::Private::FMesh::FVertexMatchMap::DoMatch(FVertexMatchMap *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((param_1 < 0) || ((this->FirstMatch).ArrayNum <= param_1)) {
    return false;
  }
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar7 = (ulonglong)*(int *)((this->FirstMatch).AllocatorInstance.Data + (longlong)param_1 * 4);
  iVar5 = param_1 + 1;
  if (iVar5 < (this->FirstMatch).ArrayNum) {
    if ((iVar5 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar5 = *(int *)((this->FirstMatch).AllocatorInstance.Data + (longlong)iVar5 * 4);
  }
  else {
    iVar5 = (this->Matches).ArrayNum;
  }
  uVar8 = uVar7;
  while( true ) {
    if ((longlong)iVar5 <= (longlong)uVar7) {
      return false;
    }
    uVar6 = (uint)uVar8;
    uVar4 = 0;
    if ((int)uVar6 < (this->Matches).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(int *)((this->Matches).AllocatorInstance.Data + uVar7 * 4) == param_2) {
      return true;
    }
    uVar8 = (ulonglong)(uVar6 + 1);
    uVar7 = uVar7 + 1;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

