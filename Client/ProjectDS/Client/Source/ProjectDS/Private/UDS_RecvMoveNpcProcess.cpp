// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// StaticClass @ 14b57bff0

UClass * __cdecl UDS_RecvMoveNpcProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveNpcProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveNpcProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveNpcProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveNpcProcess,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveNpcProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveNpcProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveNpcProcess.InnerSingleton;
}

// UDS_RecvMoveNpcProcess @ 14b57dd00

UDS_RecvMoveNpcProcess * __thiscall
UDS_RecvMoveNpcProcess::UDS_RecvMoveNpcProcess(UDS_RecvMoveNpcProcess *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvMoveNpcProcess__6B_;
  this->npcWalkSpeed = 0.0;
  this->npcRunSpeed = 0.0;
  this->npcJogSpeed = 0.0;
  this->IsRotationAction = false;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->LastNpcRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->LastNpcRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationDeltaTime = 0.0;
  this->RotationEndTime = 0.0;
  this->RotationRealEndTime = 0.0;
  (this->LastNpcRotation).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RecalculateVelocityValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsDeAccelMoveArrived = false;
  this->BossDeAccelValue = 0.0;
  this->MoveEndTime = 0.0;
  this->ForceClosetPosition = false;
  this->InterpDurationServerLocation = 0.0;
  this->FinalMoveMode = Idle;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Z = (double)uVar1;
  this->InterpTimeServerLocation = 0.1;
  return this;
}

// ~UDS_RecvMoveNpcProcess @ 14b57e4c0

void __thiscall UDS_RecvMoveNpcProcess::~UDS_RecvMoveNpcProcess(UDS_RecvMoveNpcProcess *this)

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

// GetPrivateStaticClass @ 14b580050

UClass * __cdecl UDS_RecvMoveNpcProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveNpcProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveNpcProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveNpcProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveNpcProcess,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveNpcProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveNpcProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveNpcProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvMoveNpcProcess @ 14b580960

void __cdecl UDS_RecvMoveNpcProcess::StaticRegisterNativesUDS_RecvMoveNpcProcess(void)

{
  return;
}

// UDS_RecvMoveNpcProcess @ 14bb4cd70

UDS_RecvMoveNpcProcess * __thiscall
UDS_RecvMoveNpcProcess::UDS_RecvMoveNpcProcess
          (UDS_RecvMoveNpcProcess *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvMoveNpcProcess__6B_;
  this->npcWalkSpeed = 0.0;
  this->npcRunSpeed = 0.0;
  this->npcJogSpeed = 0.0;
  this->IsRotationAction = false;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->LastNpcRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->LastNpcRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationDeltaTime = 0.0;
  this->RotationEndTime = 0.0;
  this->RotationRealEndTime = 0.0;
  (this->LastNpcRotation).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RecalculateVelocityValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsDeAccelMoveArrived = false;
  this->BossDeAccelValue = 0.0;
  this->MoveEndTime = 0.0;
  this->ForceClosetPosition = false;
  this->InterpDurationServerLocation = 0.0;
  this->FinalMoveMode = Idle;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Z = (double)uVar1;
  this->InterpTimeServerLocation = 0.1;
  return this;
}

// ApplyMoveMode @ 14bb50b10

void __thiscall
UDS_RecvMoveNpcProcess::ApplyMoveMode
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,EDS_MoveMode param_2)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    if (param_2 == Patrol) {
      param_2 = (this->npcJogSpeed < param_1->PatrolMoveSpeed) + Walk;
    }
    if (param_2 == Patrol) {
      param_2 = Walk;
    }
    this->FinalMoveMode = param_2;
  }
  return;
}

// ApplyRotationLerp @ 14bb50d80

void __thiscall
UDS_RecvMoveNpcProcess::ApplyRotationLerp(UDS_RecvMoveNpcProcess *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  TQuat<double> *pTVar9;
  TRotator<double> *pTVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  TQuat<double> local_68;
  TQuat<double> local_48 [2];
  
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&this->EndRotation,&local_68);
  pTVar9 = UE::Math::TRotator<double>::Quaternion(&this->StartRotation,&local_a8);
  pTVar8 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_48,pTVar9,pTVar8,(double)param_1);
  dVar4 = pTVar8->X;
  dVar5 = pTVar8->Y;
  dVar6 = pTVar8->Z;
  dVar7 = pTVar8->W;
  pcVar1 = *(code **)(this->_padding_ + 0x330);
  dVar13 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar15 = dVar7 * dVar7 + dVar5 * dVar5;
  dVar2 = dVar15 + dVar13;
  dVar13 = dVar13 + dVar15;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar16 = sqrtpd(in_XMM4,auVar16);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar13);
  uVar18 = (uint)(uVar11 >> 0x20);
  uVar19 = (uint)(uVar12 >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  local_88._0_8_ = uVar11 & (ulonglong)(auVar17._0_8_ * dVar4);
  uVar3 = uVar12 & (ulonglong)(auVar17._8_8_ * dVar5);
  local_88._8_4_ = (undefined4)uVar3;
  local_88._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar17._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar17._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88 = local_88 | auVar17;
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  local_78._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  local_78._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  local_78._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar14._0_8_ = (ulonglong)(auVar16._0_8_ * dVar6) & uVar11;
  uVar12 = (ulonglong)(auVar16._8_8_ * dVar7) & uVar12;
  auVar14._8_4_ = (undefined4)uVar12;
  auVar14._12_4_ = (undefined4)(uVar12 >> 0x20);
  local_78 = local_78 | auVar14;
  pTVar10 = UE::Math::TQuat<double>::Rotator
                      ((TQuat<double> *)local_88,(TRotator<double> *)&local_68);
  local_a8.X._0_4_ = *(undefined4 *)&pTVar10->Pitch;
  local_a8.X._4_4_ = *(undefined4 *)((longlong)&pTVar10->Pitch + 4);
  local_a8.Y._0_4_ = *(undefined4 *)&pTVar10->Yaw;
  local_a8.Y._4_4_ = *(undefined4 *)((longlong)&pTVar10->Yaw + 4);
  local_a8.Z = pTVar10->Roll;
  (*pcVar1)(this,&local_a8);
  return;
}

// ApplyStandardRotation @ 14bb50ed0

void __thiscall
UDS_RecvMoveNpcProcess::ApplyStandardRotation
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (**(code **)(this->_padding_ + 0x360))(this,&local_48,param_2,&param_1->EntityDirection);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  (**(code **)(this->_padding_ + 0x330))(this,&local_28);
  return;
}

// BossNpcIdleVelocity @ 14bb518d0

void __thiscall
UDS_RecvMoveNpcProcess::BossNpcIdleVelocity
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  double dVar2;
  UObject *pUVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 in_XMM2_Db;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  
  dVar11 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar9 = this->MoveEndTime;
  uVar1 = (param_1->StateFlags).Packed;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (((uVar1 >> 0x23 & 3) == 0) && (pUVar3[3].field_0x6 == '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  uVar12 = 0.0;
  if (0.0 <= dVar9 - dVar11) {
    dVar9 = (this->RecalculateVelocityValue).field0_0x0._s_0.X;
    dVar11 = (this->RecalculateVelocityValue).field0_0x0._s_0.Y;
    dVar7 = dVar11 * dVar11 + dVar9 * dVar9;
    if (dVar7 == __real_3ff0000000000000) {
      uVar10 = dVar11;
      uVar13 = dVar9;
      if ((this->RecalculateVelocityValue).field0_0x0._s_0.Z == 0.0) {
        local_58 = (this->RecalculateVelocityValue).field0_0x0._s_0.Z;
        uVar10 = (this->RecalculateVelocityValue).field0_0x0._s_0.Y;
        uVar12 = local_58;
        uVar13 = (this->RecalculateVelocityValue).field0_0x0._s_0.X;
      }
    }
    else if (__real_3e45798ee0000000 <= dVar7) {
      uVar10 = (__real_3ff0000000000000 / SQRT(dVar7)) * dVar11;
      uVar13 = dVar9 * (__real_3ff0000000000000 / SQRT(dVar7));
    }
    else {
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    dVar8 = (double)(float)((uint)this->BossDeAccelValue ^ __xmm_80000000800000008000000080000000);
    dVar2 = (double)param_2;
    dVar7 = (this->RecalculateVelocityValue).field0_0x0._s_0.Z;
    (this->RecalculateVelocityValue).field0_0x0._s_0.X = dVar8 * (double)uVar13 * dVar2 + dVar9;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Y = dVar8 * (double)uVar10 * dVar2 + dVar11;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Z = dVar8 * (double)uVar12 * dVar2 + dVar7;
    (**(code **)(this->_padding_ + 0x338))(this,local_88);
    dVar11 = (double)local_88._0_8_ + dVar2 * (this->RecalculateVelocityValue).field0_0x0._s_0.X;
    dVar9 = (double)local_88._8_8_ + dVar2 * (this->RecalculateVelocityValue).field0_0x0._s_0.Y;
    local_78 = local_78 + dVar2 * (this->RecalculateVelocityValue).field0_0x0._s_0.Z;
    uVar5 = SUB84(dVar9,0);
    uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
    local_88._8_4_ = uVar5;
    local_88._0_8_ = dVar11;
    local_88._12_4_ = uVar6;
    local_68._8_4_ = uVar5;
    local_68._0_8_ = dVar11;
    local_68._12_4_ = uVar6;
    local_58 = local_78;
    (**(code **)(this->_padding_ + 800))(this,param_1,CONCAT44(in_XMM2_Db,param_2),local_68,uVar4);
  }
  else {
    this->IsDeAccelMoveArrived = true;
  }
  return;
}

// CalculateBossVelocity @ 14bb53290

void __thiscall
UDS_RecvMoveNpcProcess::CalculateBossVelocity
          (UDS_RecvMoveNpcProcess *this,float param_1,float param_2,FDS_NetSyncData *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
      (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
     ((uVar7 = *(undefined8 *)&(param_3->VelocityVector).field0_0x0,
      uVar2 = (uint)uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar3 = (uint)((ulonglong)uVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar3,uVar2) &&
      (double)CONCAT44(uVar3,uVar2) != __real_3f1a36e2e0000000 ||
      ((uVar7 = *(undefined8 *)((longlong)&(param_3->VelocityVector).field0_0x0 + 8),
       uVar2 = (uint)uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)uVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar3,uVar2) &&
       (double)CONCAT44(uVar3,uVar2) != __real_3f1a36e2e0000000 ||
       (uVar7 = *(undefined8 *)((longlong)&(param_3->VelocityVector).field0_0x0 + 0x10),
       uVar2 = (uint)uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)uVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar3,uVar2) &&
       (double)CONCAT44(uVar3,uVar2) != __real_3f1a36e2e0000000)))))) {
    fVar9 = (param_1 + param_1) / param_2;
    if (__real_461c4000 <= fVar9) {
      fVar9 = __real_461c4000;
    }
    this->BossDeAccelValue = (param_1 + param_1) / (param_2 * param_2);
    dVar5 = (param_3->VelocityVector).field0_0x0._s_0.X;
    dVar1 = (param_3->VelocityVector).field0_0x0._s_0.Y;
    dVar4 = dVar1 * dVar1 + dVar5 * dVar5;
    if (dVar4 == __real_3ff0000000000000) {
      uVar7 = 0.0;
      uVar6 = dVar5;
      uVar8 = dVar1;
      if ((param_3->VelocityVector).field0_0x0._s_0.Z == 0.0) {
        uVar6 = (param_3->VelocityVector).field0_0x0._s_0.X;
        uVar7 = (param_3->VelocityVector).field0_0x0._s_0.Z;
        uVar8 = (param_3->VelocityVector).field0_0x0._s_0.Y;
      }
    }
    else {
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (__real_3e45798ee0000000 <= dVar4) {
        uVar6 = (__real_3ff0000000000000 / SQRT(dVar4)) * dVar5;
        uVar7 = 0.0;
        uVar8 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar4));
      }
    }
    dVar5 = (double)fVar9;
    (this->RecalculateVelocityValue).field0_0x0._s_0.X = dVar5 * (double)uVar6;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Y = dVar5 * (double)uVar8;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Z = dVar5 * (double)uVar7;
    this->IsDeAccelMoveArrived = false;
    return;
  }
  (this->RecalculateVelocityValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Y = (double)uVar6;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->BossDeAccelValue = 0.0;
  this->IsDeAccelMoveArrived = true;
  return;
}

