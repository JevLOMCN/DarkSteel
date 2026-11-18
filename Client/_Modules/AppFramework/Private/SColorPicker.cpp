// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 62

// ~SColorPicker @ 142f3f710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::~SColorPicker(SColorPicker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7SColorPicker__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ColorWheel).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->OptionalOwningDetailsView).WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorPickerWindowClosed);
  pvVar4 = *(void **)&(this->OnColorPickerWindowClosed).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorPickerWindowClosed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickEnd);
  pvVar4 = *(void **)&(this->OnInteractivePickEnd).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInteractivePickEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickBegin);
  pvVar4 = *(void **)&(this->OnInteractivePickBegin).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInteractivePickBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorPickerCancelled);
  pvVar4 = *(void **)&(this->OnColorPickerCancelled).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorPickerCancelled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted);
  pvVar4 = *(void **)&(this->OnColorCommitted).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DisplayGamma).Getter);
  pvVar4 = *(void **)&(this->DisplayGamma).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DisplayGamma).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentThemeBar).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseAlpha).Getter);
  pvVar4 = *(void **)&(this->bUseAlpha).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bUseAlpha).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorWheelBrush).Getter);
  pvVar4 = *(void **)&(this->ColorWheelBrush).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorWheelBrush).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TargetColorAttribute).Getter);
  pvVar4 = *(void **)&(this->TargetColorAttribute).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TargetColorAttribute).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AnimatePostConstruct @ 142f586b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SColorPicker::AnimatePostConstruct(SColorPicker *this,double param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  FLinearColor *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FLinearColor local_58 [5];
  
  fVar7 = __real_3e800000;
  fVar11 = this->CurrentTime;
  if (__real_3e800000 <= fVar11) {
    return Continue;
  }
  fVar9 = (this->ColorBegin).field0_0x0._s_0.G;
  fVar10 = fVar11 * __real_40800000;
  fVar1 = (this->ColorBegin).field0_0x0._s_0.B;
  fVar2 = (this->ColorBegin).field0_0x0._s_0.A;
  fVar3 = (this->ColorEnd).field0_0x0._s_0.B;
  fVar4 = (this->ColorEnd).field0_0x0._s_0.A;
  fVar5 = (this->ColorEnd).field0_0x0._s_0.G;
  pFVar8 = &this->CurrentColorHSV;
  (pFVar8->field0_0x0)._s_0.R =
       ((this->ColorEnd).field0_0x0._s_0.R - (this->ColorBegin).field0_0x0._s_0.R) * fVar10 +
       (this->ColorBegin).field0_0x0._s_0.R;
  (this->CurrentColorHSV).field0_0x0._s_0.G = (fVar5 - fVar9) * fVar10 + fVar9;
  (this->CurrentColorHSV).field0_0x0._s_0.B = (fVar3 - fVar1) * fVar10 + fVar1;
  (this->CurrentColorHSV).field0_0x0._s_0.A = (fVar4 - fVar2) * fVar10 + fVar2;
  fVar9 = (pFVar8->field0_0x0)._s_0.R;
  if (0.0 <= fVar9) {
    if (fVar9 <= __real_43b40000) goto LAB_142f587bd;
    fVar9 = fVar9 - __real_43b40000;
  }
  else {
    fVar9 = fVar9 + __real_43b40000;
  }
  (pFVar8->field0_0x0)._s_0.R = fVar9;
LAB_142f587bd:
  fVar11 = fVar11 + param_2;
  this->CurrentTime = fVar11;
  if (fVar11 >= fVar7) {
    uVar6 = *(undefined8 *)((longlong)&(this->ColorEnd).field0_0x0 + 8);
    *(undefined8 *)&pFVar8->field0_0x0 = *(undefined8 *)&(this->ColorEnd).field0_0x0;
    *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar6;
  }
  pFVar8 = FLinearColor::HSVToLinearRGB(pFVar8,local_58);
  uVar6 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorRGB).field0_0x0 = *(undefined8 *)&pFVar8->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorRGB).field0_0x0 + 8) = uVar6;
  return fVar11 < fVar7;
}

// ApplyNewTargetColor @ 142f58820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SColorPicker::ApplyNewTargetColor(SColorPicker *this,bool param_1)

{
  double dVar1;
  LARGE_INTEGER local_res18 [2];
  
  if (((param_1) ||
      ((this->bOnlyRefreshOnMouseUp == false && (this->bPerfIsTooSlowToUpdate == false)))) &&
     ((this->bOnlyRefreshOnOk == false || (this->bColorPickerIsInlineVersion != false)))) {
    QueryPerformanceCounter(local_res18);
    dVar1 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if ((this->bOnlyRefreshOnOk == false) || (this->bColorPickerIsInlineVersion != false)) {
      UpdateColorPick(this);
    }
    QueryPerformanceCounter(local_res18);
    if (__real_3fb999999999999a <
        (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1) {
      this->bPerfIsTooSlowToUpdate = true;
    }
    return true;
  }
  return false;
}

// BeginAnimation @ 142f58d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::BeginAnimation(SColorPicker *this,FLinearColor *param_1,FLinearColor *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (param_1->field0_0x0)._s_0.R;
  fVar2 = (param_1->field0_0x0)._s_0.G;
  fVar3 = (param_1->field0_0x0)._s_0.B;
  fVar4 = (param_1->field0_0x0)._s_0.A;
  this->CurrentTime = 0.0;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = (param_2->field0_0x0)._s_0.R;
  fVar9 = (param_2->field0_0x0)._s_0.G;
  fVar6 = (param_2->field0_0x0)._s_0.B;
  fVar7 = (param_2->field0_0x0)._s_0.A;
  fVar10 = fVar1 + __real_43b40000;
  (this->ColorEnd).field0_0x0._s_0.R = fVar5;
  (this->ColorEnd).field0_0x0._s_0.G = fVar9;
  (this->ColorEnd).field0_0x0._s_0.B = fVar6;
  (this->ColorEnd).field0_0x0._s_0.A = fVar7;
  fVar9 = (float)((uint)(fVar1 - fVar5) & uVar8);
  (this->ColorBegin).field0_0x0._s_0.R = fVar1;
  (this->ColorBegin).field0_0x0._s_0.G = fVar2;
  (this->ColorBegin).field0_0x0._s_0.B = fVar3;
  (this->ColorBegin).field0_0x0._s_0.A = fVar4;
  if ((float)((uint)(fVar10 - fVar5) & uVar8) < fVar9) {
    (this->ColorBegin).field0_0x0._s_0.R = fVar10;
    return;
  }
  if ((float)((uint)((fVar1 - __real_43b40000) - fVar5) & uVar8) < fVar9) {
    (this->ColorBegin).field0_0x0._s_0.R = fVar1 - __real_43b40000;
  }
  return;
}

// Construct @ 142f6b5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::Construct(SColorPicker *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  TAttribute<TSharedPtr<SWindow,1>_> *pTVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SColorPicker *pSVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  SWidget *pSVar19;
  char cVar20;
  atomic<int> aVar21;
  FLinearColor *pFVar22;
  bool *pbVar23;
  TSharedPtr<SWidget,1> *pTVar24;
  undefined8 *puVar25;
  TSharedRef<SWidget,1> *pTVar26;
  ulong64 uVar27;
  SWidget *pSVar28;
  byte bVar29;
  SWidget *pSVar30;
  SColorPicker *pSVar31;
  SWidget *pSVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  SColorPicker *local_res8;
  bool local_res10 [8];
  SWindow *local_res18;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  TSharedRef<SColorPicker,1> local_170;
  TSharedRef<SColorPicker,1> local_160;
  SWindow *local_150;
  FSharedReferencer<1> local_148;
  undefined1 local_140 [8];
  FDelegateAllocation local_138;
  SWidget *local_128;
  SWidget *local_120;
  FLinearColor local_118;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  TSharedRef<SWidget,1> local_a0;
  TSharedRef<FActiveTimerHandle,1> local_90;
  TSharedRef<SWidget,1> local_80;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pSVar30 = (SWidget *)0x0;
  local_res8 = (SColorPicker *)((ulonglong)local_res8 & 0xffffffff00000000);
  uVar14 = *(undefined8 *)((longlong)&(param_1->_TargetColorAttribute).Value.field0_0x0 + 8);
  *(undefined8 *)&(this->TargetColorAttribute).Value.field0_0x0 =
       *(undefined8 *)&(param_1->_TargetColorAttribute).Value.field0_0x0;
  *(undefined8 *)((longlong)&(this->TargetColorAttribute).Value.field0_0x0 + 8) = uVar14;
  (this->TargetColorAttribute).bIsSet = (param_1->_TargetColorAttribute).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TargetColorAttribute).Getter,&(param_1->_TargetColorAttribute).Getter);
  (this->ColorWheelBrush).Value = (param_1->_ColorWheelBrush).Value;
  (this->ColorWheelBrush).bIsSet = (param_1->_ColorWheelBrush).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ColorWheelBrush).Getter,&(param_1->_ColorWheelBrush).Getter);
  pFVar22 = TAttribute<FLinearColor>::Get(&this->TargetColorAttribute);
  pFVar22 = FLinearColor::LinearRGBToHSV(pFVar22,&local_118);
  uVar14 = *(undefined8 *)&pFVar22->field0_0x0;
  uVar15 = *(undefined8 *)((longlong)&pFVar22->field0_0x0 + 8);
  *(undefined8 *)&(this->OldColor).field0_0x0 = uVar14;
  *(undefined8 *)((longlong)&(this->OldColor).field0_0x0 + 8) = uVar15;
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = uVar14;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar15;
  pFVar22 = TAttribute<FLinearColor>::Get(&this->TargetColorAttribute);
  uVar14 = *(undefined8 *)&pFVar22->field0_0x0;
  uVar15 = *(undefined8 *)((longlong)&pFVar22->field0_0x0 + 8);
  this->CurrentMode = Wheel;
  *(undefined8 *)&(this->CurrentColorRGB).field0_0x0 = uVar14;
  *(undefined8 *)((longlong)&(this->CurrentColorRGB).field0_0x0 + 8) = uVar15;
  (this->bUseAlpha).Value = (param_1->_UseAlpha).Value;
  (this->bUseAlpha).bIsSet = (param_1->_UseAlpha).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseAlpha).Getter,&(param_1->_UseAlpha).Getter);
  pbVar23 = TAttribute<bool>::Get(&param_1->_OnlyRefreshOnMouseUp);
  this->bOnlyRefreshOnMouseUp = *pbVar23;
  pbVar23 = TAttribute<bool>::Get(&param_1->_OnlyRefreshOnOk);
  this->bOnlyRefreshOnOk = *pbVar23;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&this->OnColorCommitted,&param_1->_OnColorCommitted);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&this->OnColorPickerCancelled,&param_1->_OnColorPickerCancelled);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnInteractivePickBegin,&param_1->_OnInteractivePickBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnInteractivePickEnd,&param_1->_OnInteractivePickEnd);
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnColorPickerWindowClosed,&param_1->_OnColorPickerWindowClosed);
  pTVar3 = &param_1->_ParentWindow;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(param_1->_ParentWindow).Getter,&local_70);
  if (((*(int *)&(param_1->_ParentWindow).Getter.field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_1->_ParentWindow).Getter.field_0x8, plVar5 == (longlong *)0x0)
      ) || (cVar20 = (**(code **)(*plVar5 + 0x38))(), cVar20 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(param_1->_ParentWindow).Getter,&local_58);
    pSVar28 = pSVar30;
    if (*(int *)&(param_1->_ParentWindow).Getter.field_0x10 != 0) {
      pSVar28 = *(SWidget **)&(param_1->_ParentWindow).Getter.field_0x8;
    }
    (**(code **)(pSVar28->_padding_ + 0x60))(pSVar28,&local_150);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (pTVar3 != (TAttribute<TSharedPtr<SWindow,1>_> *)&local_150) {
      (pTVar3->Value).Object = local_150;
      local_150 = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->_ParentWindow).Value.SharedReferenceCount,&local_148);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.ReferenceController);
  }
  (this->ParentWindowPtr).Object = (pTVar3->Value).Object;
  pTVar6 = (param_1->_ParentWindow).Value.SharedReferenceCount.ReferenceController;
  if (pTVar6 != (this->ParentWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (this->ParentWindowPtr).WeakReferenceCount.ReferenceController = pTVar6;
  }
  (this->DisplayGamma).Value = (param_1->_DisplayGamma).Value;
  (this->DisplayGamma).bIsSet = (param_1->_DisplayGamma).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DisplayGamma).Getter,&(param_1->_DisplayGamma).Getter);
  this->bClosedViaOkOrCancel = false;
  this->bValidCreationOverrideExists = param_1->_OverrideColorPickerCreation;
  this->bClampValue = param_1->_ClampValue;
  pTVar24 = TAttribute<TSharedPtr<SWidget,1>_>::Get(&param_1->_OptionalOwningDetailsView);
  if (pTVar24->Object == (SWidget *)0x0) {
    local_b0 = 0;
    pTStack_a8 = (TReferenceControllerBase<1> *)0x0;
    bVar16 = true;
    bVar33 = false;
    pSVar28 = pSVar30;
    pSVar32 = pSVar30;
  }
  else {
    pTVar24 = TAttribute<TSharedPtr<SWidget,1>_>::Get(&param_1->_OptionalOwningDetailsView);
    local_120 = (SWidget *)(pTVar24->SharedReferenceCount).ReferenceController;
    local_128 = pTVar24->Object;
    if (local_120 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&local_120->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&local_120->_padding_ + 1);
      UNLOCK();
    }
    bVar16 = false;
    bVar33 = true;
    pSVar28 = local_128;
    pSVar32 = local_120;
  }
  pSVar19 = local_120;
  (this->OptionalOwningDetailsView).Object = pSVar28;
  if (pSVar32 != (SWidget *)(this->OptionalOwningDetailsView).WeakReferenceCount.ReferenceController
     ) {
    if (pSVar32 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar32->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar32->_padding_)[1] + 1);
      UNLOCK();
    }
    pTVar6 = (this->OptionalOwningDetailsView).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (this->OptionalOwningDetailsView).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pSVar32;
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a8);
  }
  if (bVar33) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
  }
  bVar29 = 0;
  bVar17 = false;
  bVar16 = false;
  bVar33 = false;
  local_140 = (undefined1  [8])0x0;
  local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_138.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
             (FWriteAccessScope *)&local_f0);
  local_d8 = &local_138;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,&local_138);
  pSVar31 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_160.Object = (SColorPicker *)AnimatePostConstruct;
    local_160.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_118.field0_0x0._s_0.A << 0x20);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_a0);
    pSVar8 = (SColorPicker *)pTVar26->Object;
    pSVar31 = (SColorPicker *)(pTVar26->SharedReferenceCount).ReferenceController;
    if (pSVar31 != (SColorPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar31->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar31->_padding_ + 1);
      UNLOCK();
      if (pSVar31 != (SColorPicker *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar31->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar31->_padding_ + 1);
        UNLOCK();
      }
    }
    bVar33 = true;
    bVar17 = true;
    bVar16 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_170.Object = pSVar8;
    local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar31;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = pSVar8;
    puVar25[4] = pSVar31;
    if (pSVar31 != (SColorPicker *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar31->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar31->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_160.Object;
    puVar25[6] = local_160.SharedReferenceCount.ReferenceController;
  }
  if (bVar33) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar31);
  }
  if (bVar16) {
    TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_170);
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  SWidget::RegisterActiveTimer
            ((SWidget *)this,&local_90,0.0,
             (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *)
             local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  if ((((this->ParentWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar6 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1))
  goto LAB_142f6bd02;
  pSVar28 = (SWidget *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  local_res18 = (SWindow *)0x0;
  pSVar32 = pSVar28;
  if (pSVar28 == (SWidget *)0x0) {
LAB_142f6bb06:
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar28 = pSVar32;
    if (bVar33) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pSVar28->_padding_;
    do {
      pSVar32 = pSVar30;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142f6bb06;
      LOCK();
      aVar21 = *(atomic<int> *)&pSVar28->_padding_;
      bVar33 = aVar4 == aVar21;
      if (bVar33) {
        *(atomic<int> *)&pSVar28->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar21 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar21;
    } while (!bVar33);
    local_res18 = (this->ParentWindowPtr).Object;
    pSVar32 = pSVar28;
    if (local_res18 == (SWindow *)0x0) goto LAB_142f6bb06;
  }
  local_188 = (undefined1  [8])0x0;
  local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_180.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_180;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,&local_180);
  pSVar31 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_170.Object = (SColorPicker *)HandleParentWindowClosed;
    local_170.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_118.field0_0x0._s_0.A << 0x20);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_80);
    local_res8 = (SColorPicker *)pTVar26->Object;
    pSVar31 = (SColorPicker *)(pTVar26->SharedReferenceCount).ReferenceController;
    if (pSVar31 != (SColorPicker *)0x0) {
      LOCK();
      *(int *)&pSVar31->_padding_ = (int)pSVar31->_padding_ + 1;
      UNLOCK();
      if (pSVar31 != (SColorPicker *)0x0) {
        LOCK();
        *(int *)&pSVar31->_padding_ = (int)pSVar31->_padding_ + 1;
        UNLOCK();
      }
    }
    bVar29 = 0xe0;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_160.Object = local_res8;
    local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar31;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_res8;
    puVar25[4] = pSVar31;
    if (pSVar31 != (SColorPicker *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pSVar31->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    puVar25[5] = local_170.Object;
    puVar25[6] = local_170.SharedReferenceCount.ReferenceController;
  }
  if ((char)bVar29 < '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar31);
  }
  if ((bVar29 & 0x40) != 0) {
    TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_160);
  }
  if ((bVar29 & 0x20) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  SWindow::SetOnWindowClosed
            (local_res18,
             (TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *)
             local_188);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_108);
  if ((local_180.DelegateSize != 0) &&
     (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_180,0,0,0x10);
    local_180.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar28);
LAB_142f6bd02:
  fVar10 = (this->CurrentColorHSV).field0_0x0._s_0.R;
  fVar11 = (this->CurrentColorHSV).field0_0x0._s_0.G;
  fVar12 = (this->CurrentColorHSV).field0_0x0._s_0.B;
  fVar13 = (this->CurrentColorHSV).field0_0x0._s_0.A;
  this->bColorPickerIsInlineVersion = param_1->_DisplayInlineVersion;
  uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar35 = __real_43b40000 + 0.0;
  this->bIsInteractive = false;
  this->bPerfIsTooSlowToUpdate = false;
  this->bIsThemePanelVisible = true;
  (this->NewColorPreviewImageVisibility).Value.Value = (uchar)EVisibility::Hidden.Value.Value;
  fVar34 = (float)((uint)(0.0 - fVar10) & uVar18);
  (this->OldColorPreviewImageVisibility).Value.Value = (uchar)EVisibility::Hidden.Value.Value;
  this->CurrentTime = 0.0;
  (this->ColorEnd).field0_0x0._s_0.R = fVar10;
  (this->ColorEnd).field0_0x0._s_0.G = fVar11;
  (this->ColorEnd).field0_0x0._s_0.B = fVar12;
  (this->ColorEnd).field0_0x0._s_0.A = fVar13;
  *(undefined8 *)&(this->ColorBegin).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->ColorBegin).field0_0x0 + 8) = 0;
  if (fVar34 <= (float)((uint)(fVar35 - fVar10) & uVar18)) {
    if ((float)((uint)((0.0 - __real_43b40000) - fVar10) & uVar18) < fVar34) {
      (this->ColorBegin).field0_0x0._s_0.R = 0.0 - __real_43b40000;
    }
  }
  else {
    (this->ColorBegin).field0_0x0._s_0.R = fVar35;
  }
  bVar33 = FPaths::FileExists(&GEditorPerProjectIni);
  if (bVar33) {
    local_res8 = (SColorPicker *)CONCAT71(local_res8._1_7_,1);
    local_res10[0] = true;
    FConfigCacheIni::GetBool
              (GConfig,L"ColorPickerUI",L"bWheelMode",(bool *)&local_res8,&GEditorPerProjectIni);
    FConfigCacheIni::GetBool
              (GConfig,L"ColorPickerUI",L"bSRGBEnabled",&this->bUseSRGB,&GEditorPerProjectIni);
    FConfigCacheIni::GetBool(GConfig,L"ColorPickerUI",L"bHexSRGB",local_res10,&GEditorPerProjectIni)
    ;
    FConfigCacheIni::GetBool
              (GConfig,L"ColorPickerUI",L"bIsThemePanelVisible",&this->bIsThemePanelVisible,
               &GEditorPerProjectIni);
    this->CurrentMode = (uint)((char)local_res8 != '\0');
    this->HexMode = (uint)(local_res10[0] == false);
  }
  if ((param_1->_sRGBOverride).bIsSet != false) {
    this->bUseSRGB = (param_1->_sRGBOverride).TypedValue;
  }
  if (this->bColorPickerIsInlineVersion == false) {
    GenerateDefaultColorPickerContent(this,true);
  }
  else {
    GenerateInlineColorPickerContent(this);
  }
  return;
}

// CycleMode @ 142fb5bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::CycleMode(SColorPicker *this)

{
  this->CurrentMode = (uint)(this->CurrentMode == Spectrum);
  return;
}

