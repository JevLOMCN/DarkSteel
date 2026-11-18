// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 40

// StaticClass @ 14b52d040

UClass * __cdecl ADS_NPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPC",&Z_Registration_Info_UClass_ADS_NPC.InnerSingleton,
               StaticRegisterNativesADS_NPC,0x7c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADS_NPC>,InternalVTableHelperCtorCaller<ADS_NPC>,
               local_res8,ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NPC.InnerSingleton;
}

// ADS_NPC @ 14b52e970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

ADS_NPC * __thiscall ADS_NPC::ADS_NPC(ADS_NPC *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->MonsterDeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->MultiHitCollisionComponent).field0_0x0.DebugPtr = (UDS_MultiHitCollisionComponent *)0x0;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->SmiteEffectUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  *(undefined8 *)&this->HitSphereComponents = 0;
  *(undefined8 *)&(this->HitSphereComponents).field_0x8 = 0;
  *(undefined8 *)&(this->HitSphereComponents).field_0x20 = 0;
  this->MonsterDeathEffectTick = 0.0;
  this->IsTalkMainQuest = false;
  this->bGimmickOpened = false;
  this->bGimmickEnabled = false;
  this->MountState = false;
  *(undefined4 *)&(this->HitSphereComponents).field_0x28 = 0;
  *(undefined4 *)&(this->HitSphereComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->HitSphereComponents).field_0x34 = 0;
  *(undefined4 *)&(this->HitSphereComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HitSphereComponents).field_0x40 = 0;
  *(undefined4 *)&(this->HitSphereComponents).field_0x48 = 0;
  this->bIsShowMultiHitCollision = false;
  this->bIsCreateServerHitCapsuleComponent = false;
  (this->ServerHitCapsuleInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerHitCapsuleInfoList).ArrayNum = 0;
  (this->ServerHitCapsuleInfoList).ArrayMax = 0;
  return this;
}

// ~ADS_NPC @ 14b530500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::~ADS_NPC(ADS_NPC *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->ServerHitCapsuleInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->HitSphereComponents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HitSphereComponents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HitSphereComponents);
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b532780

UClass * __cdecl ADS_NPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPC",&Z_Registration_Info_UClass_ADS_NPC.InnerSingleton,
               StaticRegisterNativesADS_NPC,0x7c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADS_NPC>,InternalVTableHelperCtorCaller<ADS_NPC>,
               local_res8,ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NPC.InnerSingleton;
}

// StaticRegisterNativesADS_NPC @ 14b533090

void __cdecl ADS_NPC::StaticRegisterNativesADS_NPC(void)

{
  return;
}

// ADS_NPC @ 14bc81970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

