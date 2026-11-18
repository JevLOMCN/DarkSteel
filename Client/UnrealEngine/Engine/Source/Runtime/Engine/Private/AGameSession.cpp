// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// StaticClass @ 147c16a80

UClass * __cdecl AGameSession::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameSession.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameSession",
               &Z_Registration_Info_UClass_AGameSession.InnerSingleton,
               StaticRegisterNativesAGameSession,0x2e8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<AGameSession>,
               InternalVTableHelperCtorCaller<AGameSession>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameSession.InnerSingleton;
}

// AGameSession @ 147c2c120

AGameSession * __thiscall AGameSession::AGameSession(AGameSession *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AGameSession__6B_;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  (this->MaxPlayersOptionOverride).bIsSet = false;
  (this->MaxSpectatorsOptionOverride).bIsSet = false;
  return this;
}

// AGameSession @ 147c2c160

AGameSession * __thiscall AGameSession::AGameSession(AGameSession *this,FObjectInitializer *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->MaxPartySize = -1;
  this->_padding_ = (longlong)&___7AGameSession__6B_;
  (this->SessionName).ComparisonIndex = 0;
  (this->SessionName).Number = 0;
  (this->MaxPlayersOptionOverride).bIsSet = false;
  (this->MaxSpectatorsOptionOverride).bIsSet = false;
  return this;
}

// ~AGameSession @ 147c30f70

void __thiscall AGameSession::~AGameSession(AGameSession *this)

{
  this->_padding_ = (longlong)&___7AGameSession__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// AddAdmin @ 147c34c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameSession::AddAdmin(AGameSession *this,APlayerController *param_1)

{
  return;
}

// ApproveLogin @ 147c36fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AGameSession::ApproveLogin(AGameSession *this,FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  UWorld *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar6 = AActor::GetWorld((AActor *)this);
  if ((pUVar6 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameSession.cpp"
                         ,0xdf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar1)();
    return pFVar7;
  }
  if (((pUVar6->AuthorityGameMode).field0_0x0.DebugPtr == (AGameModeBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameMode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameSession.cpp"
                         ,0xe2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar1)();
    return pFVar7;
  }
  ::FString::FString(&local_58,L"SpectatorOnly");
  pFVar7 = ::FString::FString(&local_38,param_1);
  UGameplayStatics::ParseOption(&local_78,pFVar7,&local_58);
  iVar5 = 0;
  if (local_78.Data.ArrayNum < 2) {
    iVar4 = iVar5;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = _wtoi((wchar_t *)local_78.Data.AllocatorInstance.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x790))(this,iVar4 == 1);
  if (cVar3 == '\0') {
    ::FString::FString(&local_48,L"SplitscreenCount");
    pFVar7 = ::FString::FString(&local_28,param_1);
    UGameplayStatics::ParseOption(&local_68,pFVar7,&local_48);
    if (1 < local_68.Data.ArrayNum) {
      iVar5 = _wtoi((wchar_t *)local_68.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((int)(uint)this->MaxSplitscreensPerConnection < iVar5) {
      if (2 < (byte)LogGameSession._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
      }
      pwVar8 = L"Maximum splitscreen players";
    }
    else {
      pwVar8 = L"";
    }
  }
  else {
    pwVar8 = L"Server full.";
  }
  ::FString::FString(__return_storage_ptr__,pwVar8);
  return __return_storage_ptr__;
}

// AtCapacity @ 147c37be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameSession::AtCapacity(AGameSession *this,bool param_1)

{
  AGameModeBase *pAVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  ENetMode EVar7;
  int iVar8;
  int iVar9;
  UWorld *pUVar10;
  
  EVar7 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar7 == NM_Standalone) {
    return false;
  }
  pUVar10 = AActor::GetWorld((AActor *)this);
  pTVar3 = CVarMaxPlayersOverride.Ref;
  pAVar1 = (pUVar10->AuthorityGameMode).field0_0x0.DebugPtr;
  if (param_1) {
    iVar9 = this->MaxSpectators;
    iVar8 = (**(code **)(pAVar1->_padding_ + 0x7e0))(pAVar1);
    if (iVar9 <= iVar8) {
      EVar7 = AActor::InternalGetNetMode((AActor *)this);
      if ((EVar7 == NM_ListenServer) &&
         (iVar9 = (**(code **)(pAVar1->_padding_ + 0x7d8))(pAVar1), iVar9 < 1)) {
        return false;
      }
      return true;
    }
  }
  else {
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pTVar4 = CVarMaxPlayersOverride.Ref;
    if (pTVar3->ShadowedValue[0] < 1) {
      iVar9 = this->MaxPlayers;
    }
    else {
      bVar5 = IsInParallelGameThread();
      if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar9 = pTVar4->ShadowedValue[0];
    }
    if ((0 < iVar9) && (iVar8 = (**(code **)(pAVar1->_padding_ + 0x7d8))(pAVar1), iVar9 <= iVar8)) {
      return true;
    }
  }
  return false;
}

// BanPlayer @ 147c37d40

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
AGameSession::BanPlayer(AGameSession *this,APlayerController *param_1,FText *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147c37d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 2000))();
  return (bool)uVar1;
}

