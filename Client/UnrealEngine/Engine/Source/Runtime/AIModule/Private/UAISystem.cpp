// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 26

// StaticClass @ 146e77e10

UClass * __cdecl UAISystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISystem",&Z_Registration_Info_UClass_UAISystem.InnerSingleton,
               StaticRegisterNativesUAISystem,0x1a0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISystem>,InternalVTableHelperCtorCaller<UAISystem>,local_res8,
               UAISystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISystem.InnerSingleton;
}

// UAISystem @ 146e80e00

UAISystem * __thiscall UAISystem::UAISystem(UAISystem *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UAISystemBase::UAISystemBase((UAISystemBase *)this,param_1);
  this->bAddBlackboardSelfKey = true;
  this->bClearBBEntryOnBTEQSFail = true;
  this_00 = &(this->DefaultBlackboard).SoftObjectPtr.field_0x18;
  this->bBlackboardKeyDecoratorAllowsNoneAsValue = false;
  this->_padding_ = (longlong)&___7UAISystem__6B_;
  *(undefined8 *)&this->PerceptionSystemClassName = 0;
  *(undefined8 *)&(this->PerceptionSystemClassName).field_0x8 = 0;
  *(undefined8 *)&(this->PerceptionSystemClassName).field_0x10 = 0;
  *(undefined8 *)&(this->PerceptionSystemClassName).field_0x18 = 0;
  *(undefined8 *)&this->HotSpotManagerClassName = 0;
  *(undefined8 *)&(this->HotSpotManagerClassName).field_0x8 = 0;
  *(undefined8 *)&(this->HotSpotManagerClassName).field_0x10 = 0;
  *(undefined8 *)&(this->HotSpotManagerClassName).field_0x18 = 0;
  *(undefined8 *)&this->EnvQueryManagerClassName = 0;
  *(undefined8 *)&(this->EnvQueryManagerClassName).field_0x8 = 0;
  *(undefined8 *)&(this->EnvQueryManagerClassName).field_0x10 = 0;
  *(undefined8 *)&(this->EnvQueryManagerClassName).field_0x18 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->BehaviorTreeManager).field0_0x0.DebugPtr = (UBehaviorTreeManager *)0x0;
  (this->EnvironmentQueryManager).field0_0x0.DebugPtr = (UEnvQueryManager *)0x0;
  (this->PerceptionSystem).field0_0x0.DebugPtr = (UAIPerceptionSystem *)0x0;
  (this->AllProxyObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllProxyObjects).ArrayNum = 0;
  (this->AllProxyObjects).ArrayMax = 0;
  (this->HotSpotManager).field0_0x0.DebugPtr = (UAIHotSpotManager *)0x0;
  (this->NavLocalGrids).field0_0x0.DebugPtr = (UNavLocalGridManager *)0x0;
  *(undefined8 *)&this->BlackboardDataToComponentsMap = 0;
  *(undefined8 *)&(this->BlackboardDataToComponentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->BlackboardDataToComponentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->BlackboardDataToComponentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x48 = 0;
  (this->ActorSpawnedDelegateHandle).ID = 0;
  (this->PawnBeginPlayDelegateHandle).ID = 0;
  return this;
}

// UAISystem @ 146e80f40

