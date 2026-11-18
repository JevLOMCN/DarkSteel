// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 13

// ~TFunction_OwnedObject<bool_(__cdecl*)(void),0,0> @ 142e0fbd0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 142e31aa0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(void),0,0> *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142e31ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedRef_VFWidgetReflectorNodeBase___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142e31ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142e31b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142e6e920

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e6e925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 142e6e930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e6e935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142e6e940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e6e945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142e6e950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142e6e955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142e97940

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 142e97950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142e97960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142e97970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

