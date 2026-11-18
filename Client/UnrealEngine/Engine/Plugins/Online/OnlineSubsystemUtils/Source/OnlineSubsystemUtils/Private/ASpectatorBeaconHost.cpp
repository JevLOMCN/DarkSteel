// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 27

// StaticClass @ 14eca9780

UClass * __cdecl ASpectatorBeaconHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconHost",
               &Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton,
               StaticRegisterNativesASpectatorBeaconHost,0x390,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpectatorBeaconHost>,
               InternalVTableHelperCtorCaller<ASpectatorBeaconHost>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton;
}

// ASpectatorBeaconHost @ 14ecacc20

ASpectatorBeaconHost * __thiscall
ASpectatorBeaconHost::ASpectatorBeaconHost(ASpectatorBeaconHost *this,FVTableHelper *param_1)

{
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  this->_padding_ = (longlong)&___7ASpectatorBeaconHost__6B_;
  (this->State).field0_0x0.DebugPtr = (USpectatorBeaconState *)0x0;
  *(undefined8 *)&this->ReservationsFull = 0;
  *(undefined8 *)&(this->ReservationsFull).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationsFull).field_0x10 = 0;
  *(undefined8 *)&this->ReservationChanged = 0;
  *(undefined8 *)&(this->ReservationChanged).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationChanged).field_0x10 = 0;
  *(undefined8 *)&this->CancelationReceived = 0;
  *(undefined8 *)&(this->CancelationReceived).field_0x8 = 0;
  *(undefined4 *)&(this->CancelationReceived).field_0x10 = 0;
  *(undefined8 *)&this->DuplicateReservation = 0;
  *(undefined8 *)&(this->DuplicateReservation).field_0x8 = 0;
  *(undefined4 *)&(this->DuplicateReservation).field_0x10 = 0;
  *(undefined8 *)&this->NewPlayerAddedDelegate = 0;
  *(undefined8 *)&(this->NewPlayerAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NewPlayerAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValidatePlayers = 0;
  *(undefined8 *)&(this->ValidatePlayers).field_0x8 = 0;
  *(undefined4 *)&(this->ValidatePlayers).field_0x10 = 0;
  return this;
}

// ASpectatorBeaconHost @ 14ecaccd0

ASpectatorBeaconHost * __thiscall
ASpectatorBeaconHost::ASpectatorBeaconHost(ASpectatorBeaconHost *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  FName local_res8;
  FString local_18;
  
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  lVar7 = 0;
  this->bLogoutOnSessionTimeout = true;
  this->bIsValidationStrRequired = true;
  this->_padding_ = (longlong)&___7ASpectatorBeaconHost__6B_;
  (this->State).field0_0x0.DebugPtr = (USpectatorBeaconState *)0x0;
  *(undefined8 *)&this->ReservationsFull = 0;
  *(undefined8 *)&(this->ReservationsFull).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationsFull).field_0x10 = 0;
  *(undefined8 *)&this->ReservationChanged = 0;
  *(undefined8 *)&(this->ReservationChanged).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationChanged).field_0x10 = 0;
  *(undefined8 *)&this->CancelationReceived = 0;
  *(undefined8 *)&(this->CancelationReceived).field_0x8 = 0;
  *(undefined4 *)&(this->CancelationReceived).field_0x10 = 0;
  *(undefined8 *)&this->DuplicateReservation = 0;
  *(undefined8 *)&(this->DuplicateReservation).field_0x8 = 0;
  *(undefined4 *)&(this->DuplicateReservation).field_0x10 = 0;
  *(undefined8 *)&this->NewPlayerAddedDelegate = 0;
  *(undefined8 *)&(this->NewPlayerAddedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NewPlayerAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ValidatePlayers = 0;
  *(undefined8 *)&(this->ValidatePlayers).field_0x8 = 0;
  *(undefined4 *)&(this->ValidatePlayers).field_0x10 = 0;
  pUVar5 = ASpectatorBeaconClient::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UClass *)0x0)) {
    this->_padding_ = (longlong)pUVar5;
    if (pUVar5 == (UClass *)0x0) goto LAB_14ecacde8;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    this->_padding_ = (longlong)pUVar5;
  }
  pUVar6 = Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar3 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = this->_padding_;
    }
  }
LAB_14ecacde8:
  local_res8 = *(FName *)(lVar7 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  plVar2 = &this->_padding_;
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0xe;
  return this;
}

// ~ASpectatorBeaconHost @ 14ecada00

void __thiscall ASpectatorBeaconHost::~ASpectatorBeaconHost(ASpectatorBeaconHost *this)

{
  this->_padding_ = (longlong)&___7ASpectatorBeaconHost__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewPlayerAddedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DuplicateReservation);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelationReceived);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationsFull);
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  return;
}

// AddSpectatorReservation @ 14ecb01e0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
ASpectatorBeaconHost::AddSpectatorReservation
          (ASpectatorBeaconHost *this,FSpectatorReservation *param_1)

