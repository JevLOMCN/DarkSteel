// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b579e90

UClass * __cdecl UDS_RecvWarpProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvWarpProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvWarpProcess",
               &Z_Registration_Info_UClass_UDS_RecvWarpProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvWarpProcess,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvWarpProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvWarpProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvWarpProcess.InnerSingleton;
}

// UDS_RecvWarpProcess @ 14b57e060

UDS_RecvWarpProcess * __thiscall
UDS_RecvWarpProcess::UDS_RecvWarpProcess(UDS_RecvWarpProcess *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvWarpProcess__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpMoveVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpMoveVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpMoveVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WarpMoveEndTime = 0.0;
  return this;
}

// ~UDS_RecvWarpProcess @ 14b57e7c0

void __thiscall UDS_RecvWarpProcess::~UDS_RecvWarpProcess(UDS_RecvWarpProcess *this)

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

// GetPrivateStaticClass @ 14b580700

UClass * __cdecl UDS_RecvWarpProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvWarpProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvWarpProcess",
               &Z_Registration_Info_UClass_UDS_RecvWarpProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvWarpProcess,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvWarpProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvWarpProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvWarpProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvWarpProcess @ 14b5809f0

void __cdecl UDS_RecvWarpProcess::StaticRegisterNativesUDS_RecvWarpProcess(void)

{
  return;
}

// UDS_RecvWarpProcess @ 14bba9160

UDS_RecvWarpProcess * __thiscall
UDS_RecvWarpProcess::UDS_RecvWarpProcess(UDS_RecvWarpProcess *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvWarpProcess__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpMoveVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpMoveVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpMoveVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WarpMoveEndTime = 0.0;
  return this;
}

