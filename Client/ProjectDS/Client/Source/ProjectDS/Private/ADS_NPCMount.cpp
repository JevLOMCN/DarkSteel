// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b53d000

UClass * __cdecl ADS_NPCMount::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NPCMount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMount",
               &Z_Registration_Info_UClass_ADS_NPCMount.InnerSingleton,
               StaticRegisterNativesADS_NPCMount,0x7e0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ADS_NPCMount>,
               InternalVTableHelperCtorCaller<ADS_NPCMount>,local_res8,ADS_NPC::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NPCMount.InnerSingleton;
}

// ADS_NPCMount @ 14b5400a0

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

ADS_NPCMount * __thiscall ADS_NPCMount::ADS_NPCMount(ADS_NPCMount *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  ADS_NPC::ADS_NPC((ADS_NPC *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->OnOnwerTagCallbackHandle).ID = 0;
  this->CurrentMountTargetEntityID = 0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MountAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~ADS_NPCMount @ 14b5412e0

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

void __thiscall ADS_NPCMount::~ADS_NPCMount(ADS_NPCMount *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  ADS_NPC::~ADS_NPC((ADS_NPC *)this);
  return;
}

// GetParentEntityID @ 14b5429f0

ulong64 __thiscall ADS_NPCMount::GetParentEntityID(ADS_NPCMount *this)

{
  return this->_padding_;
}

// GetPrivateStaticClass @ 14b542a00

UClass * __cdecl ADS_NPCMount::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_NPCMount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMount",
               &Z_Registration_Info_UClass_ADS_NPCMount.InnerSingleton,
               StaticRegisterNativesADS_NPCMount,0x7e0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ADS_NPCMount>,
               InternalVTableHelperCtorCaller<ADS_NPCMount>,local_res8,ADS_NPC::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_NPCMount.InnerSingleton;
}

// StaticRegisterNativesADS_NPCMount @ 14b543a50

void __cdecl ADS_NPCMount::StaticRegisterNativesADS_NPCMount(void)

{
  return;
}

// ADS_NPCMount @ 14bc81cf0

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

ADS_NPCMount * __thiscall ADS_NPCMount::ADS_NPCMount(ADS_NPCMount *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  ADS_NPC::ADS_NPC((ADS_NPC *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->OnOnwerTagCallbackHandle).ID = 0;
  this->CurrentMountTargetEntityID = 0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MountAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// BeginPlay @ 14bc88f30

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

void __thiscall ADS_NPCMount::BeginPlay(ADS_NPCMount *this)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  ADS_NPC::BeginPlay((ADS_NPC *)this);
  bVar1 = FDS_EntityBase::IsMountNPC((FDS_EntityBase *)&this->_padding_);
  if (bVar1) {
    pUVar2 = UDS_MountEvent::GetEvent();
    if (pUVar2 != (UDS_MountEvent *)0x0) {
      FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
      Remove<ADS_NPCMount>(&pUVar2->OnMountOwnerChanged_Filtered,this,(ulong64 *)&this->_padding_);
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                ::FindOrAddImpl<unsigned___int64_const_&>
                          ((TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                            *)&(pUVar2->OnMountOwnerChanged_Filtered).Subscriptions,
                           (int)((ulonglong)this->_padding_ >> 0x20) * 0x17 + (int)this->_padding_,
                           (ulong64 *)&this->_padding_);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<ADS_NPCMount>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
                  *)this_00,(ADS_NPCMount *)&stack0x00000008,(pmf_65aa6279 *)this);
    }
  }
  return;
}

// ClearOwnerAscBinding @ 14bc8c480

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

void __thiscall ADS_NPCMount::ClearOwnerAscBinding(ADS_NPCMount *this)

{
  FDelegateHandle FVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UWN_AbilitySystemComponent *this_00;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FWeakObjectPtr local_res8 [4];
  
  if ((this->OnOnwerTagCallbackHandle).ID != 0) {
    pFVar3 = FDS_EntityBase::GetEntityBase(&this->CurrentMountTargetEntityID);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x178))(pFVar3);
      bVar2 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)local_res8,
                         (void *)0x0);
      if (!bVar2) {
        this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(local_res8);
        this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                  UWN_AbilitySystemComponent::GetChangedTagEvent(this_00);
        FVar1.ID = (this->OnOnwerTagCallbackHandle).ID;
        if (FVar1.ID != 0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_01,FVar1);
        }
      }
    }
  }
  return;
}

