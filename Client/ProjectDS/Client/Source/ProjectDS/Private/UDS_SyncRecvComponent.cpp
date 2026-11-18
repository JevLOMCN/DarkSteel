// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// StaticClass @ 14b5ada50

UClass * __cdecl UDS_SyncRecvComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncRecvComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncRecvComponent",
               &Z_Registration_Info_UClass_UDS_SyncRecvComponent.InnerSingleton,
               StaticRegisterNativesUDS_SyncRecvComponent,0x3d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncRecvComponent>,
               InternalVTableHelperCtorCaller<UDS_SyncRecvComponent>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncRecvComponent.InnerSingleton;
}

// UDS_SyncRecvComponent @ 14b5b1d10

UDS_SyncRecvComponent * __thiscall
UDS_SyncRecvComponent::UDS_SyncRecvComponent(UDS_SyncRecvComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SyncRecvComponent__6B_;
  this->OwnerEntityID = 0;
  this->OwnerEntityType = None;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerMovementCore).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerEntityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerEntityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCharInfoData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerCharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCharStatusData).WeakPtr,(FObjectPtr)&local_res8);
  FDS_NetSyncData::FDS_NetSyncData(&this->SyncData);
  (this->RecvProcessList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecvProcessList).ArrayNum = 0;
  (this->RecvProcessList).ArrayMax = 0;
  *(undefined8 *)&this->RecvProcessMap = 0;
  *(undefined8 *)&(this->RecvProcessMap).field_0x8 = 0;
  *(undefined8 *)&(this->RecvProcessMap).field_0x20 = 0;
  *(undefined4 *)&(this->RecvProcessMap).field_0x28 = 0;
  *(undefined4 *)&(this->RecvProcessMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RecvProcessMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RecvProcessMap).field_0x34 = 0;
  *(undefined8 *)&(this->RecvProcessMap).field_0x40 = 0;
  *(undefined4 *)&(this->RecvProcessMap).field_0x48 = 0;
  (this->CurRecvProcess).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->CurRecvProcess).WeakPtr,(FObjectPtr)&local_res8);
  this->bBattleState = false;
  this->bMountState = false;
  this->ServerTickTimeSeconds = 0.0;
  this->LastServerTickTimeSeconds = 0.0;
  return this;
}

// ~UDS_SyncRecvComponent @ 14b5b2850

void __thiscall UDS_SyncRecvComponent::~UDS_SyncRecvComponent(UDS_SyncRecvComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_SyncRecvComponent__6B_;
  *(undefined4 *)&(this->RecvProcessMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RecvProcessMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->RecvProcessMap);
  pFVar2 = (this->RecvProcessList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SyncData).HeightMoveDataList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4750

UClass * __cdecl UDS_SyncRecvComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncRecvComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncRecvComponent",
               &Z_Registration_Info_UClass_UDS_SyncRecvComponent.InnerSingleton,
               StaticRegisterNativesUDS_SyncRecvComponent,0x3d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncRecvComponent>,
               InternalVTableHelperCtorCaller<UDS_SyncRecvComponent>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncRecvComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncRecvComponent @ 14b5b5930

void __cdecl UDS_SyncRecvComponent::StaticRegisterNativesUDS_SyncRecvComponent(void)

{
  return;
}

// UDS_SyncRecvComponent @ 14bba91b0

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

UDS_SyncRecvComponent * __thiscall
UDS_SyncRecvComponent::UDS_SyncRecvComponent
          (UDS_SyncRecvComponent *this,FObjectInitializer *param_1)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr *pFVar6;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar7;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar8;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar9;
  UObject *pUVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SyncRecvComponent__6B_;
  this->OwnerEntityID = 0;
  this->OwnerEntityType = None;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerMovementCore).WeakPtr,(FObjectPtr)local_res18);
  (this->OwnerEntityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerEntityData).WeakPtr,(FObjectPtr)local_res18);
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCharStateData).WeakPtr,(FObjectPtr)local_res18);
  (this->OwnerCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCharInfoData).WeakPtr,(FObjectPtr)local_res18);
  (this->OwnerCharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerCharStatusData).WeakPtr,(FObjectPtr)local_res18);
  FDS_NetSyncData::FDS_NetSyncData(&this->SyncData);
  (this->RecvProcessList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecvProcessList).ArrayNum = 0;
  (this->RecvProcessList).ArrayMax = 0;
  *(undefined8 *)&this->RecvProcessMap = 0;
  *(undefined8 *)&(this->RecvProcessMap).field_0x8 = 0;
  *(undefined8 *)&(this->RecvProcessMap).field_0x20 = 0;
  *(undefined4 *)&(this->RecvProcessMap).field_0x28 = 0;
  *(undefined4 *)&(this->RecvProcessMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RecvProcessMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RecvProcessMap).field_0x34 = 0;
  *(undefined8 *)&(this->RecvProcessMap).field_0x40 = 0;
  *(undefined4 *)&(this->RecvProcessMap).field_0x48 = 0;
  (this->CurRecvProcess).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=(&(this->CurRecvProcess).WeakPtr,(FObjectPtr)local_res18);
  pUVar10 = (UObject *)this->_padding_;
  this->bBattleState = false;
  this->bMountState = false;
  this->ServerTickTimeSeconds = 0.0;
  this->LastServerTickTimeSeconds = 0.0;
  if (pUVar10 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bba9300;
  }
  pUVar10 = (UObject *)0x0;
LAB_14bba9300:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  FVar2 = local_res8;
  if (bVar3) {
    pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
    if (pFVar5 != (FDS_EntityBase *)0x0) {
      this->OwnerEntityID = pFVar5->EntityID;
      this->OwnerEntityType = pFVar5->EntityType;
      pFVar6 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x78))(pFVar5,local_res18);
      (this->OwnerMovementCore).WeakPtr = *pFVar6;
      TVar7 = UDS_EntityData::GetData((ulong64)local_res18,pFVar5->EntityID);
                    /* WARNING: Load size is inaccurate */
      (this->OwnerEntityData).WeakPtr = *TVar7.WeakPtr;
      TVar8 = UDS_CharInfoData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
      (this->OwnerCharInfoData).WeakPtr = *TVar8.WeakPtr;
      TVar9 = UDS_CharStatusData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
      (this->OwnerCharStatusData).WeakPtr = *TVar9.WeakPtr;
      InitializeRecvProcesses(this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)FVar2);
      bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr);
      if (bVar3) {
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCharStateData).WeakPtr);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_SyncRecvComponent>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                    *)&pUVar10[7].field_0x20,(UDS_SyncRecvComponent *)local_res18,(pmf_ce9eb53e)this
                  );
      }
    }
  }
  return this;
}

// ApplySyncData @ 14bbaba40

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
UDS_SyncRecvComponent::ApplySyncData(UDS_SyncRecvComponent *this,NetSyncResponse *param_1)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  double dVar4;
  FDS_EntityBase *pFVar5;
  Vector *pVVar6;
  VectorF *pVVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  TRotator<double> local_78;
  TVector<double>_u_0 local_60;
  TVector<double> local_48;
  
  FDS_NetSyncData::SavePrevData(&this->SyncData);
  pFVar5 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    this->LastServerTickTimeSeconds = this->ServerTickTimeSeconds;
    dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
    this->ServerTickTimeSeconds = dVar4;
    pVVar1 = (param_1->_impl_).position_;
    pVVar6 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar6 = pVVar1;
    }
    DS_Util::SetFVector(&local_48,pVVar6);
    pVVar2 = (param_1->_impl_).velocity_;
    pVVar7 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar7 = pVVar2;
    }
    DS_Util::SetFVector((TVector<double> *)&local_60._s_0,pVVar7);
    pVVar2 = (param_1->_impl_).direction_;
    pVVar7 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar7 = pVVar2;
    }
    DS_Util::GetNetRotate(&local_78,pVVar7);
    if (((param_1->_impl_)._has_bits_.has_bits_[0] & 0x40) == 0) {
      (this->SyncData).TransportEntityID = 0;
      if ((this->SyncData).PrevTransportEntityID != 0) {
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = 0;
        pcVar3 = *(code **)(pFVar5->_padding_ + 0x1c8);
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        (*pcVar3)(pFVar5,local_res8);
      }
      pVVar1 = (param_1->_impl_).position_;
      pVVar6 = &_Vector_default_instance_._instance;
      if (pVVar1 != (Vector *)0x0) {
        pVVar6 = pVVar1;
      }
      DS_Util::SetSyncLocation(this->OwnerEntityID,&(this->SyncData).ServerPosition,pVVar6,false);
      (this->SyncData).VelocityVector.field0_0x0._s_0.X = local_60._s_0.X;
      (this->SyncData).VelocityVector.field0_0x0._s_0.Y = local_60._s_0.Y;
      (this->SyncData).VelocityVector.field0_0x0._s_0.Z = local_60._s_0.Z;
      (this->SyncData).EntityDirection.Pitch = local_78.Pitch;
      (this->SyncData).EntityDirection.Yaw = local_78.Yaw;
      (this->SyncData).EntityDirection.Roll = local_78.Roll;
    }
    else {
      ProcessTransportMovement(this,param_1,(TVector<double> *)&local_60._s_0,&local_78,pFVar5);
    }
    ProcessCommonSyncData(this,param_1,&local_48,&local_78);
  }
  return;
}

// BindEvents @ 14bbac110

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
UDS_SyncRecvComponent::BindEvents(UDS_SyncRecvComponent *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((param_1 != (FDS_EntityBase *)0x0) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr), bVar1)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharStateData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_SyncRecvComponent>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar2[7].field_0x20,(UDS_SyncRecvComponent *)&stack0x00000010,(pmf_ce9eb53e)this
              );
  }
  return;
}

// Deinitialize @ 14bbb27e0

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

