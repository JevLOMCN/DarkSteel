// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 45

// DestroyObject @ 146914060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>,1>
                *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInitialValueProcessor_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 146914090

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>,1>
                *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInitialValueProcessor_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1469140c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
                *this)

{
  UE::MovieScene::
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469140d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
                *this)

{
  UE::MovieScene::
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469140e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 146914100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 146914120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 146914140

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 146914160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialParameterStorage,1>
              *this)

{
  UE::MovieScene::
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146914170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedWidgetMaterialSwitcherStorage,1>
              *this)

{
  UE::MovieScene::
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146914180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBackgroundBlur,1>::DestroyObject
          (TIntrusiveReferenceController<SBackgroundBlur,1> *this)

{
  SBackgroundBlur::~SBackgroundBlur((SBackgroundBlur *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboBox<UObject_*>,1> *this)

{
  SComboBox<UObject_*>::~SComboBox<UObject_*>((SComboBox<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<FName>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboBox<FName>,1> *this)

{
  SComboBox<FName>::~SComboBox<FName>((SComboBox<FName> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboRow<UObject_*>,1> *this)

{
  STableRow<UObject_*>::~STableRow<UObject_*>((STableRow<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<FName>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboRow<FName>,1> *this)

{
  STableRow<FName>::~STableRow<FName>((STableRow<FName> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<UObject_*>,1> *this)

{
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<FName>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<FName>,1> *this)

{
  SListView<FName>::~SListView<FName>((SListView<FName> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SObjectTableRow<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<SObjectTableRow<UObject_*>,1> *this)

{
  SObjectTableRow<UObject_*>::~SObjectTableRow<UObject_*>
            ((SObjectTableRow<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<UObject_*>,1> *this)

{
  STableRow<UObject_*>::~STableRow<UObject_*>((STableRow<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<FName>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<FName>,1> *this)

{
  STableRow<FName>::~STableRow<FName>((STableRow<FName> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdf90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<STileView<UObject_*>,1> *this)

{
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdfa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<UObject_*>,1>::DestroyObject
          (TIntrusiveReferenceController<STreeView<UObject_*>,1> *this)

{
  STreeView<UObject_*>::~STreeView<UObject_*>((STreeView<UObject_*> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469bdfb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<UObject_*>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<UObject_*>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1469be000

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<FName>,1>::DestroyObject
          (TIntrusiveReferenceController<TTableViewMetadata<FName>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1469be050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FNavigationMetaData,1> *this)

{
  FNavigationMetaData::~FNavigationMetaData((FNavigationMetaData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPostBufferBlurUpdaterProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FPostBufferBlurUpdaterProxy,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSlatePostProcessorUpdaterProxy__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001469be08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1469be0a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FReflectionMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FReflectionMetaData,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1469be0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAutoRefreshViewport,1>::DestroyObject
          (TIntrusiveReferenceController<SAutoRefreshViewport,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x368));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x358));
  FPreviewScene::~FPreviewScene((FPreviewScene *)((this->ObjectStorage).Pad + 0x308));
  SViewport::~SViewport((SViewport *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be110

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SExpandableArea,1>::DestroyObject
          (TIntrusiveReferenceController<SExpandableArea,1> *this)

{
  SExpandableArea::~SExpandableArea((SExpandableArea *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be120

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInputKeySelector,1>::DestroyObject
          (TIntrusiveReferenceController<SInputKeySelector,1> *this)

{
  SInputKeySelector::~SInputKeySelector((SInputKeySelector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be130

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<UObject_*>::SListViewPinnedRowWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<UObject_*>::SListViewPinnedRowWidget,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be170

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMouseHoverWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SMouseHoverWidget,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SObjectWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SObjectWidget,1> *this)

{
  SObjectWidget::~SObjectWidget((SObjectWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be190

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPostBufferUpdate,1>::DestroyObject
          (TIntrusiveReferenceController<SPostBufferUpdate,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x238));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x220);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be1d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRadialBox,1>::DestroyObject
          (TIntrusiveReferenceController<SRadialBox,1> *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            (*(TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> **)
              ((this->ObjectStorage).Pad + 0x238),*(int *)((this->ObjectStorage).Pad + 0x240));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x238);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SPanel::~SPanel((SPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be230

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRetainerWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SRetainerWidget,1> *this)

{
  SRetainerWidget::~SRetainerWidget((SRetainerWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be240

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichInlineImage,1>::DestroyObject
          (TIntrusiveReferenceController<SRichInlineImage,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be250

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSafeZone,1>::DestroyObject
          (TIntrusiveReferenceController<SSafeZone,1> *this)

{
  SSafeZone::~SSafeZone((SSafeZone *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1469be260

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SStackBox,1>::DestroyObject
          (TIntrusiveReferenceController<SStackBox,1> *this)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146a6ab80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationTransitionMetadata,1>::
DestroyObject(TIntrusiveReferenceController<FNavigationTransitionMetadata,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 8));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 146a6abd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetAnimationState,1>::DestroyObject
          (TIntrusiveReferenceController<FWidgetAnimationState,1> *this)

{
  FWidgetAnimationState::~FWidgetAnimationState((FWidgetAnimationState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146a6abe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>::
DestroyObject(TIntrusiveReferenceController<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>
              *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ObjectStorage);
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146a6ac20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPostBufferUpdater,1>::DestroyObject
          (TIntrusiveReferenceController<FPostBufferUpdater,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((this->ObjectStorage).Pad + 0x10);
  *(undefined ***)(this->ObjectStorage).Pad = &___7ICustomSlateElement__6B_;
  return;
}

// DestroyObject @ 146a6ac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWindowTitleBarArea,1>::DestroyObject
          (TIntrusiveReferenceController<SWindowTitleBarArea,1> *this)

{
  SWindowTitleBarArea::~SWindowTitleBarArea((SWindowTitleBarArea *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146a6ac80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWorldWidgetScreenLayer,1>::DestroyObject
          (TIntrusiveReferenceController<SWorldWidgetScreenLayer,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x330));
  (this->ObjectStorage).Pad[800] = '\0';
  (this->ObjectStorage).Pad[0x321] = '\0';
  (this->ObjectStorage).Pad[0x322] = '\0';
  (this->ObjectStorage).Pad[0x323] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x318);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x2d8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

