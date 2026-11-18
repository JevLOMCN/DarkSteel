// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FInputModeUIOnly @ 14834a630

FInputModeUIOnly * __thiscall FInputModeUIOnly::FInputModeUIOnly(FInputModeUIOnly *this)

{
  this->MouseLockMode = LockInFullscreen;
  this->_padding_ = (longlong)&___7FInputModeUIOnly__6B_;
  (this->WidgetToFocus).Object = (SWidget *)0x0;
  (this->WidgetToFocus).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FInputModeUIOnly @ 14834d450

void __thiscall FInputModeUIOnly::~FInputModeUIOnly(FInputModeUIOnly *this)

{
  this->_padding_ = (longlong)&___7FInputModeUIOnly__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetToFocus).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FInputModeDataBase__6B_;
  return;
}

// ApplyInputMode @ 148357e70

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
FInputModeUIOnly::ApplyInputMode
          (FInputModeUIOnly *this,FReply *param_1,UGameViewportClient *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TSharedPtr<SViewport,1> local_38;
  TSharedRef<SViewport,1> local_28;
  TSharedPtr<SWidget,1> local_18;
  
  UGameViewportClient::GetGameViewportWidget(param_2,&local_38);
  if (local_38.Object == (SViewport *)0x0) goto LAB_148357f9f;
  if (this->MouseLockMode == LockAlways) {
LAB_148357ec3:
    bVar2 = true;
  }
  else {
    if (this->MouseLockMode == LockInFullscreen) {
      bVar2 = UGameViewportClient::IsExclusiveFullscreenViewport(param_2);
      if (bVar2) goto LAB_148357ec3;
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
  param_2->bIgnoreInput = true;
  UGameViewportClient::SetMouseCaptureMode(param_2,NoCapture);
LAB_148357f9f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// GetDebugDisplayName @ 148380950

FString * __thiscall FInputModeUIOnly::GetDebugDisplayName(FInputModeUIOnly *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::DebugName,
                         L"UI Only (Input will only be consumed by the UI, not the player!)");
      atexit(`FInputModeUIOnly::GetDebugDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DebugName__);
      _Init_thread_footer(&::_TSS0);
      return &::DebugName;
    }
  }
  return &::DebugName;
}

// SetLockMouseToViewportBehavior @ 1483a9420

FInputModeUIOnly * __thiscall
FInputModeUIOnly::SetLockMouseToViewportBehavior(FInputModeUIOnly *this,EMouseLockMode param_1)

{
  this->MouseLockMode = param_1;
  return this;
}

// SetWidgetToFocus @ 1483abba0

/* WARNING: Enum "Type": Some values do not have unique names */

FInputModeUIOnly * __thiscall
FInputModeUIOnly::SetWidgetToFocus(FInputModeUIOnly *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  SWidget *pSVar3;
  void *local_28 [2];
  SWidget *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if (((param_1->Object != (SWidget *)0x0) &&
      (cVar2 = (**(code **)(param_1->Object->_padding_ + 0x198))(), cVar2 == '\0')) &&
     (1 < (byte)LogPlayerController._0_1_)) {
    pSVar3 = TSharedPtr<SWidget,1>::operator->(param_1);
    (**(code **)(pSVar3->_padding_ + 0x1e0))(pSVar3,local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (this->WidgetToFocus).Object;
  pTStack_10 = (this->WidgetToFocus).SharedReferenceCount.ReferenceController;
  (this->WidgetToFocus).Object = pSVar3;
  (this->WidgetToFocus).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

