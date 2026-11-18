// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 78

// StaticClass @ 148331ae0

UClass * __cdecl APlayerState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerState",
               &Z_Registration_Info_UClass_APlayerState.InnerSingleton,
               StaticRegisterNativesAPlayerState,0x380,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<APlayerState>,
               InternalVTableHelperCtorCaller<APlayerState>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerState.InnerSingleton;
}

// APlayerState @ 148349b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerState * __thiscall APlayerState::APlayerState(APlayerState *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7APlayerState__6B_;
  (this->UniqueId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->UniqueId)._padding_ = 0;
  (this->UniqueId)._padding_ = 0;
  *(undefined1 *)&(this->UniqueId)._padding_ = 0;
  (this->UniqueId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueId).ReplicationBytes.ArrayNum = 0;
  (this->UniqueId).ReplicationBytes.ArrayMax = 0;
  (this->EngineMessageClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SavedNetworkAddress).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedNetworkAddress).Data.ArrayNum = 0;
  (this->SavedNetworkAddress).Data.ArrayMax = 0;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  *(undefined8 *)&this->OnPawnSet = 0;
  *(undefined8 *)&(this->OnPawnSet).field_0x8 = 0;
  *(undefined8 *)&(this->OnPawnSet).field_0x10 = 0;
  (this->PawnPrivate).field0_0x0.DebugPtr = (APawn *)0x0;
  this->PingBucket[0].PingSum = 0;
  this->PingBucket[0].PingCount = '\0';
  this->PingBucket[1].PingSum = 0;
  this->PingBucket[1].PingCount = '\0';
  this->PingBucket[2].PingSum = 0;
  this->PingBucket[2].PingCount = '\0';
  this->PingBucket[3].PingSum = 0;
  this->PingBucket[3].PingCount = '\0';
  (this->PlayerNamePrivate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerNamePrivate).Data.ArrayNum = 0;
  (this->PlayerNamePrivate).Data.ArrayMax = 0;
  (this->OldNamePrivate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldNamePrivate).Data.ArrayNum = 0;
  (this->OldNamePrivate).Data.ArrayMax = 0;
  return this;
}

// APlayerState @ 148349c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerState * __thiscall APlayerState::APlayerState(APlayerState *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  UClass *pUVar6;
  undefined4 extraout_var;
  FName local_res8;
  
  pFVar5 = ::FName::FName(&local_res8,L"Sprite");
  FVar3 = *pFVar5;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar3);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar3,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7APlayerState__6B_;
  (this->UniqueId)._padding_ = 0;
  (this->UniqueId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->UniqueId)._padding_ = 0;
  *(undefined1 *)&(this->UniqueId)._padding_ = 0;
  (this->UniqueId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueId).ReplicationBytes.ArrayNum = 0;
  (this->UniqueId).ReplicationBytes.ArrayMax = 0;
  (this->EngineMessageClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SavedNetworkAddress).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedNetworkAddress).Data.ArrayNum = 0;
  (this->SavedNetworkAddress).Data.ArrayMax = 0;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  *(undefined8 *)&this->OnPawnSet = 0;
  *(undefined8 *)&(this->OnPawnSet).field_0x8 = 0;
  *(undefined8 *)&(this->OnPawnSet).field_0x10 = 0;
  (this->PawnPrivate).field0_0x0.DebugPtr = (APawn *)0x0;
  this->PingBucket[0].PingSum = 0;
  this->PingBucket[0].PingCount = '\0';
  this->PingBucket[1].PingSum = 0;
  this->PingBucket[1].PingCount = '\0';
  this->PingBucket[2].PingSum = 0;
  this->PingBucket[2].PingCount = '\0';
  this->PingBucket[3].PingSum = 0;
  this->PingBucket[3].PingCount = '\0';
  (this->PlayerNamePrivate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerNamePrivate).Data.ArrayNum = 0;
  (this->PlayerNamePrivate).Data.ArrayMax = 0;
  (this->OldNamePrivate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldNamePrivate).Data.ArrayNum = 0;
  (this->OldNamePrivate).Data.ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  *(undefined1 *)&this->_padding_ = 1;
  AActor::SetReplicatingMovement((AActor *)this,false);
  AActor::SetNetUpdateFrequency((AActor *)this,__real_3f800000);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xf7;
  pUVar6 = Z_Construct_UClass_UEngineMessage_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->EngineMessageClass).Class.field0_0x0.DebugPtr = pUVar6;
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  this->SessionName = FVar3;
  this->bShouldUpdateReplicatedPing = '\x01';
  this->bUseCustomPlayerNames = '\0';
  return this;
}

// ~APlayerState @ 14834d2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::~APlayerState(APlayerState *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7APlayerState__6B_;
  pFVar1 = (this->OldNamePrivate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerNamePrivate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnPawnSet).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPawnSet);
  pFVar1 = (this->SavedNetworkAddress).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&this->UniqueId);
  AInfo::~AInfo((AInfo *)this);
  return;
}

// BP_GetUniqueId @ 148359010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUniqueNetIdRepl * __thiscall
APlayerState::BP_GetUniqueId(APlayerState *this,FUniqueNetIdRepl *__return_storage_ptr__)

