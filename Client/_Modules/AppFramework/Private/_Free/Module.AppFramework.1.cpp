// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 538

// DefaultUndeterminedString'' @ 140f4b360

void __cdecl `dynamic_initializer_for_'SNumericEntryBox<int>::DefaultUndeterminedString__(void)

{
  FText::FromString(&SNumericEntryBox<int>::DefaultUndeterminedString,L"---");
  atexit(`dynamic_atexit_destructor_for_'SNumericEntryBox<int>::DefaultUndeterminedString__);
  return;
}

// DefaultUndeterminedString'' @ 140f4b390

void __cdecl `dynamic_initializer_for_'SNumericEntryBox<float>::DefaultUndeterminedString__(void)

{
  FText::FromString(&SNumericEntryBox<float>::DefaultUndeterminedString,L"---");
  atexit(`dynamic_atexit_destructor_for_'SNumericEntryBox<float>::DefaultUndeterminedString__);
  return;
}

// DefaultUndeterminedString'' @ 140f4b3c0

void __cdecl `dynamic_initializer_for_'SNumericEntryBox<double>::DefaultUndeterminedString__(void)

{
  FText::FromString(&SNumericEntryBox<double>::DefaultUndeterminedString,L"---");
  atexit(`dynamic_atexit_destructor_for_'SNumericEntryBox<double>::DefaultUndeterminedString__);
  return;
}

// Instance'' @ 140f4b3f0

void __cdecl `dynamic_initializer_for_'FTestStyle::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FTestStyle::Instance__);
  return;
}

// OnColorPickerDestroyOverride'' @ 140f4b410

void __cdecl `dynamic_initializer_for_'SColorPicker::OnColorPickerDestroyOverride__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SColorPicker::OnColorPickerDestroyOverride__);
  return;
}

// OnColorPickerNonModalCreateOverride'' @ 140f4b430

void __cdecl `dynamic_initializer_for_'SColorPicker::OnColorPickerNonModalCreateOverride__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SColorPicker::OnColorPickerNonModalCreateOverride__);
  return;
}

// `dynamic_initializer_for_'AppFrameworkTabName'' @ 140f4b450

void __cdecl _dynamic_initializer_for__AppFrameworkTabName__(void)

{
  FName::FName(&AppFrameworkTabName,"AppFramework");
  return;
}

// `dynamic_initializer_for_'ColorPickerWindow'' @ 140f4b470

void __cdecl _dynamic_initializer_for__ColorPickerWindow__(void)

{
  atexit(_dynamic_atexit_destructor_for__ColorPickerWindow__);
  return;
}

// `dynamic_initializer_for_'GlobalColorPicker'' @ 140f4b490

void __cdecl _dynamic_initializer_for__GlobalColorPicker__(void)

{
  atexit(_dynamic_atexit_destructor_for__GlobalColorPicker__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAppFramework'' @ 140f4b4b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAppFramework__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AppFramework";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AppFramework",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAppFrameworkModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 142f196c0

void * __thiscall
FAppFrameworkModule::_scalar_deleting_destructor_(FAppFrameworkModule *this,uint param_1)

{
  *this = (FAppFrameworkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TFunction<TOptional<float>___cdecl(void)><`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>_> @ 142f19af0

TFunction<TOptional<float>___cdecl(void)> * __thiscall
TFunction<TOptional<float>___cdecl(void)>::
TFunction<TOptional<float>___cdecl(void)><_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_11>_>
          (TFunction<TOptional<float>___cdecl(void)> *this,<lambda_11> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_11>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(SStarshipGallery **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,TOptional<float>_>
         ::Call;
  }
  return this;
}

// TFunction<TOptional<float>___cdecl(void)><`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>_> @ 142f19b30

TFunction<TOptional<float>___cdecl(void)> * __thiscall
TFunction<TOptional<float>___cdecl(void)>::
TFunction<TOptional<float>___cdecl(void)><_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_14>_>
          (TFunction<TOptional<float>___cdecl(void)> *this,<lambda_14> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_14>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(SStarshipGallery **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,TOptional<float>_>
         ::Call;
  }
  return this;
}

// TFunction<enum_ECheckBoxState___cdecl(void)><``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 142f19b70

TFunction<ECheckBoxState___cdecl(void)> * __thiscall
TFunction<enum_ECheckBoxState___cdecl(void)>::
TFunction<enum_ECheckBoxState___cdecl(void)><__SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)((longlong)this + 0x18) = (param_1->HBox).Object;
  pTVar1 = (param_1->HBox).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,enum_ECheckBoxState>
         ::Call;
  }
  return this;
}

// TFunction<EVisibility___cdecl(void)><``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 142f19bc0

TFunction<EVisibility___cdecl(void)> * __thiscall
TFunction<EVisibility___cdecl(void)>::
TFunction<EVisibility___cdecl(void)><__SStarshipGallery::ConstructIconsGallery_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (TFunction<EVisibility___cdecl(void)> *this,<lambda_1> *param_1)

{
  SStarshipGallery *pSVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)&this->field_0x28 = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__5___R1_1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV4_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pSVar1 = param_1->__this;
  puVar2[2] = 0;
  puVar2[1] = pSVar1;
  puVar2[2] = (param_1->IconPath).Data.AllocatorInstance.Data;
  (param_1->IconPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar2 + 3) = (param_1->IconPath).Data.ArrayNum;
  *(int *)((longlong)puVar2 + 0x1c) = (param_1->IconPath).Data.ArrayMax;
  (param_1->IconPath).Data.ArrayNum = 0;
  (param_1->IconPath).Data.ArrayMax = 0;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,EVisibility>
         ::Call;
  }
  return this;
}

// TFunction<EVisibility___cdecl(void)><``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>_> @ 142f19c50

TFunction<EVisibility___cdecl(void)> * __thiscall
TFunction<EVisibility___cdecl(void)>::
TFunction<EVisibility___cdecl(void)><__SStarshipGallery::ConstructIconsGallery_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>
          (TFunction<EVisibility___cdecl(void)> *this,<lambda_1> *param_1)

{
  SStarshipGallery *pSVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)&this->field_0x28 = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__5___R<lambda_2>__1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV5_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pSVar1 = param_1->__this;
  puVar2[2] = 0;
  puVar2[1] = pSVar1;
  puVar2[2] = (param_1->IconPath).Data.AllocatorInstance.Data;
  (param_1->IconPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar2 + 3) = (param_1->IconPath).Data.ArrayNum;
  *(int *)((longlong)puVar2 + 0x1c) = (param_1->IconPath).Data.ArrayMax;
  (param_1->IconPath).Data.ArrayNum = 0;
  (param_1->IconPath).Data.ArrayMax = 0;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,EVisibility>
         ::Call;
  }
  return this;
}

// TFunction<enum_ECheckBoxState___cdecl(void)><`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>_> @ 142f19ce0

TFunction<ECheckBoxState___cdecl(void)> * __thiscall
TFunction<enum_ECheckBoxState___cdecl(void)>::
TFunction<enum_ECheckBoxState___cdecl(void)><_SStarshipGallery::ConstructWidgetGallery_::__l4::<lambda_3>_>
          (void *this,<lambda_3> *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)&param_1->i;
  *(undefined8 *)((longlong)this + 0x18) = param_1->__this;
  *(undefined8 *)((longlong)this + 0x20) = uVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,enum_ECheckBoxState>
         ::Call;
  }
  return this;
}

// TFunction<FText___cdecl(void)><`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>_> @ 142f19d20

TFunction<FText___cdecl(void)> * __thiscall
TFunction<FText___cdecl(void)>::
TFunction<FText___cdecl(void)><_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_5>_>
          (TFunction<FText___cdecl(void)> *this,<lambda_5> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(SStarshipGallery **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,FText>::
         Call;
  }
  return this;
}

// BindLambda<`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_> @ 142f1cbb0

void __thiscall
TDelegateRegistration<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
BindLambda<_SStarshipGallery::BuildToolbar_::__l2::<lambda_1>_>(void *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_28);
  local_10 = (FDelegateAllocation *)((longlong)this + 8);
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BindLambda<`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_> @ 142f1cc20

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
BindLambda<_SStarshipGallery::BuildToolbar_::__l2::<lambda_2>_>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_2>__1__BuildToolbar_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00___N_Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ConstructItems<TSharedPtr<FTestData,1>,TSharedPtr<FTestData,1>,int> @ 142f1dfc0

void __cdecl
ConstructItems<TSharedPtr<FTestData,1>,TSharedPtr<FTestData,1>,int>
          (void *param_1,TSharedPtr<FTestData,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FTestData **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<enum_ESelectionMode::Type,1>,TSharedPtr<enum_ESelectionMode::Type,1>,int> @ 142f1e000

void __cdecl
ConstructItems<TSharedPtr<enum_ESelectionMode::Type,1>,TSharedPtr<enum_ESelectionMode::Type,1>,int>
          (void *param_1,TSharedPtr<ESelectionMode::Type,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(Type **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_> @ 142f1e340

TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
CreateLambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_16>_>
          (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,<lambda_16> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__V<lambda_16>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::Construct'::__l2::<lambda_1>_> @ 142f1e3e0

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_1>_>
                  (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::Construct'::__l2::<lambda_2>_> @ 142f1e480

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_2>_>
                  (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,<lambda_2> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_> @ 142f1e520

TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_SStarshipGallery::BuildToolbar_::__l2::<lambda_3>_>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,<lambda_3> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::Construct'::__l2::<lambda_3>_> @ 142f1e5c0

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_3>_>
                  (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,<lambda_3> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::Construct'::__l2::<lambda_4>_> @ 142f1e660

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_4>_>
                  (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,<lambda_4> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_> @ 142f1e700

TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_SStarshipGallery::BuildToolbar_::__l6::<lambda_4>_>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,<lambda_4> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_4>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::Construct'::__l2::<lambda_5>_> @ 142f1e7a0

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_5>_>
                  (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,<lambda_5> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SStarshipGallery__QEAAXAEBUFArguments_6__Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateLambda<`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_> @ 142f1e840

TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_SStarshipGallery::BuildToolbar_::__l6::<lambda_5>_>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,<lambda_5> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V<lambda_5>__5__BuildToolbar_SStarshipGallery__QEAA_AV1__N_Z___V__6B_
    ;
    puVar2[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// DestructItems<SBreadcrumbTrail<int>::FCrumbItem,int> @ 142f1f260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<SBreadcrumbTrail<int>::FCrumbItem,int>(FCrumbItem *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ButtonBox).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-4].ReferenceController);
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SSegmentedControl<int>::FSlot::FSlotArguments,int> @ 142f1f2c0

void __cdecl
DestructItems<SSegmentedControl<int>::FSlot::FSlotArguments,int>
          (FSlotArguments *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SSegmentedControl<int>::FSlot::FSlotArguments::~FSlotArguments(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FTestData,1>,int> @ 142f1f300

void __cdecl
DestructItems<TSharedPtr<FTestData,1>,int>(TSharedPtr<FTestData,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<SThemeColorBlock,1>,int> @ 142f1f340

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<SThemeColorBlock,1>,int>
          (TSharedPtr<SThemeColorBlock,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<enum_EHorizontalAlignment,1>,int> @ 142f1f380

void __cdecl
DestructItems<TSharedPtr<enum_EHorizontalAlignment,1>,int>
          (TSharedPtr<EHorizontalAlignment,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int> @ 142f1f3c0

void __cdecl
DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>
          (TSharedPtr<ESelectionMode::Type,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>,int> @ 142f1f400

void __cdecl
DestructItems<TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>,int>
          (TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *param_1,int param_2)

{
  FSlateBrush *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlateBrush *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>,int> @ 142f1f440

void __cdecl
DestructItems<TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>,int>
          (TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>
           *param_1,int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetTypeHash<FTestData_const_,1> @ 142f21340

uint __cdecl GetTypeHash<FTestData_const_,1>(TSharedPtr<FTestData_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<enum_ESelectionMode::Type_const_,1> @ 142f21370

uint __cdecl
GetTypeHash<enum_ESelectionMode::Type_const_,1>(TSharedPtr<ESelectionMode::Type_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// MakeAttributeLambda<`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_&> @ 142f21cc0

TAttribute<ECheckBoxState> * __cdecl
MakeAttributeLambda<_SSegmentedControl<int>::GetCheckBoxStateAttribute_::__l2::<lambda_1>_&>
          (TAttribute<ECheckBoxState> *__return_storage_ptr__,<lambda_1> *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__GetCheckBoxStateAttribute___SSegmentedControl_H__AEBA_AV__TAttribute_W4ECheckBoxState____H_Z___V__6B_
    ;
    uVar2 = *(undefined8 *)&param_1->InValue;
    puVar3[3] = param_1->__this;
    puVar3[4] = uVar2;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  __return_storage_ptr__->Value = Unchecked;
  __return_storage_ptr__->bIsSet = true;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(__return_storage_ptr__->Getter).field_0x8 =
       local_40.DelegateAllocator;
  *(int *)&(__return_storage_ptr__->Getter).field_0x10 = local_40.DelegateSize;
  local_40.DelegateSize = 0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return __return_storage_ptr__;
}

// MakeAttributeLambda<`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_> @ 142f21e40

TAttribute<UE::Math::TVector2<double>_> * __cdecl
MakeAttributeLambda<_SSegmentedControl<int>::RebuildChildren_::__l7::<lambda_1>_>
          (TAttribute<UE::Math::TVector2<double>_> *__return_storage_ptr__,<lambda_1> *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__V<lambda_1>__6__RebuildChildren___SSegmentedControl_H__QEAAXXZ___V__6B_
    ;
    puVar2[3] = param_1->ChildSlotPtr;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = 0.0;
  __return_storage_ptr__->bIsSet = true;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(__return_storage_ptr__->Getter).field_0x8 =
       local_40.DelegateAllocator;
  *(int *)&(__return_storage_ptr__->Getter).field_0x10 = local_40.DelegateSize;
  local_40.DelegateSize = 0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>,int_&,int_&> @ 142f21fc0

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<int,1>_>,1> *param_2,int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>,int_&,int_&> @ 142f21fe0

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *param_2,int *param_3,
                    int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&> @ 142f22000

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>
          (TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *param_1)

{
  STreeView<TSharedPtr<int,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&> @ 142f22010

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>
          (TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> *param_1)

{
  STreeView<TSharedPtr<FTestData,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_> @ 142f22020

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FTestData,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_> @ 142f22030

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1> *param_1)

{
  SListView<TSharedPtr<ESelectionMode::Type,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_> @ 142f22040

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FTestData,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_> @ 142f22050

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<ESelectionMode::Type,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SItemEditor,1>_> @ 142f22060

/* WARNING: Enum "Type": Some values do not have unique names */

T1RequiredArgs<TSharedRef<SItemEditor,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SItemEditor,1>_>(TSharedRef<SItemEditor,1> *param_1)

{
  SItemEditor *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>)param_1;
}

// MakeShareable<FString> @ 142f22070

TRawPtrProxy<FString> __cdecl MakeShareable<FString>(FString *param_1)

{
  FScriptContainerElement *in_RDX;
  
  (param_1->Data).AllocatorInstance.Data = in_RDX;
  return (TRawPtrProxy<FString>)param_1;
}

// MakeShared<int,1,int_&> @ 142f22080

TSharedRef<int,1> * __cdecl
MakeShared<int,1,int_&>(TSharedRef<int,1> *__return_storage_ptr__,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<int,1> *pTVar4;
  
  pTVar3 = operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (int *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    *(int *)&pTVar3[1]._padding_ = *param_1;
    __return_storage_ptr__->Object = (int *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<int,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<int,1,int> @ 142f22130

TSharedRef<int,1> * __cdecl
MakeShared<int,1,int>(TSharedRef<int,1> *__return_storage_ptr__,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<int,1> *pTVar4;
  
  pTVar3 = operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (int *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    *(int *)&pTVar3[1]._padding_ = *param_1;
    __return_storage_ptr__->Object = (int *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<int,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> @ 142f221e0

TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> * __cdecl
MakeShared<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
          (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TObservableArray<TSharedPtr<int,1>_> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TObservableArray_V__TSharedPtr_H_00___Containers_Slate_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (TObservableArray<TSharedPtr<int,1>_> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TObservableArray<TSharedPtr<int,1>_> *)(pTVar3 + 1) ==
        (TObservableArray<TSharedPtr<int,1>_> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<STableRow<TSharedPtr<int,1>_>,1> @ 142f22290

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedPtr<int,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ = (longlong)&STableRow<TSharedPtr<int,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedPtr<int,1>_>::_vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (__return_storage_ptr__,(STableRow<TSharedPtr<int,1>_> *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// MakeTDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> @ 142f22400

TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> @ 142f224b0

TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142f22560

TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_48;
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_W4Type_ESelectionMode___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::
    STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>(pTVar3 + 1);
    pTVar3[1]._padding_ =
         (longlong)&SComboRow<TSharedPtr<ESelectionMode::Type,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<ESelectionMode::Type,1>_>::_vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
  TSharedRef<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>
            (&local_48._RequiredArgs,(SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)(pTVar3 + 1),
             pTVar3);
  local_48._Widget.Object = (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)local_48._RequiredArgs
  ;
  local_48._Widget.SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)local_48._RequiredArgs;
    local_48._Widget.Object = (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               &local_48._Widget.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object ==
      (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> @ 142f22730

TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> @ 142f227e0

TSlateDecl<SListView<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> @ 142f22890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> @ 142f22940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNumericEntryBox<float>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> @ 142f229f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNumericEntryBox<double>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> @ 142f22aa0

TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSegmentedControl<int>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> @ 142f22b50

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> @ 142f22c00

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_> @ 142f22cb0

TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [32];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<int,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>::~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>
            ((TSharedPtr<STableRow<TSharedPtr<int,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142f22e10

TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [32];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedPtr<int,1>_>,1>
                     ((TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<int,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>::~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>
            ((TSharedPtr<STableRow<TSharedPtr<int,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_> @ 142f22f70

TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FTestData,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FTestData,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_> @ 142f23120

TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FTestData,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FTestData,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_> @ 142f232d0

TSlateDecl<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  TSlateDecl<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
  local_38;
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_W4Type_ESelectionMode___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::
    STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>(pTVar3 + 1);
  }
  TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>
            (&local_38._RequiredArgs,(STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)(pTVar3 + 1),
             pTVar3);
  local_38._Widget.Object = (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)local_38._RequiredArgs
  ;
  local_38._Widget.SharedReferenceCount.ReferenceController = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)local_38._RequiredArgs;
    local_38._Widget.Object = (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               &local_38._Widget.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142f23480

TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> @ 142f23530

TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STileView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> @ 142f235e0

TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> @ 142f23690

TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STreeView<TSharedPtr<FTestData,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> @ 142f23740

TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorGradingWheel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorPicker,RequiredArgs::T0RequiredArgs> @ 142f237f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorPicker,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorSlider,RequiredArgs::T0RequiredArgs> @ 142f238a0

TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> @ 142f23950

TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorWheel,RequiredArgs::T0RequiredArgs> @ 142f23a00

TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> @ 142f23ab0

TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_> @ 142f23b60

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_> @ 142f23c10

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<ESelectionMode::Type,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_> @ 142f23cc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_> * __cdecl
MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SItemEditor,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> @ 142f23d70

TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SFxWidget,RequiredArgs::T0RequiredArgs> @ 142f23e20

TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFxWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SHeader,RequiredArgs::T0RequiredArgs> @ 142f23ed0

TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SHeader,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>::TSlateDecl<SHeader,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142f23f80

TSlateDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SHorizontalListItemEditor *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x418);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSHorizontalListItemEditor___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x408);
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SHorizontalListItemEditor::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SHorizontalListItemEditor::_vftable__for__SBorder__;
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SHorizontalListItemEditor,1>::TSharedRef<SHorizontalListItemEditor,1>
            ((TSharedRef<SHorizontalListItemEditor,1> *)(local_48 + 0x10),
             (SHorizontalListItemEditor *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SHorizontalListItemEditor *)local_48._16_8_;
    local_48._0_8_ = (SHorizontalListItemEditor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SHorizontalListItemEditor *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SHorizontalListItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x408);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> @ 142f24160

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInlineEditableTextBlock,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142f24210

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> *
__cdecl MakeTDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                  (TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SItemEditor *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x488);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSItemEditor___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x478);
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SItemEditor::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount = &SItemEditor::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar3[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SItemEditor,1>::TSharedRef<SItemEditor,1>
            ((TSharedRef<SItemEditor,1> *)(local_48 + 0x10),(SItemEditor *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> *
      )local_48) {
    (__return_storage_ptr__->_Widget).Object = (SItemEditor *)local_48._16_8_;
    local_48._0_8_ = (SItemEditor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SItemEditor *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x478);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> @ 142f24450

TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_> @ 142f24500

TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<int,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_> @ 142f245b0

TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SProgressBar,RequiredArgs::T0RequiredArgs> @ 142f24660

TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SProgressBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> @ 142f24710

TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinningImage,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> @ 142f247c0

TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> @ 142f24870

TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STestMenu,RequiredArgs::T0RequiredArgs> @ 142f24920

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STestMenu,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STestMenu,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STextComboBox,RequiredArgs::T0RequiredArgs> @ 142f249d0

TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STextComboBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextComboBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> @ 142f24a80

TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextComboPopup,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> @ 142f24b30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SThrobber,RequiredArgs::T0RequiredArgs> @ 142f24be0

TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SThrobber,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 142f24c90

TSlateDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> *
__cdecl MakeTDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                  (TSlateDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STileItemEditor *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x418);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSTileItemEditor___00_SharedPointerInternals__6B_;
    memset(pTVar3 + 1,0,0x408);
    STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
              ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&STileItemEditor::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount = &STileItemEditor::_vftable__for__SBorder__;
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<STileItemEditor,1>::TSharedRef<STileItemEditor,1>
            ((TSharedRef<STileItemEditor,1> *)(local_48 + 0x10),(STileItemEditor *)(pTVar5 + 1),
             pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (STileItemEditor *)local_48._16_8_;
    local_48._0_8_ = (STileItemEditor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (STileItemEditor *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<STileItemEditor,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x408);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> @ 142f24e70

TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SUserWidgetExample,1> *pTVar3;
  TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SUserWidgetExample *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = SUserWidgetExample::New((TSharedRef<SUserWidgetExample,1> *)(local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (SUserWidgetExample *)local_38._0_8_;
    local_38._0_8_ = (SUserWidgetExample *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SUserWidgetExample,1>::~TSharedPtr<SUserWidgetExample,1>
            ((TSharedPtr<SUserWidgetExample,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (SUserWidgetExample *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SUserWidgetExample,RequiredArgs::T0RequiredArgs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)(__return_storage_ptr__->_Widget).Object,param_1,param_2,param_3,0x2a8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> @ 142f24fd0

TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVolumeControl,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> @ 142f25080

TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,SNumericEntryBox<int>_> @ 142f25130

TIntrusiveReferenceController<SNumericEntryBox<int>,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<int>_>(void)

{
  TIntrusiveReferenceController<SNumericEntryBox<int>,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x4a0);
  if (pTVar1 != (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SNumericEntryBox_H___00_SharedPointerInternals__6B_
    ;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
    *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7__SNumericEntryBox_H__6B_;
    (pTVar1->ObjectStorage).Pad[0x2a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b4] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b5] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b6] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b7] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x300] = '\0';
    (pTVar1->ObjectStorage).Pad[0x301] = '\0';
    (pTVar1->ObjectStorage).Pad[0x302] = '\0';
    (pTVar1->ObjectStorage).Pad[0x303] = '\0';
    (pTVar1->ObjectStorage).Pad[0x304] = '\0';
    (pTVar1->ObjectStorage).Pad[0x305] = '\0';
    (pTVar1->ObjectStorage).Pad[0x306] = '\0';
    (pTVar1->ObjectStorage).Pad[0x307] = '\0';
    (pTVar1->ObjectStorage).Pad[0x308] = '\0';
    (pTVar1->ObjectStorage).Pad[0x309] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x310] = '\0';
    (pTVar1->ObjectStorage).Pad[0x311] = '\0';
    (pTVar1->ObjectStorage).Pad[0x312] = '\0';
    (pTVar1->ObjectStorage).Pad[0x313] = '\0';
    (pTVar1->ObjectStorage).Pad[0x314] = '\0';
    (pTVar1->ObjectStorage).Pad[0x315] = '\0';
    (pTVar1->ObjectStorage).Pad[0x316] = '\0';
    (pTVar1->ObjectStorage).Pad[0x317] = '\0';
    (pTVar1->ObjectStorage).Pad[0x318] = '\0';
    (pTVar1->ObjectStorage).Pad[0x319] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31e] = '\0';
    (pTVar1->ObjectStorage).Pad[799] = '\0';
    (pTVar1->ObjectStorage).Pad[800] = '\0';
    (pTVar1->ObjectStorage).Pad[0x321] = '\0';
    (pTVar1->ObjectStorage).Pad[0x322] = '\0';
    (pTVar1->ObjectStorage).Pad[0x323] = '\0';
    (pTVar1->ObjectStorage).Pad[0x324] = '\0';
    (pTVar1->ObjectStorage).Pad[0x325] = '\0';
    (pTVar1->ObjectStorage).Pad[0x326] = '\0';
    (pTVar1->ObjectStorage).Pad[0x327] = '\0';
    (pTVar1->ObjectStorage).Pad[0x328] = '\0';
    (pTVar1->ObjectStorage).Pad[0x329] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x330] = '\0';
    (pTVar1->ObjectStorage).Pad[0x331] = '\0';
    (pTVar1->ObjectStorage).Pad[0x332] = '\0';
    (pTVar1->ObjectStorage).Pad[0x333] = '\0';
    (pTVar1->ObjectStorage).Pad[0x334] = '\0';
    (pTVar1->ObjectStorage).Pad[0x335] = '\0';
    (pTVar1->ObjectStorage).Pad[0x336] = '\0';
    (pTVar1->ObjectStorage).Pad[0x337] = '\0';
    (pTVar1->ObjectStorage).Pad[0x338] = '\0';
    (pTVar1->ObjectStorage).Pad[0x339] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x340] = '\0';
    (pTVar1->ObjectStorage).Pad[0x341] = '\0';
    (pTVar1->ObjectStorage).Pad[0x342] = '\0';
    (pTVar1->ObjectStorage).Pad[0x343] = '\0';
    (pTVar1->ObjectStorage).Pad[0x348] = '\0';
    (pTVar1->ObjectStorage).Pad[0x349] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x350] = '\0';
    (pTVar1->ObjectStorage).Pad[0x351] = '\0';
    (pTVar1->ObjectStorage).Pad[0x352] = '\0';
    (pTVar1->ObjectStorage).Pad[0x353] = '\0';
    (pTVar1->ObjectStorage).Pad[0x354] = '\0';
    (pTVar1->ObjectStorage).Pad[0x355] = '\0';
    (pTVar1->ObjectStorage).Pad[0x356] = '\0';
    (pTVar1->ObjectStorage).Pad[0x357] = '\0';
    (pTVar1->ObjectStorage).Pad[0x358] = '\0';
    (pTVar1->ObjectStorage).Pad[0x359] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x360] = '\0';
    (pTVar1->ObjectStorage).Pad[0x361] = '\0';
    (pTVar1->ObjectStorage).Pad[0x362] = '\0';
    (pTVar1->ObjectStorage).Pad[0x363] = '\0';
    (pTVar1->ObjectStorage).Pad[0x364] = '\0';
    (pTVar1->ObjectStorage).Pad[0x365] = '\0';
    (pTVar1->ObjectStorage).Pad[0x366] = '\0';
    (pTVar1->ObjectStorage).Pad[0x367] = '\0';
    (pTVar1->ObjectStorage).Pad[0x368] = '\0';
    (pTVar1->ObjectStorage).Pad[0x369] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x370] = '\0';
    (pTVar1->ObjectStorage).Pad[0x371] = '\0';
    (pTVar1->ObjectStorage).Pad[0x372] = '\0';
    (pTVar1->ObjectStorage).Pad[0x373] = '\0';
    (pTVar1->ObjectStorage).Pad[0x378] = '\0';
    (pTVar1->ObjectStorage).Pad[0x379] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x380] = '\0';
    (pTVar1->ObjectStorage).Pad[0x381] = '\0';
    (pTVar1->ObjectStorage).Pad[0x382] = '\0';
    (pTVar1->ObjectStorage).Pad[899] = '\0';
    (pTVar1->ObjectStorage).Pad[900] = '\0';
    (pTVar1->ObjectStorage).Pad[0x385] = '\0';
    (pTVar1->ObjectStorage).Pad[0x386] = '\0';
    (pTVar1->ObjectStorage).Pad[0x387] = '\0';
    (pTVar1->ObjectStorage).Pad[0x388] = '\0';
    (pTVar1->ObjectStorage).Pad[0x389] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38b] = '\0';
    FText::FText((FText *)((pTVar1->ObjectStorage).Pad + 0x390));
    (pTVar1->ObjectStorage).Pad[0x3b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ba] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e6] = '\0';
    (pTVar1->ObjectStorage).Pad[999] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x410] = '\0';
    (pTVar1->ObjectStorage).Pad[0x428] = '\0';
    (pTVar1->ObjectStorage).Pad[0x429] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x418] = '\0';
    (pTVar1->ObjectStorage).Pad[0x419] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x420] = '\0';
    (pTVar1->ObjectStorage).Pad[0x421] = '\0';
    (pTVar1->ObjectStorage).Pad[0x422] = '\0';
    (pTVar1->ObjectStorage).Pad[0x423] = '\0';
    (pTVar1->ObjectStorage).Pad[0x424] = '\0';
    (pTVar1->ObjectStorage).Pad[0x425] = '\0';
    (pTVar1->ObjectStorage).Pad[0x426] = '\0';
    (pTVar1->ObjectStorage).Pad[0x427] = '\0';
    (pTVar1->ObjectStorage).Pad[0x434] = '\0';
    (pTVar1->ObjectStorage).Pad[0x438] = '\0';
    (pTVar1->ObjectStorage).Pad[0x450] = '\0';
    (pTVar1->ObjectStorage).Pad[0x451] = '\0';
    (pTVar1->ObjectStorage).Pad[0x452] = '\0';
    (pTVar1->ObjectStorage).Pad[0x453] = '\0';
    (pTVar1->ObjectStorage).Pad[0x454] = '\0';
    (pTVar1->ObjectStorage).Pad[0x455] = '\0';
    (pTVar1->ObjectStorage).Pad[0x456] = '\0';
    (pTVar1->ObjectStorage).Pad[0x457] = '\0';
    (pTVar1->ObjectStorage).Pad[0x440] = '\0';
    (pTVar1->ObjectStorage).Pad[0x441] = '\0';
    (pTVar1->ObjectStorage).Pad[0x442] = '\0';
    (pTVar1->ObjectStorage).Pad[0x443] = '\0';
    (pTVar1->ObjectStorage).Pad[0x444] = '\0';
    (pTVar1->ObjectStorage).Pad[0x445] = '\0';
    (pTVar1->ObjectStorage).Pad[0x446] = '\0';
    (pTVar1->ObjectStorage).Pad[0x447] = '\0';
    (pTVar1->ObjectStorage).Pad[0x448] = '\0';
    (pTVar1->ObjectStorage).Pad[0x449] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44a] = '\0';
    (pTVar1->ObjectStorage).Pad[1099] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x468] = '\0';
    (pTVar1->ObjectStorage).Pad[0x470] = '\0';
    (pTVar1->ObjectStorage).Pad[0x488] = '\0';
    (pTVar1->ObjectStorage).Pad[0x489] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x478] = '\0';
    (pTVar1->ObjectStorage).Pad[0x479] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x480] = '\0';
    (pTVar1->ObjectStorage).Pad[0x481] = '\0';
    (pTVar1->ObjectStorage).Pad[0x482] = '\0';
    (pTVar1->ObjectStorage).Pad[0x483] = '\0';
    (pTVar1->ObjectStorage).Pad[0x484] = '\0';
    (pTVar1->ObjectStorage).Pad[0x485] = '\0';
    (pTVar1->ObjectStorage).Pad[0x486] = '\0';
    (pTVar1->ObjectStorage).Pad[0x487] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *)0x0;
}

// NewIntrusiveReferenceController<1,SNumericEntryBox<float>_> @ 142f25340

TIntrusiveReferenceController<SNumericEntryBox<float>,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<float>_>(void)

{
  TIntrusiveReferenceController<SNumericEntryBox<float>,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x4a0);
  if (pTVar1 != (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SNumericEntryBox_M___00_SharedPointerInternals__6B_
    ;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
    *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7__SNumericEntryBox_M__6B_;
    (pTVar1->ObjectStorage).Pad[0x2a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b4] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b5] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b6] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b7] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x300] = '\0';
    (pTVar1->ObjectStorage).Pad[0x301] = '\0';
    (pTVar1->ObjectStorage).Pad[0x302] = '\0';
    (pTVar1->ObjectStorage).Pad[0x303] = '\0';
    (pTVar1->ObjectStorage).Pad[0x304] = '\0';
    (pTVar1->ObjectStorage).Pad[0x305] = '\0';
    (pTVar1->ObjectStorage).Pad[0x306] = '\0';
    (pTVar1->ObjectStorage).Pad[0x307] = '\0';
    (pTVar1->ObjectStorage).Pad[0x308] = '\0';
    (pTVar1->ObjectStorage).Pad[0x309] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x310] = '\0';
    (pTVar1->ObjectStorage).Pad[0x311] = '\0';
    (pTVar1->ObjectStorage).Pad[0x312] = '\0';
    (pTVar1->ObjectStorage).Pad[0x313] = '\0';
    (pTVar1->ObjectStorage).Pad[0x314] = '\0';
    (pTVar1->ObjectStorage).Pad[0x315] = '\0';
    (pTVar1->ObjectStorage).Pad[0x316] = '\0';
    (pTVar1->ObjectStorage).Pad[0x317] = '\0';
    (pTVar1->ObjectStorage).Pad[0x318] = '\0';
    (pTVar1->ObjectStorage).Pad[0x319] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31e] = '\0';
    (pTVar1->ObjectStorage).Pad[799] = '\0';
    (pTVar1->ObjectStorage).Pad[800] = '\0';
    (pTVar1->ObjectStorage).Pad[0x321] = '\0';
    (pTVar1->ObjectStorage).Pad[0x322] = '\0';
    (pTVar1->ObjectStorage).Pad[0x323] = '\0';
    (pTVar1->ObjectStorage).Pad[0x324] = '\0';
    (pTVar1->ObjectStorage).Pad[0x325] = '\0';
    (pTVar1->ObjectStorage).Pad[0x326] = '\0';
    (pTVar1->ObjectStorage).Pad[0x327] = '\0';
    (pTVar1->ObjectStorage).Pad[0x328] = '\0';
    (pTVar1->ObjectStorage).Pad[0x329] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x330] = '\0';
    (pTVar1->ObjectStorage).Pad[0x331] = '\0';
    (pTVar1->ObjectStorage).Pad[0x332] = '\0';
    (pTVar1->ObjectStorage).Pad[0x333] = '\0';
    (pTVar1->ObjectStorage).Pad[0x334] = '\0';
    (pTVar1->ObjectStorage).Pad[0x335] = '\0';
    (pTVar1->ObjectStorage).Pad[0x336] = '\0';
    (pTVar1->ObjectStorage).Pad[0x337] = '\0';
    (pTVar1->ObjectStorage).Pad[0x338] = '\0';
    (pTVar1->ObjectStorage).Pad[0x339] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x340] = '\0';
    (pTVar1->ObjectStorage).Pad[0x341] = '\0';
    (pTVar1->ObjectStorage).Pad[0x342] = '\0';
    (pTVar1->ObjectStorage).Pad[0x343] = '\0';
    (pTVar1->ObjectStorage).Pad[0x348] = '\0';
    (pTVar1->ObjectStorage).Pad[0x349] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x350] = '\0';
    (pTVar1->ObjectStorage).Pad[0x351] = '\0';
    (pTVar1->ObjectStorage).Pad[0x352] = '\0';
    (pTVar1->ObjectStorage).Pad[0x353] = '\0';
    (pTVar1->ObjectStorage).Pad[0x354] = '\0';
    (pTVar1->ObjectStorage).Pad[0x355] = '\0';
    (pTVar1->ObjectStorage).Pad[0x356] = '\0';
    (pTVar1->ObjectStorage).Pad[0x357] = '\0';
    (pTVar1->ObjectStorage).Pad[0x358] = '\0';
    (pTVar1->ObjectStorage).Pad[0x359] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x360] = '\0';
    (pTVar1->ObjectStorage).Pad[0x361] = '\0';
    (pTVar1->ObjectStorage).Pad[0x362] = '\0';
    (pTVar1->ObjectStorage).Pad[0x363] = '\0';
    (pTVar1->ObjectStorage).Pad[0x364] = '\0';
    (pTVar1->ObjectStorage).Pad[0x365] = '\0';
    (pTVar1->ObjectStorage).Pad[0x366] = '\0';
    (pTVar1->ObjectStorage).Pad[0x367] = '\0';
    (pTVar1->ObjectStorage).Pad[0x368] = '\0';
    (pTVar1->ObjectStorage).Pad[0x369] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x370] = '\0';
    (pTVar1->ObjectStorage).Pad[0x371] = '\0';
    (pTVar1->ObjectStorage).Pad[0x372] = '\0';
    (pTVar1->ObjectStorage).Pad[0x373] = '\0';
    (pTVar1->ObjectStorage).Pad[0x378] = '\0';
    (pTVar1->ObjectStorage).Pad[0x379] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x380] = '\0';
    (pTVar1->ObjectStorage).Pad[0x381] = '\0';
    (pTVar1->ObjectStorage).Pad[0x382] = '\0';
    (pTVar1->ObjectStorage).Pad[899] = '\0';
    (pTVar1->ObjectStorage).Pad[900] = '\0';
    (pTVar1->ObjectStorage).Pad[0x385] = '\0';
    (pTVar1->ObjectStorage).Pad[0x386] = '\0';
    (pTVar1->ObjectStorage).Pad[0x387] = '\0';
    (pTVar1->ObjectStorage).Pad[0x388] = '\0';
    (pTVar1->ObjectStorage).Pad[0x389] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38b] = '\0';
    FText::FText((FText *)((pTVar1->ObjectStorage).Pad + 0x390));
    (pTVar1->ObjectStorage).Pad[0x3b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ba] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e6] = '\0';
    (pTVar1->ObjectStorage).Pad[999] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x410] = '\0';
    (pTVar1->ObjectStorage).Pad[0x428] = '\0';
    (pTVar1->ObjectStorage).Pad[0x429] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x418] = '\0';
    (pTVar1->ObjectStorage).Pad[0x419] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x420] = '\0';
    (pTVar1->ObjectStorage).Pad[0x421] = '\0';
    (pTVar1->ObjectStorage).Pad[0x422] = '\0';
    (pTVar1->ObjectStorage).Pad[0x423] = '\0';
    (pTVar1->ObjectStorage).Pad[0x424] = '\0';
    (pTVar1->ObjectStorage).Pad[0x425] = '\0';
    (pTVar1->ObjectStorage).Pad[0x426] = '\0';
    (pTVar1->ObjectStorage).Pad[0x427] = '\0';
    (pTVar1->ObjectStorage).Pad[0x434] = '\0';
    (pTVar1->ObjectStorage).Pad[0x438] = '\0';
    (pTVar1->ObjectStorage).Pad[0x450] = '\0';
    (pTVar1->ObjectStorage).Pad[0x451] = '\0';
    (pTVar1->ObjectStorage).Pad[0x452] = '\0';
    (pTVar1->ObjectStorage).Pad[0x453] = '\0';
    (pTVar1->ObjectStorage).Pad[0x454] = '\0';
    (pTVar1->ObjectStorage).Pad[0x455] = '\0';
    (pTVar1->ObjectStorage).Pad[0x456] = '\0';
    (pTVar1->ObjectStorage).Pad[0x457] = '\0';
    (pTVar1->ObjectStorage).Pad[0x440] = '\0';
    (pTVar1->ObjectStorage).Pad[0x441] = '\0';
    (pTVar1->ObjectStorage).Pad[0x442] = '\0';
    (pTVar1->ObjectStorage).Pad[0x443] = '\0';
    (pTVar1->ObjectStorage).Pad[0x444] = '\0';
    (pTVar1->ObjectStorage).Pad[0x445] = '\0';
    (pTVar1->ObjectStorage).Pad[0x446] = '\0';
    (pTVar1->ObjectStorage).Pad[0x447] = '\0';
    (pTVar1->ObjectStorage).Pad[0x448] = '\0';
    (pTVar1->ObjectStorage).Pad[0x449] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44a] = '\0';
    (pTVar1->ObjectStorage).Pad[1099] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x468] = '\0';
    (pTVar1->ObjectStorage).Pad[0x470] = '\0';
    (pTVar1->ObjectStorage).Pad[0x488] = '\0';
    (pTVar1->ObjectStorage).Pad[0x489] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x478] = '\0';
    (pTVar1->ObjectStorage).Pad[0x479] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x480] = '\0';
    (pTVar1->ObjectStorage).Pad[0x481] = '\0';
    (pTVar1->ObjectStorage).Pad[0x482] = '\0';
    (pTVar1->ObjectStorage).Pad[0x483] = '\0';
    (pTVar1->ObjectStorage).Pad[0x484] = '\0';
    (pTVar1->ObjectStorage).Pad[0x485] = '\0';
    (pTVar1->ObjectStorage).Pad[0x486] = '\0';
    (pTVar1->ObjectStorage).Pad[0x487] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *)0x0;
}