void __thiscall UDS_SyncRecvComponent::Deinitialize(UDS_SyncRecvComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UDS_MountEvent *pUVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FDestructionSentinel local_48;
  
  pUVar5 = UDS_MountEvent::GetEvent();
  if (pUVar5 != (UDS_MountEvent *)0x0) {
    FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
    Remove<UDS_SyncRecvComponent>(&pUVar5->OnMountOwnerChanged_Filtered,this,&this->OwnerEntityID);
  }
  pFVar6 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar6->OnHitDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar6->OnAbnormalEventDelegate,this);
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->OwnerCharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[7].field_0x20,this);
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[5].field_0x20,this);
  }
  pFVar8 = (this->RecvProcessList).AllocatorInstance.Data;
  iVar2 = (this->RecvProcessList).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RecvProcessList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_RecvProcessBase>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if ((*(longlong *)pFVar8 != 0) && ((*(uint *)(*(longlong *)pFVar8 + 8) >> 0x1e & 1) == 0)) {
      lVar3 = *(longlong *)pFVar8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x28),
                 (FWriteAccessScope *)&local_48);
      if ((*(int *)(lVar3 + 0x38) != 0) && (*(undefined8 **)(lVar3 + 0x30) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(lVar3 + 0x30),0,0,0x10);
        *(undefined4 *)(lVar3 + 0x38) = 0;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetCurrentHeightMoveData @ 14bbbc1e0

bool __cdecl
UDS_SyncRecvComponent::GetCurrentHeightMoveData
          (FDS_NetSyncData *param_1,FDS_HeightMoveData *param_2)

{
  int iVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  iVar1 = (param_1->HeightMoveDataList).ArrayNum;
  pFVar3 = (param_1->HeightMoveDataList).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_1->HeightMoveDataList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_HeightMoveData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) {
      return false;
    }
    *(float *)(pFVar3 + 0x28) = (float)(*(double *)(pFVar3 + 8) - dVar2);
    if ((float)(*(double *)(pFVar3 + 8) - dVar2) < 0.0) {
      *(undefined4 *)(pFVar3 + 0x28) = 0;
    }
    if (*(double *)pFVar3 - dVar2 < 0.0) break;
    pFVar3 = pFVar3 + 0x30;
  }
  dVar2 = *(double *)(pFVar3 + 8);
  param_2->StartTime = *(double *)pFVar3;
  param_2->EndTime = dVar2;
  dVar2 = *(double *)(pFVar3 + 0x18);
  param_2->Distance = *(double *)(pFVar3 + 0x10);
  param_2->HeightStartLocation = dVar2;
  dVar2 = *(double *)(pFVar3 + 0x28);
  param_2->HeightTargetLocation = *(double *)(pFVar3 + 0x20);
  *(double *)&param_2->RemainTime = dVar2;
  return true;
}

// GetSyncRecvComponent @ 14bbbe330

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

TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> __cdecl
UDS_SyncRecvComponent::GetSyncRecvComponent(ulong64 param_1)

{
  ulong64 local_res10;
  FDS_EntityBase *local_res18 [2];
  
  local_res18[0] = FDS_EntityBase::GetEntityBase(&local_res10);
  if (local_res18[0] != (FDS_EntityBase *)0x0) {
    (**(code **)(local_res18[0]->_padding_ + 400))(local_res18[0],param_1);
    return (TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  *(undefined8 *)param_1 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_res18);
  return (TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// HasHeightMoveData @ 14bbbfb40

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

bool __cdecl UDS_SyncRecvComponent::HasHeightMoveData(ulong64 param_1)

{
  bool bVar1;
  FWeakObjectPtr FVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  ulong64 local_res10;
  FWeakObjectPtr local_res18;
  
  local_res10 = param_1;
  FVar2 = (FWeakObjectPtr)FDS_EntityBase::GetEntityBase(&local_res10);
  if (FVar2 == (FWeakObjectPtr)0x0) {
    local_res8 = FVar2;
    local_res18 = FVar2;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  else {
    (**(code **)(*(longlong *)FVar2 + 400))(FVar2);
  }
  bVar1 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_res8,(void *)0x0
                    );
  if (bVar1) {
    return false;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res8);
  return 0 < *(int *)(pUVar3 + 0x14);
}

// Initialize @ 14bbc09b0

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
UDS_SyncRecvComponent::Initialize
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *pFVar3;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar6;
  UObject *pUVar7;
  undefined1 local_res18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this->OwnerEntityID = pFVar2->EntityID;
    this->OwnerEntityType = pFVar2->EntityType;
    pFVar3 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,local_res18);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
    TVar4 = UDS_EntityData::GetData((ulong64)local_res18,pFVar2->EntityID);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerEntityData).WeakPtr = *TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCharInfoData).WeakPtr = *TVar5.WeakPtr;
    TVar6 = UDS_CharStatusData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCharStatusData).WeakPtr = *TVar6.WeakPtr;
    InitializeRecvProcesses(this,param_1);
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharStateData).WeakPtr);
    if (bVar1) {
      pUVar7 = FWeakObjectPtr::Get(&(this->OwnerCharStateData).WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_SyncRecvComponent>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar7[7].field_0x20,(UDS_SyncRecvComponent *)local_res18,(pmf_ce9eb53e)this);
    }
  }
  return;
}

// InitializeCommonRecvProcesses @ 14bbc1320

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_SyncRecvComponent::InitializeCommonRecvProcesses
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  int iVar1;
  FDS_EntityBase *pFVar2;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar3;
  UObject *pUVar4;
  UDS_RecvWarpProcess *pUVar5;
  UClass *pUVar6;
  UDS_RecvSkillProcess *pUVar7;
  longlong *plVar8;
  TArray<TObjectPtr<UDS_RecvProcessBase>,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr local_res10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_res10 = param_1.WeakPtr;
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    TVar3 = UDS_CharStateData::GetData((ulong64)local_b8);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCharStateData).WeakPtr = *TVar3.WeakPtr;
    pTVar9 = &this->RecvProcessList;
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pUVar5 = NewObject<UDS_RecvWarpProcess>(pUVar4);
    iVar1 = (this->RecvProcessList).ArrayNum;
    if (iVar1 == (this->RecvProcessList).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar1 + 1;
    *(UDS_RecvWarpProcess **)((pTVar9->AllocatorInstance).Data + (longlong)iVar1 * 8) = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_RecvWarpProcess *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_RecvResurrectProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    iVar1 = (this->RecvProcessList).ArrayNum;
    if (iVar1 == (this->RecvProcessList).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar1 + 1;
    *(UObject **)((pTVar9->AllocatorInstance).Data + (longlong)iVar1 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_RecvDeathProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    iVar1 = (this->RecvProcessList).ArrayNum;
    if (iVar1 == (this->RecvProcessList).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar1 + 1;
    *(UObject **)((pTVar9->AllocatorInstance).Data + (longlong)iVar1 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pUVar7 = NewObject<UDS_RecvSkillProcess>(pUVar4);
    iVar1 = (this->RecvProcessList).ArrayNum;
    if (iVar1 == (this->RecvProcessList).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar1 + 1;
    *(UDS_RecvSkillProcess **)((pTVar9->AllocatorInstance).Data + (longlong)iVar1 * 8) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_RecvSkillProcess *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_RecvAbnormalProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    iVar1 = (this->RecvProcessList).ArrayNum;
    if (iVar1 == (this->RecvProcessList).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar1 + 1;
    *(UObject **)((pTVar9->AllocatorInstance).Data + (longlong)iVar1 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  return;
}

// InitializeNetCharacterRecvProcesses @ 14bbc1620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_SyncRecvComponent::InitializeNetCharacterRecvProcesses
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  TArray<TObjectPtr<UDS_RecvProcessBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  FWeakObjectPtr local_res10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar1 = &this->RecvProcessList;
  local_res10 = param_1.WeakPtr;
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_RecvTamingProcess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar2 = (this->RecvProcessList).ArrayNum;
  if (iVar2 == (this->RecvProcessList).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
  }
  (this->RecvProcessList).ArrayNum = iVar2 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_RecvClimbingProcess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar2 = (this->RecvProcessList).ArrayNum;
  if (iVar2 == (this->RecvProcessList).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
  }
  (this->RecvProcessList).ArrayNum = iVar2 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_RecvMoveMountProcess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar2 = (this->RecvProcessList).ArrayNum;
  if (iVar2 == (this->RecvProcessList).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
  }
  (this->RecvProcessList).ArrayNum = iVar2 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_RecvLiftUpProcess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar2 = (this->RecvProcessList).ArrayNum;
  if (iVar2 == (this->RecvProcessList).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
  }
  (this->RecvProcessList).ArrayNum = iVar2 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_RecvMoveNetCharacterProcess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar2 = (this->RecvProcessList).ArrayNum;
  if (iVar2 == (this->RecvProcessList).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
  }
  (this->RecvProcessList).ArrayNum = iVar2 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return;
}

// InitializeNpcRecvProcesses @ 14bbc1970

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_SyncRecvComponent::InitializeNpcRecvProcesses
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  TArray<TObjectPtr<UDS_RecvProcessBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  FDS_EntityBase *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_MountEvent *pUVar6;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  longlong *plVar7;
  FWeakObjectPtr local_res10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [24];
  UObject *local_b0;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_res10 = param_1.WeakPtr;
  this_00 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (this_00 != (FDS_EntityBase *)0x0) {
    pTVar1 = &this->RecvProcessList;
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_RecvNpcClientControl_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_c8 + 0x10),pUVar5);
    local_b0 = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x10));
    if (local_78 != 0) {
      plVar7 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    iVar3 = (this->RecvProcessList).ArrayNum;
    if (iVar3 == (this->RecvProcessList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_RecvNpcRotationProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_c8 + 0x10),pUVar5);
    local_b0 = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x10));
    if (local_78 != 0) {
      plVar7 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    iVar3 = (this->RecvProcessList).ArrayNum;
    if (iVar3 == (this->RecvProcessList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_RecvMoveNpcProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_c8 + 0x10),pUVar5);
    local_b0 = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_c8 + 0x10));
    if (local_78 != 0) {
      plVar7 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    iVar3 = (this->RecvProcessList).ArrayNum;
    if (iVar3 == (this->RecvProcessList).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar3 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_SyncRecvComponent>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnHitDelegate,(UDS_SyncRecvComponent *)local_c8,(pmf_449a5075)this);
    TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_SyncRecvComponent>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnAbnormalEventDelegate,(UDS_SyncRecvComponent *)local_c8,
               (pmf_449a5075)this);
    bVar2 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerEntityData,(void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_MoveMode),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_SyncRecvComponent>
                (&pUVar4[5].field_0x20,(UDS_SyncRecvComponent *)local_c8,(pmf_d4357966)this);
    }
    bVar2 = FDS_EntityBase::IsMountNPC(this_00);
    if ((bVar2) && (pUVar6 = UDS_MountEvent::GetEvent(), pUVar6 != (UDS_MountEvent *)0x0)) {
      FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
      Remove<UDS_SyncRecvComponent>(&pUVar6->OnMountOwnerChanged_Filtered,this,&this->OwnerEntityID)
      ;
      this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                ::FindOrAddImpl<unsigned___int64_const_&>
                          ((TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                            *)&(pUVar6->OnMountOwnerChanged_Filtered).Subscriptions,
                           (int)(this->OwnerEntityID >> 0x20) * 0x17 + (int)this->OwnerEntityID,
                           &this->OwnerEntityID);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_01,this);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_SyncRecvComponent>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
                  *)this_01,(UDS_SyncRecvComponent *)local_c8,(pmf_65406631)this);
    }
  }
  return;
}

