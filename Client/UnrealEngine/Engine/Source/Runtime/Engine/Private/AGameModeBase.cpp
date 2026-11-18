// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 119

// GetActorBounds @ 147bdeab0

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
AGameModeBase::GetActorBounds
          (AGameModeBase *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  return;
}

// GetVelocity @ 147becd90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
AGameModeBase::GetVelocity(AGameModeBase *this,TVector<double> *__return_storage_ptr__)

{
  AActor::GetVelocity((AActor *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticClass @ 147c03190

UClass * __cdecl AGameModeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AGameModeBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameModeBase",
               &Z_Registration_Info_UClass_AGameModeBase.InnerSingleton,
               StaticRegisterNativesAGameModeBase,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AGameModeBase>,InternalVTableHelperCtorCaller<AGameModeBase>,
               aFStackX_8,AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameModeBase.InnerSingleton;
}

// TeleportTo @ 147c03be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AGameModeBase::TeleportTo
          (AGameModeBase *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  
  bVar1 = AActor::TeleportTo((AActor *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// AGameModeBase @ 147c2bc70

AGameModeBase * __thiscall AGameModeBase::AGameModeBase(AGameModeBase *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AGameModeBase__6B_;
  (this->OptionsString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionsString).Data.ArrayNum = 0;
  (this->OptionsString).Data.ArrayMax = 0;
  (this->GameSessionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameStateClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerStateClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->HUDClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultPawnClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpectatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ServerStatReplicatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameSession).field0_0x0.DebugPtr = (AGameSession *)0x0;
  (this->GameState).field0_0x0.DebugPtr = (AGameStateBase *)0x0;
  (this->ServerStatReplicator).field0_0x0.DebugPtr = (AServerStatReplicator *)0x0;
  FText::FText(&this->DefaultPlayerName);
  this->GameNetDriverReplicationSystem = Default;
  (this->Pausers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pausers).ArrayNum = 0;
  (this->Pausers).ArrayMax = 0;
  return this;
}

// AGameModeBase @ 147c2bd30

AGameModeBase * __thiscall
AGameModeBase::AGameModeBase(AGameModeBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint uVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FName local_res8;
  
  pFVar4 = ::FName::FName(&local_res8,L"Sprite");
  FVar3 = *pFVar4;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar3);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar3,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AGameModeBase__6B_;
  (this->OptionsString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionsString).Data.ArrayNum = 0;
  (this->OptionsString).Data.ArrayMax = 0;
  (this->GameSessionClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameStateClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerStateClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->HUDClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultPawnClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpectatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ServerStatReplicatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameSession).field0_0x0.DebugPtr = (AGameSession *)0x0;
  (this->GameState).field0_0x0.DebugPtr = (AGameStateBase *)0x0;
  (this->ServerStatReplicator).field0_0x0.DebugPtr = (AServerStatReplicator *)0x0;
  FText::FText(&this->DefaultPlayerName);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xf7;
  this->GameNetDriverReplicationSystem = Default;
  this->bStartPlayersAsSpectators = 0;
  this->bPauseable = 1;
  (this->Pausers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pausers).ArrayNum = 0;
  (this->Pausers).ArrayMax = 0;
  pUVar5 = Z_Construct_UClass_ADefaultPawn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->DefaultPawnClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->PlayerControllerClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = Z_Construct_UClass_APlayerState_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->PlayerStateClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = AGameStateBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->GameStateClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = Z_Construct_UClass_AHUD_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->HUDClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = AGameSession::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->GameSessionClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SpectatorClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = Z_Construct_UClass_AServerStatReplicator_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ServerStatReplicatorClass).Class.field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~AGameModeBase @ 147c30ee0

void __thiscall AGameModeBase::~AGameModeBase(AGameModeBase *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7AGameModeBase__6B_;
  DestructItems<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->Pausers).AllocatorInstance.Data,(this->Pausers).ArrayNum);
  pFVar1 = (this->Pausers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DefaultPlayerName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->OptionsString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AInfo::~AInfo((AInfo *)this);
  return;
}

// AllowCheats @ 147c357c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AGameModeBase::AllowCheats(AGameModeBase *this,APlayerController *param_1)

{
  ENetMode EVar1;
  
  EVar1 = AActor::InternalGetNetMode((AActor *)this);
  return EVar1 == NM_Standalone;
}

// AllowPausing @ 147c357e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AGameModeBase::AllowPausing(AGameModeBase *this,APlayerController *param_1)

{
  ENetMode EVar1;
  
  if (this->bPauseable == 0) {
    EVar1 = AActor::InternalGetNetMode((AActor *)this);
    if (EVar1 != NM_Standalone) {
      return false;
    }
  }
  return true;
}

// CanServerTravel @ 147c3b5a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameModeBase::CanServerTravel(AGameModeBase *this,FString *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  UWorld *pUVar7;
  FStaticBasicLogRecord *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  FString local_58;
  FString local_48;
  FText local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pUVar7 = AActor::GetWorld((AActor *)this);
  if ((pUVar7 == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameModeBase.cpp"
                         ,0x1b9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = ::FString::Find(param_1,L"%",1,IgnoreCase,FromStart,-1);
  if (iVar5 != -1) {
    if ((byte)LogGameMode._0_1_ < 2) {
      return false;
    }
    pFVar8 = &::LOG_Static;
LAB_147c3b804:
    UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogGameMode);
    return false;
  }
  iVar5 = ::FString::Find(param_1,L":",1,IgnoreCase,FromStart,-1);
  if ((iVar5 != -1) ||
     (iVar5 = ::FString::Find(param_1,L"\\",1,IgnoreCase,FromStart,-1), iVar5 != -1)) {
    if ((byte)LogGameMode._0_1_ < 2) {
      return false;
    }
    pFVar8 = &::LOG_Static;
    goto LAB_147c3b804;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  iVar5 = ::FString::Find(param_1,L"?",1,IgnoreCase,FromStart,-1);
  iVar10 = 0;
  if (iVar5 == -1) {
    ::FString::operator=(&local_58,param_1);
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = iVar10;
    }
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    iVar5 = iVar10;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    if (iVar1 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_48,pwVar9,iVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
  }
  FText::FText(&local_38);
  bVar3 = ::FString::StartsWith(&local_58,L"/",1,IgnoreCase);
  if (bVar3) {
    local_28 = local_58.Data.AllocatorInstance.Data;
    iStack_20 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iStack_20 = iVar10;
    }
    local_18._12_4_ = uStack_1c;
    local_18.Size = iStack_20;
    local_18.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    bVar3 = FPackageName::IsValidLongPackageName(&local_18,true,&local_38);
    if (!bVar3) {
      if (4 < (byte)LogGameMode._0_1_) {
        FText::ToString(&local_38);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      }
      bVar3 = false;
      goto LAB_147c3b7c8;
    }
  }
  bVar3 = true;
LAB_147c3b7c8:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return bVar3;
  }
  return bVar3;
}

// CanSpectate @ 147c3b830

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
AGameModeBase::CanSpectate(AGameModeBase *this,APlayerController *param_1,APlayerState *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 uVar2;
  APlayerController *local_28;
  APlayerState *local_20;
  char local_18;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_CanSpectate);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = '\0';
    local_28 = param_1;
    local_20 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
    uVar2 = local_18 != '\0';
  }
  else {
    uVar2 = (**(code **)(this->_padding_ + 0x798))(this,param_1,param_2);
  }
  return (bool)uVar2;
}

// CanSpectate_Implementation @ 147c3b8d0

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
AGameModeBase::CanSpectate_Implementation
          (AGameModeBase *this,APlayerController *param_1,APlayerState *param_2)

{
  return true;
}

// ChangeName @ 147c3b9c0

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
AGameModeBase::ChangeName(AGameModeBase *this,AController *param_1,FString *param_2,bool param_3)

{
  uint uVar1;
  APlayerState *pAVar2;
  FScriptContainerElement *_Src;
  UFunction *pUVar3;
  AController *local_28;
  FString local_20;
  undefined1 local_10;
  
  if ((param_1 != (AController *)0x0) && (1 < (param_2->Data).ArrayNum)) {
    pAVar2 = (param_1->PlayerState).field0_0x0.DebugPtr;
    (**(code **)(pAVar2->_padding_ + 0x7a8))(pAVar2,param_2);
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    local_28 = param_1;
    if (&local_20 != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_20.Data.ArrayMax = 0;
      local_20.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
        memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    local_10 = param_3;
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_OnChangeName);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_28);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ChoosePlayerStart @ 147c3bad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall AGameModeBase::ChoosePlayerStart(AGameModeBase *this,AController *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  AActor *pAVar2;
  AController *local_18;
  AActor *local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_ChoosePlayerStart);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = (AActor *)0x0;
    local_18 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return local_10;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c3bb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar2 = (AActor *)(**(code **)(this->_padding_ + 0x790))(this,param_1);
  return pAVar2;
}

// ChoosePlayerStart_Implementation @ 147c3bb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall
AGameModeBase::ChoosePlayerStart_Implementation(AGameModeBase *this,AController *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  double *pdVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  UWorld *this_00;
  AActor *pAVar13;
  APlayerStart *pAVar14;
  longlong extraout_RAX;
  longlong lVar15;
  TRotator<double> *pTVar16;
  uint uVar17;
  APlayerStart *pAVar18;
  ForAnyElementType FVar19;
  APlayerStart *pAVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  UClass *local_res18 [2];
  APlayerStart *local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  TVector<double>_u_0 local_180;
  TQuat<double> local_168;
  TActorIteratorBase<TActorIterator<APlayerStart>_> local_148;
  longlong local_e8 [2];
  TRotator<double> local_d8;
  TVector<double>_u_0 local_b8;
  TRotator<double> local_98;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  TRotator<double> local_60 [2];
  
  pAVar20 = (APlayerStart *)0x0;
  pUVar11 = GetDefaultPawnClassForController(this,param_1);
  if (pUVar11 == (UClass *)0x0) {
    pAVar12 = (AActor *)0x0;
  }
  else {
    if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar11);
    }
    pAVar12 = (AActor *)(pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar11 = Z_Construct_UClass_APawn_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if (((*(int *)(pAVar12->_padding_ + 0x38) < iVar9) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
         &pUVar11->_padding_)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pAVar12 = (AActor *)(*pcVar4)();
      return pAVar12;
    }
  }
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar11 = Z_Construct_UClass_APlayerStart_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  local_148.Flags = OnlyActiveLevels|SkipPendingKill;
  local_148.State.bIsSet = false;
  local_res18[0] = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FActorIteratorState::FActorIteratorState
            (&local_148.State.TypedValue,this_00,(TSubclassOf<AActor>)local_res18);
  local_148.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<APlayerStart>_>::operator++(&local_148);
  do {
    if ((local_148.State.bIsSet == false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      pAVar12 = (AActor *)(*pcVar4)();
      return pAVar12;
    }
    pAVar18 = pAVar20;
    if (local_148.State.TypedValue.ReachedEnd != false) {
LAB_147c3c07a:
      if (local_148.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_148.State.TypedValue.CurrentWorld,
                   local_148.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_148.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      if (pAVar18 == (APlayerStart *)0x0) {
        if ((int)local_188 < 1) {
          if (0 < (int)local_198) {
            uVar10 = FMath::RandRange(0,(int)local_198 + -1);
            uVar17 = 0;
            if ((int)uVar10 < (int)local_198) {
              uVar17 = ~uVar10 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              pAVar12 = (AActor *)(*pcVar4)();
              return pAVar12;
            }
            pAVar18 = *(APlayerStart **)(local_1a0.Data + (longlong)(int)uVar10 * 8);
          }
        }
        else {
          uVar10 = FMath::RandRange(0,(int)local_188 + -1);
          uVar17 = 0;
          if ((int)uVar10 < (int)local_188) {
            uVar17 = ~uVar10 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            pAVar12 = (AActor *)(*pcVar4)();
            return pAVar12;
          }
          pAVar18 = *(APlayerStart **)(local_190.Data + (longlong)(int)uVar10 * 8);
        }
      }
      if (local_1a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
      if (local_190.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data);
      }
      return (AActor *)pAVar18;
    }
    if ((local_148.State.bIsSet == false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      pAVar12 = (AActor *)(*pcVar4)();
      return pAVar12;
    }
    pAVar13 = FActorIteratorState::GetActorChecked(&local_148.State.TypedValue);
    pAVar14 = CastChecked<APlayerStart,AActor>(pAVar13);
    local_1a8 = pAVar14;
    pUVar11 = Z_Construct_UClass_APlayerStartPIE_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)(pAVar14->_padding_ + 0x38)) &&
       (pAVar18 = local_1a8,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar9 * 8)
       == &pUVar11->_padding_)) goto LAB_147c3c07a;
    lVar15 = local_1a8->_padding_;
    if (lVar15 == 0) {
      uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar24 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_180._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_180._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_180._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_180._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_68 = *(undefined8 *)(lVar15 + 0x220);
      uVar23 = (undefined4)local_68;
      uVar24 = (undefined4)((ulonglong)local_68 >> 0x20);
      local_78 = *(undefined4 *)(lVar15 + 0x210);
      uStack_74 = *(undefined4 *)(lVar15 + 0x214);
      uStack_70 = *(undefined4 *)(lVar15 + 0x218);
      uStack_6c = *(undefined4 *)(lVar15 + 0x21c);
      local_180._0_4_ = local_78;
      local_180._4_4_ = uStack_74;
      local_180._8_4_ = uStack_70;
      local_180._12_4_ = uStack_6c;
    }
    local_180._s_0.Z = (double)CONCAT44(uVar24,uVar23);
    lVar15 = local_1a8->_padding_;
    if (lVar15 == 0) {
      uVar27 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
      uVar28 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
      uVar23 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
      uVar24 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
      uVar25 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
      uVar26 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
    }
    else {
      local_168.X._0_4_ = *(undefined4 *)(lVar15 + 0x1f0);
      local_168.X._4_4_ = *(undefined4 *)(lVar15 + 500);
      local_168.Y._0_4_ = *(undefined4 *)(lVar15 + 0x1f8);
      local_168.Y._4_4_ = *(undefined4 *)(lVar15 + 0x1fc);
      plVar1 = (longlong *)(lVar15 + 0x1e0);
      local_168.Z._0_4_ = *(undefined4 *)(lVar15 + 0x200);
      local_168.Z._4_4_ = *(undefined4 *)(lVar15 + 0x204);
      local_168.W._0_4_ = *(undefined4 *)(lVar15 + 0x208);
      local_168.W._4_4_ = *(undefined4 *)(lVar15 + 0x20c);
      pAVar18 = local_1a8;
      if (*plVar1 == 0) {
        pAVar14 = ::operator_new(0x40);
        dVar7 = UE::Math::TQuat<double>::Identity.Y;
        pAVar18 = pAVar20;
        if (pAVar14 != (APlayerStart *)0x0) {
          pAVar14->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
          pAVar14->_padding_ = (longlong)dVar7;
          dVar7 = UE::Math::TQuat<double>::Identity.W;
          pAVar14->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
          pAVar14->_padding_ = (longlong)dVar7;
          lVar15 = CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_,
                            UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_);
          pAVar14->_padding_ =
               CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
                        UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_);
          pAVar14->_padding_ = lVar15;
          pAVar14->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
          pAVar18 = pAVar14;
        }
        if (plVar1 != local_e8) {
          pvVar2 = (void *)*plVar1;
          *plVar1 = (longlong)pAVar18;
          ::operator_delete(pvVar2,0x40);
          pAVar18 = pAVar20;
        }
        ::operator_delete(pAVar18,0x40);
        lVar15 = extraout_RAX;
      }
      pdVar3 = (double *)*plVar1;
      lVar21 = -(ulonglong)(pdVar3[3] != (double)CONCAT44(local_168.W._4_4_,local_168.W._0_4_));
      lVar22 = -(ulonglong)(pdVar3[1] != (double)CONCAT44(local_168.Y._4_4_,local_168.Y._0_4_));
      auVar5._8_4_ = (int)lVar21;
      auVar5._0_8_ = -(ulonglong)
                      (pdVar3[2] != (double)CONCAT44(local_168.Z._4_4_,local_168.Z._0_4_));
      auVar5._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      uVar17 = movmskpd((int)pAVar18,auVar5);
      auVar6._8_4_ = (int)lVar22;
      auVar6._0_8_ = -(ulonglong)(*pdVar3 != (double)CONCAT44(local_168.X._4_4_,local_168.X._0_4_));
      auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar9 = movmskpd((int)lVar15,auVar6);
      if ((uVar17 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)pdVar3 = local_168.X._0_4_;
        *(undefined4 *)((longlong)pdVar3 + 4) = local_168.X._4_4_;
        *(undefined4 *)(pdVar3 + 1) = local_168.Y._0_4_;
        *(undefined4 *)((longlong)pdVar3 + 0xc) = local_168.Y._4_4_;
        pdVar3[2] = (double)CONCAT44(local_168.Z._4_4_,local_168.Z._0_4_);
        pdVar3[3] = (double)CONCAT44(local_168.W._4_4_,local_168.W._0_4_);
        pTVar16 = UE::Math::TQuat<double>::Rotator(&local_168,local_60);
        dVar7 = pTVar16->Yaw;
        pdVar3[4] = pTVar16->Pitch;
        pdVar3[5] = dVar7;
        pdVar3[6] = pTVar16->Roll;
      }
      uVar27 = SUB84(pdVar3[6],0);
      uVar28 = (undefined4)((ulonglong)pdVar3[6] >> 0x20);
      uVar23 = *(undefined4 *)(pdVar3 + 4);
      uVar24 = *(undefined4 *)((longlong)pdVar3 + 0x24);
      uVar25 = *(undefined4 *)(pdVar3 + 5);
      uVar26 = *(undefined4 *)((longlong)pdVar3 + 0x2c);
    }
    local_b8._s_0.X = (double)CONCAT44(local_180._4_4_,local_180._0_4_);
    local_b8._s_0.Y = (double)CONCAT44(local_180._12_4_,local_180._8_4_);
    local_d8.Roll = (double)CONCAT44(uVar28,uVar27);
    local_b8._s_0.Z = local_180._s_0.Z;
    local_d8.Pitch._0_4_ = uVar23;
    local_d8.Pitch._4_4_ = uVar24;
    local_d8.Yaw._0_4_ = uVar25;
    local_d8.Yaw._4_4_ = uVar26;
    bVar8 = UWorld::EncroachingBlockingGeometry
                      (this_00,pAVar12,(TVector<double> *)&local_b8._s_0,&local_d8,
                       (TVector<double> *)0x0);
    if (bVar8) {
      local_98.Roll = (double)CONCAT44(uVar28,uVar27);
      local_98.Pitch._0_4_ = uVar23;
      local_98.Pitch._4_4_ = uVar24;
      local_98.Yaw._0_4_ = uVar25;
      local_98.Yaw._4_4_ = uVar26;
      bVar8 = UWorld::FindTeleportSpot(this_00,pAVar12,(TVector<double> *)&local_180._s_0,&local_98)
      ;
      if (bVar8) {
        if (((local_1a0.Data <= (FScriptContainerElement *)&local_1a8) &&
            ((FScriptContainerElement *)&local_1a8 < local_1a0.Data + (longlong)local_198._4_4_ * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar4 = (code *)swi(3);
          pAVar12 = (AActor *)(*pcVar4)();
          return pAVar12;
        }
        iVar9 = (int)local_198;
        if ((int)local_198 == local_198._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
        }
        local_198 = CONCAT44(local_198._4_4_,iVar9 + 1);
        FVar19.Data = local_1a0.Data;
        goto LAB_147c3c05b;
      }
    }
    else {
      if (((local_190.Data <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < local_190.Data + (longlong)local_188._4_4_ * 8))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar4 = (code *)swi(3);
        pAVar12 = (AActor *)(*pcVar4)();
        return pAVar12;
      }
      iVar9 = (int)local_188;
      if ((int)local_188 == local_188._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_190,(int *)((longlong)&local_188 + 4));
      }
      local_188 = CONCAT44(local_188._4_4_,iVar9 + 1);
      FVar19.Data = local_190.Data;
LAB_147c3c05b:
      *(APlayerStart **)(FVar19.Data + (longlong)iVar9 * 8) = local_1a8;
    }
    TActorIteratorBase<TActorIterator<APlayerStart>_>::operator++(&local_148);
  } while( true );
}

