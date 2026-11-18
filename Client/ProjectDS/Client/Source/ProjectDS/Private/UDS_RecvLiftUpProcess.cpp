// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b57b700

UClass * __cdecl UDS_RecvLiftUpProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvLiftUpProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvLiftUpProcess",
               &Z_Registration_Info_UClass_UDS_RecvLiftUpProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvLiftUpProcess,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvLiftUpProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvLiftUpProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvLiftUpProcess.InnerSingleton;
}

// UDS_RecvLiftUpProcess @ 14b57dba0

UDS_RecvLiftUpProcess * __thiscall
UDS_RecvLiftUpProcess::UDS_RecvLiftUpProcess(UDS_RecvLiftUpProcess *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvLiftUpProcess__6B_;
  (this->OwnerInteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->OwnerInteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_RecvLiftUpProcess @ 14b57e380

void __thiscall UDS_RecvLiftUpProcess::~UDS_RecvLiftUpProcess(UDS_RecvLiftUpProcess *this)

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

// GetPrivateStaticClass @ 14b57fd50

UClass * __cdecl UDS_RecvLiftUpProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvLiftUpProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvLiftUpProcess",
               &Z_Registration_Info_UClass_UDS_RecvLiftUpProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvLiftUpProcess,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvLiftUpProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvLiftUpProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvLiftUpProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvLiftUpProcess @ 14b580920

void __cdecl UDS_RecvLiftUpProcess::StaticRegisterNativesUDS_RecvLiftUpProcess(void)

{
  return;
}

// UDS_RecvLiftUpProcess @ 14bb4cb50

UDS_RecvLiftUpProcess * __thiscall
UDS_RecvLiftUpProcess::UDS_RecvLiftUpProcess
          (UDS_RecvLiftUpProcess *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvLiftUpProcess__6B_;
  (this->OwnerInteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->OwnerInteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// Initialize @ 14bb6dd40

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
UDS_RecvLiftUpProcess::Initialize
          (UDS_RecvLiftUpProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// IsActiveRecvProcess @ 14bb6e1b0

bool __thiscall
UDS_RecvLiftUpProcess::IsActiveRecvProcess(UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((uint)(int)(param_1->StateFlags).Packed >> 0x19) & 0x1f;
  if (1 < (byte)(bVar1 - 0x1e)) {
    return bVar1 == 1;
  }
  return true;
}

// IsStopMove @ 14bb6f930

bool __thiscall
UDS_RecvLiftUpProcess::IsStopMove
          (UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined8 uVar1;
  
  if (((param_1->StateFlags).Packed & 3) == 0) {
    uVar1 = *(undefined8 *)&(param_1->VelocityVector).field0_0x0;
    if ((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) &&
        (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      return true;
    }
  }
  return false;
}

// OnEnter @ 14bb731d0

void __thiscall UDS_RecvLiftUpProcess::OnEnter(UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> TVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
                    (&local_res20,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->OwnerInteractionAbilityData).WeakPtr = *TVar3.WeakPtr;
  local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_InteractionProcessAbilityData>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionProcessAbilityData,FWeakObjectPtr> *)
                     &local_res18,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    UDS_InteractionAbility_LiftUp::TryActivate
              ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x10,
               (int *)&pUVar4[2].field_0x18);
  }
  return;
}

// OnExit @ 14bb73590

void __thiscall UDS_RecvLiftUpProcess::OnExit(UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1)

{
  EDS_AbilityDeactivateType local_res8 [32];
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  local_res8[0] = Cancel;
  UDS_InteractionAbility_LiftUp::Deactivate((ulong64 *)&this->_padding_,local_res8);
  return;
}

// PostProcessData @ 14bb7de90

void __thiscall
UDS_RecvLiftUpProcess::PostProcessData
          (UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  bool bVar10;
  byte bVar11;
  UObject *pUVar12;
  UDS_EntityData *this_00;
  UDS_CharStateData *this_01;
  EDS_MoveMode EVar13;
  double dVar14;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res20;
  
  UDS_CharInfoData::GetData((ulong64)&local_res20);
  bVar10 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar10) {
    return;
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res20);
  dVar9 = __real_3f1a36e2e0000000;
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((pUVar12[0x16].field_0x8 == '\x01') &&
     (((dVar14 = *(double *)&(param_1->DestinationPosition).field0_0x0,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (uVar1 = *(undefined8 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    dVar2 = (param_1->DestinationPosition).field0_0x0._s_0.Y;
    dVar3 = (param_1->DestinationPosition).field0_0x0._s_0.Z;
    dVar4 = (param_1->ServerPosition).field0_0x0._s_0.Y;
    dVar5 = (param_1->ServerPosition).field0_0x0._s_0.Z;
    (param_1->VelocityVector).field0_0x0._s_0.X =
         dVar14 - (param_1->ServerPosition).field0_0x0._s_0.X;
    (param_1->VelocityVector).field0_0x0._s_0.Y = dVar2 - dVar4;
    (param_1->VelocityVector).field0_0x0._s_0.Z = dVar3 - dVar5;
  }
  bVar11 = (**(code **)(this->_padding_ + 0x318))(this,param_1);
  (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffffc;
  (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | (ulonglong)bVar11;
  uVar6 = (param_1->StateFlags).Packed;
  if (((uVar6 & 3) == 0) || (((byte)uVar6 & 3) == 3)) {
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar12 + 0x468))(pUVar12,&UE::Math::TVector<double>::ZeroVector);
  }
  uVar6 = (param_1->StateFlags).Packed;
  if ((uVar6 >> 4 & 0x7f) == 0) {
    if ((uVar6 >> 0xb & 0x7f) == 0) {
      dVar14 = (param_1->PrevPosition).field0_0x0._s_0.X -
               (param_1->ServerPosition).field0_0x0._s_0.X;
      if ((((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar8,SUB84(dVar14,0) & uVar7) <=
            dVar9) &&
          (dVar14 = (param_1->PrevPosition).field0_0x0._s_0.Y -
                    (param_1->ServerPosition).field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar8,SUB84(dVar14,0) & uVar7) <=
          dVar9)) &&
         (dVar14 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                   (param_1->ServerPosition).field0_0x0._s_0.Z,
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar8,SUB84(dVar14,0) & uVar7) <=
         dVar9)) {
        return;
      }
      this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8[0] = Battle;
      bVar10 = UDS_CharStateData::HasCharDetailState(this_01,local_res8);
      if (bVar10) {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        EVar13 = Walk;
      }
      else {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        EVar13 = Run;
      }
      goto LAB_14bb7e06b;
    }
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    EVar13 = (EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 0xb);
  }
  else {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    EVar13 = (EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 4);
  }
  EVar13 = EVar13 & 0x7f;
LAB_14bb7e06b:
  UDS_EntityData::SetMoveMode(this_00,EVar13);
  return;
}

// RecvSyncTick @ 14bb7f5c0

void __thiscall
UDS_RecvLiftUpProcess::RecvSyncTick
          (UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8;
  
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8 = Abnormal;
  bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
      (**(code **)(this->_padding_ + 0x308))(this,param_1,param_2);
      (**(code **)(this->_padding_ + 0x358))(this,param_1,param_2);
    }
  }
  return;
}

// StopMoveAction @ 14bb91900

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
UDS_RecvLiftUpProcess::StopMoveAction
          (UDS_RecvLiftUpProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FDS_EntityBase *pFVar8;
  UDS_InputData *this_00;
  FWeakObjectPtr local_res20;
  
  pFVar8 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((pFVar8 == (FDS_EntityBase *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar5)) {
    bVar5 = false;
  }
  else {
    cVar6 = (**(code **)(this->_padding_ + 0x370))(this,param_1,param_2);
    bVar5 = cVar6 == '\x01';
    if (bVar5) {
      uVar2 = *(undefined4 *)((longlong)&(param_1->PrevVelocityVector).field0_0x0 + 4);
      uVar3 = *(undefined4 *)((longlong)&(param_1->PrevVelocityVector).field0_0x0 + 8);
      uVar4 = *(undefined4 *)((longlong)&(param_1->PrevVelocityVector).field0_0x0 + 0xc);
      dVar1 = (param_1->PrevVelocityVector).field0_0x0._s_0.Z;
      *(undefined4 *)&(param_1->VelocityVector).field0_0x0 =
           *(undefined4 *)&(param_1->PrevVelocityVector).field0_0x0;
      *(undefined4 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 4) = uVar2;
      *(undefined4 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0xc) = uVar4;
      (param_1->VelocityVector).field0_0x0._s_0.Z = dVar1;
    }
    (**(code **)(pFVar8->_padding_ + 0x1b8))(pFVar8);
    bVar7 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar7) {
      this_00 = (UDS_InputData *)FWeakObjectPtr::Get(&local_res20);
      if (bVar5) {
        UDS_InputData::SetIsActiveInput(this_00,false);
      }
      else {
        UDS_InputData::SetIsActiveInput(this_00,true);
      }
    }
  }
  return bVar5;
}

