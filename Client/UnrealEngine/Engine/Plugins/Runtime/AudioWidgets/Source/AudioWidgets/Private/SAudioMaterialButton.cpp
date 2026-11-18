// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 10

// ~SAudioMaterialButton @ 14d8bf8c0

void __thiscall SAudioMaterialButton::~SAudioMaterialButton(SAudioMaterialButton *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->DesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredSizeOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPressedAttribute).Getter);
  pvVar1 = *(void **)&(this->bIsPressedAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsPressedAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBooleanValueChanged);
  pvVar1 = *(void **)&(this->OnBooleanValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBooleanValueChanged);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ApplyNewMaterial @ 14d8da540

UMaterialInstanceDynamic * __thiscall
SAudioMaterialButton::ApplyNewMaterial(SAudioMaterialButton *this)

{
  FAudioMaterialButtonStyle *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  UObject *local_res8;
  
  pFVar1 = this->AudioMaterialButtonStyle;
  if (pFVar1 != (FAudioMaterialButtonStyle *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x18);
    pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    local_res8 = (UObject *)(*pcVar2)(pFVar1,pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&(this->DynamicMaterial).WeakPtr,(FObjectPtr)&local_res8);
  }
  pUVar4 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&(this->DynamicMaterial).WeakPtr);
  return pUVar4;
}

// CommitNewState @ 14d8e5540

