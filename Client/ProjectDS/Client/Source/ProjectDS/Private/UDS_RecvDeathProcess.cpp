// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b57b420

UClass * __cdecl UDS_RecvDeathProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvDeathProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvDeathProcess",
               &Z_Registration_Info_UClass_UDS_RecvDeathProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvDeathProcess,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvDeathProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvDeathProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvDeathProcess.InnerSingleton;
}

// UDS_RecvDeathProcess @ 14b57db70

UDS_RecvDeathProcess * __thiscall
UDS_RecvDeathProcess::UDS_RecvDeathProcess(UDS_RecvDeathProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->IsAbnormalDead = false;
  this->_padding_ = (longlong)&___7UDS_RecvDeathProcess__6B_;
  return this;
}

// ~UDS_RecvDeathProcess @ 14b57e330

void __thiscall UDS_RecvDeathProcess::~UDS_RecvDeathProcess(UDS_RecvDeathProcess *this)

{
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

// GetPrivateStaticClass @ 14b57fc90

UClass * __cdecl UDS_RecvDeathProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvDeathProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvDeathProcess",
               &Z_Registration_Info_UClass_UDS_RecvDeathProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvDeathProcess,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvDeathProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvDeathProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvDeathProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvDeathProcess @ 14b580910

void __cdecl UDS_RecvDeathProcess::StaticRegisterNativesUDS_RecvDeathProcess(void)

{
  return;
}

// UDS_RecvDeathProcess @ 14bb4cb20

UDS_RecvDeathProcess * __thiscall
UDS_RecvDeathProcess::UDS_RecvDeathProcess(UDS_RecvDeathProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->IsAbnormalDead = false;
  this->_padding_ = (longlong)&___7UDS_RecvDeathProcess__6B_;
  return this;
}

// GetNowMoveStateType @ 14bb66dc0

EDS_MoveStateType __thiscall
UDS_RecvDeathProcess::GetNowMoveStateType(UDS_RecvDeathProcess *this,FDS_NetSyncData *param_1)

{
  return Stop;
}

// HandleDebugInfo @ 14bb695b0

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
UDS_RecvDeathProcess::HandleDebugInfo(UDS_RecvDeathProcess *this,FDS_NetSyncData *param_1)

{
  long64 lVar1;
  bool bVar2;
  FDS_EntityBase *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar3;
  FString *pFVar4;
  UDS_EntityData *pUVar5;
  FString local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->_padding_,(void *)0x0
                    );
  if (!bVar2) {
    bVar2 = UDS_GameInstance::IsNameTagDebug();
    this_00 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
    if ((this_00 != (FDS_EntityBase *)0x0) && (FDS_EntityBase::ShowDebugUI(this_00,bVar2), bVar2)) {
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar3 = UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_48._s_0);
      local_28._s_0.X = (pTVar3->field0_0x0)._s_0.X;
      local_28._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
      local_28._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
      bVar2 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&local_28._s_0);
      if (bVar2) {
        ::FString::FString(&local_58,"Death");
        if ((char)this->_padding_ == '\x05') {
          lVar1 = this_00->TableID;
          ::FString::FString((FString *)&local_48._s_0,L"NpcBaseID:{1}\n");
          pFVar4 = DS_Util::GetFormatString<__int64>
                             ((FString *)&local_28._s_0,(FString *)&local_48._s_0,lVar1);
          ::FString::InsertAt(&local_58,0,pFVar4);
          if ((void *)local_28._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_28._s_0.X);
          }
          if ((void *)local_48._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_48._s_0.X);
          }
        }
        pUVar5 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_EntityData::SetDebugString(pUVar5,&local_58);
      }
      else {
        pUVar5 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pFVar4 = ::FString::FString((FString *)&local_28._s_0,"");
        UDS_EntityData::SetDebugString(pUVar5,pFVar4);
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_28._s_0.X;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Initialize @ 14bb6dd30

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
UDS_RecvDeathProcess::Initialize
          (UDS_RecvDeathProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// IsActiveRecvProcess @ 14bb6e160

bool __thiscall
UDS_RecvDeathProcess::IsActiveRecvProcess(UDS_RecvDeathProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8[0] = Dead;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
    return bVar1;
  }
  return false;
}

// OnEnter @ 14bb73110

void __thiscall UDS_RecvDeathProcess::OnEnter(UDS_RecvDeathProcess *this,FDS_NetSyncData *param_1)

{
  longlong *plVar1;
  ulong64 uVar2;
  undefined8 uVar3;
  FReadAccessScope local_28;
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar3;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar3;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = (param_1->StateFlags).Packed;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,(byte)((uint)uVar2 >> 0x12) & 0x7f,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this->IsAbnormalDead = false;
  return;
}

// OnExit @ 14bb73580

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

void __thiscall UDS_RecvDeathProcess::OnExit(UDS_RecvDeathProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_InputData *this_00;
  FWeakObjectPtr aFStackX_18 [2];
  
  UDS_RecvProcessBase::OnExit((UDS_RecvProcessBase *)this,param_1);
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      (**(code **)(pFVar2->_padding_ + 0x1b8))(pFVar2);
      bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
      if (bVar1) {
        this_00 = (UDS_InputData *)FWeakObjectPtr::Get(aFStackX_18);
        UDS_InputData::SetIsActiveInput(this_00,false);
      }
    }
  }
  return;
}