// CanRestartGame @ 147c3b590

bool __thiscall AGameSession::CanRestartGame(AGameSession *this)

{
  return true;
}

// DumpSessionState @ 147c4d150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameSession::DumpSessionState(AGameSession *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UOnlineEngineInterface *pUVar1;
  UWorld *pUVar2;
  
  if (4 < (byte)LogGameSession._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    if (4 < (byte)LogGameSession._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    }
  }
  pUVar1 = UOnlineEngineInterface::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar1 + 0x3d8);
  pUVar2 = AActor::GetWorld((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000147c4d1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,pUVar2);
  return;
}

// GetActorBounds @ 147c534c0

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
AGameSession::GetActorBounds
          (AGameSession *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  return;
}

// GetNextPlayerID @ 147c57a70

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall AGameSession::GetNextPlayerID(AGameSession *this)

{
  int iVar1;
  
  iVar1 = NextPlayerID;
  if (0x7ffffffd < NextPlayerID) {
    if (2 < (byte)LogGameSession._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    }
    iVar1 = 0x100;
  }
  NextPlayerID = iVar1 + 1;
  return iVar1;
}

// GetPrivateStaticClass @ 147c59f50

UClass * __cdecl AGameSession::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameSession.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameSession",
               &Z_Registration_Info_UClass_AGameSession.InnerSingleton,
               StaticRegisterNativesAGameSession,0x2e8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<AGameSession>,
               InternalVTableHelperCtorCaller<AGameSession>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameSession.InnerSingleton;
}

// GetSessionJoinability @ 147c5ac00

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
AGameSession::GetSessionJoinability(AGameSession *this,FName param_1,FJoinabilitySettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorld *pUVar4;
  UOnlineEngineInterface *pUVar5;
  
  pUVar4 = AActor::GetWorld((AActor *)this);
  if (pUVar4 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameSession.cpp"
                       ,0x1b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  param_2->MaxPlayers = this->MaxPlayers;
  param_2->MaxPartySize = this->MaxPartySize;
  pUVar5 = UOnlineEngineInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x000147c5ac91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)pUVar5 + 0x340))(pUVar5,pUVar4,param_1,param_2);
  return (bool)uVar3;
}

// GetVelocity @ 147c5cfd0

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
AGameSession::GetVelocity(AGameSession *this,TVector<double> *__return_storage_ptr__)