// ClearPause @ 147c3c3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameModeBase::ClearPause(AGameModeBase *this)

{
  int *piVar1;
  TArray<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *this_00;
  int iVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  AWorldSettings *pAVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FName local_res10;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  FDestructionSentinel local_90;
  FString local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  bVar8 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x810))(this,0);
  if ((cVar5 == '\0') && (0 < (this->Pausers).ArrayNum)) {
    if (4 < (byte)LogGameMode._0_1_) {
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_78);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    piVar1 = &(this->Pausers).ArrayMax;
    pTVar3 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->Pausers).AllocatorInstance.Data;
    iVar2 = (this->Pausers).ArrayNum;
    if ((this->Pausers).ArrayMax < 0) {
      DestructItems<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar3,iVar2);
      (this->Pausers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->Pausers).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar3,iVar2);
      (this->Pausers).ArrayNum = 0;
    }
    bVar8 = true;
  }
  uVar13 = (this->Pausers).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    this_00 = &this->Pausers;
    lVar14 = (longlong)(int)uVar13 * 0x18;
    do {
      uVar12 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->Pausers).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_a8 = (undefined1  [8])0x0;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8,
                 (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                 ((this_00->AllocatorInstance).Data + lVar14));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,&local_68);
      if (((local_98 == 0) || (local_a0.Data == (FScriptContainerElement *)0x0)) ||
         (cVar5 = (**(code **)(*(longlong *)local_a0.Data + 0x38))(), cVar5 == '\0')) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,&local_50);
        FVar11.Data = (FScriptContainerElement *)0x0;
        if (local_98 != 0) {
          FVar11.Data = local_a0.Data;
        }
        cVar5 = (**(code **)(*(longlong *)FVar11.Data + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        if (cVar5 != '\0') {
          uVar9 = 0;
          if ((int)uVar13 < (this->Pausers).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          TArray<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(this_00,uVar13);
          bVar8 = true;
        }
      }
      else {
        uVar9 = 0;
        if ((int)uVar13 < (this->Pausers).ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        TArray<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(this_00,uVar13);
        bVar8 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                 (FWriteAccessScope *)&local_90);
      if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a8);
      lVar14 = lVar14 + -0x18;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  if ((this->Pausers).ArrayNum == 0) {
    pAVar10 = AActor::GetWorldSettings((AActor *)this);
    (**(code **)(pAVar10->_padding_ + 0x7c8))(pAVar10,0);
  }
  return bVar8;
}

// DispatchPostLogin @ 147c47610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::DispatchPostLogin(AGameModeBase *this,AController *param_1)

{
  return;
}

// FailedToRestartPlayer @ 147c4fe40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::FailedToRestartPlayer(AGameModeBase *this,AController *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c4fe46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x848))(param_1);
  return;
}

// FindPlayerStart @ 147c508d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall
AGameModeBase::FindPlayerStart(AGameModeBase *this,AController *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  AActor *pAVar3;
  AController *local_28;
  FString local_20;
  AActor *local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_FindPlayerStart);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    local_10 = (AActor *)0x0;
    local_28 = param_1;
    if (&local_20 != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_20.Data.ArrayMax = 0;
      local_20.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
        memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
    pAVar3 = local_10;
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  else {
    pAVar3 = (AActor *)(**(code **)(this->_padding_ + 0x788))(this,param_1,param_2);
  }
  return pAVar3;
}

// FindPlayerStart_Implementation @ 147c509e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall
AGameModeBase::FindPlayerStart_Implementation
          (AGameModeBase *this,AController *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UWorld *this_00;
  UClass *pUVar4;
  AActor *pAVar5;
  AWorldSettings *pAVar6;
  UFunction *this_01;
  UClass *local_res18;
  FName local_res20;
  AController *local_88;
  AWorldSettings *local_80;
  TActorIteratorBase<TActorIterator<APlayerStart>_> local_78;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if ((param_2->Data).ArrayNum < 2) {
LAB_147c50b93:
    cVar3 = (**(code **)(this->_padding_ + 0x930))(this,param_1);
    if (cVar3 != '\0') {
      pAVar5 = (AActor *)FWeakObjectPtr::Get(&(param_1->StartSpot).WeakPtr);
      if (pAVar5 != (AActor *)0x0) {
        return pAVar5;
      }
      if (1 < (byte)LogGameMode._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      }
    }
    this_01 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_ChoosePlayerStart);
    pUVar4 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
      local_80 = (AWorldSettings *)0x0;
      local_88 = param_1;
      (**(code **)(this->_padding_ + 0x260))(this,this_01,&local_88);
      pAVar6 = local_80;
    }
    else {
      pAVar6 = (AWorldSettings *)(**(code **)(this->_padding_ + 0x790))(this);
    }
    if (pAVar6 == (AWorldSettings *)0x0) {
      if (4 < (byte)LogGameMode._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      }
      pAVar6 = UWorld::GetWorldSettings(this_00,false,true);
    }
  }
  else {
    ::FName::FName(&local_res20,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    pUVar4 = Z_Construct_UClass_APlayerStart_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
    }
    local_78.Flags = OnlyActiveLevels|SkipPendingKill;
    local_78.State.bIsSet = false;
    local_res18 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FActorIteratorState::FActorIteratorState
              (&local_78.State.TypedValue,this_00,(TSubclassOf<AActor>)&local_res18);
    local_78.State.bIsSet = true;
    do {
      TActorIteratorBase<TActorIterator<APlayerStart>_>::operator++(&local_78);
      if ((local_78.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pAVar5 = (AActor *)(*pcVar1)();
        return pAVar5;
      }
      if (local_78.State.TypedValue.ReachedEnd != false) {
        if (local_78.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_78.State.TypedValue.CurrentWorld,
                     local_78.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        goto LAB_147c50b93;
      }
      if ((local_78.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pAVar5 = (AActor *)(*pcVar1)();
        return pAVar5;
      }
      pAVar5 = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
      pAVar6 = (AWorldSettings *)CastChecked<APlayerStart,AActor>(pAVar5);
    } while ((pAVar6 == (AWorldSettings *)0x0) ||
            (*(FName *)&(pAVar6->AISystemClass).SoftObjectPtr.field_0x18 != local_res20));
    if (local_78.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_78.State.TypedValue.CurrentWorld,
                 local_78.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return (AActor *)pAVar6;
}

// FinishRestartPlayer @ 147c50d80

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
AGameModeBase::FinishRestartPlayer
          (AGameModeBase *this,AController *param_1,TRotator<double> *param_2)

{
  APawn *pAVar1;
  code *pcVar2;
  TRotator<double> *pTVar3;
  UFunction *pUVar4;
  AController *local_res10;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  TRotator<double> local_48;
  TRotator<double> local_28;
  
  pAVar1 = (param_1->Pawn).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar1 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  AController::Possess(param_1,pAVar1);
  pAVar1 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (pAVar1 != (APawn *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    if (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0) {
      pAVar1 = (param_1->Pawn).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      pTVar3 = AActor::GetActorRotation((AActor *)pAVar1,&local_28);
      local_48.Pitch = pTVar3->Pitch;
      local_48.Yaw = pTVar3->Yaw;
      local_48.Roll = pTVar3->Roll;
      AController::ClientSetRotation(param_1,&local_48,true);
      local_68 = param_2->Pitch;
      dStack_60 = param_2->Yaw;
      local_58 = 0;
      (**(code **)(param_1->_padding_ + 0x7b0))(param_1,&local_68);
      pAVar1 = (param_1->Pawn).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(this->_padding_ + 0x8e0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      (*pcVar2)(this,pAVar1);
      local_res10 = param_1;
      pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_OnRestartPlayer);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_res10);
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x940))(this,param_1);
  return;
}

// ForceClearUnpauseDelegates @ 147c519d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameModeBase::ForceClearUnpauseDelegates(AGameModeBase *this,AActor *param_1)

{
  int *piVar1;
  TArray<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  APlayerState *pAVar3;
  code *pcVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  AActor *pAVar10;
  UClass *pUVar11;
  AWorldSettings *pAVar12;
  UWorld *this_00;
  UObject *pUVar13;
  FScriptContainerElement *this_01;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_02;
  longlong lVar14;
  int iVar15;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_58;
  FReadAccessScope local_48;
  
  if (param_1 != (AActor *)0x0) {
    bVar7 = false;
    iVar15 = (this->Pausers).ArrayNum + -1;
    if (-1 < iVar15) {
      pTVar2 = &this->Pausers;
      lVar14 = (longlong)iVar15 * 0x18;
      do {
        if (((this->Pausers).ArrayNum <= iVar15) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = (pTVar2->AllocatorInstance).Data + lVar14;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_48);
        if ((*(int *)(this_01 + 0x10) == 0) || (*(longlong **)(this_01 + 8) == (longlong *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_48);
        }
        else {
          pAVar10 = (AActor *)(**(code **)(**(longlong **)(this_01 + 8) + 0x10))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_48);
          if (pAVar10 == param_1) {
            if (((this->Pausers).ArrayNum <= iVar15) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_02 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                      ((pTVar2->AllocatorInstance).Data + lVar14);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (this_02);
            iVar8 = ((this->Pausers).ArrayNum - iVar15) + -1;
            if (iVar8 != 0) {
              memmove(this_02,this_02 + 1,(longlong)iVar8 * 0x18);
            }
            piVar1 = &(this->Pausers).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&pTVar2->AllocatorInstance,(this->Pausers).ArrayNum,
                       &(this->Pausers).ArrayMax);
            bVar7 = true;
          }
        }
        lVar14 = lVar14 + -0x18;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
      if (bVar7) {
        (**(code **)(this->_padding_ + 0x808))(this);
      }
    }
    pUVar11 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar15 = (int)pUVar11->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar11->_padding_)) {
      AActor::GetWorldSettings((AActor *)this);
    }
    else {
      pAVar12 = AActor::GetWorldSettings((AActor *)this);
      if ((((APlayerState *)param_1[1]._padding_ != (APlayerState *)0x0) &&
          (pAVar12 != (AWorldSettings *)0x0)) &&
         ((APlayerState *)param_1[1]._padding_ == (pAVar12->PauserPlayerState).field0_0x0.DebugPtr))
      {
        this_00 = AActor::GetWorld((AActor *)this);
        UWorld::GetPlayerControllerIterator(this_00,&local_58);
        while( true ) {
          iVar15 = local_58.Index;
          pTVar5 = local_58.Container;
          if ((local_58.Index < 0) || ((local_58.Container)->ArrayNum <= local_58.Index))
          goto LAB_147c51cb6;
          uVar9 = 0;
          if (local_58.Index < (local_58.Container)->ArrayNum) {
            uVar9 = (uint)~local_58.Index >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar5->AllocatorInstance).Data + (longlong)iVar15 * 8));
          if (((((pUVar13 != (UObject *)0x0) && (*(longlong *)&pUVar13[0x11].field_0x20 != 0)) &&
               (*(longlong *)&pUVar13[0x11].field_0x20 != param_1[1]._padding_)) &&
              (((pUVar13[2].field_0xd & 2) == 0 && ((*(uint *)&pUVar13->field_0x8 >> 0x1e & 1) == 0)
               ))) && (((*(byte *)(*(longlong *)&pUVar13[0x11].field_0x20 + 0x5d) & 2) == 0 &&
                       ((*(uint *)(*(longlong *)&pUVar13[0x11].field_0x20 + 8) >> 0x1e & 1) == 0))))
          break;
          local_58.Index = local_58.Index + 1;
        }
        (**(code **)(pAVar12->_padding_ + 0x7c8))(pAVar12,*(undefined8 *)&pUVar13[0x11].field_0x20);
LAB_147c51cb6:
        pAVar3 = (pAVar12->PauserPlayerState).field0_0x0.DebugPtr;
        if ((APlayerState *)param_1[1]._padding_ == (APlayerState *)0x0) {
          bVar7 = pAVar3 == (APlayerState *)0x0;
        }
        else {
          bVar7 = (APlayerState *)param_1[1]._padding_ == pAVar3;
        }
        if (bVar7) {
          (**(code **)(pAVar12->_padding_ + 0x7c8))(pAVar12,0);
        }
      }
    }
  }
  return;
}

// GameWelcomePlayer @ 147c51d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AGameModeBase::GameWelcomePlayer(AGameModeBase *this,UNetConnection *param_1,FString *param_2)

{
  return;
}

// GenericPlayerInitialization @ 147c52ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::GenericPlayerInitialization(AGameModeBase *this,AController *param_1)

{
  int iVar1;
  AGameSession *pAVar2;
  code *pcVar3;
  char cVar4;
  UClass *pUVar5;
  UFunction *this_00;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [8];
  AController *local_20;
  
  if (param_1 != (AController *)0x0) {
    pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      this_00 = UObject::FindFunctionChecked
                          ((UObject *)this,NAME_AGameModeBase_InitializeHUDForPlayer);
      pUVar5 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar5->ClassFlags >> 7 & 1) == 0) {
        local_20 = param_1;
        (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_20);
      }
      else {
        (**(code **)(this->_padding_ + 0x760))(this,param_1);
      }
      (**(code **)(this->_padding_ + 0x910))(this,param_1);
      pAVar2 = (this->GameSession).field0_0x0.DebugPtr;
      if (pAVar2 != (AGameSession *)0x0) {
        pcVar3 = *(code **)(param_1->_padding_ + 0xcb0);
        cVar4 = (**(code **)(pAVar2->_padding_ + 0x818))();
        (*pcVar3)(param_1,cVar4 == '\0');
      }
      (**(code **)(this->_padding_ + 0x928))(this,param_1);
      local_28[0] = 0;
      local_res20[0] = 0;
      local_res18[0] = 0;
      local_res10[0] = 0;
      cVar4 = (**(code **)(this->_padding_ + 0x908))
                        (this,param_1,local_28,local_res20,local_res18,local_res10);
      if (cVar4 != '\0') {
        (**(code **)(param_1->_padding_ + 0xc18))
                  (param_1,1,local_28[0],local_res20[0],local_res18[0],local_res10[0]);
      }
    }
  }
  return;
}

