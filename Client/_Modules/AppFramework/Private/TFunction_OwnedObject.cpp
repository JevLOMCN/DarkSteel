// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 34

// CloneToEmptyStorage @ 142f5bc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_11>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142f5bc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_14>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142f5bcb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
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

// CloneToEmptyStorage @ 142f5bce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_H_00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142f5bd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_VFTestData___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142f5bd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__5___R1_1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV4_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 142f5bd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__5___R<lambda_2>__1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV5_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 142f5bde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SExampleLayout::Construct'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
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

// CloneToEmptyStorage @ 142f5be10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142f5be30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142fb5ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142fb5f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142fb5f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SExampleLayout::Construct'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142fb5fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142fb5fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142fcfb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SExampleLayout::Construct'::__l2::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142fcfc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<FText_(__cdecl*)(void),0,0> @ 14305ea80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FText_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FText_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_AVFText__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 14306f230

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FText_(__cdecl*)(void),0,0> *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_AVFText__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_FText **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1430b49d0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FText_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001430b49d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1430c7450

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FText_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

