// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// FDS_ISKM_BoidState_Escape_Fly @ 14b864100

FDS_ISKM_BoidState_Escape_Fly * __thiscall
FDS_ISKM_BoidState_Escape_Fly::FDS_ISKM_BoidState_Escape_Fly
          (FDS_ISKM_BoidState_Escape_Fly *this,FName *param_1)

{
  this->_padding_ = 0x43960000;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Escape__6B_;
  *(undefined4 *)&this->_padding_ = 0x44fa0000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x43960000;
  *(undefined4 *)&this->_padding_ = 0x447a0000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x44fa0000;
  this->_padding_ = 0x42340000;
  *(undefined4 *)&this->_padding_ = 0x44fa0000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x447a0000;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 10;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 5;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_1;
  this->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Escape_Fly__6B_;
  (this->StandToFlyAnim).ComparisonIndex = 0;
  (this->StandToFlyAnim).Number = 0;
  (this->FlyAnim).ComparisonIndex = 0;
  (this->FlyAnim).Number = 0;
  this->StandToFlyAnimTime = 0.0;
  this->FlyAnimTime = 0.0;
  this->StandTime = 0.0;
  this->bCheckCanFly = false;
  this->JumpHeight = 0.0;
  this->JumpAngle = 0.0;
  this->JumpSpeed = 0.0;
  return this;
}

