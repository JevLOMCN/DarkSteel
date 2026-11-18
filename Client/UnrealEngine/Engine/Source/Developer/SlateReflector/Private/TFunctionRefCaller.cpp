// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 9

// Call @ 142e30e00

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call(void *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142e30e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (bool)(**(code **)param_1)();
  return bVar1;
}

// Call @ 142e30e10

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
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

// Call @ 142e30e20

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,float>
::Call(void *param_1)

{
  return *(float *)(*(longlong *)param_1 + 0x4e8);
}

// Call @ 142e30e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<int,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
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

// Call @ 142e30e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
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

// Call @ 142e30e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
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

// Call @ 142e30e70

TOptional<FPaintGeometry> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationSimulationOverlay::PaintLiveNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
::Call(TOptional<FPaintGeometry> *__return_storage_ptr__,void *param_1,
      FNavigationSimulationWidgetInfo *param_2)

{
  `FNavigationSimulationOverlay::PaintLiveNode'::__l6::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 142e30ea0

TOptional<FPaintGeometry> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationSimulationOverlay::PaintSnapshotNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
::Call(TOptional<FPaintGeometry> *__return_storage_ptr__,void *param_1,
      FNavigationSimulationWidgetInfo *param_2)

{
  `FNavigationSimulationOverlay::PaintSnapshotNode'::__l6::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 142e30ed0

ECheckBoxState __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,enum_ECheckBoxState>
::Call(void *param_1)

{
  return *(char *)(*(longlong *)param_1 + 0x4ed) != '\0';
}

