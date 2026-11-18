// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 22

// ~SAudioMaterialSlider @ 14d8bfbf0

void __thiscall SAudioMaterialSlider::~SAudioMaterialSlider(SAudioMaterialSlider *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  pvVar1 = *(void **)&(this->StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bMouseUsesStep).Getter);
  pvVar1 = *(void **)&(this->bMouseUsesStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bMouseUsesStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bLocked).Getter);
  pvVar1 = *(void **)&(this->bLocked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bLocked).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsFocusable).Getter);
  pvVar1 = *(void **)&(this->bIsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FineTuneSpeed).Getter);
  pvVar1 = *(void **)&(this->FineTuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FineTuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TuneSpeed).Getter);
  pvVar1 = *(void **)&(this->TuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar1 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->DesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredSizeOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted);
  pvVar1 = *(void **)&(this->OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ApplyNewMaterial @ 14d8daa10

void __thiscall SAudioMaterialSlider::ApplyNewMaterial(SAudioMaterialSlider *this)

{
  FAudioMaterialSliderStyle *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pFVar1 = this->AudioMaterialSliderStyle;
  if (pFVar1 != (FAudioMaterialSliderStyle *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x18);
    pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    local_res8 = (UObject *)(*pcVar2)(pFVar1,pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&(this->DynamicMaterial).WeakPtr,(FObjectPtr)&local_res8);
  }
  return;
}

// CommitValue @ 14d8e56c0

void __thiscall SAudioMaterialSlider::CommitValue(SAudioMaterialSlider *this,float param_1)

{
  longlong *plVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  FReadAccessScope local_48 [2];
  
  fVar4 = param_1;
  if (__real_3f800000 <= param_1) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  pfVar3 = TAttribute<float>::Get(&this->ValueAttribute);
  if (param_1 != *pfVar3) {
    bVar2 = TAttribute<float>::IsBound(&this->ValueAttribute);
    if (!bVar2) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
      (this->ValueAttribute).Value = fVar4;
      (this->ValueAttribute).bIsSet = true;
    }
    SWidget::Invalidate((SWidget *)this,Paint);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               local_48);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,fVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
  }
  return;
}

// ComputeDesiredSize @ 14d8e5d30

TVector2<double> * __thiscall
SAudioMaterialSlider::ComputeDesiredSize
          (SAudioMaterialSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FAudioMaterialSliderStyle *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TOptional<UE::Math::TVector2<double>_> *pTVar6;
  TVector2<double> *pTVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pTVar6 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
  if (pTVar6->bIsSet == false) {
    pFVar2 = this->AudioMaterialSliderStyle;
    if (pFVar2 != (FAudioMaterialSliderStyle *)0x0) {
      lVar8 = 0x14;
      uVar4 = 0x10;
      if (this->Orientation != Orient_Vertical) {
        lVar8 = 0x10;
        uVar4 = 0x14;
      }
      fVar1 = *(float *)((longlong)&pFVar2->_padding_ + lVar8);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (double)*(float *)((longlong)&pFVar2->_padding_ + (ulonglong)uVar4);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
      return __return_storage_ptr__;
    }
    uVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    uVar11 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    uVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    pTVar6 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Get(&this->DesiredSizeOverride);
    if ((pTVar6->bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar3)();
      return pTVar7;
    }
    uVar9 = *(undefined4 *)&(pTVar6->TypedValue).field0_0x0;
    uVar10 = *(undefined4 *)((longlong)&(pTVar6->TypedValue).field0_0x0 + 4);
    uVar11 = *(undefined4 *)((longlong)&(pTVar6->TypedValue).field0_0x0 + 8);
    uVar12 = *(undefined4 *)((longlong)&(pTVar6->TypedValue).field0_0x0 + 0xc);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar10;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar11;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar12;
  return __return_storage_ptr__;
}

// Construct @ 14d8ea7a0

void __thiscall SAudioMaterialSlider::Construct(SAudioMaterialSlider *this,FArguments *param_1)

{
  bool bVar1;
  float *pfVar2;
  
  (this->Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  TAttribute<float>::operator=(&this->TuneSpeed,&param_1->_TuneSpeed);
  TAttribute<float>::operator=(&this->FineTuneSpeed,&param_1->_FineTuneSpeed);
  (this->bIsFocusable).Value = (param_1->_IsFocusable).Value;
  (this->bIsFocusable).bIsSet = (param_1->_IsFocusable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bIsFocusable).Getter,&(param_1->_IsFocusable).Getter);
  this->Orientation = param_1->_Orientation;
  (this->bMouseUsesStep).Value = (param_1->_MouseUsesStep).Value;
  (this->bMouseUsesStep).bIsSet = (param_1->_MouseUsesStep).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bMouseUsesStep).Getter,&(param_1->_MouseUsesStep).Getter);
  (this->bLocked).Value = (param_1->_Locked).Value;
  (this->bLocked).bIsSet = (param_1->_Locked).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bLocked).Getter,&(param_1->_Locked).Getter);
  TAttribute<float>::operator=(&this->StepSize,&param_1->_StepSize);
  this->AudioMaterialSliderStyle = param_1->_AudioMaterialSliderStyle;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueCommitted,&param_1->_OnValueCommitted);
  ApplyNewMaterial(this);
  bVar1 = TAttribute<float>::IsSet(&param_1->_ValueAttribute);
  if (bVar1) {
    pfVar2 = TAttribute<float>::Get(&param_1->_ValueAttribute);
    CommitValue(this,*pfVar2);
  }
  return;
}

