// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// ComputeDesiredSize @ 14a7c4a80

TVector2<double> * __thiscall
SVisualAttachmentBox::ComputeDesiredSize
          (SVisualAttachmentBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  TVector2<double> local_18;
  
  pTVar3 = SBox::ComputeDesiredSize((SBox *)this,&local_18,param_1);
  dVar1 = (pTVar3->field0_0x0)._s_0.X;
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (this->InnerDesiredSize).field0_0x0._s_0.X = dVar1;
  (this->InnerDesiredSize).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// Construct @ 14a7c7880

void __thiscall SVisualAttachmentBox::Construct(SVisualAttachmentBox *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined1 auVar20 [8];
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar21;
  longlong *plVar22;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> TStack_20;
  
  auVar20 = auStack_38;
  uVar4 = (param_1->_WidthOverride).Value;
  uVar5 = (param_1->_WidthOverride).bIsSet;
  auStack_38[4] = uVar5;
  auStack_38._0_4_ = uVar4;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_WidthOverride).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar6 = (param_1->_HeightOverride).Value;
  uVar7 = (param_1->_HeightOverride).bIsSet;
  auStack_38[4] = uVar7;
  auStack_38._0_4_ = uVar6;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_HeightOverride).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 4),(SWidget *)this,
           (TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar8 = (param_1->_MinDesiredWidth).Value;
  uVar9 = (param_1->_MinDesiredWidth).bIsSet;
  auStack_38[4] = uVar9;
  auStack_38._0_4_ = uVar8;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MinDesiredWidth).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar10 = (param_1->_MinDesiredHeight).Value;
  uVar11 = (param_1->_MinDesiredHeight).bIsSet;
  auStack_38[4] = uVar11;
  auStack_38._0_4_ = uVar10;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MinDesiredHeight).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 4),(SWidget *)this,
           (TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar12 = (param_1->_MaxDesiredWidth).Value;
  uVar13 = (param_1->_MaxDesiredWidth).bIsSet;
  auStack_38[4] = uVar13;
  auStack_38._0_4_ = uVar12;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MaxDesiredWidth).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar14 = (param_1->_MaxDesiredHeight).Value;
  uVar15 = (param_1->_MaxDesiredHeight).bIsSet;
  auStack_38[4] = uVar15;
  auStack_38._0_4_ = uVar14;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MaxDesiredHeight).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 4),(SWidget *)this,
           (TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar16 = (param_1->_MinAspectRatio).Value;
  uVar17 = (param_1->_MinAspectRatio).bIsSet;
  auStack_38[4] = uVar17;
  auStack_38._0_4_ = uVar16;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MinAspectRatio).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = auStack_38;
  uVar18 = (param_1->_MaxAspectRatio).Value;
  uVar19 = (param_1->_MaxAspectRatio).bIsSet;
  auStack_38[4] = uVar19;
  auStack_38._0_4_ = uVar18;
  auStack_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MaxAspectRatio).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 4),(SWidget *)this,
           (TAttribute<FOptionalSize> *)auStack_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  TStack_20._16_4_ = 0;
  *(EHorizontalAlignment *)&this->_padding_ = param_1->_HAlign;
  plVar22 = &this->_padding_;
  if (this == (SVisualAttachmentBox *)0xfffffffffffffd98) {
    plVar22 = (longlong *)0x0;
  }
  *(EVerticalAlignment *)((longlong)plVar22 + 0x54) = param_1->_VAlign;
  auStack_38 = *(undefined1 (*) [8])&(param_1->_Padding).Value;
  auStack_30._0_8_ = *(undefined8 *)&(param_1->_Padding).Value.Right;
  auStack_30[8] = (param_1->_Padding).bIsSet;
  TStack_20._0_8_ = 0;
  TStack_20._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&TStack_20,&(param_1->_Padding).Getter);
  pTVar21 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)(plVar22 + 8),(TAttribute<FMargin> *)auStack_38);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&pTVar21->field_0x20);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&pTVar21->field_0x38;
  *(SWidget **)&pTVar21->field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&pTVar21->field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&pTVar21->field_0x20);
  return;
}

// OnArrangeChildren @ 14a7fc1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SVisualAttachmentBox::OnArrangeChildren
          (SVisualAttachmentBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  TVector2<float>_u_0 TVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  FSlateLayoutTransform local_80;
  TVector2<float>_u_0_s_0 local_70;
  FGeometry local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  dVar2 = (this->InnerDesiredSize).field0_0x0._s_0.X;
  dVar3 = (this->InnerDesiredSize).field0_0x0._s_0.Y;
  local_70 = (param_1->AbsolutePosition).field0_0x0._s_0;
  dVar8 = dVar2 * (this->ContentAnchor).field0_0x0._s_0.X;
  dVar9 = dVar3 * (this->ContentAnchor).field0_0x0._s_0.Y;
  fVar1 = param_1->Scale;
  fVar6 = (float)(double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_68.Scale = 1.0;
  local_68.AbsolutePosition.field0_0x0._s_0.X = 0.0;
  local_80.Scale = 1.0;
  fVar7 = (float)(double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_88._4_4_ = fVar7;
  local_88._0_4_ = fVar6;
  TVar5 = local_88;
  local_88._4_4_ = (float)dVar3;
  local_88._0_4_ = (float)dVar2;
  local_68.Size = (FDeprecateSlateVector2D)local_88;
  local_68.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
  local_68.Position.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_80.Translation.field0_0x0._s_0.X = fVar6;
  local_80.Translation.field0_0x0._s_0.Y = fVar7;
  Concatenate<FSlateLayoutTransform,TTransform2<float>_>
            (&local_68.AccumulatedRenderTransform,&local_80,&param_1->AccumulatedRenderTransform);
  local_68.bHasRenderTransform = param_1->bHasRenderTransform;
  local_80.Scale = fVar1 * fVar6 + local_70.X;
  local_68.Position.field0_0x0 = TVar5;
  local_80.Translation.field0_0x0._s_0.X = fVar1 * fVar7 + local_70.Y;
  local_88 = TVar5;
  local_68.Scale = fVar1;
  local_68.AbsolutePosition.field0_0x0._s_0.X = local_80.Scale;
  local_68.AbsolutePosition.field0_0x0._s_0.Y = local_80.Translation.field0_0x0._s_0.X;
  SBox::OnArrangeChildren((SBox *)this,&local_68,param_2);
  return;
}

// OnPaint @ 14a7fe4f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SVisualAttachmentBox::OnPaint
          (SVisualAttachmentBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = SBox::OnPaint((SBox *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}

// SetContentAnchor @ 14a817c50

void __thiscall
SVisualAttachmentBox::SetContentAnchor(SVisualAttachmentBox *this,TVector2<double> *param_1)

{
  double dVar1;
  
  if (((this->ContentAnchor).field0_0x0._s_0.X == (param_1->field0_0x0)._s_0.X) &&
     ((this->ContentAnchor).field0_0x0._s_0.Y == (param_1->field0_0x0)._s_0.Y)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->ContentAnchor).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ContentAnchor).field0_0x0._s_0.Y = dVar1;
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