ADS_NPC * __thiscall ADS_NPC::ADS_NPC(ADS_NPC *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDS_ActorAttachedWidgetComponent *pUVar5;
  UDS_MultiHitCollisionComponent *pUVar6;
  UObject *pUVar7;
  FName local_res8;
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->MonsterDeathEffectComp).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->MultiHitCollisionComponent).field0_0x0.DebugPtr = (UDS_MultiHitCollisionComponent *)0x0;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->SmiteEffectUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  *(undefined8 *)&this->HitSphereComponents = 0;
  *(undefined8 *)&(this->HitSphereComponents).field_0x8 = 0;
  *(undefined8 *)&(this->HitSphereComponents).field_0x20 = 0;
  this->MonsterDeathEffectTick = 0.0;
  this->IsTalkMainQuest = false;
  this->bGimmickOpened = false;
  this->bGimmickEnabled = false;
  this->MountState = false;
  *(undefined4 *)&(this->HitSphereComponents).field_0x28 = 0;
  *(undefined4 *)&(this->HitSphereComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->HitSphereComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HitSphereComponents).field_0x34 = 0;
  *(undefined8 *)&(this->HitSphereComponents).field_0x40 = 0;
  *(undefined4 *)&(this->HitSphereComponents).field_0x48 = 0;
  (this->ServerHitCapsuleInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerHitCapsuleInfoList).ArrayNum = 0;
  (this->ServerHitCapsuleInfoList).ArrayMax = 0;
  this->bIsShowMultiHitCollision = false;
  this->bIsCreateServerHitCapsuleComponent = false;
  if (this->_padding_ != 0) {
    ::FName::FName(&local_res8,L"Npc");
    this->_padding_ = (longlong)local_res8;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8,1);
  }
  pFVar3 = ::FName::FName(&local_res8,"NameTagUIComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
  pUVar5 = (UDS_ActorAttachedWidgetComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->NameTagUIComponent).field0_0x0.DebugPtr = pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"MultiHitCollisionComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_MultiHitCollisionComponent_NoRegister();
  pUVar6 = (UDS_MultiHitCollisionComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_MultiHitCollisionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MultiHitCollisionComponent).field0_0x0.DebugPtr = pUVar6;
  pFVar3 = ::FName::FName(&local_res8,"TrajectoryComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_CharacterTrajectoryComponent_NoRegister();
  pUVar7 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  this->_padding_ = (longlong)pUVar7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  return this;
}

// BeginPlay @ 14bc886e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall ADS_NPC::BeginPlay(ADS_NPC *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  UDS_SyncRecvComponent *pUVar9;
  FDS_NpcBaseTableRow *this_00;
  UDS_NPCDataSet *this_01;
  UDS_TriggerCore *this_02;
  UDS_PartsSystemControl *pUVar10;
  UWN_ISKM_CharacterCore *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TReferenceControllerBase<1> *pTVar14;
  FDS_ResourcePresetTableRow *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  EDS_AbilityTagType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  int local_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  FDelegateAllocation local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  ForAnyElementType local_170;
  int local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  undefined1 local_138 [4];
  undefined8 local_134;
  undefined4 local_12c;
  ADS_NPC *local_128;
  undefined8 local_120;
  FSharedReferencer<1> local_118;
  FWN_EndOfRefs local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  bVar7 = UDS_GameInstance::GetIsAIGymMode();
  if ((bVar7) &&
     (pUVar1 = (this->NameTagUIComponent).field0_0x0.DebugPtr,
     pUVar1 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0xb58))(pUVar1,0);
  }
  ADS_EntityActorBase::BeginPlay((ADS_EntityActorBase *)this);
  pUVar9 = NewObject<UDS_SyncRecvComponent>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UDS_SyncRecvComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  this->_padding_ = (longlong)pUVar9;
  this_00 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
  bVar7 = FDS_NpcBaseTableRow::IsValid(this_00);
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2104227864130878910>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                         ,0x242,"table.IsValid()"), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar4 = ::COLLISION_PROFILE_NPC_NOCOLLISION;
  if ((this_00->IsCapsuleNoCollision == true) &&
     (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) {
    this->_padding_ = (longlong)::COLLISION_PROFILE_NPC_NOCOLLISION;
    (**(code **)(*plVar2 + 0x788))(plVar2,FVar4,1);
  }
  FVar4 = ::COLLISION_PROFILE_NPC_NOCOLLISION;
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    if (this_00->IsCapsuleNoCollision == true) {
      this->_padding_ = (longlong)::COLLISION_PROFILE_NPC_NOCOLLISION;
      (**(code **)(*plVar2 + 0x788))(plVar2,FVar4,1);
    }
    *(undefined1 *)(this->_padding_ + 0x287) = 0;
    local_138[0] = 3;
    local_134 = 0;
    local_12c = 0x3f800000;
    (**(code **)(*(longlong *)this->_padding_ + 0x6e8))((longlong *)this->_padding_,local_138);
  }
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  local_res20 = 0;
  local_res8[0] = SpawnUnbeatable;
  FDS_EntityBase::TryActivateAbility
            ((FDS_EntityBase *)&this->_padding_,local_res8,
             (TObjectPtr<UWN_AbilityContext>)&local_res20);
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res10);
  bVar7 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar7) {
    this_01 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res10);
    UDS_NPCDataSet::GetTriggerIDs(this_01,&local_158);
    if (0 < local_158.ArrayNum) {
      ADS_EntityActorBase::GetTriggerCore((ADS_EntityActorBase *)this);
      bVar7 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar7) {
        this_02 = (UDS_TriggerCore *)FWeakObjectPtr::Get(&local_res18);
        FVar5.Data = local_158.AllocatorInstance.Data;
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_158.ArrayNum == 0) {
          local_148.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_158.ArrayNum,0,&local_148.AllocatorInstance,local_158.ArrayNum,
                     &local_148.ArrayMax);
          memcpy(local_148.AllocatorInstance.Data,FVar5.Data,(longlong)local_158.ArrayNum << 2);
        }
        UDS_TriggerCore::CreateTrigger(this_02,&local_148,false);
      }
    }
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
  }
  InitOutlineColor(this);
  pUVar10 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (pUVar10 == (UDS_PartsSystemControl *)0x0) {
    pUVar10 = NewObject<UDS_PartsSystemControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->PartsSystemControl).field0_0x0.DebugPtr = pUVar10;
  }
  pUVar11 = NewObject<UWN_ISKM_CharacterCore>((UObject *)this);
  UDS_PartsSystemControl::Init(pUVar10,(UWN_CS_CharacterCore *)pUVar11,false);
  pUVar10 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__72__flat______;
  local_158.ArrayMax = local_110.TaskCaller.SharedReferenceCount.ReferenceController._4_4_;
  local_158.ArrayNum = 0x2c0;
  local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_188.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_190,(FWriteAccessScope *)&local_88);
  local_70 = &local_188;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_188);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_NPC____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_128 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_128);
    puVar12[4] = local_158.AllocatorInstance.Data;
    puVar12[5] = CONCAT44(local_158.ArrayMax,local_158.ArrayNum);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  local_110.TaskCaller.Object = (void *)0x0;
  local_110.TaskCaller.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_190,&local_68);
  if (((local_188.DelegateSize == 0) ||
      (local_188.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar8 = (**(code **)(*(longlong *)local_188.DelegateAllocator + 0x38))(), cVar8 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (!bVar7) goto LAB_14bc88cfe;
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_190,&local_50);
  if ((local_188.DelegateSize != 0) &&
     (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_188.DelegateAllocator + 0x50))
              (local_188.DelegateAllocator,&local_178);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_100);
  iVar6 = local_168;
  FVar5.Data = local_170.Data;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_e8);
  if (local_198 == 0) {
LAB_14bc88b8e:
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
  }
  else if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_1a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a0,0,0,0x10);
    local_198 = 0;
    goto LAB_14bc88b8e;
  }
  local_1a0.Data = FVar5.Data;
  local_198 = iVar6;
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_d0);
  if ((local_168 != 0) && (local_170.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_170.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_170,0,0,0x10);
    local_168 = 0;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector);
  pTVar14 = ::operator_new(0x30);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar14 + 1) = 0;
    pTVar14[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar14[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar14 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8);
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16 = pTVar14;
  }
  local_120 = 0;
  local_118.ReferenceController = pTVar16;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_110.TaskCaller.SharedReferenceCount,&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_b8);
  if ((local_198 != 0) && (local_1a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a0,0,0,0x10);
    local_198 = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
LAB_14bc88cfe:
  pFVar15 = FDS_NpcBaseTableRow::ID_ResourcePresetTable(this_00);
  UDS_PartsSystemControl::RefreshAsync(pUVar10,(AActor *)this,pFVar15,&local_110,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_190,(FWriteAccessScope *)&local_a0);
  if ((local_188.DelegateSize != 0) &&
     (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_188.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_188,0,0,0x10);
    local_188.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_188.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
  return;
}

// CreateServerHitCapsuleComponent @ 14bc95bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_NPC::CreateServerHitCapsuleComponent(ADS_NPC *this)

{
  TRotator<double> *this_00;
  byte *pbVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  float fVar18;
  int iVar19;
  int iVar20;
  FDS_NpcBaseTableRow *pFVar21;
  FDS_NpcBattleTableRow *pFVar22;
  UClass *pUVar23;
  UCapsuleComponent *this_01;
  FPayload *pFVar24;
  TQuat<double> *pTVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ForAnyElementType FVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr FStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  UCapsuleComponent *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  TArray<FDS_MultiHitCollisionTableRow_const_*,TSizedDefaultAllocator<32>_> local_1a0;
  TVector<double>_u_0 local_188;
  undefined1 local_168 [16];
  double local_158;
  TQuat<double> local_148;
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (this->bIsCreateServerHitCapsuleComponent != true) {
    this->bIsCreateServerHitCapsuleComponent = true;
    pFVar21 = FDS_NpcBaseTableRow::Get(this->_padding_,true);
    if ((((pFVar21 != (FDS_NpcBaseTableRow *)0x0) && (0 < pFVar21->ID_NpcBattle)) &&
        (pFVar22 = FDS_NpcBattleTableRow::Get((longlong)pFVar21->ID_NpcBattle,true),
        pFVar22 != (FDS_NpcBattleTableRow *)0x0)) && (0 < pFVar22->MultiHitCollisionGid)) {
      local_1e0.Data = (FScriptContainerElement *)0x0;
      local_1d8 = 0;
      FDS_MultiHitCollisionTableRow::GetAll(&local_1a0);
      iVar20 = local_1a0.ArrayNum;
      pFVar3 = local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayNum * 8;
      FVar28.Data = local_1a0.AllocatorInstance.Data;
      while( true ) {
        if (local_1a0.ArrayNum != iVar20) {
          `TCheckedPointerIterator<FDS_MultiHitCollisionTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1e8);
        }
        fVar18 = __real_40a00000;
        iVar19 = (int)local_1d8;
        if (FVar28.Data == pFVar3) break;
        lVar11 = *(longlong *)FVar28.Data;
        if (*(int *)(lVar11 + 0x20) == pFVar22->MultiHitCollisionGid) {
          if ((int)local_1d8 == local_1d8._4_4_) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1e0,(int *)((longlong)&local_1d8 + 4));
          }
          local_1d8 = CONCAT44(local_1d8._4_4_,iVar19 + 1);
          *(longlong *)(local_1e0.Data + (longlong)iVar19 * 8) = lVar11;
        }
        FVar28.Data = FVar28.Data + 8;
      }
      uVar26 = (ulonglong)(int)local_1d8;
      pFVar3 = local_1e0.Data + uVar26 * 8;
      FVar28.Data = local_1e0.Data;
      while( true ) {
        if ((int)uVar26 != iVar19) {
          `TCheckedPointerIterator<FDS_MultiHitCollisionTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1e8);
        }
        if (FVar28.Data == pFVar3) break;
        lVar11 = *(longlong *)FVar28.Data;
        local_1b0 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar23 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_128,pUVar23);
        local_128._48_8_ = (FObjectInstancingGraph *)0x0;
        local_128._56_8_ = (UPackage *)0x0;
        local_128._16_4_ = 0;
        local_128._20_4_ = 0;
        local_128._24_4_ = RF_Transient;
        local_128._40_8_ = (UObject *)0x0;
        local_128[0x20] = false;
        local_128._8_8_ = this;
        this_01 = (UCapsuleComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
        if (local_128._64_8_ != 0) {
          plVar27 = (longlong *)(local_128 + 0x50);
          if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
            plVar27 = (longlong *)local_128._104_8_;
          }
          (**(code **)(*plVar27 + 0x10))();
        }
        if (this_01 == (UCapsuleComponent *)0x0) break;
        pbVar1 = (byte *)((longlong)&this_01->_padding_ + 3);
        *pbVar1 = *pbVar1 & 0xfe;
        pbVar1 = (byte *)((longlong)&this_01->_padding_ + 2);
        *pbVar1 = *pbVar1 & 0xf9;
        USceneComponent::SetHiddenInGame((USceneComponent *)this_01,true,DirtyOnly);
        *(FColor_u_0 *)&this_01->_padding_ = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
        UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar18);
        UCapsuleComponent::SetCapsuleSize
                  (this_01,this_01->CapsuleRadius,(float)*(int *)(lVar11 + 0x24),true);
        auVar33 = ZEXT416((uint)(float)*(int *)(lVar11 + 0x28));
        UCapsuleComponent::SetCapsuleSize
                  (this_01,(float)*(int *)(lVar11 + 0x28),this_01->CapsuleHalfHeight,true);
        fVar5 = *(float *)&this->_padding_;
        dVar6 = *(double *)(lVar11 + 0x40);
        dVar45 = (double)this_01->_padding_;
        dVar7 = *(double *)(lVar11 + 0x38);
        dVar8 = *(double *)(lVar11 + 0x30);
        auVar9._0_8_ = this_01->_padding_;
        auVar9._8_8_ = this_01->_padding_;
        local_158 = dVar45;
        pFVar24 = FRotationConversionCache::GetOrCreatePayload
                            ((FRotationConversionCache *)&this_01->_padding_);
        this_00 = &pFVar24->CachedRotator;
        if ((((double)auVar9._0_8_ != (pFVar24->CachedRotator).Pitch) ||
            (auVar17._4_8_ = extraout_XMM0_Qb,
            auVar17._0_4_ = (int)((ulonglong)auVar9._0_8_ >> 0x20),
            auVar32._0_8_ = auVar17._0_8_ << 0x20, auVar32._8_4_ = (int)auVar9._8_8_,
            auVar32._12_4_ = (int)((ulonglong)auVar9._8_8_ >> 0x20),
            auVar32._8_8_ != (pFVar24->CachedRotator).Yaw)) ||
           (local_158 != (pFVar24->CachedRotator).Roll)) {
          auVar32 = divpd(auVar9,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
          auVar32 = roundpd(auVar33,auVar32,3);
          auVar33._8_8_ = 0;
          auVar33._0_8_ = dVar45;
          auVar33 = divpd(auVar33,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
          dVar13 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
          auVar39._0_8_ = auVar32._0_8_ * dVar13;
          dVar14 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
          auVar39._8_8_ = auVar32._8_8_ * dVar14;
          dVar38 = (double)auVar9._0_8_ - auVar39._0_8_;
          dVar16 = (double)auVar9._8_8_ - auVar39._8_8_;
          auVar33 = roundpd(auVar39,auVar33,3);
          dVar15 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
          auVar34._8_4_ = SUB84(dVar16,0);
          auVar34._0_8_ = dVar38;
          auVar34._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          dVar45 = dVar45 - auVar33._0_8_ * dVar15;
          dVar46 = 0.0 - auVar33._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          dVar37 = auVar34._8_8_ + dVar14;
          uVar26 = -(ulonglong)(0.0 <= dVar38);
          uVar30 = -(ulonglong)(0.0 <= dVar16);
          auVar40._0_8_ = uVar26 & (ulonglong)dVar38;
          auVar40._8_4_ = (undefined4)(uVar30 & (ulonglong)dVar16);
          auVar40._12_4_ = (undefined4)((uVar30 & (ulonglong)dVar16) >> 0x20);
          auVar43._0_4_ = ~(uint)uVar26 & SUB84(dVar38 + dVar13,0);
          auVar43._4_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)(dVar38 + dVar13) >> 0x20);
          auVar43._8_4_ = ~(uint)uVar30 & SUB84(dVar37,0);
          auVar43._12_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
          auVar35._8_4_ = SUB84(dVar46,0);
          auVar35._0_8_ = dVar45;
          auVar35._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          dVar38 = auVar35._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          auVar43 = auVar43 | auVar40;
          uVar26 = -(ulonglong)(0.0 <= dVar45);
          uVar30 = -(ulonglong)(0.0 <= dVar46);
          auVar44._0_4_ = ~(uint)uVar26 & SUB84(dVar45 + dVar15,0);
          auVar44._4_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar15) >> 0x20);
          auVar44._8_4_ = ~(uint)uVar30 & SUB84(dVar38,0);
          auVar44._12_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
          auVar42._0_8_ = uVar26 & (ulonglong)dVar45;
          auVar42._8_4_ = (undefined4)(uVar30 & (ulonglong)dVar46);
          auVar42._12_4_ = (undefined4)((uVar30 & (ulonglong)dVar46) >> 0x20);
          auVar44 = auVar44 | auVar42;
          uVar30 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar43._0_8_);
          uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar43._8_8_);
          uVar29 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar44._0_8_);
          auVar41._0_8_ = uVar30 & (ulonglong)(auVar43._0_8_ - dVar13);
          uVar26 = uVar31 & (ulonglong)(auVar43._8_8_ - dVar14);
          auVar41._8_4_ = (undefined4)uVar26;
          auVar41._12_4_ = (undefined4)(uVar26 >> 0x20);
          auVar36._0_4_ = ~(uint)uVar30 & auVar43._0_4_;
          auVar36._4_4_ = ~(uint)(uVar30 >> 0x20) & auVar43._4_4_;
          auVar36._8_4_ = ~(uint)uVar31 & auVar43._8_4_;
          auVar36._12_4_ = ~(uint)(uVar31 >> 0x20) & auVar43._12_4_;
          this_00->Pitch = (double)SUB168(auVar41 | auVar36,0);
          this_00->Yaw = (double)SUB168(auVar41 | auVar36,8);
          (pFVar24->CachedRotator).Roll =
               (double)((ulonglong)(auVar44._0_8_ - dVar15) & uVar29 |
                       CONCAT44(~(uint)(uVar29 >> 0x20) & auVar44._4_4_,
                                ~(uint)uVar29 & auVar44._0_4_));
          local_168 = auVar9;
          pTVar25 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_168);
          dVar45 = pTVar25->Y;
          (pFVar24->CachedQuat).X = pTVar25->X;
          (pFVar24->CachedQuat).Y = dVar45;
          dVar45 = pTVar25->W;
          (pFVar24->CachedQuat).Z = pTVar25->Z;
          (pFVar24->CachedQuat).W = dVar45;
        }
        local_148.X = (pFVar24->CachedQuat).X;
        local_148.Y = (pFVar24->CachedQuat).Y;
        local_148.Z = (pFVar24->CachedQuat).Z;
        local_148.W = (pFVar24->CachedQuat).W;
        local_188._s_0.X = dVar7;
        local_188._s_0.Y = dVar8;
        local_188._s_0.Z = dVar6 - (double)fVar5;
        USceneComponent::SetRelativeLocationAndRotation
                  ((USceneComponent *)this_01,(TVector<double> *)&local_188._s_0,&local_148,false,
                   (FHitResult *)0x0,None);
        local_1a8 = 0;
        (**(code **)(this_01->_padding_ + 0x508))
                  (this_01,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent((UActorComponent *)this_01);
        (**(code **)(this_01->_padding_ + 1000))(this_01);
        local_1d0.ObjectIndex = 0;
        local_1d0.ObjectSerialNumber = 0;
        local_1b8 = (UCapsuleComponent *)0x0;
        FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_1b8);
        FStack_1c8.ObjectIndex = 0;
        FStack_1c8.ObjectSerialNumber = 0;
        local_1c0 = 0;
        local_1b8 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_1b8);
        cVar10 = *(char *)(lVar11 + 0x48);
        if (cVar10 == '\0') {
          FStack_1c8.ObjectIndex = 0;
          FStack_1c8.ObjectSerialNumber = 0;
        }
        else if (cVar10 == '\x01') {
          local_1c0 = *(undefined4 *)(lVar11 + 0x4c);
          FStack_1c8.ObjectIndex = 0x10;
          FStack_1c8.ObjectSerialNumber = 0;
        }
        else if (cVar10 == '\x02') {
          FStack_1c8.ObjectIndex = 0x3000;
          FStack_1c8.ObjectSerialNumber = 0;
        }
        else if (cVar10 == '\x03') {
          FStack_1c8.ObjectIndex = 0x80;
          FStack_1c8.ObjectSerialNumber = 0;
        }
        iVar20 = (this->ServerHitCapsuleInfoList).ArrayNum;
        piVar2 = &(this->ServerHitCapsuleInfoList).ArrayMax;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(this->ServerHitCapsuleInfoList).AllocatorInstance,piVar2);
        }
        FVar28.Data = FVar28.Data + 8;
        (this->ServerHitCapsuleInfoList).ArrayNum = iVar20 + 1;
        pFVar12 = (this->ServerHitCapsuleInfoList).AllocatorInstance.Data;
        pFVar4 = (FWeakObjectPtr *)(pFVar12 + (longlong)iVar20 * 0x18);
        *pFVar4 = local_1d0;
        pFVar4[1] = FStack_1c8;
        *(ulonglong *)(pFVar12 + (longlong)iVar20 * 0x18 + 0x10) = CONCAT44(uStack_1bc,local_1c0);
        uVar26 = local_1d8 & 0xffffffff;
      }
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      if (local_1e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data);
      }
    }
  }
  return;
}