// DiscardColor @ 142fb7790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::DiscardColor(SColorPicker *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  FLinearColor *pFVar4;
  FLinearColor_u_0 *pFVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  FLinearColor_u_0 FVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnColorPickerCancelled
             ,&local_48);
  if ((*(int *)&(this->OnColorPickerCancelled).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnColorPickerCancelled).field_0x8, plVar6 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(*plVar6 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      pFVar4 = FLinearColor::HSVToLinearRGB(&this->OldColor,(FLinearColor *)&local_48);
      uVar1 = *(undefined8 *)&pFVar4->field0_0x0;
      uVar2 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnColorPickerCancelled,&local_30);
      if (*(int *)&(this->OnColorPickerCancelled).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->OnColorPickerCancelled).field_0x8;
      }
      local_58 = uVar1;
      uStack_50 = uVar2;
      (**(code **)(*plVar6 + 0x60))(plVar6,&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  uVar1 = *(undefined8 *)((longlong)&(this->OldColor).field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&(this->OldColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  pFVar5 = &FLinearColor::HSVToLinearRGB(&this->OldColor,(FLinearColor *)&local_48)->field0_0x0;
  auVar7 = minps((undefined1  [16])*pFVar5,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar8 = (FLinearColor_u_0)maxps(auVar7,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar8;
  ApplyNewTargetColor(this,true);
  return;
}

// GenerateDefaultColorPickerContent @ 142fc5580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::GenerateDefaultColorPickerContent(SColorPicker *this,bool param_1)

{
  int iVar1;
  FName *pFVar2;
  FSlotArguments *pFVar3;
  FSlotArguments *pFVar4;
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SColorWheel,1> *pTVar5;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar6;
  TSharedRef<SHorizontalBox,1> *pTVar7;
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SColorSpectrum,1> *pTVar8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBox,1> *pTVar9;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SOverlay,1> *pTVar11;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar12;
  TSharedRef<SBorder,1> *pTVar13;
  FText *pFVar14;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SCheckBox,1> *pTVar17;
  FMargin *pFVar18;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar19;
  TSharedRef<SImage,1> *pTVar20;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar21;
  TSharedRef<SButton,1> *pTVar22;
  TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SEyeDropperButton,1> *pTVar23;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar24;
  TSharedRef<SVerticalBox,1> *pTVar25;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SComboButton,1> *pTVar26;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SEditableTextBox,1> *pTVar27;
  bool *pbVar28;
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *this_07;
  TSharedRef<SThemeColorBlocksBar,1> *pTVar29;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SUniformGridPanel,1> *pTVar30;
  longlong lVar31;
  code **ppcVar32;
  undefined1 *puVar33;
  pmf_037795eb *ppVar34;
  pmf_56cdf8a7 *ppVar35;
  pmf_40262d99 *ppVar36;
  pmf_7adfccb1 *ppVar37;
  pmf_97d28a9e *ppVar38;
  pmf_59149942 *ppVar39;
  pmf_beeeae93 *ppVar40;
  pmf_f7550522 *ppVar41;
  pmf_e06ad559 *ppVar42;
  pmf_3ed7c398 *ppVar43;
  undefined1 *puVar44;
  pmf_8ab45a4a *ppVar45;
  pmf_23549314 *ppVar46;
  pmf_b5063530 *ppVar47;
  pmf_13f5a5c2 *ppVar48;
  char local_a4d8;
  T0RequiredArgs local_a4d7;
  T0RequiredArgs local_a4d6;
  T0RequiredArgs local_a4d5;
  T0RequiredArgs local_a4d4;
  T0RequiredArgs local_a4d3;
  T0RequiredArgs local_a4d2;
  T0RequiredArgs local_a4d1;
  T0RequiredArgs local_a4d0;
  T0RequiredArgs local_a4cf;
  T0RequiredArgs local_a4ce;
  T0RequiredArgs local_a4cd;
  T0RequiredArgs local_a4cc;
  T0RequiredArgs local_a4cb;
  T0RequiredArgs local_a4ca;
  T0RequiredArgs local_a4c9;
  T0RequiredArgs local_a4c8;
  T0RequiredArgs local_a4c7;
  T0RequiredArgs local_a4c6;
  T0RequiredArgs local_a4c5;
  T0RequiredArgs local_a4c4;
  T0RequiredArgs local_a4c3;
  T0RequiredArgs local_a4c2;
  T0RequiredArgs local_a4c1;
  T0RequiredArgs local_a4c0;
  T0RequiredArgs local_a4bf;
  T0RequiredArgs local_a4be;
  T0RequiredArgs local_a4bd;
  T0RequiredArgs local_a4bc;
  char local_a4bb;
  char local_a4ba;
  T0RequiredArgs local_a4b9;
  T0RequiredArgs local_a4b8;
  T0RequiredArgs local_a4b7;
  T0RequiredArgs local_a4b6;
  FStaticCastTag local_a4b5;
  undefined4 local_a4b4;
  float local_a4b0;
  float local_a4ac;
  float local_a4a8;
  float local_a4a4;
  float local_a4a0;
  float local_a49c;
  float local_a498;
  float local_a494;
  float local_a490;
  float local_a48c;
  float local_a488;
  float local_a484;
  float local_a480;
  float local_a47c;
  int local_a478 [2];
  float local_a470;
  float local_a46c;
  float local_a468;
  float local_a464;
  float local_a460 [2];
  ISlateStyle *local_a458;
  ISlateStyle *local_a450;
  ISlateStyle *local_a448;
  ISlateStyle *local_a440;
  EVisibility *local_a438;
  ISlateStyle *local_a430;
  TSharedRef<SColorPicker,1> *local_a428;
  ISlateStyle *local_a420;
  ISlateStyle *local_a418;
  ISlateStyle *local_a410;
  TWeakPtr<SWindow,1> *local_a408;
  FWeakReferencer<1> *local_a400;
  EVisibility *local_a3f8;
  ISlateStyle *local_a3f0;
  ISlateStyle *local_a3e8;
  FName *local_a3e0;
  FName local_a3d8;
  code *local_a3d0;
  FName *local_a3c8;
  FName local_a3c0;
  code *local_a3b8;
  FSlateBrush *local_a3b0;
  TAttribute<FSlateBrush_const_*> *local_a3a8;
  TAttribute<FSlateBrush_const_*> *local_a3a0;
  FArguments *local_a398;
  FArguments *local_a390;
  FArguments *local_a388;
  TAttribute<float> *local_a380;
  TAttribute<float> *local_a378;
  FSlotArguments *local_a370;
  TAttribute<float> *local_a368;
  TAttribute<float> *local_a360;
  FSlotArguments *local_a358;
  FArguments *local_a350;
  TAttribute<FSlateBrush_const_*> *local_a348;
  TAttribute<FSlateBrush_const_*> *local_a340;
  FArguments *local_a338;
  FArguments *local_a330;
  FArguments *local_a328;
  FArguments *local_a320;
  FArguments *local_a318;
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> *local_a310;
  FArguments *local_a308;
  FSlotArguments *local_a300;
  FSlotArguments *local_a2f8;
  FArguments *local_a2f0;
  undefined1 *local_a2e8;
  TSharedRef<SWidget,1> *local_a2e0;
  FSlotArguments *local_a2d8;
  FSlotArguments *local_a2d0;
  FArguments *local_a2c8;
  undefined1 *local_a2c0;
  TSharedRef<SWidget,1> *local_a2b8;
  FSlotArguments *local_a2b0;
  FSlotArguments *local_a2a8;
  FArguments *local_a2a0;
  FArguments *local_a298;
  FSlotArguments *local_a290;
  FSlotArguments *local_a288;
  FArguments *local_a280;
  TAttribute<FOptionalSize> *local_a278;
  TAttribute<FOptionalSize> *local_a270;
  FArguments *local_a268;
  TAttribute<FOptionalSize> *local_a260;
  TAttribute<FOptionalSize> *local_a258;
  FArguments *local_a250;
  FArguments *local_a248;
  FArguments *local_a240;
  FArguments *local_a238;
  FArguments *local_a230;
  FArguments *local_a228;
  FArguments *local_a220;
  FArguments *local_a218;
  FArguments *local_a210;
  FSlotArguments *local_a208;
  FSlotArguments *local_a200;
  FArguments *local_a1f8;
  FArguments *local_a1f0;
  FArguments *local_a1e8;
  FArguments *local_a1e0;
  FSlotArguments *local_a1d8;
  FSlotArguments *local_a1d0;
  FArguments *local_a1c8;
  undefined1 *local_a1c0;
  TSharedRef<SWidget,1> *local_a1b8;
  FSlotArguments *local_a1b0;
  FSlotArguments *local_a1a8;
  FArguments *local_a1a0;
  undefined1 *local_a198;
  TAttribute<FText> *local_a190;
  TAttribute<FText> *local_a188;
  FArguments *local_a180;
  FArguments *local_a178;
  FArguments *local_a170;
  TAttribute<FText> *local_a168;
  TAttribute<FText> *local_a160;
  FArguments *local_a158;
  FArguments *local_a150;
  FArguments *local_a148;
  FArguments *local_a140;
  FSlotArguments *local_a138;
  FSlotArguments *local_a130;
  FArguments *local_a128;
  TAttribute<float> *local_a120;
  TAttribute<float> *local_a118;
  FSlotArguments *local_a110;
  TAttribute<float> *local_a108;
  TAttribute<float> *local_a100;
  FSlotArguments *local_a0f8;
  undefined1 *local_a0f0;
  TAttribute<float> *local_a0e8;
  TAttribute<float> *local_a0e0;
  FSlotArguments *local_a0d8;
  TAttribute<float> *local_a0d0;
  TAttribute<float> *local_a0c8;
  FSlotArguments *local_a0c0;
  FArguments *local_a0b8;
  TAttribute<FMargin> *local_a0b0;
  TAttribute<FMargin> *local_a0a8;
  FArguments *local_a0a0;
  FArguments *local_a098;
  TAttribute<FText> *local_a090;
  TAttribute<FText> *local_a088;
  FArguments *local_a080;
  FName *local_a078;
  FName local_a070;
  code *local_a068;
  FSlateBrush *local_a060;
  TAttribute<FSlateBrush_const_*> *local_a058;
  TAttribute<FSlateBrush_const_*> *local_a050;
  FArguments *local_a048;
  FArguments *local_a040;
  FArguments *local_a038;
  FSlotArguments *local_a030;
  FSlotArguments *local_a028;
  FArguments *local_a020;
  FName *local_a018;
  FName local_a010;
  code *local_a008;
  FSlateBrush *local_a000;
  TAttribute<FSlateBrush_const_*> *local_9ff8;
  TAttribute<FSlateBrush_const_*> *local_9ff0;
  FArguments *local_9fe8;
  FArguments *local_9fe0;
  FArguments *local_9fd8;
  FSlotArguments *local_9fd0;
  FSlotArguments *local_9fc8;
  FArguments *local_9fc0;
  FArguments *local_9fb8;
  NamedSlotProperty<SButton::FArguments> *local_9fb0;
  FArguments *local_9fa8;
  FSlotArguments *local_9fa0;
  FSlotArguments *local_9f98;
  FArguments *local_9f90;
  TAttribute<float> *local_9f88;
  TAttribute<float> *local_9f80;
  FSlotArguments *local_9f78;
  TAttribute<float> *local_9f70;
  TAttribute<float> *local_9f68;
  FSlotArguments *local_9f60;
  undefined1 *local_9f58;
  FArguments *local_9f50;
  FArguments *local_9f48;
  FArguments *local_9f40;
  TAttribute<float> *local_9f38;
  TAttribute<float> *local_9f30;
  FArguments *local_9f28;
  EVisibility *local_9f20;
  TAttribute<EVisibility> *local_9f18;
  TAttribute<EVisibility> *local_9f10;
  FArguments *local_9f08;
  FArguments *local_9f00;
  FSlotArguments *local_9ef8;
  FSlotArguments *local_9ef0;
  FArguments *local_9ee8;
  FArguments *local_9ee0;
  FSlotArguments *local_9ed8;
  FSlotArguments *local_9ed0;
  FArguments *local_9ec8;
  TAttribute<float> *local_9ec0;
  TAttribute<float> *local_9eb8;
  FSlotArguments *local_9eb0;
  TAttribute<float> *local_9ea8;
  TAttribute<float> *local_9ea0;
  FSlotArguments *local_9e98;
  undefined1 *local_9e90;
  TAttribute<float> *local_9e88;
  TAttribute<float> *local_9e80;
  FSlotArguments *local_9e78;
  TAttribute<float> *local_9e70;
  TAttribute<float> *local_9e68;
  FSlotArguments *local_9e60;
  FArguments *local_9e58;
  TAttribute<FMargin> *local_9e50;
  TAttribute<FMargin> *local_9e48;
  FArguments *local_9e40;
  TAttribute<FText> *local_9e38;
  TAttribute<FText> *local_9e30;
  FArguments *local_9e28;
  FArguments *local_9e20;
  FArguments *local_9e18;
  FArguments *local_9e10;
  NamedSlotProperty<SButton::FArguments> *local_9e08;
  FArguments *local_9e00;
  FSlotArguments *local_9df8;
  FSlotArguments *local_9df0;
  FArguments *local_9de8;
  FArguments *local_9de0;
  FSlotArguments *local_9dd8;
  FSlotArguments *local_9dd0;
  FArguments *local_9dc8;
  FArguments *local_9dc0;
  FSlotArguments *local_9db8;
  FSlotArguments *local_9db0;
  FArguments *local_9da8;
  FArguments *local_9da0;
  FSlotArguments *local_9d98;
  FSlotArguments *local_9d90;
  FArguments *local_9d88;
  undefined1 *local_9d80;
  TSharedRef<SWidget,1> *local_9d78;
  FSlotArguments *local_9d70;
  FSlotArguments *local_9d68;
  FArguments *local_9d60;
  undefined1 *local_9d58;
  TSharedRef<SWidget,1> *local_9d50;
  FSlotArguments *local_9d48;
  FSlotArguments *local_9d40;
  FArguments *local_9d38;
  undefined1 *local_9d30;
  TSharedRef<SWidget,1> *local_9d28;
  FSlotArguments *local_9d20;
  FSlotArguments *local_9d18;
  FArguments *local_9d10;
  undefined1 *local_9d08;
  TSharedRef<SWidget,1> *local_9d00;
  FSlotArguments *local_9cf8;
  FSlotArguments *local_9cf0;
  FArguments *local_9ce8;
  FArguments *local_9ce0;
  FSlotArguments *local_9cd8;
  FSlotArguments *local_9cd0;
  FArguments *local_9cc8;
  undefined1 *local_9cc0;
  TSharedRef<SWidget,1> *local_9cb8;
  FSlotArguments *local_9cb0;
  FSlotArguments *local_9ca8;
  FArguments *local_9ca0;
  undefined1 *local_9c98;
  TSharedRef<SWidget,1> *local_9c90;
  FSlotArguments *local_9c88;
  FSlotArguments *local_9c80;
  FArguments *local_9c78;
  undefined1 *local_9c70;
  TSharedRef<SWidget,1> *local_9c68;
  FSlotArguments *local_9c60;
  FSlotArguments *local_9c58;
  FArguments *local_9c50;
  TAttribute<float> *local_9c48;
  TAttribute<float> *local_9c40;
  FSlotArguments *local_9c38;
  TAttribute<float> *local_9c30;
  TAttribute<float> *local_9c28;
  FSlotArguments *local_9c20;
  undefined1 *local_9c18;
  undefined1 *local_9c10;
  undefined1 *local_9c08;
  FName *local_9c00;
  FName local_9bf8;
  ISlateStyle *local_9bf0;
  FComboButtonStyle *local_9be8;
  FArguments *local_9be0;
  FArguments *local_9bd8;
  TSharedRef<SWidget,1> *local_9bd0;
  NamedSlotProperty<SComboButton::FArguments> *local_9bc8;
  FArguments *local_9bc0;
  TAttribute<FSlateFontInfo> *local_9bb8;
  TAttribute<FSlateFontInfo> *local_9bb0;
  FArguments *local_9ba8;
  FArguments *local_9ba0;
  FArguments *local_9b98;
  NamedSlotProperty<SComboButton::FArguments> *local_9b90;
  FArguments *local_9b88;
  FSlotArguments *local_9b80;
  FSlotArguments *local_9b78;
  FArguments *local_9b70;
  undefined1 *local_9b68;
  TAttribute<float> *local_9b60;
  TAttribute<float> *local_9b58;
  FArguments *local_9b50;
  FArguments *local_9b48;
  TAttribute<FSlateFontInfo> *local_9b40;
  TAttribute<FSlateFontInfo> *local_9b38;
  FArguments *local_9b30;
  TAttribute<FMargin> *local_9b28;
  TAttribute<FMargin> *local_9b20;
  FArguments *local_9b18;
  FArguments *local_9b10;
  FArguments *local_9b08;
  FSlotArguments *local_9b00;
  FSlotArguments *local_9af8;
  FArguments *local_9af0;
  FArguments *local_9ae8;
  FSlotArguments *local_9ae0;
  FSlotArguments *local_9ad8;
  FArguments *local_9ad0;
  FArguments *local_9ac8;
  FSlotArguments *local_9ac0;
  FSlotArguments *local_9ab8;
  FArguments *local_9ab0;
  FArguments *local_9aa8;
  FSlotArguments *local_9aa0;
  FSlotArguments *local_9a98;
  FArguments *local_9a90;
  undefined1 *local_9a88;
  FName *local_9a80;
  FName local_9a78;
  code *local_9a70;
  FSlateBrush *local_9a68;
  TAttribute<FSlateBrush_const_*> *local_9a60;
  TAttribute<FSlateBrush_const_*> *local_9a58;
  FArguments *local_9a50;
  TAttribute<FMargin> *local_9a48;
  TAttribute<FMargin> *local_9a40;
  FArguments *local_9a38;
  FArguments *local_9a30;
  FArguments *local_9a28;
  TAttribute<bool> *local_9a20;
  TAttribute<bool> *local_9a18;
  FArguments *local_9a10;
  longlong *local_9a08;
  TSharedRef<SWidget,1> *local_9a00;
  TSharedRef<SColorPicker,1> *local_99f8;
  FArguments *local_99f0;
  FArguments *local_99e8;
  FArguments *local_99e0;
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> *local_99d8;
  FArguments *local_99d0;
  FArguments *local_99c8;
  FArguments *local_99c0;
  FSlotArguments *local_99b8;
  FSlotArguments *local_99b0;
  FArguments *local_99a8;
  undefined1 *local_99a0;
  undefined1 *local_9998;
  FName *local_9990;
  FName local_9988;
  FName local_9980;
  code *local_9978;
  TAttribute<float> *local_9970;
  TAttribute<float> *local_9968;
  FArguments *local_9960;
  FName *local_9958;
  FName local_9950;
  FName local_9948;
  code *local_9940;
  TAttribute<float> *local_9938;
  TAttribute<float> *local_9930;
  FArguments *local_9928;
  FName *local_9920;
  FName local_9918;
  FMargin *local_9910;
  FName local_9908;
  code *local_9900;
  TAttribute<FMargin> *local_98f8;
  TAttribute<FMargin> *local_98f0;
  FArguments *local_98e8;
  EVisibility *local_98e0;
  TAttribute<EVisibility> *local_98d8;
  TAttribute<EVisibility> *local_98d0;
  FArguments *local_98c8;
  FName *local_98c0;
  FName local_98b8;
  FMargin *local_98b0;
  FName local_98a8;
  code *local_98a0;
  TAttribute<FMargin> *local_9898;
  TAttribute<FMargin> *local_9890;
  FArguments *local_9888;
  FArguments *local_9880;
  TAttribute<FText> *local_9878;
  TAttribute<FText> *local_9870;
  FArguments *local_9868;
  FArguments *local_9860;
  FArguments *local_9858;
  FSlotArguments *local_9850;
  FSlotArguments *local_9848;
  FArguments *local_9840;
  FName *local_9838;
  FName local_9830;
  FMargin *local_9828;
  FName local_9820;
  code *local_9818;
  TAttribute<FMargin> *local_9810;
  TAttribute<FMargin> *local_9808;
  FArguments *local_9800;
  FArguments *local_97f8;
  TAttribute<FText> *local_97f0;
  TAttribute<FText> *local_97e8;
  FArguments *local_97e0;
  FArguments *local_97d8;
  FArguments *local_97d0;
  FSlotArguments *local_97c8;
  FSlotArguments *local_97c0;
  FArguments *local_97b8;
  FArguments *local_97b0;
  FSlotArguments *local_97a8;
  FSlotArguments *local_97a0;
  FArguments *local_9798;
  FArguments *local_9790;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_9788;
  TSharedRef<SWidget,1> local_9780;
  TSharedRef<SWidget,1> local_9770;
  TSharedRef<SWidget,1> local_9760;
  TSharedRef<SWidget,1> local_9750;
  TSharedRef<SWidget,1> local_9740;
  TSharedRef<SWidget,1> local_9730;
  TSharedRef<SWidget,1> local_9720;
  TSharedRef<SWidget,1> local_9710;
  TSharedRef<SWidget,1> local_9700;
  TSharedRef<SWidget,1> local_96f0;
  TSharedRef<SWidget,1> local_96e0;
  code *local_96d0;
  undefined4 local_96c8;
  code *local_96c0;
  undefined4 local_96b8;
  code *local_96b0;
  undefined4 local_96a8;
  code *local_96a0;
  undefined4 local_9698;
  code *local_9690;
  undefined4 local_9688;
  code *local_9680;
  undefined4 local_9678;
  code *local_9670;
  undefined4 local_9668;
  code *local_9660;
  undefined4 local_9658;
  code *local_9650;
  undefined4 local_9648;
  code *local_9640;
  undefined4 local_9638;
  code *local_9630;
  undefined4 local_9628;
  code *local_9620;
  undefined4 local_9618;
  code *local_9610;
  undefined4 local_9608;
  code *local_9600;
  undefined4 local_95f8;
  code *local_95f0;
  undefined4 local_95e8;
  code *local_95e0;
  undefined4 local_95d8;
  code *local_95d0;
  undefined4 local_95c8;
  code *local_95c0;
  undefined4 local_95b8;
  code *local_95b0;
  undefined4 local_95a8;
  code *local_95a0;
  undefined4 local_9598;
  code *local_9590;
  undefined4 local_9588;
  code *local_9580;
  undefined4 local_9578;
  code *local_9570;
  undefined4 local_9568;
  code *local_9560;
  undefined4 local_9558;
  code *local_9550;
  undefined4 local_9548;
  code *local_9540;
  undefined4 local_9538;
  code *local_9530;
  undefined4 local_9528;
  code *local_9520;
  undefined4 local_9518;
  code *local_9510;
  undefined4 local_9508;
  code *local_9500;
  undefined4 local_94f8;
  code *local_94f0;
  undefined4 local_94e8;
  TSharedRef<SWidget,1> local_94e0;
  TSharedRef<SWidget,1> local_94d0;
  TSharedRef<SWidget,1> local_94c0;
  TSharedRef<SWidget,1> local_94b0;
  TSharedRef<SWidget,1> local_94a0;
  TSharedRef<SWidget,1> local_9490;
  TSharedRef<SWidget,1> local_9480;
  TSharedRef<SWidget,1> local_9470;
  TSharedRef<SWidget,1> local_9460;
  TSharedRef<SWidget,1> local_9450;
  TSharedRef<SWidget,1> local_9440;
  TSharedRef<SWidget,1> local_9430;
  TSharedRef<SWidget,1> local_9420;
  TSharedRef<SWidget,1> local_9410;
  TSharedRef<SWidget,1> local_9400;
  TSharedRef<SWidget,1> local_93f0;
  TSharedRef<SWidget,1> local_93e0;
  TSharedRef<SWidget,1> local_93d0;
  TSharedRef<SWidget,1> local_93c0;
  TSharedRef<SWidget,1> local_93b0;
  TSharedRef<SWidget,1> local_93a0;
  FName local_9390;
  FName local_9388;
  FName local_9380;
  FName local_9378;
  FName local_9370;
  FName local_9368;
  FName local_9360;
  FName local_9358;
  FName local_9350;
  FName local_9348;
  FName local_9340;
  undefined1 local_9338 [16];
  pmf_037795eb local_9328;
  undefined1 local_9318 [16];
  pmf_b5063530 local_9308;
  undefined1 local_92f8 [16];
  pmf_7adfccb1 local_92e8;
  undefined1 local_92d8 [16];
  pmf_23549314 local_92c8;
  undefined1 local_92b8 [16];
  pmf_97d28a9e local_92a8;
  undefined1 local_9298 [16];
  pmf_97d28a9e local_9288;
  undefined1 local_9278 [16];
  pmf_b5063530 local_9268;
  undefined1 local_9258 [16];
  pmf_7adfccb1 local_9248;
  undefined1 local_9238 [16];
  pmf_23549314 local_9228;
  undefined1 local_9218 [16];
  pmf_97d28a9e local_9208;
  undefined1 local_91f8 [16];
  pmf_97d28a9e local_91e8;
  undefined1 local_91d8 [16];
  pmf_56cdf8a7 local_91c8;
  undefined1 local_91b8 [16];
  pmf_40262d99 local_91a8;
  undefined1 local_9198 [16];
  pmf_13f5a5c2 local_9188;
  undefined1 local_9178 [16];
  pmf_7adfccb1 local_9168;
  undefined1 local_9158 [16];
  pmf_7adfccb1 local_9148;
  undefined1 local_9138 [16];
  pmf_23549314 local_9128;
  undefined1 local_9118 [16];
  pmf_97d28a9e local_9108;
  undefined1 local_90f8 [16];
  pmf_59149942 local_90e8;
  undefined1 local_90d8 [16];
  pmf_13f5a5c2 local_90c8;
  undefined1 local_90b8 [16];
  pmf_beeeae93 local_90a8;
  undefined1 local_9098 [16];
  pmf_3ed7c398 local_9088;
  undefined1 local_9078 [16];
  pmf_3ed7c398 local_9068;
  undefined1 local_9058 [16];
  pmf_f7550522 local_9048;
  undefined1 local_9038 [16];
  pmf_e06ad559 local_9028;
  undefined1 local_9018 [16];
  pmf_3ed7c398 local_9008;
  undefined1 local_8ff8 [16];
  TSharedRef<SWidget,1> local_8fe8;
  undefined1 local_8fd8 [16];
  pmf_8ab45a4a local_8fc8;
  undefined1 local_8fb8 [16];
  pmf_23549314 local_8fa8;
  undefined1 local_8f98 [16];
  pmf_b5063530 local_8f88;
  undefined1 local_8f78 [16];
  pmf_13f5a5c2 local_8f68;
  undefined1 local_8f58 [16];
  pmf_13f5a5c2 local_8f48;
  TSharedRef<SVerticalBox,1> local_8f38;
  TSharedRef<SUniformGridPanel,1> local_8f28;
  TSharedRef<SButton,1> local_8f18;
  FText local_8f08;
  TSharedRef<SButton,1> local_8ef8;
  FText local_8ee8;
  TSharedRef<SBorder,1> local_8ed8;
  TSharedRef<SThemeColorBlocksBar,1> local_8ec8;
  TSharedRef<SHorizontalBox,1> local_8eb8;
  TSharedRef<SVerticalBox,1> local_8ea8;
  TSharedRef<SHorizontalBox,1> local_8e98;
  TSharedRef<SEditableTextBox,1> local_8e88;
  TSharedRef<SComboButton,1> local_8e78;
  TSharedRef<STextBlock,1> local_8e68;
  TSharedRef<SWidget,1> local_8e58;
  TSharedRef<SWidget,1> local_8e48;
  TSharedRef<SWidget,1> local_8e38;
  TSharedRef<SWidget,1> local_8e28;
  TSharedRef<SVerticalBox,1> local_8e18;
  TSharedRef<SWidget,1> local_8e08;
  TSharedRef<SWidget,1> local_8df8;
  TSharedRef<SWidget,1> local_8de8;
  TSharedRef<SWidget,1> local_8dd8;
  TSharedRef<SHorizontalBox,1> local_8dc8;
  TSharedRef<SVerticalBox,1> local_8db8;
  TSharedRef<SHorizontalBox,1> local_8da8;
  TSharedRef<SButton,1> local_8d98;
  TSharedRef<SImage,1> local_8d88;
  FText local_8d78;
  TSharedRef<SHorizontalBox,1> local_8d68;
  TSharedRef<SEyeDropperButton,1> local_8d58;
  TSharedRef<SButton,1> local_8d48;
  TSharedRef<SOverlay,1> local_8d38;
  TSharedRef<SImage,1> local_8d28;
  TSharedRef<SImage,1> local_8d18;
  FText local_8d08;
  TSharedRef<SCheckBox,1> local_8cf8;
  TSharedRef<STextBlock,1> local_8ce8;
  FText local_8cd8;
  FText local_8cc8;
  TSharedRef<SWidget,1> local_8cb8;
  TSharedRef<SBorder,1> local_8ca8;
  TSharedRef<SOverlay,1> local_8c98;
  TSharedRef<SBox,1> local_8c88;
  TSharedRef<SColorSpectrum,1> local_8c78;
  TSharedRef<SHorizontalBox,1> local_8c68;
  TSharedRef<SWidget,1> local_8c58;
  TSharedRef<SWidget,1> local_8c48;
  TSharedRef<SColorWheel,1> local_8c38;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_8c28;
  TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs> local_8c10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_8bf8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_8be0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8bc8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8bb0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_8b98;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b80;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_8b68;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8b50;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_8b38;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_8b20;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_8b08;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_8af0;
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> local_8ad8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8ac0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8aa8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8a90;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_8a78;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_8a60;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8a48;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8a30;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8a18;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8a00;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_89e8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_89d0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_89b8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_89a0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_8988;
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> local_8970;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8958;
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> local_8940;
  NamedSlotProperty<SComboButton::FArguments> local_8928;
  FMargin local_8918;
  FMargin local_8908;
  TSharedRef<SColorPicker,1> local_88f8;
  FMargin local_88e8;
  NamedSlotProperty<SButton::FArguments> local_88d8;
  FMargin local_88c8;
  NamedSlotProperty<SButton::FArguments> local_88b8;
  NamedSlotProperty<SComboButton::FArguments> local_88a8;
  FSlotArguments local_8898;
  FSlotArguments local_8870;
  FSlateFontInfo local_8848;
  TAttribute<float> local_87e8;
  TAttribute<float> local_87c8;
  TAttribute<FOptionalSize> local_87a8;
  TAttribute<FOptionalSize> local_8788;
  TAttribute<float> local_8768;
  TAttribute<float> local_8748;
  TAttribute<float> local_8728;
  TAttribute<float> local_8708;
  TAttribute<float> local_86e8;
  TAttribute<float> local_86c8;
  TAttribute<float> local_86a8;
  TAttribute<EVisibility> local_8688;
  TAttribute<float> local_8668;
  TAttribute<float> local_8648;
  TAttribute<float> local_8628;
  TAttribute<float> local_8608;
  TAttribute<float> local_85e8;
  TAttribute<float> local_85c8;
  TAttribute<bool> local_85a8;
  TAttribute<float> local_8588;
  TAttribute<float> local_8568;
  TAttribute<EVisibility> local_8548;
  TAttribute<float> local_8528;
  TAttribute<FSlateBrush_const_*> local_8508;
  TAttribute<FSlateBrush_const_*> local_84e0;
  TAttribute<FSlateBrush_const_*> local_84b8;
  TAttribute<FSlateBrush_const_*> local_8490;
  TAttribute<FSlateBrush_const_*> local_8468;
  TAttribute<FText> local_8440;
  TAttribute<FMargin> local_8410;
  TAttribute<FText> local_83e0;
  TAttribute<FMargin> local_83b0;
  TAttribute<FText> local_8380;
  TAttribute<FMargin> local_8350;
  TAttribute<FMargin> local_8320;
  TAttribute<FMargin> local_82f0;
  TAttribute<FMargin> local_82c0;
  TAttribute<FText> local_8290;
  TAttribute<FMargin> local_8260;
  TAttribute<FText> local_8230;
  TAttribute<FText> local_8200;
  FSlotArguments local_81d0;
  FSlotArguments local_8170;
  FSlotArguments local_8110;
  FSlotArguments local_80b0;
  FSlotArguments local_8050;
  FSlotArguments local_7f68;
  FSlotArguments local_7e80;
  FSlotArguments local_7d98;
  FSlotArguments local_7cb0;
  FSlotArguments local_7bc8;
  FSlotArguments local_7ae0;
  FSlotArguments local_79f8;
  FSlotArguments local_7910;
  FSlotArguments local_7828;
  FSlotArguments local_7740;
  FSlotArguments local_7658;
  FSlotArguments local_7570;
  FSlotArguments local_7488;
  FSlotArguments local_73a0;
  FSlotArguments local_72b8;
  FSlotArguments local_71d0;
  FSlotArguments local_70e8;
  FSlotArguments local_7000;
  FSlotArguments local_6f18;
  FSlotArguments local_6e30;
  FSlotArguments local_6d48;
  FSlotArguments local_6c60;
  FSlotArguments local_6b78;
  FSlotArguments local_6a90;
  FSlotArguments local_69a8;
  FSlotArguments local_68c0;
  FSlotArguments local_67d8;
  TAttribute<FSlateFontInfo> local_66f0;
  TAttribute<FSlateFontInfo> local_6670;
  FArguments local_65f0;
  FArguments local_63e8;
  FArguments local_61e0;
  FArguments local_5fd8;
  FArguments local_5dd0;
  FArguments local_5bc8;
  FArguments local_59c0;
  FArguments local_57b8;
  FArguments local_55b0;
  FArguments local_53a8;
  FArguments local_51a0;
  FArguments local_4f98;
  FArguments local_4d90;
  FArguments local_4b30;
  FArguments local_48b8;
  FArguments local_4628;
  FArguments local_4380;
  FArguments local_40d8;
  FArguments local_3e30;
  FArguments local_3b78;
  FArguments local_38a0;
  FArguments local_3568;
  FArguments local_3228;
  FArguments local_2e48;
  FArguments local_2a68;
  FArguments local_2688;
  FArguments local_2148;
  FArguments local_1c08;
  FArguments local_16c8;
  FArguments local_1188;
  FArguments local_c30;
  FArguments local_6d8;
  undefined8 uStack_18;
  
  uStack_18 = 0x142fc5595;
  local_a458 = FAppStyle::Get();
  local_a3d0 = *(code **)((longlong)*local_a458 + 0x88);
  local_a3e0 = &local_9340;
  pFVar2 = ::FName::FName(local_a3e0,"ColorPicker.SmallFont");
  local_a3d8 = *pFVar2;
  (*local_a3d0)(local_a458,&local_8848,local_a3d8,0);
  local_9788 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_9d88 = SVerticalBox::FArguments::FArguments(&local_4f98);
  pFVar3 = SVerticalBox::Slot(&local_67d8);
  local_9d98 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_a1c8 = SHorizontalBox::FArguments::FArguments(&local_51a0);
  pFVar4 = SHorizontalBox::Slot(&local_68c0);
  local_a1d8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
  local_a398 = SBorder::FArguments::FArguments(&local_2a68);
  local_a3a8 = &local_8508;
  local_a450 = FAppStyle::Get();
  local_a3b8 = *(code **)((longlong)*local_a450 + 0x50);
  local_a3c8 = &local_9390;
  pFVar2 = ::FName::FName(local_a3c8,"NoBorder");
  local_a3c0 = *pFVar2;
  local_a3b0 = (FSlateBrush *)(*local_a3b8)(local_a450,local_a3c0,0,0);
  local_a3a0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_a3a8,&local_a3b0);
  local_a390 = SBorder::FArguments::BorderImage(local_a398,local_a3a0);
  local_a388 = SBorder::FArguments::Padding(local_a390,0.0);
  local_96d0 = HandleColorAreaMouseDown;
  local_96c8 = 0;
  ppcVar32 = &local_96d0;
  puVar33 = local_9338;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9338;
  ppVar34 = &local_9328;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar34 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar34 = (pmf_037795eb *)&ppVar34->field_0x1;
  }
  local_a1e8 = SBorder::FArguments::OnMouseButtonDown<SColorPicker>(local_a388,this,&local_9328);
  local_a280 = SOverlay::FArguments::FArguments(&local_53a8);
  local_a290 = SOverlay::Slot(&local_80b0,0);
  local_a2f0 = SHorizontalBox::FArguments::FArguments(&local_55b0);
  local_a370 = SHorizontalBox::Slot(&local_69a8);
  local_a380 = &local_87e8;
  local_a4b0 = __real_43480000;
  local_a378 = TAttribute<float>::TAttribute<float>(local_a380,&local_a4b0);
  local_a358 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(local_a370,local_a378);
  local_a368 = &local_87c8;
  local_a4ac = __real_43480000;
  local_a360 = TAttribute<float>::TAttribute<float>(local_a368,&local_a4ac);
  local_a300 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(local_a358,local_a360);
  local_a350 = SColorWheel::FArguments::FArguments(&local_3e30);
  local_96c0 = GetCurrentColor;
  local_96b8 = 0;
  ppcVar32 = &local_96c0;
  puVar33 = local_9318;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9318;
  ppVar47 = &local_9308;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar47 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar47 = (pmf_b5063530 *)&ppVar47->field_0x1;
  }
  local_a338 = SColorWheel::FArguments::SelectedColor<SColorPicker>(local_a350,this,&local_9308);
  local_a348 = &local_84e0;
  local_a340 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_a348,&this->ColorWheelBrush);
  local_a330 = SColorWheel::FArguments::ColorWheelBrush(local_a338,local_a340);
  local_96b0 = HandleColorPickerModeVisibility;
  local_96a8 = 0;
  ppcVar32 = &local_96b0;
  puVar33 = local_92f8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_92f8;
  ppVar37 = &local_92e8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar37 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar37 = (pmf_7adfccb1 *)&ppVar37->field_0x1;
  }
  local_a328 = TSlateBaseNamedArgs<SColorWheel>::Visibility<SColorPicker,enum_EColorPickerModes>
                         ((TSlateBaseNamedArgs<SColorWheel> *)local_a330,this,&local_92e8,Wheel);
  local_96a0 = HandleColorWheelValueChanged;
  local_9698 = 0;
  ppcVar32 = &local_96a0;
  puVar33 = local_92d8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_92d8;
  ppVar46 = &local_92c8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar46 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar46 = (pmf_23549314 *)&ppVar46->field_0x1;
  }
  local_a320 = SColorWheel::FArguments::OnValueChanged<SColorPicker>(local_a328,this,&local_92c8);
  local_9690 = HandleInteractiveChangeBegin;
  local_9688 = 0;
  ppcVar32 = &local_9690;
  puVar33 = local_92b8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_92b8;
  ppVar38 = &local_92a8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar38 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar38 = (pmf_97d28a9e *)&ppVar38->field_0x1;
  }
  local_a318 = SColorWheel::FArguments::OnMouseCaptureBegin<SColorPicker>
                         (local_a320,this,&local_92a8);
  local_9680 = HandleInteractiveChangeEnd;
  local_9678 = 0;
  ppcVar32 = &local_9680;
  puVar33 = local_9298;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9298;
  ppVar38 = &local_9288;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar38 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar38 = (pmf_97d28a9e *)&ppVar38->field_0x1;
  }
  local_a308 = SColorWheel::FArguments::OnMouseCaptureEnd<SColorPicker>(local_a318,this,&local_9288)
  ;
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d7);
  local_a310 = MakeTDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
                         (&local_8940,"SColorWheel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                          ,0xa4,&local_a4d7);
  this_00 = TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::Expose<SColorWheel>
                      (local_a310,&this->ColorWheel);
  pTVar5 = TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_8c38,local_a308);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorWheel>(&local_94e0,pTVar5);
  local_a2f8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a300,&local_94e0);
  local_a2c8 = SHorizontalBox::FArguments::operator+(local_a2f0,local_a2f8);
  pFVar4 = SHorizontalBox::Slot(&local_6a90);
  pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
  local_a2e8 = &pFVar4->field_0x18;
  local_a2d8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_a2e8,__real_41a00000,0.0,0.0,0.0);
  local_a2e0 = MakeColorSlider(this,&local_8c48,Saturation);
  local_a2d0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a2d8,local_a2e0);
  local_a2a0 = SHorizontalBox::FArguments::operator+(local_a2c8,local_a2d0);
  pFVar4 = SHorizontalBox::Slot(&local_6b78);
  pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
  local_a2c0 = &pFVar4->field_0x18;
  local_a2b0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_a2c0,__real_41a00000,0.0,0.0,0.0);
  local_a2b8 = MakeColorSlider(this,&local_8c58,Value);
  local_a2a8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a2b0,local_a2b8);
  local_a298 = SHorizontalBox::FArguments::operator+(local_a2a0,local_a2a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d6);
  pTVar6 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_8958,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x9e,&local_a4d6);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_8c68,local_a298);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_96e0,pTVar7);
  local_a288 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a290,&local_96e0);
  local_a1f8 = SOverlay::FArguments::operator+(local_a280,local_a288);
  local_a208 = SOverlay::Slot(&local_8110,0);
  local_a268 = SBox::FArguments::FArguments(&local_3568);
  local_a278 = &local_87a8;
  local_a4a8 = __real_43480000;
  local_a270 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><float>(local_a278,&local_a4a8);
  local_a250 = SBox::FArguments::HeightOverride(local_a268,local_a270);
  local_a260 = &local_8788;
  local_a4a4 = __real_43980000;
  local_a258 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><float>(local_a260,&local_a4a4);
  local_a218 = SBox::FArguments::WidthOverride(local_a250,local_a258);
  local_a248 = SColorSpectrum::FArguments::FArguments(&local_48b8);
  local_9670 = GetCurrentColor;
  local_9668 = 0;
  ppcVar32 = &local_9670;
  puVar33 = local_9278;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9278;
  ppVar47 = &local_9268;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar47 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar47 = (pmf_b5063530 *)&ppVar47->field_0x1;
  }
  local_a240 = SColorSpectrum::FArguments::SelectedColor<SColorPicker>(local_a248,this,&local_9268);
  local_9660 = HandleColorPickerModeVisibility;
  local_9658 = 0;
  ppcVar32 = &local_9660;
  puVar33 = local_9258;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9258;
  ppVar37 = &local_9248;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar37 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar37 = (pmf_7adfccb1 *)&ppVar37->field_0x1;
  }
  local_a238 = TSlateBaseNamedArgs<SColorSpectrum>::Visibility<SColorPicker,enum_EColorPickerModes>
                         ((TSlateBaseNamedArgs<SColorSpectrum> *)local_a240,this,&local_9248,
                          Spectrum);
  local_9650 = HandleColorSpectrumValueChanged;
  local_9648 = 0;
  ppcVar32 = &local_9650;
  puVar33 = local_9238;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9238;
  ppVar46 = &local_9228;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar46 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar46 = (pmf_23549314 *)&ppVar46->field_0x1;
  }
  local_a230 = SColorSpectrum::FArguments::OnValueChanged<SColorPicker>(local_a238,this,&local_9228)
  ;
  local_9640 = HandleInteractiveChangeBegin;
  local_9638 = 0;
  ppcVar32 = &local_9640;
  puVar33 = local_9218;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9218;
  ppVar38 = &local_9208;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar38 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar38 = (pmf_97d28a9e *)&ppVar38->field_0x1;
  }
  local_a228 = SColorSpectrum::FArguments::OnMouseCaptureBegin<SColorPicker>
                         (local_a230,this,&local_9208);
  local_9630 = HandleInteractiveChangeEnd;
  local_9628 = 0;
  ppcVar32 = &local_9630;
  puVar33 = local_91f8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_91f8;
  ppVar38 = &local_91e8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar38 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar38 = (pmf_97d28a9e *)&ppVar38->field_0x1;
  }
  local_a220 = SColorSpectrum::FArguments::OnMouseCaptureEnd<SColorPicker>
                         (local_a228,this,&local_91e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d5);
  this_01 = MakeTDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>
                      (&local_8970,"SColorSpectrum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xc5,&local_a4d5);
  pTVar8 = TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_8c78,local_a220);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorSpectrum>(&local_96f0,pTVar8);
  local_a210 = SBox::FArguments::operator[](local_a218,&local_96f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d4);
  this_02 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_8988,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xc1,&local_a4d4);
  pTVar9 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_8c88,local_a210);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_9700,pTVar9);
  local_a200 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a208,&local_9700);
  local_a1f0 = SOverlay::FArguments::operator+(local_a1f8,local_a200);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d3);
  pTVar10 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_8a78,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x99,&local_a4d3);
  pTVar11 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8c98,local_a1f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_9710,pTVar11);
  local_a1e0 = SBorder::FArguments::operator[](local_a1e8,&local_9710);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d2);
  pTVar12 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_8b68,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x94,&local_a4d2);
  pTVar13 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar12,&local_8ca8,local_a1e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_9720,pTVar13);
  local_a1d0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a1d8,&local_9720);
  local_9da8 = SHorizontalBox::FArguments::operator+(local_a1c8,local_a1d0);
  pFVar4 = SHorizontalBox::Slot(&local_6c60);
  pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
  local_a1c0 = &pFVar4->field_0x18;
  local_9db8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_a1c0,__real_41a00000,0.0,0.0,0.0);
  local_a1a0 = SVerticalBox::FArguments::FArguments(&local_57b8);
  pFVar3 = SVerticalBox::Slot(&local_6d48);
  local_a1b0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_a1b8 = MakeColorPreviewBox(this,&local_8cb8);
  local_a1a8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a1b0,local_a1b8);
  local_a128 = SVerticalBox::FArguments::operator+(local_a1a0,local_a1a8);
  pFVar3 = SVerticalBox::Slot(&local_6e30);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_a198 = &pFVar3->field_0x18;
  local_a138 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_a198,0.0,__real_41000000,0.0,0.0);
  local_a180 = SCheckBox::FArguments::FArguments(&local_2e48);
  local_a190 = &local_8200;
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_8cc8,L"ColorPicker",L"SRGBCheckboxToolTip",
                       L"When enabled, the preview swatch uses sRGB encoding to correct the colors for display.\nWhen disabled, the preview shows uncorrected linear colors."
                      );
  local_a188 = TAttribute<FText>::TAttribute<FText>(local_a190,pFVar14);
  local_a178 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                         ((TSlateBaseNamedArgs<SCheckBox> *)local_a180,local_a188);
  local_9620 = HandleSRGBCheckBoxIsChecked;
  local_9618 = 0;
  ppcVar32 = &local_9620;
  puVar33 = local_91d8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_91d8;
  ppVar35 = &local_91c8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar35 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar35 = (pmf_56cdf8a7 *)&ppVar35->field_0x1;
  }
  local_a170 = SCheckBox::FArguments::IsChecked<SColorPicker>(local_a178,this,&local_91c8);
  local_9610 = HandleSRGBCheckBoxCheckStateChanged;
  local_9608 = 0;
  ppcVar32 = &local_9610;
  puVar33 = local_91b8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_91b8;
  ppVar36 = &local_91a8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar36 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar36 = (pmf_40262d99 *)&ppVar36->field_0x1;
  }
  local_a148 = SCheckBox::FArguments::OnCheckStateChanged<SColorPicker>(local_a170,this,&local_91a8)
  ;
  local_a158 = STextBlock::FArguments::FArguments(&local_c30);
  local_a168 = &local_8440;
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_8cd8,L"ColorPicker",L"SRGBCheckboxLabel",L"sRGB Preview");
  local_a160 = TAttribute<FText>::TAttribute<FText>(local_a168,pFVar14);
  local_a150 = STextBlock::FArguments::Text(local_a158,local_a160);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d1);
  pTVar15 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_8b80,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xe8,&local_a4d1);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_8ce8,local_a150);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_9730,pTVar16);
  local_a140 = SCheckBox::FArguments::operator[](local_a148,&local_9730);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4d0);
  this_03 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_8b98,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xe2,&local_a4d0);
  pTVar17 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_8cf8,local_a140);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_9740,pTVar17);
  local_a130 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a138,&local_9740);
  local_9ec8 = SVerticalBox::FArguments::operator+(local_a128,local_a130);
  local_a110 = SVerticalBox::Slot(&local_6f18);
  local_a120 = &local_8768;
  local_a4a0 = __real_41e00000;
  local_a118 = TAttribute<float>::TAttribute<float>(local_a120,&local_a4a0);
  local_a0f8 = SVerticalBox::FSlot::FSlotArguments::MinHeight(local_a110,local_a118);
  local_a108 = &local_8748;
  local_a49c = __real_41e00000;
  local_a100 = TAttribute<float>::TAttribute<float>(local_a108,&local_a49c);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::MaxHeight(local_a0f8,local_a100);
  local_a0f0 = &pFVar3->field_0x18;
  local_9ed8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_a0f0,0.0,__real_41000000,0.0,0.0);
  local_9f90 = SHorizontalBox::FArguments::FArguments(&local_59c0);
  local_a0d8 = SHorizontalBox::Slot(&local_7000);
  local_a0e8 = &local_8728;
  local_a498 = __real_42400000;
  local_a0e0 = TAttribute<float>::TAttribute<float>(local_a0e8,&local_a498);
  local_a0c0 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(local_a0d8,local_a0e0);
  local_a0d0 = &local_8708;
  local_a494 = __real_42400000;
  local_a0c8 = TAttribute<float>::TAttribute<float>(local_a0d0,&local_a494);
  local_9fa0 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(local_a0c0,local_a0c8);
  local_a0b8 = SButton::FArguments::FArguments(&local_16c8);
  local_9600 = HandleColorPickerModeButtonClicked;
  local_95f8 = 0;
  ppcVar32 = &local_9600;
  puVar33 = local_9198;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9198;
  ppVar48 = &local_9188;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar48 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar48 = (pmf_13f5a5c2 *)&ppVar48->field_0x1;
  }
  local_a0a0 = SButton::FArguments::OnClicked<SColorPicker>(local_a0b8,this,&local_9188);
  local_a0b0 = &local_8410;
  pFVar18 = FMargin::FMargin(&local_88e8,__real_40000000,__real_40200000);
  local_a0a8 = TAttribute<FMargin>::TAttribute<FMargin>(local_a0b0,pFVar18);
  local_a098 = SButton::FArguments::ContentPadding(local_a0a0,local_a0a8);
  local_9fb0 = SButton::FArguments::Content(local_a098,&local_88d8);
  local_a080 = SOverlay::FArguments::FArguments(&local_5bc8);
  local_a090 = &local_83e0;
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_8d08,L"ColorPicker",L"ColorPickerModeEToolTip",
                       L"Toggle between color wheel and color spectrum.");
  local_a088 = TAttribute<FText>::TAttribute<FText>(local_a090,pFVar14);
  local_a020 = TSlateBaseNamedArgs<SOverlay>::ToolTipText
                         ((TSlateBaseNamedArgs<SOverlay> *)local_a080,local_a088);
  local_a030 = SOverlay::Slot(&local_8170,0);
  local_a048 = SImage::FArguments::FArguments(&local_40d8);
  local_a058 = &local_84b8;
  local_a448 = FAppStyle::Get();
  local_a068 = *(code **)((longlong)*local_a448 + 0x50);
  local_a078 = &local_9388;
  pFVar2 = ::FName::FName(local_a078,"ColorPicker.ModeWheel");
  local_a070 = *pFVar2;
  local_a060 = (FSlateBrush *)(*local_a068)(local_a448,local_a070,0);
  local_a050 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_a058,&local_a060);
  local_a040 = SImage::FArguments::Image(local_a048,local_a050);
  local_95f0 = HandleColorPickerModeVisibility;
  local_95e8 = 0;
  ppcVar32 = &local_95f0;
  puVar33 = local_9178;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9178;
  ppVar37 = &local_9168;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar37 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar37 = (pmf_7adfccb1 *)&ppVar37->field_0x1;
  }
  local_a038 = TSlateBaseNamedArgs<SImage>::Visibility<SColorPicker,enum_EColorPickerModes>
                         ((TSlateBaseNamedArgs<SImage> *)local_a040,this,&local_9168,Spectrum);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4cf);
  pTVar19 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_8bb0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x103,&local_a4cf);
  pTVar20 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar19,&local_8d18,local_a038);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_9750,pTVar20);
  local_a028 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_a030,&local_9750);
  local_9fc0 = SOverlay::FArguments::operator+(local_a020,local_a028);
  local_9fd0 = SOverlay::Slot(&local_81d0,0);
  local_9fe8 = SImage::FArguments::FArguments(&local_4380);
  local_9ff8 = &local_8490;
  local_a440 = FAppStyle::Get();
  local_a008 = *(code **)((longlong)*local_a440 + 0x50);
  local_a018 = &local_9380;
  pFVar2 = ::FName::FName(local_a018,"ColorPicker.ModeSpectrum");
  local_a010 = *pFVar2;
  local_a000 = (FSlateBrush *)(*local_a008)(local_a440,local_a010,0,0);
  local_9ff0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_9ff8,&local_a000);
  local_9fe0 = SImage::FArguments::Image(local_9fe8,local_9ff0);
  local_95e0 = HandleColorPickerModeVisibility;
  local_95d8 = 0;
  ppcVar32 = &local_95e0;
  puVar33 = local_9158;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9158;
  ppVar37 = &local_9148;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar37 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar37 = (pmf_7adfccb1 *)&ppVar37->field_0x1;
  }
  local_9fd8 = TSlateBaseNamedArgs<SImage>::Visibility<SColorPicker,enum_EColorPickerModes>
                         ((TSlateBaseNamedArgs<SImage> *)local_9fe0,this,&local_9148,Wheel);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4ce);
  pTVar19 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_8bc8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x10a,&local_a4ce);
  pTVar20 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar19,&local_8d28,local_9fd8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_9760,pTVar20);
  local_9fc8 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9fd0,&local_9760);
  local_9fb8 = SOverlay::FArguments::operator+(local_9fc0,local_9fc8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4cd);
  pTVar10 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_8be0,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xfe,&local_a4cd);
  pTVar11 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8d38,local_9fb8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_9770,pTVar11);
  local_9fa8 = NamedSlotProperty<SButton::FArguments>::operator[](local_9fb0,&local_9770);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4cc);
  pTVar21 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_8bf8,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xf9,&local_a4cc);
  pTVar22 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar21,&local_8d48,local_9fa8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_93a0,pTVar22);
  local_9f98 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9fa0,&local_93a0);
  local_9ee8 = SHorizontalBox::FArguments::operator+(local_9f90,local_9f98);
  local_9f78 = SHorizontalBox::Slot(&local_70e8);
  local_9f88 = &local_86e8;
  local_a490 = __real_42400000;
  local_9f80 = TAttribute<float>::TAttribute<float>(local_9f88,&local_a490);
  local_9f60 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(local_9f78,local_9f80);
  local_9f70 = &local_86c8;
  local_a48c = __real_42400000;
  local_9f68 = TAttribute<float>::TAttribute<float>(local_9f70,&local_a48c);
  pFVar4 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(local_9f60,local_9f68);
  local_9f58 = &pFVar4->field_0x18;
  local_9ef8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9f58,__real_41200000,0.0,0.0,0.0);
  local_9f50 = SEyeDropperButton::FArguments::FArguments(&local_4d90);
  local_95d0 = HandleRGBColorChanged;
  local_95c8 = 0;
  ppcVar32 = &local_95d0;
  puVar33 = local_9138;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9138;
  ppVar46 = &local_9128;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar46 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar46 = (pmf_23549314 *)&ppVar46->field_0x1;
  }
  local_9f48 = SEyeDropperButton::FArguments::OnValueChanged<SColorPicker>
                         (local_9f50,this,&local_9128);
  local_95c0 = HandleEyeDropperButtonBegin;
  local_95b8 = 0;
  ppcVar32 = &local_95c0;
  puVar33 = local_9118;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9118;
  ppVar38 = &local_9108;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar38 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar38 = (pmf_97d28a9e *)&ppVar38->field_0x1;
  }
  local_9f40 = SEyeDropperButton::FArguments::OnBegin<SColorPicker>(local_9f48,this,&local_9108);
  local_95b0 = HandleEyeDropperButtonComplete;
  local_95a8 = 0;
  ppcVar32 = &local_95b0;
  puVar33 = local_90f8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_90f8;
  ppVar39 = &local_90e8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar39 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar39 = (pmf_59149942 *)&ppVar39->field_0x1;
  }
  local_9f28 = SEyeDropperButton::FArguments::OnComplete<SColorPicker>(local_9f40,this,&local_90e8);
  local_9f38 = &local_86a8;
  local_9f30 = TAttribute<float>::TAttribute<float>(local_9f38,&this->DisplayGamma);
  local_9f08 = SEyeDropperButton::FArguments::DisplayGamma(local_9f28,local_9f30);
  local_9f18 = &local_8688;
  if (this->bValidCreationOverrideExists == false) {
    local_a438 = &EVisibility::Visible;
  }
  else {
    local_a438 = &EVisibility::Collapsed;
  }
  local_9f20 = local_a438;
  local_9f10 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(local_9f18,local_a438);
  local_9f00 = TSlateBaseNamedArgs<SEyeDropperButton>::Visibility
                         ((TSlateBaseNamedArgs<SEyeDropperButton> *)local_9f08,local_9f10);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4cb);
  this_04 = MakeTDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>
                      (&local_8c10,"SEyeDropperButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x117,&local_a4cb);
  pTVar23 = TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_8d58,local_9f00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEyeDropperButton>(&local_93b0,pTVar23);
  local_9ef0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9ef8,&local_93b0);
  local_9ee0 = SHorizontalBox::FArguments::operator+(local_9ee8,local_9ef0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4ca);
  pTVar6 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_89a0,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0xf2,&local_a4ca);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_8d68,local_9ee0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_93c0,pTVar7);
  local_9ed0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9ed8,&local_93c0);
  local_9dc8 = SVerticalBox::FArguments::operator+(local_9ec8,local_9ed0);
  local_9eb0 = SVerticalBox::Slot(&local_71d0);
  local_9ec0 = &local_8568;
  local_a488 = __real_41e00000;
  local_9eb8 = TAttribute<float>::TAttribute<float>(local_9ec0,&local_a488);
  local_9e98 = SVerticalBox::FSlot::FSlotArguments::MinHeight(local_9eb0,local_9eb8);
  local_9ea8 = &local_8668;
  local_a484 = __real_41e00000;
  local_9ea0 = TAttribute<float>::TAttribute<float>(local_9ea8,&local_a484);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::MaxHeight(local_9e98,local_9ea0);
  local_9e90 = &pFVar3->field_0x18;
  local_9dd8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9e90,0.0,__real_41000000,0.0,0.0);
  local_9de8 = SHorizontalBox::FArguments::FArguments(&local_5dd0);
  local_9e78 = SHorizontalBox::Slot(&local_72b8);
  local_9e88 = &local_8648;
  local_a480 = __real_42400000;
  local_9e80 = TAttribute<float>::TAttribute<float>(local_9e88,&local_a480);
  local_9e60 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(local_9e78,local_9e80);
  local_9e70 = &local_8628;
  local_a47c = __real_42400000;
  local_9e68 = TAttribute<float>::TAttribute<float>(local_9e70,&local_a47c);
  local_9df8 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(local_9e60,local_9e68);
  local_9e58 = SButton::FArguments::FArguments(&local_1c08);
  local_95a0 = ToggleThemePanelVisibility;
  local_9598 = 0;
  ppcVar32 = &local_95a0;
  puVar33 = local_90d8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_90d8;
  ppVar48 = &local_90c8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar48 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar48 = (pmf_13f5a5c2 *)&ppVar48->field_0x1;
  }
  local_9e40 = SButton::FArguments::OnClicked<SColorPicker>(local_9e58,this,&local_90c8);
  local_9e50 = &local_83b0;
  pFVar18 = FMargin::FMargin(&local_88c8,__real_40000000,__real_40200000);
  local_9e48 = TAttribute<FMargin>::TAttribute<FMargin>(local_9e50,pFVar18);
  local_9e28 = SButton::FArguments::ContentPadding(local_9e40,local_9e48);
  local_9e38 = &local_8380;
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_8d78,L"ColorPicker",L"ShowHideThemesButtonTooltip",
                       L"Toggle visibility of color themes");
  local_9e30 = TAttribute<FText>::TAttribute<FText>(local_9e38,pFVar14);
  local_9e20 = TSlateBaseNamedArgs<SButton>::ToolTipText
                         ((TSlateBaseNamedArgs<SButton> *)local_9e28,local_9e30);
  local_9e08 = SButton::FArguments::Content(local_9e20,&local_88b8);
  local_9e18 = SImage::FArguments::FArguments(&local_4628);
  local_9590 = HandleThemePanelButtonImageBrush;
  local_9588 = 0;
  ppcVar32 = &local_9590;
  puVar33 = local_90b8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_90b8;
  ppVar40 = &local_90a8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar40 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar40 = (pmf_beeeae93 *)&ppVar40->field_0x1;
  }
  local_9e10 = SImage::FArguments::Image<SColorPicker>(local_9e18,this,&local_90a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c9);
  pTVar19 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_89b8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x132,&local_a4c9);
  pTVar20 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar19,&local_8d88,local_9e10);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_93d0,pTVar20);
  local_9e00 = NamedSlotProperty<SButton::FArguments>::operator[](local_9e08,&local_93d0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c8);
  pTVar21 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_89d0,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,300,&local_a4c8);
  pTVar22 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar21,&local_8d98,local_9e00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_93e0,pTVar22);
  local_9df0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9df8,&local_93e0);
  local_9de0 = SHorizontalBox::FArguments::operator+(local_9de8,local_9df0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c7);
  pTVar6 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_89e8,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x125,&local_a4c7);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_8da8,local_9de0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_93f0,pTVar7);
  local_9dd0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9dd8,&local_93f0);
  local_9dc0 = SVerticalBox::FArguments::operator+(local_9dc8,local_9dd0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c6);
  pTVar24 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8a00,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0xd4,&local_a4c6);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_8db8,local_9dc0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_9400,pTVar25);
  local_9db0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9db8,&local_9400);
  local_9da0 = SHorizontalBox::FArguments::operator+(local_9da8,local_9db0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c5);
  pTVar6 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_8a18,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x8e,&local_a4c5);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_8dc8,local_9da0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_9410,pTVar7);
  local_9d90 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9d98,&local_9410);
  local_9a90 = SVerticalBox::FArguments::operator+(local_9d88,local_9d90);
  pFVar3 = SVerticalBox::Slot(&local_73a0);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9d80 = &pFVar3->field_0x18;
  local_9aa0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9d80,0.0,__real_41800000,0.0,0.0);
  local_9cc8 = SHorizontalBox::FArguments::FArguments(&local_5fd8);
  local_9cd8 = SHorizontalBox::Slot(&local_7488);
  local_9d60 = SVerticalBox::FArguments::FArguments(&local_61e0);
  pFVar3 = SVerticalBox::Slot(&local_7ae0);
  local_9d70 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9d78 = MakeColorSpinBox(this,&local_8dd8,Red);
  local_9d68 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9d70,local_9d78);
  local_9d38 = SVerticalBox::FArguments::operator+(local_9d60,local_9d68);
  pFVar3 = SVerticalBox::Slot(&local_7570);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9d58 = &pFVar3->field_0x18;
  local_9d48 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9d58,0.0,__real_41000000,0.0,0.0);
  local_9d50 = MakeColorSpinBox(this,&local_8de8,Green);
  local_9d40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9d48,local_9d50);
  local_9d10 = SVerticalBox::FArguments::operator+(local_9d38,local_9d40);
  pFVar3 = SVerticalBox::Slot(&local_7658);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9d30 = &pFVar3->field_0x18;
  local_9d20 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9d30,0.0,__real_41000000,0.0,0.0);
  local_9d28 = MakeColorSpinBox(this,&local_8df8,Blue);
  local_9d18 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9d20,local_9d28);
  local_9ce8 = SVerticalBox::FArguments::operator+(local_9d10,local_9d18);
  pFVar3 = SVerticalBox::Slot(&local_7740);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9d08 = &pFVar3->field_0x18;
  local_9cf8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9d08,0.0,__real_41000000,0.0,0.0);
  local_9d00 = MakeColorSpinBox(this,&local_8e08,Alpha);
  local_9cf0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9cf8,local_9d00);
  local_9ce0 = SVerticalBox::FArguments::operator+(local_9ce8,local_9cf0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c4);
  pTVar24 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8a30,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x144,&local_a4c4);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_8e18,local_9ce0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_9420,pTVar25);
  local_9cd0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9cd8,&local_9420);
  local_9ab0 = SHorizontalBox::FArguments::operator+(local_9cc8,local_9cd0);
  pFVar4 = SHorizontalBox::Slot(&local_7828);
  local_9cc0 = &pFVar4->field_0x18;
  local_9ac0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9cc0,__real_41800000,0.0,0.0,0.0);
  local_9ca0 = SVerticalBox::FArguments::FArguments(&local_63e8);
  pFVar3 = SVerticalBox::Slot(&local_7910);
  local_9cb0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9cb8 = MakeColorSpinBox(this,&local_8e28,Hue);
  local_9ca8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9cb0,local_9cb8);
  local_9c78 = SVerticalBox::FArguments::operator+(local_9ca0,local_9ca8);
  pFVar3 = SVerticalBox::Slot(&local_79f8);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9c98 = &pFVar3->field_0x18;
  local_9c88 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9c98,0.0,__real_41000000,0.0,0.0);
  local_9c90 = MakeColorSpinBox(this,&local_8e38,Saturation);
  local_9c80 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9c88,local_9c90);
  local_9c50 = SVerticalBox::FArguments::operator+(local_9c78,local_9c80);
  pFVar3 = SVerticalBox::Slot(&local_8050);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9c70 = &pFVar3->field_0x18;
  local_9c60 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9c70,0.0,__real_41000000,0.0,0.0);
  local_9c68 = MakeColorSpinBox(this,&local_8e48,Value);
  local_9c58 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9c60,local_9c68);
  local_9ad0 = SVerticalBox::FArguments::operator+(local_9c50,local_9c58);
  local_9c38 = SVerticalBox::Slot(&local_7bc8);
  local_9c48 = &local_8608;
  local_a478[0] = 0x14;
  local_9c40 = TAttribute<float>::TAttribute<float><int>(local_9c48,local_a478);
  local_9c20 = SVerticalBox::FSlot::FSlotArguments::MinHeight(local_9c38,local_9c40);
  local_9c30 = &local_85e8;
  local_a478[1] = 0x14;
  local_9c28 = TAttribute<float>::TAttribute<float><int>(local_9c30,local_a478 + 1);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::MaxHeight(local_9c20,local_9c28);
  local_9c18 = &pFVar3->field_0x18;
  local_9ae0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9c18,0.0,__real_41000000,0.0,0.0);
  local_9b70 = SHorizontalBox::FArguments::FArguments(&local_65f0);
  pFVar4 = SHorizontalBox::Slot(&local_7cb0);
  local_9c10 = &pFVar4->field_0x48;
  pFVar4 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_9c10,HAlign_Left);
  local_9c08 = &pFVar4->field_0x48;
  local_9b80 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_9c08,VAlign_Center);
  local_9be0 = SComboButton::FArguments::FArguments(&local_38a0);
  local_9bf0 = FAppStyle::Get();
  local_9c00 = &local_9378;
  pFVar2 = ::FName::FName(local_9c00,"ColorPicker.HexMode");
  local_9bf8 = *pFVar2;
  local_9be8 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                         (local_9bf0,local_9bf8,(char *)0x0,(FComboButtonStyle *)0x0);
  local_9bd8 = SComboButton::FArguments::ComboButtonStyle(local_9be0,local_9be8);
  local_9bc8 = SComboButton::FArguments::MenuContent(local_9bd8,&local_88a8);
  local_9bd0 = MakeHexModeMenu(this,&local_8e58);
  local_9bc0 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_9bc8,local_9bd0);
  local_9b90 = SComboButton::FArguments::ButtonContent(local_9bc0,&local_8928);
  local_9ba8 = STextBlock::FArguments::FArguments(&local_1188);
  local_9bb8 = &local_6670;
  local_9bb0 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                         (local_9bb8,&local_8848);
  local_9ba0 = STextBlock::FArguments::Font(local_9ba8,local_9bb0);
  local_9580 = HandleHexModeButtonText;
  local_9578 = 0;
  ppcVar32 = &local_9580;
  puVar33 = local_9098;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9098;
  ppVar43 = &local_9088;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar43 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar43 = (pmf_3ed7c398 *)&ppVar43->field_0x1;
  }
  local_9b98 = STextBlock::FArguments::Text<SColorPicker>(local_9ba0,this,&local_9088);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c3);
  pTVar15 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_8a48,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,400,&local_a4c3);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar15,&local_8e68,local_9b98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_9430,pTVar16);
  local_9b88 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_9b90,&local_9430);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c2);
  this_05 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                      (&local_8a60,"SComboButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x188,&local_a4c2);
  pTVar26 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_8e78,local_9b88);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboButton>(&local_9440,pTVar26);
  local_9b78 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9b80,&local_9440);
  local_9af0 = SHorizontalBox::FArguments::operator+(local_9b70,local_9b78);
  pFVar4 = SHorizontalBox::Slot(&local_7d98);
  pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
  local_9b68 = &pFVar4->field_0x48;
  local_9b00 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_9b68,HAlign_Right);
  local_9b50 = SEditableTextBox::FArguments::FArguments(&local_6d8);
  local_9b60 = &local_85c8;
  local_a470 = __real_42da0000;
  local_9b58 = TAttribute<float>::TAttribute<float>(local_9b60,&local_a470);
  local_9b48 = SEditableTextBox::FArguments::MinDesiredWidth(local_9b50,local_9b58);
  local_9570 = HandleHexBoxText;
  local_9568 = 0;
  ppcVar32 = &local_9570;
  puVar33 = local_9078;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9078;
  ppVar43 = &local_9068;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar43 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar43 = (pmf_3ed7c398 *)&ppVar43->field_0x1;
  }
  local_9b30 = SEditableTextBox::FArguments::Text<SColorPicker>(local_9b48,this,&local_9068);
  local_9b40 = &local_66f0;
  local_9b38 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
                         (local_9b40,&local_8848);
  local_9b18 = SEditableTextBox::FArguments::Font(local_9b30,local_9b38);
  local_9b28 = &local_8350;
  pFVar18 = FMargin::FMargin(&local_8918,__real_4020000000000000,__real_4010000000000000,
                             __real_4020000000000000,__real_4010000000000000);
  local_9b20 = TAttribute<FMargin>::TAttribute<FMargin>(local_9b28,pFVar18);
  local_9b10 = SEditableTextBox::FArguments::Padding(local_9b18,local_9b20);
  local_9560 = HandleHexInputTextCommitted;
  local_9558 = 0;
  ppcVar32 = &local_9560;
  puVar33 = local_9058;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9058;
  ppVar41 = &local_9048;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar41 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar41 = (pmf_f7550522 *)&ppVar41->field_0x1;
  }
  local_9b08 = SEditableTextBox::FArguments::OnTextCommitted<SColorPicker>
                         (local_9b10,this,&local_9048);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c1);
  this_06 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                      (&local_8c28,"SEditableTextBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x19a,&local_a4c1);
  pTVar27 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_8e88,local_9b08);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_9450,pTVar27);
  local_9af8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9b00,&local_9450);
  local_9ae8 = SHorizontalBox::FArguments::operator+(local_9af0,local_9af8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4c0);
  pTVar6 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_8a90,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x182,&local_a4c0);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_8e98,local_9ae8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_9460,pTVar7);
  local_9ad8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9ae0,&local_9460);
  local_9ac8 = SVerticalBox::FArguments::operator+(local_9ad0,local_9ad8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4bf);
  pTVar24 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8aa8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x166,&local_a4bf);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_8ea8,local_9ac8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_9470,pTVar25);
  local_9ab8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9ac0,&local_9470);
  local_9aa8 = SHorizontalBox::FArguments::operator+(local_9ab0,local_9ab8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4be);
  pTVar6 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                     (&local_8ac0,"SHorizontalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x13f,&local_a4be);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_8eb8,local_9aa8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_9480,pTVar7);
  local_9a98 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9aa0,&local_9480);
  local_99a8 = SVerticalBox::FArguments::operator+(local_9a90,local_9a98);
  pFVar3 = SVerticalBox::Slot(&local_7e80);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_9a88 = &pFVar3->field_0x18;
  local_99b8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9a88,0.0,__real_41800000,0.0,0.0);
  local_9a50 = SBorder::FArguments::FArguments(&local_3228);
  local_9a60 = &local_8468;
  local_a430 = FAppStyle::Get();
  local_9a70 = *(code **)((longlong)*local_a430 + 0x50);
  local_9a80 = &local_9370;
  pFVar2 = ::FName::FName(local_9a80,"ColorPicker.RecessedBackground");
  local_9a78 = *pFVar2;
  local_9a68 = (FSlateBrush *)(*local_9a70)(local_a430,local_9a78,0,0);
  local_9a58 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_9a60,&local_9a68);
  local_9a38 = SBorder::FArguments::BorderImage(local_9a50,local_9a58);
  local_9a48 = &local_8320;
  pFVar18 = FMargin::FMargin(&local_8908,__real_41000000,__real_41000000);
  local_9a40 = TAttribute<FMargin>::TAttribute<FMargin>(local_9a48,pFVar18);
  local_9a30 = SBorder::FArguments::Padding(local_9a38,local_9a40);
  local_9550 = HandleThemesPanelVisibility;
  local_9548 = 0;
  ppcVar32 = &local_9550;
  puVar33 = local_9038;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9038;
  ppVar42 = &local_9028;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar42 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar42 = (pmf_e06ad559 *)&ppVar42->field_0x1;
  }
  local_99c8 = TSlateBaseNamedArgs<SBorder>::Visibility<SColorPicker>
                         ((TSlateBaseNamedArgs<SBorder> *)local_9a30,this,&local_9028);
  local_9a28 = SThemeColorBlocksBar::FArguments::FArguments(&local_3b78);
  local_9540 = GetColorThemePanelToolTipText;
  local_9538 = 0;
  ppcVar32 = &local_9540;
  puVar33 = local_9018;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_9018;
  ppVar43 = &local_9008;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar43 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar43 = (pmf_3ed7c398 *)&ppVar43->field_0x1;
  }
  local_9a10 = TSlateBaseNamedArgs<SThemeColorBlocksBar>::ToolTipText<SColorPicker>
                         ((TSlateBaseNamedArgs<SThemeColorBlocksBar> *)local_9a28,this,&local_9008);
  local_9a20 = &local_85a8;
  pbVar28 = TAttribute<bool>::Get(&this->bUseAlpha);
  local_9a18 = TAttribute<bool>::TAttribute<bool><bool>(local_9a20,pbVar28);
  local_99f0 = SThemeColorBlocksBar::FArguments::UseAlpha(local_9a10,local_9a18);
  local_9530 = HandleColorPickerUseSRGB;
  local_9528 = 0;
  ppcVar32 = &local_9530;
  puVar33 = local_8ff8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_8ff8;
  puVar44 = local_8fd8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar44 = *puVar33;
    puVar33 = puVar33 + 1;
    puVar44 = puVar44 + 1;
  }
  local_a428 = &local_88f8;
  local_9a08 = &this->_padding_;
  local_9a00 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)local_9a08,&local_8fe8);
  TSharedRef<SColorPicker,1>::TSharedRef<SColorPicker,1><SWidget>(local_a428,local_9a00,local_a4b5);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8fe8);
  local_99f8 = local_a428;
  puVar33 = local_8fd8;
  ppVar45 = &local_8fc8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar45 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar45 = (pmf_8ab45a4a *)&ppVar45->field_0x1;
  }
  local_99e8 = SThemeColorBlocksBar::FArguments::UseSRGB<SColorPicker>
                         (local_99f0,local_a428,&local_8fc8);
  local_9520 = HandleThemeBarColorSelected;
  local_9518 = 0;
  ppcVar32 = &local_9520;
  puVar33 = local_8fb8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_8fb8;
  ppVar46 = &local_8fa8;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar46 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar46 = (pmf_23549314 *)&ppVar46->field_0x1;
  }
  local_99e0 = SThemeColorBlocksBar::FArguments::OnSelectColor<SColorPicker>
                         (local_99e8,this,&local_8fa8);
  local_9510 = GetCurrentColor;
  local_9508 = 0;
  ppcVar32 = &local_9510;
  puVar33 = local_8f98;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_8f98;
  ppVar47 = &local_8f88;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar47 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar47 = (pmf_b5063530 *)&ppVar47->field_0x1;
  }
  local_99d0 = SThemeColorBlocksBar::FArguments::OnGetActiveColor<SColorPicker>
                         (local_99e0,this,&local_8f88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4bd);
  local_99d8 = MakeTDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>
                         (&local_8ad8,"SThemeColorBlocksBar",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                          ,0x1b0,&local_a4bd);
  this_07 = TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::
            Expose<SThemeColorBlocksBar>(local_99d8,&this->CurrentThemeBar);
  pTVar29 = TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_07,&local_8ec8,local_99d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SThemeColorBlocksBar>(&local_9490,pTVar29);
  local_99c0 = SBorder::FArguments::operator[](local_99c8,&local_9490);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4bc);
  pTVar12 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_8af0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x1aa,&local_a4bc);
  pTVar13 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar12,&local_8ed8,local_99c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_94a0,pTVar13);
  local_99b0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_99b8,&local_94a0);
  local_9798 = SVerticalBox::FArguments::operator+(local_99a8,local_99b0);
  pFVar3 = SVerticalBox::Slot(&local_7f68);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_99a0 = &pFVar3->field_0x48;
  pFVar3 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_99a0,HAlign_Right);
  local_9998 = &pFVar3->field_0x18;
  local_97a8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_9998,0.0,__real_41800000,0.0,0.0);
  local_9960 = SUniformGridPanel::FArguments::FArguments(&local_4b30);
  local_9970 = &local_8588;
  local_a420 = FAppStyle::Get();
  local_9978 = *(code **)((longlong)*local_a420 + 0x28);
  local_a46c = FStyleDefaults::GetFloat();
  local_9990 = &local_9368;
  pFVar2 = ::FName::FName(local_9990,"StandardDialog.MinDesiredSlotHeight");
  local_9988 = *pFVar2;
  local_9980 = local_9988;
  local_a468 = (float)(*local_9978)(local_a420,local_9988,0,local_a46c,0);
  local_9968 = TAttribute<float>::TAttribute<float>(local_9970,&local_a468);
  local_9928 = SUniformGridPanel::FArguments::MinDesiredSlotHeight(local_9960,local_9968);
  local_9938 = &local_8528;
  local_a418 = FAppStyle::Get();
  local_9940 = *(code **)((longlong)*local_a418 + 0x28);
  local_a464 = FStyleDefaults::GetFloat();
  local_9958 = &local_9360;
  pFVar2 = ::FName::FName(local_9958,"StandardDialog.MinDesiredSlotWidth");
  local_9950 = *pFVar2;
  local_9948 = local_9950;
  local_a460[0] = (float)(*local_9940)(local_a418,local_9950,0,local_a464,0);
  local_9930 = TAttribute<float>::TAttribute<float>(local_9938,local_a460);
  local_98e8 = SUniformGridPanel::FArguments::MinDesiredSlotWidth(local_9928,local_9930);
  local_98f8 = &local_82f0;
  local_a410 = FAppStyle::Get();
  local_9900 = *(code **)((longlong)*local_a410 + 0x48);
  local_9910 = FStyleDefaults::GetMargin();
  local_9920 = &local_9358;
  pFVar2 = ::FName::FName(local_9920,"StandardDialog.SlotPadding");
  local_9918 = *pFVar2;
  local_9908 = local_9918;
  pFVar18 = (FMargin *)(*local_9900)(local_a410,local_9918,0,local_9910,0);
  local_98f0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_98f8,pFVar18);
  local_98c8 = SUniformGridPanel::FArguments::SlotPadding(local_98e8,local_98f0);
  local_98d8 = &local_8548;
  local_a408 = &this->ParentWindowPtr;
  if (local_a408->Object != (SWindow *)0x0) {
    local_a400 = &(this->ParentWindowPtr).WeakReferenceCount;
    if (local_a400->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_142fc9430:
      local_a4d8 = '\0';
    }
    else {
      iVar1 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (local_a400->ReferenceController);
      if (iVar1 < 1) goto LAB_142fc9430;
      local_a4d8 = '\x01';
    }
    local_a4bb = local_a4d8;
    if (local_a4d8 != '\0') {
      local_a4b4 = 1;
      goto LAB_142fc945c;
    }
  }
  local_a4b4 = 0;
