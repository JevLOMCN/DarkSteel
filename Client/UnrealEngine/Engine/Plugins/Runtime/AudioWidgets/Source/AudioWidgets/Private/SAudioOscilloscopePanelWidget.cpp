// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 45

// SAudioOscilloscopePanelWidget @ 14d8b73b0

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioOscilloscopePanelWidget * __thiscall
SAudioOscilloscopePanelWidget::SAudioOscilloscopePanelWidget(SAudioOscilloscopePanelWidget *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  *(undefined8 *)&(this->OnSelectedChannelChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnSelectedChannelChanged = 0;
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__IFixedSampledSequenceViewReceiver__;
  (this->TimeWindowKnobOutputRange).field0_0x0._s_0.X = 10.0;
  (this->TimeWindowKnobOutputRange).field0_0x0._s_0.Y = 5000.0;
  (this->DrawingParams).MaxDisplayedValue = 1.0;
  *(undefined8 *)&(this->OnSelectedChannelChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChannelChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTriggerModeChanged = 0;
  *(undefined8 *)&(this->OnTriggerModeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTriggerModeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnTriggerModeChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnTriggerThresholdChanged = 0;
  *(undefined8 *)&(this->OnTriggerThresholdChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTriggerThresholdChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnTriggerThresholdChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnTimeWindowValueChanged = 0;
  *(undefined8 *)&(this->OnTimeWindowValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTimeWindowValueChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnTimeWindowValueChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnAnalysisPeriodChanged = 0;
  *(undefined8 *)&(this->OnAnalysisPeriodChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnAnalysisPeriodChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnAnalysisPeriodChanged).field_0x18 = 2;
  this->PanelStyle = (FAudioOscilloscopePanelStyle *)0x0;
  (this->SequenceGridData).Object = (FFixedSampledSequenceGridData *)0x0;
  (this->SequenceGridData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BackgroundBorder).Object = (SBorder *)0x0;
  (this->BackgroundBorder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SequenceRuler).Object = (SFixedSampledSequenceRuler *)0x0;
  (this->SequenceRuler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SequenceViewer).Object = (SFixedSampledSequenceViewer *)0x0;
  (this->SequenceViewer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ValueGridOverlay).Object = (SSampledSequenceValueGridOverlay *)0x0;
  (this->ValueGridOverlay).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TriggerThresholdLineWidget).Object = (STriggerThresholdLineWidget *)0x0;
  (this->TriggerThresholdLineWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChannelCombobox).Object = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
  (this->ChannelCombobox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChannelComboboxOptionsSource).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelComboboxOptionsSource).ArrayNum = 0;
  (this->ChannelComboboxOptionsSource).ArrayMax = 0;
  (this->SelectedChannelPtr).Object = (FString *)0x0;
  (this->SelectedChannelPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TriggerModeCombobox).Object =
       (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
  (this->TriggerModeCombobox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TriggerModeComboboxOptionsSource).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerModeComboboxOptionsSource).ArrayNum = 0;
  (this->TriggerModeComboboxOptionsSource).ArrayMax = 0;
  (this->SelectedTriggerModePtr).Object = (EAudioOscilloscopeTriggerMode *)0x0;
  (this->SelectedTriggerModePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TriggerThresholdKnob).Object = (SAudioRadialSlider *)0x0;
  (this->TriggerThresholdKnob).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TimeWindowKnob).Object = (SAudioRadialSlider *)0x0;
  (this->TimeWindowKnob).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalysisPeriodKnob).Object = (SAudioRadialSlider *)0x0;
  (this->AnalysisPeriodKnob).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->PanelLayoutType = Basic;
  this->NumChannels = 0;
  this->bIsInputWidgetTransacting = false;
  this->TriggerThresholdValue = 0.0;
  this->TimeWindowValue = 0.0;
  this->AnalysisPeriodValue = 0.0;
  this->CachedPixelWidth = 0.0;
  this->OscilloscopeViewProportion = 1.0;
  this->ValueGridMaxDivisionParameter = 2;
  (this->DataView).SampleData.DataPtr = (float *)0x0;
  (this->DataView).SampleData.ArrayNum = 0;
  (this->DataView).NumDimensions = 0;
  (this->DataView).SampleRate = 0;
  (this->DrawingParams).DimensionSlotMargin = 2.0;
  (this->DrawingParams).MaxSequenceHeightRatio = 0.95;
  (this->DrawingParams).MinSequenceHeightRatio = 0.1;
  (this->DrawingParams).MinScaledBinValue = 0.1;
  (this->DrawingParams).VerticalZoomFactor = 1.0;
  (this->DrawingParams).Orientation = Horizontal;
  this->bHideSequenceGrid = false;
  this->bHideSequenceRuler = false;
  this->bHideValueGrid = false;
  this->bHideTriggerThresholdLine = true;
  return this;
}

// ~SAudioOscilloscopePanelWidget @ 14d8bff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::~SAudioOscilloscopePanelWidget(SAudioOscilloscopePanelWidget *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalysisPeriodKnob).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TimeWindowKnob).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriggerThresholdKnob).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedTriggerModePtr).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
            ((TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)
             (this->TriggerModeComboboxOptionsSource).AllocatorInstance.Data,
             (this->TriggerModeComboboxOptionsSource).ArrayNum);
  pFVar1 = (this->TriggerModeComboboxOptionsSource).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriggerModeCombobox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedChannelPtr).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->ChannelComboboxOptionsSource).AllocatorInstance.Data,
             (this->ChannelComboboxOptionsSource).ArrayNum);
  pFVar1 = (this->ChannelComboboxOptionsSource).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChannelCombobox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriggerThresholdLineWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ValueGridOverlay).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SequenceViewer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SequenceRuler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SequenceGridData).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAnalysisPeriodChanged).field_0x8,
             *(int *)&(this->OnAnalysisPeriodChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnAnalysisPeriodChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnalysisPeriodChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTimeWindowValueChanged).field_0x8,
             *(int *)&(this->OnTimeWindowValueChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnTimeWindowValueChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTimeWindowValueChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTriggerThresholdChanged).field_0x8,
             *(int *)&(this->OnTriggerThresholdChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnTriggerThresholdChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTriggerThresholdChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTriggerModeChanged).field_0x8,
             *(int *)&(this->OnTriggerModeChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnTriggerModeChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTriggerModeChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedChannelChanged).field_0x8,
             *(int *)&(this->OnSelectedChannelChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnSelectedChannelChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedChannelChanged);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d8c5110

void __thiscall
`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  if (*(char *)(*(longlong *)this + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)this + 0x460) = 1;
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x438) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x438);
  fVar5 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,param_1);
  if (fVar5 != *(float *)(*(longlong *)this + 0x46c)) {
    *(float *)(*(longlong *)this + 0x46c) = fVar5;
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               (*(longlong *)this + 0x330),*(float *)(*(longlong *)this + 0x46c));
  }
  return;
}

// operator() @ 14d8c51c0

TSharedRef<STextBlock,1> * __thiscall
`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<STextBlock,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArguments *pFVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  FText *pFVar5;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FText local_5f8;
  bool local_5e8;
  undefined1 local_5e0 [8];
  ForAnyElementType FStack_5d8;
  ulonglong local_5d0;
  FMemScope local_5c8;
  FDestructionSentinel local_5c0;
  FText local_5a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_598;
  FArguments local_580;
  
  pFVar3 = STextBlock::FArguments::FArguments(&local_580);
  if (param_1->Object == (FString *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<STextBlock,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pFVar5 = FText::FromString(&local_5a8,param_1->Object);
  FText::FText(&local_5f8,pFVar5);
  local_5e8 = true;
  local_5d0 = 0;
  local_5e0 = (undefined1  [8])0x0;
  FStack_5d8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->_Text).Value,&local_5f8);
  (pFVar3->_Text).bIsSet = local_5e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e0,
             (FWriteAccessScope *)&local_5c0);
  if (((int)local_5d0 != 0) && (FStack_5d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5d8,0,0,0x10);
    local_5d0 = local_5d0 & 0xffffffff00000000;
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  if (FStack_5d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e0);
  if (local_5f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5c8,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_598,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x174,local_res10);
  FMemScope::~FMemScope(&local_5c8);
  FLLMScope::~FLLMScope(local_res18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_598,__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598._Widget.SharedReferenceCount.ReferenceController);
  if (local_5a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_580);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14d8c5490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SVerticalBox,1> * __thiscall
`SAudioOscilloscopePanelWidget::CreateLayout'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<SVerticalBox,1> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  SVerticalBox *pSVar4;
  code *pcVar5;
  bool bVar6;
  FArguments *pFVar7;
  FScopedWidgetSlotArguments *pFVar8;
  TSharedPtr<SVerticalBox,1> *pTVar9;
  FArguments *pFVar10;
  TSharedRef<SVerticalBox,1> *pTVar11;
  FSlot *pFVar12;
  FSlotArguments *pFVar13;
  FSlot *pFVar14;
  atomic<int> *paVar15;
  undefined1 auStackY_9e8 [32];
  T0RequiredArgs local_9b8;
  T0RequiredArgs local_9b7 [3];
  FLLMScope local_9b4;
  FLLMScope local_9b0 [2];
  longlong local_9a8;
  FSharedReferencer<1> local_9a0;
  longlong local_998;
  FSharedReferencer<1> local_990;
  longlong local_988;
  FSharedReferencer<1> local_980;
  longlong local_978;
  FSharedReferencer<1> local_970;
  longlong local_968;
  FSharedReferencer<1> local_960;
  TSharedRef<SOverlay,1> local_958;
  FName local_948;
  FMemScope local_940;
  FName local_938;
  FMemScope local_930;
  FSlot *local_928;
  FSlot *local_920;
  undefined8 local_918;
  FSharedReferencer<1> local_910;
  TSharedRef<SVerticalBox,1> local_908;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_8f8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8e0;
  undefined1 local_8c8 [16];
  SOverlay *local_8b8;
  FSharedReferencer<1> local_8b0 [27];
  TPanelChildren<SBoxPanel::FSlot> *local_7d8;
  int local_7d0;
  undefined1 local_7c8 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_6d8;
  int local_6d0;
  FArguments local_6c8;
  FArguments local_4c0;
  FScopedWidgetSlotArguments local_2b8;
  FScopedWidgetSlotArguments local_218;
  FScopedWidgetSlotArguments local_178;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  pFVar7 = SOverlay::FArguments::FArguments(&local_6c8);
  FLLMScope::FLLMScope(&local_9b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_948 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_940,&local_948,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_8f8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x73,&local_9b8);
  FMemScope::~FMemScope(&local_940);
  FLLMScope::~FLLMScope(&local_9b4);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=(&local_8f8,&local_958,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_6c8._Slots.AllocatorInstance.Data,local_6c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_6c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6c8);
  pFVar8 = SOverlay::AddSlot(local_958.Object,&local_2b8,-1);
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x368) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  lVar2 = *(longlong *)(lVar1 + 0x368);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x370);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = (FSlot *)0x0;
  local_9a8 = lVar2;
  local_9a0.ReferenceController = pTVar3;
  if (&pFVar8->_padding_ != &local_9a8) {
    pFVar8->_padding_ = lVar2;
    local_9a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_9a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_2b8);
  if (*(char *)(*(longlong *)this + 0x4ba) == '\0') {
    pFVar8 = SOverlay::AddSlot(local_958.Object,&local_218,-1);
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x398) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
      return pTVar9;
    }
    lVar2 = *(longlong *)(lVar1 + 0x398);
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x3a0);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar2 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
      return pTVar9;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_998 = lVar2;
    local_990.ReferenceController = pTVar3;
    if (&pFVar8->_padding_ != &local_998) {
      pFVar8->_padding_ = lVar2;
      local_998 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_990);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_990.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_218);
  }
  pFVar8 = SOverlay::AddSlot(local_958.Object,&local_178,-1);
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x388) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  lVar2 = *(longlong *)(lVar1 + 0x388);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x390);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_988 = lVar2;
  local_980.ReferenceController = pTVar3;
  if (&pFVar8->_padding_ != &local_988) {
    pFVar8->_padding_ = lVar2;
    local_988 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_980);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_980.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_178);
  pFVar8 = SOverlay::AddSlot(local_958.Object,&local_d8,-1);
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x3a8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  lVar2 = *(longlong *)(lVar1 + 0x3a8);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x3b0);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_978 = lVar2;
  local_970.ReferenceController = pTVar3;
  if (&pFVar8->_padding_ != &local_978) {
    pFVar8->_padding_ = lVar2;
    local_978 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_970);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_970.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_d8);
  pFVar10 = SVerticalBox::FArguments::FArguments(&local_4c0);
  FLLMScope::FLLMScope(local_9b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_938 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_930,&local_938,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_8e0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x8c,local_9b7);
  FMemScope::~FMemScope(&local_930);
  FLLMScope::~FLLMScope(local_9b0);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8e0,&local_908,pFVar10);
  __return_storage_ptr__->Object = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_908.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e0._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_4c0._Slots.AllocatorInstance.Data,local_4c0._Slots.ArrayNum);
  if ((FSlotArguments *)local_4c0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4c0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4c0);
  if (*(char *)(*(longlong *)this + 0x4b9) == '\0') {
    if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
      return pTVar9;
    }
    pSVar4 = __return_storage_ptr__->Object;
    pFVar12 = ::operator_new(0x58);
    local_928 = pFVar14;
    if (pFVar12 != (FSlot *)0x0) {
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)&pFVar12->field_0x8 = 0;
      *(undefined8 *)&pFVar12->field_0x10 = 0;
      *(undefined8 *)&pFVar12->field_0x18 = 0;
      *(undefined8 *)&pFVar12->field_0x20 = 0;
      *(undefined8 *)&pFVar12->field_0x28 = 0;
      *(undefined8 *)&pFVar12->field_0x30 = 0;
      *(undefined8 *)&pFVar12->field_0x38 = 0;
      *(undefined8 *)&pFVar12->field_0x40 = 0;
      *(undefined8 *)&pFVar12->field_0x48 = 0;
      *(undefined8 *)&pFVar12->field_0x50 = 0;
      local_928 = SVerticalBox::FSlot::FSlot(pFVar12);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)(local_7c8 + 8),(FSlot *)&local_928);
    local_6d8 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar4->field_0x218;
    local_7c8._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    local_6d0 = -1;
    pFVar13 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)(local_7c8 + 8));
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x378) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
      return pTVar9;
    }
    lVar2 = *(longlong *)(lVar1 + 0x378);
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x380);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar2 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
      return pTVar9;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_968 = lVar2;
    local_960.ReferenceController = pTVar3;
    if ((longlong *)&pFVar13->field_0x8 != &local_968) {
      *(longlong *)&pFVar13->field_0x8 = lVar2;
      local_968 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar13->field_0x10,&local_960);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_960.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
              ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_7c8);
  }
  if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  pSVar4 = __return_storage_ptr__->Object;
  pFVar12 = ::operator_new(0x58);
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    pFVar14 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  local_920 = pFVar14;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_8c8 + 8),(FSlot *)&local_920);
  local_7d8 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar4->field_0x218;
  local_8c8._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_7d0 = -1;
  if (local_958.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar15 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar15 = &(local_958.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  local_910.ReferenceController = local_958.SharedReferenceCount.ReferenceController;
  if (local_958.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  local_8b8 = local_958.Object;
  local_918 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_8b0,&local_910);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_910.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958.SharedReferenceCount.ReferenceController);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_8c8);
  if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SVerticalBox,1> *)(*pcVar5)();
    return pTVar9;
  }
  SWidget::SetClipping((SWidget *)__return_storage_ptr__->Object,ClipToBounds);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14d8c66c0

void __thiscall
`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  if (*(char *)(*(longlong *)this + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)this + 0x460) = 1;
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x428) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x428);
  fVar5 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,param_1);
  if (fVar5 != *(float *)(*(longlong *)this + 0x468)) {
    *(float *)(*(longlong *)this + 0x468) = fVar5;
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               (*(longlong *)this + 0x310),*(float *)(*(longlong *)this + 0x468));
  }
  return;
}

// operator() @ 14d8c6770