{
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&__return_storage_ptr__->_padding_,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(this->UniqueId)._padding_);
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
  (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ClientInitialize @ 148364150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::ClientInitialize(APlayerState *this,AController *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148364153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x500))();
  return;
}

// CopyProperties @ 148368cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::CopyProperties(APlayerState *this,APlayerState *param_1)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  int iVar4;
  FString local_18;
  
  param_1->Score = this->Score;
  param_1->CompressedPing = this->CompressedPing;
  param_1->ExactPing = this->ExactPing;
  param_1->PlayerId = this->PlayerId;
  FUniqueNetIdRepl::operator=(&param_1->UniqueId,&this->UniqueId);
  (**(code **)(param_1->_padding_ + 0x818))(param_1);
  pcVar2 = *(code **)(param_1->_padding_ + 0x7b0);
  pFVar3 = GetPlayerName(this,&local_18);
  (*pcVar2)(param_1,pFVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  param_1->StartTime = this->StartTime;
  iVar1 = (this->SavedNetworkAddress).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&param_1->SavedNetworkAddress,
             (wchar_t *)(this->SavedNetworkAddress).Data.AllocatorInstance.Data,iVar4);
  return;
}

// Destroyed @ 14836b210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::Destroyed(APlayerState *this)

{
  AGameStateBase *pAVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UWorld *this_00;
  APlayerController *this_01;
  UClass *local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = AActor::GetWorld((AActor *)this);
  pAVar1 = (this_00->GameState).field0_0x0.DebugPtr;
  if (pAVar1 != (AGameStateBase *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x7b8))(pAVar1,this);
  }
  cVar5 = (**(code **)(this->_padding_ + 0x7a0))(this,1);
  if (cVar5 != '\0') {
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; (iVar4 = local_18.Index, pTVar3 = local_18.Container, -1 < local_18.Index &&
           (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1)
    {
      uVar7 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar7 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if (this_01 != (APlayerController *)0x0) {
        local_res8 = (this->EngineMessageClass).Class.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        APlayerController::ClientReceiveLocalizedMessage
                  (this_01,(TSubclassOf<ULocalMessage>)&local_res8,4,this,(APlayerState *)0x0,
                   (UObject *)0x0);
      }
    }
  }
  (**(code **)(this->_padding_ + 0x7d8))(this);
  AActor::Destroyed((AActor *)this);
  return;
}

// DispatchCopyProperties @ 14836b4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::DispatchCopyProperties(APlayerState *this,APlayerState *param_1)

{
  UFunction *pUVar1;
  APlayerState *local_res8;
  
  (**(code **)(this->_padding_ + 0x808))();
  local_res8 = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APlayerState_ReceiveCopyProperties);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// DispatchOverrideWith @ 14836b540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::DispatchOverrideWith(APlayerState *this,APlayerState *param_1)

{
  UFunction *pUVar1;
  APlayerState *local_res8;
  
  (**(code **)(this->_padding_ + 0x800))();
  local_res8 = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APlayerState_ReceiveOverrideWith);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// Duplicate @ 148377c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerState * __thiscall APlayerState::Duplicate(APlayerState *this)

{
  int iVar1;
  UWorld *this_00;
  APlayerState *pAVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_d8 [32];
  FString local_a8;
  FString local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  local_88._24_8_ = AActor::GetInstigator((AActor *)this);
  local_88._52_4_ = local_88._52_4_ | RF_Transient;
  local_88[0x30] = AlwaysSpawn;
  this_00 = AActor::GetWorld((AActor *)this);
  pAVar2 = (APlayerState *)
           UWorld::SpawnActor(this_00,(UClass *)this->_padding_,(TVector<double> *)0x0,
                              (TRotator<double> *)0x0,(FActorSpawnParameters *)local_88);
  if (pAVar2 == (APlayerState *)0x0) {
    pAVar2 = (APlayerState *)0x0;
  }
  else {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar5 = GetTypeName<APlayerState>(&local_a8);
      pwVar8 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<AActor>(&local_98,(AActor *)pAVar2);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
    (**(code **)(this->_padding_ + 0x808))(this,pAVar2);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar2;
    pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_APlayerState_ReceiveCopyProperties);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_a8);
  }
  if (local_88._64_8_ != 0) {
    plVar6 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pAVar2;
}

// GetActorBounds @ 14837df70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
APlayerState::GetActorBounds
          (APlayerState *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  return;
}

// GetHumanReadableName @ 148382e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
APlayerState::GetHumanReadableName(APlayerState *this,FString *__return_storage_ptr__)

