// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// FOnlineSubsystemBPCallHelper @ 14ec52560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOnlineSubsystemBPCallHelper * __thiscall
FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
          (FOnlineSubsystemBPCallHelper *this,wchar_t *param_1,UObject *param_2,FName param_3)

{
  IOnlineSubsystem *pIVar1;
  ForAnyElementType FVar2;
  FName local_res20;
  FString local_18;
  
  (this->UserID).Object = (FUniqueNetId *)0x0;
  (this->UserID).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res20 = param_3;
  UEngine::GetWorldFromContextObject(GEngine,param_2,ReturnNull);
  pIVar1 = IOnlineSubsystem::Get(&local_res20);
  this->OnlineSub = pIVar1;
  this->FunctionContext = param_1;
  if (pIVar1 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Warning,(FName)0x0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// QueryIDFromPlayerController @ 14ec8f1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController
          (FOnlineSubsystemBPCallHelper *this,APlayerController *param_1)

{
  ForAnyElementType FVar1;
  wchar_t *pwVar2;
  undefined1 local_38 [24];
  FSharedReferencer<1> FStack_20;
  FString local_18;
  
  local_38._16_8_ = (IOnlineSubsystem *)0x0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != (FOnlineSubsystemBPCallHelper *)(local_38 + 0x10)) {
    (this->UserID).Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->UserID).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  if ((param_1 == (APlayerController *)0x0) || (param_1->_padding_ == 0)) {
    pwVar2 = L"%s - Invalid player state";
  }
  else {
    FUniqueNetIdWrapper::GetV1
              ((FUniqueNetIdWrapper *)(param_1->_padding_ + 0x2d0),
               (TSharedPtr<FUniqueNetId_const_,1> *)local_38);
    if (this != (FOnlineSubsystemBPCallHelper *)local_38) {
      (this->UserID).Object = (FUniqueNetId *)local_38._0_8_;
      local_38._0_8_ = (FUniqueNetId *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserID).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._8_8_);
    if ((this->UserID).Object != (FUniqueNetId *)0x0) {
      return;
    }
    pwVar2 = L"%s - Cannot map local player to unique net ID";
  }
  ::FString::PrintfImpl(&local_18,pwVar2);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar1.Data,Warning,(FName)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