// EndPlay @ 14bc96c20

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
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPCMount::EndPlay(ADS_NPCMount *this,Type param_1)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  bVar1 = FDS_EntityBase::IsMountNPC((FDS_EntityBase *)&this->_padding_);
  if (bVar1) {
    pUVar2 = UDS_MountEvent::GetEvent();
    if (pUVar2 != (UDS_MountEvent *)0x0) {
      FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
      Remove<ADS_NPCMount>(&pUVar2->OnMountOwnerChanged_Filtered,this,(ulong64 *)&this->_padding_);
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                ::FindOrAddImpl<unsigned___int64_const_&>
                          ((TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                            *)&(pUVar2->OnMountOwnerChanged_Filtered).Subscriptions,
                           (int)((ulonglong)this->_padding_ >> 0x20) * 0x17 + (int)this->_padding_,
                           (ulong64 *)&this->_padding_);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<ADS_NPCMount>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
                  *)this_00,(ADS_NPCMount *)&stack0x00000008,(pmf_65aa6279 *)this);
    }
  }
  UDS_PartsSystemControl::Deinit((UDS_PartsSystemControl *)this->_padding_);
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// GetParentEntity @ 14bca1400

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

TWeakObjectPtr<AActor,FWeakObjectPtr> __thiscall ADS_NPCMount::GetParentEntity(ADS_NPCMount *this)

{
  ADS_NPCMount *pAVar1;
  FWeakObjectPtr in_RDX;
  undefined8 local_res8;
  
  pAVar1 = (ADS_NPCMount *)FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pAVar1 != (ADS_NPCMount *)0x0) {
    if (this == (ADS_NPCMount *)0x2c0) {
      this = (ADS_NPCMount *)0x0;
    }
    if (pAVar1 != this) {
      (**(code **)(pAVar1->_padding_ + 0x150))(pAVar1);
      return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
}

// GetParentEntityType @ 14bca1480

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

EDS_EntityType __thiscall ADS_NPCMount::GetParentEntityType(ADS_NPCMount *this)

{
  ADS_NPCMount *pAVar1;
  
  pAVar1 = (ADS_NPCMount *)FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pAVar1 != (ADS_NPCMount *)0x0) {
    if (this == (ADS_NPCMount *)0x2c0) {
      this = (ADS_NPCMount *)0x0;
    }
    if (pAVar1 != this) {
      return *(EDS_EntityType *)&pAVar1->_padding_;
    }
  }
  return NPC;
}

// InitData @ 14bca41a0

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

void __thiscall ADS_NPCMount::InitData(ADS_NPCMount *this,FDS_SpawnInfo *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UDS_NPCMountData *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  FDS_EntityBase::InitData((FDS_EntityBase *)this,param_1);
  *(bool *)((longlong)&this->_padding_ + 1) = param_1->bGimmickOpened;
  *(bool *)((longlong)&this->_padding_ + 2) = param_1->bGimmickEnabled;
  this->_padding_ = param_1->EntityID;
  bVar2 = FDS_EntityBase::IsMountNPC((FDS_EntityBase *)this);
  if (bVar2) {
    UDS_NPCMountData::GetData((ulong64)&local_res8);
    bVar2 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar2) {
      this_00 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_res8);
      bVar2 = UDS_NPCMountData::IsMainPlayerMountData(this_00);
      if (bVar2) {
        plVar1 = (longlong *)this->_padding_;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x788))(plVar1,::COLLISION_PROFILE_PLAYER,1);
        }
        local_res10 = 0x400;
        (**(code **)(this->_padding_ + 0x58))(this,&local_res10,0);
      }
    }
  }
  return;
}