{
  USpectatorBeaconState *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  Type TVar7;
  uint uVar8;
  Type TVar9;
  int iVar10;
  longlong *plVar11;
  FUniqueNetIdMatcher FVar12;
  uint uVar13;
  FString local_58;
  FString local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (((this->State).field0_0x0.DebugPtr == (USpectatorBeaconState *)0x0) ||
     (TVar7 = AOnlineBeaconHostObject::GetBeaconState((AOnlineBeaconHostObject *)this),
     TVar7 == DenyRequests)) {
    return ReservationDenied;
  }
  bVar5 = this->bIsValidationStrRequired;
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if ((((!bVar4) ||
       (bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_1->Spectator), !bVar4))
      || ((param_1->Spectator).Platform.Data.ArrayNum < 2)) ||
     (((bVar5 != false &&
       (bVar5 = ::operator==((FUniqueNetIdWrapper *)param_1,
                             (FUniqueNetIdWrapper *)&param_1->Spectator), bVar5)) &&
      ((param_1->Spectator).ValidationStr.Data.ArrayNum < 2)))) {
    return ReservationInvalid;
  }
  plVar11 = (longlong *)(**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  uVar8 = (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,param_1);
  if (uVar8 == 0xffffffff) {
    pUVar1 = (this->State).field0_0x0.DebugPtr;
    uVar8 = (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,&param_1->Spectator);
    if (uVar8 != 0xffffffff) {
      uVar13 = 0;
      if ((int)uVar8 < (int)plVar11[1]) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9 = (*pcVar3)();
        return TVar9;
      }
      lVar2 = *plVar11;
      if (3 < (byte)LogSpectatorBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&param_1->Spectator,&local_58);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      FSpectatorReservation::Dump(param_1);
      FSpectatorReservation::Dump((FSpectatorReservation *)((longlong)(int)uVar8 * 0x88 + lVar2));
      return ReservationDenied_ContainsExistingPlayers;
    }
    FVar12.UniqueIdTarget =
         FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)&param_1->Spectator);
    iVar10 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
             IndexOfByPredicate<FUniqueNetIdMatcher>
                       (&((this->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar12);
    if (iVar10 != -1) {
      if (3 < (byte)LogSpectatorBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&param_1->Spectator,&local_48);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      FSpectatorReservation::Dump(param_1);
      return ReservationDenied_ContainsExistingPlayers;
    }
    pUVar1 = (this->State).field0_0x0.DebugPtr;
    cVar6 = (**(code **)(pUVar1->_padding_ + 0x308))(pUVar1,param_1);
    if (cVar6 == '\0') {
      return SpectatorLimitReached;
    }
    bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers,
                 &local_20);
      if (*(int *)&(this->ValidatePlayers).field_0x10 == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)&(this->ValidatePlayers).field_0x8;
      }
      cVar6 = (**(code **)(*plVar11 + 0x60))(plVar11,&param_1->Spectator);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (cVar6 == '\0') {
        return ReservationDenied_Banned;
      }
    }
    pUVar1 = (this->State).field0_0x0.DebugPtr;
    cVar6 = (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,param_1);
    if (cVar6 != '\0') {
      pUVar1 = (this->State).field0_0x0.DebugPtr;
      cVar6 = (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,param_1);
      if (cVar6 != '\0') {
        NewPlayerAdded(this,&param_1->Spectator);
        SendReservationUpdates(this);
        NotifyReservationEventNextFrame(this,&this->ReservationChanged);
        cVar6 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x310))();
        if (cVar6 != '\0') {
          NotifyReservationEventNextFrame(this,&this->ReservationsFull);
        }
        return ReservationAccepted;
      }
      return IncorrectPlayerCount;
    }
  }
  else {
    uVar13 = 0;
    if ((int)uVar8 < (int)plVar11[1]) {
      uVar13 = ~uVar8 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (*pcVar3)();
      return TVar9;
    }
    if (1 < (param_1->Spectator).ValidationStr.Data.ArrayNum) {
      ::FString::operator=
                ((FString *)((longlong)(int)uVar8 * 0x88 + *plVar11 + 0x60),
                 &(param_1->Spectator).ValidationStr);
    }
    pUVar1 = (this->State).field0_0x0.DebugPtr;
    cVar6 = (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,param_1);
    if (cVar6 != '\0') {
      SendReservationUpdates(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->DuplicateReservation,&local_38);
      if ((*(int *)&(this->DuplicateReservation).field_0x10 != 0) &&
         (plVar11 = *(longlong **)&(this->DuplicateReservation).field_0x8,
         plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x68))(plVar11,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      NewPlayerAdded(this,&param_1->Spectator);
      return ReservationDuplicate;
    }
  }
  return ReservationDenied_CrossPlayRestriction;
}

// DoesSessionMatch @ 14ecb6320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ASpectatorBeaconHost::DoesSessionMatch(ASpectatorBeaconHost *this,FString *param_1)

{
  int iVar1;
  USpectatorBeaconState *pUVar2;
  int iVar3;
  IOnlineSubsystem *pIVar4;
  longlong *plVar5;
  longlong lVar6;
  FOnlineSessionInfo *pFVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FName local_res8;
  undefined8 local_res18 [2];
  void *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->State).field0_0x0.DebugPtr == (USpectatorBeaconState *)0x0) {
    return false;
  }
  AActor::GetWorld((AActor *)this);
  pUVar2 = (this->State).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2d0))(pUVar2,local_res18);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar4 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar4 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11 = pTVar10;
LAB_14ecb6387:
    bVar12 = false;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ecb6479;
  }
  else {
    plVar5 = (longlong *)(**(code **)(pIVar4->_padding_ + 0x20))(pIVar4,&local_28);
    plVar8 = (longlong *)*plVar5;
    pTVar11 = (TReferenceControllerBase<1> *)plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if ((((plVar8 == (longlong *)0x0) ||
         (lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,local_res18[0]), lVar6 == 0)) ||
        (pTVar10 = (TReferenceControllerBase<1> *)0x0,
        ((TSharedPtr<FOnlineSessionInfo,1> *)(lVar6 + 0x100))->Object == (FOnlineSessionInfo *)0x0))
       || ((param_1->Data).ArrayNum < 2)) goto LAB_14ecb6387;
    pFVar7 = TSharedPtr<FOnlineSessionInfo,1>::operator->
                       ((TSharedPtr<FOnlineSessionInfo,1> *)(lVar6 + 0x100));
    plVar8 = (longlong *)(**(code **)((longlong)*pFVar7 + 0x38))(pFVar7);
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_28);
    iVar3 = (param_1->Data).ArrayNum;
    iVar1 = *(int *)(puVar9 + 1);
    if (iVar1 == iVar3) {
      if (1 < iVar1) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar12 = iVar3 == 0;
        goto LAB_14ecb6461;
      }
    }
    else {
      bVar12 = iVar3 + iVar1 == 1;
LAB_14ecb6461:
      pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000001;
      if (!bVar12) goto LAB_14ecb6387;
    }
    bVar12 = true;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    return true;
  }