// ~FDS_ISKM_BoidState_Escape_Fly @ 14b865890

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::~FDS_ISKM_BoidState_Escape_Fly(FDS_ISKM_BoidState_Escape_Fly *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = (void *)this->_padding_;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// OnCheckTransition @ 14b8869b0

bool __thiscall
FDS_ISKM_BoidState_Escape_Fly::OnCheckTransition
          (FDS_ISKM_BoidState_Escape_Fly *this,FName param_1,FName param_2,FName param_3,
          float param_4,FDS_ISKM_BoidsFSM_ExecutionContext *param_5)

{
  FName *pFVar1;
  FName *pFVar2;
  char cVar3;
  
  pFVar2 = (FName *)this->_padding_;
  pFVar1 = pFVar2 + (int)this->_padding_;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if (*pFVar2 == param_3) {
      return false;
    }
  }
  if (FDS_ISKM_BoidState::sName_Idle == param_3) {
    cVar3 = (char)this->_padding_;
  }
  else if (FDS_ISKM_BoidState::sName_Return == param_3) {
    cVar3 = *(char *)((longlong)&this->_padding_ + 1);
  }
  else {
    if (FDS_ISKM_BoidState::sName_Escape != param_3) {
      return false;
    }
    cVar3 = *(char *)((longlong)&this->_padding_ + 2) == '\0';
  }
  if ((cVar3 != '\0') && (FDS_ISKM_BoidState::sName_Idle == param_3)) {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnPostEnterState @ 14b88d8b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::OnPostEnterState
          (FDS_ISKM_BoidState_Escape_Fly *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  double dVar1;
  FWN_ISKM_BoidInfo *pFVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  TVector<double>_u_0 local_130;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_118;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_d8 [16];
  
  if (param_2 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    return;
  }
  FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_118);
  dVar13 = __real_3e45798ee0000000;
  dVar16 = __real_3ff0000000000000;
  if (local_118.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) {
    *(undefined1 *)&this->_padding_ = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    return;
  }
  pFVar2 = param_2->BoidInfo;
  local_d8 = *(undefined1 (*) [16])(pFVar2->Transform).Translation.XY.m128d_f64;
  local_f8 = (pFVar2->Transform).Translation.ZW.m128d_f64[0];
  dStack_f0 = (pFVar2->Transform).Translation.ZW.m128d_f64[1];
  dVar15 = ((local_118.Object)->TargetPos).field0_0x0._s_0.X;
  dVar6 = dVar15 - local_d8._0_8_;
  dVar18 = ((local_118.Object)->TargetPos).field0_0x0._s_0.Y;
  dVar8 = local_d8._8_8_;
  dVar4 = dVar18 - dVar8;
  dVar1 = ((local_118.Object)->TargetPos).field0_0x0._s_0.Z;
  local_108._8_4_ = local_d8._8_4_;
  local_108._0_8_ = dVar8;
  local_108._12_4_ = local_d8._12_4_;
  uVar9 = dVar1 - local_f8;
  dVar3 = dVar4 * dVar4 + dVar6 * dVar6;
  if (dVar3 == __real_3ff0000000000000) {
    uVar7 = dVar6;
    uVar5 = dVar4;
    if ((double)uVar9 != 0.0) {
LAB_14b88da43:
      uVar9 = 0.0;
      uVar7 = dVar6;
    }
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar3) {
      dVar6 = dVar6 * (__real_3ff0000000000000 / SQRT(dVar3));
      uVar5 = dVar4 * (__real_3ff0000000000000 / SQRT(dVar3));
      goto LAB_14b88da43;
    }
  }
  dVar15 = local_d8._0_8_ - dVar15;
  dVar8 = dVar8 - dVar18;
  uVar10 = local_f8 - dVar1;
  dVar18 = dVar8 * dVar8 + dVar15 * dVar15;
  if (dVar18 == __real_3ff0000000000000) {
    uVar11 = dVar15;
    uVar12 = dVar8;
    if ((double)uVar10 != 0.0) {
LAB_14b88dac8:
      uVar11 = dVar15;
      uVar12 = dVar8;
      uVar10 = 0.0;
    }
  }
  else {
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar18) {
      dVar15 = dVar15 * (__real_3ff0000000000000 / SQRT(dVar18));
      dVar8 = dVar8 * (__real_3ff0000000000000 / SQRT(dVar18));
      goto LAB_14b88dac8;
    }
  }
  fVar17 = *(float *)&this->_padding_;
  fVar19 = __real_43340000 - fVar17;
  local_130._s_0.Z = (double)uVar9;
  if ((float)(((double)uVar10 * ((local_118.Object)->TargetForward).field0_0x0._s_0.X -
              (double)uVar11 * ((local_118.Object)->TargetForward).field0_0x0._s_0.Z) *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
              ((double)uVar12 * ((local_118.Object)->TargetForward).field0_0x0._s_0.Z -
              (double)uVar10 * ((local_118.Object)->TargetForward).field0_0x0._s_0.Y) *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
             ((double)uVar11 * ((local_118.Object)->TargetForward).field0_0x0._s_0.Y -
             (double)uVar12 * ((local_118.Object)->TargetForward).field0_0x0._s_0.X) *
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) <= 0.0) {
    uVar14 = rand();
    fVar17 = (float)(uVar14 & 0x7fff) * fVar19 * __real_38000100 + __real_43340000;
  }
  else {
    uVar14 = rand();
    fVar17 = (float)(uVar14 & 0x7fff) * fVar19 * __real_38000100 + fVar17;
  }
  dVar15 = (double)uVar5 * (double)uVar5 + (double)uVar7 * (double)uVar7;
  if (dVar15 == dVar16) {
    if ((double)uVar9 == 0.0) {
      local_138 = local_130._s_0.Z;
      unique0x100005ac = (int)uVar5;
      local_148 = (double)uVar7;
      unique0x100005b0 = (int)((ulonglong)uVar5 >> 0x20);
      goto LAB_14b88dc3f;
    }
  }
  else {
    if (dVar15 < dVar13) {
      dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14b88dc3f;
    }
    uVar7 = (double)uVar7 * (dVar16 / SQRT(dVar15));
    uVar5 = (double)uVar5 * (dVar16 / SQRT(dVar15));
  }
  local_138 = 0.0;
  dStack_140 = (double)uVar5;
  local_148 = (double)uVar7;
