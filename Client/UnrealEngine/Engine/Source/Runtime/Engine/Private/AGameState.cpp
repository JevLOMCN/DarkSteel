// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 147c16b90

UClass * __cdecl AGameState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameState",&Z_Registration_Info_UClass_AGameState.InnerSingleton,
               StaticRegisterNativesAGameState,0x338,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Game",InternalConstructor<AGameState>,InternalVTableHelperCtorCaller<AGameState>,
               local_res8,AGameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameState.InnerSingleton;
}

// AGameState @ 147c2c1b0

AGameState * __thiscall AGameState::AGameState(AGameState *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AGameState__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MatchState).ComparisonIndex = 0;
  (this->MatchState).Number = 0;
  (this->PreviousMatchState).ComparisonIndex = 0;
  (this->PreviousMatchState).Number = 0;
  (this->TimerHandle_DefaultTimer).Handle = 0;
  return this;
}

// AGameState @ 147c2c220

AGameState * __thiscall AGameState::AGameState(AGameState *this,FObjectInitializer *param_1)

{
  AGameStateBase::AGameStateBase((AGameStateBase *)this,param_1);
  this->_padding_ = (longlong)&___7AGameState__6B_;
  (this->MatchState).ComparisonIndex = 0;
  (this->MatchState).Number = 0;
  (this->PreviousMatchState).ComparisonIndex = 0;
  (this->PreviousMatchState).Number = 0;
  (this->TimerHandle_DefaultTimer).Handle = 0;
  this->MatchState = MatchState::EnteringMap;
  this->PreviousMatchState = MatchState::EnteringMap;
  return this;
}

// ~AGameState @ 147c30f90

void __thiscall AGameState::~AGameState(AGameState *this)

{
  this->_padding_ = (longlong)&___7AGameStateBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  AInfo::~AInfo((AInfo *)this);
  return;
}

// DefaultTimer @ 147c41810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameState::DefaultTimer(AGameState *this)

{
  char cVar1;
  ENetMode EVar2;
  FTimerManager *this_00;
  AWorldSettings *pAVar3;
  float fVar4;
  
  cVar1 = (**(code **)(this->_padding_ + 0x7f0))();
  if (cVar1 != '\0') {
    this->ElapsedTime = this->ElapsedTime + 1;
    EVar2 = AActor::InternalGetNetMode((AActor *)this);
    if (EVar2 != NM_DedicatedServer) {
      (**(code **)(this->_padding_ + 0x820))(this);
    }
  }
  this_00 = AActor::GetWorldTimerManager((AActor *)this);
  pAVar3 = AActor::GetWorldSettings((AActor *)this);
  fVar4 = (float)(**(code **)(pAVar3->_padding_ + 0x790))(pAVar3);
  pAVar3 = AActor::GetWorldSettings((AActor *)this);
  FTimerManager::SetTimer<AGameState>
            (this_00,&this->TimerHandle_DefaultTimer,this,(pmf_37f5dfa4)0x147c33970,
             fVar4 / pAVar3->DemoPlayTimeDilation,true,__real_bf800000);
  return;
}

// GetLifetimeReplicatedProps @ 147c57440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AGameState::GetLifetimeReplicatedProps
          (AGameState *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18;
  FString local_38;
  FDoRepLifetimeParams local_28;
  
  AGameStateBase::GetLifetimeReplicatedProps((AGameStateBase *)this,param_1);
  pFVar2 = ::FName::FName(&local_res18,10,L"MatchState",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28._8_8_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  local_28.Condition = COND_InitialOnly;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28._8_8_ = local_28._8_8_ & 0xffffffffffffff00;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0xb,L"ElapsedTime",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  return;
}

// GetPlayerRespawnDelay @ 147c59750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall AGameState::GetPlayerRespawnDelay(AGameState *this,AController *param_1)

{
  AGameMode *pAVar1;
  
  pAVar1 = AGameStateBase::GetDefaultGameMode<AGameMode>((AGameStateBase *)this);
  if (pAVar1 != (AGameMode *)0x0) {
    return pAVar1->MinRespawnDelay;
  }
  return __real_3f800000;
}

// GetPlayerStartTime @ 147c59790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall AGameState::GetPlayerStartTime(AGameState *this,AController *param_1)

{
  return (float)this->ElapsedTime;
}

// GetPrivateStaticClass @ 147c5a010

UClass * __cdecl AGameState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameState",&Z_Registration_Info_UClass_AGameState.InnerSingleton,
               StaticRegisterNativesAGameState,0x338,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Game",InternalConstructor<AGameState>,InternalVTableHelperCtorCaller<AGameState>,
               local_res8,AGameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameState.InnerSingleton;
}

