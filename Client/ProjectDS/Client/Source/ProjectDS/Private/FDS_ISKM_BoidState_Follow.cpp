// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// ~FDS_ISKM_BoidState_Follow @ 14b8658f0

void __thiscall
FDS_ISKM_BoidState_Follow::~FDS_ISKM_BoidState_Follow(FDS_ISKM_BoidState_Follow *this)

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

// OnCheckTransition @ 14b886a90

bool __thiscall
FDS_ISKM_BoidState_Follow::OnCheckTransition
          (FDS_ISKM_BoidState_Follow *this,FName param_1,FName param_2,FName param_3,float param_4,
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
  if (FDS_ISKM_BoidState::sName_Idle != param_3) {
    return false;
  }
  return this->bShouldIdle;
}

// OnPostEnterState @ 14b88e400

void __thiscall
FDS_ISKM_BoidState_Follow::OnPostEnterState
          (FDS_ISKM_BoidState_Follow *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

{
  FWN_ISKM_BoidInfo *this_00;
  code *pcVar1;
  bool bVar2;
  float local_res18 [2];
  float local_res20 [2];
  float local_88;
  EDS_ISKM_BoidsTargetType local_84 [3];
  FWeakObjectPtr local_78;
  undefined8 uStack_70;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  if (param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    local_78 = (param_2->FollowTargetInfo).TargetActor.WeakPtr;
    uStack_70 = *(undefined8 *)&(param_2->FollowTargetInfo).TargetType;
    local_68._s_0.X = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.X;
    local_68._s_0.Y = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.Y;
    local_68._s_0.Z = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.Z;
    dStack_50 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.X;
    local_48 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.Y;
    dStack_40 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.Z;
    local_38 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.X;
    dStack_30 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Y;
    local_28 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Z;
    dStack_20 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.X;
    local_18 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.Y;
    dStack_10 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.Z;
    bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_78,(void *)0x0);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1066691910061522964>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Follow.cpp"
                         ,0x14,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_00 = param_2->BoidInfo;
      local_res18[0] = 0.0;
      local_res20[0] = 0.0;
      local_88 = 0.0;
      local_84[0] = FollowObject;
      bVar2 = FDS_ISKM_BoidState::WN_Boid_SetDestPos
                        (local_84,(TVector<double> *)&local_68._s_0,param_2,&local_88,local_res20,
                         local_res18);
      this->bShouldIdle = !bVar2;
      if (bVar2) {
        FWN_ISKM_BoidInfo::PlayAnimation
                  (this_00,*(FName *)((longlong)&this->_padding_ + 4),__real_3e4ccccd,
                   __real_3f800000);
      }
      param_2->MaxSpeed = *(float *)&this->_padding_;
      param_2->Acceleration = *(float *)((longlong)&this->_padding_ + 4);
      param_2->MoveDist = 0.0;
    }
  }
  return;
}

// OnPostLeaveState @ 14b88e880

