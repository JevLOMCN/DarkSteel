// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5a4f40

UClass * __cdecl ADS_StuffPortal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffPortal",
               &Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton,
               StaticRegisterNativesADS_StuffPortal,0x750,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffPortal>,
               InternalVTableHelperCtorCaller<ADS_StuffPortal>,local_res8,ADS_Stuff::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton;
}

// ADS_StuffPortal @ 14b5a8e60

ADS_StuffPortal * __thiscall
ADS_StuffPortal::ADS_StuffPortal(ADS_StuffPortal *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->BreachRemoveTime = 1.5;
  this->AccRemoveTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  this->bIsLocked = false;
  (this->BreachNiagaraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~ADS_StuffPortal @ 14b5a96d0

void __thiscall ADS_StuffPortal::~ADS_StuffPortal(ADS_StuffPortal *this)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa560

UClass * __cdecl ADS_StuffPortal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffPortal",
               &Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton,
               StaticRegisterNativesADS_StuffPortal,0x750,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffPortal>,
               InternalVTableHelperCtorCaller<ADS_StuffPortal>,local_res8,ADS_Stuff::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffPortal.InnerSingleton;
}

// IsMovementCoreTickEnabled @ 14b5aaf30

bool __thiscall ADS_StuffPortal::IsMovementCoreTickEnabled(ADS_StuffPortal *this)

{
  return false;
}

// StaticRegisterNativesADS_StuffPortal @ 14b5aaf90

void __cdecl ADS_StuffPortal::StaticRegisterNativesADS_StuffPortal(void)

{
  return;
}

// ADS_StuffPortal @ 14bc825a0

ADS_StuffPortal * __thiscall
ADS_StuffPortal::ADS_StuffPortal(ADS_StuffPortal *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ADS_StuffPortal *pAVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UDS_ActorAttachedWidgetComponent *pUVar8;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  
  ADS_Stuff::ADS_Stuff((ADS_Stuff *)this,param_1);
  this->BreachRemoveTime = 1.5;
  this->AccRemoveTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->BreachNiagaraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsLocked = false;
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4487505942530752552>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_StuffPortal.cpp"
                       ,0x28,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ADS_StuffPortal *)(*pcVar3)();
      return pAVar5;
    }
  }
  else {
    ::FName::FName(&local_res8,L"Prop");
    this->_padding_ = (longlong)local_res8;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8,1);
    pFVar6 = ::FName::FName(&local_res18,"InteractionPrepareUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr = pUVar8;
    pFVar6 = ::FName::FName(&local_res20,"InteractionIconUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionIconUIComponent).field0_0x0.DebugPtr = pUVar8;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
  }
  return this;
}

// BeginPlay @ 14bc89d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_StuffPortal::BeginPlay(ADS_StuffPortal *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  
  ADS_Stuff::BeginPlay((ADS_Stuff *)this);
  bVar1 = FDS_EntityBase::IsBreach((FDS_EntityBase *)&this->_padding_);
  if ((!bVar1) && (bVar1 = FDS_EntityBase::IsGate((FDS_EntityBase *)&this->_padding_), !bVar1)) {
    return;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_StuffPortal>
              (&pUVar2[0xc].field_0x18,(ADS_StuffPortal *)(local_res8 + 1),(pmf_29ffc053 *)this);
  }
  return;
}

// EndPlay @ 14bc970c0

void __thiscall ADS_StuffPortal::EndPlay(ADS_StuffPortal *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xc].field_0x18,this);
  }
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// InitWidgets @ 14bca61d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StuffPortal::InitWidgets(ADS_StuffPortal *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  FDS_UniqueBpTableRow *pFVar6;
  FDS_ResourceEtcTableRow *pFVar7;
  FName *pFVar8;
  UObject *pUVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FName local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x80))();
  bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_158,(void *)0x0
                    );
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_StuffPortal::InitWidgets",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x188,L"skm is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr !=
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xb,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      pUVar1 = (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar8 = ::FName::FName(&local_150,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_158);
      (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
    }
    if ((this->InteractionIconUIComponent).field0_0x0.DebugPtr !=
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xc,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      pUVar1 = (this->InteractionIconUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar8 = ::FName::FName(&local_150,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_158);
      (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionIconUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
    }
  }
  return;
}

// IsInteractingWithMainCharacter @ 14bca79f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall ADS_StuffPortal::IsInteractingWithMainCharacter(ADS_StuffPortal *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  bVar1 = FDS_EntityBase::IsBreach((FDS_EntityBase *)this);
  if (((!bVar1) && (bVar1 = FDS_EntityBase::IsGate((FDS_EntityBase *)this), !bVar1)) &&
     (bVar1 = FDS_EntityBase::IsInn((FDS_EntityBase *)this), !bVar1)) {
    return false;
  }
  local_res18[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffPortal>
            ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffPortal,FWeakObjectPtr> *)
                     &local_res10,(void *)0x0);
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res10);
  return *(longlong *)&pUVar2[2].field_0x8 == this->_padding_;
}

