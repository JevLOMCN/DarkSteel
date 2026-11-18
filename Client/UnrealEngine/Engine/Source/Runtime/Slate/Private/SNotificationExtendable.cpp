// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// SNotificationExtendable @ 1429ba820

/* WARNING: Enum "Type": Some values do not have unique names */

SNotificationExtendable * __thiscall
SNotificationExtendable::SNotificationExtendable(SNotificationExtendable *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TWeakPtr<FTSTicker::FElement,1> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  EWidgetUpdateFlags EVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  FTSTicker *this_00;
  undefined8 *puVar12;
  ulong64 uVar13;
  SNotificationExtendable *pSVar14;
  TWeakPtr<FTSTicker::FElement,1> *pTVar15;
  EWidgetUpdateFlags EVar16;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SNotificationExtendable__6B_;
  (this->MyList).Object = (SNotificationList *)0x0;
  (this->MyList).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&(this->Text).Value);
  (this->Text).bIsSet = false;
  *(undefined8 *)&(this->Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Text).Getter = 0;
  *(undefined8 *)&(this->Text).Getter.field_0x8 = 0;
  FText::FText(&(this->SubText).Value);
  (this->SubText).bIsSet = false;
  *(undefined8 *)&(this->SubText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SubText).Getter = 0;
  *(undefined8 *)&(this->SubText).Getter.field_0x8 = 0;
  (this->FadeInDuration).Value = 0.0;
  (this->FadeInDuration).bIsSet = false;
  *(undefined8 *)&(this->FadeInDuration).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FadeInDuration).Getter = 0;
  *(undefined8 *)&(this->FadeInDuration).Getter.field_0x8 = 0;
  (this->FadeOutDuration).Value = 0.0;
  (this->FadeOutDuration).bIsSet = false;
  *(undefined8 *)&(this->FadeOutDuration).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FadeOutDuration).Getter = 0;
  *(undefined8 *)&(this->FadeOutDuration).Getter.field_0x8 = 0;
  (this->ExpireDuration).Value = 0.0;
  (this->ExpireDuration).bIsSet = false;
  *(undefined8 *)&(this->ExpireDuration).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ExpireDuration).Getter = 0;
  *(undefined8 *)&(this->ExpireDuration).Getter.field_0x8 = 0;
  (this->BaseIcon).Value = (FSlateBrush *)0x0;
  (this->BaseIcon).bIsSet = false;
  *(undefined8 *)&(this->BaseIcon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BaseIcon).Getter = 0;
  *(undefined8 *)&(this->BaseIcon).Getter.field_0x8 = 0;
  (this->DefaultGlowColor).field0_0x0._s_0.R = 1.0;
  (this->DefaultGlowColor).field0_0x0._s_0.G = 1.0;
  (this->DefaultGlowColor).field0_0x0._s_0.B = 1.0;
  (this->DefaultGlowColor).field0_0x0._s_0.A = 1.0;
  (this->MyTextBlock).Object = (STextBlock *)0x0;
  (this->MyTextBlock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MySubTextBlock).Object = (STextBlock *)0x0;
  (this->MySubTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FCurveSequence::FCurveSequence(&this->FadeAnimation);
  FCurveHandle::FCurveHandle(&this->FadeCurve,(FCurveSequence *)0x0,0);
  FCurveSequence::FCurveSequence(&this->IntroAnimation);
  FCurveHandle::FCurveHandle(&this->ScaleCurveX,(FCurveSequence *)0x0,0);
  FCurveHandle::FCurveHandle(&this->ScaleCurveY,(FCurveSequence *)0x0,0);
  FCurveHandle::FCurveHandle(&this->GlowCurve,(FCurveSequence *)0x0,0);
  FCurveSequence::FCurveSequence(&this->ThrobberAnimation);
  FCurveSequence::FCurveSequence(&this->CompletionStateAnimation);
  pTVar3 = &this->TickDelegateHandle;
  this->InternalTime = 0.0;
  pTVar3->Object = (FElement *)0x0;
  (this->ThrottleHandle).Index = -1;
  (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar6 = (EWidgetUpdateFlags)this->_padding_;
  this->bAutoExpire = false;
  EVar16 = EVar6 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar16;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar6,EVar16);
  this_00 = FTSTicker::GetCoreTicker();
  uVar10 = local_78.WeakReferenceCount.ReferenceController._4_4_;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    puVar12[4] = Update;
    puVar12[5] = (ulonglong)uVar10 << 0x20;
    *puVar12 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VSNotificationExtendable____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = this;
    if (puVar12[4] == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        pSVar14 = (SNotificationExtendable *)(*pcVar8)();
        return pSVar14;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar15 = FTSTicker::AddTicker
                      (this_00,&local_78,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (pTVar3 != pTVar15) {
    pTVar3->Object = pTVar15->Object;
    pTVar15->Object = (FElement *)0x0;
    pTVar7 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar15->WeakReferenceCount).ReferenceController;
    (pTVar15->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  }
  plVar9 = (longlong *)
           CONCAT44(local_78.WeakReferenceCount.ReferenceController._4_4_,
                    local_78.WeakReferenceCount.ReferenceController._0_4_);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return this;
}

// ~SNotificationExtendable @ 1429bfce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationExtendable::~SNotificationExtendable(SNotificationExtendable *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  ITextData *pIVar5;
  FSlateThrottleManager *this_00;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7SNotificationExtendable__6B_;
  if ((this->ThrottleHandle).Index != -1) {
    this_00 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->ThrottleHandle);
  }
  local_18.Object = (this->TickDelegateHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar3 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
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
  FCurveSequence::~FCurveSequence(&this->CompletionStateAnimation);
  FCurveSequence::~FCurveSequence(&this->ThrobberAnimation);
  FCurveSequence::~FCurveSequence(&this->IntroAnimation);
  FCurveSequence::~FCurveSequence(&this->FadeAnimation);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySubTextBlock).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTextBlock).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BaseIcon).Getter);
  pvVar4 = *(void **)&(this->BaseIcon).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BaseIcon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ExpireDuration).Getter);
  pvVar4 = *(void **)&(this->ExpireDuration).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ExpireDuration).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FadeOutDuration).Getter);
  pvVar4 = *(void **)&(this->FadeOutDuration).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FadeOutDuration).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FadeInDuration).Getter);
  pvVar4 = *(void **)&(this->FadeInDuration).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FadeInDuration).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SubText).Getter);
  pvVar4 = *(void **)&(this->SubText).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SubText).Getter);
  pIVar5 = (this->SubText).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter);
  pvVar4 = *(void **)&(this->Text).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Text).Getter);
  pIVar5 = (this->Text).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pTVar3 = (this->MyList).WeakReferenceCount.ReferenceController;
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

