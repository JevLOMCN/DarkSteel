// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b5a6da0

UClass * __cdecl ADS_StuffGather::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffGather",
               &Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton,
               StaticRegisterNativesADS_StuffGather,0x750,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffGather>,
               InternalVTableHelperCtorCaller<ADS_StuffGather>,local_res8,ADS_Stuff::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton;
}

// ADS_StuffGather @ 14b5a8df0

ADS_StuffGather * __thiscall
ADS_StuffGather::ADS_StuffGather(ADS_StuffGather *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  this->StuffEffectID = 0;
  (this->StuffEffect).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->StuffEffect).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~ADS_StuffGather @ 14b5a96a0

void __thiscall ADS_StuffGather::~ADS_StuffGather(ADS_StuffGather *this)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa4a0

UClass * __cdecl ADS_StuffGather::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffGather",
               &Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton,
               StaticRegisterNativesADS_StuffGather,0x750,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffGather>,
               InternalVTableHelperCtorCaller<ADS_StuffGather>,local_res8,ADS_Stuff::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffGather.InnerSingleton;
}

// IsMovementCoreTickEnabled @ 14b5aaf20

bool __thiscall ADS_StuffGather::IsMovementCoreTickEnabled(ADS_StuffGather *this)

{
  return false;
}

// StaticRegisterNativesADS_StuffGather @ 14b5aaf80

void __cdecl ADS_StuffGather::StaticRegisterNativesADS_StuffGather(void)

{
  return;
}

// ADS_StuffGather @ 14bc823b0