{
  AActor::GetVelocity((AActor *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleMatchHasEnded @ 147c60de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameSession::HandleMatchHasEnded(AGameSession *this)

{
  code *pcVar1;
  UEngine *pUVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  wchar_t *pwVar8;
  FOutputDeviceRedirector *pFVar9;
  UWorld *pUVar10;
  UOnlineEngineInterface *pUVar11;
  APlayerController *this_00;
  undefined8 *puVar12;
  ulong64 uVar13;
  AGameSession *local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pwVar8 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar8,L"MatchAutoStatCapture");
  if (bVar5) {
    if (4 < (byte)LogGameSession._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    }
    pUVar2 = GEngine;
    pcVar1 = *(code **)(GEngine->_padding_ + 8);
    pFVar9 = GetGlobalLogSingleton();
    pUVar10 = AActor::GetWorld((AActor *)this);
    (*pcVar1)(&pUVar2->_padding_,pUVar10,L"stat stopfile",pFVar9);
  }
  pUVar10 = AActor::GetWorld((AActor *)this);
  pUVar11 = UOnlineEngineInterface::Get();
  cVar6 = (**(code **)(*(longlong *)pUVar11 + 0x338))(pUVar11,pUVar10,this->SessionName);
  if (cVar6 != '\0') {
    UWorld::GetPlayerControllerIterator(pUVar10,&local_78);
    for (; iVar4 = local_78.Index, pTVar3 = local_78.Container, -1 < local_78.Index;
        local_78.Index = local_78.Index + 1) {
      if ((local_78.Container)->ArrayNum <= local_78.Index) break;
      uVar7 = 0;
      if (local_78.Index < (local_78.Container)->ArrayNum) {
        uVar7 = (uint)~local_78.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if (this_00 != (APlayerController *)0x0) {
        cVar6 = (**(code **)(this_00->_padding_ + 0x7f0))(this_00);
        if (cVar6 == '\0') {
          APlayerController::ClientEndOnlineSession(this_00);
        }
      }
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar13;
      *puVar12 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameSession____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar12[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res8);
      puVar12[4] = _vcall__2136__flat______;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pUVar11 = UOnlineEngineInterface::Get();
    (**(code **)(*(longlong *)pUVar11 + 0x330))(pUVar11,pUVar10,this->SessionName,&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return;
}

// HandleMatchHasStarted @ 147c610c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameSession::HandleMatchHasStarted(AGameSession *this)

{
  code *pcVar1;
  UEngine *pUVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UWorld *pUVar8;
  UOnlineEngineInterface *pUVar9;
  APlayerController *this_00;
  undefined8 *puVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  FOutputDeviceRedirector *pFVar13;
  AGameSession *local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar8 = AActor::GetWorld((AActor *)this);
  pUVar9 = UOnlineEngineInterface::Get();
  cVar5 = (**(code **)(*(longlong *)pUVar9 + 0x338))(pUVar9,pUVar8,this->SessionName);
  if (cVar5 != '\0') {
    UWorld::GetPlayerControllerIterator(pUVar8,&local_78);
    for (; iVar4 = local_78.Index, pTVar3 = local_78.Container, -1 < local_78.Index;
        local_78.Index = local_78.Index + 1) {
      if ((local_78.Container)->ArrayNum <= local_78.Index) break;
      uVar7 = 0;
      if (local_78.Index < (local_78.Container)->ArrayNum) {
        uVar7 = (uint)~local_78.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if (this_00 != (APlayerController *)0x0) {
        cVar5 = (**(code **)(this_00->_padding_ + 0x7f0))(this_00);
        if (cVar5 == '\0') {
          APlayerController::ClientStartOnlineSession(this_00);
        }
      }
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameSession____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
      puVar10[4] = _vcall__2128__flat______;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pUVar9 = UOnlineEngineInterface::Get();
    (**(code **)(*(longlong *)pUVar9 + 0x328))(pUVar9,pUVar8,this->SessionName,&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  pwVar12 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar12,L"MatchAutoStatCapture");
  if (bVar6) {
    if (4 < (byte)LogGameSession._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    }
    pUVar2 = GEngine;
    pcVar1 = *(code **)(GEngine->_padding_ + 8);
    pFVar13 = GetGlobalLogSingleton();
    pUVar8 = AActor::GetWorld((AActor *)this);
    (*pcVar1)(&pUVar2->_padding_,pUVar8,L"stat startfile",pFVar13);
  }
  return;
}

// HandleMatchIsWaitingToStart @ 147c613d0

void __thiscall AGameSession::HandleMatchIsWaitingToStart(AGameSession *this)

{
  return;
}

// HandleStartMatchRequest @ 147c63440

bool __thiscall AGameSession::HandleStartMatchRequest(AGameSession *this)

{
  return false;
}

// InitOptions @ 147c65660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameSession::InitOptions(AGameSession *this,FString *param_1)

{
  int *piVar1;
  TObjectPtr<UObject> *pTVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  UWorld *pUVar10;
  FString *pFVar11;
  UClass *pUVar12;
  ForAnyElementType FVar13;
  AGameModeBase *pAVar14;
  FName local_res18;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar10 = AActor::GetWorld((AActor *)this);
  if (pUVar10 == (UWorld *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameSession.cpp"
                       ,0x99,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pAVar14 = (AGameModeBase *)0x0;
  }
  else {
    pAVar14 = (pUVar10->AuthorityGameMode).field0_0x0.DebugPtr;
  }
  ::FString::FString(&local_a8,L"MaxPlayers");
  pFVar11 = ::FString::FString(&local_68,param_1);
  bVar8 = UGameplayStatics::HasOption(pFVar11,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    piVar1 = &this->MaxPlayers;
    iVar9 = *piVar1;
    ::FString::FString(&local_98,L"MaxPlayers");
    pFVar11 = ::FString::FString(&local_58,param_1);
    UGameplayStatics::ParseOption(&local_d8,pFVar11,&local_98);
    if (1 < local_d8.Data.ArrayNum) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar13.Data = local_d8.Data.AllocatorInstance.Data;
      }
      iVar9 = _wtoi((wchar_t *)FVar13.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    *piVar1 = iVar9;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((TOptional<int> *)piVar1 != &this->MaxPlayersOptionOverride) {
      (this->MaxPlayersOptionOverride).TypedValue = *piVar1;
      (this->MaxPlayersOptionOverride).bIsSet = true;
    }
  }
  ::FString::FString(&local_88,L"MaxSpectators");
  pFVar11 = ::FString::FString(&local_48,param_1);
  bVar8 = UGameplayStatics::HasOption(pFVar11,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    piVar1 = &this->MaxSpectators;
    iVar9 = *piVar1;
    ::FString::FString(&local_78,L"MaxSpectators");
    pFVar11 = ::FString::FString(&local_38,param_1);
    UGameplayStatics::ParseOption(&local_c8,pFVar11,&local_78);
    if (1 < local_c8.Data.ArrayNum) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar13.Data = local_c8.Data.AllocatorInstance.Data;
      }
      iVar9 = _wtoi((wchar_t *)FVar13.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    *piVar1 = iVar9;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((TOptional<int> *)piVar1 != &this->MaxSpectatorsOptionOverride) {
      (this->MaxSpectatorsOptionOverride).TypedValue = *piVar1;
      (this->MaxSpectatorsOptionOverride).bIsSet = true;
    }
  }
  if (pAVar14 != (AGameModeBase *)0x0) {
    pUVar3 = (pAVar14->PlayerStateClass).Class.field0_0x0.DebugPtr;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar12 = Z_Construct_UClass_APlayerState_NoRegister(), pUVar12 != (UClass *)0x0)) {
      iVar9 = (int)pUVar12->_padding_;
      if (((int)pUVar3->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) &&
         (pUVar3 = (pAVar14->PlayerStateClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0))
      {
        pTVar2 = &pUVar3->ClassDefaultObject;
        if ((pTVar2->field0_0x0).DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar3);
        }
        pUVar4 = (pTVar2->field0_0x0).DebugPtr;
        pUVar12 = Z_Construct_UClass_APlayerState_NoRegister();
        lVar5 = *(longlong *)&pUVar4->field_0x10;
        iVar9 = (int)pUVar12->_padding_;
        if (((*(int *)(lVar5 + 0x38) < iVar9) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 8) !=
             &pUVar12->_padding_)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1469,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pTVar2->field0_0x0).DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar3);
        }
        pUVar4 = (pTVar2->field0_0x0).DebugPtr;
        if (pUVar4 != (UObject *)0x0) {
          uVar7 = *(undefined4 *)&pUVar4[0x14].field_0x4;
          (this->SessionName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar4[0x14].field_0x0
          ;
          (this->SessionName).Number = uVar7;
          return;
        }
      }
    }
    if (1 < (byte)LogGameSession._0_1_) {
      local_res18 = (FName)pAVar14->_padding_;
      ::FName::ToString(&local_res18,&local_b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// KickPlayer @ 147c6b3d0

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
AGameSession::KickPlayer(AGameSession *this,APlayerController *param_1,FText *param_2)

{
  UObject *pUVar1;
  AActor *this_00;
  bool bVar2;
  UClass *pUVar3;
  
  if ((param_1 == (APlayerController *)0x0) ||
     ((param_1->Player).field0_0x0.DebugPtr == (UPlayer *)0x0)) {
    return false;
  }
  pUVar3 = Z_Construct_UClass_UNetConnection_NoRegister();
  bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_1->Player,pUVar3);
  if (!bVar2) {
    return false;
  }
  if ((param_1->Player).field0_0x0.DebugPtr == (UPlayer *)0x0) {
    return false;
  }
  pUVar1 = (UObject *)param_1->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_147c6b474;
  }
  else {
    if (pUVar1 == (UObject *)0x0) goto LAB_147c6b474;
    UE::GC::MarkAsReachable(pUVar1);
  }
  this_00 = (AActor *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  AActor::Destroy(this_00,false,true);
LAB_147c6b474:
  APlayerController::ClientWasKicked(param_1,param_2);
  AActor::Destroy((AActor *)param_1,false,true);
  return true;
}

// NotifyLogout @ 147c6ff30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameSession::NotifyLogout(AGameSession *this,APlayerController *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c6ff33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7a8))();
  return;
}

// NotifyLogout @ 147c6ff40

void __thiscall
AGameSession::NotifyLogout(AGameSession *this,FName param_1,FUniqueNetIdRepl *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147c6ff43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7b0))();
  return;
}

// OnAutoLoginComplete @ 147c70190

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
AGameSession::OnAutoLoginComplete(AGameSession *this,int param_1,bool param_2,FString *param_3)

{
  char cVar1;
  UWorld *pUVar2;
  UOnlineEngineInterface *pUVar3;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  pUVar3 = UOnlineEngineInterface::Get();
  cVar1 = (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,pUVar2,param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c701e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x7f8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c701f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x800))(this);
  return;
}

// OnEndSessionComplete @ 147c70210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AGameSession::OnEndSessionComplete(AGameSession *this,FName param_1,bool param_2)

{
  FName local_res10 [3];
  FString local_18;
  
  if (5 < (byte)LogGameSession._0_1_) {
    local_res10[0] = param_1;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnStartSessionComplete @ 147c70650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AGameSession::OnStartSessionComplete(AGameSession *this,FName param_1,bool param_2)

{
  FName local_res10 [3];
  FString local_18;
  
  if (5 < (byte)LogGameSession._0_1_) {
    local_res10[0] = param_1;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostLogin @ 147c72550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameSession::PostLogin(AGameSession *this,APlayerController *param_1)

{
  return;
}

// PostReloadConfig @ 147c72560

void __thiscall AGameSession::PostReloadConfig(AGameSession *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    if ((this->MaxPlayersOptionOverride).bIsSet != false) {
      this->MaxPlayers = (this->MaxPlayersOptionOverride).TypedValue;
    }
    if ((this->MaxSpectatorsOptionOverride).bIsSet != false) {
      this->MaxSpectators = (this->MaxSpectatorsOptionOverride).TypedValue;
    }
  }
  return;
}

// PostSeamlessTravel @ 147c727d0

void __thiscall AGameSession::PostSeamlessTravel(AGameSession *this)

{
  return;
}

// ProcessAutoLogin @ 147c748e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameSession::ProcessAutoLogin(AGameSession *this)

{
  char cVar1;
  UWorld *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UOnlineEngineInterface *pUVar5;
  AGameSession *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameSession____A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (AGameSession *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (AGameSession *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = _vcall__1904__flat______;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pUVar5 = UOnlineEngineInterface::Get();
  cVar1 = (**(code **)(*(longlong *)pUVar5 + 0x318))(pUVar5,pUVar2,0,&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return cVar1 != '\0';
}

// RegisterPlayer @ 147c79b10

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
AGameSession::RegisterPlayer
          (AGameSession *this,APlayerController *param_1,FUniqueNetIdRepl *param_2,bool param_3)

{
  APlayerState *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 != (APlayerController *)0x0) {
    if (param_1->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewPlayer->PlayerState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameSession.cpp"
                         ,0x113,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (APlayerState *)param_1->_padding_;
    if (0x7ffffffd < NextPlayerID) {
      if (2 < (byte)LogGameSession._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
      }
      NextPlayerID = 0x100;
    }
    iVar2 = NextPlayerID;
    NextPlayerID = NextPlayerID + 1;
    APlayerState::SetPlayerId(this_00,iVar2);
    APlayerState::SetUniqueId((APlayerState *)param_1->_padding_,param_2);
    (**(code **)(*(longlong *)param_1->_padding_ + 2000))((longlong *)param_1->_padding_,param_3);
  }
  return;
}

// RegisterServer @ 147c79bf0

void __thiscall AGameSession::RegisterServer(AGameSession *this)

{
  return;
}

// RegisterServerFailed @ 147c79c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AGameSession::RegisterServerFailed(AGameSession *this)

{
  if (2 < (byte)LogGameSession._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    return;
  }
  return;
}

// RemoveAdmin @ 147c7b940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameSession::RemoveAdmin(AGameSession *this,APlayerController *param_1)

{
  return;
}

// RequiresPushToTalk @ 147c7d850

bool __thiscall AGameSession::RequiresPushToTalk(AGameSession *this)

{
  return this->bRequiresPushToTalk;
}

// Restart @ 147c7e4e0

void __thiscall AGameSession::Restart(AGameSession *this)

{
  return;
}

// ReturnToMainMenuHost @ 147c7eb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameSession::ReturnToMainMenuHost(AGameSession *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FText *pFVar7;
  UWorld *this_00;
  APlayerController *pAVar8;
  uint uVar9;
  undefined1 local_res10 [24];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_38;
  ITextData *local_28;
  uint local_20;
  FText local_18;
  
  FText::AsLocalizable_Advanced_LocText
            (&local_18,L"NetworkErrors",L"HostHasLeft",L"Host has left the game.");
  pFVar7 = FText::GetEmpty();
  local_28 = (pFVar7->TextData).Reference;
  if (local_28 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28 + 8))(local_28,local_res10);
  }
  local_20 = pFVar7->Flags;
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_38);
  for (; iVar3 = local_38.Index, pTVar2 = local_38.Container, -1 < local_38.Index;
      local_38.Index = local_38.Index + 1) {
    if ((local_38.Container)->ArrayNum <= local_38.Index) break;
    uVar9 = 0;
    if (local_38.Index < (local_38.Container)->ArrayNum) {
      uVar9 = (uint)~local_38.Index >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAVar8 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (pAVar8 != (APlayerController *)0x0) {
      if ((pAVar8->_padding_ & 2) != 0) {
        cVar5 = (**(code **)(pAVar8->_padding_ + 0x7f0))(pAVar8);
        if (cVar5 != '\0') goto LAB_147c7ec4e;
      }
      bVar4 = APlayerController::IsPrimaryPlayer(pAVar8);
      if (bVar4) {
        (**(code **)(pAVar8->_padding_ + 0xbc8))(pAVar8,&local_18);
      }
    }
LAB_147c7ec4e:
  }
  uVar9 = 0;
  do {
    pTVar2 = local_38.Container;
    local_38.Index = uVar9;
    if ((int)uVar9 < 0) {
LAB_147c7ed1c:
      if (local_28 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28 + 0x10))();
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return;
    }
    if ((local_38.Container)->ArrayNum <= (int)uVar9) goto LAB_147c7ed1c;
    uVar6 = 0;
    if ((int)uVar9 < (local_38.Container)->ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAVar8 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8));
    if ((pAVar8 != (APlayerController *)0x0) && ((pAVar8->_padding_ & 2) != 0)) {
      cVar5 = (**(code **)(pAVar8->_padding_ + 0x7f0))(pAVar8);
      if (cVar5 != '\0') {
        bVar4 = APlayerController::IsPrimaryPlayer(pAVar8);
        if (bVar4) {
          (**(code **)(pAVar8->_padding_ + 0xbc8))(pAVar8,&local_28);
          goto LAB_147c7ed1c;
        }
      }
    }
    uVar9 = local_38.Index + 1;
  } while( true );
}

// StaticRegisterNativesAGameSession @ 147c87f80

void __cdecl AGameSession::StaticRegisterNativesAGameSession(void)

{
  return;
}

// TeleportTo @ 147c897d0

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
AGameSession::TeleportTo
          (AGameSession *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  
  bVar1 = AActor::TeleportTo((AActor *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// UnregisterPlayer @ 147c8df40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameSession::UnregisterPlayer(AGameSession *this,APlayerController *param_1)

{
  bool bVar1;
  ENetMode EVar2;
  
  EVar2 = AActor::InternalGetNetMode((AActor *)this);
  if (((EVar2 != NM_Standalone) && (param_1 != (APlayerController *)0x0)) &&
     (param_1->_padding_ != 0)) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(param_1->_padding_ + 0x2d0));
    if (bVar1) {
      (**(code **)(this->_padding_ + 0x7b0))
                (this,*(undefined8 *)(param_1->_padding_ + 800),param_1->_padding_ + 0x2d0);
    }
  }
  return;
}

// UnregisterPlayer @ 147c8dfb0

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
AGameSession::UnregisterPlayer(AGameSession *this,FName param_1,FUniqueNetIdRepl *param_2)

{
  bool bVar1;
  char cVar2;
  ENetMode EVar3;
  UWorld *pUVar4;
  UOnlineEngineInterface *pUVar5;
  
  pUVar4 = AActor::GetWorld((AActor *)this);
  EVar3 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar3 != NM_Standalone) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
    if (bVar1) {
      pUVar5 = UOnlineEngineInterface::Get();
      cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,pUVar4,param_1);
      if (cVar2 != '\0') {
        pUVar5 = UOnlineEngineInterface::Get();
        (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,pUVar4,param_1,param_2);
      }
    }
  }
  return;
}

// UnregisterPlayers @ 147c8e050

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
AGameSession::UnregisterPlayers
          (AGameSession *this,FName param_1,
          TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  char cVar2;
  ENetMode EVar3;
  int iVar4;
  UWorld *pUVar5;
  UOnlineEngineInterface *pUVar6;
  FUniqueNetIdWrapper *pFVar7;
  FUniqueNetIdWrapper *pFVar8;
  undefined1 local_res20 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pUVar5 = AActor::GetWorld((AActor *)this);
  EVar3 = AActor::InternalGetNetMode((AActor *)this);
  if ((EVar3 != NM_Standalone) && (0 < param_2->ArrayNum)) {
    pUVar6 = UOnlineEngineInterface::Get();
    cVar2 = (**(code **)(*(longlong *)pUVar6 + 0x338))(pUVar6,pUVar5,param_1);
    if (cVar2 != '\0') {
      pFVar8 = (FUniqueNetIdWrapper *)(param_2->AllocatorInstance).Data;
      local_20._0_4_ = 0;
      iVar1 = param_2->ArrayNum;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = 0;
      pFVar7 = (FUniqueNetIdWrapper *)((longlong)pFVar8 + (longlong)iVar1 * 0x30);
      while( true ) {
        iVar4 = (int)local_20;
        if (param_2->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FUniqueNetIdRepl_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
          iVar4 = (int)local_20;
        }
        if (pFVar8 == pFVar7) break;
        if (iVar4 == local_20._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_28,(int *)((longlong)&local_20 + 4));
        }
        local_20 = CONCAT44(local_20._4_4_,iVar4 + 1);
        FUniqueNetIdWrapper::FUniqueNetIdWrapper
                  ((FUniqueNetIdWrapper *)(local_28.Data + (longlong)iVar4 * 0x20),pFVar8);
        pFVar8 = (FUniqueNetIdWrapper *)&pFVar8[1].Variant._padding_;
      }
      pUVar6 = UOnlineEngineInterface::Get();
      (**(code **)(*(longlong *)pUVar6 + 0x360))(pUVar6,pUVar5,param_1,&local_28);
      DestructItems<FUniqueNetIdWrapper,int>((FUniqueNetIdWrapper *)local_28.Data,(int)local_20);
      if ((FUniqueNetIdWrapper *)local_28.Data != (FUniqueNetIdWrapper *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
  }
  return;
}

// UpdateSessionJoinability @ 147c8ef30

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
AGameSession::UpdateSessionJoinability
          (AGameSession *this,FName param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  code *pcVar1;
  ENetMode EVar2;
  UOnlineEngineInterface *pUVar3;
  UWorld *pUVar4;
  
  EVar2 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar2 != NM_Standalone) {
    pUVar3 = UOnlineEngineInterface::Get();
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x348);
    pUVar4 = AActor::GetWorld((AActor *)this);
    (*pcVar1)(pUVar3,pUVar4,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