// RecvSyncTick @ 14bb7f420

void __thiscall
UDS_RecvDeathProcess::RecvSyncTick
          (UDS_RecvDeathProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  UObject *pUVar2;
  UDS_MovementCore *pUVar3;
  TVector<double> *pTVar4;
  longlong *this_01;
  float fVar5;
  float fVar6;
  EDS_CharState local_res8;
  TVector<double> local_88;
  TVector<double>_u_0 local_68;
  TVector<double> local_48 [2];
  
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8 = Abnormal;
  bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
  if (!bVar1) {
    if (this->IsAbnormalDead == false) {
      bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar1) {
        this_01 = &this->_padding_;
        bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)this_01,(void *)0x0);
        if (!bVar1) {
          pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          fVar6 = *(float *)&pUVar2[4].field_0x8;
          pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
          pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,local_48);
          local_68._s_0.X = (pTVar4->field0_0x0)._s_0.X;
          local_68._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
          local_68._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
          DS_Util::GetNPCFloorLocationByLocation
                    (&local_88,(TVector<double> *)&local_68._s_0,__real_43160000,false);
          local_88.field0_0x0._s_0.Z = local_88.field0_0x0._s_0.Z + (double)fVar6;
          pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
          pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,local_48);
          fVar6 = (float)(pTVar4->field0_0x0)._s_0.Z;
          if (local_88.field0_0x0._s_0.Z + __real_4024000000000000 <= (double)fVar6) {
            pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            fVar5 = (float)(**(code **)(*(longlong *)pUVar2 + 0x3f0))(pUVar2);
            pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,fVar6 - fVar5 * param_2);
          }
        }
      }
    }
    return;
  }
  this->IsAbnormalDead = true;
  return;
}

// UpdateGravity @ 14bb96610

void __thiscall UDS_RecvDeathProcess::UpdateGravity(UDS_RecvDeathProcess *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_MovementCore *pUVar3;
  TVector<double> *pTVar4;
  longlong *this_00;
  float fVar5;
  float fVar6;
  TVector<double> local_88;
  TVector<double>_u_0 local_68;
  TVector<double> local_48 [2];
  
  bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
  if (!bVar1) {
    this_00 = &this->_padding_;
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)this_00,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      fVar6 = *(float *)&pUVar2[4].field_0x8;
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,local_48);
      local_68._s_0.X = (pTVar4->field0_0x0)._s_0.X;
      local_68._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
      local_68._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
      DS_Util::GetNPCFloorLocationByLocation
                (&local_88,(TVector<double> *)&local_68._s_0,__real_43160000,false);
      local_88.field0_0x0._s_0.Z = local_88.field0_0x0._s_0.Z + (double)fVar6;
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,local_48);
      fVar6 = (float)(pTVar4->field0_0x0)._s_0.Z;
      if (local_88.field0_0x0._s_0.Z + __real_4024000000000000 <= (double)fVar6) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        fVar5 = (float)(**(code **)(*(longlong *)pUVar2 + 0x3f0))(pUVar2);
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,fVar6 - fVar5 * param_1);
      }
    }
  }
  return;
}