// IsInteractionAvailable @ 14bca7da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall ADS_StuffPortal::IsInteractionAvailable(ADS_StuffPortal *this,ulong64 param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffPortalData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FDS_EntityBase::IsBreach((FDS_EntityBase *)this);
  if ((((bVar1) || (bVar1 = FDS_EntityBase::IsGate((FDS_EntityBase *)this), bVar1)) ||
      (bVar1 = FDS_EntityBase::IsInn((FDS_EntityBase *)this), bVar1)) &&
     (bVar1 = FDS_EntityBase::IsInteractionAvailable((FDS_EntityBase *)this,param_1), bVar1)) {
    UDS_StuffPortalData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_StuffPortalData::IsInteractionAvailable(this_00,param_1);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StuffPortal::IsInteractionAvailable",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x97,L"stuffPortalData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedBreachDetailInfo @ 14bcb0740

void __thiscall
ADS_StuffPortal::OnChangedBreachDetailInfo
          (ADS_StuffPortal *this,FDS_BreachDetailInfo *param_1,EDS_BreachInfoChangeType param_2)

{
  bool bVar1;
  undefined8 local_res20;
  
  if (param_2 == Removed) {
    local_res20 = 0x80;
    (**(code **)(this->_padding_ + 0x58))(&this->_padding_,&local_res20,0);
    return;
  }
  bVar1 = UpdateIsLocked(this);
  if (bVar1) {
    UpdateBreachEffect(this);
    return;
  }
  return;
}

// OnEffectSpawnComplete @ 14bcb2f40

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

void __thiscall
ADS_StuffPortal::OnEffectSpawnComplete(ADS_StuffPortal *this,FDS_EffectSpawnCompleteInfo param_1)

{
  UNiagaraComponent *local_res8 [4];
  
  local_res8[0] = param_1.NiagaraComponent;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1.NiagaraComponent != (UNiagaraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
  }
  FWeakObjectPtr::operator=(&(this->BreachNiagaraComponent).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// OnPartsSystemComplete @ 14bcb9a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_StuffPortal::OnPartsSystemComplete(ADS_StuffPortal *this)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  FDS_UniqueBpTableRow *pFVar6;
  FDS_ResourceEtcTableRow *pFVar7;
  FName *pFVar8;
  UDS_PlayerData *this_00;
  UObject *pUVar9;
  undefined1 auStackY_1f8 [32];
  bool local_1c8 [8];
  FWeakObjectPtr local_1c0;
  FName local_1b8 [2];
  FDS_BreachDetailInfo local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar4 = FDS_EntityBase::IsBreach((FDS_EntityBase *)this);
  if (((bVar4) || (bVar4 = FDS_EntityBase::IsGate((FDS_EntityBase *)this), bVar4)) ||
     (bVar4 = FDS_EntityBase::IsInn((FDS_EntityBase *)this), bVar4)) {
    local_1c8[0] = false;
  }
  else {
    local_1c8[0] = true;
  }
  ADS_Stuff::InitTriggers((ADS_Stuff *)&this[-1]._padding_,local_1c8);
  (**(code **)(this->_padding_ + 0x80))(this);
  bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1c0,(void *)0x0
                    );
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_StuffPortal::InitWidgets",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x188,L"skm is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if (this->_padding_ != 0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xb,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      plVar1 = (longlong *)this->_padding_;
      pcVar2 = *(code **)(*plVar1 + 0x508);
      pFVar8 = ::FName::FName(local_1b8,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_1c0);
      (*pcVar2)(plVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&pFVar7->ResourcePath);
    }
    if (this->_padding_ != 0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xc,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      plVar1 = (longlong *)this->_padding_;
      pcVar2 = *(code **)(*plVar1 + 0x508);
      pFVar8 = ::FName::FName(local_1b8,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_1c0);
      (*pcVar2)(plVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&pFVar7->ResourcePath);
    }
  }
  bVar4 = FDS_EntityBase::IsBreach((FDS_EntityBase *)this);
  if ((bVar4) || (bVar4 = FDS_EntityBase::IsGate((FDS_EntityBase *)this), bVar4)) {
    UDS_PlayerData::GetMainPlayerData();
    bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
    if (bVar4) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_StuffPortal::OnPartsSystemComplete",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x126,L"mainPlayerData is nullptr.");
      if ((void *)local_158._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_158._padding_);
      return;
    }
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_1c0);
    UDS_PlayerData::GetBreachDetailInfo(this_00,&local_1a8,this->_padding_);
    bVar4 = FDS_BreachDetailInfo::IsValidData(&local_1a8);
    if (bVar4) {
      UDS_PlayerData::GetMainPlayerData();
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_1b8);
      if (!bVar4) {
        local_1c8[0] = false;
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_1b8);
        bVar4 = DS_AbilityUtil_Interaction::IsAbleInteraction_Breach
                          ((ulong64 *)&this->_padding_,*(int *)&pUVar9[9].field_0x10,local_1c8);
        *(bool *)&this->_padding_ = !bVar4;
      }
    }
    else {
      local_1b8[0].ComparisonIndex.Value = 0x80;
      local_1b8[0].Number = 0;
      (**(code **)(this->_padding_ + 0x58))(this,local_1b8,0);
    }
    UpdateBreachEffect((ADS_StuffPortal *)&this[-1]._padding_);
    if (local_1a8.FirstPlayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.FirstPlayerName.Data.AllocatorInstance.Data);
    }
  }
  FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  return;
}

