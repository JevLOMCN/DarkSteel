// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 30

// StaticClass @ 146d39f80

UClass * __cdecl AGameplayDebuggerPlayerManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerPlayerManager",
               &Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton,
               StaticRegisterNativesAGameplayDebuggerPlayerManager,0x2f0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayDebuggerPlayerManager>,
               InternalVTableHelperCtorCaller<AGameplayDebuggerPlayerManager>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton;
}

// AGameplayDebuggerPlayerManager @ 146d3f6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayDebuggerPlayerManager * __thiscall
AGameplayDebuggerPlayerManager::AGameplayDebuggerPlayerManager
          (AGameplayDebuggerPlayerManager *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->PlayerData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerData).ArrayNum = 0;
  (this->PlayerData).ArrayMax = 0;
  (this->PendingRegistrations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRegistrations).ArrayNum = 0;
  (this->PendingRegistrations).ArrayMax = 0;
  return this;
}

// AGameplayDebuggerPlayerManager @ 146d3f760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayDebuggerPlayerManager * __thiscall
AGameplayDebuggerPlayerManager::AGameplayDebuggerPlayerManager
          (AGameplayDebuggerPlayerManager *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  
  AActor::AActor((AActor *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->bIsLocal = 0;
  this->bInitialized = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->PlayerData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerData).ArrayNum = 0;
  (this->PlayerData).ArrayMax = 0;
  (this->PendingRegistrations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRegistrations).ArrayNum = 0;
  (this->PendingRegistrations).ArrayMax = 0;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f000000;
  this->bEditorTimeTick = '\0';
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xfb | 0xb;
  return this;
}

// ~AGameplayDebuggerPlayerManager @ 146d41030

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
AGameplayDebuggerPlayerManager::~AGameplayDebuggerPlayerManager
          (AGameplayDebuggerPlayerManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->PendingRegistrations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 146d43270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameplayDebuggerPlayerManager::BeginDestroy(AGameplayDebuggerPlayerManager *this)

{
  AActor::BeginDestroy((AActor *)this);
  FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,Never);
  return;
}

// BeginPlay @ 146d433d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameplayDebuggerPlayerManager::BeginPlay(AGameplayDebuggerPlayerManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ENetMode EVar4;
  ENetMode EVar5;
  uint uVar6;
  UWorld *this_00;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  AActor::BeginPlay((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  uVar8 = 0;
  if ((this_00 == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerPlayerManager.cpp"
                         ,0x49,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar4 = UWorld::InternalGetNetMode(this_00);
  if (((this_00 == (UWorld *)0x0) ||
      (EVar5 = UWorld::InternalGetNetMode(this_00), EVar5 != NM_Client)) ||
     (bVar3 = UWorld::IsPlayingReplay(this_00), uVar7 = uVar8, bVar3)) {
    uVar7 = 1;
  }
  this->bHasAuthority = 0;
  uVar6 = 0;
  if (EVar4 != NM_DedicatedServer) {
    uVar6 = 2;
  }
  *(uint *)&this->field_0x2ec = (uint)uVar7 | *(uint *)&this->field_0x2ec & 0xfffffffd | uVar6 | 4;
  if ((uint)uVar7 != 0) {
    UpdateAuthReplicators(this);
    (**(code **)(this->_padding_ + 0x4a8))(this,1);
  }
  uVar7 = uVar8;
  if (0 < (this->PendingRegistrations).ArrayNum) {
    do {
      uVar9 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar9 < (this->PendingRegistrations).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RegisterReplicator(this,*(AGameplayDebuggerCategoryReplicator **)
                               ((this->PendingRegistrations).AllocatorInstance.Data + uVar7));
      uVar8 = (ulonglong)(uVar9 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar9 + 1) < (this->PendingRegistrations).ArrayNum);
  }
  piVar1 = &(this->PendingRegistrations).ArrayMax;
  (this->PendingRegistrations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingRegistrations).AllocatorInstance,0,piVar1);
  }
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<AGameplayDebuggerPlayerManager>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &FNetworkReplayDelegates::OnScrubTeardown,
             (AGameplayDebuggerPlayerManager *)&stack0x00000008,(pmf_40f2bc4b *)this);
  TMulticastDelegateRegistration<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
  ::AddUObject<AGameplayDebuggerPlayerManager>
            ((TMulticastDelegateRegistration<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
              *)&FGameModeEvents::GameModeLogoutEvent,
             (AGameplayDebuggerPlayerManager *)&stack0x00000010,(pmf_0438f734 *)this);
  return;
}

// EndPlay @ 146d4b400

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
AGameplayDebuggerPlayerManager::EndPlay(AGameplayDebuggerPlayerManager *this,Type param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  AActor::EndPlay((AActor *)this,param_1);
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < (this->PlayerData).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->PlayerData).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->PlayerData).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + uVar8) != 0) &&
         ((*(uint *)(*(longlong *)(pFVar2 + uVar8) + 8) >> 0x1e & 1) == 0)) {
        uVar5 = *(uint *)(*(longlong *)(pFVar2 + uVar8) + 0x78);
        if (((uVar5 & 8) != 0) && (GAreScreenMessagesEnabled == false)) {
          GAreScreenMessagesEnabled = (bool)((byte)(uVar5 >> 6) & 1);
        }
        puVar1 = (uint *)(*(longlong *)(pFVar2 + uVar8) + 0x78);
        *puVar1 = *puVar1 & 0xfffffffd;
        *(undefined8 *)(pFVar2 + uVar8) = 0;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x18;
    } while ((int)(uVar6 + 1) < (this->PlayerData).ArrayNum);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FNetworkReplayDelegates::OnScrubTeardown,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FGameModeEvents::GameModeLogoutEvent,this);
  return;
}