// OnChangedMountState @ 14bcb0eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_NPCMount::OnChangedMountState(ADS_NPCMount *this,ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *pUVar3;
  UDS_NPCMountData *this_00;
  ulong64 uVar4;
  ulong64 uVar5;
  FName FVar6;
  undefined1 auStackY_1a8 [32];
  EDS_CharDetailState local_168 [2];
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this->CurrentMountTargetEntityID = *param_1;
  if (this->_padding_ != 0) {
    UDS_NPCMountData::GetData((ulong64)local_158);
    bVar1 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)local_158,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_NPCMount::OnChangedMountState",0x21,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x17e,L"npcMountData is nullptr. (%llu)");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_160);
      bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_160,(void *)0x0)
      ;
      if (!bVar1) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_160);
        local_168[0] = Mount_Flying;
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_168);
        if (bVar1) {
          pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_160);
          local_168[0] = Mount_DisMount;
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_168);
          if (bVar1) {
            (**(code **)(*(longlong *)this->_padding_ + 0x788))
                      ((longlong *)this->_padding_,::COLLISION_PROFILE_NPC_NOCOLLISION,1);
            return;
          }
        }
        if (this->_padding_ == *param_1) {
          (**(code **)(*(longlong *)this->_padding_ + 0x788))
                    ((longlong *)this->_padding_,this->_padding_,1);
          ClearOwnerAscBinding(this);
        }
        else {
          this_00 = (UDS_NPCMountData *)FWeakObjectPtr::Get(local_158);
          uVar4 = FDS_EntityBase::GetMainPlayerEntityID(true);
          uVar5 = UDS_NPCMountData::GetDriverEntityID(this_00);
          FVar6 = ::COLLISION_PROFILE_PLAYER;
          if (uVar5 != uVar4) {
            FVar6 = ::COLLISION_PROFILE_NET_PLAYER;
          }
          (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,FVar6,1);
          ClearOwnerAscBinding(this);
          SetOwnerAscBinding(this,param_1);
        }
      }
    }
  }
  return;
}

// OnOwnerChangedTagCallback @ 14bcb8680

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
ADS_NPCMount::OnOwnerChangedTagCallback(ADS_NPCMount *this,FGameplayTag *param_1,bool param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_NPCMountAbilityContext *pUVar3;
  UDS_NPCMountAbilityContext *local_res8;
  EDS_AbilityTagType local_res18 [16];
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UDS_NPCMountAbilityContext>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_NPCMountAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (pUVar3->AbilityTag).TagName = param_1->TagName;
  pUVar3->IsAdd = param_2;
  pUVar3->OwnerEntityID = this->CurrentMountTargetEntityID;
  bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->MountAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MountAbilityData).WeakPtr);
    pUVar3->IsDespawn = (bool)pUVar2[3].field_0x4;
  }
  local_res8 = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_res18[0] = NPCMount;
  FDS_EntityBase::TryActivateAbility
            ((FDS_EntityBase *)&this->_padding_,local_res18,
             (TObjectPtr<UWN_AbilityContext>)&local_res8);
  return;
}

// PostActorCreated @ 14bcbd0d0

void __thiscall ADS_NPCMount::PostActorCreated(ADS_NPCMount *this)

{
  return;
}

// RemoveEntity @ 14bcc4040

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall ADS_NPCMount::RemoveEntity(ADS_NPCMount *this,float param_1)

{
  longlong *plVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStateData *pUVar4;
  UDS_NPCMountData *pUVar5;
  FDS_NpcBaseTableRow *pFVar6;
  undefined1 auStackY_1a8 [32];
  EDS_CharDetailState local_168 [2];
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar2 = FDS_EntityBase::IsMountNPC((FDS_EntityBase *)this);
  if (bVar2) {
    UDS_CharStateData::GetData((ulong64)&local_158);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_158,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_NPCMount::RemoveEntity",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_148.Ptr,0xce,L"charStateData is nullptr. entityID : %d");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      UDS_NPCMountData::GetData((ulong64)&local_160);
      bVar2 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_160,(void *)0x0);
      if (!bVar2) {
        pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_158);
        local_168[0] = Mount_Flying;
        bVar2 = UDS_CharStateData::HasCharDetailState(pUVar4,local_168);
        if (!bVar2) {
          pUVar5 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_160);
          UDS_NPCMountData::GetDriverEntityID(pUVar5);
          UDS_CharStateData::GetData((ulong64)&local_150);
          bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_150,
                             (void *)0x0);
          if (bVar2) goto LAB_14bcc421a;
          pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
          local_168[0] = Falling;
          bVar2 = UDS_CharStateData::HasCharDetailState(pUVar4,local_168);
          if (!bVar2) goto LAB_14bcc421a;
        }
        pFVar6 = ADS_NPC::GetNpcBaseTable((ADS_NPC *)&this[-1]._padding_);
        plVar1 = (longlong *)this->_padding_;
        param_1 = pFVar6->DisappearClearTime;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x788))(plVar1,::COLLISION_PROFILE_NOCOLLISION,1);
        }
        pUVar5 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_160);
        UDS_NPCMountData::RemoveEntity(pUVar5);
      }
    }
  }