// IsInteractable @ 14d93d600

bool __thiscall SAudioMaterialSlider::IsInteractable(SAudioMaterialSlider *this)

{
  char cVar1;
  bool *pbVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pbVar2 = TAttribute<bool>::Get(&this->bLocked);
    if (*pbVar2 == false) {
      cVar1 = (**(code **)(this->_padding_ + 0x198))(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsLocked @ 14d93dc90

bool __thiscall SAudioMaterialSlider::IsLocked(SAudioMaterialSlider *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bLocked);
  return *pbVar1;
}

// OnKeyDown @ 14d94c420

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialSlider::OnKeyDown
          (SAudioMaterialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  float fVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *pFVar4;
  float *pfVar5;
  bool bVar6;
  
  FVar2 = (param_2->Key).KeyName;
  pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar2 == EKeys::LeftShift.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar6) {
    pFVar4 = FSlateApplication::Get();
    pfVar5 = (float *)(**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4);
    fVar1 = pfVar5[1];
    (this->MouseDownStartPosition).field0_0x0._s_0.X = (double)*pfVar5;
    (this->MouseDownStartPosition).field0_0x0._s_0.Y = (double)fVar1;
    pfVar5 = TAttribute<float>::Get(&this->ValueAttribute);
    this->MouseDownValue = *pfVar5;
    this->bIsFineTune = true;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyUp @ 14d94d6e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialSlider::OnKeyUp
          (SAudioMaterialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  float fVar1;
  FSlateApplication *pFVar2;
  float *pfVar3;
  
  this->bIsFineTune = false;
  pFVar2 = FSlateApplication::Get();
  pfVar3 = (float *)(**(code **)(*(longlong *)pFVar2 + 0x68))(pFVar2);
  fVar1 = pfVar3[1];
  (this->MouseDownStartPosition).field0_0x0._s_0.X = (double)*pfVar3;
  (this->MouseDownStartPosition).field0_0x0._s_0.Y = (double)fVar1;
  pfVar3 = TAttribute<float>::Get(&this->ValueAttribute);
  this->MouseDownValue = *pfVar3;
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14d94eca0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialSlider::OnMouseButtonDown
          (SAudioMaterialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  SWidget *pSVar4;
  bool *pbVar5;
  Type *pTVar6;
  float *pfVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FReply *pFVar9;
  Type TVar10;
  undefined1 local_res20 [8];
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_2->EffectingButton).KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar3 == EKeys::LeftMouseButton.KeyName) &&
     (pbVar5 = TAttribute<bool>::Get(&this->bLocked), *pbVar5 == false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar6 = (Type *)(**(code **)(this->_padding_ + 0x1d8))(this,local_res20);
    if ((char)pTVar6[1] == None) {
      TVar10 = Default;
    }
    else {
      TVar10 = *pTVar6;
    }
    this->CachedCursor = TVar10;
    fVar1 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
    (this->MouseDownStartPosition).field0_0x0._s_0.X =
         (double)*(float *)&param_2->ScreenSpacePosition;
    (this->MouseDownStartPosition).field0_0x0._s_0.Y = (double)fVar1;
    pfVar7 = TAttribute<float>::Get(&this->ValueAttribute);
    this->MouseDownValue = *pfVar7;
    FReply::FReply(&local_c8,true);
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar8->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = pSVar4;
    local_d8.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar9 = FReply::CaptureMouse(&local_c8,&local_d8);
    FReply::FReply(__return_storage_ptr__,pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d950360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialSlider::OnMouseButtonUp
          (SAudioMaterialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
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
    bVar6 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar6) {
      bVar6 = true;
      goto LAB_14d9503b4;
    }
  }
  bVar6 = false;
LAB_14d9503b4:
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

// OnMouseCaptureLost @ 14d950e10

void __thiscall
SAudioMaterialSlider::OnMouseCaptureLost(SAudioMaterialSlider *this,FCaptureLostEvent *param_1)

{
  float fVar1;
  longlong *plVar2;
  float *pfVar3;
  FReadAccessScope local_38 [2];
  
  pfVar3 = TAttribute<float>::Get(&this->ValueAttribute);
  fVar1 = *pfVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted,
             local_38);
  if ((*(int *)&(this->OnValueCommitted).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnValueCommitted).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,fVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  SWidget::OnMouseCaptureLost((SWidget *)this,param_1);
  return;
}

// OnMouseMove @ 14d951100

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioMaterialSlider::OnMouseMove
          (SAudioMaterialSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  bool *pbVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if ((bVar3) && (pbVar4 = TAttribute<bool>::Get(&this->bLocked), *pbVar4 == false)) {
    local_30 = 0;
    local_50._0_4_ = GrabHandClosed;
    local_50[4] = true;
    local_50[8] = true;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor((SWidget *)this,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)&local_68);
    if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = local_30 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
    if (this->Orientation == Orient_Horizontal) {
      fVar7 = *(float *)&param_2->LastScreenSpacePosition;
      dVar2 = (this->MouseDownStartPosition).field0_0x0._s_0.X;
    }
    else {
      fVar7 = *(float *)&(param_2->LastScreenSpacePosition).field_0x4;
      dVar2 = (this->MouseDownStartPosition).field0_0x0._s_0.Y;
    }
    lVar6 = 0x2e0;
    if (this->bIsFineTune == false) {
      lVar6 = 0x2c0;
    }
    pfVar5 = TAttribute<float>::Get((TAttribute<float> *)((longlong)&this->_padding_ + lVar6));
    fVar7 = (((float)dVar2 - (float)(int)fVar7) / (float)this->PixelDelta) * *pfVar5;
    if (this->Orientation == Orient_Horizontal) {
      fVar7 = this->MouseDownValue - fVar7;
    }
    else {
      fVar7 = this->MouseDownValue + fVar7;
    }
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    pbVar4 = TAttribute<bool>::Get(&this->bMouseUsesStep);
    if (*pbVar4 != false) {
      pfVar5 = TAttribute<float>::Get(&this->StepSize);
      fVar1 = *pfVar5;
      pfVar5 = TAttribute<float>::Get(&this->StepSize);
      fVar7 = (float)((int)ROUND((fVar7 + fVar7) / fVar1 + __real_3f000000) >> 1) * *pfVar5;
    }
    CommitValue(this,fVar7);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 14d9545a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioMaterialSlider::OnPaint
          (SAudioMaterialSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr> *this_00;
  float fVar1;
  FAudioMaterialSliderStyle *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FNameEntryId FVar6;
  FNameEntryId FVar7;
  bool bVar8;
  float *pfVar9;
  UMaterialInstanceDynamic *pUVar10;
  FName *pFVar11;
  FGeometry *pFVar12;
  UObject *pUVar13;
  byte bVar14;
  ESlateDrawEffect EVar15;
  double dVar16;
  float fVar17;
  FNameEntryId FVar18;
  FNameEntryId FVar19;
  undefined1 auStackY_228 [32];
  undefined8 local_1f8;
  FName local_1f0;
  undefined8 local_1e8;
  FLinearColor_u_0 local_1d8;
  undefined8 local_1c8;
  undefined1 local_1b8 [16];
  TVector2<float>_u_0 local_1a8;
  FLinearColor_u_0 local_1a0;
  FSlateBrush local_188;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  FName local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  TVector2<float>_u_0 local_ac;
  byte local_a4;
  FGeometry local_a0;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (this->AudioMaterialSliderStyle != (FAudioMaterialSliderStyle *)0x0) {
    this_00 = &this->DynamicMaterial;
    bVar8 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar8) {
      pfVar9 = TAttribute<float>::Get(&this->ValueAttribute);
      fVar1 = *pfVar9;
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialSliderStyle->SliderBackgroundColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialSliderStyle->SliderBackgroundColor).field0_0x0 + 8);
      pFVar11 = ::FName::FName((FName *)&local_1f8,"BarColor");
      local_1d8._s_0.R = (float)uVar4;
      local_1d8._s_0.G = (float)((ulonglong)uVar4 >> 0x20);
      local_1d8._s_0.B = (float)uVar5;
      local_1d8._s_0.A = (float)((ulonglong)uVar5 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_1d8._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialSliderStyle->SliderValueMainColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialSliderStyle->SliderValueMainColor).field0_0x0 + 8);
      pFVar11 = ::FName::FName((FName *)&local_1f8,"LedColor");
      local_1d8._s_0.R = (float)uVar4;
      local_1d8._s_0.G = (float)((ulonglong)uVar4 >> 0x20);
      local_1d8._s_0.B = (float)uVar5;
      local_1d8._s_0.A = (float)((ulonglong)uVar5 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_1d8._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)
               &(this->AudioMaterialSliderStyle->SliderBackgroundAccentColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialSliderStyle->SliderBackgroundAccentColor).field0_0x0
               + 8);
      pFVar11 = ::FName::FName((FName *)&local_1f8,"BarInnerShadow");
      local_1d8._s_0.R = (float)uVar4;
      local_1d8._s_0.G = (float)((ulonglong)uVar4 >> 0x20);
      local_1d8._s_0.B = (float)uVar5;
      local_1d8._s_0.A = (float)((ulonglong)uVar5 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_1d8._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialSliderStyle->SliderHandleMainColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialSliderStyle->SliderHandleMainColor).field0_0x0 + 8);
      pFVar11 = ::FName::FName((FName *)&local_1f8,"ValueColor");
      local_1d8._s_0.R = (float)uVar4;
      local_1d8._s_0.G = (float)((ulonglong)uVar4 >> 0x20);
      local_1d8._s_0.B = (float)uVar5;
      local_1d8._s_0.A = (float)((ulonglong)uVar5 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_1d8._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialSliderStyle->SliderHandleOutlineColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialSliderStyle->SliderHandleOutlineColor).field0_0x0 + 8
               );
      pFVar11 = ::FName::FName((FName *)&local_1f8,"ValueColorEdge");
      local_1d8._s_0.R = (float)uVar4;
      local_1d8._s_0.G = (float)((ulonglong)uVar4 >> 0x20);
      local_1d8._s_0.B = (float)uVar5;
      local_1d8._s_0.A = (float)((ulonglong)uVar5 >> 0x20);
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar10,*pFVar11,(FLinearColor *)&local_1d8._s_0);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar11 = ::FName::FName((FName *)&local_1f8,"VALUE");
      fVar17 = fVar1;
      if (__real_3f800000 <= fVar1) {
        fVar17 = __real_3f800000;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar10,*pFVar11,fVar17);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1d8._s_0.R = (float)___xmm_40100000000000003fe6666660000000;
      local_1d8._s_0.G = (float)((ulonglong)___xmm_40100000000000003fe6666660000000 >> 0x20);
      local_1d8._s_0.B = (float)_UNK_152c28a78;
      local_1d8._s_0.A = (float)((ulonglong)_UNK_152c28a78 >> 0x20);
      local_1b8._0_4_ = (undefined4)___xmm_3ff00000000000000000000000000000;
      local_1b8._4_4_ = (undefined4)((ulonglong)___xmm_3ff00000000000000000000000000000 >> 0x20);
      local_1b8._8_4_ = (undefined4)_UNK_15061cbc8;
      local_1b8._12_4_ = (undefined4)((ulonglong)_UNK_15061cbc8 >> 0x20);
      dVar16 = FMath::GetMappedRangeValueClamped<double,float>
                         ((TVector2<double> *)local_1b8,(TVector2<double> *)&local_1d8._s_0,fVar1);
      pFVar11 = ::FName::FName((FName *)&local_1f8,"LedInt");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar10,*pFVar11,(float)dVar16);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1f8 = *(TVector2<float>_u_0 *)&param_2->Size;
      pFVar11 = ::FName::FName((FName *)&local_1e8,"LocalWidth");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar10,*pFVar11,(float)local_1f8._0_4_);
      pUVar10 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1f8 = *(TVector2<float>_u_0 *)&param_2->Size;
      pFVar11 = ::FName::FName((FName *)&local_1e8,"LocalHeigth");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar10,*pFVar11,(float)local_1f8._4_4_);
      local_a0.Size = param_2->Size;
      fVar1 = (float)this->Orientation;
      local_1f8 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
      uVar4 = *(undefined8 *)&(param_2->AbsolutePosition).field0_0x0._s_0.Y;
      local_a0._24_8_ = *(undefined8 *)((longlong)&(param_2->Position).field0_0x0 + 4);
      local_a0.Scale = (float)*(undefined8 *)&param_2->Scale;
      local_a0.AbsolutePosition.field0_0x0._s_0.X =
           (float)((ulonglong)*(undefined8 *)&param_2->Scale >> 0x20);
      local_a0.AccumulatedRenderTransform.M.M._4_8_ =
           *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
      local_a0.AccumulatedRenderTransform._12_8_ =
           *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
      local_a0.AbsolutePosition.field0_0x0._s_0.Y = (float)uVar4;
      local_a0.Position.field0_0x0._s_0.X = (float)((ulonglong)uVar4 >> 0x20);
      local_a0._48_8_ =
           *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      FVar6.Value = local_1f8._0_4_;
      FVar7.Value = local_1f8._4_4_;
      FVar18.Value = local_1f8._4_4_;
      FVar19.Value = local_1f8._0_4_;
      if ((fVar1 != 1.4013e-45) &&
         (FVar18.Value = FVar6.Value, FVar19.Value = FVar7.Value, fVar1 == 0.0)) {
        local_1b8._0_4_ = 0x3f800000;
        local_1b8._4_4_ = 0.0;
        local_1d8._s_0.R = (float)___xmm_b33bbd2ebf8000003f800000b33bbd2e;
        local_1d8._s_0.G = (float)((ulonglong)___xmm_b33bbd2ebf8000003f800000b33bbd2e >> 0x20);
        local_1d8._s_0.B = (float)_UNK_152bee948;
        local_1d8._s_0.A = (float)((ulonglong)_UNK_152bee948 >> 0x20);
        local_1c8 = CONCAT44((float)local_1f8._0_4_ * ___real_333bbd2e,local_1f8._0_4_);
        local_1f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_1f0.Number = FVar6.Value;
        local_1f0.ComparisonIndex.Value = FVar7.Value;
        local_1e8 = (TVector2<float>_u_0)local_1f0;
        local_1b8._8_4_ = fVar1;
        pFVar12 = FGeometry::MakeChild
                            (param_2,(FGeometry *)&local_d8._s_0,
                             (FDeprecateVector2DParameter *)&local_1e8,
                             (FSlateLayoutTransform *)local_1b8,
                             (TTransform2<float> *)&local_1d8._s_0,
                             (FDeprecateVector2DParameter *)&local_1f8);
        FGeometry::operator=(&local_a0,pFVar12);
      }
      if ((!param_7) || (bVar8 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
        bVar8 = false;
      }
      local_1a0._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
      local_1a0._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
      FSlateBrush::FSlateBrush(&local_188);
      pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FSlateBrush::SetResourceObject(&local_188,pUVar13);
      fVar1 = local_a0.Scale;
      bVar14 = local_a0.bHasRenderTransform;
      local_1b8._4_4_ = 0.0;
      local_1b8._8_4_ = 0.0;
      local_1f0 = (FName)0x0;
      local_1f8._4_4_ = FVar18.Value;
      local_1f8._0_4_ = FVar19.Value;
      local_1e8._4_4_ = local_a0.Scale * 0.0 + local_a0.AbsolutePosition.field0_0x0._s_0.Y;
      local_1e8._0_4_ = local_a0.Scale * 0.0 + local_a0.AbsolutePosition.field0_0x0._s_0.X;
      local_1d8._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
      local_1d8._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
      local_1d8._s_0.B = (float)_UNK_15076b188;
      local_1d8._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
      local_1c8 = local_1f0;
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)local_1b8,(TTransform2<float> *)&local_1d8._s_0,
                 &local_a0.AccumulatedRenderTransform);
      local_bc = CONCAT44(local_1b8._4_4_,local_1b8._0_4_);
      uStack_b4 = CONCAT44(local_1b8._12_4_,local_1b8._8_4_);
      local_d8 = local_1e8;
      local_c4 = (FName)local_1f8;
      local_d0 = fVar1;
      local_a4 = local_a4 & 0xfc | bVar14 * '\x02';
      local_cc = 0;
      local_ac = local_1a8;
      EVar15 = DisabledEffect;
      if (bVar8) {
        EVar15 = None;
      }
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_d8._s_0,&local_188,EVar15,
                 (FLinearColor *)&local_1a0._s_0);
      local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      param_5 = param_5 + 1;
    }
    else {
      pFVar2 = this->AudioMaterialSliderStyle;
      if (pFVar2 != (FAudioMaterialSliderStyle *)0x0) {
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x18);
        pUVar13 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        local_1f8 = (TVector2<float>_u_0)(*pcVar3)(pFVar2,pUVar13);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1f8 != (TVector2<float>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1f8);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_1f8);
      }
    }
  }
  return param_5;
}