// GetCurrent @ 146d4c140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerPlayerManager * __cdecl AGameplayDebuggerPlayerManager::GetCurrent(UWorld *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  FGameplayDebuggerModule *this_00;
  AGameplayDebuggerPlayerManager *pAVar3;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,"GameplayDebugger");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  this_00 = (FGameplayDebuggerModule *)FModuleManager::LoadModuleChecked(this,FVar1);
  pAVar3 = FGameplayDebuggerModule::GetPlayerManager(this_00,param_1);
  return pAVar3;
}

// GetInputComponent @ 146d4c7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInputComponent * __thiscall
AGameplayDebuggerPlayerManager::GetInputComponent
          (AGameplayDebuggerPlayerManager *this,APlayerController *param_1)

{
  UInputComponent *pUVar1;
  FGameplayDebuggerPlayerData *pFVar2;
  
  pFVar2 = GetPlayerData(this,param_1);
  if (pFVar2 != (FGameplayDebuggerPlayerData *)0x0) {
    pUVar1 = (pFVar2->InputComponent).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UInputComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UInputComponent *)0x0;
}

// GetLocalController @ 146d4cf90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameplayDebuggerLocalController * __thiscall
AGameplayDebuggerPlayerManager::GetLocalController
          (AGameplayDebuggerPlayerManager *this,APlayerController *param_1)

{
  UGameplayDebuggerLocalController *pUVar1;
  FGameplayDebuggerPlayerData *pFVar2;
  
  pFVar2 = GetPlayerData(this,param_1);
  if (pFVar2 != (FGameplayDebuggerPlayerData *)0x0) {
    pUVar1 = (pFVar2->Controller).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UGameplayDebuggerLocalController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UGameplayDebuggerLocalController *)0x0;
}

// GetPlayerData @ 146d4d230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGameplayDebuggerPlayerData * __thiscall
AGameplayDebuggerPlayerManager::GetPlayerData
          (AGameplayDebuggerPlayerManager *this,APlayerController *param_1)

{
  AGameplayDebuggerCategoryReplicator *pAVar1;
  APlayerController *pAVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGameplayDebuggerPlayerData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (0 < (this->PlayerData).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->PlayerData).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FGameplayDebuggerPlayerData *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = (FGameplayDebuggerPlayerData *)((this->PlayerData).AllocatorInstance.Data + lVar7);
      pAVar1 = (pFVar6->Replicator).field0_0x0.DebugPtr;
      if (pAVar1 != (AGameplayDebuggerCategoryReplicator *)0x0) {
        pAVar2 = (pAVar1->OwnerPC).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pAVar2 == (APlayerController *)0x0) goto LAB_146d4d318;
LAB_146d4d2dc:
          bVar4 = pAVar2 == param_1;
        }
        else {
          if (pAVar2 != (APlayerController *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pAVar2);
            goto LAB_146d4d2dc;
          }
LAB_146d4d318:
          bVar4 = param_1 == (APlayerController *)0x0;
        }
        if (bVar4) {
          return pFVar6;
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar8 < (this->PlayerData).ArrayNum);
  }
  return (FGameplayDebuggerPlayerData *)0x0;
}

