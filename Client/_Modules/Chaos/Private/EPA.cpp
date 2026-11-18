// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator() @ 14388fe20

bool __thiscall
`Chaos::EPA<double>'::__l15::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0xa08)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar6 = *(longlong *)(lVar1 + 0xa00);
  if (*(longlong *)(lVar1 + 0xa00) == 0) {
    lVar6 = lVar1;
  }
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar1 + 0xa08)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar7 = *(longlong *)(lVar1 + 0xa00);
  if (*(longlong *)(lVar1 + 0xa00) == 0) {
    lVar7 = lVar1;
  }
  return *(double *)(lVar7 + 0x28 + (longlong)param_2 * 0x50) <
         *(double *)(lVar6 + 0x28 + (longlong)param_1 * 0x50);
}