{
  GetPlayerName(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 148383950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
APlayerState::GetLifetimeReplicatedProps
          (APlayerState *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  local_28.bIsPushBased = true;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.RepIndex = 10;
  local_38.PropertyName = L"Score";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0xd;
  local_38.PropertyName = L"bIsSpectator";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0xe;
  local_38.PropertyName = L"bOnlySpectator";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0x11;
  local_38.PropertyName = L"bFromPreviousLevel";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0x12;
  local_38.PropertyName = L"StartTime";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0x14;
  local_38.PropertyName = L"PlayerNamePrivate";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_28.Condition = COND_SkipOwner;
  local_38.PropertyName = L"CompressedPing";
  local_38.RepIndex = 0xc;
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_28.Condition = COND_InitialOnly;
  local_38.PropertyName = L"PlayerId";
  local_38.RepIndex = 0xb;
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0xf;
  local_38.PropertyName = L"bIsABot";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.PropertyName = L"bIsInactive";
  local_38.RepIndex = 0x10;
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0x13;
  local_38.PropertyName = L"UniqueId";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetOldPlayerName @ 148384980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
APlayerState::GetOldPlayerName(APlayerState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->OldNamePrivate);
  return __return_storage_ptr__;
}

// GetOwningController @ 148385780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall APlayerState::GetOwningController(APlayerState *this)

{
  int iVar1;
  AController *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (AController *)this->_padding_;
  if (pAVar2 != (AController *)0x0) {
    pUVar3 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (AController *)0x0;
}

// GetPingInMilliseconds @ 148385b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall APlayerState::GetPingInMilliseconds(APlayerState *this)

{
  float fVar1;
  
  fVar1 = this->ExactPing;
  if (fVar1 <= 0.0) {
    fVar1 = (float)this->CompressedPing * __real_40800000;
  }
  return fVar1;
}

// GetPlayerController @ 148385c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerController * __thiscall APlayerState::GetPlayerController(APlayerState *this)

{
  int iVar1;
  APlayerController *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (APlayerController *)this->_padding_;
  if (pAVar2 != (APlayerController *)0x0) {
    pUVar3 = APlayerController::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (APlayerController *)0x0;
}

// GetPlayerName @ 148385db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall APlayerState::GetPlayerName(APlayerState *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_28;
  FScriptContainerElement *local_18 [2];
  
  if ((bool)this->bUseCustomPlayerNames) {
    pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x7b8))(this,local_18);
    ::FString::FString(__return_storage_ptr__,pFVar1);
  }
  else {
    _Src = (this->PlayerNamePrivate).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->PlayerNamePrivate).Data.ArrayNum;
    lVar2 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18[0] = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetPlayerNameCustom @ 148385e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
APlayerState::GetPlayerNameCustom(APlayerState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PlayerNamePrivate);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148386ed0

UClass * __cdecl APlayerState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerState",
               &Z_Registration_Info_UClass_APlayerState.InnerSingleton,
               StaticRegisterNativesAPlayerState,0x380,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<APlayerState>,
               InternalVTableHelperCtorCaller<APlayerState>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerState.InnerSingleton;
}

// GetVelocity @ 14838b050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APlayerState::GetVelocity(APlayerState *this,TVector<double> *__return_storage_ptr__)

{
  AActor::GetVelocity((AActor *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleWelcomeMessage @ 14838bf40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::HandleWelcomeMessage(APlayerState *this)

{
  undefined1 uVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UWorld *this_00;
  APlayerController *pAVar8;
  int iVar9;
  UClass *local_res10;
  UClass *local_res18;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_38;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 == (UWorld *)0x0) ||
     (this_00->TimeSeconds <= __real_4000000000000000 &&
      __real_4000000000000000 != this_00->TimeSeconds)) {
    this->bHasBeenWelcomed = '\x01';
    return;
  }
  uVar1 = this->field_0x2ca;
  pcVar2 = *(code **)(this->_padding_ + 0x7a0);
  if (this->bHasBeenWelcomed == '\0') {
    iVar9 = 1;
    if (this->bOnlySpectator != '\0') {
      iVar9 = 0x10;
    }
    this->field_0x2ca = uVar1 | 0x10;
    cVar5 = (*pcVar2)(this,0);
    if (cVar5 != '\0') {
      UWorld::GetPlayerControllerIterator(this_00,&local_28);
      for (; (iVar4 = local_28.Index, pTVar3 = local_28.Container, -1 < local_28.Index &&
             (local_28.Index < (local_28.Container)->ArrayNum)); local_28.Index = local_28.Index + 1
          ) {
        uVar7 = 0;
        if (local_28.Index < (local_28.Container)->ArrayNum) {
          uVar7 = (uint)~local_28.Index >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pAVar8 = (APlayerController *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
        if (pAVar8 != (APlayerController *)0x0) {
          local_res18 = (this->EngineMessageClass).Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)local_res18);
          }
          APlayerController::ClientReceiveLocalizedMessage
                    (pAVar8,(TSubclassOf<ULocalMessage>)&local_res18,iVar9,this,(APlayerState *)0x0,
                     (UObject *)0x0);
        }
      }
    }
  }
  else {
    cVar5 = (*pcVar2)(this,0);
    if (cVar5 != '\0') {
      UWorld::GetPlayerControllerIterator(this_00,&local_38);
      for (; (iVar9 = local_38.Index, pTVar3 = local_38.Container, -1 < local_38.Index &&
             (local_38.Index < (local_38.Container)->ArrayNum)); local_38.Index = local_38.Index + 1
          ) {
        uVar7 = 0;
        if (local_38.Index < (local_38.Container)->ArrayNum) {
          uVar7 = (uint)~local_38.Index >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pAVar8 = (APlayerController *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8));
        if (pAVar8 != (APlayerController *)0x0) {
          local_res10 = (this->EngineMessageClass).Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)local_res10);
          }
          APlayerController::ClientReceiveLocalizedMessage
                    (pAVar8,(TSubclassOf<ULocalMessage>)&local_res10,2,this,(APlayerState *)0x0,
                     (UObject *)0x0);
        }
      }
    }
  }
  return;
}