// CalculateMaxMoveSpeed @ 14bb53460

float __thiscall
UDS_RecvMoveNpcProcess::CalculateMaxMoveSpeed(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  float fVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    return 0.0;
  }
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  fVar2 = UDS_MovementCore::GetMaxMoveSpeed(this_00);
  if ((((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) == 0x11) &&
     (__real_322bcc77 <
      (float)((uint)param_1->PatrolMoveSpeed & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = param_1->PatrolMoveSpeed;
  }
  return fVar2;
}

// CalculateNormalVelocity @ 14bb534e0

void __thiscall
UDS_RecvMoveNpcProcess::CalculateNormalVelocity
          (UDS_RecvMoveNpcProcess *this,float param_1,float param_2,TVector<double> *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
      (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
     ((dVar5 = (param_3->field0_0x0)._s_0.X,
      uVar2 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar3 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar3,uVar2) &&
      (double)CONCAT44(uVar3,uVar2) != __real_3f1a36e2e0000000 ||
      ((uVar7 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
       uVar2 = (uint)uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)uVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar3,uVar2) &&
       (double)CONCAT44(uVar3,uVar2) != __real_3f1a36e2e0000000 ||
       (uVar7 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
       uVar2 = (uint)uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)uVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar3,uVar2) &&
       (double)CONCAT44(uVar3,uVar2) != __real_3f1a36e2e0000000)))))) {
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    fVar9 = param_1 / param_2;
    if (__real_461c4000 <= param_1 / param_2) {
      fVar9 = __real_461c4000;
    }
    dVar4 = dVar1 * dVar1 + dVar5 * dVar5;
    if (dVar4 == __real_3ff0000000000000) {
      uVar7 = 0.0;
      uVar6 = dVar5;
      uVar8 = dVar1;
      if ((param_3->field0_0x0)._s_0.Z == 0.0) {
        uVar6 = (param_3->field0_0x0)._s_0.X;
        uVar7 = (param_3->field0_0x0)._s_0.Z;
        uVar8 = (param_3->field0_0x0)._s_0.Y;
      }
    }
    else {
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (__real_3e45798ee0000000 <= dVar4) {
        uVar6 = (__real_3ff0000000000000 / SQRT(dVar4)) * dVar5;
        uVar7 = 0.0;
        uVar8 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar4));
      }
    }
    dVar5 = (double)fVar9;
    (this->RecalculateVelocityValue).field0_0x0._s_0.X = dVar5 * (double)uVar6;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Y = dVar5 * (double)uVar8;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Z = dVar5 * (double)uVar7;
    return;
  }
  (this->RecalculateVelocityValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Y = (double)uVar6;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// CanUseStandRotation @ 14bb53b00

bool __thiscall
UDS_RecvMoveNpcProcess::CanUseStandRotation
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,FDS_NpcBaseTableRow *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res10 [6];
  
  uVar1 = (param_1->StateFlags).Packed;
  if (((uVar1 >> 4 & 0x7f) == 0) || ((uVar1 & 3) == 0)) {
    if (param_2->IsRotationPlace == true) {
      return true;
    }
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar2) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res10[0] = Battle;
      bVar2 = UDS_CharStateData::HasCharDetailState(this_00,local_res10);
      return !bVar2;
    }
  }
  return false;
}

// CheckRecalculateVelocity @ 14bb543f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_RecvMoveNpcProcess::CheckRecalculateVelocity
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  float fVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UObject *pUVar12;
  UDS_MovementCore *this_00;
  UDS_LogManager *pUVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auStackY_1f8 [32];
  TVector<double>_u_0 local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  dVar6 = __real_3f1a36e2e0000000;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar1 = *(undefined8 *)&(param_1->DestinationPosition).field0_0x0;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar1 = *(undefined8 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar1 = *(undefined8 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar1 = *(undefined8 *)&(param_1->PrevServerPosition).field0_0x0;
    if ((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) &&
        (uVar1 = *(undefined8 *)((longlong)&(param_1->PrevServerPosition).field0_0x0 + 8),
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (uVar1 = *(undefined8 *)((longlong)&(param_1->PrevServerPosition).field0_0x0 + 0x10),
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      dVar17 = (param_1->ServerPosition).field0_0x0._s_0.Y;
      dVar15 = (param_1->ServerPosition).field0_0x0._s_0.Z;
      (param_1->PrevServerPosition).field0_0x0._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
      (param_1->PrevServerPosition).field0_0x0._s_0.Y = dVar17;
      (param_1->PrevServerPosition).field0_0x0._s_0.Z = dVar15;
    }
    uVar2 = (param_1->StateFlags).Packed;
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (((uVar2 >> 0x23 & 3) != 0) || (pUVar12[3].field_0x6 == '\x01')) {
      (param_1->DestinationPosition).field0_0x0._s_0.Z =
           (param_1->PrevServerPosition).field0_0x0._s_0.Z;
    }
    dVar15 = (param_1->DestinationPosition).field0_0x0._s_0.Y -
             (param_1->PrevServerPosition).field0_0x0._s_0.Y;
    dVar17 = (param_1->DestinationPosition).field0_0x0._s_0.X -
             (param_1->PrevServerPosition).field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.X = dVar17;
    (param_3->field0_0x0)._s_0.Y = dVar15;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    auVar16._0_8_ = dVar15 * dVar15 + dVar17 * dVar17;
    auVar16._8_8_ = 0;
    auVar16 = sqrtpd(auVar16,auVar16);
    if (auVar16._0_8_ <= __real_3e45798ee2308c3a) {
      dVar15 = (param_1->PrevVelocityVector).field0_0x0._s_0.Y;
      (param_3->field0_0x0)._s_0.X = (param_1->PrevVelocityVector).field0_0x0._s_0.X;
      (param_3->field0_0x0)._s_0.Y = dVar15;
      (param_3->field0_0x0)._s_0.Z = (param_1->PrevVelocityVector).field0_0x0._s_0.Z;
    }
    dVar15 = (param_3->field0_0x0)._s_0.Y;
    (param_1->VelocityVector).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_1->VelocityVector).field0_0x0._s_0.Y = dVar15;
    dVar15 = (param_3->field0_0x0)._s_0.Z;
    (param_1->VelocityVector).field0_0x0._s_0.Z = dVar15;
    uVar1 = *(undefined8 *)&(param_1->VelocityVector).field0_0x0;
    if (((dVar6 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4)) ||
        (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
        dVar6 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4))) ||
       (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
       dVar6 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4))) {
      dVar17 = (param_1->VelocityVector).field0_0x0._s_0.Y;
      (param_1->PrevVelocityVector).field0_0x0._s_0.X = (param_1->VelocityVector).field0_0x0._s_0.X;
      (param_1->PrevVelocityVector).field0_0x0._s_0.Y = dVar17;
      (param_1->PrevVelocityVector).field0_0x0._s_0.Z = dVar15;
    }
    bVar8 = (**(code **)(this->_padding_ + 0x318))(this,param_1);
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffffc;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | (ulonglong)bVar8;
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar9) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_1b8._s_0);
      dVar15 = (param_1->ServerPosition).field0_0x0._s_0.Y - local_1b8._s_0.Y;
      dVar17 = (param_1->ServerPosition).field0_0x0._s_0.X - local_1b8._s_0.X;
      fVar14 = (float)(dVar15 * dVar15 + dVar17 * dVar17);
      *param_2 = fVar14;
      iVar11 = _isnan((double)fVar14);
      if (iVar11 != 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4287412895202935193>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Network\\DS_RecvMoveNpcProcess.cpp"
                           ,0x199,"false");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_198._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_198,"UDS_RecvMoveNpcProcess::CheckRecalculateVelocity",0x30,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_198.Ptr,0x19b,L"SERIN Out Of Position Gap!!");
          if ((void *)local_198._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_198._padding_);
          }
        }
        pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar12 + 0x358))(pUVar12,&param_1->ServerPosition);
      }
      fVar7 = __real_41f00000;
      fVar14 = __real_3f000000;
      (param_1->DestinationPosition).field0_0x0._s_0.Z = 490.0;
      DS_Util::ShowSyncSphere
                (&param_1->DestinationPosition,fVar7,5,&FColor::Blue,false,fVar14,'\0',0.0);
      if (__real_42c80000 < *param_2 || __real_42c80000 == *param_2) {
        dVar15 = (param_1->DestinationPosition).field0_0x0._s_0.X - local_1b8._s_0.X;
        dVar17 = (param_1->DestinationPosition).field0_0x0._s_0.Y - local_1b8._s_0.Y;
        *(double *)&param_4->field0_0x0 = dVar15;
        *(double *)((longlong)&param_4->field0_0x0 + 8) = dVar17;
        (param_4->field0_0x0)._s_0.Z = 0.0;
        if ((dVar6 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar5,
                                      SUB84(dVar15,0) & uVar4)) ||
           (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar5,
                                     SUB84(dVar17,0) & uVar4))) {
          return true;
        }
      }
    }
  }
  return false;
}

