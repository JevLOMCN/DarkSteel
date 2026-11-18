// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 45

// CloneToEmptyStorage @ 142d750a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SCheckBoxList::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SCheckBoxList::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d750c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d750e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarDrawerContent::Construct'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SSidebarDrawerContent::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomDialog::CreateContentBox'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`SCustomDialog::CreateContentBox'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)((longlong)this + 0x10);
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 3)
             ,(TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
              ((longlong)this + 0x18));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 142d751c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarContainer::AddContentDockSlot'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SSidebarContainer::AddContentDockSlot'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d751e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarContainer::AddSidebarDockSlot'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SSidebarContainer::AddSidebarDockSlot'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  puVar2[1] = 0;
  plVar1 = *(longlong **)((longlong)this + 8);
  puVar2[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,local_res8);
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)this + 0x18);
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar2 + 4),
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142d752e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_3>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142d75320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::`2'::<lambda_4>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142d9d600

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SCheckBoxList::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarDrawerContent::Construct'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomDialog::CreateContentBox'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d9d690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarContainer::AddContentDockSlot'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarContainer::AddSidebarDockSlot'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d6b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d6b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d6c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142d9d700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_3>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142d9d720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d9d725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142daa890

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SCheckBoxList::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarDrawerContent::Construct'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomDialog::CreateContentBox'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarContainer::AddContentDockSlot'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SSidebarContainer::AddSidebarDockSlot'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SRichTextWarningOrErrorBox::Construct'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SWarningOrErrorBox::Construct'::__l2::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142daa970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::__l2::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