LAB_14ecb6479:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return false;
}

// DumpReservations @ 14ecb6900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ASpectatorBeaconHost::DumpReservations(ASpectatorBeaconHost *this)

{
  USpectatorBeaconState *pUVar1;
  
  if (3 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (USpectatorBeaconState *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x348))();
  }
  if (3 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    return;
  }
  return;
}

// GetMaxReservations @ 14ecb97d0

int __thiscall ASpectatorBeaconHost::GetMaxReservations(ASpectatorBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecb97da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x2f0))();
  return iVar1;
}

// GetNumConsumedReservations @ 14ecb9830

int __thiscall ASpectatorBeaconHost::GetNumConsumedReservations(ASpectatorBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecb983a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x300))();
  return iVar1;
}

// GetPlayerValidation @ 14ecba650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ASpectatorBeaconHost::GetPlayerValidation
          (ASpectatorBeaconHost *this,FUniqueNetId *param_1,FString *param_2)

{
  USpectatorBeaconState *pUVar1;
  undefined1 uVar2;
  
  ::FString::Empty(param_2);
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (USpectatorBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecba694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x328))(pUVar1,param_1,param_2);
    return (bool)uVar2;
  }
  if (2 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  return false;
}

// GetPrivateStaticClass @ 14ecbb2b0

UClass * __cdecl ASpectatorBeaconHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconHost",
               &Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton,
               StaticRegisterNativesASpectatorBeaconHost,0x390,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpectatorBeaconHost>,
               InternalVTableHelperCtorCaller<ASpectatorBeaconHost>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton;
}

// GetReservationCount @ 14ecbb990

int __thiscall ASpectatorBeaconHost::GetReservationCount(ASpectatorBeaconHost *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ecbb99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x2e8))();
  return iVar1;
}

// GetSpectatorBeaconHostClass @ 14ecbc190

TSubclassOf<USpectatorBeaconState> __thiscall
ASpectatorBeaconHost::GetSpectatorBeaconHostClass(ASpectatorBeaconHost *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = USpectatorBeaconState::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<USpectatorBeaconState>)in_RDX.field0_0x0;
}

// HandlePlayerLogout @ 14ecbcaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconHost::HandlePlayerLogout(ASpectatorBeaconHost *this,FUniqueNetIdRepl *param_1)

{
  FUniqueNetId *pFVar1;
  USpectatorBeaconState *pUVar2;
  bool bVar3;
  char cVar4;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar5;
  TSharedPtr<FUniqueNetId_const_,1> local_28;
  void *local_18 [2];
  
  bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (bVar3) {
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      pTVar5 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_28);
      pFVar1 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    pUVar2 = (this->State).field0_0x0.DebugPtr;
    if ((pUVar2 != (USpectatorBeaconState *)0x0) &&
       (cVar4 = (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,param_1), cVar4 != '\0')) {
      SendReservationUpdates(this);
      NotifyReservationEventNextFrame(this,&this->ReservationChanged);
    }
  }
  return;
}

// InitFromBeaconState @ 14ecbcfb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ASpectatorBeaconHost::InitFromBeaconState(ASpectatorBeaconHost *this,USpectatorBeaconState *param_1)

{
  if (((this->State).field0_0x0.DebugPtr == (USpectatorBeaconState *)0x0) &&
     (param_1 != (USpectatorBeaconState *)0x0)) {
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->State).field0_0x0.DebugPtr = param_1;
    return true;
  }
  return false;
}

// InitHostBeacon @ 14ecbd250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
ASpectatorBeaconHost::InitHostBeacon(ASpectatorBeaconHost *this,int param_1,FName param_2)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  char cVar5;
  longlong *plVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  USpectatorBeaconState *pUVar9;
  UClass *pUVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  FName local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  if (param_1 < 1) {
    bVar11 = false;
  }
  else {
    pUVar10 = (UClass *)0x0;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x7f0))(this,local_c0);
    lVar2 = *plVar6;
    if ((lVar2 != 0) && (pUVar7 = USpectatorBeaconState::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        pUVar10 = (UClass *)*plVar6;
      }
    }
    pUVar8 = GetTransientPackage();
    FVar3 = local_c8;
    if (local_c8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = USpectatorBeaconState::StaticClass();
    CheckIsClassChildOf_Internal(pUVar7,pUVar10);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar10);
    FVar4 = local_c8;
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_c8.ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_c8.Number = FVar3.Number;
    local_b8._16_4_ = local_c8.ComparisonIndex.Value;
    local_b8._20_4_ = local_c8.Number;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_c8 = FVar4;
    local_b8._8_8_ = pUVar8;
    pUVar9 = (USpectatorBeaconState *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar6 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (USpectatorBeaconState *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->State).field0_0x0.DebugPtr = pUVar9;
    cVar5 = (**(code **)(pUVar9->_padding_ + 0x2b0))(pUVar9,param_1,param_2);
    bVar11 = cVar5 != '\0';
  }
  return bVar11;
}

// NewPlayerAdded @ 14ecbde80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconHost::NewPlayerAdded(ASpectatorBeaconHost *this,FPlayerReservation *param_1)