// InitializeRecvProcesses @ 14bbc1d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_SyncRecvComponent::InitializeRecvProcesses
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UDS_RecvProcessBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  EDS_EntityType EVar4;
  longlong lVar5;
  int iVar6;
  UObject *pUVar7;
  UDS_RecvProcessBase *pUVar8;
  UDS_RecvWarpProcess *pUVar9;
  UClass *pUVar10;
  UDS_RecvSkillProcess *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  FWeakObjectPtr local_res10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined4 local_114;
  TPairInitializer<EDS_SyncRecvType_&&,TObjectPtr<UDS_RecvProcessBase>_&> local_110;
  undefined4 *local_100;
  FScriptContainerElement *local_f8;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  EVar4 = this->OwnerEntityType;
  local_res10 = param_1.WeakPtr;
  if (EVar4 == MainCharacter) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pUVar8 = NewObject<UDS_RecvProcessBase>(pUVar7);
    piVar1 = &(this->RecvProcessList).ArrayMax;
    iVar6 = (this->RecvProcessList).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->RecvProcessList).AllocatorInstance,piVar1);
    }
    (this->RecvProcessList).ArrayNum = iVar6 + 1;
    *(UDS_RecvProcessBase **)((this->RecvProcessList).AllocatorInstance.Data + (longlong)iVar6 * 8)
         = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_RecvProcessBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
  }
  else if (EVar4 == Transport) {
    pTVar2 = &this->RecvProcessList;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pUVar9 = NewObject<UDS_RecvWarpProcess>(pUVar7);
    iVar6 = (this->RecvProcessList).ArrayNum;
    if (iVar6 == (this->RecvProcessList).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar6 + 1;
    *(UDS_RecvWarpProcess **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_RecvWarpProcess *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UDS_RecvMoveTransportProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar10);
    local_c8._8_8_ = pUVar7;
    pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar14 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    iVar6 = (this->RecvProcessList).ArrayNum;
    if (iVar6 == (this->RecvProcessList).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar6 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  else if (EVar4 == Totem) {
    pTVar2 = &this->RecvProcessList;
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pUVar11 = NewObject<UDS_RecvSkillProcess>(pUVar7);
    iVar6 = (this->RecvProcessList).ArrayNum;
    if (iVar6 == (this->RecvProcessList).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar6 + 1;
    *(UDS_RecvSkillProcess **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UDS_RecvSkillProcess *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    FObjectInitializer::AssertIfInConstructor
              (pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UDS_RecvMoveTotemProcess_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar10);
    local_c8._8_8_ = pUVar7;
    pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar14 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    iVar6 = (this->RecvProcessList).ArrayNum;
    if (iVar6 == (this->RecvProcessList).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&(this->RecvProcessList).ArrayMax);
    }
    (this->RecvProcessList).ArrayNum = iVar6 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  else {
    InitializeCommonRecvProcesses(this,param_1);
    if (this->OwnerEntityType == NPC) {
      InitializeNpcRecvProcesses(this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
    }
    else if ((byte)(this->OwnerEntityType - NetCharacter) < 2) {
      InitializeNetCharacterRecvProcesses(this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      pUVar8 = NewObject<UDS_RecvProcessBase>(pUVar7);
      piVar1 = &(this->RecvProcessList).ArrayMax;
      iVar6 = (this->RecvProcessList).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->RecvProcessList).AllocatorInstance,piVar1);
      }
      (this->RecvProcessList).ArrayNum = iVar6 + 1;
      *(UDS_RecvProcessBase **)
       ((this->RecvProcessList).AllocatorInstance.Data + (longlong)iVar6 * 8) = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_RecvProcessBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
    }
  }
  pFVar15 = (this->RecvProcessList).AllocatorInstance.Data;
  iVar6 = (this->RecvProcessList).ArrayNum;
  pFVar3 = pFVar15 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->RecvProcessList).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UDS_RecvProcessBase>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_118);
    }
    if (pFVar15 == pFVar3) break;
    if ((*(longlong *)pFVar15 != 0) && ((*(uint *)(*(longlong *)pFVar15 + 8) >> 0x1e & 1) == 0)) {
      (**(code **)(**(longlong **)pFVar15 + 0x2b0))(*(longlong **)pFVar15,local_res10);
      lVar5 = *(longlong *)pFVar15;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar5 + 0x28),
                 (FWriteAccessScope *)&local_f0);
      local_d8 = (FDelegateAllocation *)(lVar5 + 0x30);
      puVar12 = UE::Core::Private::DelegateAllocate(0x28,local_d8);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EDS_MoveMode__0_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SyncRecvComponent____A6AXW4EDS_MoveMode__0_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar12[3] = 0;
        local_110.Value = (TObjectPtr<UDS_RecvProcessBase> *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_110.Value);
        puVar12[4] = _vcall__800__flat______;
      }
      if (local_f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
      }
      local_114 = *(undefined4 *)(*(longlong *)pFVar15 + 0x88);
      local_100 = &local_114;
      local_f8 = pFVar15;
      TSet<TTuple<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_SyncRecvType_&&,TObjectPtr<UDS_RecvProcessBase>_&>_>
                (&this->RecvProcessMap,&local_110,(bool *)&local_100);
    }
    pFVar15 = pFVar15 + 8;
  }
  return;
}

// IsValidCheck @ 14bbc4e60

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

bool __thiscall UDS_SyncRecvComponent::IsValidCheck(UDS_SyncRecvComponent *this)

{
  bool bVar1;
  ulong64 uVar2;
  FDS_EntityBase *pFVar3;
  
  uVar2 = UDS_GameInstance::GetDebugEntityID();
  if ((uVar2 == 0xffffffffffffffff) || (uVar2 == this->OwnerEntityID)) {
    pFVar3 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerMovementCore).WeakPtr);
      if (bVar1) {
        bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
        return bVar1;
      }
    }
  }
  return false;
}

// OnAbnormalEvent @ 14bbc71e0

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
UDS_SyncRecvComponent::OnAbnormalEvent(UDS_SyncRecvComponent *this,FDS_StruckInfo *param_1)

{
  FDS_EntityBase *this_00;
  
  if (this->bBattleState != true) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      this->bBattleState = true;
      FDS_EntityBase::SetBattleState(this_00,true);
      return;
    }
  }
  return;
}

// OnChangeMoveModeEvent @ 14bbc7a10

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
UDS_SyncRecvComponent::OnChangeMoveModeEvent(UDS_SyncRecvComponent *this,EDS_MoveMode param_1)

{
  FDS_EntityBase *this_00;
  
  if (((param_1 - Run & 0xf7) == 0) && (this->bBattleState != true)) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      this->bBattleState = true;
      FDS_EntityBase::SetBattleState(this_00,true);
      return;
    }
  }
  return;
}

// OnChangedCharState @ 14bbc7a60

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
UDS_SyncRecvComponent::OnChangedCharState
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  FDS_CharStateInfo *pFVar2;
  FWeakObjectPtr *pFVar3;
  FName *pFVar4;
  UDS_CharStateData *this_00;
  FDS_EntityBase *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  EDS_SyncRecvType EVar8;
  FWeakObjectPtr local_res10 [2];
  EDS_CharState local_res20;
  int local_18;
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    FWeakObjectPtr::Get(local_res10);
    pFVar2 = UDS_CharStateData::GetCharStateInfo(&param_2->StateTag);
    if (param_2->bIsStateTagOn == true) {
      if (pFVar2->State == Dead) {
        if (*(int *)&(this->RecvProcessMap).field_0x8 != *(int *)&(this->RecvProcessMap).field_0x34)
        {
          puVar6 = *(undefined1 **)&(this->RecvProcessMap).field_0x40;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &(this->RecvProcessMap).field_0x38;
          }
          iVar7 = *(int *)(puVar6 + (ulonglong)
                                    (*(int *)&(this->RecvProcessMap).field_0x48 - 1U & 10) * 4);
          if (iVar7 != -1) {
LAB_14bbc7b00:
            if (*(int *)(*(longlong *)&this->RecvProcessMap + (longlong)iVar7 * 0x14) != 10)
            goto code_r0x00014bbc7b0e;
            EVar8 = RecvDeathProcess;
LAB_14bbc7bff:
            pFVar3 = &TMapBase<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>,0>_>
                      ::FindChecked(&this->RecvProcessMap,EVar8)->WeakPtr;
            SwitchRecvProcess(this,(TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>)*pFVar3);
          }
        }
      }
      else if (pFVar2->State == Resurrect) {
        if (*(int *)&(this->RecvProcessMap).field_0x8 != *(int *)&(this->RecvProcessMap).field_0x34)
        {
          puVar6 = *(undefined1 **)&(this->RecvProcessMap).field_0x40;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &(this->RecvProcessMap).field_0x38;
          }
          iVar7 = *(int *)(puVar6 + (ulonglong)
                                    (*(int *)&(this->RecvProcessMap).field_0x48 - 1U & 0xd) * 4);
          if (iVar7 != -1) {
            do {
              if (*(int *)(*(longlong *)&this->RecvProcessMap + (longlong)iVar7 * 0x14) == 0xd) {
                EVar8 = RecvResurrectProcess;
                goto LAB_14bbc7bff;
              }
              iVar7 = *(int *)(*(longlong *)&this->RecvProcessMap + 0xc + (longlong)iVar7 * 0x14);
            } while (iVar7 != -1);
          }
        }
      }
      else {
        local_18 = (int)*(undefined8 *)&pFVar2->DetailState;
        if ((local_18 == 0x4d) &&
           (*(int *)&(this->RecvProcessMap).field_0x8 != *(int *)&(this->RecvProcessMap).field_0x34)
           ) {
          puVar6 = *(undefined1 **)&(this->RecvProcessMap).field_0x40;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &(this->RecvProcessMap).field_0x38;
          }
          iVar7 = *(int *)(puVar6 + (ulonglong)
                                    (*(int *)&(this->RecvProcessMap).field_0x48 - 1U & 0x10) * 4);
          if (iVar7 != -1) {
            do {
              if (*(int *)(*(longlong *)&this->RecvProcessMap + (longlong)iVar7 * 0x14) == 0x10) {
                EVar8 = RecvTamingProcess;
                goto LAB_14bbc7bff;
              }
              iVar7 = *(int *)(*(longlong *)&this->RecvProcessMap + 0xc + (longlong)iVar7 * 0x14);
            } while (iVar7 != -1);
          }
        }
      }
    }
    else {
      local_res20 = CONCAT71(local_res20._1_7_,0x86);
      pFVar4 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res20)->TagName;
      if ((((param_2->bIsStateTagOn == false) && (*pFVar4 != (FName)0x0)) &&
          ((param_2->StateTag).TagName == *pFVar4)) &&
         ((this->bBattleState != false &&
          (pFVar5 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID),
          pFVar5 != (FDS_EntityBase *)0x0)))) {
        this->bBattleState = false;
        FDS_EntityBase::SetBattleState(pFVar5,false);
      }
    }