// NewIntrusiveReferenceController<1,SNumericEntryBox<double>_> @ 142f25550

TIntrusiveReferenceController<SNumericEntryBox<double>,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<double>_>(void)

{
  TIntrusiveReferenceController<SNumericEntryBox<double>,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x4b0);
  if (pTVar1 != (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SNumericEntryBox_N___00_SharedPointerInternals__6B_
    ;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
    *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7__SNumericEntryBox_N__6B_;
    (pTVar1->ObjectStorage).Pad[0x2a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b4] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b5] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b6] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b7] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x300] = '\0';
    (pTVar1->ObjectStorage).Pad[0x301] = '\0';
    (pTVar1->ObjectStorage).Pad[0x302] = '\0';
    (pTVar1->ObjectStorage).Pad[0x303] = '\0';
    (pTVar1->ObjectStorage).Pad[0x304] = '\0';
    (pTVar1->ObjectStorage).Pad[0x305] = '\0';
    (pTVar1->ObjectStorage).Pad[0x306] = '\0';
    (pTVar1->ObjectStorage).Pad[0x307] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x308] = '\0';
    (pTVar1->ObjectStorage).Pad[0x309] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x310] = '\0';
    (pTVar1->ObjectStorage).Pad[0x311] = '\0';
    (pTVar1->ObjectStorage).Pad[0x312] = '\0';
    (pTVar1->ObjectStorage).Pad[0x313] = '\0';
    (pTVar1->ObjectStorage).Pad[0x314] = '\0';
    (pTVar1->ObjectStorage).Pad[0x315] = '\0';
    (pTVar1->ObjectStorage).Pad[0x316] = '\0';
    (pTVar1->ObjectStorage).Pad[0x317] = '\0';
    (pTVar1->ObjectStorage).Pad[0x318] = '\0';
    (pTVar1->ObjectStorage).Pad[0x319] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31e] = '\0';
    (pTVar1->ObjectStorage).Pad[799] = '\0';
    (pTVar1->ObjectStorage).Pad[800] = '\0';
    (pTVar1->ObjectStorage).Pad[0x321] = '\0';
    (pTVar1->ObjectStorage).Pad[0x322] = '\0';
    (pTVar1->ObjectStorage).Pad[0x323] = '\0';
    (pTVar1->ObjectStorage).Pad[0x324] = '\0';
    (pTVar1->ObjectStorage).Pad[0x325] = '\0';
    (pTVar1->ObjectStorage).Pad[0x326] = '\0';
    (pTVar1->ObjectStorage).Pad[0x327] = '\0';
    (pTVar1->ObjectStorage).Pad[0x328] = '\0';
    (pTVar1->ObjectStorage).Pad[0x329] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x330] = '\0';
    (pTVar1->ObjectStorage).Pad[0x331] = '\0';
    (pTVar1->ObjectStorage).Pad[0x332] = '\0';
    (pTVar1->ObjectStorage).Pad[0x333] = '\0';
    (pTVar1->ObjectStorage).Pad[0x334] = '\0';
    (pTVar1->ObjectStorage).Pad[0x335] = '\0';
    (pTVar1->ObjectStorage).Pad[0x336] = '\0';
    (pTVar1->ObjectStorage).Pad[0x337] = '\0';
    (pTVar1->ObjectStorage).Pad[0x338] = '\0';
    (pTVar1->ObjectStorage).Pad[0x339] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x340] = '\0';
    (pTVar1->ObjectStorage).Pad[0x341] = '\0';
    (pTVar1->ObjectStorage).Pad[0x342] = '\0';
    (pTVar1->ObjectStorage).Pad[0x343] = '\0';
    (pTVar1->ObjectStorage).Pad[0x344] = '\0';
    (pTVar1->ObjectStorage).Pad[0x345] = '\0';
    (pTVar1->ObjectStorage).Pad[0x346] = '\0';
    (pTVar1->ObjectStorage).Pad[0x347] = '\0';
    (pTVar1->ObjectStorage).Pad[0x348] = '\0';
    (pTVar1->ObjectStorage).Pad[0x349] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x350] = '\0';
    (pTVar1->ObjectStorage).Pad[0x351] = '\0';
    (pTVar1->ObjectStorage).Pad[0x352] = '\0';
    (pTVar1->ObjectStorage).Pad[0x353] = '\0';
    (pTVar1->ObjectStorage).Pad[0x354] = '\0';
    (pTVar1->ObjectStorage).Pad[0x355] = '\0';
    (pTVar1->ObjectStorage).Pad[0x356] = '\0';
    (pTVar1->ObjectStorage).Pad[0x357] = '\0';
    (pTVar1->ObjectStorage).Pad[0x358] = '\0';
    (pTVar1->ObjectStorage).Pad[0x359] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x360] = '\0';
    (pTVar1->ObjectStorage).Pad[0x361] = '\0';
    (pTVar1->ObjectStorage).Pad[0x362] = '\0';
    (pTVar1->ObjectStorage).Pad[0x363] = '\0';
    (pTVar1->ObjectStorage).Pad[0x368] = '\0';
    (pTVar1->ObjectStorage).Pad[0x369] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x370] = '\0';
    (pTVar1->ObjectStorage).Pad[0x371] = '\0';
    (pTVar1->ObjectStorage).Pad[0x372] = '\0';
    (pTVar1->ObjectStorage).Pad[0x373] = '\0';
    (pTVar1->ObjectStorage).Pad[0x374] = '\0';
    (pTVar1->ObjectStorage).Pad[0x375] = '\0';
    (pTVar1->ObjectStorage).Pad[0x376] = '\0';
    (pTVar1->ObjectStorage).Pad[0x377] = '\0';
    (pTVar1->ObjectStorage).Pad[0x378] = '\0';
    (pTVar1->ObjectStorage).Pad[0x379] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x380] = '\0';
    (pTVar1->ObjectStorage).Pad[0x381] = '\0';
    (pTVar1->ObjectStorage).Pad[0x382] = '\0';
    (pTVar1->ObjectStorage).Pad[899] = '\0';
    (pTVar1->ObjectStorage).Pad[900] = '\0';
    (pTVar1->ObjectStorage).Pad[0x385] = '\0';
    (pTVar1->ObjectStorage).Pad[0x386] = '\0';
    (pTVar1->ObjectStorage).Pad[0x387] = '\0';
    (pTVar1->ObjectStorage).Pad[0x388] = '\0';
    (pTVar1->ObjectStorage).Pad[0x389] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x390] = '\0';
    (pTVar1->ObjectStorage).Pad[0x391] = '\0';
    (pTVar1->ObjectStorage).Pad[0x392] = '\0';
    (pTVar1->ObjectStorage).Pad[0x393] = '\0';
    FText::FText((FText *)((pTVar1->ObjectStorage).Pad + 0x398));
    (pTVar1->ObjectStorage).Pad[0x3c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e6] = '\0';
    (pTVar1->ObjectStorage).Pad[999] = '\0';
    (pTVar1->ObjectStorage).Pad[1000] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x400] = '\0';
    (pTVar1->ObjectStorage).Pad[0x401] = '\0';
    (pTVar1->ObjectStorage).Pad[0x402] = '\0';
    (pTVar1->ObjectStorage).Pad[0x403] = '\0';
    (pTVar1->ObjectStorage).Pad[0x404] = '\0';
    (pTVar1->ObjectStorage).Pad[0x405] = '\0';
    (pTVar1->ObjectStorage).Pad[0x406] = '\0';
    (pTVar1->ObjectStorage).Pad[0x407] = '\0';
    (pTVar1->ObjectStorage).Pad[0x408] = '\0';
    (pTVar1->ObjectStorage).Pad[0x409] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x420] = '\0';
    (pTVar1->ObjectStorage).Pad[0x438] = '\0';
    (pTVar1->ObjectStorage).Pad[0x439] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x428] = '\0';
    (pTVar1->ObjectStorage).Pad[0x429] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x430] = '\0';
    (pTVar1->ObjectStorage).Pad[0x431] = '\0';
    (pTVar1->ObjectStorage).Pad[0x432] = '\0';
    (pTVar1->ObjectStorage).Pad[0x433] = '\0';
    (pTVar1->ObjectStorage).Pad[0x434] = '\0';
    (pTVar1->ObjectStorage).Pad[0x435] = '\0';
    (pTVar1->ObjectStorage).Pad[0x436] = '\0';
    (pTVar1->ObjectStorage).Pad[0x437] = '\0';
    (pTVar1->ObjectStorage).Pad[0x444] = '\0';
    (pTVar1->ObjectStorage).Pad[0x448] = '\0';
    (pTVar1->ObjectStorage).Pad[0x460] = '\0';
    (pTVar1->ObjectStorage).Pad[0x461] = '\0';
    (pTVar1->ObjectStorage).Pad[0x462] = '\0';
    (pTVar1->ObjectStorage).Pad[0x463] = '\0';
    (pTVar1->ObjectStorage).Pad[0x464] = '\0';
    (pTVar1->ObjectStorage).Pad[0x465] = '\0';
    (pTVar1->ObjectStorage).Pad[0x466] = '\0';
    (pTVar1->ObjectStorage).Pad[0x467] = '\0';
    (pTVar1->ObjectStorage).Pad[0x450] = '\0';
    (pTVar1->ObjectStorage).Pad[0x451] = '\0';
    (pTVar1->ObjectStorage).Pad[0x452] = '\0';
    (pTVar1->ObjectStorage).Pad[0x453] = '\0';
    (pTVar1->ObjectStorage).Pad[0x454] = '\0';
    (pTVar1->ObjectStorage).Pad[0x455] = '\0';
    (pTVar1->ObjectStorage).Pad[0x456] = '\0';
    (pTVar1->ObjectStorage).Pad[0x457] = '\0';
    (pTVar1->ObjectStorage).Pad[0x458] = '\0';
    (pTVar1->ObjectStorage).Pad[0x459] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x478] = '\0';
    (pTVar1->ObjectStorage).Pad[0x480] = '\0';
    (pTVar1->ObjectStorage).Pad[0x498] = '\0';
    (pTVar1->ObjectStorage).Pad[0x499] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x488] = '\0';
    (pTVar1->ObjectStorage).Pad[0x489] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x490] = '\0';
    (pTVar1->ObjectStorage).Pad[0x491] = '\0';
    (pTVar1->ObjectStorage).Pad[0x492] = '\0';
    (pTVar1->ObjectStorage).Pad[0x493] = '\0';
    (pTVar1->ObjectStorage).Pad[0x494] = '\0';
    (pTVar1->ObjectStorage).Pad[0x495] = '\0';
    (pTVar1->ObjectStorage).Pad[0x496] = '\0';
    (pTVar1->ObjectStorage).Pad[0x497] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *)0x0;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<int,1>_>_> @ 142f25760

TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,STreeView<TSharedPtr<int,1>_>_>(void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<int,1>_>::SListView<TSharedPtr<int,1>_>
            ((SListView<TSharedPtr<int,1>_> *)&pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<int,1>_>::_vftable__for__SCompoundWidget__;
  (pTVar4->ObjectStorage).Pad[0xa00] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa01] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa02] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa03] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa04] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa05] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa06] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa07] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa08] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa09] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa11] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa12] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa13] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa18] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa19] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa20] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa21] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa22] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa23] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa24] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa25] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa26] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa27] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa28] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa29] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa38] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa39] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa40] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa41] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa42] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa43] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa44] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa45] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa46] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa47] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa58] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa59] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5f] = '\0';
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedPtr<int,1>_>::_vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) = &___7__STreeView_V__TSharedPtr_H_00____6B_
  ;
  (pTVar4->ObjectStorage).Pad[0xa60] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa61] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa62] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa63] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa64] = 0x80;
  (pTVar4->ObjectStorage).Pad[0xa65] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa66] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa67] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa68] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa69] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa78] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa79] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa80] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa81] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa82] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa83] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa88] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa89] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa90] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa91] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa92] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa93] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa94] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa95] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa96] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaa] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaab] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaac] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaad] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaae] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaba] = '\0';
  (pTVar4->ObjectStorage).Pad[0xabb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaca] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xace] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad0] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xad1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad9] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xaf0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaea] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaeb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaec] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaed] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaee] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedPtr<int,1>_>::SetItemsSource'::__l2::<lambda_1>::operator()(&local_res8);
  }
  plVar2 = *(longlong **)((pTVar4->ObjectStorage).Pad + 0x9f8);
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1), cVar3 != '\0')) {
    return pTVar4;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &___7__FArrayPointer_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
    }
  }
  SListView<TSharedPtr<int,1>_>::SetItemsSource
            ((SListView<TSharedPtr<int,1>_> *)&pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<int,1>_> *)&local_res8);
  return pTVar4;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<FTestData,1>_>_> @ 142f25950

TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,STreeView<TSharedPtr<FTestData,1>_>_>
          (void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<FTestData,1>_>::SListView<TSharedPtr<FTestData,1>_>
            ((SListView<TSharedPtr<FTestData,1>_> *)&pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<FTestData,1>_>::_vftable__for__SCompoundWidget__;
  (pTVar4->ObjectStorage).Pad[0xa00] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa01] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa02] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa03] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa04] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa05] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa06] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa07] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa08] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa09] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa11] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa12] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa13] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa18] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa19] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa20] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa21] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa22] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa23] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa24] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa25] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa26] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa27] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa28] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa29] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa38] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa39] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa40] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa41] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa42] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa43] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa44] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa45] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa46] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa47] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa58] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa59] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5f] = '\0';
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedPtr<FTestData,1>_>::_vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_VFTestData___00____6B_;
  (pTVar4->ObjectStorage).Pad[0xa60] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa61] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa62] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa63] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa64] = 0x80;
  (pTVar4->ObjectStorage).Pad[0xa65] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa66] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa67] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa68] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa69] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa78] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa79] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa80] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa81] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa82] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa83] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa88] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa89] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa90] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa91] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa92] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa93] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa94] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa95] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa96] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaa] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaab] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaac] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaad] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaae] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaba] = '\0';
  (pTVar4->ObjectStorage).Pad[0xabb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaca] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xace] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad0] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xad1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad9] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xaf0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaea] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaeb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaec] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaed] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaee] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedPtr<FTestData,1>_>::SetItemsSource'::__l2::<lambda_1>::operator()(&local_res8)
    ;
  }
  plVar2 = *(longlong **)((pTVar4->ObjectStorage).Pad + 0x9f8);
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1), cVar3 != '\0')) {
    return pTVar4;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &___7__FArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
    }
  }
  SListView<TSharedPtr<FTestData,1>_>::SetItemsSource
            ((SListView<TSharedPtr<FTestData,1>_> *)&pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<FTestData,1>_> *)&local_res8);
  return pTVar4;
}

// NewIntrusiveReferenceController<1,SColorPicker> @ 142f25b40

TIntrusiveReferenceController<SColorPicker,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SColorPicker>(void)

{
  TIntrusiveReferenceController<SColorPicker,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x480);
  if (pTVar1 != (TIntrusiveReferenceController<SColorPicker,1> *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSColorPicker___00_SharedPointerInternals__6B_;
    memset(&pTVar1->ObjectStorage,0,0x470);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
    *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7SColorPicker__6B_;
    (pTVar1->ObjectStorage).Pad[0x2a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x360] = '\0';
    (pTVar1->ObjectStorage).Pad[0x361] = '\0';
    (pTVar1->ObjectStorage).Pad[0x378] = '\0';
    (pTVar1->ObjectStorage).Pad[0x379] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x368] = '\0';
    (pTVar1->ObjectStorage).Pad[0x369] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x370] = '\0';
    (pTVar1->ObjectStorage).Pad[0x371] = '\0';
    (pTVar1->ObjectStorage).Pad[0x372] = '\0';
    (pTVar1->ObjectStorage).Pad[0x373] = '\0';
    (pTVar1->ObjectStorage).Pad[0x374] = '\0';
    (pTVar1->ObjectStorage).Pad[0x375] = '\0';
    (pTVar1->ObjectStorage).Pad[0x376] = '\0';
    (pTVar1->ObjectStorage).Pad[0x377] = '\0';
    (pTVar1->ObjectStorage).Pad[0x380] = '\0';
    (pTVar1->ObjectStorage).Pad[0x388] = '\0';
    (pTVar1->ObjectStorage).Pad[0x389] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x390] = '\0';
    (pTVar1->ObjectStorage).Pad[0x391] = '\0';
    (pTVar1->ObjectStorage).Pad[0x392] = '\0';
    (pTVar1->ObjectStorage).Pad[0x393] = '\0';
    (pTVar1->ObjectStorage).Pad[0x394] = '\0';
    (pTVar1->ObjectStorage).Pad[0x395] = '\0';
    (pTVar1->ObjectStorage).Pad[0x396] = '\0';
    (pTVar1->ObjectStorage).Pad[0x397] = '\0';
    (pTVar1->ObjectStorage).Pad[0x398] = '\0';
    (pTVar1->ObjectStorage).Pad[0x399] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a8] = '\x19';
    (pTVar1->ObjectStorage).Pad[0x3a9] = '\x19';
    (pTVar1->ObjectStorage).Pad[0x3c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ba] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3be] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e6] = '\0';
    (pTVar1->ObjectStorage).Pad[999] = '\0';
    (pTVar1->ObjectStorage).Pad[1000] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x400] = '\0';
    (pTVar1->ObjectStorage).Pad[0x401] = '\0';
    (pTVar1->ObjectStorage).Pad[0x402] = '\0';
    (pTVar1->ObjectStorage).Pad[0x403] = '\0';
    (pTVar1->ObjectStorage).Pad[0x408] = '\0';
    (pTVar1->ObjectStorage).Pad[0x409] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x410] = '\0';
    (pTVar1->ObjectStorage).Pad[0x411] = '\0';
    (pTVar1->ObjectStorage).Pad[0x412] = '\0';
    (pTVar1->ObjectStorage).Pad[0x413] = '\0';
    (pTVar1->ObjectStorage).Pad[0x414] = '\0';
    (pTVar1->ObjectStorage).Pad[0x415] = '\0';
    (pTVar1->ObjectStorage).Pad[0x416] = '\0';
    (pTVar1->ObjectStorage).Pad[0x417] = '\0';
    (pTVar1->ObjectStorage).Pad[0x418] = '\0';
    (pTVar1->ObjectStorage).Pad[0x419] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x420] = '\0';
    (pTVar1->ObjectStorage).Pad[0x421] = '\0';
    (pTVar1->ObjectStorage).Pad[0x422] = '\0';
    (pTVar1->ObjectStorage).Pad[0x423] = '\0';
    (pTVar1->ObjectStorage).Pad[0x424] = '\0';
    (pTVar1->ObjectStorage).Pad[0x425] = '\0';
    (pTVar1->ObjectStorage).Pad[0x426] = '\0';
    (pTVar1->ObjectStorage).Pad[0x427] = '\0';
    (pTVar1->ObjectStorage).Pad[0x428] = '\0';
    (pTVar1->ObjectStorage).Pad[0x429] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x430] = '\0';
    (pTVar1->ObjectStorage).Pad[0x431] = '\0';
    (pTVar1->ObjectStorage).Pad[0x432] = '\0';
    (pTVar1->ObjectStorage).Pad[0x433] = '\0';
    (pTVar1->ObjectStorage).Pad[0x438] = '\0';
    (pTVar1->ObjectStorage).Pad[0x439] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x440] = '\0';
    (pTVar1->ObjectStorage).Pad[0x441] = '\0';
    (pTVar1->ObjectStorage).Pad[0x442] = '\0';
    (pTVar1->ObjectStorage).Pad[0x443] = '\0';
    (pTVar1->ObjectStorage).Pad[0x444] = '\0';
    (pTVar1->ObjectStorage).Pad[0x445] = '\0';
    (pTVar1->ObjectStorage).Pad[0x446] = '\0';
    (pTVar1->ObjectStorage).Pad[0x447] = '\0';
    (pTVar1->ObjectStorage).Pad[0x448] = '\0';
    (pTVar1->ObjectStorage).Pad[0x449] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44a] = '\0';
    (pTVar1->ObjectStorage).Pad[1099] = '\0';
    (pTVar1->ObjectStorage).Pad[0x450] = '\0';
    (pTVar1->ObjectStorage).Pad[0x451] = '\0';
    (pTVar1->ObjectStorage).Pad[0x452] = '\0';
    (pTVar1->ObjectStorage).Pad[0x453] = '\0';
    (pTVar1->ObjectStorage).Pad[0x454] = '\0';
    (pTVar1->ObjectStorage).Pad[0x455] = '\0';
    (pTVar1->ObjectStorage).Pad[0x456] = '\0';
    (pTVar1->ObjectStorage).Pad[0x457] = '\0';
    (pTVar1->ObjectStorage).Pad[0x458] = '\0';
    (pTVar1->ObjectStorage).Pad[0x459] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x460] = '\0';
    (pTVar1->ObjectStorage).Pad[0x461] = '\0';
    (pTVar1->ObjectStorage).Pad[0x462] = '\0';
    (pTVar1->ObjectStorage).Pad[0x463] = '\0';
    (pTVar1->ObjectStorage).Pad[0x464] = '\0';
    (pTVar1->ObjectStorage).Pad[0x465] = '\0';
    (pTVar1->ObjectStorage).Pad[0x466] = '\0';
    (pTVar1->ObjectStorage).Pad[0x467] = '\0';
    (pTVar1->ObjectStorage).Pad[0x468] = '\0';
    (pTVar1->ObjectStorage).Pad[0x469] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46f] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<SColorPicker,1> *)0x0;
}

// NewIntrusiveReferenceController<1,SInlineEditableTextBlock> @ 142f25cf0

TIntrusiveReferenceController<SInlineEditableTextBlock,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SInlineEditableTextBlock>(void)

{
  TIntrusiveReferenceController<SInlineEditableTextBlock,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x438);
  if (pTVar1 != (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSInlineEditableTextBlock___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar1->ObjectStorage,0,0x428);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
    *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7SInlineEditableTextBlock__6B_;
    (pTVar1->ObjectStorage).Pad[0x2a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ba] = '\0';
    (pTVar1->ObjectStorage).Pad[699] = '\0';
    (pTVar1->ObjectStorage).Pad[700] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2bd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2be] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2bf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x300] = '\0';
    (pTVar1->ObjectStorage).Pad[0x301] = '\0';
    (pTVar1->ObjectStorage).Pad[0x302] = '\0';
    (pTVar1->ObjectStorage).Pad[0x303] = '\0';
    (pTVar1->ObjectStorage).Pad[0x308] = '\0';
    (pTVar1->ObjectStorage).Pad[0x309] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x310] = '\0';
    (pTVar1->ObjectStorage).Pad[0x311] = '\0';
    (pTVar1->ObjectStorage).Pad[0x312] = '\0';
    (pTVar1->ObjectStorage).Pad[0x313] = '\0';
    (pTVar1->ObjectStorage).Pad[0x314] = '\0';
    (pTVar1->ObjectStorage).Pad[0x315] = '\0';
    (pTVar1->ObjectStorage).Pad[0x316] = '\0';
    (pTVar1->ObjectStorage).Pad[0x317] = '\0';
    (pTVar1->ObjectStorage).Pad[0x318] = '\0';
    (pTVar1->ObjectStorage).Pad[0x319] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31b] = '\0';
    (pTVar1->ObjectStorage).Pad[800] = '\0';
    (pTVar1->ObjectStorage).Pad[0x321] = '\0';
    (pTVar1->ObjectStorage).Pad[0x322] = '\0';
    (pTVar1->ObjectStorage).Pad[0x323] = '\0';
    (pTVar1->ObjectStorage).Pad[0x324] = '\0';
    (pTVar1->ObjectStorage).Pad[0x325] = '\0';
    (pTVar1->ObjectStorage).Pad[0x326] = '\0';
    (pTVar1->ObjectStorage).Pad[0x327] = '\0';
    (pTVar1->ObjectStorage).Pad[0x328] = '\0';
    (pTVar1->ObjectStorage).Pad[0x329] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x330] = '\0';
    (pTVar1->ObjectStorage).Pad[0x331] = '\0';
    (pTVar1->ObjectStorage).Pad[0x332] = '\0';
    (pTVar1->ObjectStorage).Pad[0x333] = '\0';
    (pTVar1->ObjectStorage).Pad[0x338] = '\0';
    (pTVar1->ObjectStorage).Pad[0x339] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x340] = '\0';
    (pTVar1->ObjectStorage).Pad[0x341] = '\0';
    (pTVar1->ObjectStorage).Pad[0x342] = '\0';
    (pTVar1->ObjectStorage).Pad[0x343] = '\0';
    (pTVar1->ObjectStorage).Pad[0x344] = '\0';
    (pTVar1->ObjectStorage).Pad[0x345] = '\0';
    (pTVar1->ObjectStorage).Pad[0x346] = '\0';
    (pTVar1->ObjectStorage).Pad[0x347] = '\0';
    (pTVar1->ObjectStorage).Pad[0x348] = '\0';
    (pTVar1->ObjectStorage).Pad[0x349] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x350] = '\0';
    (pTVar1->ObjectStorage).Pad[0x351] = '\0';
    (pTVar1->ObjectStorage).Pad[0x352] = '\0';
    (pTVar1->ObjectStorage).Pad[0x353] = '\0';
    (pTVar1->ObjectStorage).Pad[0x354] = '\0';
    (pTVar1->ObjectStorage).Pad[0x355] = '\0';
    (pTVar1->ObjectStorage).Pad[0x356] = '\0';
    (pTVar1->ObjectStorage).Pad[0x357] = '\0';
    (pTVar1->ObjectStorage).Pad[0x358] = '\0';
    (pTVar1->ObjectStorage).Pad[0x359] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35b] = '\0';
    FText::FText((FText *)((pTVar1->ObjectStorage).Pad + 0x360));
    (pTVar1->ObjectStorage).Pad[0x370] = '\0';
    (pTVar1->ObjectStorage).Pad[0x388] = '\0';
    (pTVar1->ObjectStorage).Pad[0x389] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x378] = '\0';
    (pTVar1->ObjectStorage).Pad[0x379] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x380] = '\0';
    (pTVar1->ObjectStorage).Pad[0x381] = '\0';
    (pTVar1->ObjectStorage).Pad[0x382] = '\0';
    (pTVar1->ObjectStorage).Pad[899] = '\0';
    (pTVar1->ObjectStorage).Pad[900] = '\0';
    (pTVar1->ObjectStorage).Pad[0x385] = '\0';
    (pTVar1->ObjectStorage).Pad[0x386] = '\0';
    (pTVar1->ObjectStorage).Pad[0x387] = '\0';
    FText::FText((FText *)((pTVar1->ObjectStorage).Pad + 0x390));
    (pTVar1->ObjectStorage).Pad[0x3a0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ba] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3be] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ff] = '\0';
    (pTVar1->ObjectStorage).Pad[1000] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x400] = '\0';
    (pTVar1->ObjectStorage).Pad[0x401] = '\0';
    (pTVar1->ObjectStorage).Pad[0x402] = '\0';
    (pTVar1->ObjectStorage).Pad[0x403] = '\0';
    (pTVar1->ObjectStorage).Pad[0x404] = '\0';
    (pTVar1->ObjectStorage).Pad[0x405] = '\0';
    (pTVar1->ObjectStorage).Pad[0x406] = '\0';
    (pTVar1->ObjectStorage).Pad[0x407] = '\0';
    (pTVar1->ObjectStorage).Pad[0x408] = '\0';
    (pTVar1->ObjectStorage).Pad[0x409] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x410] = '\0';
    (pTVar1->ObjectStorage).Pad[0x411] = '\0';
    (pTVar1->ObjectStorage).Pad[0x412] = '\0';
    (pTVar1->ObjectStorage).Pad[0x413] = '\0';
    (pTVar1->ObjectStorage).Pad[0x414] = '\0';
    (pTVar1->ObjectStorage).Pad[0x415] = '\0';
    (pTVar1->ObjectStorage).Pad[0x416] = '\0';
    (pTVar1->ObjectStorage).Pad[0x417] = '\0';
    (pTVar1->ObjectStorage).Pad[0x418] = '\0';
    (pTVar1->ObjectStorage).Pad[0x419] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41f] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *)0x0;
}

// OnCheckStateChanged_Lambda<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_> @ 142f26640

FArguments * __thiscall
SCheckBox::FArguments::
OnCheckStateChanged_Lambda<__SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>
          (FArguments *this,<lambda_2> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnCheckStateChanged).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___R<lambda_1>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z___V__6B_
    ;
    puVar2[3] = (param_1->HBox).Object;
    pTVar1 = (param_1->HBox).SharedReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnCheckStateChanged_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_> @ 142f266f0

FArguments * __thiscall
SCheckBox::FArguments::
OnCheckStateChanged_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l4::<lambda_4>_>
          (FArguments *this,<lambda_4> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnCheckStateChanged).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V<lambda_4>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    uVar1 = *(undefined8 *)&param_1->i;
    puVar2[3] = param_1->__this;
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_> @ 142f26e60