// OnDeactivated @ 148395af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnDeactivated(APlayerState *this)

{
  AActor::Destroy((AActor *)this,false,true);
  return;
}

// OnPawnPrivateDestroyed @ 148395bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnPawnPrivateDestroyed(APlayerState *this,AActor *param_1)

{
  APawn *pAVar1;
  bool bVar2;
  
  pAVar1 = (this->PawnPrivate).field0_0x0.DebugPtr;
  if (pAVar1 == (APawn *)0x0) {
    bVar2 = param_1 == (AActor *)0x0;
  }
  else {
    bVar2 = pAVar1 == (APawn *)param_1;
  }
  if (bVar2) {
    (this->PawnPrivate).field0_0x0.DebugPtr = (APawn *)0x0;
  }
  return;
}

// OnReactivated @ 1483965b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnReactivated(APlayerState *this)

{
  return;
}

// OnRep_PlayerId @ 148396970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnRep_PlayerId(APlayerState *this)

{
  return;
}

// OnRep_PlayerName @ 148396980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnRep_PlayerName(APlayerState *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = GetPlayerName(this,&local_18);
  pFVar1 = &this->OldNamePrivate;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OldNamePrivate).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->OldNamePrivate).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x0001483969f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x810))(this);
  return;
}

// OnRep_Score @ 148396a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnRep_Score(APlayerState *this)

{
  return;
}

// OnRep_UniqueId @ 148396a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnRep_UniqueId(APlayerState *this)