// ExpireAndFadeout @ 1429e7e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationExtendable::ExpireAndFadeout(SNotificationExtendable *this)

{
  this->bAutoExpire = true;
  return;
}

// Fadein @ 1429e7e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationExtendable::Fadein(SNotificationExtendable *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FThrottleRequest FVar6;
  FCurveSequence *pFVar7;
  float *pfVar8;
  FCurveHandle *pFVar9;
  FSlateApplication *this_00;
  FSlateThrottleManager *this_01;
  undefined4 extraout_var;
  TAttribute<EVisibility> local_a8;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  local_a8.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_a8.bIsSet = true;
  local_a8.Getter._16_8_ = 0;
  local_a8.Getter._0_8_ = 0;
  local_a8.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_a8);
  TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
  pFVar7 = FCurveSequence::FCurveSequence(&local_78);
  FCurveSequence::operator=(&this->FadeAnimation,pFVar7);
  FCurveSequence::~FCurveSequence(&local_78);
  pfVar8 = TAttribute<float>::Get(&this->FadeInDuration);
  pFVar9 = FCurveSequence::AddCurve
                     (&this->FadeAnimation,(FCurveHandle *)&local_a8,0.0,*pfVar8,Linear);
  iVar1 = pFVar9->CurveIndex;
  uVar2 = *(undefined4 *)&pFVar9->field_0xc;
  (this->FadeCurve).OwnerSequence = pFVar9->OwnerSequence;
  (this->FadeCurve).CurveIndex = iVar1;
  *(undefined4 *)&(this->FadeCurve).field_0xc = uVar2;
  FCurveSequence::Play(&this->FadeAnimation,&local_88,false,0.0,true);
  pFVar7 = FCurveSequence::FCurveSequence(&local_78,0.0,__real_3f800000,Linear);
  FCurveSequence::operator=(&this->ThrobberAnimation,pFVar7);
  FCurveSequence::~FCurveSequence(&local_78);
  FCurveSequence::Play(&this->ThrobberAnimation,&local_88,true,0.0,true);
  pFVar7 = FCurveSequence::FCurveSequence(&local_78);
  FCurveSequence::operator=(&this->IntroAnimation,pFVar7);
  FCurveSequence::~FCurveSequence(&local_78);
  pFVar9 = FCurveSequence::AddCurve
                     (&this->IntroAnimation,(FCurveHandle *)&local_a8,__real_3e4ccccd,
                      __real_3e99999a,QuadOut);
  fVar3 = __real_3e4ccccd;
  iVar1 = pFVar9->CurveIndex;
  uVar2 = *(undefined4 *)&pFVar9->field_0xc;
  (this->ScaleCurveX).OwnerSequence = pFVar9->OwnerSequence;
  (this->ScaleCurveX).CurveIndex = iVar1;
  *(undefined4 *)&(this->ScaleCurveX).field_0xc = uVar2;
  pFVar9 = FCurveSequence::AddCurve
                     (&this->IntroAnimation,(FCurveHandle *)&local_a8,0.0,fVar3,Linear);
  fVar4 = __real_3f0ccccd;
  fVar3 = __real_3f000000;
  iVar1 = pFVar9->CurveIndex;
  uVar2 = *(undefined4 *)&pFVar9->field_0xc;
  (this->ScaleCurveY).OwnerSequence = pFVar9->OwnerSequence;
  (this->ScaleCurveY).CurveIndex = iVar1;
  *(undefined4 *)&(this->ScaleCurveY).field_0xc = uVar2;
  pFVar9 = FCurveSequence::AddCurve
                     (&this->IntroAnimation,(FCurveHandle *)&local_a8,fVar3,fVar4,QuadOut);
  iVar1 = pFVar9->CurveIndex;
  uVar2 = *(undefined4 *)&pFVar9->field_0xc;
  (this->GlowCurve).OwnerSequence = pFVar9->OwnerSequence;
  (this->GlowCurve).CurveIndex = iVar1;
  *(undefined4 *)&(this->GlowCurve).field_0xc = uVar2;
  FCurveSequence::Play(&this->IntroAnimation,&local_88,false,0.0,true);
  pfVar8 = TAttribute<float>::Get(&this->FadeInDuration);
  if (((__real_38d1b717 < *pfVar8) && (param_1)) && ((this->ThrottleHandle).Index == -1)) {
    this_00 = FSlateApplication::Get();
    bVar5 = FSlateApplication::IsRunningAtTargetFrameRate(this_00);
    if (!bVar5) {
      this_01 = FSlateThrottleManager::Get();
      FVar6 = FSlateThrottleManager::EnterResponsiveMode(this_01);
      (this->ThrottleHandle).Index = *(int *)CONCAT44(extraout_var,FVar6.Index);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// Fadeout @ 1429e80f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationExtendable::Fadeout(SNotificationExtendable *this)

{
  int iVar1;
  undefined4 uVar2;
  FCurveSequence *pFVar3;
  float *pfVar4;
  FCurveHandle *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  pFVar3 = FCurveSequence::FCurveSequence(&local_78);
  FCurveSequence::operator=(&this->FadeAnimation,pFVar3);
  FCurveSequence::~FCurveSequence(&local_78);
  pfVar4 = TAttribute<float>::Get(&this->FadeOutDuration);
  pFVar5 = FCurveSequence::AddCurve
                     (&this->FadeAnimation,(FCurveHandle *)&local_88,0.0,*pfVar4,Linear);
  iVar1 = pFVar5->CurveIndex;
  uVar2 = *(undefined4 *)&pFVar5->field_0xc;
  (this->FadeCurve).OwnerSequence = pFVar5->OwnerSequence;
  (this->FadeCurve).CurveIndex = iVar1;
  *(undefined4 *)&(this->FadeCurve).field_0xc = uVar2;
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
  FCurveSequence::PlayReverse(&this->FadeAnimation,pTVar6,false,0.0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// GetCompletionState @ 1429ea8e0

/* WARNING: Enum "Type": Some values do not have unique names */

ECompletionState __thiscall
SNotificationExtendable::GetCompletionState(SNotificationExtendable *this)

{
  return this->CompletionState;
}

// GetContentColor @ 1429ead60

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SNotificationExtendable::GetContentColor
          (SNotificationExtendable *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  pFVar2 = GetContentColorRaw(this,&local_18);
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetContentColorRaw @ 1429ead90

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
SNotificationExtendable::GetContentColorRaw
          (SNotificationExtendable *this,FLinearColor *__return_storage_ptr__)

{
  SNotificationList *pSVar1;
  SWindow *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  float fVar7;
  
  pTVar5 = (this->MyList).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429eadd2;
      }
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
    pSVar1 = (this->MyList).Object;
    if (pSVar1 != (SNotificationList *)0x0) {
      pTVar4 = (pSVar1->ParentWindowPtr).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar4->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar4 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1429eae46;
          }
          LOCK();
          aVar3 = pTVar4->SharedReferenceCount;
          bVar6 = aVar2 == aVar3;
          if (bVar6) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar3 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar3;
        } while (!bVar6);
        this_00 = (pSVar1->ParentWindowPtr).Object;
        if (this_00 != (SWindow *)0x0) {
          fVar7 = FCurveHandle::GetLerp(&this->FadeCurve);
          SWindow::SetOpacity(this_00,fVar7);
        }
      }
LAB_1429eae46:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      (__return_storage_ptr__->field0_0x0)._s_0.R = 1.0;
      (__return_storage_ptr__->field0_0x0)._s_0.G = 1.0;
      (__return_storage_ptr__->field0_0x0)._s_0.B = 1.0;
      (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
      goto LAB_1429eadf7;
    }
  }
LAB_1429eadd2:
  fVar7 = FCurveHandle::GetLerp(&this->FadeCurve);
  (__return_storage_ptr__->field0_0x0)._s_0.R = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.G = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar7;
LAB_1429eadf7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// GetGlowColor @ 1429eb800

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SNotificationExtendable::GetGlowColor
          (SNotificationExtendable *this,FSlateColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = FCurveHandle::GetLerp(&this->GlowCurve);
  fVar4 = __real_3f800000 - fVar4;
  if (fVar4 == __real_3f800000) {
    fVar4 = 0.0;
  }
  if (this->CompletionState == CS_Success) {
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 0.0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 4) = 0x3f800000
    ;
  }
  else {
    if (this->CompletionState != CS_Fail) {
      fVar1 = (this->DefaultGlowColor).field0_0x0._s_0.R;
      fVar2 = (this->DefaultGlowColor).field0_0x0._s_0.G;
      fVar3 = (this->DefaultGlowColor).field0_0x0._s_0.B;
      __return_storage_ptr__->ColorUseRule = UseColor_Specified;
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar1;
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar2;
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar3;
      (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar4;
      return __return_storage_ptr__;
    }
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 0.0;
  }
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar4;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetIconPadding @ 1429ebc00

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SNotificationExtendable::GetIconPadding
          (SNotificationExtendable *this,FMargin *__return_storage_ptr__)

{
  EVisibility EVar1;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->CompletionState == CS_Pending) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  if (((byte)EVar1.Value.Value & 0x19) != 0) {
    __return_storage_ptr__->Left = -6.0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Left = 0.0;
  return __return_storage_ptr__;
}

// GetItemScale @ 1429ebc50

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SNotificationExtendable::GetItemScale
          (SNotificationExtendable *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = FCurveHandle::GetLerp(&this->ScaleCurveY);
  fVar2 = FCurveHandle::GetLerp(&this->ScaleCurveX);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar2;
  return __return_storage_ptr__;
}

// GetNotificationIcon @ 1429ec0b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SNotificationExtendable::GetNotificationIcon(SNotificationExtendable *this)

{
  code *pcVar1;
  FSlateBrush **ppFVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FSlateBrush *pFVar5;
  char *pcVar6;
  FName local_res8;
  
  if (this->CompletionState == CS_Success) {
    pIVar3 = FAppStyle::Get();
    pcVar6 = "Icons.SuccessWithColor.Large";
  }
  else {
    if (this->CompletionState != CS_Fail) {
      ppFVar2 = TAttribute<FSlateBrush_const_*>::Get(&this->BaseIcon);
      return *ppFVar2;
    }
    pIVar3 = FAppStyle::Get();
    pcVar6 = "Icons.ErrorWithColor.Large";
  }
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = ::FName::FName(&local_res8,pcVar6);
  pFVar5 = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
  return pFVar5;
}

// GetThrobberTransform @ 1429ef620

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TTransform2<float>_> * __thiscall
SNotificationExtendable::GetThrobberTransform
          (SNotificationExtendable *this,TOptional<TTransform2<float>_> *__return_storage_ptr__)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  FCurveSequence::GetLerp(&this->ThrobberAnimation);
  __libm_sse2_sincosf_();
  (__return_storage_ptr__->TypedValue).M.M[0][0] = extraout_XMM0_Db;
  (__return_storage_ptr__->TypedValue).M.M[0][1] = extraout_XMM0_Da;
  (__return_storage_ptr__->TypedValue).M.M[1][0] =
       (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->TypedValue).M.M[1][1] = extraout_XMM0_Db;
  (__return_storage_ptr__->TypedValue).Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetThrobberVisibility @ 1429ef6a0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SNotificationExtendable::GetThrobberVisibility(SNotificationExtendable *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->CompletionState == CS_Pending) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// Pulse @ 142a042f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationExtendable::Pulse(SNotificationExtendable *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  FCurveSequence *pFVar4;
  FCurveHandle *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultGlowColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultGlowColor).field0_0x0 + 8) = uVar1;
  pFVar4 = FCurveSequence::FCurveSequence(&local_78);
  FCurveSequence::operator=(&this->CompletionStateAnimation,pFVar4);
  FCurveSequence::~FCurveSequence(&local_78);
  pFVar5 = FCurveSequence::AddCurve
                     (&this->CompletionStateAnimation,(FCurveHandle *)&local_88,0.0,__real_3f400000,
                      Linear);
  iVar2 = pFVar5->CurveIndex;
  uVar3 = *(undefined4 *)&pFVar5->field_0xc;
  (this->GlowCurve).OwnerSequence = pFVar5->OwnerSequence;
  (this->GlowCurve).CurveIndex = iVar2;
  *(undefined4 *)&(this->GlowCurve).field_0xc = uVar3;
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
  FCurveSequence::Play(&this->CompletionStateAnimation,pTVar6,false,0.0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// SetCompletionState @ 142a078d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationExtendable::SetCompletionState(SNotificationExtendable *this,ECompletionState param_1)

{
  int iVar1;
  undefined4 uVar2;
  FCurveSequence *pFVar3;
  FCurveHandle *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  this->CompletionState = param_1;
  if (param_1 - CS_Success < 2) {
    pFVar3 = FCurveSequence::FCurveSequence(&local_78);
    FCurveSequence::operator=(&this->CompletionStateAnimation,pFVar3);
    FCurveSequence::~FCurveSequence(&local_78);
    pFVar4 = FCurveSequence::AddCurve
                       (&this->CompletionStateAnimation,(FCurveHandle *)&local_88,0.0,
                        __real_3f400000,Linear);
    iVar1 = pFVar4->CurveIndex;
    uVar2 = *(undefined4 *)&pFVar4->field_0xc;
    (this->GlowCurve).OwnerSequence = pFVar4->OwnerSequence;
    (this->GlowCurve).CurveIndex = iVar1;
    *(undefined4 *)&(this->GlowCurve).field_0xc = uVar2;
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
    FCurveSequence::Play(&this->CompletionStateAnimation,pTVar5,false,0.0,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetExpireDuration @ 142a09950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationExtendable::SetExpireDuration(SNotificationExtendable *this,float param_1)

{
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->ExpireDuration).Value = param_1;
  (this->ExpireDuration).bIsSet = true;
  local_18 = 0;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ExpireDuration).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetFadeInDuration @ 142a09a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationExtendable::SetFadeInDuration(SNotificationExtendable *this,float param_1)

{
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->FadeInDuration).Value = param_1;
  (this->FadeInDuration).bIsSet = true;
  local_18 = 0;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FadeInDuration).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetFadeOutDuration @ 142a09af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationExtendable::SetFadeOutDuration(SNotificationExtendable *this,float param_1)

{
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->FadeOutDuration).Value = param_1;
  (this->FadeOutDuration).bIsSet = true;
  local_18 = 0;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FadeOutDuration).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetSubText @ 142a0bfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationExtendable::SetSubText(SNotificationExtendable *this,TAttribute<FText> *param_1)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  undefined1 local_res8 [8];
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  TAttribute<FText>::operator=(&this->SubText,param_1);
  if ((this->MySubTextBlock).Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38._0_8_ = (this->SubText).Value.TextData.Reference;
  pSVar1 = (this->MySubTextBlock).Object;
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res8);
  }
  local_38._8_4_ = (this->SubText).Value.Flags;
  local_38[0x10] = (this->SubText).bIsSet;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,
             &(this->SubText).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,&local_50);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)FStack_18.Data + 0x38))();
    if (cVar4 != '\0') {
      uVar5 = 1;
      goto LAB_142a0c09f;
    }
  }
  uVar5 = 0;
