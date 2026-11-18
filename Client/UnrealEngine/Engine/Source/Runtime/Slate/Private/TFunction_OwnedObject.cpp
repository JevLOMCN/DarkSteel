// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 43

// ~TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0> @ 1426a9c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VIAsyncTaskNotificationImpl___00__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1426b3710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VIAsyncTaskNotificationImpl___00__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TSharedPtr<IAsyncTaskNotificationImpl,1> **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1426b5e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001426b5e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1426bc640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 142712e80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SDockingArea::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SDockingArea::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14272aa20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SDockingArea::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014272aa25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142739ca0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SDockingArea::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1427ecbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar3;
  *(undefined1 *)((longlong)puVar3 + 9) = 0;
  *puVar3 = &TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_1>,0,1>::
             _vftable_;
  cVar1 = *(char *)((longlong)this + 9);
  *(char *)((longlong)puVar3 + 9) = cVar1;
  if (cVar1 != '\0') {
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)((longlong)this + 8);
  }
  puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 0x18);
  puVar3[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}

// CloneToEmptyStorage @ 1427ecc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1427ecc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1427eccb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::`21'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1427ecd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_2>,0,0>::_vftable_;
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

// CloneToEmptyStorage @ 1427ecd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::`25'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142800ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142800af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142800b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142800b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142800b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142800b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142800b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142800b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142800b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14280d080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14280d090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14280d0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14280d0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14280d0c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14280d0d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1428dbf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1428dbf90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SGridPanel::AddSlot'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SGridPanel::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1428dbfc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)((longlong)this + 0x20);
  *(undefined1 *)((longlong)puVar2 + 0x21) = *(undefined1 *)((longlong)this + 0x21);
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)this + 0x24);
  return puVar2 + 1;
}

// Destroy @ 142924c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142924c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142924c10

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SGridPanel::AddSlot'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142924c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142924c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14293bb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14293bb70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SGridPanel::AddSlot'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14293bb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1429cd630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ConstructInternals_SNotificationItemImpl__QEAA_AV__TSharedRef_VSWidget___00__AEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1429cd650

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`5'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1429cd680

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`7'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1429e3d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001429e3d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1429e3d10

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001429e3d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1429e3d20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001429e3d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1429e8cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1429e8d00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1429e8d10

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