LAB_14b88dc3f:
  UE::Math::TVector<double>::RotateAngleAxis
            ((TVector<double> *)&local_148,(TVector<double> *)&local_130._s_0,(double)fVar17,
             &UE::Math::TVector<double>::UpVector);
  uVar14 = rand();
  fVar17 = tanf((float)(uVar14 & 0x7fff) * ___real_37060b9e + ___real_3e32b8c2);
  dVar18 = (double)fVar17;
  dVar15 = local_130._s_0.Y * local_130._s_0.Y + local_130._s_0.X * local_130._s_0.X +
           dVar18 * dVar18;
  if (dVar13 < dVar15) {
    dVar16 = dVar16 / SQRT(dVar15);
    local_130._s_0.X = local_130._s_0.X * dVar16;
    local_130._s_0.Y = local_130._s_0.Y * dVar16;
    dVar18 = dVar18 * dVar16;
  }
  dVar16 = (double)*(float *)((longlong)&this->_padding_ + 4);
  (param_2->DestPos).field0_0x0._s_0.X =
       dVar16 * local_130._s_0.X + dVar16 * local_130._s_0.X + (double)local_d8._0_8_;
  (param_2->DestPos).field0_0x0._s_0.Y =
       dVar16 * local_130._s_0.Y + dVar16 * local_130._s_0.Y + (double)local_108._0_8_;
  (param_2->DestPos).field0_0x0._s_0.Z = (dVar18 + dVar18) * dVar16 + local_f8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  param_2->BoidInfo->_AnimSpeed = 1.0;
  fVar17 = *(float *)&this->_padding_;
  param_2->MaxSpeed = fVar17;
  param_2->Acceleration = *(float *)((longlong)&this->_padding_ + 4);
  fVar19 = this->JumpSpeed;
  if (fVar17 <= this->JumpSpeed) {
    fVar19 = fVar17;
  }
  param_2->MoveDist = 0.0;
  param_2->Speed = fVar19;
  return;
}

// OnPostLeaveState @ 14b88e7c0

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::OnPostLeaveState
          (FDS_ISKM_BoidState_Escape_Fly *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->bCheckCanFly = false;
  param_2->bIsFlying = false;
  return;
}