LAB_14bbc7c5e:
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20 = Skill;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res20);
    if (((bVar1) && (this->bBattleState != true)) &&
       (pFVar5 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID),
       pFVar5 != (FDS_EntityBase *)0x0)) {
      this->bBattleState = true;
      FDS_EntityBase::SetBattleState(pFVar5,true);
    }
  }
  return;
code_r0x00014bbc7b0e:
  iVar7 = *(int *)(*(longlong *)&this->RecvProcessMap + 0xc + (longlong)iVar7 * 0x14);
  if (iVar7 == -1) goto LAB_14bbc7c5e;
  goto LAB_14bbc7b00;
}

// OnChangedMountState @ 14bbc7d70

void __thiscall
UDS_SyncRecvComponent::OnChangedMountState(UDS_SyncRecvComponent *this,ulong64 *param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this->bMountState = this->OwnerEntityID != *param_1;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->CurRecvProcess).WeakPtr = local_res8;
  return;
}

// OnHitEvent @ 14bbc9f90

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
UDS_SyncRecvComponent::OnHitEvent(UDS_SyncRecvComponent *this,FDS_StruckInfo *param_1)

{
  FDS_EntityBase *this_00;
  
  if (this->bBattleState != true) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      this->bBattleState = true;
      FDS_EntityBase::SetBattleState(this_00,true);
      return;
    }
  }
  return;
}

// OnUpdateTagByMoveMode @ 14bbcc330

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
UDS_SyncRecvComponent::OnUpdateTagByMoveMode
          (UDS_SyncRecvComponent *this,EDS_MoveMode param_1,EDS_MoveMode param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FDS_EntityBase *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FWeakObjectPtr *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement local_res8 [8];
  FScriptContainerElement local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [3];
  undefined1 local_74 [8];
  undefined1 local_6c [12];
  ForAnyElementType local_60;
  undefined8 local_58;
  FScriptContainerElement *local_50;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  undefined8 local_38;
  
  pFVar6 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    (**(code **)(this->_padding_ + 0x318))(this,param_1,0,&local_40);
    (**(code **)(this->_padding_ + 0x318))(this,param_2,1,&local_50);
    uVar12 = (int)local_48 - 1;
    if (-1 < (int)uVar12) {
      lVar11 = (longlong)(int)uVar12;
      do {
        uVar4 = 0;
        if ((int)uVar12 < (int)local_48) {
          uVar4 = ~uVar12 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = local_50[lVar11];
        for (pFVar7 = local_40; pFVar7 != local_40 + (int)local_38; pFVar7 = pFVar7 + 1) {
          if (*pFVar7 == FVar1) {
            iVar5 = (int)local_58;
            if ((int)local_58 == local_58._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,&local_60,(int *)((longlong)&local_58 + 4));
            }
            local_58 = CONCAT44(local_58._4_4_,iVar5 + 1);
            local_60.Data[iVar5] = FVar1;
            break;
          }
        }
        lVar11 = lVar11 + -1;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    iVar5 = (int)local_38;
    pFVar7 = local_40 + (int)local_38;
    pFVar10 = local_40;
    while( true ) {
      if ((int)local_38 != iVar5) {
        `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_78);
      }
      if (pFVar10 == pFVar7) break;
      local_res8[0] = *pFVar10;
      for (FVar8.Data = local_60.Data; FVar8.Data != local_60.Data + (int)local_58;
          FVar8.Data = FVar8.Data + 1) {
        if (*FVar8.Data == local_res8[0]) goto LAB_14bbcc4d9;
      }
      pFVar9 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x178))(pFVar6,local_74);
      UDS_AbilitySystemComponent::RemoveStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar9,
                 (EDS_StateTagType *)local_res8);
LAB_14bbcc4d9:
      pFVar10 = pFVar10 + 1;
    }
    iVar5 = (int)local_48;
    pFVar7 = local_50 + (int)local_48;
    pFVar10 = local_50;
    while( true ) {
      if ((int)local_48 != iVar5) {
        `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_77);
      }
      if (pFVar10 == pFVar7) break;
      local_res20[0] = *pFVar10;
      for (FVar8.Data = local_60.Data; FVar8.Data != local_60.Data + (int)local_58;
          FVar8.Data = FVar8.Data + 1) {
        if (*FVar8.Data == local_res20[0]) goto LAB_14bbcc548;
      }
      pFVar9 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x178))(pFVar6,local_6c);
      UDS_AbilitySystemComponent::AddStateTag
                ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar9,
                 (EDS_StateTagType *)local_res20);
LAB_14bbcc548:
      pFVar10 = pFVar10 + 1;
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (local_50 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50);
    }
    if (local_40 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40);
    }
  }
  return;
}

// ProcessCommonSyncData @ 14bbce330

void __thiscall
UDS_SyncRecvComponent::ProcessCommonSyncData
          (UDS_SyncRecvComponent *this,NetSyncResponse *param_1,TVector<double> *param_2,
          TRotator<double> *param_3)

