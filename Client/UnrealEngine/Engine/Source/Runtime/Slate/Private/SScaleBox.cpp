// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 23

// SScaleBox @ 1428ba5a0

SScaleBox * __thiscall SScaleBox::SScaleBox(SScaleBox *this)

{
  TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_00;
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_02;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_03;
  EWidgetUpdateFlags EVar1;
  code *pcVar2;
  double _X;
  bool bVar3;
  int iVar4;
  SScaleBox *pSVar5;
  EWidgetUpdateFlags EVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this_00 = &this->StretchDirectionAttribute;
  this->_padding_ = (longlong)&___7SScaleBox__6B_;
  pSVar5 = this + 1;
  *(undefined4 *)&this_00->field_0x0 = 0;
  if ((this_00 < this) || (pSVar5 <= this_00)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SScaleBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SScaleBox,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01 = &this->StretchAttribute;
  *(undefined4 *)&this_01->field_0x0 = 0;
  if ((this_01 < this) || (pSVar5 <= this_01)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SScaleBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SScaleBox,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  _X = __real_3ff0000000000000;
  this_02 = &this->UserSpecifiedScaleAttribute;
  *(undefined4 *)&this_02->field_0x0 = 0x3f800000;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res18);
  }
  if ((this_02 < this) || (pSVar5 <= this_02)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SScaleBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar3) {
    local_res20[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SScaleBox,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  this_03 = &this->IgnoreInheritedScaleAttribute;
  this_03->field_0x0 = 0;
  if ((this_03 < this) || (pSVar5 <= this_03)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SScaleBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_03,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SScaleBox,void>'::__l2::<lambda_1>::operator()(local_28);
  }
  (this->OnSafeFrameChangedHandle).ID = 0;
  (this->LastAllocatedArea).bIsSet = false;
  (this->LastPaintGeometry).bIsSet = false;
  (this->NormalizedContentDesiredSize).bIsSet = false;
  (this->ComputedContentScale).bIsSet = false;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar6 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar6);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SScaleBox @ 1428c1790

void __thiscall SScaleBox::~SScaleBox(SScaleBox *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->OnSafeFrameChangedHandle).ID;
  this->_padding_ = (longlong)&___7SScaleBox__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ComputeContentScale @ 1428dfd40

float __thiscall SScaleBox::ComputeContentScale(SScaleBox *this,FGeometry *param_1)

{
  float fVar1;
  float fVar2;
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar3;
  TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4
  ;
  FDeprecateSlateVector2D FVar5;
  float fVar6;
  float local_res8;
  float fStackX_c;
  float fStackX_1c;
  
  fVar6 = __real_3f800000;
  TVar3 = this->StretchAttribute;
  TVar4 = this->StretchDirectionAttribute;
  if (TVar3 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
               0x6) {
    return this->SafeZoneScale;
  }
  if ((TVar3 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x7) &&
     (TVar3 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
               0x8)) {
    FVar5 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar1 = *(float *)FVar5;
    fVar2 = *(float *)((longlong)FVar5 + 4);
    if ((fVar1 != 0.0) && (fVar2 != 0.0)) {
      if (TVar3 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                    )0x2) {
        fStackX_1c = SUB84(param_1->Size,4);
        local_res8 = SUB84(param_1->Size,0);
        fVar6 = local_res8 / fVar1;
        if (fStackX_1c / fVar2 <= local_res8 / fVar1) {
          fVar6 = fStackX_1c / fVar2;
        }
      }
      else if (TVar3 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                         )0x3) {
        local_res8 = SUB84(param_1->Size,0);
        fVar6 = local_res8 / fVar1;
      }
      else if (TVar3 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                         )0x4) {
        fStackX_c = SUB84(param_1->Size,4);
        fVar6 = fStackX_c / fVar2;
      }
      else if (TVar3 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                         )0x5) {
        fStackX_1c = SUB84(param_1->Size,4);
        local_res8 = SUB84(param_1->Size,0);
        fVar6 = local_res8 / fVar1;
        if (local_res8 / fVar1 <= fStackX_1c / fVar2) {
          fVar6 = fStackX_1c / fVar2;
        }
      }
      if (TVar4 == (TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                    )0x1) {
        if (__real_3f800000 <= fVar6) {
          fVar6 = __real_3f800000;
        }
      }
      else if (TVar4 == (TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                         )0x2) {
        if (fVar6 <= __real_3f800000) {
          fVar6 = __real_3f800000;
        }
        return fVar6;
      }
    }
    return fVar6;
  }
  return (float)this->UserSpecifiedScaleAttribute;
}