// GetPrivateStaticClass @ 146d4d7c0

UClass * __cdecl AGameplayDebuggerPlayerManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerPlayerManager",
               &Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton,
               StaticRegisterNativesAGameplayDebuggerPlayerManager,0x2f0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayDebuggerPlayerManager>,
               InternalVTableHelperCtorCaller<AGameplayDebuggerPlayerManager>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton;
}

// GetReplicator @ 146d4db60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerCategoryReplicator * __thiscall
AGameplayDebuggerPlayerManager::GetReplicator
          (AGameplayDebuggerPlayerManager *this,APlayerController *param_1)

{
  AGameplayDebuggerCategoryReplicator *pAVar1;
  FGameplayDebuggerPlayerData *pFVar2;
  
  pFVar2 = GetPlayerData(this,param_1);
  if (pFVar2 != (FGameplayDebuggerPlayerData *)0x0) {
    pAVar1 = (pFVar2->Replicator).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar1 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    return pAVar1;
  }
  return (AGameplayDebuggerCategoryReplicator *)0x0;
}

// GetStatId @ 146d4dbf0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall AGameplayDebuggerPlayerManager::GetStatId(AGameplayDebuggerPlayerManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_AGameplayDebuggerPlayerManager::GetStatId(void)const_::_2_::FStat_AGameplayDebuggerPlayerManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_AGameplayDebuggerPlayerManager ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_AGameplayDebuggerPlayerManager::GetStatId(void)const_::_2_::FStat_AGameplayDebuggerPlayerManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"AGameplayDebuggerPlayerManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_AGameplayDebuggerPlayerManager,*pFVar1,
                   L"AGameplayDebuggerPlayerManager","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_AGameplayDebuggerPlayerManager;
  if (StatPtr_AGameplayDebuggerPlayerManager ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_AGameplayDebuggerPlayerManager::GetStatId(void)const_::_2_::FStat_AGameplayDebuggerPlayerManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"AGameplayDebuggerPlayerManager");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_AGameplayDebuggerPlayerManager::GetStatId(void)const_::_2_::FStat_AGameplayDebuggerPlayerManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_AGameplayDebuggerPlayerManager,
                         *pFVar1,L"AGameplayDebuggerPlayerManager","STATGROUP_Tickables",
                         "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 146d4dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
AGameplayDebuggerPlayerManager::GetTickableGameObjectWorld(AGameplayDebuggerPlayerManager *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)&this[-1]._padding_);
  return pUVar1;
}

// GetTickableTickType @ 146d4dd70

ETickableTickType __thiscall
AGameplayDebuggerPlayerManager::GetTickableTickType(AGameplayDebuggerPlayerManager *this)

{
  return Never;
}

