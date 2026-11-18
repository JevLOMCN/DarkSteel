// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FLocalPlayerContext @ 147ea5c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLocalPlayerContext * __thiscall
FLocalPlayerContext::FLocalPlayerContext(FLocalPlayerContext *this,APlayerController *param_1)

{
  TObjectPtr<UPlayer> *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FLocalPlayerContext *pFVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  UPlayer *local_res8;
  UWorld *local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar7 = L"";
  (this->LocalPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  if ((param_1->_padding_ & 2) != 0) {
    cVar2 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1);
    if (cVar2 != '\0') goto LAB_147ea5c64;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InPlayerController->IsLocalPlayerController()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                     ,0xc6,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FLocalPlayerContext *)(*pcVar1)();
    return pFVar4;
  }
LAB_147ea5c64:
  this_00 = &param_1->Player;
  if ((this_00->field0_0x0).DebugPtr == (UPlayer *)0x0) {
    pFVar6 = GetTypeName<ULocalPlayer>(&local_28);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = ULocalPlayer::StaticClass();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
  if ((bVar3) && (local_res8 = (this_00->field0_0x0).DebugPtr, local_res8 != (UPlayer *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    local_res10 = AActor::GetWorld((AActor *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res10);
    return this;
  }
  pFVar6 = GetTypeName<ULocalPlayer>(&local_48);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UPlayer>(&local_38,(this_00->field0_0x0).DebugPtr);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// FLocalPlayerContext @ 147ea5d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLocalPlayerContext * __thiscall
FLocalPlayerContext::FLocalPlayerContext
          (FLocalPlayerContext *this,ULocalPlayer *param_1,UWorld *param_2)

{
  FWeakObjectPtr local_res8;
  ULocalPlayer *local_res10;
  
  (this->LocalPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FWeakObjectPtr)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULocalPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULocalPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->LocalPlayer).WeakPtr = local_res8;
  return this;
}

// FLocalPlayerContext @ 147ea5e30

FLocalPlayerContext * __thiscall FLocalPlayerContext::FLocalPlayerContext(FLocalPlayerContext *this)

{
  (this->LocalPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// GetGameInstance @ 147ec02c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall FLocalPlayerContext::GetGameInstance(FLocalPlayerContext *this)

{
  UWorld *pUVar1;
  
  pUVar1 = GetWorld(this);
  if (pUVar1 != (UWorld *)0x0) {
    return (pUVar1->OwningGameInstance).field0_0x0.DebugPtr;
  }
  return (UGameInstance *)0x0;
}

// GetGameState @ 147ec0340

AGameStateBase * __thiscall FLocalPlayerContext::GetGameState(FLocalPlayerContext *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  AGameStateBase *pAVar4;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
LAB_147ec0357:
    return *(AGameStateBase **)&pUVar3[10].field_0x20;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalPlayerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar4 = (AGameStateBase *)(*pcVar1)();
      return pAVar4;
    }
  }
  else {
    pUVar3 = (UObject *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
    if (pUVar3 != (UObject *)0x0) goto LAB_147ec0357;
  }
  return (AGameStateBase *)0x0;
}

// GetHUD @ 147ec03f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AHUD * __thiscall FLocalPlayerContext::GetHUD(FLocalPlayerContext *this)

{
  AHUD *pAVar1;
  APlayerController *pAVar2;
  
  pAVar2 = GetPlayerController(this);
  if (pAVar2 != (APlayerController *)0x0) {
    pAVar1 = (pAVar2->MyHUD).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AHUD *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    return pAVar1;
  }
  return (AHUD *)0x0;
}

// GetLocalPlayer @ 147ec1450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall FLocalPlayerContext::GetLocalPlayer(FLocalPlayerContext *this)

{
  code *pcVar1;
  bool bVar2;
  ULocalPlayer *pUVar3;
  
  pUVar3 = (ULocalPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 == (ULocalPlayer *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalPlayerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                         ,0x8e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (ULocalPlayer *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// GetPawn @ 147ec29c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall FLocalPlayerContext::GetPawn(FLocalPlayerContext *this)

{
  APawn *pAVar1;
  APlayerController *pAVar2;
  
  pAVar2 = GetPlayerController(this);
  if (pAVar2 != (APlayerController *)0x0) {
    pAVar1 = (APawn *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    return pAVar1;
  }
  return (APawn *)0x0;
}

// GetPlayerController @ 147ec3650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall FLocalPlayerContext::GetPlayerController(FLocalPlayerContext *this)

{
  code *pcVar1;
  bool bVar2;
  UPlayer *this_00;
  APlayerController *pAVar3;
  UWorld *pUVar4;
  
  this_00 = (UPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (UPlayer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalPlayerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (APlayerController *)(*pcVar1)();
      return pAVar3;
    }
  }
  pUVar4 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if (pUVar4 != (UWorld *)0x0) {
    pAVar3 = UPlayer::GetPlayerController(this_00,pUVar4);
    return pAVar3;
  }
  return (this_00->PlayerController).field0_0x0.DebugPtr;
}

// GetPlayerState @ 147ec36d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerState * __thiscall FLocalPlayerContext::GetPlayerState(FLocalPlayerContext *this)

{
  APlayerState *pAVar1;
  APlayerController *pAVar2;
  
  pAVar2 = GetPlayerController(this);
  if (pAVar2 != (APlayerController *)0x0) {
    pAVar1 = (APlayerState *)pAVar2->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APlayerState *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    return pAVar1;
  }
  return (APlayerState *)0x0;
}

// GetWorld @ 147ec8a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FLocalPlayerContext::GetWorld(FLocalPlayerContext *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UObject *pUVar4;
  
  pUVar3 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if (pUVar3 != (UWorld *)0x0) {
    return pUVar3;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalPlayerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147ec8a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UWorld *)(**(code **)(*(longlong *)pUVar4 + 0x180))(pUVar4);
  return pUVar3;
}

// IsFromLocalPlayer @ 147ecd590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FLocalPlayerContext::IsFromLocalPlayer(FLocalPlayerContext *this,AActor *param_1)

{
  AActor *pAVar1;
  UPlayer *this_00;
  UWorld *pUVar2;
  APlayerController *pAVar3;
  
  if (param_1 == (AActor *)0x0) {
    return false;
  }
  this_00 = (UPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (UPlayer *)0x0) {
    return false;
  }
  pUVar2 = GetWorld(this);
  if (pUVar2 == (UWorld *)0x0) {
    return false;
  }
  pAVar3 = UPlayer::GetPlayerController(this_00,pUVar2);
  if (pAVar3 == (APlayerController *)0x0) {
    return false;
  }
  if ((APlayerController *)param_1 == pAVar3) {
    return true;
  }
  pAVar1 = (AActor *)pAVar3->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar1 == (AActor *)0x0) goto LAB_147ecd612;
  }
  else {
    if (pAVar1 == (AActor *)0x0) goto LAB_147ecd612;
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  if (pAVar1 == param_1) {
    return true;
  }
LAB_147ecd612:
  if ((AActor *)pAVar3->_padding_ == (AActor *)0x0) {
    return false;
  }
  return (AActor *)pAVar3->_padding_ == param_1;
}

// IsInitialized @ 147ecd810

bool __thiscall FLocalPlayerContext::IsInitialized(FLocalPlayerContext *this)

{
  int iVar1;
  FUObjectItem *pFVar2;
  
  if (((this->LocalPlayer).WeakPtr.ObjectSerialNumber != 0) &&
     (iVar1 = (this->LocalPlayer).WeakPtr.ObjectIndex, -1 < iVar1)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,iVar1);
    if ((pFVar2 != (FUObjectItem *)0x0) &&
       ((pFVar2->SerialNumber == (this->LocalPlayer).WeakPtr.ObjectSerialNumber &&
        (((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      return true;
    }
  }
  return false;
}

// IsValid @ 147ecdff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FLocalPlayerContext::IsValid(FLocalPlayerContext *this)

{
  UPlayer *this_00;
  UWorld *pUVar1;
  APlayerController *pAVar2;
  
  this_00 = (UPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UPlayer *)0x0) {
    pUVar1 = GetWorld(this);
    if (pUVar1 != (UWorld *)0x0) {
      pAVar2 = UPlayer::GetPlayerController(this_00,pUVar1);
      if (pAVar2 != (APlayerController *)0x0) {
        return (pAVar2->Player).field0_0x0.DebugPtr != (UPlayer *)0x0;
      }
    }
  }
  return false;
}

// SetLocalPlayer @ 147edc9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLocalPlayerContext::SetLocalPlayer(FLocalPlayerContext *this,ULocalPlayer *param_1)

{
  FWeakObjectPtr local_res8;
  ULocalPlayer *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULocalPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULocalPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->LocalPlayer).WeakPtr = local_res8;
  return;
}

// SetPlayerController @ 147edcc50

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
FLocalPlayerContext::SetPlayerController(FLocalPlayerContext *this,APlayerController *param_1)

{
  TObjectPtr<UPlayer> *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UPlayer *local_res10;
  UWorld *local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar6 = L"";
  if ((param_1->_padding_ & 2) != 0) {
    cVar2 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1);
    if (cVar2 != '\0') goto LAB_147edcca4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InPlayerController->IsLocalPlayerController()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalPlayer.cpp"
                     ,0xc6,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_147edcca4:
  this_00 = &param_1->Player;
  if ((this_00->field0_0x0).DebugPtr == (UPlayer *)0x0) {
    pFVar5 = GetTypeName<ULocalPlayer>(&local_28);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = ULocalPlayer::StaticClass();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
  if ((bVar3) && (local_res10 = (this_00->field0_0x0).DebugPtr, local_res10 != (UPlayer *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
    local_res18[0] = AActor::GetWorld((AActor *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)local_res18);
    return;
  }
  pFVar5 = GetTypeName<ULocalPlayer>(&local_48);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UPlayer>(&local_38,(this_00->field0_0x0).DebugPtr);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