// EndPlay @ 14bc96b50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::EndPlay(ADS_NPC *this,Type param_1)

{
  UDS_PartsSystemControl::Deinit((this->PartsSystemControl).field0_0x0.DebugPtr);
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// GetCollisionComponents @ 14bc9f410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
ADS_NPC::GetCollisionComponents
          (ADS_NPC *this,
          TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  if ((UDS_ColliderCore *)this->_padding_ != (UDS_ColliderCore *)0x0) {
    UDS_ColliderCore::GetShapeComponents((UDS_ColliderCore *)this->_padding_,__return_storage_ptr__)
    ;
    return __return_storage_ptr__;
  }
  FDS_EntityBase::GetCollisionComponents((FDS_EntityBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEntitySpawnRange @ 14bc9f590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

EDS_EntitySpawnRange __thiscall ADS_NPC::GetEntitySpawnRange(ADS_NPC *this)

{
  EDS_EntitySpawnRange EVar1;
  FDS_NpcBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_NpcBaseTableRow::Get(this->_padding_,true);
  if (pFVar2 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_NPC::GetEntitySpawnRange",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x206,L"npcBaseTable is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    EVar1 = None;
  }
  else {
    EVar1 = pFVar2->EntitySpawnRange;
  }
  return EVar1;
}

// GetHitSphereComponent @ 14bca0150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
ADS_NPC::GetHitSphereComponent
          (ADS_NPC *this,int param_1,TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr *pFVar4;
  longlong *plVar5;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FDS_EntityBase::GetIsMultiHitCollision((FDS_EntityBase *)this);
  if (bVar1) {
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_NPC::GetHitSphereComponent",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x345,L"HitSphereComponents is empty.");
    }
    else {
      plVar5 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar5 = &this->_padding_;
      }
      iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(int *)(this->_padding_ + (longlong)iVar2 * 0x14) == param_1) {
            pFVar4 = &TMapBase<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
                      ::FindChecked((TMapBase<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
                                     *)&this->_padding_,param_1)->WeakPtr;
            param_2->WeakPtr = *pFVar4;
            return true;
          }
          iVar2 = *(int *)(this->_padding_ + 0xc + (longlong)iVar2 * 0x14);
        } while (iVar2 != -1);
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_NPC::GetHitSphereComponent",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x34b,L"Couldn\'t find HitSphere. (%d)");
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return false;
}

// GetHitSphereComponents @ 14bca0320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
ADS_NPC::GetHitSphereComponents
          (ADS_NPC *this,
          TMap<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
          *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = FDS_EntityBase::GetIsMultiHitCollision((FDS_EntityBase *)this);
  if (bVar2) {
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      if (param_1 !=
          (TMap<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
           *)&this->_padding_) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&param_1->field_0x38,(int *)&param_1->field_0x48
                   ,(ForElementType<FSetElementId> *)&this->_padding_,(int)this->_padding_);
        iVar1 = (int)this->_padding_;
        TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1,iVar1);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar1,(ForAnyElementType *)param_1,(int *)&param_1->field_0x8,
                   (int *)&param_1->field_0xc);
        *(int *)&param_1->field_0x30 = (int)this->_padding_;
        *(undefined4 *)&param_1->field_0x34 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        if ((longlong *)&param_1->field_0x10 != &this->_padding_) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10,
                     (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_);
        }
        if (iVar1 != 0) {
          memcpy(*(void **)param_1,(void *)this->_padding_,(longlong)iVar1 * 0x14);
        }
      }
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_NPC::GetHitSphereComponents",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x334,L"HitSphereComponents is empty.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// GetNameTagUIComponent @ 14bca0910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
ADS_NPC::GetNameTagUIComponent(ADS_NPC *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>)in_RDX;
}

