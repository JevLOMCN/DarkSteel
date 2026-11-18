// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FInputModeGameAndUI @ 14834a5e0

FInputModeGameAndUI * __thiscall FInputModeGameAndUI::FInputModeGameAndUI(FInputModeGameAndUI *this)

{
  this->MouseLockMode = DoNotLock;
  this->bHideCursorDuringCapture = true;
  this->_padding_ = (longlong)&___7FInputModeGameAndUI__6B_;
  (this->WidgetToFocus).Object = (SWidget *)0x0;
  (this->WidgetToFocus).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FInputModeGameAndUI @ 14834d3f0

void __thiscall FInputModeGameAndUI::~FInputModeGameAndUI(FInputModeGameAndUI *this)

{
  this->_padding_ = (longlong)&___7FInputModeGameAndUI__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetToFocus).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FInputModeDataBase__6B_;
  return;
}

// ApplyInputMode @ 148357b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInputModeGameAndUI::ApplyInputMode
          (FInputModeGameAndUI *this,FReply *param_1,UGameViewportClient *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TSharedPtr<SViewport,1> local_38;
  TSharedRef<SViewport,1> local_28;
  TSharedPtr<SWidget,1> local_18;
  
  UGameViewportClient::GetGameViewportWidget(param_2,&local_38);
  if (local_38.Object == (SViewport *)0x0) goto LAB_148357cab;
  if (this->MouseLockMode == LockAlways) {
LAB_148357bc3:
    bVar2 = true;
  }
  else {
    if (this->MouseLockMode == LockInFullscreen) {
      bVar2 = UGameViewportClient::IsExclusiveFullscreenViewport(param_2);
      if (bVar2) goto LAB_148357bc3;
    }
    bVar2 = false;
  }
  if (local_38.Object == (SViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.Object = local_38.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_38.Object == (SViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = (this->WidgetToFocus).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->WidgetToFocus).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FInputModeDataBase::SetFocusAndLocking
            ((FInputModeDataBase *)this,param_1,&local_18,bVar2,&local_28);
  FReply::ReleaseMouseCapture(param_1);
  UGameViewportClient::SetMouseLockMode(param_2,this->MouseLockMode);
  param_2->bIgnoreInput = false;
  UGameViewportClient::SetHideCursorDuringCapture(param_2,this->bHideCursorDuringCapture);
  UGameViewportClient::SetMouseCaptureMode(param_2,CaptureDuringMouseDown);
LAB_148357cab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// GetDebugDisplayName @ 148380830

FString * __thiscall FInputModeGameAndUI::GetDebugDisplayName(FInputModeGameAndUI *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::DisplayName,L"Game and UI");
      atexit(`FInputModeGameAndUI::GetDebugDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// ShouldFlushInputOnViewportFocus @ 1483ac430

bool __thiscall FInputModeGameAndUI::ShouldFlushInputOnViewportFocus(FInputModeGameAndUI *this)

{
  return false;
}

