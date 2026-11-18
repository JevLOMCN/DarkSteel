// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 19

// operator() @ 14d8c4b20

void __thiscall
`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1,Type param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  float *pfVar6;
  wchar_t *_Str;
  float fVar7;
  double dVar8;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  float local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pFVar5 = FText::ToString(param_1);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  dVar8 = _wtof(_Str);
  fVar7 = (float)(**(code **)(**(longlong **)this + 0x2a0))(*(longlong **)this,(float)dVar8);
  pfVar6 = TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)this + 0x2e0));
  if (__real_322bcc77 < (float)((uint)(fVar7 - *pfVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    lVar1 = *(longlong *)this;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2e8));
    *(float *)(lVar1 + 0x2e0) = fVar7;
    *(undefined1 *)(lVar1 + 0x2e4) = 1;
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
    lVar1 = *(longlong *)(lVar1 + 0x3a8);
    local_3c = 1;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    *(float *)(lVar1 + 0x2a0) = fVar7;
    *(undefined1 *)(lVar1 + 0x2a4) = 1;
    local_40 = fVar7;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar1 + 0x2a8),
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_88);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2a8),&local_58);
    if ((*(int *)(lVar1 + 0x2b8) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x2b0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,fVar7);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2c0),&local_70);
    if ((*(int *)(lVar1 + 0x2d0) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x2c8), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,fVar7);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  return;
}

// operator() @ 14d8c99f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>::operator()(void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FReadAccessScope local_38 [2];
  
  lVar1 = *(longlong *)this;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2e8));
  *(float *)(lVar1 + 0x2e0) = param_1;
  *(undefined1 *)(lVar1 + 0x2e4) = 1;
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2a8),local_38);
  if ((*(int *)(lVar1 + 0x2b8) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 0x2b0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  fVar5 = (float)(**(code **)(**(longlong **)this + 0x298))(*(longlong **)this,param_1);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x3b8) == 0) {
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
  SAudioTextBox::SetValueText(*(SAudioTextBox **)(lVar1 + 0x3b8),fVar5);
  return;
}

// ComputeDesiredSize @ 14d8e5a40

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SAudioMaterialLabeledSlider::ComputeDesiredSize
          (SAudioMaterialLabeledSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  SAudioTextBox *this_00;
  FAudioMaterialSliderStyle *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TOptional<UE::Math::TVector2<double>_> *pTVar5;
  TVector2<double> *pTVar6;
  EOrientation *pEVar7;
  FDeprecateSlateVector2D FVar8;
  float fVar9;
  float fVar10;
  
  pTVar5 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar5->bIsSet != false) {
    pTVar5 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
    if (pTVar5->bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TVector2<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    dVar3 = (pTVar5->TypedValue).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->TypedValue).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    return __return_storage_ptr__;
  }
  if ((this->Style != (FAudioMaterialSliderStyle *)0x0) &&
     ((this->Label).Object != (SAudioTextBox *)0x0)) {
    pEVar7 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
    this_00 = (this->Label).Object;
    if (*pEVar7 == Orient_Vertical) {
      FVar8 = SWidget::GetDesiredSize((SWidget *)this_00);
      fVar10 = *(float *)FVar8 + __real_40c00000;
    }
    else {
      pFVar1 = this->Style;
      FVar8 = SWidget::GetDesiredSize((SWidget *)this_00);
      fVar10 = *(float *)FVar8 + *(float *)((longlong)&pFVar1->_padding_ + 4);
    }
    pEVar7 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
    if (*pEVar7 == Orient_Vertical) {
      pFVar1 = this->Style;
      FVar8 = SWidget::GetDesiredSize((SWidget *)(this->Label).Object);
      fVar9 = *(float *)((longlong)FVar8 + 4) + *(float *)((longlong)&pFVar1->_padding_ + 4) +
              __real_40400000;
    }
    else {
      fVar9 = *(float *)&this->Style->_padding_;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar9;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 14d8e9eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::Construct(SAudioMaterialLabeledSlider *this,FArguments *param_1)

{
  EAudioUnitsValueType EVar1;
  FAudioUnitProcessor *pFVar2;
  code *pcVar3;
  SAudioTextBox *this_00;
  TReferenceControllerBase<1> *pTVar4;
  SWidgetSwitcher *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FArguments *pFVar11;
  float *pfVar12;
  EOrientation *pEVar13;
  EAudioUnitsValueType *pEVar14;
  TSharedRef<FVolumeProcessor,1> *pTVar15;
  TSharedRef<FFrequencyProcessor,1> *pTVar16;
  TSharedRef<FAudioUnitProcessor,1> *pTVar17;
  undefined4 *puVar18;
  FText *pFVar19;
  TSharedRef<SWidgetSwitcher,1> *pTVar20;
  longlong *this_01;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  undefined1 local_800 [8];
  ForAnyElementType FStack_7f8;
  ulonglong local_7f0;
  TSharedPtr<FAudioUnitProcessor,1> local_7e8;
  TSharedPtr<FAudioUnitProcessor,1> local_7d8;
  TSharedPtr<FAudioUnitProcessor,1> local_7c8;
  float local_7b8;
  undefined1 local_7b4;
  undefined1 local_7b0 [8];
  void *pvStack_7a8;
  undefined8 local_7a0;
  TSharedPtr<SAudioTextBox,1> local_798;
  SWidgetSwitcher *local_788;
  TReferenceControllerBase<1> *pTStack_780;
  FName local_778;
  FMemScope local_770;
  FName local_768;
  FMemScope local_760;
  TAttribute<EAudioUnitsValueType> local_758;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> local_738;
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> local_720;
  FDestructionSentinel local_708;
  FDestructionSentinel local_6f0;
  undefined1 *local_6d8;
  FDestructionSentinel local_6d0;
  undefined1 *local_6b8;
  FDestructionSentinel local_6b0;
  undefined1 *local_698;
  TSharedRef<SAudioTextBox,1> local_690;
  SAudioMaterialSlider *local_680;
  TReferenceControllerBase<1> *pTStack_678;
  TSharedRef<SAudioMaterialSlider,1> local_670;
  TSharedRef<FVolumeProcessor,1> local_660;
  TSharedRef<FFrequencyProcessor,1> local_650;
  TSharedRef<FAudioUnitProcessor,1> local_640;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  TSharedRef<SWidgetSwitcher,1> local_618;
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  FArguments local_5e8;
  FArguments local_360;
  
  this->Style = param_1->_Style;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueCommitted,&param_1->_OnValueCommitted);
  local_7f0 = 0;
  local_800 = (undefined1  [8])0x0;
  FStack_7f8.Data = (FScriptContainerElement *)0x0;
  (this->Orientation).Value = param_1->_Orientation;
  (this->Orientation).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Orientation).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_800);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_800,
             (FWriteAccessScope *)&local_708);
  if (((int)local_7f0 != 0) && (FStack_7f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7f8,0,0,0x10);
    local_7f0 = local_7f0 & 0xffffffff00000000;
  }
  if (local_708.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_708.Accessor,&local_708);
  }
  if (FStack_7f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_800);
  local_758.Value = param_1->_AudioUnitsValueType;
  local_758.bIsSet = true;
  local_758.Getter._16_8_ = 0;
  local_758.Getter._0_8_ = 0;
  local_758.Getter._8_8_ = 0;
  TAttribute<enum_EAudioUnitsValueType>::operator=(&this->AudioUnitsValueType,&local_758);
  TAttribute<enum_EAudioUnitsValueType>::~TAttribute<enum_EAudioUnitsValueType>(&local_758);
  TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
            (&this->DesiredSizeOverride,&param_1->_DesiredSizeOverride);
  if ((param_1->_SliderValue).bIsSet != false) {
    (this->SliderValueAttribute).Value = (param_1->_SliderValue).Value;
    (this->SliderValueAttribute).bIsSet = (param_1->_SliderValue).bIsSet;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->SliderValueAttribute).Getter,&(param_1->_SliderValue).Getter);
  }
  pFVar8 = SAudioTextBox::FArguments::FArguments(&local_5e8);
  pFVar8->_Style = &this->Style->TextBoxStyle;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar8->_OnValueTextCommitted,(FWriteAccessScope *)&local_6f0);
  local_6d8 = &(pFVar8->_OnValueTextCommitted).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_6d8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_6f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f0.Accessor,&local_6f0);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_778 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_770,&local_778,true);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
            (&local_738,"SAudioTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0x18,local_res8);
  FMemScope::~FMemScope(&local_770);
  FLLMScope::~FLLMScope(local_res18);
  if (local_738._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_738._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_738._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_798.Object = (this->Label).Object;
  local_798.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  (this->Label).Object = local_738._Widget.Object;
  (this->Label).SharedReferenceCount.ReferenceController =
       local_738._Widget.SharedReferenceCount.ReferenceController;
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&local_798);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_738,&local_690,pFVar8);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_690);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>(&local_738);
  SAudioTextBox::FArguments::~FArguments(&local_5e8);
  pFVar11 = SAudioMaterialSlider::FArguments::FArguments(&local_360);
  pfVar12 = TAttribute<float>::Get(&this->SliderValueAttribute);
  local_7b8 = *pfVar12;
  local_7b4 = 1;
  local_7a0 = 0;
  local_7b0 = (undefined1  [8])0x0;
  pvStack_7a8 = (void *)0x0;
  (pFVar11->_ValueAttribute).Value = local_7b8;
  (pFVar11->_ValueAttribute).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ValueAttribute).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b0);
  if (pvStack_7a8 != (void *)0x0) {
    FMemory::Free(pvStack_7a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7b0);
  (pFVar11->_Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  pFVar11->_AudioMaterialSliderStyle = this->Style;
  pEVar13 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  pFVar11->_Orientation = *pEVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnValueChanged,
             (FWriteAccessScope *)&local_6d0);
  local_6b8 = &(pFVar11->_OnValueChanged).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_6b8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_6d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d0.Accessor,&local_6d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnValueCommitted,
             (FWriteAccessScope *)&local_6b0);
  local_698 = &(pFVar11->_OnValueCommitted).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_698);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar9[3] = this;
  }
  if (local_6b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b0.Accessor,&local_6b0);
  }
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_768 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_760,&local_768,true);
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>
            (&local_720,"SAudioMaterialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0x28,local_res10);
  FMemScope::~FMemScope(&local_760);
  FLLMScope::~FLLMScope(local_res20);
  if (local_720._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_720._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_720._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_680 = (this->Slider).Object;
  pTStack_678 = (this->Slider).SharedReferenceCount.ReferenceController;
  (this->Slider).Object = local_720._Widget.Object;
  (this->Slider).SharedReferenceCount.ReferenceController =
       local_720._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_678);
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_720,&local_670,pFVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_720._Widget.SharedReferenceCount.ReferenceController);
  SAudioMaterialSlider::FArguments::~FArguments(&local_360);
  pEVar14 = TAttribute<enum_EAudioUnitsValueType>::Get(&this->AudioUnitsValueType);
  EVar1 = *pEVar14;
  if (EVar1 == Linear) {
    if ((this->Label).Object != (SAudioTextBox *)0x0) {
      pTVar17 = MakeShared<FAudioUnitProcessor,1>(&local_640);
      local_7c8.Object = pTVar17->Object;
      local_7c8.SharedReferenceCount.ReferenceController =
           (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_7c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_7c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_7c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->AudioUnitProcessor != &local_7c8) {
        (this->AudioUnitProcessor).Object = local_7c8.Object;
        local_7c8.Object = (FAudioUnitProcessor *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AudioUnitProcessor).SharedReferenceCount,&local_7c8.SharedReferenceCount)
        ;
      }
      TSharedPtr<FAudioUnitProcessor,1>::~TSharedPtr<FAudioUnitProcessor,1>(&local_7c8);
      TSharedRef<FAudioUnitProcessor,1>::~TSharedRef<FAudioUnitProcessor,1>(&local_640);
      SAudioTextBox::SetShowUnitsText((this->Label).Object,false);
    }
  }
  else if (EVar1 == Frequency) {
    pTVar16 = MakeShared<FFrequencyProcessor,1>(&local_650);
    local_7d8.Object = (FAudioUnitProcessor *)pTVar16->Object;
    local_7d8.SharedReferenceCount.ReferenceController =
         (pTVar16->SharedReferenceCount).ReferenceController;
    if (local_7d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->AudioUnitProcessor != &local_7d8) {
      (this->AudioUnitProcessor).Object = local_7d8.Object;
      local_7d8.Object = (FAudioUnitProcessor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AudioUnitProcessor).SharedReferenceCount,&local_7d8.SharedReferenceCount);
    }
    TSharedPtr<FAudioUnitProcessor,1>::~TSharedPtr<FAudioUnitProcessor,1>(&local_7d8);
    TSharedRef<FFrequencyProcessor,1>::~TSharedRef<FFrequencyProcessor,1>(&local_650);
  }
  else if (EVar1 == Volume) {
    pTVar15 = MakeShared<FVolumeProcessor,1,bool_const_&>(&local_660,&param_1->_bUseLinearOutput);
    local_7e8.Object = (FAudioUnitProcessor *)pTVar15->Object;
    local_7e8.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_7e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->AudioUnitProcessor != &local_7e8) {
      (this->AudioUnitProcessor).Object = local_7e8.Object;
      local_7e8.Object = (FAudioUnitProcessor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AudioUnitProcessor).SharedReferenceCount,&local_7e8.SharedReferenceCount);
    }
    TSharedPtr<FAudioUnitProcessor,1>::~TSharedPtr<FAudioUnitProcessor,1>(&local_7e8);
    TSharedRef<FVolumeProcessor,1>::~TSharedRef<FVolumeProcessor,1>(&local_660);
  }
  pFVar2 = (this->AudioUnitProcessor).Object;
  if (pFVar2 != (FAudioUnitProcessor *)0x0) {
    pcVar3 = *(code **)(this->_padding_ + 0x260);
    puVar18 = (undefined4 *)(**(code **)((longlong)*pFVar2 + 0x28))(pFVar2,local_608);
    local_628 = *puVar18;
    uStack_624 = puVar18[1];
    uStack_620 = puVar18[2];
    uStack_61c = puVar18[3];
    (*pcVar3)(this,&local_628);
    this_00 = (this->Label).Object;
    if (this_00 != (SAudioTextBox *)0x0) {
      if ((this->AudioUnitProcessor).Object == (FAudioUnitProcessor *)0x0) {
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
      pFVar2 = (this->AudioUnitProcessor).Object;
      pFVar19 = (FText *)(**(code **)*pFVar2)(pFVar2,local_5f8);
      SAudioTextBox::SetUnitsText(this_00,pFVar19);
    }
  }
  pTVar20 = CreateWidgetLayout(this,&local_618);
  this_01 = &this->_padding_;
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar20->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar4;
  local_788 = pSVar5;
  pTStack_780 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_618.SharedReferenceCount.ReferenceController);
  return;
}

// CreateWidgetLayout @ 14d90ee00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidgetSwitcher,1> * __thiscall
SAudioMaterialLabeledSlider::CreateWidgetLayout
          (SAudioMaterialLabeledSlider *this,TSharedRef<SWidgetSwitcher,1> *__return_storage_ptr__)

{
  EOrientation EVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  float fVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FArguments *pFVar10;
  TSharedRef<SWidgetSwitcher,1> *pTVar11;
  FSlotArguments *pFVar12;
  longlong *plVar13;
  FArguments *pFVar14;
  undefined1 *puVar15;
  FArguments *pFVar16;
  FSlotArguments *pFVar17;
  FSlotArguments *pFVar18;
  TSharedRef<SOverlay,1> *pTVar19;
  FSlotArguments *pFVar20;
  FSizeParam *pFVar21;
  TSharedRef<SHorizontalBox,1> *pTVar22;
  FSlotArguments *pFVar23;
  FArguments *pFVar24;
  FSlot *pFVar25;
  FSlotArguments *pFVar26;
  TSharedRef<SAudioMaterialSlider,1> *pTVar27;
  TSharedRef<SVerticalBox,1> *pTVar28;
  SWidgetSwitcher *pSVar29;
  EOrientation *pEVar30;
  SAudioMaterialSlider *pSVar31;
  FSlotArguments *pFVar32;
  FSlotArguments *pFVar33;
  FSlotArguments *pFVar34;
  undefined1 auStackY_1908 [32];
  T0RequiredArgs local_18d8;
  T0RequiredArgs local_18d7;
  T0RequiredArgs local_18d6;
  T0RequiredArgs local_18d5;
  T0RequiredArgs local_18d4;
  T0RequiredArgs local_18d3;
  T0RequiredArgs local_18d2 [2];
  FLLMScope local_18d0;
  FLLMScope local_18cc;
  FLLMScope local_18c8;
  FLLMScope local_18c4;
  FLLMScope local_18c0;
  FLLMScope local_18bc;
  FLLMScope local_18b8 [2];
  FArguments *local_18b0;
  SAudioMaterialSlider *local_18a8;
  FSharedReferencer<1> local_18a0;
  FArguments *local_1898;
  SOverlay *local_1890;
  FSharedReferencer<1> local_1888;
  SAudioTextBox *local_1880;
  FSharedReferencer<1> local_1878;
  SHorizontalBox *local_1870;
  FSharedReferencer<1> local_1868;
  SOverlay *local_1860;
  FSharedReferencer<1> local_1858;
  SAudioTextBox *local_1850;
  FSharedReferencer<1> local_1848;
  SAudioMaterialSlider *local_1840;
  FSharedReferencer<1> local_1838;
  SVerticalBox *local_1830;
  FSharedReferencer<1> local_1828;
  SOverlay *local_1820;
  FSharedReferencer<1> local_1818;
  undefined1 local_1810 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1808;
  ForAnyElementType FStack_1800;
  ulonglong local_17f8;
  TSharedRef<SAudioTextBox,1> local_17f0;
  TSharedRef<SAudioTextBox,1> local_17e0;
  undefined8 local_17d0;
  FSharedReferencer<1> local_17c8;
  undefined4 local_17c0 [2];
  undefined4 local_17b8 [2];
  FName local_17b0;
  FMemScope local_17a8;
  FName local_17a0;
  FMemScope local_1798;
  FName local_1790;
  FMemScope local_1788;
  FSlotArguments *local_1780;
  FMemScope local_1778;
  FSlotArguments *local_1770;
  FSlotArguments *local_1768;
  FName local_1760;
  FMemScope local_1758;
  FName local_1750;
  FMemScope local_1748;
  FName local_1740;
  FMemScope local_1738;
  TSharedRef<SWidgetSwitcher,1> *local_1730;
  FName local_1728;
  undefined4 local_1720 [2];
  undefined4 local_1718 [2];
  undefined4 local_1710 [2];
  undefined4 local_1708 [2];
  undefined4 local_1700 [2];
  undefined4 local_16f8 [2];
  undefined4 local_16f0 [2];
  undefined4 local_16e8 [2];
  undefined4 local_16e0 [2];
  undefined4 local_16d8 [2];
  undefined4 local_16d0 [2];
  undefined4 local_16c8 [2];
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> local_16c0;
  FDestructionSentinel local_16a8;
  TSharedRef<SWidgetSwitcher,1> local_1690;
  TSharedRef<SOverlay,1> local_1680;
  TSharedRef<SHorizontalBox,1> local_1670;
  TSharedRef<SOverlay,1> local_1660;
  TSharedRef<SOverlay,1> local_1650;
  TSharedRef<SVerticalBox,1> local_1640;
  TSharedRef<SOverlay,1> local_1630;
  TSharedRef<SAudioMaterialSlider,1> local_1620;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1610;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_15f8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_15e0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_15c8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_15b0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1598;
  SWidgetSwitcher *local_1580;
  TReferenceControllerBase<1> *pTStack_1578;
  undefined1 local_1570 [16];
  undefined1 local_1560 [32];
  undefined1 local_1540 [24];
  undefined1 local_1528 [56];
  void *local_14f0;
  undefined1 local_14c8 [56];
  void *local_1490;
  undefined1 local_1468 [56];
  void *local_1430;
  undefined1 local_1408 [56];
  void *local_13d0;
  undefined1 local_13a8 [16];
  FSharedReferencer<1> local_1398 [7];
  undefined4 local_1360;
  undefined1 local_135c;
  undefined4 local_1358;
  undefined1 local_1354;
  undefined8 *local_12c0 [2];
  TReferenceControllerBase<1> *local_12b0;
  undefined1 local_1290 [40];
  FSlotArgumentsMixin local_1268;
  undefined8 *local_11d8 [2];
  TReferenceControllerBase<1> *local_11c8;
  undefined1 local_11a8 [40];
  FSlotArgumentsMixin local_1180;
  undefined1 local_10f0 [528];
  undefined1 local_ee0 [24];
  undefined1 local_ec8 [232];
  FArguments local_de0;
  FArguments local_bd8;
  FArguments local_9d0;
  FArguments local_7c8;
  FArguments local_5c0;
  FArguments local_3b8;
  FScopedWidgetSlotArguments local_1a8;
  FScopedWidgetSlotArguments local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1908;
  local_1730 = __return_storage_ptr__;
  pFVar10 = SWidgetSwitcher::FArguments::FArguments((FArguments *)local_10f0);
  FLLMScope::FLLMScope(&local_18d0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_17b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_17a8,&local_17b0,true);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_16c0,"SWidgetSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xc4,&local_18d8);
  FMemScope::~FMemScope(&local_17a8);
  FLLMScope::~FLLMScope(&local_18d0);
  if (local_16c0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16c0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_16c0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1580 = (this->LayoutWidgetSwitcher).Object;
  pTStack_1578 = (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController;
  (this->LayoutWidgetSwitcher).Object = local_16c0._Widget.Object;
  (this->LayoutWidgetSwitcher).SharedReferenceCount.ReferenceController =
       local_16c0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1578);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_16c0,&local_1690,pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1690.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ee0);
  if ((void *)local_ee0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ee0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ee0);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)local_10f0._504_8_,local_10f0._512_4_);
  if ((FSlotArguments *)local_10f0._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_10f0._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_10f0);
  if (((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  local_1898 = (FArguments *)
               SWidgetSwitcher::AddSlot((this->LayoutWidgetSwitcher).Object,&local_108,0);
  local_18b0 = SOverlay::FArguments::FArguments(&local_9d0);
  pFVar12 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_14c8,0);
  plVar13 = (longlong *)&pFVar12->field_0x48;
  pFVar20 = (FSlotArguments *)0x0;
  if ((longlong *)local_1720 != plVar13) {
    *(undefined4 *)plVar13 = 0;
    pFVar12->field_0x4c = 1;
  }
  pFVar17 = pFVar20;
  if (plVar13 != (longlong *)0x0) {
    pFVar17 = pFVar12;
  }
  if (local_1718 != (undefined4 *)&pFVar17->field_0x50) {
    *(undefined4 *)&pFVar17->field_0x50 = 2;
    pFVar17->field_0x54 = 1;
  }
  local_1780 = pFVar20;
  if (pFVar17 != (FSlotArguments *)0xffffffffffffffb8) {
    local_1780 = pFVar17;
  }
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_bd8);
  pFVar12 = SHorizontalBox::Slot((FSlotArguments *)local_11d8);
  puVar15 = &pFVar12->field_0x48;
  if (local_1710 != (undefined4 *)puVar15) {
    *(undefined4 *)puVar15 = 0;
    pFVar12->field_0x4c = 1;
  }
  pFVar17 = pFVar20;
  if (puVar15 != (undefined1 *)0x0) {
    pFVar17 = pFVar12;
  }
  if (local_1708 != (undefined4 *)&pFVar17->field_0x50) {
    *(undefined4 *)&pFVar17->field_0x50 = 2;
    pFVar17->field_0x54 = 1;
  }
  pFVar12 = pFVar20;
  if (pFVar17 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar12 = pFVar17;
  }
  pFVar16 = SOverlay::FArguments::FArguments(&local_de0);
  pFVar17 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1528,0);
  puVar15 = &pFVar17->field_0x48;
  if (local_1700 != (undefined4 *)puVar15) {
    *(undefined4 *)puVar15 = 0;
    pFVar17->field_0x4c = 1;
  }
  pFVar34 = pFVar20;
  if (puVar15 != (undefined1 *)0x0) {
    pFVar34 = pFVar17;
  }
  if (local_16f8 != (undefined4 *)&pFVar34->field_0x50) {
    *(undefined4 *)&pFVar34->field_0x50 = 2;
    pFVar34->field_0x54 = 1;
  }
  fVar7 = __real_40400000;
  if (pFVar34 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar20 = pFVar34;
  }
  pFVar18 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar20->field_0x18,__real_40400000,0.0);
  if (((this->Slider).Object == (SAudioMaterialSlider *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar2 = (this->Slider).SharedReferenceCount.ReferenceController;
  pSVar31 = (this->Slider).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar31 == (SAudioMaterialSlider *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18a8 = pSVar31;
  local_18a0.ReferenceController = pTVar2;
  if ((SAudioMaterialSlider **)&pFVar18->_padding_ != &local_18a8) {
    pFVar18->_padding_ = (longlong)pSVar31;
    local_18a8 = (SAudioMaterialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_18a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18a0.ReferenceController);
  pFVar16 = SOverlay::FArguments::operator+(pFVar16,pFVar18);
  FLLMScope::FLLMScope(&local_18cc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_17a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1798,&local_17a0,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_15e0,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xd3,&local_18d7);
  FMemScope::~FMemScope(&local_1798);
  FLLMScope::~FLLMScope(&local_18cc);
  pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15e0,&local_1660,pFVar16);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1890 = pTVar19->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1888.ReferenceController = pTVar3;
  if ((SOverlay **)&pFVar12->field_0x8 != &local_1890) {
    *(SOverlay **)&pFVar12->field_0x8 = local_1890;
    local_1890 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_1888);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1888.ReferenceController);
  pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar12);
  pFVar20 = SHorizontalBox::Slot((FSlotArguments *)local_12c0);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1570);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar20->field_0x58,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540);
  if ((void *)local_1540._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1540._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1540);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1560);
  if ((void *)local_1560._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1560._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1560);
  puVar15 = &pFVar20->field_0x48;
  if (local_16f0 != (undefined4 *)puVar15) {
    *(undefined4 *)puVar15 = 0;
    pFVar20->field_0x4c = 1;
  }
  pFVar12 = (FSlotArguments *)0x0;
  if (puVar15 != (undefined1 *)0x0) {
    pFVar12 = pFVar20;
  }
  if (local_16e8 != (undefined4 *)&pFVar12->field_0x50) {
    *(undefined4 *)&pFVar12->field_0x50 = 2;
    pFVar12->field_0x54 = 1;
  }
  pFVar20 = (FSlotArguments *)0x0;
  if (pFVar12 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar20 = pFVar12;
  }
  pFVar20 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar20->field_0x18,fVar7,0.0,0.0,0.0);
  if (((this->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  local_17f0.Object = (this->Label).Object;
  local_17f0.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  if (local_17f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_17f0.Object == (SAudioTextBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  FVar8.ReferenceController = local_17f0.SharedReferenceCount.ReferenceController;
  local_1878.ReferenceController = local_17f0.SharedReferenceCount.ReferenceController;
  local_1880 = local_17f0.Object;
  if (local_17f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_17f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioTextBox **)&pFVar20->field_0x8 != &local_1880) {
    *(SAudioTextBox **)&pFVar20->field_0x8 = local_17f0.Object;
    local_1880 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_1878);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1878.ReferenceController);
  pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar20);
  FLLMScope::FLLMScope(&local_18c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1790 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1788,&local_1790,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_15f8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xce,&local_18d6);
  FMemScope::~FMemScope(&local_1788);
  FLLMScope::~FLLMScope(&local_18c8);
  pTVar22 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15f8,&local_1670,pFVar14);
  pFVar20 = local_1780;
  pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_1870 = pTVar22->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1868.ReferenceController = pTVar4;
  if ((SHorizontalBox **)&local_1780->field_0x8 != &local_1870) {
    *(SHorizontalBox **)&local_1780->field_0x8 = local_1870;
    local_1870 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1780->field_0x10,&local_1868);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1868.ReferenceController);
  pFVar16 = SOverlay::FArguments::operator+(local_18b0,(FSlotArguments *)pFVar20);
  FLLMScope::FLLMScope(&local_18c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1728 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1778,&local_1728,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1610,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xc9,&local_18d5);
  FMemScope::~FMemScope(&local_1778);
  FLLMScope::~FLLMScope(&local_18c4);
  pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1610,&local_1680,pFVar16);
  pTVar5 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1860 = pTVar19->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1858.ReferenceController = pTVar5;
  if ((SOverlay **)&local_1898->_padding_ != &local_1860) {
    local_1898->_padding_ = (longlong)local_1860;
    local_1860 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1898->_padding_,&local_1858);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1858.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1680.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1610._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1670.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_17f0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1268);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1290);
  if ((void *)local_1290._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1290._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_12b0);
  if (local_12c0[0] != (undefined8 *)0x0) {
    (**(code **)*local_12c0[0])(local_12c0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1660.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1528 + 0x30));
  if (local_14f0 != (void *)0x0) {
    FMemory::Free(local_14f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1528 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1528._16_8_);
  if ((undefined8 *)local_1528._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1528._0_8_)(local_1528._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_de0._Slots.AllocatorInstance.Data,local_de0._Slots.ArrayNum);
  if ((FSlotArguments *)local_de0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_de0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_de0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1180);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a8);
  if ((void *)local_11a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11c8);
  if (local_11d8[0] != (undefined8 *)0x0) {
    (**(code **)*local_11d8[0])(local_11d8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_bd8._Slots.AllocatorInstance.Data,local_bd8._Slots.ArrayNum);
  if ((FSlotArguments *)local_bd8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_bd8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_bd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_14c8 + 0x30));
  if (local_1490 != (void *)0x0) {
    FMemory::Free(local_1490);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_14c8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14c8._16_8_);
  if ((undefined8 *)local_14c8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_14c8._0_8_)(local_14c8._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_9d0._Slots.AllocatorInstance.Data,local_9d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_9d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_9d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9d0);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_108);
  if (((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  local_18b0 = (FArguments *)
               SWidgetSwitcher::AddSlot((this->LayoutWidgetSwitcher).Object,&local_1a8,1);
  local_1898 = SOverlay::FArguments::FArguments(&local_3b8);
  pFVar23 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1408,0);
  plVar13 = (longlong *)&pFVar23->field_0x48;
  if ((longlong *)local_16e0 != plVar13) {
    *(undefined4 *)plVar13 = 2;
    pFVar23->field_0x4c = 1;
  }
  pFVar33 = (FSlotArguments *)0x0;
  pFVar26 = pFVar33;
  if (plVar13 != (longlong *)0x0) {
    pFVar26 = pFVar23;
  }
  if (local_16d8 != (undefined4 *)&pFVar26->field_0x50) {
    *(undefined4 *)&pFVar26->field_0x50 = 0;
    pFVar26->field_0x54 = 1;
  }
  pFVar23 = pFVar33;
  if (pFVar26 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar23 = pFVar26;
  }
  pFVar24 = SVerticalBox::FArguments::FArguments(&local_5c0);
  pFVar25 = ::operator_new(0x58);
  local_1770 = pFVar33;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_1770 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar25);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_ec8,(FSlot *)&local_1770);
  pFVar26 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_ec8 + 0x18),0.0,0.0,0.0,fVar7);
  pFVar26 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar26);
  puVar15 = &pFVar26->field_0x48;
  if (local_16d0 != (undefined4 *)puVar15) {
    *(undefined4 *)puVar15 = 2;
    pFVar26->field_0x4c = 1;
  }
  pFVar32 = pFVar33;
  if (puVar15 != (undefined1 *)0x0) {
    pFVar32 = pFVar26;
  }
  if (local_16c8 != (undefined4 *)&pFVar32->field_0x50) {
    *(undefined4 *)&pFVar32->field_0x50 = 2;
    pFVar32->field_0x54 = 1;
  }
  pFVar26 = pFVar33;
  if (pFVar32 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar26 = pFVar32;
  }
  if (((this->Label).Object == (SAudioTextBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  local_17e0.Object = (this->Label).Object;
  local_17e0.SharedReferenceCount.ReferenceController =
       (this->Label).SharedReferenceCount.ReferenceController;
  if (local_17e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_17e0.Object == (SAudioTextBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidgetSwitcher,1> *)(*pcVar6)();
    return pTVar11;
  }
  FVar8.ReferenceController = local_17e0.SharedReferenceCount.ReferenceController;
  local_1848.ReferenceController = local_17e0.SharedReferenceCount.ReferenceController;
  local_1850 = local_17e0.Object;
  if (local_17e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_17e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SAudioTextBox **)&pFVar26->field_0x8 != &local_1850) {
    *(SAudioTextBox **)&pFVar26->field_0x8 = local_17e0.Object;
    local_1850 = (SAudioTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,&local_1848);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1848.ReferenceController);
  pFVar24 = SVerticalBox::FArguments::operator+(pFVar24,pFVar26);
  pFVar25 = ::operator_new(0x58);
  local_1768 = pFVar33;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_1768 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar25);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_13a8,(FSlot *)&local_1768);
  local_1360 = 2;
  local_135c = 1;
  local_1358 = 0;
  local_1354 = 1;
  pFVar16 = SOverlay::FArguments::FArguments(&local_7c8);
  pFVar26 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1468,0);
  puVar15 = &pFVar26->field_0x48;
  if (local_17c0 != (undefined4 *)puVar15) {
    *(undefined4 *)puVar15 = 2;
    pFVar26->field_0x4c = 1;
  }
  pFVar32 = pFVar33;
  if (puVar15 != (undefined1 *)0x0) {
    pFVar32 = pFVar26;
  }
  if (local_17b8 != (undefined4 *)&pFVar32->field_0x50) {
    *(undefined4 *)&pFVar32->field_0x50 = 0;
    pFVar32->field_0x54 = 1;
  }
  if (pFVar32 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar33 = pFVar32;
  }
  pFVar18 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar33->field_0x18,0.0,fVar7);
  pTVar27 = TSharedPtr<SAudioMaterialSlider,1>::ToSharedRef(&this->Slider,&local_1620);
  pTVar2 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_1840 = pTVar27->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1838.ReferenceController = pTVar2;
  if ((SAudioMaterialSlider **)&pFVar18->_padding_ != &local_1840) {
    pFVar18->_padding_ = (longlong)local_1840;
    local_1840 = (SAudioMaterialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_1838);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1838.ReferenceController);
  pFVar16 = SOverlay::FArguments::operator+(pFVar16,pFVar18);
  FLLMScope::FLLMScope(&local_18c0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1760 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1758,&local_1760,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1598,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xfe,&local_18d4);
  FMemScope::~FMemScope(&local_1758);
  FLLMScope::~FLLMScope(&local_18c0);
  pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1598,&local_1630,pFVar16);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_13a8._8_8_ = pTVar19->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_17d0 = 0;
  local_17c8.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_13a8 + 0x10),&local_17c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17c8.ReferenceController);
  pFVar24 = SVerticalBox::FArguments::operator+(pFVar24,(FSlotArguments *)local_13a8);
  FLLMScope::FLLMScope(&local_18bc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1750 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1748,&local_1750,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_15b0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xf0,&local_18d3);
  FMemScope::~FMemScope(&local_1748);
  FLLMScope::~FLLMScope(&local_18bc);
  pTVar28 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15b0,&local_1640,pFVar24);
  pTVar4 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_1830 = pTVar28->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1828.ReferenceController = pTVar4;
  if ((SVerticalBox **)&pFVar23->field_0x8 != &local_1830) {
    *(SVerticalBox **)&pFVar23->field_0x8 = local_1830;
    local_1830 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->field_0x10,&local_1828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1828.ReferenceController);
  pFVar16 = SOverlay::FArguments::operator+(local_1898,(FSlotArguments *)pFVar23);
  FLLMScope::FLLMScope(local_18b8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1740 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1738,&local_1740,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_15c8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\SAudioMaterialLabeledSlider.cpp"
             ,0xeb,local_18d2);
  FMemScope::~FMemScope(&local_1738);
  FLLMScope::~FLLMScope(local_18b8);
  pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_15c8,&local_1650,pFVar16);
  pTVar5 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1820 = pTVar19->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1818.ReferenceController = pTVar5;
  if ((SOverlay **)&local_18b0->_padding_ != &local_1820) {
    local_18b0->_padding_ = (longlong)local_1820;
    local_1820 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_18b0->_padding_,&local_1818);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1818.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1650.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1640.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1630.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1620.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1468 + 0x30));
  if (local_1430 != (void *)0x0) {
    FMemory::Free(local_1430);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1468 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1468._16_8_);
  if ((undefined8 *)local_1468._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1468._0_8_)(local_1468._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_7c8._Slots.AllocatorInstance.Data,local_7c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_7c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_7c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7c8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_13a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&local_17e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_ec8);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_5c0._Slots.AllocatorInstance.Data,local_5c0._Slots.ArrayNum);
  if ((FSlotArguments *)local_5c0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5c0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1408 + 0x30));
  if (local_13d0 != (void *)0x0) {
    FMemory::Free(local_13d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1408 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1408._16_8_);
  if ((undefined8 *)local_1408._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1408._0_8_)(local_1408._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_3b8._Slots.AllocatorInstance.Data,local_3b8._Slots.ArrayNum);
  if ((FSlotArguments *)local_3b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3b8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3b8);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_1a8);
  pSVar29 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->LayoutWidgetSwitcher);
  pEVar30 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  SWidgetSwitcher::SetActiveWidgetIndex(pSVar29,*pEVar30);
  pEVar30 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  local_1810[4] = true;
  EVar1 = *pEVar30;
  local_17f8 = 0;
  local_1808.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1800.Data = (FScriptContainerElement *)0x0;
  local_1810._0_4_ = EVar1;
  SetWidgetAttribute<enum_EOrientation,enum_EOrientation>
            ((SWidget *)this,&this->Orientation,(TAttribute<EOrientation> *)local_1810,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1808,(FWriteAccessScope *)&local_16a8);
  if (((int)local_17f8 != 0) && (FStack_1800.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1800.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1800,0,0,0x10);
    local_17f8 = local_17f8 & 0xffffffff00000000;
  }
  if (local_16a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_16a8.Accessor,&local_16a8);
  }
  if (FStack_1800.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1800.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1808.AccessDetector);
  pSVar31 = TSharedPtr<SAudioMaterialSlider,1>::operator->(&this->Slider);
  if (pSVar31->Orientation != EVar1) {
    pSVar31->Orientation = EVar1;
    SWidget::Invalidate((SWidget *)pSVar31,Layout);
  }
  pSVar29 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->LayoutWidgetSwitcher);
  pEVar30 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  SWidgetSwitcher::SetActiveWidgetIndex(pSVar29,*pEVar30);
  TSharedPtr<SWidgetSwitcher,1>::ToSharedRef(&this->LayoutWidgetSwitcher,local_1730);
  return local_1730;
}

// GetOutputValue @ 14d9324d0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledSlider::GetOutputValue(SAudioMaterialLabeledSlider *this,float param_1)

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

// GetOutputValueForText @ 14d932a80

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledSlider::GetOutputValueForText(SAudioMaterialLabeledSlider *this,float param_1)

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

// GetSliderValue @ 14d935e50

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledSlider::GetSliderValue(SAudioMaterialLabeledSlider *this,float param_1)

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

// GetSliderValueForText @ 14d9363d0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SAudioMaterialLabeledSlider::GetSliderValueForText(SAudioMaterialLabeledSlider *this,float param_1)

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

// SetDesiredSizeOverride @ 14d968a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetDesiredSizeOverride
          (SAudioMaterialLabeledSlider *this,TVector2<double> *param_1)

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

// SetLabelBackgroundColor @ 14d969840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetLabelBackgroundColor
          (SAudioMaterialLabeledSlider *this,FSlateColor *param_1)

{
  SAudioTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
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
  this_00 = (this->Label).Object;
  if (param_1->ColorUseRule == UseColor_ColorTable) {
    pFVar3 = FSlateColor::GetColorFromTable(param_1);
    local_48._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_48._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_48._s_0.B = (pFVar3->field0_0x0)._s_0.B;
    local_48._s_0.A = (pFVar3->field0_0x0)._s_0.A;
  }
  else {
    local_48._s_0.R = (param_1->SpecifiedColor).field0_0x0._s_0.R;
    local_48._s_0.G = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    local_48._s_0.B = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    local_48._s_0.A = (param_1->SpecifiedColor).field0_0x0._s_0.A;
  }
  local_18 = local_18 & 0xffffff00;
  local_38 = local_18;
  SAudioTextBox::SetLabelBackgroundColor(this_00,(FSlateColor *)&local_48._s_0);
  return;
}

// SetOrientation @ 14d96ab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetOrientation(SAudioMaterialLabeledSlider *this,EOrientation param_1)

{
  SAudioMaterialSlider *this_00;
  SWidgetSwitcher *this_01;
  code *pcVar1;
  bool bVar2;
  EOrientation *pEVar3;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_18 = 0;
  local_30[4] = true;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = param_1;
  SetWidgetAttribute<enum_EOrientation,enum_EOrientation>
            ((SWidget *)this,&this->Orientation,(TAttribute<EOrientation> *)local_30,Layout);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if ((this->Slider).Object == (SAudioMaterialSlider *)0x0) {
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
  this_00 = (this->Slider).Object;
  if (this_00->Orientation != param_1) {
    this_00->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
  }
  if ((this->LayoutWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
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
  this_01 = (this->LayoutWidgetSwitcher).Object;
  pEVar3 = TAttribute<enum_EOrientation>::Get(&this->Orientation);
  SWidgetSwitcher::SetActiveWidgetIndex(this_01,*pEVar3);
  return;
}

// SetOutputRange @ 14d96b3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetOutputRange
          (SAudioMaterialLabeledSlider *this,TVector2<double> *param_1)

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
  pfVar8 = TAttribute<float>::Get(&this->SliderValueAttribute);
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

// SetShowLabelOnlyOnHover @ 14d96c3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetShowLabelOnlyOnHover(SAudioMaterialLabeledSlider *this,bool param_1)

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
  SAudioTextBox::SetShowLabelOnlyOnHover((this->Label).Object,param_1);
  return;
}

// SetShowUnitsText @ 14d96c6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetShowUnitsText(SAudioMaterialLabeledSlider *this,bool param_1)

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

// SetSliderValue @ 14d96d670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetSliderValue(SAudioMaterialLabeledSlider *this,float param_1)

{
  SAudioMaterialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  FDestructionSentinel local_68;
  float local_50;
  undefined1 local_4c;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SliderValueAttribute).Getter);
  (this->SliderValueAttribute).Value = param_1;
  (this->SliderValueAttribute).bIsSet = true;
  fVar4 = (float)(**(code **)(this->_padding_ + 0x298))(this,param_1);
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
  if ((this->Slider).Object == (SAudioMaterialSlider *)0x0) {
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
  pSVar1 = (this->Slider).Object;
  local_4c = 1;
  local_38 = 0;
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  (pSVar1->ValueAttribute).Value = param_1;
  (pSVar1->ValueAttribute).bIsSet = true;
  local_50 = param_1;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->ValueAttribute).Getter,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

// SetUnitsText @ 14d96e440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetUnitsText(SAudioMaterialLabeledSlider *this,FText *param_1)

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

// SetUnitsTextReadOnly @ 14d96e940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetUnitsTextReadOnly(SAudioMaterialLabeledSlider *this,bool param_1)

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

// SetValueTextReadOnly @ 14d96f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioMaterialLabeledSlider::SetValueTextReadOnly(SAudioMaterialLabeledSlider *this,bool param_1)

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
  SAudioTextBox::SetValueTextReadOnly((this->Label).Object,param_1);
  return;
}

