// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 14

// TAttribute<TOptional<float>_><float> @ 142de2180

TAttribute<TOptional<float>_> * __thiscall
TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
          (TAttribute<TOptional<float>_> *this,float *param_1)

{
  (this->Value).TypedValue = *param_1;
  (this->Value).bIsSet = true;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateIcon><FSlateIcon> @ 142de21b0

TAttribute<FSlateIcon> * __thiscall
TAttribute<FSlateIcon>::TAttribute<FSlateIcon><FSlateIcon>
          (TAttribute<FSlateIcon> *this,FSlateIcon *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = param_1->StyleName;
  (this->Value).StyleSetName = param_1->StyleSetName;
  (this->Value).StyleName = FVar1;
  FVar1 = param_1->SmallStyleName;
  FVar2 = param_1->StatusOverlayStyleName;
  this->bIsSet = true;
  (this->Value).SmallStyleName = FVar1;
  (this->Value).StatusOverlayStyleName = FVar2;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FText><SReflectorToolTipWidget> @ 142de2970

TAttribute<FText> * __thiscall
TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
          (TAttribute<FText> *this,SReflectorToolTipWidget *param_1,pmf_1ceb03a4 *param_2)

{
  undefined1 *puVar1;
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
  undefined1 *local_20;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FText::FText(&this->Value);
  this->bIsSet = true;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  puVar1 = &(this->Getter).field_0x8;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->Getter).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSReflectorToolTipWidget___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// Bind<SAtlasVisualizer> @ 142dec5e0

void __thiscall
TAttribute<EVisibility>::Bind<SAtlasVisualizer>
          (TAttribute<EVisibility> *this,SAtlasVisualizer *param_1,pmf_e0f6b251 *param_2)

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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSAtlasVisualizer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// TAttribute<FLinearColor> @ 142e00510

TAttribute<FLinearColor> * __thiscall
TAttribute<FLinearColor>::TAttribute<FLinearColor>
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

// TAttribute<FMenuEntryResizeParams> @ 142e00540

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TAttribute<FMenuEntryResizeParams> * __thiscall
TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>
          (TAttribute<FMenuEntryResizeParams> *this)

{
  memset(this,0,200);
  this->bIsSet = false;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FSlateIcon> @ 142e00590

TAttribute<FSlateIcon> * __thiscall
TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(TAttribute<FSlateIcon> *this,FSlateIcon *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = param_1->StyleName;
  (this->Value).StyleSetName = param_1->StyleSetName;
  (this->Value).StyleName = FVar1;
  FVar1 = param_1->SmallStyleName;
  FVar2 = param_1->StatusOverlayStyleName;
  this->bIsSet = true;
  (this->Value).SmallStyleName = FVar1;
  (this->Value).StatusOverlayStyleName = FVar2;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<enum_ECheckBoxState> @ 142e005c0

TAttribute<ECheckBoxState> * __thiscall
TAttribute<enum_ECheckBoxState>::TAttribute<enum_ECheckBoxState>(void *this,ECheckBoxState *param_1)

{
  *(ECheckBoxState *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<enum_EMenuPlacement> @ 142e005f0

TAttribute<EMenuPlacement> * __thiscall
TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(void *this)

{
  *(undefined4 *)this = 0;
  *(undefined1 *)((longlong)this + 4) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<enum_ETextJustify::Type> @ 142e00610

TAttribute<ETextJustify::Type> * __thiscall
TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>(void *this,Type *param_1)

{
  *(Type *)this = *param_1;
  *(undefined1 *)((longlong)this + 4) = 1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// TAttribute<bool> @ 142e00630

TAttribute<bool> * __thiscall
TAttribute<bool>::TAttribute<bool>(TAttribute<bool> *this,bool *param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// ~TAttribute<UE::Math::TVector4<double>_> @ 142e0fab0

void __thiscall
TAttribute<UE::Math::TVector4<double>_>::~TAttribute<UE::Math::TVector4<double>_>
          (TAttribute<UE::Math::TVector4<double>_> *this)

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

// ~TAttribute<FSlateIcon> @ 142e0faf0

void __thiscall TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(TAttribute<FSlateIcon> *this)

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

// ~TAttribute<enum_EColorBlockAlphaDisplayMode> @ 142e0fb30

void __thiscall
TAttribute<enum_EColorBlockAlphaDisplayMode>::~TAttribute<enum_EColorBlockAlphaDisplayMode>
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