// GetViewPoint @ 146d4ded0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AGameplayDebuggerPlayerManager::GetViewPoint
          (APlayerController *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_68;
  double local_58;
  double dStack_50;
  double local_48;
  TRotator<double> local_40;
  TVector<double> local_28;
  
  pUVar6 = AActor::GetWorld((AActor *)param_1);
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_40.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_40.Pitch._0_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
  local_40.Pitch._4_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
  local_40.Yaw._0_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
  local_40.Yaw._4_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
  if ((param_1->Player).field0_0x0.DebugPtr != (UPlayer *)0x0) {
    (**(code **)(param_1->_padding_ + 0x840))(param_1,&local_58,&local_40);
LAB_146d4e0e4:
    (param_2->field0_0x0)._s_0.X = local_58;
    (param_2->field0_0x0)._s_0.Y = dStack_50;
    (param_2->field0_0x0)._s_0.Z = local_48;
    pTVar8 = UE::Math::TRotator<double>::Vector(&local_40,&local_28);
    dVar3 = (pTVar8->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar3;
    (param_3->field0_0x0)._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    return;
  }
  UEngine::GetLocalPlayerIterator(GEngine,&local_68,pUVar6);
  for (; (pTVar4 = local_68.Container, lVar10 = (longlong)local_68.Index, -1 < local_68.Index &&
         (local_68.Index < (local_68.Container)->ArrayNum)); local_68.Index = local_68.Index + 1) {
    uVar9 = 0;
    if (local_68.Index < (local_68.Container)->ArrayNum) {
      uVar9 = (uint)~local_68.Index >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((pTVar4->AllocatorInstance).Data + lVar10 * 8) != 0) break;
  }
  do {
    pTVar4 = local_68.Container;
    lVar10 = (longlong)local_68.Index;
    if ((local_68.Index < 0) || ((local_68.Container)->ArrayNum <= local_68.Index))
    goto LAB_146d4e0e4;
    uVar9 = 0;
    if (local_68.Index < (local_68.Container)->ArrayNum) {
      uVar9 = (uint)~local_68.Index >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar10 = *(longlong *)((pTVar4->AllocatorInstance).Data + lVar10 * 8);
    if (*(longlong *)(lVar10 + 0x30) != 0) {
      pUVar7 = Z_Construct_UClass_ADebugCameraController_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar10 + 0x30),pUVar7);
      if ((bVar5) && (plVar1 = *(longlong **)(lVar10 + 0x30), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x840))(plVar1,&local_58,&local_40);
        goto LAB_146d4e0e4;
      }
    }
    do {
      pTVar4 = local_68.Container;
      uVar9 = local_68.Index + 1;
      local_68.Index = uVar9;
      if (((int)uVar9 < 0) || ((local_68.Container)->ArrayNum <= (int)uVar9)) break;
      if (((int)uVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    } while (*(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar9 * 8) == 0);
  } while( true );
}

// Init @ 146d4e780

void __thiscall AGameplayDebuggerPlayerManager::Init(AGameplayDebuggerPlayerManager *this)

{
  return;
}

// IsTickable @ 146d4f780

bool __thiscall AGameplayDebuggerPlayerManager::IsTickable(AGameplayDebuggerPlayerManager *this)

{
  return (bool)((byte)this->_padding_ & 1);
}

// IsTickableInEditor @ 146d4f790

bool __thiscall
AGameplayDebuggerPlayerManager::IsTickableInEditor(AGameplayDebuggerPlayerManager *this)

{
  return true;
}

// OnGameModeLogout @ 146d55f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AGameplayDebuggerPlayerManager::OnGameModeLogout
          (AGameplayDebuggerPlayerManager *this,AGameModeBase *param_1,AController *param_2)

{
  uint *puVar1;
  AController *pAVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWorld *pUVar6;
  UWorld *pUVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  if (param_1 != (AGameModeBase *)0x0) {
    pUVar6 = AActor::GetWorld((AActor *)param_1);
    pUVar7 = AActor::GetWorld((AActor *)this);
    if (pUVar6 == pUVar7) {
      pUVar6 = AActor::GetWorld((AActor *)this);
      uVar9 = (this->PlayerData).ArrayNum - 1;
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 * 0x18;
        do {
          uVar5 = 0;
          if ((int)uVar9 < (this->PlayerData).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = (this->PlayerData).AllocatorInstance.Data + lVar10;
          if ((*(longlong *)(pFVar8 + 0x10) != 0) &&
             ((*(uint *)(*(longlong *)(pFVar8 + 0x10) + 8) >> 0x1e & 1) == 0)) {
            pAVar2 = *(AController **)(*(longlong *)(pFVar8 + 0x10) + 0x2c0);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pAVar2 == (AController *)0x0) goto LAB_146d56017;
LAB_146d55ff9:
              bVar4 = pAVar2 == param_2;
            }
            else {
              if (pAVar2 != (AController *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pAVar2);
                goto LAB_146d55ff9;
              }
LAB_146d56017:
              bVar4 = param_2 == (AController *)0x0;
            }
            if (bVar4) {
              if ((*(longlong *)(pFVar8 + 0x10) != 0) &&
                 ((*(uint *)(*(longlong *)(pFVar8 + 0x10) + 8) >> 0x1e & 1) == 0)) {
                UWorld::DestroyActor(pUVar6,*(AActor **)(pFVar8 + 0x10),false,true);
              }
              if ((*(longlong *)pFVar8 != 0) &&
                 ((*(uint *)(*(longlong *)pFVar8 + 8) >> 0x1e & 1) == 0)) {
                uVar5 = *(uint *)(*(longlong *)pFVar8 + 0x78);
                if (((uVar5 & 8) != 0) && (GAreScreenMessagesEnabled == false)) {
                  GAreScreenMessagesEnabled = (bool)((byte)(uVar5 >> 6) & 1);
                }
                puVar1 = (uint *)(*(longlong *)pFVar8 + 0x78);
                *puVar1 = *puVar1 & 0xfffffffd;
              }
              TArray<FGameplayDebuggerPlayerData,TSizedDefaultAllocator<32>_>::RemoveAt
                        (&this->PlayerData,uVar9,No);
              return;
            }
          }
          lVar10 = lVar10 + -0x18;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
    }
  }
  return;
}

// OnReplayScrubTeardown @ 146d566f0

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
AGameplayDebuggerPlayerManager::OnReplayScrubTeardown
          (AGameplayDebuggerPlayerManager *this,UWorld *param_1)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 == param_1) {
    UpdateAuthReplicators(this);
  }
  return;
}

