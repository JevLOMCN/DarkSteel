// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 9

// SFxWidget @ 1428b9e60

SFxWidget * __thiscall SFxWidget::SFxWidget(SFxWidget *this)

{
  TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<UE::Math::TVector2<double>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar2;
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar4;
  code *pcVar5;
  double _X;
  bool bVar6;
  int iVar7;
  SFxWidget *pSVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  _X = __real_3ff0000000000000;
  this->_padding_ = (longlong)&___7SFxWidget__6B_;
  pTVar1 = &this->RenderScale;
  *(undefined4 *)&pTVar1->field_0x0 = 0x3f800000;
  iVar7 = _finite(_X);
  if (iVar7 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SFxWidget *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar2 = &this->RenderScaleOrigin;
  *pTVar2 = (TSlateAttribute<UE::Math::TVector2<double>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  iVar7 = _finite(*(double *)&pTVar2->field_0x0);
  if (iVar7 == 0) {
LAB_1428b9f14:
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l17::<lambda_1>::operator()(local_res10);
  }
  else {
    iVar7 = _finite(*(double *)&(this->RenderScaleOrigin).field_0x8);
    if (iVar7 == 0) goto LAB_1428b9f14;
  }
  if ((pTVar2 < this) || (this + 1 <= pTVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SFxWidget *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar3 = &this->LayoutScale;
  *pTVar3 = (TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x3f800000;
  iVar7 = _finite(_X);
  if (iVar7 == 0) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res18);
  }
  if ((pTVar3 < this) || (this + 1 <= pTVar3)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SFxWidget *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar2 = &this->VisualOffset;
  *pTVar2 = (TSlateAttribute<UE::Math::TVector2<double>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  iVar7 = _finite(*(double *)&pTVar2->field_0x0);
  if (iVar7 != 0) {
    iVar7 = _finite(*(double *)&(this->VisualOffset).field_0x8);
    if (iVar7 != 0) goto LAB_1428b9fef;
  }
  local_res20[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res20);
LAB_1428b9fef:
  if ((pTVar2 < this) || (this + 1 <= pTVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SFxWidget *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar4 = &this->bIgnoreClipping;
  *pTVar4 = (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1;
  if ((pTVar4 < this) || (this + 1 <= pTVar4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SFxWidget *)(*pcVar5)();
      return pSVar8;
    }
  }
  return this;
}

// ComputeDesiredSize @ 1428e0fa0

TVector2<double> * __thiscall
SFxWidget::ComputeDesiredSize
          (SFxWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  FDeprecateSlateVector2D FVar2;
  float local_res8;
  float fStackX_c;
  
  FVar2 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
  TVar1 = this->LayoutScale;
  local_res8 = (float)*(undefined8 *)FVar2;
  fStackX_c = (float)((ulonglong)*(undefined8 *)FVar2 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)((float)TVar1 * local_res8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)((float)TVar1 * fStackX_c);
  return __return_storage_ptr__;
}

// Construct @ 1428fc310

void __thiscall SFxWidget::Construct(SFxWidget *this,FArguments *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  EVerticalAlignment *pEVar5;
  FSlotBase *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_20 [24];
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->RenderScale,(SWidget *)this,&param_1->_RenderScale,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->RenderScaleOrigin,(SWidget *)this,&param_1->_RenderScaleOrigin,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->LayoutScale,(SWidget *)this,&param_1->_LayoutScale,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->VisualOffset,(SWidget *)this,&param_1->_VisualOffset,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->bIgnoreClipping,(SWidget *)this,&param_1->_IgnoreClipping,None);
  local_38._0_8_ = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&(param_1->_ColorAndOpacity).Value.field0_0x0 + 8);
  local_28 = (param_1->_ColorAndOpacity).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,
             &(param_1->_ColorAndOpacity).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FLinearColor> *)&local_38._s_0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  plVar1 = &this->_padding_;
  *(EHorizontalAlignment *)plVar1 = param_1->_HAlign;
  pEVar5 = (EVerticalAlignment *)((longlong)&this->_padding_ + 4);
  this_00 = (FSlotBase *)&this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    pEVar5 = (EVerticalAlignment *)&DAT_00000054;
  }
  *pEVar5 = param_1->_VAlign;
  if (plVar1 == (longlong *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar3;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  return;
}

// OnArrangeChildren @ 14295e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SFxWidget::OnArrangeChildren(SFxWidget *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FArrangedWidget *pFVar1;
  undefined1 auStackY_b8 [32];
  float local_88;
  float fStack_84;
  undefined8 local_80;
  FSlateLayoutTransform local_78;
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)((longlong)&this->_padding_ + 1)) != 0) {
    local_78.Scale = *(float *)&this->LayoutScale;
    local_80 = param_1->Size;
    local_78.Translation.field0_0x0 = (TVector2<float>_u_0)0x0;
    fStack_84 = (__real_3f800000 / local_78.Scale) * local_80._4_4_;
    local_88 = (__real_3f800000 / local_78.Scale) * (float)local_80;
    pFVar1 = FGeometry::MakeChild
                       (param_1,&local_68,(TSharedRef<SWidget,1> *)&this->_padding_,
                        (FDeprecateVector2DParameter *)&local_88,&local_78);
    FArrangedChildren::AddWidget(param_2,pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Widget.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPaint @ 14297e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SFxWidget::OnPaint(SFxWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  float fVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FWidgetStyle *pFVar8;
  ForElementType<FArrangedWidget> FVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_438 [32];
  undefined8 local_3f8;
  float local_3e8;
  float fStack_3e4;
  float local_3d0;
  float fStack_3cc;
  FLinearColor_u_0 local_390;
  undefined4 local_380;
  undefined1 local_37c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_378;
  ForAnyElementType FStack_370;
  ulonglong local_368;
  FSlateRect local_360;
  TVector2<float>_u_0 local_350;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  TVector2<float>_u_0 local_338;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  undefined8 local_31c;
  undefined8 local_310;
  TVector2<float>_u_0_s_0 local_304;
  undefined8 local_2f8;
  undefined8 local_2ec;
  TTransform2<float> local_2e0;
  FDestructionSentinel local_2c8;
  FSlateRect local_2b0;
  FSlateRect local_2a0;
  FPaintArgs local_290;
  FLinearColor_u_0 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  FLinearColor_u_0 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200 [20];
  undefined1 local_1ec [20];
  FGeometry local_1d8;
  FArrangedChildren local_1a0;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_438;
  TVar1 = this->RenderScale;
  local_1d8.Size = param_2->Size;
  fVar2 = param_2->Scale;
  local_1d8.Scale = 1.0;
  local_1d8.AbsolutePosition.field0_0x0._s_0.X = 0.0;
  local_1d8.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
  local_2e0.M.M[0][1] = 0.0;
  local_2e0.M.M[1][0] = 0.0;
  fStack_3cc = local_1d8.Size._4_4_;
  fVar12 = (float)*(double *)&(this->RenderScaleOrigin).field_0x8 * fStack_3cc;
  local_3d0 = local_1d8.Size._0_4_;
  fVar11 = (float)*(double *)&this->RenderScaleOrigin * local_3d0;
  fStack_3cc = (float)*(double *)&(this->VisualOffset).field_0x8 * fStack_3cc;
  local_3d0 = (float)*(double *)&this->VisualOffset * local_3d0;
  local_310 = CONCAT44(fStack_3cc,local_3d0);
  local_3f8 = (TVector2<float>_u_0)CONCAT44(fVar12,fVar11);
  local_31c = local_3f8;
  local_304 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_1d8.Position.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_3f8._0_4_ = (fVar11 - fVar11 * (float)TVar1) + local_3d0;
  local_3f8._4_4_ = (fVar12 - fVar12 * (float)TVar1) + fStack_3cc;
  local_2e0.Trans.field0_0x0 = local_3f8;
  local_2e0.M.M[0][0] = (float)TVar1;
  local_2e0.M.M[1][1] = (float)TVar1;
  Concatenate<TTransform2<float>_>
            (&local_1d8.AccumulatedRenderTransform,&local_2e0,&param_2->AccumulatedRenderTransform);
  local_1d8.bHasRenderTransform = param_2->bHasRenderTransform;
  local_1d8.Position.field0_0x0 = local_3f8;
  local_1a0.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_1d8.AbsolutePosition.field0_0x0._s_0.X = (float)(undefined4)local_3f8 * fVar2 + local_304.X;
  local_1d8.Scale = fVar2 * (float)TVar1;
  local_1a0.Array.ArrayNum = 0;
  local_1d8.AbsolutePosition.field0_0x0._s_0.Y = (float)local_3f8._4_4_ * fVar2 + local_304.Y;
  local_1a0.Array.ArrayMax = 4;
  local_1a0.bAllow3DWidgets = false;
  local_1a0.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  SWidget::ArrangeChildren((SWidget *)this,&local_1d8,&local_1a0,false);
  if (0 < local_1a0.Array.ArrayNum) {
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if ((local_1a0.Array.ArrayNum != 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SFxWidget.cpp"
                           ,0x4e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if ((local_1a0.Array.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    FVar9 = (ForElementType<FArrangedWidget>)&local_1a0.Array;
    if (local_1a0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar9 = local_1a0.Array.AllocatorInstance.SecondaryData;
    }
    local_3e8 = local_1d8.Size._0_4_;
    fStack_3e4 = local_1d8.Size._4_4_;
    if (this->bIgnoreClipping ==
        (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      local_32c = local_1d8.Scale * 0.0;
      local_338._s_0.X = local_1d8.Scale * 0.0 + local_1d8.AbsolutePosition.field0_0x0._s_0.X;
      local_324 = fStack_3e4 * local_1d8.Scale;
      local_338._s_0.Y = local_1d8.Scale * 0.0 + local_1d8.AbsolutePosition.field0_0x0._s_0.Y;
      local_330 = local_3e8 * local_1d8.Scale;
      local_328 = local_1d8.Scale * 0.0;
      local_2ec = CONCAT44(local_1d8.AbsolutePosition.field0_0x0._s_0.Y,
                           local_1d8.AbsolutePosition.field0_0x0._s_0.X);
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_338._s_0,&local_360);
      local_2b0.Bottom = param_3->Bottom;
      local_2b0.Top = param_3->Top;
      if (local_360.Bottom <= local_2b0.Bottom) {
        local_2b0.Bottom = local_360.Bottom;
      }
      if (local_2b0.Top <= local_360.Top) {
        local_2b0.Top = local_360.Top;
      }
      local_2b0.Right = param_3->Right;
      if (local_360.Right <= local_2b0.Right) {
        local_2b0.Right = local_360.Right;
      }
      local_2b0.Left = local_360.Left;
      if (local_360.Left <= param_3->Left) {
        local_2b0.Left = param_3->Left;
      }
      if ((local_2b0.Bottom < local_2b0.Top) || (local_2b0.Right < local_2b0.Left)) {
        local_2b0.Left = 0.0;
        local_2b0.Top = 0.0;
        local_2b0.Right = 0.0;
        local_2b0.Bottom = 0.0;
      }
    }
    else {
      local_344 = local_1d8.Scale * 0.0;
      local_350._s_0.X = local_1d8.Scale * 0.0 + local_1d8.AbsolutePosition.field0_0x0._s_0.X;
      local_33c = fStack_3e4 * local_1d8.Scale;
      local_350._s_0.Y = local_1d8.Scale * 0.0 + local_1d8.AbsolutePosition.field0_0x0._s_0.Y;
      local_348 = local_3e8 * local_1d8.Scale;
      local_340 = local_1d8.Scale * 0.0;
      local_2f8 = CONCAT44(local_1d8.AbsolutePosition.field0_0x0._s_0.Y,
                           local_1d8.AbsolutePosition.field0_0x0._s_0.X);
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_350._s_0,&local_2b0);
    }
    local_240 = (param_6->SubduedForeground).field0_0x0._s_0.R;
    fStack_23c = (param_6->SubduedForeground).field0_0x0._s_0.G;
    fStack_238 = (param_6->SubduedForeground).field0_0x0._s_0.B;
    fStack_234 = (param_6->SubduedForeground).field0_0x0._s_0.A;
    local_250 = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
    uStack_248 = *(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
    local_260._s_0.R = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R * *(float *)&this->_padding_
    ;
    local_260._s_0.G =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G *
         *(float *)((longlong)&this->_padding_ + 4);
    local_260._s_0.B = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B * *(float *)&this->_padding_
    ;
    local_260._s_0.A =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A *
         *(float *)((longlong)&this->_padding_ + 4);
    local_2a0.Left = local_2b0.Left;
    local_2a0.Top = local_2b0.Top;
    local_2a0.Right = local_2b0.Right;
    local_2a0.Bottom = local_2b0.Bottom;
    if (bVar10 == false) {
      puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x200))(this,local_1ec);
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x1f8))(this,local_200);
    }
    local_390._0_8_ = *puVar7;
    local_390._8_8_ = puVar7[1];
    local_380 = *(undefined4 *)(puVar7 + 2);
    local_368 = 0;
    local_37c = 1;
    local_378.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_370.Data = (FScriptContainerElement *)0x0;
    pFVar8 = FWidgetStyle::SetForegroundColor
                       ((FWidgetStyle *)&local_260._s_0,(TAttribute<FSlateColor> *)&local_390._s_0);
    local_230._0_8_ = *(undefined8 *)&(pFVar8->ColorAndOpacityTint).field0_0x0;
    local_230._8_8_ = *(undefined8 *)((longlong)&(pFVar8->ColorAndOpacityTint).field0_0x0 + 8);
    local_220 = *(undefined8 *)&(pFVar8->ForegroundColor).field0_0x0;
    uStack_218 = *(undefined8 *)((longlong)&(pFVar8->ForegroundColor).field0_0x0 + 8);
    local_210 = *(undefined8 *)&(pFVar8->SubduedForeground).field0_0x0;
    uStack_208 = *(undefined8 *)((longlong)&(pFVar8->SubduedForeground).field0_0x0 + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_378,(FWriteAccessScope *)&local_2c8);
    if (((int)local_368 != 0) && (FStack_370.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_370.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_370,0,0,0x10);
      local_368 = local_368 & 0xffffffff00000000;
    }
    if (local_2c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
    }
    if (FStack_370.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_370.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_378.AccessDetector);
    local_290.RootGrid = param_1->RootGrid;
    local_290.CurrentGrid = param_1->CurrentGrid;
    local_290.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_290.CurrentTime = param_1->CurrentTime;
    local_290.DeltaTime = param_1->DeltaTime;
    local_290._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_290.PaintParentPtr = (SWidget *)this;
    param_5 = SWidget::Paint(((TSharedRef<SWidget,1> *)((longlong)FVar9 + 0x38))->Object,&local_290,
                             (FGeometry *)FVar9,&local_2a0,param_4,param_5 + 1,
                             (FWidgetStyle *)&local_230._s_0,bVar10);
  }
  FVar9 = (ForElementType<FArrangedWidget>)&local_1a0.Array;
  if (local_1a0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar9 = local_1a0.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_1a0.Array.ArrayNum);
  if (local_1a0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1a0.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// SetRenderScale @ 1429987d0

void __thiscall SFxWidget::SetRenderScale(SFxWidget *this,float param_1)

{
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)&this->RenderScale,(SWidget *)this,Member);
  if (param_1 != (float)this->RenderScale) {
    this->RenderScale =
         (TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)param_1;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&this->RenderScale,(SWidget *)this,Member,Paint);
  }
  return;
}

// SetRenderScale @ 142998840

void __thiscall SFxWidget::SetRenderScale(SFxWidget *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->RenderScale,(SWidget *)this,param_1,None);
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

// SetVisualOffset @ 14299f770

void __thiscall SFxWidget::SetVisualOffset(SFxWidget *this,TVector<double> *param_1)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Set((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *)&this->VisualOffset,(SWidget *)this,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetVisualOffset @ 14299f7a0

void __thiscall
SFxWidget::SetVisualOffset(SFxWidget *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->VisualOffset,(SWidget *)this,param_1,None);
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

