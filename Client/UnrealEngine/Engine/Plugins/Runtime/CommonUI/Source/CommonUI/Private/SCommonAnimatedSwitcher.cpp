// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 16

// ~SCommonAnimatedSwitcher @ 14a7b1950

void __thiscall SCommonAnimatedSwitcher::~SCommonAnimatedSwitcher(SCommonAnimatedSwitcher *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsTransitioningChanged);
  pvVar3 = *(void **)&(this->OnIsTransitioningChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsTransitioningChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnActiveIndexChanged);
  pvVar3 = *(void **)&(this->OnActiveIndexChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveIndexChanged);
  pTVar4 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  FCurveSequence::~FCurveSequence(&this->TransitionSequence);
  SWidgetSwitcher::~SWidgetSwitcher((SWidgetSwitcher *)this);
  return;
}

// Construct @ 14a7c5700

void __thiscall
SCommonAnimatedSwitcher::Construct(SCommonAnimatedSwitcher *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EWidgetUpdateFlags EVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments *pFVar5;
  EWidgetUpdateFlags EVar6;
  undefined1 local_270 [8];
  ForAnyElementType FStack_268;
  ulonglong local_260;
  FDestructionSentinel local_258;
  undefined8 local_240 [2];
  undefined1 local_230 [528];
  undefined1 local_20 [24];
  
  pFVar5 = SWidgetSwitcher::FArguments::FArguments((FArguments *)local_230);
  local_270 = (undefined1  [8])0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  (pFVar5->_WidgetIndex).Value = param_1->_InitialIndex;
  (pFVar5->_WidgetIndex).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_WidgetIndex).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
             (FWriteAccessScope *)&local_258);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  SWidgetSwitcher::Construct((SWidgetSwitcher *)this,pFVar5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)local_230._504_8_,local_230._512_4_);
  if ((FSlotArguments *)local_230._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_230._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_230);
  EVar3 = (EWidgetUpdateFlags)this->_padding_;
  EVar6 = EVar3 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar3,EVar6);
  this->bTransitioningOut = false;
  if (&this->PendingActiveWidget != (TWeakPtr<SWidget,1> *)local_240) {
    pTVar4 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
    (this->PendingActiveWidget).Object = (SWidget *)0x0;
    (this->PendingActiveWidget).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  this->PendingActiveWidgetIndex = -1;
  this->TransitionType = param_1->_TransitionType;
  this->TransitionFallbackStrategy = param_1->_TransitionFallbackStrategy;
  SetTransition(this,param_1->_TransitionDuration,param_1->_TransitionCurveType);
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnActiveIndexChanged,&param_1->_OnActiveIndexChanged);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnIsTransitioningChanged,&param_1->_OnIsTransitioningChanged);
  return;
}

// GetChildSlot @ 14a7e14a0

FBasicLayoutWidgetSlot * __thiscall
SCommonAnimatedSwitcher::GetChildSlot(SCommonAnimatedSwitcher *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FBasicLayoutWidgetSlot *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FBasicLayoutWidgetSlot *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FBasicLayoutWidgetSlot **)(this->_padding_ + (longlong)param_1 * 8);
  }
  return (FBasicLayoutWidgetSlot *)0x0;
}

// GetTransitionFallbackForIndex @ 14a7e8ef0

int __thiscall
SCommonAnimatedSwitcher::GetTransitionFallbackForIndex(SCommonAnimatedSwitcher *this,int param_1)