LAB_142fc945c:
  local_a4ba = (char)local_a4b4;
  if (((char)local_a4b4 == '\0') && (this->bValidCreationOverrideExists == false)) {
    local_a3f8 = &EVisibility::Collapsed;
  }
  else {
    local_a3f8 = &EVisibility::Visible;
  }
  local_98e0 = local_a3f8;
  local_98d0 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(local_98d8,local_a3f8);
  local_9840 = TSlateBaseNamedArgs<SUniformGridPanel>::Visibility
                         ((TSlateBaseNamedArgs<SUniformGridPanel> *)local_98c8,local_98d0);
  local_9850 = SUniformGridPanel::Slot(&local_8870,0,0);
  local_9888 = SButton::FArguments::FArguments(&local_2148);
  local_9898 = &local_82c0;
  local_a3f0 = FAppStyle::Get();
  local_98a0 = *(code **)((longlong)*local_a3f0 + 0x48);
  local_98b0 = FStyleDefaults::GetMargin();
  local_98c0 = &local_9350;
  pFVar2 = ::FName::FName(local_98c0,"StandardDialog.ContentPadding");
  local_98b8 = *pFVar2;
  local_98a8 = local_98b8;
  pFVar18 = (FMargin *)(*local_98a0)(local_a3f0,local_98b8,0,local_98b0,0);
  local_9890 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_9898,pFVar18);
  local_9880 = SButton::FArguments::ContentPadding(local_9888,local_9890);
  local_9868 = SButton::FArguments::HAlign(local_9880,HAlign_Center);
  local_9878 = &local_8290;
  pFVar14 = FText::AsLocalizable_Advanced_LocText(&local_8ee8,L"ColorPicker",L"OKButton",L"OK");
  local_9870 = TAttribute<FText>::TAttribute<FText>(local_9878,pFVar14);
  local_9860 = SButton::FArguments::Text(local_9868,local_9870);
  local_9500 = HandleOkButtonClicked;
  local_94f8 = 0;
  ppcVar32 = &local_9500;
  puVar33 = local_8f78;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_8f78;
  ppVar48 = &local_8f68;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar48 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar48 = (pmf_13f5a5c2 *)&ppVar48->field_0x1;
  }
  local_9858 = SButton::FArguments::OnClicked<SColorPicker>(local_9860,this,&local_8f68);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4b9);
  pTVar21 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_8b08,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x1c8,&local_a4b9);
  pTVar22 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar21,&local_8ef8,local_9858);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_94b0,pTVar22);
  local_9848 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_9850,&local_94b0);
  local_97b8 = SUniformGridPanel::FArguments::operator+(local_9840,local_9848);
  local_97c8 = SUniformGridPanel::Slot(&local_8898,1,0);
  local_9800 = SButton::FArguments::FArguments(&local_2688);
  local_9810 = &local_8260;
  local_a3e8 = FAppStyle::Get();
  local_9818 = *(code **)((longlong)*local_a3e8 + 0x48);
  local_9828 = FStyleDefaults::GetMargin();
  local_9838 = &local_9348;
  pFVar2 = ::FName::FName(local_9838,"StandardDialog.ContentPadding");
  local_9830 = *pFVar2;
  local_9820 = local_9830;
  pFVar18 = (FMargin *)(*local_9818)(local_a3e8,local_9830,0,local_9828,0);
  local_9808 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_9810,pFVar18);
  local_97f8 = SButton::FArguments::ContentPadding(local_9800,local_9808);
  local_97e0 = SButton::FArguments::HAlign(local_97f8,HAlign_Center);
  local_97f0 = &local_8230;
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_8f08,L"ColorPicker",L"CancelButton",L"Cancel");
  local_97e8 = TAttribute<FText>::TAttribute<FText>(local_97f0,pFVar14);
  local_97d8 = SButton::FArguments::Text(local_97e0,local_97e8);
  local_94f0 = HandleCancelButtonClicked;
  local_94e8 = 0;
  ppcVar32 = &local_94f0;
  puVar33 = local_8f58;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *puVar33 = *(undefined1 *)ppcVar32;
    ppcVar32 = (code **)((longlong)ppcVar32 + 1);
    puVar33 = puVar33 + 1;
  }
  puVar33 = local_8f58;
  ppVar48 = &local_8f48;
  for (lVar31 = 0x10; lVar31 != 0; lVar31 = lVar31 + -1) {
    *(undefined1 *)ppVar48 = *puVar33;
    puVar33 = puVar33 + 1;
    ppVar48 = (pmf_13f5a5c2 *)&ppVar48->field_0x1;
  }
  local_97d0 = SButton::FArguments::OnClicked<SColorPicker>(local_97d8,this,&local_8f48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4b8);
  pTVar21 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_8b20,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x1d2,&local_a4b8);
  pTVar22 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar21,&local_8f18,local_97d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_94c0,pTVar22);
  local_97c0 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_97c8,&local_94c0);
  local_97b0 = SUniformGridPanel::FArguments::operator+(local_97b8,local_97c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4b7);
  this_08 = MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_8b38,"SUniformGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x1bf,&local_a4b7);
  pTVar30 = TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_08,&local_8f28,local_97b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformGridPanel>(&local_94d0,pTVar30);
  local_97a0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_97a8,&local_94d0);
  local_9790 = SVerticalBox::FArguments::operator+(local_9798,local_97a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_a4b6);
  pTVar24 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8b50,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x88,&local_a4b6);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar24,&local_8f38,local_9790);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_9780,pTVar25);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_9788,&local_9780);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9780);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_8f38);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_8b50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_94d0);
  TSharedRef<SUniformGridPanel,1>::~TSharedRef<SUniformGridPanel,1>(&local_8f28);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>(&local_8b38);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_94c0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_8f18);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_8b20);
  FText::~FText(&local_8f08);
  SButton::FArguments::~FArguments(&local_2688);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_8898);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_94b0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_8ef8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_8b08);
  FText::~FText(&local_8ee8);
  SButton::FArguments::~FArguments(&local_2148);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_8870);
  SUniformGridPanel::FArguments::~FArguments(&local_4b30);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7f68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_94a0);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_8ed8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_8af0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9490);
  TSharedRef<SThemeColorBlocksBar,1>::~TSharedRef<SThemeColorBlocksBar,1>(&local_8ec8);
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>(&local_8ad8);
  SThemeColorBlocksBar::FArguments::~FArguments(&local_3b78);
  SBorder::FArguments::~FArguments(&local_3228);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7e80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9480);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8eb8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8ac0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9470);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_8ea8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_8aa8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9460);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8e98);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8a90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9450);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_8e88);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_8c28);
  SEditableTextBox::FArguments::~FArguments(&local_6d8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7d98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9440);
  TSharedRef<SComboButton,1>::~TSharedRef<SComboButton,1>(&local_8e78);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>(&local_8a60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9430);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8e68);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8a48);
  STextBlock::FArguments::~FArguments(&local_1188);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8e58);
  SComboButton::FArguments::~FArguments(&local_38a0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7cb0);
  SHorizontalBox::FArguments::~FArguments(&local_65f0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7bc8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8e48);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_8050);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8e38);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_79f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8e28);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7910);
  SVerticalBox::FArguments::~FArguments(&local_63e8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7828);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9420);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_8e18);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_8a30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8e08);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7740);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8df8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7658);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8de8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7570);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8dd8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7ae0);
  SVerticalBox::FArguments::~FArguments(&local_61e0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7488);
  SHorizontalBox::FArguments::~FArguments(&local_5fd8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_73a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9410);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8dc8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8a18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9400);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_8db8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_8a00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_93f0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8da8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_89e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_93e0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_8d98);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_89d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_93d0);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_8d88);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_89b8);
  SImage::FArguments::~FArguments(&local_4628);
  FText::~FText(&local_8d78);
  SButton::FArguments::~FArguments(&local_1c08);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_72b8);
  SHorizontalBox::FArguments::~FArguments(&local_5dd0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_71d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_93c0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8d68);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_89a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_93b0);
  TSharedRef<SEyeDropperButton,1>::~TSharedRef<SEyeDropperButton,1>(&local_8d58);
  TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEyeDropperButton,RequiredArgs::T0RequiredArgs>(&local_8c10);
  SEyeDropperButton::FArguments::~FArguments(&local_4d90);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_70e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_93a0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_8d48);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_8bf8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9770);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(&local_8d38);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_8be0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9760);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_8d28);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8bc8);
  SImage::FArguments::~FArguments(&local_4380);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_81d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9750);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_8d18);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8bb0);
  SImage::FArguments::~FArguments(&local_40d8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_8170);
  FText::~FText(&local_8d08);
  SOverlay::FArguments::~FArguments(&local_5bc8);
  SButton::FArguments::~FArguments(&local_16c8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7000);
  SHorizontalBox::FArguments::~FArguments(&local_59c0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6f18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9740);
  TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_8cf8);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_8b98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9730);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8ce8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8b80);
  FText::~FText(&local_8cd8);
  STextBlock::FArguments::~FArguments(&local_c30);
  FText::~FText(&local_8cc8);
  SCheckBox::FArguments::~FArguments(&local_2e48);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6e30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8cb8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6d48);
  SVerticalBox::FArguments::~FArguments(&local_57b8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6c60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9720);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_8ca8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_8b68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9710);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(&local_8c98);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_8a78);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_9700);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_8c88);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_8988);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_96f0);
  TSharedRef<SColorSpectrum,1>::~TSharedRef<SColorSpectrum,1>(&local_8c78);
  TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(&local_8970);
  SColorSpectrum::FArguments::~FArguments(&local_48b8);
  SBox::FArguments::~FArguments(&local_3568);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_8110);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_96e0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8c68);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8958);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8c58);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6b78);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8c48);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6a90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_94e0);
  TSharedRef<SColorWheel,1>::~TSharedRef<SColorWheel,1>(&local_8c38);
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>(&local_8940);
  SColorWheel::FArguments::~FArguments(&local_3e30);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_69a8);
  SHorizontalBox::FArguments::~FArguments(&local_55b0);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_80b0);
  SOverlay::FArguments::~FArguments(&local_53a8);
  SBorder::FArguments::~FArguments(&local_2a68);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_68c0);
  SHorizontalBox::FArguments::~FArguments(&local_51a0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_67d8);
  SVerticalBox::FArguments::~FArguments(&local_4f98);
  FSlateFontInfo::~FSlateFontInfo(&local_8848);
  return;
}

