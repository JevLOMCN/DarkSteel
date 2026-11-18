// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// ~FDS_ISKM_BoidState_Roaming @ 14b865980

void __thiscall
FDS_ISKM_BoidState_Roaming::~FDS_ISKM_BoidState_Roaming(FDS_ISKM_BoidState_Roaming *this)

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

// OnCheckTransition @ 14b886cc0

bool __thiscall
FDS_ISKM_BoidState_Roaming::OnCheckTransition
          (FDS_ISKM_BoidState_Roaming *this,FName param_1,FName param_2,FName param_3,float param_4,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_5)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)this->_padding_;
  pFVar1 = pFVar2 + (int)this->_padding_;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if (*pFVar2 == param_3) {
      return false;
    }
  }
  if (FDS_ISKM_BoidState::sName_Escape == param_3) {
    return this->bShouldEscape;
  }
  if (FDS_ISKM_BoidState::sName_Idle == param_3) {
    return this->bShouldIdle;
  }
  if (FDS_ISKM_BoidState::sName_Follow != param_3) {
    return false;
  }
  return this->bShouldFollow;
}

// OnPostEnterState @ 14b88e6b0

void __thiscall
FDS_ISKM_BoidState_Roaming::OnPostEnterState
          (FDS_ISKM_BoidState_Roaming *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  FWN_ISKM_BoidInfo *this_00;
  bool bVar1;
  float local_res18 [2];
  EDS_ISKM_BoidsTargetType local_res20 [2];
  TVector<double>_u_0 local_28;
  
  if (param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    this_00 = param_2->BoidInfo;
    local_res18[0] = 0.0;
    local_res20[0] = None;
    local_28._s_0.X = (this_00->Transform).Translation.XY.m128d_f64[0];
    local_28._s_0.Y = (this_00->Transform).Translation.XY.m128d_f64[1];
    local_28._s_0.Z = (this_00->Transform).Translation.ZW.m128d_f64[0];
    bVar1 = FDS_ISKM_BoidState::WN_Boid_SetDestPos
                      (local_res20,(TVector<double> *)&local_28._s_0,param_2,
                       (float *)&this->_padding_,(float *)((longlong)&this->_padding_ + 4),
                       local_res18);
    this->bShouldIdle = !bVar1;
    param_2->MaxSpeed = *(float *)&this->_padding_;
    param_2->Acceleration = *(float *)((longlong)&this->_padding_ + 4);
    if (this->bShouldIdle == false) {
      FWN_ISKM_BoidInfo::PlayAnimation
                (this_00,*(FName *)((longlong)&this->_padding_ + 4),__real_3e4ccccd,__real_3f800000)
      ;
    }
    param_2->MoveDist = 0.0;
  }
  return;
}

// OnPostLeaveState @ 14b88e8c0

void __thiscall
FDS_ISKM_BoidState_Roaming::OnPostLeaveState
          (FDS_ISKM_BoidState_Roaming *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  this->bShouldIdle = false;
  this->bShouldEscape = false;
  this->bShouldFollow = false;
  return;
}