{
  int *piVar1;
  USpectatorBeaconState *pUVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUniqueNetIdMatcher FVar7;
  FStaticBasicLogRecord *pFVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<FUniqueNetId_const_,1> local_28;
  FString local_18;
  
  bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (bVar5) {
    if ((this->State).field0_0x0.DebugPtr != (USpectatorBeaconState *)0x0) {
      FVar7.UniqueIdTarget = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)param_1);
      iVar6 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
              IndexOfByPredicate<FUniqueNetIdMatcher>
                        (&((this->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar7);
      if (iVar6 != -1) {
        return;
      }
      if (5 < (byte)LogSpectatorBeacon._0_1_) {
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)param_1,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      pUVar2 = (this->State).field0_0x0.DebugPtr;
      FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_28);
      pTVar3 = (TSharedPtr<FUniqueNetId_const_,1> *)
               (pUVar2->PlayersPendingJoin).AllocatorInstance.Data;
      if (((pTVar3 <= &local_28) && (&local_28 < pTVar3 + (pUVar2->PlayersPendingJoin).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar2->PlayersPendingJoin).ArrayNum;
      piVar1 = &(pUVar2->PlayersPendingJoin).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pUVar2->PlayersPendingJoin).AllocatorInstance,piVar1);
      }
      (pUVar2->PlayersPendingJoin).ArrayNum = iVar6 + 1;
      pFVar9 = (pUVar2->PlayersPendingJoin).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(FUniqueNetId **)pFVar9 = local_28.Object;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) =
           local_28.SharedReferenceCount.ReferenceController;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_28.Object = (FUniqueNetId *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TDelegate<void___cdecl(FPlayerReservation_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->NewPlayerAddedDelegate,param_1);
      return;
    }
    if ((byte)LogSpectatorBeacon._0_1_ < 3) {
      return;
    }
    pFVar8 = &::LOG_Static;
  }
  else {
    if ((byte)LogSpectatorBeacon._0_1_ < 3) {
      return;
    }
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogSpectatorBeacon);
  return;
}

// NotifyReservationEventNextFrame @ 14ecbe210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ASpectatorBeaconHost::NotifyReservationEventNextFrame
          (ASpectatorBeaconHost *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 auStack_b8 [32];
  FDelegateAllocation local_98;
  undefined1 local_88 [24];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_70;
  FTimerUnifiedDelegate local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconHost.cpp"
                       ,0x10c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = UWorld::GetTimerManager(this_00);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_70,param_1);
  local_88[8] = 0;
  local_88._16_8_ = &local_98;
  local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_98);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconHost::NotifyReservationEventNextFrame'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 3),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  }
  FTimerUnifiedDelegate::FTimerUnifiedDelegate
            (&local_58,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_98);
  FTimerManager::InternalSetTimerForNextTick(this_01,(FTimerUnifiedDelegate *)local_88);
  if (3 < local_58.VariantDelegate.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_58.VariantDelegate.TypeIndex])(&local_58);
  if (local_98.DelegateSize != 0) {
    if (local_98.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_14ecbe382;
    (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.DelegateSize = 0;
  }
  if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_98.DelegateAllocator);
  }
LAB_14ecbe382:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  return;
}

// PlayerHasReservation @ 14ecc29d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ASpectatorBeaconHost::PlayerHasReservation(ASpectatorBeaconHost *this,FUniqueNetId *param_1)

{
  USpectatorBeaconState *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if (pUVar1 != (USpectatorBeaconState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ecc29ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x318))(pUVar1);
    return (bool)uVar2;
  }
  if (2 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  return false;
}

// PostInitProperties @ 14ecc3000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconHost::PostInitProperties(ASpectatorBeaconHost *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  AActor::PostInitProperties((AActor *)this);
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"NoTimeouts");
  this->bLogoutOnSessionTimeout = !bVar1;
  return;
}

// ProcessCancelReservationRequest @ 14ecc34b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconHost::ProcessCancelReservationRequest
          (ASpectatorBeaconHost *this,ASpectatorBeaconClient *param_1,FUniqueNetIdRepl *param_2)

{
  FUniqueNetId *pFVar1;
  bool bVar2;
  bool bVar3;
  Type TVar4;
  longlong *plVar5;
  longlong lVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  FName local_res10;
  FString local_68;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  void *local_48 [2];
  void *local_38 [2];
  
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    if (param_1 != (ASpectatorBeaconClient *)0x0) {
      plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      lVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,local_38);
      if (*(int *)(lVar6 + 8) == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
    if (bVar3) {
      pTVar7 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_2,&local_58);
      pFVar1 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_48);
    }
    if (param_1 != (ASpectatorBeaconClient *)0x0) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_68);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if ((param_1 != (ASpectatorBeaconClient *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
    if ((bVar2) && (local_38[0] != (void *)0x0)) {
      FMemory::Free(local_38[0]);
    }
  }
  if (param_1 != (ASpectatorBeaconClient *)0x0) {
    TVar4 = (**(code **)(this->_padding_ + 2000))(this,param_2);
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      ESpectatorReservationResult::ToString(TVar4);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      if ((5 < (byte)LogSpectatorBeacon._0_1_) && (TVar4 != ReservationRequestCanceled)) {
        (**(code **)(this->_padding_ + 0x7e8))(this);
      }
    }
    (**(code **)(param_1->_padding_ + 0x800))(param_1,TVar4);
  }
  return;
}

// ProcessReservationRequest @ 14ecc3d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconHost::ProcessReservationRequest
          (ASpectatorBeaconHost *this,ASpectatorBeaconClient *param_1,FString *param_2,
          FSpectatorReservation *param_3)