UAISystem * __thiscall UAISystem::UAISystem(UAISystem *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FDateTime FVar4;
  longlong lVar5;
  
  UAISystemBase::UAISystemBase((UAISystemBase *)this,param_1);
  this->bAddBlackboardSelfKey = true;
  this->bClearBBEntryOnBTEQSFail = true;
  this_00 = &(this->DefaultBlackboard).SoftObjectPtr.field_0x18;
  this->bBlackboardKeyDecoratorAllowsNoneAsValue = false;
  this->_padding_ = (longlong)&___7UAISystem__6B_;
  *(undefined8 *)&this->PerceptionSystemClassName = 0;
  *(undefined8 *)&(this->PerceptionSystemClassName).field_0x8 = 0;
  *(undefined8 *)&(this->PerceptionSystemClassName).field_0x10 = 0;
  *(undefined8 *)&(this->PerceptionSystemClassName).field_0x18 = 0;
  *(undefined8 *)&this->HotSpotManagerClassName = 0;
  *(undefined8 *)&(this->HotSpotManagerClassName).field_0x8 = 0;
  *(undefined8 *)&(this->HotSpotManagerClassName).field_0x10 = 0;
  *(undefined8 *)&(this->HotSpotManagerClassName).field_0x18 = 0;
  *(undefined8 *)&this->EnvQueryManagerClassName = 0;
  *(undefined8 *)&(this->EnvQueryManagerClassName).field_0x8 = 0;
  *(undefined8 *)&(this->EnvQueryManagerClassName).field_0x10 = 0;
  *(undefined8 *)&(this->EnvQueryManagerClassName).field_0x18 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultBlackboard).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->BehaviorTreeManager).field0_0x0.DebugPtr = (UBehaviorTreeManager *)0x0;
  (this->EnvironmentQueryManager).field0_0x0.DebugPtr = (UEnvQueryManager *)0x0;
  (this->PerceptionSystem).field0_0x0.DebugPtr = (UAIPerceptionSystem *)0x0;
  (this->AllProxyObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllProxyObjects).ArrayNum = 0;
  (this->AllProxyObjects).ArrayMax = 0;
  (this->HotSpotManager).field0_0x0.DebugPtr = (UAIHotSpotManager *)0x0;
  (this->NavLocalGrids).field0_0x0.DebugPtr = (UNavLocalGridManager *)0x0;
  *(undefined8 *)&this->BlackboardDataToComponentsMap = 0;
  *(undefined8 *)&(this->BlackboardDataToComponentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->BlackboardDataToComponentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->BlackboardDataToComponentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x48 = 0;
  (this->ActorSpawnedDelegateHandle).ID = 0;
  (this->PawnBeginPlayDelegateHandle).ID = 0;
  (this->DefaultSightCollisionChannel).Value = '\x03';
  this->AcceptanceRadius = 5.0;
  this->bFinishMoveOnGoalOverlap = true;
  this->bAcceptPartialPaths = true;
  this->bAllowStrafing = false;
  if ((this->_padding_ & 0x10) != 0) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"FixedSeed");
    if (!bVar2) {
      FVar4 = FDateTime::Now();
      lVar1 = *(longlong *)FVar4.Ticks;
      lVar5 = SUB168(SEXT816(-0x7ffffffefffffffd) * SEXT816(lVar1),8) + lVar1;
      RandomStream.InitialSeed =
           (int)lVar1 + ((int)(lVar5 >> 0x1e) - (int)(lVar5 >> 0x3f)) * -0x7fffffff;
      RandomStream.Seed = RandomStream.InitialSeed;
    }
  }
  return this;
}

// ~UAISystem @ 146e81dd0

void __thiscall UAISystem::~UAISystem(UAISystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAISystem__6B_;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlackboardDataToComponentsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BlackboardDataToComponentsMap);
  pFVar2 = (this->AllProxyObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->DefaultBlackboard).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->EnvQueryManagerClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->HotSpotManagerClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->PerceptionSystemClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UAISystemBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AIIgnorePlayers @ 146e83b00

void __thiscall UAISystem::AIIgnorePlayers(UAISystem *this)

{
  AAIController::bAIIgnorePlayers = !AAIController::bAIIgnorePlayers;
  return;
}

