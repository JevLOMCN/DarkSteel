// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// SColorSpectrum @ 1428479d0

SColorSpectrum * __thiscall SColorSpectrum::SColorSpectrum(SColorSpectrum *this)

{
  TSlateAttribute<FLinearColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  code *pcVar1;
  bool bVar2;
  SColorSpectrum *pSVar3;
  FLinearColor_u_0 local_18;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this_00 = &this->SelectedColor;
  this->_padding_ = (longlong)&___7SColorSpectrum__6B_;
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
      pSVar3 = (SColorSpectrum *)(*pcVar1)();
      return pSVar3;
    }
  }
  (this->CtrlMultiplier).Value = 0.0;
  (this->CtrlMultiplier).bIsSet = false;
  *(undefined8 *)&(this->CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->CtrlMultiplier).Getter.field_0x8 = 0;
  this->bDragging = false;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  return this;
}

// ~SColorSpectrum @ 14284a780

void __thiscall SColorSpectrum::~SColorSpectrum(SColorSpectrum *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorSpectrum__6B_;
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

// CalcRelativeSelectedPosition @ 142856f30

TVector2<double> * __thiscall
SColorSpectrum::CalcRelativeSelectedPosition
          (SColorSpectrum *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = *(float *)&(this->SelectedColor).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(*(float *)&this->SelectedColor * __real_3b360b61);
  if (fVar1 == __real_3f800000) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(__real_3f800000 - *(float *)&(this->SelectedColor).field_0x8 * __real_3f000000);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * __real_3f000000);
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1428580b0

TVector2<double> * __thiscall
SColorSpectrum::ComputeDesiredSize
          (SColorSpectrum *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&(this->Image->ImageSize).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&this->Image->ImageSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 142859400

void __thiscall SColorSpectrum::Construct(SColorSpectrum *this,FArguments *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"ColorSpectrum.Spectrum");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0);
  this->Image = pFVar4;
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"ColorSpectrum.Selector");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0);
  this->SelectorImage = pFVar4;
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