{
  FDS_CompactStateFlags *pFVar1;
  double dVar2;
  Vector *pVVar3;
  ulonglong uVar4;
  NonGroundHeight *pNVar5;
  code *pcVar6;
  double dVar7;
  NonGroundHeight *pNVar8;
  TVector<double> *pTVar9;
  UDS_EntityData *this_00;
  UObject *pUVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  Vector *pVVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined8 uVar21;
  TVector<double>_u_0 local_88 [2];
  TVector<double> local_58 [2];
  
  (this->SyncData).Tick = (param_1->_impl_).ticks_;
  pVVar3 = (param_1->_impl_).destination_;
  pVVar14 = &_Vector_default_instance_._instance;
  if (pVVar3 != (Vector *)0x0) {
    pVVar14 = pVVar3;
  }
  DS_Util::SetSyncLocation(this->OwnerEntityID,&(this->SyncData).DestinationPosition,pVVar14,false);
  dVar20 = __real_3ff0000000000000;
  pFVar1 = &(this->SyncData).StateFlags;
  uVar4 = pFVar1->Packed;
  uVar11 = (ulonglong)(byte)(param_1->_impl_).move_mode_ << 4;
  pFVar1->Packed = uVar11 | uVar4 & 0xfffffffffffff80f;
  uVar12 = (ulonglong)(byte)(param_1->_impl_).sync_state_ << 0x19;
  pFVar1->Packed = uVar12 | uVar11 | uVar4 & 0xffffffffc1fff80f;
  (this->SyncData).AccelerationValue = (param_1->_impl_).acceleration_;
  dVar7 = (this->SyncData).PrevServerPosition.field0_0x0._s_0.Y -
          (this->SyncData).ServerPosition.field0_0x0._s_0.Y;
  dVar15 = (this->SyncData).PrevServerPosition.field0_0x0._s_0.X -
           (this->SyncData).ServerPosition.field0_0x0._s_0.X;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar7 * dVar7 + dVar15 * dVar15;
  auVar19 = sqrtpd(in_XMM2,auVar19);
  (this->SyncData).ServerMoveSpeed =
       (float)(auVar19._0_8_ *
              (dVar20 / (this->ServerTickTimeSeconds - this->LastServerTickTimeSeconds)));
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 0x80) == 0) {
    uVar13 = uVar12 | uVar11 | uVar4 & 0xffffffe7c1fff80f;
  }
  else {
    pNVar5 = (param_1->_impl_).height_type_;
    pNVar8 = &server_msg::_NonGroundHeight_default_instance_._instance;
    if (pNVar5 != (NonGroundHeight *)0x0) {
      pNVar8 = pNVar5;
    }
    uVar13 = (ulonglong)(byte)(pNVar8->_impl_).height_ << 0x23 |
             uVar12 | uVar11 | uVar4 & 0xffffffe7c1fff80f;
  }
  pFVar1->Packed = uVar13;
  DS_Util::ShowSyncSphere(param_2,__real_41f00000,2,&FColor::Green,false,__real_3f000000,'\0',0.0);
  pTVar9 = UE::Math::TRotator<double>::Vector(param_3,local_58);
  dVar7 = (pTVar9->field0_0x0)._s_0.X;
  dVar15 = (pTVar9->field0_0x0)._s_0.Y;
  dVar2 = (pTVar9->field0_0x0)._s_0.Z;
  dVar17 = dVar15 * dVar15 + dVar7 * dVar7 + dVar2 * dVar2;
  if (dVar17 == dVar20) {
    uVar16 = (pTVar9->field0_0x0)._s_0.Y;
    uVar21 = (pTVar9->field0_0x0)._s_0.Z;
    uVar18 = (pTVar9->field0_0x0)._s_0.X;
  }
  else {
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar17) {
      dVar17 = dVar20 / SQRT(dVar17);
      uVar16 = dVar15 * dVar17;
      uVar21 = dVar2 * dVar17;
      uVar18 = dVar7 * dVar17;
    }
  }
  local_88[0]._8_8_ = (double)uVar16 * __real_4079000000000000 + (param_2->field0_0x0)._s_0.Y;
  local_88[0]._0_8_ = (double)uVar18 * __real_4079000000000000 + (param_2->field0_0x0)._s_0.X;
  local_88[0]._16_8_ = (double)uVar21 * __real_4079000000000000 + (param_2->field0_0x0)._s_0.Z;
  DS_Util::ShowSyncLine
            (param_2,(TVector<double> *)&local_88[0]._s_0,&FColor::Red,false,__real_3d4ccccd,'\0',
             __real_40a00000);
  if (((byte)((uint)pFVar1->Packed >> 4) & 0x7f) == 0xe) {
    dVar15 = (this->SyncData).ServerPosition.field0_0x0._s_0.Y;
    dVar7 = (this->SyncData).ServerPosition.field0_0x0._s_0.Z;
    (this->SyncData).DestinationPosition.field0_0x0._s_0.X =
         (this->SyncData).ServerPosition.field0_0x0._s_0.X;
    (this->SyncData).DestinationPosition.field0_0x0._s_0.Y = dVar15;
    (this->SyncData).DestinationPosition.field0_0x0._s_0.Z = dVar7;
  }
  this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
  UDS_EntityData::SetHeightConditionType
            (this_00,(EDS_HeightConditionType)(pFVar1->Packed >> 0x23) & Max);
  pUVar10 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
  (**(code **)(*(longlong *)pUVar10 + 0x3b8))(pUVar10,(this->SyncData).AccelerationValue);
  pUVar10 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
  pcVar6 = *(code **)(*(longlong *)pUVar10 + 0x468);
  pTVar9 = UE::Math::TRotator<double>::Vector(param_3,local_58);
  dVar7 = (pTVar9->field0_0x0)._s_0.X;
  dVar15 = (pTVar9->field0_0x0)._s_0.Y;
  dVar2 = (pTVar9->field0_0x0)._s_0.Z;
  dVar17 = dVar15 * dVar15 + dVar7 * dVar7 + dVar2 * dVar2;
  if (dVar17 == dVar20) {
    local_88[0]._0_8_ = (pTVar9->field0_0x0)._s_0.X;
    local_88[0]._8_8_ = (pTVar9->field0_0x0)._s_0.Y;
    local_88[0]._16_8_ = (pTVar9->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar17) {
    dVar20 = dVar20 / SQRT(dVar17);
    local_88[0]._0_8_ = dVar7 * dVar20;
    local_88[0]._8_8_ = dVar15 * dVar20;
    local_88[0]._16_8_ = dVar2 * dVar20;
  }
  else {
    local_88[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_88[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  (*pcVar6)(pUVar10,local_88);
  return;
}

// ProcessHeightMovement @ 14bbcea30

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

bool __cdecl
UDS_SyncRecvComponent::ProcessHeightMovement
          (FDS_HeightMoveData *param_1,FDS_EntityBase *param_2,
          TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_3,
          TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> param_4,FDS_NetSyncData *param_5,
          float param_6,float *param_7,TVector<double> *param_8)

{
  float *pfVar1;
  UDS_EntityData *pUVar2;
  UDS_MovementCore *this;
  float fVar3;
  float fVar4;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_b8;
  FDS_HeightMoveData local_a0;
  TVector<double>_u_0 local_68;
  TVector<double> local_48 [2];
  
  local_res18 = param_3.WeakPtr;
  local_res20 = param_4.WeakPtr;
  pUVar2 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_res20);
  UDS_EntityData::SetHeightMoveData(pUVar2,param_1);
  pfVar1 = (float *)UDS_TimeUtilManager::GetCurrentServerTime();
  fVar3 = param_2->ScaledCapsuleHalfHeight;
  this = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res18);
  UDS_MovementCore::GetActorLocation(this,(TVector<double> *)&local_b8._s_0);
  local_a0.Distance = param_1->HeightTargetLocation;
  local_68._s_0.X = local_b8._s_0.X;
  local_68._s_0.Y = local_b8._s_0.Y;
  local_68._s_0.Z = local_a0.Distance;
  DS_Util::GetNPCFloorLocationByLocation
            (local_48,(TVector<double> *)&local_68._s_0,fVar3,
             param_1->TargetHeightConditionType == UnderGround);
  fVar4 = 0.0;
  fVar3 = (float)((double)(float)((double)(float)((double)fVar3 +
                                                 (double)local_48[0].field0_0x0._16_8_) +
                                 param_1->Distance) - local_b8._s_0.Z);
  if ((__real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (__real_322bcc77 < (float)((uint)param_1->RemainTime & __xmm_7fffffff7fffffff7fffffff7fffffff))
     ) {
    fVar4 = fVar3 / param_1->RemainTime;
  }
  if (param_6 < param_1->RemainTime) {
    fVar3 = fVar4 * param_6;
  }
  *param_7 = fVar3;
  local_b8._s_0.Z = local_b8._s_0.Z + (double)fVar3;
  (param_8->field0_0x0)._s_0.X = local_b8._s_0.X;
  (param_8->field0_0x0)._s_0.Y = local_b8._s_0.Y;
  (param_8->field0_0x0)._s_0.Z = local_b8._s_0.Z;
  param_7 = pfVar1;
  TArray<FDS_HeightMoveData,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UDS_SyncRecvComponent::ProcessHeightMovement_::__l2::<lambda_1>_>
            (&param_5->HeightMoveDataList,(<lambda_1> *)&param_7);
  if (((param_5->HeightMoveDataList).ArrayNum == 0) && (param_1->HeightMoveState == ComeBackStart))
  {
    local_a0.TargetHeightConditionType = param_1->TargetHeightConditionType;
    local_a0.HeightTargetLocation = 0.0;
    local_a0.StartTime = 0.0;
    local_a0.EndTime = 0.0;
    local_a0.RemainTime = 0.0;
    local_a0.Distance = 0.0;
    local_a0.HeightStartLocation = 0.0;
    local_a0.HeightMoveState = ComeBackEnd;
    local_a0.NowHeightConditionType = Max;
    pUVar2 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_res20);
    UDS_EntityData::SetHeightMoveData(pUVar2,&local_a0);
  }
  return true;
}

// ProcessNormalMovement @ 14bbcecb0

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
UDS_SyncRecvComponent::ProcessNormalMovement
          (UDS_SyncRecvComponent *this,NetSyncResponse *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,FDS_EntityBase *param_4)

{
  code *pcVar1;
  Vector *pVVar2;
  double dVar3;
  Vector *pVVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  (this->SyncData).TransportEntityID = 0;
  if ((this->SyncData).PrevTransportEntityID != 0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    pcVar1 = *(code **)(param_4->_padding_ + 0x1c8);
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (*pcVar1)(param_4,local_res8);
  }
  pVVar2 = (param_1->_impl_).position_;
  pVVar4 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar4 = pVVar2;
  }
  DS_Util::SetSyncLocation(this->OwnerEntityID,&(this->SyncData).ServerPosition,pVVar4,false);
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  (this->SyncData).VelocityVector.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->SyncData).VelocityVector.field0_0x0._s_0.Y = dVar3;
  (this->SyncData).VelocityVector.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar3 = param_3->Yaw;
  (this->SyncData).EntityDirection.Pitch = param_3->Pitch;
  (this->SyncData).EntityDirection.Yaw = dVar3;
  (this->SyncData).EntityDirection.Roll = param_3->Roll;
  return;
}

// ProcessPatrolSteps @ 14bbced90

void __thiscall
UDS_SyncRecvComponent::ProcessPatrolSteps
          (UDS_SyncRecvComponent *this,
          TArray<FDS_PatrolStepTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FDS_PatrolBaseTableRow *param_2,int param_3,
          TObjectPtr<UDS_PatrolEventAbilityContext> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_PatrolStepTableRow_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    if ((((*(int *)(lVar3 + 0x20) == param_2->PatrolStepGID) && (*(int *)(lVar3 + 0x24) == param_3))
        && ((this->SyncData).PatrolMoveSpeed = (float)*(double *)(lVar3 + 0x80),
           *(char *)(lVar3 + 0x39) == '\x04')) && (0 < *(int *)(lVar3 + 0x48))) {
      if ((*(int *)(lVar3 + 0x48) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(*(longlong *)param_4.field0_0x0 + 0x2c) = **(undefined4 **)(lVar3 + 0x40);
      *(uint *)(*(longlong *)param_4.field0_0x0 + 0x28) = (uint)*(byte *)(lVar3 + 0x39);
      if (0 < *(int *)(lVar3 + 0x58)) {
        *(float *)(*(longlong *)param_4.field0_0x0 + 0x30) = (float)**(int **)(lVar3 + 0x50);
      }
      return;
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// ProcessTransportMovement @ 14bbcf020

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
UDS_SyncRecvComponent::ProcessTransportMovement
          (UDS_SyncRecvComponent *this,NetSyncResponse *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,FDS_EntityBase *param_4)

{
  MyTransport *pMVar1;
  Vector *pVVar2;
  ulong64 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  FDS_EntityBase *pFVar16;
  ulong64 uVar17;
  undefined8 *puVar18;
  UObject *pUVar19;
  UDS_MovementCore *pUVar20;
  TRotator<double> *pTVar21;
  TVector<double> *pTVar22;
  TQuat<double> *pTVar23;
  Vector *pVVar24;
  MyTransport *pMVar25;
  FWeakObjectPtr local_res8;
  ulong64 local_res10;
  undefined1 local_f8 [8];
  TRotator<double> local_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  TQuat<double> local_b8;
  TQuat<double> local_98 [3];
  
  pMVar1 = (param_1->_impl_).my_transport_;
  pMVar25 = &messages::_MyTransport_default_instance_._instance;
  if (pMVar1 != (MyTransport *)0x0) {
    pMVar25 = pMVar1;
  }
  pVVar2 = (pMVar25->_impl_).relative_position_;
  pVVar24 = &_Vector_default_instance_._instance;
  if (pVVar2 != (Vector *)0x0) {
    pVVar24 = pVVar2;
  }
  DS_Util::SetFVector(&(this->SyncData).ServerPosition,pVVar24);
  (this->SyncData).TransportEntityID = (pMVar25->_impl_).transport_entity_id_;
  local_res10 = (pMVar25->_impl_).transport_entity_id_;
  pFVar16 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar16 != (FDS_EntityBase *)0x0) {
    uVar3 = (pMVar25->_impl_).transport_entity_id_;
    uVar17 = (**(code **)(param_4->_padding_ + 0x1d8))(param_4);
    if (uVar17 != uVar3) {
      pcVar4 = *(code **)(param_4->_padding_ + 0x1c8);
      puVar18 = (undefined8 *)(**(code **)(pFVar16->_padding_ + 0x150))(pFVar16,local_f8);
      (*pcVar4)(param_4,*puVar18);
      pUVar19 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      (**(code **)(*(longlong *)pUVar19 + 0x368))(pUVar19,&(this->SyncData).ServerPosition);
    }
    (**(code **)(pFVar16->_padding_ + 0x78))(pFVar16);
    bVar15 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar15) {
      pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
      pTVar21 = UDS_MovementCore::GetActorRotation(pUVar20,(TRotator<double> *)&local_b8);
      pTVar22 = UE::Math::TVector<double>::GetSafeNormal
                          (param_2,(TVector<double> *)local_98,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      pTVar22 = UE::Math::TRotator<double>::UnrotateVector
                          (pTVar21,(TVector<double> *)&local_f0,pTVar22);
      dVar5 = (pTVar22->field0_0x0)._s_0.Y;
      (this->SyncData).VelocityVector.field0_0x0._s_0.X = (pTVar22->field0_0x0)._s_0.X;
      (this->SyncData).VelocityVector.field0_0x0._s_0.Y = dVar5;
      (this->SyncData).VelocityVector.field0_0x0._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
    }
    pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
    pTVar21 = UDS_MovementCore::GetActorRotation(pUVar20,&local_f0);
    pTVar23 = UE::Math::TRotator<double>::Quaternion(pTVar21,local_98);
    dVar9 = pTVar23->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar10 = pTVar23->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar7 = pTVar23->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar8 = pTVar23->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    pTVar23 = UE::Math::TRotator<double>::Quaternion(param_3,&local_b8);
    dVar11 = pTVar23->Z;
    dVar12 = pTVar23->W;
    dVar13 = pTVar23->X;
    dVar14 = pTVar23->Y;
    dVar6 = dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar8 * dVar12 +
            dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar5 = dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar8 * dVar14 +
            dVar10 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar13 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_c8._8_4_ = SUB84(dVar6,0);
    local_c8._0_8_ =
         dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar8 * dVar11 +
         dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_d8._8_4_ = SUB84(dVar5,0);
    local_d8._0_8_ =
         dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar8 * dVar13 +
         dVar10 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar14 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    pTVar21 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_d8,&local_f0);
    dVar5 = pTVar21->Yaw;
    (this->SyncData).EntityDirection.Pitch = pTVar21->Pitch;
    (this->SyncData).EntityDirection.Yaw = dVar5;
    (this->SyncData).EntityDirection.Roll = pTVar21->Roll;
  }
  return;
}

// RecvDummyNetSyncData @ 14bbd64e0

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

bool __thiscall
UDS_SyncRecvComponent::RecvDummyNetSyncData(UDS_SyncRecvComponent *this,NetSyncResponse *param_1)

{
  VectorF *pVVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  UDS_EntityData *this_00;
  FString *pFVar7;
  VectorF *pVVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FString local_28;
  
  if (this->OwnerEntityType != MainCharacter) {
    return false;
  }
  pFVar5 = FDS_EntityBase::GetEntityBase(&DUMMY_ENTITY_ID);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    if (0 < (this->RecvProcessList).ArrayNum) {
      (this->SyncData).StateFlags.Packed =
           (ulonglong)(byte)(param_1->_impl_).move_mode_ << 4 |
           (this->SyncData).StateFlags.Packed & 0xfffffffffffff80f;
      (this->SyncData).AccelerationValue = (param_1->_impl_).acceleration_;
      pVVar1 = (param_1->_impl_).velocity_;
      pVVar8 = &_VectorF_default_instance_._instance;
      if (pVVar1 != (VectorF *)0x0) {
        pVVar8 = pVVar1;
      }
      DS_Util::SetFVector(&(this->SyncData).VelocityVector,pVVar8);
      if ((this->RecvProcessList).ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pUVar6 = *(UObject **)(this->RecvProcessList).AllocatorInstance.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      (this->CurRecvProcess).WeakPtr = local_res8;
      pUVar6 = FWeakObjectPtr::Get(&(this->CurRecvProcess).WeakPtr);
      (**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6,&this->SyncData,param_1);
    }
  }
  else {
    (**(code **)(pFVar5->_padding_ + 400))(pFVar5,&local_res18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,param_1);
    }
    bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
    if (bVar3) {
      this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
      pFVar7 = ::FString::FString(&local_28,"");
      UDS_EntityData::SetDebugString(this_00,pFVar7);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return true;
      }
    }
  }
  return true;
}

