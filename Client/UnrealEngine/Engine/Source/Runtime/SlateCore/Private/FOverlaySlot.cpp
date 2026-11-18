// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FOverlaySlot @ 1425bd530

FOverlaySlot * __thiscall SOverlay::FOverlaySlot::FOverlaySlot(FOverlaySlot *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FOverlaySlot *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
        _vftable__for__TSlotBase<SOverlay::FOverlaySlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FOverlaySlot *)0x0;
  }
  *plVar1 = 0;
  this->_padding_ = 0;
  if ((plVar1 < pFVar4) || (pFVar4 + 1 <= plVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FOverlaySlot *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SOverlay::FOverlaySlot>__;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  this->ZOrder = param_1;
  return this;
}

// Construct @ 1425d2bf0

void __thiscall
SOverlay::FOverlaySlot::Construct(FOverlaySlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong *plVar1;
  TOptional<int> *pTVar2;
  longlong *plVar3;
  FOverlaySlot *pFVar4;
  
  pTVar2 = &param_2->_ZOrder;
  if ((param_2->_ZOrder).bIsSet == false) {
    pTVar2 = (TOptional<int> *)&this->ZOrder;
  }
  this->ZOrder = pTVar2->TypedValue;
  TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if ((char)param_2->_padding_ != '\0') {
    pFVar4 = this;
    if (&this->_padding_ == (longlong *)0x0) {
      pFVar4 = (FOverlaySlot *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->_padding_,(ISlateAttributeContainer *)&pFVar4->_padding_,
             (TAttribute<FMargin> *)&param_2->_padding_,None);
  }
  plVar1 = (longlong *)((longlong)&this->_padding_ + 4);
  plVar3 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar3 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar3;
  plVar3 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar3 = plVar1;
  }
  *(int *)plVar1 = (int)*plVar3;
  return;
}

// SetZOrder @ 1425febb0

void __thiscall SOverlay::FOverlaySlot::SetZOrder(FOverlaySlot *this,int param_1)

{
  SWidget *this_00;
  FSlateInvalidationWidgetIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  SWidget *pSVar5;
  FOverlaySlot *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res18 [16];
  ulonglong uVar9;
  
  pSVar5 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar5 == (SWidget *)0x0) {
    this->ZOrder = param_1;
    `SOverlay::FOverlaySlot::SetZOrder'::__l57::<lambda_1>::operator()(local_res18);
    return;
  }
  if (this->ZOrder != param_1) {
    this_00 = pSVar5 + 1;
    if (0x7fffffff < (uint)param_1) {
      if ((pSVar5[1].FastPathProxyHandle.WidgetIndex == (FSlateInvalidationWidgetIndex)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerChildren.Num() != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SOverlay.cpp"
                             ,0x23,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = TPanelChildren<SOverlay::FOverlaySlot>::operator[]
                         ((TPanelChildren<SOverlay::FOverlaySlot> *)this_00,
                          (int)pSVar5[1].FastPathProxyHandle.WidgetIndex + -1);
      if (pFVar6 == this) {
        return;
      }
      param_1 = pFVar6->ZOrder + 1;
      if (this->ZOrder == param_1) {
        return;
      }
    }
    FVar1 = pSVar5[1].FastPathProxyHandle.WidgetIndex;
    bVar3 = false;
    uVar9 = 0;
    uVar8 = 0;
    uVar11 = uVar9;
    uVar7 = uVar8;
    if (0 < (int)FVar1) {
      do {
        uVar7 = (uint)uVar11;
        pFVar6 = TPanelChildren<SOverlay::FOverlaySlot>::operator[]
                           ((TPanelChildren<SOverlay::FOverlaySlot> *)this_00,uVar7);
        if (pFVar6 == this) {
          bVar3 = true;
          goto LAB_1425fec7b;
        }
        uVar7 = uVar7 + 1;
        uVar11 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)FVar1);
      bVar3 = false;
    }
LAB_1425fec7b:
    if ((((int)pSVar5[1].FastPathProxyHandle.WidgetIndex <= (int)uVar7) || (!bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerChildren.IsValidIndex(ChildIndexToMove) && bFound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SOverlay.cpp"
                           ,0x40,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar1 = pSVar5[1].FastPathProxyHandle.WidgetIndex;
    uVar11 = uVar9;
    if (0 < (int)FVar1) {
      do {
        uVar8 = (uint)uVar9;
        uVar4 = 0;
        if ((int)uVar8 < (int)pSVar5[1].FastPathProxyHandle.WidgetIndex) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = *(FOverlaySlot **)
                  (*(longlong *)&pSVar5[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId +
                  uVar11 * 8);
        if ((param_1 < pFVar6->ZOrder) && (pFVar6 != this)) break;
        uVar8 = uVar8 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < (longlong)(int)FVar1);
    }
    if ((int)FVar1 <= (int)uVar8) {
      uVar10 = (int)FVar1 - 1;
      uVar4 = 0;
      if ((int)uVar10 < (int)pSVar5[1].FastPathProxyHandle.WidgetIndex) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FOverlaySlot **)
           (*(longlong *)&pSVar5[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId +
           (longlong)(int)uVar10 * 8) == this) {
        this->ZOrder = param_1;
        return;
      }
    }
    this->ZOrder = param_1;
    if (uVar7 != uVar8) {
      if ((int)uVar7 < (int)uVar8) {
        uVar8 = uVar8 - 1;
      }
      TPanelChildren<SOverlay::FOverlaySlot>::Move
                ((TPanelChildren<SOverlay::FOverlaySlot> *)this_00,uVar7,uVar8);
    }
  }
  return;
}

// operator() @ 150490fc0

bool __thiscall `SOverlay::FOverlaySlot::SetZOrder'::__l57::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6532182839562076266>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6532182839562076266>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

