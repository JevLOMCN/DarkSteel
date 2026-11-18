// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetRenderThread @ 14491d7b0

FCommandList * __thiscall FRenderCommandList::GetRenderThread(FRenderCommandList *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCommandList *pFVar5;
  uint uVar6;
  
  if (this->bInitialized == 0) {
    Init(this);
  }
  iVar1 = (this->CommandLists).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCommandList *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (this->CommandLists).AllocatorInstance.Data + ((this->CommandLists).ArrayNum + -1);
}