// CheckStopMove @ 14bb547f0

bool __thiscall
UDS_RecvMoveNpcProcess::CheckStopMove
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  ulong64 uVar1;
  bool bVar2;
  double local_28;
  double local_20;
  
  bVar2 = IsBossIdleMove(this,param_1);
  if (bVar2) {
    return this->IsDeAccelMoveArrived;
  }
  uVar1 = (param_1->StateFlags).Packed;
  bVar2 = (uVar1 & 3) == 0;
  if ((uVar1 & 3) == 0) {
    (**(code **)(this->_padding_ + 0x338))(this,&local_28);
    local_20 = (param_1->ServerPosition).field0_0x0._s_0.Y - local_20;
    local_28 = (param_1->ServerPosition).field0_0x0._s_0.X - local_28;
    return (float)(local_20 * local_20 + local_28 * local_28) <= __real_42c80000 && bVar2;
  }
  return bVar2;
}

// DetermineBattleMoveMode @ 14bb5dc20

EDS_MoveMode __thiscall
UDS_RecvMoveNpcProcess::DetermineBattleMoveMode(UDS_RecvMoveNpcProcess *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8[0] = Battle;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
    return bVar1 + Walk;
  }
  return Walk;
}

// DetermineRotationDirection @ 14bb5dc70

EDS_CardinalDirection __thiscall
UDS_RecvMoveNpcProcess::DetermineRotationDirection
          (UDS_RecvMoveNpcProcess *this,TRotator<double> *param_1,TRotator<double> *param_2)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  TVector<double> local_38;
  TVector<double> local_20;
  
  pTVar1 = UE::Math::TRotator<double>::Vector(param_2,&local_38);
  pTVar2 = UE::Math::TRotator<double>::Vector(param_1,&local_20);
  return (0.0 < (pTVar1->field0_0x0)._s_0.Y * (pTVar2->field0_0x0)._s_0.X -
                (pTVar2->field0_0x0)._s_0.Y * (pTVar1->field0_0x0)._s_0.X) + Left;
}

// DrawRotationDebug @ 14bb5dcd0

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
UDS_RecvMoveNpcProcess::DrawRotationDebug(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  FDS_EntityBase *pFVar1;
  TVector<double> *pTVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TRotator<double> local_48;
  TVector<double> local_30;
  
  pFVar1 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    (**(code **)(this->_padding_ + 0x340))(this,&local_48);
    local_78._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
    local_78._s_0.Y = (param_1->ServerPosition).field0_0x0._s_0.Y;
    local_78._s_0.Z =
         (param_1->ServerPosition).field0_0x0._s_0.Z +
         (double)(float)((uint)pFVar1->ScaledCapsuleHalfHeight ^
                        __xmm_80000000800000008000000080000000);
    fVar5 = pFVar1->ScaledCapsuleRadius;
    pTVar2 = UE::Math::TRotator<double>::Vector(&local_48,&local_30);
    fVar3 = fVar5 * __real_41200000;
    if (__real_44a28000 <= fVar3) {
      fVar3 = __real_44a28000;
    }
    dVar4 = (double)fVar3;
    local_60._s_0.X = dVar4 * (pTVar2->field0_0x0)._s_0.X + local_78._s_0.X;
    local_60._s_0.Y = dVar4 * (pTVar2->field0_0x0)._s_0.Y + local_78._s_0.Y;
    local_60._s_0.Z = dVar4 * (pTVar2->field0_0x0)._s_0.Z + local_78._s_0.Z;
    fVar5 = fVar5 * __real_3dcccccd;
    if (__real_41a00000 <= fVar5) {
      fVar5 = __real_41a00000;
    }
    DS_Util::ShowSyncLine
              ((TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,&FColor::Blue,
               false,__real_3dcccccd,'\0',fVar5);
  }
  return;
}

// FinalizeRotationAction @ 14bb61c60

void __thiscall
UDS_RecvMoveNpcProcess::FinalizeRotationAction(UDS_RecvMoveNpcProcess *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  *param_1 = false;
  UDS_NPCBattleData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    *(undefined4 *)&pUVar2[2].field_0xc = 0xffffffff;
  }
  return;
}

// FindRotationIndex @ 14bb62c40

int __thiscall
UDS_RecvMoveNpcProcess::FindRotationIndex
          (UDS_RecvMoveNpcProcess *this,FDS_NpcBaseTableRow *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (param_1->RotationPlaceAngle).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->RotationPlaceAngle).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (param_2 <= (float)*(int *)((param_1->RotationPlaceAngle).AllocatorInstance.Data + lVar6))
      break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (param_1->RotationPlaceAngle).ArrayNum);
  }
  uVar4 = (param_1->RotationPlaceAngle).ArrayNum - 1;
  if ((int)uVar5 < (int)uVar4) {
    uVar4 = uVar5;
  }
  return uVar4;
}

// HandleActiveMovement @ 14bb69470

void __thiscall
UDS_RecvMoveNpcProcess::HandleActiveMovement
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  (**(code **)(this->_padding_ + 0x310))(this,0x82,0x83);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// HandleStopMovement @ 14bb698e0

void __thiscall
UDS_RecvMoveNpcProcess::HandleStopMovement(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(this->_padding_ + 0x310))(this,0x83,0x82);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->TransformValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->TransformValue).field0_0x0._s_0.Y = (double)uVar1;
  (param_1->TransformValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Initialize @ 14bb6dd80

void __thiscall
UDS_RecvMoveNpcProcess::Initialize
          (UDS_RecvMoveNpcProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  double dVar1;
  FDS_NpcBaseTableRow *pFVar2;
  float fVar3;
  
  UDS_RecvProcessBase::Initialize((UDS_RecvProcessBase *)this,param_1);
  pFVar2 = FDS_NpcBaseTableRow::GetRef(this->_padding_,true);
  fVar3 = (float)pFVar2->WalkSpeed;
  this->npcWalkSpeed = fVar3;
  dVar1 = pFVar2->RunSpeed;
  this->npcRunSpeed = (float)dVar1;
  this->npcJogSpeed = ((float)dVar1 - fVar3) * __real_3f000000 + fVar3;
  return;
}

// IsActiveNpcRotationAction @ 14bb6dff0

bool __thiscall
UDS_RecvMoveNpcProcess::IsActiveNpcRotationAction
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2,float *param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar1 = __real_4066800000000000;
  dVar3 = (this->LastNpcRotation).Yaw - (param_1->EntityDirection).Yaw;
  uVar4 = SUB84(__real_c066800000000000,0);
  uVar5 = (undefined4)((ulonglong)__real_c066800000000000 >> 0x20);
  if (__real_c066800000000000 <= dVar3) {
    uVar4 = SUB84(__real_4066800000000000,0);
    uVar5 = (undefined4)((ulonglong)__real_4066800000000000 >> 0x20);
    if (dVar3 <= __real_4066800000000000) goto LAB_14bb6e086;
    dVar3 = FGenericPlatformMath::Fmod(dVar3 - __real_4066800000000000,__real_4076800000000000);
    if (dVar3 != 0.0) {
      dVar3 = dVar3 - dVar1;
      goto LAB_14bb6e086;
    }
  }
  else {
    dVar3 = FGenericPlatformMath::Fmod(__real_c066800000000000 - dVar3,__real_4076800000000000);
    if (dVar3 != 0.0) {
      dVar3 = __real_4066800000000000 - dVar3;
      goto LAB_14bb6e086;
    }
  }
  dVar3 = (double)CONCAT44(uVar5,uVar4);
LAB_14bb6e086:
  fVar2 = (float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  *param_3 = fVar2;
  if ((param_2 < fVar2) && (__real_322bcc77 < fVar2)) {
    return true;
  }
  return false;
}

// IsBossIdleMove @ 14bb6e560

bool __thiscall
UDS_RecvMoveNpcProcess::IsBossIdleMove(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_NpcBaseTableRow *pFVar2;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [8];
  
  pFVar2 = FDS_NpcBaseTableRow::Get(this->_padding_,true);
  if ((pFVar2 != (FDS_NpcBaseTableRow *)0x0) && (pFVar2->NpcBattleGrade == Boss)) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar1) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8[0] = Battle;
      bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
      return !bVar1;
    }
    return true;
  }
  return false;
}