// Initialize @ 14bbc0610

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
UDS_RecvWarpProcess::Initialize
          (UDS_RecvWarpProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// IsActiveRecvProcess @ 14bbc30c0

bool __thiscall
UDS_RecvWarpProcess::IsActiveRecvProcess(UDS_RecvWarpProcess *this,FDS_NetSyncData *param_1)

{
  return ((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) == 0xf;
}

// OnEnter @ 14bbc8e00

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

void __thiscall UDS_RecvWarpProcess::OnEnter(UDS_RecvWarpProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  bool bVar8;
  FDS_EntityBase *this_00;
  FDS_EntityBase *pFVar9;
  longlong lVar10;
  UDS_MovementCore *this_01;
  float fVar11;
  undefined8 uVar12;
  undefined8 local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  
  UDS_RecvMoveBaseProcess::OnEnter((UDS_RecvMoveBaseProcess *)this,param_1);
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (this_00 == (FDS_EntityBase *)0x0) {
    return;
  }
  if (this_00->EntityType == Transport) {
    pFVar9 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if ((pFVar9 != (FDS_EntityBase *)0x0) &&
       (lVar2 = this->_padding_, lVar10 = (**(code **)(pFVar9->_padding_ + 0x1d8))(pFVar9),
       lVar10 == lVar2)) {
      return;
    }
LAB_14bbc8e5d:
    local_res8 = 8;
    (**(code **)(this_00->_padding_ + 0x58))(this_00,&local_res8,0);
    return;
  }
  bVar8 = FDS_EntityBase::IsMountNPC(this_00);
  if (!bVar8) goto LAB_14bbc8e5d;
  (**(code **)(this->_padding_ + 0x338))(this,&local_98);
  dVar5 = (param_1->ServerPosition).field0_0x0._s_0.X;
  dVar3 = (param_1->ServerPosition).field0_0x0._s_0.Y;
  dVar1 = (param_1->ServerPosition).field0_0x0._s_0.Z;
  this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  fVar11 = UDS_MovementCore::GetMaxMoveSpeed(this_01);
  dVar7 = __real_3ff0000000000000;
  uVar12 = dVar5 - (double)CONCAT44(uStack_94,local_98);
  uVar4 = dVar3 - (double)CONCAT44(uStack_8c,uStack_90);
  dVar5 = (double)uVar4 * (double)uVar4 + (double)uVar12 * (double)uVar12;
  local_68 = dVar1;
  if (dVar5 == __real_3ff0000000000000) {
    uVar6 = dVar1 - local_88;
    if (dVar1 - local_88 == 0.0) goto LAB_14bbc8f9b;
  }
  else {
    if (dVar5 < __real_3e45798ee0000000) {
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14bbc8f9b;
    }
    uVar4 = (double)uVar4 * (__real_3ff0000000000000 / SQRT(dVar5));
    uVar12 = (double)uVar12 * (__real_3ff0000000000000 / SQRT(dVar5));
  }
  uVar6 = 0.0;
LAB_14bbc8f9b:
  dVar3 = (double)fVar11;
  (this->WarpMoveVelocity).field0_0x0._s_0.X = dVar3 * (double)uVar12;
  (this->WarpMoveVelocity).field0_0x0._s_0.Y = dVar3 * (double)uVar4;
  (this->WarpMoveVelocity).field0_0x0._s_0.Z = dVar3 * (double)uVar6;
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_68 = local_88;
  this->WarpMoveEndTime = dVar1 + SQRT(dVar5) * (dVar7 / dVar3);
  local_78 = local_98;
  uStack_74 = uStack_94;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  (**(code **)(this->_padding_ + 800))(this,param_1,0,&local_78,1);
  return;
}

// OnExit @ 14bbc95b0

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

void __thiscall UDS_RecvWarpProcess::OnExit(UDS_RecvWarpProcess *this,FDS_NetSyncData *param_1)

{
  longlong lVar1;
  FDS_EntityBase *pFVar2;
  FDS_EntityBase *pFVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  local_28 = *(undefined4 *)&(param_1->ServerPosition).field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 0xc);
  local_18 = (param_1->ServerPosition).field0_0x0._s_0.Z;
  (**(code **)(this->_padding_ + 800))(this,param_1,0,&local_28,1);
  local_28 = *(undefined4 *)&(param_1->EntityDirection).Pitch;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->EntityDirection).Pitch + 4);
  uStack_20 = *(undefined4 *)&(param_1->EntityDirection).Yaw;
  uStack_1c = *(undefined4 *)((longlong)&(param_1->EntityDirection).Yaw + 4);
  local_18 = (param_1->EntityDirection).Roll;
  (**(code **)(this->_padding_ + 0x330))(this,&local_28);
  pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    if (((pFVar2->EntityType == Transport) &&
        (pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true), pFVar3 != (FDS_EntityBase *)0x0))
       && (lVar1 = this->_padding_, lVar4 = (**(code **)(pFVar3->_padding_ + 0x1d8))(pFVar3),
          lVar4 == lVar1)) {
      return;
    }
    local_res8 = 8;
    (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,&local_res8,0);
  }
  return;
}

// RecvSyncTick @ 14bbd73d0

void __thiscall
UDS_RecvWarpProcess::RecvSyncTick(UDS_RecvWarpProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_XMM2_Db;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  uVar1 = SUB84(this->WarpMoveEndTime,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)this->WarpMoveEndTime >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_3e45798ee2308c3a) {
    dVar5 = this->WarpMoveEndTime;
    dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
    if (dVar6 <= dVar5) {
      (**(code **)(this->_padding_ + 0x338))(this,local_88);
      dVar6 = (double)param_2;
      dVar7 = (double)local_88._0_8_ + dVar6 * (this->WarpMoveVelocity).field0_0x0._s_0.X;
      dVar5 = (double)local_88._8_8_ + dVar6 * (this->WarpMoveVelocity).field0_0x0._s_0.Y;
      local_78 = local_78 + dVar6 * (this->WarpMoveVelocity).field0_0x0._s_0.Z;
      uVar3 = SUB84(dVar5,0);
      uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_88._8_4_ = uVar3;
      local_88._0_8_ = dVar7;
      local_88._12_4_ = uVar4;
      local_68._8_4_ = uVar3;
      local_68._0_8_ = dVar7;
      local_68._12_4_ = uVar4;
      local_58 = local_78;
      (**(code **)(this->_padding_ + 800))(this,param_1,CONCAT44(in_XMM2_Db,param_2),local_68,1);
      (**(code **)(this->_padding_ + 0x360))
                (this,local_48,CONCAT44(in_XMM2_Db,param_2),&param_1->EntityDirection);
      local_58 = (double)local_38;
      (**(code **)(this->_padding_ + 0x330))(this,local_68);
    }
  }
  return;
}