// GenerateInlineColorPickerContent @ 142fca480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::GenerateInlineColorPickerContent(SColorPicker *this)

{
  TSharedRef<SWidget,1> TVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SHorizontalBox *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool *pbVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FArguments *pFVar8;
  FSlot *pFVar9;
  FSizeParam *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SColorWheel,1> *pTVar12;
  FSlot *pFVar13;
  FSlotArguments *pFVar14;
  FSlot *pFVar15;
  TSharedRef<SHorizontalBox,1> *pTVar16;
  FSharedReferencer<1> FVar17;
  longlong *this_00;
  SWidget *pSVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FSlot *local_res18;
  FName local_res20;
  TSharedRef<SWidget,1> local_9f8;
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [32];
  undefined1 local_9b8 [24];
  SWidget *local_9a0;
  FSharedReferencer<1> local_998;
  SWidget *local_990;
  FSharedReferencer<1> local_988 [2];
  undefined8 local_978;
  FSharedReferencer<1> FStack_970;
  FSlateBrush *local_968;
  bool local_960;
  undefined1 local_958 [8];
  void *pvStack_950;
  undefined4 local_948;
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs> local_940;
  TSharedRef<SHorizontalBox,1> local_928;
  TSharedRef<SWidget,1> local_918;
  TSharedRef<SWidget,1> local_908;
  TSharedRef<SColorWheel,1> local_8f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8e8;
  undefined8 *local_8d0;
  SColorWheel *local_8c8;
  FSharedReferencer<1> local_8c0 [4];
  undefined1 local_8a0 [40];
  FSlotArgumentsMixin local_878;
  undefined8 *local_7e8 [2];
  TReferenceControllerBase<1> *local_7d8;
  undefined1 local_7d0 [24];
  undefined1 local_7b8 [40];
  FSlotArgumentsMixin local_790;
  undefined8 *local_700 [2];
  TReferenceControllerBase<1> *local_6f0;
  undefined1 local_6e8 [24];
  undefined1 local_6d0 [40];
  FSlotArgumentsMixin local_6a8;
  undefined8 *local_618 [2];
  TReferenceControllerBase<1> *local_608;
  undefined1 local_600 [24];
  undefined1 local_5e8 [40];
  FSlotArgumentsMixin local_5c0;
  FArguments local_530;
  FArguments local_328;
  
  FVar17.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar18 = SNullWidget::NullWidget.Object;
  local_9f8.Object = SNullWidget::NullWidget.Object;
  local_9f8.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pbVar6 = TAttribute<bool>::Get(&this->bUseAlpha);
  if (*pbVar6 == false) {
    uVar19 = local_9f8.Object._0_4_;
    uVar20 = local_9f8.Object._4_4_;
    uVar21 = local_9f8.SharedReferenceCount.ReferenceController._0_4_;
    uVar22 = local_9f8.SharedReferenceCount.ReferenceController._4_4_;
  }
  else {
    pTVar7 = MakeColorSlider(this,&local_9f8,Alpha);
    TVar1 = *pTVar7;
    pTVar7->Object = pSVar18;
    (pTVar7->SharedReferenceCount).ReferenceController = FVar17.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9f8.SharedReferenceCount.ReferenceController);
    pSVar18 = TVar1.Object;
    FVar17 = TVar1.SharedReferenceCount.ReferenceController;
    uVar19 = (int)TVar1.Object;
    uVar20 = TVar1.Object._4_4_;
    uVar21 = (int)TVar1.SharedReferenceCount.ReferenceController;
    uVar22 = TVar1.SharedReferenceCount.ReferenceController._4_4_;
  }
  pFVar8 = SHorizontalBox::FArguments::FArguments(&local_530);
  pFVar9 = ::operator_new(0x58);
  pFVar15 = (FSlot *)0x0;
  local_res18 = pFVar15;
  if (pFVar9 != (FSlot *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)&pFVar9->field_0x8 = 0;
    *(undefined8 *)&pFVar9->field_0x10 = 0;
    *(undefined8 *)&pFVar9->field_0x18 = 0;
    *(undefined8 *)&pFVar9->field_0x20 = 0;
    *(undefined8 *)&pFVar9->field_0x28 = 0;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(undefined8 *)&pFVar9->field_0x38 = 0;
    *(undefined8 *)&pFVar9->field_0x40 = 0;
    *(undefined8 *)&pFVar9->field_0x48 = 0;
    *(undefined8 *)&pFVar9->field_0x50 = 0;
    local_res18 = SHorizontalBox::FSlot::FSlot(pFVar9);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_8d0,(FSlot *)&local_res18);
  pFVar10 = (FSizeParam *)FAuto::FAuto((FAuto *)local_9e8);
  TOptional<FSizeParam>::operator=(&local_878._SizeParam,pFVar10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  if ((void *)local_9b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  if ((void *)local_9d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  pFVar11 = SColorWheel::FArguments::FArguments(&local_328);
  local_9f8.SharedReferenceCount.ReferenceController =
       local_9f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_9f8.Object = (SWidget *)GetCurrentColor;
  (pFVar11->_SelectedColor).bIsSet = true;
  TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar11->_SelectedColor).Getter,this,(pmf_b5063530 *)&local_9f8);
  local_968 = (this->ColorWheelBrush).Value;
  local_960 = (this->ColorWheelBrush).bIsSet;
  local_958 = (undefined1  [8])0x0;
  pvStack_950 = (void *)0x0;
  local_948 = 0;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_958,
             &(this->ColorWheelBrush).Getter);
  (pFVar11->_ColorWheelBrush).Value = local_968;
  (pFVar11->_ColorWheelBrush).bIsSet = local_960;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ColorWheelBrush).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_958);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_958);
  if (pvStack_950 != (void *)0x0) {
    FMemory::Free(pvStack_950);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_958);
  local_9f8.SharedReferenceCount.ReferenceController =
       local_9f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_9f8.Object = (SWidget *)HandleColorPickerModeVisibility;
  local_res18 = (FSlot *)CONCAT44(local_res18._4_4_,1);
  *(undefined1 *)((longlong)&pFVar11->_padding_ + 1) = 1;
  TDelegateRegistration<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SColorPicker,enum_EColorPickerModes_&>
            ((TDelegateRegistration<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar11->_padding_,this,(pmf_7adfccb1 *)&local_9f8,(EColorPickerModes *)&local_res18);
  local_9f8.SharedReferenceCount.ReferenceController =
       local_9f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_9f8.Object = (SWidget *)HandleColorWheelValueChanged;
  TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)
             &pFVar11->_OnValueChanged,this,(pmf_23549314 *)&local_9f8);
  local_9f8.SharedReferenceCount.ReferenceController =
       local_9f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_9f8.Object = (SWidget *)HandleInteractiveChangeBegin;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar11->_OnMouseCaptureBegin,this,(pmf_97d28a9e *)&local_9f8);
  local_9f8.SharedReferenceCount.ReferenceController =
       local_9f8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_9f8.Object = (SWidget *)HandleInteractiveChangeEnd;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar11->_OnMouseCaptureEnd,this,(pmf_97d28a9e *)&local_9f8);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_9f8,&local_res20,true);
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>
            (&local_940,"SColorWheel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
             ,0x20a,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_9f8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  if (local_940._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_940._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_940._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar2 = (this->ColorWheel).SharedReferenceCount.ReferenceController;
  (this->ColorWheel).Object = local_940._Widget.Object;
  (this->ColorWheel).SharedReferenceCount.ReferenceController =
       local_940._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar12 = TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_940,&local_8f8,pFVar11);
  pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_8c8 = pTVar12->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9f8.Object = (SWidget *)0x0;
  local_9f8.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_8c0,&local_9f8.SharedReferenceCount)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9f8.SharedReferenceCount.ReferenceController);
  pFVar8 = SHorizontalBox::FArguments::operator+(pFVar8,(FSlotArguments *)&local_8d0);
  pFVar13 = ::operator_new(0x58);
  pFVar9 = pFVar15;
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    pFVar9 = SHorizontalBox::FSlot::FSlot(pFVar13);
  }
  local_res18 = pFVar9;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_618,(FSlot *)&local_res18);
  pFVar10 = (FSizeParam *)FAuto::FAuto((FAuto *)local_9e8);
  TOptional<FSizeParam>::operator=(&local_5c0._SizeParam,pFVar10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  if ((void *)local_9b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  if ((void *)local_9d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  pFVar14 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_600,__real_41000000,0.0,0.0,0.0);
  pTVar7 = MakeColorSlider(this,&local_908,Saturation);
  local_998.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_9a0 = pTVar7->Object;
  if (local_998.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_998.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_998.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar14->field_0x8 != &local_9a0) {
    *(SWidget **)&pFVar14->field_0x8 = local_9a0;
    local_9a0 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->field_0x10,&local_998);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.ReferenceController);
  pFVar8 = SHorizontalBox::FArguments::operator+(pFVar8,pFVar14);
  pFVar13 = ::operator_new(0x58);
  pFVar9 = pFVar15;
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    pFVar9 = SHorizontalBox::FSlot::FSlot(pFVar13);
  }
  local_res18 = pFVar9;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_700,(FSlot *)&local_res18);
  pFVar10 = (FSizeParam *)FAuto::FAuto((FAuto *)local_9e8);
  TOptional<FSizeParam>::operator=(&local_6a8._SizeParam,pFVar10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  if ((void *)local_9b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  if ((void *)local_9d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  pFVar14 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_6e8,__real_41000000,0.0,0.0,0.0);
  pTVar7 = MakeColorSlider(this,&local_918,Value);
  local_988[0].ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_990 = pTVar7->Object;
  if (local_988[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_988[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_988[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar14->field_0x8 != &local_990) {
    *(SWidget **)&pFVar14->field_0x8 = local_990;
    local_990 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->field_0x10,local_988);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_988[0].ReferenceController);
  pFVar8 = SHorizontalBox::FArguments::operator+(pFVar8,pFVar14);
  pFVar9 = ::operator_new(0x58);
  if (pFVar9 != (FSlot *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)&pFVar9->field_0x8 = 0;
    *(undefined8 *)&pFVar9->field_0x10 = 0;
    *(undefined8 *)&pFVar9->field_0x18 = 0;
    *(undefined8 *)&pFVar9->field_0x20 = 0;
    *(undefined8 *)&pFVar9->field_0x28 = 0;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(undefined8 *)&pFVar9->field_0x38 = 0;
    *(undefined8 *)&pFVar9->field_0x40 = 0;
    *(undefined8 *)&pFVar9->field_0x48 = 0;
    *(undefined8 *)&pFVar9->field_0x50 = 0;
    pFVar15 = SHorizontalBox::FSlot::FSlot(pFVar9);
  }
  local_res18 = pFVar15;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_7e8,(FSlot *)&local_res18);
  pFVar10 = (FSizeParam *)FAuto::FAuto((FAuto *)local_9e8);
  TOptional<FSizeParam>::operator=(&local_790._SizeParam,pFVar10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  if ((void *)local_9b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  if ((void *)local_9d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  pFVar14 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_7d0,__real_41000000,0.0,0.0,0.0);
  local_978 = CONCAT44(uVar20,uVar19);
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FStack_970.ReferenceController._0_4_ = uVar21;
  FStack_970.ReferenceController._4_4_ = uVar22;
  if ((undefined8 *)&pFVar14->field_0x8 != &local_978) {
    *(SWidget **)&pFVar14->field_0x8 = pSVar18;
    local_978 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->field_0x10,&FStack_970);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(FStack_970.ReferenceController._4_4_,FStack_970.ReferenceController._0_4_));
  pFVar8 = SHorizontalBox::FArguments::operator+(pFVar8,pFVar14);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_9f8,&local_res20,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_8e8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
             ,0x205,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_9f8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  pTVar16 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8e8,&local_928,pFVar8);
  this_00 = &this->_padding_;
  pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar16->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar3;
  local_9f8.Object = (SWidget *)pSVar4;
  local_9f8.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_928.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e8._Widget.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_790);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b8);
  if ((void *)local_7b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_7b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7d8);
  if (local_7e8[0] != (undefined8 *)0x0) {
    (**(code **)*local_7e8[0])(local_7e8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_918.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_6a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  if ((void *)local_6d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6f0);
  if (local_700[0] != (undefined8 *)0x0) {
    (**(code **)*local_700[0])(local_700[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_908.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
  if ((void *)local_5e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_608);
  if (local_618[0] != (undefined8 *)0x0) {
    (**(code **)*local_618[0])(local_618[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TSharedRef<SColorWheel,1>::~TSharedRef<SColorWheel,1>(&local_8f8);
  TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SColorWheel,RequiredArgs::T0RequiredArgs>(&local_940);
  SColorWheel::FArguments::~FArguments(&local_328);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_878);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  if ((void *)local_8a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c0[0].ReferenceController);
  if (local_8d0 != (undefined8 *)0x0) {
    (**(code **)*local_8d0)(local_8d0,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_530._Slots.AllocatorInstance.Data,local_530._Slots.ArrayNum);
  if ((FSlotArguments *)local_530._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_530._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_530);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  return;
}

// GetColorThemePanelToolTipText @ 142fd18e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __thiscall
SColorPicker::GetColorThemePanelToolTipText(SColorPicker *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_28;
  FText local_18;
  
  if (((this->CurrentThemeBar).Object == (SThemeColorBlocksBar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  bVar2 = SThemeColorBlocksBar::IsRecentsThemeActive((this->CurrentThemeBar).Object);
  pwVar5 = L"Recently used colors";
  pwVar4 = L"RecentsThemeToolTipText";
  pFVar3 = &local_18;
  if (!bVar2) {
    pwVar5 = L"Current Color Theme";
    pwVar4 = L"ColorThemeToolTipText";
    pFVar3 = &local_28;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText(pFVar3,L"ColorPicker",pwVar4,pwVar5);
  FText::FText(__return_storage_ptr__,pFVar3);
  if (((!bVar2 + 1U & 2) != 0) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((bVar2) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetCurrentColor @ 142fd2020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FLinearColor * __thiscall
SColorPicker::GetCurrentColor(SColorPicker *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->CurrentColorHSV).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetGradientColors @ 142fd2840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
SColorPicker::GetGradientColors
          (SColorPicker *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EColorPickerChannels param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  FLinearColor_u_0 FVar11;
  float fVar12;
  FLinearColor_u_0 local_b8;
  FLinearColor_u_0 local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  FLinearColor_u_0 local_88;
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  FLinearColor local_28 [2];
  
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  fVar4 = __real_42200000;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == Hue) {
    do {
      local_88._s_0.G = 1.0;
      local_88._s_0.B = 1.0;
      local_88._s_0.A = 1.0;
      local_88._s_0.R = (float)((int)uVar10 + (int)(uVar10 / 9) * -9) * fVar4;
      pFVar7 = (FScriptContainerElement *)
               FLinearColor::HSVToLinearRGB((FLinearColor *)&local_88._s_0,local_28);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar7) &&
          (pFVar7 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      uVar3 = *(undefined8 *)(pFVar7 + 8);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar1 = *(undefined8 *)&pFVar7->field_0x0;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
    } while ((int)uVar9 < 10);
    return __return_storage_ptr__;
  }
  switch(param_1) {
  case Red:
    local_a8 = FLinearColor::Black.field0_0x0;
switchD_142fd2c63_caseD_0:
    FVar11 = FLinearColor::Red.field0_0x0;
    break;
  case Green:
    local_a8 = FLinearColor::Black.field0_0x0;
switchD_142fd2c63_caseD_1:
    FVar11 = FLinearColor::Green.field0_0x0;
    break;
  case Blue:
    local_a8 = FLinearColor::Black.field0_0x0;
switchD_142fd2c63_caseD_2:
    FVar11 = FLinearColor::Blue.field0_0x0;
    break;
  case Alpha:
    local_a8 = FLinearColor::Transparent.field0_0x0;
switchD_142fd2c63_caseD_3:
    local_58._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_58._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
    local_58._s_0.B = (this->CurrentColorHSV).field0_0x0._s_0.B;
    local_58._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_58._s_0,(FLinearColor *)&local_b8._s_0);
    fVar4 = __real_3dcccccd;
    goto LAB_142fd29c0;
  default:
    local_a8 = (FLinearColor_u_0)ZEXT816(0);
    FVar11 = local_a8;
    switch(param_1) {
    case Red:
      goto switchD_142fd2c63_caseD_0;
    case Green:
      goto switchD_142fd2c63_caseD_1;
    case Blue:
      goto switchD_142fd2c63_caseD_2;
    case Alpha:
      goto switchD_142fd2c63_caseD_3;
    case Saturation:
      goto switchD_142fd2c63_caseD_5;
    case Value:
      goto switchD_142fd2c63_caseD_6;
    }
    break;
  case Saturation:
    local_78._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_78._s_0.G = 0.0;
    local_78._s_0.B = 1.0;
    local_78._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_78._s_0,(FLinearColor *)&local_a8._s_0);
switchD_142fd2c63_caseD_5:
    local_48._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_48._s_0.G = 1.0;
    local_48._s_0.B = 1.0;
    local_48._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_48._s_0,(FLinearColor *)&local_b8._s_0);
    fVar4 = __real_3dcccccd;
    goto LAB_142fd29c0;
  case Value:
    local_68._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_68._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
    local_68._s_0.B = 0.0;
    local_68._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_68._s_0,(FLinearColor *)&local_a8._s_0);
switchD_142fd2c63_caseD_6:
    local_38._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_38._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
    local_38._s_0.B = 1.0;
    local_38._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_38._s_0,(FLinearColor *)&local_b8._s_0);
    fVar4 = __real_3dcccccd;
    goto LAB_142fd29c0;
  }
  local_b8 = FVar11;
  fVar4 = __real_3dcccccd;
LAB_142fd29c0:
  do {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    fVar12 = (float)(int)uVar10 * fVar4;
    local_98 = (local_b8._s_0.R - local_a8._s_0.R) * fVar12 + local_a8._s_0.R;
    fStack_94 = (local_b8._s_0.G - local_a8._s_0.G) * fVar12 + local_a8._s_0.G;
    fStack_90 = (local_b8._s_0.B - local_a8._s_0.B) * fVar12 + local_a8._s_0.B;
    fStack_8c = (local_b8._s_0.A - local_a8._s_0.A) * fVar12 + local_a8._s_0.A;
    if (((pFVar1 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar8;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(ulonglong *)pFVar1 = CONCAT44(fStack_94,local_98);
    *(ulonglong *)(pFVar1 + 8) = CONCAT44(fStack_8c,fStack_90);
  } while ((int)uVar9 < 0xb);
  return __return_storage_ptr__;
}

// GetGradientEndColor @ 142fd2cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FLinearColor * __thiscall
SColorPicker::GetGradientEndColor
          (SColorPicker *this,FLinearColor *__return_storage_ptr__,EColorPickerChannels param_1)

{
  FLinearColor_u_0 local_18;
  
  switch(param_1) {
  case Red:
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red;
    return __return_storage_ptr__;
  case Green:
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Green;
    return __return_storage_ptr__;
  case Blue:
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Blue;
    return __return_storage_ptr__;
  case Alpha:
    local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_18._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
    local_18._s_0.B = (this->CurrentColorHSV).field0_0x0._s_0.B;
    local_18._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  default:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  case Saturation:
    local_18._s_0.G = 1.0;
    break;
  case Value:
    local_18._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
  }
  local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
  local_18._s_0.B = 1.0;
  local_18._s_0.A = 1.0;
  FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGradientStartColor @ 142fd2de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FLinearColor * __thiscall
SColorPicker::GetGradientStartColor
          (SColorPicker *this,FLinearColor *__return_storage_ptr__,EColorPickerChannels param_1)

{
  FLinearColor_u_0 local_18;
  
  switch(param_1) {
  case Red:
  case Green:
  case Blue:
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
    return __return_storage_ptr__;
  case Alpha:
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent;
    return __return_storage_ptr__;
  default:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  case Saturation:
    local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_18._s_0.G = 0.0;
    local_18._s_0.B = 1.0;
    local_18._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  case Value:
    local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_18._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
    local_18._s_0.B = 0.0;
    local_18._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
}

// GetNewColorPreviewImageVisibility @ 142fd4010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall SColorPicker::GetNewColorPreviewImageVisibility(SColorPicker *this)

{
  uchar *in_RDX;
  
  *in_RDX = (this->NewColorPreviewImageVisibility).Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetOldColorPreviewImageVisibility @ 142fd7770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall SColorPicker::GetOldColorPreviewImageVisibility(SColorPicker *this)

{
  uchar *in_RDX;
  
  *in_RDX = (this->OldColorPreviewImageVisibility).Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HandleCancelButtonClicked @ 142fdb990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::HandleCancelButtonClicked(SColorPicker *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  SWindow *pSVar6;
  SWindow *pSVar7;
  longlong *plVar8;
  SWindow *this_00;
  bool bVar9;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this->bClosedViaOkOrCancel = true;
  DiscardColor(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnColorPickerDestroyOverride
             ,&local_38);
  if (((OnColorPickerDestroyOverride._16_4_ == 0) || (OnColorPickerDestroyOverride._8_8_ == 0)) ||
     (cVar3 = (**(code **)(*(longlong *)OnColorPickerDestroyOverride._8_8_ + 0x38))(), cVar3 == '\0'
     )) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (bVar9) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &OnColorPickerDestroyOverride,&local_20);
    plVar8 = (longlong *)0x0;
    if (OnColorPickerDestroyOverride._16_4_ != 0) {
      plVar8 = (longlong *)OnColorPickerDestroyOverride._8_8_;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    goto LAB_142fdba8c;
  }
  pSVar7 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  this_00 = (SWindow *)0x0;
  pSVar6 = pSVar7;
  if (pSVar7 == (SWindow *)0x0) {
LAB_142fdba56:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar7 = pSVar6;
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar7->_padding_;
    do {
      pSVar6 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142fdba56;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar7->_padding_;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        *(atomic<int> *)&pSVar7->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    this_00 = (this->ParentWindowPtr).Object;
    pSVar6 = pSVar7;
    if (this_00 == (SWindow *)0x0) goto LAB_142fdba56;
  }
  SWindow::RequestDestroyWindow(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
LAB_142fdba8c:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleColorAreaMouseDown @ 142fdbb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::HandleColorAreaMouseDown
          (SColorPicker *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    this->CurrentMode = (uint)(this->CurrentMode == Spectrum);
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// HandleColorPickerModeButtonClicked @ 142fdbbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::HandleColorPickerModeButtonClicked(SColorPicker *this,FReply *__return_storage_ptr__)

{
  bool bVar1;
  
  this->CurrentMode = (uint)(this->CurrentMode == Spectrum);
  bVar1 = FPaths::FileExists(&GEditorPerProjectIni);
  if (bVar1) {
    FConfigCacheIni::SetBool
              (GConfig,L"ColorPickerUI",L"bWheelMode",this->CurrentMode == Wheel,
               &GEditorPerProjectIni);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleColorPickerModeVisibility @ 142fdbc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall
SColorPicker::HandleColorPickerModeVisibility(SColorPicker *this,EColorPickerModes param_1)

{
  EVisibility EVar1;
  undefined4 in_register_00000014;
  EColorPickerModes in_R8D;
  
  EVar1.Value.Value = EVisibility::Hidden.Value.Value;
  if (this->CurrentMode == in_R8D) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar1.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// HandleColorPickerUseSRGB @ 142fdbc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SColorPicker::HandleColorPickerUseSRGB(SColorPicker *this)

{
  return this->bUseSRGB;
}

// HandleColorPreviewAlphaMode @ 142fdbca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EColorBlockAlphaDisplayMode __thiscall SColorPicker::HandleColorPreviewAlphaMode(SColorPicker *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->bUseAlpha);
  return (*pbVar1 == false) + SeparateReverse;
}

// HandleColorPreviewButtonVisibility @ 142fdbcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall SColorPicker::HandleColorPreviewButtonVisibility(SColorPicker *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  if ((this->CurrentThemeBar).Object == (SThemeColorBlocksBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  bVar2 = SThemeColorBlocksBar::IsRecentsThemeActive((this->CurrentThemeBar).Object);
  EVar4 = EVisibility::Visible;
  if (bVar2) {
    EVar4 = EVisibility::Hidden;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HandleColorSliderEndColor @ 142fdbd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FLinearColor * __thiscall
SColorPicker::HandleColorSliderEndColor
          (SColorPicker *this,FLinearColor *__return_storage_ptr__,EColorPickerChannels param_1)

{
  float fVar1;
  float fVar2;
  FLinearColor_u_0 local_18;
  
  switch(param_1) {
  case Red:
  case Green:
  case Blue:
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
    return __return_storage_ptr__;
  case Alpha:
    fVar1 = (this->CurrentColorRGB).field0_0x0._s_0.B;
    fVar2 = (this->CurrentColorRGB).field0_0x0._s_0.G;
    (__return_storage_ptr__->field0_0x0)._s_0.R = (this->CurrentColorRGB).field0_0x0._s_0.R;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar1;
    return __return_storage_ptr__;
  default:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  case Saturation:
    local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_18._s_0.G = 0.0;
    local_18._s_0.B = 1.0;
    local_18._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  case Value:
    local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
    local_18._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
    local_18._s_0.B = 0.0;
    local_18._s_0.A = 1.0;
    FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
}

// HandleColorSliderStartColor @ 142fdbe80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FLinearColor * __thiscall
SColorPicker::HandleColorSliderStartColor
          (SColorPicker *this,FLinearColor *__return_storage_ptr__,EColorPickerChannels param_1)

{
  float fVar1;
  float fVar2;
  FLinearColor_u_0 local_18;
  
  switch(param_1) {
  case Red:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0x3f800000;
    (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  case Green:
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0x3f800000;
    (__return_storage_ptr__->field0_0x0)._s_0.R = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  case Blue:
    (__return_storage_ptr__->field0_0x0)._s_0.B = 1.0;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  case Alpha:
    fVar1 = (this->CurrentColorRGB).field0_0x0._s_0.B;
    fVar2 = (this->CurrentColorRGB).field0_0x0._s_0.G;
    (__return_storage_ptr__->field0_0x0)._s_0.R = (this->CurrentColorRGB).field0_0x0._s_0.R;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    return __return_storage_ptr__;
  default:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  case Saturation:
    local_18._s_0.G = 1.0;
    break;
  case Value:
    local_18._s_0.G = (this->CurrentColorHSV).field0_0x0._s_0.G;
  }
  local_18._s_0.R = (this->CurrentColorHSV).field0_0x0._s_0.R;
  local_18._s_0.B = 1.0;
  local_18._s_0.A = 1.0;
  FLinearColor::HSVToLinearRGB((FLinearColor *)&local_18._s_0,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleColorSpectrumValueChanged @ 142fdbfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::HandleColorSpectrumValueChanged(SColorPicker *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  FLinearColor_u_0 *pFVar2;
  undefined1 auVar3 [16];
  FLinearColor_u_0 FVar4;
  FLinearColor local_18;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  pFVar2 = &FLinearColor::HSVToLinearRGB(param_1,&local_18)->field0_0x0;
  auVar3 = minps((undefined1  [16])*pFVar2,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar4 = (FLinearColor_u_0)maxps(auVar3,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar4;
  ApplyNewTargetColor(this,false);
  return;
}

// HandleColorSpinBoxValue @ 142fdc000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

float __thiscall
SColorPicker::HandleColorSpinBoxValue(SColorPicker *this,EColorPickerChannels param_1)

{
  switch(param_1) {
  case Red:
    return (this->CurrentColorRGB).field0_0x0._s_0.R;
  case Green:
    return (this->CurrentColorRGB).field0_0x0._s_0.G;
  case Blue:
    return (this->CurrentColorRGB).field0_0x0._s_0.B;
  case Alpha:
    return (this->CurrentColorRGB).field0_0x0._s_0.A;
  case Hue:
    return (this->CurrentColorHSV).field0_0x0._s_0.R;
  case Saturation:
    return (this->CurrentColorHSV).field0_0x0._s_0.G;
  case Value:
    return (this->CurrentColorHSV).field0_0x0._s_0.B;
  default:
    return 0.0;
  }
}

// HandleColorSpinBoxValueChanged @ 142fdc090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::HandleColorSpinBoxValueChanged
          (SColorPicker *this,float param_1,EColorPickerChannels param_2)

{
  FLinearColor *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  switch(param_2) {
  case Red:
    lVar2 = 0;
    break;
  case Alpha:
    lVar2 = 0xc;
    break;
  case Hue:
    uVar3 = 1;
    param_1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
    lVar2 = 0;
    break;
  case Saturation:
    uVar3 = 1;
  case Green:
    lVar2 = 4;
    break;
  case Value:
    uVar3 = 1;
  case Blue:
    lVar2 = 8;
    break;
  default:
    goto switchD_142fdc0c0_default;
  }
  pFVar1 = &this->CurrentColorHSV + (uVar3 ^ 1);
  if (__real_38d1b717 <
      (float)((uint)(param_1 - *(float *)((longlong)&pFVar1->field0_0x0 + lVar2)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)((longlong)&pFVar1->field0_0x0 + lVar2) = param_1;
    if ((char)uVar3 != '\0') {
      SetNewTargetColorHSV(this,pFVar1,this->bIsInteractive == false);
      return;
    }
    SetNewTargetColorRGB(this,pFVar1,this->bIsInteractive == false);
  }
switchD_142fdc0c0_default:
  return;
}

// HandleColorWheelValueChanged @ 142fdc240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleColorWheelValueChanged(SColorPicker *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  bool *pbVar2;
  FLinearColor_u_0 *pFVar3;
  undefined1 auVar4 [16];
  FLinearColor_u_0 FVar5;
  FLinearColor local_18;
  
  if ((float)((uint)(param_1->field0_0x0)._s_0.B & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    (param_1->field0_0x0)._s_0.B = 1.0;
  }
  pbVar2 = TAttribute<bool>::Get(&this->bUseAlpha);
  if ((*pbVar2 == false) ||
     ((float)((uint)(param_1->field0_0x0)._s_0.A & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77)) {
    (param_1->field0_0x0)._s_0.A = 1.0;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  pFVar3 = &FLinearColor::HSVToLinearRGB(param_1,&local_18)->field0_0x0;
  auVar4 = minps((undefined1  [16])*pFVar3,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar5 = (FLinearColor_u_0)maxps(auVar4,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar5;
  ApplyNewTargetColor(this,false);
  return;
}

// HandleEyeDropperButtonBegin @ 142fdc5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleEyeDropperButtonBegin(SColorPicker *this)

{
  SColorWheel *pSVar1;
  
  pSVar1 = (this->ColorWheel).Object;
  if (pSVar1 != (SColorWheel *)0x0) {
    pSVar1->bShouldDrawSelector = false;
  }
  HandleInteractiveChangeBegin(this);
  return;
}

// HandleEyeDropperButtonComplete @ 142fdc5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleEyeDropperButtonComplete(SColorPicker *this,bool param_1)

{
  SColorWheel *pSVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FLinearColor_u_0 *pFVar4;
  undefined1 auVar5 [16];
  FLinearColor_u_0 FVar6;
  FLinearColor local_38;
  FReadAccessScope local_28;
  
  pSVar1 = (this->ColorWheel).Object;
  if (pSVar1 != (SColorWheel *)0x0) {
    pSVar1->bShouldDrawSelector = true;
  }
  this->bIsInteractive = false;
  if (param_1) {
    uVar3 = *(undefined8 *)((longlong)&(this->OldColor).field0_0x0 + 8);
    *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&(this->OldColor).field0_0x0
    ;
    *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar3;
    pFVar4 = &FLinearColor::HSVToLinearRGB(&this->OldColor,&local_38)->field0_0x0;
    auVar5 = minps((undefined1  [16])*pFVar4,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
    FVar6 = (FLinearColor_u_0)maxps(auVar5,ZEXT816(0));
    (this->CurrentColorRGB).field0_0x0 = FVar6;
    ApplyNewTargetColor(this,true);
  }
  if ((this->bOnlyRefreshOnMouseUp != false) || (this->bPerfIsTooSlowToUpdate != false)) {
    UpdateColorPick(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickEnd,
             &local_28);
  if ((*(int *)&(this->OnInteractivePickEnd).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnInteractivePickEnd).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleHSVColorChanged @ 142fdc6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleHSVColorChanged(SColorPicker *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  FLinearColor_u_0 *pFVar2;
  undefined1 auVar3 [16];
  FLinearColor_u_0 FVar4;
  FLinearColor local_18;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  pFVar2 = &FLinearColor::HSVToLinearRGB(param_1,&local_18)->field0_0x0;
  auVar3 = minps((undefined1  [16])*pFVar2,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar4 = (FLinearColor_u_0)maxps(auVar3,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar4;
  ApplyNewTargetColor(this,false);
  return;
}

// HandleHexBoxText @ 142fdc720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __thiscall SColorPicker::HandleHexBoxText(SColorPicker *this,FText *__return_storage_ptr__)

{
  FColor FVar1;
  undefined4 extraout_var;
  FString *pFVar2;
  undefined1 local_res8 [32];
  FString local_18;
  
  FVar1 = FLinearColor::ToFColor(&this->CurrentColorRGB,SUB81(local_res8,0));
  pFVar2 = FColor::ToHex((FColor *)CONCAT44(extraout_var,FVar1.field0_0x0),&local_18);
  FText::FromString(__return_storage_ptr__,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleHexInputTextCommitted @ 142fdc780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::HandleHexInputTextCommitted(SColorPicker *this,FText *param_1,Type param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  bool bVar5;
  FLinearColor *pFVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar7;
  float fVar9;
  float fVar11;
  float fVar13;
  byte local_res20;
  byte local_res21;
  byte local_res22;
  byte local_res23;
  FLinearColor_u_0 local_68;
  FLinearColor local_58 [5];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  
  bVar5 = FText::IsEmpty(param_1);
  if ((!bVar5) && (param_2 - OnEnter < 2)) {
    FText::ToString(param_1);
    FColor::FromHex((FString *)&local_res20);
    fVar9 = (float)local_res22 * __real_3b808081;
    auVar10 = ZEXT416((uint)fVar9);
    fVar13 = (float)local_res23 * __real_3b808081;
    fVar11 = (float)local_res21 * __real_3b808081;
    auVar12 = ZEXT416((uint)fVar11);
    fVar7 = (float)local_res20 * __real_3b808081;
    auVar8 = ZEXT416((uint)fVar7);
    if (this->HexMode == SRGB) {
      if (__real_3d25aee6 < fVar9) {
        fVar9 = powf(fVar9 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
        auVar10._4_4_ = extraout_XMM0_Db;
        auVar10._0_4_ = fVar9;
        auVar10._8_4_ = extraout_XMM0_Dc;
        auVar10._12_4_ = extraout_XMM0_Dd;
      }
      else {
        auVar10 = ZEXT416((uint)(fVar9 * __real_3d9e8391));
      }
      if (__real_3d25aee6 < fVar11) {
        fVar9 = powf(fVar11 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
        auVar12._4_4_ = extraout_XMM0_Db_00;
        auVar12._0_4_ = fVar9;
        auVar12._8_4_ = extraout_XMM0_Dc_00;
        auVar12._12_4_ = extraout_XMM0_Dd_00;
      }
      else {
        auVar12 = ZEXT416((uint)(fVar11 * __real_3d9e8391));
      }
      if (__real_3d25aee6 < fVar7) {
        fVar7 = powf(fVar7 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
        auVar8._4_4_ = extraout_XMM0_Db_01;
        auVar8._0_4_ = fVar7;
        auVar8._8_4_ = extraout_XMM0_Dc_01;
        auVar8._12_4_ = extraout_XMM0_Dd_01;
      }
      else {
        auVar8 = ZEXT416((uint)(fVar7 * __real_3d9e8391));
      }
    }
    local_68._s_0.R = (float)auVar10._0_4_;
    local_68._s_0.G = (float)auVar12._0_4_;
    if (__real_7f7fffff <= local_68._s_0.R) {
      auVar10._0_4_ = __real_7f7fffff;
    }
    local_68._s_0.B = (float)auVar8._0_4_;
    if (__real_7f7fffff <= local_68._s_0.G) {
      auVar12._0_4_ = __real_7f7fffff;
    }
    if (__real_7f7fffff <= local_68._s_0.B) {
      auVar8._0_4_ = __real_7f7fffff;
    }
    fVar7 = fVar13;
    if (__real_7f7fffff <= fVar13) {
      fVar7 = __real_7f7fffff;
    }
    if (auVar10._0_4_ <= 0.0) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = auVar10._4_12_;
      auVar10 = auVar1 << 0x20;
    }
    if (auVar12._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar12._4_12_;
      auVar12 = auVar2 << 0x20;
    }
    if (auVar8._0_4_ <= 0.0) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar8._4_12_;
      auVar8 = auVar3 << 0x20;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    (this->CurrentColorRGB).field0_0x0._s_0.R = auVar10._0_4_;
    (this->CurrentColorRGB).field0_0x0._s_0.G = auVar12._0_4_;
    (this->CurrentColorRGB).field0_0x0._s_0.B = auVar8._0_4_;
    (this->CurrentColorRGB).field0_0x0._s_0.A = fVar7;
    local_68._s_0.A = fVar13;
    pFVar6 = FLinearColor::LinearRGBToHSV((FLinearColor *)&local_68._s_0,local_58);
    uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
    *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
    *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar4;
    ApplyNewTargetColor(this,false);
  }
  return;
}

// HandleHexModeButtonText @ 142fdc9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __thiscall
SColorPicker::HandleHexModeButtonText(SColorPicker *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  if (this->HexMode == SRGB) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorPicker",L"HexMenuText_SRGB",L"Hex sRGB");
    return __return_storage_ptr__;
  }
  if (this->HexMode == Linear) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"ColorPicker",L"HexMenuText_Linear",L"Hex Linear");
    return __return_storage_ptr__;
  }
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// HandleInteractiveChangeBegin @ 142fdca70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleInteractiveChangeBegin(SColorPicker *this)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  if (this->bIsInteractive != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickEnd
               ,&local_28);
    if ((*(int *)&(this->OnInteractivePickEnd).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnInteractivePickEnd).field_0x8, plVar2 != (longlong *)0x0))
    {
      cVar1 = (**(code **)(*plVar2 + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnInteractivePickEnd,&local_28);
        if (*(int *)&(this->OnInteractivePickEnd).field_0x10 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&(this->OnInteractivePickEnd).field_0x8;
        }
        (**(code **)(*plVar2 + 0x60))();
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickBegin
             ,&local_28);
  if ((*(int *)&(this->OnInteractivePickBegin).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnInteractivePickBegin).field_0x8, plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this->bIsInteractive = true;
  return;
}

// HandleInteractiveChangeEnd @ 142fdcb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleInteractiveChangeEnd(SColorPicker *this,float param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->bIsInteractive = false;
  if ((this->bOnlyRefreshOnOk == false) || (this->bColorPickerIsInlineVersion != false)) {
    UpdateColorPick(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickEnd,
             &local_28);
  if ((*(int *)&(this->OnInteractivePickEnd).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnInteractivePickEnd).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleInteractiveChangeEnd @ 142fdcbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleInteractiveChangeEnd(SColorPicker *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->bIsInteractive = false;
  if ((this->bOnlyRefreshOnOk == false) || (this->bColorPickerIsInlineVersion != false)) {
    UpdateColorPick(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickEnd,
             &local_28);
  if ((*(int *)&(this->OnInteractivePickEnd).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnInteractivePickEnd).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleNewColorPreviewClicked @ 142fdcc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::HandleNewColorPreviewClicked(SColorPicker *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FLinearColor_u_0 local_18;
  
  if ((this->CurrentThemeBar).Object == (SThemeColorBlocksBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_18._0_8_ = *(undefined8 *)&(this->CurrentColorHSV).field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8);
  SThemeColorBlocksBar::AddNewColorBlock
            ((this->CurrentThemeBar).Object,(FLinearColor *)&local_18._s_0,0,false);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleOkButtonClicked @ 142fdccb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::HandleOkButtonClicked(SColorPicker *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  char cVar4;
  atomic<int> aVar5;
  FReply *pFVar6;
  SWindow *pSVar7;
  SWindow *pSVar8;
  longlong *plVar9;
  SWindow *this_00;
  FLinearColor_u_0 local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this->bClosedViaOkOrCancel = true;
  UpdateColorPick(this);
  if (((((this->CurrentColorHSV).field0_0x0._s_0.R != (this->OldColor).field0_0x0._s_0.R) ||
       ((this->CurrentColorHSV).field0_0x0._s_0.G != (this->OldColor).field0_0x0._s_0.G)) ||
      ((this->CurrentColorHSV).field0_0x0._s_0.B != (this->OldColor).field0_0x0._s_0.B)) ||
     ((this->CurrentColorHSV).field0_0x0._s_0.A != (this->OldColor).field0_0x0._s_0.A)) {
    if (((this->CurrentThemeBar).Object == (SThemeColorBlocksBar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
    local_48._0_8_ = *(undefined8 *)&(this->CurrentColorHSV).field0_0x0;
    local_48._8_8_ = *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8);
    SThemeColorBlocksBar::AddToRecents
              ((this->CurrentThemeBar).Object,(FLinearColor *)&local_48._s_0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnColorPickerDestroyOverride
             ,&local_38);
  if (((OnColorPickerDestroyOverride._16_4_ == 0) || (OnColorPickerDestroyOverride._8_8_ == 0)) ||
     (cVar4 = (**(code **)(*(longlong *)OnColorPickerDestroyOverride._8_8_ + 0x38))(), cVar4 == '\0'
     )) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &OnColorPickerDestroyOverride,&local_20);
    plVar9 = (longlong *)0x0;
    if (OnColorPickerDestroyOverride._16_4_ != 0) {
      plVar9 = (longlong *)OnColorPickerDestroyOverride._8_8_;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    goto LAB_142fdce4c;
  }
  this_00 = (SWindow *)0x0;
  pSVar8 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  if (pSVar8 == (SWindow *)0x0) {
LAB_142fdce11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142fdce11;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar8->_padding_;
      bVar3 = aVar2 == aVar5;
      if (bVar3) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar3);
    this_00 = (this->ParentWindowPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SWindow *)0x0) goto LAB_142fdce11;
  }
  SWindow::RequestDestroyWindow(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_142fdce4c:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleOldColorPreviewClicked @ 142fdce80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::HandleOldColorPreviewClicked(SColorPicker *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FLinearColor_u_0 local_18;
  
  if ((this->CurrentThemeBar).Object == (SThemeColorBlocksBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_18._0_8_ = *(undefined8 *)&(this->OldColor).field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&(this->OldColor).field0_0x0 + 8);
  SThemeColorBlocksBar::AddNewColorBlock
            ((this->CurrentThemeBar).Object,(FLinearColor *)&local_18._s_0,0,false);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleParentWindowClosed @ 142fdcf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::HandleParentWindowClosed(SColorPicker *this,TSharedRef<SWindow,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  SWindow *pSVar6;
  SWindow *pSVar7;
  FReadAccessScope *this_00;
  SWindow *pSVar8;
  SWindow *pSVar9;
  bool bVar10;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pSVar7 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar8 = (SWindow *)0x0;
  pSVar6 = pSVar8;
  if (pSVar7 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar7->_padding_;
    do {
      pSVar9 = pSVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142fdcf66;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar7->_padding_;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        *(atomic<int> *)&pSVar7->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    pSVar6 = (this->ParentWindowPtr).Object;
  }
  pSVar9 = pSVar7;
  if ((pSVar6 == (SWindow *)0x0) || (pSVar6 != param_1->Object)) {
LAB_142fdcf66:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Window == ParentWindowPtr.Pin()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                        ,0x561,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar7);
  }
  if (this->bIsInteractive != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInteractivePickEnd
               ,&local_68);
    if (((*(int *)&(this->OnInteractivePickEnd).field_0x10 == 0) ||
        (plVar1 = *(longlong **)&(this->OnInteractivePickEnd).field_0x8, plVar1 == (longlong *)0x0))
       || (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnInteractivePickEnd,&local_38);
      pSVar7 = pSVar8;
      if (*(int *)&(this->OnInteractivePickEnd).field_0x10 != 0) {
        pSVar7 = *(SWindow **)&(this->OnInteractivePickEnd).field_0x8;
      }
      (**(code **)(pSVar7->_padding_ + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      this->bIsInteractive = false;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnColorPickerWindowClosed,&local_50);
  if (((*(int *)&(this->OnColorPickerWindowClosed).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->OnColorPickerWindowClosed).field_0x8,
      plVar1 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    this_00 = &local_50;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnColorPickerWindowClosed,&local_20);
    if (*(int *)&(this->OnColorPickerWindowClosed).field_0x10 != 0) {
      pSVar8 = *(SWindow **)&(this->OnColorPickerWindowClosed).field_0x8;
    }
    (**(code **)(pSVar8->_padding_ + 0x60))(pSVar8,param_1);
    this_00 = &local_20;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  if ((this->bClosedViaOkOrCancel == false) && (this->bOnlyRefreshOnOk != false)) {
    DiscardColor(this);
  }
  return;
}

// HandleRGBColorChanged @ 142fdd190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleRGBColorChanged(SColorPicker *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  undefined1 auVar3 [16];
  FLinearColor_u_0 FVar4;
  FLinearColor local_18;
  
  auVar3 = minps((undefined1  [16])param_1->field0_0x0,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar4 = (FLinearColor_u_0)maxps(auVar3,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar4;
  pFVar2 = FLinearColor::LinearRGBToHSV(param_1,&local_18);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  ApplyNewTargetColor(this,false);
  return;
}

// HandleSRGBCheckBoxCheckStateChanged @ 142fdd250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::HandleSRGBCheckBoxCheckStateChanged(SColorPicker *this,ECheckBoxState param_1)

{
  bool bVar1;
  
  this->bUseSRGB = param_1 == Checked;
  bVar1 = FPaths::FileExists(&GEditorPerProjectIni);
  if (bVar1) {
    FConfigCacheIni::SetBool
              (GConfig,L"ColorPickerUI",L"bSRGBEnabled",this->bUseSRGB,&GEditorPerProjectIni);
  }
  return;
}

// HandleSRGBCheckBoxIsChecked @ 142fdd2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

ECheckBoxState __thiscall SColorPicker::HandleSRGBCheckBoxIsChecked(SColorPicker *this)

{
  return this->bUseSRGB != false;
}

// HandleThemeBarColorSelected @ 142fde3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HandleThemeBarColorSelected(SColorPicker *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  bool *pbVar10;
  FLinearColor_u_0 *pFVar11;
  undefined1 auVar12 [16];
  FLinearColor_u_0 FVar13;
  float fVar14;
  float fVar15;
  FLinearColor local_18;
  
  pbVar10 = TAttribute<bool>::Get(&this->bUseAlpha);
  if (*pbVar10 == false) {
    (param_1->field0_0x0)._s_0.A = 1.0;
  }
  fVar1 = (this->CurrentColorHSV).field0_0x0._s_0.R;
  fVar2 = (this->CurrentColorHSV).field0_0x0._s_0.G;
  fVar3 = (this->CurrentColorHSV).field0_0x0._s_0.B;
  fVar4 = (this->CurrentColorHSV).field0_0x0._s_0.A;
  this->CurrentTime = 0.0;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = (param_1->field0_0x0)._s_0.R;
  fVar6 = (param_1->field0_0x0)._s_0.G;
  fVar7 = (param_1->field0_0x0)._s_0.B;
  fVar8 = (param_1->field0_0x0)._s_0.A;
  fVar15 = fVar1 + __real_43b40000;
  (this->ColorEnd).field0_0x0._s_0.R = fVar5;
  (this->ColorEnd).field0_0x0._s_0.G = fVar6;
  (this->ColorEnd).field0_0x0._s_0.B = fVar7;
  (this->ColorEnd).field0_0x0._s_0.A = fVar8;
  fVar14 = (float)((uint)(fVar1 - fVar5) & uVar9);
  (this->ColorBegin).field0_0x0._s_0.R = fVar1;
  (this->ColorBegin).field0_0x0._s_0.G = fVar2;
  (this->ColorBegin).field0_0x0._s_0.B = fVar3;
  (this->ColorBegin).field0_0x0._s_0.A = fVar4;
  if (fVar14 <= (float)((uint)(fVar15 - fVar5) & uVar9)) {
    if ((float)((uint)((fVar1 - __real_43b40000) - fVar5) & uVar9) < fVar14) {
      (this->ColorBegin).field0_0x0._s_0.R = fVar1 - __real_43b40000;
    }
  }
  else {
    (this->ColorBegin).field0_0x0._s_0.R = fVar15;
  }
  (this->CurrentColorHSV).field0_0x0._s_0.R = fVar5;
  (this->CurrentColorHSV).field0_0x0._s_0.G = fVar6;
  (this->CurrentColorHSV).field0_0x0._s_0.B = fVar7;
  (this->CurrentColorHSV).field0_0x0._s_0.A = fVar8;
  pFVar11 = &FLinearColor::HSVToLinearRGB(param_1,&local_18)->field0_0x0;
  auVar12 = minps((undefined1  [16])*pFVar11,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar13 = (FLinearColor_u_0)maxps(auVar12,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar13;
  ApplyNewTargetColor(this,true);
  return;
}

// HandleThemePanelButtonImageBrush @ 142fde4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlateBrush * __thiscall SColorPicker::HandleThemePanelButtonImageBrush(SColorPicker *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName local_res8;
  FName local_res10;
  
  if (this->bIsThemePanelVisible == false) {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "ColorPicker.ColorThemesOff";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &local_res10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "ColorPicker.ColorThemes";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &local_res8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// HandleThemesPanelVisibility @ 142fde550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall SColorPicker::HandleThemesPanelVisibility(SColorPicker *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->bIsThemePanelVisible != false) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HideSmallTrash @ 142fe2140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::HideSmallTrash(SColorPicker *this)

{
  return;
}

// MakeColorPreviewBox @ 142fe60a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SColorPicker::MakeColorPreviewBox(SColorPicker *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FSlotArguments *pFVar1;
  FText *pFVar2;
  TVector4<double> *pTVar3;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<SColorBlock,1> *pTVar5;
  FName *pFVar6;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SImage,1> *pTVar8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SButton,1> *pTVar10;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar11;
  TSharedRef<SOverlay,1> *pTVar12;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SVerticalBox,1> *pTVar13;
  longlong lVar14;
  code **ppcVar15;
  undefined1 *puVar16;
  pmf_b5063530 *ppVar17;
  pmf_28d2cf80 *ppVar18;
  undefined1 *puVar19;
  pmf_8ab45a4a *ppVar20;
  pmf_13f5a5c2 *ppVar21;
  pmf_49ad074d *ppVar22;
  pmf_e06ad559 *ppVar23;
  bool local_2d38;
  bool local_2d37;
  T0RequiredArgs local_2d36;
  uchar local_2d35;
  uchar local_2d34;
  T0RequiredArgs local_2d33;
  T0RequiredArgs local_2d32;
  T0RequiredArgs local_2d31;
  bool local_2d30;
  bool local_2d2f;
  T0RequiredArgs local_2d2e;
  uchar local_2d2d;
  uchar local_2d2c;
  T0RequiredArgs local_2d2b;
  T0RequiredArgs local_2d2a;
  T0RequiredArgs local_2d29;
  T0RequiredArgs local_2d28;
  FStaticCastTag local_2d27;
  FStaticCastTag local_2d26;
  FStaticCastTag local_2d25;
  FStaticCastTag local_2d24;
  TSharedRef<SColorPicker_const_,1> *local_2d20;
  TSharedRef<SColorPicker_const_,1> *local_2d18;
  ISlateStyle *local_2d10;
  TSharedRef<SColorPicker_const_,1> *local_2d08;
  TSharedRef<SColorPicker_const_,1> *local_2d00;
  ISlateStyle *local_2cf8;
  TAttribute<bool> *local_2cf0;
  TAttribute<bool> *local_2ce8;
  FArguments *local_2ce0;
  TAttribute<bool> *local_2cd8;
  TAttribute<bool> *local_2cd0;
  FArguments *local_2cc8;
  longlong *local_2cc0;
  TSharedRef<SWidget_const_,1> *local_2cb8;
  TSharedRef<SColorPicker_const_,1> *local_2cb0;
  FArguments *local_2ca8;
  FArguments *local_2ca0;
  TAttribute<FText> *local_2c98;
  TAttribute<FText> *local_2c90;
  FArguments *local_2c88;
  longlong *local_2c80;
  TSharedRef<SWidget_const_,1> *local_2c78;
  TSharedRef<SColorPicker_const_,1> *local_2c70;
  FArguments *local_2c68;
  TVector2<double>_u_0 *local_2c60;
  TAttribute<UE::Math::TVector2<double>_> *local_2c58;
  TAttribute<UE::Math::TVector2<double>_> *local_2c50;
  FArguments *local_2c48;
  TAttribute<UE::Math::TVector4<double>_> *local_2c40;
  TAttribute<UE::Math::TVector4<double>_> *local_2c38;
  FArguments *local_2c30;
  FArguments *local_2c28;
  FSlotArguments *local_2c20;
  FSlotArguments *local_2c18;
  FArguments *local_2c10;
  FName local_2c08;
  ISlateStyle *local_2c00;
  FArguments *local_2bf8;
  FArguments *local_2bf0;
  FArguments *local_2be8;
  FArguments *local_2be0;
  TAttribute<FText> *local_2bd8;
  TAttribute<FText> *local_2bd0;
  FArguments *local_2bc8;
  FArguments *local_2bc0;
  FArguments *local_2bb8;
  FArguments *local_2bb0;
  FArguments *local_2ba8;
  FName *local_2ba0;
  FName local_2b98;
  code *local_2b90;
  FSlateBrush *local_2b88;
  TAttribute<FSlateBrush_const_*> *local_2b80;
  TAttribute<FSlateBrush_const_*> *local_2b78;
  FArguments *local_2b70;
  FArguments *local_2b68;
  FArguments *local_2b60;
  NamedSlotProperty<SButton::FArguments> *local_2b58;
  FArguments *local_2b50;
  FSlotArguments *local_2b48;
  FSlotArguments *local_2b40;
  FArguments *local_2b38;
  FArguments *local_2b30;
  FSlotArguments *local_2b28;
  FSlotArguments *local_2b20;
  FArguments *local_2b18;
  undefined1 *local_2b10;
  TAttribute<bool> *local_2b08;
  TAttribute<bool> *local_2b00;
  FArguments *local_2af8;
  TAttribute<bool> *local_2af0;
  TAttribute<bool> *local_2ae8;
  FArguments *local_2ae0;
  longlong *local_2ad8;
  TSharedRef<SWidget_const_,1> *local_2ad0;
  TSharedRef<SColorPicker_const_,1> *local_2ac8;
  FArguments *local_2ac0;
  TAttribute<FLinearColor> *local_2ab8;
  TAttribute<FLinearColor> *local_2ab0;
  FArguments *local_2aa8;
  TAttribute<FText> *local_2aa0;
  TAttribute<FText> *local_2a98;
  FArguments *local_2a90;
  longlong *local_2a88;
  TSharedRef<SWidget_const_,1> *local_2a80;
  TSharedRef<SColorPicker_const_,1> *local_2a78;
  FArguments *local_2a70;
  TVector2<double>_u_0 *local_2a68;
  TAttribute<UE::Math::TVector2<double>_> *local_2a60;
  TAttribute<UE::Math::TVector2<double>_> *local_2a58;
  FArguments *local_2a50;
  TAttribute<UE::Math::TVector4<double>_> *local_2a48;
  TAttribute<UE::Math::TVector4<double>_> *local_2a40;
  FArguments *local_2a38;
  FArguments *local_2a30;
  FSlotArguments *local_2a28;
  FSlotArguments *local_2a20;
  FArguments *local_2a18;
  FName local_2a10;
  ISlateStyle *local_2a08;
  FArguments *local_2a00;
  FArguments *local_29f8;
  FArguments *local_29f0;
  FArguments *local_29e8;
  TAttribute<FText> *local_29e0;
  TAttribute<FText> *local_29d8;
  FArguments *local_29d0;
  FArguments *local_29c8;
  FArguments *local_29c0;
  FArguments *local_29b8;
  FArguments *local_29b0;
  FName *local_29a8;
  FName local_29a0;
  code *local_2998;
  FSlateBrush *local_2990;
  TAttribute<FSlateBrush_const_*> *local_2988;
  TAttribute<FSlateBrush_const_*> *local_2980;
  FArguments *local_2978;
  FArguments *local_2970;
  FArguments *local_2968;
  NamedSlotProperty<SButton::FArguments> *local_2960;
  FArguments *local_2958;
  FSlotArguments *local_2950;
  FSlotArguments *local_2948;
  FArguments *local_2940;
  FArguments *local_2938;
  FSlotArguments *local_2930;
  FSlotArguments *local_2928;
  FArguments *local_2920;
  FArguments *local_2918;
  code *local_2910;
  undefined4 local_2908;
  TSharedRef<SWidget,1> local_2900;
  code *local_28f0;
  undefined4 local_28e8;
  code *local_28e0;
  undefined4 local_28d8;
  code *local_28d0;
  undefined4 local_28c8;
  TVector2<double>_u_0 local_28c0;
  code *local_28b0;
  undefined4 local_28a8;
  code *local_28a0;
  undefined4 local_2898;
  code *local_2890;
  undefined4 local_2888;
  code *local_2880;
  undefined4 local_2878;
  code *local_2870;
  undefined4 local_2868;
  code *local_2860;
  undefined4 local_2858;
  code *local_2850;
  undefined4 local_2848;
  TVector2<double>_u_0 local_2840;
  code *local_2830;
  undefined4 local_2828;
  TSharedRef<SWidget,1> local_2820;
  code *local_2810;
  undefined4 local_2808;
  code *local_2800;
  undefined4 local_27f8;
  code *local_27f0;
  undefined4 local_27e8;
  TSharedRef<SWidget,1> local_27e0;
  TSharedRef<SWidget,1> local_27d0;
  TSharedRef<SWidget,1> local_27c0;
  TSharedRef<SWidget,1> local_27b0;
  TSharedRef<SWidget,1> local_27a0;
  TSharedRef<SWidget,1> local_2790;
  FName local_2780;
  FName local_2778;
  undefined1 local_2770 [16];
  TSharedRef<SWidget_const_,1> local_2760;
  undefined1 local_2750 [24];
  pmf_28d2cf80 local_2738;
  undefined1 local_2728 [16];
  pmf_b5063530 local_2718;
  undefined1 local_2708 [16];
  TSharedRef<SWidget_const_,1> local_26f8;
  undefined1 local_26e8 [16];
  pmf_8ab45a4a local_26d8;
  undefined1 local_26c8 [16];
  pmf_13f5a5c2 local_26b8;
  undefined1 local_26a8 [16];
  pmf_e06ad559 local_2698;
  undefined1 local_2688 [16];
  pmf_49ad074d local_2678;
  undefined1 local_2668 [16];
  pmf_49ad074d local_2658;
  undefined1 local_2648 [16];
  pmf_e06ad559 local_2638;
  undefined1 local_2628 [16];
  TSharedRef<SWidget_const_,1> local_2618;
  undefined1 local_2608 [16];
  pmf_28d2cf80 local_25f8;
  undefined1 local_25e8 [16];
  TSharedRef<SWidget_const_,1> local_25d8;
  undefined1 local_25c8 [16];
  pmf_8ab45a4a local_25b8;
  undefined1 local_25a8 [16];
  pmf_13f5a5c2 local_2598;
  undefined1 local_2588 [16];
  pmf_e06ad559 local_2578;
  undefined1 local_2568 [16];
  pmf_49ad074d local_2558;
  undefined1 local_2548 [16];
  pmf_49ad074d local_2538;
  undefined1 local_2528 [16];
  pmf_e06ad559 local_2518;
  TSharedRef<SVerticalBox,1> local_2508;
  TSharedRef<SOverlay,1> local_24f8;
  TSharedRef<SButton,1> local_24e8;
  TSharedRef<SImage,1> local_24d8;
  FText local_24c8;
  TSharedRef<SColorBlock,1> local_24b8;
  FText local_24a8;
  TSharedRef<SOverlay,1> local_2498;
  TSharedRef<SButton,1> local_2488;
  TSharedRef<SImage,1> local_2478;
  FText local_2468;
  TSharedRef<SColorBlock,1> local_2458;
  FText local_2448;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_2438;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2420;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2408;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_23f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_23d8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_23c0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_23a8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2390;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_2378;
  TSharedRef<SColorPicker_const_,1> local_2360;
  NamedSlotProperty<SButton::FArguments> local_2350;
  TSharedRef<SColorPicker_const_,1> local_2340;
  TSharedRef<SColorPicker_const_,1> local_2330;
  TSharedRef<SColorPicker_const_,1> local_2320;
  NamedSlotProperty<SButton::FArguments> local_2310;
  TAttribute<bool> local_2300;
  TAttribute<bool> local_22e0;
  TVector4<double> local_22b8;
  TAttribute<bool> local_2298;
  TAttribute<bool> local_2278;
  TVector4<double> local_2258;
  TAttribute<FSlateBrush_const_*> local_2238;
  TAttribute<FSlateBrush_const_*> local_2210;
  TAttribute<FText> local_21e8;
  TAttribute<UE::Math::TVector2<double>_> local_21b8;
  TAttribute<FText> local_2188;
  TAttribute<FLinearColor> local_2158;
  TAttribute<FText> local_2128;
  TAttribute<UE::Math::TVector2<double>_> local_20f8;
  TAttribute<FText> local_20c8;
  FSlotArguments local_2098;
  FSlotArguments local_2038;
  FSlotArguments local_1fd8;
  FSlotArguments local_1f78;
  TAttribute<UE::Math::TVector4<double>_> local_1f18;
  TAttribute<UE::Math::TVector4<double>_> local_1ed8;
  FSlotArguments local_1e98;
  FSlotArguments local_1db0;
  FArguments local_1cc8;
  FArguments local_1ac0;
  FArguments local_18b8;
  FArguments local_16b0;
  FArguments local_1408;
  FArguments local_1158;
  FArguments local_df8;
  FArguments local_a98;
  FArguments local_558;
  undefined8 uStack_18;
  
  uStack_18 = 0x142fe60b6;
  local_2b18 = SVerticalBox::FArguments::FArguments(&local_18b8);
  pFVar1 = SVerticalBox::Slot(&local_1db0);
  local_2b28 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_2c10 = SOverlay::FArguments::FArguments(&local_1ac0);
  local_2c20 = SOverlay::Slot(&local_1f78,0);
  local_2ce0 = SColorBlock::FArguments::FArguments(&local_df8);
  local_2cf0 = &local_2300;
  local_2d38 = true;
  local_2ce8 = TAttribute<bool>::TAttribute<bool>(local_2cf0,&local_2d38);
  local_2cc8 = SColorBlock::FArguments::ColorIsHSV(local_2ce0,local_2ce8);
  local_2cd8 = &local_22e0;
  local_2d37 = true;
  local_2cd0 = TAttribute<bool>::TAttribute<bool>(local_2cd8,&local_2d37);
  local_2ca8 = SColorBlock::FArguments::ShowBackgroundForAlpha(local_2cc8,local_2cd0);
  local_28f0 = HandleColorPreviewAlphaMode;
  local_28e8 = 0;
  ppcVar15 = &local_28f0;
  puVar16 = local_2770;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2770;
  puVar19 = local_2750;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar19 = puVar19 + 1;
  }
  local_2d20 = &local_2320;
  local_2cc0 = &this->_padding_;
  local_2cb8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)local_2cc0,&local_2760);
  TSharedRef<SColorPicker_const_,1>::TSharedRef<SColorPicker_const_,1><SWidget_const_>
            (local_2d20,local_2cb8,local_2d27);
  TSharedRef<SWidget_const_,1>::~TSharedRef<SWidget_const_,1>(&local_2760);
  local_2cb0 = local_2d20;
  puVar16 = local_2750;
  ppVar18 = &local_2738;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar18 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar18 = (pmf_28d2cf80 *)&ppVar18->field_0x1;
  }
  local_2ca0 = SColorBlock::FArguments::AlphaDisplayMode<SColorPicker_const_>
                         (local_2ca8,local_2d20,&local_2738);
  local_28e0 = GetCurrentColor;
  local_28d8 = 0;
  ppcVar15 = &local_28e0;
  puVar16 = local_2728;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2728;
  ppVar17 = &local_2718;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar17 = (pmf_b5063530 *)&ppVar17->field_0x1;
  }
  local_2c88 = SColorBlock::FArguments::Color<SColorPicker_const_>(local_2ca0,this,&local_2718);
  local_2c98 = &local_21e8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2448,L"ColorPicker",L"NewColorBlockToolTip",
                      L"Preview of the currently selected color");
  local_2c90 = TAttribute<FText>::TAttribute<FText>(local_2c98,pFVar2);
  local_2c68 = TSlateBaseNamedArgs<SColorBlock>::ToolTipText
                         ((TSlateBaseNamedArgs<SColorBlock> *)local_2c88,local_2c90);
  local_28d0 = HandleColorPickerUseSRGB;
  local_28c8 = 0;
  ppcVar15 = &local_28d0;
  puVar16 = local_2708;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2708;
  puVar19 = local_26e8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar19 = puVar19 + 1;
  }
  local_2d18 = &local_2360;
  local_2c80 = &this->_padding_;
  local_2c78 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)local_2c80,&local_26f8);
  TSharedRef<SColorPicker_const_,1>::TSharedRef<SColorPicker_const_,1><SWidget_const_>
            (local_2d18,local_2c78,local_2d26);
  TSharedRef<SWidget_const_,1>::~TSharedRef<SWidget_const_,1>(&local_26f8);
  local_2c70 = local_2d18;
  puVar16 = local_26e8;
  ppVar20 = &local_26d8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar20 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar20 = (pmf_8ab45a4a *)&ppVar20->field_0x1;
  }
  local_2c48 = SColorBlock::FArguments::UseSRGB<SColorPicker_const_>
                         (local_2c68,local_2d18,&local_26d8);
  local_2c58 = &local_21b8;
  local_28c0._s_0.X = __real_405a800000000000;
  local_28c0._s_0.Y = __real_4040000000000000;
  local_2c60 = &local_28c0;
  local_2c50 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                         (local_2c58,(TVector2<double> *)&local_2c60->_s_0);
  local_2c30 = SColorBlock::FArguments::Size(local_2c48,local_2c50);
  local_2c40 = &local_1f18;
  pTVar3 = UE::Math::TVector4<double>::TVector4<double>
                     (&local_22b8,__real_4010000000000000,__real_4010000000000000,
                      __real_4010000000000000,__real_4010000000000000);
  local_2c38 = TAttribute<UE::Math::TVector4<double>_>::TAttribute<UE::Math::TVector4<double>_>
                         (local_2c40,pTVar3);
  local_2c28 = SColorBlock::FArguments::CornerRadius(local_2c30,local_2c38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d36);
  pTVar4 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                     (&local_2378,"SColorBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x32d,&local_2d36);
  pTVar5 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_2458,local_2c28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>(&local_2820,pTVar5);
  local_2c18 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2c20,&local_2820);
  local_2b38 = SOverlay::FArguments::operator+(local_2c10,local_2c18);
  local_2b48 = SOverlay::Slot(&local_1fd8,0);
  local_2bf8 = SButton::FArguments::FArguments(&local_558);
  ::FName::FName(&local_2c08,"ColorPicker.ColorPreviewButton");
  local_2c00 = FAppStyle::Get();
  local_2bf0 = SButton::FArguments::ButtonStyle(local_2bf8,local_2c00,&local_2c08,(char *)0x0);
  local_28b0 = HandleNewColorPreviewClicked;
  local_28a8 = 0;
  ppcVar15 = &local_28b0;
  puVar16 = local_26c8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_26c8;
  ppVar21 = &local_26b8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar21 = (pmf_13f5a5c2 *)&ppVar21->field_0x1;
  }
  local_2be8 = SButton::FArguments::OnClicked<SColorPicker>(local_2bf0,this,&local_26b8);
  local_2be0 = SButton::FArguments::HAlign(local_2be8,HAlign_Center);
  local_2bc8 = SButton::FArguments::VAlign(local_2be0,VAlign_Center);
  local_2bd8 = &local_2188;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2468,L"ColorPicker",L"NewColorButtonToolTip",
                      L"Add the currently selected color to the current color theme");
  local_2bd0 = TAttribute<FText>::TAttribute<FText>(local_2bd8,pFVar2);
  local_2bc0 = TSlateBaseNamedArgs<SButton>::ToolTipText
                         ((TSlateBaseNamedArgs<SButton> *)local_2bc8,local_2bd0);
  local_28a0 = HandleColorPreviewButtonVisibility;
  local_2898 = 0;
  ppcVar15 = &local_28a0;
  puVar16 = local_26a8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_26a8;
  ppVar23 = &local_2698;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar23 = (pmf_e06ad559 *)&ppVar23->field_0x1;
  }
  local_2bb8 = TSlateBaseNamedArgs<SButton>::Visibility<SColorPicker_const_>
                         ((TSlateBaseNamedArgs<SButton> *)local_2bc0,this,&local_2698);
  local_2d35 = (uchar)EVisibility::Visible.Value.Value;
  local_2890 = SetNewColorPreviewImageVisibility;
  local_2888 = 0;
  ppcVar15 = &local_2890;
  puVar16 = local_2688;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2688;
  ppVar22 = &local_2678;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar22 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar22 = (pmf_49ad074d *)&ppVar22->field_0x1;
  }
  local_2bb0 = SButton::FArguments::OnHovered<SColorPicker,EVisibility>
                         (local_2bb8,this,&local_2678,EVisibility::Visible);
  local_2d34 = (uchar)EVisibility::Hidden.Value.Value;
  local_2880 = SetNewColorPreviewImageVisibility;
  local_2878 = 0;
  ppcVar15 = &local_2880;
  puVar16 = local_2668;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2668;
  ppVar22 = &local_2658;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar22 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar22 = (pmf_49ad074d *)&ppVar22->field_0x1;
  }
  local_2ba8 = SButton::FArguments::OnUnhovered<SColorPicker,EVisibility>
                         (local_2bb0,this,&local_2658,EVisibility::Hidden);
  local_2b58 = SButton::FArguments::Content(local_2ba8,&local_2350);
  local_2b70 = SImage::FArguments::FArguments(&local_1408);
  local_2b80 = &local_2238;
  local_2d10 = FAppStyle::Get();
  local_2b90 = *(code **)((longlong)*local_2d10 + 0x50);
  local_2ba0 = &local_2778;
  pFVar6 = ::FName::FName(local_2ba0,"Icons.Plus");
  local_2b98 = *pFVar6;
  local_2b88 = (FSlateBrush *)(*local_2b90)(local_2d10,local_2b98,0,0);
  local_2b78 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2b80,&local_2b88);
  local_2b68 = SImage::FArguments::Image(local_2b70,local_2b78);
  local_2870 = GetNewColorPreviewImageVisibility;
  local_2868 = 0;
  ppcVar15 = &local_2870;
  puVar16 = local_2648;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2648;
  ppVar23 = &local_2638;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar23 = (pmf_e06ad559 *)&ppVar23->field_0x1;
  }
  local_2b60 = TSlateBaseNamedArgs<SImage>::Visibility<SColorPicker>
                         ((TSlateBaseNamedArgs<SImage> *)local_2b68,this,&local_2638);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d33);
  pTVar7 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                     (&local_2390,"SImage",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x345,&local_2d33);
  pTVar8 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_2478,local_2b60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_2900,pTVar8);
  local_2b50 = NamedSlotProperty<SButton::FArguments>::operator[](local_2b58,&local_2900);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d32);
  pTVar9 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_23a8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x33a,&local_2d32);
  pTVar10 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_2488,local_2b50);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_2790,pTVar10);
  local_2b40 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2b48,&local_2790);
  local_2b30 = SOverlay::FArguments::operator+(local_2b38,local_2b40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d31);
  pTVar11 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_23c0,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x328,&local_2d31);
  pTVar12 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_2498,local_2b30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_27a0,pTVar12);
  local_2b20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2b28,&local_27a0);
  local_2920 = SVerticalBox::FArguments::operator+(local_2b18,local_2b20);
  pFVar1 = SVerticalBox::Slot(&local_1e98);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_2b10 = &pFVar1->field_0x18;
  local_2930 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_2b10,0.0,__real_40000000,0.0,0.0);
  local_2a18 = SOverlay::FArguments::FArguments(&local_1cc8);
  local_2a28 = SOverlay::Slot(&local_2038,0);
  local_2af8 = SColorBlock::FArguments::FArguments(&local_1158);
  local_2b08 = &local_2298;
  local_2d30 = true;
  local_2b00 = TAttribute<bool>::TAttribute<bool>(local_2b08,&local_2d30);
  local_2ae0 = SColorBlock::FArguments::ColorIsHSV(local_2af8,local_2b00);
  local_2af0 = &local_2278;
  local_2d2f = true;
  local_2ae8 = TAttribute<bool>::TAttribute<bool>(local_2af0,&local_2d2f);
  local_2ac0 = SColorBlock::FArguments::ShowBackgroundForAlpha(local_2ae0,local_2ae8);
  local_2860 = HandleColorPreviewAlphaMode;
  local_2858 = 0;
  ppcVar15 = &local_2860;
  puVar16 = local_2628;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2628;
  puVar19 = local_2608;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar19 = puVar19 + 1;
  }
  local_2d08 = &local_2340;
  local_2ad8 = &this->_padding_;
  local_2ad0 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)local_2ad8,&local_2618);
  TSharedRef<SColorPicker_const_,1>::TSharedRef<SColorPicker_const_,1><SWidget_const_>
            (local_2d08,local_2ad0,local_2d25);
  TSharedRef<SWidget_const_,1>::~TSharedRef<SWidget_const_,1>(&local_2618);
  local_2ac8 = local_2d08;
  puVar16 = local_2608;
  ppVar18 = &local_25f8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar18 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar18 = (pmf_28d2cf80 *)&ppVar18->field_0x1;
  }
  local_2aa8 = SColorBlock::FArguments::AlphaDisplayMode<SColorPicker_const_>
                         (local_2ac0,local_2d08,&local_25f8);
  local_2ab8 = &local_2158;
  local_2ab0 = TAttribute<FLinearColor>::TAttribute<FLinearColor><FLinearColor>
                         (local_2ab8,&this->OldColor);
  local_2a90 = SColorBlock::FArguments::Color(local_2aa8,local_2ab0);
  local_2aa0 = &local_2128;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_24a8,L"ColorPicker",L"OldColorBlockToolTip",
                      L"Preview of the previously selected color");
  local_2a98 = TAttribute<FText>::TAttribute<FText>(local_2aa0,pFVar2);
  local_2a70 = TSlateBaseNamedArgs<SColorBlock>::ToolTipText
                         ((TSlateBaseNamedArgs<SColorBlock> *)local_2a90,local_2a98);
  local_2850 = HandleColorPickerUseSRGB;
  local_2848 = 0;
  ppcVar15 = &local_2850;
  puVar16 = local_25e8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_25e8;
  puVar19 = local_25c8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar19 = puVar19 + 1;
  }
  local_2d00 = &local_2330;
  local_2a88 = &this->_padding_;
  local_2a80 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)local_2a88,&local_25d8);
  TSharedRef<SColorPicker_const_,1>::TSharedRef<SColorPicker_const_,1><SWidget_const_>
            (local_2d00,local_2a80,local_2d24);
  TSharedRef<SWidget_const_,1>::~TSharedRef<SWidget_const_,1>(&local_25d8);
  local_2a78 = local_2d00;
  puVar16 = local_25c8;
  ppVar20 = &local_25b8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar20 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar20 = (pmf_8ab45a4a *)&ppVar20->field_0x1;
  }
  local_2a50 = SColorBlock::FArguments::UseSRGB<SColorPicker_const_>
                         (local_2a70,local_2d00,&local_25b8);
  local_2a60 = &local_20f8;
  local_2840._s_0.X = __real_405a800000000000;
  local_2840._s_0.Y = __real_4040000000000000;
  local_2a68 = &local_2840;
  local_2a58 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                         (local_2a60,(TVector2<double> *)&local_2a68->_s_0);
  local_2a38 = SColorBlock::FArguments::Size(local_2a50,local_2a58);
  local_2a48 = &local_1ed8;
  pTVar3 = UE::Math::TVector4<double>::TVector4<double>
                     (&local_2258,__real_4010000000000000,__real_4010000000000000,
                      __real_4010000000000000,__real_4010000000000000);
  local_2a40 = TAttribute<UE::Math::TVector4<double>_>::TAttribute<UE::Math::TVector4<double>_>
                         (local_2a48,pTVar3);
  local_2a30 = SColorBlock::FArguments::CornerRadius(local_2a38,local_2a40);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d2e);
  pTVar4 = MakeTDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
                     (&local_2438,"SColorBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x355,&local_2d2e);
  pTVar5 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_24b8,local_2a30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>(&local_27b0,pTVar5);
  local_2a20 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2a28,&local_27b0);
  local_2940 = SOverlay::FArguments::operator+(local_2a18,local_2a20);
  local_2950 = SOverlay::Slot(&local_2098,0);
  local_2a00 = SButton::FArguments::FArguments(&local_a98);
  ::FName::FName(&local_2a10,"ColorPicker.ColorPreviewButton");
  local_2a08 = FAppStyle::Get();
  local_29f8 = SButton::FArguments::ButtonStyle(local_2a00,local_2a08,&local_2a10,(char *)0x0);
  local_2830 = HandleOldColorPreviewClicked;
  local_2828 = 0;
  ppcVar15 = &local_2830;
  puVar16 = local_25a8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_25a8;
  ppVar21 = &local_2598;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar21 = (pmf_13f5a5c2 *)&ppVar21->field_0x1;
  }
  local_29f0 = SButton::FArguments::OnClicked<SColorPicker>(local_29f8,this,&local_2598);
  local_29e8 = SButton::FArguments::HAlign(local_29f0,HAlign_Center);
  local_29d0 = SButton::FArguments::VAlign(local_29e8,VAlign_Center);
  local_29e0 = &local_20c8;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_24c8,L"ColorPicker",L"OldColorButtonToolTip",
                      L"Add the previously selected color to the current color theme");
  local_29d8 = TAttribute<FText>::TAttribute<FText>(local_29e0,pFVar2);
  local_29c8 = TSlateBaseNamedArgs<SButton>::ToolTipText
                         ((TSlateBaseNamedArgs<SButton> *)local_29d0,local_29d8);
  local_2910 = HandleColorPreviewButtonVisibility;
  local_2908 = 0;
  ppcVar15 = &local_2910;
  puVar16 = local_2588;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2588;
  ppVar23 = &local_2578;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar23 = (pmf_e06ad559 *)&ppVar23->field_0x1;
  }
  local_29c0 = TSlateBaseNamedArgs<SButton>::Visibility<SColorPicker_const_>
                         ((TSlateBaseNamedArgs<SButton> *)local_29c8,this,&local_2578);
  local_2d2d = (uchar)EVisibility::Visible.Value.Value;
  local_2810 = SetOldColorPreviewImageVisibility;
  local_2808 = 0;
  ppcVar15 = &local_2810;
  puVar16 = local_2568;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2568;
  ppVar22 = &local_2558;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar22 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar22 = (pmf_49ad074d *)&ppVar22->field_0x1;
  }
  local_29b8 = SButton::FArguments::OnHovered<SColorPicker,EVisibility>
                         (local_29c0,this,&local_2558,EVisibility::Visible);
  local_2d2c = (uchar)EVisibility::Hidden.Value.Value;
  local_2800 = SetOldColorPreviewImageVisibility;
  local_27f8 = 0;
  ppcVar15 = &local_2800;
  puVar16 = local_2548;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2548;
  ppVar22 = &local_2538;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar22 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar22 = (pmf_49ad074d *)&ppVar22->field_0x1;
  }
  local_29b0 = SButton::FArguments::OnUnhovered<SColorPicker,EVisibility>
                         (local_29b8,this,&local_2538,EVisibility::Hidden);
  local_2960 = SButton::FArguments::Content(local_29b0,&local_2310);
  local_2978 = SImage::FArguments::FArguments(&local_16b0);
  local_2988 = &local_2210;
  local_2cf8 = FAppStyle::Get();
  local_2998 = *(code **)((longlong)*local_2cf8 + 0x50);
  local_29a8 = &local_2780;
  pFVar6 = ::FName::FName(local_29a8,"Icons.Plus");
  local_29a0 = *pFVar6;
  local_2990 = (FSlateBrush *)(*local_2998)(local_2cf8,local_29a0,0,0);
  local_2980 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2988,&local_2990);
  local_2970 = SImage::FArguments::Image(local_2978,local_2980);
  local_27f0 = GetOldColorPreviewImageVisibility;
  local_27e8 = 0;
  ppcVar15 = &local_27f0;
  puVar16 = local_2528;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_2528;
  ppVar23 = &local_2518;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar23 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar23 = (pmf_e06ad559 *)&ppVar23->field_0x1;
  }
  local_2968 = TSlateBaseNamedArgs<SImage>::Visibility<SColorPicker>
                         ((TSlateBaseNamedArgs<SImage> *)local_2970,this,&local_2518);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d2b);
  pTVar7 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                     (&local_23d8,"SImage",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x36d,&local_2d2b);
  pTVar8 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_24d8,local_2968);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_27c0,pTVar8);
  local_2958 = NamedSlotProperty<SButton::FArguments>::operator[](local_2960,&local_27c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d2a);
  pTVar9 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_23f0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                      ,0x362,&local_2d2a);
  pTVar10 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_24e8,local_2958);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_27d0,pTVar10);
  local_2948 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2950,&local_27d0);
  local_2938 = SOverlay::FArguments::operator+(local_2940,local_2948);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d29);
  pTVar11 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2408,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x350,&local_2d29);
  pTVar12 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_24f8,local_2938);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_27e0,pTVar12);
  local_2928 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2930,&local_27e0);
  local_2918 = SVerticalBox::FArguments::operator+(local_2920,local_2928);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2d28);
  this_00 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2420,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x323,&local_2d28);
  pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_2508,local_2918);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(__return_storage_ptr__,pTVar13);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_2508);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_2420);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_27e0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_24f8.SharedReferenceCount);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_2408);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_27d0);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_24e8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_23f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_27c0);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_24d8);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_23d8);
  SImage::FArguments::~FArguments(&local_16b0);
  FText::~FText(&local_24c8);
  SButton::FArguments::~FArguments(&local_a98);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2098);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_27b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_24b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2438._Widget.SharedReferenceCount);
  FText::~FText(&local_24a8);
  SColorBlock::FArguments::~FArguments(&local_1158);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2038);
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1cc8._Slots);
  TSlateBaseNamedArgs<SOverlay>::~TSlateBaseNamedArgs<SOverlay>
            ((TSlateBaseNamedArgs<SOverlay> *)&local_1cc8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1e98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_27a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2498.SharedReferenceCount);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_23c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2790);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_2488);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_23a8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2900);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_2478);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2390);
  SImage::FArguments::~FArguments(&local_1408);
  FText::~FText(&local_2468);
  SButton::FArguments::~FArguments(&local_558);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1fd8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2820);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2458.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2378._Widget.SharedReferenceCount);
  FText::~FText(&local_2448);
  SColorBlock::FArguments::~FArguments(&local_df8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1f78);
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1ac0._Slots);
  TSlateBaseNamedArgs<SOverlay>::~TSlateBaseNamedArgs<SOverlay>
            ((TSlateBaseNamedArgs<SOverlay> *)&local_1ac0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1db0);
  SVerticalBox::FArguments::~FArguments(&local_18b8);
  return __return_storage_ptr__;
}

