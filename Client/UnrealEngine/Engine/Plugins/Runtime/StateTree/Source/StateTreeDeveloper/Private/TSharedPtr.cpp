// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 6

// TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1><UE::StateTreeDebugger::FFrameEventTreeElement> @ 14d702c50

TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> * __thiscall
TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::
TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1><UE::StateTreeDebugger::FFrameEventTreeElement>
          (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *this,
          TRawPtrProxy<UE::StateTreeDebugger::FFrameEventTreeElement> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FFrameEventTreeElement *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFFrameEventTreeElement_StateTreeDebugger_UE__U__DefaultDeleter_UFFrameEventTreeElement_StateTreeDebugger_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FFrameEventTreeElement *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator= @ 14d7118c0

TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> * __thiscall
TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator=
          (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *this,
          TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FFrameEventTreeElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14d711910

TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> * __thiscall
TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>::operator=
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *this,
          TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FStateItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 14d711ae0

FFrameEventTreeElement * __thiscall
TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->
          (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameEventTreeElement *pFVar3;
  
  if (this->Object != (FFrameEventTreeElement *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameEventTreeElement *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d711b30

FStateItem * __thiscall
TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>::operator->
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStateItem *pFVar3;
  
  if (this->Object != (FStateItem *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateItem *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d711b80

STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> * __thiscall
TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::operator->
          (TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> *this
          )

{
  code *pcVar1;
  bool bVar2;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar3;
  
  if (this->Object != (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0)
  {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

