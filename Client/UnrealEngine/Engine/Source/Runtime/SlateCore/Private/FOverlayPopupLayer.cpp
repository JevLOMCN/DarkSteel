// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FOverlayPopupLayer @ 1425bd390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOverlayPopupLayer * __thiscall
FOverlayPopupLayer::FOverlayPopupLayer
          (FOverlayPopupLayer *this,TSharedRef<SWindow,1> *param_1,TSharedRef<SWidget,1> *param_2,
          TSharedPtr<SOverlay,1> *param_3)

{
  SWindow *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> *paVar6;
  FOverlayPopupLayer *pFVar7;
  FScopedWidgetSlotArguments *pFVar8;
  undefined1 auStack_f8 [32];
  SWidget *local_d8;
  FSharedReferencer<1> local_d0;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPopupLayer__6B_;
  this->_padding_ = (longlong)pSVar1;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->_padding_ = (longlong)&___7FOverlayPopupLayer__6B_;
  (this->HostWindow).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->HostWindow).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Overlay).Object = param_3->Object;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  (this->Overlay).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->Overlay).Object == (SOverlay *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOverlayPopupLayer *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar8 = SOverlay::AddSlot((this->Overlay).Object,&local_c8,-1);
  local_d0.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_d8 = param_2->Object;
  if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar8->_padding_ != &local_d8) {
    pFVar8->_padding_ = (longlong)local_d8;
    local_d8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// GetAbsoluteClientRect @ 1425dd320

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall
FOverlayPopupLayer::GetAbsoluteClientRect
          (FOverlayPopupLayer *this,FSlateRect *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateRect *pFVar3;
  
  if ((this->HostWindow).Object == (SWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateRect *)(*pcVar1)();
      return pFVar3;
    }
  }
  SWindow::GetClientRectInScreen((this->HostWindow).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Remove @ 1425f7e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOverlayPopupLayer::Remove(FOverlayPopupLayer *this)

{
  SOverlay *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  undefined1 local_18 [16];
  
  if ((this->Overlay).Object == (SOverlay *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->Overlay).Object;
  pTVar3 = (TSharedRef<SWidget,1> *)(**(code **)(this->_padding_ + 0x10))(this,local_18);
  SOverlay::RemoveSlot(this_00,pTVar3);
  return;
}

