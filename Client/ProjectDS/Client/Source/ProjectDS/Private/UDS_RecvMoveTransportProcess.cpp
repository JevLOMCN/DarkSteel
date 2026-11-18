// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b578920

UClass * __cdecl UDS_RecvMoveTransportProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveTransportProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveTransportProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveTransportProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveTransportProcess,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RecvMoveTransportProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveTransportProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveTransportProcess.InnerSingleton;
}

// UDS_RecvMoveTransportProcess @ 14b57ddf0

UDS_RecvMoveTransportProcess * __thiscall
UDS_RecvMoveTransportProcess::UDS_RecvMoveTransportProcess
          (UDS_RecvMoveTransportProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveTransportProcess__6B_;
  return this;
}

// ~UDS_RecvMoveTransportProcess @ 14b57e560

void __thiscall
UDS_RecvMoveTransportProcess::~UDS_RecvMoveTransportProcess(UDS_RecvMoveTransportProcess *this)

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

// GetPrivateStaticClass @ 14b5801d0

UClass * __cdecl UDS_RecvMoveTransportProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveTransportProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveTransportProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveTransportProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveTransportProcess,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RecvMoveTransportProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveTransportProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveTransportProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvMoveTransportProcess @ 14b580980

void __cdecl UDS_RecvMoveTransportProcess::StaticRegisterNativesUDS_RecvMoveTransportProcess(void)

{
  return;
}

// UDS_RecvMoveTransportProcess @ 14bba8cd0

UDS_RecvMoveTransportProcess * __thiscall
UDS_RecvMoveTransportProcess::UDS_RecvMoveTransportProcess
          (UDS_RecvMoveTransportProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveTransportProcess__6B_;
  return this;
}

// Initialize @ 14bbc03e0

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
UDS_RecvMoveTransportProcess::Initialize
          (UDS_RecvMoveTransportProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// OnEnter @ 14bbc89c0

void __thiscall
UDS_RecvMoveTransportProcess::OnEnter(UDS_RecvMoveTransportProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvMoveBaseProcess::OnEnter((UDS_RecvMoveBaseProcess *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xa0 = uVar1;
  *(double *)&this->field_0xa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// OnExit @ 14bbc91f0

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
UDS_RecvMoveTransportProcess::OnExit(UDS_RecvMoveTransportProcess *this,FDS_NetSyncData *param_1)

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

// RecvSyncTick @ 14bbd6e40

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

void __thiscall
UDS_RecvMoveTransportProcess::RecvSyncTick
          (UDS_RecvMoveTransportProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *this_00;
  undefined4 in_XMM2_Db;
  undefined1 auStackY_248 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  undefined1 local_1b8 [16];
  double local_1a8;
  TRotator<double> local_1a0;
  TVector<double> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0x70);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_RecvMoveTransportProcess::RecvSyncTick",0x2a,Yes);
    pwVar6 = L"ownerEntity null %llu";
    uVar5 = 0x30;
  }
  else {
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0x48,
                       (void *)0x0);
    if (!bVar1) {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
      UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_1d0._s_0);
      (**(code **)(*(longlong *)this + 0x358))(this,param_1,CONCAT44(in_XMM2_Db,param_2));
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
      UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_1e8._s_0);
      local_208._s_0.X = local_1e8._s_0.X - local_1d0._s_0.X;
      local_208._s_0.Y = local_1e8._s_0.Y - local_1d0._s_0.Y;
      local_208._s_0.Z = local_1e8._s_0.Z - local_1d0._s_0.Z;
      this_00 = UE::Math::TVector<double>::GetSafeNormal
                          ((TVector<double> *)&local_208._s_0,&local_188,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      UE::Math::TVector<double>::ToOrientationRotator(this_00,&local_1a0);
      (param_1->EntityDirection).Yaw = local_1a0.Yaw;
      (**(code **)(*(longlong *)this + 0x360))(this,local_1b8,CONCAT44(in_XMM2_Db,param_2));
      local_208._s_0.Z = local_1a8;
      (**(code **)(*(longlong *)this + 0x330))(this,&local_208);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_RecvMoveTransportProcess::RecvSyncTick",0x2a,Yes);
    pwVar6 = L"OwnerMovementCore null %llu";
    uVar5 = 0x36;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_168.Ptr,uVar5,pwVar6);
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return;
}

// UpdateVelocity @ 14bbe5e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_RecvMoveTransportProcess::UpdateVelocity
          (UDS_RecvMoveTransportProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined1 *puVar1;
  double dVar2;
  TWeakObjectPtr<AActor,FWeakObjectPtr> TVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  UDS_CharStateData *pUVar13;
  UDS_MovementCore *this_00;
  double *pdVar14;
  FDS_EntityBase *pFVar15;
  longlong lVar16;
  FWeakObjectPtr *pFVar17;
  UObject *pUVar18;
  double *pdVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined4 in_XMM2_Db;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dStackX_8;
  EDS_CharDetailState aEStackX_18 [2];
  FHitResult *in_stack_fffffffffffffda8;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  TVector<double>_u_0 TStack_218;
  TVector<double>_u_0 TStack_1f8;
  undefined1 auStack_1d8 [68];
  undefined4 uStack_194;
  double dStack_160;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  int iStack_f4;
  FName FStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  bVar11 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                      (void *)0x0);
  if (!bVar11) {
    pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    aEStackX_18[0] = Jump1;
    bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,aEStackX_18);
    if (!bVar11) {
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
      aEStackX_18[0] = Jump2;
      bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,aEStackX_18);
      if (!bVar11) {
        pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
        aEStackX_18[0] = Falling;
        bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,aEStackX_18);
        if (!bVar11) {
          *(undefined4 *)&this->field_0xb4 = 0;
          this->field_0xb0 = 0;
          goto LAB_14bb986ad;
        }
      }
    }
    *(float *)&this->field_0xb4 = *(float *)&this->field_0xb4 - param_2 * ___real_44dac000;
  }