// RecvNetSyncData @ 14bbd6700

void __thiscall
UDS_SyncRecvComponent::RecvNetSyncData(UDS_SyncRecvComponent *this,NetSyncResponse *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  ulonglong uVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  cVar5 = (**(code **)(this->_padding_ + 0x2c0))();
  if (((cVar5 == '\0') ||
      (cVar5 = (**(code **)(this->_padding_ + 0x2d8))(this,param_1), cVar5 == '\x01')) ||
     (this->bMountState == true)) {
    return;
  }
  (**(code **)(this->_padding_ + 0x2f8))(this,param_1);
  pFVar6 = (this->RecvProcessList).AllocatorInstance.Data;
  iVar2 = (this->RecvProcessList).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  do {
    if ((this->RecvProcessList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_RecvProcessBase>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar6 == pFVar1) goto LAB_14bbd6844;
    if ((*(longlong *)pFVar6 != 0) && ((*(uint *)(*(longlong *)pFVar6 + 8) >> 0x1e & 1) == 0)) {
      (**(code **)(**(longlong **)pFVar6 + 0x2b8))(*(longlong **)pFVar6,&this->SyncData,param_1);
      cVar5 = (**(code **)(**(longlong **)pFVar6 + 0x2e8))(*(longlong **)pFVar6,&this->SyncData);
      if (cVar5 == '\x01') {
        pUVar3 = *(UObject **)pFVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18[0] = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
        SwitchRecvProcess(this,(TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>)local_res8);
LAB_14bbd6844:
        uVar4 = (this->SyncData).StateFlags.Packed;
        (**(code **)(this->_padding_ + 0x300))
                  (this,uVar4 >> 0x1e & 0xffffffffffffff1f,uVar4 >> 0x19 & 0xffffffffffffff1f);
        uVar4 = (this->SyncData).StateFlags.Packed;
        (**(code **)(this->_padding_ + 0x310))
                  (this,uVar4 >> 0xb & 0xffffffffffffff7f,uVar4 >> 4 & 0xffffffffffffff7f);
        return;
      }
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// RecvNpcHeightMoveData @ 14bbd68b0

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
UDS_SyncRecvComponent::RecvNpcHeightMoveData
          (UDS_SyncRecvComponent *this,HeightMoveResponse *param_1)

{
  int *piVar1;
  TArray<FDS_HeightMoveData,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FDS_EntityBase *pFVar7;
  UObject *pUVar8;
  longlong lVar9;
  UDS_EntityData *this_00;
  ulonglong uVar10;
  int iVar11;
  FWeakObjectPtr local_res8;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 uStack_40;
  char cStack_3c;
  EDS_HeightConditionType EStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  iVar11 = 0;
  bVar5 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr);
  if (bVar5) {
    if ((this->OwnerEntityType == MainCharacter) &&
       (pFVar7 = FDS_EntityBase::GetEntityBase(&DUMMY_ENTITY_ID), pFVar7 != (FDS_EntityBase *)0x0))
    {
      (**(code **)(pFVar7->_padding_ + 400))(pFVar7);
      bVar5 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_res8,
                         (void *)0x0);
      if (!bVar5) {
        pUVar8 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar8 + 0x2e8))(pUVar8,param_1);
      }
    }
    pTVar2 = &(this->SyncData).HeightMoveDataList;
    piVar1 = &(this->SyncData).HeightMoveDataList.ArrayMax;
    (this->SyncData).HeightMoveDataList.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pUVar8 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    lVar9 = (**(code **)(*(longlong *)pUVar8 + 0x330))(pUVar8,&local_68);
    dVar3 = *(double *)(lVar9 + 0x10);
    if (0 < *(int *)&(param_1->_impl_).height_moves_.field_0x8) {
      do {
        uVar10 = *(ulonglong *)&(param_1->_impl_).height_moves_;
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulonglong *)(uVar10 + 7 + (longlong)iVar11 * 8);
        }
        local_68 = *(undefined8 *)(uVar10 + 0x18);
        uStack_60 = *(undefined8 *)(uVar10 + 0x20);
        cStack_3c = (char)iVar11 + '\x01';
        uStack_40 = 0;
        local_58 = *(double *)(uVar10 + 0x28);
        local_48 = local_58 + (double)(float)dVar3;
        dStack_50 = (double)(float)dVar3;
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
        EStack_3b = UDS_EntityData::GetHeightConditionType(this_00);
        uStack_3a = *(undefined1 *)(uVar10 + 0x30);
        iVar6 = (this->SyncData).HeightMoveDataList.ArrayNum;
        if (iVar6 == (this->SyncData).HeightMoveDataList.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar9 = (longlong)iVar6;
        (this->SyncData).HeightMoveDataList.ArrayNum = iVar6 + 1;
        iVar11 = iVar11 + 1;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar4 + lVar9 * 0x30) = local_68;
        *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 8) = uStack_60;
        *(double *)(pFVar4 + lVar9 * 0x30 + 0x10) = local_58;
        *(double *)(pFVar4 + lVar9 * 0x30 + 0x10 + 8) = dStack_50;
        *(double *)(pFVar4 + lVar9 * 0x30 + 0x20) = local_48;
        *(ulonglong *)(pFVar4 + lVar9 * 0x30 + 0x20 + 8) =
             CONCAT17(uStack_39,
                      CONCAT16(uStack_3a,CONCAT15(EStack_3b,CONCAT14(cStack_3c,uStack_40))));
      } while (iVar11 < *(int *)&(param_1->_impl_).height_moves_.field_0x8);
    }
  }
  return;
}

