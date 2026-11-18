// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FNodeRenderCost @ 14ad3ba10

FNodeRenderCost * __thiscall
Metasound::FNodeRenderCost::FNodeRenderCost
          (FNodeRenderCost *this,int param_1,TSharedRef<Metasound::FGraphRenderCost,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->NodeIndex = param_1;
  (this->GraphRenderCost).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->GraphRenderCost).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// SetRenderCost @ 14ad64380

void __thiscall Metasound::FNodeRenderCost::SetRenderCost(FNodeRenderCost *this,float param_1)

{
  uint uVar1;
  FGraphRenderCost *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  pFVar2 = (this->GraphRenderCost).Object;
  if (pFVar2 != (FGraphRenderCost *)0x0) {
    uVar1 = this->NodeIndex;
    uVar5 = 0;
    if ((int)uVar1 < (pFVar2->NodeCosts).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
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
    *(float *)((pFVar2->NodeCosts).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) = param_1;
  }
  return;
}

