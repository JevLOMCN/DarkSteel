// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b57bdf0

UClass * __cdecl UDS_RecvMoveNetCharacterProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveNetCharacterProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveNetCharacterProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveNetCharacterProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveNetCharacterProcess,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RecvMoveNetCharacterProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveNetCharacterProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveNetCharacterProcess.InnerSingleton;
}

// UDS_RecvMoveNetCharacterProcess @ 14b57dcd0

UDS_RecvMoveNetCharacterProcess * __thiscall
UDS_RecvMoveNetCharacterProcess::UDS_RecvMoveNetCharacterProcess
          (UDS_RecvMoveNetCharacterProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveNetCharacterProcess__6B_;
  return this;
}

// ~UDS_RecvMoveNetCharacterProcess @ 14b57e470

void __thiscall
UDS_RecvMoveNetCharacterProcess::~UDS_RecvMoveNetCharacterProcess
          (UDS_RecvMoveNetCharacterProcess *this)

{
  *(undefined ***)this = &___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x28);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b57ff90

UClass * __cdecl UDS_RecvMoveNetCharacterProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveNetCharacterProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveNetCharacterProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveNetCharacterProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveNetCharacterProcess,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RecvMoveNetCharacterProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveNetCharacterProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveNetCharacterProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvMoveNetCharacterProcess @ 14b580950

void __cdecl
UDS_RecvMoveNetCharacterProcess::StaticRegisterNativesUDS_RecvMoveNetCharacterProcess(void)

{
  return;
}

// UDS_RecvMoveNetCharacterProcess @ 14bb4cd40

UDS_RecvMoveNetCharacterProcess * __thiscall
UDS_RecvMoveNetCharacterProcess::UDS_RecvMoveNetCharacterProcess
          (UDS_RecvMoveNetCharacterProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveNetCharacterProcess__6B_;
  return this;
}

// Initialize @ 14bb6dd70

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
UDS_RecvMoveNetCharacterProcess::Initialize
          (UDS_RecvMoveNetCharacterProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  FDS_EntityBase *pFVar2;
  undefined8 *puVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  undefined1 auStackX_18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    *(ulong64 *)&this->field_0x70 = pFVar2->EntityID;
    EVar1 = pFVar2->EntityType;
    this->field_0x78 = EVar1;
    *(long64 *)&this->field_0x80 = pFVar2->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    puVar3 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,auStackX_18);
    *(undefined8 *)&this->field_0x40 = *puVar3;
    puVar3 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,auStackX_18);
    *(undefined8 *)&this->field_0x48 = *puVar3;
    TVar4 = UDS_CharStateData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x50 = *(undefined8 *)TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x58 = *(undefined8 *)TVar5.WeakPtr;
    TVar6 = UDS_EntityData::GetData((ulong64)auStackX_18,*(ulong64 *)&this->field_0x70);
    *(undefined8 *)&this->field_0x60 = *(undefined8 *)TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x68 = *(undefined8 *)TVar7.WeakPtr;
  }
  return;
}

// IsStopMove @ 14bb6f9f0

bool __thiscall
UDS_RecvMoveNetCharacterProcess::IsStopMove
          (UDS_RecvMoveNetCharacterProcess *this,FDS_NetSyncData *param_1,float param_2)

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

// OnEnter @ 14bb73420

void __thiscall
UDS_RecvMoveNetCharacterProcess::OnEnter
          (UDS_RecvMoveNetCharacterProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xa0 = uVar1;
  *(double *)&this->field_0xa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xb8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xc0 = uVar1;
  *(double *)&this->field_0xc8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xa0 = uVar1;
  *(double *)&this->field_0xa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// OnExit @ 14bb73710

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
UDS_RecvMoveNetCharacterProcess::OnExit
          (UDS_RecvMoveNetCharacterProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_InputData *this_00;
  FWeakObjectPtr aFStackX_18 [2];
  
  UDS_RecvProcessBase::OnExit((UDS_RecvProcessBase *)this,param_1);
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x48);
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

// PostProcessData @ 14bb7e280

void __thiscall
UDS_RecvMoveNetCharacterProcess::PostProcessData
          (UDS_RecvMoveNetCharacterProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

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
  UDS_RecvMoveBaseProcess::PostProcessData((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  bVar11 = (byte)(param_1->StateFlags).Packed & 3;
  if ((bVar11 == 0) || (bVar11 == 3)) {
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
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
      this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
      local_res8[0] = Battle;
      bVar10 = UDS_CharStateData::HasCharDetailState(this_01,local_res8);
      if (bVar10) {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        EVar13 = Walk;
      }
      else {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        EVar13 = Run;
      }
      goto LAB_14bb7e450;
    }
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
    EVar13 = (EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 0xb);
  }
  else {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
    EVar13 = (EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 4);
  }
  EVar13 = EVar13 & 0x7f;
LAB_14bb7e450:
  UDS_EntityData::SetMoveMode(this_00,EVar13);
  return;
}

// RecvSyncTick @ 14bb7f970

void __thiscall
UDS_RecvMoveNetCharacterProcess::RecvSyncTick
          (UDS_RecvMoveNetCharacterProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
  local_res8 = Abnormal;
  bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0x48,
                       (void *)0x0);
    if (!bVar1) {
      UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
      (**(code **)(*(longlong *)this + 0x308))(this,param_1,param_2);
      (**(code **)(*(longlong *)this + 0x358))(this,param_1,param_2);
      (**(code **)(*(longlong *)this + 0x360))(this,&local_58,param_2,&param_1->EntityDirection);
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      local_28 = local_48;
      (**(code **)(*(longlong *)this + 0x330))(this,&local_38);
    }
  }
  return;
}

// StopMoveAction @ 14bb91c90

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
UDS_RecvMoveNetCharacterProcess::StopMoveAction
          (UDS_RecvMoveNetCharacterProcess *this,FDS_NetSyncData *param_1,float param_2)

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
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x48), !bVar5)) {
    bVar5 = false;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)this + 0x370))(this,param_1,param_2);
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