// GetDefaultPawnClassForController @ 147c560b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
AGameModeBase::GetDefaultPawnClassForController(AGameModeBase *this,AController *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  AController *local_18;
  UClass *local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_AGameModeBase_GetDefaultPawnClassForController);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = (UClass *)0x0;
    local_18 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return local_10;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c5612f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x7b8))(this,param_1);
  return pUVar1;
}

// GetDefaultPawnClassForController_Implementation @ 147c56140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
AGameModeBase::GetDefaultPawnClassForController_Implementation
          (AGameModeBase *this,AController *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->DefaultPawnClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->DefaultPawnClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// GetGameSessionClass @ 147c56eb0

TSubclassOf<AGameSession> __thiscall AGameModeBase::GetGameSessionClass(AGameModeBase *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UClass> in_RDX;
  
  pUVar4 = (this->GameSessionClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) && (pUVar3 = AGameSession::StaticClass(), pUVar3 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (pUVar4 = (this->GameSessionClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      *(UClass **)in_RDX.field0_0x0 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return (TSubclassOf<AGameSession>)in_RDX.field0_0x0.DebugPtr;
      }
      goto LAB_147c56f32;
    }
  }
  pUVar4 = AGameSession::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<AGameSession>)in_RDX.field0_0x0.DebugPtr;
  }
  if (pUVar4 == (UClass *)0x0) {
    return (TSubclassOf<AGameSession>)in_RDX.field0_0x0.DebugPtr;
  }
LAB_147c56f32:
  UE::GC::MarkAsReachable((UObject *)pUVar4);
  return (TSubclassOf<AGameSession>)in_RDX.field0_0x0;
}

// GetNumPlayers @ 147c57c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall AGameModeBase::GetNumPlayers(AGameModeBase *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UWorld *this_00;
  APlayerController *pAVar7;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  iVar6 = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_18);
  while( true ) {
    iVar3 = local_18.Index;
    pTVar2 = local_18.Container;
    if (local_18.Index < 0) {
      return iVar6;
    }
    if ((local_18.Container)->ArrayNum <= local_18.Index) break;
    uVar5 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar5 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    pAVar7 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (((pAVar7 != (APlayerController *)0x0) && (pAVar7->_padding_ != 0)) &&
       (bVar4 = MustSpectate(this,pAVar7), !bVar4)) {
      iVar6 = iVar6 + 1;
    }
    local_18.Index = local_18.Index + 1;
  }
  return iVar6;
}

// GetNumSpectators @ 147c57cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall AGameModeBase::GetNumSpectators(AGameModeBase *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UWorld *this_00;
  APlayerController *pAVar7;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  iVar6 = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_18);
  while( true ) {
    iVar3 = local_18.Index;
    pTVar2 = local_18.Container;
    if (local_18.Index < 0) {
      return iVar6;
    }
    if ((local_18.Container)->ArrayNum <= local_18.Index) break;
    uVar5 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar5 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    pAVar7 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (((pAVar7 != (APlayerController *)0x0) && (pAVar7->_padding_ != 0)) &&
       (bVar4 = MustSpectate(this,pAVar7), bVar4)) {
      iVar6 = iVar6 + 1;
    }
    local_18.Index = local_18.Index + 1;
  }
  return iVar6;
}

// GetPlayerControllerClassToSpawnForSeamlessTravel @ 147c59080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSubclassOf<APlayerController> __thiscall
AGameModeBase::GetPlayerControllerClassToSpawnForSeamlessTravel
          (AGameModeBase *this,APlayerController *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  longlong in_R8;
  
  pUVar5 = (this->PlayerControllerClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 == (UClass *)0x0) ||
     (pUVar3 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar3 == (UClass *)0x0)) {
LAB_147c590e0:
    pUVar5 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_147c590e0;
    pUVar5 = (this->PlayerControllerClass).Class.field0_0x0.DebugPtr;
  }
  if (((in_R8 != 0) &&
      (pUVar3 = (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr,
      pUVar3 != (UClass *)0x0)) &&
     (pUVar4 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) &&
        (pUVar3 = (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr,
        pUVar3 != (UClass *)0x0)) &&
       ((*(longlong *)(in_R8 + 0x2c8) != 0 &&
        ((*(byte *)(*(longlong *)(in_R8 + 0x2c8) + 0x2ca) & 4) != 0)))) {
      pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar3->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar5 = (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr;
          goto LAB_147c5918d;
        }
      }
      pUVar5 = (UClass *)0x0;
    }
  }
LAB_147c5918d:
  param_1->_padding_ = (longlong)pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return (TSubclassOf<APlayerController>)(TObjectPtr<UClass>)param_1;
}

// GetPrivateStaticClass @ 147c59dd0

UClass * __cdecl AGameModeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameModeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameModeBase",
               &Z_Registration_Info_UClass_AGameModeBase.InnerSingleton,
               StaticRegisterNativesAGameModeBase,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AGameModeBase>,InternalVTableHelperCtorCaller<AGameModeBase>,
               local_res8,AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameModeBase.InnerSingleton;
}

// GetSeamlessTravelActorList @ 147c5a8c0

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
AGameModeBase::GetSeamlessTravelActorList
          (AGameModeBase *this,bool param_1,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  AGameStateBase *pAVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<AGameStateBase>_u_0 *pTVar5;
  TObjectPtr<AGameSession>_u_0 *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TArray<TObjectPtr<APlayerState>,TSizedDefaultAllocator<32>_> *pTVar12;
  AGameModeBase *local_38;
  TObjectPtr<AGameStateBase>_u_0 local_30;
  TObjectPtr<AGameSession>_u_0 local_28 [2];
  
  uVar11 = (((this->GameState).field0_0x0.DebugPtr)->PlayerArray).ArrayNum + (-(uint)param_1 & 3);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_2->ArrayNum;
  piVar2 = &param_2->ArrayMax;
  if (*piVar2 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_2->AllocatorInstance,*piVar1,piVar2);
  }
  pAVar3 = (this->GameState).field0_0x0.DebugPtr;
  pTVar12 = &pAVar3->PlayerArray;
  if (param_2 == (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)pTVar12) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar10 = (pAVar3->PlayerArray).ArrayNum;
  if (iVar10 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,&param_2->AllocatorInstance,piVar1,piVar2);
    ConstructItems<AActor_*,TObjectPtr<APlayerState>,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8,
               (TObjectPtr<APlayerState> *)(pTVar12->AllocatorInstance).Data,iVar10);
  }
  if (param_1) {
    pFVar4 = (param_2->AllocatorInstance).Data;
    local_38 = this;
    if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar2 * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = *piVar1;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar10 + 1;
    *(AGameModeBase **)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_38;
    local_30 = (this->GameState).field0_0x0;
    pTVar5 = (TObjectPtr<AGameStateBase>_u_0 *)(param_2->AllocatorInstance).Data;
    if ((pTVar5 <= &local_30) && (&local_30 < pTVar5 + *piVar2)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = *piVar1;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar10 + 1;
    *(TObjectPtr<AGameStateBase>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
         local_30;
    local_28[0] = (this->GameSession).field0_0x0;
    pTVar6 = (TObjectPtr<AGameSession>_u_0 *)(param_2->AllocatorInstance).Data;
    if ((pTVar6 <= local_28) && (local_28 < pTVar6 + *piVar2)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = *piVar1;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar10 + 1;
    *(TObjectPtr<AGameSession>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
         local_28[0];
  }
  return;
}

// HandleSeamlessTravelPlayer @ 147c61ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::HandleSeamlessTravelPlayer(AGameModeBase *this,AController **param_1)

{
  int iVar1;
  APlayerController *this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FName *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  APlayerController *pAVar10;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_58;
  void *local_40 [3];
  
  this_00 = (APlayerController *)*param_1;
  if (this_00 != (APlayerController *)0x0) {
    pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pAVar10 = this_00;
      if ((this_00->Player).field0_0x0.DebugPtr == (UPlayer *)0x0) goto LAB_147c61f33;
      pFVar7 = (FName *)(**(code **)(this->_padding_ + 0x850))(this,local_res18,this_00);
      FVar2 = *pFVar7;
      if ((FVar2 == (FName)0x0) ||
         (pUVar6 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_147c61d97:
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)((longlong)FVar2 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_147c61d97;
        local_res10 = *pFVar7;
      }
      pcVar3 = *(code **)(this->_padding_ + 0x958);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      uVar8 = (**(code **)(this_00->_padding_ + 0x7a8))(this_00,local_40);
      uVar9 = (**(code **)(this_00->_padding_ + 0xf20))(this_00,&local_58);
      if (((this_00->_padding_ & 2) == 0) ||
         (cVar5 = (**(code **)(this_00->_padding_ + 0x7f0))(), cVar5 == '\0')) {
        cVar5 = '\x01';
      }
      else {
        cVar5 = '\0';
      }
      pAVar10 = (APlayerController *)(*pcVar3)(this,cVar5 + '\x01',uVar9,uVar8,&local_res10);
      if (pAVar10 == (APlayerController *)0x0) {
        if (2 < (byte)LogGameMode._0_1_) {
          local_res10 = *(FName *)(this_00->_padding_ + 0x18);
          ::FName::ToString(&local_res10,&local_58);
          (**(code **)(this_00->_padding_ + 0x6f0))(this_00,local_40);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
          if (local_40[0] != (void *)0x0) {
            FMemory::Free(local_40[0]);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        AActor::Destroy((AActor *)this_00,false,true);
        return;
      }
      (**(code **)(this_00->_padding_ + 0xc98))(this_00,pAVar10);
      (**(code **)(pAVar10->_padding_ + 0xca0))(pAVar10,this_00);
      (**(code **)(this->_padding_ + 0x848))(this,this_00,pAVar10);
      *param_1 = (AController *)pAVar10;
      goto LAB_147c61f33;
    }
  }
  pAVar10 = (APlayerController *)0x0;
LAB_147c61f33:
  (**(code **)(this->_padding_ + 0x950))(this,*param_1);
  (**(code **)(this->_padding_ + 0x920))(this,*param_1);
  if (pAVar10 != (APlayerController *)0x0) {
    HandleStartingNewPlayer(this,pAVar10);
  }
  return;
}

// HandleStartingNewPlayer @ 147c63450

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
AGameModeBase::HandleStartingNewPlayer(AGameModeBase *this,APlayerController *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  APlayerController *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_HandleStartingNewPlayer)
  ;
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c634c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7a8))(this,param_1);
  return;
}

// HandleStartingNewPlayer_Implementation @ 147c634d0

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
AGameModeBase::HandleStartingNewPlayer_Implementation
          (AGameModeBase *this,APlayerController *param_1)

{
  bool bVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char cVar3;
  APlayerController *local_18;
  char local_10;
  
  if (this->bStartPlayersAsSpectators == 0) {
    bVar1 = MustSpectate(this,param_1);
    if (!bVar1) {
      this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_PlayerCanRestart);
      pUVar2 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
        local_10 = '\0';
        local_18 = param_1;
        (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
        cVar3 = local_10 != '\0';
      }
      else {
        cVar3 = (**(code **)(this->_padding_ + 0x780))(this,param_1);
      }
      if (cVar3 != '\0') {
        (**(code **)(this->_padding_ + 0x8c8))(this,param_1);
      }
    }
  }
  return;
}

// HasMatchEnded @ 147c640c0

bool __thiscall AGameModeBase::HasMatchEnded(AGameModeBase *this)

{
  AGameStateBase *pAVar1;
  char cVar2;
  
  pAVar1 = (this->GameState).field0_0x0.DebugPtr;
  if (pAVar1 != (AGameStateBase *)0x0) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x780))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// HasMatchStarted @ 147c64140