TSharedRef<STextBlock,1> * __thiscall
`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<STextBlock,1> *__return_storage_ptr__,
          TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1)

{
  code *pcVar1;
  UEnum *this_00;
  bool bVar2;
  UPackage *pUVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  FArguments *pFVar5;
  FText *pFVar6;
  ForAnyElementType FVar7;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FText local_608;
  bool local_5f8;
  undefined1 local_5f0 [8];
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  FMemScope local_5d8;
  FString local_5d0;
  FDestructionSentinel local_5c0;
  FText local_5a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_598;
  FArguments local_580;
  
  if (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode,
                       (UObject *)pUVar3,L"EAudioOscilloscopeTriggerMode");
  }
  this_00 = Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton;
  if (param_1->Object == (EAudioOscilloscopeTriggerMode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<STextBlock,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  UEnum::GetNameStringByValue(this_00,&local_5d0,(ulonglong)*param_1->Object);
  pFVar5 = STextBlock::FArguments::FArguments(&local_580);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_5d0.Data.ArrayNum != 0) {
    FVar7.Data = local_5d0.Data.AllocatorInstance.Data;
  }
  pFVar6 = FText::FromString(&local_5a8,(wchar_t *)FVar7.Data);
  FText::FText(&local_608,pFVar6);
  local_5f8 = true;
  local_5e0 = 0;
  local_5f0 = (undefined1  [8])0x0;
  FStack_5e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar5->_Text).Value,&local_608);
  (pFVar5->_Text).bIsSet = local_5f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_5c0);
  if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e8,0,0,0x10);
    local_5e0 = local_5e0 & 0xffffffff00000000;
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5d8,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_598,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x1a2,local_res10);
  FMemScope::~FMemScope(&local_5d8);
  FLLMScope::~FLLMScope(local_res18);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_598,__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598._Widget.SharedReferenceCount.ReferenceController);
  if (local_5a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_580);
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14d8c69f0

void __thiscall
`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  if (*(char *)(*(longlong *)this + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)this + 0x460) = 1;
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x418) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x418);
  fVar5 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,param_1);
  if (fVar5 != *(float *)(*(longlong *)this + 0x464)) {
    *(float *)(*(longlong *)this + 0x464) = fVar5;
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x3a8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)(*(longlong *)(lVar1 + 0x3a8) + 0x218) =
         *(undefined4 *)(*(longlong *)this + 0x464);
  }
  return;
}

// operator() @ 14d8c9bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>::operator()
          (void *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *_Str;
  longlong lVar11;
  TSharedPtr<FString,1> local_58;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FDestructionSentinel local_38;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FString *)0x0) {
    if (5 < (byte)LogAudioWidgets._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioWidgets);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  lVar3 = *(longlong *)this;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = *(undefined8 *)(lVar3 + 0x3d8);
  pTStack_40 = *(TReferenceControllerBase<1> **)(lVar3 + 0x3e0);
  *(FString **)(lVar3 + 0x3d8) = pFVar1;
  *(TReferenceControllerBase<1> **)(lVar3 + 0x3e0) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  lVar3 = *(longlong *)this;
  _Str = L"";
  if (*(longlong *)(lVar3 + 0x3b8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(SComboBox<TSharedPtr<FString,1>_> **)(lVar3 + 0x3b8);
  local_58.Object = *(FString **)(*(longlong *)this + 0x3d8);
  local_58.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x3e0);
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(this_00,&local_58);
  lVar3 = *(longlong *)this;
  if ((param_1->Object->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(param_1->Object->Data).AllocatorInstance.Data;
  }
  _wtoi(_Str);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x2b0),
             (FWriteAccessScope *)&local_38);
  *(int *)(lVar3 + 0x2cc) = *(int *)(lVar3 + 0x2cc) + 1;
  bVar6 = false;
  uVar10 = *(int *)(lVar3 + 0x2c0) - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)(lVar3 + 0x2c0)) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((*(int *)(lVar11 + 8 + *(longlong *)(lVar3 + 0x2b8)) == 0) ||
         (plVar4 = *(longlong **)(lVar11 + *(longlong *)(lVar3 + 0x2b8)), plVar4 == (longlong *)0x0)
         ) {
LAB_14d8c9d77:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar4 + 0x68))();
        if (cVar8 == '\0') goto LAB_14d8c9d77;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  *(int *)(lVar3 + 0x2cc) = *(int *)(lVar3 + 0x2cc) + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x2b0),false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14d8c9df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>::operator()
          (void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,Type param_2)