// AILoggingVerbose @ 146e83b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAISystem::AILoggingVerbose(UAISystem *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  UClass *pUVar4;
  APlayerController *pAVar5;
  FString local_28;
  void *local_18 [2];
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar4->_padding_)) && (*(UGameInstance **)(lVar2 + 0x230) != (UGameInstance *)0x0))
       && (pAVar5 = UGameInstance::GetFirstLocalPlayerController
                              (*(UGameInstance **)(lVar2 + 0x230),(UWorld *)0x0),
          pAVar5 != (APlayerController *)0x0)) {
      pcVar3 = *(code **)(pAVar5->_padding_ + 0xe00);
      ::FString::FString(&local_28,
                         L"log lognavigation verbose | log logpathfollowing verbose | log LogCharacter verbose | log LogBehaviorTree verbose"
                        );
      (*pcVar3)(pAVar5,local_18,&local_28,1);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// BeginDestroy @ 146e85670

void __thiscall UAISystem::BeginDestroy(UAISystem *this)

{
  (**(code **)(this->_padding_ + 0x2c8))(this,1);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CleanupWorld @ 146e867d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAISystem::CleanupWorld(UAISystem *this,bool param_1,bool param_2)

{
  int iVar1;
  UEnvQueryManager *pUVar2;
  UWorld *this_00;
  FDelegateHandle FVar3;
  UClass *pUVar4;
  
  UAISystemBase::CleanupWorld((UAISystemBase *)this,param_1,param_2);
  if ((param_2) &&
     (pUVar2 = (this->EnvironmentQueryManager).field0_0x0.DebugPtr,
     pUVar2 != (UEnvQueryManager *)0x0)) {
    (**(code **)(pUVar2->_padding_ + 0x2b0))();
    (this->EnvironmentQueryManager).field0_0x0.DebugPtr = (UEnvQueryManager *)0x0;
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UWorld::RemoveOnActorSpawnedHandler
                (this_00,(FDelegateHandle)(this->ActorSpawnedDelegateHandle).ID);
    }
  }
  FVar3.ID = (this->PawnBeginPlayDelegateHandle).ID;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&APawn::OnPawnBeginPlay,FVar3);
  }
  return;
}

// CleanupWorld @ 146e86870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAISystem::CleanupWorld(UAISystem *this,bool param_1,bool param_2,UWorld *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146e86873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// ConditionalLoadDebuggerPlugin @ 146e86b20

void __thiscall UAISystem::ConditionalLoadDebuggerPlugin(UAISystem *this)

{
  return;
}

// CreateBlackboardDataToComponentsIterator @ 146e86f10

FBlackboardDataToComponentsIterator * __thiscall
UAISystem::CreateBlackboardDataToComponentsIterator
          (UAISystem *this,FBlackboardDataToComponentsIterator *__return_storage_ptr__,
          UBlackboardData *param_1)

{
  FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (__return_storage_ptr__,&this->BlackboardDataToComponentsMap,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146e8f310

UClass * __cdecl UAISystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISystem",&Z_Registration_Info_UClass_UAISystem.InnerSingleton,
               StaticRegisterNativesUAISystem,0x1a0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISystem>,InternalVTableHelperCtorCaller<UAISystem>,local_res8,
               UAISystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISystem.InnerSingleton;
}

// GetWorld @ 146e901c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAISystem::GetWorld(UAISystem *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// InitializeActorsForPlay @ 146e90bb0

void __thiscall UAISystem::InitializeActorsForPlay(UAISystem *this,bool param_1)

{
  return;
}

// LoadDebuggerPlugin @ 146e93650

void __thiscall UAISystem::LoadDebuggerPlugin(UAISystem *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,"GameplayDebugger");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModule(this_00,FVar1,None);
  return;
}

// OnActorSpawned @ 146e95a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISystem::OnActorSpawned(UAISystem *this,AActor *param_1)

{
  return;
}

// OnPawnBeginPlay @ 146e95c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAISystem::OnPawnBeginPlay(UAISystem *this,APawn *param_1)

