// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 81

// TAttribute<TOptional<int>_><int> @ 142f19760

TAttribute<TOptional<int>_> * __thiscall
TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
          (TAttribute<TOptional<int>_> *this,int *param_1)

{
  (this->Value).TypedValue = *param_1;
  (this->Value).bIsSet = true;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FMargin><int> @ 142f19790

TAttribute<FMargin> * __thiscall
TAttribute<FMargin>::TAttribute<FMargin><int>(TAttribute<FMargin> *this,int *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *param_1;
  this->bIsSet = true;
  fVar2 = (float)iVar1;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  (this->Value).Left = fVar2;
  (this->Value).Top = fVar2;
  (this->Value).Right = fVar2;
  (this->Value).Bottom = fVar2;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  return this;
}

// TAttribute<FOptionalSize><int> @ 142f197c0

TAttribute<FOptionalSize> * __thiscall
TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>
          (TAttribute<FOptionalSize> *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  (this->Value).Size = (float)iVar1;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  return this;
}

// TAttribute<FSlateBrush_const_*><FSlateBrush_*> @ 142f19820

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_*>
          (TAttribute<FSlateBrush_const_*> *this,FSlateBrush **param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateBrush_const_*><FSlateRoundedBoxBrush_*> @ 142f19850

TAttribute<FSlateBrush_const_*> * __thiscall
TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateRoundedBoxBrush_*>
          (TAttribute<FSlateBrush_const_*> *this,FSlateRoundedBoxBrush **param_1)

{
  this->Value = (FSlateBrush *)*param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<UE::Math::TVector2<double>_><UE::Math::TVector2<double>_> @ 142f19a00

TAttribute<UE::Math::TVector2<double>_> * __thiscall
TAttribute<UE::Math::TVector2<double>_>::
TAttribute<UE::Math::TVector2<double>_><UE::Math::TVector2<double>_>
          (TAttribute<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->bIsSet = true;
  (this->Value).field0_0x0._s_0.X = dVar1;
  (this->Value).field0_0x0._s_0.Y = dVar2;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FLinearColor><FLinearColor> @ 142f19a30

TAttribute<FLinearColor> * __thiscall
TAttribute<FLinearColor>::TAttribute<FLinearColor><FLinearColor>
          (TAttribute<FLinearColor> *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  this->bIsSet = true;
  *(undefined8 *)&(this->Value).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = uVar2;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateFontInfo><FSlateFontInfo> @ 142f19a90

TAttribute<FSlateFontInfo> * __thiscall
TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo><FSlateFontInfo>
          (TAttribute<FSlateFontInfo> *this,FSlateFontInfo *param_1)

{
  FSlateFontInfo::FSlateFontInfo(&this->Value,param_1);
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_><TSharedPtr<INumericTypeInterface<int>,1>_> @ 142f1a000

TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_>::
TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_><TSharedPtr<INumericTypeInterface<int>,1>_>
          (TAttribute<TSharedPtr<INumericTypeInterface<int>,1>_> *this,
          TSharedPtr<INumericTypeInterface<int>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Value).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_><TSharedPtr<INumericTypeInterface<double>,1>_> @ 142f1a040

TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_>::
TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_><TSharedPtr<INumericTypeInterface<double>,1>_>
          (TAttribute<TSharedPtr<INumericTypeInterface<double>,1>_> *this,
          TSharedPtr<INumericTypeInterface<double>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Value).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// Bind<SNumericEntryBox<int>_> @ 142f1c0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SNumericEntryBox<int>_>
          (TAttribute<FText> *this,SNumericEntryBox<int> *param_1,pmf_91ba5a66 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_H___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SNumericEntryBox<float>_> @ 142f1c210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SNumericEntryBox<float>_>
          (TAttribute<FText> *this,SNumericEntryBox<float> *param_1,pmf_abce79b3 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_M___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SNumericEntryBox<double>_> @ 142f1c340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SNumericEntryBox<double>_>
          (TAttribute<FText> *this,SNumericEntryBox<double> *param_1,pmf_0d70f6fe *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_N___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SColorPicker> @ 142f1c470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SColorPicker>
          (TAttribute<FText> *this,SColorPicker *param_1,pmf_3ed7c398 *param_2)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker_const_,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  local_48 = *(undefined8 *)param_2;
  uStack_40 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = pSVar1;
    local_58.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_48;
    puVar5[6] = uStack_40;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(&local_58);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SHorizontalListItemEditor> @ 142f1c5b0

void __thiscall
TAttribute<FText>::Bind<SHorizontalListItemEditor>
          (TAttribute<FText> *this,SHorizontalListItemEditor *param_1,pmf_5e2e4009 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSHorizontalListItemEditor___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Bind<SItemEditor> @ 142f1c710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SItemEditor>
          (TAttribute<FText> *this,SItemEditor *param_1,pmf_853f840b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSItemEditor___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Bind<STableViewTesting> @ 142f1c870

void __thiscall
TAttribute<enum_ESelectionMode::Type>::Bind<STableViewTesting>
          (void *this,STableViewTesting *param_1,pmf_41d5e1f4 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  *(undefined1 *)((longlong)this + 4) = 1;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (FWriteAccessScope *)&local_28);
  local_10 = (FDelegateAllocation *)((longlong)this + 0x10);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_ESelectionMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTableViewTesting___00__A6A_AW4Type_ESelectionMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<STileItemEditor> @ 142f1c9a0

void __thiscall
TAttribute<FText>::Bind<STileItemEditor>
          (TAttribute<FText> *this,STileItemEditor *param_1,pmf_d16bb93d *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->bIsSet = true;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar6 = (TStatId *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->Getter).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar7 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar7 = pTVar6;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTileItemEditor___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar7;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindLambda<TFunction<FText___cdecl(void)>_&> @ 142f1cb00

void __thiscall
TAttribute<FText>::BindLambda<TFunction<FText___cdecl(void)>_&>
          (TAttribute<FText> *this,TFunction<FText___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// TAttribute<TOptional<int>_> @ 142f2b950

TAttribute<TOptional<int>_> * __thiscall
TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_>
          (TAttribute<TOptional<int>_> *this,TAttribute<TOptional<int>_> *param_1)

{
  bool bVar1;
  
  (this->Value).bIsSet = false;
  bVar1 = (param_1->Value).bIsSet;
  (this->Value).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Value).TypedValue = (param_1->Value).TypedValue;
  }
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<TOptional<float>_> @ 142f2b9a0

TAttribute<TOptional<float>_> * __thiscall
TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_>
          (TAttribute<TOptional<float>_> *this,TAttribute<TOptional<float>_> *param_1)

{
  bool bVar1;
  
  (this->Value).bIsSet = false;
  bVar1 = (param_1->Value).bIsSet;
  (this->Value).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Value).TypedValue = (param_1->Value).TypedValue;
  }
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<TOptional<double>_> @ 142f2b9f0

TAttribute<TOptional<double>_> * __thiscall
TAttribute<TOptional<double>_>::TAttribute<TOptional<double>_>
          (TAttribute<TOptional<double>_> *this,TAttribute<TOptional<double>_> *param_1)

{
  bool bVar1;
  
  (this->Value).bIsSet = false;
  bVar1 = (param_1->Value).bIsSet;
  (this->Value).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Value).TypedValue = (param_1->Value).TypedValue;
  }
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// TAttribute<UE::Math::TVector4<double>_> @ 142f2ba40

TAttribute<UE::Math::TVector4<double>_> * __thiscall
TAttribute<UE::Math::TVector4<double>_>::TAttribute<UE::Math::TVector4<double>_>
          (TAttribute<UE::Math::TVector4<double>_> *this,TVector4<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.W;
  (this->Value).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->Value).field0_0x0._s_0.W = dVar1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateIcon> @ 142f2ba70

TAttribute<FSlateIcon> * __thiscall
TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(TAttribute<FSlateIcon> *this)

{
  FSlateIcon::FSlateIcon(&this->Value);
  this->bIsSet = false;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_EMenuPlacement> @ 142f2baa0

TAttribute<EMenuPlacement> * __thiscall
TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(void *this,EMenuPlacement *param_1)

{
  *(EMenuPlacement *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<enum_EOrientation> @ 142f2bac0

TAttribute<EOrientation> * __thiscall
TAttribute<enum_EOrientation>::TAttribute<enum_EOrientation>(void *this,EOrientation *param_1)

{
  *(EOrientation *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// ~TAttribute<double> @ 142f38a70

void __thiscall TAttribute<double>::~TAttribute<double>(TAttribute<double> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<TOptional<int>_> @ 142f38ab0

void __thiscall
TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(TAttribute<TOptional<int>_> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  return;
}

// ~TAttribute<TOptional<double>_> @ 142f38ae0

void __thiscall
TAttribute<TOptional<double>_>::~TAttribute<TOptional<double>_>
          (TAttribute<TOptional<double>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<TOptional<SSearchBox::FSearchResultData>_> @ 142f38b20

void __thiscall
TAttribute<TOptional<SSearchBox::FSearchResultData>_>::
~TAttribute<TOptional<SSearchBox::FSearchResultData>_>
          (TAttribute<TOptional<SSearchBox::FSearchResultData>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<TOptional<FTextFormat>_> @ 142f38b60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
          (TAttribute<TOptional<FTextFormat>_> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  TOptional<FTextFormat>::~TOptional<FTextFormat>(&this->Value);
  return;
}

// ~TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 142f38ba0

void __thiscall
TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&this->Value);
  return;
}

// ~TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> @ 142f38be0

void __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_>::
~TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_>
          (TAttribute<TSharedPtr<INumericTypeInterface<float>,1>_> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->Value).SharedReferenceCount);
  return;
}

// ~TAttribute<TSharedPtr<FColorTheme,1>_> @ 142f38c20

void __thiscall
TAttribute<TSharedPtr<FColorTheme,1>_>::~TAttribute<TSharedPtr<FColorTheme,1>_>
          (TAttribute<TSharedPtr<FColorTheme,1>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  return;
}

// ~TAttribute<enum_ECheckBoxState> @ 142f38c70

void __thiscall TAttribute<enum_ECheckBoxState>::~TAttribute<enum_ECheckBoxState>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EHorizontalAlignment> @ 142f38cb0

void __thiscall
TAttribute<enum_EHorizontalAlignment>::~TAttribute<enum_EHorizontalAlignment>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EKeyboardType> @ 142f38cf0

void __thiscall TAttribute<enum_EKeyboardType>::~TAttribute<enum_EKeyboardType>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EListItemAlignment> @ 142f38d30

void __thiscall
TAttribute<enum_EListItemAlignment>::~TAttribute<enum_EListItemAlignment>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EMenuPlacement> @ 142f38d60

void __thiscall TAttribute<enum_EMenuPlacement>::~TAttribute<enum_EMenuPlacement>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EOrientation> @ 142f38da0

void __thiscall TAttribute<enum_EOrientation>::~TAttribute<enum_EOrientation>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_ETextWrappingPolicy> @ 142f38de0

void __thiscall
TAttribute<enum_ETextWrappingPolicy>::~TAttribute<enum_ETextWrappingPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EVirtualKeyboardDismissAction> @ 142f38e20

void __thiscall
TAttribute<enum_EVirtualKeyboardDismissAction>::~TAttribute<enum_EVirtualKeyboardDismissAction>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_EVirtualKeyboardTrigger> @ 142f38e60

void __thiscall
TAttribute<enum_EVirtualKeyboardTrigger>::~TAttribute<enum_EVirtualKeyboardTrigger>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TAttribute<enum_ETextJustify::Type> @ 142f38ea0

void __thiscall
TAttribute<enum_ETextJustify::Type>::~TAttribute<enum_ETextJustify::Type>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// operator= @ 142f405f0

TAttribute<double> * __thiscall
TAttribute<double>::operator=(TAttribute<double> *this,TAttribute<double> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 142f40630

TAttribute<TOptional<int>_> * __thiscall
TAttribute<TOptional<int>_>::operator=
          (TAttribute<TOptional<int>_> *this,TAttribute<TOptional<int>_> *param_1)

{
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 142f40680

TAttribute<TOptional<float>_> * __thiscall
TAttribute<TOptional<float>_>::operator=
          (TAttribute<TOptional<float>_> *this,TAttribute<TOptional<float>_> *param_1)

{
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 142f406d0

TAttribute<TOptional<double>_> * __thiscall
TAttribute<TOptional<double>_>::operator=
          (TAttribute<TOptional<double>_> *this,TAttribute<TOptional<double>_> *param_1)

{
  if (param_1 != this) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->Value).bIsSet != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (param_1->Value).TypedValue;
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// operator= @ 142f40720

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TAttribute<TOptional<FTextFormat>_> * __thiscall
TAttribute<TOptional<FTextFormat>_>::operator=
          (TAttribute<TOptional<FTextFormat>_> *this,TAttribute<TOptional<FTextFormat>_> *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  TDelegateBase<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  if (param_1 != this) {
    bVar1 = (this->Value).bIsSet;
    if ((param_1->Value).bIsSet == false) {
      if (bVar1 != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->Value).TypedValue.TextFormatData.SharedReferenceCount.ReferenceController)
        ;
        (this->Value).bIsSet = false;
      }
    }
    else {
      if (bVar1 != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->Value).TypedValue.TextFormatData.SharedReferenceCount.ReferenceController)
        ;
      }
      (this->Value).TypedValue.TextFormatData.Object =
           (param_1->Value).TypedValue.TextFormatData.Object;
      pTVar2 = (param_1->Value).TypedValue.TextFormatData.SharedReferenceCount.ReferenceController;
      (this->Value).TypedValue.TextFormatData.SharedReferenceCount.ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      (this->Value).bIsSet = true;
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_20)
    ;
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
    TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy> *)
               &local_38);
  }
  return this;
}

// Get @ 142fcf850

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FTextFormat> * __thiscall
TAttribute<TOptional<FTextFormat>_>::Get(TAttribute<TOptional<FTextFormat>_> *this)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FTextFormatData *local_38;
  FSharedReferencer<1> local_30;
  bool local_28;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
  puVar1 = &(this->Getter).field_0x8;
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)puVar1, plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)puVar1;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if ((TAttribute<TOptional<FTextFormat>_> *)&local_38 != this) {
      bVar2 = (this->Value).bIsSet;
      if (local_28 == false) {
        if (bVar2 == false) {
          return &this->Value;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->Value).TypedValue.TextFormatData.SharedReferenceCount.ReferenceController)
        ;
        (this->Value).bIsSet = false;
      }
      else {
        if (bVar2 != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((this->Value).TypedValue.TextFormatData.SharedReferenceCount.
                     ReferenceController);
        }
        (this->Value).TypedValue.TextFormatData.Object = local_38;
        (this->Value).TypedValue.TextFormatData.SharedReferenceCount.ReferenceController =
             local_30.ReferenceController;
        if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_30.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (this->Value).bIsSet = true;
      }
    }
    if (local_28 != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
    }
  }
  return &this->Value;
}

// Get @ 142fcf980

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::Get
          (TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 != 0) &&
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    plVar3 = (longlong *)0x0;
    if (*(int *)&(this->Getter).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if (this != (TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_38) {
      pFVar1 = (this->Value).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)local_38._0_8_;
      (this->Value).ArrayNum = local_38._8_4_;
      (this->Value).ArrayMax = local_38._12_4_;
      local_38._8_4_ = 0;
      local_38._12_4_ = 0;
      local_38._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    return &this->Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// Get @ 142fcfa80

TSharedPtr<SWidget,1> * __thiscall
TAttribute<TSharedPtr<SWidget,1>_>::Get(TAttribute<TSharedPtr<SWidget,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<SWidget,1>_> *)local_38) {
        (this->Value).Object = (SWidget *)local_38._0_8_;
        local_38._0_8_ = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// IsBound @ 142fe2a50

bool __thiscall
TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::IsBound
          (TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// TAttribute<TSharedPtr<IToolTip,1>_><TSharedPtr<SToolTip,1>_> @ 143017920

TAttribute<TSharedPtr<IToolTip,1>_> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_><TSharedPtr<SToolTip,1>_>
          (TAttribute<TSharedPtr<IToolTip,1>_> *this,TSharedPtr<SToolTip,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IToolTip *pIVar2;
  
  pIVar2 = (IToolTip *)&param_1->Object->_padding_;
  if (param_1->Object == (SToolTip *)0x0) {
    pIVar2 = (IToolTip *)0x0;
  }
  (this->Value).Object = pIVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_EColorBlockAlphaDisplayMode> @ 143019ab0

TAttribute<EColorBlockAlphaDisplayMode> * __thiscall
TAttribute<enum_EColorBlockAlphaDisplayMode>::TAttribute<enum_EColorBlockAlphaDisplayMode>
          (void *this,EColorBlockAlphaDisplayMode *param_1)

{
  *(EColorBlockAlphaDisplayMode *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// Steal @ 14303ec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_> *
__thiscall
TAttribute<enum_EOrientation>::Steal
          (void *this,
          TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  ulonglong uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  TDelegateBase<FNotThreadSafeDelegateMode> local_68;
  byte local_50;
  TDelegateBase<FNotThreadSafeDelegateMode> local_48;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  *(undefined1 *)((longlong)this + 4) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_80);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_68,(TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
      local_50 = 1;
      pTVar9 = &local_68;
      bVar3 = true;
      bVar4 = false;
      goto LAB_14303ecf4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar3 = false;
  bVar4 = true;
  local_48._0_4_ = *(undefined4 *)this;
  pTVar9 = &local_48;
  local_30 = 0;
LAB_14303ecf4:
  bVar1 = *(byte *)(pTVar9 + 1);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar2)();
      return pTVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pTVar9);
  if (bVar4) {
    uVar8 = (ulonglong)local_30;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<enum_EOrientation>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_48);
    }
  }
  if (bVar3) {
    uVar8 = (ulonglong)local_50;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::
        Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  return __return_storage_ptr__;
}

// TAttribute<short><int> @ 14303ff30

TAttribute<short> * __thiscall
TAttribute<short>::TAttribute<short><int>(TAttribute<short> *this,int *param_1)

{
  this->Value = (short)*param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TOptional<float>_><int> @ 14303ff60

TAttribute<TOptional<float>_> * __thiscall
TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><int>
          (TAttribute<TOptional<float>_> *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (this->Value).bIsSet = true;
  this->bIsSet = true;
  (this->Value).TypedValue = (float)iVar1;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FLinearColor><FColor> @ 143040030

TAttribute<FLinearColor> * __thiscall
TAttribute<FLinearColor>::TAttribute<FLinearColor><FColor>
          (TAttribute<FLinearColor> *this,FColor *param_1)

{
  byte bVar1;
  
  (this->Value).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[(param_1->field0_0x0)._s_0.R];
  (this->Value).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[(param_1->field0_0x0)._s_0.G];
  (this->Value).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[(param_1->field0_0x0)._s_0.B];
  bVar1 = (param_1->field0_0x0)._s_0.A;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  (this->Value).field0_0x0._s_0.A = (float)bVar1 * __real_3b808081;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  return this;
}

// TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_><TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> @ 143040360

TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> * __thiscall
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_>::
TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_><TSharedPtr<INumericTypeInterface<unsigned_short>,1>_>
          (TAttribute<TSharedPtr<INumericTypeInterface<unsigned_short>,1>_> *this,
          TSharedPtr<INumericTypeInterface<unsigned_short>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Value).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TSharedPtr<SWindow,1>_><TSharedRef<SWindow,1>_> @ 1430403a0

/* WARNING: Enum "Type": Some values do not have unique names */

TAttribute<TSharedPtr<SWindow,1>_> * __thiscall
TAttribute<TSharedPtr<SWindow,1>_>::TAttribute<TSharedPtr<SWindow,1>_><TSharedRef<SWindow,1>_>
          (TAttribute<TSharedPtr<SWindow,1>_> *this,TSharedRef<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Value).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Value).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<TOptional<TTransform2<float>_>_><TTransform2<float>_> @ 1430403e0

TAttribute<TOptional<TTransform2<float>_>_> * __thiscall
TAttribute<TOptional<TTransform2<float>_>_>::
TAttribute<TOptional<TTransform2<float>_>_><TTransform2<float>_>
          (TAttribute<TOptional<TTransform2<float>_>_> *this,TTransform2<float> *param_1)

{
  float afVar1 [2];
  
  afVar1 = (param_1->M).M[1];
  (this->Value).TypedValue.M.M[0] = (param_1->M).M[0];
  (this->Value).TypedValue.M.M[1] = afVar1;
  (this->Value).TypedValue.Trans.field0_0x0 = (param_1->Trans).field0_0x0;
  (this->Value).bIsSet = true;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_ECheckBoxState><SNotificationListTest> @ 143040ef0

/* WARNING: Enum "Type": Some values do not have unique names */

TAttribute<ECheckBoxState> * __thiscall
TAttribute<enum_ECheckBoxState>::TAttribute<enum_ECheckBoxState><SNotificationListTest>
          (void *this,SNotificationListTest *param_1,pmf_74f1e6c5 *param_2)

{
  FDelegateAllocation *pFVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  *(undefined2 *)this = 0x100;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  pFVar1 = (FDelegateAllocation *)((longlong)this + 0x10);
  pFVar1->DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8))->AccessDetector)
  .State = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (FWriteAccessScope *)&local_38);
  local_20 = pFVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,pFVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationListTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pSVar2;
    puVar8[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// Bind<SNumericEntryBox<unsigned_short>_> @ 1430425e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SNumericEntryBox<unsigned_short>_>
          (TAttribute<FText> *this,SNumericEntryBox<unsigned_short> *param_1,pmf_03f41e3e *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_G___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SDPIScalingTest> @ 143042710

void __thiscall
TAttribute<float>::Bind<SDPIScalingTest>
          (TAttribute<float> *this,SDPIScalingTest *param_1,pmf_9906c656 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDPIScalingTest___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SFxTest> @ 143042840

void __thiscall
TAttribute<float>::Bind<SFxTest>(TAttribute<float> *this,SFxTest *param_1,pmf_2c29edee *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSFxTest___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SFxTest> @ 143042970

void __thiscall
TAttribute<UE::Math::TVector2<double>_>::Bind<SFxTest>
          (TAttribute<UE::Math::TVector2<double>_> *this,SFxTest *param_1,pmf_8a5f2fc3 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSFxTest___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SRichTextEditTest> @ 143042aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<FText>::Bind<SRichTextEditTest>
          (TAttribute<FText> *this,SRichTextEditTest *param_1,pmf_f4cef8e6 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextEditTest___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SRichTextTest> @ 143042bd0

void __thiscall
TAttribute<float>::Bind<SRichTextTest>
          (TAttribute<float> *this,SRichTextTest *param_1,pmf_b8350b97 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextTest___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Bind<SSplineTest> @ 143042d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<float>::Bind<SSplineTest>
          (TAttribute<float> *this,SSplineTest *param_1,pmf_8517c7ef *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->bIsSet = true;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->Getter).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_38);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSplineTest___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Set<FLinearColor> @ 143052ba0

void __thiscall
TAttribute<FLinearColor>::Set<FLinearColor>(TAttribute<FLinearColor> *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  this->bIsSet = true;
  *(undefined8 *)&(this->Value).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = uVar2;
  return;
}

// TAttribute<unsigned_short> @ 143054f90

TAttribute<unsigned_short> * __thiscall
TAttribute<unsigned_short>::TAttribute<unsigned_short>
          (TAttribute<unsigned_short> *this,TAttribute<unsigned_short> *param_1)

{
  TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  FDestructionSentinel local_30;
  
  this_00 = &this->Getter;
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  if (&param_1->Getter != this_00) {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_48,
               (FWriteAccessScope *)&local_30);
    uVar5 = local_48._16_4_;
    uVar4 = local_48._8_8_;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&(this->Getter).field_0x10 != 0) &&
       (puVar2 = *(undefined8 **)&(this->Getter).field_0x8, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Getter).field_0x8,0,0,0x10);
      *(undefined4 *)&(this->Getter).field_0x10 = 0;
    }
    pvVar3 = *(void **)&(this->Getter).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(undefined8 *)&(this->Getter).field_0x8 = uVar4;
    *(undefined4 *)&(this->Getter).field_0x10 = uVar5;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>(&local_48);
  }
  return this;
}

// TAttribute<TOptional<unsigned_short>_> @ 1430550e0

TAttribute<TOptional<unsigned_short>_> * __thiscall
TAttribute<TOptional<unsigned_short>_>::TAttribute<TOptional<unsigned_short>_>
          (TAttribute<TOptional<unsigned_short>_> *this,
          TAttribute<TOptional<unsigned_short>_> *param_1)

{
  bool bVar1;
  
  (this->Value).bIsSet = false;
  bVar1 = (param_1->Value).bIsSet;
  (this->Value).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Value).TypedValue = (param_1->Value).TypedValue;
  }
  this->bIsSet = param_1->bIsSet;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Getter,&param_1->Getter);
  return this;
}

// ~TAttribute<short> @ 14305e4e0

void __thiscall TAttribute<short>::~TAttribute<short>(TAttribute<short> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<unsigned_short> @ 14305e520

void __thiscall
TAttribute<unsigned_short>::~TAttribute<unsigned_short>(TAttribute<unsigned_short> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  return;
}

// ~TAttribute<TOptional<unsigned_short>_> @ 14305e550

void __thiscall
TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>
          (TAttribute<TOptional<unsigned_short>_> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  return;
}

// ~TAttribute<TSharedPtr<SWidget,1>_> @ 14305e580

void __thiscall
TAttribute<TSharedPtr<SWidget,1>_>::~TAttribute<TSharedPtr<SWidget,1>_>
          (TAttribute<TSharedPtr<SWidget,1>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  return;
}

// ~TAttribute<TSharedPtr<SWindow,1>_> @ 14305e5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAttribute<TSharedPtr<SWindow,1>_>::~TAttribute<TSharedPtr<SWindow,1>_>
          (TAttribute<TSharedPtr<SWindow,1>_> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  return;
}

// ~TAttribute<enum_ETextTransformPolicy> @ 14305e620

void __thiscall
TAttribute<enum_ETextTransformPolicy>::~TAttribute<enum_ETextTransformPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// operator= @ 143062670

TAttribute<float> * __thiscall
TAttribute<float>::operator=(TAttribute<float> *this,TAttribute<float> *param_1)

{
  this->Value = param_1->Value;
  this->bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// operator= @ 1430626a0

TAttribute<ECheckBoxState> * __thiscall
TAttribute<enum_ECheckBoxState>::operator=(void *this,TAttribute<ECheckBoxState> *param_1)

{
  *(ECheckBoxState *)this = param_1->Value;
  *(bool *)((longlong)this + 1) = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