LAB_142a0c09f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags & 0xfffe;
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags | uVar5;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&pSVar1->BoundText,(SWidget *)pSVar1,(TAttribute<FText> *)local_38,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_68);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
  return;
}

// SetText @ 142a0c840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationExtendable::SetText(SNotificationExtendable *this,TAttribute<FText> *param_1)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  undefined1 local_res8 [8];
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  TAttribute<FText>::operator=(&this->Text,param_1);
  if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38._0_8_ = (this->Text).Value.TextData.Reference;
  pSVar1 = (this->MyTextBlock).Object;
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res8);
  }
  local_38._8_4_ = (this->Text).Value.Flags;
  local_38[0x10] = (this->Text).bIsSet;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,
             &(this->Text).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,&local_50);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)FStack_18.Data + 0x38))();
    if (cVar4 != '\0') {
      uVar5 = 1;
      goto LAB_142a0c90f;
    }
  }
  uVar5 = 0;
LAB_142a0c90f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags & 0xfffe;
  (pSVar1->field91_0x60c).Union_Flags = (pSVar1->field91_0x60c).Union_Flags | uVar5;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&pSVar1->BoundText,(SWidget *)pSVar1,(TAttribute<FText> *)local_38,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_68);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
  return;
}

// Update @ 142a11800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SNotificationExtendable::Update(SNotificationExtendable *this,float param_1)

