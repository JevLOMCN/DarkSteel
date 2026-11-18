// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 4

// Construct @ 14d0f7540

void __thiscall
SNamingTokenDataTreeView::Construct
          (SNamingTokenDataTreeView *this,FArguments *param_1,
          TSharedPtr<SNamingTokenDataTreeViewWidget,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::Construct
            ((STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)this,param_1);
  (this->OwningTreeViewWidget).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->OwningTreeViewWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->OwningTreeViewWidget).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->OwningTreeViewWidget).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return;
}

// HasKeyboardFocus @ 14d10a890

bool __thiscall SNamingTokenDataTreeView::HasKeyboardFocus(SNamingTokenDataTreeView *this)

{
  return false;
}

// OnFocusReceived @ 14d10d9a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNamingTokenDataTreeView::OnFocusReceived
          (SNamingTokenDataTreeView *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FReply *pFVar7;
  SNamingTokenDataTreeViewWidget *pSVar8;
  SNamingTokenDataTreeViewWidget *pSVar9;
  SNamingTokenDataTreeViewWidget *pSVar10;
  FReadAccessScope local_38;
  
  if (((((this->OwningTreeViewWidget).Object == (SNamingTokenDataTreeViewWidget *)0x0) ||
       (pTVar1 = (this->OwningTreeViewWidget).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningTreeViewWidget.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
                         ,0x1e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
  pSVar9 = (SNamingTokenDataTreeViewWidget *)
           (this->OwningTreeViewWidget).WeakReferenceCount.ReferenceController;
  pSVar10 = (SNamingTokenDataTreeViewWidget *)0x0;
  pSVar8 = pSVar9;
  if (pSVar9 != (SNamingTokenDataTreeViewWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = pSVar10;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14d10da35;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar9->_padding_;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    pSVar10 = (this->OwningTreeViewWidget).Object;
    pSVar8 = pSVar9;
    if (pSVar10 != (SNamingTokenDataTreeViewWidget *)0x0) goto LAB_14d10da5b;
  }
LAB_14d10da35:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar9 = pSVar8;
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
LAB_14d10da5b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar10->OnFocusedDelegate,
             &local_38);
  if ((*(int *)&(pSVar10->OnFocusedDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(pSVar10->OnFocusedDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  SWidget::OnFocusReceived((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// SetExpansionStateFromItems @ 14d11a010

void __thiscall
SNamingTokenDataTreeView::SetExpansionStateFromItems
          (SNamingTokenDataTreeView *this,
          TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  longlong local_28;
  longlong local_20;
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pcVar2 = *(code **)(*(longlong *)&this->field_0x588 + 0x50);
    local_28 = *(longlong *)pFVar4;
    local_20 = *(longlong *)(pFVar4 + 8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar2)(&this->field_0x588,&local_28,1);
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SetExpansionStateFromItems
              (this,(TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *)
                    (*(longlong *)pFVar4 + 0x40));
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

