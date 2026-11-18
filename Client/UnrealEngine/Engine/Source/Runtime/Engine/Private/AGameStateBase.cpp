// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// StaticClass @ 147c19940

UClass * __cdecl AGameStateBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameStateBase",
               &Z_Registration_Info_UClass_AGameStateBase.InnerSingleton,
               StaticRegisterNativesAGameStateBase,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameStateBase>,
               InternalVTableHelperCtorCaller<AGameStateBase>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameStateBase.InnerSingleton;
}

// GetDefaultGameMode<AGameMode> @ 147c22d00

AGameMode * __thiscall AGameStateBase::GetDefaultGameMode<AGameMode>(AGameStateBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  AGameMode *pAVar6;
  
  pUVar5 = (this->GameModeClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (AGameMode *)0x0;
  }
  pUVar4 = AGameModeBase::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (AGameMode *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (AGameMode *)0x0;
  }
  pUVar5 = (this->GameModeClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (AGameMode *)0x0;
  }
  pUVar4 = AGameModeBase::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->GameModeClass).Class.field0_0x0.DebugPtr;
      goto LAB_147c22d9c;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_147c22d9c:
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pAVar6 = (AGameMode *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = AGameModeBase::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar5->_padding_)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pAVar6 = (AGameMode *)(*pcVar2)();
    return pAVar6;
  }
  if (pAVar6 != (AGameMode *)0x0) {
    pUVar5 = Z_Construct_UClass_AGameMode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pAVar6;
    }
  }
  return (AGameMode *)0x0;
}

// AGameStateBase @ 147c2c280

AGameStateBase * __thiscall
AGameStateBase::AGameStateBase(AGameStateBase *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AGameStateBase__6B_;
  (this->GameModeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AuthorityGameMode).field0_0x0.DebugPtr = (AGameModeBase *)0x0;
  (this->SpectatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerArray).ArrayNum = 0;
  (this->PlayerArray).ArrayMax = 0;
  (this->TimerHandle_UpdateServerTimeSeconds).Handle = 0;
  return this;
}