bool __thiscall AGameModeBase::HasMatchStarted(AGameModeBase *this)

{
  AGameStateBase *pAVar1;
  char cVar2;
  
  pAVar1 = (this->GameState).field0_0x0.DebugPtr;
  if (pAVar1 != (AGameStateBase *)0x0) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x778))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// InitGame @ 147c64f90

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
AGameModeBase::InitGame(AGameModeBase *this,FString *param_1,FString *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ENetMode EVar5;
  UWorld *this_00;
  longlong *plVar6;
  UClass *pUVar7;
  AGameSession *pAVar8;
  FString *pFVar9;
  UOnlineEngineInterface *pUVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined1 auStackY_118 [32];
  FDestructionSentinel local_e8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = AActor::GetWorld((AActor *)this);
  ::FString::operator=(&this->OptionsString,param_2);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
  local_a8._24_8_ = AActor::GetInstigator((AActor *)this);
  local_a8._52_4_ = local_a8._52_4_ | RF_Transient;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 2000))(this);
  lVar14 = *plVar6;
  if ((lVar14 != 0) && (pUVar7 = AGameSession::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar11 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar14 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar7->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar7 = (UClass *)*plVar6;
      goto LAB_147c65045;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_147c65045:
  pAVar8 = (AGameSession *)
           UWorld::SpawnActor(this_00,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                              (FActorSpawnParameters *)local_a8);
  if (pAVar8 == (AGameSession *)0x0) {
    pAVar8 = (AGameSession *)0x0;
  }
  else {
    pUVar7 = AGameSession::StaticClass();
    iVar11 = (int)pUVar7->_padding_;
    if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar11 * 8)
        != &pUVar7->_padding_)) {
      pFVar9 = GetTypeName<AGameSession>(&local_c8);
      pwVar13 = L"";
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar9 = GetFullNameForCastLogError<AActor>(&local_b8,(AActor *)pAVar8);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar13,pwVar12);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (AGameSession *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  (this->GameSession).field0_0x0.DebugPtr = pAVar8;
  (**(code **)(pAVar8->_padding_ + 0x760))(pAVar8,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FGameModeEvents::GameModeInitializedEvent,(FWriteAccessScope *)&local_e8);
  bVar2 = false;
  FGameModeEvents::GameModeInitializedEvent._28_4_ =
       FGameModeEvents::GameModeInitializedEvent._28_4_ + 1;
  iVar11 = FGameModeEvents::GameModeInitializedEvent._16_4_ + -1;
  if (-1 < iVar11) {
    lVar14 = (longlong)iVar11 << 4;
    bVar2 = false;
    do {
      if (((int)FGameModeEvents::GameModeInitializedEvent._16_4_ <= iVar11) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar14 + 8 + FGameModeEvents::GameModeInitializedEvent._8_8_) == 0) ||
          (*(longlong **)(lVar14 + FGameModeEvents::GameModeInitializedEvent._8_8_) ==
           (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)
                                 (lVar14 + FGameModeEvents::GameModeInitializedEvent._8_8_) + 0x68))
                            (), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar14 = lVar14 + -0x10;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  FGameModeEvents::GameModeInitializedEvent._28_4_ =
       FGameModeEvents::GameModeInitializedEvent._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FGameModeEvents::GameModeInitializedEvent,false);
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  EVar5 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar5 != NM_Standalone) {
    pUVar10 = UOnlineEngineInterface::Get();
    cVar4 = (**(code **)(*(longlong *)pUVar10 + 0x338))
                      (pUVar10,this_00,((this->GameSession).field0_0x0.DebugPtr)->SessionName);
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)(((this->GameSession).field0_0x0.DebugPtr)->_padding_ + 0x768))(),
       cVar4 == '\0')) {
      (**(code **)(((this->GameSession).field0_0x0.DebugPtr)->_padding_ + 0x7f8))();
    }
  }
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// InitGameState @ 147c652a0

void __thiscall AGameModeBase::InitGameState(AGameModeBase *this)