// OnPostUpdateState @ 14b890fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_ISKM_BoidState_Roaming::OnPostUpdateState
          (FDS_ISKM_BoidState_Roaming *this,float param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  double dVar1;
  uint uVar2;
  FWN_ISKM_BoidInfo *pFVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWN_AsyncCollision *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  FWN_BoidsNavSystem *this_01;
  TSharedPtr<FDS_ISKM_BoidState,1> *pTVar11;
  ulonglong uVar12;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar13;
  FDS_ISKM_BoidsTargetInfo *pFVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auStackY_1e8 [32];
  double local_1b8;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_1b0;
  TSharedPtr<FDS_ISKM_BoidState,1> local_1a0;
  TSharedPtr<FDS_ISKM_BoidState,1> local_190 [2];
  double local_170;
  TVector<double>_u_0 local_168;
  FWeakObjectPtr local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  if (((param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
      (local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8, this->bShouldIdle == false)) &&
     (pFVar3 = param_2->BoidInfo, pFVar3 != (FWN_ISKM_BoidInfo *)0x0)) {
    FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_1b0);
    pFVar14 = local_1b0.Object;
    if (local_1b0.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3806183379011895353>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Roaming.cpp"
                          ,0x39,"false");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar12 = (ulonglong)_tls_index;
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
      uVar2 = *(uint *)(lVar4 + 0x9b58);
      if ((uVar2 & 1) == 0) {
        *(uint *)(lVar4 + 0x9b58) = uVar2 | 1;
        __tlregdtor(`FDS_ISKM_BoidState_Roaming::OnPostUpdateState'::__l2::
                    _dynamic_atexit_destructor_for__hitResults__);
      }
      pTVar5 = (param_2->AsyncCollision_Move).SharedReferenceCount.ReferenceController;
      this_00 = (param_2->AsyncCollision_Move).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FWN_AsyncCollision *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
      pTVar13 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x9b30);
      bVar10 = FWN_AsyncCollision::GetHitResults(this_00,pTVar13,true);
      if ((bVar10) && (0 < *(int *)(lVar4 + 0x9b38))) {
        pFVar6 = (pTVar13->AllocatorInstance).Data;
        dVar9 = *(double *)(pFVar6 + 0x30);
        dVar1 = *(double *)(pFVar6 + 0x38);
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = *(double *)(pFVar6 + 0x28);
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = dVar9;
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = dVar1;
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = 0.0;
        pFVar14 = local_1b0.Object;
      }
      local_d8.Rotation.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0];
      local_d8.Rotation.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1];
      dVar9 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[0];
      dVar1 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[1];
      local_d8.Rotation.XY.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
      local_d8.Rotation.XY.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1];
      local_170 = (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
      local_d8.Translation.ZW.m128d_f64[1] =
           (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1];
      local_d8.Scale3D.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0];
      local_d8.Scale3D.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1];
      local_d8.Scale3D.XY.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0];
      local_d8.Scale3D.XY.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
      (pFVar3->Transform).Rotation.XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
      (pFVar3->Transform).Translation.XY.m128d_f64[0] = dVar9;
      (pFVar3->Transform).Translation.XY.m128d_f64[1] = dVar1;
      (pFVar3->Transform).Translation.ZW.m128d_f64[0] = local_170;
      (pFVar3->Transform).Translation.ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
      fVar18 = param_2->MaxSpeed;
      fVar15 = param_1 * param_2->Acceleration + param_2->Speed;
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      param_2->Speed = fVar15;
      pFVar3->_AnimSpeed = fVar15 / fVar18;
      fVar18 = param_1 * param_2->Speed + param_2->MoveDist;
      param_2->MoveDist = fVar18;
      local_d8.Translation.XY.m128d_f64[0] = dVar9;
      local_d8.Translation.XY.m128d_f64[1] = dVar1;
      local_d8.Translation.ZW.m128d_f64[0] = local_170;
      this_01 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
      local_168._s_0.X = (param_2->DestPos).field0_0x0._s_0.X;
      local_168._s_0.Y = (param_2->DestPos).field0_0x0._s_0.Y;
      local_168._s_0.Z = (param_2->DestPos).field0_0x0._s_0.Z;
      local_1b8 = (double)fVar18;
      FWN_BoidsNavSystem::GetTransformInRoute
                (this_01,&local_1b8,&local_d8,(TVector<double> *)&local_168._s_0,true);
      param_2->LastDeltaSeconds = param_1;
      (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
      (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
      (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
      (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] =
           local_d8.Translation.XY.m128d_f64[0];
      (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] =
           local_d8.Translation.XY.m128d_f64[1];
      (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] =
           local_d8.Translation.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] =
           local_d8.Translation.ZW.m128d_f64[1];
      (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
      (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
      (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
      if (pFVar14 != (FDS_ISKM_BoidsTargetInfo *)0x0) {
        dVar8 = local_170 - (pFVar14->TargetPos).field0_0x0._s_0.Z;
        dVar16 = dVar9 - (pFVar14->TargetPos).field0_0x0._s_0.X;
        dVar17 = dVar1 - (pFVar14->TargetPos).field0_0x0._s_0.Y;
        fVar18 = (float)SQRT(dVar17 * dVar17 + dVar16 * dVar16 + dVar8 * dVar8);
        pTVar11 = FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
                            (param_2,&local_1a0,FDS_ISKM_BoidState::sName_Escape);
        if ((pTVar11->Object == (FDS_ISKM_BoidState *)0x0) ||
           (*(float *)((longlong)&this->_padding_ + 4) <= fVar18)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0.SharedReferenceCount.ReferenceController);
        }
        else {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0.SharedReferenceCount.ReferenceController);
          this->bShouldEscape = true;
        }
        local_148 = (param_2->FollowTargetInfo).TargetActor.WeakPtr;
        uStack_140 = *(undefined8 *)&(param_2->FollowTargetInfo).TargetType;
        local_138 = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.X;
        dStack_130 = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.Y;
        local_128 = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.Z;
        dStack_120 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.X;
        local_118 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.Y;
        dStack_110 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.Z;
        local_108 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.X;
        dStack_100 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Y;
        local_f8 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Z;
        dStack_f0 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.X;
        local_e8 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.Y;
        dStack_e0 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.Z;
        pTVar11 = FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
                            (param_2,local_190,FDS_ISKM_BoidState::sName_Follow);
        if ((pTVar11->Object == (FDS_ISKM_BoidState *)0x0) ||
           (bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_148,(void *)0x0),
           bVar10)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190[0].SharedReferenceCount.ReferenceController);
        }
        else {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190[0].SharedReferenceCount.ReferenceController);
          if (((float)SQRT((dVar9 - local_138) * (dVar9 - local_138) +
                           (dVar1 - dStack_130) * (dVar1 - dStack_130)) <
               *(float *)((longlong)&this->_padding_ + 4)) &&
             (*(float *)&this->_padding_ <= fVar18 && fVar18 != *(float *)&this->_padding_)) {
            this->bShouldFollow = true;
          }
        }
      }
      dVar9 = dVar9 - (param_2->DestPos).field0_0x0._s_0.X;
      dVar1 = dVar1 - (param_2->DestPos).field0_0x0._s_0.Y;
      if ((float)SQRT(dVar1 * dVar1 + dVar9 * dVar9) < __real_40a00000) {
        dVar1 = (pFVar3->Transform).Rotation.XY.m128d_f64[1];
        (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0] =
             (pFVar3->Transform).Rotation.XY.m128d_f64[0];
        (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pFVar3->Transform).Rotation.ZW.m128d_f64[1];
        (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0] =
             (pFVar3->Transform).Rotation.ZW.m128d_f64[0];
        (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pFVar3->Transform).Translation.XY.m128d_f64[1];
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] =
             (pFVar3->Transform).Translation.XY.m128d_f64[0];
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pFVar3->Transform).Translation.ZW.m128d_f64[1];
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] =
             (pFVar3->Transform).Translation.ZW.m128d_f64[0];
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pFVar3->Transform).Scale3D.XY.m128d_f64[1];
        (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] =
             (pFVar3->Transform).Scale3D.XY.m128d_f64[0];
        (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = dVar1;
        dVar1 = (pFVar3->Transform).Scale3D.ZW.m128d_f64[1];
        (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0] =
             (pFVar3->Transform).Scale3D.ZW.m128d_f64[0];
        (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
        this->bShouldIdle = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetInitialProperty @ 14b898e10

void __thiscall
FDS_ISKM_BoidState_Roaming::SetInitialProperty
          (FDS_ISKM_BoidState_Roaming *this,FDS_Boids_InitialProperty *param_1)

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
  *(float *)&this->_padding_ = param_1->ProwlMaxSpeed;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ProwlAcceleration;
  return;
}

