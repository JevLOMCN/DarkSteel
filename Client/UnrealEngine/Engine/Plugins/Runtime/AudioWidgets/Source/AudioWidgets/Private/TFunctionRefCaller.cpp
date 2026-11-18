// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 18

// Call @ 14d8e4ad0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioSpectrumPlot::DrawPowerSpectrum'::__l10::<lambda_1>_const_,float,UE::Math::TVector2<float>_const_&>
::Call(void *param_1,TVector2<float> *param_2)

{
  float fVar1;
  
  fVar1 = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX
                    (*(FAudioSpectrumPlotScaleInfo **)param_1,(param_2->field0_0x0)._s_0.X);
  fVar1 = fabsf(fVar1 - (float)((int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1));
  return fVar1;
}

// Call @ 14d8e4ae0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioSpectrumPlot::DrawPowerSpectrum'::__l11::<lambda_2>_const_,float,UE::Math::TVector2<float>_const_&>
::Call(void *param_1,TVector2<float> *param_2)

{
  return (float)((uint)(param_2->field0_0x0)._s_0.Y ^ __xmm_80000000800000008000000080000000);
}

// Call @ 14d8e4af0

FText * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FText_(__cdecl*)(double),FText,double>::Call
          (FText *__return_storage_ptr__,void *param_1,double *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14d8e4b20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,bool,float>
::Call(void *param_1,float *param_2)

{
  AudioWidgets::FLoudnessMeterWidgetView::RefreshVisibleLoudnessMetrics
            ((FLoudnessMeterWidgetView *)(*(longlong *)param_1 + 0x18));
  return true;
}

// Call @ 14d8e4b40

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
::Call(TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
      void *param_1)

{
  `SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d8e4b70

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  `AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>::
  operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d8e4ba0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioTextBox::Construct'::__l5::<lambda_1>,EVisibility>::Call(void *param_1)

{
  bool *pbVar1;
  longlong *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)(*in_RDX + 0x308));
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar2.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 14d8e4be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
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

// Call @ 14d8e4bf0

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  `AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>::
  operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d8e4c20

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)param_1;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = *(ITextData **)(lVar1 + 8);
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)(lVar1 + 0x10);
  return __return_storage_ptr__;
}

// Call @ 14d8e4c70

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,EVisibility>
::Call(void *param_1)

{
  bool *pbVar1;
  TAttribute<bool> *in_RDX;
  EVisibility EVar2;
  
  pbVar1 = TAttribute<bool>::Get(in_RDX);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar2.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 14d8e4cb0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioTextBox::Construct'::__l5::<lambda_2>,EVisibility>::Call(void *param_1)

{
  EVisibility EVar1;
  bool *pbVar2;
  longlong *in_RDX;
  
  pbVar2 = TAttribute<bool>::Get((TAttribute<bool> *)(*in_RDX + 0x2e8));
  if ((*pbVar2 == false) || (EVar1 = EVisibility::Hidden, *(char *)(*in_RDX + 0x3b) != '\0')) {
    EVar1 = EVisibility::Visible;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar1.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 14d8e4d10

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,FText>::
Call(FText *__return_storage_ptr__,void *param_1)

{
  `SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d8e4d40

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  `SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d8e4d70

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
::Call(TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
      void *param_1)

{
  `AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>::
  operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14d8e4da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,bool>
::Call(void *param_1)

{
  if (*(char **)(*(longlong *)param_1 + 0x408) != (char *)0x0) {
    return **(char **)(*(longlong *)param_1 + 0x408) != '\0';
  }
  return false;
}

// Call @ 14d8e4dc0

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,FText>
::Call(FText *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)param_1;
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = *(ITextData **)(lVar1 + 8);
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = *(uint *)(lVar1 + 0x10);
  return __return_storage_ptr__;
}

// Call @ 14d8e4e10

FText * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,FText>::
Call(FText *__return_storage_ptr__,void *param_1)

{
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

