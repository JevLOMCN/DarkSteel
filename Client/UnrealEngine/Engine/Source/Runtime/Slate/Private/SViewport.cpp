// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 47

// SViewport @ 1429bba10

/* WARNING: Enum "Type": Some values do not have unique names */

SViewport * __thiscall SViewport::SViewport(SViewport *this)

{
  TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<UE::Math::TVector2<double>,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  SViewport *pSVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  pTVar1 = &this->ShowDisabledEffect;
  this->_padding_ = (longlong)&___7SViewport__6B_;
  (this->ViewportInterface).Object = (ISlateViewport *)0x0;
  (this->ViewportInterface).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedParentWindow).Object = (SWindow *)0x0;
  (this->CachedParentWindow).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTimerHandle).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1->field_0x0 = 1;
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SViewport *)(*pcVar3)();
      return pSVar6;
    }
  }
  pTVar2 = &this->ViewportSize;
  local_res10 = 0x43a00000;
  uStackX_14 = 0x43700000;
  local_res18 = 0x4370000043a00000;
  *(undefined8 *)&pTVar2->field_0x0 = 0x4074000000000000;
  *(undefined8 *)&(this->ViewportSize).field_0x8 = 0x406e000000000000;
  iVar5 = _finite(*(double *)&pTVar2->field_0x0);
  if (iVar5 != 0) {
    iVar5 = _finite(*(double *)&(this->ViewportSize).field_0x8);
    if (iVar5 != 0) goto LAB_1429bbaff;
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res8);
LAB_1429bbaff:
  if ((pTVar2 < this) || (this + 1 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SViewport *)(*pcVar3)();
      return pSVar6;
    }
  }
  (this->CustomHitTestPath).Object = (ICustomHitTestPath *)0x0;
  (this->CustomHitTestPath).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bRenderDirectlyToWindow = false;
  this->bEnableGammaCorrection = true;
  this->bReverseGammaCorrection = false;
  this->bEnableStereoRendering = false;
  return this;
}

// ~SViewport @ 1429c03a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::~SViewport(SViewport *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7SViewport__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomHitTestPath).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->CachedParentWindow).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ComputeDesiredSize @ 1429cf6a0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SViewport::ComputeDesiredSize
          (SViewport *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->ViewportSize).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->ViewportSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Construct @ 1429d8fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::Construct(SViewport *this,FArguments *param_1)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> *paVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<ISlateMetaData,1> local_28;
  longlong local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShowDisabledEffect,(SWidget *)this,&param_1->_ShowEffectWhenDisabled,None);
  this->bRenderDirectlyToWindow = param_1->_RenderDirectlyToWindow;
  this->bEnableGammaCorrection = param_1->_EnableGammaCorrection;
  this->bReverseGammaCorrection = param_1->_ReverseGammaCorrection;
  this->bEnableBlending = param_1->_EnableBlending;
  this->bEnableStereoRendering = param_1->_EnableStereoRendering;
  this->bIgnoreTextureAlpha = param_1->_IgnoreTextureAlpha;
  this->bPreMultipliedAlpha = param_1->_PreMultipliedAlpha;
  (this->ViewportInterface).Object = (param_1->_ViewportInterface).Object;
  pTVar7 = (param_1->_ViewportInterface).SharedReferenceCount.ReferenceController;
  if (pTVar7 != (this->ViewportInterface).WeakReferenceCount.ReferenceController) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar6 = &pTVar2->WeakReferenceCount;
      aVar1 = *paVar6;
      *paVar6 = (atomic<int>)((int)*paVar6 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,1);
      }
    }
    (this->ViewportInterface).WeakReferenceCount.ReferenceController = pTVar7;
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ViewportSize,(SWidget *)this,&param_1->_ViewportSize,None);
  local_28.SharedReferenceCount.ReferenceController = ::operator_new(0xb0);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_28.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSimulatedNavigationMetaData___00_SharedPointerInternals__6B_
    ;
    local_28.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)&___7FSimulatedNavigationMetaData__6B_;
    local_28.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[7]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[8]._padding_ = 0;
    local_28.SharedReferenceCount.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[9].SharedReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[9].WeakReferenceCount = (atomic<int>)0x0;
    local_28.SharedReferenceCount.ReferenceController[10]._padding_ = 0;
    *(undefined1 *)&local_28.SharedReferenceCount.ReferenceController[10].SharedReferenceCount = 0;
    for (paVar6 = &local_28.SharedReferenceCount.ReferenceController[1].SharedReferenceCount;
        paVar6 != &local_28.SharedReferenceCount.ReferenceController[10].SharedReferenceCount;
        paVar6 = paVar6 + 6) {
      *(undefined1 *)paVar6 = 3;
    }
    if ((local_28.SharedReferenceCount.ReferenceController + 1 == (TReferenceControllerBase<1> *)0x0
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = local_28.SharedReferenceCount.ReferenceController;
    local_28.Object = (ISlateMetaData *)(local_28.SharedReferenceCount.ReferenceController + 1);
  }
  SWidget::AddMetadataInternal((SWidget *)this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar7 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = this->_padding_;
  pTStack_10 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// EnsureTick @ 1429e4c10

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SViewport::EnsureTick(SViewport *this,double param_1,float param_2)

{
  return Continue;
}

// GetCustomHitTestPath @ 1429eb0d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ICustomHitTestPath,1> * __thiscall
SViewport::GetCustomHitTestPath
          (SViewport *this,TSharedPtr<ICustomHitTestPath,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->CustomHitTestPath).Object;
  pTVar1 = (this->CustomHitTestPath).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFocusBrush @ 1429eb730

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SViewport::GetFocusBrush(SViewport *this)

{
  return (FSlateBrush *)0x0;
}

// OnAnalogValueChanged @ 1429f7ea0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnAnalogValueChanged
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429f7f12;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429f7f38;
  }
LAB_1429f7f12:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429f7f38:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 200))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnArrangeChildren @ 1429f9020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SViewport::OnArrangeChildren(SViewport *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  ICustomHitTestPath *pIVar1;
  
  SCompoundWidget::OnArrangeChildren((SCompoundWidget *)this,param_1,param_2);
  if ((param_2->bAllow3DWidgets != false) &&
     (pIVar1 = (this->CustomHitTestPath).Object, pIVar1 != (ICustomHitTestPath *)0x0)) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_2);
  }
  return;
}