// OnCursorQuery @ 1428851b0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SColorSpectrum::OnCursorQuery
          (SColorSpectrum *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
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

// OnMouseButtonDoubleClick @ 142887540

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorSpectrum::OnMouseButtonDoubleClick
          (SColorSpectrum *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142888170

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorSpectrum::OnMouseButtonDown
          (SColorSpectrum *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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
    ProcessMouseAction(this,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_e8);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
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
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142888ef0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorSpectrum::OnMouseButtonUp
          (SColorSpectrum *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  float fVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  FReply *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TIntPoint<int>_u_0 local_118;
  FReadAccessScope local_110;
  FReply local_f8;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar8 = SWidget::HasMouseCapture((SWidget *)this), bVar8)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    this->bDragging = false;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_110);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_110);
    fVar6 = __real_3f000000;
    fVar11 = *(float *)&(this->SelectedColor).field_0x4;
    if (fVar11 == __real_3f800000) {
      fVar11 = __real_3f800000 - *(float *)&(this->SelectedColor).field_0x8 * __real_3f000000;
    }
    else {
      fVar11 = fVar11 * __real_3f000000;
    }
    fVar11 = fVar11 * *(float *)&(param_1->Size).field_0x4;
    fVar10 = *(float *)&this->SelectedColor * __real_3b360b61 * *(float *)&param_1->Size;
    FReply::FReply(&local_f8,true);
    FVar7.ReferenceController = local_f8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_f8.MouseCaptor.Object = (SWidget *)0x0;
    local_f8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
      }
    }
    local_f8.bUseHighPrecisionMouse = 0;
    local_f8.bReleaseMouseCapture = 1;
    fVar12 = fVar11 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
             fVar10 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    fVar11 = fVar10 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
             fVar11 * (param_1->AccumulatedRenderTransform).M.M[1][1] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    local_118._s_0.X = (int)ROUND(fVar12 + fVar12 + fVar6) >> 1;
    local_118._s_0.Y = (int)ROUND(fVar11 + fVar11 + fVar6) >> 1;
    pFVar9 = FReply::SetMousePos(&local_f8,(TIntPoint<int> *)&local_118._s_0);
    FReply::FReply(__return_storage_ptr__,pFVar9);
    FReply::~FReply(&local_f8);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 142889c20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorSpectrum::OnMouseMove
          (SColorSpectrum *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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
      (this->LastSpectrumPosition).field0_0x0 = local_48;
    }
    ProcessMouseAction(this,param_1,param_2);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 14288e010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SColorSpectrum::OnPaint
          (SColorSpectrum *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined1 *puVar1;
  float fVar2;
  ESlateColorStylingMode EVar3;
  undefined1 uVar4;
  FSlateBrush *pFVar5;
  FDeprecateSlateVector2D FVar6;
  TVector2<float>_u_0_s_0 TVar7;
  bool bVar8;
  FSlateColor *pFVar9;
  ESlateDrawEffect EVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_108 [32];
  undefined8 local_d8;
  TTransform2<float> local_d0;
  TTransform2<float> local_b8;
  FLinearColor_u_0 local_a0;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  FDeprecateSlateVector2D local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((!param_7) || (bVar8 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar8 = false;
  }
  EVar10 = DisabledEffect;
  if (bVar8) {
    EVar10 = None;
  }
  EVar3 = (this->Image->TintColor).ColorUseRule;
  pFVar9 = &this->Image->TintColor;
  if (EVar3 != UseColor_Specified) {
    if (EVar3 == UseColor_ColorTable) {
      pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
    }
    else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
      pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_90 = (param_2->AbsolutePosition).field0_0x0;
  local_7c = param_2->Size;
  local_84 = 0;
  local_b8.M.M[0][1] =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.G * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G
  ;
  local_b8.M.M[0][0] =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.R * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R
  ;
  local_5c = param_2->bHasRenderTransform * '\x02' | local_5c & 0xfc;
  local_88 = param_2->Scale;
  local_74 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_6c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_b8.M.M[1][1] =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.A * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A
  ;
  local_b8.M.M[1][0] =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.B * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B
  ;
  local_64 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_90._s_0,this->Image,EVar10,
             (FLinearColor *)&local_b8);
  fVar12 = __real_3f800000;
  puVar1 = &(this->SelectedColor).field_0x4;
  if ((__real_3f800000 < *(float *)puVar1 || __real_3f800000 == *(float *)puVar1) ||
     (puVar1 = &(this->SelectedColor).field_0x8,
     __real_3f800000 < *(float *)puVar1 || __real_3f800000 == *(float *)puVar1)) {
    EVar3 = (this->SelectorImage->TintColor).ColorUseRule;
    pFVar9 = &this->SelectorImage->TintColor;
    if (EVar3 != UseColor_Specified) {
      if (EVar3 == UseColor_ColorTable) {
        pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
      }
      else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
        pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    pFVar5 = this->SelectorImage;
    local_a0._s_0.R =
         (pFVar9->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_a0._s_0.G =
         (pFVar9->SpecifiedColor).field0_0x0._s_0.G *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_a0._s_0.B =
         (pFVar9->SpecifiedColor).field0_0x0._s_0.B *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_a0._s_0.A =
         (pFVar9->SpecifiedColor).field0_0x0._s_0.A *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    fVar2 = *(float *)&(this->SelectedColor).field_0x4;
    if (fVar2 == fVar12) {
      fVar12 = fVar12 - *(float *)&(this->SelectedColor).field_0x8 * __real_3f000000;
    }
    else {
      fVar12 = fVar2 * __real_3f000000;
    }
    FVar6 = pFVar5->ImageSize;
    local_d0.M.M[0][0] = *(float *)&this->SelectedColor * __real_3b360b61 * *(float *)&param_2->Size
    ;
    fVar2 = param_2->Scale;
    fVar11 = fVar12 * *(float *)&(param_2->Size).field_0x4 -
             *(float *)&(pFVar5->ImageSize).field_0x4 * __real_3f000000;
    fVar12 = local_d0.M.M[0][0] - *(float *)&pFVar5->ImageSize * __real_3f000000;
    TVar7 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_d0.M.M[0][1] = TVar7.X;
    local_d0.M.M[1][0] = TVar7.Y;
    local_b8.M.M[0][1] = fVar11;
    local_b8.M.M[0][0] = fVar12;
    local_b8.Trans.field0_0x0 = (TVector2<float>_u_0)local_b8.M.M[0];
    local_b8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_b8.M.M[0][1] = _UNK_15076b184;
    local_b8.M.M[1][0] = _UNK_15076b188;
    local_b8.M.M[1][1] = _UNK_15076b18c;
    local_d8._4_4_ = fVar2 * fVar11 + local_d0.M.M[1][0];
    local_d8._0_4_ = fVar2 * fVar12 + local_d0.M.M[0][1];
    Concatenate<TTransform2<float>_>(&local_d0,&local_b8,&param_2->AccumulatedRenderTransform);
    local_74 = (float  [2])CONCAT44(local_d0.M.M[0][1],local_d0.M.M[0][0]);
    afStack_6c = (float  [2])CONCAT44(local_d0.M.M[1][1],local_d0.M.M[1][0]);
    local_90 = local_d8;
    local_5c = param_2->bHasRenderTransform * '\x02' | local_5c & 0xfc;
    local_84 = 0;
    local_64 = local_d0.Trans.field0_0x0;
    local_88 = fVar2;
    local_7c = FVar6;
    FSlateDrawElement::MakeBox
              (param_4,param_5 + 1,(FPaintGeometry *)&local_90._s_0,pFVar5,EVar10,
               (FLinearColor *)&local_a0._s_0);
    param_5 = param_5 + 1;
  }
  return param_5;
}

// ProcessMouseAction @ 142892bc0

void __thiscall
SColorSpectrum::ProcessMouseAction(SColorSpectrum *this,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  TTransform2<float> *pTVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float local_68 [2];
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  float afStack_50 [2];
  
  if (this->bDragging == false) {
    pTVar5 = Inverse<TTransform2<float>_>
                       ((TTransform2<float> *)&local_58,&param_1->AccumulatedRenderTransform);
    local_68[0] = SUB84(param_2->ScreenSpacePosition,0);
    local_68[1] = SUB84(param_2->ScreenSpacePosition,4);
    local_58._4_4_ =
         local_68[1] * (pTVar5->M).M[1][1] + local_68[0] * (pTVar5->M).M[0][1] +
         (pTVar5->Trans).field0_0x0._s_0.Y;
    fVar7 = local_68[1] * (pTVar5->M).M[1][0] + local_68[0] * (pTVar5->M).M[0][0] +
            (pTVar5->Trans).field0_0x0._s_0.X;
  }
  else {
    fVar7 = *(float *)&param_2->CursorDelta * __real_3ecccccd;
    fVar8 = *(float *)&(param_2->CursorDelta).field_0x4 * __real_3ecccccd;
    if ((param_2->_padding_ & 0xc) != 0) {
      pfVar4 = TAttribute<float>::Get(&this->CtrlMultiplier);
      fVar8 = *pfVar4 * fVar8;
      fVar7 = *pfVar4 * fVar7;
    }
    fVar7 = fVar7 + (this->LastSpectrumPosition).field0_0x0._s_0.X;
    local_58._4_4_ = fVar8 + (this->LastSpectrumPosition).field0_0x0._s_0.Y;
    local_68[0] = SUB84(param_1->Size,0);
    if (local_68[0] <= fVar7) {
      fVar7 = local_68[0];
    }
    local_68[1] = SUB84(param_1->Size,4);
    if (local_68[1] <= (float)local_58._4_4_) {
      local_58._4_4_ = local_68[1];
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if ((float)local_58._4_4_ <= 0.0) {
      local_58._4_4_ = 0.0;
    }
    local_58._0_4_ = fVar7;
    (this->LastSpectrumPosition).field0_0x0 = local_58;
  }
  dVar3 = __real_3ff0000000000000;
  local_68[0] = SUB84(param_1->Size,0);
  local_68[1] = SUB84(param_1->Size,4);
  local_58._4_4_ = (float)local_58._4_4_ / local_68[1];
  local_58._0_4_ = fVar7 / local_68[0];
  local_68[0] = fVar7 / local_68[0];
  local_68[1] = (float)local_58._4_4_;
  dVar2 = (double)(float)local_58._4_4_;
  if (__real_3ff0000000000000 <= (double)(float)local_58._4_4_) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
            ((FSlateAttributeImpl *)&this->SelectedColor,(SWidget *)this,Member);
  local_58._0_4_ = *(undefined4 *)&(this->SelectedColor).field_0x0;
  local_58._4_4_ = *(undefined4 *)&(this->SelectedColor).field_0x4;
  afStack_50[0] = *(float *)&(this->SelectedColor).field_0x8;
  afStack_50[1] = *(float *)&(this->SelectedColor).field_0xc;
  dVar6 = (double)local_68[0];
  if (dVar3 <= (double)local_68[0]) {
    dVar6 = dVar3;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  local_68[0] = (float)(dVar6 * __real_4076800000000000);
  if (dVar2 <= __real_3fe0000000000000) {
    local_68[1] = (float)(dVar2 + dVar2);
    fStack_60 = __real_3f800000;
  }
  else {
    local_68[1] = __real_3f800000;
    fStack_60 = (float)((dVar3 - dVar2) + (dVar3 - dVar2));
  }
  fStack_5c = afStack_50[1];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             (FReadAccessScope *)&local_58);
  if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  return;
}

