// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b578c80

UClass * __cdecl UDS_RecvNpcClientControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvNpcClientControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvNpcClientControl",
               &Z_Registration_Info_UClass_UDS_RecvNpcClientControl.InnerSingleton,
               StaticRegisterNativesUDS_RecvNpcClientControl,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvNpcClientControl>,
               InternalVTableHelperCtorCaller<UDS_RecvNpcClientControl>,local_res8,
               UDS_RecvProcessBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvNpcClientControl.InnerSingleton;
}

// UDS_RecvNpcClientControl @ 14b57de20

UDS_RecvNpcClientControl * __thiscall
UDS_RecvNpcClientControl::UDS_RecvNpcClientControl
          (UDS_RecvNpcClientControl *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvNpcClientControl__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->SavedMoveModeOnEnter = Idle;
  (this->AddedStateTag).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedStateTag).ArrayNum = 0;
  (this->AddedStateTag).ArrayMax = 0;
  (this->RemovedStateTag).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedStateTag).ArrayNum = 0;
  (this->RemovedStateTag).ArrayMax = 0;
  return this;
}

// ~UDS_RecvNpcClientControl @ 14b57e5b0

void __thiscall UDS_RecvNpcClientControl::~UDS_RecvNpcClientControl(UDS_RecvNpcClientControl *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_RecvNpcClientControl__6B_;
  pFVar1 = (this->RemovedStateTag).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AddedStateTag).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b580290

UClass * __cdecl UDS_RecvNpcClientControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvNpcClientControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvNpcClientControl",
               &Z_Registration_Info_UClass_UDS_RecvNpcClientControl.InnerSingleton,
               StaticRegisterNativesUDS_RecvNpcClientControl,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvNpcClientControl>,
               InternalVTableHelperCtorCaller<UDS_RecvNpcClientControl>,local_res8,
               UDS_RecvProcessBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvNpcClientControl.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvNpcClientControl @ 14b580990

void __cdecl UDS_RecvNpcClientControl::StaticRegisterNativesUDS_RecvNpcClientControl(void)

{
  return;
}

// UDS_RecvNpcClientControl @ 14bba8d00

UDS_RecvNpcClientControl * __thiscall
UDS_RecvNpcClientControl::UDS_RecvNpcClientControl
          (UDS_RecvNpcClientControl *this,FObjectInitializer *param_1)

{
  UDS_RecvProcessBase::UDS_RecvProcessBase((UDS_RecvProcessBase *)this,param_1);
  this->SavedMoveModeOnEnter = Idle;
  this->_padding_ = (longlong)&___7UDS_RecvNpcClientControl__6B_;
  (this->AddedStateTag).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedStateTag).ArrayNum = 0;
  (this->AddedStateTag).ArrayMax = 0;
  (this->RemovedStateTag).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedStateTag).ArrayNum = 0;
  (this->RemovedStateTag).ArrayMax = 0;
  return this;
}

// Initialize @ 14bbc03f0

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
UDS_RecvNpcClientControl::Initialize
          (UDS_RecvNpcClientControl *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  FDS_EntityBase *pFVar2;
  longlong *plVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  undefined1 auStackX_18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this->_padding_ = pFVar2->EntityID;
    EVar1 = pFVar2->EntityType;
    *(EDS_EntityType *)&this->_padding_ = EVar1;
    this->_padding_ = pFVar2->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,auStackX_18);
    this->_padding_ = *plVar3;
    plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,auStackX_18);
    this->_padding_ = *plVar3;
    TVar4 = UDS_CharStateData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar5.WeakPtr;
    TVar6 = UDS_EntityData::GetData((ulong64)auStackX_18,this->_padding_);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar7.WeakPtr;
  }
  return;
}

// IsActiveRecvProcess @ 14bbc2da0

bool __thiscall
UDS_RecvNpcClientControl::IsActiveRecvProcess
          (UDS_RecvNpcClientControl *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8[0] = NPCClientControl;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
    return bVar1;
  }
  return false;
}

// OnEnter @ 14bbc8a00

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
UDS_RecvNpcClientControl::OnEnter(UDS_RecvNpcClientControl *this,FDS_NetSyncData *param_1)