// OnCursorQuery @ 1429f9b90

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SViewport::OnCursorQuery
          (SViewport *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  FCursorReply *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TReferenceControllerBase<1> *local_res8;
  undefined1 local_98 [8];
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_28;
  
  iVar9 = 0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar10 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar10 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar10->SharedReferenceCount < 1)) {
    puVar6 = local_98;
    local_98[0] = 0;
    local_60 = 1;
    local_90 = 0;
    pTStack_88 = (TReferenceControllerBase<1> *)0x0;
    uVar3 = 0;
    bVar11 = false;
    local_80 = 0;
    pTStack_78 = (TReferenceControllerBase<1> *)0x0;
    iVar7 = 4;
    local_70 = 0;
    pTStack_68 = (TReferenceControllerBase<1> *)0x0;
    goto LAB_1429f9cae;
  }
  local_res8 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar8 = local_res8;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (local_res8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1429f9c11:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    local_res8 = pTVar8;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FCursorReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    aVar2 = local_res8->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429f9c11;
      LOCK();
      aVar4 = local_res8->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        local_res8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar10 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar8 = local_res8;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_1429f9c11;
  }
  puVar6 = (undefined1 *)(**(code **)(pTVar10->_padding_ + 0x60))(pTVar10,local_58,param_1,param_2);
  bVar11 = true;
  uVar3 = *puVar6;
  iVar7 = iVar9;
  iVar9 = 1;
LAB_1429f9cae:
  *(undefined1 *)&__return_storage_ptr__->_padding_ = uVar3;
  __return_storage_ptr__->_padding_ = *(longlong *)(puVar6 + 8);
  __return_storage_ptr__->_padding_ = *(longlong *)(puVar6 + 0x10);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  (__return_storage_ptr__->CursorWindow).Object = *(SWindow **)(puVar6 + 0x18);
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(puVar6 + 0x20);
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  (__return_storage_ptr__->CursorWidget).Object = *(SWidget **)(puVar6 + 0x28);
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(puVar6 + 0x30);
  *(undefined8 *)(puVar6 + 0x30) = 0;
  *(undefined8 *)(puVar6 + 0x28) = 0;
  __return_storage_ptr__->MouseCursor = *(Type *)(puVar6 + 0x38);
  if (iVar7 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  if (iVar9 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  return __return_storage_ptr__;
}

// OnFinishedPointerInput @ 1429f9e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::OnFinishedPointerInput(SViewport *this)

{
  ISlateViewport *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429f9e90;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pIVar1 = (this->ViewportInterface).Object;
    if (pIVar1 != (ISlateViewport *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x120))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1429f9e90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// OnFocusLost @ 1429f9ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::OnFocusLost(SViewport *this,FFocusEvent *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if ((this->ViewportInterface).Object == (ISlateViewport *)0x0) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar5->SharedReferenceCount < 1) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429f9f51;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429f9f77;
  }
LAB_1429f9f51:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1429f9f77:
  (**(code **)(pTVar6->_padding_ + 0x140))(pTVar6,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnFocusReceived @ 1429fa000

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnFocusReceived
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FFocusEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_178;
  FReply local_c0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_178,false);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fa071;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fa097;
  }
LAB_1429fa071:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fa097:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xd8))(pTVar7,&local_c0,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnKeyChar @ 1429fa430

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnKeyChar
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fa4a2;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fa4c8;
  }
LAB_1429fa4a2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fa4c8:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xd0))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1429fa720

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnKeyDown
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fa792;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fa7b8;
  }
LAB_1429fa792:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fa7b8:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xb8))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnKeyUp @ 1429fa900

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnKeyUp(SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                  FKeyEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fa972;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fa998;
  }
LAB_1429fa972:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fa998:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xc0))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMapCursor @ 1429faa30

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TSharedRef<SWidget,1>_> * __thiscall
SViewport::OnMapCursor
          (SViewport *this,TOptional<TSharedRef<SWidget,1>_> *__return_storage_ptr__,
          FCursorReply *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TOptional<TSharedRef<SWidget,1>_> *pTVar7;
  longlong *plVar8;
  ISlateViewport *pIVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  uint uStackX_c;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar10 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar10 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar10->SharedReferenceCount < 1)) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    plVar8 = &local_28;
    bVar4 = false;
    bVar3 = false;
    bVar11 = true;
    local_28 = 0;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    goto LAB_1429fab16;
  }
  pTVar10 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pIVar9 = (ISlateViewport *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1429faaa3:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<TSharedRef<SWidget,1>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  else {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429faaa3;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    pIVar9 = (this->ViewportInterface).Object;
    if (pIVar9 == (ISlateViewport *)0x0) goto LAB_1429faaa3;
  }
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x68))(pIVar9,&local_18,param_1);
  bVar4 = true;
  bVar3 = true;
  bVar11 = false;