// OnTriggerBeginOverlap @ 14bcbbd70

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ADS_StuffPortal::OnTriggerBeginOverlap
          (ADS_StuffPortal *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,
          AActor *param_3,UPrimitiveComponent *param_4)

{
  EDS_PortalType EVar1;
  EDS_DungeonType EVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_StuffPortalData *this_00;
  FDS_StuffPortalTableRow *pFVar7;
  UDS_ContentManager *pUVar8;
  FDS_DungeonBaseTableRow *pFVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 auStackY_258 [32];
  wchar_t *pwVar14;
  TPairInitializer<FName_const_&,int_const_&> local_218;
  FWeakObjectPtr local_208;
  int **local_200;
  int *local_1f8;
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  ADS_EntityActorBase::OnTriggerBeginOverlap
            ((ADS_EntityActorBase *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UDS_TriggerComponent *)0x0) {
    return;
  }
  if (param_1->TriggerType != Activation) {
    return;
  }
  UDS_StuffPortalData::GetData((ulong64)&local_208);
  bVar3 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)&local_208,(void *)0x0);
  if (bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"ADS_StuffPortal::OnTriggerBeginOverlap",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0xc4,L"stuffPortalData is nullptr. (%llu)");
  }
  else {
    this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_208);
    pFVar7 = UDS_StuffPortalData::GetStuffPortalTable(this_00);
    if (pFVar7 == (FDS_StuffPortalTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"ADS_StuffPortal::OnTriggerBeginOverlap",0x26,Yes);
      pwVar14 = L"stuffPortalTable is nullptr.";
      uVar4 = 0xcb;
    }
    else {
      EVar1 = pFVar7->PortalType;
      if (EVar1 == WarpType) {
        local_218.Value = (int *)FDS_EntityBase::GetMainPlayerEntityID(true);
        UDS_WarpRequestAbility::TryActivate_PortalWarp
                  ((ulong64 *)&local_218.Value,(ulong64 *)&this->_padding_);
        return;
      }
      if (EVar1 == OpenUiType) {
        pUVar8 = UDS_ContentManager::GetInst();
        if (pUVar8 != (UDS_ContentManager *)0x0) {
          local_218.Value = (int *)0x0;
          UDS_ContentManager::OpenContent
                    (pUVar8,&pFVar7->ID_ContentsTabFrame,
                     (TObjectPtr<UDS_ContentArguments>)&local_218.Value);
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"ADS_StuffPortal::OnTriggerBeginOverlap",0x26,Yes);
        pwVar14 = L"contentMng is nullptr.";
        uVar4 = 0xdf;
      }
      else {
        if (EVar1 != DungeonType) {
          return;
        }
        pUVar8 = UDS_ContentManager::GetInst();
        if (pUVar8 != (UDS_ContentManager *)0x0) {
          pFVar9 = FDS_DungeonBaseTableRow::Get((longlong)pFVar7->ID_OpenValue,true);
          if (pFVar9 == (FDS_DungeonBaseTableRow *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_168._padding_ = (longlong)pFVar9;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"ADS_StuffPortal::OnTriggerBeginOverlap",0x26,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_168.Ptr,0xf3,L"dungeonBaseTable is nullptr. (%d)");
            if ((FDS_DungeonBaseTableRow *)local_168._padding_ == (FDS_DungeonBaseTableRow *)0x0) {
              return;
            }
            FMemory::Free((void *)local_168._padding_);
            return;
          }
          pUVar10 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar10,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar11 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1e8,pUVar11);
          local_1e8._8_8_ = pUVar10;
          pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
          if (local_1e8._64_8_ != 0) {
            plVar12 = (longlong *)(local_1e8 + 0x50);
            if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
              plVar12 = (longlong *)local_1e8._104_8_;
            }
            (**(code **)(*plVar12 + 0x10))();
          }
          ::FName::FName((FName *)&local_218.Value,"DungeonBaseID");
          uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_218.Value);
          if (*(int *)&pUVar10[3].field_0x8 != *(int *)&pUVar10[4].field_0xc) {
            puVar13 = *(undefined1 **)&pUVar10[4].field_0x18;
            if (*(undefined1 **)&pUVar10[4].field_0x18 == (undefined1 *)0x0) {
              puVar13 = &pUVar10[4].field_0x10;
            }
            iVar5 = *(int *)(puVar13 +
                            (ulonglong)
                            (*(int *)&pUVar10[4].field_0x20 - 1U &
                            (int)((ulonglong)local_218.Value >> 0x20) + uVar4) * 4);
            if (iVar5 != -1) {
              do {
                if (*(int **)(*(longlong *)(pUVar10 + 3) + (longlong)iVar5 * 0x14) ==
                    local_218.Value) goto LAB_14bcbc12a;
                iVar5 = *(int *)(*(longlong *)(pUVar10 + 3) + 0xc + (longlong)iVar5 * 0x14);
              } while (iVar5 != -1);
            }
          }
          local_200 = &local_218.Value;
          local_1f8 = &pFVar7->ID_OpenValue;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)(pUVar10 + 3),&local_218,(bool *)&local_200);