{
  UClass *pUVar1;
  AGameStateBase *pAVar2;
  
  pUVar1 = (UClass *)this->_padding_;
  pAVar2 = (this->GameState).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pAVar2->GameModeClass).Class.field0_0x0.DebugPtr = pUVar1;
  (**(code **)(((this->GameState).field0_0x0.DebugPtr)->_padding_ + 0x798))();
  pAVar2 = (this->GameState).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->SpectatorClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pAVar2->SpectatorClass).Class.field0_0x0 = (this->SpectatorClass).Class.field0_0x0;
                    /* WARNING: Could not recover jumptable at 0x000147c65332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->GameState).field0_0x0.DebugPtr)->_padding_ + 0x7a0))();
  return;
}

// InitNewPlayer @ 147c65340

/* WARNING: Removing unreachable block (ram,0x000147c6545c) */
/* WARNING: Removing unreachable block (ram,0x000147c65636) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
AGameModeBase::InitNewPlayer
          (AGameModeBase *this,FString *__return_storage_ptr__,APlayerController *param_1,
          FUniqueNetIdRepl *param_2,FString *param_3,FString *param_4)

{
  AGameSession *pAVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  FScriptContainerElement *local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1 == (APlayerController *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewPlayerController",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameModeBase.cpp"
                         ,0x315,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  if (param_1->_padding_ == 0) {
    ::FString::FString(__return_storage_ptr__,L"PlayerState is null");
  }
  else {
    pAVar1 = (this->GameSession).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pAVar1->_padding_ + 0x780);
    ::FString::FString(&local_a8,L"bIsFromInvite");
    pFVar6 = ::FString::FString(&local_58,param_3);
    bVar3 = UGameplayStatics::HasOption(pFVar6,&local_a8);
    (*pcVar2)(pAVar1,param_1,param_2,bVar3);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    cVar4 = (**(code **)(this->_padding_ + 0x900))(this,param_1,param_4);
    if ((cVar4 == '\0') && (2 < (byte)LogGameMode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    }
    ::FString::FString(&local_98,L"SpectatorOnly");
    pFVar6 = ::FString::FString(&local_48,param_3);
    pFVar6 = UGameplayStatics::ParseOption(&local_78,pFVar6,&local_98);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"1");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((iVar5 == 0) || (bVar3 = MustSpectate(this,param_1), bVar3)) {
      (**(code **)(param_1->_padding_ + 0xee8))(param_1);
    }
    ::FString::FString(&local_88,L"Name");
    pFVar6 = ::FString::FString(&local_38,param_3);
    pFVar6 = UGameplayStatics::ParseOption(&local_68,pFVar6,&local_88);
    iVar7 = (pFVar6->Data).ArrayNum;
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    iVar7 = iVar5;
    if (0x14 < iVar5) {
      iVar7 = 0x14;
    }
    iVar9 = 0;
    if (0 < iVar7) {
      iVar9 = iVar7;
    }
    ::FString::RemoveAt(pFVar6,iVar9,iVar5 - iVar9,No);
    local_c8 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0 = (pFVar6->Data).ArrayNum;
    local_bc = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_c0 < 2) {
      FText::ToString(&this->DefaultPlayerName);
      ::FString::PrintfImpl(&local_b8,L"%s%i");
      if (local_c8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8);
      }
      local_c8 = local_b8.Data.AllocatorInstance.Data;
      local_c0 = local_b8.Data.ArrayNum;
      local_bc = local_b8.Data.ArrayMax;
    }
    (**(code **)(this->_padding_ + 0x8c0))(this,param_1,&local_c8,0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    if (local_c8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return __return_storage_ptr__;
}

// InitSeamlessTravelPlayer @ 147c67260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::InitSeamlessTravelPlayer(AGameModeBase *this,AController *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  FName FVar4;
  char cVar5;
  bool bVar6;
  FNameEntryId FVar7;
  UClass *pUVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  APlayerController *this_00;
  uint local_res8 [2];
  void *local_38;
  undefined8 local_30;
  FString local_28;
  
  if (param_1 != (AController *)0x0) {
    pUVar8 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (this_00 = (APlayerController *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar8->_padding_)) goto LAB_147c672af;
  }
  this_00 = (APlayerController *)0x0;
LAB_147c672af:
  local_38 = (void *)0x0;
  local_30 = 0;
  pcVar2 = *(code **)(this->_padding_ + 0x900);
  ::FString::FString(&local_28,L"");
  cVar5 = (*pcVar2)(this,param_1,&local_28,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((cVar5 == '\0') && (2 < (byte)LogGameMode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
  }
  if (this_00 != (APlayerController *)0x0) {
    (**(code **)(this_00->_padding_ + 0xca8))(this_00);
    bVar6 = MustSpectate(this,this_00);
    lVar3 = this_00->_padding_;
    if (bVar6) {
      (**(code **)(lVar3 + 0xee8))(this_00);
    }
    else {
      this_00->bPlayerIsWaiting = 1;
      FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar7.Value);
      local_res8[1] = 0;
      (**(code **)(lVar3 + 0x7a0))(this_00,local_res8[0]);
      FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
      local_res8[1] = 0;
      FVar4.Number = 0;
      FVar4.ComparisonIndex.Value = local_res8[0];
      APlayerController::ClientGotoState(this_00,FVar4);
    }
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// InitStartSpot @ 147c673e0

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
AGameModeBase::InitStartSpot(AGameModeBase *this,AActor *param_1,AController *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  AActor *local_18;
  AController *local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_InitStartSpot);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1;
    local_10 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(this->_padding_ + 0x768))(this,param_1,param_2);
  }
  return;
}

// InitStartSpot_Implementation @ 147c67470

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
AGameModeBase::InitStartSpot_Implementation
          (AGameModeBase *this,AActor *param_1,AController *param_2)

{
  return;
}

// InitializeHUDForPlayer @ 147c67480

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
AGameModeBase::InitializeHUDForPlayer(AGameModeBase *this,APlayerController *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  APlayerController *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_InitializeHUDForPlayer);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c674f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this,param_1);
  return;
}

// InitializeHUDForPlayer_Implementation @ 147c67500

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
AGameModeBase::InitializeHUDForPlayer_Implementation(AGameModeBase *this,APlayerController *param_1)

{
  UClass *local_res8 [4];
  
  local_res8[0] = (this->HUDClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  APlayerController::ClientSetHUD(param_1,(TSubclassOf<AHUD>)local_res8);
  return;
}

// IsHandlingReplays @ 147c69220

bool __thiscall AGameModeBase::IsHandlingReplays(AGameModeBase *this)

{
  return false;
}

// IsPaused @ 147c692e0

bool __thiscall AGameModeBase::IsPaused(AGameModeBase *this)

{
  return 0 < (this->Pausers).ArrayNum;
}

// K2_FindPlayerStart @ 147c6b1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall
AGameModeBase::K2_FindPlayerStart(AGameModeBase *this,AController *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  AActor *pAVar3;
  AController *pAStack_28;
  FString FStack_20;
  AActor *pAStack_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_FindPlayerStart);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    FStack_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_20.Data.ArrayNum = 0;
    FStack_20.Data.ArrayMax = 0;
    pAStack_10 = (AActor *)0x0;
    pAStack_28 = param_1;
    if (&FStack_20 != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      FStack_20.Data.ArrayMax = 0;
      FStack_20.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&FStack_20,uVar1,&FStack_20.Data.ArrayMax);
        memcpy(FStack_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&pAStack_28);
    pAVar3 = pAStack_10;
    if (FStack_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data.AllocatorInstance.Data);
    }
  }
  else {
    pAVar3 = (AActor *)(**(code **)(this->_padding_ + 0x788))(this,param_1,param_2);
  }
  return pAVar3;
}

// K2_OnChangeName @ 147c6b1e0

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
AGameModeBase::K2_OnChangeName
          (AGameModeBase *this,AController *param_1,FString *param_2,bool param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  AController *local_28;
  FString local_20;
  undefined1 local_10;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_28 = param_1;
  if (&local_20 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_20.Data.ArrayMax = 0;
    local_20.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
      memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_10 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_OnChangeName);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// K2_OnLogout @ 147c6b2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::K2_OnLogout(AGameModeBase *this,AController *param_1)

{
  UFunction *pUVar1;
  AController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_OnLogout);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// K2_OnRestartPlayer @ 147c6b300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::K2_OnRestartPlayer(AGameModeBase *this,AController *param_1)

{
  UFunction *pUVar1;
  AController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_OnRestartPlayer);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// K2_OnSwapPlayerControllers @ 147c6b340

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
AGameModeBase::K2_OnSwapPlayerControllers
          (AGameModeBase *this,APlayerController *param_1,APlayerController *param_2)

{
  UFunction *pUVar1;
  APlayerController *local_18;
  APlayerController *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AGameModeBase_K2_OnSwapPlayerControllers);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// K2_PostLogin @ 147c6b390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameModeBase::K2_PostLogin(AGameModeBase *this,APlayerController *param_1)

{
  UFunction *pUVar1;
  APlayerController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_PostLogin);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Login @ 147c6df10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
AGameModeBase::Login
          (AGameModeBase *this,UPlayer *param_1,ENetRole param_2,FString *param_3,FString *param_4,
          FUniqueNetIdRepl *param_5,FString *param_6)

{
  int iVar1;
  AGameSession *pAVar2;
  FScriptContainerElement *pFVar3;
  UClass *pUVar4;
  bool bVar5;
  FString *pFVar6;
  APlayerController *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  pUVar8 = (UClass *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pAVar2 = (this->GameSession).field0_0x0.DebugPtr;
  if (pAVar2 == (AGameSession *)0x0) {
    ::FString::operator=(param_6,L"Failed to spawn player controller, GameSession is null");
  }
  else {
    pFVar6 = (FString *)(**(code **)(pAVar2->_padding_ + 0x778))(pAVar2,&local_38,param_4);
    if (param_6 != pFVar6) {
      pFVar3 = (param_6->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_6->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_6->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (param_6->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((param_6->Data).ArrayNum < 2) {
      this_00 = (APlayerController *)(**(code **)(this->_padding_ + 0x8b0))(this,param_2,param_4);
      if (this_00 == (APlayerController *)0x0) {
        if (4 < (byte)LogGameMode._0_1_) {
          pUVar4 = (this->PlayerControllerClass).Class.field0_0x0.DebugPtr;
          if ((pUVar4 != (UClass *)0x0) &&
             (pUVar7 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar7 != (UClass *)0x0))
          {
            iVar1 = (int)pUVar7->_padding_;
            if (((int)pUVar4->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) &&
               (pUVar4 = (this->PlayerControllerClass).Class.field0_0x0.DebugPtr,
               pUVar4 != (UClass *)0x0)) {
              pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
              if (pUVar7 != (UClass *)0x0) {
                iVar1 = (int)pUVar7->_padding_;
                if (((int)pUVar4->_padding_ < iVar1) ||
                   ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
                    &pUVar7->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  pUVar8 = (this->PlayerControllerClass).Class.field0_0x0.DebugPtr;
                }
              }
              local_res8 = (FName)pUVar8->_padding_;
              ::FName::ToString(&local_res8,&local_38);
              pUVar8 = (UClass *)0x1;
            }
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
          if ((pUVar8 != (UClass *)0x0) &&
             (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        ::FString::PrintfImpl(&local_48,L"Failed to spawn player controller");
        if (param_6 != &local_48) {
          pFVar3 = (param_6->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_6->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          (param_6->Data).ArrayNum = local_48.Data.ArrayNum;
          (param_6->Data).ArrayMax = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar6 = (FString *)
                 (**(code **)(this->_padding_ + 0x918))
                           (this,&local_38,this_00,param_5,param_4,param_3);
        ::FString::operator=(param_6,pFVar6);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((param_6->Data).ArrayNum < 2) {
          return this_00;
        }
        AActor::Destroy((AActor *)this_00,false,true);
      }
    }
  }
  return (APlayerController *)0x0;
}

// Logout @ 147c6e1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::Logout(AGameModeBase *this,AController *param_1)

{
  longlong *plVar1;
  AGameSession *pAVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UFunction *pUVar8;
  int iVar9;
  longlong lVar10;
  AController *pAVar11;
  AController *local_res10;
  FDestructionSentinel local_48;
  
  if (param_1 != (AController *)0x0) {
    pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar9 = (int)pUVar7->_padding_;
    if ((iVar9 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pAVar11 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar9 * 8)
       == &pUVar7->_padding_)) goto LAB_147c6e211;
  }
  pAVar11 = (AController *)0x0;
LAB_147c6e211:
  if (pAVar11 != (AController *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FGameModeEvents::GameModeLogoutEvent,(FWriteAccessScope *)&local_48);
    bVar4 = false;
    FGameModeEvents::GameModeLogoutEvent._28_4_ = FGameModeEvents::GameModeLogoutEvent._28_4_ + 1;
    iVar9 = FGameModeEvents::GameModeLogoutEvent._16_4_ + -1;
    if (-1 < iVar9) {
      lVar10 = (longlong)iVar9 << 4;
      bVar4 = false;
      do {
        if (((int)FGameModeEvents::GameModeLogoutEvent._16_4_ <= iVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(lVar10 + 8 + FGameModeEvents::GameModeLogoutEvent._8_8_) == 0) ||
            (plVar1 = *(longlong **)(lVar10 + FGameModeEvents::GameModeLogoutEvent._8_8_),
            plVar1 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,this,param_1), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar10 = lVar10 + -0x10;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    FGameModeEvents::GameModeLogoutEvent._28_4_ = FGameModeEvents::GameModeLogoutEvent._28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FGameModeEvents::GameModeLogoutEvent,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    local_res10 = param_1;
    pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_OnLogout);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_res10);
    pAVar2 = (this->GameSession).field0_0x0.DebugPtr;
    if (pAVar2 != (AGameSession *)0x0) {
      (**(code **)(pAVar2->_padding_ + 0x7a0))(pAVar2,pAVar11);
    }
  }
  return;
}

// MustSpectate @ 147c6fe10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AGameModeBase::MustSpectate(AGameModeBase *this,APlayerController *param_1)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  APlayerController *local_18;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_MustSpectate);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = '\0';
    local_18 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return local_10 != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000147c6fe8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x7a0))(this,param_1);
  return (bool)uVar1;
}

// MustSpectate_Implementation @ 147c6fea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameModeBase::MustSpectate_Implementation(AGameModeBase *this,APlayerController *param_1)

{
  if ((param_1 != (APlayerController *)0x0) && (param_1->_padding_ != 0)) {
    return (bool)(*(byte *)(param_1->_padding_ + 0x2ca) >> 2 & 1);
  }
  return false;
}

// OnPostLogin @ 147c70280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::OnPostLogin(AGameModeBase *this,AController *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UFunction *pUVar7;
  int iVar8;
  longlong lVar9;
  AController *local_res10;
  FDestructionSentinel local_38;
  
  if (param_1 != (AController *)0x0) {
    pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar8 = (int)pUVar6->_padding_;
    if ((iVar8 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar6->_padding_)) {
      local_res10 = param_1;
      pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_K2_PostLogin);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,&local_res10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FGameModeEvents::GameModePostLoginEvent,(FWriteAccessScope *)&local_38);
      bVar3 = false;
      FGameModeEvents::GameModePostLoginEvent._28_4_ =
           FGameModeEvents::GameModePostLoginEvent._28_4_ + 1;
      iVar8 = FGameModeEvents::GameModePostLoginEvent._16_4_ + -1;
      if (-1 < iVar8) {
        lVar9 = (longlong)iVar8 << 4;
        bVar3 = false;
        do {
          if (((int)FGameModeEvents::GameModePostLoginEvent._16_4_ <= iVar8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((*(int *)(lVar9 + 8 + FGameModeEvents::GameModePostLoginEvent._8_8_) == 0) ||
              (plVar1 = *(longlong **)(lVar9 + FGameModeEvents::GameModePostLoginEvent._8_8_),
              plVar1 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this,param_1), cVar5 == '\0')) {
            bVar3 = true;
          }
          lVar9 = lVar9 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      FGameModeEvents::GameModePostLoginEvent._28_4_ =
           FGameModeEvents::GameModePostLoginEvent._28_4_ + -1;
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FGameModeEvents::GameModePostLoginEvent,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// PlayerCanRestart @ 147c71bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AGameModeBase::PlayerCanRestart(AGameModeBase *this,APlayerController *param_1)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  APlayerController *local_18;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_PlayerCanRestart);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = '\0';
    local_18 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return local_10 != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000147c71c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x780))(this,param_1);
  return (bool)uVar1;
}

// PlayerCanRestart_Implementation @ 147c71c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameModeBase::PlayerCanRestart_Implementation(AGameModeBase *this,APlayerController *param_1)

{
  undefined1 uVar1;
  
  if (((param_1 != (APlayerController *)0x0) && ((param_1->_padding_ & 0x20000000000) == 0)) &&
     (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147c71c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1->_padding_ + 0xec8))(param_1);
    return (bool)uVar1;
  }
  return false;
}

// PostLogin @ 147c723e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameModeBase::PostLogin(AGameModeBase *this,APlayerController *param_1)

{
  byte bVar1;
  longlong lVar2;
  AGameSession *pAVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  UGameInstance *pUVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 uStackX_14;
  FString local_28;
  
  (**(code **)(this->_padding_ + 0x920))();
  AActor::GetWorld((AActor *)this);
  APlayerController::ClientCapBandwidth
            (param_1,((param_1->Player).field0_0x0.DebugPtr)->CurrentNetSpeed);
  bVar6 = MustSpectate(this,param_1);
  if (bVar6) {
    FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
    uStackX_14 = 0;
    local_res10 = *(uint *)CONCAT44(extraout_var,FVar7.Value);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = local_res10;
    APlayerController::ClientGotoState(param_1,FVar5);
  }
  else {
    lVar2 = param_1->_padding_;
    bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(lVar2 + 0x2d0));
    if (bVar6) {
      bVar1 = *(byte *)(lVar2 + 0x2e8);
      if ((1 < (ulonglong)bVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1 + 4) != '\0') {
        pUVar8 = AActor::GetGameInstance((AActor *)this);
        pcVar4 = *(code **)(pUVar8->_padding_ + 0x380);
        pFVar9 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)(lVar2 + 0x2d0),&local_28);
        (*pcVar4)(pUVar8,pFVar9);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pAVar3 = (this->GameSession).field0_0x0.DebugPtr;
  if (pAVar3 != (AGameSession *)0x0) {
    (**(code **)(pAVar3->_padding_ + 0x788))(pAVar3,param_1);
  }
  (**(code **)(this->_padding_ + 0x898))(this,param_1);
  HandleStartingNewPlayer(this,param_1);
  return;
}

// PostSeamlessTravel @ 147c725c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameModeBase::PostSeamlessTravel(AGameModeBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AGameSession *pAVar3;
  APlayerController *this_00;
  code *pcVar4;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UWorld *this_01;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  APlayerController *local_res10;
  UObject *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_40;
  
  pAVar3 = (this->GameSession).field0_0x0.DebugPtr;
  if (pAVar3 != (AGameSession *)0x0) {
    (**(code **)(pAVar3->_padding_ + 0x7e8))();
  }
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  this_01 = AActor::GetWorld((AActor *)this);
  UWorld::GetControllerIterator(this_01,&local_40);
  while( true ) {
    iVar8 = local_40.Index;
    pTVar5 = local_40.Container;
    if ((local_40.Index < 0) || ((local_40.Container)->ArrayNum <= local_40.Index)) {
      iVar8 = (int)local_48;
      pFVar1 = local_50.Data + (longlong)(int)local_48 * 8;
      FVar10.Data = local_50.Data;
      while( true ) {
        if ((int)local_48 != iVar8) {
          `TCheckedPointerIterator<AController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar10.Data == pFVar1) break;
        this_00 = *(APlayerController **)FVar10.Data;
        local_res10 = this_00;
        if (this_00->_padding_ != 0) {
          pUVar9 = Z_Construct_UClass_APlayerController_NoRegister();
          iVar2 = (int)pUVar9->_padding_;
          if (((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
               &pUVar9->_padding_)) ||
             ((this_00 == (APlayerController *)0x0 ||
              (bVar6 = APlayerController::HasClientLoadedCurrentWorld(this_00), bVar6)))) {
            (**(code **)(this->_padding_ + 0x858))(this,&local_res10);
          }
        }
        FVar10.Data = FVar10.Data + 8;
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      return;
    }
    uVar7 = 0;
    if (local_40.Index < (local_40.Container)->ArrayNum) {
      uVar7 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    local_58 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar5->AllocatorInstance).Data + (longlong)iVar8 * 8));
    if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_48;
    if ((int)local_48 == local_48._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_50,(int *)((longlong)&local_48 + 4));
    }
    local_48 = CONCAT44(local_48._4_4_,iVar8 + 1);
    *(UObject **)(local_50.Data + (longlong)iVar8 * 8) = local_58;
    local_40.Index = local_40.Index + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// PreInitializeComponents @ 147c727e0

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

void __thiscall AGameModeBase::PreInitializeComponents(AGameModeBase *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UWorld *this_00;
  AGameStateBase *pAVar5;
  FString *pFVar6;
  AWorldSettings *pAVar7;
  AGameNetworkManager *pAVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_f8 [32];
  FName local_c8;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  AActor::PreInitializeComponents((AActor *)this);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._24_8_ = AActor::GetInstigator((AActor *)this);
  local_98._52_4_ = local_98._52_4_ | RF_Transient;
  pwVar10 = L"";
  pUVar4 = (this->GameStateClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 == (UClass *)0x0) || (pUVar3 = AGameStateBase::StaticClass(), pUVar3 == (UClass *)0x0)
     ) {
LAB_147c72878:
    if (2 < (byte)LogGameMode._0_1_) {
      local_c8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_c8,&local_b0);
      local_c8 = (FName)this->_padding_;
      ::FName::ToString(&local_c8,&local_c0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    pUVar4 = AGameStateBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->GameStateClass).Class.field0_0x0.DebugPtr = pUVar4;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || ((this->GameStateClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
    goto LAB_147c72878;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar4 = (this->GameStateClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 == (UClass *)0x0) || (pUVar3 = AGameStateBase::StaticClass(), pUVar3 == (UClass *)0x0)
     ) {
LAB_147c7296c:
    pUVar4 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_147c7296c;
    pUVar4 = (this->GameStateClass).Class.field0_0x0.DebugPtr;
  }
  pAVar5 = (AGameStateBase *)
           UWorld::SpawnActor(this_00,pUVar4,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                              (FActorSpawnParameters *)local_98);
  if (pAVar5 == (AGameStateBase *)0x0) {
    pAVar5 = (AGameStateBase *)0x0;
  }
  else {
    pUVar4 = AGameStateBase::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar6 = GetTypeName<AGameStateBase>(&local_b0);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_c0,(AActor *)pAVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AGameStateBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  (this->GameState).field0_0x0.DebugPtr = pAVar5;
  UWorld::SetGameState(this_00,pAVar5);
  pAVar5 = (this->GameState).field0_0x0.DebugPtr;
  if (pAVar5 != (AGameStateBase *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pAVar5->AuthorityGameMode).field0_0x0.DebugPtr = this;
  }
  pAVar7 = UWorld::GetWorldSettings(this_00,false,true);
  pUVar4 = (pAVar7->GameNetworkManagerClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar3 = AGameNetworkManager::StaticClass(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (pUVar4 = (pAVar7->GameNetworkManagerClass).Class.field0_0x0.DebugPtr,
       pUVar4 != (UClass *)0x0)) {
      pUVar3 = AGameNetworkManager::StaticClass();
      if (pUVar3 == (UClass *)0x0) {
LAB_147c72abe:
        pUVar4 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar3->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_147c72abe;
        pUVar4 = (pAVar7->GameNetworkManagerClass).Class.field0_0x0.DebugPtr;
      }
      pAVar8 = (AGameNetworkManager *)
               UWorld::SpawnActor(this_00,pUVar4,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                  (FActorSpawnParameters *)local_98);
      if (pAVar8 != (AGameNetworkManager *)0x0) {
        pUVar4 = AGameNetworkManager::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          pFVar6 = GetTypeName<AGameNetworkManager>(&local_b0);
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          pFVar6 = GetFullNameForCastLogError<AActor>(&local_c0,(AActor *)pAVar8);
          if ((pFVar6->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar11);
        }
        goto LAB_147c72b18;
      }
    }
  }
  pAVar8 = (AGameNetworkManager *)0x0;
LAB_147c72b18:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (AGameNetworkManager *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  (this_00->NetworkManager).field0_0x0.DebugPtr = pAVar8;
  (**(code **)(this->_padding_ + 0x7c8))(this);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// PreLogin @ 147c72be0

void __thiscall
AGameModeBase::PreLogin
          (AGameModeBase *this,FString *param_1,FString *param_2,FUniqueNetIdRepl *param_3,
          FString *param_4)

{
  AGameSession *pAVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  UOnlineEngineInterface *pUVar9;
  FString *pFVar10;
  uint uVar11;
  longlong lVar12;
  void *local_48 [2];
  FDestructionSentinel local_38;
  
  bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_3);
  if (bVar5) {
    pUVar9 = UOnlineEngineInterface::Get();
    cVar6 = (**(code **)(*(longlong *)pUVar9 + 0x2e0))(pUVar9,param_3);
    if (cVar6 == '\0') {
      ::FString::operator=(param_4,L"incompatible_unique_net_id");
      goto LAB_147c72ca9;
    }
  }
  pAVar1 = (this->GameSession).field0_0x0.DebugPtr;
  pFVar10 = (FString *)(**(code **)(pAVar1->_padding_ + 0x778))(pAVar1,local_48,param_1);
  if (param_4 != pFVar10) {
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->Data).ArrayNum = (pFVar10->Data).ArrayNum;
    (param_4->Data).ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
LAB_147c72ca9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FGameModeEvents::GameModePreLoginEvent,(FWriteAccessScope *)&local_38);
  bVar5 = false;
  FGameModeEvents::GameModePreLoginEvent._28_4_ = FGameModeEvents::GameModePreLoginEvent._28_4_ + 1;
  uVar11 = FGameModeEvents::GameModePreLoginEvent._16_4_ - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (int)FGameModeEvents::GameModePreLoginEvent._16_4_) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(int *)(lVar12 + 8 + FGameModeEvents::GameModePreLoginEvent._8_8_) == 0) ||
          (plVar3 = *(longlong **)(lVar12 + FGameModeEvents::GameModePreLoginEvent._8_8_),
          plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x68))(plVar3,this,param_3,param_4), cVar6 == '\0')) {
        bVar5 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  FGameModeEvents::GameModePreLoginEvent._28_4_ = FGameModeEvents::GameModePreLoginEvent._28_4_ + -1
  ;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FGameModeEvents::GameModePreLoginEvent,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// PreLoginAsync @ 147c72e00

void __thiscall
AGameModeBase::PreLoginAsync
          (AGameModeBase *this,FString *param_1,FString *param_2,FUniqueNetIdRepl *param_3,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  longlong *plVar1;
  void *local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  (**(code **)(this->_padding_ + 0x878))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_28);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_4->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// ProcessClientTravel @ 147c74a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

APlayerController * __thiscall
AGameModeBase::ProcessClientTravel(AGameModeBase *this,FString *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UWorld *this_00;
  APlayerController *pAVar7;
  APlayerController *this_01;
  UClass *pUVar8;
  longlong lVar9;
  int iVar10;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_48;
  FGuid local_38;
  
  pAVar7 = (APlayerController *)0x0;
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_48);
  do {
    while( true ) {
      iVar5 = local_48.Index;
      pTVar3 = local_48.Container;
      if ((local_48.Index < 0) || ((local_48.Container)->ArrayNum <= local_48.Index)) {
        return pAVar7;
      }
      if ((local_48.Index < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pAVar7 = (APlayerController *)(*pcVar1)();
        return pAVar7;
      }
      this_01 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 8));
      if (this_01 != (APlayerController *)0x0) break;
LAB_147c74dcf:
      local_48.Index = local_48.Index + 1;
    }
    if ((this_01->Player).field0_0x0.DebugPtr == (UPlayer *)0x0) {
LAB_147c74daf:
      (**(code **)(this_01->_padding_ + 0xf78))(this_01,param_1,!param_3 * '\x02');
      pAVar7 = this_01;
      goto LAB_147c74dcf;
    }
    pUVar8 = Z_Construct_UClass_UNetConnection_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this_01->Player,pUVar8);
    if ((!bVar4) || ((this_01->Player).field0_0x0.DebugPtr == (UPlayer *)0x0)) goto LAB_147c74daf;
    local_68.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar9 = (longlong)local_68.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    if (UE::GameModeBase::Private::bAllowListenParamSentToClient == false) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&ListenString,L"?listen");
        atexit(`AGameModeBase::ProcessClientTravel'::__l13::
               _dynamic_atexit_destructor_for__ListenString__);
        _Init_thread_footer(&::_TSS0);
      }
      iVar5 = ListenString.Data.ArrayNum + -1;
      FVar2.Data = ListenString.Data.AllocatorInstance.Data;
      if (ListenString.Data.ArrayNum == 0) {
        iVar5 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      iVar5 = ::FString::Find(&local_68,(wchar_t *)FVar2.Data,iVar5,IgnoreCase,FromStart,-1);
      if (-1 < iVar5) {
        iVar10 = ListenString.Data.ArrayNum + -1 + iVar5;
        if (ListenString.Data.ArrayNum == 0) {
          iVar10 = iVar5;
        }
        iVar6 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        if (iVar10 < iVar6) {
          if ((((iVar10 < 0) || (local_68.Data.ArrayNum == 0)) ||
              (local_68.Data.ArrayNum + -1 <= iVar10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            pAVar7 = (APlayerController *)(*pcVar1)();
            return pAVar7;
          }
          if (*(short *)(local_68.Data.AllocatorInstance.Data + (longlong)iVar10 * 2) != 0x23) {
            if (iVar10 < 0) {
code_r0x000147c74d01:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                pAVar7 = (APlayerController *)(*pcVar1)();
                return pAVar7;
              }
            }
            else {
              iVar6 = local_68.Data.ArrayNum + -1;
              if (local_68.Data.ArrayNum == 0) {
                iVar6 = 0;
              }
              if (iVar6 <= iVar10) goto code_r0x000147c74d01;
            }
            if (*(short *)(local_68.Data.AllocatorInstance.Data + (longlong)iVar10 * 2) != 0x3f)
            goto LAB_147c74d53;
          }
        }
        iVar10 = ListenString.Data.ArrayNum + -1;
        if (ListenString.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::RemoveAt(&local_68,iVar5,iVar10,Default);
      }
    }
LAB_147c74d53:
    local_58 = 0;
    uStack_50 = 0;
    local_38.A = 0;
    local_38.B = 0;
    local_38.C = 0;
    local_38.D = 0;
    APlayerController::ClientTravel(this_01,&local_68,TRAVEL_Relative,param_2,&local_38);
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_147c74dcf;
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    local_48.Index = local_48.Index + 1;
  } while( true );
}

// ProcessServerTravel @ 147c775e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AGameModeBase::ProcessServerTravel(AGameModeBase *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  ENetMode EVar3;
  UWorld *this_00;
  FWorldContext *pFVar4;
  UWorld *pUVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  FString local_98;
  FURL local_88;
  
  (**(code **)(this->_padding_ + 0x868))();
  if (4 < (byte)LogGameMode._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameModeBase.cpp"
                         ,0x1e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = UEngine::GetWorldContextFromWorldChecked(GEngine,this_00);
  if ((this->bUseSeamlessTravel == 0) ||
     (pUVar5 = AActor::GetWorld((AActor *)this),
     __real_4105180000000000 < pUVar5->TimeSeconds || __real_4105180000000000 == pUVar5->TimeSeconds
     )) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FURL::FURL(&local_88,&pFVar4->LastURL,pwVar6,(param_2 ^ 1) * 2);
  bVar2 = FURL::HasOption(&local_88,L"SeamlessTravel");
  if (bVar2) {
    cVar7 = '\x01';
  }
  else {
    bVar2 = FURL::HasOption(&local_88,L"NoSeamlessTravel");
    if (bVar2) {
      cVar7 = '\0';
    }
  }
  if (((this_00->WorldType).Value == '\x03') && (cVar7 != '\0')) {
    pwVar6 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar6,L"MultiprocessOSS");
    if ((!bVar2) && (UE::GameModeBase::Private::bAllowPIESeamlessTravel == false)) {
      if (2 < (byte)LogGameMode._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      }
      cVar7 = '\0';
    }
  }
  FURL::ToString(&local_88,&local_98,false);
  (**(code **)(this->_padding_ + 0x948))(this,&local_98,cVar7,(uint)param_2);
  iVar8 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&this_00->NextURL,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar8);
  EVar3 = AActor::InternalGetNetMode((AActor *)this);
  if (cVar7 == '\0') {
    if (1 < EVar3 - NM_DedicatedServer) {
      this_00->NextSwitchCountdown = 0.0;
    }
    GEngine->GlobalNetTravelCount = GEngine->GlobalNetTravelCount + 1;
    UObject::SaveConfig((UObject *)GEngine,0x4000,(wchar_t *)0x0,GConfig,true);
  }
  else {
    UWorld::SeamlessTravel(this_00,&this_00->NextURL,param_2);
    ::FString::operator=(&this_00->NextURL,L"");
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88.Op.AllocatorInstance.Data,local_88.Op.ArrayNum);
  if (local_88.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Op.AllocatorInstance.Data);
  }
  if (local_88.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_88.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Map.Data.AllocatorInstance.Data);
  }
  if (local_88.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Host.Data.AllocatorInstance.Data);
  }
  if (local_88.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Protocol.Data.AllocatorInstance.Data);
  }
  return;
}

// ReplicateStreamingStatus @ 147c7d0e0

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
AGameModeBase::ReplicateStreamingStatus(AGameModeBase *this,APlayerController *param_1)

{
  TObjectPtr<UPlayer> *this_00;
  ULevelStreaming *this_01;
  ULevel *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  UWorld *this_02;
  AWorldSettings *pAVar8;
  UClass *pUVar9;
  undefined8 *puVar10;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_98 [8];
  TArray<FUpdateLevelStreamingLevelStatus,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  FString local_78;
  FName local_68;
  FScriptContainerElement *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  FString local_48;
  
  this_02 = AActor::GetWorld((AActor *)this);
  pAVar8 = UWorld::GetWorldSettings(this_02,false,true);
  if (pAVar8->bUseClientSideLevelStreamingVolumes == '\0') {
    this_00 = &param_1->Player;
    if ((this_00->field0_0x0).DebugPtr != (UPlayer *)0x0) {
      pUVar9 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
      if ((bVar3) && ((this_00->field0_0x0).DebugPtr != (UPlayer *)0x0)) {
        return;
      }
      if ((this_00->field0_0x0).DebugPtr != (UPlayer *)0x0) {
        pUVar9 = Z_Construct_UClass_UChildConnection_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
        if ((bVar3) && ((this_00->field0_0x0).DebugPtr != (UPlayer *)0x0)) {
          return;
        }
      }
    }
    if (this_02->CommittedPersistentLevelName != (FName)0x0) {
      APlayerController::ClientPrepareMapChange
                (param_1,this_02->CommittedPersistentLevelName,true,true);
      APlayerController::ClientCommitMapChange(param_1);
    }
    local_80 = (this_02->StreamingLevels).ArrayNum;
    uVar13 = (ulonglong)(int)local_80;
    if (0 < (int)local_80) {
      pFVar17 = (this_02->StreamingLevels).AllocatorInstance.Data;
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      pFVar15 = pFVar17 + uVar13 * 8;
      local_60 = pFVar15;
      while( true ) {
        if ((this_02->StreamingLevels).ArrayNum != (int)uVar13) {
          local_98[0] = 0;
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_98);
        }
        if (pFVar17 == pFVar15) break;
        this_01 = *(ULevelStreaming **)pFVar17;
        if ((this_01 != (ULevelStreaming *)0x0) &&
           (cVar4 = (**(code **)(this_01->_padding_ + 0x2c8))(this_01), cVar4 != '\0')) {
          pUVar1 = (this_01->LoadedLevel).field0_0x0.DebugPtr;
          FVar5 = (FScriptContainerElement)(**(code **)(this_01->_padding_ + 0x2f0))(this_01);
          FVar6 = (FScriptContainerElement)(**(code **)(this_01->_padding_ + 0x2e8))();
          if (5 < (byte)LogGameMode._0_1_) {
            if (pUVar1 == (ULevel *)0x0) {
              ::FString::FString(&local_78,L"None");
            }
            else {
              local_68 = (FName)pUVar1->_padding_;
              ::FName::ToString(&local_68,&local_78);
            }
            ULevelStreaming::GetWorldAssetPackageName(this_01,&local_48);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          uVar7 = local_90.ArrayNum;
          if (local_90.ArrayNum == local_90.ArrayMax) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&local_90.AllocatorInstance,&local_90.ArrayMax);
          }
          local_90.ArrayNum = uVar7 + 1;
          uVar12 = 0;
          if ((int)uVar7 < (int)(uVar7 + 1)) {
            uVar12 = ~uVar7 >> 0x1f;
          }
          if ((uVar12 == 0) &&
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
          pFVar15 = local_90.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
          if (pFVar15 == (FScriptContainerElement *)0x0) {
            pFVar15 = (FScriptContainerElement *)0x0;
          }
          else {
            *(undefined8 *)pFVar15 = 0;
            *(undefined8 *)(pFVar15 + 8) = 0;
          }
          puVar10 = (undefined8 *)(**(code **)(this_01->_padding_ + 0x2e0))(this_01,local_58);
          FVar11 = APlayerController::NetworkRemapPath(param_1,(FName)local_50,SUB81(*puVar10,0));
          *(undefined8 *)pFVar15 = *(undefined8 *)FVar11;
          pFVar15[0xc] = FVar6;
          pFVar15[0xd] = FVar5;
          pFVar15[0xe] = this_01->bShouldBlockOnLoad;
          pFVar15[0xf] = this_01->bShouldBlockOnUnload;
          *(int *)(pFVar15 + 8) = this_01->LevelLODIndex;
          pFVar15 = local_60;
        }
        uVar13 = (ulonglong)local_80;
        pFVar17 = pFVar17 + 8;
      }
      APlayerController::ClientUpdateMultipleLevelsStreamingStatus(param_1,&local_90);
      APlayerController::ClientFlushLevelStreaming(param_1);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
    }
    iVar14 = (this_02->PreparingLevelNames).ArrayNum;
    if (0 < iVar14) {
      uVar7 = 0;
      lVar16 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar7 < iVar14) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        APlayerController::ClientPrepareMapChange
                  (param_1,*(FName *)((this_02->PreparingLevelNames).AllocatorInstance.Data + lVar16
                                     ),uVar7 == 0,uVar7 == iVar14 - 1U);
        iVar14 = (this_02->PreparingLevelNames).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar16 = lVar16 + 8;
      } while ((int)uVar7 < iVar14);
    }
  }
  return;
}

// Reset @ 147c7d8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameModeBase::Reset(AGameModeBase *this)

{
  AActor::Reset((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000147c7d909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7c8))(this);
  return;
}

// ResetLevel @ 147c7dbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameModeBase::ResetLevel(AGameModeBase *this)

{
  int iVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  UWorld *pUVar6;
  APlayerController *this_00;
  UClass *pUVar7;
  AGameModeBase *pAVar8;
  UFunction *this_01;
  ALevelScriptActor *this_02;
  char cVar9;
  FName local_res8;
  UClass *local_res10;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_a8;
  FString local_98;
  AGameModeBase *local_88;
  char local_80;
  TActorIteratorBase<FActorIterator> local_78;
  
  if (5 < (byte)LogGameMode._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = AActor::GetWorld((AActor *)this);
  UWorld::GetControllerIterator(pUVar6,&local_a8);
  while( true ) {
    iVar1 = local_a8.Index;
    pTVar3 = local_a8.Container;
    if ((local_a8.Index < 0) || ((local_a8.Container)->ArrayNum <= local_a8.Index)) {
      pUVar6 = AActor::GetWorld((AActor *)this);
      local_res10 = Z_Construct_UClass_AActor_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      local_78.Flags = OnlyActiveLevels|SkipPendingKill;
      local_78.State.bIsSet = false;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      FActorIteratorState::FActorIteratorState
                (&local_78.State.TypedValue,pUVar6,(TSubclassOf<AActor>)&local_res10);
      local_78.State.bIsSet = true;
      while( true ) {
        TActorIteratorBase<FActorIterator>::operator++(&local_78);
        if ((local_78.State.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_78.State.TypedValue.ReachedEnd != false) {
          if (local_78.State.bIsSet != false) {
            UWorld::RemoveOnActorSpawnedHandler
                      (local_78.State.TypedValue.CurrentWorld,
                       local_78.State.TypedValue.ActorSpawnedDelegateHandle);
            if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
            }
            if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
            }
          }
          (**(code **)(this->_padding_ + 0x6f8))(this);
          pUVar6 = AActor::GetWorld((AActor *)this);
          this_02 = UWorld::GetLevelScriptActor(pUVar6,(ULevel *)0x0);
          if (this_02 != (ALevelScriptActor *)0x0) {
            ALevelScriptActor::LevelReset(this_02);
          }
          return;
        }
        if ((local_78.State.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) break;
        pAVar8 = (AGameModeBase *)FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
        if (((pAVar8 != (AGameModeBase *)0x0) && (((uint)pAVar8->_padding_ >> 0x1e & 1) == 0)) &&
           (pAVar8 != this)) {
          pUVar7 = Z_Construct_UClass_AController_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            this_01 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_ShouldReset);
            pUVar7 = UField::GetOwnerClass((UField *)this_01);
            if ((pUVar7->ClassFlags >> 7 & 1) == 0) {
              local_80 = '\0';
              local_88 = pAVar8;
              (**(code **)(this->_padding_ + 0x260))(this,this_01,&local_88);
              cVar9 = local_80 != '\0';
            }
            else {
              cVar9 = (**(code **)(this->_padding_ + 0x7b0))(this);
            }
            if (cVar9 != '\0') {
              (**(code **)(pAVar8->_padding_ + 0x6f8))(pAVar8);
            }
          }
        }
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = 0;
    if (local_a8.Index < (local_a8.Container)->ArrayNum) {
      uVar5 = (uint)~local_a8.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    this_00 = (APlayerController *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar1 * 8));
    if (this_00 != (APlayerController *)0x0) {
      pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        APlayerController::ClientReset(this_00);
      }
    }
    (**(code **)(this_00->_padding_ + 0x6f8))(this_00);
    local_a8.Index = local_a8.Index + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RestartPlayer @ 147c7e4f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::RestartPlayer(AGameModeBase *this,AController *param_1)

{
  bool bVar1;
  AActor *pAVar2;
  FString local_18;
  
  if (((param_1 != (AController *)0x0) && ((param_1->_padding_ & 0x20000000000) == 0)) &&
     (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    ::FString::FString(&local_18,L"");
    pAVar2 = FindPlayerStart(this,param_1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (((pAVar2 == (AActor *)0x0) &&
        (bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&param_1->StartSpot,(void *)0x0),
        !bVar1)) &&
       (pAVar2 = (AActor *)FWeakObjectPtr::Get(&(param_1->StartSpot).WeakPtr),
       2 < (byte)LogGameMode._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    }
    (**(code **)(this->_padding_ + 0x8d0))(this,param_1,pAVar2);
  }
  return;
}

// RestartPlayerAtPlayerStart @ 147c7e5d0

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
AGameModeBase::RestartPlayerAtPlayerStart(AGameModeBase *this,AController *param_1,AActor *param_2)

{
  int iVar1;
  APlayerState *this_00;
  APawn *pAVar2;
  bool bVar3;
  UClass *pUVar4;
  TRotator<double> *pTVar5;
  double dVar6;
  UFunction *pUVar7;
  APlayerController *pAVar8;
  TRotator<double> local_38;
  TRotator<double> local_20;
  
  if (param_1 == (AController *)0x0) {
    return;
  }
  if ((param_1->_padding_ & 0x20000000000) != 0) {
    return;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if (param_2 == (AActor *)0x0) {
    if ((byte)LogGameMode._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    return;
  }
  AActor::GetActorRotation(param_2,&local_20);
  if (5 < (byte)LogGameMode._0_1_) {
    this_00 = (param_1->PlayerState).field0_0x0.DebugPtr;
    if (this_00 != (APlayerState *)0x0) {
      APlayerState::GetPlayerName(this_00,(FString *)&local_38);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    if ((this_00 != (APlayerState *)0x0) && ((AController *)local_38.Pitch != (AController *)0x0)) {
      FMemory::Free((void *)local_38.Pitch);
    }
  }
  pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     (pAVar8 = (APlayerController *)param_1,
     (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar4->_padding_)) {
    pAVar8 = (APlayerController *)0x0;
  }
  bVar3 = MustSpectate(this,pAVar8);
  if (bVar3) {
    if ((byte)LogGameMode._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    return;
  }
  pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147c7e732:
    if (pAVar2 != (APawn *)0x0) {
      pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (APawn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      pTVar5 = AActor::GetActorRotation((AActor *)pAVar2,&local_38);
      local_20.Pitch = pTVar5->Pitch;
      local_20.Yaw = pTVar5->Yaw;
      local_20.Roll = pTVar5->Roll;
      goto LAB_147c7e80f;
    }
  }
  else if (pAVar2 != (APawn *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
    goto LAB_147c7e732;
  }
  pUVar4 = GetDefaultPawnClassForController(this,param_1);
  if (pUVar4 != (UClass *)0x0) {
    pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_SpawnDefaultPawnFor);
    pUVar4 = UField::GetOwnerClass((UField *)pUVar7);
    if ((pUVar4->ClassFlags >> 7 & 1) == 0) {
      local_38.Roll = 0.0;
      local_38.Pitch = (double)param_1;
      local_38.Yaw = (double)param_2;
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,&local_38);
      dVar6 = local_38.Roll;
    }
    else {
      dVar6 = (double)(**(code **)(this->_padding_ + 0x778))(this,param_1,param_2);
    }
    if ((dVar6 != 0.0) && ((*(uint *)((longlong)dVar6 + 8) >> 0x1e & 1) == 0)) {
      (**(code **)(param_1->_padding_ + 0x7d8))(param_1,dVar6);
    }
  }
LAB_147c7e80f:
  pAVar2 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (pAVar2 != (APawn *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar2);
    }
    if (((uint)pAVar2->_padding_ >> 0x1e & 1) == 0) {
      pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_InitStartSpot);
      pUVar4 = UField::GetOwnerClass((UField *)pUVar7);
      if ((pUVar4->ClassFlags >> 7 & 1) == 0) {
        local_38.Pitch = (double)param_2;
        local_38.Yaw = (double)param_1;
        (**(code **)(this->_padding_ + 0x260))(this,pUVar7,&local_38);
      }
      else {
        (**(code **)(this->_padding_ + 0x768))(this,param_2,param_1);
      }
      (**(code **)(this->_padding_ + 0x938))(this,param_1,&local_20);
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x940))(this,param_1);
  return;
}

// RestartPlayerAtTransform @ 147c7e8d0

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
AGameModeBase::RestartPlayerAtTransform
          (AGameModeBase *this,AController *param_1,TTransform<double> *param_2)

{
  int iVar1;
  APlayerState *this_00;
  bool bVar2;
  UClass *pUVar3;
  TRotator<double> *pTVar4;
  APawn *pAVar5;
  APlayerController *pAVar6;
  APlayerController *pAVar7;
  TQuat<double> local_58;
  TRotator<double> local_38;
  
  if (param_1 == (AController *)0x0) {
    return;
  }
  pAVar7 = (APlayerController *)0x0;
  if ((param_1->_padding_ & 0x20000000000) != 0) {
    return;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if (5 < (byte)LogGameMode._0_1_) {
    this_00 = (param_1->PlayerState).field0_0x0.DebugPtr;
    pAVar6 = pAVar7;
    if (this_00 != (APlayerState *)0x0) {
      pAVar6 = (APlayerController *)&DAT_00000001;
      APlayerState::GetPlayerName(this_00,(FString *)&local_58);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    if ((pAVar6 != (APlayerController *)0x0) && ((void *)local_58.X != (void *)0x0)) {
      FMemory::Free((void *)local_58.X);
    }
  }
  pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pAVar7 = (APlayerController *)param_1;
  }
  bVar2 = MustSpectate(this,pAVar7);
  if (bVar2) {
    if ((byte)LogGameMode._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    return;
  }
  local_58.X = (param_2->Rotation).XY.m128d_f64[0];
  local_58.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_58.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_58.W = (param_2->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_58,&local_38);
  pAVar5 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147c7ea1e:
    if (pAVar5 != (APawn *)0x0) {
      pAVar5 = (param_1->Pawn).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (APawn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar5);
      }
      pTVar4 = AActor::GetActorRotation((AActor *)pAVar5,(TRotator<double> *)&local_58);
      local_38.Pitch = pTVar4->Pitch;
      local_38.Yaw = pTVar4->Yaw;
      local_38.Roll = pTVar4->Roll;
      goto LAB_147c7ea9e;
    }
  }
  else if (pAVar5 != (APawn *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
    goto LAB_147c7ea1e;
  }
  pUVar3 = GetDefaultPawnClassForController(this,param_1);
  if (((pUVar3 != (UClass *)0x0) &&
      (pAVar5 = SpawnDefaultPawnAtTransform(this,param_1,param_2), pAVar5 != (APawn *)0x0)) &&
     (((uint)pAVar5->_padding_ >> 0x1e & 1) == 0)) {
    (**(code **)(param_1->_padding_ + 0x7d8))(param_1,pAVar5);
  }
LAB_147c7ea9e:
  pAVar5 = (param_1->Pawn).field0_0x0.DebugPtr;
  if (pAVar5 != (APawn *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    if (((uint)pAVar5->_padding_ >> 0x1e & 1) == 0) {
      (**(code **)(this->_padding_ + 0x938))(this,param_1,&local_38);
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x940))(this,param_1);
  return;
}

// ReturnToMainMenuHost @ 147c7eb10

void __thiscall AGameModeBase::ReturnToMainMenuHost(AGameModeBase *this)

{
  AGameSession *pAVar1;
  
  pAVar1 = (this->GameSession).field0_0x0.DebugPtr;
  if (pAVar1 != (AGameSession *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c7eb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pAVar1->_padding_ + 0x7e0))();
    return;
  }
  return;
}

// SetPause @ 147c81500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameModeBase::SetPause
          (AGameModeBase *this,APlayerController *param_1,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  TArray<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  AWorldSettings *pAVar9;
  
  cVar5 = (**(code **)(this->_padding_ + 0x810))();
  if (cVar5 == '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    return false;
  }
  pTVar2 = &this->Pausers;
  pTVar3 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
           (pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->Pausers).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->Pausers).ArrayNum;
  piVar1 = &(this->Pausers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Pausers).ArrayNum = iVar8 + 1;
  pTVar3 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
           ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x18);
  *(undefined8 *)pTVar3 = 0;
  *(undefined8 *)&pTVar3->field_0x8 = 0;
  *(undefined4 *)&pTVar3->field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar3,param_2);
  pAVar9 = AActor::GetWorldSettings((AActor *)this);
  if ((pAVar9->PauserPlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0) {
    (**(code **)(pAVar9->_padding_ + 0x7c8))(pAVar9,param_1->_padding_);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return true;
}

// SetPlayerDefaults @ 147c81690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameModeBase::SetPlayerDefaults(AGameModeBase *this,APawn *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c81696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x7d8))(param_1);
  return;
}

// ShouldReset @ 147c837e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameModeBase::ShouldReset(AGameModeBase *this,AActor *param_1)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  AActor *local_18;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_ShouldReset);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = '\0';
    local_18 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return local_10 != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000147c8385e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x7b0))(this,param_1);
  return (bool)uVar1;
}

// ShouldReset_Implementation @ 147c83870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameModeBase::ShouldReset_Implementation(AGameModeBase *this,AActor *param_1)

{
  return true;
}

// ShouldSpawnAtStartSpot @ 147c83880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall AGameModeBase::ShouldSpawnAtStartSpot(AGameModeBase *this,AController *param_1)

{
  bool bVar1;
  
  if (param_1 != (AController *)0x0) {
    bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&param_1->StartSpot,(void *)0x0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldStartInCinematicMode @ 147c838b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameModeBase::ShouldStartInCinematicMode
          (AGameModeBase *this,APlayerController *param_1,bool *param_2,bool *param_3,bool *param_4,
          bool *param_5)

{
  APlayerController::GetLocalPlayer(param_1);
  return false;
}

// SpawnDefaultPawnAtTransform @ 147c83ef0

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

APawn * __thiscall
AGameModeBase::SpawnDefaultPawnAtTransform
          (AGameModeBase *this,AController *param_1,TTransform<double> *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_c8 [32];
  AController *local_a8 [2];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  APawn *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_AGameModeBase_SpawnDefaultPawnAtTransform);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_98 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_90 = (param_2->Rotation).XY.m128d_f64[1];
    local_88 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_80 = (param_2->Rotation).ZW.m128d_f64[1];
    local_78 = (param_2->Translation).XY.m128d_f64[0];
    dStack_70 = (param_2->Translation).XY.m128d_f64[1];
    local_68 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_60 = (param_2->Translation).ZW.m128d_f64[1];
    local_58 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
    uStack_54 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
    uStack_50 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
    uStack_4c = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    local_48 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
    uStack_44 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
    uStack_40 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
    uStack_3c = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
    local_38 = (APawn *)0x0;
    local_a8[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_a8);
  }
  else {
    local_38 = (APawn *)(**(code **)(this->_padding_ + 0x770))(this,param_1,param_2);
  }
  return local_38;
}

// SpawnDefaultPawnAtTransform_Implementation @ 147c83fe0

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

APawn * __thiscall
AGameModeBase::SpawnDefaultPawnAtTransform_Implementation
          (AGameModeBase *this,AController *param_1,TTransform<double> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UWorld *this_00;
  APawn *pAVar3;
  FString *pFVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 auStack_e8 [32];
  FString local_c8;
  FName local_b8;
  FString local_b0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._24_8_ = AActor::GetInstigator((AActor *)this);
  local_98._52_4_ = local_98._52_4_ | RF_Transient;
  pUVar2 = GetDefaultPawnClassForController(this,param_1);
  this_00 = AActor::GetWorld((AActor *)this);
  pAVar3 = (APawn *)UWorld::SpawnActor(this_00,pUVar2,param_2,(FActorSpawnParameters *)local_98);
  if (pAVar3 == (APawn *)0x0) {
    pAVar3 = (APawn *)0x0;
    if (2 < (byte)LogGameMode._0_1_) {
      UE::Math::TTransform<double>::ToHumanReadableString(param_2,&local_b0);
      if (pUVar2 == (UClass *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_b8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_b8,&local_c8);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      pAVar3 = (APawn *)0x0;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        pAVar3 = (APawn *)0x0;
      }
    }
  }
  else {
    pUVar2 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<APawn>(&local_b0);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<AActor>(&local_c8,(AActor *)pAVar3);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
  }
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return pAVar3;
}

// SpawnDefaultPawnFor @ 147c841d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APawn * __thiscall
AGameModeBase::SpawnDefaultPawnFor(AGameModeBase *this,AController *param_1,AActor *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  AController *local_28;
  AActor *local_20;
  APawn *local_18;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameModeBase_SpawnDefaultPawnFor);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = (APawn *)0x0;
    local_28 = param_1;
    local_20 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
  }
  else {
    local_18 = (APawn *)(**(code **)(this->_padding_ + 0x778))(this,param_1,param_2);
  }
  return local_18;
}

// SpawnDefaultPawnFor_Implementation @ 147c84270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall
AGameModeBase::SpawnDefaultPawnFor_Implementation
          (AGameModeBase *this,AController *param_1,AActor *param_2)

{
  USceneComponent *pUVar1;
  TRotator<double> *pTVar2;
  TQuat<double> *pTVar3;
  APawn *pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_118 [32];
  TRotator<double> local_f8;
  TRotator<double> local_e0;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.Pitch = 0.0;
  local_f8.Roll = 0.0;
  pTVar2 = AActor::GetActorRotation(param_2,&local_e0);
  local_f8.Yaw = pTVar2->Yaw;
  pUVar1 = (param_2->RootComponent).field0_0x0.DebugPtr;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_e0.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar1 != (USceneComponent *)0x0) {
    uVar5 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
    uVar6 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    local_a8.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    local_a8.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    local_e0.Roll = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_f8,&local_c8);
  local_a8.Rotation.XY.m128d_f64[0] = pTVar3->X;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar3->Y;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar3->Y + 4);
  local_a8.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
  local_a8.Rotation.ZW.m128d_f64[1] = pTVar3->W;
  local_a8.Translation.XY.m128d_f64[0] = (double)CONCAT44(uVar6,uVar5);
  local_a8.Translation.ZW.m128d_f64[0] = local_e0.Roll;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  pAVar4 = SpawnDefaultPawnAtTransform(this,param_1,&local_a8);
  return pAVar4;
}

// SpawnPlayerController @ 147c85510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
AGameModeBase::SpawnPlayerController
          (AGameModeBase *this,ENetRole param_1,TVector<double> *param_2,TRotator<double> *param_3)

{
  code *pcVar1;
  APlayerController *pAVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  local_res8 = (TObjectPtr<UClass>_u_0)(this->PlayerControllerClass).Class.field0_0x0.DebugPtr;
  pcVar1 = *(code **)(this->_padding_ + 0x958);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pAVar2 = (APlayerController *)(*pcVar1)(this,param_1,param_2,param_3,&local_res8);
  return pAVar2;
}

// SpawnPlayerController @ 147c85590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
AGameModeBase::SpawnPlayerController(AGameModeBase *this,ENetRole param_1,FString *param_2)

{
  UClass *pUVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  APlayerController *pAVar5;
  size_t sVar6;
  UClass *pUVar7;
  wchar_t *_Str;
  FString local_18;
  
  pFVar4 = ::FString::FString(&local_18,L"SpectatorOnly=1");
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
LAB_147c8560e:
    sVar6 = wcslen(_Str);
    iVar3 = ::FString::Find(param_2,_Str,(int)sVar6,IgnoreCase,FromStart,-1);
    if ((iVar3 != -1) &&
       (pUVar1 = (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr,
       pUVar1 != (UClass *)0x0)) {
      pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
      if (pUVar7 != (UClass *)0x0) {
        iVar3 = (int)pUVar7->_padding_;
        if (((int)pUVar1->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           ((this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)
           ) {
          bVar2 = true;
          goto LAB_147c855ce;
        }
      }
    }
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_147c8560e;
  }
  bVar2 = false;
LAB_147c855ce:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pAVar5 = (APlayerController *)(**(code **)(this->_padding_ + 0x8b8))();
  }
  else {
    pAVar5 = (APlayerController *)
             (**(code **)(this->_padding_ + 0x8a8))
                       (this,param_1,&UE::Math::TVector<double>::ZeroVector,
                        &UE::Math::TRotator<double>::ZeroRotator);
  }
  return pAVar5;
}

// SpawnPlayerControllerCommon @ 147c856c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
AGameModeBase::SpawnPlayerControllerCommon
          (AGameModeBase *this,ENetRole param_1,TVector<double> *param_2,TRotator<double> *param_3,
          TSubclassOf<APlayerController> param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UWorld *this_00;
  UClass *pUVar4;
  APlayerController *pAVar5;
  TQuat<double> *pTVar6;
  FString *pFVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_168 [32];
  FString local_138;
  TQuat<double> local_128;
  undefined1 local_108 [112];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_108);
  local_108._24_8_ = AActor::GetInstigator((AActor *)this);
  local_108._52_4_ = local_108._52_4_ | RF_Transient;
  local_108[0x32] = local_108[0x32] | 4;
  this_00 = AActor::GetWorld((AActor *)this);
  lVar2 = *(longlong *)param_4.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_4.Class.field0_0x0;
        goto LAB_147c85767;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_147c85767:
  pAVar5 = (APlayerController *)
           UWorld::SpawnActor(this_00,pUVar4,param_2,param_3,(FActorSpawnParameters *)local_108);
  if (pAVar5 == (APlayerController *)0x0) {
    pAVar5 = (APlayerController *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar7 = GetTypeName<APlayerController>(&local_138);
      pwVar10 = L"";
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<AActor>((FString *)&local_128,(AActor *)pAVar5);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar9);
    }
    if (param_1 == ROLE_SimulatedProxy) {
      pAVar5->bIsLocalPlayerController = true;
    }
    pTVar6 = UE::Math::TRotator<double>::Quaternion(param_3,&local_128);
    local_98.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
    local_98.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
    local_98.Rotation.XY.m128d_f64[0] = pTVar6->X;
    local_98.Rotation.XY.m128d_f64[1] = pTVar6->Y;
    local_98.Rotation.ZW.m128d_f64[0] = pTVar6->Z;
    local_98.Rotation.ZW.m128d_f64[1] = pTVar6->W;
    local_98.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    local_98.Translation.ZW.m128d_f64[1] = 0.0;
    local_98.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_98.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_98.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_98.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    UGameplayStatics::FinishSpawningActor((AActor *)pAVar5,&local_98,MultiplyWithRoot);
  }
  if (local_108._64_8_ != 0) {
    plVar8 = (longlong *)(local_108 + 0x50);
    if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_108._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return pAVar5;
}

// SpawnPlayerFromSimulate @ 147c858d0

bool __thiscall
AGameModeBase::SpawnPlayerFromSimulate
          (AGameModeBase *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  return true;
}

// SpawnReplayPlayerController @ 147c858e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
AGameModeBase::SpawnReplayPlayerController
          (AGameModeBase *this,ENetRole param_1,TVector<double> *param_2,TRotator<double> *param_3)

{
  code *pcVar1;
  APlayerController *pAVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  local_res8 = (TObjectPtr<UClass>_u_0)
               (this->ReplaySpectatorPlayerControllerClass).Class.field0_0x0.DebugPtr;
  pcVar1 = *(code **)(this->_padding_ + 0x958);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pAVar2 = (APlayerController *)(*pcVar1)(this,param_1,param_2,param_3,&local_res8);
  return pAVar2;
}

// StartPlay @ 147c87510

void __thiscall AGameModeBase::StartPlay(AGameModeBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c8751a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->GameState).field0_0x0.DebugPtr)->_padding_ + 0x7c0))();
  return;
}

// StartToLeaveMap @ 147c87530

void __thiscall AGameModeBase::StartToLeaveMap(AGameModeBase *this)

{
  return;
}

// StaticRegisterNativesAGameModeBase @ 147c87f30

void __cdecl AGameModeBase::StaticRegisterNativesAGameModeBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_AGameModeBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SwapPlayerControllers @ 147c89620

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
AGameModeBase::SwapPlayerControllers
          (AGameModeBase *this,APlayerController *param_1,APlayerController *param_2)

{
  int iVar1;
  UNetConnection *pUVar2;
  UFunction *pUVar3;
  UClass *pUVar4;
  UWorld *this_00;
  UNetConnection *pUVar5;
  APlayerController *local_18;
  APlayerController *local_10;
  
  if ((((param_1 == (APlayerController *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) ||
      (param_2 == (APlayerController *)0x0)) ||
     ((((uint)param_2->_padding_ >> 0x1e & 1) != 0 ||
      (pUVar5 = (UNetConnection *)(param_1->Player).field0_0x0.DebugPtr,
      pUVar5 == (UNetConnection *)0x0)))) {
    if (2 < (byte)LogGameMode._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    }
  }
  else {
    param_2->NetPlayerIndex = param_1->NetPlayerIndex;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->NetConnection).field0_0x0.DebugPtr, pUVar2 != (UNetConnection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (param_2->NetConnection).field0_0x0 = (param_1->NetConnection).field0_0x0;
    AActor::SetReplicates
              ((AActor *)param_2,(bool)(*(byte *)((longlong)&param_1->_padding_ + 3) >> 3 & 1));
    (**(code **)(param_2->_padding_ + 0xdf0))(param_2,pUVar5);
    AActor::CopyRemoteRoleFrom((AActor *)param_2,(AActor *)param_1);
    local_18 = param_1;
    local_10 = param_2;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AGameModeBase_K2_OnSwapPlayerControllers);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_18);
    pUVar4 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pUVar4 = Z_Construct_UClass_UNetConnection_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar5 = (UNetConnection *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UNetConnection *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (param_1->PendingSwapConnection).field0_0x0.DebugPtr = pUVar5;
    }
    else {
      this_00 = AActor::GetWorld((AActor *)this);
      UWorld::DestroyActor(this_00,(AActor *)param_1,false,true);
    }
  }
  return;
}

// UpdateGameplayMuteList @ 147c8eb10

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
AGameModeBase::UpdateGameplayMuteList(AGameModeBase *this,APlayerController *param_1)

{
  longlong lVar1;
  
  if (param_1 != (APlayerController *)0x0) {
    lVar1 = param_1->_padding_;
    (param_1->MuteList).bHasVoiceHandshakeCompleted = true;
                    /* WARNING: Could not recover jumptable at 0x000147c8eb22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0xcc0))(param_1);
    return;
  }
  return;
}

// UpdatePlayerStartSpot @ 147c8ed00

/* WARNING: Type propagation algorithm not settling */
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
AGameModeBase::UpdatePlayerStartSpot
          (AGameModeBase *this,AController *param_1,FString *param_2,FString *param_3)

