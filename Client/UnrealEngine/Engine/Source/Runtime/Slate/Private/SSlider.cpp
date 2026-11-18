// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 42

// SSlider @ 1428baa40

SSlider * __thiscall SSlider::SSlider(SSlider *this)

{
  byte *pbVar1;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  code *pcVar4;
  double _X;
  bool bVar5;
  int iVar6;
  SSlider *pSVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [3];
  undefined8 local_44;
  uint local_2c;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  _X = __real_3ff0000000000000;
  this->_padding_ = (longlong)&___7SSlider__6B_;
  this->Style = (FSliderStyle *)0x0;
  this_00 = &this->ValueSlateAttribute;
  local_44 = 0;
  this->PressedScreenSpaceTouchDownPosition = (FDeprecateSlateVector2D)0x0;
  (this->StepSize).Value = 0.0;
  (this->StepSize).bIsSet = false;
  *(undefined8 *)&(this->StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->StepSize).Getter = 0;
  *(undefined8 *)&(this->StepSize).Getter.field_0x8 = 0;
  this->bPreventThrottling = false;
  *(undefined4 *)&this_00->field_0x0 = 0x3f800000;
  iVar6 = _finite(_X);
  if (iVar6 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  pSVar7 = this + 1;
  if ((this_00 < this) || (pSVar7 <= this_00)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SSlider *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar5) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SSlider,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  pTVar2 = &this->IndentHandleSlateAttribute;
  *pTVar2 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1;
  if ((pTVar2 < this) || (pSVar7 <= pTVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SSlider *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar5) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SSlider,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  pTVar2 = &this->LockedSlateAttribute;
  *pTVar2 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  if ((pTVar2 < this) || (pSVar7 <= pTVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SSlider *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar5) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SSlider,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  pTVar3 = &this->SliderBarColorSlateAttribute;
  local_2c = local_2c & 0xffffff00;
  *(FLinearColor_u_0 *)pTVar3 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(uint *)&(this->SliderBarColorSlateAttribute).field_0x10 = local_2c;
  if ((pTVar3 < this) || (pSVar7 <= pTVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SSlider *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar3,(SWidget *)this);
  if (!bVar5) {
    local_48 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SSlider,void>'::__l2::<lambda_1>::operator()(&local_48);
  }
  pTVar3 = &this->SliderHandleColorSlateAttribute;
  local_2c = local_2c & 0xffffff00;
  *(FLinearColor_u_0 *)pTVar3 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(uint *)&(this->SliderHandleColorSlateAttribute).field_0x10 = local_2c;
  if ((pTVar3 < this) || (pSVar7 <= pTVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SSlider *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar3,(SWidget *)this);
  if (!bVar5) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SSlider,void>'::__l2::<lambda_1>::operator()(local_47);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~SSlider @ 1428c1ab0

void __thiscall SSlider::~SSlider(SSlider *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SSlider__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  pvVar1 = *(void **)&(this->StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StepSize).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// CommitValue @ 1428dfab0

void __thiscall SSlider::CommitValue(SSlider *this,float param_1)

{
  longlong *plVar1;
  bool bVar2;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  if (param_1 != (float)this->ValueSlateAttribute) {
    bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsBound
                      ((FSlateAttributeImpl *)&this->ValueSlateAttribute,(SWidget *)this,Member);
    if (!bVar2) {
      local_28 = 0;
      local_40[4] = true;
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = param_1;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this->ValueSlateAttribute,(SWidget *)this,(TAttribute<float> *)local_40,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_58);
      if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        local_28 = local_28 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    }
    SWidget::Invalidate((SWidget *)this,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               (FReadAccessScope *)&local_58);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
  }
  return;
}

// ComputeDesiredSize @ 1428e1a80

TVector2<double> * __thiscall
SSlider::ComputeDesiredSize(SSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FSliderStyle *pFVar2;
  TVector2<double>_u_0 TVar3;
  float fVar4;
  
  pFVar2 = this->Style;
  if (pFVar2 == (FSliderStyle *)0x0) {
    TVar3._s_0.Y = SSliderDesiredSize.field0_0x0._s_0.Y;
    TVar3._s_0.X = SSliderDesiredSize.field0_0x0._s_0.X;
    __return_storage_ptr__->field0_0x0 = TVar3;
    return __return_storage_ptr__;
  }
  fVar4 = *(float *)&(pFVar2->HoveredThumbImage).ImageSize.field_0x4;
  fVar1 = *(float *)&(pFVar2->NormalThumbImage).ImageSize.field_0x4;
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  if (fVar4 <= pFVar2->BarThickness) {
    fVar4 = pFVar2->BarThickness;
  }
  if (this->Orientation == Orient_Vertical) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = SSliderDesiredSize.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar4;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = SSliderDesiredSize.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  return __return_storage_ptr__;
}

// Construct @ 142906480

void __thiscall SSlider::Construct(SSlider *this,FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  FReadAccessScope local_28;
  
  if (param_1->_Style == (FSliderStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDeclaration._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSlider.cpp"
                       ,0x2a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Style = param_1->_Style;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IndentHandleSlateAttribute,(SWidget *)this,&param_1->_IndentHandle,None);
  this->bMouseUsesStep = param_1->_MouseUsesStep;
  this->bRequiresControllerLock = param_1->_RequiresControllerLock;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->LockedSlateAttribute,(SWidget *)this,&param_1->_Locked,None);
  this->Orientation = param_1->_Orientation;
  (this->StepSize).Value = (param_1->_StepSize).Value;
  (this->StepSize).bIsSet = (param_1->_StepSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->StepSize).Getter,&(param_1->_StepSize).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Value).Getter,
             &local_28);
  if ((*(int *)&(param_1->_Value).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->_Value).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar1 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::AssignBinding((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                       *)&this->ValueSlateAttribute,(SWidget *)this,&(param_1->_Value).Getter,None);
      goto LAB_1429065f2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if ((param_1->_Value).bIsSet == false) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)&this->ValueSlateAttribute,(SWidget *)this,Member);
  }
  else {
    pfVar5 = TAttribute<float>::Get(&param_1->_Value);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this->ValueSlateAttribute,(SWidget *)this,pfVar5);
  }
LAB_1429065f2:
  this->MinValue = param_1->_MinValue;
  this->MaxValue = param_1->_MaxValue;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SliderBarColorSlateAttribute,(SWidget *)this,&param_1->_SliderBarColor,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SliderHandleColorSlateAttribute,(SWidget *)this,&param_1->_SliderHandleColor,
           None);
  this->bIsFocusable = param_1->_IsFocusable;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnControllerCaptureBegin,&param_1->_OnControllerCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnControllerCaptureEnd,&param_1->_OnControllerCaptureEnd);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  this->bPreventThrottling = param_1->_PreventThrottling;
  this->bControllerInputCaptured = false;
  return;
}

