// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 15

// Construct @ 14a7c5940

void __thiscall SCommonButton::Construct(SCommonButton *this,FArguments *param_1)

{
  byte *pbVar1;
  EWidgetUpdateFlags EVar2;
  bool bVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  FArguments *pFVar8;
  EWidgetUpdateFlags EVar9;
  undefined1 local_598 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_590;
  ForAnyElementType FStack_588;
  ulonglong local_580;
  FDestructionSentinel local_578;
  FArguments local_560;
  
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDoubleClicked,&param_1->_OnDoubleClicked);
  pFVar8 = SButton::FArguments::FArguments(&local_560);
  pFVar8->_ButtonStyle = param_1->_ButtonStyle;
  pFVar8->_HAlign = param_1->_HAlign;
  pFVar8->_VAlign = param_1->_VAlign;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar8->_OnSlateButtonDragDetected,&param_1->_OnSlateButtonDragDetected);
  TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar8->_OnSlateButtonDragOver,&param_1->_OnSlateButtonDragOver);
  if (&param_1->_OnSlateButtonDragEnter != &pFVar8->_OnSlateButtonDragEnter) {
    local_598 = (undefined1  [8])0x0;
    local_590.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_588.Data = FStack_588.Data & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSlateButtonDragEnter,(FReadAccessScope *)&local_578);
    if ((*(int *)&(param_1->_OnSlateButtonDragEnter).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnSlateButtonDragEnter).field_0x8,
       plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_598);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_578);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnSlateButtonDragEnter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_598);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_598,
               (FWriteAccessScope *)&local_578);
    if (((int)FStack_588.Data != 0) &&
       (local_590.AccessDetector.State != (atomic<unsigned___int64>)0x0)) {
      (*(code *)**(undefined8 **)local_590.AccessDetector.State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_590,0,0,0x10);
      FStack_588.Data = FStack_588.Data & 0xffffffff00000000;
    }
    if (local_578.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
    }
    if (local_590.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_590.AccessDetector.State);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_598);
  }
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar8->_OnSlateButtonDragLeave,&param_1->_OnSlateButtonDragLeave);
  TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar8->_OnSlateButtonDrop,&param_1->_OnSlateButtonDrop);
  pFVar8->_ClickMethod = param_1->_ClickMethod;
  pFVar8->_TouchMethod = param_1->_TouchMethod;
  pFVar8->_PressMethod = param_1->_PressMethod;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar8->_OnClicked,&param_1->_OnClicked);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar8->_OnPressed,&param_1->_OnPressed);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar8->_OnReleased,&param_1->_OnReleased);
  pFVar8->_IsFocusable = param_1->_IsFocusable;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar8->_OnReceivedFocus,&param_1->_OnReceivedFocus);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar8->_OnLostFocus,&param_1->_OnLostFocus);
  pTVar5 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_Content).Widget.Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = pSVar6;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SButton::Construct((SButton *)this,pFVar8);
  SButton::FArguments::~FArguments(&local_560);
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar9 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar9;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar9);
  local_598._0_2_ = 0x100;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 1) ^ 8) & 8;
  local_580 = 0;
  local_590.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_588.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 3),(SWidget *)this,(TAttribute<bool> *)local_598,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_590,(FWriteAccessScope *)&local_578);
  if (((int)local_580 != 0) && (FStack_588.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_588.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_588,0,0,0x10);
    local_580 = local_580 & 0xffffffff00000000;
  }
  if (local_578.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
  }
  if (FStack_588.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_588.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_590.AccessDetector);
  this->bIsButtonEnabled = param_1->_IsButtonEnabled;
  bVar3 = param_1->_IsInteractionEnabled;
  this->bHovered = false;
  this->bIsInteractionEnabled = bVar3;
  return;
}

// IsInteractable @ 14a7f5e80

bool __thiscall SCommonButton::IsInteractable(SCommonButton *this)