{
  FUniqueNetId *pFVar1;
  FString *pFVar2;
  bool bVar3;
  bool bVar4;
  Type TVar5;
  longlong *plVar6;
  longlong lVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  FName local_res10;
  FString *local_res18;
  FString local_78;
  TSharedPtr<FUniqueNetId_const_,1> local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = param_2;
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    if (param_1 != (ASpectatorBeaconClient *)0x0) {
      plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      lVar7 = (**(code **)(*plVar6 + 0x2d8))(plVar6,local_48);
      if (*(int *)(lVar7 + 8) == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_3);
    if (bVar3) {
      pTVar8 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_3,&local_68);
      pFVar1 = pTVar8->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_58);
    }
    if (param_1 != (ASpectatorBeaconClient *)0x0) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_78);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if ((param_1 != (ASpectatorBeaconClient *)0x0) &&
       (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_58[0] != (void *)0x0)) {
      FMemory::Free(local_58[0]);
    }
    if ((bVar4) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
  }
  pFVar2 = local_res18;
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    FSpectatorReservation::Dump(param_3);
  }
  if (param_1 != (ASpectatorBeaconClient *)0x0) {
    TVar5 = BadSessionId;
    bVar4 = DoesSessionMatch(this,pFVar2);
    if (bVar4) {
      TVar5 = (**(code **)(this->_padding_ + 0x7c8))(this,param_3);
    }
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      ESpectatorReservationResult::ToString(TVar5);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      if ((5 < (byte)LogSpectatorBeacon._0_1_) && (TVar5 != ReservationAccepted)) {
        (**(code **)(this->_padding_ + 0x7e8))(this);
      }
    }
    (**(code **)(param_1->_padding_ + 0x7f8))(param_1,TVar5);
  }
  return;
}

// RegisterAuthTicket @ 14ecc5750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconHost::RegisterAuthTicket
          (ASpectatorBeaconHost *this,FUniqueNetIdRepl *param_1,FString *param_2)

{
  USpectatorBeaconState *this_00;
  
  this_00 = (this->State).field0_0x0.DebugPtr;
  if (this_00 != (USpectatorBeaconState *)0x0) {
    USpectatorBeaconState::RegisterAuthTicket(this_00,param_1,param_2);
    return;
  }
  if (2 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    return;
  }
  return;
}

// RemoveSpectatorReservation @ 14ecc7760

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
ASpectatorBeaconHost::RemoveSpectatorReservation
          (ASpectatorBeaconHost *this,FUniqueNetIdRepl *param_1)

{
  USpectatorBeaconState *pUVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  FUniqueNetId *pFVar5;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar6;
  longlong lVar7;
  bool bVar8;
  TSharedPtr<FUniqueNetId_const_,1> local_38;
  void *local_28 [4];
  
  bVar8 = false;
  pUVar1 = (this->State).field0_0x0.DebugPtr;
  if ((pUVar1 != (USpectatorBeaconState *)0x0) &&
     (cVar3 = (**(code **)(pUVar1->_padding_ + 0x2c0))(), cVar3 != '\0')) {
    pFVar5 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CancelationReceived,
               (FReadAccessScope *)local_28);
    if ((*(int *)&(this->CancelationReceived).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->CancelationReceived).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pFVar5);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
    SendReservationUpdates(this);
    NotifyReservationEventNextFrame(this,&this->ReservationChanged);
    return ReservationRequestCanceled;
  }
  if (2 < (byte)LogSpectatorBeacon._0_1_) {
    bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
    if (bVar4) {
      pTVar6 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_38);
      pFVar5 = pTVar6->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      lVar7 = (**(code **)(*(longlong *)pFVar5 + 0x30))(pFVar5,local_28);
      if (*(int *)(lVar7 + 8) == 0) {
        bVar8 = true;
      }
      else {
        bVar8 = true;
      }
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if ((bVar8) && (local_28[0] != (void *)0x0)) {
      FMemory::Free(local_28[0]);
    }
  }
  return ReservationNotFound;
}

// SendReservationUpdates @ 14ecc8850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ASpectatorBeaconHost::SendReservationUpdates(ASpectatorBeaconHost *this)