// ComputeDesiredSize @ 1428e1490

TVector2<double> * __thiscall
SScaleBox::ComputeDesiredSize
          (SScaleBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  code *pcVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  bool bVar5;
  TVector2<double> *pTVar6;
  double dVar7;
  double dStack_20;
  TVector2<double> local_18;
  
  TVar1 = this->StretchAttribute;
  if ((((TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x0) ||
       (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x1)) ||
      (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x6)) ||
     ((TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x7 ||
      (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x8)))) {
    if ((this->ComputedContentScale).bIsSet != false) {
      pTVar6 = SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,&local_18,param_1);
      if ((this->ComputedContentScale).bIsSet == false) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TVector2<double> *)(*pcVar2)();
          return pTVar6;
        }
      }
      dVar7 = (double)(this->ComputedContentScale).TypedValue;
      dVar4 = (pTVar6->field0_0x0)._s_0.Y * dVar7;
      TVar3._8_4_ = SUB84(dVar4,0);
      TVar3._s_0.X = (pTVar6->field0_0x0)._s_0.X * dVar7;
      TVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      __return_storage_ptr__->field0_0x0 = TVar3;
      return __return_storage_ptr__;
    }
  }
  else if ((this->NormalizedContentDesiredSize).bIsSet != false) {
    dVar4 = (this->NormalizedContentDesiredSize).TypedValue.field0_0x0._s_0.X;
    dStack_20 = (this->NormalizedContentDesiredSize).TypedValue.field0_0x0._s_0.Y;
    if (((TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                    )0x3) ||
        (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x4)) &&
       (((this->ComputedContentScale).bIsSet != false &&
        ((this->ComputedContentScale).TypedValue != 0.0)))) {
      if (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                    )0x3) {
        if ((this->ComputedContentScale).bIsSet == false) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TVector2<double> *)(*pcVar2)();
            return pTVar6;
          }
        }
        dStack_20 = dStack_20 * (double)(this->ComputedContentScale).TypedValue;
      }
      else if (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                         )0x4) {
        if ((this->ComputedContentScale).bIsSet == false) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TVector2<double> *)(*pcVar2)();
            return pTVar6;
          }
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             dVar4 * (double)(this->ComputedContentScale).TypedValue;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
        return __return_storage_ptr__;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
    return __return_storage_ptr__;
  }
  SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Construct @ 142900cc0

void __thiscall SScaleBox::Construct(SScaleBox *this,FArguments *param_1)