LAB_14bcbc12a:
          EVar2 = pFVar9->DungeonType;
          local_218.Value = (int *)pUVar10;
          if (EVar2 == Normal) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar10);
            }
            local_218.Key._0_4_ = 6000;
          }
          else if (EVar2 == Heroic) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar10);
            }
            local_218.Key._0_4_ = 0x177a;
          }
          else {
            if (EVar2 != Raid) {
              return;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar10);
            }
            local_218.Key._0_4_ = 0x1784;
          }
          UDS_ContentManager::OpenContent
                    (pUVar8,(EDS_ContentsTabFrameType *)&local_218,
                     (TObjectPtr<UDS_ContentArguments>)&local_218.Value);
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_168._padding_ = (longlong)pUVar8;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"ADS_StuffPortal::OnTriggerBeginOverlap",0x26,Yes);
        pwVar14 = L"contentMng is nullptr.";
        uVar4 = 0xec;
      }
    }
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,uVar4,pwVar14);
  }
  if ((UDS_ContentManager *)local_168._padding_ != (UDS_ContentManager *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return;
}

// OnTriggerEndOverlap @ 14bcbc4b0

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
ADS_StuffPortal::OnTriggerEndOverlap
          (ADS_StuffPortal *this,UDS_TriggerComponent *param_1,UPrimitiveComponent *param_2,
          AActor *param_3,UPrimitiveComponent *param_4)

{
  int iVar1;
  EDS_TriggerType *pEVar2;
  code *pcVar3;
  bool bVar4;
  EDS_TriggerType *pEVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  EDS_TriggerType EVar9;
  int iVar10;
  EDS_TriggerType aEStack_38 [16];
  
  if (param_1 != (UDS_TriggerComponent *)0x0) {
    pEVar2 = (EDS_TriggerType *)this->_padding_;
    aEStack_38[0] = param_1->TriggerType;
    for (pEVar5 = pEVar2; pEVar5 != pEVar2 + (int)this->_padding_; pEVar5 = pEVar5 + 1) {
      if (*pEVar5 == aEStack_38[0]) {
        if (((pEVar2 <= aEStack_38) &&
            (aEStack_38 < pEVar2 + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = (int)this->_padding_;
        if (iVar1 != 0) {
          iVar10 = 0;
          pEVar2 = (EDS_TriggerType *)this->_padding_;
          bVar4 = *pEVar2 != aEStack_38[0];
          lVar6 = 0;
          EVar9 = aEStack_38[0];
          iVar7 = 0;
          do {
            iVar8 = iVar7;
            do {
              lVar6 = lVar6 + 1;
              iVar8 = iVar8 + 1;
              if (iVar1 <= lVar6) break;
            } while (bVar4 == (pEVar2[lVar6] != EVar9));
            if (bVar4 != false) {
              if (iVar10 != iVar7) {
                memmove(pEVar2 + iVar10,pEVar2 + iVar7,(longlong)(iVar8 - iVar7));
                EVar9 = aEStack_38[0];
              }
              iVar10 = iVar10 + (iVar8 - iVar7);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar7 = iVar8;
          } while (lVar6 < iVar1);
          *(int *)&this->_padding_ = iVar10;
        }
        break;
      }
    }
    TMulticastDelegate<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
               *)&this->_padding_,param_1,false);
  }
  return;
}

// RemoveEntity @ 14bcc4260

void __thiscall ADS_StuffPortal::RemoveEntity(ADS_StuffPortal *this,float param_1)

{
  bool bVar1;
  UDS_StuffPortalData *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_StuffPortalData::GetData((ulong64)local_res8);
  bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar2 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res8);
    bVar1 = UDS_StuffPortalData::IsBreach(pUVar2);
    if (!bVar1) {
      pUVar2 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res8);
      bVar1 = UDS_StuffPortalData::IsGate(pUVar2);
      if (!bVar1) goto LAB_14bcc42c3;
    }
    param_1 = *(float *)((longlong)&this->_padding_ + 4);
  }
LAB_14bcc42c3:
  ADS_EntityActorBase::RemoveEntity((ADS_EntityActorBase *)this,param_1);
  return;
}