{
  UAIPerceptionSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UWorld *pUVar5;
  
  if (param_1 == (APawn *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pawn",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->PerceptionSystem).field0_0x0.DebugPtr;
  if ((pUVar1 != (UAIPerceptionSystem *)0x0) && (pUVar1->bHandlePawnNotification != 0)) {
    pUVar4 = AActor::GetWorld((AActor *)param_1);
    if (pUVar4 == (UWorld *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PawnWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                         ,0x79,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar4 == pUVar5) {
      pUVar1 = (this->PerceptionSystem).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,param_1);
    }
  }
  return;
}

// PostInitProperties @ 146e96b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAISystem::PostInitProperties(UAISystem *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UClass *pUVar6;
  UBehaviorTreeManager *pUVar7;
  UNavLocalGridManager *pUVar8;
  FString *pFVar9;
  size_t sVar10;
  UWorld *pUVar11;
  FName *pFVar12;
  UObject *pUVar13;
  UAIPerceptionSystem *pUVar14;
  UEnvQueryManager *pUVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  FDelegateHandle FVar18;
  longlong *plVar19;
  int iVar20;
  UWorld *pUVar21;
  UWorld *this_00;
  UWorld *pUVar22;
  undefined1 auStackY_498 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_458;
  FDelegateAllocation local_450;
  ulonglong local_440;
  undefined8 local_438;
  undefined8 local_430;
  UAISystem *local_428 [2];
  FScriptContainerElement *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  FScriptContainerElement *local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  FScriptContainerElement *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDelegateAllocation *local_3b8;
  undefined1 local_3b0 [24];
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  FString local_378;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  FString local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  FString local_318;
  FName local_308;
  FName local_300;
  FName local_2f8 [2];
  uint local_2e4;
  uint local_2d4;
  uint local_2c4;
  undefined1 local_2b8 [128];
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pUVar21 = (UWorld *)0x0;
  iVar20 = 0;
  local_440 = local_440 & 0xffffffff00000000;
  UObject::PostInitProperties((UObject *)this);
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return;
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
LAB_146e96bd4:
    this_00 = pUVar21;
  }
  else {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_146e96bd4;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UBehaviorTreeManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar6);
  local_138._8_8_ = this;
  pUVar7 = (UBehaviorTreeManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar19 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar7 == (UBehaviorTreeManager *)0x0)) {
    (this->BehaviorTreeManager).field0_0x0.DebugPtr = pUVar7;
    if ((pUVar7 == (UBehaviorTreeManager *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<818090131998113854>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                           ,0x3e,"BehaviorTreeManager != nullptr"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->BehaviorTreeManager).field0_0x0.DebugPtr = pUVar7;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UNavLocalGridManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._8_8_ = this;
  pUVar8 = (UNavLocalGridManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar19 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar8 == (UNavLocalGridManager *)0x0)) {
    (this->NavLocalGrids).field0_0x0.DebugPtr = pUVar8;
    if ((pUVar8 == (UNavLocalGridManager *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<818090131998113856>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                           ,0x40,"NavLocalGrids != nullptr"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
    (this->NavLocalGrids).field0_0x0.DebugPtr = pUVar8;
  }
  pUVar11 = pUVar21;
  pUVar22 = pUVar21;
  if (*(longlong *)&(this->HotSpotManagerClassName).field_0x0 != 0) {
    pFVar9 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->HotSpotManagerClassName,&local_378)
    ;
    if ((pFVar9->Data).ArrayNum == 0) {
      local_408 = (FScriptContainerElement *)0x15060d16c;
LAB_146e96da5:
      sVar10 = wcslen((wchar_t *)local_408);
      iVar20 = (int)sVar10;
    }
    else {
      local_408 = (pFVar9->Data).AllocatorInstance.Data;
      if (local_408 != (FScriptContainerElement *)0x0) goto LAB_146e96da5;
    }
    iStack_400 = iVar20;
    pUVar6 = Z_Construct_UClass_UAIHotSpotManager_NoRegister();
    local_398._8_8_ = (ulonglong)local_2e4 << 0x20;
    local_388._12_4_ = uStack_3fc;
    local_388.Size = iStack_400;
    local_398.DataPtr = (wchar_t *)0x0;
    local_388.DataPtr = (wchar_t *)local_408;
    pUVar11 = (UWorld *)
              StaticLoadClass(pUVar6,(UObject *)0x0,&local_388,&local_398,0,(UPackageMap *)0x0);
    pUVar22 = (UWorld *)&DAT_00000001;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  if ((pUVar22 != (UWorld *)0x0) &&
     (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  if ((pUVar11 != (UWorld *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UAIHotSpotManager_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar20 = (int)pUVar6->_padding_;
    if ((*(int *)&(pUVar11->NetDriver).field0_0x0 < iVar20) ||
       ((longlong *)(&((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar20] !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pFVar12 = ::FName::FName(&local_308,L"HotSpotManager");
      FVar2 = *pFVar12;
      pUVar6 = Z_Construct_UClass_UAIHotSpotManager_NoRegister();
      if (pUVar6 == (UClass *)0x0) {
LAB_146e96e99:
        pUVar11 = pUVar21;
      }
      else {
        iVar20 = (int)pUVar6->_padding_;
        if ((*(int *)&(pUVar11->NetDriver).field0_0x0 < iVar20) ||
           ((longlong *)(&((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar20] !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_146e96e99;
      }
      local_440 = 0;
      if (FVar2 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar6 = Z_Construct_UClass_UAIHotSpotManager_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,(UClass *)pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_2b8,(UClass *)pUVar11);
      local_2b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_2b8._56_8_ = (UPackage *)0x0;
      local_2b8._24_4_ = RF_NoFlags;
      local_2b8._40_8_ = (UObject *)0x0;
      local_2b8[0x20] = false;
      local_2b8._8_8_ = this;
      local_2b8._16_8_ = FVar2;
      pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2b8);
      if (local_2b8._64_8_ != 0) {
        plVar19 = (longlong *)(local_2b8 + 0x50);
        if ((longlong *)local_2b8._104_8_ != (longlong *)0x0) {
          plVar19 = (longlong *)local_2b8._104_8_;
        }
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      (this->HotSpotManager).field0_0x0.DebugPtr = (UAIHotSpotManager *)pUVar13;
    }
  }
  iVar20 = 0;
  pUVar11 = pUVar21;
  if (*(longlong *)&this->PerceptionSystemClassName != 0) {
    bVar5 = true;
    pFVar9 = FSoftObjectPath::ToString
                       ((FSoftObjectPath *)&this->PerceptionSystemClassName,&local_348);
    if ((pFVar9->Data).ArrayNum == 0) {
      local_3f8 = (FScriptContainerElement *)0x15060d16c;
LAB_146e96fa1:
      sVar10 = wcslen((wchar_t *)local_3f8);
      iStack_3f0 = (int)sVar10;
    }
    else {
      local_3f8 = (pFVar9->Data).AllocatorInstance.Data;
      iStack_3f0 = iVar20;
      if (local_3f8 != (FScriptContainerElement *)0x0) goto LAB_146e96fa1;
    }
    pUVar6 = Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
    local_368._8_8_ = (ulonglong)local_2d4 << 0x20;
    local_358._12_4_ = uStack_3ec;
    local_358.Size = iStack_3f0;
    local_368.DataPtr = (wchar_t *)0x0;
    local_358.DataPtr = (wchar_t *)local_3f8;
    pUVar11 = (UWorld *)
              StaticLoadClass(pUVar6,(UObject *)0x0,&local_358,&local_368,0,(UPackageMap *)0x0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  if ((bVar5) && (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  if ((pUVar11 != (UWorld *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UAIPerceptionSystem_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&(pUVar11->NetDriver).field0_0x0 < iVar1) ||
       ((longlong *)(&((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar1] !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pFVar12 = ::FName::FName(&local_300,L"PerceptionSystem");
      FVar2 = *pFVar12;
      pUVar6 = Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
      if (pUVar6 == (UClass *)0x0) {
LAB_146e97095:
        pUVar11 = pUVar21;
      }
      else {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)&(pUVar11->NetDriver).field0_0x0 < iVar1) ||
           ((longlong *)(&((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar1] !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_146e97095;
      }
      local_438 = 0;
      if (FVar2 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar6 = Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,(UClass *)pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_238,(UClass *)pUVar11);
      local_238._48_8_ = (FObjectInstancingGraph *)0x0;
      local_238._56_8_ = (UPackage *)0x0;
      local_238._24_4_ = RF_NoFlags;
      local_238._40_8_ = (UObject *)0x0;
      local_238[0x20] = false;
      local_238._8_8_ = this;
      local_238._16_8_ = FVar2;
      pUVar14 = (UAIPerceptionSystem *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
      if (local_238._64_8_ != 0) {
        plVar19 = (longlong *)(local_238 + 0x50);
        if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
          plVar19 = (longlong *)local_238._104_8_;
        }
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UAIPerceptionSystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (this->PerceptionSystem).field0_0x0.DebugPtr = pUVar14;
    }
  }
  if (*(longlong *)&(this->EnvQueryManagerClassName).field_0x0 == 0) {
    pUVar11 = (UWorld *)Z_Construct_UClass_UEnvQueryManager_NoRegister();
  }
  else {
    bVar5 = true;
    pFVar9 = FSoftObjectPath::ToString
                       ((FSoftObjectPath *)&this->EnvQueryManagerClassName,&local_318);
    if ((pFVar9->Data).ArrayNum == 0) {
      local_418 = (FScriptContainerElement *)0x15060d16c;
LAB_146e9719f:
      sVar10 = wcslen((wchar_t *)local_418);
      iVar20 = (int)sVar10;
    }
    else {
      local_418 = (pFVar9->Data).AllocatorInstance.Data;
      if (local_418 != (FScriptContainerElement *)0x0) goto LAB_146e9719f;
    }
    iStack_410 = iVar20;
    pUVar6 = Z_Construct_UClass_UEnvQueryManager_NoRegister();
    local_338._8_8_ = (ulonglong)local_2c4 << 0x20;
    local_328._12_4_ = uStack_40c;
    local_328.Size = iStack_410;
    local_338.DataPtr = (wchar_t *)0x0;
    local_328.DataPtr = (wchar_t *)local_418;
    pUVar11 = (UWorld *)
              StaticLoadClass(pUVar6,(UObject *)0x0,&local_328,&local_338,0,(UPackageMap *)0x0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  if ((bVar5) && (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if ((pUVar11 == (UWorld *)0x0) ||
     (pUVar6 = Z_Construct_UClass_UEnvQueryManager_NoRegister(), pUVar6 == (UClass *)0x0))
  goto LAB_146e9735e;
  iVar20 = (int)pUVar6->_padding_;
  if ((*(int *)&(pUVar11->NetDriver).field0_0x0 < iVar20) ||
     ((longlong *)(&((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar20] !=
      &pUVar6->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_146e9735e;
  pFVar12 = ::FName::FName(local_2f8,L"EnvironmentQueryManager");
  FVar2 = *pFVar12;
  pUVar6 = Z_Construct_UClass_UEnvQueryManager_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
LAB_146e9729f:
    pUVar11 = pUVar21;
  }
  else {
    iVar20 = (int)pUVar6->_padding_;
    if ((*(int *)&(pUVar11->NetDriver).field0_0x0 < iVar20) ||
       ((longlong *)(&((pUVar11->PersistentLevel).field0_0x0.DebugPtr)->_padding_)[iVar20] !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_146e9729f;
  }
  local_430 = 0;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = Z_Construct_UClass_UEnvQueryManager_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,(UClass *)pUVar11);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,(UClass *)pUVar11);
  local_1b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1b8._56_8_ = (UPackage *)0x0;
  local_1b8._24_4_ = RF_NoFlags;
  local_1b8._40_8_ = (UObject *)0x0;
  local_1b8[0x20] = false;
  local_1b8._8_8_ = this;
  local_1b8._16_8_ = FVar2;
  pUVar15 = (UEnvQueryManager *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar19 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UEnvQueryManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->EnvironmentQueryManager).field0_0x0.DebugPtr = pUVar15;
LAB_146e9735e:
  if (((this->EnvironmentQueryManager).field0_0x0.DebugPtr == (UEnvQueryManager *)0x0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<818090131998113875>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                         ,0x53,"EnvironmentQueryManager != nullptr"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this_00 != (UWorld *)0x0) {
    local_458.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_450.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_450.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_458,(FWriteAccessScope *)&local_3d0);
    local_3b8 = &local_450;
    puVar16 = UE::Core::Private::DelegateAllocate(0x28,&local_450);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar17;
      *puVar16 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISystem____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar16[3] = 0;
      local_428[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)local_428);
      puVar16[4] = _vcall__760__flat______;
    }
    if (local_3d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
    }
    FVar18 = UWorld::AddOnActorSpawnedHandler
                       (this_00,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                                local_3b0);
                    /* WARNING: Load size is inaccurate */
    (this->ActorSpawnedDelegateHandle).ID = *FVar18.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_458,(FWriteAccessScope *)&local_3e8);
    if ((local_450.DelegateSize != 0) &&
       (local_450.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_450.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_450,0,0,0x10);
      local_450.DelegateSize = 0;
    }
    if (local_3e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
    }
    if (local_450.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_450.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_458.AccessDetector);
  }
  FVar18 = TMulticastDelegateRegistration<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
           AddUObject<UAISystem>
                     ((TMulticastDelegateRegistration<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
                       *)&APawn::OnPawnBeginPlay,(UAISystem *)(local_3b0 + 8),(pmf_ca699fc1)this);
                    /* WARNING: Load size is inaccurate */
  (this->PawnBeginPlayDelegateHandle).ID = *FVar18.ID;
  (**(code **)(this->_padding_ + 0x2f0))(this);
  return;
}

// RegisterBlackboardComponent @ 146e9a110

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
UAISystem::RegisterBlackboardComponent
          (UAISystem *this,UBlackboardData *param_1,UBlackboardComponent *param_2)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *pTVar3;
  TPairInitializer<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>_&&,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_&&>
  local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  UBlackboardComponent *local_70;
  UBlackboardData *local_68;
  UBlackboardComponent *local_60;
  UBlackboardData *local_58;
  FWeakObjectPtr *local_50;
  FWeakObjectPtr *local_48;
  
  do {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UBlackboardComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.Value = (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)0x0;
    local_70 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UBlackboardComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_70);
    pTVar3 = local_res8.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_68 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_68);
    pTVar3 = TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
             ::FindPair(&this->BlackboardDataToComponentsMap,
                        (TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>)local_res18,
                        (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>)pTVar3);
    if (pTVar3 != (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<818090131998114033>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                         ,0xf1,
                         "BlackboardDataToComponentsMap.FindPair(&BlackboardData, &BlackboardComp) == nullptr"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UBlackboardComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    local_60 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UBlackboardComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_60);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    local_50 = &local_res20;
    local_48 = &local_78;
    TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>_&&,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
                *)&this->BlackboardDataToComponentsMap,&local_res8,(bool *)&local_50);
    param_1 = (param_1->Parent).field0_0x0.DebugPtr;
  } while (param_1 != (UBlackboardData *)0x0);
  return;
}

// RunEQS @ 146e9e7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAISystem::RunEQS(UAISystem *this,FString *param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  UEnvQueryManager *this_00;
  ulonglong uVar3;
  UClass *pUVar4;
  APlayerController *this_01;
  TObjectPtr<UEnvQuery_const_>_u_0 TVar5;
  undefined1 auStackY_f8 [32];
  TSharedPtr<FEnvQueryResult,1> local_c0;
  TObjectPtr<UEnvQuery_const_>_u_0 local_a8;
  UObject *local_a0;
  undefined8 local_98;
  ForAnyElementType FStack_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return;
  }
  if (*(UGameInstance **)(lVar2 + 0x230) == (UGameInstance *)0x0) {
    return;
  }
  this_01 = UGameInstance::GetFirstLocalPlayerController
                      (*(UGameInstance **)(lVar2 + 0x230),(UWorld *)0x0);
  this_00 = (this->EnvironmentQueryManager).field0_0x0.DebugPtr;
  if (((param_2 == (UObject *)0x0) || (this_01 == (APlayerController *)0x0)) ||
     (this_00 == (UEnvQueryManager *)0x0)) {
    ::FString::FString((FString *)&local_c0,L"No debugging target");
  }
  else {
    TVar5.DebugPtr = UEnvQueryManager::FindQueryTemplate(this_00,param_1);
    if (TVar5.DebugPtr != (UEnvQuery *)0x0) {
      local_a8.DebugPtr = TVar5.DebugPtr;
      local_a0 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_88 = 0;
      local_98 = 0;
      FStack_90.Data = (FScriptContainerElement *)0x0;
      local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_80.MaxBits = _UNK_150631d94;
      uStack_60 = _UNK_150631d98;
      local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_50 = (void *)0x0;
      local_48 = 0;
      UEnvQueryManager::RunInstantQuery
                (this_00,&local_c0,(FEnvQueryRequest *)&local_a8.ObjectPtr,AllMatching);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
      local_48 = 0;
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      uVar3 = local_88 >> 0x20;
      local_88 = local_88 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,&FStack_90,0,(int *)((longlong)&local_88 + 4));
      }
      iVar1 = local_80.MaxBits;
      uStack_60 = 0xffffffff;
      local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
      if (0x80 < (uint)iVar1) {
        local_80.NumBits = 0;
        local_80.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
      }
      local_c0.Object = (FEnvQueryResult *)FStack_90.Data;
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
        local_c0.Object = (FEnvQueryResult *)FStack_90.Data;
      }
      goto LAB_146e9e996;
    }
    ::FString::PrintfImpl((FString *)&local_c0,L"Unable to fing query template \'%s\'");
  }
  APlayerController::ClientMessage(this_01,(FString *)&local_c0,(FName)0x0,0.0);
LAB_146e9e996:
  if (local_c0.Object != (FEnvQueryResult *)0x0) {
    FMemory::Free(local_c0.Object);
  }
  return;
}

// StartPlay @ 146e9f730

void __thiscall UAISystem::StartPlay(UAISystem *this)

{
  UAIPerceptionSystem *pUVar1;
  
  UAISystemBase::StartPlay((UAISystemBase *)this);
  pUVar1 = (this->PerceptionSystem).field0_0x0.DebugPtr;
  if (pUVar1 != (UAIPerceptionSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e9f752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c8))();
    return;
  }
  return;
}

// StaticRegisterNativesUAISystem @ 146ea01a0

void __cdecl UAISystem::StaticRegisterNativesUAISystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAISystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterBlackboardComponent @ 146ea3c70

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
UAISystem::UnregisterBlackboardComponent
          (UAISystem *this,UBlackboardData *param_1,UBlackboardComponent *param_2)

{
  UBlackboardData *pUVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *pTVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  UBlackboardComponent *local_68;
  UBlackboardData *local_60;
  UBlackboardComponent *local_58;
  UBlackboardData *local_50;
  UBlackboardComponent *local_48;
  UBlackboardData *local_40;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_68 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_68);
  FVar3 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_60 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_60);
  pTVar5 = TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
           ::FindPair(&this->BlackboardDataToComponentsMap,
                      (TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>)local_res10,
                      (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>)FVar3);
  if (pTVar5 == (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<818090131998114047>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                       ,0xff,
                       "BlackboardDataToComponentsMap.FindPair(&BlackboardData, &BlackboardComp) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (param_1->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlackboardData *)0x0) {
    UnregisterBlackboardComponent(this,pUVar1,param_2);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_58 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_58);
  FVar3 = local_res18;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_50 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_50);
  TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
  ::RemoveSingle(&this->BlackboardDataToComponentsMap,
                 (TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>)local_res20,
                 (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>)FVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_48 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_48);
  FVar3 = local_78;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  local_40 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_40);
  pTVar5 = TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
           ::FindPair(&this->BlackboardDataToComponentsMap,
                      (TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>)local_70,
                      (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>)FVar3);
  if (pTVar5 != (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlackboardDataToComponentsMap.FindPair(&BlackboardData, &BlackboardComp) == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AISystem.cpp"
                       ,0x108,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// WorldOriginLocationChanged @ 146ea4e10

void __thiscall
UAISystem::WorldOriginLocationChanged
          (UAISystem *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2)

{
  return;
}

// execAIIgnorePlayers @ 146ea61f0

void __cdecl UAISystem::execAIIgnorePlayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146ea6208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e0))();
  return;
}

// execAILoggingVerbose @ 146ea6220

void __cdecl UAISystem::execAILoggingVerbose(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146ea6238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