{
  byte *pbVar1;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  char cVar6;
  float *pfVar7;
  bool *pbVar8;
  FDelegateHandle FVar9;
  EVerticalAlignment *pEVar10;
  FSlotBase *this_02;
  code *local_38;
  undefined8 uStack_30;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 1;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->StretchAttribute,(SWidget *)this,&param_1->_Stretch,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->StretchDirectionAttribute,(SWidget *)this,&param_1->_StretchDirection,None);
  this_00 = &this->UserSpecifiedScaleAttribute;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(param_1->_UserSpecifiedScale).Getter,(FReadAccessScope *)&local_38);
  if ((*(int *)&(param_1->_UserSpecifiedScale).Getter.field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(param_1->_UserSpecifiedScale).Getter.field_0x8,
     plVar2 == (longlong *)0x0)) {
LAB_142900d65:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38);
    if ((param_1->_UserSpecifiedScale).bIsSet == false) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)this_00,(SWidget *)this,Member);
      if (__real_3f800000 != (float)*this_00) {
        *this_00 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                   0x3f800000;
        SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this_00,(SWidget *)this,Member,None);
      }
    }
    else {
      pfVar7 = TAttribute<float>::Get(&param_1->_UserSpecifiedScale);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Set((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
             *)this_00,(SWidget *)this,pfVar7);
    }
  }
  else {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 == '\0') goto LAB_142900d65;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::AssignBinding((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                     *)this_00,(SWidget *)this,&(param_1->_UserSpecifiedScale).Getter,None);
  }
  this_01 = &this->IgnoreInheritedScaleAttribute;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(param_1->_IgnoreInheritedScale).Getter,(FReadAccessScope *)&local_38);
  if ((*(int *)&(param_1->_IgnoreInheritedScale).Getter.field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(param_1->_IgnoreInheritedScale).Getter.field_0x8,
     plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::AssignBinding((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                       *)this_01,(SWidget *)this,&(param_1->_IgnoreInheritedScale).Getter,None);
      goto LAB_142900e61;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  if ((param_1->_IgnoreInheritedScale).bIsSet == false) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)this_01,(SWidget *)this,Member);
    if (*this_01 != (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)
    {
      *this_01 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this_01,(SWidget *)this,Member,None);
    }
  }
  else {
    pbVar8 = TAttribute<bool>::Get(&param_1->_IgnoreInheritedScale);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)this_01,(SWidget *)this,pbVar8);
  }
LAB_142900e61:
  plVar2 = &this->_padding_;
  (this->LastFinalOffset).field0_0x0._s_0.X = 0.0;
  pEVar10 = (EVerticalAlignment *)((longlong)&this->_padding_ + 4);
  (this->LastFinalOffset).field0_0x0._s_0.Y = 0.0;
  this_02 = (FSlotBase *)&this->_padding_;
  *(EHorizontalAlignment *)plVar2 = param_1->_HAlign;
  if (plVar2 == (longlong *)0x0) {
    pEVar10 = (EVerticalAlignment *)&DAT_00000054;
  }
  *pEVar10 = param_1->_VAlign;
  if (plVar2 == (longlong *)0x0) {
    this_02 = (FSlotBase *)&DAT_00000020;
  }
  FSlotBase::DetatchParentFromContent(this_02);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this_02->Widget).SharedReferenceCount.ReferenceController;
  (this_02->Widget).Object = pSVar4;
  (this_02->Widget).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned(this_02);
  RefreshSafeZoneScale(this);
  uStack_30 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_30._4_4_ << 0x20);
  local_38 = HandleSafeFrameChangedEvent;
  FVar9 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddSP<SScaleBox>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                            *)&FCoreDelegates::OnSafeFrameChangedEvent,(SScaleBox *)&stack0x00000008
                           ,(pmf_e52ff8a0 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnSafeFrameChangedHandle).ID = *FVar9.ID;
  return;
}

// CustomPrepass @ 142924220

bool __thiscall SScaleBox::CustomPrepass(SScaleBox *this,float param_1)

