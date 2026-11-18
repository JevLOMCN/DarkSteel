// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FInputModeGameOnly @ 14834a610

FInputModeGameOnly * __thiscall FInputModeGameOnly::FInputModeGameOnly(FInputModeGameOnly *this)

{
  this->bConsumeCaptureMouseDown = true;
  this->_padding_ = (longlong)&___7FInputModeGameOnly__6B_;
  return this;
}

// ~FInputModeGameOnly @ 14834d430

void __thiscall FInputModeGameOnly::~FInputModeGameOnly(FInputModeGameOnly *this)

{
  this->_padding_ = (longlong)&___7FInputModeDataBase__6B_;
  return;
}

// ApplyInputMode @ 148357cd0

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
FInputModeGameOnly::ApplyInputMode
          (FInputModeGameOnly *this,FReply *param_1,UGameViewportClient *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  SViewport *pSVar7;
  TSharedPtr<SViewport,1> local_38;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  UGameViewportClient::GetGameViewportWidget(param_2,&local_38);
  if (local_38.Object != (SViewport *)0x0) {
    pSVar7 = local_38.Object;
    if ((local_38.Object == (SViewport *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), pSVar7 = local_38.Object, bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar7 == (SViewport *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (param_1->MouseCaptor).Object = (SWidget *)pSVar7;
    if (FVar5.ReferenceController != (param_1->MouseCaptor).WeakReferenceCount.ReferenceController)
    {
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar5.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (param_1->MouseCaptor).WeakReferenceCount.ReferenceController;
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
      (param_1->MouseCaptor).WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
    }
    param_1->bUseHighPrecisionMouse = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    local_18.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      FReply::SetUserFocus(param_1,&local_18,SetDirectly,false);
    }
    else {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      FReply::SetUserFocus(param_1,&local_18,SetDirectly,false);
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    FReply::LockMouseToWidget(param_1,&local_28);
    UGameViewportClient::SetMouseLockMode(param_2,LockOnCapture);
    param_2->bIgnoreInput = false;
    UGameViewportClient::SetMouseCaptureMode
              (param_2,(this->bConsumeCaptureMouseDown == false) + CapturePermanently);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// GetDebugDisplayName @ 1483808c0

FString * __thiscall FInputModeGameOnly::GetDebugDisplayName(FInputModeGameOnly *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::DisplayName,
                         L"Game Only (Input will only be consumed by the player, not UI)");
      atexit(`FInputModeGameOnly::GetDebugDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