// CreateAccessibleWidget @ 142911bc0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SSlider::CreateAccessibleWidget
          (SSlider *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Slider);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleSlider::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleSlider::_vftable__for__IAccessibleProperty__
      ;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Slider);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleSlider::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleSlider::_vftable__for__IAccessibleProperty__
      ;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// GetBarImage @ 14293bd70

FSlateBrush * __thiscall SSlider::GetBarImage(SSlider *this)

{
  FSlateBrush *pFVar1;
  
  if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') &&
     (this->LockedSlateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pFVar1 = &this->Style->NormalBarImage;
    if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
      pFVar1 = &this->Style->HoveredBarImage;
    }
    return pFVar1;
  }
  return &this->Style->DisabledBarImage;
}

// GetNormalizedValue @ 1429432f0

float __thiscall SSlider::GetNormalizedValue(SSlider *this)

{
  float fVar1;
  
  fVar1 = this->MinValue;
  if (this->MaxValue == fVar1) {
    return __real_3f800000;
  }
  return ((float)this->ValueSlateAttribute - fVar1) / (this->MaxValue - fVar1);
}

// GetPrivateWidgetClass @ 142947380

FSlateWidgetClassData * __cdecl SSlider::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SSlider");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SSlider::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetStepSize @ 142949a10

float __thiscall SSlider::GetStepSize(SSlider *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->StepSize);
  return *pfVar1;
}

// GetThumbImage @ 14294a030

FSlateBrush * __thiscall SSlider::GetThumbImage(SSlider *this)

{
  FSlateBrush *pFVar1;
  
  if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') &&
     (this->LockedSlateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pFVar1 = &this->Style->NormalThumbImage;
    if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
      pFVar1 = &this->Style->HoveredThumbImage;
    }
    return pFVar1;
  }
  return &this->Style->DisabledThumbImage;
}

// GetValue @ 14294b3a0

float __thiscall SSlider::GetValue(SSlider *this)

{
  return (float)this->ValueSlateAttribute;
}

// GetWidgetClass @ 14294c600