{
  float fVar1;
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  SWidget *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FDeprecateSlateVector2D FVar7;
  float local_58 [2];
  undefined1 local_50 [56];
  
  this_00 = (SWidget *)this->_padding_;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute ==
      EVisibility::Collapsed.Value.Value) {
    return false;
  }
  TVar2 = this->StretchAttribute;
  if ((((TVar2 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x0) ||
       (TVar2 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x1)) ||
      (TVar2 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x6)) ||
     ((TVar2 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x7 ||
      (TVar2 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x8)))) {
    bVar5 = false;
    bVar4 = false;
    if ((this->LastAllocatedArea).bIsSet == false) goto LAB_1429242a9;
    if ((this->NormalizedContentDesiredSize).bIsSet == false) goto LAB_1429242f2;
    (this->NormalizedContentDesiredSize).bIsSet = false;
LAB_14292436f:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FGeometry::FGeometry(&NullGeometry);
      _Init_thread_footer(&::_TSS0);
    }
    local_58[0] = ComputeContentScale(this,&NullGeometry);
    bVar4 = true;
  }
  else {
    bVar4 = true;
LAB_1429242a9:
    bVar5 = bVar4;
    this_00->bNeedsPrepass = '\x01';
    SWidget::SlatePrepass(this_00,param_1);
    FVar7 = SWidget::GetDesiredSize(this_00);
    fVar1 = *(float *)((longlong)FVar7 + 4);
    if ((TOptional<UE::Math::TVector2<double>_> *)local_50 != &this->NormalizedContentDesiredSize) {
      (this->NormalizedContentDesiredSize).TypedValue.field0_0x0._s_0.X = (double)*(float *)FVar7;
      (this->NormalizedContentDesiredSize).TypedValue.field0_0x0._s_0.Y = (double)fVar1;
      (this->NormalizedContentDesiredSize).bIsSet = true;
    }
LAB_1429242f2:
    bVar4 = false;
    if (!bVar5) goto LAB_14292436f;
    if ((this->LastAllocatedArea).bIsSet != false) {
      if (((this->LastPaintGeometry).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_58[0] = ComputeContentScale(this,&(this->LastPaintGeometry).TypedValue);
      bVar4 = true;
    }
    SWidget::Invalidate(this_00,Prepass);
    if (!bVar4) goto LAB_1429243c3;
  }
  if ((this->IgnoreInheritedScaleAttribute !=
       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) &&
     (param_1 != 0.0)) {
    local_58[0] = local_58[0] / param_1;
    bVar4 = true;
  }
LAB_1429243c3:
  if ((TOptional<float> *)local_58 != &this->ComputedContentScale) {
    if (bVar4) {
      (this->ComputedContentScale).TypedValue = local_58[0];
      (this->ComputedContentScale).bIsSet = true;
    }
    else if ((this->ComputedContentScale).bIsSet != false) {
      (this->ComputedContentScale).bIsSet = false;
    }
  }
  return true;
}

// DoesScaleRequireNormalizingPrepassOrLocalGeometry @ 1429262c0

bool __thiscall SScaleBox::DoesScaleRequireNormalizingPrepassOrLocalGeometry(SScaleBox *this)

{
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  
  TVar1 = this->StretchAttribute;
  if ((((TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x0) &&
       (TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x1)) &&
      (TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x6)) &&
     ((TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x7 &&
      (TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x8)))) {
    return true;
  }
  return false;
}

// GetPrivateWidgetClass @ 142947290

FSlateWidgetClassData * __cdecl SScaleBox::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SScaleBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SScaleBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetRelativeLayoutScale @ 142947640

float __thiscall SScaleBox::GetRelativeLayoutScale(SScaleBox *this,int param_1,float param_2)

{
  if ((this->ComputedContentScale).bIsSet != false) {
    return (this->ComputedContentScale).TypedValue;
  }
  return __real_3f800000;
}

// GetWidgetClass @ 14294c5f0

FSlateWidgetClassData * __thiscall SScaleBox::GetWidgetClass(SScaleBox *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SScaleBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SScaleBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// HandleSafeFrameChangedEvent @ 14294d6e0

void __thiscall SScaleBox::HandleSafeFrameChangedEvent(SScaleBox *this)

{
  RefreshSafeZoneScale(this);
  SWidget::Invalidate((SWidget *)this,Prepass);
  return;
}

// IsDesiredSizeDependentOnAreaAndScale @ 142954060

bool __thiscall SScaleBox::IsDesiredSizeDependentOnAreaAndScale(SScaleBox *this)

{
  if ((this->StretchAttribute !=
       (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x3) &&
     (this->StretchAttribute !=
      (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x4)) {
    return false;
  }
  return true;
}

// OnArrangeChildren @ 142960130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScaleBox::OnArrangeChildren(SScaleBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  EVisibility EVar1;
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  FDeprecateSlateVector2D FVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_188 [32];
  undefined8 local_158;
  FSlateLayoutTransform local_150;
  FDeprecateVector2DParameter local_144 [5];
  FArrangedWidget local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_188;
  EVar1.Value.Value =
       *(TEnumAsByte<EVisibility::Private> *)&((SWidget *)this->_padding_)->VisibilityAttribute;
  if (((param_2->VisibilityFilter).Value.Value & (byte)EVar1.Value.Value) != 0) {
    local_158._0_4_ = SUB84(param_1->Size,0);
    local_158._4_4_ = SUB84(param_1->Size,4);
    FVar7 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    TVar2 = this->StretchAttribute;
    dVar4 = (double)*(float *)((longlong)FVar7 + 4);
    dVar5 = (double)*(float *)FVar7;
    if (TVar2 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x1) {
      dVar4 = (double)local_158._4_4_;
      dVar5 = (double)(float)local_158;
    }
    if ((this->ComputedContentScale).bIsSet == false) {
      fVar8 = ComputeContentScale(this,param_1);
    }
    else {
      fVar8 = (this->ComputedContentScale).TypedValue;
    }
    (this->LastFinalOffset).field0_0x0._s_0.X = 0.0;
    (this->LastFinalOffset).field0_0x0._s_0.Y = 0.0;
    if (__real_322bcc77 < (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      dVar12 = 0.0;
      if (TVar2 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                    )0x1) {
        iVar3 = (int)this->_padding_;
        fVar13 = *(float *)&this->_padding_;
        fVar14 = *(float *)((longlong)&this->_padding_ + 4);
        fVar10 = *(float *)&this->_padding_;
        fVar6 = *(float *)((longlong)&this->_padding_ + 4);
        if (iVar3 != 0) {
          FVar7 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
          fVar9 = fVar8 * *(float *)FVar7;
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          if (iVar3 != 1) {
            if (iVar3 == 2) {
              fVar13 = (((float)local_158 - fVar9) * __real_3f000000 + fVar13) - fVar10;
            }
            else if (iVar3 == 3) {
              fVar13 = ((float)local_158 - fVar9) - fVar10;
            }
          }
        }
        iVar3 = *(int *)((longlong)&this->_padding_ + 4);
        if (iVar3 != 0) {
          FVar7 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
          fVar10 = fVar8 * *(float *)((longlong)FVar7 + 4);
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          if (iVar3 != 1) {
            if (iVar3 == 2) {
              fVar14 = ((local_158._4_4_ - fVar10) * __real_3f000000 + fVar14) - fVar6;
            }
            else if (iVar3 == 3) {
              fVar14 = (local_158._4_4_ - fVar10) - fVar6;
            }
          }
        }
        dVar11 = __real_3ff0000000000000 / (double)fVar8;
        dVar12 = (double)fVar14 * dVar11;
        (this->LastFinalOffset).field0_0x0._s_0.X = (double)fVar13 * dVar11;
        (this->LastFinalOffset).field0_0x0._s_0.Y = dVar12;
        if ((int)this->_padding_ == 0) {
          dVar5 = dVar11 * (double)(float)local_158;
        }
        if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
          dVar4 = dVar11 * (double)local_158._4_4_;
        }
      }
      local_158._4_4_ = (float)dVar4;
      local_158._0_4_ = (float)dVar5;
      local_144[0] = local_158;
      local_150.Translation.field0_0x0._s_0.X =
           (float)(this->LastFinalOffset).field0_0x0._s_0.X * fVar8;
      local_150.Translation.field0_0x0._s_0.Y = (float)dVar12 * fVar8;
      local_150.Scale = fVar8;
      FGeometry::MakeChild
                (param_1,&local_118,(TSharedRef<SWidget,1> *)&this->_padding_,local_144,&local_150);
      FArrangedChildren::AddWidget(param_2,EVar1,&local_118);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.Widget.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnPaint @ 14297f9e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SScaleBox::OnPaint(SScaleBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  FSlateClippingZone *pFVar5;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  TTransform2<float> local_d8;
  FDeprecateSlateVector2D local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  TTransform2<float> local_78;
  FSlateClippingZone local_60;
  
  if ((this->LastAllocatedArea).bIsSet != false) {
    local_e8 = SUB84(param_2->Size,0);
    if (((float)((uint)(local_e8 - (float)(this->LastAllocatedArea).TypedValue.field0_0x0._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) &&
       (fStack_e4 = SUB84(param_2->Size,4),
       (float)((uint)(fStack_e4 - (float)(this->LastAllocatedArea).TypedValue.field0_0x0._s_0.Y) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) goto LAB_14297fb06;
  }
  local_e0 = SUB84(param_2->Size,0);
  fStack_dc = SUB84(param_2->Size,4);
  if ((TOptional<UE::Math::TVector2<double>_> *)local_88 != &this->LastAllocatedArea) {
    (this->LastAllocatedArea).TypedValue.field0_0x0._s_0.X = (double)local_e0;
    (this->LastAllocatedArea).TypedValue.field0_0x0._s_0.Y = (double)fStack_dc;
    (this->LastAllocatedArea).bIsSet = true;
  }
  if ((TOptional<FGeometry> *)param_2 != &this->LastPaintGeometry) {
    uVar2 = *(undefined8 *)&param_2->Scale;
    (this->LastPaintGeometry).TypedValue.Size = param_2->Size;
    *(undefined8 *)&(this->LastPaintGeometry).TypedValue.Scale = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(param_2->Position).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(this->LastPaintGeometry).TypedValue.AbsolutePosition.field0_0x0 + 4)
         = *(undefined8 *)((longlong)&(param_2->AbsolutePosition).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(this->LastPaintGeometry).TypedValue.Position.field0_0x0 + 4) = uVar2
    ;
    uVar2 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
    *(undefined8 *)((this->LastPaintGeometry).TypedValue.AccumulatedRenderTransform.M.M[0] + 1) =
         *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
    *(undefined8 *)((this->LastPaintGeometry).TypedValue.AccumulatedRenderTransform.M.M[1] + 1) =
         uVar2;
    *(undefined8 *)
     ((longlong)&(this->LastPaintGeometry).TypedValue.AccumulatedRenderTransform.Trans.field0_0x0 +
     4) = *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    (this->LastPaintGeometry).bIsSet = true;
  }
  TVar1 = this->StretchAttribute;
  if ((((TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x0) &&
       (TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x1)) &&
      (TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x6)) &&
     ((TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x7 &&
      (TVar1 != (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x8)))) {
    SWidget::Invalidate((SWidget *)this,Prepass);
  }
LAB_14297fb06:
  bVar3 = false;
  if ((*(char *)((longlong)&this->_padding_ + 5) == '\0') &&
     (((TVar1 = this->StretchAttribute,
       TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x3 ||
       (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x4)) ||
      ((TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x5 ||
       (TVar1 == (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x8)))))) {
    bVar3 = true;
    pFVar5 = FSlateClippingZone::FSlateClippingZone(&local_60,param_2);
    FSlateWindowElementList::PushClip(param_4,pFVar5);
    local_c0 = param_2->Size;
    uStack_b8 = *(undefined8 *)&param_2->Scale;
    local_d8.Trans.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_b0 = *(undefined8 *)((longlong)&(param_2->AbsolutePosition).field0_0x0 + 4);
    auStack_a8 = *(undefined1 (*) [8])((longlong)&(param_2->Position).field0_0x0 + 4);
    local_a0 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
    uStack_98 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
    local_90 = *(undefined8 *)
                ((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    local_d8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_d8.M.M[0][1] = _UNK_15076b184;
    local_d8.M.M[1][0] = _UNK_15076b188;
    local_d8.M.M[1][1] = _UNK_15076b18c;
    Concatenate<TTransform2<float>_>(&local_78,(TTransform2<float> *)(auStack_a8 + 4),&local_d8);
  }
  iVar4 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  if (bVar3) {
    FSlateWindowElementList::PopClip(param_4);
  }
  return iVar4;
}

// PrivateRegisterAttributes @ 1429858f0

void __cdecl SScaleBox::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  FName local_res10;
  FDelegateAllocation local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  undefined1 local_20 [8];
  ForAnyElementType local_18;
  ulonglong uStack_10;
  
  local_38[0] = Prepass|Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"StretchDirection");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,(FAttributeEntry *)&local_48,*pFVar1,0x2a8,
             (FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_14298597c:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14298597c;
  }
  local_38[0] = Prepass|Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"UserSpecifiedScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,(FAttributeEntry *)&local_48,*pFVar1,0x2b0,
             (FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_1429859f6:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_1429859f6;
  }
  local_38[0] = Prepass|Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"IgnoreInheritedScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,(FAttributeEntry *)&local_48,*pFVar1,0x2b4,
             (FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_142985a7a;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_142985a7a:
  local_20[0] = Prepass|Layout;
  local_18.Data = (FScriptContainerElement *)0x0;
  uStack_10 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Stretch");
  this = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                   (param_1,(FAttributeEntry *)local_38,*pFVar1,0x2ac,
                    (FInvalidateWidgetReasonAttribute *)local_20);
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (this,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                  &local_48);
  if ((int)uStack_10 != 0) {
    if (local_18.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,0,0x10);
    uStack_10 = uStack_10 & 0xffffffff00000000;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// RefreshSafeZoneScale @ 142988360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SScaleBox::RefreshSafeZoneScale(SScaleBox *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  FSlateApplication *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  int local_res8;
  int iStackX_c;
  float local_res10;
  float local_res14;
  FMargin local_68;
  TSharedPtr<SViewport,1> local_58 [4];
  
  dVar12 = __real_3ff0000000000000;
  local_68.Left = 0.0;
  local_68.Top = 0.0;
  local_68.Right = 0.0;
  local_68.Bottom = 0.0;
  dVar10 = __real_3ff0000000000000;
  if (this->StretchAttribute ==
      (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x6) {
    pFVar6 = FSlateApplication::Get();
    FSlateApplication::GetGameViewport(pFVar6,local_58);
    dVar10 = dVar12;
    if (local_58[0].Object != (SViewport *)0x0) {
      if ((local_58[0].Object == (SViewport *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar9 = (TReferenceControllerBase<1> *)((local_58[0].Object)->ViewportInterface).Object;
      pTVar8 = ((local_58[0].Object)->ViewportInterface).WeakReferenceCount.ReferenceController;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
        aVar2 = pTVar8->SharedReferenceCount;
        do {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x0) break;
          LOCK();
          aVar5 = pTVar8->SharedReferenceCount;
          bVar4 = aVar2 == aVar5;
          if (bVar4) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar5 = aVar2;
          }
          UNLOCK();
          pTVar7 = pTVar8;
          aVar2 = aVar5;
        } while (!bVar4);
        LOCK();
        paVar1 = &pTVar8->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
        }
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
        }
        pTVar8 = pTVar7;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          (**(code **)(pTVar9->_padding_ + 0x10))(pTVar9,&local_res8);
          pFVar6 = FSlateApplication::Get();
          fVar13 = (float)iStackX_c;
          if ((dVar12 < (double)CONCAT44((uint)((ulonglong)((double)iStackX_c - (double)iStackX_c)
                                               >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84((double)iStackX_c - (double)iStackX_c,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("FloatFitsIn<OutType>(In, Precision)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xc0,L"Loss of data caused by narrowing conversion"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar11 = (float)local_res8;
          if ((dVar12 < (double)CONCAT44((uint)((ulonglong)((double)local_res8 - (double)local_res8)
                                               >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84((double)local_res8 - (double)local_res8,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("FloatFitsIn<OutType>(In, Precision)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xc0,L"Loss of data caused by narrowing conversion"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_res10 = fVar11;
          local_res14 = fVar13;
          FSlateApplicationBase::GetSafeZoneSize
                    ((FSlateApplicationBase *)pFVar6,&local_68,
                     (FDeprecateVector2DParameter *)&local_res10);
          dVar12 = (double)iStackX_c;
          dVar10 = (double)local_res8;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58[0].SharedReferenceCount.ReferenceController);
  }
  fVar13 = local_68.Top;
  if (local_68.Top <= local_68.Bottom) {
    fVar13 = local_68.Bottom;
  }
  if (local_68.Left <= local_68.Right) {
    local_68.Left = local_68.Right;
  }
  fVar11 = fVar13 / (float)dVar12;
  if (fVar13 / (float)dVar12 <= local_68.Left / (float)dVar10) {
    fVar11 = local_68.Left / (float)dVar10;
  }
  this->SafeZoneScale = __real_3f800000 - fVar11;
  return;
}

// SetContent @ 14298f230

void __thiscall SScaleBox::SetContent(SScaleBox *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetHAlign @ 142990cf0

void __thiscall SScaleBox::SetHAlign(SScaleBox *this,EHorizontalAlignment param_1)

{
  longlong *plVar1;
  FSlotBase *this_00;
  
  plVar1 = &this->_padding_;
  if ((EHorizontalAlignment)*plVar1 != param_1) {
    *(EHorizontalAlignment *)plVar1 = param_1;
    this_00 = (FSlotBase *)&this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

// SetIgnoreInheritedScale @ 142990e90

void __thiscall SScaleBox::SetIgnoreInheritedScale(SScaleBox *this,bool param_1)

{
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&this->IgnoreInheritedScaleAttribute,(SWidget *)this,Member);
  if (this->IgnoreInheritedScaleAttribute !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1) {
    this->IgnoreInheritedScaleAttribute =
         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&this->IgnoreInheritedScaleAttribute,(SWidget *)this,Member,
               None);
  }
  return;
}

// SetStretch @ 14299a350

void __thiscall SScaleBox::SetStretch(SScaleBox *this,Type param_1)

{
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&this->StretchAttribute,(SWidget *)this,Member);
  if (this->StretchAttribute !=
      (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1)
  {
    this->StretchAttribute =
         (TSlateAttribute<EStretch::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
         param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&this->StretchAttribute,(SWidget *)this,Member,None);
  }
  return;
}

// SetStretchDirection @ 14299a3b0

void __thiscall SScaleBox::SetStretchDirection(SScaleBox *this,Type param_1)

{
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&this->StretchDirectionAttribute,(SWidget *)this,Member);
  if (this->StretchDirectionAttribute !=
      (TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
      param_1) {
    this->StretchDirectionAttribute =
         (TSlateAttribute<EStretchDirection::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          )param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&this->StretchDirectionAttribute,(SWidget *)this,Member,None);
  }
  return;
}

// SetUserSpecifiedScale @ 14299ef60

void __thiscall SScaleBox::SetUserSpecifiedScale(SScaleBox *this,float param_1)

{
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&this->UserSpecifiedScaleAttribute,(SWidget *)this,Member);
  if (param_1 != (float)this->UserSpecifiedScaleAttribute) {
    this->UserSpecifiedScaleAttribute =
         (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&this->UserSpecifiedScaleAttribute,(SWidget *)this,Member,None
              );
  }
  return;
}

// SetVAlign @ 14299f0c0

void __thiscall SScaleBox::SetVAlign(SScaleBox *this,EVerticalAlignment param_1)

{
  FSlotBase *this_00;
  
  if (*(EVerticalAlignment *)((longlong)&this->_padding_ + 4) != param_1) {
    *(EVerticalAlignment *)((longlong)&this->_padding_ + 4) = param_1;
    this_00 = (FSlotBase *)&this->_padding_;
    if (this == (SScaleBox *)0xfffffffffffffd98) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