// GetNpcBaseTable @ 14bca0e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

FDS_NpcBaseTableRow * __thiscall ADS_NPC::GetNpcBaseTable(ADS_NPC *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_NpcBaseTableRow *pFVar3;
  
  pFVar3 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
  bVar2 = FDS_NpcBaseTableRow::IsValid(pFVar3);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2104227864130878910>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                       ,0x242,"table.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDS_NpcBaseTableRow *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetPartsSystemControl @ 14bca14d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_NPC::GetPartsSystemControl(ADS_NPC *this)

{
  UDS_PartsSystemControl *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_PartsSystemControl *local_res8;
  
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_PartsSystemControl *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// GetResourcePresetTableRow @ 14bca1860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

FDS_ResourcePresetTableRow * __thiscall ADS_NPC::GetResourcePresetTableRow(ADS_NPC *this)

{
  FDS_NpcBaseTableRow *this_00;
  FDS_ResourcePresetTableRow *pFVar1;
  
  this_00 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
  pFVar1 = FDS_NpcBaseTableRow::ID_ResourcePresetTable(this_00);
  return pFVar1;
}

// InitBubbleTalk @ 14bca3f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::InitBubbleTalk(ADS_NPC *this)

{
  UDS_TriggerCore *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->_padding_ == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_NPC::InitBubbleTalk",0x17,Yes);
    pwVar5 = L"TriggerCore is nullptr.";
    uVar4 = 0x198;
  }
  else {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_148);
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_148);
      if (*(int *)&pUVar3[4].field_0x20 < 1) {
        return;
      }
      this_00 = (UDS_TriggerCore *)this->_padding_;
      pUVar3 = FWeakObjectPtr::Get(local_148);
      UDS_TriggerCore::AddTriggerComponent
                (this_00,BubbleTalk,(float)*(int *)&pUVar3[4].field_0x24,false);
      UDS_TriggerCore::SetGenerateOverlapEvent((UDS_TriggerCore *)this->_padding_,BubbleTalk,true);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_NPC::InitBubbleTalk",0x17,Yes);
    pwVar5 = L"npcDataSet is nullptr.";
    uVar4 = 0x1a0;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// InitCollide @ 14bca4120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::InitCollide(ADS_NPC *this)

{
  FDS_NpcBaseTableRow *pFVar1;
  
  if (this->_padding_ != 0) {
    pFVar1 = GetNpcBaseTable(this);
    if (pFVar1->ID_Collide != 0) {
      UDS_ColliderCore::AddColliderComponent((UDS_ColliderCore *)this->_padding_,pFVar1->ID_Collide)
      ;
      return;
    }
  }
  return;
}

// InitData @ 14bca4160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPC::InitData(ADS_NPC *this,FDS_SpawnInfo *param_1)

{
  FDS_EntityBase::InitData((FDS_EntityBase *)this,param_1);
  *(bool *)((longlong)&this->_padding_ + 1) = param_1->bGimmickOpened;
  *(bool *)((longlong)&this->_padding_ + 2) = param_1->bGimmickEnabled;
  return;
}

// InitGimmickState @ 14bca4720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::InitGimmickState(ADS_NPC *this)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDS_NpcBaseTableRow *this_00;
  UDS_NPCGimmickData *this_01;
  UObject *pUVar4;
  int iVar5;
  FWeakObjectPtr *pFVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr *local_28 [2];
  
  this_00 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
  bVar3 = FDS_NpcBaseTableRow::IsValid(this_00);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2104227864130878910>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                       ,0x242,"table.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this_00->NpcGimmickType != None) {
    UDS_NPCGimmickData::GetData((ulong64)&local_res10);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      this_01 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_res10);
      UDS_NPCGimmickData::SetIsSpawn(this_01,true,this->bGimmickEnabled,this->bGimmickOpened);
      if (this->bGimmickOpened == true) {
        (**(code **)(this->_padding_ + 0x168))(&this->_padding_,local_28);
        iVar5 = (int)local_28[1];
        pFVar1 = local_28[0] + iVar5;
        pFVar6 = local_28[0];
        while( true ) {
          if ((int)local_28[1] != iVar5) {
            `TCheckedPointerIterator<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar6 == pFVar1) break;
          local_res18[0] = *pFVar6;
          bVar3 = FWeakObjectPtr::IsValid(local_res18);
          if (bVar3) {
            pUVar4 = FWeakObjectPtr::Get(local_res18);
            (**(code **)(*(longlong *)pUVar4 + 0x788))(pUVar4,::COLLISION_PROFILE_NOCOLLISION,1);
          }
          pFVar6 = pFVar6 + 1;
        }
        if (local_28[0] != (FWeakObjectPtr *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
    }
  }
  return;
}

// InitMultiHitPoint @ 14bca4c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::InitMultiHitPoint(ADS_NPC *this)

{
  UDS_MultiHitCollisionComponent *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int local_res8 [2];
  TPairInitializer<int_&&,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_&> local_res10;
  UObject *local_res20;
  TArray<TObjectPtr<USphereComponent>,TSizedDefaultAllocator<32>_> local_58;
  int *local_48;
  TWeakObjectPtr<USphereComponent,FWeakObjectPtr> **local_40;
  ulonglong uVar9;
  
  this_00 = (this->MultiHitCollisionComponent).field0_0x0.DebugPtr;
  if (this_00 != (UDS_MultiHitCollisionComponent *)0x0) {
    UDS_MultiHitCollisionComponent::Init(this_00);
    UDS_MultiHitCollisionComponent::GetHitSphereCompList
              ((this->MultiHitCollisionComponent).field0_0x0.DebugPtr,&local_58);
    uVar5 = (ulonglong)local_58.ArrayNum;
    uVar7 = 0;
    uVar6 = uVar5;
    uVar9 = uVar7;
    if (0 < local_58.ArrayNum) {
      while( true ) {
        uVar8 = (uint)uVar9;
        uVar3 = 0;
        if ((int)uVar8 < (int)uVar6) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar4 = *(UObject **)(local_58.AllocatorInstance.Data + uVar7 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
        }
        local_res10.Value = (TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)0x0;
        local_res20 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_res20);
        bVar2 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_res10.Value,
                           (void *)0x0);
        if (!bVar2) {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res10.Value);
          (**(code **)(*(longlong *)pUVar4 + 0x788))(pUVar4,::COLLISION_PROFILE_NPC_NOCOLLISION,1);
          local_res8[0] = uVar8 + 1;
          local_48 = local_res8;
          local_40 = &local_res10.Value;
          TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&&,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_&>_>
                    ((TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&this->HitSphereComponents,&local_res10,(bool *)&local_48);
        }
        uVar7 = uVar7 + 1;
        if ((longlong)uVar5 <= (longlong)uVar7) break;
        uVar6 = (ulonglong)(uint)local_58.ArrayNum;
        uVar9 = (ulonglong)(uVar8 + 1);
      }
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// InitOutlineColor @ 14bca4df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::InitOutlineColor(ADS_NPC *this)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  FDS_NpcBaseTableRow *this_01;
  UObject *pUVar6;
  FDS_NpcBattleTableRow *pFVar7;
  FDS_ResourceColorTableRow *pFVar8;
  long64 lVar9;
  float fVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  this_01 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
  bVar5 = FDS_NpcBaseTableRow::IsValid(this_01);
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2104227864130878910>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                         ,0x242,"table.IsValid()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this_01->ID_NpcBattle < 1) {
    if (this_01->NpcGimmickType == GimmickInteraction) {
      lVar9 = 0x1388c;
    }
    else {
      lVar9 = 0x1388b;
      if (this_01->NpcGimmickType == GimmickBreak) {
        lVar9 = 0x1388d;
      }
    }
  }
  else {
    UDS_CharInfoData::GetData((ulong64)&local_res8);
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharInfoData::GetData((ulong64)&local_res10);
    lVar9 = 0;
    bVar5 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if ((!bVar5) &&
       (bVar5 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,
                           (void *)0x0), !bVar5)) {
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      this_00 = &pUVar6[0xf].field_0x18;
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      puVar1 = &pUVar6[0xf].field_0x18;
      bVar5 = FDS_TeamInfo::IsEnemyTeam((FDS_TeamInfo *)this_00,(FDS_TeamInfo *)puVar1);
      if (bVar5) {
        pFVar7 = FDS_NpcBaseTableRow::ID_NpcBattleTable(this_01);
        lVar9 = (ulonglong)(pFVar7->IsSearchingType == true) + 0x1388f;
      }
      else {
        bVar5 = FDS_TeamInfo::IsFriendTeam((FDS_TeamInfo *)this_00,(FDS_TeamInfo *)puVar1);
        if (bVar5) {
          lVar9 = 0x13891;
        }
        else {
          bVar5 = FDS_TeamInfo::IsNeutralTeam((FDS_TeamInfo *)this_00,(FDS_TeamInfo *)puVar1);
          if (bVar5) {
            lVar9 = 0x1388e;
          }
        }
      }
    }
  }
  pFVar8 = FDS_ResourceColorTableRow::GetRef(lVar9,true);
  fVar2 = FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.G];
  fVar3 = FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.B];
  fVar10 = (float)(pFVar8->Color).field0_0x0._s_0.A * __real_3b808081;
  *(float *)((longlong)&this->_padding_ + 4) =
       FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.R];
  *(float *)&this->_padding_ = fVar2;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3;
  *(float *)&this->_padding_ = fVar10;
  return;
}

// InitTriggers @ 14bca5380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::InitTriggers(ADS_NPC *this)

{
  ForAnyElementType _Src;
  bool bVar1;
  UDS_NPCDataSet *this_00;
  UDS_TriggerCore *this_01;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res8);
    UDS_NPCDataSet::GetTriggerIDs(this_00,&local_18);
    if (0 < local_18.ArrayNum) {
      ADS_EntityActorBase::GetTriggerCore((ADS_EntityActorBase *)this);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        this_01 = (UDS_TriggerCore *)FWeakObjectPtr::Get(&local_res10);
        _Src.Data = local_18.AllocatorInstance.Data;
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_18.ArrayNum == 0) {
          local_28.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_18.ArrayNum,0,&local_28.AllocatorInstance,local_18.ArrayNum,
                     &local_28.ArrayMax);
          memcpy(local_28.AllocatorInstance.Data,_Src.Data,(longlong)local_18.ArrayNum << 2);
        }
        UDS_TriggerCore::CreateTrigger(this_01,&local_28,false);
      }
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// InitWidgets @ 14bca5970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPC::InitWidgets(ADS_NPC *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_DataBase *this_00;
  FDS_NpcBaseTableRow *pFVar5;
  UObject *pUVar6;
  FDS_UniqueBpTableRow *pFVar7;
  FDS_ResourceEtcTableRow *pFVar8;
  UDS_NPCDataSet *this_01;
  FName *pFVar9;
  UClass *pUVar10;
  UDS_ActorAttachedWidgetComponent *pUVar11;
  long64 lVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40 [2];
  
  FDS_EntityBase::GetCharInfoData((FDS_EntityBase *)&this->_padding_);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2104227864130879202>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                       ,0x11e,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bca5a39:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2104227864130879195>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                       ,0x125,"false");
    if (bVar3) goto code_r0x00014bca5a39;
  }
  else {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    iVar4 = UDS_DataBase::GetEntityTableID(this_00);
    pFVar5 = FDS_NpcBaseTableRow::GetRef((longlong)iVar4,true);
    if (pFVar5->IsNameTag == true) {
      pUVar11 = (this->NameTagUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar11 + 0x508);
      ::FName::FName(&local_70,"NameTag");
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      (*pcVar2)(pUVar11,pUVar6,&FAttachmentTransformRules::KeepRelativeTransform);
      bVar3 = FDS_EntityBase::IsMountNPC((FDS_EntityBase *)&this->_padding_);
      if (bVar3) {
        lVar12 = 0x10;
      }
      else {
        lVar12 = 7;
        if (pFVar5->ID_NpcBattle < 1) {
          lVar12 = 6;
        }
      }
      pFVar7 = FDS_UniqueBpTableRow::GetRef(lVar12,true);
      pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar7);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->NameTagUIComponent).field0_0x0.DebugPtr,&pFVar8->ResourcePath);
    }
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      this_01 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res18);
      bVar3 = UDS_NPCDataSet::HasInteractionData(this_01);
      if (bVar3) {
        if ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr ==
            (UDS_ActorAttachedWidgetComponent *)0x0) {
          pFVar9 = ::FName::FName(&local_68,L"InteractionPrepareUIComponent");
          FVar1 = *pFVar9;
          pUVar10 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
          pUVar11 = NewObject<UDS_ActorAttachedWidgetComponent>
                              ((UObject *)this,pUVar10,FVar1,RF_NoFlags,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar11 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr = pUVar11;
        }
        pFVar7 = FDS_UniqueBpTableRow::GetRef(0xb,true);
        pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar7);
        local_res20 = 0;
        USceneComponent::SetupAttachment
                  ((USceneComponent *)(this->InteractionPrepareUIComponent).field0_0x0.DebugPtr,
                   (USceneComponent *)this->_padding_,(FName)0x0);
        pUVar11 = (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr;
        pcVar2 = *(code **)(*(longlong *)pUVar11 + 0x508);
        ::FName::FName(&local_60,"Interaction");
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        (*pcVar2)(pUVar11,pUVar6,&FAttachmentTransformRules::KeepRelativeTransform);
        UDS_ActorAttachedWidgetComponent::Init
                  ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr,&pFVar8->ResourcePath);
        UActorComponent::RegisterComponent
                  ((UActorComponent *)(this->InteractionPrepareUIComponent).field0_0x0.DebugPtr);
        if ((this->InteractionIconUIComponent).field0_0x0.DebugPtr ==
            (UDS_ActorAttachedWidgetComponent *)0x0) {
          pFVar9 = ::FName::FName(&local_58,L"InteractionIconUIComponent");
          FVar1 = *pFVar9;
          pUVar10 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
          pUVar11 = NewObject<UDS_ActorAttachedWidgetComponent>
                              ((UObject *)this,pUVar10,FVar1,RF_NoFlags,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar11 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          (this->InteractionIconUIComponent).field0_0x0.DebugPtr = pUVar11;
        }
        pFVar7 = FDS_UniqueBpTableRow::GetRef(0xc,true);
        pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar7);
        USceneComponent::SetupAttachment
                  ((USceneComponent *)(this->InteractionIconUIComponent).field0_0x0.DebugPtr,
                   (USceneComponent *)this->_padding_,(FName)0x0);
        pUVar11 = (this->InteractionIconUIComponent).field0_0x0.DebugPtr;
        pcVar2 = *(code **)(*(longlong *)pUVar11 + 0x508);
        ::FName::FName(&local_50,"Interaction");
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        (*pcVar2)(pUVar11,pUVar6,&FAttachmentTransformRules::KeepRelativeTransform);
        UDS_ActorAttachedWidgetComponent::Init
                  ((this->InteractionIconUIComponent).field0_0x0.DebugPtr,&pFVar8->ResourcePath);
        UActorComponent::RegisterComponent
                  ((UActorComponent *)(this->InteractionIconUIComponent).field0_0x0.DebugPtr);
      }
    }
    if ((this->SmiteEffectUIComponent).field0_0x0.DebugPtr ==
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar9 = ::FName::FName(&local_48,L"SmiteEffectUIComponent");
      FVar1 = *pFVar9;
      pUVar10 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
      pUVar11 = NewObject<UDS_ActorAttachedWidgetComponent>
                          ((UObject *)this,pUVar10,FVar1,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar11 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      (this->SmiteEffectUIComponent).field0_0x0.DebugPtr = pUVar11;
    }
    pFVar7 = FDS_UniqueBpTableRow::GetRef(0xd,true);
    pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar7);
    pUVar11 = (this->SmiteEffectUIComponent).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(*(longlong *)pUVar11 + 0x508);
    pFVar9 = ::FName::FName(local_40,"Buff_Mid");
    FVar1 = *pFVar9;
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    (*pcVar2)(pUVar11,pUVar6,&FAttachmentTransformRules::KeepRelativeTransform,FVar1);
    UDS_ActorAttachedWidgetComponent::Init
              ((this->SmiteEffectUIComponent).field0_0x0.DebugPtr,&pFVar8->ResourcePath);
    UActorComponent::RegisterComponent
              ((UActorComponent *)(this->SmiteEffectUIComponent).field0_0x0.DebugPtr);
  }
  return;
}

// IsInteractingWithMainCharacter @ 14bca76c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall ADS_NPC::IsInteractingWithMainCharacter(ADS_NPC *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCDataSet *pUVar3;
  UDS_NPCLingData *this_00;
  UObject *pUVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_160;
  ulong64 local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_150);
  bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_NPC::IsInteractingWithMainCharacter",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x2da,L"npcDataSet is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
    bVar1 = UDS_NPCDataSet::HasLing(pUVar3);
    if (bVar1) {
      UDS_NPCLingData::GetData((ulong64)local_148);
      bVar1 = FWeakObjectPtr::IsValid(local_148);
      if (bVar1) {
        this_00 = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_148);
        bVar1 = UDS_NPCLingData::IsLingSuccess(this_00);
        if (!bVar1) {
          local_158 = FDS_EntityBase::GetMainPlayerEntityID(true);
          UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLing>
                    ((ulong64 *)&local_160,(EDS_AbilityTagType *)&local_158);
          bVar1 = FWeakObjectPtr::IsValid(&local_160);
          if ((bVar1) &&
             (pUVar4 = FWeakObjectPtr::Get(&local_160),
             *(longlong *)&pUVar4[2].field_0x8 == this->_padding_)) {
            return true;
          }
        }
      }
    }
    pUVar3 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
    bVar1 = UDS_NPCDataSet::IsGimmickInteraction(pUVar3);
    if (bVar1) {
      local_158 = FDS_EntityBase::GetMainPlayerEntityID(bVar1);
      UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCGimmick>
                ((ulong64 *)&local_160,(EDS_AbilityTagType *)&local_158);
      bVar1 = FWeakObjectPtr::IsValid(&local_160);
      if ((bVar1) &&
         (pUVar4 = FWeakObjectPtr::Get(&local_160),
         *(longlong *)&pUVar4[2].field_0x8 == this->_padding_)) {
        return true;
      }
    }
    else {
      pUVar3 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_150);
      bVar1 = UDS_NPCDataSet::IsCamp(pUVar3);
      if (bVar1) {
        local_158 = FDS_EntityBase::GetMainPlayerEntityID(true);
        UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCCamp>
                  ((ulong64 *)&local_160,(EDS_AbilityTagType *)&local_158);
        bVar1 = FWeakObjectPtr::IsValid(&local_160);
        if ((bVar1) &&
           (pUVar4 = FWeakObjectPtr::Get(&local_160),
           *(longlong *)&pUVar4[2].field_0x8 == this->_padding_)) {
          return true;
        }
      }
      else {
        local_158 = FDS_EntityBase::GetMainPlayerEntityID(true);
        UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPC>
                  ((ulong64 *)&local_160,(EDS_AbilityTagType *)&local_158);
        bVar1 = FWeakObjectPtr::IsValid(&local_160);
        if (bVar1) {
          pUVar4 = FWeakObjectPtr::Get(&local_160);
          return *(longlong *)&pUVar4[2].field_0x8 == this->_padding_;
        }
      }
    }
  }
  return false;
}

// IsInteractionAvailable @ 14bca7b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall ADS_NPC::IsInteractionAvailable(ADS_NPC *this,ulong64 param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NPCDataSet *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FDS_EntityBase::IsInteractionAvailable((FDS_EntityBase *)this,param_1);
  if (bVar1) {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_NPCDataSet::IsInteractionAvailable(this_00,param_1);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_NPC::IsInteractionAvailable",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x2ce,L"npcDataSet is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedTagCallback @ 14bcb1810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::OnChangedTagCallback(ADS_NPC *this,FGameplayTag *param_1,bool param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CharStateData *this_00;
  FDS_CharStateInfo *pFVar5;
  USkeletalMeshComponent *this_01;
  UPhysicsAsset *pUVar6;
  FName FVar7;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [3];
  undefined8 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_CharStateData::GetData((ulong64)local_168);
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_168,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_NPC::OnChangedTagCallback",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x264,L"charStateData is nullptr. entityID : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_168);
    UDS_CharStateData::OnChangedTagCallback(this_00,param_1,param_2);
    FWeakObjectPtr::Get(local_168);
    pFVar5 = UDS_CharStateData::GetCharStateInfo(param_1);
    local_150 = *(undefined8 *)&pFVar5->DetailState;
    if (((((int)local_150 - 0x7bU & 0xfffffffd) == 0) &&
        ((UDS_PartsSystemControl *)this->_padding_ != (UDS_PartsSystemControl *)0x0)) &&
       (bVar3 = UDS_PartsSystemControl::IsValid((UDS_PartsSystemControl *)this->_padding_), bVar3))
    {
      this_01 = UDS_PartsSystemControl::GetSoulSkeletalMesh
                          ((UDS_PartsSystemControl *)this->_padding_);
      if ((this_01 != (USkeletalMeshComponent *)0x0) &&
         (pUVar6 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_01),
         pUVar6 != (UPhysicsAsset *)0x0)) {
        pcVar1 = *(code **)(this_01->_padding_ + 0x788);
        if (param_2) {
          (*pcVar1)(this_01,::COLLISION_PROFILE_HANDLING_NPC);
          return;
        }
        (*pcVar1)(this_01,::COLLISION_PROFILE_NOCOLLISION);
        return;
      }
      plVar2 = (longlong *)this->_padding_;
      if (plVar2 != (longlong *)0x0) {
        FVar7 = ::COLLISION_PROFILE_HANDLING_NPC;
        if (!param_2) {
          FVar7 = (FName)this->_padding_;
        }
        (**(code **)(*plVar2 + 0x788))(plVar2,FVar7);
      }
    }
  }
  return;
}

// OnCrossHairHoverBegin @ 14bcb2790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPC::OnCrossHairHoverBegin(ADS_NPC *this)

{
  bool bVar1;
  char cVar2;
  FDS_EntityBase *pFVar3;
  ulong64 uVar4;
  
  uVar4 = 0;
  bVar1 = FDS_EntityBase::IsCamp((FDS_EntityBase *)this);
  if (bVar1) {
    pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      uVar4 = pFVar3->EntityID;
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0xa8))(this,uVar4);
  if (cVar2 == '\x01') {
    FDS_EntityBase::OnCrossHairHoverBegin((FDS_EntityBase *)this);
  }
  return;
}

// OnMouseCursorHoverBegin @ 14bcb6fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPC::OnMouseCursorHoverBegin(ADS_NPC *this)

{
  bool bVar1;
  char cVar2;
  FDS_EntityBase *pFVar3;
  ulong64 uVar4;
  
  uVar4 = 0;
  bVar1 = FDS_EntityBase::IsCamp((FDS_EntityBase *)this);
  if (bVar1) {
    pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      uVar4 = pFVar3->EntityID;
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0xa8))(this,uVar4);
  if (cVar2 == '\x01') {
    FDS_EntityBase::OnMouseCursorHoverBegin((FDS_EntityBase *)this);
  }
  return;
}

// OnPartsSystemComplete @ 14bcb8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_NPC::OnPartsSystemComplete(ADS_NPC *this)

{
  FWeakObjectPtr *pFVar1;
  UDS_TriggerCore *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_NpcBaseTableRow *pFVar8;
  UDS_NPCGimmickData *this_01;
  UClass *pUVar9;
  USkeletalMeshComponent *pUVar10;
  FName *pFVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FWeakObjectPtr *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStackY_3c8 [32];
  EDS_AbilityTagType local_398 [8];
  FWeakObjectPtr local_390;
  int local_388 [2];
  FWeakObjectPtr local_380;
  FWeakObjectPtr local_378;
  FWeakObjectPtr local_370;
  TArray<TObjectPtr<USphereComponent>,TSizedDefaultAllocator<32>_> local_368;
  FWeakObjectPtr *local_358 [2];
  undefined1 local_348 [4];
  undefined8 local_344;
  undefined4 local_33c;
  TPairInitializer<int_&&,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_&> local_338;
  undefined8 local_328;
  undefined8 local_320;
  UObject *local_318;
  int *local_310;
  FWeakObjectPtr *local_308;
  FName local_300;
  undefined1 local_2f8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (((UDS_PartsSystemControl *)this->_padding_)->bIsCanceled == false) {
    bVar4 = UDS_PartsSystemControl::IsValid((UDS_PartsSystemControl *)this->_padding_);
    if (bVar4) {
      InitWidgets((ADS_NPC *)&this[-1]._padding_);
      uVar17 = 0;
      if (this->_padding_ == 0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"ADS_NPC::InitBubbleTalk",0x17,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_278.Ptr,0x198,L"TriggerCore is nullptr.");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
      }
      else {
        TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_380);
        bVar4 = FWeakObjectPtr::IsValid(&local_380);
        if (bVar4) {
          pUVar7 = FWeakObjectPtr::Get(&local_380);
          if (0 < *(int *)&pUVar7[4].field_0x20) {
            this_00 = (UDS_TriggerCore *)this->_padding_;
            pUVar7 = FWeakObjectPtr::Get(&local_380);
            UDS_TriggerCore::AddTriggerComponent
                      (this_00,BubbleTalk,(float)*(int *)&pUVar7[4].field_0x24,false);
            UDS_TriggerCore::SetGenerateOverlapEvent
                      ((UDS_TriggerCore *)this->_padding_,BubbleTalk,true);
          }
        }
        else {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"ADS_NPC::InitBubbleTalk",0x17,Yes);
            UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x1a0,L"npcDataSet is nullptr.")
            ;
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
      }
      if ((UDS_MultiHitCollisionComponent *)this->_padding_ != (UDS_MultiHitCollisionComponent *)0x0
         ) {
        UDS_MultiHitCollisionComponent::Init((UDS_MultiHitCollisionComponent *)this->_padding_);
        UDS_MultiHitCollisionComponent::GetHitSphereCompList
                  ((UDS_MultiHitCollisionComponent *)this->_padding_,&local_368);
        uVar13 = (ulonglong)local_368.ArrayNum;
        uVar14 = uVar13;
        uVar19 = uVar17;
        if (0 < local_368.ArrayNum) {
          while( true ) {
            uVar16 = (uint)uVar17;
            uVar5 = 0;
            if ((int)uVar16 < (int)uVar14) {
              uVar5 = ~uVar16 >> 0x1f;
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
            pUVar7 = *(UObject **)(local_368.AllocatorInstance.Data + uVar19 * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar7 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar7);
              }
            }
            local_390.ObjectIndex = 0;
            local_390.ObjectSerialNumber = 0;
            local_338.Value = (TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar7);
            }
            FWeakObjectPtr::operator=(&local_390,(FObjectPtr)&local_338.Value);
            bVar4 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_390,
                               (void *)0x0);
            if (!bVar4) {
              pUVar7 = FWeakObjectPtr::Get(&local_390);
              (**(code **)(*(longlong *)pUVar7 + 0x788))
                        (pUVar7,::COLLISION_PROFILE_NPC_NOCOLLISION,1);
              local_388[0] = uVar16 + 1;
              local_310 = local_388;
              local_308 = &local_390;
              TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_&&,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_&>_>
                        ((TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          *)&this->_padding_,&local_338,(bool *)&local_310);
            }
            uVar17 = (ulonglong)(uVar16 + 1);
            if ((longlong)uVar13 <= (longlong)(uVar19 + 1)) break;
            uVar14 = (ulonglong)(uint)local_368.ArrayNum;
            uVar19 = uVar19 + 1;
          }
        }
        if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.AllocatorInstance.Data);
        }
      }
      if (this->_padding_ != 0) {
        pFVar8 = GetNpcBaseTable((ADS_NPC *)&this[-1]._padding_);
        if (pFVar8->ID_Collide != 0) {
          UDS_ColliderCore::AddColliderComponent
                    ((UDS_ColliderCore *)this->_padding_,pFVar8->ID_Collide);
        }
      }
      pFVar8 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
      bVar4 = FDS_NpcBaseTableRow::IsValid(pFVar8);
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2104227864130878910>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                             ,0x242,"table.IsValid()"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pFVar8->NpcGimmickType != None) {
        UDS_NPCGimmickData::GetData((ulong64)&local_378);
        bVar4 = FWeakObjectPtr::IsValid(&local_378);
        if (bVar4) {
          this_01 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_378);
          UDS_NPCGimmickData::SetIsSpawn
                    (this_01,true,*(bool *)((longlong)&this->_padding_ + 2),
                     *(bool *)((longlong)&this->_padding_ + 1));
          if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
            (**(code **)(this->_padding_ + 0x168))(this,local_358);
            iVar12 = (int)local_358[1];
            pFVar1 = local_358[0] + iVar12;
            pFVar15 = local_358[0];
            while( true ) {
              if ((int)local_358[1] != iVar12) {
                `TCheckedPointerIterator<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_398 + 3);
              }
              if (pFVar15 == pFVar1) break;
              local_370 = *pFVar15;
              bVar4 = FWeakObjectPtr::IsValid(&local_370);
              if (bVar4) {
                pUVar7 = FWeakObjectPtr::Get(&local_370);
                (**(code **)(*(longlong *)pUVar7 + 0x788))(pUVar7,::COLLISION_PROFILE_NOCOLLISION,1)
                ;
              }
              pFVar15 = pFVar15 + 1;
            }
            if (local_358[0] != (FWeakObjectPtr *)0x0) {
              FMemory::Free(local_358[0]);
            }
          }
        }
      }
      if ((UDS_CharacterTrajectoryComponent *)this->_padding_ !=
          (UDS_CharacterTrajectoryComponent *)0x0) {
        UDS_CharacterTrajectoryComponent::Init((UDS_CharacterTrajectoryComponent *)this->_padding_);
      }
      local_328 = 0;
      local_398[0] = BattleState;
      FDS_EntityBase::TryActivateAbility
                ((FDS_EntityBase *)this,local_398,(TObjectPtr<UWN_AbilityContext>)&local_328);
      local_320 = 0;
      local_398[1] = 0x23;
      FDS_EntityBase::TryActivateAbility
                ((FDS_EntityBase *)this,local_398 + 1,(TObjectPtr<UWN_AbilityContext>)&local_320);
      pFVar8 = GetNpcBaseTable((ADS_NPC *)&this[-1]._padding_);
      if (0 < pFVar8->LookAtChance) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar9 = Z_Construct_UClass_UDS_NpcLookAtAbilityContext_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_2f8,pUVar9);
        local_2f8._8_8_ = pUVar7;
        pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2f8);
        if (local_2f8._64_8_ != 0) {
          plVar18 = (longlong *)(local_2f8 + 0x50);
          if ((longlong *)local_2f8._104_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_2f8._104_8_;
          }
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        *(int *)(pUVar7 + 1) = pFVar8->LookAtChance;
        local_318 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_398[2] = 0x5b;
        FDS_EntityBase::TryActivateAbility
                  ((FDS_EntityBase *)this,local_398 + 2,(TObjectPtr<UWN_AbilityContext>)&local_318);
      }
      pFVar8 = GetNpcBaseTable((ADS_NPC *)&this[-1]._padding_);
      pUVar10 = UDS_PartsSystemControl::GetSoulSkeletalMesh
                          ((UDS_PartsSystemControl *)this->_padding_);
      if ((pUVar10 != (USkeletalMeshComponent *)0x0) &&
         ((pFVar8->NpcBattleGrade == Boss || (pFVar8->NpcBattleGrade == WorldBoss)))) {
        lVar2 = pUVar10->_padding_;
        *(undefined1 *)((longlong)&pUVar10->_padding_ + 7) = 0;
        local_348[0] = 3;
        local_344 = 0;
        local_33c = 0x3f800000;
        (**(code **)(lVar2 + 0x6e8))(pUVar10,local_348);
        pcVar3 = *(code **)(pUVar10->_padding_ + 0x788);
        pFVar11 = ::FName::FName(&local_300,"PhysicsMonster");
        (*pcVar3)(pUVar10,*pFVar11,1);
      }
      FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2104227864130879260>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NPC\\DS_NPC.cpp"
                         ,0xe4,"PartsSystemControl->IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// OnTalkBegin @ 14bcbb760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::OnTalkBegin(ADS_NPC *this,bool param_1)

