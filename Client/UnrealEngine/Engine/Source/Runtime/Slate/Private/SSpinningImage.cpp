// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// ComputeVolatility @ 1428582b0

bool __thiscall SSpinningImage::ComputeVolatility(SSpinningImage *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsPlaying(&this->SpinAnimationSequence);
  return bVar1;
}

// Construct @ 142861f50

void __thiscall SSpinningImage::Construct(SSpinningImage *this,FArguments *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  FCurveSequence *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined4 local_90;
  FCurveSequence local_88;
  
  local_b8._0_8_ = (param_1->_Image).Value;
  local_b8[8] = (param_1->_Image).bIsSet;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_98 = local_98 & 0xffffffff00000000;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8,
             &(param_1->_Image).Getter);
  SImage::SetImage((SImage *)this,(TAttribute<FSlateBrush_const_*> *)local_b8);
  local_b8._0_8_ = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  local_b8._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_a8._0_5_ = *(undefined5 *)&(param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_90 = 0;
  local_a8._8_8_ = 0;
  local_98 = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)(local_a8 + 8),
             &(param_1->_ColorAndOpacity).Getter);
  SImage::SetColorAndOpacity((SImage *)this,(TAttribute<FSlateColor> *)local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMouseButtonDown,
             (FReadAccessScope *)local_b8);
  if ((*(int *)&(param_1->_OnMouseButtonDown).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->_OnMouseButtonDown).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_142862034;
    }
  }
  bVar2 = false;
LAB_142862034:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_b8);
  if (bVar2) {
    local_b8._0_8_ = (FSlateBrush *)0x0;
    local_b8._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_a8._0_8_ = local_a8._0_8_ & 0xffffffff00000000;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_b8,&param_1->_OnMouseButtonDown);
    SWidget::SetOnMouseButtonDown
              ((SWidget *)this,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_b8);
  }
  pFVar4 = FCurveSequence::FCurveSequence(&local_88,0.0,param_1->_Period,Linear);
  FCurveSequence::operator=(&this->SpinAnimationSequence,pFVar4);
  FCurveSequence::~FCurveSequence(&local_88);
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                      (TSharedRef<SWidget,1> *)local_b8);
  FCurveSequence::Play(&this->SpinAnimationSequence,pTVar5,true,0.0,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._8_8_);
  return;
}