{
  longlong lVar1;
  SNotificationList *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  atomic<int> aVar9;
  bool bVar10;
  bool bVar11;
  atomic<int> aVar12;
  float *pfVar13;
  float *pfVar14;
  FCurveSequence *pFVar15;
  FCurveHandle *pFVar16;
  FSlateThrottleManager *pFVar17;
  TSharedRef<SWidget,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  SWidget *local_b8;
  TReferenceControllerBase<1> *local_b0;
  TSharedRef<SWidget,1> local_a8;
  FCurveSequence local_98;
  
  bVar10 = FCurveSequence::IsInReverse(&this->FadeAnimation);
  if ((this->bAutoExpire == false) || (this->InternalTime = param_1 + this->InternalTime, bVar10)) {
LAB_142a11893:
    bVar11 = FCurveSequence::IsPlaying(&this->FadeAnimation);
    if (!bVar10) goto LAB_142a11952;
  }
  else {
    pfVar13 = TAttribute<float>::Get(&this->ExpireDuration);
    pfVar14 = TAttribute<float>::Get(&this->FadeInDuration);
    if (this->InternalTime <= *pfVar14 + *pfVar13) goto LAB_142a11893;
    (**(code **)(this->_padding_ + 0x290))(this);
    bVar11 = FCurveSequence::IsPlaying(&this->FadeAnimation);
  }
  if (bVar11 == false) {
    pFVar15 = FCurveSequence::FCurveSequence(&local_98);
    FCurveSequence::operator=(&this->FadeAnimation,pFVar15);
    FCurveSequence::~FCurveSequence(&local_98);
    pFVar16 = FCurveHandle::FCurveHandle((FCurveHandle *)&local_a8,(FCurveSequence *)0x0,0);
    uVar6 = *(undefined4 *)((longlong)&pFVar16->OwnerSequence + 4);
    iVar7 = pFVar16->CurveIndex;
    uVar8 = *(undefined4 *)&pFVar16->field_0xc;
    lVar1 = this->_padding_;
    *(undefined4 *)&(this->FadeCurve).OwnerSequence = *(undefined4 *)&pFVar16->OwnerSequence;
    *(undefined4 *)((longlong)&(this->FadeCurve).OwnerSequence + 4) = uVar6;
    (this->FadeCurve).CurveIndex = iVar7;
    *(undefined4 *)&(this->FadeCurve).field_0xc = uVar8;
    (**(code **)(lVar1 + 0x280))(this,0);
    if ((this->ThrottleHandle).Index != -1) {
      pFVar17 = FSlateThrottleManager::Get();
      FSlateThrottleManager::LeaveResponsiveMode(pFVar17,&this->ThrottleHandle);
    }
    pTVar19 = (this->MyList).WeakReferenceCount.ReferenceController;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = pTVar19->SharedReferenceCount;
      do {
        if (aVar9 == (atomic<int>)0x0) {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142a11942;
        }
        LOCK();
        aVar12 = pTVar19->SharedReferenceCount;
        bVar10 = aVar9 == aVar12;
        if (bVar10) {
          pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar12 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar12;
      } while (!bVar10);
      pSVar2 = (this->MyList).Object;
      if (pSVar2 != (SNotificationList *)0x0) {
        pcVar3 = *(code **)(pSVar2->_padding_ + 0x250);
        pTVar18 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_a8);
        pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
        pSVar5 = pTVar18->Object;
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8 = pSVar5;
        local_b0 = pTVar4;
        (*pcVar3)(pSVar2,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
    }
LAB_142a11942:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  }
LAB_142a11952:
  bVar10 = FCurveSequence::IsPlaying(&this->IntroAnimation);
  if ((!bVar10) && ((this->ThrottleHandle).Index != -1)) {
    pFVar17 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(pFVar17,&this->ThrottleHandle);
  }
  return true;
}