{
  int iVar1;
  longlong *plVar2;
  FWeakObjectPtr *pFVar3;
  undefined1 local_res8 [8];
  bool local_res10 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  this->IsTalkMainQuest = param_1;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (!param_1) {
    (**(code **)(this->_padding_ + 0x1f0))(&this->_padding_,0);
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(this->NameTagUIComponent).field0_0x0.DebugPtr + 0xb50))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2c0))(plVar2,1);
    }
    iVar1 = local_18.ArrayNum;
    if (local_18.ArrayNum == local_18.ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_18.AllocatorInstance,&local_18.ArrayMax);
    }
    local_18.ArrayNum = iVar1 + 1;
    *(longlong *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 8) = this->_padding_;
  }
  local_res10[0] = true;
  UDS_IngameState::SetNpcTalking(local_res10,&local_18);
  local_res10[0] = true;
  pFVar3 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x178))(&this->_padding_,local_res8);
  UDS_AbilitySystemComponent::AddStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar3,local_res10);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnTalkEnd @ 14bcbb860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::OnTalkEnd(ADS_NPC *this)

{
  ADS_CameraManager *this_00;
  longlong *plVar1;
  FWeakObjectPtr *pFVar2;
  bool local_res8 [8];
  undefined1 local_res10 [24];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->IsTalkMainQuest == false) {
    this_00 = ADS_CameraManager::GetInst();
    if (this_00 != (ADS_CameraManager *)0x0) {
      ADS_CameraManager::SetMainCharCamera(this_00);
    }
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(this->NameTagUIComponent).field0_0x0.DebugPtr + 0xb50))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2c0))(plVar1,4);
    }
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0] = false;
  UDS_IngameState::SetNpcTalking(local_res8,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  local_res8[0] = true;
  pFVar2 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x178))(&this->_padding_,local_res10);
  UDS_AbilitySystemComponent::RemoveStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar2,local_res8);
  return;
}

