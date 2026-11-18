// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// Advanced_IsInvalidationRoot @ 1429c7480

bool __thiscall SVirtualWindow::Advanced_IsInvalidationRoot(SVirtualWindow *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 3 & 1);
}

// ComputeDesiredSize @ 1429cf6c0

TVector2<double> * __thiscall
SVirtualWindow::ComputeDesiredSize
          (SVirtualWindow *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Construct @ 1429d9220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SVirtualWindow::Construct(SVirtualWindow *this,FArguments *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  FDeprecateVector2DParameter FVar3;
  STooltipPresenter *pSVar4;
  FSharedReferencer<1> FVar5;
  SPopup *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  FGenericWindow *this_00;
  TSharedRef<FGenericWindow,1> *pTVar11;
  FScopedWidgetSlotArguments *pFVar12;
  FArguments *pFVar13;
  FArguments *pFVar14;
  undefined1 auStackY_5d8 [32];
  T0RequiredArgs local_5a8;
  T0RequiredArgs local_5a7 [3];
  FLLMScope local_5a4;
  FLLMScope local_5a0 [2];
  SPopup *local_598;
  FSharedReferencer<1> local_590;
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs> local_588;
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs> local_570;
  float local_558;
  float fStack_554;
  TRawPtrProxy<FGenericWindow> local_550;
  FName local_548;
  FMemScope local_540;
  FName local_538;
  FMemScope local_530;
  TSharedRef<SWidget,1> local_528;
  STooltipPresenter *local_518;
  TReferenceControllerBase<1> *pTStack_510;
  SWidget *local_508;
  TReferenceControllerBase<1> *pTStack_500;
  TSharedRef<FGenericWindow,1> local_4f8;
  FArguments local_4e8;
  FArguments local_2e0;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 2;
  this->bIsFocusable = false;
  this->bShouldResolveDeferred = true;
  local_558 = (float)(param_1->_Size).field0_0x0._s_0.X;
  fStack_554 = (float)(param_1->_Size).field0_0x0._s_0.Y;
  FVar3._4_4_ = fStack_554;
  FVar3._0_4_ = local_558;
  SWindow::SetCachedSize((SWindow *)this,FVar3);
  this_00 = ::operator_new(0x18);
  local_550.Object = (FGenericWindow *)0x0;
  if (this_00 != (FGenericWindow *)0x0) {
    local_550.Object = FGenericWindow::FGenericWindow(this_00);
  }
  pTVar11 = TSharedRef<FGenericWindow,1>::TSharedRef<FGenericWindow,1><FGenericWindow>
                      (&local_4f8,&local_550);
  SWindow::SetNativeWindow((SWindow *)this,pTVar11);
  SWindow::ConstructWindowInternals((SWindow *)this);
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar12 = SOverlay::AddSlot((SOverlay *)this->_padding_,&local_d8,-1);
  pFVar13 = SPopup::FArguments::FArguments(&local_2e0);
  pFVar14 = STooltipPresenter::FArguments::FArguments(&local_4e8);
  FLLMScope::FLLMScope(&local_5a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_548 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_540,&local_548,true);
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>
            (&local_588,"STooltipPresenter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SVirtualWindow.cpp"
             ,0x1c,&local_5a8);
  FMemScope::~FMemScope(&local_540);
  FLLMScope::~FLLMScope(&local_5a4);
  if (local_588._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_588._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_588._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_518 = (this->TooltipPresenter).Object;
  pTStack_510 = (this->TooltipPresenter).SharedReferenceCount.ReferenceController;
  (this->TooltipPresenter).Object = local_588._Widget.Object;
  (this->TooltipPresenter).SharedReferenceCount.ReferenceController =
       local_588._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_510);
  pSVar4 = local_588._Widget.Object;
  if ((local_588._Widget.Object == (STooltipPresenter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_588._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  STooltipPresenter::Construct(local_588._Widget.Object,pFVar14);
  if ((local_588._Widget.Object == (STooltipPresenter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_588._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_588._Widget.Object)->_padding_ + 0x228))(local_588._Widget.Object);
    bVar10 = 0;
    if (cVar9 != '\0') goto LAB_1429d9483;
  }
  else {
LAB_1429d9483:
    bVar10 = 0x20;
  }
  *(byte *)&(local_588._Widget.Object)->_padding_ =
       (byte)(local_588._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_588._Widget.Object)->_padding_ =
       (byte)(local_588._Widget.Object)->_padding_ | bVar10;
  if ((local_588._Widget.Object == (STooltipPresenter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_588._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_588._Widget.Object == (STooltipPresenter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar5.ReferenceController = local_588._Widget.SharedReferenceCount.ReferenceController;
  local_588._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_588._Widget.Object = (STooltipPresenter *)0x0;
  if ((pSVar4 == (STooltipPresenter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_508 = (pFVar13->_Content).Widget.Object;
  pTStack_500 = (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_500);
  FLLMScope::FLLMScope(local_5a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_538 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_530,&local_538,true);
  TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>::TSlateDecl<SPopup,RequiredArgs::T0RequiredArgs>
            (&local_570,"SPopup",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SVirtualWindow.cpp"
             ,0x1a,local_5a7);
  FMemScope::~FMemScope(&local_530);
  FLLMScope::~FLLMScope(local_5a0);
  pSVar6 = local_570._Widget.Object;
  if ((local_570._Widget.Object == (SPopup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_570._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SPopup::Construct(local_570._Widget.Object,pFVar13);
  if ((local_570._Widget.Object == (SPopup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_570._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar9 = (**(code **)(*(longlong *)local_570._Widget.Object + 0x228))(local_570._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_1429d9664;
  }
  bVar10 = 0x20;
LAB_1429d9664:
  (local_570._Widget.Object)->field_0x30 = (local_570._Widget.Object)->field_0x30 & 0xdf;
  (local_570._Widget.Object)->field_0x30 = (local_570._Widget.Object)->field_0x30 | bVar10;
  if ((local_570._Widget.Object == (SPopup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (local_570._Widget.Object)->field_0x31 = (local_570._Widget.Object)->field_0x31 | 4;
  if ((local_570._Widget.Object == (SPopup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar7.ReferenceController = local_570._Widget.SharedReferenceCount.ReferenceController;
  local_570._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_570._Widget.Object = (SPopup *)0x0;
  if ((pSVar6 == (SPopup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_598 = pSVar6;
  local_590.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SPopup **)&pFVar12->_padding_ != &local_598) {
    pFVar12->_padding_ = (longlong)pSVar6;
    local_598 = (SPopup *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_590);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_590.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e8._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2e0);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_d8);
  local_528.Object = SNullWidget::NullWidget.Object;
  local_528.SharedReferenceCount.ReferenceController =
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
  SWindow::SetContent((SWindow *)this,&local_528);
  return;
}

// OnArrangeChildren @ 1429f9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SVirtualWindow::OnArrangeChildren
          (SVirtualWindow *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  FGeometry local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  SCompoundWidget::OnArrangeChildren((SCompoundWidget *)this,param_1,param_2);
  if (param_2->bAllow3DWidgets != false) {
    pTVar5 = SWindow::GetChildWindows((SWindow *)this);
    uVar8 = 0;
    iVar6 = pTVar5->ArrayNum;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar8 < iVar6) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_70 = (longlong)iVar6;
          local_78 = (longlong)(int)uVar8;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar1 = (pTVar5->AllocatorInstance).Data;
        SWindow::GetWindowGeometryInWindow(*(SWindow **)(pFVar1 + lVar7),&local_68);
        SWidget::ArrangeChildren(*(SWidget **)(pFVar1 + lVar7),&local_68,param_2,false);
        iVar6 = pTVar5->ArrayNum;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar8 < iVar6);
    }
  }
  return;
}

// OnPaint @ 142a01150

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SVirtualWindow::OnPaint
          (SVirtualWindow *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  if (this->bShouldResolveDeferred != false) {
    FSlateWindowElementList::BeginDeferredGroup(param_4);
  }
  iVar1 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  if (this->bShouldResolveDeferred != false) {
    FSlateWindowElementList::EndDeferredGroup(param_4);
  }
  return iVar1;
}

// OnQueryPopupMethod @ 142a01620

FPopupMethodReply * __thiscall
SVirtualWindow::OnQueryPopupMethod(SVirtualWindow *this,FPopupMethodReply *__return_storage_ptr__)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = UseCurrentWindow;
  __return_storage_ptr__->ShouldThrottle = No;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// OnVisualizeTooltip @ 142a02830

bool __thiscall
SVirtualWindow::OnVisualizeTooltip(SVirtualWindow *this,TSharedPtr<SWidget,1> *param_1)

{
  STooltipPresenter *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  if ((this->TooltipPresenter).Object == (STooltipPresenter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->TooltipPresenter).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  STooltipPresenter::SetContent(this_00,&local_18);
  return true;
}

// SetIsFocusable @ 142a0a7b0

void __thiscall SVirtualWindow::SetIsFocusable(SVirtualWindow *this,bool param_1)

{
  this->bIsFocusable = param_1;
  return;
}

// SetShouldResolveDeferred @ 142a0bd80

void __thiscall SVirtualWindow::SetShouldResolveDeferred(SVirtualWindow *this,bool param_1)

{
  this->bShouldResolveDeferred = param_1;
  return;
}

// SupportsKeyboardFocus @ 142a0f2b0

bool __thiscall SVirtualWindow::SupportsKeyboardFocus(SVirtualWindow *this)

{
  return this->bIsFocusable;
}