// RecvNpcPatrolNum @ 14bbd6aa0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_SyncRecvComponent::RecvNpcPatrolNum(UDS_SyncRecvComponent *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FDS_NpcSpawnTableRow *this_00;
  FDS_PatrolBaseTableRow *this_01;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_02;
  UObject *pUVar5;
  UClass *pUVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8;
  EDS_AbilityTagType local_f7 [7];
  TArray<FDS_PatrolStepTableRow_const_*,TSizedDefaultAllocator<32>_> local_f0;
  UObject *local_e0;
  FDS_EntityBase *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  (this->SyncData).PatrolStepNum = param_2;
  this_00 = FDS_NpcSpawnTableRow::GetRef((longlong)param_1,true);
  bVar4 = FDS_NpcSpawnTableRow::IsValid(this_00);
  if (bVar4) {
    this_01 = FDS_PatrolBaseTableRow::GetRef((longlong)this_00->ID_Patrol,true);
    bVar4 = FDS_PatrolBaseTableRow::IsValid(this_01);
    if (bVar4) {
      FDS_PatrolStepTableRow::GetAll(&local_f0);
      local_d8 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
      if (local_d8 != (FDS_EntityBase *)0x0) {
        this_02 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
                  (**(code **)(local_d8->_padding_ + 0x150))(local_d8);
        bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_02,(void *)0x0);
        if (!bVar4) {
          pUVar5 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar5,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar6 = Z_Construct_UClass_UDS_PatrolEventAbilityContext_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_c8,pUVar6);
          local_c8._8_8_ = pUVar5;
          pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
          if (local_c8._64_8_ != 0) {
            plVar8 = (longlong *)(local_c8 + 0x50);
            if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
              plVar8 = (longlong *)local_c8._104_8_;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar5 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar5);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
          }
          iVar7 = local_f0.ArrayNum;
          pFVar1 = local_f0.AllocatorInstance.Data + (longlong)iVar7 * 8;
          uVar9 = local_f0._8_8_;
          FVar10.Data = local_f0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar9 != iVar7) {
              local_f8 = 0;
              `TCheckedPointerIterator<FDS_PatrolStepTableRow_const_*_const,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_f8);
              uVar9 = local_f0._8_8_;
            }
            if (FVar10.Data == pFVar1) goto LAB_14bbd6cdc;
            lVar2 = *(longlong *)FVar10.Data;
            if ((((*(int *)(lVar2 + 0x20) == this_01->PatrolStepGID) &&
                 (*(int *)(lVar2 + 0x24) == param_2)) &&
                ((this->SyncData).PatrolMoveSpeed = (float)*(double *)(lVar2 + 0x80),
                *(char *)(lVar2 + 0x39) == '\x04')) && (0 < *(int *)(lVar2 + 0x48))) break;
            FVar10.Data = FVar10.Data + 8;
          }
          if (*(int *)(lVar2 + 0x48) < 1) {
            local_108 = 0;
            local_100 = (longlong)*(int *)(lVar2 + 0x48);
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          *(undefined4 *)&pUVar5[1].field_0x4 = **(undefined4 **)(lVar2 + 0x40);
          *(uint *)(pUVar5 + 1) = (uint)*(byte *)(lVar2 + 0x39);
          if (0 < *(int *)(lVar2 + 0x58)) {
            *(float *)&pUVar5[1].field_0x8 = (float)**(int **)(lVar2 + 0x50);
          }
LAB_14bbd6cdc:
          local_e0 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          local_f7[0] = Patrol;
          FDS_EntityBase::TryActivateAbility
                    (local_d8,local_f7,(TObjectPtr<UWN_AbilityContext>)&local_e0);
        }
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RecvNpcRotationData @ 14bbd6d70

void __thiscall
UDS_SyncRecvComponent::RecvNpcRotationData
          (UDS_SyncRecvComponent *this,SkillNpcRotationEndTimeResponse *param_1)

{
  (this->SyncData).IsServerRotation = true;
  (this->SyncData).ServerRotateTime = (param_1->_impl_).end_ticks_;
  return;
}

// SelectAndSwitchRecvProcess @ 14bbdde00

void __thiscall
UDS_SyncRecvComponent::SelectAndSwitchRecvProcess
          (UDS_SyncRecvComponent *this,NetSyncResponse *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  pFVar5 = (this->RecvProcessList).AllocatorInstance.Data;
  iVar2 = (this->RecvProcessList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RecvProcessList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_RecvProcessBase>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if ((*(longlong *)pFVar5 != 0) && ((*(uint *)(*(longlong *)pFVar5 + 8) >> 0x1e & 1) == 0)) {
      (**(code **)(**(longlong **)pFVar5 + 0x2b8))(*(longlong **)pFVar5,&this->SyncData,param_1);
      cVar4 = (**(code **)(**(longlong **)pFVar5 + 0x2e8))(*(longlong **)pFVar5,&this->SyncData);
      if (cVar4 == '\x01') {
        pUVar3 = *(UObject **)pFVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18[0] = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
        SwitchRecvProcess(this,(TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>)local_res8);
        return;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// SetAnimTagByMoveMode @ 14bbdff50

void __thiscall
UDS_SyncRecvComponent::SetAnimTagByMoveMode
          (UDS_SyncRecvComponent *this,EDS_MoveMode param_1,bool param_2,
          TArray<EDS_StateTagType,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  
  switch(param_1) {
  case AirDash:
  case UseSkillAirDash:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x29;
    return;
  case Dodge:
  case SkillMode:
  case Collision:
  case Warp:
  case Patrol:
  case UseSkillAirDash|Run:
  case SwimReady:
  case Mount:
  case MountOwnAction:
  case MoveDisMount:
  case MountLeap:
  case MountSprintLeap:
  case MountAscent:
  case MountSprintAscent:
  case MountDescent:
  case MountSprintDescent:
  case MountSprintLand:
  case MountAirFall:
  case MountAirSprintFall:
  case MoveAirDisMount:
  case AirDisMount:
    return;
  case Jump1:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x26;
    break;
  case Jump2:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x27;
    break;
  case Hovering:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x28;
    return;
  case Falling:
  case MountFall:
  case MountSprintFall:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar1 + 1;
      (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2c;
      return;
    }
    goto LAB_14bbe0723;
  case PowerJumpCharging:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x30;
    return;
  case PowerJump:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar1 + 1;
      (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
      return;
    }
    goto LAB_14bbe0782;
  case AirStop:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2b;
    return;
  case Swim:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    return;
  case SwimSubmerge:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x9;
    return;
  case SwimSurfaceSprint:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0xa;
    return;
  case SwimDown:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x9;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0xc;
    return;
  case SwimSubmergeSprint:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x9;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0xb;
    return;
  case SwimUp:
  case SwimServerFailForceUp:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x9;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0xd;
    return;
  case SwimForceUp:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x9;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0xe;
    return;
  case MountReady:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6e;
    return;
  case MountSprint:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6f;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar1 + 1;
      (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x72;
      return;
    }
    goto LAB_14bbe08bb;
  case DisMount:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x7a;
    return;
  case MountMove:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar1 + 1;
      (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6f;
      return;
    }
    goto LAB_14bbe080a;
  case MountJump:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2c;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar1 + 1;
      (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x26;
      return;
    }
    goto LAB_14bbe0662;
  case MountSprintJump:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2c;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
LAB_14bbe0662:
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x26;
    return;
  case MountLand:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6f;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x79;
    break;
  case MountAir:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x73;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
LAB_14bbe0782:
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    return;
  case MountAirMove:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x73;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
LAB_14bbe080a:
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6f;
    return;
  case MountAirSprint:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x73;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6f;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
LAB_14bbe08bb:
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x72;
    return;
  case MountDash:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x73;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2e;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x6f;
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x74;
    return;
  case MountBackMove:
    iVar1 = param_3->ArrayNum;
    if (iVar1 == param_3->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar1 + 1;
    (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x70;
    return;
  default:
    return;
  }
  iVar1 = param_3->ArrayNum;
  if (iVar1 == param_3->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
LAB_14bbe0723:
  param_3->ArrayNum = iVar1 + 1;
  (param_3->AllocatorInstance).Data[iVar1] = (FScriptContainerElement)0x2c;
  return;
}

// SetAnimTagByMoveState @ 14bbe0a60

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
UDS_SyncRecvComponent::SetAnimTagByMoveState
          (UDS_SyncRecvComponent *this,EDS_MoveStateType param_1,bool param_2)

{
  FDS_EntityBase *pFVar1;
  FWeakObjectPtr *pFVar2;
  EDS_StateTagType *pEVar3;
  EDS_StateTagType local_res8 [8];
  undefined1 local_res20 [8];
  
  pFVar1 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    if (param_2) {
      for (pEVar3 = (EDS_StateTagType *)0x0; pEVar3 != (EDS_StateTagType *)0x0; pEVar3 = pEVar3 + 1)
      {
        local_res8[0] = *pEVar3;
        pFVar2 = (FWeakObjectPtr *)(**(code **)(pFVar1->_padding_ + 0x178))(pFVar1,local_res20);
        UDS_AbilitySystemComponent::AddStateTag
                  ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar2,local_res8);
      }
    }
    else {
      for (pEVar3 = (EDS_StateTagType *)0x0; pEVar3 != (EDS_StateTagType *)0x0; pEVar3 = pEVar3 + 1)
      {
        local_res8[0] = *pEVar3;
        pFVar2 = (FWeakObjectPtr *)(**(code **)(pFVar1->_padding_ + 0x178))(pFVar1,local_res20);
        UDS_AbilitySystemComponent::RemoveStateTag
                  ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar2,local_res8);
      }
    }
  }
  return;
}

// SetAnimTagBySyncState @ 14bbe0b00

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
UDS_SyncRecvComponent::SetAnimTagBySyncState
          (UDS_SyncRecvComponent *this,EDS_SyncState param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FDS_EntityBase *pFVar4;
  FWeakObjectPtr *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pFVar4 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    return;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  if (param_1 == Dead) {
    if (!param_2) {
LAB_14bbe0d8b:
      iVar3 = (int)local_20;
      pFVar1 = local_28.Data + (int)local_20;
      FVar6.Data = local_28.Data;
      while( true ) {
        if ((int)local_20 != iVar3) {
          `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar6.Data == pFVar1) break;
        local_res8[0] = *FVar6.Data;
        pFVar5 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x178))(pFVar4,local_res20);
        UDS_AbilitySystemComponent::RemoveStateTag
                  ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar5,
                   (EDS_StateTagType *)local_res8);
        FVar6.Data = FVar6.Data + 1;
      }
      goto LAB_14bbe0dd2;
    }
    (**(code **)(pFVar4->_padding_ + 0x1b0))(pFVar4);
  }
  else {
    switch(param_1) {
    case FallingHigher:
    case FallingHigherLand:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x2d;
      break;
    case Mining:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x45;
      break;
    case Harvesting:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x46;
      break;
    case Condensing:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x49;
      break;
    case Logging:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x47;
      break;
    case BoxOpen:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x48;
      break;
    case MountOwnAction:
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x71;
      break;
    case ReturnHomeCasting:
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      iVar3 = iVar2 + 1;
      local_28.Data[iVar2] = (FScriptContainerElement)0x69;
      if (iVar3 == local_20._4_4_) {
        local_20._0_4_ = iVar3;
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      }
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x63;
      break;
    case DeviceCasting:
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      iVar3 = iVar2 + 1;
      local_28.Data[iVar2] = (FScriptContainerElement)0x69;
      if (iVar3 == local_20._4_4_) {
        local_20._0_4_ = iVar3;
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_28,(int *)((longlong)&local_20 + 4));
      }
      local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
      local_28.Data[iVar3] = (FScriptContainerElement)0x65;
    }
    if (!param_2) goto LAB_14bbe0d8b;
  }
  iVar3 = (int)local_20;
  pFVar1 = local_28.Data + (int)local_20;
  FVar6.Data = local_28.Data;
  while( true ) {
    if ((int)local_20 != iVar3) {
      `TCheckedPointerIterator<enum_EDS_StateTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    local_res8[0] = *FVar6.Data;
    pFVar5 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x178))(pFVar4,local_res20);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar5,
               (EDS_StateTagType *)local_res8);
    FVar6.Data = FVar6.Data + 1;
  }
LAB_14bbe0dd2:
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetBattleState @ 14bbe0e40

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

void __thiscall UDS_SyncRecvComponent::SetBattleState(UDS_SyncRecvComponent *this,bool param_1)

{
  FDS_EntityBase *this_00;
  
  if (this->bBattleState != param_1) {
    this_00 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
    if (this_00 != (FDS_EntityBase *)0x0) {
      this->bBattleState = param_1;
      FDS_EntityBase::SetBattleState(this_00,param_1);
    }
  }
  return;
}

// SwitchRecvProcess @ 14bbe2490

void __thiscall
UDS_SyncRecvComponent::SwitchRecvProcess
          (UDS_SyncRecvComponent *this,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>::UEOpEquals<UDS_RecvProcessBase,bool>
                    ((TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *)local_res10,
                     &this->CurRecvProcess);
  if (!bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CurRecvProcess).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->CurRecvProcess).WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,&this->SyncData);
    }
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,&this->SyncData);
    }
    (this->CurRecvProcess).WeakPtr = local_res10[0];
  }
  return;
}

// Tick @ 14bbe2580

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

void __thiscall UDS_SyncRecvComponent::Tick(UDS_SyncRecvComponent *this,float param_1)

{
  char cVar1;
  bool bVar2;
  UDS_EntityData *this_00;
  FString *pFVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  FString local_28 [2];
  
  cVar1 = (**(code **)(this->_padding_ + 0x2c0))();
  if ((cVar1 != '\0') && (bVar2 = FWeakObjectPtr::IsValid(&(this->CurRecvProcess).WeakPtr), bVar2))
  {
    if (this->bMountState == true) {
      bVar2 = UDS_GameInstance::IsNameTagDebug();
      if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerEntityData).WeakPtr), bVar2)) {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
        pFVar3 = ::FString::FString(local_28,"");
        UDS_EntityData::SetDebugString(this_00,pFVar3);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else if ((this->OwnerEntityType != MainCharacter) ||
            (pFVar4 = FDS_EntityBase::GetEntityBase(&DUMMY_ENTITY_ID),
            pFVar4 == (FDS_EntityBase *)0x0)) {
      pUVar5 = FWeakObjectPtr::Get(&(this->CurRecvProcess).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5,&this->SyncData,param_1);
    }
  }
  return;
}

// UpdateAnimStateByMoveMode @ 14bbe3960

void __thiscall
UDS_SyncRecvComponent::UpdateAnimStateByMoveMode
          (UDS_SyncRecvComponent *this,EDS_MoveMode param_1,EDS_MoveMode param_2)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  
  if (param_1 != param_2) {
    bVar1 = TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>::UEOpEquals
                      (&this->CurRecvProcess,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->CurRecvProcess).WeakPtr);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3,&this->SyncData);
      if (cVar2 == '\x01') {
        return;
      }
    }
    (**(code **)(this->_padding_ + 800))(this,param_1,param_2);
  }
  return;
}

// UpdateAnimStateByMoveState @ 14bbe39f0

void __thiscall
UDS_SyncRecvComponent::UpdateAnimStateByMoveState
          (UDS_SyncRecvComponent *this,EDS_MoveStateType param_1,EDS_MoveStateType param_2)

{
  undefined7 in_register_00000011;
  
  if (param_1 != param_2) {
    (**(code **)(this->_padding_ + 0x330))(this,CONCAT71(in_register_00000011,param_1),0);
    (**(code **)(this->_padding_ + 0x330))(this,param_2,1);
  }
  return;
}

// UpdateAnimStateBySyncState @ 14bbe3a40

void __thiscall
UDS_SyncRecvComponent::UpdateAnimStateBySyncState
          (UDS_SyncRecvComponent *this,EDS_SyncState param_1,EDS_SyncState param_2)

{
  undefined7 in_register_00000011;
  
  if (param_1 != param_2) {
    (**(code **)(this->_padding_ + 0x308))(this,CONCAT71(in_register_00000011,param_1),0);
    (**(code **)(this->_padding_ + 0x308))(this,param_2,1);
  }
  return;
}

// UpdateHeightMove @ 14bbe4f40

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

bool __cdecl
UDS_SyncRecvComponent::UpdateHeightMove
          (ulong64 param_1,float param_2,float *param_3,TVector<double> *param_4)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UDS_EntityData *pUVar7;
  UDS_MovementCore *this;
  double *pdVar8;
  double *pdVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2b8 [8];
  FWeakObjectPtr local_2b0;
  FWeakObjectPtr local_2a8;
  ulong64 local_2a0;
  FWeakObjectPtr local_298;
  FWeakObjectPtr local_290;
  FWeakObjectPtr local_288;
  undefined1 local_280 [44];
  EDS_HeightMoveState EStack_254;
  EDS_HeightConditionType EStack_253;
  EDS_HeightConditionType EStack_252;
  undefined1 uStack_251;
  <lambda_1> local_250;
  TVector<double>_u_0 local_248;
  FDS_HeightMoveData local_230;
  TVector<double>_u_0 local_1f8;
  TVector<double> local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2a8 = (FWeakObjectPtr)param_1;
  local_2a0 = param_1;
  pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_2a8);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    local_2b0.ObjectIndex = 0;
    local_2b0.ObjectSerialNumber = 0;
    local_298.ObjectIndex = 0;
    local_298.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_2b0,(FObjectPtr)&local_298);
  }
  else {
    (**(code **)(pFVar4->_padding_ + 400))(pFVar4);
  }
  bVar3 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_2b0,(void *)0x0)
  ;
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_1b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1b8,"UDS_SyncRecvComponent::UpdateHeightMove",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_1b8.Ptr,0x317,L"SyncRecvComponent is nullptr. %llu");
      if ((void *)local_1b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1b8._padding_);
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_2b0);
    if (*(int *)(pUVar6 + 0x14) != 0) {
      local_280._40_4_ = 0.0;
      EStack_254 = None;
      EStack_253 = Max;
      EStack_252 = Max;
      local_280._32_8_ = 0.0;
      fVar11 = 0.0;
      local_280._0_8_ = 0.0;
      local_280._8_8_ = 0.0;
      local_280._16_8_ = 0.0;
      local_280._24_8_ = 0.0;
      dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
      iVar1 = *(int *)(pUVar6 + 0x14);
      pdVar8 = *(double **)&pUVar6[0x13].field_0x20;
      pdVar9 = pdVar8 + (longlong)iVar1 * 6;
      while( true ) {
        if (*(int *)(pUVar6 + 0x14) != iVar1) {
          `TCheckedPointerIterator<FDS_HeightMoveData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2b8);
        }
        if (pdVar8 == pdVar9) {
          return false;
        }
        *(float *)(pdVar8 + 5) = (float)(pdVar8[1] - dVar2);
        if ((float)(pdVar8[1] - dVar2) < 0.0) {
          *(undefined4 *)(pdVar8 + 5) = 0;
        }
        if (*pdVar8 - dVar2 < 0.0) break;
        pdVar8 = pdVar8 + 6;
      }
      local_280._0_8_ = *pdVar8;
      local_280._8_8_ = pdVar8[1];
      local_280._16_8_ = pdVar8[2];
      local_280._24_8_ = pdVar8[3];
      local_280._32_8_ = pdVar8[4];
      unique0x1000075d = pdVar8[5];
      pFVar4 = FDS_EntityBase::GetEntityBase(&local_2a0);
      if (pFVar4 != (FDS_EntityBase *)0x0) {
        UDS_MovementCore::GetMovementCore((ulong64)&local_288);
        bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_288,(void *)0x0
                          );
        if (!bVar3) {
          UDS_EntityData::GetData((ulong64)&local_290,pFVar4->EntityID);
          bVar3 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_290,(void *)0x0
                            );
          if (!bVar3) {
            local_2a8 = local_290;
            local_298 = local_288;
            pUVar7 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_2a8);
            UDS_EntityData::SetHeightMoveData(pUVar7,(FDS_HeightMoveData *)local_280);
            dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
            fVar10 = pFVar4->ScaledCapsuleHalfHeight;
            this = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_298);
            UDS_MovementCore::GetActorLocation(this,(TVector<double> *)&local_248._s_0);
            local_230.Distance = (double)local_280._32_8_;
            local_1f8._s_0.Z = (double)local_280._32_8_;
            local_1f8._s_0.X = local_248._s_0.X;
            local_1f8._s_0.Y = local_248._s_0.Y;
            DS_Util::GetNPCFloorLocationByLocation
                      (&local_1d8,(TVector<double> *)&local_1f8._s_0,fVar10,
                       EStack_252 == UnderGround);
            fVar10 = (float)((double)(float)((double)(float)((double)fVar10 +
                                                            local_1d8.field0_0x0._s_0.Z) +
                                            (double)local_280._16_8_) - local_248._s_0.Z);
            if ((__real_322bcc77 < (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff))
               && (__real_322bcc77 <
                   (float)(local_280._40_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
              fVar11 = fVar10 / (float)local_280._40_4_;
            }
            if (param_2 < (float)local_280._40_4_) {
              fVar10 = fVar11 * param_2;
            }
            *param_3 = fVar10;
            local_248._s_0.Z = local_248._s_0.Z + (double)fVar10;
            (param_4->field0_0x0)._s_0.X = local_248._s_0.X;
            (param_4->field0_0x0)._s_0.Y = local_248._s_0.Y;
            (param_4->field0_0x0)._s_0.Z = local_248._s_0.Z;
            local_250.curServerTime = dVar2;
            TArray<FDS_HeightMoveData,TSizedDefaultAllocator<32>_>::
            RemoveAll<_UDS_SyncRecvComponent::ProcessHeightMovement_::__l2::<lambda_1>_>
                      ((TArray<FDS_HeightMoveData,TSizedDefaultAllocator<32>_> *)
                       &pUVar6[0x13].field_0x20,&local_250);
            if ((*(int *)(pUVar6 + 0x14) == 0) && (EStack_254 == ComeBackStart)) {
              local_230.TargetHeightConditionType = EStack_252;
              local_230.HeightTargetLocation = 0.0;
              local_230.StartTime = 0.0;
              local_230.EndTime = 0.0;
              local_230.RemainTime = 0.0;
              local_230.Distance = 0.0;
              local_230.HeightStartLocation = 0.0;
              local_230.HeightMoveState = ComeBackEnd;
              local_230.NowHeightConditionType = Max;
              pUVar7 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_2a8);
              UDS_EntityData::SetHeightMoveData(pUVar7,&local_230);
            }
            return true;
          }
        }
      }
    }
  }
  return false;
}

