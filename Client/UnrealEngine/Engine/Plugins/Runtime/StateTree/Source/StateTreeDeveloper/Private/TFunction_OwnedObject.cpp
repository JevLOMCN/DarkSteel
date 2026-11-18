// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 15

// CloneToEmptyStorage @ 14d717080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d7170a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d7170c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d7170f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d717110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d725150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d725155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d725160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d725165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d725170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d725175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d725180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d725185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d725190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d725195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d72dbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d72dbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d72dbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d72dbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d72dc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

