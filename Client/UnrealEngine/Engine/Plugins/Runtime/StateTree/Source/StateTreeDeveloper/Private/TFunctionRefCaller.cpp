// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 6

// Call @ 14d716d10

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
::Call(void *param_1)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName FStackX_8;
  FName FStackX_10;
  
  if (*(char *)(*(longlong *)param_1 + 0x3b) == '\0') {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Header";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Hover";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// Call @ 14d716d20

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
::Call(void *param_1)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName FStackX_8;
  FName FStackX_10;
  
  if (*(char *)(*(longlong *)param_1 + 0x3b) == '\0') {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Header";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Hover";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &FStackX_8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// Call @ 14d716d30

FSlateColor * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,FSlateColor>
::Call(FSlateColor *__return_storage_ptr__,void *param_1)

{
  `UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d716d60

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  `UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d716d90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTreeDebugger::SFrameEventsView::SelectByPredicate'::__l2::<lambda_1>,bool,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_&>
::Call(void *param_1,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FFrameEventTreeElement *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  
  if (param_2->Object == (FFrameEventTreeElement *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  cVar8 = (**(code **)((longlong)param_1 + 8))
                    (*(undefined8 *)((longlong)param_1 + 0x10),&param_2->Object->Event);
  if (cVar8 != '\0') {
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    puVar2 = *(undefined8 **)param_1;
    pFVar3 = param_2->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
    *puVar2 = pFVar3;
    puVar2[1] = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return **(longlong **)param_1 == 0;
}

// Call @ 14d716da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,bool>
::Call(void *param_1)

{
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0x7c) != '\0')) {
    return true;
  }
  return false;
}

