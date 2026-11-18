// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 3

// operator= @ 14d710e40

TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>::
operator=(TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
          *this,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
              ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14d710ee0

TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>::
operator=(TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
          *this,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
              ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Remove @ 14d7434c0

int __thiscall
TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>::
Remove(TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
       *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1)

{
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
           (this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(FFrameEventTreeElement **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(FFrameEventTreeElement **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
                ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                 (pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