FSlateWidgetClassData * __thiscall SSlider::GetWidgetClass(SSlider *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SSlider");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SSlider::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// IsInteractable @ 142954500

bool __thiscall SSlider::IsInteractable(SSlider *this)

{
  char cVar1;
  
  if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') &&
     (this->LockedSlateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    cVar1 = (**(code **)(this->_padding_ + 0x198))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsLocked @ 142954850

bool __thiscall SSlider::IsLocked(SSlider *this)

{
  return (bool)this->LockedSlateAttribute;
}

// OnFocusLost @ 142964b10

void __thiscall SSlider::OnFocusLost(SSlider *this,FFocusEvent *param_1)

{
  if (this->bControllerInputCaptured != false) {
    (**(code **)(this->_padding_ + 0x248))(this,this->ValueSlateAttribute);
    ResetControllerState(this);
    return;
  }
  return;
}

// OnKeyDown @ 142968c40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnKeyDown(SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                  FKeyEvent *param_2)

{
  char cVar1;
  FSlateApplication *pFVar2;
  FReply *pFVar3;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  cVar1 = (**(code **)(this->_padding_ + 0x1b0))(this);
  if (cVar1 != '\0') {
    pFVar2 = FSlateApplication::Get();
    cVar1 = (**(code **)(*(longlong *)pFVar2 + 0xb0))(pFVar2,param_2);
    if ((cVar1 == '\0') && (this->bRequiresControllerLock != false)) {
      if (this->bControllerInputCaptured == false) {
        this->bControllerInputCaptured = true;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnControllerCaptureBegin);
        FReply::FReply(&local_c8,true);
        pFVar3 = &local_c8;
      }
      else {
        ResetControllerState(this);
        FReply::FReply(&local_c8,true);
        pFVar3 = &local_c8;
      }
      goto LAB_142968d00;
    }
  }
  pFVar3 = SWidget::OnKeyDown((SWidget *)this,&local_c8,param_1,param_2);
LAB_142968d00:
  FReply::operator=(__return_storage_ptr__,pFVar3);
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnKeyUp @ 142969db0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnKeyUp(SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (this->bControllerInputCaptured != false) {
    FReply::FReply(&local_c8,true);
    FReply::operator=(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296ce70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnMouseButtonDown
          (SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  SWidget *pSVar5;
  bool bVar6;
  Type TVar7;
  Type *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FReply *pFVar10;
  float fVar11;
  FDeprecateSlateVector2D local_res20;
  FReadAccessScope local_1b8;
  FReply local_198;
  FReply local_d8;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar1 == EKeys::LeftMouseButton.KeyName) &&
     (this->LockedSlateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    pTVar8 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,&local_res20);
    if ((char)pTVar8[1] == None) {
      TVar7 = Default;
    }
    else {
      TVar7 = *pTVar8;
    }
    this->CachedCursor = TVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_1b8);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b8);
    pcVar4 = *(code **)(this->_padding_ + 0x248);
    local_res20 = param_2->ScreenSpacePosition;
    fVar11 = PositionToValue(this,param_1,(FDeprecateVector2DParameter *)&local_res20);
    (*pcVar4)(this,fVar11);
    ResetControllerState(this);
    FReply::FReply(&local_d8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_1b8);
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar9->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1b8.DestructionSentinel.Accessor);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1b8.DestructionSentinel.Accessor);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1b8.DestructionSentinel._0_8_ = pSVar5;
    local_1b8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
    pFVar10 = FReply::CaptureMouse(&local_d8,(TSharedRef<SWidget,1> *)&local_1b8);
    FReply::FReply(&local_198,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_d8);
    if (this->bPreventThrottling != false) {
      local_198._180_4_ = local_198._180_4_ | 0x40;
    }
    FReply::FReply(__return_storage_ptr__,&local_198);
    FReply::~FReply(&local_198);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296f8c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnMouseButtonUp
          (SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  uint local_res20;
  undefined1 local_res24;
  undefined1 local_118 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType FStack_100;
  ulonglong local_f8;
  FDestructionSentinel local_f0;
  FReply local_d8;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar4 == EKeys::LeftMouseButton.KeyName) {
    local_res20 = param_2->PointerIndex;
    local_res24 = 1;
    bVar6 = SWidget::HasMouseCaptureByUser
                      ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                       (TOptional<int>)&local_res20);
    if (bVar6) {
      bVar6 = true;
      goto LAB_14296f927;
    }
  }
  bVar6 = false;
LAB_14296f927:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar6) {
    local_118._0_4_ = this->CachedCursor;
    local_118[4] = true;
    local_f8 = 0;
    local_118[8] = true;
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_100.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_f0);
    if (((int)local_f8 != 0) && (FStack_100.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_100.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_100,0,0,0x10);
      local_f8 = local_f8 & 0xffffffff00000000;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (FStack_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_100.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
    ResetControllerState(this);
    FReply::FReply(&local_d8,true);
    FVar5.ReferenceController = local_d8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_d8.MouseCaptor.Object = (SWidget *)0x0;
    local_d8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_d8.bUseHighPrecisionMouse = 0;
    local_d8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 14296fcd0

void __thiscall SSlider::OnMouseCaptureLost(SSlider *this,FCaptureLostEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
             &local_28);
  if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnMouseCaptureLost((SWidget *)this,param_1);
  return;
}

// OnMouseMove @ 1429759d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnMouseMove
          (SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  FDeprecateSlateVector2D local_res20;
  FDestructionSentinel local_58;
  undefined1 local_40 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  local_res20._4_1_ = 1;
  local_res20._0_4_ = param_2->PointerIndex;
  bVar2 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res20);
  if ((bVar2) &&
     (this->LockedSlateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    local_40[4] = true;
    local_40[8] = true;
    local_40._0_4_ = (this->Orientation != Orient_Horizontal) + ResizeLeftRight;
    local_20 = 0;
    local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_28.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_30,(FWriteAccessScope *)&local_58);
    if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_28.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
      local_20 = local_20 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
    pcVar1 = *(code **)(this->_padding_ + 0x248);
    local_res20 = param_2->ScreenSpacePosition;
    fVar3 = PositionToValue(this,param_1,(FDeprecateVector2DParameter *)&local_res20);
    (*pcVar1)(this,fVar3);
    ResetControllerState(this);
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnNavigation @ 142978940

FNavigationReply * __thiscall
SSlider::OnNavigation
          (SSlider *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EUINavigation EVar3;
  TReferenceControllerBase<1> *pTVar4;
  float *pfVar5;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar6;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar7;
  undefined1 local_b8 [8];
  ForAnyElementType FStack_b0;
  ulonglong local_a8;
  EUINavigationRule local_a0;
  SWidget *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  SWidget *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  ulonglong local_68;
  EUINavigationRule local_60;
  FDestructionSentinel local_58 [2];
  
  if ((this->bControllerInputCaptured == false) && (this->bRequiresControllerLock != false))
  goto LAB_142978df7;
  TVar7 = this->ValueSlateAttribute;
  local_60 = Escape;
  EVar3 = param_2->NavigationType;
  local_68 = 0;
  local_98 = (SWidget *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  local_88 = (SWidget *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  if (this->Orientation == Orient_Horizontal) {
    if (EVar3 == Left) {
LAB_1429789db:
      pfVar5 = TAttribute<float>::Get(&this->StepSize);
      TVar7 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
              ((float)TVar7 - *pfVar5);
LAB_1429789eb:
      pTVar4 = pTStack_90;
      local_a8 = 0;
      local_a0 = Stop;
      local_98 = (SWidget *)0x0;
      local_b8 = (undefined1  [8])0x0;
      FStack_b0.Data = (FScriptContainerElement *)0x0;
      if ((pTStack_90 != (TReferenceControllerBase<1> *)0x0) &&
         (pTStack_90 = (TReferenceControllerBase<1> *)0x0,
         pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      pTVar4 = pTStack_80;
      local_88 = (SWidget *)0x0;
      if ((pTStack_80 != (TReferenceControllerBase<1> *)0x0) &&
         (pTStack_80 = (TReferenceControllerBase<1> *)0x0,
         pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
      local_60 = local_a0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                 (FWriteAccessScope *)local_58);
      goto joined_r0x000142978c11;
    }
    if (EVar3 == Right) {
      pfVar5 = TAttribute<float>::Get(&this->StepSize);
      TVar7 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
              ((float)TVar7 + *pfVar5);
      goto LAB_1429789eb;
    }
  }
  else {
    if (EVar3 == Down) goto LAB_1429789db;
    if (EVar3 != Up) goto LAB_142978c7b;
    pfVar5 = TAttribute<float>::Get(&this->StepSize);
    pTVar4 = pTStack_90;
    local_a0 = Stop;
    TVar7 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            ((float)TVar7 + *pfVar5);
    local_98 = (SWidget *)0x0;
    local_a8 = 0;
    local_b8 = (undefined1  [8])0x0;
    FStack_b0.Data = (FScriptContainerElement *)0x0;
    if ((pTStack_90 != (TReferenceControllerBase<1> *)0x0) &&
       (pTStack_90 = (TReferenceControllerBase<1> *)0x0,
       pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    pTVar4 = pTStack_80;
    local_88 = (SWidget *)0x0;
    if ((pTStack_80 != (TReferenceControllerBase<1> *)0x0) &&
       (pTStack_80 = (TReferenceControllerBase<1> *)0x0,
       pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
    local_60 = local_a0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)local_58);
joined_r0x000142978c11:
    if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    if (local_58[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
    }
    if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
LAB_142978c7b:
  if ((float)TVar7 != (float)this->ValueSlateAttribute) {
    TVar6 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            this->MaxValue;
    if ((float)TVar7 <= this->MaxValue) {
      TVar6 = TVar7;
    }
    if ((float)TVar6 <= this->MinValue) {
      TVar6 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
              this->MinValue;
    }
    (**(code **)(this->_padding_ + 0x248))(this,TVar6);
    (__return_storage_ptr__->EventHandler).Object = local_98;
    (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController = pTStack_90;
    (__return_storage_ptr__->FocusRecipient).Object = local_88;
    (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController = pTStack_80;
    pTStack_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (SWidget *)0x0;
    pTStack_80 = (TReferenceControllerBase<1> *)0x0;
    local_88 = (SWidget *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->FocusDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
    __return_storage_ptr__->BoundaryRule = local_60;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)local_58);
    if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
      local_68 = local_68 & 0xffffffff00000000;
    }
    if (local_58[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
    }
    if (FStack_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_70.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)local_58);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_58[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
LAB_142978df7:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPaint @ 142980060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSlider::OnPaint(SSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  char cVar1;
  ESlateColorStylingMode EVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<float>_u_0_s_0 TVar4;
  FSliderStyle *pFVar5;
  float fVar6;
  bool bVar7;
  FDeprecateSlateVector2D *pFVar8;
  FSlateColor *pFVar9;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar10;
  byte bVar11;
  ESlateDrawEffect EVar12;
  FSlateBrush *pFVar13;
  FSlateBrush *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_1c8 [32];
  undefined8 local_188;
  TTransform2<float> local_180;
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  TTransform2<float> local_148;
  TVector2<float>_u_0 local_130;
  float local_128;
  undefined8 local_124;
  FDeprecateVector2DParameter local_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  TVector2<float>_u_0 local_104;
  byte local_fc;
  FGeometry local_f8;
  ulonglong local_c0;
  
  fVar6 = __real_3f000000;
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar3 = param_2->Size;
  local_188._0_4_ = FVar3._0_4_;
  local_188._4_4_ = FVar3._4_4_;
  fVar16 = (float)local_188._4_4_;
  fVar22 = (float)(undefined4)local_188;
  if (this->Orientation == Orient_Horizontal) {
    fVar16 = (float)(undefined4)local_188;
    fVar22 = (float)local_188._4_4_;
    FVar3 = (FDeprecateSlateVector2D)local_168;
  }
  local_168 = (TVector2<float>_u_0)FVar3;
  if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') ||
     (this->LockedSlateAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pFVar8 = &(this->Style->DisabledThumbImage).ImageSize;
  }
  else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pFVar8 = &(this->Style->NormalThumbImage).ImageSize;
  }
  else {
    pFVar8 = &(this->Style->HoveredThumbImage).ImageSize;
  }
  local_180.M.M[0][0] = SUB84(*pFVar8,0);
  local_180.M.M[0][1] = SUB84(*pFVar8,4);
  fVar18 = local_180.M.M[0][0] * __real_3f000000;
  fVar21 = local_180.M.M[0][0];
  if (this->IndentHandleSlateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    fVar21 = 0.0;
  }
  fVar17 = this->MinValue;
  fVar15 = __real_3f800000;
  if (this->MaxValue != fVar17) {
    fVar15 = ((float)this->ValueSlateAttribute - fVar17) / (this->MaxValue - fVar17);
  }
  if (__real_3f800000 <= fVar15) {
    fVar15 = __real_3f800000;
  }
  fVar17 = fVar22 * __real_3f000000;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar23 = fVar17 - local_180.M.M[0][1] * __real_3f000000;
  uVar19 = *(undefined8 *)&(param_2->AbsolutePosition).field0_0x0._s_0.Y;
  local_f8._24_8_ = *(undefined8 *)((longlong)&(param_2->Position).field0_0x0 + 4);
  local_f8.Size = param_2->Size;
  fVar21 = (fVar16 - (local_180.M.M[0][0] + fVar21)) * fVar15 + fVar21 * __real_3f000000;
  local_f8.Scale = (float)*(undefined8 *)&param_2->Scale;
  local_f8.AbsolutePosition.field0_0x0._s_0.X =
       (float)((ulonglong)*(undefined8 *)&param_2->Scale >> 0x20);
  local_f8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
  local_f8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
  local_f8.AbsolutePosition.field0_0x0._s_0.Y = (float)uVar19;
  local_f8.Position.field0_0x0._s_0.X = (float)((ulonglong)uVar19 >> 0x20);
  local_f8._48_8_ =
       *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  if (this->Orientation == Orient_Vertical) {
    local_160._0_4_ = 1.0;
    local_160._4_4_ = 0.0;
    local_160._8_4_ = 0.0;
    local_148.M.M[0] = ___xmm_b33bbd2e3f800000bf800000b33bbd2e;
    local_148.M.M[1] = _UNK_150971c68;
    local_148.Trans.field0_0x0._s_0.Y = fVar16;
    local_148.Trans.field0_0x0._s_0.X = fVar16 * ___real_333bbd2e;
    local_180.M.M[0][0] = param_2->Scale;
    local_188 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_168._4_4_ = fVar22;
    local_168._0_4_ = fVar16;
    TVar4 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_180.M.M[0][1] = TVar4.X;
    local_180.M.M[1][0] = TVar4.Y;
    FGeometry::FGeometry
              ((FGeometry *)&local_130._s_0,(FDeprecateVector2DParameter *)&local_168,
               (FSlateLayoutTransform *)local_160,&local_148,
               (FDeprecateVector2DParameter *)&local_188,(FSlateLayoutTransform *)&local_180,
               &param_2->AccumulatedRenderTransform);
    FGeometry::operator=(&local_f8,(FGeometry *)&local_130._s_0);
  }
  if ((!param_7) || (bVar7 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar7 = false;
  }
  pFVar5 = this->Style;
  EVar12 = DisabledEffect;
  if (bVar7) {
    EVar12 = None;
  }
  cVar1 = *(char *)((longlong)&this->_padding_ + 2);
  local_188._4_4_ = pFVar5->BarThickness;
  local_188._0_4_ = (fVar16 - fVar18) - fVar18;
  local_180.M.M[0][1] = fVar17 - pFVar5->BarThickness * fVar6;
  if ((cVar1 == '\0') ||
     (this->LockedSlateAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pFVar13 = &pFVar5->DisabledBarImage;
    if ((cVar1 == '\0') ||
       (this->LockedSlateAttribute !=
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
      pFVar14 = &pFVar5->DisabledThumbImage;
      goto LAB_142980391;
    }
    if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
      pFVar14 = &pFVar5->HoveredThumbImage;
      goto LAB_142980391;
    }
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
      pFVar13 = &pFVar5->HoveredBarImage;
      pFVar14 = &pFVar5->HoveredThumbImage;
      goto LAB_142980391;
    }
    pFVar13 = &pFVar5->NormalBarImage;
  }
  pFVar14 = &pFVar5->NormalThumbImage;
LAB_142980391:
  EVar2 = (pFVar13->TintColor).ColorUseRule;
  pFVar9 = &pFVar13->TintColor;
  local_180.M.M[0][0] = fVar18;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar6 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
  fVar16 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
  fVar22 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
  fVar18 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
  pTVar10 = &this->SliderBarColorSlateAttribute;
  cVar1 = (this->SliderBarColorSlateAttribute).field_0x10;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      pTVar10 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                FSlateColor::GetColorFromTable((FSlateColor *)pTVar10);
    }
    else if ((cVar1 == '\x02') || (cVar1 != '\x03')) {
      pTVar10 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                &param_6->ForegroundColor;
    }
    else {
      pTVar10 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                &param_6->SubduedForeground;
    }
  }
  fVar17 = local_f8.Scale;
  uVar20 = _UNK_15076b188;
  uVar19 = ___xmm_3f80000000000000000000003f800000;
  bVar11 = local_f8.bHasRenderTransform;
  local_150._4_4_ = local_180.M.M[0][1];
  local_150._0_4_ = local_180.M.M[0][0];
  local_148.M.M[0][1] =
       fVar16 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_148.M.M[0][0] =
       fVar6 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_148.M.M[1][1] =
       fVar18 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_148.M.M[1][0] =
       fVar22 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_160._0_4_ = (undefined4)___xmm_3f80000000000000000000003f800000;
  local_160._4_4_ = (undefined4)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_160._8_4_ = (undefined4)_UNK_15076b188;
  local_160._12_4_ = (undefined4)((ulonglong)_UNK_15076b188 >> 0x20);
  local_168._4_4_ =
       local_180.M.M[0][1] * local_f8.Scale + local_f8.AbsolutePosition.field0_0x0._s_0.Y;
  local_168._0_4_ =
       local_180.M.M[0][0] * local_f8.Scale + local_f8.AbsolutePosition.field0_0x0._s_0.X;
  Concatenate<TTransform2<float>_>
            (&local_180,(TTransform2<float> *)local_160,&local_f8.AccumulatedRenderTransform);
  local_114 = CONCAT44(local_180.M.M[0][1],local_180.M.M[0][0]);
  uStack_10c = CONCAT44(local_180.M.M[1][1],local_180.M.M[1][0]);
  local_130 = local_168;
  local_11c = (FDeprecateVector2DParameter)local_188;
  local_128 = fVar17;
  local_fc = local_fc & 0xfc | bVar11 * '\x02';
  local_124 = 0;
  local_104 = local_180.Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_130._s_0,pFVar13,EVar12,
             (FLinearColor *)&local_148);
  EVar2 = (pFVar14->TintColor).ColorUseRule;
  pFVar9 = &pFVar14->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
      uVar19 = ___xmm_3f80000000000000000000003f800000;
      uVar20 = _UNK_15076b188;
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar6 = (pFVar9->SpecifiedColor).field0_0x0._s_0.R;
  fVar16 = (pFVar9->SpecifiedColor).field0_0x0._s_0.G;
  fVar22 = (pFVar9->SpecifiedColor).field0_0x0._s_0.B;
  fVar18 = (pFVar9->SpecifiedColor).field0_0x0._s_0.A;
  pTVar10 = &this->SliderHandleColorSlateAttribute;
  cVar1 = (this->SliderHandleColorSlateAttribute).field_0x10;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      pTVar10 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                FSlateColor::GetColorFromTable((FSlateColor *)pTVar10);
      uVar19 = ___xmm_3f80000000000000000000003f800000;
      uVar20 = _UNK_15076b188;
    }
    else if ((cVar1 == '\x02') || (cVar1 != '\x03')) {
      pTVar10 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                &param_6->ForegroundColor;
    }
    else {
      pTVar10 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                &param_6->SubduedForeground;
    }
  }
  fVar17 = local_f8.Scale;
  local_148.M.M[1][1] =
       fVar18 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_148.M.M[1][0] =
       fVar22 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_148.M.M[0][1] =
       fVar16 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_148.M.M[0][0] =
       fVar6 * (((FLinearColor_u_0 *)&pTVar10->field_0x0)->_s_0).R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') ||
     (this->LockedSlateAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pFVar8 = &(this->Style->DisabledThumbImage).ImageSize;
  }
  else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pFVar8 = &(this->Style->NormalThumbImage).ImageSize;
  }
  else {
    pFVar8 = &(this->Style->HoveredThumbImage).ImageSize;
  }
  FVar3 = *pFVar8;
  bVar11 = local_f8.bHasRenderTransform;
  local_150._4_4_ = fVar23;
  local_150._0_4_ = fVar21;
  local_160._0_4_ = (undefined4)uVar19;
  local_160._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
  local_160._8_4_ = (undefined4)uVar20;
  local_160._12_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_188._4_4_ = local_f8.Scale * fVar23 + local_f8.AbsolutePosition.field0_0x0._s_0.Y;
  local_188._0_4_ = local_f8.Scale * fVar21 + local_f8.AbsolutePosition.field0_0x0._s_0.X;
  Concatenate<TTransform2<float>_>
            (&local_180,(TTransform2<float> *)local_160,&local_f8.AccumulatedRenderTransform);
  local_114 = CONCAT44(local_180.M.M[0][1],local_180.M.M[0][0]);
  uStack_10c = CONCAT44(local_180.M.M[1][1],local_180.M.M[1][0]);
  local_130 = local_188;
  local_fc = local_fc & 0xfc | bVar11 * '\x02';
  local_128 = fVar17;
  local_124 = 0;
  local_104 = local_180.Trans.field0_0x0;
  local_11c = (FDeprecateVector2DParameter)FVar3;
  FSlateDrawElement::MakeBox
            (param_4,param_5 + 1,(FPaintGeometry *)&local_130._s_0,pFVar14,EVar12,
             (FLinearColor *)&local_148);
  return param_5 + 1;
}

// OnTouchEnded @ 142982dd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnTouchEnded
          (SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  float fVar7;
  FDeprecateSlateVector2D local_res20;
  undefined1 local_128 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  ulonglong local_108;
  FDestructionSentinel local_100;
  FReply local_e8;
  
  local_res20._4_1_ = 1;
  local_res20._0_4_ = param_2->PointerIndex;
  bVar6 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res20);
  if (bVar6) {
    local_128._0_4_ = this->CachedCursor;
    local_108 = 0;
    local_128[4] = true;
    local_128[8] = true;
    local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_110.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_100);
    if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
      local_108 = local_108 & 0xffffffff00000000;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    if (FStack_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_110.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               (FReadAccessScope *)&local_100);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_100);
    pcVar4 = *(code **)(this->_padding_ + 0x248);
    local_res20 = param_2->ScreenSpacePosition;
    fVar7 = PositionToValue(this,param_1,(FDeprecateVector2DParameter *)&local_res20);
    (*pcVar4)(this,fVar7);
    ResetControllerState(this);
    FReply::FReply(&local_e8,true);
    FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_e8.MouseCaptor.Object = (SWidget *)0x0;
    local_e8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_e8.bUseHighPrecisionMouse = 0;
    local_e8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnTouchMoved @ 142983160

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnTouchMoved
          (SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  bool bVar4;
  FSlateApplication *this_00;
  Type *pTVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FReply *pFVar7;
  Type TVar8;
  float fVar9;
  FDeprecateSlateVector2D local_res20;
  TSharedRef<SWidget,1> local_e8;
  FReply local_d8;
  
  local_res20._4_1_ = 1;
  local_res20._0_4_ = param_2->PointerIndex;
  bVar4 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res20);
  if (bVar4) {
    pcVar1 = *(code **)(this->_padding_ + 0x248);
    local_res20 = param_2->ScreenSpacePosition;
    fVar9 = PositionToValue(this,param_1,(FDeprecateVector2DParameter *)&local_res20);
    (*pcVar1)(this,fVar9);
    ResetControllerState(this);
    bVar4 = true;
  }
  else {
    bVar4 = SWidget::HasMouseCapture((SWidget *)this);
    if (!bVar4) {
      this_00 = FSlateApplication::Get();
      bVar4 = FSlateApplication::HasTraveledFarEnoughToTriggerDrag
                        (this_00,param_2,
                         *(FDeprecateVector2DParameter *)&this->PressedScreenSpaceTouchDownPosition,
                         this->Orientation);
      if (bVar4) {
        pTVar5 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,&local_res20);
        if ((char)pTVar5[1] == None) {
          TVar8 = Default;
        }
        else {
          TVar8 = *pTVar5;
        }
        this->CachedCursor = TVar8;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnMouseCaptureBegin);
        pcVar1 = *(code **)(this->_padding_ + 0x248);
        local_res20 = param_2->ScreenSpacePosition;
        fVar9 = PositionToValue(this,param_1,(FDeprecateVector2DParameter *)&local_res20);
        (*pcVar1)(this,fVar9);
        ResetControllerState(this);
        FReply::FReply(&local_d8,true);
        pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
        pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
        pSVar3 = pTVar6->Object;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e8.Object = pSVar3;
        local_e8.SharedReferenceCount.ReferenceController = pTVar2;
        pFVar7 = FReply::CaptureMouse(&local_d8,&local_e8);
        FReply::FReply(__return_storage_ptr__,pFVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FReply::~FReply(&local_d8);
        return __return_storage_ptr__;
      }
    }
    bVar4 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar4);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 142983630

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSlider::OnTouchStarted
          (SSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = this->LockedSlateAttribute ==
          (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  if (bVar1) {
    ResetControllerState(this);
    this->PressedScreenSpaceTouchDownPosition = param_2->ScreenSpacePosition;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// PositionToValue @ 142984970

float __thiscall
SSlider::PositionToValue(SSlider *this,FGeometry *param_1,FDeprecateVector2DParameter *param_2)

{
  TTransform2<float> *pTVar1;
  FDeprecateSlateVector2D *pFVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float fStack_54;
  TTransform2<float> local_50 [3];
  
  pTVar1 = Inverse<TTransform2<float>_>(local_50,&param_1->AccumulatedRenderTransform);
  fStack_54 = SUB84(*param_2,4);
  local_58 = SUB84(*param_2,0);
  fVar6 = fStack_54 * (pTVar1->M).M[1][0] + local_58 * (pTVar1->M).M[0][0] +
          (pTVar1->Trans).field0_0x0._s_0.X;
  fVar4 = __real_3f800000;
  if (this->IndentHandleSlateAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    fVar4 = __real_40000000;
  }
  if ((*(char *)((longlong)&this->_padding_ + 2) == '\0') ||
     (this->LockedSlateAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pFVar2 = &(this->Style->DisabledThumbImage).ImageSize;
  }
  else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pFVar2 = &(this->Style->NormalThumbImage).ImageSize;
  }
  else {
    pFVar2 = &(this->Style->HoveredThumbImage).ImageSize;
  }
  fVar4 = fVar4 * *(float *)pFVar2;
  if (this->Orientation == Orient_Horizontal) {
    fVar5 = *(float *)&param_1->Size - fVar4;
    if (fVar5 != 0.0) {
LAB_142984b4d:
      fVar5 = (fVar6 - fVar4 * __real_3f000000) / fVar5;
      goto LAB_142984a6b;
    }
  }
  else {
    fVar6 = *(float *)&(param_1->Size).field_0x4;
    fVar5 = fVar6 - fVar4;
    if (fVar5 != 0.0) {
      fVar6 = fVar6 - (local_58 * (pTVar1->M).M[0][1] + fStack_54 * (pTVar1->M).M[1][1] +
                      (pTVar1->Trans).field0_0x0._s_0.Y);
      goto LAB_142984b4d;
    }
  }
  fVar5 = 0.0;
LAB_142984a6b:
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar6 = fVar5 * (this->MaxValue - this->MinValue) + this->MinValue;
  if (this->bMouseUsesStep == false) {
    return fVar6;
  }
  fVar6 = (float)this->ValueSlateAttribute - fVar6;
  pfVar3 = TAttribute<float>::Get(&this->StepSize);
  fVar4 = *pfVar3;
  if (0.0 < fVar4) {
    fVar5 = FMath::RoundHalfFromZero
                      ((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) / fVar4);
    if (fVar4 * __real_3f000000 < fVar6) {
      fVar6 = (float)this->ValueSlateAttribute - fVar5 * fVar4;
      if (this->MaxValue <= fVar6) {
        fVar6 = this->MaxValue;
      }
      if (this->MinValue < fVar6) {
        return fVar6;
      }
      return this->MinValue;
    }
    if (fVar6 < fVar4 * __real_bf000000) {
      fVar6 = fVar5 * fVar4 + (float)this->ValueSlateAttribute;
      if (this->MaxValue <= fVar6) {
        fVar6 = this->MaxValue;
      }
      if (this->MinValue < fVar6) {
        return fVar6;
      }
      return this->MinValue;
    }
  }
  return (float)this->ValueSlateAttribute;
}

// PrivateRegisterAttributes @ 142985b60

void __cdecl SSlider::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Value");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x260,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985be7:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985be7;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"IndentHandle");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x264,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985c61:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985c61;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Locked");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x265,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985cdb:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985cdb;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"SliderBarColor");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x268,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985d55:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985d55;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"SliderHandleColor");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x27c,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985dcf:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985dcf;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"EnabledState");
  FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
            (param_1,*pFVar1,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142985e44;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142985e44:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Hovered");
  FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
            (param_1,*pFVar1,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// ResetControllerState @ 14298aa10

void __thiscall SSlider::ResetControllerState(SSlider *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bControllerInputCaptured != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnControllerCaptureEnd,&local_28);
    if ((*(int *)&(this->OnControllerCaptureEnd).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnControllerCaptureEnd).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this->bControllerInputCaptured = false;
  }
  return;
}

// SetIndentHandle @ 142990f00

void __thiscall SSlider::SetIndentHandle(SSlider *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IndentHandleSlateAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetLocked @ 142992f10

void __thiscall SSlider::SetLocked(SSlider *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->LockedSlateAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetMinAndMaxValues @ 1429958e0

void __thiscall SSlider::SetMinAndMaxValues(SSlider *this,float param_1,float param_2)

{
  if ((param_1 == this->MinValue) && (param_2 == this->MaxValue)) {
    return;
  }
  this->MinValue = param_1;
  this->MaxValue = param_2;
  if (param_2 < param_1) {
    this->MaxValue = param_1;
  }
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// SetMouseUsesStep @ 1429980c0

void __thiscall SSlider::SetMouseUsesStep(SSlider *this,bool param_1)

{
  this->bMouseUsesStep = param_1;
  return;
}

// SetOrientation @ 142998430

void __thiscall SSlider::SetOrientation(SSlider *this,EOrientation param_1)

{
  if (this->Orientation != param_1) {
    this->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetRequiresControllerLock @ 142998890

void __thiscall SSlider::SetRequiresControllerLock(SSlider *this,bool param_1)

{
  this->bRequiresControllerLock = param_1;
  return;
}

// SetSliderBarColor @ 1429998b0

void __thiscall SSlider::SetSliderBarColor(SSlider *this,TAttribute<FSlateColor> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SliderBarColorSlateAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetSliderHandleColor @ 142999ae0

void __thiscall SSlider::SetSliderHandleColor(SSlider *this,TAttribute<FSlateColor> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SliderHandleColorSlateAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetStepSize @ 14299a2f0

void __thiscall SSlider::SetStepSize(SSlider *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->StepSize).Value = param_1->Value;
  (this->StepSize).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetStyle @ 14299a660

void __thiscall SSlider::SetStyle(SSlider *this,FSliderStyle *param_1)

{
  this->Style = param_1;
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetValue @ 14299f670

void __thiscall SSlider::SetValue(SSlider *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ValueSlateAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SupportsKeyboardFocus @ 1429a6260

bool __thiscall SSlider::SupportsKeyboardFocus(SSlider *this)

{
  return this->bIsFocusable;
}