// SetFineTuneSpeed @ 14d968d40

void __thiscall SAudioMaterialSlider::SetFineTuneSpeed(SAudioMaterialSlider *this,float param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FineTuneSpeed).Getter);
  (this->FineTuneSpeed).Value = param_1;
  (this->FineTuneSpeed).bIsSet = true;
  return;
}

// SetLocked @ 14d969d00

void __thiscall SAudioMaterialSlider::SetLocked(SAudioMaterialSlider *this,bool param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bLocked).Getter);
  (this->bLocked).Value = param_1;
  (this->bLocked).bIsSet = true;
  return;
}

// SetMouseUsesStep @ 14d96aa80

void __thiscall SAudioMaterialSlider::SetMouseUsesStep(SAudioMaterialSlider *this,bool param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bMouseUsesStep).Getter);
  (this->bMouseUsesStep).Value = param_1;
  (this->bMouseUsesStep).bIsSet = true;
  return;
}

// SetOrientation @ 14d96acf0

void __thiscall
SAudioMaterialSlider::SetOrientation(SAudioMaterialSlider *this,EOrientation param_1)

{
  if (this->Orientation != param_1) {
    this->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetStepSize @ 14d96dbf0

void __thiscall SAudioMaterialSlider::SetStepSize(SAudioMaterialSlider *this,float param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  (this->StepSize).Value = param_1;
  (this->StepSize).bIsSet = true;
  return;
}

// SetTuneSpeed @ 14d96e2a0

void __thiscall SAudioMaterialSlider::SetTuneSpeed(SAudioMaterialSlider *this,float param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TuneSpeed).Getter);
  (this->TuneSpeed).Value = param_1;
  (this->TuneSpeed).bIsSet = true;
  return;
}

// SetValue @ 14d96ed00

void __thiscall
SAudioMaterialSlider::SetValue(SAudioMaterialSlider *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->ValueAttribute).Value = param_1->Value;
  (this->ValueAttribute).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ValueAttribute).Getter,this_00);
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

// SupportsKeyboardFocus @ 14d972540

bool __thiscall SAudioMaterialSlider::SupportsKeyboardFocus(SAudioMaterialSlider *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bIsFocusable);
  return *pbVar1;
}