{
  ECommonSwitcherTransitionFallbackStrategy EVar1;
  int iVar2;
  int iVar3;
  
  EVar1 = this->TransitionFallbackStrategy;
  if (EVar1 != Previous) {
    if (EVar1 == Next) goto LAB_14a7e8f42;
    if (EVar1 == First) {
      iVar2 = (int)this->_padding_ + -1;
      if (0 < iVar2) {
        iVar2 = 0;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      return iVar3;
    }
    if (EVar1 == Last) {
      iVar3 = (int)this->_padding_ + -1;
      iVar2 = (int)this->_padding_ + -1;
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      return iVar3;
    }
  }
  param_1 = param_1 + -1;
LAB_14a7e8f42:
  iVar2 = (int)this->_padding_ + -1;
  if (param_1 < iVar2) {
    iVar2 = param_1;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  return iVar3;
}

// GetTransitionProgress @ 14a7e8f60

float __thiscall SCommonAnimatedSwitcher::GetTransitionProgress(SCommonAnimatedSwitcher *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = FCurveSequence::GetLerp(&this->TransitionSequence);
  if (this->bTransitioningOut != false) {
    bVar1 = FCurveSequence::IsInReverse(&this->TransitionSequence);
    if (bVar1) goto LAB_14a7e8fb2;
    if (this->bTransitioningOut != false) {
      return fVar2;
    }
  }
  bVar1 = FCurveSequence::IsForward(&this->TransitionSequence);
  if (!bVar1) {
    return fVar2;
  }
LAB_14a7e8fb2:
  return fVar2 + __real_bf800000;
}

// IsTransitionPlaying @ 14a7f7280

bool __thiscall SCommonAnimatedSwitcher::IsTransitionPlaying(SCommonAnimatedSwitcher *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsPlaying(&this->TransitionSequence);
  return bVar1;
}

// OnPaint @ 14a7fe350

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SCommonAnimatedSwitcher::OnPaint
          (SCommonAnimatedSwitcher *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38 [3];
  
  local_58 = *(undefined1 (*) [8])&(param_6->ColorAndOpacityTint).field0_0x0;
  _fStack_50 = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
  local_48._0_8_ = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
  local_38[0]._0_8_ = *(undefined8 *)&(param_6->SubduedForeground).field0_0x0;
  local_38[0]._8_8_ = *(undefined8 *)((longlong)&(param_6->SubduedForeground).field0_0x0 + 8);
  bVar2 = FCurveSequence::IsPlaying(&this->TransitionSequence);
  if (!bVar2) goto LAB_14a7fe455;
  fVar4 = FCurveSequence::GetLerp(&this->TransitionSequence);
  fVar1 = __real_3f800000;
  if (this->bTransitioningOut == false) {
LAB_14a7fe3f8:
    bVar2 = FCurveSequence::IsInReverse(&this->TransitionSequence);
    if (bVar2) {
LAB_14a7fe408:
      fVar4 = fVar1 - fVar4;
    }
  }
  else {
    bVar2 = FCurveSequence::IsInReverse(&this->TransitionSequence);
    if (!bVar2) goto LAB_14a7fe408;
    if (this->bTransitioningOut == false) goto LAB_14a7fe3f8;
  }
  local_58._4_4_ = (float)local_58._4_4_ * 1.0;
  local_58._0_4_ = (float)local_58._0_4_ * 1.0;
  fStack_4c = fStack_4c * fVar4;
  fStack_50 = fStack_50 * 1.0;
LAB_14a7fe455:
  iVar3 = SPanel::OnPaint((SPanel *)this,param_1,param_2,param_3,param_4,param_5,
                          (FWidgetStyle *)local_58,param_7);
  return iVar3;
}

// OnSlotAdded @ 14a7fedc0

void __thiscall SCommonAnimatedSwitcher::OnSlotAdded(SCommonAnimatedSwitcher *this,int param_1)

{
  int iVar1;
  
  iVar1 = this->PendingActiveWidgetIndex;
  if ((-1 < iVar1) && (param_1 <= iVar1)) {
    this->PendingActiveWidgetIndex = iVar1 + 1;
  }
  return;
}

// OnSlotRemoved @ 14a7ff0a0

void __thiscall
SCommonAnimatedSwitcher::OnSlotRemoved
          (SCommonAnimatedSwitcher *this,int param_1,TSharedRef<SWidget,1> *param_2,bool param_3)

{
  ECommonSwitcherTransitionFallbackStrategy EVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  FReadAccessScope local_28;
  
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar7 = this->PendingActiveWidgetIndex;
  if (-1 < iVar7) {
    if (iVar7 == param_1) {
      TryTransitionFallbackOfPendingWidget(this);
    }
    else if (iVar7 < param_1) {
      this->PendingActiveWidgetIndex = iVar7 + -1;
    }
  }
  if (!param_3) goto LAB_14a7ff1df;
  bVar4 = FCurveSequence::IsPlaying(&this->TransitionSequence);
  if (!bVar4) goto LAB_14a7ff1df;
  bVar4 = FCurveSequence::IsForward(&this->TransitionSequence);
  if (bVar4) {
    FCurveSequence::JumpToEnd(&this->TransitionSequence);
  }
  else {
    FCurveSequence::JumpToStart(&this->TransitionSequence);
  }
  if (((this->bTransitioningOut != false) ||
      (EVar1 = this->TransitionFallbackStrategy, EVar1 == None)) ||
     (iVar7 = (int)this->_padding_, iVar7 < 1)) goto LAB_14a7ff1df;
  if (EVar1 == Previous) {
LAB_14a7ff181:
    param_1 = param_1 + -1;
  }
  else if (EVar1 != Next) {
    if (EVar1 == First) {
      param_1 = 0;
    }
    else {
      if (EVar1 != Last) goto LAB_14a7ff181;
      param_1 = iVar7 + -1;
    }
  }
  iVar5 = iVar7 + -1;
  if (param_1 < iVar7 + -1) {
    iVar5 = param_1;
  }
  iVar7 = 0;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  SWidgetSwitcher::SetActiveWidgetIndex((SWidgetSwitcher *)this,iVar7);
  piVar6 = TAttribute<int>::Get((TAttribute<int> *)&this->_padding_);
  iVar7 = *piVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActiveIndexChanged,
             &local_28);
  if ((*(int *)&(this->OnActiveIndexChanged).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnActiveIndexChanged).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,iVar7);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_14a7ff1df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetTransition @ 14a81ca60

void __thiscall
SCommonAnimatedSwitcher::SetTransition
          (SCommonAnimatedSwitcher *this,float param_1,ETransitionCurve param_2)

{
  FCurveSequence *pFVar1;
  ECurveEaseFunction EVar2;
  FCurveSequence local_78;
  
  switch(param_2) {
  default:
    EVar2 = Linear;
    break;
  case QuadIn:
    EVar2 = QuadIn;
    break;
  case QuadOut:
    EVar2 = QuadOut;
    break;
  case QuadInOut:
    EVar2 = QuadInOut;
    break;
  case CubicIn:
    EVar2 = CubicIn;
    break;
  case CubicOut:
    EVar2 = CubicOut;
    break;
  case CubicInOut:
    EVar2 = CubicInOut;
  }
  pFVar1 = FCurveSequence::FCurveSequence(&local_78,0.0,param_1 * __real_3f000000,EVar2);
  FCurveSequence::operator=(&this->TransitionSequence,pFVar1);
  FCurveSequence::~FCurveSequence(&local_78);
  return;
}

// SetTransition @ 14a81cb10

void __thiscall
SCommonAnimatedSwitcher::SetTransition
          (SCommonAnimatedSwitcher *this,float param_1,ETransitionCurve param_2,
          ECommonSwitcherTransition param_3)

{
  SetTransition(this,param_1,param_2);
  this->TransitionType = param_3;
  return;
}

// SetTransitionType @ 14a81cb70

void __thiscall
SCommonAnimatedSwitcher::SetTransitionType
          (SCommonAnimatedSwitcher *this,ECommonSwitcherTransition param_1)

{
  this->TransitionType = param_1;
  return;
}

// TransitionToIndex @ 14a823500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCommonAnimatedSwitcher::TransitionToIndex(SCommonAnimatedSwitcher *this,int param_1,bool param_2)

{
  atomic<int> *paVar1;
  FCurveSequence *this_00;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  int *piVar12;
  FSlateCurve *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uStackX_c;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined8 local_a0;
  TSharedRef<SWidget,1> local_98;
  TSharedPtr<SWidget,1> local_88;
  TSharedRef<FActiveTimerHandle,1> local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TSharedRef<SWidget,1> local_48 [2];
  
  bVar8 = false;
  bVar7 = false;
  bVar10 = false;
  pTVar11 = SWidgetSwitcher::GetWidget((SWidgetSwitcher *)this,&local_88,param_1);
  (this->PendingActiveWidget).Object = pTVar11->Object;
  pTVar17 = (pTVar11->SharedReferenceCount).ReferenceController;
  if (pTVar17 != (this->PendingActiveWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))();
      }
    }
    (this->PendingActiveWidget).WeakReferenceCount.ReferenceController = pTVar17;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if ((((this->PendingActiveWidget).Object == (SWidget *)0x0) ||
      (pTVar17 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController,
      pTVar17 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar17->SharedReferenceCount < 1)) {
    this->PendingActiveWidgetIndex = -1;
    if (5 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  else {
    this->PendingActiveWidgetIndex = param_1;
    piVar12 = TAttribute<int>::Get((TAttribute<int> *)&this->_padding_);
    this_00 = &this->TransitionSequence;
    iVar3 = *piVar12;
    if ((param_2) ||
       (pFVar13 = FCurveSequence::GetCurve(this_00,0), pFVar13->DurationSeconds <= 0.0)) {
      bVar10 = FCurveSequence::IsPlaying(this_00);
      if ((bVar10) || ((iVar3 < param_1 || (param_1 < iVar3)))) {
        FCurveSequence::JumpToEnd(this_00);
        SWidgetSwitcher::SetActiveWidgetIndex((SWidgetSwitcher *)this,param_1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnActiveIndexChanged,(FReadAccessScope *)local_b8);
        if ((*(int *)&(this->OnActiveIndexChanged).field_0x10 != 0) &&
           (plVar6 = *(longlong **)&(this->OnActiveIndexChanged).field_0x8,
           plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,param_1);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_b8);
      }
    }
    else {
      bVar9 = FCurveSequence::IsPlaying(this_00);
      if (bVar9) {
        bVar10 = FCurveSequence::IsInReverse(this_00);
        if (((bVar10) && (iVar3 < param_1)) ||
           ((bVar10 = FCurveSequence::IsInReverse(this_00), !bVar10 && (param_1 < iVar3)))) {
          this->bTransitioningOut = this->bTransitioningOut == false;
          FCurveSequence::Reverse(this_00);
          if (param_1 != iVar3) {
            return;
          }
        }
        else {
          if (this->bTransitioningOut == false) {
            return;
          }
          if (param_1 != iVar3) {
            return;
          }
          this->bTransitioningOut = this->bTransitioningOut == false;
          FCurveSequence::Reverse(this_00);
        }
        TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnActiveIndexChanged,param_1);
      }
      else if ((iVar3 < param_1) || (param_1 < iVar3)) {
        local_b8[1] = true;
        local_b8[0] = EVisibility::HitTestInvisible.Value.Value;
        local_a0 = 0;
        local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_b0._8_8_ = 0;
        SPanel::SetVisibility((SPanel *)this,(TAttribute<EVisibility> *)local_b8);
        TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnIsTransitioningChanged,true);
        pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
        if (iVar3 < param_1) {
          FCurveSequence::Play(this_00,pTVar14,false,0.0,true);
        }
        else {
          FCurveSequence::PlayReverse(this_00,pTVar14,false,0.0,true);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_98.SharedReferenceCount.ReferenceController._4_4_,
                            local_98.SharedReferenceCount.ReferenceController._0_4_));
        SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)this,&local_88);
        if ((local_88.Object == (SWidget *)0x0) ||
           (local_88.Object == SNullWidget::NullWidget.Object)) {
          this->bTransitioningOut = false;
          SWidgetSwitcher::SetActiveWidgetIndex((SWidgetSwitcher *)this,param_1);
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&this->OnActiveIndexChanged,param_1);
        }
        else {
          this->bTransitioningOut = true;
        }
        if (this->bIsTransitionTimerRegistered == false) {
          this->bIsTransitionTimerRegistered = true;
          local_b8 = (undefined1  [8])0x0;
          local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                     (FWriteAccessScope *)&local_68);
          local_50 = &local_b0;
          puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_b0);
          if (puVar15 == (undefined8 *)0x0) {
            pTVar17 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
          }
          else {
            local_98.SharedReferenceCount.ReferenceController._4_4_ =
                 local_78.SharedReferenceCount.ReferenceController._4_4_;
            local_98.Object = (SWidget *)UpdateTransition;
            local_98.SharedReferenceCount.ReferenceController._0_4_ = 0;
            pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                                ((TSharedFromThis<SWidget,1> *)&this->_padding_,local_48);
            pTVar17 = (pTVar14->SharedReferenceCount).ReferenceController;
            pSVar5 = pTVar14->Object;
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
            }
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar16 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar16;
            *puVar15 = &
                       ___7__TBaseSPMethodDelegateInstance__0A_VSCommonAnimatedSwitcher___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar15[3] = pSVar5;
            puVar15[4] = pTVar17;
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
              UNLOCK();
            }
            bVar8 = true;
            bVar7 = true;
            bVar10 = true;
            puVar15[5] = local_98.Object;
            puVar15[6] = CONCAT44(local_98.SharedReferenceCount.ReferenceController._4_4_,
                                  local_98.SharedReferenceCount.ReferenceController._0_4_);
          }
          if (bVar10) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar17);
          }
          if (bVar7) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar17);
          }
          if (bVar8) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_48[0].SharedReferenceCount.ReferenceController);
          }
          if (local_68.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
          }
          SWidget::RegisterActiveTimer
                    ((SWidget *)this,&local_78,0.0,
                     (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                      *)local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)
                     CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                              local_78.SharedReferenceCount.ReferenceController._0_4_));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// TryTransitionFallbackOfActiveWidget @ 14a8250c0