{
  USceneComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  AActor *this_00;
  TRotator<double> *pTVar4;
  AActor *local_58;
  FString local_50;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  TRotator<double> local_28;
  
  ::FString::Reset(param_3,0);
  this_00 = FindPlayerStart(this,param_1,param_2);
  if (this_00 == (AActor *)0x0) {
    ::FString::PrintfImpl(&local_50,L"Could not find a starting spot");
    if (param_3 != &local_50) {
      pFVar2 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_3->Data).AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_50.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_50.Data.ArrayMax;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    pTVar4 = AActor::GetActorRotation(this_00,&local_28);
    local_38 = pTVar4->Yaw;
    local_40 = 0;
    local_30 = 0;
    pUVar1 = (this_00->RootComponent).field0_0x0.DebugPtr;
    local_28.Pitch._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_28.Pitch._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_28.Yaw._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_28.Yaw._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_28.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pUVar1 != (USceneComponent *)0x0) {
      local_28.Pitch._0_4_ = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
      local_28.Pitch._4_4_ =
           *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      local_28.Yaw._0_4_ = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      local_28.Yaw._4_4_ =
           *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      local_28.Roll = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
    (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&local_28,&local_40);
    local_58 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&(param_1->StartSpot).WeakPtr,(FObjectPtr)&local_58);
    bVar3 = true;
  }
  return bVar3;
}