{
  EAudioOscilloscopeTriggerMode *pEVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  void *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_78;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FDestructionSentinel local_58;
  TAttribute<EVisibility> local_40;
  
  pEVar1 = param_1->Object;
  if (pEVar1 == (EAudioOscilloscopeTriggerMode *)0x0) {
    if (5 < (byte)LogAudioWidgets._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioWidgets);
    }
  }
  else {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    lVar3 = *(longlong *)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = *(undefined8 *)(lVar3 + 0x408);
    pTStack_60 = *(TReferenceControllerBase<1> **)(lVar3 + 0x410);
    *(EAudioOscilloscopeTriggerMode **)(lVar3 + 0x408) = pEVar1;
    *(TReferenceControllerBase<1> **)(lVar3 + 0x410) = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    lVar3 = *(longlong *)this;
    if ((*(longlong *)(lVar3 + 1000) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = *(void **)(lVar3 + 1000);
    local_78.Object = *(EAudioOscilloscopeTriggerMode **)(*(longlong *)this + 0x408);
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x410);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::SetSelectedItem(this_00,&local_78)
    ;
    lVar3 = *(longlong *)this;
    local_40.Value = EVisibility::Hidden;
    if (**(char **)(lVar3 + 0x408) != '\0') {
      local_40.Value = EVisibility::Visible;
    }
    if ((*(longlong *)(lVar3 + 0x3a8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_40.Getter._16_8_ = 0;
    local_40.bIsSet = true;
    local_40.Getter._0_8_ = 0;
    local_40.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility(*(SLeafWidget **)(lVar3 + 0x3a8),&local_40);
    lVar3 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x2d0),
               (FWriteAccessScope *)&local_58);
    *(int *)(lVar3 + 0x2ec) = *(int *)(lVar3 + 0x2ec) + 1;
    bVar6 = false;
    uVar10 = *(int *)(lVar3 + 0x2e0) - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)(lVar3 + 0x2e0)) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((*(int *)(*(longlong *)(lVar3 + 0x2d8) + 8 + lVar11) == 0) ||
            (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x2d8) + lVar11),
            plVar4 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0'))
        {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    *(int *)(lVar3 + 0x2ec) = *(int *)(lVar3 + 0x2ec) + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x2d0),false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14d8ca3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SVerticalBox,1> * __thiscall
`SAudioOscilloscopePanelWidget::CreateLayout'::__l5::<lambda_2>::operator()
          (void *this,TSharedPtr<SVerticalBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  FArguments *pFVar11;
  TSharedRef<SVerticalBox,1> *pTVar12;
  TSharedPtr<SVerticalBox,1> *pTVar13;
  FSlot *pFVar14;
  FSlotArguments *pFVar15;
  FSlot *pFVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  FArguments *pFVar20;
  SVerticalBox *pSVar21;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar22;
  FSlotArguments *pFVar23;
  TSharedRef<SAudioRadialSlider,1> *pTVar24;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar25;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar26;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_43e8;
  T0RequiredArgs local_43e7;
  T0RequiredArgs local_43e6;
  T0RequiredArgs local_43e5;
  T0RequiredArgs local_43e4;
  T0RequiredArgs local_43e3;
  T0RequiredArgs local_43e2;
  T0RequiredArgs local_43e1;
  T0RequiredArgs local_43e0;
  T0RequiredArgs local_43df [3];
  FLLMScope local_43dc;
  FLLMScope local_43d8;
  FLLMScope local_43d4;
  FLLMScope local_43d0;
  FLLMScope local_43cc;
  FLLMScope local_43c8;
  FLLMScope local_43c4;
  FLLMScope local_43c0 [2];
  undefined4 local_43b8;
  undefined1 local_43b4;
  undefined1 local_43b0 [8];
  ForAnyElementType FStack_43a8;
  ulonglong local_43a0;
  undefined4 local_4398;
  undefined1 local_4394;
  undefined1 local_4390 [8];
  ForAnyElementType FStack_4388;
  ulonglong local_4380;
  FSlotArguments *local_4378;
  STextBlock *local_4370;
  FSharedReferencer<1> local_4368;
  longlong local_4360;
  FSharedReferencer<1> local_4358;
  SVerticalBox *local_4350;
  FSharedReferencer<1> local_4348;
  SVerticalBox *local_4340;
  FSharedReferencer<1> local_4338;
  STextBlock *local_4330;
  FSharedReferencer<1> local_4328;
  SVerticalBox *local_4320;
  FSharedReferencer<1> local_4318;
  SVerticalBox *local_4310;
  FSharedReferencer<1> local_4308;
  FText local_4300;
  bool local_42f0;
  undefined1 local_42e8 [8];
  ForAnyElementType FStack_42e0;
  ulonglong local_42d8;
  longlong local_42d0;
  FSharedReferencer<1> local_42c8;
  FMemScope local_42c0;
  FName local_42b8;
  FMemScope local_42b0;
  FSlot *local_42a8;
  FSlot *local_42a0;
  FName local_4298;
  FSlot *local_4290;
  FSlot *local_4288;
  FName local_4280;
  FMemScope local_4278;
  FName local_4270;
  FMemScope local_4268;
  FSlot *local_4260;
  FName local_4258;
  FMemScope local_4250;
  FMemScope local_4248;
  FName local_4240;
  FMemScope local_4238;
  FSlot *local_4230;
  FSlot *local_4228;
  FName local_4220;
  FMemScope local_4218;
  FSlot *local_4210;
  FSlot *local_4208;
  FName local_4200;
  TAttribute<float> local_41f8;
  TAttribute<float> local_41d8;
  TAttribute<float> local_41b8;
  TAttribute<float> local_4198;
  TAttribute<float> local_4178;
  TAttribute<float> local_4158;
  TAttribute<ETextJustify::Type> local_4138;
  TAttribute<float> local_4118;
  TAttribute<float> local_40f8;
  TAttribute<float> local_40d8;
  TAttribute<float> local_40b8;
  TAttribute<float> local_4098;
  TAttribute<float> local_4078;
  TAttribute<float> local_4058;
  TAttribute<ETextJustify::Type> local_4038;
  TAttribute<float> local_4018;
  TAttribute<float> local_3ff8;
  TAttribute<float> local_3fd8;
  TAttribute<ETextJustify::Type> local_3fb8;
  TAttribute<float> local_3f98;
  TSharedRef<SWidget,1> local_3f78;
  TSharedRef<SWidget,1> local_3f68;
  TSharedRef<SWidget,1> local_3f58;
  TSharedRef<SWidget,1> local_3f48;
  TSharedRef<SWidget,1> local_3f38;
  TSharedRef<SWidget,1> local_3f28;
  TSharedRef<SWidget,1> local_3f18;
  TSharedRef<SWidget,1> local_3f08;
  TSharedRef<SWidget,1> local_3ef8;
  FDestructionSentinel local_3ee8;
  FDestructionSentinel local_3ed0;
  FDestructionSentinel local_3eb8;
  TAttribute<FText> local_3ea0;
  TAttribute<FText> local_3e70;
  TAttribute<FText> local_3e40;
  TAttribute<FText> local_3e10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3de0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3dc8;
  TSharedRef<STextBlock,1> local_3db0;
  FText local_3da0;
  TSharedRef<SVerticalBox,1> local_3d90;
  TSharedRef<SVerticalBox,1> local_3d80;
  TSharedRef<STextBlock,1> local_3d70;
  FText local_3d60;
  TSharedRef<SVerticalBox,1> local_3d50;
  TSharedRef<SAudioRadialSlider,1> local_3d40;
  TSharedRef<STextBlock,1> local_3d30;
  FText local_3d20;
  TSharedRef<SVerticalBox,1> local_3d10;
  TSharedRef<SAudioRadialSlider,1> local_3d00;
  TSharedRef<STextBlock,1> local_3cf0;
  FText local_3ce0;
  TSharedRef<SVerticalBox,1> local_3cd0;
  TSharedRef<SAudioRadialSlider,1> local_3cc0;
  TSharedRef<STextBlock,1> local_3cb0;
  FText local_3ca0;
  TSharedRef<SVerticalBox,1> local_3c90;
  TSharedRef<SVerticalBox,1> local_3c80;
  TSharedRef<SVerticalBox,1> local_3c70;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3c60;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3c48;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3c30;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3c18;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3c00;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3be8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3bd0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3bb8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3ba0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3b88;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3b70;
  undefined8 *local_3b58 [2];
  TReferenceControllerBase<1> *local_3b48;
  undefined1 local_3b28 [40];
  FSlotArgumentsMixin local_3b00;
  undefined8 *local_3a70 [2];
  TReferenceControllerBase<1> *local_3a60;
  undefined1 local_3a40 [40];
  FSlotArgumentsMixin local_3a18;
  undefined8 *local_3988 [2];
  TReferenceControllerBase<1> *local_3978;
  undefined1 local_3958 [40];
  FSlotArgumentsMixin local_3930;
  undefined1 local_38a0 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_37b0;
  int local_37a8;
  undefined1 local_37a0 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_36b0;
  int local_36a8;
  FSlotArguments local_36a0;
  FSlotArguments local_35b8;
  FSlotArguments local_34d0;
  FSlotArguments local_33e8;
  FArguments local_3300;
  FArguments local_30f8;
  FArguments local_2ef0;
  FArguments local_2ce8;
  FArguments local_2ae0;
  FArguments local_28d8;
  FArguments local_26d0;
  FArguments local_24c8;
  FSlotArguments local_22c0;
  FSlotArguments local_21d8;
  FSlotArguments local_20f0;
  FSlotArguments local_2008;
  FSlotArguments local_1f20;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1e38;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1d38;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1c38;
  FArguments local_1b38;
  FArguments local_15e0;
  FArguments local_1088;
  FArguments local_b30;
  FArguments local_5d8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d8ca413;
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_3300);
  FLLMScope::FLLMScope(&local_43dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4240 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4238,&local_4240,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3c60,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xa5,local_res10);
  FMemScope::~FMemScope(&local_4238);
  FLLMScope::~FLLMScope(&local_43dc);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3c60,&local_3c90,pFVar11);
  __return_storage_ptr__->Object = pTVar12->Object;
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c60._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3300._Slots.AllocatorInstance.Data,local_3300._Slots.ArrayNum);
  if ((FSlotArguments *)local_3300._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3300._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3300);
  if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SVerticalBox,1> *)(*pcVar7)();
    return pTVar13;
  }
  pSVar21 = __return_storage_ptr__->Object;
  pFVar14 = ::operator_new(0x58);
  pFVar16 = (FSlot *)0x0;
  local_4230 = pFVar16;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_4230 = SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_37a0 + 8),(FSlot *)&local_4230);
  local_36a8 = -1;
  local_37a0._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_36b0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar21->field_0x218;
  local_41d8.Value = 0.2;
  local_41d8.bIsSet = true;
  local_41d8.Getter._16_8_ = 0;
  local_41d8.Getter._0_8_ = 0;
  local_41d8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)(local_37a0 + 8),&local_41d8);
  fVar9 = __real_40a00000;
  local_4378 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,__real_40a00000,0.0,0.0);
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_2ef0);
  pFVar14 = ::operator_new(0x58);
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    pFVar16 = SVerticalBox::FSlot::FSlot(pFVar14);
  }
  local_4228 = pFVar16;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3988,(FSlot *)&local_4228);
  local_41b8.Value = 0.3;
  local_41b8.Getter._16_8_ = 0;
  local_41b8.bIsSet = true;
  local_41b8.Getter._0_8_ = 0;
  local_41b8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_3988,&local_41b8);
  fVar8 = __real_40800000;
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,0.0,0.0,__real_40800000);
  pFVar17 = STextBlock::FArguments::FArguments(&local_1b38);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_3da0,L"SOscilloscopePanelWidget",L"Oscilloscope_Channel_Display_Label"
                       ,L"Channel");
  FText::FText(&local_4300,pFVar18);
  local_42f0 = true;
  local_42d8 = 0;
  local_42e8 = (undefined1  [8])0x0;
  FStack_42e0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar17->_Text).Value,&local_4300);
  (pFVar17->_Text).bIsSet = local_42f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_42e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_42e8,
             (FWriteAccessScope *)&local_3ed0);
  if (((int)local_42d8 != 0) && (FStack_42e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_42e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_42e0,0,0,0x10);
    local_42d8 = local_42d8 & 0xffffffff00000000;
  }
  if (local_3ed0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3ed0.Accessor,&local_3ed0);
  }
  if (FStack_42e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_42e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_42e8);
  if (local_4300.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4300.TextData.Reference + 0x10))();
  }
  local_43b4 = 1;
  local_43b8 = 1;
  local_43a0 = 0;
  local_43b0 = (undefined1  [8])0x0;
  FStack_43a8.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_Justification).Value = Center;
  (pFVar17->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_43b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_43b0,
             (FWriteAccessScope *)&local_3ee8);
  if (((int)local_43a0 != 0) && (FStack_43a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_43a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_43a8,0,0,0x10);
    local_43a0 = local_43a0 & 0xffffffff00000000;
  }
  if (local_3ee8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3ee8.Accessor,&local_3ee8);
  }
  if (FStack_43a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_43a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_43b0);
  FLLMScope::FLLMScope(&local_43d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4220 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4218,&local_4220,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3c18,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xb1,local_res18);
  FMemScope::~FMemScope(&local_4218);
  FLLMScope::~FLLMScope(&local_43d8);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3c18,&local_3db0,pFVar17);
  pTVar1 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_4370 = pTVar19->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4368.ReferenceController = pTVar1;
  if ((STextBlock **)&pFVar15->field_0x8 != &local_4370) {
    *(STextBlock **)&pFVar15->field_0x8 = local_4370;
    local_4370 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_4368);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4368.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar15);
  pFVar14 = ::operator_new(0x58);
  local_4210 = (FSlot *)0x0;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_4210 = SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3a70,(FSlot *)&local_4210);
  local_4198.Value = 0.4;
  local_4198.Getter._16_8_ = 0;
  local_4198.bIsSet = true;
  local_4198.Getter._0_8_ = 0;
  local_4198.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_3a70,&local_4198);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,fVar9,0.0,fVar9,0.0);
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x3b8) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SVerticalBox,1> *)(*pcVar7)();
    return pTVar13;
  }
  lVar3 = *(longlong *)(lVar2 + 0x3b8);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x3c0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar3 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SVerticalBox,1> *)(*pcVar7)();
    return pTVar13;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4360 = lVar3;
  local_4358.ReferenceController = pTVar4;
  if ((longlong *)&pFVar15->field_0x8 != &local_4360) {
    *(longlong *)&pFVar15->field_0x8 = lVar3;
    local_4360 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_4358);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4358.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar15);
  pFVar14 = ::operator_new(0x58);
  local_4208 = (FSlot *)0x0;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_4208 = SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3b58,(FSlot *)&local_4208);
  local_4178.Value = 0.3;
  local_4178.Getter._16_8_ = 0;
  local_4178.bIsSet = true;
  local_4178.Getter._0_8_ = 0;
  local_4178.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_3b58,&local_4178);
  pFVar20 = SVerticalBox::FArguments::FArguments(&local_30f8);
  FLLMScope::FLLMScope(&local_43d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4200 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_42c0,&local_4200,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3c30,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xbe,local_res20);
  FMemScope::~FMemScope(&local_42c0);
  FLLMScope::~FLLMScope(&local_43d4);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3c30,&local_3c70,pFVar20);
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_4350 = pTVar12->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4348.ReferenceController = pTVar5;
  if ((SVerticalBox **)&pFVar15->field_0x8 != &local_4350) {
    *(SVerticalBox **)&pFVar15->field_0x8 = local_4350;
    local_4350 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_4348);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4348.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar15);
  FLLMScope::FLLMScope(&local_43d0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_42b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_42b0,&local_42b8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3c48,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xac,&local_43e8);
  FMemScope::~FMemScope(&local_42b0);
  FLLMScope::~FLLMScope(&local_43d0);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3c48,&local_3c80,pFVar11);
  pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_4340 = pTVar12->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = (FSlot *)0x0;
  local_4338.ReferenceController = pTVar6;
  if ((SVerticalBox **)&local_4378->field_0x8 != &local_4340) {
    *(SVerticalBox **)&local_4378->field_0x8 = local_4340;
    local_4340 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_4378->field_0x10,&local_4338);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4338.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c70.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c30._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_30f8._Slots.AllocatorInstance.Data,local_30f8._Slots.ArrayNum);
  if ((FSlotArguments *)local_30f8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_30f8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_30f8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3b00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b28);
  if ((void *)local_3b28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b48);
  if (local_3b58[0] != (undefined8 *)0x0) {
    (**(code **)*local_3b58[0])(local_3b58[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3a18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a40);
  if ((void *)local_3a40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3a40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a60);
  if (local_3a70[0] != (undefined8 *)0x0) {
    (**(code **)*local_3a70[0])(local_3a70[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3db0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c18._Widget.SharedReferenceCount.ReferenceController);
  if (local_3da0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3da0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_1b38);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3930);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3958);
  if ((void *)local_3958._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3958._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3958);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3978);
  if (local_3988[0] != (undefined8 *)0x0) {
    (**(code **)*local_3988[0])(local_3988[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2ef0._Slots.AllocatorInstance.Data,local_2ef0._Slots.ArrayNum);
  if ((FSlotArguments *)local_2ef0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2ef0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2ef0);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_37a0);
  if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SVerticalBox,1> *)(*pcVar7)();
    return pTVar13;
  }
  pSVar21 = __return_storage_ptr__->Object;
  pFVar16 = ::operator_new(0x58);
  local_42a8 = pFVar14;
  if (pFVar16 != (FSlot *)0x0) {
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)&pFVar16->field_0x8 = 0;
    *(undefined8 *)&pFVar16->field_0x10 = 0;
    *(undefined8 *)&pFVar16->field_0x18 = 0;
    *(undefined8 *)&pFVar16->field_0x20 = 0;
    *(undefined8 *)&pFVar16->field_0x28 = 0;
    *(undefined8 *)&pFVar16->field_0x30 = 0;
    *(undefined8 *)&pFVar16->field_0x38 = 0;
    *(undefined8 *)&pFVar16->field_0x40 = 0;
    *(undefined8 *)&pFVar16->field_0x48 = 0;
    *(undefined8 *)&pFVar16->field_0x50 = 0;
    local_42a8 = SVerticalBox::FSlot::FSlot(pFVar16);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_38a0 + 8),(FSlot *)&local_42a8);
  local_37a8 = -1;
  local_38a0._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_37b0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar21->field_0x218;
  local_4158.Value = 0.2;
  local_4158.bIsSet = true;
  local_4158.Getter._16_8_ = 0;
  local_4158.Getter._0_8_ = 0;
  local_4158.Getter._8_8_ = 0;
  local_4378 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                         ((FSlotArguments *)(local_38a0 + 8),&local_4158);
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_2ae0);
  pFVar16 = ::operator_new(0x58);
  local_42a0 = pFVar14;
  if (pFVar16 != (FSlot *)0x0) {
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)&pFVar16->field_0x8 = 0;
    *(undefined8 *)&pFVar16->field_0x10 = 0;
    *(undefined8 *)&pFVar16->field_0x18 = 0;
    *(undefined8 *)&pFVar16->field_0x20 = 0;
    *(undefined8 *)&pFVar16->field_0x28 = 0;
    *(undefined8 *)&pFVar16->field_0x30 = 0;
    *(undefined8 *)&pFVar16->field_0x38 = 0;
    *(undefined8 *)&pFVar16->field_0x40 = 0;
    *(undefined8 *)&pFVar16->field_0x48 = 0;
    *(undefined8 *)&pFVar16->field_0x50 = 0;
    local_42a0 = SVerticalBox::FSlot::FSlot(pFVar16);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_34d0,(FSlot *)&local_42a0);
  local_40d8.Value = 0.3;
  local_40d8.Getter._16_8_ = 0;
  local_40d8.bIsSet = true;
  local_40d8.Getter._0_8_ = 0;
  local_40d8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_34d0,&local_40d8);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,0.0,0.0,fVar8);
  pFVar17 = STextBlock::FArguments::FArguments(&local_15e0);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_3d60,L"SOscilloscopePanelWidget",
                       L"Oscilloscope_TriggerMode_Display_Label",L"Trigger Mode");
  FText::FText(&local_3ea0.Value,pFVar18);
  local_3ea0.bIsSet = true;
  local_3ea0.Getter._16_8_ = 0;
  local_3ea0.Getter._0_8_ = 0;
  local_3ea0.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_3ea0);
  local_4394 = 1;
  local_4398 = 1;
  local_4380 = 0;
  local_4390 = (undefined1  [8])0x0;
  FStack_4388.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_Justification).Value = Center;
  (pFVar17->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4390);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4390,
             (FWriteAccessScope *)&local_3eb8);
  if (((int)local_4380 != 0) && (FStack_4388.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4388.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4388,0,0,0x10);
    local_4380 = local_4380 & 0xffffffff00000000;
  }
  if (local_3eb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3eb8.Accessor,&local_3eb8);
  }
  if (FStack_4388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4390);
  FLLMScope::FLLMScope(&local_43cc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4248,&local_4298,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3de0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xcb,&local_43e7);
  FMemScope::~FMemScope(&local_4248);
  FLLMScope::~FLLMScope(&local_43cc);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3de0,&local_3d70,pFVar17);
  pTVar1 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_4330 = pTVar19->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4328.ReferenceController = pTVar1;
  if ((STextBlock **)&pFVar15->field_0x8 != &local_4330) {
    *(STextBlock **)&pFVar15->field_0x8 = local_4330;
    local_4330 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_4328);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4328.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar15);
  pFVar16 = ::operator_new(0x58);
  if (pFVar16 != (FSlot *)0x0) {
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)&pFVar16->field_0x8 = 0;
    *(undefined8 *)&pFVar16->field_0x10 = 0;
    *(undefined8 *)&pFVar16->field_0x18 = 0;
    *(undefined8 *)&pFVar16->field_0x20 = 0;
    *(undefined8 *)&pFVar16->field_0x28 = 0;
    *(undefined8 *)&pFVar16->field_0x30 = 0;
    *(undefined8 *)&pFVar16->field_0x38 = 0;
    *(undefined8 *)&pFVar16->field_0x40 = 0;
    *(undefined8 *)&pFVar16->field_0x48 = 0;
    *(undefined8 *)&pFVar16->field_0x50 = 0;
    pFVar14 = SVerticalBox::FSlot::FSlot(pFVar16);
  }
  local_4290 = pFVar14;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_35b8,(FSlot *)&local_4290);
  local_40b8.Value = 0.4;
  local_40b8.Getter._16_8_ = 0;
  local_40b8.bIsSet = true;
  local_40b8.Getter._0_8_ = 0;
  local_40b8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_35b8,&local_40b8);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,fVar9,0.0,fVar9,0.0);
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 1000) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SVerticalBox,1> *)(*pcVar7)();
    return pTVar13;
  }
  lVar3 = *(longlong *)(lVar2 + 1000);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x3f0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar3 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<SVerticalBox,1> *)(*pcVar7)();
    return pTVar13;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_42c8.ReferenceController = pTVar4;
  if ((longlong *)&pFVar15->field_0x8 != &local_42d0) {
    *(longlong *)&pFVar15->field_0x8 = lVar3;
    local_42d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_42c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42c8.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar15);
  pFVar14 = ::operator_new(0x58);
  local_4288 = (FSlot *)0x0;
  if (pFVar14 != (FSlot *)0x0) {
    *(undefined8 *)pFVar14 = 0;
    *(undefined8 *)&pFVar14->field_0x8 = 0;
    *(undefined8 *)&pFVar14->field_0x10 = 0;
    *(undefined8 *)&pFVar14->field_0x18 = 0;
    *(undefined8 *)&pFVar14->field_0x20 = 0;
    *(undefined8 *)&pFVar14->field_0x28 = 0;
    *(undefined8 *)&pFVar14->field_0x30 = 0;
    *(undefined8 *)&pFVar14->field_0x38 = 0;
    *(undefined8 *)&pFVar14->field_0x40 = 0;
    *(undefined8 *)&pFVar14->field_0x48 = 0;
    *(undefined8 *)&pFVar14->field_0x50 = 0;
    local_4288 = SVerticalBox::FSlot::FSlot(pFVar14);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_36a0,(FSlot *)&local_4288);
  local_41f8.Value = 0.3;
  local_41f8.Getter._16_8_ = 0;
  local_41f8.bIsSet = true;
  local_41f8.Getter._0_8_ = 0;
  local_41f8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_36a0,&local_41f8);
  pFVar20 = SVerticalBox::FArguments::FArguments(&local_2ce8);
  FLLMScope::FLLMScope(&local_43c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4280 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4278,&local_4280,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3be8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xd8,&local_43e6);
  FMemScope::~FMemScope(&local_4278);
  FLLMScope::~FLLMScope(&local_43c8);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3be8,&local_3d80,pFVar20);
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_4320 = pTVar12->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4318.ReferenceController = pTVar5;
  if ((SVerticalBox **)&pFVar15->field_0x8 != &local_4320) {
    *(SVerticalBox **)&pFVar15->field_0x8 = local_4320;
    local_4320 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_4318);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4318.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar15);
  FLLMScope::FLLMScope(&local_43c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4270 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4268,&local_4270,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3c00,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xc6,&local_43e5);
  FMemScope::~FMemScope(&local_4268);
  FLLMScope::~FLLMScope(&local_43c4);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3c00,&local_3d90,pFVar11);
  pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_4310 = pTVar12->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = (FSlot *)0x0;
  local_4308.ReferenceController = pTVar6;
  if ((SVerticalBox **)&local_4378->field_0x8 != &local_4310) {
    *(SVerticalBox **)&local_4378->field_0x8 = local_4310;
    local_4310 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_4378->field_0x10,&local_4308);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4308.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c00._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3be8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2ce8._Slots.AllocatorInstance.Data,local_2ce8._Slots.ArrayNum);
  if ((FSlotArguments *)local_2ce8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2ce8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2ce8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_36a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_35b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d70.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3de0._Widget.SharedReferenceCount.ReferenceController);
  if (local_3d60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d60.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_15e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_34d0);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2ae0._Slots.AllocatorInstance.Data,local_2ae0._Slots.ArrayNum);
  if ((FSlotArguments *)local_2ae0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2ae0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2ae0);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_38a0);
  pSVar21 = TSharedPtr<SVerticalBox,1>::operator->(__return_storage_ptr__);
  pFVar22 = SVerticalBox::AddSlot(pSVar21,&local_1e38);
  local_40f8.Value = 0.2;
  local_40f8.bIsSet = true;
  local_40f8.Getter._0_8_ = 0;
  local_40f8.Getter._8_8_ = 0;
  local_40f8.Getter._16_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)&pFVar22->_padding_,&local_40f8);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,0.0,0.0,__real_41000000);
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_28d8);
  pFVar16 = ::operator_new(0x58);
  if (pFVar16 != (FSlot *)0x0) {
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)&pFVar16->field_0x8 = 0;
    *(undefined8 *)&pFVar16->field_0x10 = 0;
    *(undefined8 *)&pFVar16->field_0x18 = 0;
    *(undefined8 *)&pFVar16->field_0x20 = 0;
    *(undefined8 *)&pFVar16->field_0x28 = 0;
    *(undefined8 *)&pFVar16->field_0x30 = 0;
    *(undefined8 *)&pFVar16->field_0x38 = 0;
    *(undefined8 *)&pFVar16->field_0x40 = 0;
    *(undefined8 *)&pFVar16->field_0x48 = 0;
    *(undefined8 *)&pFVar16->field_0x50 = 0;
    pFVar14 = SVerticalBox::FSlot::FSlot(pFVar16);
  }
  local_4260 = pFVar14;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_33e8,(FSlot *)&local_4260);
  local_4118.Value = 0.2;
  local_4118.Getter._16_8_ = 0;
  local_4118.bIsSet = true;
  local_4118.Getter._0_8_ = 0;
  local_4118.Getter._8_8_ = 0;
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_33e8,&local_4118);
  pFVar17 = STextBlock::FArguments::FArguments(&local_1088);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_3d20,L"SOscilloscopePanelWidget",
                       L"Oscilloscope_TriggerThreshold_Display_Label",L"Trigger Threshold");
  FText::FText(&local_3e70.Value,pFVar18);
  local_3e70.bIsSet = true;
  local_3e70.Getter._16_8_ = 0;
  local_3e70.Getter._0_8_ = 0;
  local_3e70.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_3e70);
  local_4138.Value = Center;
  local_4138.bIsSet = true;
  local_4138.Getter._16_8_ = 0;
  local_4138.Getter._0_8_ = 0;
  local_4138.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Justification(pFVar17,&local_4138);
  FLLMScope::FLLMScope(local_43c0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4258 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4250,&local_4258,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3dc8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0xe5,&local_43e4);
  FMemScope::~FMemScope(&local_4250);
  FLLMScope::~FLLMScope(local_43c0);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3dc8,&local_3d30,pFVar17);
  pTVar1 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_3f38.Object = (SWidget *)pTVar19->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f38.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_3f38);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar23);
  pFVar23 = SVerticalBox::Slot(&local_22c0);
  local_4098.Value = 0.8;
  local_4098.bIsSet = true;
  local_4098.Getter._16_8_ = 0;
  local_4098.Getter._0_8_ = 0;
  local_4098.Getter._8_8_ = 0;
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar23,&local_4098);
  pTVar24 = TSharedPtr<SAudioRadialSlider,1>::ToSharedRef
                      ((TSharedPtr<SAudioRadialSlider,1> *)(*(longlong *)this + 0x418),&local_3d40);
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_3f28.Object = (SWidget *)pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f28.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_3f28);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar23);
  pTVar25 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3b88,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
                       ,0xe1,&local_43e3);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar25,&local_3d50,pFVar11);
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_3ef8.Object = (SWidget *)pTVar12->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3ef8.SharedReferenceCount.ReferenceController = pTVar5;
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar15,&local_3ef8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d50.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b88._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d40.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_22c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3dc8._Widget.SharedReferenceCount.ReferenceController);
  if (local_3d20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d20.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_1088);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_33e8);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_28d8._Slots.AllocatorInstance.Data,local_28d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_28d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_28d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_28d8);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1e38);
  pSVar21 = TSharedPtr<SVerticalBox,1>::operator->(__return_storage_ptr__);
  pFVar22 = SVerticalBox::AddSlot(pSVar21,&local_1d38);
  local_4078.Value = 0.2;
  local_4078.bIsSet = true;
  local_4078.Getter._16_8_ = 0;
  local_4078.Getter._0_8_ = 0;
  local_4078.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)&pFVar22->_padding_,&local_4078);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,0.0,0.0,fVar9);
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_26d0);
  pFVar23 = SVerticalBox::Slot(&local_20f0);
  local_4058.Value = 0.2;
  local_4058.bIsSet = true;
  local_4058.Getter._16_8_ = 0;
  local_4058.Getter._0_8_ = 0;
  local_4058.Getter._8_8_ = 0;
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar23,&local_4058);
  pFVar17 = STextBlock::FArguments::FArguments(&local_b30);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_3ce0,L"SOscilloscopePanelWidget",
                       L"Oscilloscope_TimeWindow_Display_Label",L"Time Window");
  FText::FText(&local_3e40.Value,pFVar18);
  local_3e40.bIsSet = true;
  local_3e40.Getter._16_8_ = 0;
  local_3e40.Getter._0_8_ = 0;
  local_3e40.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_3e40);
  local_4038.Value = Center;
  local_4038.bIsSet = true;
  local_4038.Getter._16_8_ = 0;
  local_4038.Getter._0_8_ = 0;
  local_4038.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Justification(pFVar17,&local_4038);
  pTVar26 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3bd0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
                       ,0xf9,&local_43e2);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar26,&local_3cf0,pFVar17);
  pTVar1 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_3f18.Object = (SWidget *)pTVar19->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f18.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_3f18);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar23);
  pFVar23 = SVerticalBox::Slot(&local_21d8);
  local_4018.Value = 0.8;
  local_4018.Getter._16_8_ = 0;
  local_4018.bIsSet = true;
  local_4018.Getter._0_8_ = 0;
  local_4018.Getter._8_8_ = 0;
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar23,&local_4018);
  pTVar24 = TSharedPtr<SAudioRadialSlider,1>::ToSharedRef
                      ((TSharedPtr<SAudioRadialSlider,1> *)(*(longlong *)this + 0x428),&local_3d00);
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_3f08.Object = (SWidget *)pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f08.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_3f08);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar23);
  pTVar25 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3b70,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
                       ,0xf5,&local_43e1);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar25,&local_3d10,pFVar11);
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_3f78.Object = (SWidget *)pTVar12->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f78.SharedReferenceCount.ReferenceController = pTVar5;
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar15,&local_3f78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d00.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_21d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cf0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3bd0._Widget.SharedReferenceCount.ReferenceController);
  if (local_3ce0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3ce0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_b30);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_20f0);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_26d0._Slots.AllocatorInstance.Data,local_26d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_26d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_26d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_26d0);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1d38);
  pSVar21 = TSharedPtr<SVerticalBox,1>::operator->(__return_storage_ptr__);
  pFVar22 = SVerticalBox::AddSlot(pSVar21,&local_1c38);
  local_3ff8.Value = 0.2;
  local_3ff8.bIsSet = true;
  local_3ff8.Getter._16_8_ = 0;
  local_3ff8.Getter._0_8_ = 0;
  local_3ff8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)&pFVar22->_padding_,&local_3ff8);
  pFVar15 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar15->field_0x18,0.0,0.0,0.0,fVar9);
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_24c8);
  pFVar23 = SVerticalBox::Slot(&local_1f20);
  local_3fd8.Value = 0.2;
  local_3fd8.bIsSet = true;
  local_3fd8.Getter._16_8_ = 0;
  local_3fd8.Getter._0_8_ = 0;
  local_3fd8.Getter._8_8_ = 0;
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar23,&local_3fd8);
  pFVar17 = STextBlock::FArguments::FArguments(&local_5d8);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_3ca0,L"SOscilloscopePanelWidget",
                       L"Oscilloscope_AnalysisPeriod_Display_Label",L"Analysis Period");
  FText::FText(&local_3e10.Value,pFVar18);
  local_3e10.bIsSet = true;
  local_3e10.Getter._16_8_ = 0;
  local_3e10.Getter._0_8_ = 0;
  local_3e10.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_3e10);
  local_3fb8.Value = Center;
  local_3fb8.bIsSet = true;
  local_3fb8.Getter._16_8_ = 0;
  local_3fb8.Getter._0_8_ = 0;
  local_3fb8.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Justification(pFVar17,&local_3fb8);
  pTVar26 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3ba0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
                       ,0x10d,&local_43e0);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar26,&local_3cb0,pFVar17);
  pTVar1 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_3f68.Object = (SWidget *)pTVar19->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f68.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_3f68);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar23);
  pFVar23 = SVerticalBox::Slot(&local_2008);
  local_3f98.Value = 0.8;
  local_3f98.Getter._16_8_ = 0;
  local_3f98.bIsSet = true;
  local_3f98.Getter._0_8_ = 0;
  local_3f98.Getter._8_8_ = 0;
  pFVar23 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar23,&local_3f98);
  pTVar24 = TSharedPtr<SAudioRadialSlider,1>::ToSharedRef
                      ((TSharedPtr<SAudioRadialSlider,1> *)(*(longlong *)this + 0x438),&local_3cc0);
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_3f58.Object = (SWidget *)pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f58.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar23 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar23,&local_3f58);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,pFVar23);
  pTVar25 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3bb8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
                       ,0x109,local_43df);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar25,&local_3cd0,pFVar11);
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_3f48.Object = (SWidget *)pTVar12->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f48.SharedReferenceCount.ReferenceController = pTVar5;
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar15,&local_3f48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3bb8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cc0.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2008);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ba0._Widget.SharedReferenceCount.ReferenceController);
  if (local_3ca0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3ca0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1f20);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_24c8._Slots.AllocatorInstance.Data,local_24c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_24c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_24c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_24c8);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1c38);
  return __return_storage_ptr__;
}

// operator() @ 14d8cea50

FText * __thiscall
`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  undefined4 local_res8 [2];
  FText local_28;
  FText local_18;
  
  local_res8[0] = 0;
  if (*(FString **)(*(longlong *)this + 0x3d8) == (FString *)0x0) {
    pFVar5 = FText::GetEmpty();
    TVar6.Reference = (pFVar5->TextData).Reference;
    local_28.TextData.Reference = TVar6.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res8);
    }
    pFVar4 = &local_28;
    local_28.Flags = pFVar5->Flags;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    pFVar4 = FText::FromString(&local_18,*(FString **)(*(longlong *)this + 0x3d8));
    bVar3 = true;
    bVar2 = false;
    TVar6.Reference = local_28.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  if ((bVar2) && (TVar6.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
  }
  if ((bVar3) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14d8ceb40

FText * __thiscall
`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  longlong lVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  UEnum *this_00;
  bool bVar5;
  UPackage *pUVar6;
  FText *pFVar7;
  FText *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  ForAnyElementType FVar10;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FText local_48;
  FString local_38;
  FText local_28;
  
  local_res8[0] = 0;
  if (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode,
                       (UObject *)pUVar6,L"EAudioOscilloscopeTriggerMode");
  }
  this_00 = Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton;
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x408) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar3)();
      return pFVar7;
    }
  }
  UEnum::GetNameStringByValue(this_00,&local_38,(ulonglong)**(byte **)(lVar1 + 0x408));
  if (*(longlong *)(*(longlong *)this + 0x408) == 0) {
    pFVar7 = FText::GetEmpty();
    TVar9.Reference = (pFVar7->TextData).Reference;
    local_48.TextData.Reference = TVar9.Reference;
    if (TVar9.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar9.Reference + 8))(TVar9.Reference,local_res8);
    }
    pFVar8 = &local_48;
    local_48.Flags = pFVar7->Flags;
    bVar4 = false;
    bVar5 = true;
  }
  else {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar10.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar8 = FText::FromString(&local_28,(wchar_t *)FVar10.Data);
    bVar4 = true;
    bVar5 = false;
    TVar9.Reference = local_48.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar8->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar8->Flags;
  if ((bVar5) && (TVar9.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar9.Reference + 0x10))(TVar9.Reference);
  }
  if ((bVar4) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildWidget @ 14d8e42d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::BuildWidget
          (SAudioOscilloscopePanelWidget *this,FFixedSampledSequenceView *param_1,int param_2,
          EAudioPanelLayoutType param_3)

{
  TSharedPtr<FFixedSampledSequenceGridData,1> *this_00;
  float fVar1;
  FAudioOscilloscopePanelStyle *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FFixedSampledSequenceGridData,1> *pTVar8;
  uint uVar9;
  uint uVar10;
  FFixedSampledSequenceGridData *pFVar11;
  TSharedPtr<FFixedSampledSequenceGridData,1> local_48;
  TSharedRef<FFixedSampledSequenceGridData,1> local_38;
  TSharedRef<FFixedSampledSequenceGridData,1> local_28;
  
  pFVar2 = this->PanelStyle;
  this->NumChannels = param_2;
  this->PanelLayoutType = param_3;
  iVar4 = (param_1->SampleData).ArrayNum;
  uVar5 = *(undefined4 *)&(param_1->SampleData).field_0xc;
  (this->DataView).SampleData.DataPtr = (param_1->SampleData).DataPtr;
  (this->DataView).SampleData.ArrayNum = iVar4;
  *(undefined4 *)&(this->DataView).SampleData.field_0xc = uVar5;
  uVar10 = param_1->SampleRate;
  (this->DataView).NumDimensions = param_1->NumDimensions;
  (this->DataView).SampleRate = uVar10;
  uVar10 = (uint)(this->DataView).SampleData.ArrayNum / (this->DataView).NumDimensions;
  pTVar7 = ::operator_new(0xe0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_48.Object = ___xmm_00000000000000000000000000000010;
    pFVar11 = (FFixedSampledSequenceGridData *)&DAT_00000010;
    local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    fVar1 = (pFVar2->TimeRulerStyle).DesiredWidth;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFixedSampledSequenceGridData___00_SharedPointerInternals__6B_
    ;
    uVar9 = 2;
    if (2 < uVar10) {
      uVar9 = uVar10;
    }
    FFixedSampledSequenceGridData::FFixedSampledSequenceGridData
              ((FFixedSampledSequenceGridData *)(pTVar7 + 1),uVar9,(this->DataView).SampleRate,
               &(pFVar2->TimeRulerStyle).TicksTextFont,fVar1);
    pFVar11 = (FFixedSampledSequenceGridData *)(pTVar7 + 1);
    if (pFVar11 == (FFixedSampledSequenceGridData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    local_48.Object = pFVar11;
  }
  this_00 = &this->SequenceGridData;
  if (this_00 != &local_48) {
    this_00->Object = pFVar11;
    local_48.Object = (FFixedSampledSequenceGridData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceGridData).SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar2 = this->PanelStyle;
  pTVar8 = TSharedPtr<FFixedSampledSequenceGridData,1>::ToSharedRef(this_00,&local_38);
  CreateSequenceRuler(this,pTVar8,&pFVar2->TimeRulerStyle);
  CreateBackground(this,&this->PanelStyle->WaveViewerStyle);
  CreateValueGridOverlay
            (this,this->ValueGridMaxDivisionParameter,MidSplit,this->ValueGridOverlayDisplayUnit,
             &this->PanelStyle->ValueGridStyle);
  pFVar2 = this->PanelStyle;
  pTVar8 = TSharedPtr<FFixedSampledSequenceGridData,1>::ToSharedRef(this_00,&local_28);
  CreateSequenceViewer(this,pTVar8,&this->DataView,&pFVar2->WaveViewerStyle);
  CreateTriggerThresholdLine(this,&this->PanelStyle->TriggerThresholdLineStyle);
  if (this->PanelLayoutType == Advanced) {
    CreateChannelCombobox(this);
    CreateTriggerModeCombobox(this);
    CreateTriggerThresholdKnob(this);
    CreateTimeWindowKnob(this);
    CreateAnalysisPeriodKnob(this);
  }
  CreateLayout(this);
  return;
}

// Construct @ 14d8eb1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::Construct
          (SAudioOscilloscopePanelWidget *this,FArguments *param_1,
          FFixedSampledSequenceView *param_2,int param_3)

{
  TDelegate<EYAxisLabelsUnit___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  code *pcVar1;
  char cVar2;
  EYAxisLabelsUnit EVar3;
  bool bVar4;
  bool *pbVar5;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this_00 = &(param_1->_YAxisLabelsUnit).Getter;
  this->SequenceRulerDisplayUnit = param_1->_SequenceRulerDisplayUnit;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if ((*(int *)&(param_1->_YAxisLabelsUnit).Getter.field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(param_1->_YAxisLabelsUnit).Getter.field_0x8,
     plVar6 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar6 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&(param_1->_YAxisLabelsUnit).Getter.field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(param_1->_YAxisLabelsUnit).Getter.field_0x8;
      }
      EVar3 = (**(code **)(*plVar6 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      (param_1->_YAxisLabelsUnit).Value = EVar3;
      goto LAB_14d8eb29a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_14d8eb29a:
  this->ValueGridOverlayDisplayUnit = (param_1->_YAxisLabelsUnit).Value;
  this->ValueGridMaxDivisionParameter = param_1->_ValueGridMaxDivisionParameter;
  pbVar5 = TAttribute<bool>::Get(&param_1->_HideSequenceRuler);
  this->bHideSequenceRuler = *pbVar5;
  pbVar5 = TAttribute<bool>::Get(&param_1->_HideSequenceGrid);
  this->bHideSequenceGrid = *pbVar5;
  pbVar5 = TAttribute<bool>::Get(&param_1->_HideValueGrid);
  this->bHideValueGrid = *pbVar5;
  pbVar5 = TAttribute<bool>::Get(&param_1->_HideTriggerThresholdLine);
  this->bHideTriggerThresholdLine = *pbVar5;
  if (param_1->_PanelStyle == (FAudioOscilloscopePanelStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._PanelStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
                       ,0x51,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->PanelStyle = param_1->_PanelStyle;
  BuildWidget(this,param_2,param_3,param_1->_PanelLayoutType);
  return;
}

// CreateAnalysisPeriodKnob @ 14d8f1430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob(SAudioOscilloscopePanelWidget *this)

{
  TSharedPtr<SAudioRadialSlider,1> *pTVar1;
  SAudioRadialSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioRadialSlider,1> *pTVar8;
  FText *pFVar9;
  undefined1 auStackY_538 [32];
  T0RequiredArgs local_508 [4];
  FLLMScope local_504;
  SAudioRadialSlider *local_500;
  FSharedReferencer<1> local_4f8;
  FName local_4f0;
  FMemScope local_4e8;
  FDestructionSentinel local_4e0;
  undefined1 *local_4c8;
  FDestructionSentinel local_4c0;
  undefined1 *local_4a8;
  FDestructionSentinel local_4a0;
  undefined1 *local_488;
  TSharedRef<SAudioRadialSlider,1> local_480;
  TVector2<double>_u_0 local_468;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> local_458;
  FText local_440;
  FArguments local_430;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_538;
  pFVar5 = SAudioRadialSlider::FArguments::FArguments(&local_430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureBegin
             ,(FWriteAccessScope *)&local_4e0);
  local_4c8 = &(pFVar5->_OnMouseCaptureBegin).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&local_4c0);
  local_4a8 = &(pFVar5->_OnMouseCaptureEnd).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4a8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
  }
  FLLMScope::FLLMScope(&local_504,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4e8,&local_4f0,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_458,"SAudioRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x293,local_508);
  FMemScope::~FMemScope(&local_4e8);
  FLLMScope::~FLLMScope(&local_504);
  pTVar8 = TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_458,&local_480,pFVar5);
  local_4f8.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_500 = pTVar8->Object;
  if (local_4f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->AnalysisPeriodKnob;
  if (pTVar1 != (TSharedPtr<SAudioRadialSlider,1> *)&local_500) {
    pTVar1->Object = local_500;
    local_500 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AnalysisPeriodKnob).SharedReferenceCount,&local_4f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458._Widget.SharedReferenceCount.ReferenceController);
  SAudioRadialSlider::FArguments::~FArguments(&local_430);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_468 = AnalysisPeriodKnobOutputRange.field0_0x0;
  (**(code **)(pTVar1->Object->_padding_ + 0x260))(pTVar1->Object,&local_468);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  pcVar3 = *(code **)(pSVar2->_padding_ + 0x270);
  pFVar9 = FText::FromString(&local_440,"ms");
  (*pcVar3)(pSVar2,pFVar9);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar2->OnValueChanged,
             (FWriteAccessScope *)&local_4a0);
  local_488 = &(pSVar2->OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_488);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
  }
  return;
}

// CreateBackground @ 14d8f1920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateBackground
          (SAudioOscilloscopePanelWidget *this,FSampledSequenceViewerStyle *param_1)

{
  FArguments *pFVar1;
  TSharedRef<SBorder,1> *pTVar2;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FDestructionSentinel local_498;
  FSlateBrush *local_480;
  undefined1 local_478;
  undefined1 local_470 [8];
  ForAnyElementType FStack_468;
  ulonglong local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined1 local_440 [8];
  ForAnyElementType FStack_438;
  ulonglong local_430;
  SBorder *local_428;
  FSharedReferencer<1> local_420;
  TSharedRef<SBorder,1> local_418;
  FArguments local_408;
  
  pFVar1 = SBorder::FArguments::FArguments(&local_408);
  local_478 = 1;
  local_480 = &param_1->BackgroundBrush;
  local_470 = (undefined1  [8])0x0;
  FStack_468.Data = (FScriptContainerElement *)0x0;
  local_460 = 0;
  (pFVar1->_BorderImage).Value = local_480;
  (pFVar1->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
             (FWriteAccessScope *)&local_498);
  if (((int)local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_468.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_468,0,0,0x10);
    local_460 = local_460 & 0xffffffff00000000;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_468.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  local_448._0_1_ = (param_1->SequenceBackgroundColor).ColorUseRule;
  local_448._1_1_ = (param_1->SequenceBackgroundColor).ColorTableId;
  local_448._2_2_ = *(undefined2 *)&(param_1->SequenceBackgroundColor).field_0x12;
  local_458 = *(undefined8 *)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  uStack_450 = *(undefined8 *)
                ((longlong)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  local_444 = 1;
  local_430 = 0;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_458;
  *(undefined8 *)((longlong)&(pFVar1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_450;
  (pFVar1->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_448;
  (pFVar1->_BorderBackgroundColor).Value.ColorTableId = local_448._1_1_;
  *(undefined2 *)&(pFVar1->_BorderBackgroundColor).Value.field_0x12 = local_448._2_2_;
  (pFVar1->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
             (FWriteAccessScope *)&local_498);
  if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = local_430 & 0xffffffff00000000;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_498,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x149,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar2 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_498,&local_418,
                      pFVar1);
  local_420.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_428 = pTVar2->Object;
  if (local_420.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_420.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_420.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackgroundBorder != (TSharedPtr<SBorder,1> *)&local_428) {
    (this->BackgroundBorder).Object = local_428;
    local_428 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackgroundBorder).SharedReferenceCount,&local_420);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_420.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_498.Accessor);
  SBorder::FArguments::~FArguments(&local_408);
  return;
}

// CreateChannelCombobox @ 14d8f2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateChannelCombobox(SAudioOscilloscopePanelWidget *this)

{
  int *piVar1;
  byte *pbVar2;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FString,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  STextBlock *pSVar6;
  code *pcVar7;
  SComboBox<TSharedPtr<FString,1>_> *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  FString *this_00;
  FArguments *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FArguments *pFVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  undefined ***pppuVar19;
  FScriptContainerElement *pFVar20;
  FString *pFVar21;
  uint uVar22;
  undefined1 auStackY_aa8 [32];
  T0RequiredArgs local_a58;
  T0RequiredArgs local_a57 [3];
  FLLMScope local_a54;
  FLLMScope local_a50 [2];
  TSharedPtr<FString,1> local_a48;
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_a38;
  SWidget *local_a20;
  TReferenceControllerBase<1> *pTStack_a18;
  SComboBox<TSharedPtr<FString,1>_> *local_a10;
  FSharedReferencer<1> local_a08;
  TRawPtrProxy<FString> local_a00;
  FName local_9f8;
  FMemScope local_9f0;
  FName local_9e8;
  FMemScope local_9e0;
  undefined8 local_9d8;
  FSharedReferencer<1> FStack_9d0;
  FDestructionSentinel local_9c8;
  undefined1 *local_9b0;
  FDestructionSentinel local_9a8;
  undefined1 *local_990;
  FDestructionSentinel local_988;
  undefined1 *local_970;
  FString *local_968;
  TReferenceControllerBase<1> *pTStack_960;
  FString *local_958;
  TReferenceControllerBase<1> *pTStack_950;
  TSharedRef<STextBlock,1> local_948;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_938;
  undefined1 local_920 [576];
  undefined1 local_6e0 [48];
  undefined1 local_6b0 [48];
  FSharedReferencer<1> local_680;
  undefined1 local_678 [24];
  undefined1 local_660 [24];
  undefined1 local_648 [32];
  FSharedReferencer<1> local_628;
  FSharedReferencer<1> local_618;
  FArguments local_5c0;
  code *local_68;
  undefined **local_58;
  SAudioOscilloscopePanelWidget *local_50;
  undefined ***local_40;
  ulonglong local_38;
  FString *pFVar23;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  pTVar3 = &this->ChannelComboboxOptionsSource;
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(pTVar3->AllocatorInstance).Data,
             (this->ChannelComboboxOptionsSource).ArrayNum);
  piVar1 = &(this->ChannelComboboxOptionsSource).ArrayMax;
  (this->ChannelComboboxOptionsSource).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pFVar23 = (FString *)0x0;
  if (this->NumChannels != 0) {
    do {
      this_00 = ::operator_new(0x10);
      uVar22 = (int)pFVar23 + 1;
      pFVar23 = (FString *)(ulonglong)uVar22;
      pFVar21 = (FString *)0x0;
      if (this_00 != (FString *)0x0) {
        (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Data).ArrayNum = 0;
        (this_00->Data).ArrayMax = 0;
        ::FString::AppendInt(this_00,uVar22);
        pFVar21 = this_00;
      }
      local_a00.Object = pFVar21;
      TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_a48,&local_a00);
      pTVar4 = (TSharedPtr<FString,1> *)(pTVar3->AllocatorInstance).Data;
      if (((pTVar4 <= &local_a48) && (&local_a48 < pTVar4 + *piVar1)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (this->ChannelComboboxOptionsSource).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ChannelComboboxOptionsSource).ArrayNum = iVar13 + 1;
      pFVar20 = (pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(FString **)pFVar20 = local_a48.Object;
      *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
           local_a48.SharedReferenceCount.ReferenceController;
      local_a48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_a48.Object = (FString *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    } while (uVar22 < this->NumChannels);
  }
  if (((this->ChannelComboboxOptionsSource).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  pTVar5 = *(TReferenceControllerBase<1> **)(pFVar20 + 8);
  pFVar23 = *(FString **)pFVar20;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_968 = (this->SelectedChannelPtr).Object;
  pTStack_960 = (this->SelectedChannelPtr).SharedReferenceCount.ReferenceController;
  (this->SelectedChannelPtr).Object = pFVar23;
  (this->SelectedChannelPtr).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_960);
  pFVar14 = SComboBox<TSharedPtr<FString,1>_>::FArguments::FArguments((FArguments *)local_920);
  local_9d8 = 0;
  FStack_9d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar14->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar14->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  if (&pFVar14->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)&local_9d8) {
    (pFVar14->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar14->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_9d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_9d0.ReferenceController);
  pFVar14->_OptionsSource_ArrayPointer = pTVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnGenerateWidget,
             (FWriteAccessScope *)&local_9c8);
  local_9b0 = &(pFVar14->_OnGenerateWidget).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_9b0);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[3] = this;
  }
  if (local_9c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9c8.Accessor,&local_9c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_9a8);
  local_990 = &(pFVar14->_OnSelectionChanged).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_990);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar15[3] = this;
  }
  if (local_9a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a8.Accessor,&local_9a8);
  }
  pTVar5 = (this->SelectedChannelPtr).SharedReferenceCount.ReferenceController;
  pFVar23 = (this->SelectedChannelPtr).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_958 = (pFVar14->_InitiallySelectedItem).Object;
  pTStack_950 = (pFVar14->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  (pFVar14->_InitiallySelectedItem).Object = pFVar23;
  (pFVar14->_InitiallySelectedItem).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_950);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pFVar17 = STextBlock::FArguments::FArguments(&local_5c0);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,FText>
             ::Call;
  (pFVar17->_Text).bIsSet = true;
  local_50 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Text).Getter,
             (FWriteAccessScope *)&local_988);
  local_970 = &(pFVar17->_Text).Getter.field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_970);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    puVar15[4] = local_68;
    puVar15[9] = 0;
    if (local_68 != (code *)0x0) {
      pppuVar19 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar19 = local_40;
      }
      (*(code *)**pppuVar19)();
    }
  }
  if (local_988.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_988.Accessor,&local_988);
  }
  FLLMScope::FLLMScope(&local_a54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9f0,&local_9f8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_938,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x198,&local_a58);
  FMemScope::~FMemScope(&local_9f0);
  FLLMScope::~FLLMScope(&local_a54);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_938,&local_948,pFVar17);
  pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar18->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a20 = (pFVar14->_Content).Widget.Object;
  pTStack_a18 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a18);
  FLLMScope::FLLMScope(local_a50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9e0,&local_9e8,true);
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_a38,"SComboBox<TSharedPtr<FString>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x192,local_a57);
  FMemScope::~FMemScope(&local_9e0);
  FLLMScope::~FLLMScope(local_a50);
  pSVar8 = local_a38._Widget.Object;
  if ((local_a38._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_a38._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SComboBox<TSharedPtr<FString,1>_>::Construct(local_a38._Widget.Object,pFVar14);
  if ((local_a38._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_a38._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_a38._Widget.Object)->_padding_ + 0x228))(local_a38._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14d8f2774;
  }
  bVar12 = 0x20;
LAB_14d8f2774:
  *(byte *)&(local_a38._Widget.Object)->_padding_ =
       (byte)(local_a38._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a38._Widget.Object)->_padding_ =
       (byte)(local_a38._Widget.Object)->_padding_ | bVar12;
  if ((local_a38._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_a38._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_a38._Widget.Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar9.ReferenceController = local_a38._Widget.SharedReferenceCount.ReferenceController;
  local_a38._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a38._Widget.Object = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
  if ((pSVar8 == (SComboBox<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a10 = pSVar8;
  local_a08.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ChannelCombobox != (TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *)&local_a10) {
    (this->ChannelCombobox).Object = pSVar8;
    local_a10 = (SComboBox<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChannelCombobox).SharedReferenceCount,&local_a08);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a08.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_948.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_938._Widget.SharedReferenceCount.ReferenceController);
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  STextBlock::FArguments::~FArguments(&local_5c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_618.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_628.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
  if ((void *)local_648._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_648._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_660);
  if ((void *)local_660._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_660._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_660);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  if ((void *)local_678._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_678._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_678);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_680.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b0);
  if ((void *)local_6b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e0);
  if ((void *)local_6e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_920._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_920);
  return;
}

// CreateGridData @ 14d905c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateGridData
          (SAudioOscilloscopePanelWidget *this,FFixedSampleSequenceRulerStyle *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  uint uVar6;
  FFixedSampledSequenceGridData *pFVar7;
  FFixedSampledSequenceGridData *local_18;
  FSharedReferencer<1> FStack_10;
  
  uVar6 = (uint)(this->DataView).SampleData.ArrayNum / (this->DataView).NumDimensions;
  pTVar4 = ::operator_new(0xe0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FFixedSampledSequenceGridData *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    fVar1 = param_1->DesiredWidth;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFixedSampledSequenceGridData___00_SharedPointerInternals__6B_
    ;
    uVar5 = 2;
    if (2 < uVar6) {
      uVar5 = uVar6;
    }
    FFixedSampledSequenceGridData::FFixedSampledSequenceGridData
              ((FFixedSampledSequenceGridData *)(pTVar4 + 1),uVar5,(this->DataView).SampleRate,
               &param_1->TicksTextFont,fVar1);
    pFVar7 = (FFixedSampledSequenceGridData *)(pTVar4 + 1);
    if (pFVar7 == (FFixedSampledSequenceGridData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar4;
    local_18 = pFVar7;
  }
  if (&this->SequenceGridData != (TSharedPtr<FFixedSampledSequenceGridData,1> *)&local_18) {
    (this->SequenceGridData).Object = pFVar7;
    local_18 = (FFixedSampledSequenceGridData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceGridData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// CreateLayout @ 14d906180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioOscilloscopePanelWidget::CreateLayout(SAudioOscilloscopePanelWidget *this)

{
  SVerticalBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SHorizontalBox *pSVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  TSharedPtr<SVerticalBox,1> *pTVar11;
  TSharedRef<SHorizontalBox,1> *pTVar12;
  longlong *plVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  SAudioOscilloscopePanelWidget *local_res18;
  SAudioOscilloscopePanelWidget *local_res20;
  SVerticalBox *local_518;
  FSharedReferencer<1> local_510;
  SVerticalBox *local_508;
  FSharedReferencer<1> local_500;
  SHorizontalBox *local_4f8;
  TReferenceControllerBase<1> *pTStack_4f0;
  FArguments *local_4e8;
  FName local_4e0;
  FMemScope local_4d8;
  TAttribute<float> local_4d0;
  TAttribute<float> local_4b0;
  TSharedRef<SHorizontalBox,1> local_490;
  TSharedPtr<SVerticalBox,1> local_480;
  TSharedPtr<SVerticalBox,1> local_470;
  longlong local_460;
  TReferenceControllerBase<1> *pTStack_458;
  TSharedPtr<SVerticalBox,1> local_450;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_440;
  undefined8 *local_428 [2];
  TReferenceControllerBase<1> *local_418;
  undefined1 local_3f8 [40];
  FSlotArgumentsMixin local_3d0;
  undefined8 *local_340 [2];
  TReferenceControllerBase<1> *local_330;
  undefined1 local_310 [40];
  FSlotArgumentsMixin local_2e8;
  FArguments local_258;
  
  local_res18 = this;
  if (this->PanelLayoutType != Advanced) {
    pTVar11 = `SAudioOscilloscopePanelWidget::CreateLayout'::__l2::<lambda_1>::operator()
                        (&local_res18,&local_450);
    if (pTVar11->Object == (SVerticalBox *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar1 = pTVar11->Object;
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SVerticalBox *)0x0;
    if (pSVar1 == (SVerticalBox *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    plVar13 = &this->_padding_;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_460 = this->_padding_;
    pTStack_458 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar1;
    this->_padding_ = (longlong)pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_458)
    ;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.SharedReferenceCount.ReferenceController);
    return;
  }
  this->OscilloscopeViewProportion = 0.9;
  local_res20 = this;
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_258);
  pFVar10 = SHorizontalBox::Slot((FSlotArguments *)local_340);
  local_4d0.Value = this->OscilloscopeViewProportion;
  local_4d0.bIsSet = true;
  local_4d0.Getter._16_8_ = 0;
  local_4d0.Getter._0_8_ = 0;
  local_4d0.Getter._8_8_ = 0;
  pFVar10 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar10,&local_4d0);
  pTVar11 = `SAudioOscilloscopePanelWidget::CreateLayout'::__l2::<lambda_1>::operator()
                      (&local_res18,&local_470);
  if (pTVar11->Object == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar1 = pTVar11->Object;
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11->Object = (SVerticalBox *)0x0;
  if (pSVar1 == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_518 = pSVar1;
  local_510.ReferenceController = pTVar2;
  if ((SVerticalBox **)&pFVar10->field_0x8 != &local_518) {
    *(SVerticalBox **)&pFVar10->field_0x8 = pSVar1;
    local_518 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_510);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_510.ReferenceController);
  local_4e8 = SHorizontalBox::FArguments::operator+(pFVar9,pFVar10);
  pFVar10 = SHorizontalBox::Slot((FSlotArguments *)local_428);
  local_4b0.Value = __real_3f800000 - this->OscilloscopeViewProportion;
  local_4b0.bIsSet = true;
  local_4b0.Getter._16_8_ = 0;
  local_4b0.Getter._0_8_ = 0;
  local_4b0.Getter._8_8_ = 0;
  pFVar10 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar10,&local_4b0);
  pTVar11 = `SAudioOscilloscopePanelWidget::CreateLayout'::__l5::<lambda_2>::operator()
                      (&local_res20,&local_480);
  if (pTVar11->Object == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar1 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11->Object = (SVerticalBox *)0x0;
  if (pSVar1 == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_508 = pSVar1;
  local_500.ReferenceController = pTVar3;
  if ((SVerticalBox **)&pFVar10->field_0x8 != &local_508) {
    *(SVerticalBox **)&pFVar10->field_0x8 = pSVar1;
    local_508 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_500);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_500.ReferenceController);
  pFVar9 = SHorizontalBox::FArguments::operator+(local_4e8,pFVar10);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4d8,&local_4e0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_440,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x11f,local_res8);
  FMemScope::~FMemScope(&local_4d8);
  FLLMScope::~FLLMScope(local_res10);
  pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_440,&local_490,pFVar9);
  plVar13 = &this->_padding_;
  pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar12->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar4;
  local_4f8 = pSVar5;
  pTStack_4f0 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_490.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
  if ((void *)local_3f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_418);
  if (local_428[0] != (undefined8 *)0x0) {
    (**(code **)*local_428[0])(local_428[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if ((void *)local_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_330);
  if (local_340[0] != (undefined8 *)0x0) {
    (**(code **)*local_340[0])(local_340[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  return;
}

// CreateOscilloscopeControls @ 14d9087b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateOscilloscopeControls(SAudioOscilloscopePanelWidget *this)

{
  CreateChannelCombobox(this);
  CreateTriggerModeCombobox(this);
  CreateTriggerThresholdKnob(this);
  CreateTimeWindowKnob(this);
  CreateAnalysisPeriodKnob(this);
  return;
}

// CreateSequenceRuler @ 14d90a1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateSequenceRuler
          (SAudioOscilloscopePanelWidget *this,TSharedRef<FFixedSampledSequenceGridData,1> *param_1,
          FFixedSampleSequenceRulerStyle *param_2)

{
  TSharedPtr<SFixedSampledSequenceRuler,1> *pTVar1;
  FFixedSampledSequenceGridData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ESampledSequenceDisplayUnit EVar6;
  FArguments *pFVar7;
  TSharedRef<SFixedSampledSequenceRuler,1> *pTVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&> local_res18;
  FMemScope local_res20;
  undefined1 local_300 [8];
  ForAnyElementType FStack_2f8;
  ulonglong local_2f0;
  SFixedSampledSequenceRuler *local_2e8;
  FSharedReferencer<1> local_2e0;
  code *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  SFixedSampledSequenceRuler *local_2c8;
  TReferenceControllerBase<1> *local_2c0;
  code *local_2b8;
  undefined8 uStack_2b0;
  FDestructionSentinel local_2a8;
  undefined1 local_290 [16];
  TReferenceControllerBase<1> *local_280;
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  local_278;
  undefined1 local_260 [520];
  undefined1 local_58 [40];
  
  pFVar7 = SFixedSampledSequenceRuler::FArguments::FArguments((FArguments *)local_260);
  if ((this->SequenceRulerDisplayUnit == Samples) ||
     (EVar6 = Seconds, this->SequenceRulerDisplayUnit != Seconds)) {
    EVar6 = Samples;
  }
  pFVar7->_DisplayUnit = EVar6;
  pFVar7->_Style = param_2;
  local_2f0 = 0;
  local_300 = (undefined1  [8])0x0;
  FStack_2f8.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_DisplayPlayhead).Value = false;
  (pFVar7->_DisplayPlayhead).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_DisplayPlayhead).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_300);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_300,
             (FWriteAccessScope *)&local_2a8);
  if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
    local_2f0 = local_2f0 & 0xffffffff00000000;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_300);
  *(undefined1 *)((longlong)&pFVar7->_padding_ + 2) = 1;
  local_res18.Arg0 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            (&local_278,"SFixedSampledSequenceRuler",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x13e,&local_res18);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  pTVar8 = TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
           ::operator<<=(&local_278,(TSharedRef<SFixedSampledSequenceRuler,1> *)(local_290 + 8),
                         pFVar7);
  local_2e0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_2e8 = pTVar8->Object;
  if (local_2e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->SequenceRuler;
  if (pTVar1 != (TSharedPtr<SFixedSampledSequenceRuler,1> *)&local_2e8) {
    pTVar1->Object = local_2e8;
    local_2e8 = (SFixedSampledSequenceRuler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceRuler).SharedReferenceCount,&local_2e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_260);
  if ((this->SequenceGridData).Object == (FFixedSampledSequenceGridData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->SequenceGridData).Object;
  local_2d8 = SFixedSampledSequenceRuler::UpdateGridMetrics;
  uStack_2cc = uStack_2b0._4_4_;
  uStack_2d0 = 0;
  if (pTVar1->Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_2c8 = pTVar1->Object;
  pTVar3 = (this->SequenceRuler).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c0 = pTVar3;
  if (local_2c8 == (SFixedSampledSequenceRuler *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_2b0 = CONCAT44(uStack_2cc,uStack_2d0);
  local_2b8 = local_2d8;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SFixedSampledSequenceRuler,1>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnGridMetricsUpdated,(TSharedRef<SFixedSampledSequenceRuler,1> *)local_290,
             (pmf_57569940 *)&local_2c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CreateSequenceViewer @ 14d90a6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateSequenceViewer
          (SAudioOscilloscopePanelWidget *this,TSharedRef<FFixedSampledSequenceGridData,1> *param_1,
          FFixedSampledSequenceView *param_2,FSampledSequenceViewerStyle *param_3)

{
  TSharedPtr<SFixedSampledSequenceViewer,1> *pTVar1;
  FFixedSampledSequenceGridData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  ESampledSequenceDrawOrientation EVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SFixedSampledSequenceViewer,1> *pTVar10;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  SFixedSampledSequenceViewer *local_2e8;
  FSharedReferencer<1> local_2e0;
  code *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  SFixedSampledSequenceViewer *local_2c8;
  TReferenceControllerBase<1> *local_2c0;
  code *local_2b8;
  undefined8 uStack_2b0;
  T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
  local_2a8;
  TSharedRef<SFixedSampledSequenceViewer,1> local_290;
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  local_280;
  FArguments local_268;
  
  pFVar9 = SFixedSampledSequenceViewer::FArguments::FArguments(&local_268);
  local_2a8.Arg1 = &param_2->NumDimensions;
  pFVar9->_Style = param_3;
  fVar5 = (this->DrawingParams).DimensionSlotMargin;
  fVar6 = (this->DrawingParams).MaxSequenceHeightRatio;
  (pFVar9->_SequenceDrawingParams).MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
  (pFVar9->_SequenceDrawingParams).DimensionSlotMargin = fVar5;
  (pFVar9->_SequenceDrawingParams).MaxSequenceHeightRatio = fVar6;
  fVar5 = (this->DrawingParams).MinScaledBinValue;
  fVar6 = (this->DrawingParams).VerticalZoomFactor;
  EVar7 = (this->DrawingParams).Orientation;
  (pFVar9->_SequenceDrawingParams).MinSequenceHeightRatio =
       (this->DrawingParams).MinSequenceHeightRatio;
  (pFVar9->_SequenceDrawingParams).MinScaledBinValue = fVar5;
  (pFVar9->_SequenceDrawingParams).VerticalZoomFactor = fVar6;
  (pFVar9->_SequenceDrawingParams).Orientation = EVar7;
  pFVar9->_HideBackground = true;
  pFVar9->_HideGrid = this->bHideSequenceGrid;
  local_2a8.Arg0 = &param_2->SampleData;
  local_2a8.Arg2 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            (&local_280,"SFixedSampledSequenceViewer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x15f,&local_2a8);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar10 = TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            ::operator<<=(&local_280,&local_290,pFVar9);
  local_2e0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_2e8 = pTVar10->Object;
  if (local_2e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->SequenceViewer;
  if (pTVar1 != (TSharedPtr<SFixedSampledSequenceViewer,1> *)&local_2e8) {
    pTVar1->Object = local_2e8;
    local_2e8 = (SFixedSampledSequenceViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceViewer).SharedReferenceCount,&local_2e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_268);
  if ((this->SequenceGridData).Object == (FFixedSampledSequenceGridData *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->SequenceGridData).Object;
  local_2d8 = SFixedSampledSequenceViewer::UpdateGridMetrics;
  uStack_2cc = uStack_2b0._4_4_;
  uStack_2d0 = 0;
  if (pTVar1->Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_2c8 = pTVar1->Object;
  pTVar3 = (this->SequenceViewer).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c0 = pTVar3;
  if (local_2c8 == (SFixedSampledSequenceViewer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_2b0 = CONCAT44(uStack_2cc,uStack_2d0);
  local_2b8 = local_2d8;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SFixedSampledSequenceViewer,1>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnGridMetricsUpdated,
             (TSharedRef<SFixedSampledSequenceViewer,1> *)(local_res18 + 1),
             (pmf_63c4aff8 *)&local_2c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CreateTimeWindowKnob @ 14d90af80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateTimeWindowKnob(SAudioOscilloscopePanelWidget *this)

{
  TSharedPtr<SAudioRadialSlider,1> *pTVar1;
  SAudioRadialSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioRadialSlider,1> *pTVar8;
  FText *pFVar9;
  undefined1 auStackY_538 [32];
  T0RequiredArgs local_508 [4];
  FLLMScope local_504;
  SAudioRadialSlider *local_500;
  FSharedReferencer<1> local_4f8;
  FName local_4f0;
  FMemScope local_4e8;
  FDestructionSentinel local_4e0;
  undefined1 *local_4c8;
  FDestructionSentinel local_4c0;
  undefined1 *local_4a8;
  FDestructionSentinel local_4a0;
  undefined1 *local_488;
  TSharedRef<SAudioRadialSlider,1> local_480;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> local_458;
  FText local_440;
  FArguments local_430;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_538;
  pFVar5 = SAudioRadialSlider::FArguments::FArguments(&local_430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureBegin
             ,(FWriteAccessScope *)&local_4e0);
  local_4c8 = &(pFVar5->_OnMouseCaptureBegin).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&local_4c0);
  local_4a8 = &(pFVar5->_OnMouseCaptureEnd).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4a8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
  }
  FLLMScope::FLLMScope(&local_504,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4e8,&local_4f0,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_458,"SAudioRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x251,local_508);
  FMemScope::~FMemScope(&local_4e8);
  FLLMScope::~FLLMScope(&local_504);
  pTVar8 = TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_458,&local_480,pFVar5);
  local_4f8.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_500 = pTVar8->Object;
  if (local_4f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->TimeWindowKnob;
  if (pTVar1 != (TSharedPtr<SAudioRadialSlider,1> *)&local_500) {
    pTVar1->Object = local_500;
    local_500 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TimeWindowKnob).SharedReferenceCount,&local_4f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458._Widget.SharedReferenceCount.ReferenceController);
  SAudioRadialSlider::FArguments::~FArguments(&local_430);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_468 = *(undefined4 *)&(this->TimeWindowKnobOutputRange).field0_0x0;
  uStack_464 = *(undefined4 *)((longlong)&(this->TimeWindowKnobOutputRange).field0_0x0 + 4);
  uStack_460 = *(undefined4 *)((longlong)&(this->TimeWindowKnobOutputRange).field0_0x0 + 8);
  uStack_45c = *(undefined4 *)((longlong)&(this->TimeWindowKnobOutputRange).field0_0x0 + 0xc);
  (**(code **)(pTVar1->Object->_padding_ + 0x260))(pTVar1->Object,&local_468);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  pcVar3 = *(code **)(pSVar2->_padding_ + 0x270);
  pFVar9 = FText::FromString(&local_440,"ms");
  (*pcVar3)(pSVar2,pFVar9);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar2->OnValueChanged,
             (FWriteAccessScope *)&local_4a0);
  local_488 = &(pSVar2->OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_488);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
  }
  return;
}

// CreateTriggerModeCombobox @ 14d90b2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox(SAudioOscilloscopePanelWidget *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  STextBlock *pSVar5;
  code *pcVar6;
  SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  UPackage *pUVar13;
  long64 lVar14;
  EAudioOscilloscopeTriggerMode *pEVar15;
  FArguments *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FArguments *pFVar19;
  TSharedRef<STextBlock,1> *pTVar20;
  undefined ***pppuVar21;
  FScriptContainerElement *pFVar22;
  EAudioOscilloscopeTriggerMode *pEVar23;
  EAudioOscilloscopeTriggerMode *pEVar24;
  undefined1 auStackY_aa8 [32];
  T0RequiredArgs local_a58;
  T0RequiredArgs local_a57 [3];
  FLLMScope local_a54;
  FLLMScope local_a50 [2];
  undefined8 local_a48;
  undefined8 local_a40;
  SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_a38;
  TReferenceControllerBase<1> *local_a30;
  SWidget *local_a20;
  TReferenceControllerBase<1> *pTStack_a18;
  SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_a10;
  FSharedReferencer<1> local_a08;
  TRawPtrProxy<EAudioOscilloscopeTriggerMode> local_a00;
  FName local_9f8;
  FMemScope local_9f0;
  FName local_9e8;
  FMemScope local_9e0;
  undefined8 local_9d8;
  FSharedReferencer<1> FStack_9d0;
  FDestructionSentinel local_9c8;
  undefined1 *local_9b0;
  FDestructionSentinel local_9a8;
  undefined1 *local_990;
  FDestructionSentinel local_988;
  undefined1 *local_970;
  EAudioOscilloscopeTriggerMode *local_968;
  TReferenceControllerBase<1> *pTStack_960;
  EAudioOscilloscopeTriggerMode *local_958;
  TReferenceControllerBase<1> *pTStack_950;
  TSharedRef<STextBlock,1> local_948;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_938;
  FSlateBaseNamedArgs local_920;
  TReferenceControllerBase<1> *local_720;
  undefined1 local_6e0 [48];
  undefined1 local_6b0 [48];
  TReferenceControllerBase<1> *local_680;
  undefined1 local_678 [24];
  undefined1 local_660 [24];
  undefined1 local_648 [32];
  TReferenceControllerBase<1> *local_628;
  TReferenceControllerBase<1> *local_618;
  FArguments local_5c0;
  code *local_68;
  undefined **local_58;
  SAudioOscilloscopePanelWidget *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  pTVar3 = &this->TriggerModeComboboxOptionsSource;
  DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
            ((TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(pTVar3->AllocatorInstance).Data,
             (this->TriggerModeComboboxOptionsSource).ArrayNum);
  pEVar24 = (EAudioOscilloscopeTriggerMode *)0x0;
  piVar1 = &(this->TriggerModeComboboxOptionsSource).ArrayMax;
  (this->TriggerModeComboboxOptionsSource).ArrayNum = 0;
  pEVar23 = pEVar24;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  while( true ) {
    if (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton == (UEnum *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_AudioWidgets();
      Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode,
                         (UObject *)pUVar13,L"EAudioOscilloscopeTriggerMode");
    }
    lVar14 = UEnum::GetMaxEnumValue
                       (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton);
    if (lVar14 <= (longlong)pEVar23) break;
    pEVar15 = ::operator_new(1);
    local_a00.Object = pEVar24;
    if (pEVar15 != (EAudioOscilloscopeTriggerMode *)0x0) {
      *pEVar15 = (EAudioOscilloscopeTriggerMode)pEVar23;
      local_a00.Object = pEVar15;
    }
    TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>::
    TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1><enum_EAudioOscilloscopeTriggerMode>
              (&local_a48,&local_a00);
    pFVar22 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_a48) &&
        ((FScriptContainerElement *)&local_a48 < pFVar22 + (longlong)*piVar1 * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (this->TriggerModeComboboxOptionsSource).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->TriggerModeComboboxOptionsSource).ArrayNum = iVar12 + 1;
    pFVar22 = (pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)pFVar22 = local_a48;
    *(undefined8 *)(pFVar22 + 8) = local_a40;
    local_a40 = 0;
    local_a48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pEVar23 = pEVar23 + 1;
  }
  if (((this->TriggerModeComboboxOptionsSource).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar22 = (pTVar3->AllocatorInstance).Data;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
  pEVar23 = *(EAudioOscilloscopeTriggerMode **)pFVar22;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_968 = (this->SelectedTriggerModePtr).Object;
  pTStack_960 = (this->SelectedTriggerModePtr).SharedReferenceCount.ReferenceController;
  (this->SelectedTriggerModePtr).Object = pEVar23;
  (this->SelectedTriggerModePtr).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_960);
  pFVar16 = SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments
                      (&local_920);
  local_9d8 = 0;
  FStack_9d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar16->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar16->_OptionsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
  if (&pFVar16->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
       *)&local_9d8) {
    (pFVar16->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar16->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_9d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_9d0.ReferenceController);
  pFVar16->_OptionsSource_ArrayPointer = pTVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnGenerateWidget,
             (FWriteAccessScope *)&local_9c8);
  local_9b0 = &(pFVar16->_OnGenerateWidget).field_0x8;
  puVar17 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_9b0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar17[3] = this;
  }
  if (local_9c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9c8.Accessor,&local_9c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_9a8);
  local_990 = &(pFVar16->_OnSelectionChanged).field_0x8;
  puVar17 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_990);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar17[3] = this;
  }
  if (local_9a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a8.Accessor,&local_9a8);
  }
  pTVar4 = (this->SelectedTriggerModePtr).SharedReferenceCount.ReferenceController;
  pEVar23 = (this->SelectedTriggerModePtr).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_958 = (pFVar16->_InitiallySelectedItem).Object;
  pTStack_950 = (pFVar16->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  (pFVar16->_InitiallySelectedItem).Object = pEVar23;
  (pFVar16->_InitiallySelectedItem).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_950);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar19 = STextBlock::FArguments::FArguments(&local_5c0);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,FText>
             ::Call;
  (pFVar19->_Text).bIsSet = true;
  local_50 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Text).Getter,
             (FWriteAccessScope *)&local_988);
  local_970 = &(pFVar19->_Text).Getter.field_0x8;
  puVar17 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_970);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    puVar17[4] = local_68;
    puVar17[9] = 0;
    if (local_68 != (code *)0x0) {
      pppuVar21 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar21 = local_40;
      }
      (*(code *)**pppuVar21)();
    }
  }
  if (local_988.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_988.Accessor,&local_988);
  }
  FLLMScope::FLLMScope(&local_a54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9f0,&local_9f8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_938,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x1cb,&local_a58);
  FMemScope::~FMemScope(&local_9f0);
  FLLMScope::~FLLMScope(&local_a54);
  pTVar20 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_938,&local_948,pFVar19);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a20 = (pFVar16->_Content).Widget.Object;
  pTStack_a18 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a18);
  FLLMScope::FLLMScope(local_a50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9e0,&local_9e8,true);
  TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_a38,"SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x1c5,local_a57);
  FMemScope::~FMemScope(&local_9e0);
  FLLMScope::~FLLMScope(local_a50);
  pSVar7 = local_a38;
  if ((local_a38 == (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_a38,(FSlateBaseNamedArgs *)pFVar16);
  SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::Construct(local_a38,pFVar16);
  if ((local_a38 == (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((local_a38->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)(local_a38->_padding_ + 0x228))(local_a38);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_14d90b8e2;
  }
  bVar11 = 0x20;
LAB_14d90b8e2:
  *(byte *)&local_a38->_padding_ = (byte)local_a38->_padding_ & 0xdf;
  *(byte *)&local_a38->_padding_ = (byte)local_a38->_padding_ | bVar11;
  if ((local_a38 == (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar2 = (undefined1 *)((longlong)&local_a38->_padding_ + 1);
  *puVar2 = *puVar2 | 4;
  if ((local_a38 == (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = local_a30;
  local_a30 = (TReferenceControllerBase<1> *)0x0;
  local_a38 = (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
  if ((pSVar7 == (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a10 = pSVar7;
  local_a08.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->TriggerModeCombobox !=
      (TSharedPtr<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *)&local_a10) {
    (this->TriggerModeCombobox).Object = pSVar7;
    local_a10 = (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TriggerModeCombobox).SharedReferenceCount,&local_a08);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a08.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_948.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_938._Widget.SharedReferenceCount.ReferenceController);
  if (local_68 != (code *)0x0) {
    pppuVar21 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar21 = local_40;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  STextBlock::FArguments::~FArguments(&local_5c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_618);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_628);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
  if ((void *)local_648._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_648._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_660);
  if ((void *)local_660._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_660._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_660);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  if ((void *)local_678._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_678._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_678);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_680);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b0);
  if ((void *)local_6b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e0);
  if ((void *)local_6e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_720);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_920);
  return;
}

// CreateTriggerThresholdKnob @ 14d90bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob(SAudioOscilloscopePanelWidget *this)

{
  TSharedPtr<SAudioRadialSlider,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FArguments *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TSharedRef<SAudioRadialSlider,1> *pTVar7;
  undefined ***pppuVar8;
  undefined1 auStackY_5a8 [32];
  T0RequiredArgs local_578 [4];
  FLLMScope local_574;
  float local_570;
  undefined1 local_56c;
  undefined1 local_568 [8];
  ForAnyElementType FStack_560;
  ulonglong local_558;
  SAudioRadialSlider *local_550;
  FSharedReferencer<1> local_548;
  FName local_540;
  FMemScope local_538;
  FDestructionSentinel local_530;
  FDestructionSentinel local_518;
  undefined1 *local_500;
  FDestructionSentinel local_4f8;
  undefined1 *local_4e0;
  FDestructionSentinel local_4d8;
  undefined1 *local_4c0;
  FDestructionSentinel local_4b8;
  longlong *local_4a0;
  TSharedRef<SAudioRadialSlider,1> local_498;
  TVector2<double>_u_0 local_488;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> local_478;
  code *local_458;
  undefined **local_448;
  SAudioOscilloscopePanelWidget *local_440;
  undefined ***local_430;
  FArguments local_428;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  pFVar4 = SAudioRadialSlider::FArguments::FArguments(&local_428);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->_OnMouseCaptureBegin
             ,(FWriteAccessScope *)&local_518);
  local_500 = &(pFVar4->_OnMouseCaptureBegin).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_500);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_518.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_518.Accessor,&local_518);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&local_4f8);
  local_4e0 = &(pFVar4->_OnMouseCaptureEnd).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4e0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_4f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->_OnValueChanged,
             (FWriteAccessScope *)&local_4d8);
  local_4c0 = &(pFVar4->_OnValueChanged).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_4d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
  }
  local_56c = 1;
  local_570 = __real_3f000000;
  local_568 = (undefined1  [8])0x0;
  FStack_560.Data = (FScriptContainerElement *)0x0;
  local_558 = 0;
  (pFVar4->_SliderValue).Value = __real_3f000000;
  (pFVar4->_SliderValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_SliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_530);
  if (((int)local_558 != 0) && (FStack_560.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_560.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_560,0,0,0x10);
    local_558 = local_558 & 0xffffffff00000000;
  }
  if (local_530.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
  }
  if (FStack_560.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_560.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_568);
  local_430 = (undefined ***)0x0;
  local_448 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_4>,0,0>
               ::_vftable_;
  local_458 = UE::Core::Private::Function::
              TFunctionRefCaller<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,bool>
              ::Call;
  *(undefined1 *)((longlong)&pFVar4->_padding_ + 1) = 1;
  local_440 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->_padding_,
             (FWriteAccessScope *)&local_4b8);
  local_4a0 = &pFVar4->_padding_;
  puVar5 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_4a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    puVar5[4] = local_458;
    puVar5[9] = 0;
    if (local_458 != (code *)0x0) {
      pppuVar8 = &local_448;
      if (local_430 != (undefined ***)0x0) {
        pppuVar8 = local_430;
      }
      (*(code *)**pppuVar8)();
    }
  }
  if (local_4b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
  }
  FLLMScope::FLLMScope(&local_574,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_540 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_538,&local_540,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_478,"SAudioRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x20e,local_578);
  FMemScope::~FMemScope(&local_538);
  FLLMScope::~FLLMScope(&local_574);
  pTVar7 = TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_478,&local_498,pFVar4);
  local_548.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_550 = pTVar7->Object;
  if (local_548.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_548.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_548.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->TriggerThresholdKnob;
  if (pTVar1 != (TSharedPtr<SAudioRadialSlider,1> *)&local_550) {
    pTVar1->Object = local_550;
    local_550 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TriggerThresholdKnob).SharedReferenceCount,&local_548);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_548.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478._Widget.SharedReferenceCount.ReferenceController);
  if (local_458 != (code *)0x0) {
    pppuVar8 = &local_448;
    if (local_430 != (undefined ***)0x0) {
      pppuVar8 = local_430;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  SAudioRadialSlider::FArguments::~FArguments(&local_428);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(pTVar1->Object->_padding_ + 0x280))(pTVar1->Object,0);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_488 = TriggerThresholdKnobOutputRange.field0_0x0;
  (**(code **)(pTVar1->Object->_padding_ + 0x260))(pTVar1->Object,&local_488);
  return;
}