{
  int *piVar1;
  TArray<EDS_StateTagType,TSizedDefaultAllocator<32>_> *this_00;
  TArray<EDS_StateTagType,TSizedDefaultAllocator<32>_> *this_01;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  EDS_MoveMode EVar5;
  UDS_EntityData *pUVar6;
  FDS_EntityBase *pFVar7;
  FScriptContainerElement *pFVar8;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  
  this_00 = &this->AddedStateTag;
  this->SavedMoveModeOnEnter = Idle;
  piVar1 = &(this->AddedStateTag).ArrayMax;
  (this->AddedStateTag).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&this_00->AllocatorInstance,0,piVar1);
  }
  this_01 = &this->RemovedStateTag;
  piVar1 = &(this->RemovedStateTag).ArrayMax;
  (this->RemovedStateTag).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&this_01->AllocatorInstance,0,piVar1);
  }
  bVar4 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
  if (bVar4) {
    return;
  }
  pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  EVar5 = UDS_EntityData::GetMoveMode(pUVar6);
  this->SavedMoveModeOnEnter = EVar5;
  pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_EntityData::SetMoveMode(pUVar6,Walk);
  pFVar7 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pFVar7 == (FDS_EntityBase *)0x0) {
    return;
  }
  (**(code **)(pFVar7->_padding_ + 0x178))(pFVar7);
  bVar4 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (bVar4) {
    return;
  }
  local_res8[0] = NPCClientControl_Show;
  bVar4 = UDS_AbilitySystemComponent::HasStateTag
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
                     local_res8);
  if (!bVar4) {
    local_res8[0] = NPCClientControl_Hide;
    bVar4 = UDS_AbilitySystemComponent::HasStateTag
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
                       local_res8);
    if (!bVar4) {
      local_res8[0] = NPCClientControl_Lifted;
      bVar4 = UDS_AbilitySystemComponent::HasStateTag
                        ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
                         local_res8);
      if (!bVar4) {
        local_res8[0] = NPCClientControl_Thrown;
        bVar4 = UDS_AbilitySystemComponent::HasStateTag
                          ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0]
                           ,local_res8);
        if (!bVar4) {
          local_res8[0] = NPCClientControl_Holded;
          bVar4 = UDS_AbilitySystemComponent::HasStateTag
                            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)
                             local_res18[0],local_res8);
          if (!bVar4) {
            local_res8[0] = NPCClientControl_Falling;
            bVar4 = UDS_AbilitySystemComponent::HasStateTag
                              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)
                               local_res18[0],local_res8);
            if (!bVar4) goto LAB_14bbc8b94;
          }
        }
      }
    }
  }
  local_res8[0] = MoveStart;
  TArray<enum_EDS_StateTagType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StateTagType>
            (this_00,local_res8);
  local_res8[0] = MoveEnd;
  TArray<enum_EDS_StateTagType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StateTagType>
            (this_01,local_res8);
LAB_14bbc8b94:
  pFVar8 = (this_01->AllocatorInstance).Data;
  iVar3 = (this->RemovedStateTag).ArrayNum;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if ((this->RemovedStateTag).ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
               (EDS_StateTagType *)pFVar8);
    pFVar8 = pFVar8 + 1;
  }
  pFVar8 = (this_00->AllocatorInstance).Data;
  iVar3 = (this->AddedStateTag).ArrayNum;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if ((this->AddedStateTag).ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
               (EDS_StateTagType *)pFVar8);
    pFVar8 = pFVar8 + 1;
  }
  return;
}

// OnExit @ 14bbc9200

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
UDS_RecvNpcClientControl::OnExit(UDS_RecvNpcClientControl *this,FDS_NetSyncData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  UDS_EntityData *this_00;
  FDS_EntityBase *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  
  bVar4 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
  if (!bVar4) {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_EntityData::SetMoveMode(this_00,this->SavedMoveModeOnEnter);
    pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
    if (pFVar5 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x178))(pFVar5);
      bVar4 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)local_res18,
                         (void *)0x0);
      if (!bVar4) {
        pFVar6 = (this->AddedStateTag).AllocatorInstance.Data;
        iVar3 = (this->AddedStateTag).ArrayNum;
        pFVar2 = pFVar6 + iVar3;
        while( true ) {
          if ((this->AddedStateTag).ArrayNum != iVar3) {
            `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar6 == pFVar2) break;
          UDS_AbilitySystemComponent::RemoveStateTag
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
                     (EDS_StateTagType *)pFVar6);
          pFVar6 = pFVar6 + 1;
        }
        pFVar6 = (this->RemovedStateTag).AllocatorInstance.Data;
        iVar3 = (this->RemovedStateTag).ArrayNum;
        pFVar2 = pFVar6 + iVar3;
        while( true ) {
          if ((this->RemovedStateTag).ArrayNum != iVar3) {
            `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar6 == pFVar2) break;
          UDS_AbilitySystemComponent::AddStateTag
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)local_res18[0],
                     (EDS_StateTagType *)pFVar6);
          pFVar6 = pFVar6 + 1;
        }
        piVar1 = &(this->AddedStateTag).ArrayMax;
        this->SavedMoveModeOnEnter = Idle;
        (this->AddedStateTag).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&(this->AddedStateTag).AllocatorInstance,0,piVar1);
        }
        piVar1 = &(this->RemovedStateTag).ArrayMax;
        (this->RemovedStateTag).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&(this->RemovedStateTag).AllocatorInstance,0,piVar1);
        }
      }
    }
  }
  return;
}

// RecvSyncTick @ 14bbd70a0

void __thiscall
UDS_RecvNpcClientControl::RecvSyncTick
          (UDS_RecvNpcClientControl *this,FDS_NetSyncData *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbd70a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))();
  return;
}