// MakeColorSlider @ 142fe7b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SColorPicker::MakeColorSlider
          (SColorPicker *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          EColorPickerChannels param_1)

{
  FText *pFVar1;
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SColorSlider,1> *pTVar2;
  longlong lVar3;
  code **ppcVar4;
  undefined1 *puVar5;
  pmf_8ab45a4a *ppVar6;
  pmf_df3a6d9e *ppVar7;
  pmf_7c63afb9 *ppVar8;
  pmf_7adfccb1 *ppVar9;
  pmf_97d28a9e *ppVar10;
  pmf_e05442f1 *ppVar11;
  bool local_826;
  bool local_825;
  T0RequiredArgs local_824 [4];
  EColorPickerChannels local_820;
  float local_81c;
  float local_818;
  FText local_810;
  EOrientation local_800;
  float local_7fc;
  float local_7f8;
  float local_7f4;
  TAttribute<EOrientation> *local_7f0;
  FArguments *local_7e8;
  TAttribute<FText> *local_7e0;
  TAttribute<FText> *local_7d8;
  FArguments *local_7d0;
  TAttribute<float> *local_7c8;
  TAttribute<float> *local_7c0;
  FArguments *local_7b8;
  TAttribute<float> *local_7b0;
  TAttribute<float> *local_7a8;
  FArguments *local_7a0;
  TAttribute<float> *local_798;
  TAttribute<float> *local_790;
  FArguments *local_788;
  TAttribute<bool> *local_780;
  TAttribute<bool> *local_778;
  FArguments *local_770;
  TAttribute<bool> *local_768;
  TAttribute<bool> *local_760;
  FArguments *local_758;
  FArguments *local_750;
  FArguments *local_748;
  FArguments *local_740;
  FArguments *local_738;
  FArguments *local_730;
  FArguments *local_728;
  FArguments *local_720;
  FArguments *local_718;
  undefined1 *local_710;
  code *local_708;
  undefined4 local_700;
  code *local_6f8;
  undefined4 local_6f0;
  code *local_6e8;
  undefined4 local_6e0;
  code *local_6d8;
  undefined4 local_6d0;
  code *local_6c8;
  undefined4 local_6c0;
  code *local_6b8;
  undefined4 local_6b0;
  code *local_6a8;
  undefined4 local_6a0;
  FText local_698;
  FText local_688;
  FText local_678;
  FText local_668;
  FText local_658;
  FText local_648;
  FText local_638;
  undefined1 local_628 [16];
  pmf_8ab45a4a local_618;
  undefined1 local_608 [16];
  pmf_df3a6d9e local_5f8;
  undefined1 local_5e8 [16];
  pmf_7c63afb9 local_5d8;
  undefined1 local_5c8 [16];
  pmf_7adfccb1 local_5b8;
  undefined1 local_5a8 [16];
  pmf_97d28a9e local_598;
  undefined1 local_588 [16];
  pmf_97d28a9e local_578;
  undefined1 local_568 [16];
  pmf_e05442f1 local_558;
  TSharedRef<SColorSlider,1> local_548;
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> local_538;
  undefined1 local_520 [32];
  TAttribute<float> local_500;
  TAttribute<float> local_4e0;
  TAttribute<float> local_4c0;
  TAttribute<bool> local_4a0;
  TAttribute<bool> local_480;
  TAttribute<FText> local_460;
  FArguments local_430;
  
  FText::FText(&local_810);
  local_820 = param_1;
  switch(param_1) {
  case Red:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_698,L"ColorPicker",L"RedSliderToolTip",L"Red");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_698);
    break;
  case Green:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_688,L"ColorPicker",L"GreenSliderToolTip",L"Green");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_688);
    break;
  case Blue:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_678,L"ColorPicker",L"BlueSliderToolTip",L"Blue");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_678);
    break;
  case Alpha:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_668,L"ColorPicker",L"AlphaSliderToolTip",L"Alpha");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_668);
    break;
  case Hue:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_658,L"ColorPicker",L"HueSliderToolTip",L"Hue");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_658);
    break;
  case Saturation:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_648,L"ColorPicker",L"SaturationSliderToolTip",L"Saturation");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_648);
    break;
  case Value:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_638,L"ColorPicker",L"ValueSliderToolTip",L"Value");
    FText::operator=(&local_810,pFVar1);
    FText::~FText(&local_638);
    break;
  default:
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,&SNullWidget::NullWidget);
    FText::~FText(&local_810);
    return __return_storage_ptr__;
  }
  local_7e8 = SColorSlider::FArguments::FArguments(&local_430);
  local_710 = local_520;
  local_800 = Orient_Vertical;
  local_7f0 = TAttribute<enum_EOrientation>::TAttribute<enum_EOrientation>(local_710,&local_800);
  local_7d0 = SColorSlider::FArguments::Orientation(local_7e8,local_7f0);
  local_7e0 = &local_460;
  local_7d8 = TAttribute<FText>::TAttribute<FText><FText>(local_7e0,&local_810);
  local_7b8 = TSlateBaseNamedArgs<SColorSlider>::ToolTipText
                        ((TSlateBaseNamedArgs<SColorSlider> *)local_7d0,local_7d8);
  local_7c8 = &local_500;
  local_7fc = 0.0;
  local_7c0 = TAttribute<float>::TAttribute<float>(local_7c8,&local_7fc);
  local_7a0 = SColorSlider::FArguments::MinSliderValue(local_7b8,local_7c0);
  local_7b0 = &local_4e0;
  if (param_1 == Hue) {
    local_81c = __real_43b3ffdf;
  }
  else {
    local_81c = __real_3f800000;
  }
  local_7f8 = local_81c;
  local_7a8 = TAttribute<float>::TAttribute<float>(local_7b0,&local_7f8);
  local_788 = SColorSlider::FArguments::MaxSliderValue(local_7a0,local_7a8);
  local_798 = &local_4c0;
  if (param_1 == Hue) {
    local_818 = __real_3f800000;
  }
  else {
    local_818 = __real_3a83126f;
  }
  local_7f4 = local_818;
  local_790 = TAttribute<float>::TAttribute<float>(local_798,&local_7f4);
  local_770 = SColorSlider::FArguments::Delta(local_788,local_790);
  local_780 = &local_4a0;
  local_826 = param_1 != Hue;
  local_778 = TAttribute<bool>::TAttribute<bool>(local_780,&local_826);
  local_758 = SColorSlider::FArguments::SupportDynamicSliderMaxValue(local_770,local_778);
  local_768 = &local_480;
  local_825 = param_1 == Alpha;
  local_760 = TAttribute<bool>::TAttribute<bool>(local_768,&local_825);
  local_750 = SColorSlider::FArguments::HasAlphaBackground(local_758,local_760);
  local_708 = HandleColorPickerUseSRGB;
  local_700 = 0;
  ppcVar4 = &local_708;
  puVar5 = local_628;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_628;
  ppVar6 = &local_618;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar6 = (pmf_8ab45a4a *)&ppVar6->field_0x1;
  }
  local_748 = SColorSlider::FArguments::UseSRGB<SColorPicker_const_>(local_750,this,&local_618);
  local_6f8 = GetGradientColors;
  local_6f0 = 0;
  ppcVar4 = &local_6f8;
  puVar5 = local_608;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_608;
  ppVar7 = &local_5f8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar7 = (pmf_df3a6d9e *)&ppVar7->field_0x1;
  }
  local_740 = SColorSlider::FArguments::
              GradientColors<SColorPicker_const_,enum_EColorPickerChannels>
                        (local_748,this,&local_5f8,param_1);
  local_6e8 = HandleColorSpinBoxValue;
  local_6e0 = 0;
  ppcVar4 = &local_6e8;
  puVar5 = local_5e8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_5e8;
  ppVar8 = &local_5d8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar8 = (pmf_7c63afb9 *)&ppVar8->field_0x1;
  }
  local_738 = SColorSlider::FArguments::Value<SColorPicker_const_,enum_EColorPickerChannels>
                        (local_740,this,&local_5d8,param_1);
  local_6d8 = HandleColorPickerModeVisibility;
  local_6d0 = 0;
  ppcVar4 = &local_6d8;
  puVar5 = local_5c8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_5c8;
  ppVar9 = &local_5b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar9 = (pmf_7adfccb1 *)&ppVar9->field_0x1;
  }
  local_730 = TSlateBaseNamedArgs<SColorSlider>::
              Visibility<SColorPicker_const_,enum_EColorPickerModes>
                        ((TSlateBaseNamedArgs<SColorSlider> *)local_738,this,&local_5b8,Wheel);
  local_6c8 = HandleInteractiveChangeBegin;
  local_6c0 = 0;
  ppcVar4 = &local_6c8;
  puVar5 = local_5a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_5a8;
  ppVar10 = &local_598;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar10 = (pmf_97d28a9e *)&ppVar10->field_0x1;
  }
  local_728 = SColorSlider::FArguments::OnBeginSliderMovement<SColorPicker>
                        (local_730,this,&local_598);
  local_6b8 = HandleInteractiveChangeEnd;
  local_6b0 = 0;
  ppcVar4 = &local_6b8;
  puVar5 = local_588;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_588;
  ppVar10 = &local_578;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar10 = (pmf_97d28a9e *)&ppVar10->field_0x1;
  }
  local_720 = SColorSlider::FArguments::OnEndSliderMovement<SColorPicker>(local_728,this,&local_578)
  ;
  local_6a8 = HandleColorSpinBoxValueChanged;
  local_6a0 = 0;
  ppcVar4 = &local_6a8;
  puVar5 = local_568;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined1 *)ppcVar4;
    ppcVar4 = (code **)((longlong)ppcVar4 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_568;
  ppVar11 = &local_558;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)ppVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    ppVar11 = (pmf_e05442f1 *)&ppVar11->field_0x1;
  }
  local_718 = SColorSlider::FArguments::OnValueChanged<SColorPicker,enum_EColorPickerChannels>
                        (local_720,this,&local_558,param_1);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_824);
  this_00 = MakeTDecl<SColorSlider,RequiredArgs::T0RequiredArgs>
                      (&local_538,"SColorSlider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                       ,0x2bd,local_824);
  pTVar2 = TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_548,local_718);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorSlider>(__return_storage_ptr__,pTVar2);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_548.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_538._Widget.SharedReferenceCount);
  SColorSlider::FArguments::~FArguments(&local_430);
  FText::~FText(&local_810);
  return __return_storage_ptr__;
}