// CreateTriggerThresholdLine @ 14d90c000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateTriggerThresholdLine
          (SAudioOscilloscopePanelWidget *this,FTriggerThresholdLineStyle *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  EVisibility EVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ESampledSequenceDrawOrientation EVar7;
  STriggerThresholdLineWidget *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FArguments *pFVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_2c0 [8];
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> local_2a8;
  STriggerThresholdLineWidget *local_290;
  FSharedReferencer<1> local_288;
  FDestructionSentinel local_280;
  FArguments local_268;
  
  pFVar13 = STriggerThresholdLineWidget::FArguments::FArguments(&local_268);
  pFVar13->_Style = param_1;
  EVar3 = EVisibility::Visible;
  if (this->bHideTriggerThresholdLine != false) {
    EVar3 = EVisibility::Hidden;
  }
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = 0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar13->_padding_ = EVar3.Value.Value;
  *(undefined1 *)((longlong)&pFVar13->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar13->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
             (FWriteAccessScope *)&local_280);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  fVar5 = (this->DrawingParams).DimensionSlotMargin;
  fVar6 = (this->DrawingParams).MaxSequenceHeightRatio;
  (pFVar13->_SequenceDrawingParams).MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
  (pFVar13->_SequenceDrawingParams).DimensionSlotMargin = fVar5;
  (pFVar13->_SequenceDrawingParams).MaxSequenceHeightRatio = fVar6;
  fVar5 = (this->DrawingParams).MinScaledBinValue;
  fVar6 = (this->DrawingParams).VerticalZoomFactor;
  EVar7 = (this->DrawingParams).Orientation;
  (pFVar13->_SequenceDrawingParams).MinSequenceHeightRatio =
       (this->DrawingParams).MinSequenceHeightRatio;
  (pFVar13->_SequenceDrawingParams).MinScaledBinValue = fVar5;
  (pFVar13->_SequenceDrawingParams).VerticalZoomFactor = fVar6;
  (pFVar13->_SequenceDrawingParams).Orientation = EVar7;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>
            (&local_2a8,"STriggerThresholdLineWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x16a,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar8 = local_2a8._Widget.Object;
  if (local_2a8._Widget.Object == (STriggerThresholdLineWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  (local_2a8._Widget.Object)->TriggerThreshold = pFVar13->_TriggerThreshold;
  uVar4 = *(undefined8 *)((longlong)&(pFVar13->_Style->LineColor).field0_0x0 + 8);
  *(undefined8 *)&((local_2a8._Widget.Object)->LineColor).field0_0x0 =
       *(undefined8 *)&(pFVar13->_Style->LineColor).field0_0x0;
  *(undefined8 *)((longlong)&((local_2a8._Widget.Object)->LineColor).field0_0x0 + 8) = uVar4;
  fVar5 = (pFVar13->_SequenceDrawingParams).DimensionSlotMargin;
  fVar6 = (pFVar13->_SequenceDrawingParams).MaxSequenceHeightRatio;
  ((local_2a8._Widget.Object)->DrawingParams).MaxDisplayedValue =
       (pFVar13->_SequenceDrawingParams).MaxDisplayedValue;
  ((local_2a8._Widget.Object)->DrawingParams).DimensionSlotMargin = fVar5;
  ((local_2a8._Widget.Object)->DrawingParams).MaxSequenceHeightRatio = fVar6;
  fVar5 = (pFVar13->_SequenceDrawingParams).MinScaledBinValue;
  fVar6 = (pFVar13->_SequenceDrawingParams).VerticalZoomFactor;
  EVar7 = (pFVar13->_SequenceDrawingParams).Orientation;
  ((local_2a8._Widget.Object)->DrawingParams).MinSequenceHeightRatio =
       (pFVar13->_SequenceDrawingParams).MinSequenceHeightRatio;
  ((local_2a8._Widget.Object)->DrawingParams).MinScaledBinValue = fVar5;
  ((local_2a8._Widget.Object)->DrawingParams).VerticalZoomFactor = fVar6;
  ((local_2a8._Widget.Object)->DrawingParams).Orientation = EVar7;
  if (local_2a8._Widget.Object == (STriggerThresholdLineWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((local_2a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_2a8._Widget.Object)->_padding_ + 0x228))(local_2a8._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14d90c26d;
  }
  bVar12 = 0x20;
LAB_14d90c26d:
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ | bVar12;
  if (local_2a8._Widget.Object == (STriggerThresholdLineWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2a8._Widget.Object == (STriggerThresholdLineWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar9.ReferenceController = local_2a8._Widget.SharedReferenceCount.ReferenceController;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.Object = (STriggerThresholdLineWidget *)0x0;
  if (pSVar8 == (STriggerThresholdLineWidget *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_290 = pSVar8;
  local_288.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->TriggerThresholdLineWidget != (TSharedPtr<STriggerThresholdLineWidget,1> *)&local_290)
  {
    (this->TriggerThresholdLineWidget).Object = pSVar8;
    local_290 = (STriggerThresholdLineWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TriggerThresholdLineWidget).SharedReferenceCount,&local_288);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_268);
  return;
}

// CreateValueGridOverlay @ 14d90c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::CreateValueGridOverlay
          (SAudioOscilloscopePanelWidget *this,uint param_1,EGridDivideMode param_2,
          EYAxisLabelsUnit param_3,FSampledSequenceValueGridOverlayStyle *param_4)

{
  undefined8 *puVar1;
  TFunction<FText___cdecl(double)> *pTVar2;
  float fVar3;
  float fVar4;
  ESampledSequenceDrawOrientation EVar5;
  FArguments *pFVar6;
  TSharedRef<SSampledSequenceValueGridOverlay,1> *pTVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStackY_358 [32];
  T0RequiredArgs local_328 [4];
  FLLMScope local_324;
  SSampledSequenceValueGridOverlay *local_320;
  FSharedReferencer<1> local_318;
  FName local_310;
  FMemScope local_308 [2];
  undefined1 local_2f8 [40];
  longlong *local_2d0;
  TSharedRef<SSampledSequenceValueGridOverlay,1> local_2c8;
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> local_2b8;
  undefined1 local_298 [624];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pFVar6 = SSampledSequenceValueGridOverlay::FArguments::FArguments((FArguments *)local_298);
  pFVar6->_MaxDivisionParameter = param_1;
  pFVar6->_DivideMode = param_2;
  if ((param_3 == Linear) || (param_3 != Db)) {
    pTVar2 = &AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorLinear;
    local_2f8._0_8_ = AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorLinear._0_8_;
  }
  else {
    pTVar2 = &AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorDb;
    local_2f8._0_8_ = AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorDb._0_8_;
  }
  local_2d0 = (longlong *)0x0;
  if (local_2f8._0_8_ != 0) {
    puVar1 = *(undefined8 **)(&pTVar2->field_0x10 + 0x18);
    puVar8 = (undefined8 *)&pTVar2->field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar8 = puVar1;
    }
    (**(code **)*puVar8)(puVar8,local_2f8 + 0x10);
  }
  TFunction<FText___cdecl(double)>::operator=
            (&pFVar6->_ValueGridLabelGenerator,(TFunction<FText___cdecl(double)> *)local_2f8);
  if (local_2f8._0_8_ != 0) {
    plVar9 = (longlong *)(local_2f8 + 0x10);
    if (local_2d0 != (longlong *)0x0) {
      plVar9 = local_2d0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pFVar6->_Style = param_4;
  pFVar6->_HideLabels = false;
  fVar3 = (this->DrawingParams).DimensionSlotMargin;
  fVar4 = (this->DrawingParams).MaxSequenceHeightRatio;
  (pFVar6->_SequenceDrawingParams).MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
  (pFVar6->_SequenceDrawingParams).DimensionSlotMargin = fVar3;
  (pFVar6->_SequenceDrawingParams).MaxSequenceHeightRatio = fVar4;
  fVar3 = (this->DrawingParams).MinScaledBinValue;
  fVar4 = (this->DrawingParams).VerticalZoomFactor;
  EVar5 = (this->DrawingParams).Orientation;
  (pFVar6->_SequenceDrawingParams).MinSequenceHeightRatio =
       (this->DrawingParams).MinSequenceHeightRatio;
  (pFVar6->_SequenceDrawingParams).MinScaledBinValue = fVar3;
  (pFVar6->_SequenceDrawingParams).VerticalZoomFactor = fVar4;
  (pFVar6->_SequenceDrawingParams).Orientation = EVar5;
  pFVar6->_NumDimensions = (this->DataView).NumDimensions;
  FLLMScope::FLLMScope(&local_324,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_310 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_308,&local_310,true);
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2b8,"SSampledSequenceValueGridOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioOscilloscopePanelWidget.cpp"
             ,0x153,local_328);
  FMemScope::~FMemScope(local_308);
  FLLMScope::~FLLMScope(&local_324);
  pTVar7 = TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2b8,&local_2c8,pFVar6);
  local_318.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_320 = pTVar7->Object;
  if (local_318.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_318.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_318.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ValueGridOverlay != (TSharedPtr<SSampledSequenceValueGridOverlay,1> *)&local_320) {
    (this->ValueGridOverlay).Object = local_320;
    local_320 = (SSampledSequenceValueGridOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ValueGridOverlay).SharedReferenceCount,&local_318);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8._Widget.SharedReferenceCount.ReferenceController);
  if (local_298._560_8_ != 0) {
    plVar9 = (longlong *)(local_298 + 0x240);
    if ((longlong *)local_298._600_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_298._600_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_298);
  return;
}

// ReceiveSequenceView @ 14d962100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::ReceiveSequenceView
          (SAudioOscilloscopePanelWidget *this,FFixedSampledSequenceView *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  SFixedSampledSequenceViewer *this_00;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_28;
  undefined4 uStack_20;
  TRange<unsigned_int> local_18;
  
  uVar4 = param_2 / param_1->NumDimensions;
  uVar1 = (param_1->SampleData).ArrayNum;
  uVar2 = param_1->NumDimensions;
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  local_18.LowerBound.Value = uVar4;
  local_18.LowerBound._0_4_ = local_28;
  local_18.UpperBound =
       (TRangeBound<unsigned_int>)(CONCAT44(uVar1 / uVar2 + uVar4,uStack_20) & 0xffffffffffffff00);
  FFixedSampledSequenceGridData::UpdateDisplayRange
            ((FFixedSampledSequenceGridData *)this->_padding_,&local_18);
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (SFixedSampledSequenceViewer *)this->_padding_;
  SFixedSampledSequenceViewer::UpdateGridMetrics(this_00);
  iVar5 = (param_1->SampleData).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->SampleData).field_0xc;
  uVar1 = param_1->NumDimensions;
  (this_00->SampleData).DataPtr = (param_1->SampleData).DataPtr;
  (this_00->SampleData).ArrayNum = iVar5;
  *(undefined4 *)&(this_00->SampleData).field_0xc = uVar6;
  this_00->NumChannels = (uchar)uVar1;
  this_00->bForceRedraw = true;
  return;
}

// SetAnalysisPeriod @ 14d967ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetAnalysisPeriod(SAudioOscilloscopePanelWidget *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  pSVar1 = (this->AnalysisPeriodKnob).Object;
  if (pSVar1 == (SAudioRadialSlider *)0x0) {
    return;
  }
  lVar2 = pSVar1->_padding_;
  dVar5 = AnalysisPeriodKnobOutputRange.field0_0x0._s_0.Y -
          AnalysisPeriodKnobOutputRange.field0_0x0._s_0.X;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar4,uVar3) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar4,uVar3) == __real_3e45798ee2308c3a) {
    if (AnalysisPeriodKnobOutputRange.field0_0x0._s_0.Y <= (double)param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014d967f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 600))
                (pSVar1,CONCAT44((int)((ulonglong)__real_3ff0000000000000 >> 0x20),
                                 (float)__real_3ff0000000000000));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d967f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 600))(pSVar1,0);
    return;
  }
  dVar5 = ((double)param_1 - AnalysisPeriodKnobOutputRange.field0_0x0._s_0.X) / dVar5;
                    /* WARNING: Could not recover jumptable at 0x00014d967f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 600))(pSVar1,CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5));
  return;
}

// SetChannelToAnalyze @ 14d968530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetChannelToAnalyze(SAudioOscilloscopePanelWidget *this,int param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  TSharedPtr<FString,1> *pTVar1;
  TRawPtrProxy<FString> local_res8;
  TSharedPtr<FString,1> local_18;
  
  this_00 = (this->ChannelCombobox).Object;
  if (this_00 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    local_res8.Object = ::operator_new(0x10);
    if (local_res8.Object != (FString *)0x0) {
      ((local_res8.Object)->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((local_res8.Object)->Data).ArrayNum = 0;
      ((local_res8.Object)->Data).ArrayMax = 0;
      ::FString::AppendInt(local_res8.Object,param_1);
    }
    pTVar1 = TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_18,&local_res8);
    SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(this_00,pTVar1);
  }
  return;
}

// SetMaxTimeWindowMs @ 14d969e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetMaxTimeWindowMs(SAudioOscilloscopePanelWidget *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pSVar1 = (this->TimeWindowKnob).Object;
  (this->TimeWindowKnobOutputRange).field0_0x0._s_0.Y = (double)param_1;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    local_18 = *(undefined4 *)&(this->TimeWindowKnobOutputRange).field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&(this->TimeWindowKnobOutputRange).field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&(this->TimeWindowKnobOutputRange).field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&(this->TimeWindowKnobOutputRange).field0_0x0 + 0xc);
    (**(code **)(pSVar1->_padding_ + 0x260))(pSVar1,&local_18);
  }
  return;
}

// SetSequenceRulerDisplayUnit @ 14d96c320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetSequenceRulerDisplayUnit
          (SAudioOscilloscopePanelWidget *this,EXAxisLabelsUnit param_1)

{
  SFixedSampledSequenceRuler *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  this->SequenceRulerDisplayUnit = param_1;
  if ((this->SequenceRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->SequenceRuler).Object;
  if ((this->SequenceRulerDisplayUnit != Samples) && (this->SequenceRulerDisplayUnit == Seconds)) {
    pSVar1->DisplayUnit = Seconds;
    return;
  }
  pSVar1->DisplayUnit = Samples;
  return;
}

// SetTimeWindow @ 14d96dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetTimeWindow(SAudioOscilloscopePanelWidget *this,float param_1)

{
  double dVar1;
  double dVar2;
  SAudioRadialSlider *pSVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  pSVar3 = (this->TimeWindowKnob).Object;
  if (pSVar3 == (SAudioRadialSlider *)0x0) {
    return;
  }
  dVar1 = (this->TimeWindowKnobOutputRange).field0_0x0._s_0.Y;
  dVar2 = (this->TimeWindowKnobOutputRange).field0_0x0._s_0.X;
  lVar4 = pSVar3->_padding_;
  dVar7 = dVar1 - dVar2;
  uVar5 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar6,uVar5) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar6,uVar5) == __real_3e45798ee2308c3a) {
    if (dVar1 <= (double)param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014d96e033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 600))
                (pSVar3,CONCAT44((int)((ulonglong)__real_3ff0000000000000 >> 0x20),
                                 (float)__real_3ff0000000000000));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d96e041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 600))(pSVar3,0);
    return;
  }
  dVar7 = ((double)param_1 - dVar2) / dVar7;
                    /* WARNING: Could not recover jumptable at 0x00014d96e054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 600))(pSVar3,CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7));
  return;
}

// SetTriggerMode @ 14d96e090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetTriggerMode
          (SAudioOscilloscopePanelWidget *this,EAudioOscilloscopeTriggerMode param_1)

{
  SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *pTVar3;
  TRawPtrProxy<EAudioOscilloscopeTriggerMode> local_res8;
  undefined1 local_38 [16];
  TAttribute<EVisibility> local_28;
  
  if ((this->TriggerThresholdLineWidget).Object == (STriggerThresholdLineWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  local_28.Value.Value.Value = EVisibility::Hidden.Value.Value;
  if (param_1 != None) {
    local_28.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  local_28.Getter._16_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->TriggerThresholdLineWidget).Object,&local_28);
  this_00 = (this->TriggerModeCombobox).Object;
  if (this_00 != (SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    local_res8.Object = ::operator_new(1);
    if (local_res8.Object != (EAudioOscilloscopeTriggerMode *)0x0) {
      *local_res8.Object = param_1;
    }
    pTVar3 = TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>::
             TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1><enum_EAudioOscilloscopeTriggerMode>
                       (local_38,&local_res8);
    SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::SetSelectedItem(this_00,pTVar3);
  }
  return;
}

// SetTriggerThreshold @ 14d96e180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetTriggerThreshold
          (SAudioOscilloscopePanelWidget *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  
  if (((this->TriggerThresholdLineWidget).Object == (STriggerThresholdLineWidget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ((this->TriggerThresholdLineWidget).Object)->TriggerThreshold = param_1;
  pSVar1 = (this->TriggerThresholdKnob).Object;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    dVar6 = TriggerThresholdKnobOutputRange.field0_0x0._s_0.Y -
            TriggerThresholdKnobOutputRange.field0_0x0._s_0.X;
    uVar4 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee2308c3a) {
      dVar6 = ((double)param_1 - TriggerThresholdKnobOutputRange.field0_0x0._s_0.X) / dVar6;
    }
    else {
      dVar6 = __real_3ff0000000000000;
      if ((double)param_1 < TriggerThresholdKnobOutputRange.field0_0x0._s_0.Y) {
        dVar6 = 0.0;
      }
    }
    (**(code **)(pSVar1->_padding_ + 600))(pSVar1,(float)dVar6);
  }
  return;
}

// SetValueGridOverlayDisplayUnit @ 14d96efb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetValueGridOverlayDisplayUnit
          (SAudioOscilloscopePanelWidget *this,EYAxisLabelsUnit param_1)

{
  SSampledSequenceValueGridOverlay *pSVar1;
  undefined8 *puVar2;
  code *pcVar3;
  TFunction<FText___cdecl(double)> *pTVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_38 [40];
  longlong *local_10;
  
  this->ValueGridOverlayDisplayUnit = param_1;
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlay).Object;
  if ((param_1 == Linear) || (param_1 != Db)) {
    pTVar4 = &AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorLinear;
    local_38._0_8_ = AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorLinear._0_8_;
  }
  else {
    pTVar4 = &AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorDb;
    local_38._0_8_ = AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorDb._0_8_;
  }
  local_10 = (longlong *)0x0;
  if (local_38._0_8_ != 0) {
    puVar2 = *(undefined8 **)(&pTVar4->field_0x10 + 0x18);
    puVar6 = (undefined8 *)&pTVar4->field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)(puVar6,local_38 + 0x10);
  }
  TFunction<FText___cdecl(double)>::operator=
            (&pSVar1->OnValueGridLabel,(TFunction<FText___cdecl(double)> *)local_38);
  pSVar1->bForceRedraw = true;
  if (local_38._0_8_ != 0) {
    plVar7 = (longlong *)(local_38 + 0x10);
    if (local_10 != (longlong *)0x0) {
      plVar7 = local_10;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// SetXAxisGridVisibility @ 14d96f8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetXAxisGridVisibility
          (SAudioOscilloscopePanelWidget *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ((this->SequenceViewer).Object)->bHideGrid = !param_1;
  return;
}

// SetYAxisGridVisibility @ 14d96f930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetYAxisGridVisibility
          (SAudioOscilloscopePanelWidget *this,bool param_1)

{
  SSampledSequenceValueGridOverlay *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlay).Object;
  pSVar1->bHideGrid = !param_1;
  pSVar1->bForceRedraw = true;
  return;
}

// SetYAxisLabelsVisibility @ 14d96f9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::SetYAxisLabelsVisibility
          (SAudioOscilloscopePanelWidget *this,bool param_1)

{
  SSampledSequenceValueGridOverlay *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlay).Object;
  pSVar1->bHideLabels = !param_1;
  pSVar1->bForceRedraw = true;
  return;
}

// Tick @ 14d976120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::Tick
          (SAudioOscilloscopePanelWidget *this,FGeometry *param_1,double param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  float local_res8;
  
  local_res8 = SUB84(param_1->Size,0);
  if (local_res8 != this->CachedPixelWidth) {
    this->CachedPixelWidth = local_res8;
    if ((this->SequenceGridData).Object == (FFixedSampledSequenceGridData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FFixedSampledSequenceGridData::UpdateGridMetrics
              ((this->SequenceGridData).Object,local_res8 * this->OscilloscopeViewProportion);
  }
  return;
}

// UpdateSequenceRulerStyle @ 14d97a640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::UpdateSequenceRulerStyle
          (SAudioOscilloscopePanelWidget *this,FFixedSampleSequenceRulerStyle *param_1)

{
  SFixedSampledSequenceRuler *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FFixedSampleSequenceRulerStyle *pFVar4;
  FFixedSampleSequenceRulerStyle local_238;
  
  if ((this->SequenceRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (this->SequenceRuler).Object;
  pFVar4 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle(&local_238,param_1);
  SFixedSampledSequenceRuler::OnStyleUpdated(this_00,pFVar4);
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TicksTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (param_1->HandleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->HandleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdateSequenceViewerStyle @ 14d97a880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::UpdateSequenceViewerStyle
          (SAudioOscilloscopePanelWidget *this,FSampledSequenceViewerStyle *param_1)

{
  SFixedSampledSequenceViewer *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSampledSequenceViewerStyle *pFVar4;
  FLinearColor_u_0 local_178;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  FSampledSequenceViewerStyle local_148;
  
  if ((this->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (this->SequenceViewer).Object;
  pFVar4 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle(&local_148,param_1);
  SFixedSampledSequenceViewer::OnStyleUpdated(this_00,pFVar4);
  if ((this->BackgroundBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_168._0_1_ = (param_1->SequenceBackgroundColor).ColorUseRule;
  local_168._1_1_ = (param_1->SequenceBackgroundColor).ColorTableId;
  local_168._2_2_ = *(undefined2 *)&(param_1->SequenceBackgroundColor).field_0x12;
  local_178._0_8_ = *(undefined8 *)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  local_178._8_8_ =
       *(undefined8 *)((longlong)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  local_164 = 1;
  local_150 = 0;
  local_160 = 0;
  uStack_158 = 0;
  SBorder::SetBorderBackgroundColor
            ((this->BackgroundBorder).Object,(TAttribute<FSlateColor> *)&local_178._s_0);
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdateTriggerThresholdStyle @ 14d97aea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::UpdateTriggerThresholdStyle
          (SAudioOscilloscopePanelWidget *this,FTriggerThresholdLineStyle *param_1)

{
  STriggerThresholdLineWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateWidgetStyle local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((this->TriggerThresholdLineWidget).Object == (STriggerThresholdLineWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_20 = *(undefined8 *)&(param_1->LineColor).field0_0x0;
  uStack_18 = *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
  local_28 = (FSlateWidgetStyle)&___7FTriggerThresholdLineStyle__6B_;
  pSVar1 = (this->TriggerThresholdLineWidget).Object;
  *(undefined8 *)&(pSVar1->LineColor).field0_0x0 = local_20;
  *(undefined8 *)((longlong)&(pSVar1->LineColor).field0_0x0 + 8) = uStack_18;
  FSlateWidgetStyle::~FSlateWidgetStyle(&local_28);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdateValueGridOverlayStyle @ 14d97af30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioOscilloscopePanelWidget::UpdateValueGridOverlayStyle
          (SAudioOscilloscopePanelWidget *this,FSampledSequenceValueGridOverlayStyle *param_1)

{
  SSampledSequenceValueGridOverlay *this_00;
  code *pcVar1;
  bool bVar2;
  FSampledSequenceValueGridOverlayStyle *pFVar3;
  FSampledSequenceValueGridOverlayStyle local_a8;
  
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->ValueGridOverlay).Object;
  pFVar3 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                     (&local_a8,param_1);
  SSampledSequenceValueGridOverlay::OnStyleUpdated(this_00,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