// PostInitProperties @ 146d57c60

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
AGameplayDebuggerPlayerManager::PostInitProperties(AGameplayDebuggerPlayerManager *this)

{
  bool bVar1;
  FName *pFVar2;
  UInputComponent *this_00;
  FName local_res8;
  
  AActor::PostInitProperties((AActor *)this);
  if ((this->_padding_ & 0x10) == 0) {
    if (this->_padding_ == 0) {
      pFVar2 = ::FName::FName(&local_res8,L"GameplayDebug_Input");
      this_00 = NewObject<UInputComponent>
                          ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UInputComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      this->_padding_ = (longlong)this_00;
      UActorComponent::RegisterComponent((UActorComponent *)this_00);
    }
    bVar1 = UInputDelegateBinding::SupportsInputDelegate((UClass *)this->_padding_);
    if (bVar1) {
      UInputDelegateBinding::BindInputDelegates
                ((UClass *)this->_padding_,(UInputComponent *)this->_padding_,(UObject *)0x0);
      return;
    }
  }
  return;
}

// RefreshInputBindings @ 146d58d60

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
AGameplayDebuggerPlayerManager::RefreshInputBindings
          (AGameplayDebuggerPlayerManager *this,AGameplayDebuggerCategoryReplicator *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  uVar5 = 0;
  if (0 < (this->PlayerData).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->PlayerData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->PlayerData).AllocatorInstance.Data + lVar7;
      if (*(AGameplayDebuggerCategoryReplicator **)(pFVar6 + 0x10) ==
          (AGameplayDebuggerCategoryReplicator *)0x0) {
        bVar3 = param_1 == (AGameplayDebuggerCategoryReplicator *)0x0;
      }
      else {
        bVar3 = *(AGameplayDebuggerCategoryReplicator **)(pFVar6 + 0x10) == param_1;
      }
      if (bVar3) {
        (**(code **)(**(longlong **)(pFVar6 + 8) + 0x508))();
        UInputComponent::ClearBindingValues(*(UInputComponent **)(pFVar6 + 8));
        lVar1 = *(longlong *)(pFVar6 + 8);
        DestructItems<FInputKeyBinding,int>
                  (*(FInputKeyBinding **)(lVar1 + 0xc0),*(int *)(lVar1 + 200));
        *(undefined4 *)(lVar1 + 200) = 0;
        if (*(int *)(lVar1 + 0xcc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,0,(ForAnyElementType *)(lVar1 + 0xc0),0,(int *)(lVar1 + 0xcc));
        }
        UGameplayDebuggerLocalController::BindInput
                  (*(UGameplayDebuggerLocalController **)pFVar6,*(UInputComponent **)(pFVar6 + 8));
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar5 < (this->PlayerData).ArrayNum);
  }
  return;
}