FArguments * __thiscall
SButton::FArguments::
OnClicked_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_15>_>
          (FArguments *this,<lambda_15> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_15>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_> @ 142f26ef0

FArguments * __thiscall
SButton::FArguments::
OnClicked_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_1>_>
          (FArguments *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_> @ 142f26f90

FArguments * __thiscall
SButton::FArguments::
OnClicked_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_2>_>
          (FArguments *this,<lambda_2> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_56__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SExampleLayout::Construct'::__l2::<lambda_3>_> @ 142f27030

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SExampleLayout::Construct_::__l2::<lambda_3>_>
          (FArguments *this,<lambda_3> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = (param_1->SharedSizeValue).Object;
    puVar1[4] = (param_1->SharedSizeValue).SharedReferenceCount.ReferenceController;
    (param_1->SharedSizeValue).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->SharedSizeValue).Object = (int *)0x0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnGenerateRow_Lambda<`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_> @ 142f27500

FArguments * __thiscall
SListView<TSharedPtr<int,1>_>::FArguments::
OnGenerateRow_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_3>_>
          (FArguments *this,<lambda_3> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGenerateRow).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnGenerateRow_Lambda<`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_> @ 142f27590

FArguments * __thiscall
STreeView<TSharedPtr<int,1>_>::FArguments::
OnGenerateRow_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_5>_>
          (FArguments *this,<lambda_5> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGenerateRow).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnGenerateTile_Lambda<`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_> @ 142f27660

FArguments * __thiscall
STileView<TSharedPtr<int,1>_>::FArguments::
OnGenerateTile_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_4>_>
          (FArguments *this,<lambda_4> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateTile,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGenerateTile).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_78__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnGenerateWidget_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_> @ 142f27980

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::
OnGenerateWidget_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_6>_>
          (FArguments *this,<lambda_6> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateWidget,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGenerateWidget).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnGenerateWidget_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_> @ 142f27a10

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::
OnGenerateWidget_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_7>_>
          (FArguments *this,<lambda_7> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateWidget,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGenerateWidget).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy__V<lambda_7>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV1_XZ___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnGetChildren_Lambda<`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_> @ 142f27c10

FArguments * __thiscall
STreeView<TSharedPtr<int,1>_>::FArguments::
OnGetChildren_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_6>_>
          (FArguments *this,<lambda_6> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGetChildren).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_H_00__AEAV__TArray_V__TSharedPtr_H_00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy__V<lambda_6>__1__Construct_SListGalleryWidget_SStarshipGallery__QEAAXAEBUFArguments_67__Z___V__6B_
    ;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnSelectionChanged_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_> @ 142f28570

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::
OnSelectionChanged_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_8>_>
          (FArguments *this,<lambda_8> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnSelectionChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__V<lambda_8>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_> @ 142f28c50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::
OnValueChanged_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_12>_>
          (FArguments *this,<lambda_12> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_12>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_> @ 142f28cf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::
OnValueChanged_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_9>_>
          (FArguments *this,<lambda_9> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy__V<lambda_9>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueCommitted_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_> @ 142f28d90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::
OnValueCommitted_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_10>_>
          (FArguments *this,<lambda_10> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueCommitted).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_10>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueCommitted_Lambda<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_> @ 142f28e30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::
OnValueCommitted_Lambda<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_13>_>
          (FArguments *this,<lambda_13> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueCommitted).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy__V<lambda_13>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// Reverse<TSharedPtr<int,1>_> @ 142f29890

void __cdecl AlgoImpl::Reverse<TSharedPtr<int,1>_>(TSharedPtr<int,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<int,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      piVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = piVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// Reverse<TSharedPtr<FTestData,1>_> @ 142f298e0

void __cdecl
AlgoImpl::Reverse<TSharedPtr<FTestData,1>_>(TSharedPtr<FTestData,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTestData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FTestData,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// ~<lambda_1> @ 142f37270

void __thiscall
``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
~<lambda_1>(void *this)

{
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(this);
  return;
}

// ~<lambda_1> @ 142f372a0

void __thiscall
``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::
~<lambda_1>(void *this)

{
  ::FString::~FString((FString *)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 142f372d0

void __thiscall
``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::
~<lambda_1>(void *this)

{
  ::FString::~FString((FString *)((longlong)this + 8));
  return;
}

// ~<lambda_2> @ 142f37300

void __thiscall
``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::
~<lambda_2>(void *this)

{
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(this);
  return;
}

// ~TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,0,0> @ 142f397a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,0,0>::
~TFunction_OwnedObject<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_11>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_11>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,0,0> @ 142f397c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,0,0>::
~TFunction_OwnedObject<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_14>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_14>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 142f397e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  ``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 142f39800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_H_00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 142f39820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_VFTestData___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,0,1> @ 142f39840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__SStarshipGallery::ConstructIconsGallery_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__5___R1_1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV4_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  ``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,0,1> @ 142f39860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__SStarshipGallery::ConstructIconsGallery_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__5___R<lambda_2>__1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV5_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  ``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`SExampleLayout::Construct'::__l2::<lambda_2>,0,0> @ 142f39880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SExampleLayout::Construct'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_SExampleLayout::Construct_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,0,0> @ 142f398a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,0,0>::
~TFunction_OwnedObject<_SStarshipGallery::ConstructWidgetGallery_::__l4::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,0,0> @ 142f398c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator[] @ 142f41c10

FArguments * __thiscall
NamedSlotProperty<SHeader::FArguments>::operator[]
          (NamedSlotProperty<SHeader::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// operator/ @ 142f42850

FString * __cdecl operator/(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (((param_1->Data).ArrayNum != 0) || (iVar1 = 2, iVar2 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,&param_1->Data,iVar2 + iVar1);
  FString::PathAppend(__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2
                     );
  return __return_storage_ptr__;
}

// operator() @ 142f44ab0

ECheckBoxState __thiscall
``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  SHorizontalBox *this_00;
  
  this_00 = TSharedRef<SHorizontalBox,1>::operator->(this);
  bVar1 = SWidget::IsEnabled((SWidget *)this_00);
  return bVar1;
}

// operator() @ 142f48ae0

EVisibility __thiscall
``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  uchar *in_RDX;
  EVisibility *local_20;
  
  bVar1 = SStarshipGallery::IsIconVisible
                    (*(SStarshipGallery **)this,(FString *)((longlong)this + 8));
  if (bVar1) {
    local_20 = &EVisibility::Visible;
  }
  else {
    local_20 = &EVisibility::Collapsed;
  }
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 142f48b70

EVisibility __thiscall
``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::
operator()(void *this)

{
  bool bVar1;
  uchar *in_RDX;
  EVisibility *local_20;
  
  bVar1 = SStarshipGallery::IsIconVisible
                    (*(SStarshipGallery **)this,(FString *)((longlong)this + 8));
  if (bVar1) {
    local_20 = &EVisibility::Visible;
  }
  else {
    local_20 = &EVisibility::Collapsed;
  }
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 142f48c80

void __thiscall
``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::
operator()(void *this,ECheckBoxState param_1)

{
  bool local_47 [3];
  undefined4 local_44;
  TAttribute<bool> *local_40;
  TAttribute<bool> *local_38;
  SHorizontalBox *local_30;
  TAttribute<bool> local_28;
  
  local_44 = 0;
  local_30 = TSharedRef<SHorizontalBox,1>::operator->(this);
  local_40 = &local_28;
  local_47[0] = param_1 == Checked;
  local_38 = TAttribute<bool>::TAttribute<bool>(local_40,local_47);
  SWidget::SetEnabled((SWidget *)local_30,local_38);
  return;
}

// `vcall'{152,{flat}}'_}' @ 142f510e4

/* [thunk]: __cdecl STableRow<class TSharedPtr<class FTestData,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FTestData,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FTestData,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142f510e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 142f510f4

/* [thunk]: __cdecl STableRow<class TSharedPtr<enum ESelectionMode::Type,1> >::`vcall'{152,{flat}}'
   }' */

void __thiscall
STableRow<TSharedPtr<ESelectionMode::Type,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142f510f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f51104

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<enum
   ESelectionMode::Type,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SComboRow<TSharedPtr<ESelectionMode::Type,1>_>::_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<ESelectionMode::Type,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
                     (&this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142f51114

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<class FTestData,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<FTestData,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FTestData,1>_> *)&this[-1].OnGenerateRow.field_0x10,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142f51128

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<enum
   ESelectionMode::Type,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<ESelectionMode::Type,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<ESelectionMode::Type,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
                     (&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f5113c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<class
   FTestData,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FTestData,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f5114c

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<class FTestData,1>
   >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FTestData,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FTestData,1>_> *)&this[-1].bChangedSelectionOnMouseDown,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f5115c

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<enum
   ESelectionMode::Type,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<ESelectionMode::Type,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<ESelectionMode::Type,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
                     (&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142f5116c

/* [thunk]:public: virtual void * __ptr64 __cdecl STileView<class TSharedPtr<int,1> >::`vector
   deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STileView<TSharedPtr<int,1>_>::_vector_deleting_destructor__adjustor_680__
          (STileView<TSharedPtr<int,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STileView<TSharedPtr<int,1>_> *)&this[-1].field_0x768,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142f51180

/* [thunk]:public: virtual void * __ptr64 __cdecl STileView<class TSharedPtr<class FTestData,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STileView<TSharedPtr<FTestData,1>_>::_vector_deleting_destructor__adjustor_680__
          (STileView<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STileView<TSharedPtr<FTestData,1>_> *)&this[-1].field_0x768,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142f51194

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<int,1> >::`vector
   deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<int,1>_>::_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<int,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<int,1>_> *)&this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 142f511a8

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<class FTestData,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<FTestData,1>_> *)&this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f511bc

/* [thunk]:public: virtual void * __ptr64 __cdecl SHorizontalListItemEditor::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SHorizontalListItemEditor::_vector_deleting_destructor__adjustor_8__
          (SHorizontalListItemEditor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SHorizontalListItemEditor *)&this[-1].ItemToEdit.SharedReferenceCount,param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f511cc

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SItemEditor::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SItemEditor::_vector_deleting_destructor__adjustor_8__(SItemEditor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SItemEditor *)&this[-1].ItemToEdit.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142f511dc

/* [thunk]:public: virtual void * __ptr64 __cdecl STileItemEditor::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STileItemEditor::_vector_deleting_destructor__adjustor_8__(STileItemEditor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STileItemEditor *)&this[-1].ItemToEdit.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142f511f0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51220

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51250

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::
_scalar_deleting_destructor_(FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &___7__FObservableArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51310

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  *(undefined ***)this =
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (((*(longlong *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 0x18) == 0))
     || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if (*(ulong64 *)((longlong)this + 0x20) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f513d0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::
_scalar_deleting_destructor_(FSharedObservableArray<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &___7__FSharedObservableArray_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51460

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__FSharedObservableArray_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (*(ulong64 *)((longlong)this + 0x28) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x28));
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f514f0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51530

void * __thiscall
IBaseDelegateInstance<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51560

void * __thiscall
IBaseDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51590

void * __thiscall
IBaseDelegateInstance<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f515c0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f515f0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51620

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51650

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51680

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f516b0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f516e0

void * __thiscall
IBaseDelegateInstance<enum_EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51710

void * __thiscall
IBaseDelegateInstance<enum_ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51740

void * __thiscall
IBaseDelegateInstance<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51770

void * __thiscall
IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f517a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f517d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51800

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_ESelectionMode::Type,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51830

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51860

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51890

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f518c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_SSearchBox::SearchDirection),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f518f0

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51920

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<enum_ESelectionMode::Type,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51950

void * __thiscall
SBreadcrumbTrail<int>::_scalar_deleting_destructor_(SBreadcrumbTrail<int> *this,uint param_1)

{
  ~SBreadcrumbTrail<int>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f519b0

void * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51a10

void * __thiscall
SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::
  ~STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51a70

void * __thiscall
SListView<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FTestData,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51ad0

void * __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51b30

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SNumericEntryBox<int>::_scalar_deleting_destructor_(SNumericEntryBox<int> *this,uint param_1)

{
  ~SNumericEntryBox<int>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SNumericEntryBox<float>::_scalar_deleting_destructor_(SNumericEntryBox<float> *this,uint param_1)

{
  ~SNumericEntryBox<float>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SNumericEntryBox<double>::_scalar_deleting_destructor_(SNumericEntryBox<double> *this,uint param_1)

{
  ~SNumericEntryBox<double>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51cf0

void * __thiscall
SSegmentedControl<int>::_scalar_deleting_destructor_(SSegmentedControl<int> *this,uint param_1)

{
  ~SSegmentedControl<int>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51d50

void * __thiscall
STableRow<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FTestData,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51db0

void * __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51e10

void * __thiscall
STileView<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (STileView<TSharedPtr<int,1>_> *this,uint param_1)

{
  SListView<TSharedPtr<int,1>_>::~SListView<TSharedPtr<int,1>_>
            ((SListView<TSharedPtr<int,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51e70

void * __thiscall
STileView<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (STileView<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  SListView<TSharedPtr<FTestData,1>_>::~SListView<TSharedPtr<FTestData,1>_>
            ((SListView<TSharedPtr<FTestData,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51ed0

void * __thiscall
STreeView<TSharedPtr<int,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedPtr<int,1>_> *this,uint param_1)

{
  ~STreeView<TSharedPtr<int,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51f30

void * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  ~STreeView<TSharedPtr<FTestData,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51f90

void * __thiscall
TBaseFunctorDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51fc0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FTestData,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f51ff0

void * __thiscall
TBaseFunctorDelegateInstance<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52050

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52080

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f520b0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f520e0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52110

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52140

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52170

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f521a0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SStarshipGallery::Construct'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f521d0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52200

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52230

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52260

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52290

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f522c0

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f522f0

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52320

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52350

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52390

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f523c0

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f523f0

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`SExampleLayout::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52490

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f524c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f524f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::
  ~<lambda_2>((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f525c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f525f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SStarshipGallery::BuildToolbar'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52620

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52650

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52680

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f526b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_ESelectionMode::Type,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f526e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52710

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_ESelectionMode::Type,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52740

void * __thiscall
TBaseRawMethodDelegateInstance<0,SStarshipGallery,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SStarshipGallery,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52770

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<int>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<int>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f527d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<int>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBreadcrumbTrail<int>_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,int___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,int___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f528f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52950

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<int>_const_,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f529e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52b00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<float>_const_,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52cb0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<double>_const_,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52d40

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTestData,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTestData,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52da0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTestData,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTestData,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52e00

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52e60

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f52fe0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerModes>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f530a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerChannels>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53160

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f531c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,enum_EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53220

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerChannels>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f532e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53340

void * __thiscall
TBaseSPMethodDelegateInstance<1,SHorizontalListItemEditor_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SHorizontalListItemEditor_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f533a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SHorizontalListItemEditor_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SHorizontalListItemEditor_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53400

void * __thiscall
TBaseSPMethodDelegateInstance<1,SHorizontalListItemEditor_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SHorizontalListItemEditor_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53460

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SItemEditor_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SItemEditor_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f534c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SItemEditor_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SItemEditor_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53520

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SItemEditor_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SItemEditor_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53580

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f535e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53640

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f536a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53700

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53760

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f537c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53820

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53880

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,enum_ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f538e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableViewTesting_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53940

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,STestMenu_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STestMenu_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f539a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STileItemEditor_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STileItemEditor_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53a00

void * __thiscall
TBaseSPMethodDelegateInstance<1,STileItemEditor_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STileItemEditor_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53a60

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53ac0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,FText>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,FText>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53b30

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53b90

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53bf0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,bool_*>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53c50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWidgetGallery_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetGallery::ERadioChoice>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53cb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<int>,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<int>,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53d10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<int>,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBreadcrumbTrail<int>,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53d70

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53dd0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53e30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1,void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53e90

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53ef0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FTestData,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FTestData,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<int>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<int>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f53fb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<int>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<int>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<int>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<float>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<float>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f540d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<float>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<float>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<float>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<double>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<double>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f541f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<double>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<double>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<double>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f542b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSegmentedControl<int>,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f543d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f544f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54550

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f545b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f546d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54790

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f547f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54850

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,enum_EColorPickerChannels>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f548b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54910

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f549d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy,EVisibility>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy,EVisibility>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54a30

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerHexMode>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPicker,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54af0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SHorizontalListItemEditor,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SHorizontalListItemEditor,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54b50

void * __thiscall
TBaseSPMethodDelegateInstance<0,SHorizontalListItemEditor,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SHorizontalListItemEditor,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SItemEditor,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SItemEditor,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54c10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SItemEditor,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SItemEditor,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54c70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SItemEditor,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SItemEditor,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54cd0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54d30

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54d90

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54df0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54e50

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FTestData,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FTestData,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54ed0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54f30

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54f90

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f54ff0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(double),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55050

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f550b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55110

void * __thiscall
TBaseSPMethodDelegateInstance<0,STableViewTesting,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55170

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STestMenu,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STestMenu,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f551d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STileItemEditor,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STileItemEditor,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55230

void * __thiscall
TBaseSPMethodDelegateInstance<0,STileItemEditor,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STileItemEditor,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55290

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f552f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55350

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<SMenuAnchor,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<SMenuAnchor,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f553c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55420

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55480

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f554e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55540

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f555a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,bool_*>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55600

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,enum_SWidgetGallery::ERadioChoice>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55660

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWidgetGallery,1,void___cdecl(enum_SSearchBox::SearchDirection),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f556c0

void * __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f556f0

void * __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55720

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55750

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55780

void * __thiscall
TCommonDelegateInstanceState<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f557b0

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerModes>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f557e0

void * __thiscall
TCommonDelegateInstanceState<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55810

void * __thiscall
TCommonDelegateInstanceState<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerChannels>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55840

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55870

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f558a0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f558d0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,FText>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,FText>
           *this,uint param_1)

{
  if (*(longlong **)&this->Payload != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->Payload + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55920

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FTestData,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FTestData,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55980

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f559b0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<SMenuAnchor,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<SMenuAnchor,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f559f0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55a20

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55a50

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,bool_*>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55a80

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,enum_SWidgetGallery::ERadioChoice>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55ab0

void * __thiscall
TCommonDelegateInstanceState<enum_EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55ae0

void * __thiscall
TCommonDelegateInstanceState<enum_ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55b10

void * __thiscall
TCommonDelegateInstanceState<float___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerChannels>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55b40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55b70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55ba0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float),FDefaultDelegateUserPolicy,enum_EColorPickerChannels>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55bd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float),FDefaultDelegateUserPolicy,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float),FDefaultDelegateUserPolicy,bool> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55c00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55c30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(double),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(double),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55c60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55c90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_ESelectionMode::Type,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55cc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55cf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55d20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55d50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55d80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,bool_*>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55db0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55e10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,enum_SWidgetGallery::ERadioChoice>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55e40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_SSearchBox::SearchDirection),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55e70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,EVisibility>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,EVisibility>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55ea0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_EColorPickerHexMode>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_11>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_14>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEAA_AU__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__V__TSharedPtr_VSGridPanel___00__AEBVFText___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  ``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_H_00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f55fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_VFTestData___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__5___R1_1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV4_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  ``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__5___R<lambda_2>__1__ConstructIconsGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ_QEBA_AV5_VFText__VFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  ``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f560c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SExampleLayout::Construct'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__Construct_SExampleLayout__QEAAXAEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__3__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__1__ConstructWidgetGallery_SStarshipGallery__QEAA_AV__TSharedRef_VSWidget___00__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56190

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f561d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInlineTextImageStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FInlineTextImageStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56210

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBreadcrumbTrail<int>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SBreadcrumbTrail<int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56250

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56290

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f562d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56310

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56350

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<int>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNumericEntryBox<int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56390

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<float>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNumericEntryBox<float>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f563d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<double>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNumericEntryBox<double>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56410

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSegmentedControl<int>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSegmentedControl<int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56450

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<int>,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSpinBox<int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x710);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56490

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<double>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSpinBox<double>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x758);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f564d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FTestData,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FTestData,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56510

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56550

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STileView<TSharedPtr<int,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56590

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<FTestData,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STileView<TSharedPtr<FTestData,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f565d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<int,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56610

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<FTestData,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56650

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTestData,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTestData,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56690

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f566d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorGradingWheel,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SColorGradingWheel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56710

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorPicker,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SColorPicker,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x480);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56750

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorSlider,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SColorSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorSpectrum,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SColorSpectrum,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f567d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorWheel,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SColorWheel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56810

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SExampleLayout,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SExampleLayout,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEyeDropperButton,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SEyeDropperButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56890

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFxWidget,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SFxWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f568d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHeader,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SHeader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56910

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHorizontalListItemEditor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SHorizontalListItemEditor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInlineEditableTextBlock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SInlineEditableTextBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56990

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SItemEditor,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SItemEditor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x488);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f569d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SStarshipGallery::SListGalleryWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SStarshipGallery::SListGalleryWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56a10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56a50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56a90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SProgressBar,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SProgressBar,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56ad0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinningImage,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSpinningImage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56b10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SStarshipGallery,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SStarshipGallery,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56b50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableViewTesting,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<STableViewTesting,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56b90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STestMenu,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STestMenu,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56bd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextComboBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STextComboBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x398);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56c10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextComboPopup,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<STextComboPopup,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56c50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SThemeColorBlocksBar,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SThemeColorBlocksBar,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56c90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SThrobber,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SThrobber,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56cd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileItemEditor,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<STileItemEditor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56d10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVolumeControl,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SVolumeControl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56d50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetGallery,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SWidgetGallery,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,1000);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56d90

void * __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>,int>
            ((TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>
              *)(this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56df0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<int>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<int>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<int>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<int>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56e30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<float>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<float>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<float>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<float>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56e70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<double>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<double>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<double>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56eb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTableViewDragDrop,SharedPointerInternals::DefaultDeleter<FTableViewDragDrop>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTableViewDragDrop,SharedPointerInternals::DefaultDeleter<FTableViewDragDrop>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56ef0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTestData,SharedPointerInternals::DefaultDeleter<FTestData>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTestData,SharedPointerInternals::DefaultDeleter<FTestData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56f30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SUserWidgetExampleImpl,SharedPointerInternals::DefaultDeleter<SUserWidgetExampleImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SUserWidgetExampleImpl,SharedPointerInternals::DefaultDeleter<SUserWidgetExampleImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56f70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<enum_ESelectionMode::Type,SharedPointerInternals::DefaultDeleter<enum_ESelectionMode::Type>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56fb0

void * __thiscall
TSlotBase<SSegmentedControl<int>::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SSegmentedControl<int>::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f56ff0

void * __thiscall
TTableViewMetadata<TSharedPtr<FTestData,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FTestData,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57060

void * __thiscall
TTableViewMetadata<TSharedPtr<enum_ESelectionMode::Type,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)this = &___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f570d0

void * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57110

void * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57150

void * __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57190

void * __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f571d0

void * __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57210

void * __thiscall
SSegmentedControl<int>::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  ITextData *pIVar5;
  
  pTVar3 = (this->_CheckBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter);
  pvVar4 = *(void **)&(this->_Icon).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Icon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTipWidget).Getter);
  pvVar4 = *(void **)&(this->_ToolTipWidget).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ToolTipWidget).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ToolTipWidget).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Tooltip).Getter);
  pvVar4 = *(void **)&(this->_Tooltip).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Tooltip).Getter);
  pIVar5 = (this->_Tooltip).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter);
  pvVar4 = *(void **)&(this->_Text).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Text).Getter);
  pIVar5 = (this->_Text).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57340

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTableViewDragDrop::_scalar_deleting_destructor_(FTableViewDragDrop *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TestData).SharedReferenceCount.ReferenceController);
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SColorGradingPicker::_scalar_deleting_destructor_(SColorGradingPicker *this,uint param_1)

{
  ~SColorGradingPicker(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f573f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void * __thiscall SColorPicker::_scalar_deleting_destructor_(SColorPicker *this,uint param_1)

{
  ~SColorPicker(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x470);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57450

void * __thiscall SExampleLayout::_scalar_deleting_destructor_(SExampleLayout *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TooltipArea).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f574c0

void * __thiscall
SEyeDropperButton::_scalar_deleting_destructor_(SEyeDropperButton *this,uint param_1)

{
  ~SEyeDropperButton(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x538);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57520

void * __thiscall SHeader::_scalar_deleting_destructor_(SHeader *this,uint param_1)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57580

void * __thiscall
SHorizontalListItemEditor::_scalar_deleting_destructor_
          (SHorizontalListItemEditor *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToEdit).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f575f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SItemEditor::_scalar_deleting_destructor_(SItemEditor *this,uint param_1)

{
  ~SItemEditor(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57650

void * __thiscall
SStarshipGallery::SListGalleryWidget::_scalar_deleting_destructor_
          (SListGalleryWidget *this,uint param_1)

{
  ~SListGalleryWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x328);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f576b0

void * __thiscall
SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::_scalar_deleting_destructor_
          (SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::~TSharedPtr<SListView<TSharedPtr<int,1>_>,1>
            (&this->OwnerListView);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57720

void * __thiscall
SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::_scalar_deleting_destructor_
          (SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnerListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57790

void * __thiscall SProgressBar::_scalar_deleting_destructor_(SProgressBar *this,uint param_1)

{
  ~SProgressBar(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f577f0

void * __thiscall SSpinningImage::_scalar_deleting_destructor_(SSpinningImage *this,uint param_1)

{
  FCurveSequence::~FCurveSequence(&this->SpinAnimationSequence);
  SImage::~SImage((SImage *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57860

void * __thiscall
SStarshipGallery::_scalar_deleting_destructor_(SStarshipGallery *this,uint param_1)

{
  ~SStarshipGallery(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f578c0

void * __thiscall
STableViewTesting::_scalar_deleting_destructor_(STableViewTesting *this,uint param_1)

{
  ~STableViewTesting(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57920

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall STestMenu::_scalar_deleting_destructor_(STestMenu *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PopupAnchor).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57990

void * __thiscall STextComboBox::_scalar_deleting_destructor_(STextComboBox *this,uint param_1)

{
  ~STextComboBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f579f0

void * __thiscall STextComboPopup::_scalar_deleting_destructor_(STextComboPopup *this,uint param_1)

{
  ~STextComboPopup(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57a50

void * __thiscall SThrobber::_scalar_deleting_destructor_(SThrobber *this,uint param_1)

{
  ForElementType<FCurveHandle> FVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HBox).SharedReferenceCount.ReferenceController);
  FVar1 = (this->ThrobberCurve).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FCurveHandle>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FCurveSequence::~FCurveSequence(&this->AnimCurves);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57ad0

void * __thiscall STileItemEditor::_scalar_deleting_destructor_(STileItemEditor *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToEdit).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57b40

void * __thiscall
SUserWidgetExample::_scalar_deleting_destructor_(SUserWidgetExample *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57ba0

void * __thiscall
SUserWidgetExampleImpl::_scalar_deleting_destructor_(SUserWidgetExampleImpl *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57c00

void * __thiscall SVolumeControl::_scalar_deleting_destructor_(SVolumeControl *this,uint param_1)

{
  ~SVolumeControl(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142f57c60

void * __thiscall SWidgetGallery::_scalar_deleting_destructor_(SWidgetGallery *this,uint param_1)

{
  ~SWidgetGallery(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3d8);
  }
  return this;
}

// DestroyColorPicker @ 142fb5fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl DestroyColorPicker(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  char cVar4;
  atomic<int> aVar5;
  longlong *plVar6;
  FWeakReferencer<1> FVar7;
  SWindow *this;
  bool bVar8;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (ColorPickerWindow.Object == (SWindow *)0x0) {
    return;
  }
  if (ColorPickerWindow.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
     ) {
    return;
  }
  if ((int)(ColorPickerWindow.WeakReferenceCount.ReferenceController)->SharedReferenceCount < 1) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SColorPicker::OnColorPickerDestroyOverride,&local_38);
  if (((SColorPicker::OnColorPickerDestroyOverride._16_4_ == 0) ||
      (SColorPicker::OnColorPickerDestroyOverride._8_8_ == 0)) ||
     (cVar4 = (**(code **)(*(longlong *)SColorPicker::OnColorPickerDestroyOverride._8_8_ + 0x38))(),
     cVar4 == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  FVar7 = ColorPickerWindow.WeakReferenceCount;
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &SColorPicker::OnColorPickerDestroyOverride,&local_20);
    plVar6 = (longlong *)0x0;
    if (SColorPicker::OnColorPickerDestroyOverride._16_4_ != 0) {
      plVar6 = (longlong *)SColorPicker::OnColorPickerDestroyOverride._8_8_;
    }
    (**(code **)(*plVar6 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    goto LAB_142fb60cf;
  }
  this = (SWindow *)0x0;
  if (ColorPickerWindow.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
     ) {
LAB_142fb6094:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar2 = (ColorPickerWindow.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142fb6094;
      }
      LOCK();
      aVar5 = (FVar7.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar5;
      if (bVar8) {
        (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar8);
    this = ColorPickerWindow.Object;
    if (ColorPickerWindow.Object == (SWindow *)0x0) goto LAB_142fb6094;
  }
  SWindow::RequestDestroyWindow(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
LAB_142fb60cf:
  FVar7.ReferenceController = ColorPickerWindow.WeakReferenceCount.ReferenceController;
  ColorPickerWindow.Object = (SWindow *)0x0;
  ColorPickerWindow.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
    }
  }
  FVar7.ReferenceController = GlobalColorPicker.WeakReferenceCount.ReferenceController;
  GlobalColorPicker.Object = (SColorPicker *)0x0;
  GlobalColorPicker.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
    }
  }
  return;
}

// GetColorPicker @ 142fd1850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SColorPicker,1> * __cdecl
GetColorPicker(TSharedPtr<SColorPicker,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if (((GlobalColorPicker.Object == (SColorPicker *)0x0) ||
      (GlobalColorPicker.WeakReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(GlobalColorPicker.WeakReferenceCount.ReferenceController)->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SColorPicker *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (SColorPicker *)0x0;
    FVar2 = GlobalColorPicker.WeakReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         GlobalColorPicker.WeakReferenceCount.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = (FVar2.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar1 == aVar3;
        if (bVar4) {
          (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar3 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar3;
      } while (!bVar4);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = GlobalColorPicker.Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// MakeLayoutExample @ 142fe9c80

TSharedRef<SWidget,1> * __cdecl MakeLayoutExample(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  SExampleLayout *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FSlateBaseNamedArgs *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedRef<SWidget,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs> local_278;
  FDestructionSentinel local_260;
  undefined1 *local_248;
  FDestructionSentinel local_240;
  undefined1 *local_228;
  FSlateBaseNamedArgs local_220;
  
  pFVar8 = (FSlateBaseNamedArgs *)SExampleLayout::FArguments::FArguments((FArguments *)&local_220);
  (pFVar8->_RenderTransform).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_RenderTransform).Getter,(FWriteAccessScope *)&local_260);
  local_248 = &(pFVar8->_RenderTransform).Getter.field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_248);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = GetTestRenderTransform;
  }
  if (local_260.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
  }
  (pFVar8->_RenderTransformPivot).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_RenderTransformPivot).Getter,(FWriteAccessScope *)&local_240);
  local_228 = &(pFVar8->_RenderTransformPivot).Getter.field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_228);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = GetTestRenderTransformPivot;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SExampleLayout,RequiredArgs::T0RequiredArgs>
            (&local_278,"SExampleLayout",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SLayoutExample.cpp"
             ,0x1bc,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_278._Widget.Object;
  if (local_278._Widget.Object == (SExampleLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_278._Widget.Object,pFVar8);
  SExampleLayout::Construct(local_278._Widget.Object,(FArguments *)pFVar8);
  if (local_278._Widget.Object == (SExampleLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_278._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_278._Widget.Object)->_padding_ + 0x228))(local_278._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142fe9ea8;
  }
  bVar7 = 0x20;
LAB_142fe9ea8:
  *(byte *)&(local_278._Widget.Object)->_padding_ =
       (byte)(local_278._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_278._Widget.Object)->_padding_ =
       (byte)(local_278._Widget.Object)->_padding_ | bVar7;
  if (local_278._Widget.Object == (SExampleLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_278._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_278._Widget.Object == (SExampleLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar4.ReferenceController = local_278._Widget.SharedReferenceCount.ReferenceController;
  local_278._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_278._Widget.Object = (SExampleLayout *)0x0;
  if (pSVar3 == (SExampleLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_220);
  return __return_storage_ptr__;
}

// MakeStarshipGallery @ 142febee0

TSharedRef<SWidget,1> * __cdecl MakeStarshipGallery(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<SStarshipGallery,1> *pTVar1;
  T0RequiredArgs local_238 [8];
  FArguments *local_230;
  TSharedRef<SStarshipGallery,1> local_228;
  TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs> local_218;
  FSlateBaseNamedArgs local_200;
  
  local_230 = SStarshipGallery::FArguments::FArguments((FArguments *)&local_200);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_238);
  this = MakeTDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>
                   (&local_218,"SStarshipGallery",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                    ,0x67b,local_238);
  pTVar1 = TSlateDecl<SStarshipGallery,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this,&local_228,local_230);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SStarshipGallery>(__return_storage_ptr__,pTVar1);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_228.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_218._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_200);
  return __return_storage_ptr__;
}

// MakeTableViewTesting @ 142febf90

TSharedRef<SWidget,1> * __cdecl MakeTableViewTesting(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  STableViewTesting *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FSlateBaseNamedArgs *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedRef<SWidget,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs> local_278;
  FDestructionSentinel local_260;
  undefined1 *local_248;
  FDestructionSentinel local_240;
  undefined1 *local_228;
  FSlateBaseNamedArgs local_220;
  
  pFVar8 = (FSlateBaseNamedArgs *)
           STableViewTesting::FArguments::FArguments((FArguments *)&local_220);
  (pFVar8->_RenderTransform).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_RenderTransform).Getter,(FWriteAccessScope *)&local_260);
  local_248 = &(pFVar8->_RenderTransform).Getter.field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_248);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = GetTestRenderTransform;
  }
  if (local_260.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
  }
  (pFVar8->_RenderTransformPivot).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_RenderTransformPivot).Getter,(FWriteAccessScope *)&local_240);
  local_228 = &(pFVar8->_RenderTransformPivot).Getter.field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_228);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = GetTestRenderTransformPivot;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STableViewTesting,RequiredArgs::T0RequiredArgs>
            (&local_278,"STableViewTesting",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x64a,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_278._Widget.Object;
  if (local_278._Widget.Object == (STableViewTesting *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_278._Widget.Object,pFVar8);
  STableViewTesting::Construct(local_278._Widget.Object,(FArguments *)pFVar8);
  if (local_278._Widget.Object == (STableViewTesting *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_278._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_278._Widget.Object)->_padding_ + 0x228))(local_278._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142fec1b8;
  }
  bVar7 = 0x20;
LAB_142fec1b8:
  *(byte *)&(local_278._Widget.Object)->_padding_ =
       (byte)(local_278._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_278._Widget.Object)->_padding_ =
       (byte)(local_278._Widget.Object)->_padding_ | bVar7;
  if (local_278._Widget.Object == (STableViewTesting *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_278._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_278._Widget.Object == (STableViewTesting *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar4.ReferenceController = local_278._Widget.SharedReferenceCount.ReferenceController;
  local_278._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_278._Widget.Object = (STableViewTesting *)0x0;
  if (pSVar3 == (STableViewTesting *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_220);
  return __return_storage_ptr__;
}

// MakeWidgetGallery @ 142fec5b0

TSharedRef<SWidget,1> * __cdecl MakeWidgetGallery(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<SWidgetGallery,1> *pTVar1;
  T0RequiredArgs local_248 [8];
  FArguments *local_240;
  FArguments *local_238;
  FArguments *local_230;
  TSharedRef<SWidgetGallery,1> local_228;
  TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs> local_218;
  FSlateBaseNamedArgs local_200;
  
  local_240 = SWidgetGallery::FArguments::FArguments((FArguments *)&local_200);
  local_238 = TSlateBaseNamedArgs<SWidgetGallery>::RenderTransform_Static<>
                        ((TSlateBaseNamedArgs<SWidgetGallery> *)local_240,GetTestRenderTransform);
  local_230 = TSlateBaseNamedArgs<SWidgetGallery>::RenderTransformPivot_Static<>
                        ((TSlateBaseNamedArgs<SWidgetGallery> *)local_238,
                         GetTestRenderTransformPivot);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_248);
  this = MakeTDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>
                   (&local_218,"SWidgetGallery",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SWidgetGallery.cpp"
                    ,0x534,local_248);
  pTVar1 = TSlateDecl<SWidgetGallery,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this,&local_228,local_230);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SWidgetGallery>(__return_storage_ptr__,pTVar1);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_228.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_218._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_200);
  return __return_storage_ptr__;
}

// OpenColorPicker @ 142ff9750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __cdecl OpenColorPicker(FColorPickerArgs *param_1)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  atomic<int> aVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FDeprecateVector2DParameter FVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  EVisibility EVar13;
  FWeakReferencer<1> FVar14;
  FSharedReferencer<1> FVar15;
  SWindow *pSVar16;
  SColorPicker *pSVar17;
  undefined8 uVar18;
  FWeakReferencer<1> FVar19;
  char cVar20;
  bool bVar21;
  undefined1 uVar22;
  byte bVar23;
  bool bVar24;
  bool bVar25;
  FSlateApplication *pFVar26;
  undefined4 *puVar27;
  FDeprecateVector2DParameter *pFVar28;
  FArguments *pFVar29;
  ISlateStyle *pIVar30;
  FName *pFVar31;
  FWidgetPath *pFVar32;
  TSharedRef<SWidget,1> *pTVar33;
  TSharedPtr<IMenu,1> *pTVar34;
  TSharedPtr<SWindow,1> *pTVar35;
  FArguments *pFVar36;
  FText *pFVar37;
  FArguments *pFVar38;
  TSharedRef<SWindow,1> *pTVar39;
  TSharedRef<SWindow,1> *pTVar40;
  undefined8 *puVar41;
  FSharedReferencer<1> FVar42;
  longlong *plVar43;
  undefined1 auStackY_12c8 [32];
  undefined1 local_1266 [14];
  TSharedPtr<SWindow,1> local_1258;
  undefined2 local_1248;
  T0RequiredArgs local_1246;
  T0RequiredArgs local_1245;
  T0RequiredArgs local_1244 [2];
  undefined1 local_1242 [2];
  FLLMScope local_1240;
  FLLMScope local_123c;
  FLLMScope local_1238;
  FPopupTransitionEffect local_1234 [3];
  TSharedRef<SBorder,1> local_1228;
  TSharedRef<SColorPicker,1> local_1218;
  FSlateBrush *local_1208;
  undefined1 local_1200;
  undefined1 local_11f8 [8];
  ForAnyElementType FStack_11f0;
  ulonglong local_11e8;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_11e0;
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> local_11c8;
  float local_11b0;
  float local_11ac;
  FDeprecateVector2DParameter local_11a8;
  FDeprecateVector2DParameter local_11a0;
  FDeprecateVector2DParameter local_1198;
  float local_1190;
  float local_118c;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined1 local_1178;
  undefined1 local_1170 [8];
  ForAnyElementType FStack_1168;
  ulonglong local_1160;
  SWindow *local_1158;
  FSharedReferencer<1> local_1150;
  bool local_1148;
  undefined1 local_1140 [8];
  void *pvStack_1138;
  undefined8 local_1130;
  SWidget *local_1128;
  FSharedReferencer<1> local_1120;
  bool local_1118;
  undefined1 local_1110 [8];
  void *pvStack_1108;
  undefined8 local_1100;
  float local_10f8;
  bool local_10f4;
  undefined1 local_10f0 [8];
  void *pvStack_10e8;
  undefined4 local_10e0;
  undefined1 local_10d8;
  undefined1 local_10d7;
  undefined1 local_10d0 [8];
  void *pvStack_10c8;
  undefined8 local_10c0;
  undefined1 local_10b8;
  undefined1 local_10b7;
  undefined1 local_10b0 [8];
  void *pvStack_10a8;
  undefined8 local_10a0;
  undefined1 local_1098;
  undefined1 local_1097;
  undefined1 local_1090 [8];
  void *pvStack_1088;
  undefined8 local_1080;
  undefined4 local_1078;
  undefined4 local_1074;
  undefined4 local_1070;
  undefined4 local_106c;
  FMemScope local_1068;
  FName local_1060;
  FName local_1058;
  FMemScope local_1050;
  FName local_1048;
  undefined8 local_1040;
  FSharedReferencer<1> local_1038;
  undefined8 local_1030;
  FSharedReferencer<1> local_1028;
  undefined8 local_1020;
  FSharedReferencer<1> local_1018;
  FMemScope local_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined1 local_ff8;
  undefined1 local_ff0 [8];
  void *pvStack_fe8;
  undefined8 local_fe0;
  TAttribute<FText> local_fd8;
  TSharedPtr<SWidget_const_,1> local_fa8;
  TSharedRef<SWindow,1> local_f98;
  TSharedRef<SWidget_const_,1> local_f88;
  TSharedRef<SWidget,1> local_f78;
  FDestructionSentinel local_f68;
  FDestructionSentinel local_f50;
  FName local_f38;
  undefined1 local_f30 [8];
  undefined1 local_f28 [8];
  FReadAccessScope local_f20;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_f08;
  undefined1 local_ef0 [8];
  TReferenceControllerBase<1> *local_ee8;
  TSharedPtr<IMenu,1> local_ee0;
  TSharedRef<SWidget,1> local_ed0;
  FText local_ec0;
  SColorPicker *local_ea8;
  TReferenceControllerBase<1> *pTStack_ea0;
  FReadAccessScope local_e98;
  TSharedRef<SWidget,1> local_e80;
  TSharedRef<SWindow,1> local_e70;
  undefined1 local_e60 [8];
  TReferenceControllerBase<1> *local_e58;
  FReadAccessScope local_e50;
  TSharedRef<SWindow,1> local_e38;
  TSharedRef<SWindow,1> local_e28;
  TSharedRef<SWindow,1> local_e18;
  SWidget *local_e08;
  TReferenceControllerBase<1> *pTStack_e00;
  undefined1 local_df8 [544];
  undefined1 local_bd8 [160];
  FSharedReferencer<1> local_b38;
  TRefCountPtr<ITextData> local_b30;
  undefined1 local_b18 [24];
  FArguments local_b00;
  FArguments local_720;
  FWidgetPath local_328;
  FWidgetPath local_1c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_12c8;
  DestroyColorPicker();
  uVar8 = *(undefined8 *)&(param_1->InitialColor).field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&(param_1->InitialColor).field0_0x0 + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->OnColorCommitted,
             &local_e98);
  if (((*(int *)&(param_1->OnColorCommitted).field_0x10 == 0) ||
      (plVar43 = *(longlong **)&(param_1->OnColorCommitted).field_0x8, plVar43 == (longlong *)0x0))
     || (cVar20 = (**(code **)(*plVar43 + 0x38))(), cVar20 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e98);
    local_1266[0] = 0;
    `OpenColorPicker'::__l2::<lambda_1>::operator()(local_1266);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e98);
  }
  pFVar26 = FSlateApplication::Get();
  puVar27 = (undefined4 *)(**(code **)(*(longlong *)pFVar26 + 0x68))(pFVar26,local_f28);
  uVar12 = SColorPicker::DEFAULT_WINDOW_SIZE.field0_0x0._s_0.X;
  dVar7 = SColorPicker::DEFAULT_WINDOW_SIZE.field0_0x0._s_0.Y + __real_4060400000000000;
  local_1074 = puVar27[1];
  local_1078 = *puVar27;
  local_1070 = local_1078;
  local_106c = local_1074;
  pFVar26 = FSlateApplication::Get();
  local_1190 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  local_118c = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  local_11b0 = (float)(double)uVar12;
  local_11ac = (float)dVar7;
  pFVar28 = (FDeprecateVector2DParameter *)
            (**(code **)(*(longlong *)pFVar26 + 0x1d8))(pFVar26,local_f30);
  uVar3 = *(undefined4 *)pFVar28;
  uVar4 = *(undefined4 *)&pFVar28->field_0x4;
  FVar10 = *pFVar28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SColorPicker::OnColorPickerNonModalCreateOverride,&local_f20);
  if (((SColorPicker::OnColorPickerNonModalCreateOverride._16_4_ == 0) ||
      (SColorPicker::OnColorPickerNonModalCreateOverride._8_8_ == 0)) ||
     (cVar20 = (**(code **)(*(longlong *)SColorPicker::OnColorPickerNonModalCreateOverride._8_8_ +
                           0x38))(), cVar20 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f20);
LAB_142ff9943:
    bVar25 = false;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f20);
    if (param_1->bIsModal != false) goto LAB_142ff9943;
    bVar25 = true;
  }
  local_1258.Object = (SWindow *)0x0;
  local_1258.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar29 = SBorder::FArguments::FArguments(&local_b00);
  pIVar30 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar30 + 0x50);
  pFVar31 = FName::FName(&local_f38,"Brushes.Panel");
  local_1208 = (FSlateBrush *)(*pcVar6)(pIVar30,*pFVar31);
  local_1200 = 1;
  local_11e8 = 0;
  local_11f8 = (undefined1  [8])0x0;
  FStack_11f0.Data = (FScriptContainerElement *)0x0;
  (pFVar29->_BorderImage).Value = local_1208;
  (pFVar29->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11f8,
             (FWriteAccessScope *)&local_f68);
  if (((int)local_11e8 != 0) && (FStack_11f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_11f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11f0,0,0,0x10);
    local_11e8 = local_11e8 & 0xffffffff00000000;
  }
  if (local_f68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f68.Accessor,&local_f68);
  }
  if (FStack_11f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_11f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11f8);
  uVar12 = _UNK_15076c248;
  local_1178 = 1;
  local_1160 = 0;
  local_1188 = ___xmm_41800000418000004180000041800000;
  uStack_1180 = _UNK_15076c248;
  local_1170 = (undefined1  [8])0x0;
  FStack_1168.Data = (FScriptContainerElement *)0x0;
  uVar11 = _UNK_15076c244;
  (pFVar29->_Padding).Value.Left = (float)___xmm_41800000418000004180000041800000;
  uVar18 = _UNK_15076c248;
  (pFVar29->_Padding).Value.Top = (float)uVar11;
  _UNK_15076c248 = (undefined4)uVar12;
  _UNK_15076c24c = SUB84(uVar12,4);
  uVar11 = _UNK_15076c24c;
  (pFVar29->_Padding).Value.Right = (float)_UNK_15076c248;
  _UNK_15076c248 = uVar18;
  (pFVar29->_Padding).Value.Bottom = (float)uVar11;
  (pFVar29->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1170,
             (FWriteAccessScope *)&local_f50);
  if (((int)local_1160 != 0) && (FStack_1168.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1168,0,0,0x10);
    local_1160 = local_1160 & 0xffffffff00000000;
  }
  if (local_f50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f50.Accessor,&local_f50);
  }
  if (FStack_1168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1168.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1170);
  FLLMScope::FLLMScope(&local_1240,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1048 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1050,&local_1048,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_f08,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
             ,0x5bf,&local_1246);
  FMemScope::~FMemScope(&local_1050);
  FLLMScope::~FLLMScope(&local_1240);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=(&local_f08,&local_1228,pFVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f08._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_b00);
  bVar21 = true;
  if (bVar25 == false) {
    if (((param_1->bOpenAsMenu == false) || (param_1->bIsModal != false)) ||
       ((param_1->ParentWidget).Object == (SWidget *)0x0)) {
      pFVar36 = SWindow::FArguments::FArguments((FArguments *)local_df8);
      pFVar36->_AutoCenter = None;
      pFVar36->_ScreenPosition = FVar10;
      pFVar36->_SupportsMaximize = false;
      pFVar36->_SupportsMinimize = false;
      pFVar36->_SizingRule = Autosized;
      local_1198._0_4_ = uVar3;
      local_1198._4_4_ = uVar4;
      pFVar37 = FText::AsLocalizable_Advanced_LocText
                          (&local_ec0,L"ColorPicker",L"WindowHeader",L"Color Picker");
      FText::FText(&local_fd8.Value,pFVar37);
      local_fd8.bIsSet = true;
      local_fd8.Getter._16_8_ = 0;
      local_fd8.Getter._0_8_ = 0;
      local_fd8.Getter._8_8_ = 0;
      FText::operator=(&(pFVar36->_Title).Value,&local_fd8.Value);
      (pFVar36->_Title).bIsSet = local_fd8.bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_Title).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8.Getter);
      TAttribute<FText>::~TAttribute<FText>(&local_fd8);
      FVar42.ReferenceController = local_1228.SharedReferenceCount.ReferenceController;
      if (local_1228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_1228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e08 = (pFVar36->_Content).Widget.Object;
      pTStack_e00 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar36->_Content).Widget.Object = (SWidget *)local_1228.Object;
      (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController =
           local_1228.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e00);
      FLLMScope::FLLMScope
                (&local_123c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1060 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1068,&local_1060,true);
      TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
                (&local_11e0,"SWindow",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                 ,0x5d7,&local_1245);
      FMemScope::~FMemScope(&local_1068);
      FLLMScope::~FLLMScope(&local_123c);
      pSVar16 = local_11e0._Widget.Object;
      if ((local_11e0._Widget.Object == (SWindow *)0x0) &&
         (bVar24 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      SWidget::SWidgetConstruct((SWidget *)local_11e0._Widget.Object,(FSlateBaseNamedArgs *)pFVar36)
      ;
      SWindow::Construct(local_11e0._Widget.Object,pFVar36);
      if ((local_11e0._Widget.Object == (SWindow *)0x0) &&
         (bVar24 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      if (((local_11e0._Widget.Object)->_padding_ & 0x10) == 0) {
        cVar20 = (**(code **)((local_11e0._Widget.Object)->_padding_ + 0x228))
                           (local_11e0._Widget.Object);
        bVar23 = 0;
        if (cVar20 != '\0') goto LAB_142ff9f5e;
      }
      else {
LAB_142ff9f5e:
        bVar23 = 0x20;
      }
      *(byte *)&(local_11e0._Widget.Object)->_padding_ =
           (byte)(local_11e0._Widget.Object)->_padding_ & 0xdf;
      *(byte *)&(local_11e0._Widget.Object)->_padding_ =
           (byte)(local_11e0._Widget.Object)->_padding_ | bVar23;
      if ((local_11e0._Widget.Object == (SWindow *)0x0) &&
         (bVar24 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      pbVar1 = (byte *)((longlong)&(local_11e0._Widget.Object)->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((local_11e0._Widget.Object == (SWindow *)0x0) &&
         (bVar24 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      FVar15.ReferenceController = local_11e0._Widget.SharedReferenceCount.ReferenceController;
      local_11e0._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_11e0._Widget.Object = (SWindow *)0x0;
      if ((pSVar16 == (SWindow *)0x0) &&
         (bVar24 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      local_1038.ReferenceController = FVar15.ReferenceController;
      if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar15.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1258.Object = pSVar16;
      local_1040 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_1258.SharedReferenceCount,&local_1038);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1038.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar15.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar42.ReferenceController);
      if (local_ec0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_ec0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b18);
      if ((void *)local_b18._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b18._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b18);
      if (local_b30.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b30.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b38.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bd8);
      if ((void *)local_bd8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_bd8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_bd8);
      if ((ITextData *)local_df8._520_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_df8._520_8_ + 0x10))();
      }
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_df8);
    }
    else {
      pFVar26 = FSlateApplication::Get();
      local_1248 = 0x100;
      local_11a8 = (FDeprecateVector2DParameter)0x0;
      local_1234[0].SlideDirection = None;
      local_f78.Object = (SWidget *)local_1228.Object;
      local_f78.SharedReferenceCount.ReferenceController =
           local_1228.SharedReferenceCount.ReferenceController;
      if (local_1228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_11a0._0_4_ = uVar3;
      local_11a0._4_4_ = uVar4;
      pFVar32 = FWidgetPath::FWidgetPath(&local_1c8);
      pTVar33 = TSharedPtr<SWidget,1>::ToSharedRef(&param_1->ParentWidget,&local_ed0);
      pTVar34 = FSlateApplication::PushMenu
                          (pFVar26,&local_ee0,pTVar33,pFVar32,&local_f78,&local_11a0,local_1234,
                           false,&local_11a8,SUB82(&local_1248,0),false,-1);
      if ((pTVar34->Object == (IMenu *)0x0) &&
         (bVar21 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      pTVar35 = (TSharedPtr<SWindow,1> *)
                (**(code **)((longlong)*pTVar34->Object + 0x18))(pTVar34->Object,local_ef0);
      if (&local_1258 != pTVar35) {
        local_1258.Object = pTVar35->Object;
        pTVar35->Object = (SWindow *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1258.SharedReferenceCount,&pTVar35->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ee8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ee0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ed0.SharedReferenceCount.ReferenceController);
      FWidgetPath::~FWidgetPath(&local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f78.SharedReferenceCount.ReferenceController);
      bVar21 = false;
    }
  }
  pFVar38 = SColorPicker::FArguments::FArguments(&local_720);
  local_ff8 = 1;
  local_fe0 = 0;
  local_ff0 = (undefined1  [8])0x0;
  pvStack_fe8 = (void *)0x0;
  *(undefined8 *)&(pFVar38->_TargetColorAttribute).Value.field0_0x0 = uVar8;
  *(undefined8 *)((longlong)&(pFVar38->_TargetColorAttribute).Value.field0_0x0 + 8) = uVar9;
  (pFVar38->_TargetColorAttribute).bIsSet = true;
  local_1008 = uVar8;
  uStack_1000 = uVar9;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_TargetColorAttribute).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff0);
  if (pvStack_fe8 != (void *)0x0) {
    FMemory::Free(pvStack_fe8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ff0);
  local_10d8 = param_1->bUseAlpha;
  local_10d7 = 1;
  local_10c0 = 0;
  local_10d0 = (undefined1  [8])0x0;
  pvStack_10c8 = (void *)0x0;
  (pFVar38->_UseAlpha).Value = (bool)local_10d8;
  (pFVar38->_UseAlpha).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_UseAlpha).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10d0);
  if (pvStack_10c8 != (void *)0x0) {
    FMemory::Free(pvStack_10c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10d0);
  if ((param_1->bOnlyRefreshOnMouseUp == false) || (param_1->bIsModal != false)) {
    local_10b8 = false;
  }
  else {
    local_10b8 = true;
  }
  local_10b7 = 1;
  local_10a0 = 0;
  local_10b0 = (undefined1  [8])0x0;
  pvStack_10a8 = (void *)0x0;
  (pFVar38->_OnlyRefreshOnMouseUp).Value = (bool)local_10b8;
  (pFVar38->_OnlyRefreshOnMouseUp).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_OnlyRefreshOnMouseUp).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10b0);
  if (pvStack_10a8 != (void *)0x0) {
    FMemory::Free(pvStack_10a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10b0);
  if ((param_1->bOnlyRefreshOnOk == false) && (param_1->bIsModal == false)) {
    local_1098 = false;
  }
  else {
    local_1098 = true;
  }
  local_1097 = 1;
  local_1080 = 0;
  local_1090 = (undefined1  [8])0x0;
  pvStack_1088 = (void *)0x0;
  (pFVar38->_OnlyRefreshOnOk).Value = (bool)local_1098;
  (pFVar38->_OnlyRefreshOnOk).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_OnlyRefreshOnOk).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1090);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1090);
  if (pvStack_1088 != (void *)0x0) {
    FMemory::Free(pvStack_1088);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1090);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&pFVar38->_OnColorCommitted,&param_1->OnColorCommitted);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&pFVar38->_OnColorPickerCancelled,&param_1->OnColorPickerCancelled);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar38->_OnInteractivePickBegin,&param_1->OnInteractivePickBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar38->_OnInteractivePickEnd,&param_1->OnInteractivePickEnd);
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar38->_OnColorPickerWindowClosed,&param_1->OnColorPickerWindowClosed);
  FVar42.ReferenceController = local_1258.SharedReferenceCount.ReferenceController;
  local_1158 = local_1258.Object;
  local_1150.ReferenceController = local_1258.SharedReferenceCount.ReferenceController;
  if (local_1258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1148 = true;
  local_1130 = 0;
  local_1140 = (undefined1  [8])0x0;
  pvStack_1138 = (void *)0x0;
  if (&pFVar38->_ParentWindow != (TAttribute<TSharedPtr<SWindow,1>_> *)&local_1158) {
    (pFVar38->_ParentWindow).Value.Object = local_1258.Object;
    local_1158 = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar38->_ParentWindow).Value.SharedReferenceCount,&local_1150);
  }
  (pFVar38->_ParentWindow).bIsSet = local_1148;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_ParentWindow).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1140);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1140);
  if (pvStack_1138 != (void *)0x0) {
    FMemory::Free(pvStack_1138);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1150.ReferenceController);
  local_10f8 = (param_1->DisplayGamma).Value;
  local_10f4 = (param_1->DisplayGamma).bIsSet;
  local_10f0 = (undefined1  [8])0x0;
  pvStack_10e8 = (void *)0x0;
  local_10e0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_10f0,
             &(param_1->DisplayGamma).Getter);
  (pFVar38->_DisplayGamma).Value = local_10f8;
  (pFVar38->_DisplayGamma).bIsSet = local_10f4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar38->_DisplayGamma).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10f0);
  if (pvStack_10e8 != (void *)0x0) {
    FMemory::Free(pvStack_10e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10f0);
  bVar24 = (param_1->sRGBOverride).bIsSet;
  if (bVar24 != false) {
    local_1242[0] = (param_1->sRGBOverride).TypedValue;
  }
  if ((TOptional<bool> *)local_1242 != &pFVar38->_sRGBOverride) {
    if (bVar24 == false) {
      if ((pFVar38->_sRGBOverride).bIsSet != false) {
        (pFVar38->_sRGBOverride).bIsSet = false;
      }
    }
    else {
      (pFVar38->_sRGBOverride).TypedValue = (bool)local_1242[0];
      (pFVar38->_sRGBOverride).bIsSet = true;
    }
  }
  pFVar38->_OverrideColorPickerCreation = bVar25;
  local_1120.ReferenceController =
       (param_1->OptionalOwningDetailsView).SharedReferenceCount.ReferenceController;
  local_1128 = (param_1->OptionalOwningDetailsView).Object;
  if (local_1120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1120.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1120.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1118 = true;
  local_1100 = 0;
  local_1110 = (undefined1  [8])0x0;
  pvStack_1108 = (void *)0x0;
  if (&pFVar38->_OptionalOwningDetailsView != (TAttribute<TSharedPtr<SWidget,1>_> *)&local_1128) {
    (pFVar38->_OptionalOwningDetailsView).Value.Object = local_1128;
    local_1128 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar38->_OptionalOwningDetailsView).Value.SharedReferenceCount,&local_1120);
  }
  (pFVar38->_OptionalOwningDetailsView).bIsSet = local_1118;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar38->_OptionalOwningDetailsView).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1110);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1110);
  if (pvStack_1108 != (void *)0x0) {
    FMemory::Free(pvStack_1108);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1120.ReferenceController);
  FLLMScope::FLLMScope(&local_1238,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1058 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1010,&local_1058,true);
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>
            (&local_11c8,"SColorPicker",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
             ,0x5e4,local_1244);
  FMemScope::~FMemScope(&local_1010);
  FLLMScope::~FLLMScope(&local_1238);
  pSVar17 = local_11c8._Widget.Object;
  if ((local_11c8._Widget.Object == (SColorPicker *)0x0) &&
     (bVar24 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar6 = (code *)swi(3);
    uVar22 = (*pcVar6)();
    return (bool)uVar22;
  }
  SWidget::SWidgetConstruct((SWidget *)local_11c8._Widget.Object,(FSlateBaseNamedArgs *)pFVar38);
  SColorPicker::Construct(local_11c8._Widget.Object,pFVar38);
  if ((local_11c8._Widget.Object == (SColorPicker *)0x0) &&
     (bVar24 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar6 = (code *)swi(3);
    uVar22 = (*pcVar6)();
    return (bool)uVar22;
  }
  if (((local_11c8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar20 = (**(code **)((local_11c8._Widget.Object)->_padding_ + 0x228))
                       (local_11c8._Widget.Object);
    bVar23 = 0;
    if (cVar20 == '\0') goto LAB_142ffa6ef;
  }
  bVar23 = 0x20;
LAB_142ffa6ef:
  *(byte *)&(local_11c8._Widget.Object)->_padding_ =
       (byte)(local_11c8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_11c8._Widget.Object)->_padding_ =
       (byte)(local_11c8._Widget.Object)->_padding_ | bVar23;
  if ((local_11c8._Widget.Object == (SColorPicker *)0x0) &&
     (bVar24 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar6 = (code *)swi(3);
    uVar22 = (*pcVar6)();
    return (bool)uVar22;
  }
  pbVar1 = (byte *)((longlong)&(local_11c8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_11c8._Widget.Object == (SColorPicker *)0x0) &&
     (bVar24 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar24)) {
    pcVar6 = (code *)swi(3);
    uVar22 = (*pcVar6)();
    return (bool)uVar22;
  }
  local_1218.SharedReferenceCount.ReferenceController =
       local_11c8._Widget.SharedReferenceCount.ReferenceController;
  local_1218.Object = local_11c8._Widget.Object;
  local_11c8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_11c8._Widget.Object = (SColorPicker *)0x0;
  if ((pSVar17 == (SColorPicker *)0x0) &&
     (bVar24 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar24)) {
    pcVar6 = (code *)swi(3);
    uVar22 = (*pcVar6)();
    return (bool)uVar22;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SColorPicker::FArguments::~FArguments(&local_720);
  if (bVar25 == false) {
    local_ea8 = local_1218.Object;
    pTStack_ea0 = local_1218.SharedReferenceCount.ReferenceController;
    pcVar6 = *(code **)((local_1228.Object)->_padding_ + 0x248);
    if (local_1218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar6)(local_1228.Object,&local_ea8);
    if (param_1->bIsModal == false) {
      if (bVar21) {
        if ((param_1->ParentWidget).Object == (SWidget *)0x0) {
          pFVar26 = FSlateApplication::Get();
          pcVar6 = *(code **)(*(longlong *)pFVar26 + 0x10);
          pTVar39 = TSharedPtr<SWindow,1>::ToSharedRef(&local_1258,&local_e18);
          puVar41 = (undefined8 *)(*pcVar6)(pFVar26,local_e60,pTVar39,1);
          local_1028.ReferenceController = (TReferenceControllerBase<1> *)puVar41[1];
          local_1258.Object = (SWindow *)*puVar41;
          if (local_1028.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1028.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_1028.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1030 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1258.SharedReferenceCount,&local_1028);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1028.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e58);
          FVar42.ReferenceController = local_1258.SharedReferenceCount.ReferenceController;
        }
        else {
          FWidgetPath::FWidgetPath(&local_328);
          pFVar26 = FSlateApplication::Get();
          EVar13 = EVisibility::Visible;
          pTVar33 = TSharedPtr<SWidget,1>::ToSharedRef(&param_1->ParentWidget,&local_e80);
          local_f88.Object = pTVar33->Object;
          local_f88.SharedReferenceCount.ReferenceController =
               (pTVar33->SharedReferenceCount).ReferenceController;
          if (local_f88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f88.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FSlateApplication::GeneratePathToWidgetChecked(pFVar26,&local_f88,&local_328,EVar13);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e80.SharedReferenceCount.ReferenceController);
          pFVar26 = FSlateApplication::Get();
          pTVar39 = FWidgetPath::GetWindow(&local_328,&local_e38);
          pTVar40 = TSharedPtr<SWindow,1>::ToSharedRef(&local_1258,&local_e28);
          pTVar39 = FSlateApplication::AddWindowAsNativeChild
                              (pFVar26,&local_e70,pTVar40,pTVar39,true);
          local_1018.ReferenceController = (pTVar39->SharedReferenceCount).ReferenceController;
          local_1258.Object = pTVar39->Object;
          if (local_1018.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1018.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_1018.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1020 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1258.SharedReferenceCount,&local_1018);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1018.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e70.SharedReferenceCount.ReferenceController);
          FWidgetPath::~FWidgetPath(&local_328);
          FVar42.ReferenceController = local_1258.SharedReferenceCount.ReferenceController;
        }
      }
    }
    else {
      pFVar26 = FSlateApplication::Get();
      local_fa8.Object = (param_1->ParentWidget).Object;
      local_fa8.SharedReferenceCount.ReferenceController =
           (param_1->ParentWidget).SharedReferenceCount.ReferenceController;
      if (local_fa8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_fa8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_fa8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_1258.Object == (SWindow *)0x0) &&
         (bVar25 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar25)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      local_f98.Object = local_1258.Object;
      local_f98.SharedReferenceCount.ReferenceController =
           local_1258.SharedReferenceCount.ReferenceController;
      if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar42.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar42.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_1258.Object == (SWindow *)0x0) &&
         (bVar25 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar25)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      FSlateApplication::AddModalWindow(pFVar26,&local_f98,&local_fa8,false);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &SColorPicker::OnColorPickerNonModalCreateOverride,&local_e50);
    plVar43 = (longlong *)0x0;
    if (SColorPicker::OnColorPickerNonModalCreateOverride._16_4_ != 0) {
      plVar43 = (longlong *)SColorPicker::OnColorPickerNonModalCreateOverride._8_8_;
    }
    (**(code **)(*plVar43 + 0x60))(plVar43,&local_1218);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e50);
  }
  ColorPickerWindow.Object = local_1258.Object;
  FVar19.ReferenceController = ColorPickerWindow.WeakReferenceCount.ReferenceController;
  if (FVar42.ReferenceController != ColorPickerWindow.WeakReferenceCount.ReferenceController) {
    if (FVar42.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar42.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar42.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FVar14.ReferenceController = ColorPickerWindow.WeakReferenceCount.ReferenceController;
    FVar19.ReferenceController = FVar42.ReferenceController;
    if (ColorPickerWindow.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(ColorPickerWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((FVar14.ReferenceController)->_padding_ + 8))(FVar14.ReferenceController,1);
      }
    }
  }
  ColorPickerWindow.WeakReferenceCount.ReferenceController = FVar19.ReferenceController;
  FVar15.ReferenceController = local_1218.SharedReferenceCount.ReferenceController;
  GlobalColorPicker.Object = local_1218.Object;
  if (local_1218.SharedReferenceCount.ReferenceController !=
      GlobalColorPicker.WeakReferenceCount.ReferenceController) {
    if (local_1218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1218.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1218.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FVar19.ReferenceController = GlobalColorPicker.WeakReferenceCount.ReferenceController;
    if (GlobalColorPicker.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(GlobalColorPicker.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((FVar19.ReferenceController)->_padding_ + 8))(FVar19.ReferenceController,1);
      }
    }
    GlobalColorPicker.WeakReferenceCount.ReferenceController = FVar15.ReferenceController;
  }
  TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_1218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1228.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar42.ReferenceController);
  return true;
}

// IMPLEMENT_MODULE_AppFramework @ 143017830

void __cdecl IMPLEMENT_MODULE_AppFramework(void)

{
  return;
}

// DefaultUndeterminedString'' @ 15035fbc0

void __cdecl
`dynamic_atexit_destructor_for_'SNumericEntryBox<int>::DefaultUndeterminedString__(void)

{
  if (SNumericEntryBox<int>::DefaultUndeterminedString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SNumericEntryBox<int>::DefaultUndeterminedString.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// DefaultUndeterminedString'' @ 15035fbe0

void __cdecl
`dynamic_atexit_destructor_for_'SNumericEntryBox<float>::DefaultUndeterminedString__(void)

{
  if (SNumericEntryBox<float>::DefaultUndeterminedString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fbef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SNumericEntryBox<float>::DefaultUndeterminedString.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// DefaultUndeterminedString'' @ 15035fc00

void __cdecl
`dynamic_atexit_destructor_for_'SNumericEntryBox<double>::DefaultUndeterminedString__(void)

{
  if (SNumericEntryBox<double>::DefaultUndeterminedString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035fc0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SNumericEntryBox<double>::DefaultUndeterminedString.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// Instance'' @ 15035fc20

void __cdecl `dynamic_atexit_destructor_for_'FTestStyle::Instance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FTestStyle::Instance.SharedReferenceCount.ReferenceController);
  return;
}

// OnColorPickerDestroyOverride'' @ 15035fc40

void __cdecl `dynamic_atexit_destructor_for_'SColorPicker::OnColorPickerDestroyOverride__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SColorPicker::OnColorPickerDestroyOverride,(FWriteAccessScope *)&local_28);
  if ((SColorPicker::OnColorPickerDestroyOverride._16_4_ != 0) &&
     (SColorPicker::OnColorPickerDestroyOverride._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SColorPicker::OnColorPickerDestroyOverride._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SColorPicker::OnColorPickerDestroyOverride.field_0x8,0,0,0x10);
    SColorPicker::OnColorPickerDestroyOverride._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SColorPicker::OnColorPickerDestroyOverride._8_8_ != 0) {
    FMemory::Free((void *)SColorPicker::OnColorPickerDestroyOverride._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SColorPicker::OnColorPickerDestroyOverride);
  return;
}

// OnColorPickerNonModalCreateOverride'' @ 15035fce0

void __cdecl
`dynamic_atexit_destructor_for_'SColorPicker::OnColorPickerNonModalCreateOverride__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SColorPicker::OnColorPickerNonModalCreateOverride,(FWriteAccessScope *)&local_28);
  if ((SColorPicker::OnColorPickerNonModalCreateOverride._16_4_ != 0) &&
     (SColorPicker::OnColorPickerNonModalCreateOverride._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SColorPicker::OnColorPickerNonModalCreateOverride._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SColorPicker::OnColorPickerNonModalCreateOverride.field_0x8,0,0
               ,0x10);
    SColorPicker::OnColorPickerNonModalCreateOverride._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SColorPicker::OnColorPickerNonModalCreateOverride._8_8_ != 0) {
    FMemory::Free((void *)SColorPicker::OnColorPickerNonModalCreateOverride._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SColorPicker::OnColorPickerNonModalCreateOverride);
  return;
}

// `dynamic_atexit_destructor_for_'ColorPickerWindow'' @ 15035fd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__ColorPickerWindow__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = ColorPickerWindow.WeakReferenceCount.ReferenceController;
  if (ColorPickerWindow.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar1 = &(ColorPickerWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00015035fda3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'GlobalColorPicker'' @ 15035fdb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GlobalColorPicker__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = GlobalColorPicker.WeakReferenceCount.ReferenceController;
  if (GlobalColorPicker.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar1 = &(GlobalColorPicker.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00015035fdd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035fde0

void __cdecl
`SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035fe00

void __cdecl
`SListView<TSharedPtr<FTestData,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTestData,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTestData,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTestData,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035fe20

void __cdecl
`SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Type'' @ 15035fe40

void __cdecl `FTableViewDragDrop::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FTableViewDragDrop::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FTableViewDragDrop::GetTypeId(void)'::
      __l2::Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FTableViewDragDrop::GetTypeId(void)'::
      __l2::Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 15049b030

bool __thiscall `OpenColorPicker'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5778401742513243567>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5778401742513243567>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