bool __thiscall
SCommonAnimatedSwitcher::TryTransitionFallbackOfActiveWidget
          (SCommonAnimatedSwitcher *this,int param_1)

{
  ECommonSwitcherTransitionFallbackStrategy EVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  FReadAccessScope local_28;
  
  EVar1 = this->TransitionFallbackStrategy;
  if ((EVar1 == None) || (iVar5 = (int)this->_padding_, iVar5 < 1)) {
    return false;
  }
  if (EVar1 != Previous) {
    if (EVar1 == Next) goto LAB_14a825115;
    if (EVar1 == First) {
      param_1 = 0;
      goto LAB_14a825115;
    }
    if (EVar1 == Last) {
      param_1 = iVar5 + -1;
      goto LAB_14a825115;
    }
  }
  param_1 = param_1 + -1;
LAB_14a825115:
  iVar3 = iVar5 + -1;
  if (param_1 < iVar5 + -1) {
    iVar3 = param_1;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  SWidgetSwitcher::SetActiveWidgetIndex((SWidgetSwitcher *)this,iVar5);
  piVar4 = TAttribute<int>::Get((TAttribute<int> *)&this->_padding_);
  iVar5 = *piVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActiveIndexChanged,
             &local_28);
  if ((*(int *)&(this->OnActiveIndexChanged).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnActiveIndexChanged).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar5);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// TryTransitionFallbackOfPendingWidget @ 14a825190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SCommonAnimatedSwitcher::TryTransitionFallbackOfPendingWidget(SCommonAnimatedSwitcher *this)

{
  ECommonSwitcherTransitionFallbackStrategy EVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<SWidget,1> local_18;
  
  EVar1 = this->TransitionFallbackStrategy;
  if (EVar1 == None) {
    return false;
  }
  iVar6 = (int)this->_padding_;
  if (iVar6 < 1) {
    return false;
  }
  iVar5 = this->PendingActiveWidgetIndex;
  if (EVar1 != Previous) {
    if (EVar1 == Next) goto LAB_14a8251eb;
    if (EVar1 == First) {
      iVar5 = 0;
      goto LAB_14a8251eb;
    }
    if (EVar1 == Last) {
      iVar5 = iVar6 + -1;
      goto LAB_14a8251eb;
    }
  }
  iVar5 = iVar5 + -1;
LAB_14a8251eb:
  iVar3 = iVar6 + -1;
  if (iVar5 < iVar6 + -1) {
    iVar3 = iVar5;
  }
  iVar6 = 0;
  if (0 < iVar3) {
    iVar6 = iVar3;
  }
  pTVar4 = SWidgetSwitcher::GetWidget((SWidgetSwitcher *)this,&local_18,iVar6);
  TWeakPtr<SWidget,1>::operator=<SWidget>(&this->PendingActiveWidget,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((((this->PendingActiveWidget).Object != (SWidget *)0x0) &&
      (pTVar2 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController,
      pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) {
    this->PendingActiveWidgetIndex = iVar6;
    return true;
  }
  this->PendingActiveWidgetIndex = -1;
  if (5 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  return false;
}

// UpdateTransition @ 14a827e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SCommonAnimatedSwitcher::UpdateTransition
          (SCommonAnimatedSwitcher *this,double param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  EActiveTimerReturnType EVar9;
  atomic<int> aVar10;
  int iVar11;
  TSharedPtr<SWidget,1> *pTVar12;
  int *piVar13;
  TSharedRef<SWidget,1> *pTVar14;
  FTSTicker *this_00;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *pTVar15;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  FSharedReferencer<1> FVar16;
  SWidget *pSVar17;
  SWidget *pSVar18;
  float fVar19;
  undefined8 uVar20;
  SWidget *local_1f8;
  FSharedReferencer<1> FStack_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [8];
  ForAnyElementType local_1d8;
  int local_1d0;
  undefined1 local_1c8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  ForAnyElementType FStack_1a0;
  ulonglong local_198;
  undefined8 local_190;
  FSharedReferencer<1> local_188;
  <lambda_1> local_180;
  undefined1 local_178 [32];
  undefined1 local_158 [8];
  void *pvStack_150;
  undefined8 local_148;
  TAttribute<EVisibility> local_140;
  TSharedRef<SWidget,1> local_118;
  TSharedRef<SWidget,1> local_108;
  TSharedPtr<SWidget,1> local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  TSharedPtr<SWidget,1> local_b8;
  TSharedRef<SWidget,1> local_a8;
  TSharedRef<SWidget,1> local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  FReadAccessScope local_78;
  undefined8 local_60 [2];
  undefined8 local_50 [5];
  
  pSVar17 = (SWidget *)0x0;
  local_1e8 = local_1e8 & 0xffffffff00000000;
  if (this->TransitionType == Zoom) {
    local_1e8 = 0;
    fVar19 = GetTransitionProgress(this);
    local_1c8._4_4_ = 0.0;
    local_1c8._8_4_ = 0.0;
    local_1c8._16_8_ = (TVector2<float>_u_0)0x0;
    local_1c8._0_4_ = fVar19 * __real_3e800000 + __real_3f800000;
    local_1c8[0x18] = true;
    local_1c8[0x1c] = true;
    local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = 0;
    local_1c8._12_4_ = local_1c8._0_4_;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->_padding_,(SWidget *)this,
             (TAttribute<TOptional<TTransform2<float>_>_> *)local_1c8,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1a8,(FWriteAccessScope *)&local_e8);
    if (((int)local_198 != 0) && (FStack_1a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a0,0,0,0x10);
      local_198 = local_198 & 0xffffffff00000000;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (FStack_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a0.Data);
    }
    this_01 = &local_1a8;
LAB_14a828022:
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_01->AccessDetector);
  }
  else if (this->TransitionType != FadeOnly) {
    fVar19 = GetTransitionProgress(this);
    if (this->TransitionType == Horizontal) {
      uVar20 = (double)(float)((uint)(fVar19 * __real_43480000) ^
                              __xmm_80000000800000008000000080000000);
      uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      uVar7 = (undefined8)(fVar19 * __real_43480000);
      uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    local_178._20_4_ = (undefined4)(double)uVar7;
    local_178[0x18] = true;
    local_178[0x1c] = true;
    local_148 = 0;
    local_178._0_4_ = ___xmm_3f80000000000000000000003f800000;
    local_178._4_4_ = _UNK_15076b184;
    local_178._8_4_ = _UNK_15076b188;
    local_178._12_4_ = _UNK_15076b18c;
    local_178._16_4_ = (undefined4)(double)uVar20;
    local_158 = (undefined1  [8])0x0;
    pvStack_150 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->_padding_,(SWidget *)this,
             (TAttribute<TOptional<TTransform2<float>_>_> *)local_178,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
    if (pvStack_150 != (void *)0x0) {
      FMemory::Free(pvStack_150);
    }
    this_01 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158;
    goto LAB_14a828022;
  }
  bVar8 = FCurveSequence::IsPlaying(&this->TransitionSequence);
  if (bVar8) goto LAB_14a828418;
  FStack_1f0.ReferenceController =
       (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
  local_1f8 = (SWidget *)0x0;
  if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (FStack_1f0.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FStack_1f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a8280a9;
      }
      LOCK();
      aVar10 = (FStack_1f0.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar10;
      if (bVar8) {
        (FStack_1f0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar10;
    } while (!bVar8);
    if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_1f8 = (this->PendingActiveWidget).Object;
    }
  }
LAB_14a8280a9:
  FVar16.ReferenceController = FStack_1f0.ReferenceController;
  if (this->bTransitioningOut != false) {
    if (local_1f8 != (SWidget *)0x0) {
      local_118.Object = local_1f8;
      local_118.SharedReferenceCount.ReferenceController = FStack_1f0.ReferenceController;
      if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_1f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_1f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_1f8 == (SWidget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      iVar11 = SWidgetSwitcher::GetWidgetIndex((SWidgetSwitcher *)this,&local_118);
      if (iVar11 != -1) goto LAB_14a8281a0;
    }
    if (5 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    bVar8 = TryTransitionFallbackOfPendingWidget(this);
    if (bVar8) {
      local_188.ReferenceController =
           (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
      local_1f8 = pSVar17;
      if (local_188.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (local_188.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_188.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14a828176;
          }
          LOCK();
          aVar10 = (local_188.ReferenceController)->SharedReferenceCount;
          bVar8 = aVar2 == aVar10;
          if (bVar8) {
            (local_188.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar10 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar10;
        } while (!bVar8);
        local_1f8 = (this->PendingActiveWidget).Object;
      }
LAB_14a828176:
      local_190 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ReferenceController);
      FVar16.ReferenceController = FStack_1f0.ReferenceController;
    }
  }
LAB_14a8281a0:
  pSVar18 = pSVar17;
  if (local_1f8 != (SWidget *)0x0) {
    pSVar18 = (SWidget *)&DAT_00000001;
    pTVar12 = SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)this,&local_b8);
    if (pTVar12->Object != local_1f8) {
      pSVar17 = (SWidget *)&DAT_00000001;
    }
  }
  if (pSVar18 != (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  if ((char)pSVar17 == '\0') {
    if (&this->PendingActiveWidget != (TWeakPtr<SWidget,1> *)local_50) {
      pTVar4 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
      (this->PendingActiveWidget).Object = (SWidget *)0x0;
      (this->PendingActiveWidget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    this->PendingActiveWidgetIndex = -1;
  }
  else {
    bVar8 = this->bTransitioningOut;
    this->bTransitioningOut = bVar8 == false;
    if (bVar8 != false) {
      if ((local_1f8 == (SWidget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar16.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_1f8 == (SWidget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar16.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108.Object = local_1f8;
      local_108.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
      iVar11 = SWidgetSwitcher::GetWidgetIndex((SWidgetSwitcher *)this,&local_108);
      SWidgetSwitcher::SetActiveWidgetIndex((SWidgetSwitcher *)this,iVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar16.ReferenceController);
      if (&this->PendingActiveWidget != (TWeakPtr<SWidget,1> *)local_60) {
        pTVar4 = (this->PendingActiveWidget).WeakReferenceCount.ReferenceController;
        (this->PendingActiveWidget).Object = (SWidget *)0x0;
        (this->PendingActiveWidget).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      this->PendingActiveWidgetIndex = -1;
      piVar13 = TAttribute<int>::Get((TAttribute<int> *)&this->_padding_);
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnActiveIndexChanged,*piVar13);
    }
    SWidgetSwitcher::GetActiveWidget((SWidgetSwitcher *)this,&local_f8);
    if ((local_f8.Object != (SWidget *)0x0) && (local_f8.Object != SNullWidget::NullWidget.Object))
    {
      bVar8 = FCurveSequence::IsInReverse(&this->TransitionSequence);
      if (bVar8) {
        pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_a8);
        FCurveSequence::PlayReverse(&this->TransitionSequence,pTVar14,false,0.0,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        goto LAB_14a8283fe;
      }
      pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
      FCurveSequence::Play(&this->TransitionSequence,pTVar14,false,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
LAB_14a8283fe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
LAB_14a828418:
  bVar8 = FCurveSequence::IsPlaying(&this->TransitionSequence);
  if (bVar8) {
    SWidget::Invalidate((SWidget *)this,Paint);
    EVar9 = Continue;
  }
  else {
    local_140.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_140.bIsSet = true;
    local_140.Getter._16_8_ = 0;
    local_140.Getter._0_8_ = 0;
    local_140.Getter._8_8_ = 0;
    SPanel::SetVisibility((SPanel *)this,&local_140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnIsTransitioningChanged,&local_78);
    if ((*(int *)&(this->OnIsTransitioningChanged).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnIsTransitioningChanged).field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    bVar3 = (byte)this->_padding_;
    this->bIsTransitionTimerRegistered = false;
    if ((bVar3 & 0x10) == 0) {
      *(byte *)&this->_padding_ = bVar3 | 0x10;
      SWidget::Invalidate((SWidget *)this,PaintAndVolatility);
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_180.__this = this;
    pTVar15 = TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
              CreateSPLambda<SCommonAnimatedSwitcher,_SCommonAnimatedSwitcher::UpdateTransition_::__l60::<lambda_1>_>
                        ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_1e0,this
                         ,&local_180);
    FTSTicker::AddTicker(this_00,&local_88,pTVar15,0.0);
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
               (FWriteAccessScope *)&local_d0);
    if ((local_1d0 != 0) && (local_1d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,0x10);
      local_1d0 = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1e0);
    EVar9 = Stop;
  }
  return EVar9;
}