LAB_1429fab16:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((SWidget *)*plVar8 != (SWidget *)0x0) {
    (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)*plVar8;
    pTVar1 = (TReferenceControllerBase<1> *)plVar8[1];
    (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
         pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if ((bVar11) && (local_28 != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if ((bVar3) && (local_18 != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  return __return_storage_ptr__;
}

// OnMotionDetected @ 1429faba0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnMotionDetected
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FMotionEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fac12;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fac38;
  }
LAB_1429fac12:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fac38:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0x110))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1429faec0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnMouseButtonDoubleClick
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429faf32;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429faf58;
  }
LAB_1429faf32:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429faf58:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xb0))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1429fb3e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnMouseButtonDown
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fb452;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fb478;
  }
LAB_1429fb452:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fb478:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0x80))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1429fb6d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnMouseButtonUp
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fb742;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fb768;
  }
LAB_1429fb742:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fb768:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0x88))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 1429fb800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::OnMouseEnter(SViewport *this,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  if ((this->ViewportInterface).Object == (ISlateViewport *)0x0) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar5->SharedReferenceCount < 1) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fb877;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fb89d;
  }
LAB_1429fb877:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1429fb89d:
  (**(code **)(pTVar6->_padding_ + 0x90))(pTVar6,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnMouseLeave @ 1429fb8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::OnMouseLeave(SViewport *this,FPointerEvent *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  if ((this->ViewportInterface).Object == (ISlateViewport *)0x0) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar5->SharedReferenceCount < 1) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fb956;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fb97c;
  }
LAB_1429fb956:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1429fb97c:
  (**(code **)(pTVar6->_padding_ + 0x98))(pTVar6,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnMouseMove @ 1429fbe60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnMouseMove
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fbed2;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fbef8;
  }
LAB_1429fbed2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fbef8:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xa0))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 1429fc190

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnMouseWheel
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fc202;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429fc228;
  }
LAB_1429fc202:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429fc228:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xa8))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnNavigation @ 1429fc2c0

/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationReply * __thiscall
SViewport::OnNavigation
          (SViewport *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FNavigationReply *pFVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  TReferenceControllerBase<1> *local_res8;
  undefined8 local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  undefined8 local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  ForAnyElementType FStack_a0;
  ulonglong local_98;
  undefined1 local_90;
  FDestructionSentinel local_88;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [40];
  
  iVar9 = 0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar7 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar7 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar7->SharedReferenceCount < 1)) {
    puVar5 = &local_c8;
    local_90 = 3;
    local_98 = 0;
    local_c8 = 0;
    pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
    iVar8 = 4;
    local_b8 = 0;
    pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
    local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_a0.Data = (FScriptContainerElement *)0x0;
    iVar10 = iVar9;
    goto LAB_1429fc3d8;
  }
  local_res8 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar6 = local_res8;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (local_res8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1429fc343:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    local_res8 = pTVar6;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNavigationReply *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    aVar2 = local_res8->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429fc343;
      LOCK();
      aVar3 = local_res8->SharedReferenceCount;
      bVar11 = aVar2 == aVar3;
      if (bVar11) {
        local_res8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar11);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar6 = local_res8;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1429fc343;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0x130))(pTVar7,local_70,param_1,param_2);
  iVar8 = iVar9;
  iVar9 = 2;
  iVar10 = 1;