// OnTriggerBeginOverlap @ 14bcbbb60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_NPC::OnTriggerBeginOverlap
          (ADS_NPC *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,AActor *param_3,
          UPrimitiveComponent *param_4)

{
  EDS_AbilityTagType local_res8 [8];
  undefined8 local_res10;
  
  ADS_EntityActorBase::OnTriggerBeginOverlap
            ((ADS_EntityActorBase *)this,param_1,param_2,param_3,param_4);
  if (param_1->TriggerType == BubbleTalk) {
    local_res10 = 0;
    local_res8[0] = NPCBubbleTalk;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res10);
  }
  return;
}

// OnTriggerEndOverlap @ 14bcbc2b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_NPC::OnTriggerEndOverlap
          (ADS_NPC *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,AActor *param_3,
          UPrimitiveComponent *param_4)

{
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  
  ADS_EntityActorBase::OnTriggerEndOverlap
            ((ADS_EntityActorBase *)this,param_1,param_2,param_3,param_4);
  if (param_1->TriggerType == BubbleTalk) {
    local_res8[0] = Cancel;
    local_res10[0] = NPCBubbleTalk;
    FDS_EntityBase::DeactivateAbility((FDS_EntityBase *)this,local_res10,local_res8);
  }
  return;
}

// RefreshInteractionState @ 14bcc2e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPC::RefreshInteractionState(ADS_NPC *this)