// MakeColorSpinBox @ 142fe8430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SColorPicker::MakeColorSpinBox
          (SColorPicker *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          EColorPickerChannels param_1)

{
  bool *pbVar1;
  FText *pFVar2;
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SColorSlider,1> *pTVar3;
  longlong lVar4;
  code **ppcVar5;
  undefined1 *puVar6;
  pmf_8ab45a4a *ppVar7;
  pmf_df3a6d9e *ppVar8;
  pmf_7c63afb9 *ppVar9;
  pmf_97d28a9e *ppVar10;
  pmf_36bd7097 *ppVar11;
  pmf_e05442f1 *ppVar12;
  bool local_966;
  bool local_965;
  T0RequiredArgs local_964 [4];
  float local_960;
  float local_95c;
  float local_958;
  EColorPickerChannels local_954;
  float local_950;
  float local_94c;
  FText local_948;
  FText local_938;
  float local_928;
  float local_924;
  float local_920;
  float local_91c;
  TAttribute<FText> *local_918;
  FArguments *local_910;
  TAttribute<FText> *local_908;
  TAttribute<FText> *local_900;
  FArguments *local_8f8;
  TAttribute<float> *local_8f0;
  TAttribute<float> *local_8e8;
  FArguments *local_8e0;
  TAttribute<float> *local_8d8;
  TAttribute<float> *local_8d0;
  FArguments *local_8c8;
  TAttribute<float> *local_8c0;
  TAttribute<float> *local_8b8;
  FArguments *local_8b0;
  TAttribute<float> *local_8a8;
  TAttribute<float> *local_8a0;
  FArguments *local_898;
  TAttribute<float> *local_890;
  TAttribute<float> *local_888;
  FArguments *local_880;
  TAttribute<bool> *local_878;
  TAttribute<bool> *local_870;
  FArguments *local_868;
  TAttribute<bool> *local_860;
  FArguments *local_858;
  FArguments *local_850;
  FArguments *local_848;
  FArguments *local_840;
  FArguments *local_838;
  FArguments *local_830;
  FArguments *local_828;
  FArguments *local_820;
  FArguments *local_818;
  FArguments *local_810;
  TAttribute<bool> *local_808;
  TAttribute<FText> *local_800;
  code *local_7f8;
  undefined4 local_7f0;
  code *local_7e8;
  undefined4 local_7e0;
  code *local_7d8;
  undefined4 local_7d0;
  code *local_7c8;
  undefined4 local_7c0;
  code *local_7b8;
  undefined4 local_7b0;
  code *local_7a8;
  undefined4 local_7a0;
  code *local_798;
  undefined4 local_790;
  code *local_788;
  undefined4 local_780;
  FText local_778;
  FText local_768;
  FText local_758;
  FText local_748;
  FText local_738;
  FText local_728;
  FText local_718;
  FText local_708;
  FText local_6f8;
  FText local_6e8;
  FText local_6d8;
  FText local_6c8;
  FText local_6b8;
  FText local_6a8;
  undefined1 local_698 [16];
  pmf_8ab45a4a local_688;
  undefined1 local_678 [16];
  pmf_df3a6d9e local_668;
  undefined1 local_658 [16];
  pmf_7c63afb9 local_648;
  undefined1 local_638 [16];
  pmf_97d28a9e local_628;
  undefined1 local_618 [16];
  pmf_97d28a9e local_608;
  undefined1 local_5f8 [16];
  pmf_97d28a9e local_5e8;
  undefined1 local_5d8 [16];
  pmf_36bd7097 local_5c8;
  undefined1 local_5b8 [16];
  pmf_e05442f1 local_5a8;
  TSharedRef<SColorSlider,1> local_598;
  TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs> local_588;
  TAttribute<float> local_570;
  TAttribute<float> local_550;
  TAttribute<float> local_530;
  TAttribute<float> local_510;
  TAttribute<float> local_4f0;
  TAttribute<bool> local_4d0;
  TAttribute<bool> local_4b0;
  TAttribute<FText> local_490;
  TAttribute<FText> local_460;
  FArguments local_430;
  
  if ((param_1 == Alpha) && (pbVar1 = TAttribute<bool>::Get(&this->bUseAlpha), *pbVar1 == false)) {
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,&SNullWidget::NullWidget);
  }
  else {
    if (this->bClampValue == false) {
      local_958 = __real_7f7fffff;
    }
    else {
      local_958 = __real_3f800000;
    }
    local_960 = local_958;
    FText::FText(&local_938);
    FText::FText(&local_948);
    local_954 = param_1;
    switch(param_1) {
    case Red:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_778,L"ColorPicker",L"RedSliderLabel",L"R");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_778);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_768,L"ColorPicker",L"RedSliderToolTip",L"Red");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_768);
      break;
    case Green:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_758,L"ColorPicker",L"GreenSliderLabel",L"G");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_758);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_748,L"ColorPicker",L"GreenSliderToolTip",L"Green");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_748);
      break;
    case Blue:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_738,L"ColorPicker",L"BlueSliderLabel",L"B");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_738);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_728,L"ColorPicker",L"BlueSliderToolTip",L"Blue");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_728);
      break;
    case Alpha:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_718,L"ColorPicker",L"AlphaSliderLabel",L"A");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_718);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_708,L"ColorPicker",L"AlphaSliderToolTip",L"Alpha");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_708);
      break;
    case Hue:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_6f8,L"ColorPicker",L"HueSliderLabel",L"H");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_6f8);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_6e8,L"ColorPicker",L"HueSliderToolTip",L"Hue");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_6e8);
      break;
    case Saturation:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_6d8,L"ColorPicker",L"SaturationSliderLabel",L"S");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_6d8);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_6c8,L"ColorPicker",L"SaturationSliderToolTip",L"Saturation");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_6c8);
      break;
    case Value:
      local_95c = local_960;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_6b8,L"ColorPicker",L"ValueSliderLabel",L"V");
      FText::operator=(&local_938,pFVar2);
      FText::~FText(&local_6b8);
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_6a8,L"ColorPicker",L"ValueSliderToolTip",L"Value");
      FText::operator=(&local_948,pFVar2);
      FText::~FText(&local_6a8);
      break;
    default:
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(__return_storage_ptr__,&SNullWidget::NullWidget);
      FText::~FText(&local_948);
      FText::~FText(&local_938);
      return __return_storage_ptr__;
    }
    local_910 = SColorSlider::FArguments::FArguments(&local_430);
    local_800 = &local_490;
    local_918 = TAttribute<FText>::TAttribute<FText><FText>(local_800,&local_938);
    local_8f8 = SColorSlider::FArguments::Label(local_910,local_918);
    local_908 = &local_460;
    local_900 = TAttribute<FText>::TAttribute<FText><FText>(local_908,&local_948);
    local_8e0 = TSlateBaseNamedArgs<SColorSlider>::ToolTipText
                          ((TSlateBaseNamedArgs<SColorSlider> *)local_8f8,local_900);
    local_8f0 = &local_570;
    local_928 = 0.0;
    local_8e8 = TAttribute<float>::TAttribute<float>(local_8f0,&local_928);
    local_8c8 = SColorSlider::FArguments::MinSpinBoxValue(local_8e0,local_8e8);
    local_8d8 = &local_550;
    local_8d0 = TAttribute<float>::TAttribute<float><float>(local_8d8,&local_95c);
    local_8b0 = SColorSlider::FArguments::MaxSpinBoxValue(local_8c8,local_8d0);
    local_8c0 = &local_530;
    local_924 = 0.0;
    local_8b8 = TAttribute<float>::TAttribute<float>(local_8c0,&local_924);
    local_898 = SColorSlider::FArguments::MinSliderValue(local_8b0,local_8b8);
    local_8a8 = &local_510;
    if (param_1 == Hue) {
      local_950 = __real_43b3ffdf;
    }
    else {
      local_950 = __real_3f800000;
    }
    local_920 = local_950;
    local_8a0 = TAttribute<float>::TAttribute<float>(local_8a8,&local_920);
    local_880 = SColorSlider::FArguments::MaxSliderValue(local_898,local_8a0);
    local_890 = &local_4f0;
    if (param_1 == Hue) {
      local_94c = __real_3f800000;
    }
    else {
      local_94c = __real_3a83126f;
    }
    local_91c = local_94c;
    local_888 = TAttribute<float>::TAttribute<float>(local_890,&local_91c);
    local_868 = SColorSlider::FArguments::Delta(local_880,local_888);
    local_878 = &local_4d0;
    local_966 = param_1 != Hue;
    local_870 = TAttribute<bool>::TAttribute<bool>(local_878,&local_966);
    local_858 = SColorSlider::FArguments::SupportDynamicSliderMaxValue(local_868,local_870);
    local_808 = &local_4b0;
    local_965 = param_1 == Alpha;
    local_860 = TAttribute<bool>::TAttribute<bool>(local_808,&local_965);
    local_850 = SColorSlider::FArguments::HasAlphaBackground(local_858,local_860);
    local_7f8 = HandleColorPickerUseSRGB;
    local_7f0 = 0;
    ppcVar5 = &local_7f8;
    puVar6 = local_698;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_698;
    ppVar7 = &local_688;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar7 = (pmf_8ab45a4a *)&ppVar7->field_0x1;
    }
    local_848 = SColorSlider::FArguments::UseSRGB<SColorPicker_const_>(local_850,this,&local_688);
    local_7e8 = GetGradientColors;
    local_7e0 = 0;
    ppcVar5 = &local_7e8;
    puVar6 = local_678;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_678;
    ppVar8 = &local_668;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar8 = (pmf_df3a6d9e *)&ppVar8->field_0x1;
    }
    local_840 = SColorSlider::FArguments::
                GradientColors<SColorPicker_const_,enum_EColorPickerChannels>
                          (local_848,this,&local_668,param_1);
    local_7d8 = HandleColorSpinBoxValue;
    local_7d0 = 0;
    ppcVar5 = &local_7d8;
    puVar6 = local_658;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_658;
    ppVar9 = &local_648;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar9 = (pmf_7c63afb9 *)&ppVar9->field_0x1;
    }
    local_838 = SColorSlider::FArguments::Value<SColorPicker_const_,enum_EColorPickerChannels>
                          (local_840,this,&local_648,param_1);
    local_7c8 = HandleInteractiveChangeBegin;
    local_7c0 = 0;
    ppcVar5 = &local_7c8;
    puVar6 = local_638;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_638;
    ppVar10 = &local_628;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar10 = (pmf_97d28a9e *)&ppVar10->field_0x1;
    }
    local_830 = SColorSlider::FArguments::OnBeginSliderMovement<SColorPicker>
                          (local_838,this,&local_628);
    local_7b8 = HandleInteractiveChangeEnd;
    local_7b0 = 0;
    ppcVar5 = &local_7b8;
    puVar6 = local_618;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_618;
    ppVar10 = &local_608;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar10 = (pmf_97d28a9e *)&ppVar10->field_0x1;
    }
    local_828 = SColorSlider::FArguments::OnEndSliderMovement<SColorPicker>
                          (local_830,this,&local_608);
    local_7a8 = HandleInteractiveChangeBegin;
    local_7a0 = 0;
    ppcVar5 = &local_7a8;
    puVar6 = local_5f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_5f8;
    ppVar10 = &local_5e8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar10 = (pmf_97d28a9e *)&ppVar10->field_0x1;
    }
    local_820 = SColorSlider::FArguments::OnBeginSpinBoxMovement<SColorPicker>
                          (local_828,this,&local_5e8);
    local_798 = HandleInteractiveChangeEnd;
    local_790 = 0;
    ppcVar5 = &local_798;
    puVar6 = local_5d8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_5d8;
    ppVar11 = &local_5c8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar11 = (pmf_36bd7097 *)&ppVar11->field_0x1;
    }
    local_818 = SColorSlider::FArguments::OnEndSpinBoxMovement<SColorPicker>
                          (local_820,this,&local_5c8);
    local_788 = HandleColorSpinBoxValueChanged;
    local_780 = 0;
    ppcVar5 = &local_788;
    puVar6 = local_5b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_5b8;
    ppVar12 = &local_5a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      ppVar12 = (pmf_e05442f1 *)&ppVar12->field_0x1;
    }
    local_810 = SColorSlider::FArguments::OnValueChanged<SColorPicker,enum_EColorPickerChannels>
                          (local_818,this,&local_5a8,param_1);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_964);
    this_00 = MakeTDecl<SColorSlider,RequiredArgs::T0RequiredArgs>
                        (&local_588,"SColorSlider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorPicker.cpp"
                         ,0x30c,local_964);
    pTVar3 = TSlateDecl<SColorSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_00,&local_598,local_810);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorSlider>(__return_storage_ptr__,pTVar3);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_598.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_588._Widget.SharedReferenceCount);
    SColorSlider::FArguments::~FArguments(&local_430);
    FText::~FText(&local_948);
    FText::~FText(&local_938);
  }
  return __return_storage_ptr__;
}

