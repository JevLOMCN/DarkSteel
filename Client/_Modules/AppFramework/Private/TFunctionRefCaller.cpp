// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 13

// Call @ 142f5b7c0

TOptional<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>,TOptional<float>_>
::Call(void *param_1)

{
  void *in_RDX;
  
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>::operator()(in_RDX);
  return (TOptional<float>)param_1;
}

// Call @ 142f5b7f0

TOptional<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>,TOptional<float>_>
::Call(void *param_1)

{
  void *in_RDX;
  
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>::operator()(in_RDX);
  return (TOptional<float>)param_1;
}

// Call @ 142f5b820

ECheckBoxState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,enum_ECheckBoxState>
::Call(void *param_1)

{
  bool bVar1;
  SHorizontalBox *this;
  
  this = TSharedRef<SHorizontalBox,1>::operator->(param_1);
  bVar1 = SWidget::IsEnabled((SWidget *)this);
  return bVar1;
}

// Call @ 142f5b830

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
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

// Call @ 142f5b840

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
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

// Call @ 142f5b850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> TStack_28;
  TSharedRef<SWidget,1> TStack_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)param_1 + 8),&TStack_18);
  TStack_28.Object = *(SWidget **)(*(longlong *)param_1 + 0x468);
  TStack_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x470);
  if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_2,&TStack_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_2,&TStack_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 142f5b860

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,EVisibility>
::Call(void *param_1)

{
  void *in_RDX;
  
  ``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::
  operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142f5b890

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,EVisibility>
::Call(void *param_1)

{
  void *in_RDX;
  
  ``SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::
  operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 142f5b8c0

FText * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`SExampleLayout::Construct'::__l2::<lambda_2>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  `SExampleLayout::Construct'::__l2::<lambda_2>::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 142f5b8f0

ECheckBoxState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>,enum_ECheckBoxState>
::Call(void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x2c8) == *(int *)((longlong)param_1 + 8);
}

// Call @ 142f5b900

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>,FText>::Call
          (FText *__return_storage_ptr__,void *param_1)

{
  `SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14306edf0

FText * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FText_(__cdecl*)(void),FText>::Call
          (FText *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 14306ee10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> TStack_28;
  TSharedRef<SWidget,1> TStack_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)param_1 + 8),&TStack_18);
  TStack_28.Object = *(SWidget **)(*(longlong *)param_1 + 0x468);
  TStack_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x470);
  if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_2,&TStack_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_2,&TStack_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