// RegisterReplicator @ 146d592a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
AGameplayDebuggerPlayerManager::RegisterReplicator
          (AGameplayDebuggerPlayerManager *this,AGameplayDebuggerCategoryReplicator *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<AGameplayDebuggerCategoryReplicator>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGameplayDebuggerPlayerData,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  APlayerController *pAVar5;
  FName FVar6;
  code *pcVar7;
  AGameplayDebuggerCategoryReplicator *pAVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  UClass *pUVar12;
  UGameplayDebuggerLocalController *this_00;
  longlong *plVar13;
  APlayerController *pAVar14;
  undefined1 auStackY_138 [32];
  AGameplayDebuggerCategoryReplicator *local_e8;
  UGameplayDebuggerLocalController *local_e0;
  UInputComponent *pUStack_d8;
  AGameplayDebuggerCategoryReplicator *local_d0;
  FName local_c8;
  FName local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->bInitialized == 0) {
    pTVar2 = &this->PendingRegistrations;
    local_e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (param_1 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 <
         pFVar4 + (longlong)(this->PendingRegistrations).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->PendingRegistrations).ArrayNum;
    piVar1 = &(this->PendingRegistrations).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingRegistrations).ArrayNum = iVar10 + 1;
    *(AGameplayDebuggerCategoryReplicator **)
     ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_e8;
    pAVar8 = local_e8;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (param_1 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_d0 = param_1;
    if (this->bIsLocal == 0) {
      local_e0 = (UGameplayDebuggerLocalController *)0x0;
      pUStack_d8 = (UInputComponent *)0x0;
    }
    else {
      pAVar5 = (param_1->OwnerPC).field0_0x0.DebugPtr;
      if (pAVar5 == (APlayerController *)0x0) {
        pUStack_d8 = (UInputComponent *)this->_padding_;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar5);
        }
        pFVar11 = ::FName::FName(&local_c8,L"GameplayDebug_Input");
        pUStack_d8 = NewObject<UInputComponent>
                               ((UObject *)pAVar5,*pFVar11,RF_NoFlags,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUStack_d8 == (UInputComponent *)0x0)) {
        if ((pUStack_d8 == (UInputComponent *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewData.InputComponent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerPlayerManager.cpp"
                               ,0xdd,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUStack_d8);
      }
      pUStack_d8->Priority = -1;
      pFVar11 = ::FName::FName(&local_c0,L"GameplayDebug_Controller");
      pAVar14 = (APlayerController *)this;
      if (pAVar5 != (APlayerController *)0x0) {
        pAVar14 = pAVar5;
      }
      FVar6 = *pFVar11;
      if (FVar6 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pAVar14,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar12 = UGameplayDebuggerLocalController::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar12);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._24_4_ = RF_NoFlags;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = pAVar14;
      local_b8._16_8_ = FVar6;
      this_00 = (UGameplayDebuggerLocalController *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar13 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UGameplayDebuggerLocalController *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_e0 = this_00;
      UGameplayDebuggerLocalController::Initialize(this_00,param_1,this);
      UGameplayDebuggerLocalController::BindInput(local_e0,pUStack_d8);
      if (pAVar5 != (APlayerController *)0x0) {
        (**(code **)(pAVar5->_padding_ + 0xd98))(pAVar5,pUStack_d8);
      }
    }
    pTVar3 = &this->PlayerData;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 <
         pFVar4 + (longlong)(this->PlayerData).ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->PlayerData).ArrayNum;
    piVar1 = &(this->PlayerData).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->PlayerData).ArrayNum = iVar10 + 1;
    pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x18;
    *(UGameplayDebuggerLocalController **)pFVar4 = local_e0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_e0 != (UGameplayDebuggerLocalController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e0);
    }
    *(UInputComponent **)(pFVar4 + 8) = pUStack_d8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUStack_d8 != (UInputComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUStack_d8);
    }
    *(AGameplayDebuggerCategoryReplicator **)(pFVar4 + 0x10) = local_d0;
    pAVar8 = local_d0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar8 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  return;
}

// StaticRegisterNativesAGameplayDebuggerPlayerManager @ 146d5c5b0

void __cdecl
AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager(void)

{
  return;
}