{
  if ((this->bIsButtonEnabled != false) && (this->bIsInteractionEnabled != false)) {
    return true;
  }
  return false;
}

// OnKeyDown @ 14a7fd0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButton::OnKeyDown
          (SCommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  char cVar1;
  UCommonUISettings *pUVar2;
  FSlateApplication *pFVar3;
  
  pUVar2 = ICommonUIModule::GetSettings();
  if (pUVar2->CommonButtonAcceptKeyHandling == Ignore) {
    pFVar3 = FSlateApplication::Get();
    cVar1 = (**(code **)(*(longlong *)pFVar3 + 0xb0))(pFVar3);
    if (cVar1 == '\0') {
      FReply::FReply(__return_storage_ptr__,false);
      return __return_storage_ptr__;
    }
  }
  SButton::OnKeyDown((SButton *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyUp @ 14a7fd180

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButton::OnKeyUp
          (SCommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  char cVar1;
  UCommonUISettings *pUVar2;
  FSlateApplication *pFVar3;
  
  pUVar2 = ICommonUIModule::GetSettings();
  if (pUVar2->CommonButtonAcceptKeyHandling == Ignore) {
    pFVar3 = FSlateApplication::Get();
    cVar1 = (**(code **)(*(longlong *)pFVar3 + 0xb0))(pFVar3);
    if (cVar1 == '\0') {
      FReply::FReply(__return_storage_ptr__,false);
      return __return_storage_ptr__;
    }
  }
  SButton::OnKeyUp((SButton *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 14a7fd240

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButton::OnMouseButtonDoubleClick
          (SCommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReply *this_00;
  FReadAccessScope local_1c8;
  FReply local_1a8;
  FReply local_e8;
  
  cVar2 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar2 == '\0') {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClicked,
             &local_1c8);
  if (((*(int *)&(this->OnDoubleClicked).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnDoubleClicked).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1c8);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClicked,
               &local_1c8);
    if (*(int *)&(this->OnDoubleClicked).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->OnDoubleClicked).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_1a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
    if ((char)local_1a8._padding_ != '\0') {
      FReply::FReply(__return_storage_ptr__,&local_1a8);
      this_00 = &local_1a8;
      goto LAB_14a7fd3a6;
    }
    FReply::~FReply(&local_1a8);
  }
  (**(code **)(this->_padding_ + 0x58))(this,&local_e8,param_1,param_2);
  if ((char)local_e8._padding_ == '\0') {
    SButton::OnMouseButtonDoubleClick((SButton *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    FReply::FReply(__return_storage_ptr__,&local_e8);
  }
  this_00 = &local_e8;
LAB_14a7fd3a6:
  FReply::~FReply(this_00);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14a7fd440

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButton::OnMouseButtonDown
          (SCommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  char cVar1;
  FReply *pFVar2;
  FReply local_178;
  FReply local_c0;
  
  cVar1 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar1 == '\0') {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    pFVar2 = &local_178;
  }
  else {
    pFVar2 = SButton::OnMouseButtonDown((SButton *)this,&local_c0,param_1,param_2);
    FReply::FReply(__return_storage_ptr__,pFVar2);
    pFVar2 = &local_c0;
  }
  FReply::~FReply(pFVar2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14a7fd540

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButton::OnMouseButtonUp
          (SCommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  char cVar1;
  bool bVar2;
  FReply *pFVar3;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,true);
  cVar1 = (**(code **)(this->_padding_ + 0x1b0))(this);
  if (cVar1 == '\0') {
    bVar2 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar2) {
      (**(code **)(this->_padding_ + 600))(this);
      FReply::ReleaseMouseCapture(__return_storage_ptr__);
    }
  }
  else {
    pFVar3 = SButton::OnMouseButtonUp((SButton *)this,&local_c8,param_1,param_2);
    FReply::operator=(__return_storage_ptr__,pFVar3);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OnMouseEnter @ 14a7fd600

void __thiscall
SCommonButton::OnMouseEnter(SCommonButton *this,FGeometry *param_1,FPointerEvent *param_2)

{
  byte *pbVar1;
  char cVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (param_2->bIsTouchEvent == false) {
    local_30[0] = this->bIsInteractionEnabled != false;
    cVar2 = *(char *)((longlong)&this->_padding_ + 3);
    local_30[1] = true;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 1) ^ 8) & 8;
    this->bHovered = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&this->_padding_ + 3),(SWidget *)this,(TAttribute<bool> *)local_30,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    SButton::OnMouseEnter((SButton *)this,param_1,param_2);
    if ((cVar2 == '\0') && (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
      SButton::ExecuteHoverStateChanged((SButton *)this,true);
    }
  }
  return;
}

// OnMouseLeave @ 14a7fd810

void __thiscall SCommonButton::OnMouseLeave(SCommonButton *this,FPointerEvent *param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (param_1->bIsTouchEvent == false) {
    this->bHovered = false;
    cVar2 = *(char *)((longlong)&this->_padding_ + 3);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 1) ^ 8) & 8;
    local_30[0] = false;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&this->_padding_ + 3),(SWidget *)this,(TAttribute<bool> *)local_30,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    SButton::OnMouseLeave((SButton *)this,param_1);
    if ((cVar2 != '\0') && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
      SButton::ExecuteHoverStateChanged((SButton *)this,true);
    }
  }
  else {
    bVar3 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x00014a7fd846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 600))(this);
      return;
    }
  }
  return;
}