// Tick @ 14bccce20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_StuffPortal::Tick(ADS_StuffPortal *this,float param_1)

{
  ulong64 uVar1;
  long64 lVar2;
  longlong lVar3;
  bool bVar4;
  UDS_EntityData *this_00;
  UNiagaraComponent *this_01;
  FName *pFVar5;
  float fVar6;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  bVar4 = UDS_GameInstance::IsNameTagDebug();
  FDS_EntityBase::ShowDebugUI((FDS_EntityBase *)&this->_padding_,bVar4);
  if (bVar4) {
    UDS_EntityData::GetData((ulong64)&local_res8,this->_padding_);
    bVar4 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar4) {
      lVar3 = this->_padding_;
      uVar1 = this->_padding_;
      lVar2 = this->_padding_;
      ::FString::FString(&local_48,L"EntityID:{1}\n TableID:{2} SpawnTableID:{3}");
      DS_Util::GetFormatString<unsigned___int64,__int64,int>
                (local_38,&local_48,uVar1,lVar2,(int)lVar3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8);
      UDS_EntityData::SetDebugString(this_00,local_38);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  if ((char)this->_padding_ != '\0') {
    fVar6 = param_1 + this->AccRemoveTime;
    this->AccRemoveTime = fVar6;
    if (this->BreachRemoveTime < fVar6) {
      this->AccRemoveTime = this->BreachRemoveTime;
    }
    bVar4 = FDS_EntityBase::IsBreach((FDS_EntityBase *)&this->_padding_);
    if ((!bVar4) && (bVar4 = FDS_EntityBase::IsGate((FDS_EntityBase *)&this->_padding_), !bVar4)) {
      return;
    }
    fVar6 = __real_3f800000 - this->AccRemoveTime / this->BreachRemoveTime;
    bVar4 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->BreachNiagaraComponent,(void *)0x0);
    if (!bVar4) {
      this_01 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->BreachNiagaraComponent).WeakPtr);
      pFVar5 = ::FName::FName(&local_res8,L"FX_Control_Kill");
      UNiagaraComponent::SetVariableFloat(this_01,*pFVar5,fVar6);
    }
  }
  return;
}