ADS_StuffGather * __thiscall
ADS_StuffGather::ADS_StuffGather(ADS_StuffGather *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ADS_StuffGather *pAVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UDS_ActorAttachedWidgetComponent *pUVar8;
  undefined8 local_res8;
  FName local_res18;
  FName local_res20;
  FName local_18;
  FName local_10;
  
  ADS_Stuff::ADS_Stuff((ADS_Stuff *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  this->StuffEffectID = 0;
  (this->StuffEffect).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->StuffEffect).WeakPtr,(FObjectPtr)&local_res8);
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<118097349938511901>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_StuffGather.cpp"
                       ,0x1d,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ADS_StuffGather *)(*pcVar3)();
      return pAVar5;
    }
  }
  else {
    ::FName::FName(&local_res18,L"Prop");
    this->_padding_ = (longlong)local_res18;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res18,1);
    pFVar6 = ::FName::FName(&local_res20,"NameTagUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->NameTagUIComponent).field0_0x0.DebugPtr = pUVar8;
    pFVar6 = ::FName::FName(&local_18,"InteractionPrepareUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr = pUVar8;
    pFVar6 = ::FName::FName(&local_10,"InteractionIconUIComponent");
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

// operator() @ 14bc84e00

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

void __thiscall
`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  long64 lVar1;
  ulong64 uVar2;
  bool bVar3;
  UDS_EntityData *this_00;
  FWeakObjectPtr local_res8;
  FString local_28;
  FString local_18;
  
  FDS_EntityBase::ShowDebugUI((FDS_EntityBase *)(*(longlong *)this + 0x2c0),param_1);
  UDS_EntityData::GetData((ulong64)&local_res8,*(ulong64 *)(*(longlong *)this + 0x2c8));
  bVar3 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar3) {
    lVar1 = *(long64 *)(*(longlong *)this + 0x2d8);
    uVar2 = *(ulong64 *)(*(longlong *)this + 0x2c8);
    ::FString::FString(&local_28,L"EntityID: {1}\nTableID: {2}");
    DS_Util::GetFormatString<unsigned___int64,__int64>(&local_18,&local_28,uVar2,lVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_res8);
    UDS_EntityData::SetDebugString(this_00,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginPlay @ 14bc89b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StuffGather::BeginPlay(ADS_StuffGather *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ADS_Stuff::BeginPlay((ADS_Stuff *)this);
  UDS_StuffGatherData::GetData((ulong64)&local_168);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "ADS_StuffGather::BeginPlay",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x31,L"stuffGatherData is nullptr. (%llu)")
      ;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&local_168);
    if (pUVar3[0xe].field_0x8 == '\x01') {
      UDS_PlayerData::GetMainPlayerData();
      bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_160,(void *)0x0);
      if (bVar1) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_38 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                     "ADS_StuffGather::BeginPlay",0x1a,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x3a,L"playerData is nullptr.");
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
        }
      }
      else {
        local_158._8_4_ = 0;
        local_158._0_8_ = OnChangedPlayerSkillTargetInfo;
        local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
        local_158._16_8_ = OnChangedPlayerSkillTargetInfo;
        pUVar3 = FWeakObjectPtr::Get(&local_160);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<ADS_StuffGather>
                  (&pUVar3[0xf].field_0x10,(ADS_StuffGather *)local_158,(pmf_d662d72e *)this);
      }
    }
  }
  return;
}

// EndPlay @ 14bc96fc0

void __thiscall ADS_StuffGather::EndPlay(ADS_StuffGather *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->StuffEffect,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->StuffEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
    (this->StuffEffect).WeakPtr = local_res8[0];
  }
  UDS_StuffGatherData::GetData((ulong64)&local_res18);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_res18,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x18,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    if (pUVar2[0xe].field_0x8 == '\x01') {
      UDS_PlayerData::GetMainPlayerData();
      bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res8,(void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get(local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xf].field_0x10,
                   this);
      }
    }
  }
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// GetNameTagUIComponent @ 14bca0a30

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
ADS_StuffGather::GetNameTagUIComponent(ADS_StuffGather *this)

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

// InitDetection @ 14bca42c0

void __thiscall ADS_StuffGather::InitDetection(ADS_StuffGather *this)

{
  bool bVar1;
  EDS_DetectionHiddenType EVar2;
  UDS_StuffGatherData *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar3 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
    EVar2 = UDS_StuffGatherData::GetDetectionHiddenType(pUVar3);
    if (EVar2 == MeshAll) {
      pUVar3 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
      bVar1 = UDS_StuffGatherData::IsDetected(pUVar3);
      if (!bVar1) {
        local_res10[0] = 0x200;
        (**(code **)(this->_padding_ + 0x58))(&this->_padding_,local_res10,0);
      }
    }
  }
  return;
}

// InitStuffDebugUI @ 14bca4fd0

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

void __thiscall ADS_StuffGather::InitStuffDebugUI(ADS_StuffGather *this)

{
  long64 lVar1;
  ulong64 uVar2;
  bool bVar3;
  UDS_GameInstance *pUVar4;
  UDS_EntityData *this_00;
  FWeakObjectPtr local_res10 [3];
  FString local_38;
  FString local_28;
  
  pUVar4 = UDS_GameInstance::GetInst();
  if (pUVar4 != (UDS_GameInstance *)0x0) {
    bVar3 = UDS_GameInstance::IsNameTagDebug();
    if (bVar3) {
      FDS_EntityBase::ShowDebugUI((FDS_EntityBase *)&this->_padding_,true);
      UDS_EntityData::GetData((ulong64)local_res10,this->_padding_);
      bVar3 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)local_res10,(void *)0x0);
      if (bVar3) {
        return;
      }
      lVar1 = this->_padding_;
      uVar2 = this->_padding_;
      ::FString::FString(&local_38,L"EntityID: {1}\nTableID: {2}");
      DS_Util::GetFormatString<unsigned___int64,__int64>(&local_28,&local_38,uVar2,lVar1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(local_res10);
      UDS_EntityData::SetDebugString(this_00,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    local_res10[0] = (FWeakObjectPtr)this;
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddWeakLambda<ADS_StuffGather,_ADS_StuffGather::InitStuffDebugUI_::__l2::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar4->Delegate_ShowNameTagDebugChanged,(ADS_StuffGather *)(local_res10 + 1),
               (<lambda_1> *)this);
  }
  return;
}

// InitWidgets @ 14bca5e70

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

void __thiscall ADS_StuffGather::InitWidgets(ADS_StuffGather *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  long64 lVar4;
  ulong64 uVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  FDS_UniqueBpTableRow *pFVar8;
  FDS_ResourceEtcTableRow *pFVar9;
  FName *pFVar10;
  UObject *pUVar11;
  UDS_GameInstance *pUVar12;
  UDS_EntityData *this_00;
  undefined1 auStackY_1b8 [32];
  FName local_188;
  FWeakObjectPtr local_180;
  undefined1 local_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  (**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_180,(void *)0x0
                    );
  if (bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_StuffGather::InitWidgets",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0xbc,L"skm is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((this->NameTagUIComponent).field0_0x0.DebugPtr != (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar8 = FDS_UniqueBpTableRow::GetRef(8,true);
      pFVar9 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar8);
      pUVar1 = (this->NameTagUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar10 = ::FName::FName(&local_188,"NameTag");
      FVar3 = *pFVar10;
      pUVar11 = FWeakObjectPtr::Get(&local_180);
      (*pcVar2)(pUVar1,pUVar11,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->NameTagUIComponent).field0_0x0.DebugPtr,&pFVar9->ResourcePath);
    }
    if ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr !=
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar8 = FDS_UniqueBpTableRow::GetRef(0xb,true);
      pFVar9 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar8);
      pUVar1 = (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar10 = ::FName::FName(&local_188,"Interaction");
      FVar3 = *pFVar10;
      pUVar11 = FWeakObjectPtr::Get(&local_180);
      (*pcVar2)(pUVar1,pUVar11,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr,&pFVar9->ResourcePath);
    }
    if ((this->InteractionIconUIComponent).field0_0x0.DebugPtr !=
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar8 = FDS_UniqueBpTableRow::GetRef(0xc,true);
      pFVar9 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar8);
      pUVar1 = (this->InteractionIconUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar10 = ::FName::FName(&local_188,"Interaction");
      FVar3 = *pFVar10;
      pUVar11 = FWeakObjectPtr::Get(&local_180);
      (*pcVar2)(pUVar1,pUVar11,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionIconUIComponent).field0_0x0.DebugPtr,&pFVar9->ResourcePath);
    }
    pUVar12 = UDS_GameInstance::GetInst();
    if (pUVar12 != (UDS_GameInstance *)0x0) {
      bVar6 = UDS_GameInstance::IsNameTagDebug();
      if (bVar6) {
        FDS_EntityBase::ShowDebugUI((FDS_EntityBase *)&this->_padding_,true);
        UDS_EntityData::GetData((ulong64)&local_188,this->_padding_);
        bVar6 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_188,(void *)0x0);
        if (bVar6) {
          return;
        }
        lVar4 = this->_padding_;
        uVar5 = this->_padding_;
        ::FString::FString((FString *)local_178,L"EntityID: {1}\nTableID: {2}");
        DS_Util::GetFormatString<unsigned___int64,__int64>
                  ((FString *)(local_178 + 0x10),(FString *)local_178,uVar5,lVar4);
        if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_178._0_8_);
        }
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_188);
        UDS_EntityData::SetDebugString(this_00,(FString *)(local_178 + 0x10));
        if ((void *)local_178._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_178._16_8_);
        }
      }
      local_188 = (FName)this;
      TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
      AddWeakLambda<ADS_StuffGather,_ADS_StuffGather::InitStuffDebugUI_::__l2::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                 &pUVar12->Delegate_ShowNameTagDebugChanged,(ADS_StuffGather *)local_178,
                 (<lambda_1> *)this);
    }
  }
  return;
}

// IsInteractingWithMainCharacter @ 14bca7980

bool __thiscall ADS_StuffGather::IsInteractingWithMainCharacter(ADS_StuffGather *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffGather>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res20);
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *)
                     &local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    return *(longlong *)&pUVar2[2].field_0x8 == this->_padding_;
  }
  return false;
}

// IsInteractionAvailable @ 14bca7c80

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

bool __thiscall ADS_StuffGather::IsInteractionAvailable(ADS_StuffGather *this,ulong64 param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffGatherData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FDS_EntityBase::IsInteractionAvailable((FDS_EntityBase *)this,param_1);
  if (bVar1) {
    UDS_StuffGatherData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_StuffGatherData::IsInteractionAvailable(this_00,param_1);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StuffGather::IsInteractionAvailable",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x6d,L"stuffGatherData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedPlayerSkillTargetInfo @ 14bcb10f0

void __thiscall
ADS_StuffGather::OnChangedPlayerSkillTargetInfo
          (ADS_StuffGather *this,EDS_PlayerSkillType *param_1,FDS_PlayerSkillTargetInfo *param_2,
          EDS_PlayerSkillTargetInfoChangeType *param_3)

{
  bool bVar1;
  EDS_DetectionHiddenType EVar2;
  UDS_StuffGatherData *pUVar3;
  FWeakObjectPtr local_res10 [3];
  undefined8 local_18 [2];
  
  if (*param_1 == Detection) {
    UDS_StuffGatherData::GetData((ulong64)local_res10);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_res10,(void *)0x0
                      );
    if (!bVar1) {
      pUVar3 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res10);
      EVar2 = UDS_StuffGatherData::GetDetectionHiddenType(pUVar3);
      if (EVar2 == MeshAll) {
        pUVar3 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res10);
        bVar1 = UDS_StuffGatherData::IsDetected(pUVar3);
        local_18[0] = 0x200;
        if (!bVar1) {
          (**(code **)(this->_padding_ + 0x58))();
          UpdateStuffEffectVisibility(this);
          return;
        }
        (**(code **)(this->_padding_ + 0x60))(&this->_padding_,local_18,0);
      }
    }
    UpdateStuffEffectVisibility(this);
  }
  return;
}

// OnChangedStuffState @ 14bcb11b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_StuffGather::OnChangedStuffState(ADS_StuffGather *this,EDS_StuffState *param_1)

{
  code *pcVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_StuffGatherData *this_00;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_448 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_418;
  FDelegateAllocation local_410;
  FWeakObjectPtr local_400;
  FWeakObjectPtr local_3f8;
  FWeakObjectPtr local_3f0;
  ADS_StuffGather *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  ADS_StuffGather *local_3d0;
  undefined4 local_3c4;
  FDestructionSentinel local_3c0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDelegateAllocation *local_348;
  undefined1 local_340 [200];
  ForAnyElementType local_278;
  int local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if (*param_1 == None) {
    return;
  }
  (**(code **)(this->_padding_ + 0x80))();
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_3f0,(void *)0x0
                    );
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"ADS_StuffGather::OnChangedStuffState",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_268.Ptr,0xe2,L"skm is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<118097349938512099>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_StuffGather.cpp"
                       ,0xe3,"false");
    if (!bVar3) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UDS_StuffGatherData::GetData((ulong64)&local_400);
  bVar3 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_400,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_StuffGather::OnChangedStuffState",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xea,L"stuffGatherData is nullptr.");
    local_340._24_8_ = local_148._padding_;
    goto LAB_14bcb16b9;
  }
  this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_400);
  pUVar6 = FWeakObjectPtr::Get(&local_400);
  iVar4 = UDS_StuffGatherData::GetEffectID(this_00,pUVar6[0xb].field_0x1d);
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 == this->StuffEffectID) {
    return;
  }
  bVar3 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->StuffEffect,(void *)0x0);
  if (!bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&(this->StuffEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6,0);
    local_3f8.ObjectIndex = 0;
    local_3f8.ObjectSerialNumber = 0;
    local_3d8 = 0;
    FWeakObjectPtr::operator=(&local_3f8,(FObjectPtr)&local_3d8);
    (this->StuffEffect).WeakPtr = local_3f8;
  }
  this->StuffEffectID = iVar4;
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_340);
  local_340._0_4_ = this->StuffEffectID;
  local_3e8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_340 + 0x28),(FObjectPtr)&local_3e8);
  local_340._52_4_ = local_3f0.ObjectIndex;
  local_340._56_4_ = local_3f0.ObjectSerialNumber;
  uStack_3e0 = 0;
  local_3e8 = (ADS_StuffGather *)OnEffectSpawnComplete;
  uStack_3dc = local_3c4;
  local_418.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_410.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_410.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_418,(FWriteAccessScope *)&local_360);
  local_348 = &local_410;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_410);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_StuffGather____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_3d0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_3d0);
    puVar7[4] = local_3e8;
    puVar7[5] = CONCAT44(uStack_3dc,uStack_3e0);
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_418,(FWriteAccessScope *)&local_3c0);
  iVar4 = local_410.DelegateSize;
  FVar2 = local_410.DelegateAllocator;
  local_410.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_410.DelegateSize = 0;
  if (local_3c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_340 + 0xc0),
             (FWriteAccessScope *)&local_3a8);
  if (local_270 == 0) {
LAB_14bcb1588:
    if ((ForElementType<TAlignedBytes<16,16>_>)local_278.Data !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(local_278.Data);
    }
  }
  else if ((ForElementType<TAlignedBytes<16,16>_>)local_278.Data !=
           (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    (*(code *)**(undefined8 **)local_278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_278,0,0,0x10);
    local_270 = 0;
    goto LAB_14bcb1588;
  }
  local_278.Data = (FScriptContainerElement *)FVar2;
  local_270 = iVar4;
  if (local_3a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_418,(FWriteAccessScope *)&local_390);
  if ((local_410.DelegateSize != 0) &&
     (local_410.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_410.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_410,0,0,0x10);
    local_410.DelegateSize = 0;
  }
  if (local_390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
  }
  if (local_410.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_410.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_418.AccessDetector);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_340);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_340 + 0xc0),
             (FWriteAccessScope *)&local_378);
  if ((local_270 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_278.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_278,0,0,0x10);
    local_270 = 0;
  }
  if (local_378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_278.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_340 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_340._184_8_);
LAB_14bcb16b9:
  if ((FScriptContainerElement *)local_340._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_340._24_8_);
  }
  return;
}

// OnCrossHairHoverBegin @ 14bcb27f0

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

void __thiscall ADS_StuffGather::OnCrossHairHoverBegin(ADS_StuffGather *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffGatherData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_StuffGatherData::GetData((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StuffGather::OnCrossHairHoverBegin",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x87,L"stuffGatherData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_148);
    bVar1 = UDS_StuffGatherData::IsDetected(this_00);
    if (bVar1) {
      FDS_EntityBase::OnCrossHairHoverBegin((FDS_EntityBase *)this);
    }
  }
  return;
}

// OnEffectSpawnComplete @ 14bcb2ed0

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
ADS_StuffGather::OnEffectSpawnComplete(ADS_StuffGather *this,FDS_EffectSpawnCompleteInfo param_1)

{
  bool bVar1;
  UNiagaraComponent *local_res8;
  
  local_res8 = param_1.NiagaraComponent;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1.NiagaraComponent != (UNiagaraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
  }
  FWeakObjectPtr::operator=(&(this->StuffEffect).WeakPtr,(FObjectPtr)&local_res8);
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->StuffEffect,(void *)0x0);
  if (!bVar1) {
    UpdateStuffEffectVisibility(this);
  }
  return;
}

// OnMouseCursorHoverBegin @ 14bcb7040

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

void __thiscall ADS_StuffGather::OnMouseCursorHoverBegin(ADS_StuffGather *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffGatherData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_StuffGatherData::GetData((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StuffGather::OnMouseCursorHoverBegin",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x96,L"stuffGatherData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_148);
    bVar1 = UDS_StuffGatherData::IsDetected(this_00);
    if (bVar1) {
      FDS_EntityBase::OnMouseCursorHoverBegin((FDS_EntityBase *)this);
    }
  }
  return;
}

// OnPartsSystemComplete @ 14bcb9820

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

void __thiscall ADS_StuffGather::OnPartsSystemComplete(ADS_StuffGather *this)

{
  longlong *this_00;
  bool bVar1;
  EDS_DetectionHiddenType EVar2;
  UDS_StuffGatherData *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1a8 [32];
  bool local_168 [8];
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  longlong lStack_150;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this[-1]._padding_;
  local_168[0] = false;
  ADS_Stuff::InitTriggers((ADS_Stuff *)this_00,local_168);
  InitWidgets((ADS_StuffGather *)this_00);
  UDS_StuffGatherData::GetData((ulong64)&local_158);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (!bVar1) {
    pUVar3 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_158);
    EVar2 = UDS_StuffGatherData::GetDetectionHiddenType(pUVar3);
    if (EVar2 == MeshAll) {
      pUVar3 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_158);
      bVar1 = UDS_StuffGatherData::IsDetected(pUVar3);
      if (!bVar1) {
        local_148._0_8_ = 0x200;
        (**(code **)(this->_padding_ + 0x58))(this,local_148,0);
      }
    }
  }
  (**(code **)(*this_00 + 0x768))(this_00,0);
  UDS_StuffGatherData::GetData((ulong64)&local_160);
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_160,(void *)0x0);
  if (bVar1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "ADS_StuffGather::OnPartsSystemComplete",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0xaa,L"stuffGatherData is nullptr. (%llu)")
      ;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    local_148._8_4_ = 0;
    local_148._0_8_ = OnChangedStuffState;
    lStack_150 = (ulonglong)(uint)local_148._12_4_ << 0x20;
    local_158 = (FWeakObjectPtr)OnChangedStuffState;
    pUVar5 = FWeakObjectPtr::Get(&local_160);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_StuffState_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_StuffGather>
              (&pUVar5[10].field_0x18,(ADS_StuffGather *)local_148,(pmf_7f1f6bb4 *)this_00);
    pUVar5 = FWeakObjectPtr::Get(&local_160);
    local_168[0] = (bool)pUVar5[0xb].field_0x1d;
    OnChangedStuffState((ADS_StuffGather *)this_00,local_168);
    FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  }
  return;
}

// UpdateDetection @ 14bcce900

void __thiscall ADS_StuffGather::UpdateDetection(ADS_StuffGather *this)

{
  longlong lVar1;
  bool bVar2;
  EDS_DetectionHiddenType EVar3;
  UDS_StuffGatherData *pUVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar2 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar2) {
    pUVar4 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
    EVar3 = UDS_StuffGatherData::GetDetectionHiddenType(pUVar4);
    if (EVar3 == MeshAll) {
      pUVar4 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
      bVar2 = UDS_StuffGatherData::IsDetected(pUVar4);
      lVar1 = this->_padding_;
      local_res10[0] = 0x200;
      if (!bVar2) {
        (**(code **)(lVar1 + 0x58))();
        return;
      }
      (**(code **)(lVar1 + 0x60))(&this->_padding_,local_res10,0);
    }
  }
  return;
}

// UpdateStuffEffectVisibility @ 14bccf5e0

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

void __thiscall ADS_StuffGather::UpdateStuffEffectVisibility(ADS_StuffGather *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffGatherData *this_00;
  UPrimitiveComponent *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->StuffEffect,(void *)0x0);
  if (!bVar1) {
    UDS_StuffGatherData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_StuffGather::UpdateStuffEffectVisibility",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x11f,L"stuffGatherData is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_StuffGatherData::IsDetected(this_00);
      if ((bVar1) &&
         (bVar1 = FDS_EntityBase::IsHiddenPolicy((FDS_EntityBase *)&this->_padding_), !bVar1)) {
        pUVar3 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->StuffEffect).WeakPtr);
        WN_UnregisterHiddenPrimitive(pUVar3,true);
      }
    }
  }
  return;
}