// OnPaint @ 14a7fe4c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SCommonButton::OnPaint
          (SCommonButton *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  bool bVar1;
  int iVar2;
  
  if ((param_7) && (this->bIsButtonEnabled != false)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar2 = SButton::OnPaint((SButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,bVar1);
  return iVar2;
}

// OnTouchMoved @ 14a7ffaf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButton::OnTouchMoved
          (SCommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FReply *pFVar2;
  FDeprecateSlateVector2D local_res10;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,true);
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    local_res10 = param_2->ScreenSpacePosition;
    bVar1 = FGeometry::IsUnderLocation(param_1,(FDeprecateVector2DParameter *)&local_res10);
    if (!bVar1) {
      (**(code **)(this->_padding_ + 600))(this);
      FReply::ReleaseMouseCapture(__return_storage_ptr__);
    }
  }
  else {
    pFVar2 = SWidget::OnTouchMoved((SWidget *)this,&local_c8,param_1,param_2);
    FReply::operator=(__return_storage_ptr__,pFVar2);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// Press @ 14a802e40

void __thiscall SCommonButton::Press(SCommonButton *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar1 != '\0') {
    SButton::Press((SButton *)this);
    return;
  }
  return;
}

// SetIsButtonEnabled @ 14a818f30

void __thiscall SCommonButton::SetIsButtonEnabled(SCommonButton *this,bool param_1)

{
  this->bIsButtonEnabled = param_1;
  return;
}

// SetIsButtonFocusable @ 14a818f40

void __thiscall SCommonButton::SetIsButtonFocusable(SCommonButton *this,bool param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | param_1;
  return;
}

// SetIsInteractionEnabled @ 14a8191e0

void __thiscall SCommonButton::SetIsInteractionEnabled(SCommonButton *this,bool param_1)

{
  byte *pbVar1;
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (this->bIsInteractionEnabled != param_1) {
    this_00 = (TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
               *)((longlong)&this->_padding_ + 3);
    this->bIsInteractionEnabled = param_1;
    if ((this->bHovered == false) || (!param_1)) {
      local_30[0] = false;
    }
    else {
      local_30[0] = true;
    }
    if (this_00->Value != local_30[0]) {
      local_30[1] = true;
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 1) ^ 8) & 8;
      local_18 = 0;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign(this_00,(SWidget *)this,(TAttribute<bool> *)local_30,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_48);
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
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
      SButton::ExecuteHoverStateChanged((SButton *)this,false);
      return;
    }
  }
  return;
}