{
  longlong *plVar1;
  int iVar2;
  USpectatorBeaconState *pUVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->State).field0_0x0.DebugPtr;
  if ((pUVar3 != (USpectatorBeaconState *)0x0) && (0 < (int)this->_padding_)) {
    iVar5 = (**(code **)(pUVar3->_padding_ + 0x2f8))();
    iVar6 = (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x2f0))();
    if (iVar5 < iVar6) {
      if (iVar5 < 1) {
        if (5 < (byte)LogSpectatorBeacon._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        }
        plVar8 = (longlong *)this->_padding_;
        iVar5 = (int)this->_padding_;
        plVar1 = plVar8 + iVar5;
        while( true ) {
          if ((int)this->_padding_ != iVar5) {
            `TCheckedPointerIterator<TObjectPtr<AOnlineBeaconClient>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar8 == plVar1) break;
          plVar4 = (longlong *)*plVar8;
          if (plVar4 != (longlong *)0x0) {
            pUVar7 = ASpectatorBeaconClient::StaticClass();
            iVar6 = (int)pUVar7->_padding_;
            if ((iVar6 <= *(int *)(plVar4[2] + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar6 * 8)
                == &pUVar7->_padding_)) {
              (**(code **)(*plVar4 + 0x810))(plVar4);
            }
          }
          plVar8 = plVar8 + 1;
        }
      }
      else {
        if (5 < (byte)LogSpectatorBeacon._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
        }
        plVar8 = (longlong *)this->_padding_;
        iVar6 = (int)this->_padding_;
        plVar1 = plVar8 + iVar6;
        while( true ) {
          if ((int)this->_padding_ != iVar6) {
            `TCheckedPointerIterator<TObjectPtr<AOnlineBeaconClient>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar8 == plVar1) break;
          plVar4 = (longlong *)*plVar8;
          if (plVar4 != (longlong *)0x0) {
            pUVar7 = ASpectatorBeaconClient::StaticClass();
            iVar2 = (int)pUVar7->_padding_;
            if ((iVar2 <= *(int *)(plVar4[2] + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar2 * 8)
                == &pUVar7->_padding_)) {
              (**(code **)(*plVar4 + 0x808))(plVar4,iVar5);
            }
          }
          plVar8 = plVar8 + 1;
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesASpectatorBeaconHost @ 14ecca3d0

void __cdecl ASpectatorBeaconHost::StaticRegisterNativesASpectatorBeaconHost(void)

{
  return;
}

// Tick @ 14ecce620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconHost::Tick(ASpectatorBeaconHost *this,float param_1)

{
  longlong *plVar1;
  FObjectPtr_u_0 *this_00;
  float fVar2;
  longlong *plVar3;
  USpectatorBeaconState *pUVar4;
  FObjectPtr FVar5;
  undefined8 *puVar6;
  FUniqueNetIdMatcher FVar7;
  TObjectPtr<USpectatorBeaconState>_u_0 TVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  IOnlineSubsystem *pIVar17;
  longlong *plVar18;
  UClass *pUVar19;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar20;
  FUniqueNetId *pFVar21;
  FUniqueNetId *pFVar22;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar23;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar24;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar25;
  int iVar26;
  TReferenceControllerBase<1> *pTVar27;
  longlong *plVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  FUniqueNetIdWrapper *this_01;
  FUniqueNetIdWrapper *this_02;
  longlong lVar33;
  longlong lVar34;
  undefined1 auStackY_1f8 [32];
  longlong local_1b8;
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> local_198;
  FName local_188;
  undefined8 local_180;
  longlong local_178;
  FName local_170;
  longlong local_168;
  FName local_160;
  FName local_158;
  FString local_150;
  FString local_140;
  TSharedPtr<FUniqueNetId_const_,1> local_130;
  undefined1 local_120 [8];
  TReferenceControllerBase<1> *local_118;
  TSharedPtr<FUniqueNetId_const_,1> local_110;
  TSharedPtr<FUniqueNetId_const_,1> local_100;
  TSharedPtr<FUniqueNetId_const_,1> local_f0;
  TSharedPtr<FUniqueNetId_const_,1> local_e0;
  FString local_d0;
  FString local_c0;
  TSharedPtr<FUniqueNetId_const_,1> local_b0;
  void *local_a0 [4];
  undefined **local_80;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_78;
  void *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar27 = (TReferenceControllerBase<1> *)0x0;
  if ((this->State).field0_0x0.DebugPtr != (USpectatorBeaconState *)0x0) {
    AActor::GetWorld((AActor *)this);
    local_180 = 0;
    local_170.ComparisonIndex.Value = 0;
    local_170.Number = 0;
    pIVar17 = IOnlineSubsystem::Get(&local_170);
    if (pIVar17 == (IOnlineSubsystem *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      plVar18 = (longlong *)(**(code **)(pIVar17->_padding_ + 0x20))(pIVar17,local_120);
      pTVar27 = (TReferenceControllerBase<1> *)plVar18[1];
      plVar3 = (longlong *)*plVar18;
      plVar18[1] = 0;
      *plVar18 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118)
      ;
      if (plVar3 != (longlong *)0x0) {
        pUVar4 = (this->State).field0_0x0.DebugPtr;
        (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4,&local_188);
        plVar18 = (longlong *)
                  (**(code **)(((this->State).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
        local_168 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (local_168 != 0) {
          iVar16 = (int)plVar18[1];
          uVar32 = 0;
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.ArrayNum = 0;
          local_198.ArrayMax = 0;
          iVar26 = 0;
          if (0 < iVar16) {
            local_178 = 0;
            do {
              lVar34 = local_178;
              uVar31 = 0;
              if ((int)uVar32 < iVar16) {
                uVar31 = ~uVar32 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar31 = 0;
              lVar33 = 0;
              this_01 = (FUniqueNetIdWrapper *)(*plVar18 + lVar34);
              if (0 < (int)this->_padding_) {
                plVar1 = &this->_padding_;
                do {
                  uVar15 = 0;
                  if ((int)uVar31 < (int)this->_padding_) {
                    uVar15 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  this_00 = (FObjectPtr_u_0 *)(*plVar1 + lVar33 * 8);
                  if (*(longlong *)(*plVar1 + lVar33 * 8) == 0) {
LAB_14ecce922:
                    if (1 < (byte)LogSpectatorBeacon._0_1_) {
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
                    }
                    uVar15 = 0;
                    if ((int)uVar31 < (int)this->_padding_) {
                      uVar15 = ~uVar31 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    iVar16 = (int)this->_padding_;
                    iVar26 = ~uVar31 + iVar16;
                    if (1 < iVar26) {
                      iVar26 = 1;
                    }
                    if (iVar26 != 0) {
                      memmove((void *)(*plVar1 + (longlong)(int)uVar31 * 8),
                              (void *)(*plVar1 + (longlong)(iVar16 - iVar26) * 8),
                              (longlong)iVar26 << 3);
                    }
                    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,(ForAnyElementType *)plVar1,(int)this->_padding_,
                               (int *)((longlong)&this->_padding_ + 4));
                    uVar31 = uVar31 - 1;
                    lVar33 = lVar33 + -1;
                  }
                  else {
                    pUVar19 = ASpectatorBeaconClient::StaticClass();
                    bVar12 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar19);
                    if ((!bVar12) ||
                       (FVar5.field0_0x0 = (FObjectPtr_u_0)this_00->Handle,
                       FVar5.field0_0x0 == (UObject *)0x0)) goto LAB_14ecce922;
                    this_02 = (FUniqueNetIdWrapper *)((longlong)FVar5.field0_0x0 + 0x3b0);
                    bVar12 = FUniqueNetIdWrapper::IsValid(this_02);
                    bVar13 = FUniqueNetIdWrapper::IsValid(this_01);
                    if (bVar12 == bVar13) {
                      if (!bVar12) {
LAB_14ecce8f9:
                        *(undefined4 *)((longlong)&this_01[4]._padding_ + 4) = 0;
                        goto LAB_14ecceba0;
                      }
                      if (*(uchar *)((longlong)FVar5.field0_0x0 + 0x3c8) ==
                          (this_01->Variant).TypeIndex) {
                        bVar12 = FUniqueNetIdWrapper::IsV1(this_02);
                        if (bVar12) {
                          pTVar20 = FUniqueNetIdWrapper::GetV1Unsafe(this_01);
                          pFVar21 = TSharedPtr<FUniqueNetId_const_,1>::
                                    operator*<FUniqueNetId_const_>(pTVar20);
                          pTVar20 = FUniqueNetIdWrapper::GetV1Unsafe(this_02);
                          pFVar22 = TSharedPtr<FUniqueNetId_const_,1>::
                                    operator*<FUniqueNetId_const_>(pTVar20);
                          cVar14 = (*(code *)**(undefined8 **)pFVar22)(pFVar22,pFVar21);
                        }
                        else {
                          pTVar23 = FUniqueNetIdWrapper::GetV2Unsafe(this_02);
                          pTVar24 = FUniqueNetIdWrapper::GetV2Unsafe(this_01);
                          cVar14 = pTVar23->Value == pTVar24->Value;
                        }
                        if (cVar14 != '\0') goto LAB_14ecce8f9;
                      }
                    }
                  }
                  uVar31 = uVar31 + 1;
                  lVar33 = lVar33 + 1;
                } while ((int)uVar31 < (int)this->_padding_);
              }
              lVar34 = local_168;
              plVar1 = &this_01[1].Variant._padding_;
              if (*(longlong *)(local_168 + 8) == 0) {
LAB_14eccea90:
                bVar12 = false;
              }
              else {
                pTVar20 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)plVar1,&local_110);
                if ((pTVar20->Object == (FUniqueNetId *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pFVar21 = pTVar20->Object;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_110.SharedReferenceCount.ReferenceController);
                if ((*(longlong *)(lVar34 + 8) == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                puVar6 = *(undefined8 **)(lVar34 + 8);
                cVar14 = (**(code **)*puVar6)(puVar6,pFVar21);
                if (cVar14 == '\0') goto LAB_14eccea90;
                bVar12 = true;
              }
              pcVar11 = *(code **)(*plVar3 + 0x110);
              pTVar20 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)plVar1,&local_100);
              if ((pTVar20->Object == (FUniqueNetId *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar21 = pTVar20->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_100.SharedReferenceCount.ReferenceController);
              cVar14 = (*pcVar11)(plVar3,local_188,pFVar21);
              if ((cVar14 != '\0') || (bVar12)) {
                pTVar20 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)plVar1,&local_e0);
                if ((pTVar20->Object == (FUniqueNetId *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x44d,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pFVar21 = pTVar20->Object;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_e0.SharedReferenceCount.ReferenceController);
                TVar8 = (this->State).field0_0x0;
                plVar9 = *(longlong **)((longlong)TVar8 + 0x50);
                iVar16 = ((TVar8.DebugPtr)->PlayersPendingJoin).ArrayNum;
                for (plVar28 = plVar9; plVar28 != plVar9 + (longlong)iVar16 * 2;
                    plVar28 = plVar28 + 2) {
                  if ((*plVar28 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x44d,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  cVar14 = (*(code *)**(undefined8 **)pFVar21)(pFVar21,*plVar28);
                  if (cVar14 != '\0') {
                    uVar31 = (uint)((longlong)plVar28 - (longlong)plVar9 >> 4);
                    if (uVar31 != 0xffffffff) {
                      if (3 < (byte)LogSpectatorBeacon._0_1_) {
                        ::FName::ToString(&local_188,&local_c0);
                        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)plVar1,&local_d0);
                        local_160 = (FName)this->_padding_;
                        ::FName::ToString(&local_160,&local_150);
                        UE::Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
                        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_150.Data.AllocatorInstance.Data);
                        }
                        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                        }
                        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                        }
                      }
                      *(undefined4 *)((longlong)&this_01[4]._padding_ + 4) = 0;
                      pUVar4 = (this->State).field0_0x0.DebugPtr;
                      uVar15 = 0;
                      if ((int)uVar31 < (pUVar4->PlayersPendingJoin).ArrayNum) {
                        uVar15 = ~uVar31 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                      RemoveAtSwapImpl(&pUVar4->PlayersPendingJoin,uVar31);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,&(pUVar4->PlayersPendingJoin).AllocatorInstance,
                                 (pUVar4->PlayersPendingJoin).ArrayNum,
                                 &(pUVar4->PlayersPendingJoin).ArrayMax);
                    }
                    break;
                  }
                }
              }
              else {
                *(float *)((longlong)&this_01[4]._padding_ + 4) =
                     param_1 + *(float *)((longlong)&this_01[4]._padding_ + 4);
                if (this->bLogoutOnSessionTimeout != false) {
                  pTVar20 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)plVar1,&local_f0);
                  if ((pTVar20->Object == (FUniqueNetId *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x44d,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  FVar7.UniqueIdTarget = pTVar20->Object;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_f0.SharedReferenceCount.ReferenceController);
                  iVar16 = TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                           IndexOfByPredicate<FUniqueNetIdMatcher>
                                     (&((this->State).field0_0x0.DebugPtr)->PlayersPendingJoin,FVar7
                                     );
                  fVar2 = *(float *)((longlong)&this_01[4]._padding_ + 4);
                  if (iVar16 == -1) {
                    if (this->SessionTimeoutSecs <= fVar2 && fVar2 != this->SessionTimeoutSecs)
                    goto LAB_14ecced6b;
                  }
                  else if (this->TravelSessionTimeoutSecs <= fVar2 &&
                           fVar2 != this->TravelSessionTimeoutSecs) {
LAB_14ecced6b:
                    FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)plVar1,&local_130);
                    TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<TSharedPtr<FUniqueNetId_const_,1>_>(&local_198,&local_130);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_130.SharedReferenceCount.ReferenceController);
                  }
                }
              }
LAB_14ecceba0:
              uVar32 = uVar32 + 1;
              local_178 = local_178 + 0x88;
              iVar16 = (int)plVar18[1];
            } while ((int)uVar32 < iVar16);
            iVar26 = local_198.ArrayNum;
          }
          if ((this->bLogoutOnSessionTimeout != false) && (uVar32 = 0, 0 < iVar26)) {
            local_1b8 = 0;
            do {
              uVar31 = 0;
              if ((int)uVar32 < iVar26) {
                uVar31 = ~uVar32 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar31 = 0;
              iVar16 = (int)plVar18[1];
              pTVar20 = (TSharedPtr<FUniqueNetId_const_,1> *)
                        (local_198.AllocatorInstance.Data + local_1b8);
              if (0 < iVar16) {
                lVar34 = 0;
                do {
                  uVar15 = 0;
                  if ((int)uVar31 < iVar16) {
                    uVar15 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar33 = *plVar18;
                  if ((pTVar20->Object == (FUniqueNetId *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x44d,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar21 = pTVar20->Object;
                  pTVar25 = FUniqueNetIdWrapper::GetV1
                                      ((FUniqueNetIdWrapper *)(lVar34 + 0x30 + lVar33),&local_b0);
                  if ((pTVar25->Object == (FUniqueNetId *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x44d,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar22 = pTVar25->Object;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_b0.SharedReferenceCount.ReferenceController);
                  cVar14 = (*(code *)**(undefined8 **)pFVar22)(pFVar22,pFVar21);
                  if (cVar14 != '\0') break;
                  uVar31 = uVar31 + 1;
                  lVar34 = lVar34 + 0x88;
                  iVar16 = (int)plVar18[1];
                } while ((int)uVar31 < iVar16);
              }
              if (3 < (byte)LogSpectatorBeacon._0_1_) {
                if ((pTVar20->Object == (FUniqueNetId *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                (**(code **)(*(longlong *)pTVar20->Object + 0x38))(pTVar20->Object,local_a0);
                local_158 = (FName)this->_padding_;
                ::FName::ToString(&local_158,&local_140);
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
                if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_140.Data.AllocatorInstance.Data);
                }
                if (local_a0[0] != (void *)0x0) {
                  FMemory::Free(local_a0[0]);
                }
              }
              pUVar4 = (this->State).field0_0x0.DebugPtr;
              pFVar10 = (pUVar4->PlayersPendingJoin).AllocatorInstance.Data;
              if (pFVar10 != pFVar10 + (longlong)(pUVar4->PlayersPendingJoin).ArrayNum * 0x10) {
                pFVar29 = pFVar10;
                do {
                  if (*(FUniqueNetId **)pFVar29 == pTVar20->Object) {
                    uVar31 = (uint)((longlong)pFVar29 - (longlong)pFVar10 >> 4);
                    if (uVar31 != 0xffffffff) {
                      uVar15 = 0;
                      if ((int)(uVar31 + 1) <= (pUVar4->PlayersPendingJoin).ArrayNum) {
                        uVar15 = ~uVar31 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
                      RemoveAtSwapImpl(&pUVar4->PlayersPendingJoin,uVar31,1);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,&(pUVar4->PlayersPendingJoin).AllocatorInstance,
                                 (pUVar4->PlayersPendingJoin).ArrayNum,
                                 &(pUVar4->PlayersPendingJoin).ArrayMax);
                    }
                    break;
                  }
                  pFVar29 = pFVar29 + 0x10;
                } while (pFVar29 != pFVar10 + (longlong)(pUVar4->PlayersPendingJoin).ArrayNum * 0x10
                        );
              }
              local_78.TypeIndex = 0;
              local_80 = &___7FUniqueNetIdWrapper__6B_;
              local_78._padding_ = 0;
              local_78._padding_ = 0;
              TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ::Emplace<TSharedPtr<FUniqueNetId_const_,1>,TSharedPtr<FUniqueNetId_const_,1>_const_&>
                        (&local_78,pTVar20);
              local_80 = &___7FUniqueNetIdRepl__6B_;
              local_60 = (void *)0x0;
              local_58 = 0;
              (**(code **)(this->_padding_ + 0x798))(this,&local_80);
              local_80 = &___7FUniqueNetIdRepl__6B_;
              if (local_60 != (void *)0x0) {
                FMemory::Free(local_60);
              }
              uVar30 = (ulonglong)local_78.TypeIndex;
              if ((1 < local_78.TypeIndex) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar30] ==
                  UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct
                 ) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_78._padding_);
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar30])(&local_78);
              }
              local_1b8 = local_1b8 + 0x10;
              uVar32 = uVar32 + 1;
              iVar26 = local_198.ArrayNum;
            } while ((int)uVar32 < local_198.ArrayNum);
          }
          DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
                    ((TSharedPtr<FUniqueNetId_const_,1> *)local_198.AllocatorInstance.Data,iVar26);
          if ((TSharedPtr<FUniqueNetId_const_,1> *)local_198.AllocatorInstance.Data !=
              (TSharedPtr<FUniqueNetId_const_,1> *)0x0) {
            FMemory::Free(local_198.AllocatorInstance.Data);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  return;
}