// MakeHexModeMenu @ 142fe9120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SColorPicker::MakeHexModeMenu(SColorPicker *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  ISlateStyle *pIVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  FUIAction *pFVar5;
  FSlateIcon *pFVar6;
  FText *pFVar7;
  ulonglong local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_3a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a0;
  ForAnyElementType FStack_398;
  ulonglong local_390;
  code *local_388;
  TReferenceControllerBase<1> *pTStack_380;
  bool local_378;
  FDelegateAllocation *local_370;
  code *local_368;
  TReferenceControllerBase<1> *pTStack_360;
  bool local_358;
  FDelegateAllocation *local_350;
  undefined1 local_348 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  ulonglong local_320;
  undefined1 local_318 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_300;
  ForAnyElementType FStack_2f8;
  ulonglong local_2f0;
  undefined1 local_2e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d0;
  ForAnyElementType FStack_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [8];
  FDelegateAllocation local_2b0;
  TSharedPtr<FExtender,1> local_298;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_288;
  FText local_270;
  undefined1 local_260 [24];
  undefined1 local_248 [24];
  undefined1 local_230 [24];
  undefined1 local_218 [32];
  FMenuBuilder local_1f8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_70;
  FSlateIcon local_58;
  
  local_res8 = 0;
  pIVar1 = FAppStyle::Get();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_298.Object = (FExtender *)0x0;
  local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_388 = (code *)0x0;
  pTStack_380 = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_1f8,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_388,false,&local_298,pIVar1,(FName)0x0,
             (FName)0x0);
  local_1f8.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_1f8.CurrentSectionExtensionHook.Number = 0;
  local_1f8._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_1f8.CurrentSectionHeadingText);
  local_1f8.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1f8.CurrentSectionVisibility.bIsSet = false;
  local_1f8.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_1f8.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_1f8.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_1f8.CurrentSectionResizeParams,0,200);
  local_1f8.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_1f8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_1f8.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_1f8.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.bIsSet = false;
  local_1f8.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_1f8.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_1f8.bSectionNeedsToBeApplied = false;
  local_1f8.bSearchable = true;
  local_1f8.bRecursivelySearchable = true;
  local_1f8.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_1f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_3a8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3a8[1] = false;
  local_390 = 0;
  local_3a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_398.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_2e8);
  local_2e8[0x10] = false;
  local_2c0 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_2b8 = (undefined1  [8])0x0;
  local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)&local_388);
  local_370 = &local_2b0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_2b0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = this;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_380,(FDestructionSentinel *)&local_388);
  }
  local_298.SharedReferenceCount.ReferenceController =
       local_298.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_298.Object = (FExtender *)OnHexModeSelected;
  local_388 = OnHexModeSelected;
  pTStack_380 = local_298.SharedReferenceCount.ReferenceController;
  local_288._16_8_ = 0;
  local_288._0_8_ = 0;
  local_288._8_8_ = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  pTVar4 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SColorPicker,enum_EColorPickerHexMode>
                     (&local_70,this,(pmf_1bcd3787 *)&local_388,(EColorPickerHexMode *)&local_res8);
  pFVar5 = FUIAction::FUIAction
                     ((FUIAction *)local_260,pTVar4,&local_288,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b8,
                      RepeatDisabled);
  pFVar6 = FSlateIcon::FSlateIcon(&local_58);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_368,L"ColorPicker",L"HexMenuToolTip_SRGB",
                      L"Represents the color being created using sRGB encoding.\nThis format matches the hex color values typically used in web development and image editing software."
                     );
  FText::FText((FText *)local_318,pFVar7);
  local_318[0x10] = true;
  local_2f0 = 0;
  local_300.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2f8.Data = (FScriptContainerElement *)0x0;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_270,L"ColorPicker",L"HexMenuText_SRGB",L"Hex sRGB");
  FText::FText((FText *)local_348,pFVar7);
  local_348[0x10] = true;
  local_320 = 0;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1f8,(TAttribute<FText> *)local_348,
             (TAttribute<FText> *)local_318,pFVar6,pFVar5,local_res18,RadioButton,local_res10,
             (TAttribute<FText> *)local_2e8,(TAttribute<EVisibility> *)local_3a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_388);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_380,(FDestructionSentinel *)&local_388);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  if ((ITextData *)local_348._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_348._0_8_ + 0x10))();
  }
  if (local_270.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_300,(FWriteAccessScope *)&local_388);
  if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
    local_2f0 = local_2f0 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_380,(FDestructionSentinel *)&local_388);
  }
  if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_300.AccessDetector);
  if ((ITextData *)local_318._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_318._0_8_ + 0x10))();
  }
  if ((ITextData *)local_368 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_368 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
  if ((void *)local_218._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_218._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_218);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
  if ((void *)local_230._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_230._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_230);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
  if ((void *)local_248._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_248._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_248);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
  if ((void *)local_260._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_260._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_260);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)&local_388);
  if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_380,(FDestructionSentinel *)&local_388);
  }
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
  if ((ITextData *)local_2e8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2e8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3a0,(FWriteAccessScope *)&local_388);
  if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_398.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
    local_390 = local_390 & 0xffffffff00000000;
  }
  if (local_378 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_380,(FDestructionSentinel *)&local_388);
  }
  if (FStack_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_398.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a0.AccessDetector);
  local_3a8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3a8[1] = false;
  local_390 = 0;
  local_3a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_398.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_348);
  local_348[0x10] = false;
  local_320 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_2b8 = (undefined1  [8])0x0;
  local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)&local_368);
  local_350 = &local_2b0;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_2b0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorPicker::MakeHexModeMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = this;
  }
  if (local_358 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_360,(FDestructionSentinel *)&local_368);
  }
  local_298.Object = (FExtender *)OnHexModeSelected;
  local_298.SharedReferenceCount.ReferenceController =
       local_298.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_368 = OnHexModeSelected;
  pTStack_360 = local_298.SharedReferenceCount.ReferenceController;
  local_288._16_8_ = 0;
  local_288._0_8_ = 0;
  local_288._8_8_ = 0;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  pTVar4 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SColorPicker,enum_EColorPickerHexMode>
                     (&local_70,this,(pmf_1bcd3787 *)&local_368,(EColorPickerHexMode *)&local_res8);
  pFVar5 = FUIAction::FUIAction
                     ((FUIAction *)local_260,pTVar4,&local_288,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b8,
                      RepeatDisabled);
  pFVar6 = FSlateIcon::FSlateIcon(&local_58);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_388,L"ColorPicker",L"HexMenuToolTip_Linear",
                      L"Represents the color being created using linear color values.\nNote that linear hex values have less precision for darker colors."
                     );
  FText::FText((FText *)local_318,pFVar7);
  local_318[0x10] = true;
  local_2f0 = 0;
  local_300.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2f8.Data = (FScriptContainerElement *)0x0;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_270,L"ColorPicker",L"HexMenuText_Linear",L"Hex Linear");
  FText::FText((FText *)local_2e8,pFVar7);
  local_2e8[0x10] = true;
  local_2c0 = 0;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1f8,(TAttribute<FText> *)local_2e8,
             (TAttribute<FText> *)local_318,pFVar6,pFVar5,local_res18,RadioButton,local_res10,
             (TAttribute<FText> *)local_348,(TAttribute<EVisibility> *)local_3a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)&local_368);
  if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
  }
  if (local_358 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_360,(FDestructionSentinel *)&local_368);
  }
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
  if ((ITextData *)local_2e8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2e8._0_8_ + 0x10))();
  }
  if (local_270.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_300,(FWriteAccessScope *)&local_368);
  if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
    local_2f0 = local_2f0 & 0xffffffff00000000;
  }
  if (local_358 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_360,(FDestructionSentinel *)&local_368);
  }
  if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_300.AccessDetector);
  if ((ITextData *)local_318._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_318._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_388 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
  if ((void *)local_218._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_218._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_218);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
  if ((void *)local_230._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_230._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_230);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
  if ((void *)local_248._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_248._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_248);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
  if ((void *)local_260._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_260._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_260);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_368);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_358 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_360,(FDestructionSentinel *)&local_368);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  if ((ITextData *)local_348._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_348._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3a0,(FWriteAccessScope *)&local_368);
  if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_398.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
    local_390 = local_390 & 0xffffffff00000000;
  }
  if (local_358 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_360,(FDestructionSentinel *)&local_368);
  }
  if (FStack_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_398.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a0.AccessDetector);
  FMenuBuilder::MakeWidget
            (&local_1f8,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1f8);
  return __return_storage_ptr__;
}