// OnPaint @ 14288f0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSpinningImage::OnPaint
          (SSpinningImage *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ESlateColorStylingMode EVar10;
  TReferenceControllerBase<1> *pTVar11;
  FSlateBrush *pFVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  atomic<int> aVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  FSlateColor *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  ESlateDrawEffect EVar20;
  FSlateBrush **ppFVar21;
  SWidget *pSVar22;
  float fVar23;
  undefined1 auStackY_168 [32];
  FLinearColor_u_0 local_118;
  TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  local_108;
  FGeometry *local_f0;
  FSlateWindowElementList *local_e8;
  TSharedRef<SWidget_const_,1> local_e0;
  TSharedRef<SWidget_const_,1> local_d0;
  FDeprecateOptionalVector2DParameter local_c0;
  TVector2<float>_u_0 local_b0;
  float local_a8;
  undefined8 local_a4;
  FDeprecateSlateVector2D local_9c;
  float local_94 [2];
  float afStack_8c [2];
  TVector2<float>_u_0 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_e8 = param_4;
  local_f0 = param_2;
  pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e0);
  ppFVar21 = (FSlateBrush **)&this->_padding_;
  pTVar11 = (pTVar17->SharedReferenceCount).ReferenceController;
  pSVar22 = pTVar17->Object;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((ppFVar21 < pSVar22) || (&pSVar22[1].PersistentState <= ppFVar21)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&InAttribute >= (UPTRINT)&InWidget && (UPTRINT)&InAttribute < (UPTRINT)&InWidget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,99,L"The attribute is not a member of the widget."), bVar14)) {
    pcVar13 = (code *)swi(3);
    iVar15 = (*pcVar13)();
    return iVar15;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14288f1c8;
      }
      LOCK();
      aVar16 = pTVar11->SharedReferenceCount;
      bVar14 = aVar2 == aVar16;
      if (bVar14) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar16 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar16;
    } while (!bVar14);
  }
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pSVar22 = (SWidget *)0x0;
  }
  pTVar19 = pTVar11;
  if (pSVar22 == (SWidget *)0x0) {
LAB_14288f1c8:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                        ,0x86,
                        L"It is an error to call GetValue() on an unset TSlateMemberAttributeRef. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      iVar15 = (*pcVar13)();
      return iVar15;
    }
    ppFVar21 = &`public:_struct_FSlateBrush_const*___ptr64_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateBrush_const*___ptr64,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
                ::__l2::Tmp;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  pFVar12 = *ppFVar21;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar11->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
    }
  }
  if ((pFVar12 != (FSlateBrush *)0x0) && ((pFVar12->DrawAs).Value != '\0')) {
    if ((!param_7) || (bVar14 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
      bVar14 = false;
    }
    EVar20 = DisabledEffect;
    if (bVar14) {
      EVar20 = None;
    }
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d0);
    pTVar11 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar22 = pTVar17->Object;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_108.Attribute =
         (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
         &this->_padding_;
    local_108.Owner.Object = pSVar22;
    local_108.Owner.WeakReferenceCount.ReferenceController = pTVar11;
    if (((local_108.Attribute < pSVar22) || (&pSVar22[1].PersistentState <= local_108.Attribute)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(UPTRINT)&InAttribute >= (UPTRINT)&InWidget && (UPTRINT)&InAttribute < (UPTRINT)&InWidget + sizeof(WidgetType)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                            ,99,L"The attribute is not a member of the widget."), bVar14)) {
      pcVar13 = (code *)swi(3);
      iVar15 = (*pcVar13)();
      return iVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    pFVar18 = SlateAttributePrivate::
              TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              ::Get(&local_108);
    EVar10 = pFVar18->ColorUseRule;
    if (EVar10 != UseColor_Specified) {
      if (EVar10 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar10 == UseColor_Foreground) || (EVar10 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    fVar23 = (pFVar18->SpecifiedColor).field0_0x0._s_0.G;
    fVar3 = (pFVar18->SpecifiedColor).field0_0x0._s_0.B;
    fVar4 = (pFVar18->SpecifiedColor).field0_0x0._s_0.A;
    fVar5 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    EVar10 = (pFVar12->TintColor).ColorUseRule;
    fVar6 = (pFVar18->SpecifiedColor).field0_0x0._s_0.R;
    pFVar18 = &pFVar12->TintColor;
    fVar7 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    fVar8 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar9 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    if (EVar10 != UseColor_Specified) {
      if (EVar10 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar10 == UseColor_Foreground) || (EVar10 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_118._s_0.R = (pFVar18->SpecifiedColor).field0_0x0._s_0.R * fVar5 * fVar6;
    local_118._s_0.G = (pFVar18->SpecifiedColor).field0_0x0._s_0.G * fVar23 * fVar7;
    local_118._s_0.B = (pFVar18->SpecifiedColor).field0_0x0._s_0.B * fVar3 * fVar8;
    local_118._s_0.A = fVar4 * fVar9 * (pFVar18->SpecifiedColor).field0_0x0._s_0.A;
    if (local_108.Owner.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      paVar1 = &(local_108.Owner.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_108.Owner.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.Owner.WeakReferenceCount.ReferenceController,1);
      }
    }
    fVar23 = FCurveSequence::GetLerp(&this->SpinAnimationSequence);
    local_c0._8_1_ = 0;
    local_a4 = 0;
    local_b0 = (local_f0->AbsolutePosition).field0_0x0;
    local_a8 = local_f0->Scale;
    local_94 = (local_f0->AccumulatedRenderTransform).M.M[0];
    afStack_8c = (local_f0->AccumulatedRenderTransform).M.M[1];
    local_9c = local_f0->Size;
    local_84 = (local_f0->AccumulatedRenderTransform).Trans.field0_0x0;
    local_7c = local_f0->bHasRenderTransform * '\x02' | local_7c & 0xfc;
    FSlateDrawElement::MakeRotatedBox
              (local_e8,param_5,(FPaintGeometry *)&local_b0._s_0,pFVar12,EVar20,
               fVar23 * __real_40c90fdb,&local_c0,RelativeToElement,(FLinearColor *)&local_118._s_0)
    ;
  }
  return param_5;
}