// AGameStateBase @ 147c2c2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameStateBase * __thiscall
AGameStateBase::AGameStateBase(AGameStateBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  FName local_res8;
  
  pFVar3 = ::FName::FName(&local_res8,L"Sprite");
  FVar2 = *pFVar3;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AGameStateBase__6B_;
  (this->GameModeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AuthorityGameMode).field0_0x0.DebugPtr = (AGameModeBase *)0x0;
  (this->SpectatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerArray).ArrayNum = 0;
  (this->PlayerArray).ArrayMax = 0;
  (this->TimerHandle_UpdateServerTimeSeconds).Handle = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  *(undefined1 *)&this->_padding_ = 1;
  AActor::SetReplicatingMovement((AActor *)this,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xf7;
  this->SumServerWorldTimeSecondsDelta = 0.0;
  this->NumServerWorldTimeSecondsDeltas = 0;
  this->ServerWorldTimeSecondsUpdateFrequency = 0.1;
  *(undefined4 *)&this->_padding_ = 0x41200000;
  return this;
}

// ~AGameStateBase @ 147c30fd0

void __thiscall AGameStateBase::~AGameStateBase(AGameStateBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AGameStateBase__6B_;
  pFVar1 = (this->PlayerArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AInfo::~AInfo((AInfo *)this);
  return;
}

// AddPlayerState @ 147c35170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameStateBase::AddPlayerState(AGameStateBase *this,APlayerState *param_1)

{
  TObjectPtr<APlayerState>_u_0 local_res10 [3];
  
  if (param_1->bIsInactive == '\0') {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<APlayerState>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<APlayerState>_>
              (&this->PlayerArray,(TObjectPtr<APlayerState> *)&local_res10[0].ObjectPtr);
  }
  return;
}

// AsyncPackageLoaded @ 147c37990

void __thiscall AGameStateBase::AsyncPackageLoaded(AGameStateBase *this,UObject *param_1)

{
  return;
}

// GetActorBounds @ 147c534e0

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
AGameStateBase::GetActorBounds
          (AGameStateBase *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  return;
}

// GetDefaultGameMode @ 147c55f90

AGameModeBase * __thiscall AGameStateBase::GetDefaultGameMode(AGameStateBase *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  AGameModeBase *pAVar7;
  
  pUVar6 = (this->GameModeClass).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    return (AGameModeBase *)0x0;
  }
  pUVar5 = AGameModeBase::StaticClass();
  if (pUVar5 == (UClass *)0x0) {
    return (AGameModeBase *)0x0;
  }
  iVar1 = (int)pUVar5->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return (AGameModeBase *)0x0;
  }
  pUVar6 = (this->GameModeClass).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    return (AGameModeBase *)0x0;
  }
  pUVar5 = AGameModeBase::StaticClass();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = (this->GameModeClass).Class.field0_0x0.DebugPtr;
      goto LAB_147c5602c;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_147c5602c:
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pAVar7 = (AGameModeBase *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = AGameModeBase::StaticClass();
  lVar2 = pAVar7->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if (((*(int *)(lVar2 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pAVar7 = (AGameModeBase *)(*pcVar3)();
    return pAVar7;
  }
  return pAVar7;
}

// GetLifetimeReplicatedProps @ 147c575c0

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
AGameStateBase::GetLifetimeReplicatedProps
          (AGameStateBase *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18 [2];
  FString local_48;
  FDoRepLifetimeParams local_38;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xe,L"SpectatorClass",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38._8_8_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  local_38.Condition = COND_InitialOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38._8_8_ = local_38._8_8_ & 0xffffffffffffff00;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(local_res18,0xd,L"GameModeClass",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x20,L"ReplicatedWorldTimeSecondsDouble",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x17,L"bReplicatedHasBegunPlay",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  return;
}

// GetPlayerRespawnDelay @ 147c59780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall AGameStateBase::GetPlayerRespawnDelay(AGameStateBase *this,AController *param_1)

{
  return __real_3f800000;
}

// GetPlayerStartTime @ 147c597b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall AGameStateBase::GetPlayerStartTime(AGameStateBase *this,AController *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(this->_padding_ + 0x768))();
  return (float)dVar1;
}

// GetPlayerStateFromUniqueNetId @ 147c59890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerState * __thiscall
AGameStateBase::GetPlayerStateFromUniqueNetId(AGameStateBase *this,FUniqueNetIdWrapper *param_1)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId> FVar10;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar11;
  FUniqueNetId *pFVar12;
  FUniqueNetId *pFVar13;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar14;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  ulonglong uVar17;
  FNameEntryId FVar18;
  APlayerState *pAVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName local_58;
  FStatMessage local_48;
  
  FVar10 = StatPtr_STAT_GetPlayerStateFromUniqueId;
  if (StatPtr_STAT_GetPlayerStateFromUniqueId ==
      (FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId>)0x0) {
    pFVar9 = ::FName::FName(&local_res18,"STAT_GetPlayerStateFromUniqueId");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetPlayerStateFromUniqueId,
                        *pFVar9,L"GetPlayerStateFromUniqueId","STATGROUP_Game","STATCAT_Advanced",
                        L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar18 = FVar2.ComparisonIndex.Value;
  uVar16 = FVar2.Number;
  if ((FVar18.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar18.Value;
        local_res8.s.HighPart = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameStateBase.cpp"
                   ,0x10b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar18.Value;
      local_res8.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar4 = true;
      local_58 = FVar2;
      goto LAB_147c599f1;
    }
  }
  bVar4 = false;
LAB_147c599f1:
  local_res18.ComparisonIndex.Value = (this->PlayerArray).ArrayNum;
  uVar17 = (ulonglong)(int)local_res18.ComparisonIndex.Value;
  pFVar21 = (this->PlayerArray).AllocatorInstance.Data;
  pFVar20 = pFVar21 + uVar17 * 8;
  local_res20 = pFVar20;
  while( true ) {
    if ((this->PlayerArray).ArrayNum != (int)uVar17) {
      `TCheckedPointerIterator<APlayerState_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar21 == pFVar20) break;
    pAVar19 = *(APlayerState **)pFVar21;
    if (pAVar19 != (APlayerState *)0x0) {
      bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&pAVar19->UniqueId);
      bVar7 = FUniqueNetIdWrapper::IsValid(param_1);
      pFVar20 = local_res20;
      if (bVar6 == bVar7) {
        if (!bVar6) goto LAB_147c59b05;
        if ((uchar)(pAVar19->UniqueId)._padding_ == (param_1->Variant).TypeIndex) {
          bVar6 = FUniqueNetIdWrapper::IsV1((FUniqueNetIdWrapper *)&pAVar19->UniqueId);
          if (bVar6) {
            pTVar11 = FUniqueNetIdWrapper::GetV1Unsafe(param_1);
            pFVar12 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar11);
            pTVar11 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)&pAVar19->UniqueId);
            pFVar13 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar11);
            cVar8 = (*(code *)**(undefined8 **)pFVar13)(pFVar13,pFVar12);
          }
          else {
            pTVar14 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)&pAVar19->UniqueId);
            pTVar15 = FUniqueNetIdWrapper::GetV2Unsafe(param_1);
            cVar8 = pTVar14->Value == pTVar15->Value;
          }
          pFVar20 = local_res20;
          if (cVar8 != '\0') goto LAB_147c59b05;
        }
      }
    }
    uVar17 = (ulonglong)local_res18.ComparisonIndex.Value;
    pFVar21 = pFVar21 + 8;
  }
  pAVar19 = (APlayerState *)0x0;
LAB_147c59b05:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return pAVar19;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return pAVar19;
}

// GetPrivateStaticClass @ 147c5a0d0

UClass * __cdecl AGameStateBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameStateBase",
               &Z_Registration_Info_UClass_AGameStateBase.InnerSingleton,
               StaticRegisterNativesAGameStateBase,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameStateBase>,
               InternalVTableHelperCtorCaller<AGameStateBase>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameStateBase.InnerSingleton;
}

// GetServerWorldTimeSeconds @ 147c5abc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

double __thiscall AGameStateBase::GetServerWorldTimeSeconds(AGameStateBase *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    return (double)this->ServerWorldTimeSecondsDelta + pUVar1->TimeSeconds;
  }
  return 0.0;
}

// GetVelocity @ 147c5cff0

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
AGameStateBase::GetVelocity(AGameStateBase *this,TVector<double> *__return_storage_ptr__)

{
  AActor::GetVelocity((AActor *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleBeginPlay @ 147c5f160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::HandleBeginPlay(AGameStateBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  AWorldSettings *pAVar1;
  
  this->bReplicatedHasBegunPlay = true;
  pAVar1 = AActor::GetWorldSettings((AActor *)this);
  (**(code **)(pAVar1->_padding_ + 0x7b8))(pAVar1);
  pAVar1 = AActor::GetWorldSettings((AActor *)this);
  UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x7c0);
                    /* WARNING: Could not recover jumptable at 0x000147c5f19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
  return;
}

// HasBegunPlay @ 147c63f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameStateBase::HasBegunPlay(AGameStateBase *this)

{
  bool bVar1;
  UWorld *this_00;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = UWorld::GetBegunPlay(this_00);
    return bVar1;
  }
  return false;
}

// HasMatchEnded @ 147c64130

bool __thiscall AGameStateBase::HasMatchEnded(AGameStateBase *this)

{
  return false;
}

// HasMatchStarted @ 147c641b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameStateBase::HasMatchStarted(AGameStateBase *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    return pUVar1->bMatchStarted;
  }
  return false;
}

// OnRep_GameModeClass @ 147c70470

void __thiscall AGameStateBase::OnRep_GameModeClass(AGameStateBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c70473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x798))();
  return;
}

// OnRep_ReplicatedHasBegunPlay @ 147c70520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::OnRep_ReplicatedHasBegunPlay(AGameStateBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  AWorldSettings *pAVar1;
  
  if ((this->bReplicatedHasBegunPlay != false) && ((char)this->_padding_ != '\x03')) {
    pAVar1 = AActor::GetWorldSettings((AActor *)this);
    (**(code **)(pAVar1->_padding_ + 0x7b8))(pAVar1);
    pAVar1 = AActor::GetWorldSettings((AActor *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x7c0);
                    /* WARNING: Could not recover jumptable at 0x000147c70566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// OnRep_ReplicatedWorldTimeSecondsDouble @ 147c70580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::OnRep_ReplicatedWorldTimeSecondsDouble(AGameStateBase *this)

{
  ulonglong uVar1;
  uint uVar2;
  UWorld *pUVar3;
  double dVar4;
  double dVar5;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 != (UWorld *)0x0) {
    dVar5 = pUVar3->TimeSeconds;
    uVar2 = this->NumServerWorldTimeSecondsDeltas + 1;
    this->NumServerWorldTimeSecondsDeltas = uVar2;
    dVar5 = (this->ReplicatedWorldTimeSecondsDouble - dVar5) + this->SumServerWorldTimeSecondsDelta;
    this->SumServerWorldTimeSecondsDelta = dVar5;
    if (0xfa < uVar2) {
      uVar1 = (ulonglong)uVar2;
      uVar2 = 1;
      this->NumServerWorldTimeSecondsDeltas = 1;
      dVar5 = dVar5 / (double)uVar1;
      this->SumServerWorldTimeSecondsDelta = dVar5;
    }
    dVar5 = dVar5 / (double)uVar2;
    if (this->ServerWorldTimeSecondsDelta != 0.0) {
      dVar4 = (double)this->ServerWorldTimeSecondsDelta;
      dVar5 = (dVar5 - dVar4) * __real_3fe0000000000000 + dVar4;
    }
    this->ServerWorldTimeSecondsDelta = (float)dVar5;
  }
  return;
}

// OnRep_SpectatorClass @ 147c70640

void __thiscall AGameStateBase::OnRep_SpectatorClass(AGameStateBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c70643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7a0))();
  return;
}

// PostInitializeComponents @ 147c721c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::PostInitializeComponents(AGameStateBase *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  UClass *pUVar3;
  AActor *pAVar4;
  APlayerState *pAVar5;
  UClass *local_res10;
  TActorIteratorBase<TActorIterator<APlayerState>_> local_68;
  
  AActor::PostInitializeComponents((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::SetGameState(this_00,this);
  this_01 = AActor::GetWorldTimerManager((AActor *)this);
  bVar2 = UWorld::IsGameWorld(this_00);
  if ((bVar2) && ((char)this->_padding_ == '\x03')) {
    (**(code **)(this->_padding_ + 0x7e0))(this);
    if (0.0 < this->ServerWorldTimeSecondsUpdateFrequency) {
      FTimerManager::SetTimer<AGameStateBase>
                (this_01,&this->TimerHandle_UpdateServerTimeSeconds,this,(pmf_b59eba73)0x147c33980,
                 this->ServerWorldTimeSecondsUpdateFrequency,true,__real_bf800000);
    }
  }
  pUVar3 = Z_Construct_UClass_APlayerState_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  local_68.Flags = OnlyActiveLevels|SkipPendingKill;
  local_68.State.bIsSet = false;
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FActorIteratorState::FActorIteratorState
            (&local_68.State.TypedValue,this_00,(TSubclassOf<AActor>)&local_res10);
  local_68.State.bIsSet = true;
  while( true ) {
    TActorIteratorBase<TActorIterator<APlayerState>_>::operator++(&local_68);
    if (local_68.State.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_68.State.TypedValue.ReachedEnd != false) break;
    pcVar1 = *(code **)(this->_padding_ + 0x7b0);
    if (local_68.State.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAVar4 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
    pAVar5 = CastChecked<APlayerState,AActor>(pAVar4);
    (*pcVar1)(this,pAVar5);
  }
  if (local_68.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_68.State.TypedValue.CurrentWorld,
               local_68.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  return;
}

// ReceivedGameModeClass @ 147c78bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::ReceivedGameModeClass(AGameStateBase *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  UObject *pUVar6;
  TObjectPtr<UClass>_u_0 local_res10;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_18);
  while( true ) {
    iVar3 = local_18.Index;
    pTVar2 = local_18.Container;
    if (local_18.Index < 0) {
      return;
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
      (*pcVar1)();
      return;
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (pUVar6 != (UObject *)0x0) {
      pcVar1 = *(code **)(*(longlong *)pUVar6 + 0xed8);
      local_res10 = (TObjectPtr<UClass>_u_0)(this->GameModeClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      (*pcVar1)(pUVar6,&local_res10);
    }
    local_18.Index = local_18.Index + 1;
  }
  return;
}

// ReceivedSpectatorClass @ 147c78cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::ReceivedSpectatorClass(AGameStateBase *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UWorld *this_00;
  UObject *pUVar7;
  TObjectPtr<UClass>_u_0 local_res10;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_18);
  while( true ) {
    iVar3 = local_18.Index;
    pTVar2 = local_18.Container;
    if (local_18.Index < 0) {
      return;
    }
    if ((local_18.Container)->ArrayNum <= local_18.Index) break;
    uVar6 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar6 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if ((pUVar7 != (UObject *)0x0) &&
       (cVar5 = (**(code **)(*(longlong *)pUVar7 + 0x7f0))(pUVar7), cVar5 != '\0')) {
      pcVar1 = *(code **)(*(longlong *)pUVar7 + 0xf18);
      local_res10 = (TObjectPtr<UClass>_u_0)(this->SpectatorClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      (*pcVar1)(pUVar7,&local_res10);
    }
    local_18.Index = local_18.Index + 1;
  }
  return;
}

// RemovePlayerState @ 147c7bd50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameStateBase::RemovePlayerState(AGameStateBase *this,APlayerState *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<APlayerState>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  APlayerState *pAVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (0 < (this->PlayerArray).ArrayNum) {
    lVar10 = 0;
    pTVar2 = &this->PlayerArray;
    uVar8 = 0;
    do {
      uVar11 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->PlayerArray).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar3 = *(APlayerState **)((pTVar2->AllocatorInstance).Data + lVar10);
      if (pAVar3 == (APlayerState *)0x0) {
        bVar5 = param_1 == (APlayerState *)0x0;
      }
      else {
        bVar5 = pAVar3 == param_1;
      }
      uVar6 = uVar8 + 1;
      if (bVar5) {
        uVar9 = 0;
        if ((int)uVar6 <= (this->PlayerArray).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
        iVar7 = (this->PlayerArray).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->PlayerArray).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->PlayerArray).ArrayNum,
                   &(this->PlayerArray).ArrayMax);
        return;
      }
      lVar10 = lVar10 + 8;
      uVar8 = uVar6;
    } while ((int)uVar6 < (this->PlayerArray).ArrayNum);
  }
  return;
}

// SeamlessTravelTransitionCheckpoint @ 147c7f830

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
AGameStateBase::SeamlessTravelTransitionCheckpoint(AGameStateBase *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->PlayerArray).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->PlayerArray).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      APlayerState::SetIsFromPreviousLevel
                (*(APlayerState **)((this->PlayerArray).AllocatorInstance.Data + lVar5),true);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->PlayerArray).ArrayNum);
  }
  return;
}

// StaticRegisterNativesAGameStateBase @ 147c87fd0

void __cdecl AGameStateBase::StaticRegisterNativesAGameStateBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_AGameStateBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeleportTo @ 147c897f0

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
AGameStateBase::TeleportTo
          (AGameStateBase *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  
  bVar1 = AActor::TeleportTo((AActor *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// UpdateServerTimeSeconds @ 147c8ef00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameStateBase::UpdateServerTimeSeconds(AGameStateBase *this)

{
  UWorld *pUVar1;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    this->ReplicatedWorldTimeSecondsDouble = pUVar1->TimeSeconds;
  }
  return;
}

// ValidateGeneratedRepEnums @ 147c8f630

void __thiscall
AGameStateBase::ValidateGeneratedRepEnums
          (AGameStateBase *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

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
    ::FName::FName(&Name_GameModeClass,L"GameModeClass");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_SpectatorClass,L"SpectatorClass");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_bReplicatedHasBegunPlay,L"bReplicatedHasBegunPlay");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_ReplicatedWorldTimeSecondsDouble,L"ReplicatedWorldTimeSecondsDouble");
    _Init_thread_footer(&::_TSS3);
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
  if (Name_GameModeClass == FVar4) {
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
    if (Name_SpectatorClass == FVar4) {
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
      if (Name_bReplicatedHasBegunPlay == FVar4) {
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
        if (bVar3) {
          FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_ReplicatedWorldTimeSecondsDouble == FVar6) {
          return;
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\GameStateBase.gen.cpp"
                     ,0x2d4,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameStateBase"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execGetPlayerRespawnDelay @ 147c983f0

void __cdecl
AGameStateBase::execGetPlayerRespawnDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
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
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetPlayerStartTime @ 147c984a0

void __cdecl AGameStateBase::execGetPlayerStartTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x788))(param_1,local_res8);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetServerWorldTimeSeconds @ 147c98c20

void __cdecl
AGameStateBase::execGetServerWorldTimeSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x768))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execHasBegunPlay @ 147c99b00

void __cdecl AGameStateBase::execHasBegunPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x770))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execHasMatchEnded @ 147c99c40

void __cdecl AGameStateBase::execHasMatchEnded(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x780))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execHasMatchStarted @ 147c99cc0

void __cdecl AGameStateBase::execHasMatchStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x778))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execOnRep_GameModeClass @ 147c9b6f0

void __cdecl AGameStateBase::execOnRep_GameModeClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9b708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7c8))();
  return;
}

// execOnRep_ReplicatedHasBegunPlay @ 147c9b750

void __cdecl
AGameStateBase::execOnRep_ReplicatedHasBegunPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9b768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7d8))();
  return;
}

// execOnRep_ReplicatedWorldTimeSecondsDouble @ 147c9b780

void __cdecl
AGameStateBase::execOnRep_ReplicatedWorldTimeSecondsDouble
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9b798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7e8))();
  return;
}

// execOnRep_SpectatorClass @ 147c9b7b0

void __cdecl
AGameStateBase::execOnRep_SpectatorClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9b7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 2000))();
  return;
}