// execCanSpectate @ 147c93920

void __cdecl AGameModeBase::execCanSpectate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x798))(param_1,local_res10,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execChangeName @ 147c93a20

void __cdecl AGameModeBase::execChangeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  void *local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8c0))(param_1,local_res10,&local_18,local_res8[0] != 0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execChoosePlayerStart @ 147c93b50

void __cdecl AGameModeBase::execChoosePlayerStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x790))(param_1,local_res8);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execFindPlayerStart @ 147c95510

void __cdecl AGameModeBase::execFindPlayerStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  void *local_18;
  undefined8 local_10;
  
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
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x788))(param_1,local_res8,&local_18);
  *(undefined8 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetDefaultPawnClassForController @ 147c96dc0

void __cdecl
AGameModeBase::execGetDefaultPawnClassForController(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,local_res8);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetNumPlayers @ 147c97bd0

void __cdecl AGameModeBase::execGetNumPlayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7d8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumSpectators @ 147c97c10

void __cdecl AGameModeBase::execGetNumSpectators(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7e0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execHandleStartingNewPlayer @ 147c99a70

void __cdecl
AGameModeBase::execHandleStartingNewPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
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
  (**(code **)(*(longlong *)param_1 + 0x7a8))(param_1,local_res8);
  return;
}

// execHasMatchEnded @ 147c99c00

void __cdecl AGameModeBase::execHasMatchEnded(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7f8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execHasMatchStarted @ 147c99c80

void __cdecl AGameModeBase::execHasMatchStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7f0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execInitStartSpot @ 147c99e60

void __cdecl AGameModeBase::execInitStartSpot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0x768))(param_1,local_res10,local_res8);
  return;
}