LAB_1429fc3d8:
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)*puVar5;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)puVar5[2];
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar5[3];
  puVar5[3] = 0;
  puVar5[2] = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->FocusDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 4));
  __return_storage_ptr__->BoundaryRule = *(EUINavigationRule *)(puVar5 + 7);
  if (iVar8 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a8,(FWriteAccessScope *)&local_88);
    if (((int)local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
      local_98 = local_98 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  }
  if (iVar9 != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
    if ((void *)local_50._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_50._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  }
  if (iVar10 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  return __return_storage_ptr__;
}

// OnPaint @ 142a004d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SViewport::OnPaint(SViewport *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int *piVar1;
  byte bVar2;
  FDeprecateSlateVector2D FVar3;
  code *pcVar4;
  FHittestGrid *this_00;
  int iVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  TVector2<float> TVar9;
  TVector2<float>_u_0 TVar10;
  ICustomHitTestPath *pIVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  atomic<int> aVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ViewportPaintTime> FVar19;
  longlong lVar20;
  FLinearColor *pFVar21;
  FSlateApplication *pFVar22;
  FDeprecateSlateVector2D *pFVar23;
  ISlateStyle *pIVar24;
  FSlateBrush *pFVar25;
  double *pdVar26;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ESlateDrawEffect EVar27;
  FNameEntryId FVar28;
  ISlateViewport *pIVar29;
  FName FVar30;
  TReferenceControllerBase<1> *pTVar31;
  ESlateDrawEffect EVar32;
  LARGE_INTEGER LVar33;
  bool bVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_3b8 [32];
  ushort local_354;
  undefined8 local_350;
  FSharedReferencer<1> local_348;
  LARGE_INTEGER local_340;
  uint local_338;
  float fStack_334;
  float local_330;
  undefined8 local_328;
  FNameEntryId local_320;
  uint local_31c;
  FColor_u_0 local_318 [2];
  FSlateWindowElementList *local_310;
  LARGE_INTEGER local_308;
  FName local_300;
  undefined8 local_2f8;
  TReferenceControllerBase<1> *local_2f0;
  FName local_2e8;
  FLinearColor_u_0 local_2d8;
  TVector2<float>_u_0 local_2c8;
  FPointerEvent local_2c0;
  TSharedPtr<ISlateViewport_const_,1> local_240;
  FName local_230 [2];
  FName local_220;
  FName local_218;
  FMargin local_210;
  FLinearColor_u_0 local_200;
  TTransform2<float> local_1f0;
  TTransform2<float> local_1d8;
  undefined1 local_1b8 [16];
  TReferenceControllerBase<1> *local_1a8;
  TReferenceControllerBase<1> *local_198;
  TReferenceControllerBase<1> *local_188;
  int local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined8 uStack_150;
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  ForElementType<FSetElementId> local_130;
  ulonglong local_120;
  TVector2<float>_u_0 local_118;
  float local_110;
  undefined8 local_10c;
  FDeprecateSlateVector2D local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  TVector2<float>_u_0 local_e0;
  float local_d8;
  undefined8 local_d4;
  FDeprecateSlateVector2D local_cc;
  float local_c4 [2];
  float afStack_bc [2];
  TVector2<float>_u_0 local_b4;
  byte local_ac;
  TVector2<float>_u_0 local_a8;
  float local_a0;
  undefined8 local_9c;
  ICustomHitTestPath *local_94;
  float local_8c [2];
  float afStack_84 [2];
  TVector2<float>_u_0 local_7c;
  byte local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_310 = param_4;
  local_340 = (LARGE_INTEGER)param_6;
  local_350 = (TVector2<float>_u_0)param_2;
  local_328 = (TVector2<float>_u_0)param_3;
  local_308 = (LARGE_INTEGER)param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"SViewport_OnPaint");
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId113,"SViewport_OnPaint",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SViewport.cpp"
               ,0x71);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId113);
  }
  FVar19 = StatPtr_STAT_ViewportPaintTime;
  if (StatPtr_STAT_ViewportPaintTime == (FThreadSafeStaticStat<FStat_STAT_ViewportPaintTime>)0x0) {
    pFVar18 = ::FName::FName(local_230,"STAT_ViewportPaintTime");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ViewportPaintTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewportPaintTime,*pFVar18,
                        L"Game UI Paint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar19;
  bVar6 = false;
  bVar8 = false;
  local_2e8.ComparisonIndex.Value = 0;
  local_2e8.Number = 0;
  bVar12 = false;
  bVar14 = false;
  FVar28 = FVar30.ComparisonIndex.Value;
  uVar15 = FVar30.Number;
  if ((FVar28.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_318[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_318[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_300.ComparisonIndex.Value = FVar28.Value;
        local_300.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_300,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SViewport.cpp"
                   ,0x72);
        bVar6 = true;
        bVar8 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_338 = FVar28.Value;
      fStack_334 = (float)uVar15;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar12 = true;
      goto LAB_142a006bb;
    }
  }
  bVar8 = bVar14;
  bVar6 = bVar12;
  bVar12 = false;
  FVar30 = local_2e8;
LAB_142a006bb:
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  if ((this->ShowDisabledEffect ==
       (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) || (bVar14))
  {
    EVar27 = None;
  }
  else {
    EVar27 = DisabledEffect;
  }
  EVar32 = EVar27 | IgnoreTextureAlpha;
  if (this->bIgnoreTextureAlpha == false) {
    EVar32 = EVar27;
  }
  EVar27 = EVar32 | NoGamma;
  if (this->bEnableGammaCorrection != false) {
    EVar27 = EVar32;
  }
  EVar32 = EVar27 | ReverseGamma;
  if (this->bReverseGammaCorrection == false) {
    EVar32 = EVar27;
  }
  if (this->bEnableBlending == false) {
    EVar32 = EVar32 | NoBlending;
  }
  else if (this->bPreMultipliedAlpha != false) {
    EVar32 = EVar32 | PreMultipliedAlpha;
  }
  pTVar31 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pIVar29 = (ISlateViewport *)0x0;
  local_338 = 0;
  fStack_334 = 0.0;
  local_2f0 = pTVar31;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar31->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar31 = (TReferenceControllerBase<1> *)0x0;
        local_2f0 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a00788;
      }
      LOCK();
      aVar16 = pTVar31->SharedReferenceCount;
      bVar35 = aVar7 == aVar16;
      if (bVar35) {
        pTVar31->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar16 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar16;
    } while (!bVar35);
    pIVar29 = (this->ViewportInterface).Object;
    local_338 = (uint)pIVar29;
    uVar15 = local_338;
    fStack_334 = (float)((ulonglong)pIVar29 >> 0x20);
    fVar37 = fStack_334;
    local_338 = uVar15;
    fStack_334 = fVar37;
    if (pIVar29 != (ISlateViewport *)0x0) {
      (**(code **)((longlong)*pIVar29 + 8))(pIVar29,param_2,local_328,local_310);
      local_338 = uVar15;
      fStack_334 = fVar37;
    }
  }
LAB_142a00788:
  if (this->bRenderDirectlyToWindow == false) {
    if (((pIVar29 == (ISlateViewport *)0x0) ||
        (lVar20 = (**(code **)((longlong)*pIVar29 + 0x18))(pIVar29), lVar20 == 0)) ||
       (lVar20 = (**(code **)((longlong)*pIVar29 + 0x18))(pIVar29), *(char *)(lVar20 + 8) != '!')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_2f8 = 0;
        local_2d8._s_0.R = (float)FColor::Black.field0_0x0._2_1_ * __real_3b808081;
        local_2d8._s_0.G = (float)FColor::Black.field0_0x0._1_1_ * __real_3b808081;
        local_2d8._s_0.B = (float)FColor::Black.field0_0x0._0_1_ * __real_3b808081;
        local_2c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_2d8._s_0.A = (float)FColor::Black.field0_0x0._3_1_ * __real_3b808081;
        local_210 = (FMargin)ZEXT416(0);
        FSlateBrush::FSlateBrush
                  ((FSlateBrush *)&BlackBrush,Image,(FName)0x0,&local_210,NoTile,NoImage,
                   (FDeprecateVector2DParameter *)&local_2c8._s_0,(FLinearColor *)&local_2d8._s_0,
                   (UObject *)0x0,false);
        BlackBrush._0_8_ = &___7FSlateColorBrush__6B_;
        atexit(`SViewport::OnPaint'::__l29::_dynamic_atexit_destructor_for__BlackBrush__);
        _Init_thread_footer(&::_TSS0);
      }
      if (BlackBrush._24_1_ == '\0') {
        pFVar21 = (FLinearColor *)&BlackBrush.field_0x8;
      }
      else if (BlackBrush._24_1_ == '\x01') {
        pFVar21 = FSlateColor::GetColorFromTable((FSlateColor *)&BlackBrush.field_0x8);
      }
      else if ((BlackBrush._24_1_ == '\x02') || (BlackBrush._24_1_ != '\x03')) {
        pFVar21 = (FLinearColor *)(local_340.QuadPart + 0x10);
      }
      else {
        pFVar21 = (FLinearColor *)(local_340.QuadPart + 0x20);
      }
      local_200._0_8_ = *(undefined8 *)&pFVar21->field0_0x0;
      local_200._8_8_ = *(undefined8 *)((longlong)&pFVar21->field0_0x0 + 8);
      local_e0 = (param_2->AbsolutePosition).field0_0x0;
      local_b4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      local_cc = param_2->Size;
      local_d4 = 0;
      local_d8 = param_2->Scale;
      local_ac = param_2->bHasRenderTransform * '\x02' | local_ac & 0xfc;
      local_c4 = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_bc = (param_2->AccumulatedRenderTransform).M.M[1];
      FSlateDrawElement::MakeBox
                (local_310,param_5,(FPaintGeometry *)&local_e0._s_0,(FSlateBrush *)&BlackBrush,
                 EVar32,(FLinearColor *)&local_200._s_0);
    }
    else {
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118 = (param_2->AbsolutePosition).field0_0x0;
      local_110 = param_2->Scale;
      local_ec = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      local_104 = param_2->Size;
      local_fc = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_f4 = (param_2->AccumulatedRenderTransform).M.M[1];
      local_e4 = param_2->bHasRenderTransform * '\x02' | local_e4 & 0xfc;
      local_10c = 0;
      local_240.Object = pIVar29;
      local_240.SharedReferenceCount.ReferenceController = pTVar31;
      FSlateDrawElement::MakeViewport
                (local_310,param_5,(FPaintGeometry *)&local_118._s_0,&local_240,EVar32,
                 (FLinearColor *)local_340);
    }
  }
  LVar33 = local_308;
  iVar17 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,(FPaintArgs *)local_308,param_2,
                      (FSlateRect *)local_328,local_310,param_5,(FWidgetStyle *)local_340,bVar14);
  if ((pIVar29 != (ISlateViewport *)0x0) &&
     (cVar13 = (**(code **)((longlong)*pIVar29 + 0x70))(pIVar29), cVar13 != '\0')) {
    pFVar22 = FSlateApplication::Get();
    pFVar23 = (FDeprecateSlateVector2D *)(**(code **)(*(longlong *)pFVar22 + 0x68))(pFVar22);
    TVar9 = UE::Math::TVector2<float>::ZeroVector;
    uVar15 = FSlateApplicationBase::CursorPointerIndex;
    FVar3 = *pFVar23;
    local_168._16_8_ = 0;
    uStack_150 = 0;
    local_130.InlineData[0] = '\0';
    local_130.InlineData[1] = '\0';
    local_130.InlineData[2] = '\0';
    local_130.InlineData[3] = '\0';
    local_130._padding_ = 0;
    pcVar4 = *(code **)((longlong)*pIVar29 + 0x60);
    local_354 = (ushort)iVar17;
    local_2c0._padding_._0_2_ = local_354 & 0xfe00;
    local_120 = 0;
    local_168._0_8_ = (FScriptContainerElement *)0x0;
    local_168._8_8_ = 0;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_13c = 0x80;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_130.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2c0._padding_._2_1_ = 0;
    local_2c0._12_8_ = 0;
    local_2c0._padding_ = 0;
    QueryPerformanceCounter(&local_340);
    fVar37 = __real_3f800000;
    local_2c0._padding_ = (longlong)local_340;
    local_2c0._padding_ = (longlong)&___7FPointerEvent__6B_;
    local_2c0.PressedButtons = (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)local_168;
    local_2c0.CursorDelta = (FDeprecateSlateVector2D)TVar9.field0_0x0;
    local_2c0.EffectingButton.KeyName.ComparisonIndex.Value = 0;
    local_2c0.EffectingButton.KeyName.Number = 0;
    local_2c0.EffectingButton.KeyDetails.Object = (FKeyDetails *)0x0;
    local_2c0.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_2c0.PointerIndex = uVar15;
    local_2c0.TouchpadIndex = 0;
    local_2c0.Force = 1.0;
    local_2c0.bIsTouchEvent = false;
    local_2c0.GestureType = None;
    local_2c0.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
    local_2c0.bIsDirectionInvertedFromDevice = false;
    local_2c0.bIsTouchForceChanged = false;
    local_2c0.bIsTouchFirstMove = false;
    local_2c0.ScreenSpacePosition = FVar3;
    local_2c0.LastScreenSpacePosition = FVar3;
    (*pcVar4)(CONCAT44(fStack_334,local_338),local_1b8,local_350,&local_2c0);
    FPointerEvent::~FPointerEvent(&local_2c0);
    local_120 = local_120 & 0xffffffff00000000;
    if (local_130.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_130.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_168,0,local_168._8_4_);
    iVar5 = SUB84(local_168._8_8_,4);
    local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
    }
    local_138 = 0xffffffff;
    local_134 = 0;
    local_140 = 0;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
    pIVar24 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar24 + 0x50);
    pFVar18 = ::FName::FName(&local_220,L"SoftwareCursor_Grab");
    pFVar25 = (FSlateBrush *)(*pcVar4)(pIVar24,*pFVar18,0,0);
    if (local_180 == 7) {
      pIVar24 = FAppStyle::Get();
      pcVar4 = *(code **)((longlong)*pIVar24 + 0x50);
      pFVar18 = ::FName::FName(&local_218,L"SoftwareCursor_CardinalCross");
      pFVar25 = (FSlateBrush *)(*pcVar4)(pIVar24,*pFVar18,0,0);
    }
    TVar10 = local_350;
    fVar36 = fVar37 / *(float *)((longlong)local_350 + 8);
    local_350 = (TVector2<float>_u_0)
                CONCAT44(fVar36 * *(float *)&(pFVar25->ImageSize).field_0x4,
                         fVar36 * *(float *)&pFVar25->ImageSize);
    pIVar11 = (ICustomHitTestPath *)local_350;
    pdVar26 = (double *)
              (**(code **)(*(longlong *)CONCAT44(fStack_334,local_338) + 0x78))
                        ((longlong *)CONCAT44(fStack_334,local_338),local_178);
    fVar36 = *(float *)((longlong)TVar10 + 8);
    bVar2 = *(byte *)((longlong)TVar10 + 0x34);
    fVar37 = fVar37 / fVar36;
    local_328._0_4_ = (float)*pdVar26 * fVar37 - (float)local_350 * __real_3f000000;
    fStack_334 = (*(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)TVar10 + 0xc))->_s_0).
                 X;
    local_330 = (*(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)TVar10 + 0xc))->_s_0).Y
    ;
    local_328._4_4_ = (float)pdVar26[1] * fVar37 - local_350._4_4_ * __real_3f000000;
    local_350 = local_328;
    local_1f0.Trans.field0_0x0 = local_328;
    local_1f0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_1f0.M.M[0][1] = _UNK_15076b184;
    local_1f0.M.M[1][0] = _UNK_15076b188;
    local_1f0.M.M[1][1] = _UNK_15076b18c;
    local_328._4_4_ = fVar36 * (float)local_328._4_4_ + local_330;
    local_328._0_4_ = fVar36 * (float)(undefined4)local_328 + fStack_334;
    Concatenate<TTransform2<float>_>
              (&local_1d8,&local_1f0,(TTransform2<float> *)((longlong)TVar10 + 0x1c));
    local_a8 = local_328;
    local_74 = (bVar2 & 1) * '\x02' | local_74 & 0xfc;
    local_9c = 0;
    local_94 = pIVar11;
    local_8c[0] = local_1d8.M.M[0][0];
    local_8c[1] = local_1d8.M.M[0][1];
    afStack_84[0] = local_1d8.M.M[1][0];
    afStack_84[1] = local_1d8.M.M[1][1];
    local_7c = local_1d8.Trans.field0_0x0;
    local_a0 = fVar36;
    FSlateDrawElement::MakeBox
              (local_310,param_5 + 1,(FPaintGeometry *)&local_a8._s_0,pFVar25,None,
               &FLinearColor::White);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a8);
    LVar33 = local_308;
  }
  if (((this->CustomHitTestPath).Object != (ICustomHitTestPath *)0x0) &&
     (bVar14 = FHittestGrid::ContainsWidget(*(FHittestGrid **)(LVar33.QuadPart + 8),(SWidget *)this)
     , bVar14)) {
    this_00 = *(FHittestGrid **)(LVar33.QuadPart + 8);
    if (((this->CustomHitTestPath).Object == (ICustomHitTestPath *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      iVar17 = (*pcVar4)();
      return iVar17;
    }
    local_348.ReferenceController =
         (this->CustomHitTestPath).SharedReferenceCount.ReferenceController;
    local_350 = (TVector2<float>_u_0)(this->CustomHitTestPath).Object;
    if (local_348.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_348.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_350 == (TVector2<float>_u_0)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      iVar17 = (*pcVar4)();
      return iVar17;
    }
    FHittestGrid::InsertCustomHitTestPath
              (this_00,(SWidget *)this,(TSharedRef<ICustomHitTestPath,1> *)&local_350);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f0);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_320 = FVar30.ComparisonIndex.Value;
      local_31c = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_308);
      local_328 = (TVector2<float>_u_0)(local_308.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)&local_328);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return iVar17;
}

// OnQueryPopupMethod @ 142a015a0

/* WARNING: Enum "Type": Some values do not have unique names */

FPopupMethodReply * __thiscall
SViewport::OnQueryPopupMethod(SViewport *this,FPopupMethodReply *__return_storage_ptr__)

{
  ISlateViewport *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a015d7;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pIVar1 = (this->ViewportInterface).Object;
    pTVar4 = pTVar5;
    if (pIVar1 != (ISlateViewport *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,__return_storage_ptr__);
      goto LAB_142a015e8;
    }
  }
LAB_142a015d7:
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  pTVar5 = pTVar4;
LAB_142a015e8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// OnQueryShowFocus @ 142a01660

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<bool> __thiscall SViewport::OnQueryShowFocus(SViewport *this,EFocusCause param_1)

{
  char cVar1;
  code *pcVar2;
  atomic<int> aVar3;
  TOptional<bool> TVar4;
  atomic<int> aVar5;
  undefined1 *puVar6;
  undefined7 in_register_00000011;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 in_R8B;
  bool bVar11;
  undefined1 local_res8;
  undefined1 uStackX_9;
  undefined2 uStackX_a;
  uint uStackX_c;
  undefined1 local_res10 [8];
  
  puVar7 = (undefined1 *)CONCAT71(in_register_00000011,param_1);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = 0;
  uStackX_9 = 0;
  uStackX_a = 0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar9 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar9 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar9->SharedReferenceCount < 1)) {
    uStackX_9 = 0;
    puVar6 = &local_res8;
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    goto LAB_142a01727;
  }
  pTVar9 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_142a016c5:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar9 = pTVar8;
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TOptional<bool>)(*pcVar2)();
      return TVar4;
    }
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar10;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142a016c5;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pTVar10 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar8 = pTVar9;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_142a016c5;
  }
  puVar6 = (undefined1 *)(**(code **)(pTVar10->_padding_ + 0x118))(pTVar10,local_res10,in_R8B);
  pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000001;
LAB_142a01727:
  puVar7[1] = 0;
  cVar1 = puVar6[1];
  puVar7[1] = cVar1;
  if (cVar1 != '\0') {
    *puVar7 = *puVar6;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return SUB82(puVar7,0);
}

// OnTouchEnded @ 142a01d70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnTouchEnded
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a01de2;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a01e08;
  }
LAB_142a01de2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_142a01e08:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xf0))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnTouchFirstMove @ 142a01ea0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnTouchFirstMove
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a01f12;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a01f38;
  }
LAB_142a01f12:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_142a01f38:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0x100))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnTouchForceChanged @ 142a01fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnTouchForceChanged
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a02042;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a02068;
  }
LAB_142a02042:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_142a02068:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xf8))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnTouchGesture @ 142a02100

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnTouchGesture
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a02172;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a02198;
  }
LAB_142a02172:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_142a02198:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0x108))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 142a02230

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnTouchMoved
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a022a2;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a022c8;
  }
LAB_142a022a2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_142a022c8:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xe8))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 142a02360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnTouchStarted
          (SViewport *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReply local_188;
  FReply local_d0;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1)) {
    FReply::FReply(&local_188,false);
    FReply::FReply(__return_storage_ptr__,&local_188);
    FReply::~FReply(&local_188);
    return __return_storage_ptr__;
  }
  pTVar6 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a023d2;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a023f8;
  }
LAB_142a023d2:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FReply *)(*pcVar1)();
    return pFVar4;
  }
LAB_142a023f8:
  pFVar4 = (FReply *)(**(code **)(pTVar7->_padding_ + 0xe0))(pTVar7,&local_d0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  FReply::~FReply(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnViewportActivated @ 142a02560

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SViewport::OnViewportActivated
          (SViewport *this,FReply *__return_storage_ptr__,FWindowActivateEvent *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  FSlateApplication *pFVar7;
  TSharedRef<SWidget,1> *pTVar8;
  undefined8 *puVar9;
  FReply *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  SWidget *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  TSharedRef<SWidget,1> local_1b8;
  undefined1 local_1a8 [8];
  TReferenceControllerBase<1> *local_1a0;
  FReply local_198;
  FReply local_e0;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = FSlateApplication::Get();
  pcVar3 = *(code **)(*(longlong *)pFVar7 + 0x28);
  pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1b8);
  pTVar12 = (pTVar8->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar8->Object;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8 = pSVar4;
  local_1c0 = pTVar12;
  puVar9 = (undefined8 *)(*pcVar3)(pFVar7,local_1a8,&local_1c8);
  (this->CachedParentWindow).Object = (SWindow *)*puVar9;
  pTVar11 = (TReferenceControllerBase<1> *)puVar9[1];
  if (pTVar11 != (this->CachedParentWindow).WeakReferenceCount.ReferenceController) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->CachedParentWindow).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))();
      }
    }
    (this->CachedParentWindow).WeakReferenceCount.ReferenceController = pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar12 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar12 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar12->SharedReferenceCount < 1)) {
    FReply::FReply(&local_198,false);
    FReply::FReply(__return_storage_ptr__,&local_198);
    FReply::~FReply(&local_198);
    return __return_storage_ptr__;
  }
  pTVar12 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      pTVar11 = pTVar13;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a026a1;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar14 = aVar2 == aVar6;
      if (bVar14) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar14);
    pTVar13 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar11 = pTVar12;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a026c7;
  }
LAB_142a026a1:
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar12 = pTVar11;
  if (bVar14) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FReply *)(*pcVar3)();
    return pFVar10;
  }
LAB_142a026c7:
  pFVar10 = (FReply *)(**(code **)(pTVar13->_padding_ + 0x160))(pTVar13,&local_e0,param_1);
  FReply::FReply(__return_storage_ptr__,pFVar10);
  FReply::~FReply(&local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// OnViewportDeactivated @ 142a02760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::OnViewportDeactivated(SViewport *this,FWindowActivateEvent *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if ((this->ViewportInterface).Object == (ISlateViewport *)0x0) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar5->SharedReferenceCount < 1) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a027c1;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a027e7;
  }
LAB_142a027c1:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142a027e7:
  (**(code **)(pTVar6->_padding_ + 0x168))(pTVar6,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// OnWindowClosed @ 142a028b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::OnWindowClosed(SViewport *this,TSharedRef<SWindow,1> *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if ((this->ViewportInterface).Object == (ISlateViewport *)0x0) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar5->SharedReferenceCount < 1) {
    return;
  }
  pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a02911;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a02937;
  }
LAB_142a02911:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142a02937:
  (**(code **)(pTVar6->_padding_ + 0x150))(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// SetActive @ 142a06f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::SetActive(SViewport *this,bool param_1)

{
  return;
}

// SetContent @ 142a07be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::SetContent(SViewport *this,TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *local_30;
  TReferenceControllerBase<1> *local_20;
  
  FVar5.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar6 = SNullWidget::NullWidget.Object;
  pSVar1 = param_1->Object;
  bVar3 = false;
  if (pSVar1 == (SWidget *)0x0) {
    local_30 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = false;
    bVar3 = true;
  }
  else {
    FVar5.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    pSVar6 = pSVar1;
    local_20 = FVar5.ReferenceController;
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar6;
  this->_padding_ = (longlong)FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCustomHitTestPath @ 142a08860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SViewport::SetCustomHitTestPath(SViewport *this,TSharedPtr<ICustomHitTestPath,1> *param_1)

{
  ICustomHitTestPath *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = param_1->Object;
  if ((this->CustomHitTestPath).Object != pIVar1) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->CustomHitTestPath).SharedReferenceCount.ReferenceController;
    (this->CustomHitTestPath).Object = pIVar1;
    (this->CustomHitTestPath).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIgnoreTextureAlpha @ 142a0a750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::SetIgnoreTextureAlpha(SViewport *this,bool param_1)

{
  if (this->bIgnoreTextureAlpha != param_1) {
    this->bIgnoreTextureAlpha = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetRenderDirectlyToWindow @ 142a0b770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::SetRenderDirectlyToWindow(SViewport *this,bool param_1)

{
  if (this->bRenderDirectlyToWindow != param_1) {
    this->bRenderDirectlyToWindow = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetViewportInterface @ 142a0d9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SViewport::SetViewportInterface(SViewport *this,TSharedRef<ISlateViewport,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar3 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a0d9f6;
      LOCK();
      aVar4 = pTVar3->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    pTVar5 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar6 = pTVar3;
  }
LAB_142a0d9f6:
  pTVar3 = (TReferenceControllerBase<1> *)param_1->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pTVar3 != pTVar5) {
    (this->ViewportInterface).Object = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->ViewportInterface).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      (this->ViewportInterface).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsKeyboardFocus @ 142a0f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SViewport::SupportsKeyboardFocus(SViewport *this)

{
  return true;
}

// Tick @ 142a0fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SViewport::Tick(SViewport *this,FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ViewportTickTime> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  FColor_u_0 local_res8 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [3];
  
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  FVar9 = StatPtr_STAT_ViewportTickTime;
  if (StatPtr_STAT_ViewportTickTime == (FThreadSafeStaticStat<FStat_STAT_ViewportTickTime>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_ViewportTickTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ViewportTickTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewportTickTime,*pFVar8,
                       L"Game UI Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_142a0fdb5:
    bVar4 = false;
    FVar12 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar11.Value;
        local_78.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SViewport.cpp"
                   ,0xdb);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142a0fdb5;
    local_70.s.LowPart = FVar11.Value;
    local_70.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
  }
  if ((((this->ViewportInterface).Object == (ISlateViewport *)0x0) ||
      (pTVar14 = (this->ViewportInterface).WeakReferenceCount.ReferenceController,
      pTVar14 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar14->SharedReferenceCount < 1))
  goto LAB_142a0fe45;
  pTVar14 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  pTVar13 = pTVar14;
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_142a0fe05:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar14 = pTVar13;
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      pTVar13 = pTVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142a0fe05;
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar16 = aVar5 == aVar7;
      if (bVar16) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar16);
    pTVar15 = (TReferenceControllerBase<1> *)(this->ViewportInterface).Object;
    pTVar13 = pTVar14;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_142a0fe05;
  }
  (**(code **)(pTVar15->_padding_ + 0x48))(pTVar15,param_1,SUB84(param_2,0),param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_142a0fe45:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// TranslateMouseCoordinateForCustomHitTestChild @ 142a10800

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FVirtualPointerPosition> * __thiscall
SViewport::TranslateMouseCoordinateForCustomHitTestChild
          (SViewport *this,TOptional<FVirtualPointerPosition> *__return_storage_ptr__,
          SWidget *param_1,FGeometry *param_2,TVector2<double> *param_3,TVector2<double> *param_4)

{
  ICustomHitTestPath *pIVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pIVar1 = (this->CustomHitTestPath).Object;
  if (pIVar1 != (ICustomHitTestPath *)0x0) {
    local_28 = *(undefined4 *)&param_4->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
    local_18 = *(undefined4 *)&param_3->field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    (**(code **)((longlong)*pIVar1 + 0x18))
              (pIVar1,__return_storage_ptr__,param_1,param_2,&local_18,&local_28);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

