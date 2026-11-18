// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// SColorWheel @ 142847ac0

SColorWheel * __thiscall SColorWheel::SColorWheel(SColorWheel *this)

{
  TSlateAttribute<FLinearColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  code *pcVar1;
  bool bVar2;
  SColorWheel *pSVar3;
  FLinearColor_u_0 local_18;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this_00 = &this->SelectedColor;
  this->_padding_ = (longlong)&___7SColorWheel__6B_;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            ((TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)this_00,(SWidget *)this,(FLinearColor *)&local_18._s_0);
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar3 = (SColorWheel *)(*pcVar1)();
      return pSVar3;
    }
  }
  (this->CtrlMultiplier).Value = 0.0;
  (this->CtrlMultiplier).bIsSet = false;
  *(undefined8 *)&(this->CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->CtrlMultiplier).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  this->bShouldDrawSelector = true;
  this->bDragging = false;
  return this;
}

// ~SColorWheel @ 14284a860

void __thiscall SColorWheel::~SColorWheel(SColorWheel *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorWheel__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CtrlMultiplier).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// CalcRelativePositionFromCenter @ 142856eb0

FDeprecateSlateVector2D __thiscall SColorWheel::CalcRelativePositionFromCenter(SColorWheel *this)

{
  FDeprecateSlateVector2D in_RDX;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar1;
  
  fVar1 = *(float *)&(this->SelectedColor).field_0x4;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  __libm_sse2_sincosf_();
  *(ulonglong *)in_RDX = CONCAT44(extraout_XMM0_Da * fVar1,extraout_XMM0_Db * fVar1);
  return in_RDX;
}

// ComputeDesiredSize @ 1428580e0

TVector2<double> * __thiscall
SColorWheel::ComputeDesiredSize
          (SColorWheel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->SelectorImage->ImageSize).field_0x4;
  fVar2 = *(float *)&(this->Image->ImageSize).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(*(float *)&this->SelectorImage->ImageSize + *(float *)&this->Image->ImageSize);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 + fVar2);
  return __return_storage_ptr__;
}

// Construct @ 142859520

void __thiscall SColorWheel::Construct(SColorWheel *this,FArguments *param_1)

{
  code *pcVar1;
  FSlateBrush **ppFVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FSlateBrush *pFVar5;
  FName local_res8;
  
  ppFVar2 = TAttribute<FSlateBrush_const_*>::Get(&param_1->_ColorWheelBrush);
  this->Image = *ppFVar2;
  pIVar3 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = ::FName::FName(&local_res8,"ColorWheel.Selector");
  pFVar5 = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0);
  this->SelectorImage = pFVar5;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SelectedColor,(SWidget *)this,&param_1->_SelectedColor,None);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  (this->CtrlMultiplier).Value = (param_1->_CtrlMultiplier).Value;
  (this->CtrlMultiplier).bIsSet = (param_1->_CtrlMultiplier).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CtrlMultiplier).Getter,&(param_1->_CtrlMultiplier).Getter);
  return;
}