// HandleBeginPlay @ 147c5f150

void __thiscall AGameState::HandleBeginPlay(AGameState *this)

{
  return;
}

// HandleLeavingMap @ 147c60dd0

void __thiscall AGameState::HandleLeavingMap(AGameState *this)

{
  return;
}

// HandleMatchHasEnded @ 147c610b0

void __thiscall AGameState::HandleMatchHasEnded(AGameState *this)

{
  return;
}

// HandleMatchHasStarted @ 147c61390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameState::HandleMatchHasStarted(AGameState *this)

{
  code *UNRECOVERED_JUMPTABLE;
  AWorldSettings *pAVar1;
  
  if ((char)this->_padding_ != '\x03') {
    pAVar1 = AActor::GetWorldSettings((AActor *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x7c0);
                    /* WARNING: Could not recover jumptable at 0x000147c613b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// HandleMatchIsWaitingToStart @ 147c613e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameState::HandleMatchIsWaitingToStart(AGameState *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  AWorldSettings *pAVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res8;
  FString local_38;
  FDestructionSentinel local_28;
  
  if ((char)this->_padding_ != '\x03') {
    FMoviePlayerProxy::BlockingStarted();
    pAVar6 = AActor::GetWorldSettings((AActor *)this);
    (**(code **)(pAVar6->_padding_ + 0x7b8))(pAVar6);
    FMoviePlayerProxy::BlockingFinished();
  }
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::GameStateClassChanged,(FWriteAccessScope *)&local_28);
  bVar2 = false;
  FCoreDelegates::GameStateClassChanged._28_4_ = FCoreDelegates::GameStateClassChanged._28_4_ + 1;
  uVar7 = FCoreDelegates::GameStateClassChanged._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (int)FCoreDelegates::GameStateClassChanged._16_4_) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + FCoreDelegates::GameStateClassChanged._8_8_) == 0) ||
          (*(longlong **)(lVar8 + FCoreDelegates::GameStateClassChanged._8_8_) == (longlong *)0x0))
         || (cVar4 = (**(code **)(**(longlong **)
                                    (lVar8 + FCoreDelegates::GameStateClassChanged._8_8_) + 0x68))()
            , cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  FCoreDelegates::GameStateClassChanged._28_4_ = FCoreDelegates::GameStateClassChanged._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::GameStateClassChanged,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// HasMatchEnded @ 147c64100

bool __thiscall AGameState::HasMatchEnded(AGameState *this)

{
  if (this->MatchState != MatchState::WaitingPostMatch) {
    return this->MatchState == MatchState::LeavingMap;
  }
  return true;
}

// HasMatchStarted @ 147c64180

bool __thiscall AGameState::HasMatchStarted(AGameState *this)

{
  if (this->MatchState != MatchState::EnteringMap) {
    return this->MatchState != MatchState::WaitingToStart;
  }
  return false;
}

// IsMatchInProgress @ 147c692b0

bool __thiscall AGameState::IsMatchInProgress(AGameState *this)

{
  return this->MatchState == MatchState::InProgress;
}

// OnRep_ElapsedTime @ 147c70460

void __thiscall AGameState::OnRep_ElapsedTime(AGameState *this)

{
  return;
}

// OnRep_MatchState @ 147c70480

void __thiscall AGameState::OnRep_MatchState(AGameState *this)

{
  FName FVar1;
  
  if ((this->MatchState == MatchState::WaitingToStart) ||
     (this->PreviousMatchState == MatchState::EnteringMap)) {
    (**(code **)(this->_padding_ + 0x7f8))();
  }
  FVar1 = this->MatchState;
  if (FVar1 == MatchState::InProgress) {
    (**(code **)(this->_padding_ + 0x800))(this);
  }
  else if (FVar1 == MatchState::WaitingPostMatch) {
    (**(code **)(this->_padding_ + 0x808))(this);
  }
  else {
    if (FVar1 != MatchState::LeavingMap) goto LAB_147c70507;
    (**(code **)(this->_padding_ + 0x810))(this);
  }
  FVar1 = this->MatchState;
LAB_147c70507:
  this->PreviousMatchState = FVar1;
  return;
}

// PostInitializeComponents @ 147c72120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameState::PostInitializeComponents(AGameState *this)

{
  FTimerManager *this_00;
  AWorldSettings *pAVar1;
  float fVar2;
  
  AGameStateBase::PostInitializeComponents((AGameStateBase *)this);
  this_00 = AActor::GetWorldTimerManager((AActor *)this);
  pAVar1 = AActor::GetWorldSettings((AActor *)this);
  fVar2 = (float)(**(code **)(pAVar1->_padding_ + 0x790))(pAVar1);
  pAVar1 = AActor::GetWorldSettings((AActor *)this);
  FTimerManager::SetTimer<AGameState>
            (this_00,&this->TimerHandle_DefaultTimer,this,(pmf_37f5dfa4)0x147c33970,
             fVar2 / pAVar1->DemoPlayTimeDilation,true,__real_bf800000);
  return;
}

// ReceivedGameModeClass @ 147c789a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameState::ReceivedGameModeClass(AGameState *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  UWorld *this_00;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong lVar9;
  UObject *local_res8;
  FName local_res10;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  FString local_18;
  
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_28);
  for (; (iVar1 = local_28.Index, pTVar4 = local_28.Container, -1 < local_28.Index &&
         (local_28.Index < (local_28.Container)->ArrayNum)); local_28.Index = local_28.Index + 1) {
    if ((local_28.Index < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar4->AllocatorInstance).Data + (longlong)iVar1 * 8));
    if (pUVar6 != (UObject *)0x0) {
      pcVar3 = *(code **)(*(longlong *)pUVar6 + 0xed8);
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      (*pcVar3)(pUVar6,&local_res8);
    }
  }
  lVar2 = this->_padding_;
  lVar9 = 0;
  lVar8 = lVar9;
  if ((lVar2 != 0) && (pUVar7 = AGameModeBase::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = this->_padding_;
    }
  }
  pUVar7 = Z_Construct_UClass_AGameMode_NoRegister();
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return;
    }
  }
  if (1 < (byte)LogGameState._0_1_) {
    lVar2 = this->_padding_;
    if ((lVar2 != 0) && (pUVar7 = AGameModeBase::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar9 = this->_padding_;
      }
    }
    local_res10 = *(FName *)(lVar9 + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameState);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetMatchState @ 147c80da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AGameState::SetMatchState(AGameState *this,FName param_1)

{
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((char)this->_padding_ == '\x03') {
    local_res10 = param_1;
    if (4 < (byte)LogGameState._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      ::FName::ToString(&this->MatchState,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameState);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->MatchState = local_res10;
    (**(code **)(this->_padding_ + 0x818))(this);
  }
  return;
}

// StaticRegisterNativesAGameState @ 147c87f90

void __cdecl AGameState::StaticRegisterNativesAGameState(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_AGameState_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 147c8f450

void __thiscall
AGameState::ValidateGeneratedRepEnums
          (AGameState *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
    ::FName::FName(&Name_MatchState,L"MatchState");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_ElapsedTime,L"ElapsedTime");
    _Init_thread_footer(&::_TSS1);
  }
  if ((param_1->ArrayNum < 0xf) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_MatchState == FVar4) {
    if ((param_1->ArrayNum < 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar3) {
      FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_ElapsedTime == FVar6) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\GameState.gen.cpp"
                     ,0xe6,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameState"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execOnRep_ElapsedTime @ 147c9b6c0

void __cdecl AGameState::execOnRep_ElapsedTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x820))();
  return;
}

// execOnRep_MatchState @ 147c9b720

void __cdecl AGameState::execOnRep_MatchState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x818))();
  return;
}

