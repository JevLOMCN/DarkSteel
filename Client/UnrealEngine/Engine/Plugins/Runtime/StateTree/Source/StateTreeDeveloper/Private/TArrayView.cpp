// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 5

// operator[] @ 14d711960

FFrameSpan * __thiscall
TArrayView<UE::StateTreeDebugger::FFrameSpan_const_,int>::operator[]
          (TArrayView<UE::StateTreeDebugger::FFrameSpan_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrameSpan *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFrameSpan *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14d7119e0

TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> * __thiscall
TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14d711a60

TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> * __thiscall
TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14d732cb0

TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> * __thiscall
TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int>::Last
          (TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// Last @ 14d732d40

TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> * __thiscall
TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int>::Last
          (TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