LAB_14bb986ad:
  (**(code **)(*(longlong *)this + 0x338))(this,&dStack_238);
  dVar22 = __real_3f1a36e2e0000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
  dVar23 = 0.0;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar24 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar24 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    dVar2 = (param_1->VelocityVector).field0_0x0._s_0.Y;
    dVar6 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    auVar7._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar7._0_8_ = dVar6;
    auVar7._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar5 = dVar25 * dVar25 + dVar2 * dVar2;
    if (dVar5 == __real_3ff0000000000000) {
      if ((param_1->VelocityVector).field0_0x0._s_0.Z == 0.0) {
        dVar2 = *(double *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8);
        uVar24 = (param_1->VelocityVector).field0_0x0._s_0.Z;
        dVar6 = (param_1->VelocityVector).field0_0x0._s_0.X;
      }
      else {
LAB_14bb987e6:
        TStack_218._s_0.Z = 0.0;
        uVar24 = 0.0;
        dVar6 = dVar25;
      }
    }
    else {
      if (__real_3e45798ee0000000 <= dVar5) {
        dStackX_8 = __real_3ff0000000000000 / SQRT(dVar5);
        dVar25 = dVar25 * dStackX_8;
        dVar2 = dVar2 * dStackX_8;
        goto LAB_14bb987e6;
      }
      dVar2 = auVar7._8_8_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xb8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->field_0xb8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
        && ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc0 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&this->field_0xc0 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) &&
       ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&this->field_0xc8 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000))
    {
      auVar4._8_4_ = SUB84(dVar2,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])&this->field_0xb8 = auVar4;
      *(undefined8 *)&this->field_0xc8 = uVar24;
      uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar28 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
  }
  else {
    uVar24 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    *(ulonglong *)&this->field_0xb8 =
         CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    *(undefined8 *)&this->field_0xc0 = uVar24;
    *(double *)&this->field_0xc8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  pdVar19 = &(param_1->VelocityVector).field0_0x0._s_0.Y;
  pdVar14 = &(param_1->VelocityVector).field0_0x0._s_0.Z;
  dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
  puVar1 = &this->field_0x98;
  if (((((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,SUB84(dVar25,0) & uVar9) <=
         dVar22) &&
       (dVar2 = *pdVar19,
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar10,SUB84(dVar2,0) & uVar9) <= dVar22)
       ) && (dVar2 = *pdVar14,
            (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar10,SUB84(dVar2,0) & uVar9) <=
            dVar22)) ||
     ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20) & uVar10,
                         (uint)*(undefined8 *)puVar1 & uVar9) <= dVar22 &&
       ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xa0 >> 0x20) & uVar10,
                         (uint)*(undefined8 *)&this->field_0xa0 & uVar9) <= dVar22)) &&
      ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xa8 >> 0x20) & uVar10,
                        (uint)*(undefined8 *)&this->field_0xa8 & uVar9) <= dVar22)))) {
    bVar11 = false;
  }
  else {
    dVar2 = *pdVar19;
    dVar5 = dVar2 * dVar2 + dVar25 * dVar25;
    if (dVar5 == dVar8) {
      if (*pdVar14 == 0.0) {
        dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
        dVar2 = (param_1->VelocityVector).field0_0x0._s_0.Y;
        dVar23 = (param_1->VelocityVector).field0_0x0._s_0.Z;
        TStack_218._s_0.Z = dVar23;
      }
    }
    else if (__real_3e45798ee0000000 <= dVar5) {
      dStackX_8 = dVar8 / SQRT(dVar5);
      dVar25 = dVar25 * dStackX_8;
      dVar2 = dVar2 * dStackX_8;
    }
    else {
      TStack_218._s_0.Z = (double)CONCAT44(uVar28,uVar27);
      dVar23 = (double)CONCAT44(uVar28,uVar27);
      dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      dVar25 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    }
    dVar5 = *(double *)&this->field_0xb8;
    if (((dVar22 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,SUB84(dVar5,0) & uVar9
                                   )) ||
        (dVar22 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc0 >> 0x20) &
                                   uVar10,(uint)*(undefined8 *)&this->field_0xc0 & uVar9))) ||
       (dVar22 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc8 >> 0x20) &
                                  uVar10,(uint)*(undefined8 *)&this->field_0xc8 & uVar9))) {
      bVar11 = (float)(dVar2 * *(double *)&this->field_0xc0 + dVar5 * dVar25 +
                      dVar23 * *(double *)&this->field_0xc8) < __real_3f34fdf4;
      if (bVar11) {
        UDS_RecvMoveBaseProcess::AdjustVelocityOnDirectionChange
                  ((UDS_RecvMoveBaseProcess *)this,param_1,(TVector<double> *)puVar1,param_2);
      }
    }
    else {
      bVar11 = false;
    }
  }
  fVar26 = __real_42700000;
  fVar21 = __real_3f800000;
  fVar20 = param_2;
  if (param_2 <= __real_38d1b717) {
    fVar20 = __real_38d1b717;
  }
  auStack_1d8._4_4_ = 1000.0;
  fVar20 = __real_3f800000 / fVar20;
  auStack_1d8._0_4_ = __real_3e800000;
  if ((__real_41f00000 < fVar20) && (auStack_1d8._0_4_ = __real_3dcccccd, fVar20 < __real_42700000))
  {
    auStack_1d8._0_4_ = __real_3e800000 - (fVar20 - __real_41f00000) * __real_3ba3d70a;
  }
  auStack_1d8._12_8_ = ___xmm_3c23d70a3f80000041700000459c4000;
  auStack_1d8._20_8_ = _UNK_15278a2c8;
  auStack_1d8._8_4_ = 3.4028235e+38;
  bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x48);
  if (bVar12) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
    auStack_1d8._4_4_ = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    auStack_1d8._4_4_ = (float)auStack_1d8._4_4_ * __real_3f99999a;
  }
  dVar25 = dStack_228;
  if (bVar11) {
    auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ * __real_3f000000;
  }
  fVar20 = fVar21 / param_2;
  if (fVar26 <= fVar21 / param_2) {
    fVar20 = fVar26;
  }
  dVar23 = (double)(__real_43960000 / fVar20);
  dVar22 = dStack_228 - (param_1->ServerPosition).field0_0x0._s_0.Z;
  if (((dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,SUB84(dVar22,0) & uVar9
                                 )) ||
      (dVar22 = dStack_238 - (param_1->ServerPosition).field0_0x0._s_0.X,
      dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,SUB84(dVar22,0) & uVar9))
      ) || (dVar22 = dStack_230 - (param_1->ServerPosition).field0_0x0._s_0.Y,
           dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,
                                     SUB84(dVar22,0) & uVar9))) {
    lVar16 = *(longlong *)this;
LAB_14bb98b69:
    (**(code **)(lVar16 + 0x310))(this,0x82,0x83);
    TStack_1f8._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
    TStack_1f8._s_0.Y = (param_1->ServerPosition).field0_0x0._s_0.Y;
    in_stack_fffffffffffffda8 = (FHitResult *)auStack_1d8;
    TStack_1f8._s_0.Z = (param_1->ServerPosition).field0_0x0._s_0.Z;
    TStack_218._s_0.X = dStack_238;
    TStack_218._s_0.Y = dStack_230;
    TStack_218._s_0.Z = dStack_228;
    pdVar14 = (double *)
              (**(code **)(*(longlong *)this + 0x368))
                        (this,auStack_1d8 + 0x20,&TStack_218,&TStack_1f8,in_stack_fffffffffffffda8,
                         param_2,puVar1);
    dStack_238 = *pdVar14;
    dStack_230 = pdVar14[1];
    dStack_228 = pdVar14[2];
  }
  else {
    lVar16 = *(longlong *)this;
    if (__real_4079000000000000 <
        *(double *)&this->field_0xa0 * *(double *)&this->field_0xa0 +
        *(double *)puVar1 * *(double *)puVar1 +
        *(double *)&this->field_0xa8 * *(double *)&this->field_0xa8) goto LAB_14bb98b69;
    (**(code **)(lVar16 + 0x310))(this,0x83,0x82);
  }
  pFVar15 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar15 == (FDS_EntityBase *)0x0) {
    return;
  }
  if ((__real_322bcc77 <
       (float)(*(uint *)&this->field_0xb4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (lVar16 = (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15), lVar16 == 0)) {
    memset(auStack_1d8 + 0x40,0,0x100);
    auStack_1d8._61_2_ = 0;
    FStack_e0.ComparisonIndex.Value = 0;
    FStack_e0.Number = 0;
    uStack_d8 = 0;
    auStack_1d8[0x3f] = 0;
    TStack_1f8._s_0.X = dStack_238;
    TStack_218._s_0.X = dStack_238;
    TStack_218._s_0.Y = dStack_230;
    auStack_1d8._48_8_ = 0;
    auStack_1d8._56_4_ = 0xffffffff;
    auStack_1d8[0x3c] = 0;
    uStack_c8 = 0xffffffff;
    uStack_194 = 0x3f800000;
    TStack_1f8._s_0.Y = dStack_230;
    uStack_d0 = 0;
    iStack_f4 = -1;
    TStack_218._s_0.Z = dStack_228;
    TStack_1f8._s_0.Z = dStack_228 - ___real_40dd4c0000000000;
    pFVar17 = (FWeakObjectPtr *)(**(code **)(pFVar15->_padding_ + 0x160))(pFVar15,&dStackX_8);
    TVar3.WeakPtr.ObjectIndex = *(int *)&this->field_0x40;
    TVar3.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x44;
    in_stack_fffffffffffffda8 = (FHitResult *)(auStack_1d8 + 0x40);
    bVar11 = DS_Util::GetNpcLocationSweepTest
                       ((TVector<double> *)&TStack_218._s_0,(TVector<double> *)&TStack_1f8._s_0,
                        TVar3,(TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)*pFVar17,
                        in_stack_fffffffffffffda8);
    dVar23 = dStack_228;
    if (!bVar11) goto LAB_14bb98dae;
    dVar22 = dStack_138 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
             dStack_140 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
             dStack_130 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar23 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar22) && (dVar23 = dVar22, dVar8 <= dVar22)) {
      dVar23 = dVar8;
    }
    pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
    dVar23 = acos(dVar23);
    fVar26 = (float)dVar23 * __real_42652ee0;
    fVar21 = (float)(**(code **)(*(longlong *)pUVar18 + 0x480))(pUVar18);
    dVar23 = dStack_228;
    if (fVar21 <= fVar26) goto LAB_14bb98dae;
    dVar23 = (double)(param_2 * *(float *)&this->field_0xb4 + (float)dVar25);
    dStack_228 = (double)(float)((double)pFVar15->ScaledCapsuleHalfHeight + dStack_160);
    if (dStack_228 <= dVar23) goto LAB_14bb98dae;
  }
  this->field_0xb0 = 1;
  dVar23 = dStack_228;
LAB_14bb98dae:
  dStack_228 = dVar23;
  TStack_218._s_0.X = dStack_238;
  TStack_218._s_0.Y = dStack_230;
  TStack_218._s_0.Z = dStack_228;
  (**(code **)(*(longlong *)this + 800))
            (this,param_1,CONCAT44(in_XMM2_Db,param_2),&TStack_218,
             (ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
  return;
}