LAB_14bcc421a:
  ADS_EntityActorBase::RemoveEntity((ADS_EntityActorBase *)this,param_1);
  return;
}

// SetOwnerAscBinding @ 14bcc7f20

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

void __thiscall ADS_NPCMount::SetOwnerAscBinding(ADS_NPCMount *this,ulong64 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  FDS_EntityBase *pFVar10;
  UObject *pUVar11;
  UDS_NPCMountAbilityContext *pUVar12;
  UWN_AbilitySystemComponent *this_00;
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy> *this_01;
  FDelegateHandle FVar13;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar14;
  UDS_LogManager *pUVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStackY_248 [32];
  EDS_AbilityTagType local_218 [8];
  FWeakObjectPtr local_210;
  UDS_NPCMountAbilityContext *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  EDS_AbilityTagType *local_1c0;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  undefined1 local_188 [288];
  void *local_68;
  wchar_t *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1c0 = (EDS_AbilityTagType *)param_1;
  pFVar10 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar10 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar10->_padding_ + 0x178))(pFVar10);
    bVar9 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_210,
                       (void *)0x0);
    if (!bVar9) {
      pUVar11 = FWeakObjectPtr::Get(&local_210);
      iStack_1f0 = 0;
      local_1d8 = 0;
      uStack_1ec = 1;
      puVar1 = &pUVar11[9].field_0x18;
      iVar4 = *(int *)&pUVar11[10].field_0x8;
      puVar2 = &pUVar11[9].field_0x8;
      iStack_1dc = 0;
      if (iVar4 != 0) {
        puVar21 = *(uint **)(pUVar11 + 10);
        if (*(uint **)(pUVar11 + 10) == (uint *)0x0) {
          puVar21 = (uint *)puVar1;
        }
        uVar19 = *puVar21;
        while (uVar19 == 0) {
          lVar16 = (longlong)iStack_1f0;
          local_1d8 = local_1d8 + 0x20;
          iStack_1f0 = iStack_1f0 + 1;
          iStack_1dc = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
          goto LAB_14bcc804d;
          uVar19 = puVar21[lVar16 + 1];
        }
        uStack_1ec = -uVar19 & uVar19;
        uVar3 = (ulonglong)uStack_1ec * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1c8 = (int)lVar16;
        iStack_1dc = local_1d8 + -1 + local_1c8;
        if (iVar4 < iStack_1dc) {
          iStack_1dc = iVar4;
        }
      }
LAB_14bcc804d:
      iStack_1d0 = *(int *)&pUVar11[9].field_0x10 - *(int *)&pUVar11[10].field_0x14;
      uVar19 = *(uint *)&pUVar11[10].field_0x8;
      uStack_1e0 = 0xffffffff;
      uVar18 = uVar19 & 0xffffffe0;
      TStack_1b0._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
      TStack_1b0.CurrentBitIndex = iStack_1dc;
      TStack_1b0.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar19 >> 5;
      TStack_1b0._28_4_ = iStack_1dc;
      TStack_1b0.BaseBitIndex = local_1d8;
      uStack_190 = CONCAT44(uStack_1cc,iStack_1d0);
      local_1f8 = puVar2;
      local_1e8 = puVar1;
      iStack_1d4 = iStack_1dc;
      local_1b8 = (longlong *)puVar2;
      TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(uint *)&pUVar11[10].field_0x8;
      if (uVar19 != uVar5) {
        puVar20 = *(undefined1 **)(pUVar11 + 10);
        if (*(undefined1 **)(pUVar11 + 10) == (undefined1 *)0x0) {
          puVar20 = puVar1;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
        while (uVar19 == 0) {
          lVar16 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar19 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14bcc8160;
          uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar19 = (int)lVar16 + -1 + uVar18;
        if ((int)uVar5 < (int)uVar19) {
          uVar19 = uVar5;
        }
      }
LAB_14bcc8160:
      while( true ) {
        plVar8 = local_1b8;
        if ((int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34) != (int)uStack_190) {
          `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_218 + 2);
        }
        lVar16 = (longlong)TStack_1b0.CurrentBitIndex;
        if (((TStack_1b0.CurrentBitIndex == uVar19) &&
            (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (plVar8 == (longlong *)puVar2)) break;
        lVar6 = *plVar8;
        pUVar11 = GetTransientPackageAsObject();
        pUVar12 = NewObject<UDS_NPCMountAbilityContext>(pUVar11);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_NPCMountAbilityContext *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (pUVar12->AbilityTag).TagName = *(FName *)(lVar6 + lVar16 * 0x14);
        pUVar12->IsAdd = true;
        pUVar12->OwnerEntityID = this->CurrentMountTargetEntityID;
        local_208 = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        local_218[0] = NPCMount;
        FDS_EntityBase::TryActivateAbility
                  ((FDS_EntityBase *)&this->_padding_,local_218,
                   (TObjectPtr<UWN_AbilityContext>)&local_208);
        TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      }
      this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_210);
      this_01 = UWN_AbilitySystemComponent::GetChangedTagEvent(this_00);
      local_208 = (UDS_NPCMountAbilityContext *)OnOwnerChangedTagCallback;
      uStack_200 = 0;
      local_188._24_8_ = (ulonglong)uStack_1fc << 0x20;
      local_188._16_8_ = OnOwnerChangedTagCallback;
      FVar13 = TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
               ::AddUObject<ADS_NPCMount>
                         ((TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
                           *)this_01,(ADS_NPCMount *)local_188,(pmf_e343b3b7 *)this);
      local_218[1] = 0x4a;
                    /* WARNING: Load size is inaccurate */
      (this->OnOnwerTagCallbackHandle).ID = *FVar13.ID;
      TVar14 = UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                         ((ulong64 *)(local_188 + 8),local_1c0);
                    /* WARNING: Load size is inaccurate */
      (this->MountAbilityData).WeakPtr = *TVar14.WeakPtr;
      bVar9 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                        (&this->MountAbilityData,(void *)0x0);
      if ((bVar9) && (pUVar15 = UDS_LogManager::GetInst(), pUVar15 != (UDS_LogManager *)0x0)) {
        pUVar15 = UDS_LogManager::GetInst();
        local_68 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_188 + 0x20),
                   "ADS_NPCMount::SetOwnerAscBinding",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar15,1,Warning,local_60,0x16d,L"MountAbilityData is nullptr.");
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
  }
  return;
}

// Tick @ 14bcccb70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_NPCMount::Tick(ADS_NPCMount *this,float param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  USceneComponent *pUVar5;
  UDS_CharStateData *this_00;
  UObject *pUVar6;
  FWeakObjectPtr *this_01;
  undefined1 auStackX_8 [16];
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  
  ADS_EntityActorBase::Tick((ADS_EntityActorBase *)this,param_1);
  if (((char)this->_padding_ == '\x01') && (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) {
    UDS_CharStateData::GetData((ulong64)&FStackX_18);
    bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&FStackX_18,(void *)0x0);
    if (!bVar3) {
      this_01 = (FWeakObjectPtr *)this->_padding_;
      iVar2 = (int)this->_padding_;
      pFVar1 = this_01 + (longlong)iVar2 * 3;
      while( true ) {
        if ((int)this->_padding_ != iVar2) {
          `TCheckedPointerIterator<FDS_ServerHitCapsuleInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_8);
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
            this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStackX_18);
            bVar3 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)(this_01 + 1));
            if ((bVar3) && (this_01[1] == (FWeakObjectPtr)0x10)) {
              bVar3 = false;
              TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&FStackX_20);
              bVar4 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&FStackX_20,
                                 (void *)0x0);
              if (!bVar4) {
                pUVar6 = FWeakObjectPtr::Get(&FStackX_20);
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