void __thiscall SAudioMaterialButton::CommitNewState(SAudioMaterialButton *this,bool param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool *pbVar3;
  FReadAccessScope local_28;
  
  pbVar3 = TAttribute<bool>::Get(&this->bIsPressedAttribute);
  if (*pbVar3 != param_1) {
    bVar2 = TAttribute<bool>::IsBound(&this->bIsPressedAttribute);
    if (!bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPressedAttribute).Getter);
      (this->bIsPressedAttribute).Value = param_1;
      (this->bIsPressedAttribute).bIsSet = true;
    }
    SWidget::Invalidate((SWidget *)this,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnBooleanValueChanged,&local_28);
    if ((*(int *)&(this->OnBooleanValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnBooleanValueChanged).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// ComputeDesiredSize @ 14d8e5790

TVector2<double> * __thiscall
SAudioMaterialButton::ComputeDesiredSize
          (SAudioMaterialButton *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FAudioMaterialButtonStyle *pFVar2;
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
    pFVar2 = this->AudioMaterialButtonStyle;
    if (pFVar2 != (FAudioMaterialButtonStyle *)0x0) {
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

// Construct @ 14d8e8f80

void __thiscall SAudioMaterialButton::Construct(SAudioMaterialButton *this,FArguments *param_1)

{
  (this->Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  this->AudioMaterialButtonStyle = param_1->_AudioMaterialButtonStyle;
  (this->bIsPressedAttribute).Value = (param_1->_bIsPressedAttribute).Value;
  (this->bIsPressedAttribute).bIsSet = (param_1->_bIsPressedAttribute).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bIsPressedAttribute).Getter,&(param_1->_bIsPressedAttribute).Getter);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnBooleanValueChanged,&param_1->_OnBooleanValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  ApplyNewMaterial(this);
  return;
}

// OnMouseButtonDown @ 14d94e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialButton::OnMouseButtonDown
          (SAudioMaterialButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  bool *pbVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FReply *pFVar6;
  bool bVar7;
  TSharedRef<SWidget,1> local_198;
  FReply local_188;
  FReply local_c8;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar7) {
    pbVar4 = TAttribute<bool>::Get(&this->bIsPressedAttribute);
    CommitNewState(this,*pbVar4 == false);
    FReply::FReply(&local_188,true);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_198);
    pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar5->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198.Object = pSVar3;
    local_198.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar6 = FReply::CaptureMouse(&local_188,&local_198);
    FReply::FReply(&local_c8,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_188);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d950060

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialButton::OnMouseButtonUp
          (SAudioMaterialButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar7 = SWidget::HasMouseCapture((SWidget *)this), bVar7)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_d8);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    FReply::FReply(&local_c0,true);
    FVar6.ReferenceController = local_c0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c0.MouseCaptor.Object = (SWidget *)0x0;
    local_c0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_c0.bUseHighPrecisionMouse = 0;
    local_c0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 14d952120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioMaterialButton::OnPaint
          (SAudioMaterialButton *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr> *this_00;
  FNameEntryId FVar1;
  float fVar2;
  undefined1 uVar3;
  TVector2<float>_u_0_s_0 TVar4;
  FAudioMaterialButtonStyle *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  UMaterialInstanceDynamic *pUVar10;
  FName *pFVar11;
  bool *pbVar12;
  UObject *pUVar13;
  ESlateDrawEffect EVar14;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  FName local_190;
  FLinearColor_u_0 local_188;
  FName local_178;
  undefined8 local_168;
  FLinearColor_u_0 local_160;
  TTransform2<float> local_150;
  FSlateBrush local_138;
  TVector2<float>_u_0 local_88;
  float local_80;
  undefined8 local_7c;
  FName local_74;
  float local_6c [2];
  float afStack_64 [2];
  TVector2<float>_u_0 local_5c;
  byte local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->AudioMaterialButtonStyle != (FAudioMaterialButtonStyle *)0x0) {
    this_00 = &this->DynamicMaterial;
    bVar9 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar9) {
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)&(this->AudioMaterialButtonStyle->ButtonMainColor).field0_0x0;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonMainColor).field0_0x0 + 8);
      pFVar11 = ::FName::FName(&local_198,"MainColor");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)&(this->AudioMaterialButtonStyle->ButtonShadowColor).field0_0x0;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonShadowColor).field0_0x0 + 8);
      pFVar11 = ::FName::FName(&local_198,"ShadowColor");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)&(this->AudioMaterialButtonStyle->ButtonAccentColor).field0_0x0;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonAccentColor).field0_0x0 + 8);
      pFVar11 = ::FName::FName(&local_198,"SmoothBevelColor");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)&(this->AudioMaterialButtonStyle->ButtonMainColorTint_1).field0_0x0;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonMainColorTint_1).field0_0x0 + 8);
      pFVar11 = ::FName::FName(&local_198,"Color_1");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)&(this->AudioMaterialButtonStyle->ButtonMainColorTint_2).field0_0x0;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonMainColorTint_2).field0_0x0 + 8);
      pFVar11 = ::FName::FName(&local_198,"Color_2");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)&(this->AudioMaterialButtonStyle->ButtonPressedOutlineColor).field0_0x0
      ;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonPressedOutlineColor).field0_0x0 +
               8);
      pFVar11 = ::FName::FName(&local_198,"LedColor");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pbVar12 = TAttribute<bool>::Get(&this->bIsPressedAttribute);
      bVar9 = *pbVar12;
      pFVar11 = ::FName::FName(&local_198,"Click");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar10,*pFVar11,(float)bVar9);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar7 = *(undefined8 *)
               &(this->AudioMaterialButtonStyle->ButtonUnpressedOutlineColor).field0_0x0;
      uVar8 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialButtonStyle->ButtonUnpressedOutlineColor).field0_0x0
               + 8);
      pFVar11 = ::FName::FName(&local_198,"BarColor");
      local_188._s_0.R = (float)uVar7;
      local_188._s_0.G = (float)((ulonglong)uVar7 >> 0x20);
      local_188._s_0.B = (float)uVar8;
      local_188._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_188._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_198 = *(FName *)&param_2->Size;
      pFVar11 = ::FName::FName(&local_190,"LocalWidth");
      UMaterialInstanceDynamic::SetScalarParameterValue
                (pUVar10,*pFVar11,(float)local_198.ComparisonIndex.Value);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_198 = *(FName *)&param_2->Size;
      pFVar11 = ::FName::FName(&local_190,"LocalHeigth");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar10,*pFVar11,(float)local_198.Number);
      if ((!param_7) || (bVar9 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
        bVar9 = false;
      }
      local_198 = *(FName *)&param_2->Size;
      local_160._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
      local_160._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
      local_190.ComparisonIndex = local_198.ComparisonIndex.Value;
      FVar1.Value = local_198.Number;
      if ((float)local_190.ComparisonIndex.Value <= (float)local_198.Number) {
        FVar1.Value = local_190.ComparisonIndex.Value;
      }
      local_190 = local_198;
      local_168 = (TVector2<float>_u_0)local_198;
      FSlateBrush::FSlateBrush(&local_138);
      pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FSlateBrush::SetResourceObject(&local_138,pUVar13);
      TVar4 = (param_2->AbsolutePosition).field0_0x0._s_0;
      local_188._s_0.G = TVar4.X;
      local_188._s_0.B = TVar4.Y;
      local_198.Number = FVar1.Value;
      local_198.ComparisonIndex.Value = FVar1.Value;
      fVar2 = param_2->Scale;
      local_190.ComparisonIndex.Value =
           (uint)((float)(undefined4)local_168 * __real_3f000000 -
                 (float)FVar1.Value * __real_3f000000);
      local_190.Number =
           (uint)((float)local_168._4_4_ * __real_3f000000 - (float)FVar1.Value * __real_3f000000);
      local_178 = local_190;
      local_168._0_4_ = (float)local_190.ComparisonIndex.Value * fVar2 + local_188._s_0.G;
      local_168._4_4_ = (float)local_190.Number * fVar2 + local_188._s_0.B;
      local_188._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
      local_188._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
      local_188._s_0.B = (float)_UNK_15076b188;
      local_188._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
      Concatenate<TTransform2<float>_>
                (&local_150,(TTransform2<float> *)&local_188._s_0,
                 &param_2->AccumulatedRenderTransform);
      local_88 = local_168;
      local_74 = local_198;
      local_54 = param_2->bHasRenderTransform * '\x02' | local_54 & 0xfc;
      local_7c = 0;
      local_5c = local_150.Trans.field0_0x0;
      local_6c[0] = local_150.M.M[0][0];
      local_6c[1] = local_150.M.M[0][1];
      afStack_64[0] = local_150.M.M[1][0];
      afStack_64[1] = local_150.M.M[1][1];
      EVar14 = DisabledEffect;
      if (bVar9) {
        EVar14 = None;
      }
      local_80 = fVar2;
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_88._s_0,&local_138,EVar14,
                 (FLinearColor *)&local_160._s_0);
      local_138._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      param_5 = param_5 + 1;
    }
    else {
      pFVar5 = this->AudioMaterialButtonStyle;
      if (pFVar5 != (FAudioMaterialButtonStyle *)0x0) {
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x18);
        pUVar13 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        local_198 = (FName)(*pcVar6)(pFVar5,pUVar13);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_198);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_198);
      }
    }
  }
  return param_5;
}

// SetDesiredSizeOverride @ 14d968790

void __thiscall
SAudioMaterialButton::SetDesiredSizeOverride(SAudioMaterialButton *this,TVector2<double> *param_1)

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

// SetPressedState @ 14d96bb00

void __thiscall SAudioMaterialButton::SetPressedState(SAudioMaterialButton *this,bool param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool *pbVar3;
  FReadAccessScope FStack_28;
  
  pbVar3 = TAttribute<bool>::Get(&this->bIsPressedAttribute);
  if (*pbVar3 != param_1) {
    bVar2 = TAttribute<bool>::IsBound(&this->bIsPressedAttribute);
    if (!bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsPressedAttribute).Getter);
      (this->bIsPressedAttribute).Value = param_1;
      (this->bIsPressedAttribute).bIsSet = true;
    }
    SWidget::Invalidate((SWidget *)this,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnBooleanValueChanged,&FStack_28);
    if ((*(int *)&(this->OnBooleanValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnBooleanValueChanged).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  return;
}