{
  bool bVar1;
  char cVar2;
  FDS_EntityBase *pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  
  uVar6 = 0;
  bVar1 = FDS_EntityBase::IsCamp((FDS_EntityBase *)this);
  if (bVar1) {
    pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      uVar6 = pFVar3->EntityID;
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0xa8))(this,uVar6);
  (**(code **)(this->_padding_ + 0x1f0))(this,cVar2);
  plVar4 = (longlong *)(**(code **)(*(longlong *)this->_padding_ + 0xb50))();
  if (plVar4 != (longlong *)0x0) {
    uVar5 = 1;
    if (cVar2 != '\0') {
      uVar5 = 4;
    }
    (**(code **)(*plVar4 + 0x2c0))(plVar4,uVar5);
  }
  return;
}

// RemoveEntity @ 14bcc4030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::RemoveEntity(ADS_NPC *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_EntityManager *this_01;
  FWeakObjectPtr FStackX_18;
  UDS_EntityManager *pUStackX_20;
  longlong *plStack_68;
  FDelegateAllocation FStack_60;
  code *pcStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pUStackX_20 = UDS_EntityManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStackX_20 != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStackX_20);
  }
  FStackX_18.ObjectIndex = 0;
  FStackX_18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStackX_20 != (UDS_EntityManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStackX_20);
  }
  FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStackX_20);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_18);
  if (bVar3) {
    plVar1 = &this[-1]._padding_;
    if (param_1 <= 0.0) {
      this_01 = (UDS_EntityManager *)FWeakObjectPtr::Get(&FStackX_18);
      UDS_EntityManager::RemoveEntity(this_01,this->_padding_,false);
    }
    else {
      *(undefined1 *)&this->_padding_ = 1;
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_40 = 0;
      pcStack_48 = ADS_EntityActorBase::OnRemoveEntityTimerFinish;
      FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_60.DelegateSize = 0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_EntityActorBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)plVar1);
        }
        puVar4[3] = 0;
        plStack_68 = plVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)plVar1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&plStack_68);
        puVar4[4] = pcStack_48;
        puVar4[5] = CONCAT44(uStack_3c,uStack_40);
      }
      FTimerManager::SetTimer
                (this_00,(FTimerHandle *)&this->_padding_,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &FStack_60,param_1,false,__real_bf800000);
      if (FStack_60.DelegateSize != 0) {
        if (FStack_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_60,0,0,0x10);
        FStack_60.DelegateSize = 0;
      }
      if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_60.DelegateAllocator);
        return;
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8596615521003109666>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\DS_EntityActorBase.cpp"
                       ,0x2de,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ShowMultiHitCollision @ 14bcc9c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_NPC::ShowMultiHitCollision(ADS_NPC *this,bool *param_1)