// execInitializeHUDForPlayer @ 147c99f40

void __cdecl
AGameModeBase::execInitializeHUDForPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
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
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res8);
  return;
}

// execK2_FindPlayerStart @ 147c9a610

void __cdecl AGameModeBase::execK2_FindPlayerStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  UFunction *this;
  UClass *pUVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  uVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UObject::FindFunctionChecked(param_1,NAME_AGameModeBase_FindPlayerStart);
  pUVar2 = UField::GetOwnerClass((UField *)this);
  _Src = local_58;
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_48 = uVar3;
    lVar4 = (longlong)(int)local_50;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_38 = (int)local_50;
    if ((int)local_50 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_50,0,&local_40,(int)local_50,&local_34);
      memcpy(local_40.Data,_Src,lVar4 * 2);
    }
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,this,&local_48);
    uVar3 = local_30;
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else {
    uVar3 = (**(code **)(*(longlong *)param_1 + 0x788))(param_1,uVar3,&local_58);
  }
  *(undefined8 *)param_3 = uVar3;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execMustSpectate @ 147c9b460

void __cdecl AGameModeBase::execMustSpectate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7a0))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execPlayerCanRestart @ 147c9cca0

void __cdecl AGameModeBase::execPlayerCanRestart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x780))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execResetLevel @ 147c9d800

void __cdecl AGameModeBase::execResetLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9d818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x820))();
  return;
}

// execRestartPlayer @ 147c9d860

void __cdecl AGameModeBase::execRestartPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
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
  (**(code **)(*(longlong *)param_1 + 0x8c8))(param_1,local_res8);
  return;
}

// execRestartPlayerAtPlayerStart @ 147c9d8f0

void __cdecl
AGameModeBase::execRestartPlayerAtPlayerStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0x8d0))(param_1,local_res10,local_res8);
  return;
}

// execRestartPlayerAtTransform @ 147c9d9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AGameModeBase::execRestartPlayerAtTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double *pdVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [2];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar6;
  dStack_60 = (double)fVar9;
  local_48 = (double)fVar7;
  dStack_40 = (double)fVar10;
  local_58._8_4_ = SUB84((double)fVar4,0);
  local_58._0_8_ = (double)fVar2;
  local_58._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_28 = (double)fVar8;
  dStack_20 = (double)fVar11;
  local_38._8_4_ = SUB84((double)fVar5,0);
  local_38._0_8_ = (double)fVar3;
  local_38._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pdVar12 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8d8))(param_1,local_88[0],pdVar12);
  return;
}

// execReturnToMainMenuHost @ 147c9db30

void __cdecl AGameModeBase::execReturnToMainMenuHost(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x828))();
  return;
}

// execShouldReset @ 147ca0540

void __cdecl AGameModeBase::execShouldReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7b0))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSpawnDefaultPawnAtTransform @ 147ca0d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AGameModeBase::execSpawnDefaultPawnAtTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  double *pdVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78 = (double)fVar6;
  dStack_70 = (double)fVar9;
  local_58 = (double)fVar7;
  dStack_50 = (double)fVar10;
  local_68._8_4_ = SUB84((double)fVar4,0);
  local_68._0_8_ = (double)fVar2;
  local_68._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_38 = (double)fVar8;
  dStack_30 = (double)fVar11;
  local_48._8_4_ = SUB84((double)fVar5,0);
  local_48._0_8_ = (double)fVar3;
  local_48._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pdVar13 = &local_88;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar12 = (**(code **)(*(longlong *)param_1 + 0x770))(param_1,local_98[0],pdVar13);
  *(undefined8 *)param_3 = uVar12;
  return;
}

// execSpawnDefaultPawnFor @ 147ca0ee0

void __cdecl AGameModeBase::execSpawnDefaultPawnFor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x778))(param_1,local_res10,local_res8);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execStartPlay @ 147ca34d0

void __cdecl AGameModeBase::execStartPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147ca34e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7e8))();
  return;
}

