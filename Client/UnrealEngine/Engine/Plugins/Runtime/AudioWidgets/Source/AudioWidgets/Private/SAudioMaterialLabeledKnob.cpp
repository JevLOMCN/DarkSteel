// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 16

// operator() @ 14d8c48a0

void __thiscall
`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1,Type param_2)

{
  float *pfVar1;
  double dVar2;
  float local_b4;
  undefined1 local_b0 [4];
  uint local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  FString *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  undefined8 local_58;
  code *local_50;
  TAttribute<float> *local_48;
  SAudioMaterialKnob *local_40;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *local_38;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *local_30;
  TAttribute<float> local_28;
  
  local_88 = FText::ToString(param_1);
  local_a8 = (local_88->Data).ArrayNum;
  if (local_a8 == 0) {
    local_80 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_b0);
  }
  else {
    local_80 = (local_88->Data).AllocatorInstance.Data;
    local_78 = local_80;
    local_70 = local_80;
    local_68 = local_80;
  }
  local_60 = local_80;
  dVar2 = _wtof((wchar_t *)local_80);
  local_a4 = (float)dVar2;
  local_58 = *(undefined8 *)this;
  local_50 = *(code **)(**(longlong **)this + 0x298);
  local_a0 = local_a4;
  local_9c = local_a4;
  local_b4 = (float)(*local_50)(local_58,local_a4);
  pfVar1 = TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)this + 0x350));
  local_94 = *pfVar1;
  local_98 = local_b4;
  local_90 = fabsf(local_b4 - local_94);
  local_ac = (uint)(local_90 <= __real_322bcc77);
  if (local_90 > __real_322bcc77) {
    local_48 = (TAttribute<float> *)(*(longlong *)this + 0x350);
    TAttribute<float>::Set<float>(local_48,&local_b4);
    local_40 = TSharedPtr<SAudioMaterialKnob,1>::operator->
                         ((TSharedPtr<SAudioMaterialKnob,1> *)(*(longlong *)this + 0x390));
    TAttribute<float>::TAttribute<float><float>(&local_28,&local_b4);
    SAudioMaterialKnob::SetValue(local_40,&local_28);
    TAttribute<float>::~TAttribute<float>(&local_28);
    local_38 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               (*(longlong *)this + 0x2a8);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound(local_38,local_b4);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (*(longlong *)this + 0x2f0));
    local_30 = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               (*(longlong *)this + 0x2c0);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound(local_30,local_b4);
  }
  return;
}

// operator() @ 14d8c9920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>::operator()(void *this,float param_1)

{
  SAudioTextBox *this_00;
  float fVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  TAttribute<float>::Set<float>((TAttribute<float> *)(*(longlong *)this + 0x350),local_res10);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             (*(longlong *)this + 0x2a8),local_res10[0]);
  fVar1 = (float)(**(code **)(**(longlong **)this + 0x290))(*(undefined8 *)this,local_res10[0]);
  this_00 = TSharedPtr<SAudioTextBox,1>::operator->
                      ((TSharedPtr<SAudioTextBox,1> *)(*(longlong *)this + 0x3a0));
  SAudioTextBox::SetValueText(this_00,fVar1);
  return;
}

// ComputeDesiredSize @ 14d8e5970

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SAudioMaterialLabeledKnob::ComputeDesiredSize
          (SAudioMaterialLabeledKnob *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FAudioMaterialKnobStyle *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Math::TVector2<double>_> *pTVar5;
  TVector2<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pTVar5 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar5->bIsSet == false) {
    pFVar2 = this->Style;
    if (pFVar2 != (FAudioMaterialKnobStyle *)0x0) {
      fVar1 = *(float *)((longlong)&pFVar2->_padding_ + 4);
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pFVar2->_padding_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
      return __return_storage_ptr__;
    }
    uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    uVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    pTVar5 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
    if (pTVar5->bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector2<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    uVar7 = *(undefined4 *)&(pTVar5->TypedValue).field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&(pTVar5->TypedValue).field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&(pTVar5->TypedValue).field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&(pTVar5->TypedValue).field0_0x0 + 0xc);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar10;
  return __return_storage_ptr__;
}

// Construct @ 14d8e9340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::Construct(SAudioMaterialLabeledKnob *this,FArguments *param_1)

{
  bool bVar1;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *this_01;
  FSlotArguments *pFVar2;
  TSharedRef<SAudioMaterialKnob,1> *pTVar3;
  TSharedRef<SAudioTextBox,1> *pTVar4;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  EAudioUnitsValueType *pEVar5;
  TSharedRef<FAudioUnitProcessor,1> *pTVar6;
  TSharedRef<FFrequencyProcessor,1> *pTVar7;
  TSharedRef<FVolumeProcessor,1> *pTVar8;
  undefined1 *puVar9;
  TSharedRef<SVerticalBox,1> *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  T0RequiredArgs local_d15;
  T0RequiredArgs local_d14;
  T0RequiredArgs local_d13;
  undefined1 local_d12;
  undefined1 local_d11;
  undefined1 local_d10;
  EAudioUnitsValueType local_d0c;
  TAttribute<EAudioUnitsValueType> *local_d08;
  FAudioUnitProcessor *local_d00;
  FAudioUnitProcessor *local_cf8;
  TDelegate<EAudioUnitsValueType___cdecl(void),FDefaultDelegateUserPolicy> *local_cf0;
  FAudioTextBoxStyle *local_ce8;
  FArguments *local_ce0;
  <lambda_1> local_cd8;
  <lambda_1> *local_cd0;
  <lambda_1> *local_cc8;
  FArguments *local_cc0;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *local_cb8;
  FArguments *local_cb0;
  TAttribute<float> *local_ca8;
  TAttribute<float> *local_ca0;
  FArguments *local_c98;
  FWeakObjectPtr local_c90;
  FArguments *local_c88;
  FAudioMaterialKnobStyle *local_c80;
  FArguments *local_c78;
  <lambda_2> local_c70;
  <lambda_2> *local_c68;
  <lambda_2> *local_c60;
  FArguments *local_c58;
  FArguments *local_c50;
  FArguments *local_c48;
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *local_c40;
  FArguments *local_c38;
  undefined1 *local_c30;
  undefined1 *local_c28;
  TSharedPtr<SAudioMaterialKnob,1> *local_c20;
  FSlotArguments *local_c18;
  FSlotArguments *local_c10;
  FArguments *local_c08;
  undefined1 *local_c00;
  undefined1 *local_bf8;
  TSharedPtr<SAudioTextBox,1> *local_bf0;
  FSlotArguments *local_be8;
  FSlotArguments *local_be0;
  FArguments *local_bd8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *local_bd0;
  FArguments *local_bc8;
  SAudioTextBox *local_bc0;
  SAudioTextBox *local_bb8;
  code *local_bb0;
  code *local_ba8;
  SAudioTextBox *local_ba0;
  undefined1 *local_b98;
  code *local_b90;
  FText *local_b88;
  SAudioTextBox *local_b80;
  TSharedPtr<SVerticalBox,1> *local_b78;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_b70;
  TSharedRef<SWidget,1> local_b68;
  TSharedRef<SWidget,1> local_b58;
  TSharedPtr<FAudioUnitProcessor,1> local_b48;
  TSharedPtr<FAudioUnitProcessor,1> local_b38;
  TSharedPtr<FAudioUnitProcessor,1> local_b28;
  TSharedRef<SWidget,1> local_b18;
  EAudioUnitsValueType local_b08;
  bool local_b07;
  TDelegateBase<FNotThreadSafeDelegateMode> local_b00;
  TSharedRef<SAudioTextBox,1> local_ae8;
  TSharedRef<SAudioMaterialKnob,1> local_ad8;
  TSharedRef<SVerticalBox,1> local_ac8;
  TSharedRef<SAudioTextBox,1> local_ab8;
  TSharedRef<SAudioMaterialKnob,1> local_aa8;
  TSharedRef<FAudioUnitProcessor,1> local_a98;
  TSharedRef<FFrequencyProcessor,1> local_a88;
  TSharedRef<FVolumeProcessor,1> local_a78;
  undefined1 local_a68 [16];
  undefined1 local_a58 [16];
  TSharedRef<SVerticalBox,1> local_a48;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> local_a38;
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> local_a20;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_a08;
  undefined1 local_9f0 [16];
  undefined1 local_9e0 [16];
  TAttribute<float> local_9d0;
  FSlotArguments local_9b0;
  FSlotArguments local_8c8;
  FArguments local_7e0;
  FArguments local_5d8;
  FArguments local_350;
  
  this->Style = param_1->_Style;
  (this->Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  TAttribute<enum_EAudioUnitsValueType>::
  TAttribute<enum_EAudioUnitsValueType><enum_EAudioUnitsValueType>
            (&local_b08,&param_1->_AudioUnitsValueType);
  local_d08 = &this->AudioUnitsValueType;
  local_d08->Value = local_b08;
  (this->AudioUnitsValueType).bIsSet = local_b07;
  local_cf0 = &(this->AudioUnitsValueType).Getter;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_cf0,&local_b00);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_b00);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  bVar1 = TAttribute<float>::IsSet(&param_1->_Value);
  if (bVar1) {
    TAttribute<float>::operator=(&this->ValueAttribute,&param_1->_Value);
  }
  local_ce0 = SAudioTextBox::FArguments::FArguments(&local_5d8);
  local_ce8 = &this->Style->TextBoxStyle;
  local_cc0 = SAudioTextBox::FArguments::Style(local_ce0,local_ce8);
  local_cd0 = &local_cd8;
  local_cd8.__this = this;
  local_cc8 = local_cd0;
  local_cb0 = SAudioTextBox::FArguments::
              OnValueTextCommitted_Lambda<_SAudioMaterialLabeledKnob::Construct_::__l2::<lambda_1>_>
                        (local_cc0,local_cd0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_d15);
  local_cb8 = MakeTDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
                        (&local_a38,"SAudioTextBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledKnob.cpp"
                         ,0x1d,&local_d15);
  this_00 = TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::Expose<SAudioTextBox>
                      (local_cb8,&this->Label);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_00,&local_ae8,local_cb0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_ae8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_a38._Widget.SharedReferenceCount);
  SAudioTextBox::FArguments::~FArguments(&local_5d8);
  local_c98 = SAudioMaterialKnob::FArguments::FArguments(&local_350);
  local_ca8 = &local_9d0;
  local_ca0 = TAttribute<float>::TAttribute<float>(local_ca8,&this->ValueAttribute);
  local_c88 = SAudioMaterialKnob::FArguments::Value(local_c98,local_ca0);
  local_c90 = (param_1->_Owner).WeakPtr;
  local_c78 = SAudioMaterialKnob::FArguments::Owner
                        (local_c88,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_c90);
  local_c80 = this->Style;
  local_c58 = SAudioMaterialKnob::FArguments::AudioMaterialKnobStyle(local_c78,local_c80);
  local_c68 = &local_c70;
  local_c70.__this = this;
  local_c60 = local_c68;
  local_c50 = SAudioMaterialKnob::FArguments::
              OnFloatValueChanged_Lambda<_SAudioMaterialLabeledKnob::Construct_::__l2::<lambda_2>_>
                        (local_c58,local_c68);
  local_c48 = SAudioMaterialKnob::FArguments::OnMouseCaptureBegin
                        (local_c50,&this->OnMouseCaptureBegin);
  local_c38 = SAudioMaterialKnob::FArguments::OnMouseCaptureEnd(local_c48,&this->OnMouseCaptureEnd);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_d14);
  local_c40 = MakeTDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>
                        (&local_a20,"SAudioMaterialKnob",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledKnob.cpp"
                         ,0x2e,&local_d14);
  this_01 = TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::Expose<SAudioMaterialKnob>
                      (local_c40,&this->Knob);
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_01,&local_ad8,local_c38);
  TSharedRef<SAudioMaterialKnob,1>::~TSharedRef<SAudioMaterialKnob,1>(&local_ad8);
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>(&local_a20);
  SAudioMaterialKnob::FArguments::~FArguments(&local_350);
  local_c08 = SVerticalBox::FArguments::FArguments(&local_7e0);
  pFVar2 = SVerticalBox::Slot(&local_8c8);
  local_c30 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_c30,HAlign_Fill);
  local_c28 = &pFVar2->field_0x48;
  local_c18 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                        ((FSlotArgumentsMixin *)local_c28,VAlign_Fill);
  local_c20 = &this->Knob;
  pTVar3 = TSharedPtr<SAudioMaterialKnob,1>::ToSharedRef(local_c20,&local_aa8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAudioMaterialKnob>(&local_b58,pTVar3);
  local_c10 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_c18,&local_b58);
  local_bd8 = SVerticalBox::FArguments::operator+(local_c08,local_c10);
  pFVar2 = SVerticalBox::Slot(&local_9b0);
  local_c00 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_c00,HAlign_Center);
  local_bf8 = &pFVar2->field_0x48;
  pFVar2 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_bf8,VAlign_Top);
  local_be8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar2);
  local_bf0 = &this->Label;
  pTVar4 = TSharedPtr<SAudioTextBox,1>::ToSharedRef(local_bf0,&local_ab8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAudioTextBox>(&local_b68,pTVar4);
  local_be0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_be8,&local_b68);
  local_bc8 = SVerticalBox::FArguments::operator+(local_bd8,local_be0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_d13);
  local_bd0 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_a08,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledKnob.cpp"
                         ,0x3d,&local_d13);
  this_02 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                      (local_bd0,&this->VerticalLayotWidget);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&local_ac8,local_bc8);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_ac8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_a08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b68);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_ab8.SharedReferenceCount);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b58);
  TSharedRef<SAudioMaterialKnob,1>::~TSharedRef<SAudioMaterialKnob,1>(&local_aa8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8c8);
  SVerticalBox::FArguments::~FArguments(&local_7e0);
  pEVar5 = TAttribute<enum_EAudioUnitsValueType>::Get(&this->AudioUnitsValueType);
  local_d0c = *pEVar5;
  if (local_d0c == Linear) {
    local_d12 = (this->Label).Object != (SAudioTextBox *)0x0;
    if ((bool)local_d12) {
      pTVar6 = MakeShared<FAudioUnitProcessor,1>(&local_a98);
      TSharedPtr<FAudioUnitProcessor,1>::TSharedPtr<FAudioUnitProcessor,1><FAudioUnitProcessor>
                (&local_b48,pTVar6);
      TSharedPtr<FAudioUnitProcessor,1>::operator=(&this->AudioUnitProcessor,&local_b48);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_b48.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_a98.SharedReferenceCount);
      local_bc0 = (this->Label).Object;
      local_bb8 = local_bc0;
      SAudioTextBox::SetShowUnitsText(local_bc0,false);
    }
  }
  else if (local_d0c == Frequency) {
    pTVar7 = MakeShared<FFrequencyProcessor,1>(&local_a88);
    TSharedPtr<FAudioUnitProcessor,1>::TSharedPtr<FAudioUnitProcessor,1><FFrequencyProcessor>
              (&local_b38,pTVar7);
    TSharedPtr<FAudioUnitProcessor,1>::operator=(&this->AudioUnitProcessor,&local_b38);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b38.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_a88.SharedReferenceCount);
  }
  else if (local_d0c == Volume) {
    pTVar8 = MakeShared<FVolumeProcessor,1,bool_const_&>(&local_a78,&param_1->_bUseLinearOutput);
    TSharedPtr<FAudioUnitProcessor,1>::TSharedPtr<FAudioUnitProcessor,1><FVolumeProcessor>
              (&local_b28,pTVar8);
    TSharedPtr<FAudioUnitProcessor,1>::operator=(&this->AudioUnitProcessor,&local_b28);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b28.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_a78.SharedReferenceCount);
  }
  local_d11 = (this->AudioUnitProcessor).Object != (FAudioUnitProcessor *)0x0;
  if ((bool)local_d11) {
    local_ba8 = *(code **)(this->_padding_ + 0x260);
    local_d00 = TSharedPtr<FAudioUnitProcessor,1>::operator->(&this->AudioUnitProcessor);
    local_bb0 = *(code **)((longlong)*local_d00 + 0x28);
    puVar9 = (undefined1 *)(*local_bb0)(local_d00,local_9f0);
    puVar12 = local_a68;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar9 = local_a68;
    puVar12 = local_a58;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    (*local_ba8)(this,local_a58);
    local_d10 = (this->Label).Object != (SAudioTextBox *)0x0;
    if ((bool)local_d10) {
      local_ba0 = (this->Label).Object;
      local_b98 = local_9e0;
      local_b80 = local_ba0;
      local_cf8 = TSharedPtr<FAudioUnitProcessor,1>::operator->(&this->AudioUnitProcessor);
      local_b90 = *(code **)*local_cf8;
      local_b88 = (FText *)(*local_b90)(local_cf8,local_b98);
      SAudioTextBox::SetUnitsText(local_b80,local_b88);
    }
  }
  local_b70 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
              &this->_padding_;
  local_b78 = &this->VerticalLayotWidget;
  pTVar10 = TSharedPtr<SVerticalBox,1>::ToSharedRef(local_b78,&local_a48);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_b18,pTVar10);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_b70,&local_b18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b18);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_a48);
  return;
}

// GetOutputValue @ 14d932490

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledKnob::GetOutputValue(SAudioMaterialLabeledKnob *this,float param_1)

{
  FAudioUnitProcessor *pFVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar1 = (this->AudioUnitProcessor).Object;
  if (pFVar1 != (FAudioUnitProcessor *)0x0) {
    local_18 = *(undefined4 *)&(this->OutputRange).field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
    fVar2 = (float)(**(code **)((longlong)*pFVar1 + 8))(pFVar1,&local_18,param_1);
    return fVar2;
  }
  return 0.0;
}

// GetOutputValueForText @ 14d932a40

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledKnob::GetOutputValueForText(SAudioMaterialLabeledKnob *this,float param_1)

{
  FAudioUnitProcessor *pFVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar1 = (this->AudioUnitProcessor).Object;
  if (pFVar1 != (FAudioUnitProcessor *)0x0) {
    local_18 = *(undefined4 *)&(this->OutputRange).field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
    fVar2 = (float)(**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,&local_18,param_1);
    return fVar2;
  }
  return 0.0;
}

// GetSliderValue @ 14d935e10

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledKnob::GetSliderValue(SAudioMaterialLabeledKnob *this,float param_1)

{
  FAudioUnitProcessor *pFVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar1 = (this->AudioUnitProcessor).Object;
  if (pFVar1 != (FAudioUnitProcessor *)0x0) {
    local_18 = *(undefined4 *)&(this->OutputRange).field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
    fVar2 = (float)(**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,&local_18,param_1);
    return fVar2;
  }
  return 0.0;
}

// GetSliderValueForText @ 14d936390

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledKnob::GetSliderValueForText(SAudioMaterialLabeledKnob *this,float param_1)

{
  FAudioUnitProcessor *pFVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar1 = (this->AudioUnitProcessor).Object;
  if (pFVar1 != (FAudioUnitProcessor *)0x0) {
    local_18 = *(undefined4 *)&(this->OutputRange).field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&(this->OutputRange).field0_0x0 + 0xc);
    fVar2 = (float)(**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,&local_18,param_1);
    return fVar2;
  }
  return 0.0;
}

// SetDesiredSizeOverride @ 14d968930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetDesiredSizeOverride
          (SAudioMaterialLabeledKnob *this,TVector2<double> *param_1)

{
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  undefined1 local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_40._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_40._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_30 = 1;
  local_28 = 1;
  local_10 = 0;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  SWidget::
  SetAttribute<TOptional<UE::Math::TVector2<double>_>,TOptional<UE::Math::TVector2<double>_>_>
            ((SWidget *)this,&this->DesiredSizeOverride,
             (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_40._s_0,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_58);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  return;
}

// SetLabelBackgroundColor @ 14d9697c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetLabelBackgroundColor
          (SAudioMaterialLabeledKnob *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
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
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioTextBox::SetLabelBackgroundColor((this->Label).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetOutputRange @ 14d96b280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetOutputRange(SAudioMaterialLabeledKnob *this,TVector2<double> *param_1)

{
  double dVar1;
  TVector2<double>_u_0_s_0 TVar2;
  FAudioUnitProcessor *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  TVector2<double>_u_0 *pTVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  undefined1 local_18 [16];
  
  uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar11 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  pFVar3 = (this->AudioUnitProcessor).Object;
  if (pFVar3 == (FAudioUnitProcessor *)0x0) {
    local_38._0_4_ = *(undefined4 *)&param_1->field0_0x0;
    local_38._4_4_ = uVar10;
    local_38._8_4_ = uVar11;
    local_38._12_4_ = uVar5;
    pTVar7 = &local_38;
  }
  else {
    local_48 = *(undefined4 *)&param_1->field0_0x0;
    uStack_44 = uVar10;
    uStack_40 = uVar11;
    uStack_3c = uVar5;
    pTVar7 = (TVector2<double>_u_0 *)
             (**(code **)((longlong)*pFVar3 + 0x30))(pFVar3,local_18,&local_48);
  }
  TVar2 = pTVar7->_s_0;
  (this->OutputRange).field0_0x0._s_0 = TVar2;
  pcVar4 = *(code **)(this->_padding_ + 0x248);
  uVar10 = TVar2.X._0_4_;
  uVar11 = TVar2.X._4_4_;
  if (TVar2.Y <= TVar2.X) {
    uVar10 = TVar2.Y._0_4_;
    uVar11 = TVar2.Y._4_4_;
  }
  (this->OutputRange).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar10);
  pfVar8 = TAttribute<float>::Get(&this->ValueAttribute);
  fVar9 = (float)(*pcVar4)(this,*pfVar8);
  dVar12 = (this->OutputRange).field0_0x0._s_0.Y;
  if ((double)fVar9 <= dVar12) {
    dVar12 = (double)fVar9;
  }
  dVar1 = (this->OutputRange).field0_0x0._s_0.X;
  if (dVar12 <= dVar1) {
    dVar12 = dVar1;
  }
  uVar10 = (**(code **)(this->_padding_ + 0x250))(this,(float)dVar12);
  (**(code **)(this->_padding_ + 600))(this,uVar10);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28._s_0.X = (this->OutputRange).field0_0x0._s_0.X;
  local_28._s_0.Y = (this->OutputRange).field0_0x0._s_0.Y;
  SAudioTextBox::UpdateValueTextWidth((this->Label).Object,(TVector2<double> *)&local_28._s_0);
  return;
}

// SetShowUnitsText @ 14d96c660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetShowUnitsText(SAudioMaterialLabeledKnob *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
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
  SAudioTextBox::SetShowUnitsText((this->Label).Object,param_1);
  return;
}

// SetSliderValue @ 14d96d4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetSliderValue(SAudioMaterialLabeledKnob *this,float param_1)

{
  SAudioMaterialKnob *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  (this->ValueAttribute).Value = param_1;
  (this->ValueAttribute).bIsSet = true;
  fVar4 = (float)(**(code **)(this->_padding_ + 0x290))(this,param_1);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
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
  SAudioTextBox::SetValueText((this->Label).Object,fVar4);
  if ((this->Knob).Object == (SAudioMaterialKnob *)0x0) {
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
  pSVar1 = (this->Knob).Object;
  local_50[4] = true;
  local_38 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = param_1;
  SetWidgetAttribute<float,float>
            ((SWidget *)pSVar1,&pSVar1->ValueAttribute,(TAttribute<float> *)local_50,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_68);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// SetUnitsText @ 14d96e3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetUnitsText(SAudioMaterialLabeledKnob *this,FText *param_1)

{
  SAudioTextBox *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
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
  local_18.TextData.Reference = (param_1->TextData).Reference;
  this_00 = (this->Label).Object;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = param_1->Flags;
  SAudioTextBox::SetUnitsText(this_00,&local_18);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetUnitsTextReadOnly @ 14d96e8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledKnob::SetUnitsTextReadOnly(SAudioMaterialLabeledKnob *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
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
  SAudioTextBox::SetUnitsTextReadOnly((this->Label).Object,param_1);
  return;
}

// SetValue @ 14d96eb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioMaterialLabeledKnob::SetValue(SAudioMaterialLabeledKnob *this,float param_1)

{
  SAudioMaterialKnob *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  (this->ValueAttribute).Value = param_1;
  (this->ValueAttribute).bIsSet = true;
  fVar4 = (float)(**(code **)(this->_padding_ + 0x290))(this,param_1);
  if ((this->Label).Object == (SAudioTextBox *)0x0) {
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
  SAudioTextBox::SetValueText((this->Label).Object,fVar4);
  if ((this->Knob).Object == (SAudioMaterialKnob *)0x0) {
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
  pSVar1 = (this->Knob).Object;
  local_50[4] = true;
  local_38 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = param_1;
  SetWidgetAttribute<float,float>
            ((SWidget *)pSVar1,&pSVar1->ValueAttribute,(TAttribute<float> *)local_50,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_68);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