void __thiscall
FDS_ISKM_BoidState_Follow::OnPostLeaveState
          (FDS_ISKM_BoidState_Follow *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

{
  this->bShouldIdle = false;
  return;
}

// OnPostUpdateState @ 14b890300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_ISKM_BoidState_Follow::OnPostUpdateState
          (FDS_ISKM_BoidState_Follow *this,float param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

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
  double dVar10;
  bool bVar11;
  FWN_BoidsNavSystem *pFVar12;
  ulonglong uVar13;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_1e8 [32];
  float local_1b8 [2];
  double local_1b0;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180 [2];
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
    FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_1a8);
    bVar11 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if ((bVar11) && (local_1a8.Object == (FDS_ISKM_BoidsTargetInfo *)0x0)) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1066691910061523008>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Follow.cpp"
                          ,0x40,"false");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar13 = (ulonglong)_tls_index;
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
      uVar2 = *(uint *)(lVar4 + 0x9b4c);
      if ((uVar2 & 1) == 0) {
        *(uint *)(lVar4 + 0x9b4c) = uVar2 | 1;
        __tlregdtor(`FDS_ISKM_BoidState_Follow::OnPostUpdateState'::__l2::
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
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
      pTVar14 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x9b00);
      bVar11 = FWN_AsyncCollision::GetHitResults(this_00,pTVar14,true);
      if ((bVar11) && (0 < *(int *)(lVar4 + 0x9b08))) {
        pFVar6 = (pTVar14->AllocatorInstance).Data;
        dVar8 = *(double *)(pFVar6 + 0x30);
        dVar1 = *(double *)(pFVar6 + 0x38);
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = *(double *)(pFVar6 + 0x28);
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = dVar8;
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = dVar1;
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = 0.0;
      }
      local_d8.Rotation.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0];
      local_d8.Rotation.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1];
      dVar1 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[0];
      dVar10 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[1];
      local_d8.Rotation.XY.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
      local_d8.Rotation.XY.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1];
      local_d8.Translation.ZW.m128d_f64[0] =
           (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
      local_d8.Translation.ZW.m128d_f64[1] =
           (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1];
      local_d8.Scale3D.XY.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0];
      local_d8.Scale3D.XY.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1];
      local_d8.Scale3D.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0];
      local_d8.Scale3D.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar3->Transform).Rotation.XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
      (pFVar3->Transform).Rotation.XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
      (pFVar3->Transform).Translation.XY.m128d_f64[0] = dVar1;
      (pFVar3->Transform).Translation.XY.m128d_f64[1] = dVar10;
      (pFVar3->Transform).Translation.ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
      (pFVar3->Transform).Translation.ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
      dVar8 = (param_2->DestPos).field0_0x0._s_0.X - local_138;
      dVar9 = (param_2->DestPos).field0_0x0._s_0.Y - dStack_130;
      local_198._s_0.Z = local_128;
      local_198._s_0.X = local_138;
      local_198._s_0.Y = dStack_130;
      local_d8.Translation.XY.m128d_f64[0] = dVar1;
      local_d8.Translation.XY.m128d_f64[1] = dVar10;
      if ((double)this->UpdateDist < SQRT(dVar9 * dVar9 + dVar8 * dVar8)) {
        (param_2->DestPos).field0_0x0._s_0.X = local_138;
        (param_2->DestPos).field0_0x0._s_0.Y = dStack_130;
        (param_2->DestPos).field0_0x0._s_0.Z = local_128;
        pFVar12 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
        local_1b8[0] = param_2->MoveDist;
        bVar11 = FWN_BoidsNavSystem::AddRoute
                           (pFVar12,param_2->NavInfo,local_1b8,(TVector<double> *)&local_198._s_0);
        this->bShouldIdle = !bVar11;
      }
      fVar16 = param_2->MaxSpeed;
      fVar15 = param_1 * param_2->Acceleration + param_2->Speed;
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      param_2->Speed = fVar15;
      pFVar3->_AnimSpeed = fVar15 / fVar16;
      fVar16 = param_1 * param_2->Speed + param_2->MoveDist;
      param_2->MoveDist = fVar16;
      pFVar12 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
      local_180[0]._0_8_ = (param_2->DestPos).field0_0x0._s_0.X;
      local_180[0]._8_8_ = (param_2->DestPos).field0_0x0._s_0.Y;
      local_180[0]._16_8_ = (param_2->DestPos).field0_0x0._s_0.Z;
      local_1b0 = (double)fVar16;
      FWN_BoidsNavSystem::GetTransformInRoute
                (pFVar12,&local_1b0,&local_d8,(TVector<double> *)&local_180[0]._s_0,true);
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
      param_2->LastDeltaSeconds = param_1;
      (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
      dVar1 = dVar1 - (param_2->DestPos).field0_0x0._s_0.X;
      dVar10 = dVar10 - (param_2->DestPos).field0_0x0._s_0.Y;
      if (SQRT(dVar10 * dVar10 + dVar1 * dVar1) < (double)*(float *)&this->_padding_) {
        this->bShouldIdle = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetInitialProperty @ 14b898d10

void __thiscall
FDS_ISKM_BoidState_Follow::SetInitialProperty
          (FDS_ISKM_BoidState_Follow *this,FDS_Boids_InitialProperty *param_1)

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
  *(float *)&this->_padding_ = param_1->ChaseMaxSpeed;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ChaseAcceleration;
  return;
}