// OnPostUpdateState @ 14b88edf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::OnPostUpdateState
          (FDS_ISKM_BoidState_Escape_Fly *this,float param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  __m128d *p_Var1;
  FWN_ISKM_BoidInfo *this_00;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWN_AsyncCollision *this_01;
  FName FVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double *pdVar9;
  bool bVar10;
  TQuat<double> *pTVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  TVector<double>_u_0 local_1e8;
  TRotator<double> local_1c8;
  undefined1 local_1a8 [16];
  TVector<double>_u_0 local_198;
  TQuat<double> local_178;
  double local_158 [2];
  double local_148;
  double dStack_140;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_138;
  TTransform<double> local_128 [2];
  
  if (param_2 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    return;
  }
  if ((char)this->_padding_ == '\x01') {
    return;
  }
  this_00 = param_2->BoidInfo;
  if (this_00 == (FWN_ISKM_BoidInfo *)0x0) {
    return;
  }
  FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_138);
  if (local_138.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) goto LAB_14b88f5e1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar2 + 0x9b44) & 1) == 0) {
    *(uint *)(lVar2 + 0x9b44) = *(uint *)(lVar2 + 0x9b44) | 1;
    __tlregdtor(`FDS_ISKM_BoidState_Escape_Fly::OnPostUpdateState'::__l2::
                _dynamic_atexit_destructor_for__hitResults__);
  }
  pTVar3 = (param_2->AsyncCollision_Move).SharedReferenceCount.ReferenceController;
  this_01 = (param_2->AsyncCollision_Move).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar15 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  if (this_01 != (FWN_AsyncCollision *)0x0) {
    if (param_2->bIsFlying == false) {
      param_2->bIsFlying = true;
    }
    else {
      local_158 = *&(param_2->ExpectedTransform).Translation.XY.m128d_f64;
      p_Var1 = &(param_2->ExpectedTransform).Rotation.ZW;
      uVar23 = *(undefined4 *)p_Var1->m128d_f64;
      uVar24 = *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.ZW.m128d_f64 + 4);
      local_1c8.Pitch = p_Var1->m128d_f64[0];
      uVar25 = *(undefined4 *)((param_2->ExpectedTransform).Rotation.ZW.m128d_f64 + 1);
      uVar26 = *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.ZW.m128d_f64 + 0xc);
      uVar27 = *(undefined4 *)(param_2->ExpectedTransform).Rotation.XY.m128d_f64;
      uVar29 = *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.XY.m128d_f64 + 4);
      local_178.X = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
      pdVar9 = (param_2->ExpectedTransform).Rotation.XY.m128d_f64 + 1;
      uVar30 = *(undefined4 *)pdVar9;
      uVar31 = *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.XY.m128d_f64 + 0xc);
      local_178.Y = *pdVar9;
      local_148 = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0];
      dStack_140 = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1];
      uVar32 = *(undefined4 *)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64;
      uVar33 = *(undefined4 *)((longlong)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 4);
      uVar34 = *(undefined4 *)((param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 1);
      uVar35 = *(undefined4 *)((longlong)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 0xc);
      dVar20 = (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
      local_128[0].Translation.ZW.m128d_f64[1] =
           (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1];
      *(undefined4 *)(this_00->Transform).Rotation.XY.m128d_f64 = uVar27;
      *(undefined4 *)((longlong)(this_00->Transform).Rotation.XY.m128d_f64 + 4) = uVar29;
      *(undefined4 *)((this_00->Transform).Rotation.XY.m128d_f64 + 1) = uVar30;
      *(undefined4 *)((longlong)(this_00->Transform).Rotation.XY.m128d_f64 + 0xc) = uVar31;
      *(undefined4 *)(this_00->Transform).Rotation.ZW.m128d_f64 = uVar23;
      *(undefined4 *)((longlong)(this_00->Transform).Rotation.ZW.m128d_f64 + 4) = uVar24;
      *(undefined4 *)((this_00->Transform).Rotation.ZW.m128d_f64 + 1) = uVar25;
      *(undefined4 *)((longlong)(this_00->Transform).Rotation.ZW.m128d_f64 + 0xc) = uVar26;
      *&(this_00->Transform).Translation.XY.m128d_f64 = local_158;
      (this_00->Transform).Translation.ZW.m128d_f64[0] = dVar20;
      (this_00->Transform).Translation.ZW.m128d_f64[1] = local_128[0].Translation.ZW.m128d_f64[1];
      (this_00->Transform).Scale3D.XY.m128d_f64[0] = local_148;
      (this_00->Transform).Scale3D.XY.m128d_f64[1] = dStack_140;
      *(undefined4 *)(this_00->Transform).Scale3D.ZW.m128d_f64 = uVar32;
      *(undefined4 *)((longlong)(this_00->Transform).Scale3D.ZW.m128d_f64 + 4) = uVar33;
      *(undefined4 *)((this_00->Transform).Scale3D.ZW.m128d_f64 + 1) = uVar34;
      *(undefined4 *)((longlong)(this_00->Transform).Scale3D.ZW.m128d_f64 + 0xc) = uVar35;
      fVar28 = __real_3f800000;
      dVar18 = local_158[1];
      local_1a8._8_4_ = local_158[1]._0_4_;
      local_1a8._0_8_ = dVar18;
      local_1a8._12_4_ = local_158[1]._4_4_;
      dVar7 = local_158[0];
      local_1e8._s_0.Z = dVar20;
      local_1c8.Yaw._0_4_ = uVar25;
      local_1c8.Yaw._4_4_ = uVar26;
      local_128[0].Rotation.XY.m128d_f64[0]._0_4_ = uVar27;
      local_128[0].Rotation.XY.m128d_f64[0]._4_4_ = uVar29;
      local_128[0].Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
      local_128[0].Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
      local_128[0].Rotation.ZW.m128d_f64[0]._0_4_ = uVar23;
      local_128[0].Rotation.ZW.m128d_f64[0]._4_4_ = uVar24;
      local_128[0].Rotation.ZW.m128d_f64[1]._0_4_ = uVar25;
      local_128[0].Rotation.ZW.m128d_f64[1]._4_4_ = uVar26;
      local_128[0].Translation.XY.m128d_f64 = local_158;
      local_128[0].Translation.ZW.m128d_f64[0] = dVar20;
      local_128[0].Scale3D.XY.m128d_f64[0] = local_148;
      local_128[0].Scale3D.XY.m128d_f64[1] = dStack_140;
      local_128[0].Scale3D.ZW.m128d_f64[0]._0_4_ = uVar32;
      local_128[0].Scale3D.ZW.m128d_f64[0]._4_4_ = uVar33;
      local_128[0].Scale3D.ZW.m128d_f64[1]._0_4_ = uVar34;
      local_128[0].Scale3D.ZW.m128d_f64[1]._4_4_ = uVar35;
      if (this->bCheckCanFly == false) {
        bVar10 = FWN_AsyncCollision::GetHitResults
                           (this_01,(TArray<FHitResult,TSizedDefaultAllocator<32>_> *)
                                    (lVar2 + 0x9ae0),true);
        if ((bVar10) && (0 < *(int *)(lVar2 + 0x9ae8))) {
          *(undefined1 *)&this->_padding_ = 1;
          goto LAB_14b88f5c9;
        }
        local_1e8._s_0.X = (param_2->DestPos).field0_0x0._s_0.X - dVar7;
        local_1e8._s_0.Y = (param_2->DestPos).field0_0x0._s_0.Y - dVar18;
        local_1e8._s_0.Z = (param_2->DestPos).field0_0x0._s_0.Z - dVar20;
        dVar14 = local_1e8._s_0.Y * local_1e8._s_0.Y + local_1e8._s_0.X * local_1e8._s_0.X;
        if (dVar14 == dVar8) {
          if (local_1e8._s_0.Z != 0.0) {
LAB_14b88f0c0:
            local_1e8._s_0.Z = 0.0;
          }
        }
        else {
          if (dVar15 <= dVar14) {
            local_1e8._s_0.X = (dVar8 / SQRT(dVar14)) * local_1e8._s_0.X;
            local_1e8._s_0.Y = (dVar8 / SQRT(dVar14)) * local_1e8._s_0.Y;
            goto LAB_14b88f0c0;
          }
          local_1e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        FDS_ISKM_BoidState::WN_Boid_RotateToDir
                  (local_128,(TVector<double> *)&local_1e8._s_0,(TRotator<double> *)0x0,
                   (TQuat<double> *)0x0);
        uVar35 = local_128[0].Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar34 = local_128[0].Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar33 = local_128[0].Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar32 = local_128[0].Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar26 = local_128[0].Rotation.ZW.m128d_f64[1]._4_4_;
        uVar25 = local_128[0].Rotation.ZW.m128d_f64[1]._0_4_;
        uVar24 = local_128[0].Rotation.ZW.m128d_f64[0]._4_4_;
        uVar23 = local_128[0].Rotation.ZW.m128d_f64[0]._0_4_;
        uVar31 = local_128[0].Rotation.XY.m128d_f64[1]._4_4_;
        uVar30 = local_128[0].Rotation.XY.m128d_f64[1]._0_4_;
        uVar29 = local_128[0].Rotation.XY.m128d_f64[0]._4_4_;
        uVar27 = local_128[0].Rotation.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)(param_2->ExpectedTransform).Rotation.XY.m128d_f64 =
             local_128[0].Rotation.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.XY.m128d_f64 + 4) =
             local_128[0].Rotation.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_2->ExpectedTransform).Rotation.XY.m128d_f64 + 1) =
             local_128[0].Rotation.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.XY.m128d_f64 + 0xc) =
             local_128[0].Rotation.XY.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_2->ExpectedTransform).Rotation.ZW.m128d_f64 =
             local_128[0].Rotation.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.ZW.m128d_f64 + 4) =
             local_128[0].Rotation.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_2->ExpectedTransform).Rotation.ZW.m128d_f64 + 1) =
             local_128[0].Rotation.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_2->ExpectedTransform).Rotation.ZW.m128d_f64 + 0xc) =
             local_128[0].Rotation.ZW.m128d_f64[1]._4_4_;
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] =
             local_128[0].Translation.XY.m128d_f64[0];
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] =
             local_128[0].Translation.XY.m128d_f64[1];
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] =
             local_128[0].Translation.ZW.m128d_f64[0];
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] =
             local_128[0].Translation.ZW.m128d_f64[1];
        (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] = local_128[0].Scale3D.XY.m128d_f64[0];
        (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = local_128[0].Scale3D.XY.m128d_f64[1];
        *(undefined4 *)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 =
             local_128[0].Scale3D.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 4) =
             local_128[0].Scale3D.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 1) =
             local_128[0].Scale3D.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 0xc) =
             local_128[0].Scale3D.ZW.m128d_f64[1]._4_4_;
        FVar4 = *(FName *)((longlong)&this->_padding_ + 4);
        local_178.X = (double)CONCAT44(local_128[0].Rotation.XY.m128d_f64[0]._4_4_,
                                       local_128[0].Rotation.XY.m128d_f64[0]._0_4_);
        local_178.Y = (double)CONCAT44(local_128[0].Rotation.XY.m128d_f64[1]._4_4_,
                                       local_128[0].Rotation.XY.m128d_f64[1]._0_4_);
        local_1c8.Pitch =
             (double)CONCAT44(local_128[0].Rotation.ZW.m128d_f64[0]._4_4_,
                              local_128[0].Rotation.ZW.m128d_f64[0]._0_4_);
        local_1c8.Yaw._0_4_ = local_128[0].Rotation.ZW.m128d_f64[1]._0_4_;
        local_1c8.Yaw._4_4_ = local_128[0].Rotation.ZW.m128d_f64[1]._4_4_;
        local_148 = local_128[0].Scale3D.XY.m128d_f64[0];
        dStack_140 = local_128[0].Scale3D.XY.m128d_f64[1];
        this->bCheckCanFly = true;
        FWN_ISKM_BoidInfo::PlayAnimation(this_00,FVar4,0.0,fVar28);
      }
      if (*(FName *)((longlong)&this->_padding_ + 4) == this->StandToFlyAnim) {
        fVar12 = param_1 + this_00->_AnimTime;
        if (fVar12 < this->StandToFlyAnimTime || fVar12 == this->StandToFlyAnimTime) {
          if (fVar12 < this->StandTime) goto LAB_14b88f5c9;
        }
        else {
          fVar12 = this->JumpHeight;
          FVar4 = this->FlyAnim;
          fVar13 = this->FlyAnimTime;
          *(FName *)((longlong)&this->_padding_ + 4) = FVar4;
          *(float *)((longlong)&this->_padding_ + 4) = fVar13;
          local_1e8._s_0.Z = (double)CONCAT44(uVar33,uVar32);
          dVar20 = dVar20 + (double)fVar12 * (double)CONCAT44(uVar33,uVar32);
          FWN_ISKM_BoidInfo::PlayAnimation(this_00,FVar4,0.0,fVar28);
        }
      }
      local_198._s_0.Z = (param_2->DestPos).field0_0x0._s_0.Z;
      local_1e8._s_0.X = (param_2->DestPos).field0_0x0._s_0.X - dVar7;
      local_1e8._s_0.Y = (param_2->DestPos).field0_0x0._s_0.Y - dVar18;
      local_1e8._s_0.Z = local_198._s_0.Z - dVar20;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_198._s_0,dVar15,
                 &UE::Math::TVector<double>::ZeroVector);
      local_178.Z = local_1c8.Pitch;
      uVar5 = local_158[1]._4_4_;
      dVar18 = (double)CONCAT44(uVar24,uVar23) + (double)CONCAT44(uVar24,uVar23);
      dVar15 = (double)CONCAT44(uVar31,uVar30) + (double)CONCAT44(uVar31,uVar30);
      dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar15,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar8 = ((double)CONCAT44(uVar31,uVar30) * dVar15 - (double)CONCAT44(uVar24,uVar23) * dVar18)
              + dVar8;
      dVar7 = (double)CONCAT44(uVar26,uVar25) * dVar18 - (double)CONCAT44(uVar29,uVar27) * dVar15;
      fVar28 = param_2->MaxSpeed;
      dVar15 = (double)CONCAT44(uVar29,uVar27) * dVar18 + (double)CONCAT44(uVar26,uVar25) * dVar15;
      fVar12 = param_1 * param_2->Acceleration + param_2->Speed;
      if (fVar28 <= fVar12) {
        fVar12 = fVar28;
      }
      param_2->Speed = fVar12;
      dVar16 = (double)param_1;
      this_00->_AnimSpeed = fVar12 / fVar28;
      dVar14 = (double)param_2->Speed;
      dVar18 = dVar14 * local_198._s_0.Y * dVar16;
      dVar19 = dVar14 * local_198._s_0.X * dVar16;
      dVar16 = dVar14 * local_198._s_0.Z * dVar16;
      local_1a8._0_8_ = (double)local_1a8._0_8_ + dVar18;
      dVar14 = local_158[0] + dVar19;
      local_1e8._s_0.X = dVar20 + dVar16;
      local_158[1]._0_4_ = local_158[1]._0_4_;
      local_158[0] = dVar14;
      local_158[1]._4_4_ = uVar5;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar18 * dVar18 + dVar19 * dVar19 + dVar16 * dVar16;
      auVar17 = sqrtpd(local_1a8,auVar17);
      param_2->MoveDist = (float)(auVar17._0_8_ + (double)param_2->MoveDist);
      auVar6._8_4_ = (int)local_1a8._0_8_;
      auVar6._0_8_ = dVar14;
      auVar6._12_4_ = (int)((ulonglong)local_1a8._0_8_ >> 0x20);
      dVar18 = (double)CONCAT44(local_1c8.Yaw._4_4_,local_1c8.Yaw._0_4_);
      local_1e8._s_0.Y = 0.0;
      uVar21 = SUB84(local_1c8.Pitch + local_1c8.Pitch,0) ^
               (uint)__xmm_80000000000000008000000000000000;
      uVar22 = (uint)((ulonglong)(local_1c8.Pitch + local_1c8.Pitch) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      fVar12 = (float)(local_198._s_0.X * dVar8 + local_198._s_0.Y * dVar7 +
                      local_198._s_0.Z * dVar15);
      dVar20 = local_178.X + local_178.X;
      fVar28 = __real_3f800000;
      if (__real_0000000000000000 <
          ((local_1c8.Pitch * (double)CONCAT44(uVar22,uVar21) - local_178.X * dVar20) +
          __real_3ff0000000000000) * (local_198._s_0.X * dVar15 - local_198._s_0.Z * dVar8) +
          ((double)CONCAT44(uVar26,uVar25) * (double)CONCAT44(uVar22,uVar21) +
          (double)CONCAT44(uVar31,uVar30) * dVar20) *
          (local_198._s_0.Z * dVar7 - local_198._s_0.Y * dVar15) +
          (local_198._s_0.Y * dVar8 - local_198._s_0.X * dVar7) *
          ((double)CONCAT44(uVar26,uVar25) * dVar20 -
          (double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar22,uVar21))) {
        fVar28 = __real_bf800000;
      }
      fVar13 = __real_bf800000;
      if ((__real_bf800000 <= fVar12) && (fVar13 = fVar12, __real_3f800000 <= fVar12)) {
        fVar13 = __real_3f800000;
      }
      local_198._0_16_ = auVar6;
      fVar13 = acosf(fVar13);
      fVar12 = param_2->AngularSpeed;
      fVar13 = fVar13 * __real_42652ee0;
      local_178.W = dVar18;
      UE::Math::TQuat<double>::Rotator(&local_178,&local_1c8);
      fVar12 = fVar12 * param_1;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
      }
      local_1c8.Pitch = local_1c8.Pitch + (double)(fVar12 * fVar28);
      pTVar11 = UE::Math::TRotator<double>::Quaternion(&local_1c8,&local_178);
      dVar8 = pTVar11->Y;
      dVar15 = pTVar11->Z;
      dVar7 = pTVar11->W;
      (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0] = pTVar11->X;
      (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1] = dVar8;
      (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0] = dVar15;
      (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1] = dVar7;
      (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = local_198._s_0.X;
      (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = local_198._s_0.Y;
      (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = local_1e8._s_0.X;
      (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = local_1e8._s_0.Y;
      (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] = local_148;
      (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = dStack_140;
      *(undefined4 *)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 = uVar32;
      *(undefined4 *)((longlong)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 4) = uVar33;
      *(undefined4 *)((param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 1) = uVar34;
      *(undefined4 *)((longlong)(param_2->ExpectedTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar35;
      param_2->LastDeltaSeconds = param_1;
      fVar28 = *(float *)((longlong)&this->_padding_ + 4);
      dVar15 = ((local_138.Object)->TargetPos).field0_0x0._s_0.Y - (double)local_1a8._0_8_;
      dVar8 = ((local_138.Object)->TargetPos).field0_0x0._s_0.X - local_158[0];
      if (((double)fVar28 < SQRT(dVar8 * dVar8 + dVar15 * dVar15)) || (fVar28 < param_2->MoveDist))
      {
        AWN_ISKM_BoidsActor::RemoveBoid(this_00->_Actor,param_2->ContextIndex);
      }
    }
  }
LAB_14b88f5c9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_14b88f5e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  return;
}

// OnPreEnterState @ 14b891530

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::OnPreEnterState
          (FDS_ISKM_BoidState_Escape_Fly *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  *(FName *)((longlong)&this->_padding_ + 4) = this->StandToFlyAnim;
  *(float *)((longlong)&this->_padding_ + 4) = this->StandToFlyAnimTime;
  return;
}

// SetFlyAnimation @ 14b898850

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::SetFlyAnimation
          (FDS_ISKM_BoidState_Escape_Fly *this,UWN_ISKM_Profile *param_1,FName *param_2,
          FName *param_3)

{
  code *pcVar1;
  bool bVar2;
  FWN_ISKM_AnimationInfo *pFVar3;
  
  if (param_1 != (UWN_ISKM_Profile *)0x0) {
    pFVar3 = UWN_ISKM_Profile::FindAnimationInfo(param_1,*param_2);
    if (pFVar3 == (FWN_ISKM_AnimationInfo *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5651690479180316892>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Escape_Fly.cpp"
                         ,0xdc,"false");
      if (bVar2) {
code_r0x00014b898906:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this->StandToFlyAnim = *param_2;
      this->StandToFlyAnimTime = pFVar3->TotalTime;
      pFVar3 = UWN_ISKM_Profile::FindAnimationInfo(param_1,*param_3);
      if (pFVar3 == (FWN_ISKM_AnimationInfo *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5651690479180316902>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Escape_Fly.cpp"
                           ,0xe6,"false");
        if (bVar2) goto code_r0x00014b898906;
      }
      else {
        this->FlyAnim = *param_3;
        this->FlyAnimTime = pFVar3->TotalTime;
      }
    }
  }
  return;
}

// SetInitialProperty @ 14b898c70

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::SetInitialProperty
          (FDS_ISKM_BoidState_Escape_Fly *this,FDS_Boids_InitialProperty *param_1)

{
  *(float *)&this->_padding_ = param_1->ComebackDist;
  *(float *)&this->_padding_ = param_1->ChaseApproachRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ChaseRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayRange;
  *(float *)&this->_padding_ = param_1->RunAwayMinRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayMaxRange;
  *(float *)&this->_padding_ = param_1->RunAwayExceptAngle;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ProwlMinRange;
  *(float *)&this->_padding_ = param_1->ProwlMaxRange;
  *(float *)&this->_padding_ = param_1->RunAwayMaxSpeed;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayAcceleration;
  return;
}

// SetJumpProperty @ 14b898f90

void __thiscall
FDS_ISKM_BoidState_Escape_Fly::SetJumpProperty
          (FDS_ISKM_BoidState_Escape_Fly *this,float *param_1,float *param_2,float *param_3,
          float *param_4)

{
  this->JumpAngle = *param_3;
  this->JumpHeight = *param_4;
  this->StandTime = *param_1;
  this->JumpSpeed = *param_2;
  return;
}

