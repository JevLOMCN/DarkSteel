// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// Push @ 146fc5610

void __thiscall
FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
::FOpenList::Push(FOpenList *this,FGraphAStarDefaultNode<FNavLocalGridData> *param_1)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  FNodeSorter *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  
  pFVar6 = this->NodeSorter;
  piVar1 = &param_1->SearchNodeIndex;
  if ((((undefined1 *)this->_padding_ <= piVar1) &&
      (piVar1 < (undefined1 *)this->_padding_ +
                (longlong)*(int *)((longlong)&this->_padding_ + 4) * 4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar11 = (int)this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)this,piVar2);
  }
  *(int *)&this->_padding_ = iVar11 + 1;
  *(int *)(this->_padding_ + (longlong)iVar11 * 4) = *piVar1;
  lVar7 = this->_padding_;
  iVar11 = (int)this->_padding_ + -1;
  if (iVar11 < 1) {
    param_1->bIsOpened = '\x01';
  }
  else {
    do {
      lVar12 = (longlong)iVar11;
      iVar11 = (iVar11 + -1) / 2;
      iVar4 = *(int *)(lVar7 + lVar12 * 4);
      pFVar8 = (pFVar6->NodePool->AllocatorInstance).Data;
      iVar5 = *(int *)(lVar7 + (longlong)iVar11 * 4);
      dVar3 = *(double *)(pFVar8 + (longlong)iVar5 * 0x28 + 0x10);
      pFVar8 = pFVar8 + (longlong)iVar4 * 0x28 + 0x10;
      if (dVar3 < *(double *)pFVar8 || dVar3 == *(double *)pFVar8) break;
      *(int *)(lVar7 + lVar12 * 4) = iVar5;
      *(int *)(lVar7 + (longlong)iVar11 * 4) = iVar4;
    } while (0 < iVar11);
    param_1->bIsOpened = '\x01';
  }
  return;
}