{
  longlong *plVar1;
  FWeakObjectPtr *pFVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  USceneComponent *pUVar6;
  ulonglong uVar7;
  FWeakObjectPtr *this_00;
  uint uVar8;
  FWeakObjectPtr local_res8;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  bVar4 = FDS_EntityBase::GetIsMultiHitCollision((FDS_EntityBase *)this);
  if (bVar4) {
    plVar1 = &this->_padding_;
    *(bool *)&this->_padding_ = *param_1;
    TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)plVar1);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar7 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)plVar1;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        local_res8 = *(FWeakObjectPtr *)(*local_58 + 4 + (longlong)(int)uVar7 * 0x14);
        bVar4 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if (!bVar4) {
          pUVar6 = (USceneComponent *)FWeakObjectPtr::Get(&local_res8);
          USceneComponent::SetHiddenInGame(pUVar6,(char)this->_padding_ == '\0',DirtyOnly);
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar7 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar8 < 4) {
          iVar5 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
          local_28->HashSize = iVar5;
          TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      CreateServerHitCapsuleComponent((ADS_NPC *)&this[-1]._padding_);
    }
    if ((char)this->_padding_ == '\0') {
      this_00 = (FWeakObjectPtr *)this->_padding_;
      iVar5 = (int)this->_padding_;
      pFVar2 = this_00 + (longlong)iVar5 * 3;
      while( true ) {
        if ((int)this->_padding_ != iVar5) {
          `TCheckedPointerIterator<FDS_ServerHitCapsuleInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (this_00 == pFVar2) break;
        bVar4 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)this_00,(void *)0x0);
        if (!bVar4) {
          pUVar6 = (USceneComponent *)FWeakObjectPtr::Get(this_00);
          USceneComponent::SetHiddenInGame(pUVar6,true,DirtyOnly);
        }
        this_00 = this_00 + 3;
      }
    }
  }
  return;
}

// Tick @ 14bccc8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::Tick(ADS_NPC *this,float param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  USceneComponent *pUVar5;
  UDS_CharStateData *this_00;
  UObject *pUVar6;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [16];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  ADS_EntityActorBase::Tick((ADS_EntityActorBase *)this,param_1);
  if ((this->bIsShowMultiHitCollision == true) && (this->bIsCreateServerHitCapsuleComponent == true)
     ) {
    UDS_CharStateData::GetData((ulong64)&local_res18);
    bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res18,(void *)0x0)
    ;
    if (!bVar3) {
      this_01 = (FWeakObjectPtr *)(this->ServerHitCapsuleInfoList).AllocatorInstance.Data;
      iVar2 = (this->ServerHitCapsuleInfoList).ArrayNum;
      pFVar1 = this_01 + (longlong)iVar2 * 3;
      while( true ) {
        if ((this->ServerHitCapsuleInfoList).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FDS_ServerHitCapsuleInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_01 == pFVar1) break;
        bVar3 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)this_01,(void *)0x0);
        if (bVar3) {
LAB_14bccca47:
          this_01 = this_01 + 3;
        }
        else {
          if (this_01[1] != (FWeakObjectPtr)0x0) {
            this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
            bVar3 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)(this_01 + 1));
            if ((bVar3) && (this_01[1] == (FWeakObjectPtr)0x10)) {
              bVar3 = false;
              TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res20);
              bVar4 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_res20,
                                 (void *)0x0);
              if (!bVar4) {
                pUVar6 = FWeakObjectPtr::Get(&local_res20);
                bVar3 = false;
                if (this_01[2].ObjectIndex == *(int *)&pUVar6[9].field_0x1c) {
                  bVar3 = true;
                }
              }
            }
            pUVar5 = (USceneComponent *)FWeakObjectPtr::Get(this_01);
            USceneComponent::SetHiddenInGame(pUVar5,(bool)(bVar3 ^ 1),DirtyOnly);
            goto LAB_14bccca47;
          }
          pUVar5 = (USceneComponent *)FWeakObjectPtr::Get(this_01);
          USceneComponent::SetHiddenInGame(pUVar5,false,DirtyOnly);
          this_01 = this_01 + 3;
        }
      }
    }
  }
  return;
}

// UpdateServerHitCapsuleComponent @ 14bccf460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPC::UpdateServerHitCapsuleComponent(ADS_NPC *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  USceneComponent *pUVar5;
  UDS_CharStateData *this_00;
  UObject *pUVar6;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  UDS_CharStateData::GetData((ulong64)&local_res10);
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar3) {
    this_01 = (FWeakObjectPtr *)(this->ServerHitCapsuleInfoList).AllocatorInstance.Data;
    iVar2 = (this->ServerHitCapsuleInfoList).ArrayNum;
    pFVar1 = this_01 + (longlong)iVar2 * 3;
    while( true ) {
      if ((this->ServerHitCapsuleInfoList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_ServerHitCapsuleInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_01 == pFVar1) break;
      bVar3 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)this_01,(void *)0x0);
      if (bVar3) {
LAB_14bccf5a0:
        this_01 = this_01 + 3;
      }
      else {
        if (this_01[1] != (FWeakObjectPtr)0x0) {
          this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          bVar3 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)(this_01 + 1));
          if ((bVar3) && (this_01[1] == (FWeakObjectPtr)0x10)) {
            bVar3 = false;
            TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)local_res18);
            bVar4 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)local_res18,
                               (void *)0x0);
            if (!bVar4) {
              pUVar6 = FWeakObjectPtr::Get(local_res18);
              bVar3 = false;
              if (this_01[2].ObjectIndex == *(int *)&pUVar6[9].field_0x1c) {
                bVar3 = true;
              }
            }
          }
          pUVar5 = (USceneComponent *)FWeakObjectPtr::Get(this_01);
          USceneComponent::SetHiddenInGame(pUVar5,(bool)(bVar3 ^ 1),DirtyOnly);
          goto LAB_14bccf5a0;
        }
        pUVar5 = (USceneComponent *)FWeakObjectPtr::Get(this_01);
        USceneComponent::SetHiddenInGame(pUVar5,false,DirtyOnly);
        this_01 = this_01 + 3;
      }
    }
  }
  return;
}