// UpdateBreachEffect @ 14bcce190

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

void __thiscall ADS_StuffPortal::UpdateBreachEffect(ADS_StuffPortal *this)

{
  bool bVar1;
  UDS_StuffPortalData *this_00;
  FDS_StuffPortalTableRow *pFVar2;
  FDS_PhasingBaseTableRow *pFVar3;
  FDS_BreachBaseTableRow *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  code *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  undefined1 local_118 [192];
  undefined1 local_58 [8];
  FDelegateAllocation local_50 [2];
  
  UDS_StuffPortalData::GetData((ulong64)&local_res18);
  bVar1 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)&local_res18,(void *)0x0)
  ;
  if (!bVar1) {
    this_00 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(&local_res18);
    pFVar2 = UDS_StuffPortalData::GetStuffPortalTable(this_00);
    if (pFVar2 != (FDS_StuffPortalTableRow *)0x0) {
      local_res10 = (FWeakObjectPtr)UDS_EffectManager::GetInst();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      bVar1 = TWeakObjectPtr<UDS_EffectManager,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_EffectManager,FWeakObjectPtr> *)&local_res8,(void *)0x0
                        );
      if (!bVar1) {
        (**(code **)(this->_padding_ + 0x80))(&this->_padding_);
        bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res20,
                           (void *)0x0);
        if (!bVar1) {
          pFVar3 = FDS_PhasingBaseTableRow::GetRef((longlong)pFVar2->ID_OpenValue,true);
          pFVar4 = FDS_BreachBaseTableRow::GetRef((longlong)pFVar3->ID_BreachBase,true);
          bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                            (&this->BreachNiagaraComponent,(void *)0x0);
          if (!bVar1) {
            pUVar5 = FWeakObjectPtr::Get(&(this->BreachNiagaraComponent).WeakPtr);
            (**(code **)(*(longlong *)pUVar5 + 0x4a0))(pUVar5,0);
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_148 = (code *)0x0;
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_148);
            (this->BreachNiagaraComponent).WeakPtr = local_res10;
          }
          FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_118);
          local_res10 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_118 + 0x28),(FObjectPtr)&local_res10);
          local_118._52_4_ = local_res20.ObjectIndex;
          local_118._56_4_ = local_res20.ObjectSerialNumber;
          local_118[0x44] = true;
          if (this->bIsLocked == false) {
            local_118._0_4_ = pFVar4->ID_EffectActive;
          }
          else {
            local_118._0_4_ = pFVar4->ID_EffectDeactive;
          }
          uStack_140 = 0;
          local_148 = OnEffectSpawnComplete;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                     (FWriteAccessScope *)&local_138);
          local_120 = local_50;
          puVar6 = UE::Core::Private::DelegateAllocate(0x30,local_50);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_StuffPortal____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar6[3] = 0;
            local_res10 = (FWeakObjectPtr)this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res10);
            puVar6[4] = local_148;
            puVar6[5] = CONCAT44(uStack_13c,uStack_140);
          }
          if (local_138.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
          }
          FWeakObjectPtr::Get(&local_res8);
          UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_118);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
          if (local_50[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_50[0].DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_118._184_8_);
          if ((FScriptContainerElement *)local_118._24_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_118._24_8_);
          }
        }
      }
    }
  }
  return;
}

// UpdateIsLocked @ 14bcceef0

bool __thiscall ADS_StuffPortal::UpdateIsLocked(ADS_StuffPortal *this)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  bool local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    bVar1 = this->bIsLocked;
    local_res10[0] = false;
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_Breach
                      ((ulong64 *)&this->_padding_,*(int *)&pUVar3[9].field_0x10,local_res10);
    this->bIsLocked = !bVar2;
    return bVar1 != !bVar2;
  }
  return false;
}