// Tick @ 146d5c600

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
AGameplayDebuggerPlayerManager::Tick(AGameplayDebuggerPlayerManager *this,float param_1)

{
  uint uVar1;
  UFunction *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,afStackX_8);
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

// Tick`adjustor{704}' @ 146d5c60c

/* [thunk]:public: virtual void __cdecl AGameplayDebuggerPlayerManager::Tick`adjustor{704}' (float)
   __ptr64 */

void __thiscall
AGameplayDebuggerPlayerManager::Tick_adjustor_704__
          (AGameplayDebuggerPlayerManager *this,float param_1)

{
  Tick((AGameplayDebuggerPlayerManager *)&this[-1]._padding_,param_1);
  return;
}

// TickActor @ 146d5c660

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
AGameplayDebuggerPlayerManager::TickActor
          (AGameplayDebuggerPlayerManager *this,float param_1,ELevelTick param_2,
          FActorTickFunction *param_3)

{
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  UpdateAuthReplicators(this);
  return;
}

// UpdateAuthReplicators @ 146d5d700

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
AGameplayDebuggerPlayerManager::UpdateAuthReplicators(AGameplayDebuggerPlayerManager *this)

{
  uint *puVar1;
  int *piVar2;
  UObject *pUVar3;
  code *pcVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UWorld *this_00;
  APlayerController *pAVar9;
  UClass *pUVar10;
  FGameplayDebuggerPlayerData *pFVar11;
  AGameplayDebuggerCategoryReplicator *pAVar12;
  FScriptContainerElement *pFVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStackY_138 [32];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_c8;
  FUObjectCppClassStaticFunctions local_b8 [2];
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this_00 = AActor::GetWorld((AActor *)this);
  iVar15 = (this->PlayerData).ArrayNum + -1;
  if (-1 < iVar15) {
    lVar16 = (longlong)iVar15 * 0x18;
    do {
      if (((this->PlayerData).ArrayNum <= iVar15) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->PlayerData).AllocatorInstance.Data;
      if ((((*(longlong *)(pFVar13 + lVar16 + 0x10) != 0) &&
           ((*(uint *)(*(longlong *)(pFVar13 + lVar16 + 0x10) + 8) >> 0x1e & 1) == 0)) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) &&
         (*(UObject **)(*(longlong *)(pFVar13 + lVar16 + 0x10) + 0x2c0) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(*(longlong *)(pFVar13 + lVar16 + 0x10) + 0x2c0));
      }
      if (((*(longlong *)(pFVar13 + lVar16 + 0x10) == 0) ||
          ((*(uint *)(*(longlong *)(pFVar13 + lVar16 + 0x10) + 8) >> 0x1e & 1) != 0)) ||
         (pUVar3 = *(UObject **)(*(longlong *)(pFVar13 + lVar16 + 0x10) + 0x2c0),
         pUVar3 == (UObject *)0x0)) {
LAB_146d5d819:
        if ((*(longlong *)(pFVar13 + lVar16 + 0x10) != 0) &&
           ((*(uint *)(*(longlong *)(pFVar13 + lVar16 + 0x10) + 8) >> 0x1e & 1) == 0)) {
          UWorld::DestroyActor(this_00,*(AActor **)(pFVar13 + lVar16 + 0x10),false,true);
        }
        if ((*(longlong *)(pFVar13 + lVar16) != 0) &&
           ((*(uint *)(*(longlong *)(pFVar13 + lVar16) + 8) >> 0x1e & 1) == 0)) {
          uVar8 = *(uint *)(*(longlong *)(pFVar13 + lVar16) + 0x78);
          if (((uVar8 & 8) != 0) && (GAreScreenMessagesEnabled == false)) {
            GAreScreenMessagesEnabled = (bool)((byte)(uVar8 >> 6) & 1);
          }
          puVar1 = (uint *)(*(longlong *)(pFVar13 + lVar16) + 0x78);
          *puVar1 = *puVar1 & 0xfffffffd;
        }
        if (((this->PlayerData).ArrayNum <= iVar15) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->PlayerData).AllocatorInstance.Data + lVar16;
        iVar7 = ((this->PlayerData).ArrayNum - iVar15) + -1;
        if (iVar7 != 0) {
          memmove(pFVar13,pFVar13 + 0x18,(longlong)iVar7 * 0x18);
        }
        piVar2 = &(this->PlayerData).ArrayNum;
        *piVar2 = *piVar2 + -1;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0) goto LAB_146d5d819;
      }
      lVar16 = lVar16 + -0x18;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  UWorld::GetPlayerControllerIterator(this_00,&local_c8);
  do {
    while( true ) {
      iVar15 = local_c8.Index;
      pTVar5 = local_c8.Container;
      if ((local_c8.Index < 0) || ((local_c8.Container)->ArrayNum <= local_c8.Index)) {
        uVar17 = __real_3f000000;
        if ((this->PlayerData).ArrayNum != 0) {
          uVar17 = __real_40a00000;
        }
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar17;
        return;
      }
      uVar8 = 0;
      if (local_c8.Index < (local_c8.Container)->ArrayNum) {
        uVar8 = (uint)~local_c8.Index >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar9 = (APlayerController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar5->AllocatorInstance).Data + (longlong)iVar15 * 8));
      if (pAVar9 != (APlayerController *)0x0) break;
LAB_146d5db5b:
      local_c8.Index = local_c8.Index + 1;
    }
    pUVar10 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    iVar15 = (int)pUVar10->_padding_;
    if ((iVar15 <= *(int *)(pAVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar15 * 8)
        == &pUVar10->_padding_)) goto LAB_146d5db5b;
    pFVar11 = GetPlayerData(this,pAVar9);
    if (pFVar11 == (FGameplayDebuggerPlayerData *)0x0) {
LAB_146d5d9ff:
      if (Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton ==
          (UClass *)0x0) {
        local_b8[0].AddReferencedObjects = AActor::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/GameplayDebugger",L"GameplayDebuggerCategoryReplicator",
                   &Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton,
                   AGameplayDebuggerCategoryReplicator::
                   StaticRegisterNativesAGameplayDebuggerCategoryReplicator,0x380,8,
                   CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
                   InternalConstructor<AGameplayDebuggerCategoryReplicator>,
                   InternalVTableHelperCtorCaller<AGameplayDebuggerCategoryReplicator>,local_b8,
                   AActor::StaticClass,UObject::StaticClass);
      }
      pUVar10 = Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton;
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
      local_a8[0x32] = local_a8[0x32] | 4;
      local_a8._16_8_ = (AActor *)0x0;
      local_a8._24_8_ = (APawn *)0x0;
      local_a8[0x30] = Undefined;
      local_a8[0x31] = MultiplyWithRoot;
      if ((pUVar10 == (UClass *)0x0) ||
         (pAVar12 = (AGameplayDebuggerCategoryReplicator *)
                    UWorld::SpawnActor(this_00,pUVar10,&UE::Math::TTransform<double>::Identity,
                                       (FActorSpawnParameters *)local_a8),
         pAVar12 == (AGameplayDebuggerCategoryReplicator *)0x0)) {
LAB_146d5db0c:
        pAVar12 = (AGameplayDebuggerCategoryReplicator *)0x0;
      }
      else {
        pUVar10 = AGameplayDebuggerCategoryReplicator::StaticClass();
        iVar15 = (int)pUVar10->_padding_;
        if ((*(int *)(pAVar12->_padding_ + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar10->_padding_)) goto LAB_146d5db0c;
      }
      if (local_a8._64_8_ != 0) {
        plVar14 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      AGameplayDebuggerCategoryReplicator::SetReplicatorOwner(pAVar12,pAVar9);
      AActor::FinishSpawning
                ((AActor *)pAVar12,&UE::Math::TTransform<double>::Identity,true,
                 (FComponentInstanceDataCache *)0x0,OverrideRootScale);
      goto LAB_146d5db5b;
    }
    pAVar12 = (pFVar11->Replicator).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pAVar12 != (AGameplayDebuggerCategoryReplicator *)0x0) goto LAB_146d5db5b;
      goto LAB_146d5d9ff;
    }
    if (pAVar12 == (AGameplayDebuggerCategoryReplicator *)0x0) goto LAB_146d5d9ff;
    UE::GC::MarkAsReachable((UObject *)pAVar12);
    local_c8.Index = local_c8.Index + 1;
  } while( true );
}