// OnCursorQuery @ 1428852e0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SColorWheel::OnCursorQuery
          (SColorWheel *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Type *pTVar4;
  bool bVar5;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  Type local_50 [2];
  undefined1 local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  Type local_10 [2];
  
  bVar5 = this->bDragging == false;
  if (bVar5) {
    local_50[0] = Default;
    puVar1 = &local_80;
    local_80 = 0;
    pTStack_78 = (TReferenceControllerBase<1> *)0x0;
    puVar2 = &local_70;
    local_70 = 0;
    pTStack_68 = (TReferenceControllerBase<1> *)0x0;
    puVar3 = &local_60;
    local_60 = 0;
    pTStack_58 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = local_50;
  }
  else {
    local_48 = 1;
    puVar1 = &local_40;
    local_40 = 0;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    local_10[0] = None;
    puVar2 = &local_30;
    local_30 = 0;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    puVar3 = &local_20;
    local_20 = 0;
    pTStack_18 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = local_10;
  }
  __return_storage_ptr__->_padding_ = puVar1[1];
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar2[1];
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar3[1];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  __return_storage_ptr__->MouseCursor = *pTVar4;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142887570

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorWheel::OnMouseButtonDoubleClick
          (SColorWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1428883a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorWheel::OnMouseButtonDown
          (SColorWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FReply *pFVar8;
  bool bVar9;
  TSharedRef<SWidget,1> local_f8;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar9 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar9) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_e8);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    bVar9 = ProcessMouseAction(this,param_1,param_2,false);
    if (bVar9) {
      FReply::FReply(&local_d0,true);
      plVar3 = &this->_padding_;
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)plVar3,&local_f8);
      pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar7->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.Object = pSVar4;
      local_f8.SharedReferenceCount.ReferenceController = pTVar2;
      pFVar8 = FReply::CaptureMouse(&local_d0,&local_f8);
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)plVar3,&local_f8);
      pTVar5 = (pTVar7->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar7->Object;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.Object = pSVar4;
      local_f8.SharedReferenceCount.ReferenceController = pTVar5;
      pFVar8 = FReply::UseHighPrecisionMouseMovement(pFVar8,&local_f8);
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)plVar3,&local_f8);
      pTVar6 = (pTVar7->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar7->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.DestructionSentinel._0_8_ = pSVar4;
      local_e8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar6;
      pFVar8 = FReply::SetUserFocus(pFVar8,(TSharedRef<SWidget,1> *)&local_e8,Mouse,false);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FReply::~FReply(&local_d0);
      return __return_storage_ptr__;
    }
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnMouseCaptureEnd);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1428891c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorWheel::OnMouseButtonUp
          (SColorWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FDeprecateSlateVector2D FVar6;
  float fVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  FReply *pFVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res20;
  float fStackX_24;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  FReadAccessScope local_108;
  FReply local_f0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar9 = SWidget::HasMouseCapture((SWidget *)this), bVar9)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    this->bDragging = false;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_108);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    FVar6 = param_1->Size;
    fVar12 = *(float *)&(this->SelectedColor).field_0x4;
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    local_110 = FVar6;
    __libm_sse2_sincosf_();
    fVar7 = __real_3f000000;
    local_118 = extraout_XMM0_Db * fVar12 * (float)local_110;
    fStack_114 = extraout_XMM0_Da * fVar12 * local_110._4_4_;
    local_res20 = FVar6._0_4_;
    fStackX_24 = FVar6._4_4_;
    fVar12 = (local_res20 + local_118) * __real_3f000000;
    fVar13 = (fStackX_24 + fStack_114) * __real_3f000000;
    FReply::FReply(&local_f0,true);
    FVar8.ReferenceController = local_f0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_f0.MouseCaptor.Object = (SWidget *)0x0;
    local_f0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar8.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
      }
    }
    local_f0.bUseHighPrecisionMouse = 0;
    local_f0.bReleaseMouseCapture = 1;
    fVar11 = fVar13 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
             fVar12 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    fVar12 = fVar12 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
             fVar13 * (param_1->AccumulatedRenderTransform).M.M[1][1] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    fStack_114 = (float)((int)ROUND(fVar12 + fVar12 + fVar7) >> 1);
    local_118 = (float)((int)ROUND(fVar11 + fVar11 + fVar7) >> 1);
    pFVar10 = FReply::SetMousePos(&local_f0,(TIntPoint<int> *)&local_118);
    FReply::FReply(__return_storage_ptr__,pFVar10);
    FReply::~FReply(&local_f0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 142889cf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorWheel::OnMouseMove
          (SColorWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  undefined8 local_48;
  TTransform2<float> local_40;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    if (this->bDragging == false) {
      this->bDragging = true;
      pTVar2 = Inverse<TTransform2<float>_>(&local_40,&param_1->AccumulatedRenderTransform);
      local_48._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
      local_48._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
      fVar3 = (float)local_48._4_4_ * (pTVar2->M).M[1][0];
      local_48._4_4_ =
           (float)(undefined4)local_48 * (pTVar2->M).M[0][1] +
           (float)local_48._4_4_ * (pTVar2->M).M[1][1] + (pTVar2->Trans).field0_0x0._s_0.Y;
      local_48._0_4_ =
           fVar3 + (float)(undefined4)local_48 * (pTVar2->M).M[0][0] +
           (pTVar2->Trans).field0_0x0._s_0.X;
      (this->LastWheelPosition).field0_0x0 = local_48;
    }
    ProcessMouseAction(this,param_1,param_2,true);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 14288e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SColorWheel::OnPaint
          (SColorWheel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  FDeprecateSlateVector2D FVar4;
  TVector2<float>_u_0_s_0 TVar5;
  FSlateBrush *pFVar6;
  bool bVar7;
  FSlateColor *pFVar8;
  ESlateDrawEffect EVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar10;
  undefined1 auStackY_128 [32];
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  FLinearColor_u_0 local_e8;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  TTransform2<float> local_c0;
  TVector2<float>_u_0 local_a8;
  float local_a0;
  undefined8 local_9c;
  FDeprecateSlateVector2D local_94;
  float local_8c [2];
  float afStack_84 [2];
  TVector2<float>_u_0 local_7c;
  byte local_74;
  ulonglong local_70;
  
  fVar1 = __real_3f000000;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((!param_7) || (bVar7 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar7 = false;
  }
  EVar9 = DisabledEffect;
  if (bVar7) {
    EVar9 = None;
  }
  local_d0._0_4_ = SUB84(param_2->Size,0);
  FVar4 = this->SelectorImage->ImageSize;
  local_d0._4_4_ = SUB84(param_2->Size,4);
  fStack_f4 = local_d0._4_4_ * __real_3f000000;
  local_f8 = (float)local_d0 * __real_3f000000;
  local_d0 = _local_f8;
  EVar2 = (this->Image->TintColor).ColorUseRule;
  pFVar8 = &this->Image->TintColor;
  local_c8 = (TVector2<float>_u_0)FVar4;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar8 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar8);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar8 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar8 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_a8 = (param_2->AbsolutePosition).field0_0x0;
  local_e8._s_0.R =
       (pFVar8->SpecifiedColor).field0_0x0._s_0.R * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R
  ;
  local_94 = param_2->Size;
  local_e8._s_0.G =
       (pFVar8->SpecifiedColor).field0_0x0._s_0.G * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G
  ;
  local_9c = 0;
  local_74 = param_2->bHasRenderTransform * '\x02' | local_74 & 0xfc;
  local_e8._s_0.B =
       (pFVar8->SpecifiedColor).field0_0x0._s_0.B * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B
  ;
  local_e8._s_0.A =
       (pFVar8->SpecifiedColor).field0_0x0._s_0.A * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A
  ;
  local_a0 = param_2->Scale;
  local_8c = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_84 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_7c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_a8._s_0,this->Image,EVar9,
             (FLinearColor *)&local_e8._s_0);
  if (this->bShouldDrawSelector != false) {
    fVar10 = *(float *)&(this->SelectedColor).field_0x4;
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    __libm_sse2_sincosf_();
    local_e8._s_0.R = extraout_XMM0_Db * fVar10 * (float)local_d0 + (float)local_d0;
    local_e8._s_0.G = extraout_XMM0_Da * fVar10 * local_d0._4_4_ + local_d0._4_4_;
    fStack_f4 = local_e8._s_0.G;
    local_f8 = local_e8._s_0.R;
    EVar2 = (this->SelectorImage->TintColor).ColorUseRule;
    pFVar8 = &this->SelectorImage->TintColor;
    local_d8 = local_e8._s_0.R - (float)(undefined4)local_c8 * fVar1;
    local_d4 = local_e8._s_0.G - (float)local_c8._4_4_ * fVar1;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        pFVar8 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar8);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        pFVar8 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar8 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    TVar5 = (param_2->AbsolutePosition).field0_0x0._s_0;
    fVar1 = param_2->Scale;
    pFVar6 = this->SelectorImage;
    local_e8._s_0.G = TVar5.X;
    local_e8._s_0.B = TVar5.Y;
    local_f0 = (pFVar8->SpecifiedColor).field0_0x0._s_0.B *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    fStack_f4 = (pFVar8->SpecifiedColor).field0_0x0._s_0.G *
                (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_f8 = (pFVar8->SpecifiedColor).field0_0x0._s_0.R *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_ec = (pFVar8->SpecifiedColor).field0_0x0._s_0.A *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_c8._4_4_ = fVar1 * local_d4 + local_e8._s_0.B;
    local_c8._0_4_ = fVar1 * local_d8 + local_e8._s_0.G;
    local_e8._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
    local_e8._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_e8._s_0.B = (float)_UNK_15076b188;
    local_e8._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>
              (&local_c0,(TTransform2<float> *)&local_e8._s_0,&param_2->AccumulatedRenderTransform);
    local_a8 = local_c8;
    local_74 = param_2->bHasRenderTransform * '\x02' | local_74 & 0xfc;
    local_9c = 0;
    local_8c[0] = local_c0.M.M[0][0];
    local_8c[1] = local_c0.M.M[0][1];
    afStack_84[0] = local_c0.M.M[1][0];
    afStack_84[1] = local_c0.M.M[1][1];
    local_7c = local_c0.Trans.field0_0x0;
    local_a0 = fVar1;
    local_94 = FVar4;
    FSlateDrawElement::MakeBox
              (param_4,param_5 + 1,(FPaintGeometry *)&local_a8._s_0,pFVar6,EVar9,
               (FLinearColor *)&local_f8);
    param_5 = param_5 + 1;
  }
  return param_5;
}

// ProcessMouseAction @ 142892e60

bool __thiscall
SColorWheel::ProcessMouseAction
          (SColorWheel *this,FGeometry *param_1,FPointerEvent *param_2,bool param_3)

{
  longlong *plVar1;
  float fVar2;
  float *pfVar3;
  TTransform2<float> *pTVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar6;
  float fVar7;
  TVector2<float>_u_0_s_0 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  TTransform2<float> local_60 [3];
  
  fVar2 = __real_3f800000;
  if (this->bDragging == false) {
    pTVar4 = Inverse<TTransform2<float>_>(local_60,&param_1->AccumulatedRenderTransform);
    local_88.Y = SUB84(param_2->ScreenSpacePosition,4);
    local_88.X = SUB84(param_2->ScreenSpacePosition,0);
    fVar5 = local_88.Y * (pTVar4->M).M[1][0];
    local_88.Y = local_88.X * (pTVar4->M).M[0][1] + local_88.Y * (pTVar4->M).M[1][1] +
                 (pTVar4->Trans).field0_0x0._s_0.Y;
    local_88.X = fVar5 + local_88.X * (pTVar4->M).M[0][0] + (pTVar4->Trans).field0_0x0._s_0.X;
  }
  else {
    local_88.X = *(float *)&param_2->CursorDelta * __real_3eb33333;
    local_88.Y = *(float *)&(param_2->CursorDelta).field_0x4 * __real_3eb33333;
    if ((param_2->_padding_ & 0xc) != 0) {
      pfVar3 = TAttribute<float>::Get(&this->CtrlMultiplier);
      local_88.Y = *pfVar3 * local_88.Y;
      local_88.X = *pfVar3 * local_88.X;
    }
    local_88.X = local_88.X + (this->LastWheelPosition).field0_0x0._s_0.X;
    local_88.Y = local_88.Y + (this->LastWheelPosition).field0_0x0._s_0.Y;
    local_78 = param_1->Size;
    fVar7 = (float)local_78 * __real_3f000000;
    fVar6 = local_88.X - fVar7;
    fVar5 = local_88.Y - fVar7;
    if (fVar7 < SQRT(fVar5 * fVar5 + fVar6 * fVar6)) {
      FGenericPlatformMath::Atan2(fVar5,fVar6);
      __libm_sse2_sincosf_();
      local_88.Y = (extraout_XMM0_Da + fVar2) * fVar7;
      local_88.X = (extraout_XMM0_Db + fVar2) * fVar7;
    }
    (this->LastWheelPosition).field0_0x0._s_0 = local_88;
  }
  local_78 = param_1->Size;
  local_68._0_4_ = (float)local_78;
  local_68._4_4_ = local_78._4_4_;
  fVar6 = (local_88.X * __real_40000000 - (float)local_68) / (float)local_68;
  fVar5 = (local_88.Y * __real_40000000 - local_68._4_4_) / local_68._4_4_;
  fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
  if ((fVar7 <= fVar2) || (param_3)) {
    local_68 = local_78;
    fVar5 = FGenericPlatformMath::Atan2(fVar5,fVar6);
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + __real_40c90fdb;
    }
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&this->SelectedColor,(SWidget *)this,Member);
    uStack_70 = *(undefined4 *)&(this->SelectedColor).field_0x8;
    uStack_6c = *(undefined4 *)&(this->SelectedColor).field_0xc;
    local_78._0_4_ = fVar5 * __real_42652ee0;
    local_78._4_4_ = fVar7;
    if (fVar2 <= fVar7) {
      local_78._4_4_ = fVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               (FReadAccessScope *)local_60);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_60);
  }
  return fVar7 <= fVar2;
}