// NewNpcMove @ 14bb712c0

void __thiscall
UDS_RecvMoveNpcProcess::NewNpcMove(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  UDS_MovementCore *this_00;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float local_res18 [2];
  double local_res20;
  double dStack_f0;
  double local_e8;
  double dStack_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  double local_98;
  
  local_b0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res18[0] = 0.0;
  local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar3 = CheckRecalculateVelocity
                    (this,param_1,local_res18,(TVector<double> *)&local_b0._s_0,
                     (TVector<double> *)&local_c8._s_0);
  if (!bVar3) {
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  fVar15 = __real_322bcc77;
  fVar5 = 0.0;
  if (bVar3) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar5 = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    if ((((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) == 0x11) &&
       (fVar15 < (float)((uint)param_1->PatrolMoveSpeed & __xmm_7fffffff7fffffff7fffffff7fffffff)))
    {
      fVar5 = param_1->PatrolMoveSpeed;
    }
  }
  dStack_d8 = local_c8._s_0.Y;
  uVar12 = local_c8._s_0.X;
  uVar14 = SUB84(local_c8._s_0.X,0);
  uVar16 = SUB84(local_c8._s_0.Y,0);
  auVar7._0_8_ = local_c8._s_0.Y * local_c8._s_0.Y;
  auVar7._8_8_ = 0;
  param_1->ClientMoveSpeed = fVar5;
  dVar10 = local_c8._s_0.X * local_c8._s_0.X + auVar7._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar10;
  auVar8 = sqrtpd(auVar7,auVar8);
  fVar13 = (float)auVar8._0_8_;
  auVar9._0_8_ = local_b0._s_0.Y * local_b0._s_0.Y;
  auVar9._8_8_ = 0;
  auVar11._0_8_ = local_b0._s_0.X * local_b0._s_0.X + auVar9._0_8_;
  auVar11._8_8_ = 0;
  auVar8 = sqrtpd(auVar9,auVar11);
  fVar5 = (float)auVar8._0_8_ / fVar5;
  dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
  fVar17 = (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  this->MoveEndTime = dVar6 + (double)fVar5;
  bVar3 = IsBossIdleMove(this,param_1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (!bVar3) {
    if (((fVar17 <= fVar15) || (fVar13 <= fVar15)) ||
       (((double)CONCAT44((uint)((ulonglong)uVar12 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar14 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000 &&
        (((double)CONCAT44((uint)((ulonglong)dStack_d8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000 &&
         ((double)CONCAT44((uint)((ulonglong)local_c8._16_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_c8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          <= __real_3f1a36e2e0000000)))))) {
      (this->RecalculateVelocityValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->RecalculateVelocityValue).field0_0x0._s_0.Y = (double)uVar2;
      (this->RecalculateVelocityValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14bb71735;
    }
    fVar15 = fVar13 / fVar5;
    if (__real_461c4000 <= fVar13 / fVar5) {
      fVar15 = __real_461c4000;
    }
    if (dVar10 == __real_3ff0000000000000) {
      if (local_c8._s_0.Z == 0.0) {
        local_d0 = local_c8._s_0.Z;
        local_c8._s_0.X = (double)uVar12;
        local_c8._s_0.Y = dStack_d8;
      }
      else {
LAB_14bb716d7:
        local_d0 = 0.0;
      }
    }
    else {
      if (__real_3e45798ee0000000 <= dVar10) {
        local_98 = __real_3ff0000000000000 / SQRT(dVar10);
        dStack_d8 = dStack_d8 * local_98;
        uVar12 = (double)uVar12 * local_98;
        goto LAB_14bb716d7;
      }
      dStack_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    dVar10 = (double)fVar15;
    (this->RecalculateVelocityValue).field0_0x0._s_0.X = dVar10 * (double)uVar12;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Y = dVar10 * dStack_d8;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Z = dVar10 * local_d0;
    goto LAB_14bb71735;
  }
  if (((fVar17 <= fVar15) || (fVar13 <= fVar15)) ||
     ((uVar12 = *(undefined8 *)&(param_1->VelocityVector).field0_0x0,
      (double)CONCAT44((uint)((ulonglong)uVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000 &&
      ((uVar12 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
       (double)CONCAT44((uint)((ulonglong)uVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000 &&
       (uVar12 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
       (double)CONCAT44((uint)((ulonglong)uVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)))))) {
    (this->RecalculateVelocityValue).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Y = (double)uVar2;
    (this->RecalculateVelocityValue).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->BossDeAccelValue = 0.0;
    this->IsDeAccelMoveArrived = true;
    goto LAB_14bb71735;
  }
  fVar15 = (fVar13 + fVar13) / fVar5;
  if (__real_461c4000 <= fVar15) {
    fVar15 = __real_461c4000;
  }
  this->BossDeAccelValue = (fVar13 + fVar13) / (fVar5 * fVar5);
  uVar12 = (param_1->VelocityVector).field0_0x0._s_0.X;
  dStack_f0 = (param_1->VelocityVector).field0_0x0._s_0.Y;
  dVar10 = dStack_f0 * dStack_f0 + (double)uVar12 * (double)uVar12;
  if (dVar10 == __real_3ff0000000000000) {
    if ((param_1->VelocityVector).field0_0x0._s_0.Z == 0.0) {
      dStack_f0 = (param_1->VelocityVector).field0_0x0._s_0.Y;
      local_e8 = (param_1->VelocityVector).field0_0x0._s_0.Z;
      uVar12 = (param_1->VelocityVector).field0_0x0._s_0.X;
    }
    else {
LAB_14bb71576:
      local_e8 = 0.0;
    }
  }
  else {
    if (__real_3e45798ee0000000 <= dVar10) {
      local_res20 = __real_3ff0000000000000 / SQRT(dVar10);
      dStack_f0 = dStack_f0 * local_res20;
      uVar12 = (double)uVar12 * local_res20;
      goto LAB_14bb71576;
    }
    dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  dVar10 = (double)fVar15;
  (this->RecalculateVelocityValue).field0_0x0._s_0.X = dVar10 * (double)uVar12;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Y = dVar10 * dStack_f0;
  (this->RecalculateVelocityValue).field0_0x0._s_0.Z = dVar10 * local_e8;
  this->IsDeAccelMoveArrived = false;
LAB_14bb71735:
  iVar4 = _isnan((this->RecalculateVelocityValue).field0_0x0._s_0.X);
  if (((iVar4 == 0) &&
      (iVar4 = _isnan((this->RecalculateVelocityValue).field0_0x0._s_0.Y), iVar4 == 0)) &&
     (iVar4 = _isnan((this->RecalculateVelocityValue).field0_0x0._s_0.Z), iVar4 == 0)) {
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4287412895202935616>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Network\\DS_RecvMoveNpcProcess.cpp"
                     ,0x340,"false");
  if (!bVar3) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// NpcVelocity @ 14bb717f0

void __thiscall
UDS_RecvMoveNpcProcess::NpcVelocity
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_XMM2_Db;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  
  (**(code **)(this->_padding_ + 0x338))(this,&local_98);
  uVar1 = (param_1->StateFlags).Packed;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (((uVar1 >> 0x23 & 3) == 0) && (pUVar2[3].field_0x6 == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  uVar8 = *(undefined8 *)&(this->RecalculateVelocityValue).field0_0x0;
  if ((((double)CONCAT44((uint)((ulonglong)uVar8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar8 = *(undefined8 *)((longlong)&(this->RecalculateVelocityValue).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar8 = *(undefined8 *)((longlong)&(this->RecalculateVelocityValue).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar8 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
LAB_14bb7197c:
    local_78 = local_98;
    dStack_70 = dStack_90;
    local_68 = local_88;
    (**(code **)(this->_padding_ + 800))(this,param_1,CONCAT44(in_XMM2_Db,param_2),&local_78,uVar3);
    return;
  }
  dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar7 = this->MoveEndTime;
  if (((__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
      (dVar4 <= dVar7)) &&
     (dVar7 = (this->RecalculateVelocityValue).field0_0x0._s_0.X,
     dVar4 = (this->RecalculateVelocityValue).field0_0x0._s_0.Y,
     dVar4 * dVar4 + dVar7 * dVar7 <= __real_4197d78400000000)) {
    dVar7 = (this->RecalculateVelocityValue).field0_0x0._s_0.Y;
    (param_1->TransformValue).field0_0x0._s_0.X = (this->RecalculateVelocityValue).field0_0x0._s_0.X
    ;
    (param_1->TransformValue).field0_0x0._s_0.Y = dVar7;
    fVar13 = param_2;
    if (__real_3dcccccd <= param_2) {
      fVar13 = __real_3dcccccd;
    }
    (param_1->TransformValue).field0_0x0._s_0.Z = (this->RecalculateVelocityValue).field0_0x0._s_0.Z
    ;
    dVar7 = (double)fVar13;
    local_98 = local_98 + dVar7 * (this->RecalculateVelocityValue).field0_0x0._s_0.X;
    dStack_90 = dStack_90 + dVar7 * (this->RecalculateVelocityValue).field0_0x0._s_0.Y;
    local_88 = local_88 + dVar7 * (this->RecalculateVelocityValue).field0_0x0._s_0.Z;
    goto LAB_14bb7197c;
  }
  dVar7 = (param_1->DestinationPosition).field0_0x0._s_0.X;
  dVar4 = (param_1->DestinationPosition).field0_0x0._s_0.Y;
  dVar9 = dVar7 - local_98;
  dVar11 = dVar4 - dStack_90;
  auVar5._0_8_ = dVar9 * dVar9;
  auVar5._8_8_ = 0;
  auVar6._0_8_ = dVar11 * dVar11 + auVar5._0_8_;
  auVar6._8_8_ = 0;
  auVar5 = sqrtpd(auVar5,auVar6);
  if ((float)auVar5._0_8_ <= __real_38d1b717) {
    return;
  }
  fVar13 = param_2 * param_1->ClientMoveSpeed;
  if ((float)auVar5._0_8_ <= fVar13) goto LAB_14bb71adc;
  uVar8 = (param_1->DestinationPosition).field0_0x0._s_0.Z - local_88;
  if (auVar6._0_8_ == __real_3ff0000000000000) {
    uVar10 = dVar9;
    uVar12 = dVar11;
    if ((double)uVar8 != 0.0) {
LAB_14bb71a99:
      uVar8 = 0.0;
      uVar10 = dVar9;
      uVar12 = dVar11;
    }
  }
  else {
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= auVar6._0_8_) {
      dVar9 = dVar9 * (__real_3ff0000000000000 / SQRT(auVar6._0_8_));
      dVar11 = dVar11 * (__real_3ff0000000000000 / SQRT(auVar6._0_8_));
      goto LAB_14bb71a99;
    }
  }
  dVar4 = (double)fVar13;
  local_88 = local_88 + dVar4 * (double)uVar8;
  dVar7 = local_98 + dVar4 * (double)uVar10;
  dVar4 = dStack_90 + dVar4 * (double)uVar12;
LAB_14bb71adc:
  dStack_90 = dVar4;
  local_98 = dVar7;
  local_78 = local_98;
  dStack_70 = dStack_90;
  local_68 = local_88;
  (**(code **)(this->_padding_ + 800))(this,param_1,CONCAT44(in_XMM2_Db,param_2),&local_78,uVar3);
  return;
}

// OnEnter @ 14bb734a0

void __thiscall
UDS_RecvMoveNpcProcess::OnEnter(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar2;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (param_1->PrevEntityDirection).Yaw;
  (this->LastNpcRotation).Pitch = (param_1->PrevEntityDirection).Pitch;
  (this->LastNpcRotation).Yaw = dVar1;
  (this->LastNpcRotation).Roll = (param_1->PrevEntityDirection).Roll;
  return;
}

// OnExit @ 14bb73720

void __thiscall
UDS_RecvMoveNpcProcess::OnExit(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->NowPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (param_1->NowPosition).field0_0x0._s_0.Y = (double)uVar1;
  (param_1->NowPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->PrevPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->PrevPosition).field0_0x0._s_0.Y = (double)uVar1;
  (param_1->PrevPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// PostProcessData @ 14bb7e480

void __thiscall
UDS_RecvMoveNpcProcess::PostProcessData
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  ulonglong uVar1;
  EDS_MoveMode EVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  UDS_RecvMoveBaseProcess::PostProcessData((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  uVar1 = (param_1->StateFlags).Packed;
  uVar3 = uVar1 >> 4;
  EVar2 = (EDS_MoveMode)uVar3 & 0x7f;
  if ((uVar3 & 0x7f) == 0) {
    dVar4 = (param_1->PrevServerPosition).field0_0x0._s_0.Y -
            (param_1->ServerPosition).field0_0x0._s_0.Y;
    dVar5 = (param_1->PrevServerPosition).field0_0x0._s_0.X -
            (param_1->ServerPosition).field0_0x0._s_0.X;
    uVar1 = uVar1 >> 0x12;
    EVar2 = (EDS_MoveMode)uVar1 & 0x7f;
    if ((__real_42c80000 < (float)(dVar4 * dVar4 + dVar5 * dVar5)) ||
       (dVar5 = (param_1->PrevDestinationPosition).field0_0x0._s_0.X -
                (param_1->DestinationPosition).field0_0x0._s_0.X,
       dVar4 = (param_1->PrevDestinationPosition).field0_0x0._s_0.Y -
               (param_1->DestinationPosition).field0_0x0._s_0.Y,
       __real_42c80000 < (float)(dVar5 * dVar5 + dVar4 * dVar4))) {
      if (((uVar1 & 0x7f) == 0) || (EVar2 == SkillMode)) {
        EVar2 = DetermineBattleMoveMode(this);
      }
    }
    else {
      EVar2 = Idle;
    }
  }
  ApplyMoveMode(this,param_1,EVar2);
  NewNpcMove(this,param_1);
  return;
}

// ProcessMoveMode @ 14bb7ee00

void __thiscall
UDS_RecvMoveNpcProcess::ProcessMoveMode(UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  EDS_MoveMode EVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = (param_1->StateFlags).Packed;
  uVar3 = uVar1 >> 4;
  EVar2 = (EDS_MoveMode)uVar3 & 0x7f;
  if ((uVar3 & 0x7f) == 0) {
    dVar4 = (param_1->PrevServerPosition).field0_0x0._s_0.Y -
            (param_1->ServerPosition).field0_0x0._s_0.Y;
    dVar5 = (param_1->PrevServerPosition).field0_0x0._s_0.X -
            (param_1->ServerPosition).field0_0x0._s_0.X;
    uVar1 = uVar1 >> 0x12;
    EVar2 = (EDS_MoveMode)uVar1 & 0x7f;
    if ((__real_42c80000 < (float)(dVar4 * dVar4 + dVar5 * dVar5)) ||
       (dVar5 = (param_1->PrevDestinationPosition).field0_0x0._s_0.X -
                (param_1->DestinationPosition).field0_0x0._s_0.X,
       dVar4 = (param_1->PrevDestinationPosition).field0_0x0._s_0.Y -
               (param_1->DestinationPosition).field0_0x0._s_0.Y,
       __real_42c80000 < (float)(dVar5 * dVar5 + dVar4 * dVar4))) {
      if (((uVar1 & 0x7f) == 0) || (EVar2 == SkillMode)) {
        EVar2 = DetermineBattleMoveMode(this);
      }
    }
    else {
      EVar2 = Idle;
    }
  }
  ApplyMoveMode(this,param_1,EVar2);
  return;
}

// ProcessRotationPlace @ 14bb7eed0

void __thiscall
UDS_RecvMoveNpcProcess::ProcessRotationPlace
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2,
          FDS_NpcBaseTableRow *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TQuat<double> *pTVar10;
  TQuat<double> *pTVar11;
  TRotator<double> *pTVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  FWeakObjectPtr local_res8;
  TQuat<double> local_c8;
  TQuat<double> local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  TQuat<double> local_68 [2];
  
  dVar16 = __real_4066800000000000;
  dVar19 = (this->LastNpcRotation).Yaw - (param_1->EntityDirection).Yaw;
  uVar23 = SUB84(__real_c066800000000000,0);
  uVar24 = (undefined4)((ulonglong)__real_c066800000000000 >> 0x20);
  iVar2 = param_3->RotationPlaceMinAngle;
  if (__real_c066800000000000 <= dVar19) {
    uVar23 = SUB84(__real_4066800000000000,0);
    uVar24 = (undefined4)((ulonglong)__real_4066800000000000 >> 0x20);
    if (dVar19 <= __real_4066800000000000) goto LAB_14bb7ef86;
    dVar19 = FGenericPlatformMath::Fmod(dVar19 - __real_4066800000000000,__real_4076800000000000);
    if (dVar19 != 0.0) {
      dVar19 = dVar19 - dVar16;
      goto LAB_14bb7ef86;
    }
  }
  else {
    dVar19 = FGenericPlatformMath::Fmod(__real_c066800000000000 - dVar19,__real_4076800000000000);
    if (dVar19 != 0.0) {
      dVar19 = __real_4066800000000000 - dVar19;
      goto LAB_14bb7ef86;
    }
  }
  dVar19 = (double)CONCAT44(uVar24,uVar23);
LAB_14bb7ef86:
  local_res8.ObjectIndex =
       (int)(float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (((float)iVar2 < (float)local_res8.ObjectIndex) &&
     (__real_322bcc77 < (float)local_res8.ObjectIndex)) {
    this->IsRotationAction = true;
    this->RotationDeltaTime = 0.0;
    StartNpcRotationAction
              (this,param_1,param_3,(float *)&local_res8,&this->RotationEndTime,
               &this->RotationRealEndTime);
  }
  if (this->IsRotationAction == true) {
    fVar22 = param_2 + this->RotationDeltaTime;
    fVar1 = this->RotationEndTime;
    this->RotationDeltaTime = fVar22;
    if (fVar1 < fVar22) {
      if (this->RotationRealEndTime <= fVar22 && fVar22 != this->RotationRealEndTime) {
        this->IsRotationAction = false;
        UDS_NPCBattleData::GetData((ulong64)&local_res8);
        bVar9 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar9) {
          pUVar13 = FWeakObjectPtr::Get(&local_res8);
          *(undefined4 *)&pUVar13[2].field_0xc = 0xffffffff;
        }
      }
    }
    else {
      pTVar10 = UE::Math::TRotator<double>::Quaternion(&this->EndRotation,&local_a8);
      pTVar11 = UE::Math::TRotator<double>::Quaternion(&this->StartRotation,&local_c8);
      pTVar10 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (local_68,pTVar11,pTVar10,(double)(fVar22 / fVar1));
      dVar5 = pTVar10->X;
      dVar6 = pTVar10->Y;
      dVar7 = pTVar10->Z;
      dVar8 = pTVar10->W;
      pcVar3 = *(code **)(this->_padding_ + 0x330);
      dVar16 = dVar7 * dVar7 + dVar5 * dVar5;
      dVar18 = dVar8 * dVar8 + dVar6 * dVar6;
      dVar19 = dVar18 + dVar16;
      dVar16 = dVar16 + dVar18;
      auVar20._8_4_ = SUB84(dVar16,0);
      auVar20._0_8_ = dVar19;
      auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar20 = sqrtpd(in_XMM4,auVar20);
      uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar19);
      uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
      uVar25 = (uint)(uVar14 >> 0x20);
      uVar26 = (uint)(uVar15 >> 0x20);
      auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
      local_88._0_8_ = uVar14 & (ulonglong)(auVar21._0_8_ * dVar5);
      uVar4 = uVar15 & (ulonglong)(auVar21._8_8_ * dVar6);
      local_88._8_4_ = (undefined4)uVar4;
      local_88._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar21._4_4_ =
           ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar21._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar21._12_4_ =
           ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_88 = local_88 | auVar21;
      auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
      local_78._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
      ;
      local_78._4_4_ =
           ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_78._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
      ;
      local_78._12_4_ =
           ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar17._0_8_ = (ulonglong)(auVar20._0_8_ * dVar7) & uVar14;
      uVar15 = (ulonglong)(auVar20._8_8_ * dVar8) & uVar15;
      auVar17._8_4_ = (undefined4)uVar15;
      auVar17._12_4_ = (undefined4)(uVar15 >> 0x20);
      local_78 = local_78 | auVar17;
      pTVar12 = UE::Math::TQuat<double>::Rotator
                          ((TQuat<double> *)local_88,(TRotator<double> *)&local_a8);
      local_c8.X._0_4_ = *(undefined4 *)&pTVar12->Pitch;
      local_c8.X._4_4_ = *(undefined4 *)((longlong)&pTVar12->Pitch + 4);
      local_c8.Y._0_4_ = *(undefined4 *)&pTVar12->Yaw;
      local_c8.Y._4_4_ = *(undefined4 *)((longlong)&pTVar12->Yaw + 4);
      local_c8.Z = pTVar12->Roll;
      (*pcVar3)(this,&local_c8);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x360))(this,&local_c8,param_2,&param_1->EntityDirection);
    local_a8.X._0_4_ = local_c8.X._0_4_;
    local_a8.X._4_4_ = local_c8.X._4_4_;
    local_a8.Y._0_4_ = local_c8.Y._0_4_;
    local_a8.Y._4_4_ = local_c8.Y._4_4_;
    local_a8.Z = local_c8.Z;
    (**(code **)(this->_padding_ + 0x330))(this,&local_a8);
  }
  return;
}

// RecvSyncTick @ 14bb7fa60

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
UDS_RecvMoveNpcProcess::RecvSyncTick
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  FDS_EntityBase *pFVar8;
  UDS_MovementCore *this_00;
  UObject *pUVar9;
  UDS_EntityData *this_01;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined4 in_XMM2_Db;
  double dVar13;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar6) {
    pFVar8 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
    if (pFVar8 != (FDS_EntityBase *)0x0) {
      cVar7 = (**(code **)(this->_padding_ + 0x308))(this,param_1,CONCAT44(in_XMM2_Db,param_2));
      pcVar2 = *(code **)(this->_padding_ + 0x310);
      if (cVar7 == '\x01') {
        (*pcVar2)(this,0x83,0x82);
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        (param_1->TransformValue).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (param_1->TransformValue).field0_0x0._s_0.Y = (double)uVar1;
        (param_1->TransformValue).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        (*pcVar2)(this,0x82,0x83);
        *(undefined4 *)&this->_padding_ = 0;
        (**(code **)(this->_padding_ + 0x358))(this,param_1,CONCAT44(in_XMM2_Db,param_2));
      }
      dVar5 = __real_3f1a36e2e0000000;
      uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar1 = *(undefined8 *)&(param_1->NowPosition).field0_0x0;
      uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
            (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) ||
          (uVar1 = *(undefined8 *)((longlong)&(param_1->NowPosition).field0_0x0 + 8),
          uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
          (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)) ||
         (uVar1 = *(undefined8 *)((longlong)&(param_1->NowPosition).field0_0x0 + 0x10),
         uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
         (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)) {
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_68._s_0);
        local_40 = (param_1->NowPosition).field0_0x0._s_0.Z;
        local_50 = (param_1->NowPosition).field0_0x0._s_0.X;
        dStack_48 = (param_1->NowPosition).field0_0x0._s_0.Y;
        dVar13 = local_40 - (double)(float)local_68._s_0.Z;
        if (__real_3e45798ee0000000 <= dVar13 * dVar13) {
          dVar12 = (double)(param_2 * __real_41200000);
          if (__real_3ff0000000000000 <= (double)(param_2 * __real_41200000)) {
            dVar12 = __real_3ff0000000000000;
          }
          if (dVar12 <= 0.0) {
            dVar12 = 0.0;
          }
          local_40 = dVar12 * dVar13 + (double)(float)local_68._s_0.Z;
        }
        uVar10 = SUB84(local_68._s_0.X - local_50,0) & uVar3;
        uVar11 = (uint)((ulonglong)(local_68._s_0.X - local_50) >> 0x20) & uVar4;
        if (((dVar5 <= (double)CONCAT44(uVar11,uVar10) && (double)CONCAT44(uVar11,uVar10) != dVar5)
            || (uVar10 = SUB84(local_68._s_0.Y - dStack_48,0) & uVar3,
               uVar11 = (uint)((ulonglong)(local_68._s_0.Y - dStack_48) >> 0x20) & uVar4,
               dVar5 <= (double)CONCAT44(uVar11,uVar10) && (double)CONCAT44(uVar11,uVar10) != dVar5)
            ) || (dVar5 < (double)CONCAT44((uint)((ulonglong)(local_68._s_0.Z - local_40) >> 0x20) &
                                           uVar4,SUB84(local_68._s_0.Z - local_40,0) & uVar3))) {
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          (**(code **)(*(longlong *)pUVar9 + 0x358))(pUVar9,&local_50);
        }
      }
      UpdateNpcRotation(this,param_1,param_2);
      this_01 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_EntityData::SetMoveMode(this_01,this->FinalMoveMode);
    }
  }
  return;
}

// SaveRotationData @ 14bb87a20

void __thiscall
UDS_RecvMoveNpcProcess::SaveRotationData
          (UDS_RecvMoveNpcProcess *this,int param_1,EDS_CardinalDirection param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  UDS_NPCBattleData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    pUVar2[2].field_0x10 = param_2;
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    *(int *)&pUVar2[2].field_0xc = param_1;
  }
  return;
}

// SetRotationTiming @ 14bb8c580

void __thiscall
UDS_RecvMoveNpcProcess::SetRotationTiming
          (UDS_RecvMoveNpcProcess *this,FDS_NpcBaseTableRow *param_1,int param_2,float *param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_2 < 0) || ((param_1->NonBattleRotationPlaceTime).ArrayNum <= param_2)) {
    if (param_2 < 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    if (param_2 < (param_1->NonBattleRotationPlaceTime).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_3 = *(float *)((param_1->NonBattleRotationPlaceTime).AllocatorInstance.Data +
                         (longlong)param_2 * 4);
  }
  if (param_2 < (param_1->NonBattleRotationPlaceEndTime).ArrayNum) {
    uVar3 = 0;
    if (param_2 < (param_1->NonBattleRotationPlaceEndTime).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_4 = *(float *)((param_1->NonBattleRotationPlaceEndTime).AllocatorInstance.Data +
                         (longlong)param_2 * 4);
  }
  return;
}

// StartNpcRotationAction @ 14bb91410

void __thiscall
UDS_RecvMoveNpcProcess::StartNpcRotationAction
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,FDS_NpcBaseTableRow *param_2,
          float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  UObject *pUVar10;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FWeakObjectPtr local_res8;
  TVector<double> local_88;
  TVector<double> local_70;
  TRotator<double> local_58 [2];
  
  dVar3 = (this->LastNpcRotation).Yaw;
  dVar2 = (this->LastNpcRotation).Roll;
  uVar12 = 0;
  (this->StartRotation).Pitch = (this->LastNpcRotation).Pitch;
  (this->StartRotation).Yaw = dVar3;
  (this->StartRotation).Roll = dVar2;
  dVar2 = (param_1->EntityDirection).Yaw;
  (this->EndRotation).Pitch = (param_1->EntityDirection).Pitch;
  (this->EndRotation).Yaw = dVar2;
  (this->EndRotation).Roll = (param_1->EntityDirection).Roll;
  fVar1 = *param_3;
  if (0 < (param_2->RotationPlaceAngle).ArrayNum) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar12 < (param_2->RotationPlaceAngle).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (fVar1 <= (float)*(int *)((param_2->RotationPlaceAngle).AllocatorInstance.Data + lVar14))
      break;
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 4;
    } while ((int)uVar12 < (param_2->RotationPlaceAngle).ArrayNum);
  }
  uVar13 = (param_2->RotationPlaceAngle).ArrayNum - 1;
  if ((int)uVar12 < (int)uVar13) {
    uVar13 = uVar12;
  }
  pTVar8 = UE::Math::TRotator<double>::Vector(&this->EndRotation,&local_88);
  pTVar9 = UE::Math::TRotator<double>::Vector(&this->StartRotation,&local_70);
  dVar2 = (pTVar8->field0_0x0)._s_0.Y;
  dVar3 = (pTVar9->field0_0x0)._s_0.Y;
  dVar4 = (pTVar8->field0_0x0)._s_0.X;
  dVar5 = (pTVar9->field0_0x0)._s_0.X;
  UDS_NPCBattleData::GetData((ulong64)&local_res8);
  bVar7 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar7) {
    pUVar10 = FWeakObjectPtr::Get(&local_res8);
    pUVar10[2].field_0x10 = (0.0 < dVar2 * dVar5 - dVar3 * dVar4) + '\x01';
    pUVar10 = FWeakObjectPtr::Get(&local_res8);
    *(uint *)&pUVar10[2].field_0xc = uVar13;
  }
  if (((int)uVar13 < 0) || ((param_2->NonBattleRotationPlaceTime).ArrayNum <= (int)uVar13)) {
    if ((int)uVar13 < 0) goto LAB_14bb91673;
  }
  else {
    uVar12 = 0;
    if ((int)uVar13 < (param_2->NonBattleRotationPlaceTime).ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *param_4 = *(float *)((param_2->NonBattleRotationPlaceTime).AllocatorInstance.Data +
                         (longlong)(int)uVar13 * 4);
  }
  if ((int)uVar13 < (param_2->NonBattleRotationPlaceEndTime).ArrayNum) {
    uVar12 = 0;
    if ((int)uVar13 < (param_2->NonBattleRotationPlaceEndTime).ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *param_5 = *(float *)((param_2->NonBattleRotationPlaceEndTime).AllocatorInstance.Data +
                         (longlong)(int)uVar13 * 4);
  }
LAB_14bb91673:
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar7) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar11 = UDS_MovementCore::GetActorRotation(this_00,local_58);
    dVar2 = pTVar11->Yaw;
    (this->StartRotation).Pitch = pTVar11->Pitch;
    (this->StartRotation).Yaw = dVar2;
    (this->StartRotation).Roll = pTVar11->Roll;
  }
  return;
}

// StopMoveAction @ 14bb91d90

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
UDS_RecvMoveNpcProcess::StopMoveAction
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UDS_InputData *this_00;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  pFVar4 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((pFVar4 == (FDS_EntityBase *)0x0) ||
     (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar1)) {
    bVar1 = false;
  }
  else {
    (**(code **)(this->_padding_ + 0x338))(this,&local_50);
    bVar1 = false;
    cVar2 = (**(code **)(this->_padding_ + 0x300))(this,param_1,param_2);
    if (cVar2 == '\x01') {
      bVar1 = UDS_RecvMoveBaseProcess::ShouldCheckLanding((UDS_RecvMoveBaseProcess *)this,param_1);
      if (bVar1) {
        DS_Util::SetSyncLocation
                  (this->_padding_,(TVector<double> *)&local_68._s_0,&param_1->ServerPosition,true);
        local_38 = local_68._0_4_;
        uStack_34 = local_68._4_4_;
        uStack_30 = local_68._8_4_;
        uStack_2c = local_68._12_4_;
        local_40 = local_68._s_0.Z;
        local_50 = local_68._0_4_;
        uStack_4c = local_68._4_4_;
        uStack_48 = local_68._8_4_;
        uStack_44 = local_68._12_4_;
        local_28 = local_68._s_0.Z;
        (**(code **)(this->_padding_ + 800))(this,param_1,param_2,&local_38,1);
      }
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if (bVar1) {
        this->FinalMoveMode = Idle;
      }
      bVar1 = true;
    }
    (**(code **)(pFVar4->_padding_ + 0x1b8))(pFVar4,&local_res20);
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      this_00 = (UDS_InputData *)FWeakObjectPtr::Get(&local_res20);
      UDS_InputData::SetIsActiveInput(this_00,(bool)(bVar1 ^ 1));
    }
  }
  return bVar1;
}

// UpdateActorLocation @ 14bb962a0

void __thiscall
UDS_RecvMoveNpcProcess::UpdateActorLocation
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  UDS_MovementCore *this_00;
  UObject *pUVar5;
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  
  dVar4 = __real_3f1a36e2e0000000;
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar1 = *(undefined8 *)&(param_1->NowPosition).field0_0x0;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar1 = *(undefined8 *)((longlong)&(param_1->NowPosition).field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar1 = *(undefined8 *)((longlong)&(param_1->NowPosition).field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_68._s_0);
    local_40 = (param_1->NowPosition).field0_0x0._s_0.Z;
    local_50 = (param_1->NowPosition).field0_0x0._s_0.X;
    dStack_48 = (param_1->NowPosition).field0_0x0._s_0.Y;
    dVar7 = local_40 - (double)(float)local_68._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar7 * dVar7) {
      dVar6 = (double)(param_2 * __real_41200000);
      if (__real_3ff0000000000000 <= (double)(param_2 * __real_41200000)) {
        dVar6 = __real_3ff0000000000000;
      }
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      local_40 = dVar6 * dVar7 + (double)(float)local_68._s_0.Z;
    }
    if (((dVar4 < (double)CONCAT44((uint)((ulonglong)(local_68._s_0.X - local_50) >> 0x20) & uVar3,
                                   SUB84(local_68._s_0.X - local_50,0) & uVar2)) ||
        (dVar4 < (double)CONCAT44((uint)((ulonglong)(local_68._s_0.Y - dStack_48) >> 0x20) & uVar3,
                                  SUB84(local_68._s_0.Y - dStack_48,0) & uVar2))) ||
       (dVar4 < (double)CONCAT44((uint)((ulonglong)(local_68._s_0.Z - local_40) >> 0x20) & uVar3,
                                 SUB84(local_68._s_0.Z - local_40,0) & uVar2))) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_50);
    }
  }
  return;
}

// UpdateInterpPositionGap @ 14bb967e0

void __thiscall
UDS_RecvMoveNpcProcess::UpdateInterpPositionGap
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_XMM2_Db;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 local_68 [16];
  double local_58;
  undefined1 local_48 [16];
  double local_38;
  
  uVar1 = (param_1->StateFlags).Packed;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (((uVar1 >> 0x23 & 3) == 0) && (pUVar2[3].field_0x6 == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  fVar9 = param_2 + this->InterpDurationServerLocation;
  this->InterpDurationServerLocation = fVar9;
  fVar9 = fVar9 / this->InterpTimeServerLocation;
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  (**(code **)(this->_padding_ + 0x338))(this,local_68);
  dVar7 = (double)fVar9;
  dVar8 = (double)local_68._0_8_ +
          ((param_1->ServerPosition).field0_0x0._s_0.X - (double)local_68._0_8_) * dVar7;
  dVar6 = (double)local_68._8_8_ +
          ((param_1->ServerPosition).field0_0x0._s_0.Y - (double)local_68._8_8_) * dVar7;
  local_58 = local_58 + ((param_1->ServerPosition).field0_0x0._s_0.Z - local_58) * dVar7;
  uVar4 = SUB84(dVar6,0);
  uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
  local_68._8_4_ = uVar4;
  local_68._0_8_ = dVar8;
  local_68._12_4_ = uVar5;
  local_48._8_4_ = uVar4;
  local_48._0_8_ = dVar8;
  local_48._12_4_ = uVar5;
  local_38 = local_58;
  (**(code **)(this->_padding_ + 800))(this,param_1,CONCAT44(in_XMM2_Db,param_2),local_48,uVar3);
  if (__real_3f800000 <= fVar9) {
    this->InterpDurationServerLocation = 0.0;
    this->ForceClosetPosition = false;
  }
  return;
}

// UpdateNpcRotation @ 14bb97840

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
UDS_RecvMoveNpcProcess::UpdateNpcRotation
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  UDS_DataBase *this_00;
  FDS_NpcBaseTableRow *pFVar4;
  UDS_CharStateData *this_01;
  FDS_EntityBase *pFVar5;
  TVector<double> *pTVar6;
  UObject *pUVar7;
  float fVar8;
  undefined4 in_XMM2_Db;
  double dVar9;
  float fVar10;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TRotator<double> local_60;
  TVector<double> local_48 [2];
  
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar3 = UDS_DataBase::GetEntityTableID(this_00);
  pFVar4 = FDS_NpcBaseTableRow::GetRef((longlong)iVar3,true);
  uVar1 = (param_1->StateFlags).Packed;
  if (((uVar1 >> 4 & 0x7f) == 0) || ((uVar1 & 3) == 0)) {
    if (pFVar4->IsRotationPlace == true) {
LAB_14bb978e4:
      ProcessRotationPlace(this,param_1,param_2,pFVar4);
      pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
      if (pFVar5 != (FDS_EntityBase *)0x0) {
        (**(code **)(this->_padding_ + 0x340))(this,&local_60);
        local_98._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
        local_98._s_0.Y = (param_1->ServerPosition).field0_0x0._s_0.Y;
        local_98._s_0.Z =
             (param_1->ServerPosition).field0_0x0._s_0.Z +
             (double)(float)((uint)pFVar5->ScaledCapsuleHalfHeight ^
                            __xmm_80000000800000008000000080000000);
        fVar10 = pFVar5->ScaledCapsuleRadius;
        pTVar6 = UE::Math::TRotator<double>::Vector(&local_60,local_48);
        fVar8 = fVar10 * __real_41200000;
        if (__real_44a28000 <= fVar8) {
          fVar8 = __real_44a28000;
        }
        dVar9 = (double)fVar8;
        local_78._s_0.X = dVar9 * (pTVar6->field0_0x0)._s_0.X + local_98._s_0.X;
        local_78._s_0.Y = dVar9 * (pTVar6->field0_0x0)._s_0.Y + local_98._s_0.Y;
        local_78._s_0.Z = dVar9 * (pTVar6->field0_0x0)._s_0.Z + local_98._s_0.Z;
        fVar10 = fVar10 * __real_3dcccccd;
        if (__real_41a00000 <= fVar10) {
          fVar10 = __real_41a00000;
        }
        DS_Util::ShowSyncLine
                  ((TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0,&FColor::Blue
                   ,false,__real_3dcccccd,'\0',fVar10);
      }
      dVar9 = (param_1->EntityDirection).Yaw;
      (this->LastNpcRotation).Pitch = (param_1->EntityDirection).Pitch;
      (this->LastNpcRotation).Yaw = dVar9;
      (this->LastNpcRotation).Roll = (param_1->EntityDirection).Roll;
      return;
    }
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar2) {
      this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8.ObjectIndex = 0x19;
      bVar2 = UDS_CharStateData::HasCharDetailState(this_01,(EDS_CharDetailState *)&local_res8);
      if (!bVar2) goto LAB_14bb978e4;
    }
  }
  UDS_NPCBattleData::GetData((ulong64)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar7[2].field_0xc = 0xffffffff;
  }
  (**(code **)(this->_padding_ + 0x360))
            (this,&local_78,CONCAT44(in_XMM2_Db,param_2),&param_1->EntityDirection);
  local_98._s_0.Z = local_78._s_0.Z;
  (**(code **)(this->_padding_ + 0x330))(this,&local_98);
  return;
}

// UpdateNpcRotationAction @ 14bb97ab0

void __thiscall
UDS_RecvMoveNpcProcess::UpdateNpcRotationAction
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2,bool *param_3)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TQuat<double> *pTVar10;
  TQuat<double> *pTVar11;
  TRotator<double> *pTVar12;
  UObject *pUVar13;
  undefined8 in_R8;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  uint uVar22;
  uint uVar23;
  FWeakObjectPtr local_res20;
  TQuat<double> local_a8;
  TQuat<double> local_88;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  TQuat<double> local_48 [2];
  
  if (*param_3 == true) {
    fVar21 = param_2 + this->RotationDeltaTime;
    fVar1 = this->RotationEndTime;
    this->RotationDeltaTime = fVar21;
    if (fVar1 < fVar21) {
      if (this->RotationRealEndTime <= fVar21 && fVar21 != this->RotationRealEndTime) {
        *param_3 = false;
        UDS_NPCBattleData::GetData((ulong64)&local_res20);
        bVar9 = FWeakObjectPtr::IsValid(&local_res20);
        if (bVar9) {
          pUVar13 = FWeakObjectPtr::Get(&local_res20);
          *(undefined4 *)&pUVar13[2].field_0xc = 0xffffffff;
        }
      }
    }
    else {
      pTVar10 = UE::Math::TRotator<double>::Quaternion(&this->EndRotation,&local_88);
      pTVar11 = UE::Math::TRotator<double>::Quaternion(&this->StartRotation,&local_a8);
      pTVar10 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (local_48,pTVar11,pTVar10,(double)(fVar21 / fVar1));
      dVar5 = pTVar10->X;
      dVar6 = pTVar10->Y;
      dVar7 = pTVar10->Z;
      dVar8 = pTVar10->W;
      pcVar2 = *(code **)(this->_padding_ + 0x330);
      dVar16 = dVar7 * dVar7 + dVar5 * dVar5;
      dVar18 = dVar8 * dVar8 + dVar6 * dVar6;
      dVar3 = dVar18 + dVar16;
      dVar16 = dVar16 + dVar18;
      auVar19._8_4_ = SUB84(dVar16,0);
      auVar19._0_8_ = dVar3;
      auVar19._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar19 = sqrtpd(in_XMM4,auVar19);
      uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
      uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
      uVar22 = (uint)(uVar14 >> 0x20);
      uVar23 = (uint)(uVar15 >> 0x20);
      auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
      local_68._0_8_ = uVar14 & (ulonglong)(auVar20._0_8_ * dVar5);
      uVar4 = uVar15 & (ulonglong)(auVar20._8_8_ * dVar6);
      local_68._8_4_ = (undefined4)uVar4;
      local_68._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar20._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar20._4_4_ =
           ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar20._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar20._12_4_ =
           ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_68 = local_68 | auVar20;
      auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
      local_58._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
      ;
      local_58._4_4_ =
           ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_58._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
      ;
      local_58._12_4_ =
           ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar17._0_8_ = (ulonglong)(auVar19._0_8_ * dVar7) & uVar14;
      uVar15 = (ulonglong)(auVar19._8_8_ * dVar8) & uVar15;
      auVar17._8_4_ = (undefined4)uVar15;
      auVar17._12_4_ = (undefined4)(uVar15 >> 0x20);
      local_58 = local_58 | auVar17;
      pTVar12 = UE::Math::TQuat<double>::Rotator
                          ((TQuat<double> *)local_68,(TRotator<double> *)&local_88);
      local_a8.X._0_4_ = *(undefined4 *)&pTVar12->Pitch;
      local_a8.X._4_4_ = *(undefined4 *)((longlong)&pTVar12->Pitch + 4);
      local_a8.Y._0_4_ = *(undefined4 *)&pTVar12->Yaw;
      local_a8.Y._4_4_ = *(undefined4 *)((longlong)&pTVar12->Yaw + 4);
      local_a8.Z = pTVar12->Roll;
      (*pcVar2)(this,&local_a8);
    }
    return;
  }
  (**(code **)(this->_padding_ + 0x360))(this,&local_a8,in_R8,&param_1->EntityDirection);
  local_88.X._0_4_ = local_a8.X._0_4_;
  local_88.X._4_4_ = local_a8.X._4_4_;
  local_88.Y._0_4_ = local_a8.Y._0_4_;
  local_88.Y._4_4_ = local_a8.Y._4_4_;
  local_88.Z = local_a8.Z;
  (**(code **)(this->_padding_ + 0x330))(this,&local_88);
  return;
}

// UpdateVelocity @ 14bb98e30

void __thiscall
UDS_RecvMoveNpcProcess::UpdateVelocity
          (UDS_RecvMoveNpcProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_XMM2_Db;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 local_68 [16];
  double local_58;
  undefined1 local_48 [16];
  double local_38;
  
  if (this->ForceClosetPosition == true) {
    uVar1 = (param_1->StateFlags).Packed;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (((uVar1 >> 0x23 & 3) == 0) && (pUVar3[3].field_0x6 == '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    fVar10 = param_2 + this->InterpDurationServerLocation;
    this->InterpDurationServerLocation = fVar10;
    fVar10 = fVar10 / this->InterpTimeServerLocation;
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    (**(code **)(this->_padding_ + 0x338))(this,local_68);
    dVar8 = (double)fVar10;
    dVar9 = (double)local_68._0_8_ +
            ((param_1->ServerPosition).field0_0x0._s_0.X - (double)local_68._0_8_) * dVar8;
    dVar7 = (double)local_68._8_8_ +
            ((param_1->ServerPosition).field0_0x0._s_0.Y - (double)local_68._8_8_) * dVar8;
    local_58 = local_58 + ((param_1->ServerPosition).field0_0x0._s_0.Z - local_58) * dVar8;
    uVar5 = SUB84(dVar7,0);
    uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
    local_68._8_4_ = uVar5;
    local_68._0_8_ = dVar9;
    local_68._12_4_ = uVar6;
    local_48._8_4_ = uVar5;
    local_48._0_8_ = dVar9;
    local_48._12_4_ = uVar6;
    local_38 = local_58;
    (**(code **)(this->_padding_ + 800))(this,param_1,CONCAT44(in_XMM2_Db,param_2),local_48,uVar4);
    if (__real_3f800000 <= fVar10) {
      this->InterpDurationServerLocation = 0.0;
      this->ForceClosetPosition = false;
    }
  }
  else {
    bVar2 = IsBossIdleMove(this,param_1);
    if (bVar2) {
      BossNpcIdleVelocity(this,param_1,param_2);
    }
    else {
      NpcVelocity(this,param_1,param_2);
    }
  }
  return;
}

// ValidateOwnerComponents @ 14bb99a30

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

bool __thiscall UDS_RecvMoveNpcProcess::ValidateOwnerComponents(UDS_RecvMoveNpcProcess *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      return true;
    }
  }
  return false;
}

// ValidateVelocity @ 14bb99a70

void __thiscall UDS_RecvMoveNpcProcess::ValidateVelocity(UDS_RecvMoveNpcProcess *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = _isnan((this->RecalculateVelocityValue).field0_0x0._s_0.X);
  if (((iVar3 == 0) &&
      (iVar3 = _isnan((this->RecalculateVelocityValue).field0_0x0._s_0.Y), iVar3 == 0)) &&
     (iVar3 = _isnan((this->RecalculateVelocityValue).field0_0x0._s_0.Z), iVar3 == 0)) {
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4287412895202935616>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Network\\DS_RecvMoveNpcProcess.cpp"
                     ,0x340,"false");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