{
  (**(code **)(this->_padding_ + 0x818))();
                    /* WARNING: Could not recover jumptable at 0x000148396a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 2000))(this,0);
  return;
}

// OnRep_bIsInactive @ 148396a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnRep_bIsInactive(APlayerState *this)

{
  AGameStateBase *pAVar1;
  UWorld *pUVar2;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pAVar1 = (pUVar2->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
    (**(code **)(pAVar1->_padding_ + 0x7b8))(pAVar1,this);
    pAVar1 = (pUVar2->GameState).field0_0x0.DebugPtr;
    (**(code **)(pAVar1->_padding_ + 0x7b0))(pAVar1,this);
  }
  return;
}

// OnSetUniqueId @ 148396cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OnSetUniqueId(APlayerState *this)

{
  return;
}

// OverrideWith @ 148398f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::OverrideWith(APlayerState *this,APlayerState *param_1)

{
  code *pcVar1;
  FString *pFVar2;
  byte bVar3;
  FString local_18;
  
  bVar3 = (this->field_0x2ca ^ param_1->field_0x2ca) & 2 ^ this->field_0x2ca;
  this->field_0x2ca = bVar3;
  this->field_0x2ca = (bVar3 ^ param_1->field_0x2ca) & 4 ^ bVar3;
  FUniqueNetIdRepl::operator=(&this->UniqueId,&param_1->UniqueId);
  (**(code **)(this->_padding_ + 0x818))(this);
  pcVar1 = *(code **)(this->_padding_ + 0x7b0);
  pFVar2 = GetPlayerName(param_1,&local_18);
  (*pcVar1)(this,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PostInitializeComponents @ 14839a6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::PostInitializeComponents(APlayerState *this)

{
  int iVar1;
  AGameStateBase *pAVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  float fVar8;
  
  AActor::PostInitializeComponents((AActor *)this);
  pUVar3 = AActor::GetWorld((AActor *)this);
  pAVar2 = (pUVar3->GameState).field0_0x0.DebugPtr;
  if (pAVar2 != (AGameStateBase *)0x0) {
    (**(code **)(pAVar2->_padding_ + 0x7b0))(pAVar2,this);
  }
  if ((byte)this->_padding_ < 3) {
    return;
  }
  lVar7 = this->_padding_;
  if (lVar7 != 0) {
    pUVar4 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar4 = APlayerController::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
         (lVar5 = lVar7,
         (longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         != &pUVar4->_padding_)) {
        lVar5 = 0;
      }
      this->bIsABot = '\0';
      bVar6 = 0;
      if (lVar5 == 0) {
        bVar6 = 8;
      }
      this->field_0x2ca = this->field_0x2ca | bVar6;
      goto LAB_14839a7a0;
    }
  }
  lVar7 = 0;
LAB_14839a7a0:
  if (pAVar2 != (AGameStateBase *)0x0) {
    fVar8 = (float)(**(code **)(pAVar2->_padding_ + 0x788))(pAVar2,lVar7);
    this->StartTime = (int)fVar8;
  }
  return;
}

// RecalculateAvgPing @ 14839ce70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::RecalculateAvgPing(APlayerState *this)

{
  uchar uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  
  iVar4 = 0;
  iVar3 = 0;
  lVar5 = 4;
  pbVar2 = &this->PingBucket[0].field_0x2;
  do {
    iVar4 = iVar4 + (*(ushort *)(pbVar2 + -2) & 0x1fff);
    iVar3 = iVar3 + (*pbVar2 & 7);
    lVar5 = lVar5 + -1;
    pbVar2 = pbVar2 + 4;
  } while (lVar5 != 0);
  if (iVar3 < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)iVar4 / (float)iVar3;
  }
  this->ExactPing = fVar6;
  if ((this->bShouldUpdateReplicatedPing != 0) || ((char)this->_padding_ != '\x03')) {
    uVar1 = (uchar)(int)(fVar6 * __real_3e800000);
    if (0xff < (int)(fVar6 * __real_3e800000)) {
      uVar1 = 0xff;
    }
    this->CompressedPing = uVar1;
  }
  return;
}

// ReceiveCopyProperties @ 14839cf10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::ReceiveCopyProperties(APlayerState *this,APlayerState *param_1)

{
  UFunction *pUVar1;
  APlayerState *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APlayerState_ReceiveCopyProperties);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveOverrideWith @ 14839cf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::ReceiveOverrideWith(APlayerState *this,APlayerState *param_1)

{
  UFunction *pUVar1;
  APlayerState *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APlayerState_ReceiveOverrideWith);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// RegisterPlayerWithSession @ 14839d100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::RegisterPlayerWithSession(APlayerState *this,bool param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ENetMode EVar6;
  UClass *this_00;
  UOnlineEngineInterface *pUVar7;
  UWorld *pUVar8;
  
  EVar6 = AActor::InternalGetNetMode((AActor *)this);
  if ((EVar6 != NM_Standalone) &&
     (bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->UniqueId), bVar4)) {
    this_00 = StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar7 = UOnlineEngineInterface::Get();
    uVar2 = *(undefined8 *)(pUVar1 + 0x14);
    pcVar3 = *(code **)(*(longlong *)pUVar7 + 0x338);
    pUVar8 = AActor::GetWorld((AActor *)this);
    cVar5 = (*pcVar3)(pUVar7,pUVar8,uVar2);
    if (cVar5 != '\0') {
      pUVar7 = UOnlineEngineInterface::Get();
      uVar2 = *(undefined8 *)(pUVar1 + 0x14);
      pcVar3 = *(code **)(*(longlong *)pUVar7 + 0x350);
      pUVar8 = AActor::GetWorld((AActor *)this);
      (*pcVar3)(pUVar7,pUVar8,uVar2,&this->UniqueId,param_1);
    }
  }
  return;
}

// Reset @ 1483a1320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::Reset(APlayerState *this)

{
  AActor::Reset((AActor *)this);
  this->Score = 0.0;
                    /* WARNING: Could not recover jumptable at 0x0001483a1343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x710))(this);
  return;
}

// SeamlessTravelTo @ 1483a2e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SeamlessTravelTo(APlayerState *this,APlayerState *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  APlayerState *local_res10 [3];
  
  if (param_1 == (APlayerState *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1122790251736072582>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerState.cpp"
                       ,0x186,"NewPlayerState");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x808))();
    local_res10[0] = param_1;
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_APlayerState_ReceiveCopyProperties);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,local_res10);
    param_1->field_0x2ca = (param_1->field_0x2ca ^ this->field_0x2ca) & 4 ^ param_1->field_0x2ca;
  }
  return;
}

// SetCompressedPing @ 1483a8390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetCompressedPing(APlayerState *this,uchar param_1)

{
  this->CompressedPing = param_1;
  return;
}

// SetIsABot @ 1483a91a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetIsABot(APlayerState *this,bool param_1)

{
  this->bIsABot = '\0';
  this->field_0x2ca = this->field_0x2ca | param_1 << 3;
  return;
}

// SetIsFromPreviousLevel @ 1483a91c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetIsFromPreviousLevel(APlayerState *this,bool param_1)

{
  this->bFromPreviousLevel = '\0';
  this->field_0x2ca = this->field_0x2ca | param_1 << 6;
  return;
}

// SetIsInactive @ 1483a91e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetIsInactive(APlayerState *this,bool param_1)

{
  this->bIsInactive = '\0';
  this->field_0x2ca = this->field_0x2ca | param_1 << 5;
  return;
}

// SetIsOnlyASpectator @ 1483a9200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetIsOnlyASpectator(APlayerState *this,bool param_1)

{
  this->bOnlySpectator = '\0';
  this->field_0x2ca = this->field_0x2ca | param_1 << 2;
  return;
}

// SetIsSpectator @ 1483a9220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetIsSpectator(APlayerState *this,bool param_1)

{
  this->bIsSpectator = '\0';
  this->field_0x2ca = this->field_0x2ca | param_1 * '\x02';
  return;
}

// SetOldPlayerName @ 1483a9b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetOldPlayerName(APlayerState *this,FString *param_1)

{
  ::FString::operator=(&this->OldNamePrivate,param_1);
  return;
}

// SetPawnPrivate @ 1483aa3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetPawnPrivate(APlayerState *this,APawn *param_1)

{
  APawn *this_00;
  code *pcVar1;
  FName FVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  FName local_res8;
  FName local_res18;
  
  this_00 = (this->PawnPrivate).field0_0x0.DebugPtr;
  if (this_00 == (APawn *)0x0) {
    bVar6 = param_1 == (APawn *)0x0;
  }
  else {
    bVar6 = this_00 == param_1;
  }
  if (bVar6) {
    return;
  }
  pcVar5 = &DAT_00000002;
  if (this_00 != (APawn *)0x0) {
    pcVar3 = strstr("&APlayerState::OnPawnPrivateDestroyed","::");
    if (pcVar3 == (char *)0x0) {
LAB_1483aa43a:
      pcVar4 = &DAT_00000002;
LAB_1483aa43d:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      do {
        pcVar4 = pcVar3;
        pcVar3 = strstr(pcVar4 + 1,"::");
      } while (pcVar3 != (char *)0x0);
      if (pcVar4 == (char *)0x0) goto LAB_1483aa43a;
      pcVar4 = pcVar4 + 2;
      if (*pcVar4 == '0') goto LAB_1483aa43d;
    }
    ::FName::FName(&local_res8,pcVar4);
    if (*(char *)((longlong)&this_00->_padding_ + 6) != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnDestroyed");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this_00,false);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar6 = FSparseDelegateStorage::Remove((UObject *)this_00,FVar2,(UObject *)this,local_res8);
      *(bool *)((longlong)&this_00->_padding_ + 6) = bVar6;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (APawn *)0x0)) {
    (this->PawnPrivate).field0_0x0.DebugPtr = param_1;
    if (param_1 == (APawn *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->PawnPrivate).field0_0x0.DebugPtr = param_1;
  }
  pcVar3 = strstr("&APlayerState::OnPawnPrivateDestroyed","::");
  if (pcVar3 != (char *)0x0) {
    do {
      pcVar4 = pcVar3;
      pcVar3 = strstr(pcVar4 + 1,"::");
    } while (pcVar3 != (char *)0x0);
    if ((pcVar4 != (char *)0x0) && (pcVar5 = pcVar4 + 2, pcVar4[2] != '0')) goto LAB_1483aa5a8;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1483aa5a8:
  ::FName::FName(&local_res18,pcVar5);
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  ::__Internal_AddDynamic<APlayerState>
            ((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
              *)((longlong)&param_1->_padding_ + 6),this,(pmf_8457e1b1)0x148395bc0,local_res18);
  return;
}

// SetPlayerId @ 1483ab130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetPlayerId(APlayerState *this,int param_1)

{
  this->PlayerId = param_1;
  return;
}

// SetPlayerName @ 1483ab140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetPlayerName(APlayerState *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ENetMode EVar3;
  FString *pFVar4;
  FString local_18;
  
  (**(code **)(this->_padding_ + 0x7b0))();
  EVar3 = AActor::InternalGetNetMode((AActor *)this);
  if ((EVar3 & ~NM_ListenServer) == NM_Standalone) {
    (**(code **)(this->_padding_ + 0x768))(this);
  }
  pFVar4 = GetPlayerName(this,&local_18);
  pFVar1 = &this->OldNamePrivate;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OldNamePrivate).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->OldNamePrivate).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x0001483ab1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x710))(this);
  return;
}

// SetPlayerNameInternal @ 1483ab1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetPlayerNameInternal(APlayerState *this,FString *param_1)

{
  ::FString::operator=(&this->PlayerNamePrivate,param_1);
  return;
}

// SetScore @ 1483ab2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetScore(APlayerState *this,float param_1)

{
  this->Score = param_1;
  return;
}

// SetStartTime @ 1483ab580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetStartTime(APlayerState *this,int param_1)

{
  this->StartTime = param_1;
  return;
}

// SetUniqueId @ 1483ab630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetUniqueId(APlayerState *this,FUniqueNetIdRepl *param_1)

{
  FUniqueNetIdRepl::operator=(&this->UniqueId,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001483ab650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x818))(this);
  return;
}

// SetUniqueId @ 1483ab660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::SetUniqueId(APlayerState *this,FUniqueNetIdRepl *param_1)

{
  FUniqueNetIdRepl::operator=(&this->UniqueId,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001483ab680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x818))(this);
  return;
}

// ShouldBroadCastWelcomeMessage @ 1483abe30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APlayerState::ShouldBroadCastWelcomeMessage(APlayerState *this,bool param_1)

{
  ENetMode EVar1;
  
  if (this->bIsInactive == '\0') {
    EVar1 = AActor::InternalGetNetMode((AActor *)this);
    if (EVar1 != NM_Standalone) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesAPlayerState @ 1483af690

void __cdecl APlayerState::StaticRegisterNativesAPlayerState(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_APlayerState_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeleportTo @ 1483b0020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
APlayerState::TeleportTo
          (APlayerState *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  
  bVar1 = AActor::TeleportTo((AActor *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// UnregisterPlayerWithSession @ 1483b2bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::UnregisterPlayerWithSession(APlayerState *this)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ENetMode EVar6;
  UClass *this_00;
  UOnlineEngineInterface *pUVar7;
  UWorld *pUVar8;
  
  EVar6 = AActor::InternalGetNetMode((AActor *)this);
  if ((EVar6 == NM_Client) &&
     (bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->UniqueId), bVar4)) {
    this_00 = StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if (*(longlong *)(pUVar1 + 0x14) != 0) {
      pUVar7 = UOnlineEngineInterface::Get();
      uVar2 = *(undefined8 *)(pUVar1 + 0x14);
      pcVar3 = *(code **)(*(longlong *)pUVar7 + 0x338);
      pUVar8 = AActor::GetWorld((AActor *)this);
      cVar5 = (*pcVar3)(pUVar7,pUVar8,uVar2);
      if (cVar5 != '\0') {
        pUVar7 = UOnlineEngineInterface::Get();
        uVar2 = *(undefined8 *)(pUVar1 + 0x14);
        pcVar3 = *(code **)(*(longlong *)pUVar7 + 0x358);
        pUVar8 = AActor::GetWorld((AActor *)this);
        (*pcVar3)(pUVar7,pUVar8,uVar2,&this->UniqueId);
      }
    }
  }
  return;
}

// UpdatePing @ 1483b6a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APlayerState::UpdatePing(APlayerState *this,float param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_APlayerState::UpdatePing(float)_::_2_::FStat_STAT_PlayerState_UpdatePing>
  FVar11;
  UWorld *pUVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  float fVar17;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18 [2];
  FStatMessage local_58 [3];
  
  FVar16.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_PlayerState_UpdatePing ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_APlayerState::UpdatePing(float)_::_2_::FStat_STAT_PlayerState_UpdatePing>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_res8.s,"STAT_PlayerState_UpdatePing");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlayerState_UpdatePing,*pFVar10,
                   L"STAT_PlayerState_UpdatePing","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_PlayerState_UpdatePing;
  if (StatPtr_STAT_PlayerState_UpdatePing ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_APlayerState::UpdatePing(float)_::_2_::FStat_STAT_PlayerState_UpdatePing>
       )0x0) {
    pFVar10 = ::FName::FName(local_res18,"STAT_PlayerState_UpdatePing");
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_APlayerState::UpdatePing(float)_::_2_::FStat_STAT_PlayerState_UpdatePing>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlayerState_UpdatePing,*pFVar10
                          ,L"STAT_PlayerState_UpdatePing","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerState.cpp"
                   ,0x29);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_1483b6bbb;
    }
  }
  bVar7 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_1483b6bbb:
  if (__real_3f8ccccd <= param_1) {
    param_1 = __real_3f8ccccd;
  }
  pUVar12 = AActor::GetWorld((AActor *)this);
  dVar3 = pUVar12->RealTimeSeconds;
  if ((float)dVar3 - this->CurPingBucketTimestamp < __real_3f800000) {
    bVar9 = this->CurPingBucket;
    if (this->PingBucket[bVar9].PingCount < 7) {
      uVar5 = *(undefined2 *)(this->PingBucket + bVar9);
      *(ushort *)(this->PingBucket + bVar9) =
           ((short)((int)ROUND(param_1 * __real_44fa0000 - __real_3f000000) >> 1) +
            ((undefined2 *)(this->PingBucket + bVar9))->PingSum ^ this->PingBucket[bVar9].PingSum) &
           0x1fff ^ uVar5;
      puVar2 = &this->PingBucket[this->CurPingBucket].field_0x2;
      uVar4 = *puVar2;
      this->PingBucket[this->CurPingBucket].field_0x2 =
           (this->PingBucket[this->CurPingBucket].PingCount + 1 ^
           this->PingBucket[this->CurPingBucket].PingCount) & 7 ^ uVar4;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x798))(this);
    fVar17 = param_1 * __real_44fa0000;
    bVar9 = this->CurPingBucket + 1 & 3;
    this->CurPingBucketTimestamp = (float)dVar3;
    fVar17 = fVar17 - __real_3f000000;
    this->CurPingBucket = bVar9;
    *(ushort *)(this->PingBucket + bVar9) =
         ((ushort)((int)ROUND(fVar17) >> 1) ^ ((undefined2 *)(this->PingBucket + bVar9))->PingSum) &
         0x1fff ^ *(undefined2 *)(this->PingBucket + bVar9);
    bVar9 = this->CurPingBucket;
    puVar2 = &this->PingBucket[bVar9].field_0x2;
    *puVar2 = *puVar2 & 0xf9;
    puVar2 = &this->PingBucket[bVar9].field_0x2;
    *puVar2 = *puVar2 | 1;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_58[0].NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 1483b9360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
APlayerState::ValidateGeneratedRepEnums
          (APlayerState *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_Score,L"Score");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_PlayerId,L"PlayerId");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_CompressedPing,L"CompressedPing");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_bIsSpectator,L"bIsSpectator");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_bOnlySpectator,L"bOnlySpectator");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_bIsABot,L"bIsABot");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_bIsInactive,L"bIsInactive");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar5 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&Name_bFromPreviousLevel,L"bFromPreviousLevel");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar5 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&Name_StartTime,L"StartTime");
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar5 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FName::FName(&Name_UniqueId,L"UniqueId");
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar5 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FName::FName(&Name_PlayerNamePrivate,L"PlayerNamePrivate");
    _Init_thread_footer(&::_TSS10);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_Score == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_PlayerId == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_CompressedPing == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_bIsSpectator == FVar4) {
          if ((param_1->ArrayNum < 0xf) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_bOnlySpectator == FVar4) {
            if ((param_1->ArrayNum < 0x10) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar6;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_bIsABot == FVar4) {
              if ((param_1->ArrayNum < 0x11) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x100);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              FVar4 = FVar6;
              if (bVar3) {
                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_bIsInactive == FVar4) {
                if ((param_1->ArrayNum < 0x12) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                FVar4 = FVar6;
                if (bVar3) {
                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                }
                if (Name_bFromPreviousLevel == FVar4) {
                  if ((param_1->ArrayNum < 0x13) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x120);
                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                  FVar4 = FVar6;
                  if (bVar3) {
                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                  }
                  if (Name_StartTime == FVar4) {
                    if ((param_1->ArrayNum < 0x14) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x130);
                    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                    FVar4 = FVar6;
                    if (bVar3) {
                      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                    }
                    if (Name_UniqueId == FVar4) {
                      if ((param_1->ArrayNum < 0x15) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x140);
                      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                      if (bVar3) {
                        FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
                      }
                      if (Name_PlayerNamePrivate == FVar6) {
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\PlayerState.gen.cpp"
                     ,0x554,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerState"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execBP_GetUniqueId @ 1483bb9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl APlayerState::execBP_GetUniqueId(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  byte local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48._0_8_ = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)(local_48 + 8),
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&param_1[0x12].field_0x8);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_48._0_8_ = &___7FUniqueNetIdRepl__6B_;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  FUniqueNetIdRepl::operator=(param_3,(FUniqueNetIdRepl *)local_48);
  local_48._0_8_ = &___7FUniqueNetIdRepl__6B_;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (1 < local_30) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_30])(local_48 + 8);
  return;
}

// execGetCompressedPing @ 1483bf910

void __cdecl APlayerState::execGetCompressedPing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x11].field_0x20;
  return;
}

// execGetPawn @ 1483c18c0

void __cdecl APlayerState::execGetPawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x14].field_0x20;
  return;
}

// execGetPingInMilliseconds @ 1483c18f0

void __cdecl APlayerState::execGetPingInMilliseconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0.0 < *(float *)&param_1[0x13].field_0x10) {
    *(float *)param_3 = *(float *)&param_1[0x13].field_0x10;
    return;
  }
  *(float *)param_3 = (float)(byte)param_1[0x11].field_0x20 * __real_40800000;
  return;
}

// execGetPlayerController @ 1483c19c0

void __cdecl APlayerState::execGetPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[8].field_0x18;
  if (lVar2 != 0) {
    pUVar3 = APlayerController::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(longlong *)param_3 = lVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetPlayerId @ 1483c1a40

void __cdecl APlayerState::execGetPlayerId(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x11].field_0x1c;
  return;
}

// execGetPlayerName @ 1483c1a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl APlayerState::execGetPlayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetPlayerName((APlayerState *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetScore @ 1483c2a60

void __cdecl APlayerState::execGetScore(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x11].field_0x18;
  return;
}

// execIsABot @ 1483c2e00

void __cdecl APlayerState::execIsABot(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x11].field_0x22 >> 3 & 1;
  return;
}

// execIsOnlyASpectator @ 1483c2f40

void __cdecl APlayerState::execIsOnlyASpectator(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x11].field_0x22 >> 2 & 1;
  return;
}

// execIsSpectator @ 1483c3170

void __cdecl APlayerState::execIsSpectator(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x11].field_0x22 >> 1 & 1;
  return;
}

// execOnPawnPrivateDestroyed @ 1483c3470

void __cdecl
APlayerState::execOnPawnPrivateDestroyed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8 == *(longlong *)&param_1[0x14].field_0x20) {
    *(undefined8 *)&param_1[0x14].field_0x20 = 0;
  }
  return;
}

// execOnRep_PlayerId @ 1483c35e0

void __cdecl APlayerState::execOnRep_PlayerId(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c35f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x778))();
  return;
}

// execOnRep_PlayerName @ 1483c3610

void __cdecl APlayerState::execOnRep_PlayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c3628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x768))();
  return;
}

// execOnRep_Score @ 1483c3640

void __cdecl APlayerState::execOnRep_Score(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c3658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// execOnRep_UniqueId @ 1483c3670

void __cdecl APlayerState::execOnRep_UniqueId(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c3688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x780))();
  return;
}

// execOnRep_bIsInactive @ 1483c36a0

void __cdecl APlayerState::execOnRep_bIsInactive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c36b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x770))();
  return;
}