// OnHexModeSelected @ 142ff1650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::OnHexModeSelected(SColorPicker *this,EColorPickerHexMode param_1)

{
  bool bVar1;
  
  this->HexMode = param_1;
  bVar1 = FPaths::FileExists(&GEditorPerProjectIni);
  if (bVar1) {
    FConfigCacheIni::SetBool
              (GConfig,L"ColorPickerUI",L"bHexSRGB",this->HexMode == SRGB,&GEditorPerProjectIni);
  }
  return;
}

// SetNewColorPreviewImageVisibility @ 14300d540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::SetNewColorPreviewImageVisibility(SColorPicker *this,EVisibility param_1)

{
  (this->NewColorPreviewImageVisibility).Value.Value = (uchar)param_1.Value.Value;
  return;
}

// SetNewTargetColorHSV @ 14300d550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
SColorPicker::SetNewTargetColorHSV(SColorPicker *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  bool bVar2;
  FLinearColor_u_0 *pFVar3;
  undefined1 auVar4 [16];
  FLinearColor_u_0 FVar5;
  FLinearColor local_18;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  pFVar3 = &FLinearColor::HSVToLinearRGB(param_1,&local_18)->field0_0x0;
  auVar4 = minps((undefined1  [16])*pFVar3,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar5 = (FLinearColor_u_0)maxps(auVar4,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar5;
  bVar2 = ApplyNewTargetColor(this,param_2);
  return bVar2;
}

// SetNewTargetColorRGB @ 14300d5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
SColorPicker::SetNewTargetColorRGB(SColorPicker *this,FLinearColor *param_1,bool param_2)

{
  undefined8 uVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  undefined1 auVar4 [16];
  FLinearColor_u_0 FVar5;
  FLinearColor local_18;
  
  auVar4 = minps((undefined1  [16])param_1->field0_0x0,___xmm_7f7fffff7f7fffff7f7fffff7f7fffff);
  FVar5 = (FLinearColor_u_0)maxps(auVar4,ZEXT816(0));
  (this->CurrentColorRGB).field0_0x0 = FVar5;
  pFVar3 = FLinearColor::LinearRGBToHSV(param_1,&local_18);
  uVar1 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentColorHSV).field0_0x0 = *(undefined8 *)&pFVar3->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentColorHSV).field0_0x0 + 8) = uVar1;
  bVar2 = ApplyNewTargetColor(this,param_2);
  return bVar2;
}

// SetOldColorPreviewImageVisibility @ 14300d610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SColorPicker::SetOldColorPreviewImageVisibility(SColorPicker *this,EVisibility param_1)

{
  (this->OldColorPreviewImageVisibility).Value.Value = (uchar)param_1.Value.Value;
  return;
}

// ShowSmallTrash @ 14300e4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::ShowSmallTrash(SColorPicker *this)

{
  return;
}

// ToggleThemePanelVisibility @ 143013970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPicker::ToggleThemePanelVisibility(SColorPicker *this,FReply *__return_storage_ptr__)

{
  bool bVar1;
  
  this->bIsThemePanelVisible = this->bIsThemePanelVisible == false;
  bVar1 = FPaths::FileExists(&GEditorPerProjectIni);
  if (bVar1) {
    FConfigCacheIni::SetBool
              (GConfig,L"ColorPickerUI",L"bIsThemePanelVisible",this->bIsThemePanelVisible,
               &GEditorPerProjectIni);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// UpdateColorPick @ 143015610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::UpdateColorPick(SColorPicker *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  uVar3 = *(undefined8 *)&(this->CurrentColorRGB).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(this->CurrentColorRGB).field0_0x0 + 8);
  this->bPerfIsTooSlowToUpdate = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnColorCommitted,
             &local_30);
  if ((*(int *)&(this->OnColorCommitted).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnColorCommitted).field_0x8, plVar1 != (longlong *)0x0)) {
    local_58 = uVar3;
    uStack_50 = uVar4;
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::ColorPickerChanged,(FWriteAccessScope *)&local_48);
  bVar5 = false;
  FCoreDelegates::ColorPickerChanged._28_4_ = FCoreDelegates::ColorPickerChanged._28_4_ + 1;
  uVar9 = FCoreDelegates::ColorPickerChanged._16_4_ - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (int)FCoreDelegates::ColorPickerChanged._16_4_) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar10 + 8 + FCoreDelegates::ColorPickerChanged._8_8_) == 0) ||
          (*(longlong **)(lVar10 + FCoreDelegates::ColorPickerChanged._8_8_) == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar10 + FCoreDelegates::ColorPickerChanged._8_8_) +
                              0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  FCoreDelegates::ColorPickerChanged._28_4_ = FCoreDelegates::ColorPickerChanged._28_4_ + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ColorPickerChanged,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// UpdateColorPickMouseUp @ 1430157b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SColorPicker::UpdateColorPickMouseUp(SColorPicker *this)

{
  if ((this->bOnlyRefreshOnOk != false) && (this->bColorPickerIsInlineVersion == false)) {
    return;
  }
  UpdateColorPick(this);
  return;
}

