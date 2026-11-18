// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// ~FDS_ISKM_BoidState_Escape @ 14b865870

void __thiscall
FDS_ISKM_BoidState_Escape::~FDS_ISKM_BoidState_Escape(FDS_ISKM_BoidState_Escape *this)

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

// OnCheckTransition @ 14b886950

bool __thiscall
FDS_ISKM_BoidState_Escape::OnCheckTransition
          (FDS_ISKM_BoidState_Escape *this,FName param_1,FName param_2,FName param_3,float param_4,
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
  if (FDS_ISKM_BoidState::sName_Idle == param_3) {
    return this->bShouldIdle;
  }
  if (FDS_ISKM_BoidState::sName_Return == param_3) {
    return this->bShouldReturn;
  }
  if (FDS_ISKM_BoidState::sName_Escape != param_3) {
    return false;
  }
  return this->bFindRoute == false;
}

// OnPostEnterState @ 14b88d760

void __thiscall
FDS_ISKM_BoidState_Escape::OnPostEnterState
          (FDS_ISKM_BoidState_Escape *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

{
  FWN_ISKM_BoidInfo *this_00;
  bool bVar1;
  uint uVar2;
  EDS_ISKM_BoidsTargetType local_res18 [2];
  TVector<double>_u_0 local_28;
  
  if (param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    if (param_1 != FDS_ISKM_BoidState::sName_Escape) {
      this->LastEscapeCount = this->LastEscapeCount + 1;
    }
    this_00 = param_2->BoidInfo;
    local_res18[0] = MainPlayer;
    local_28._s_0.X = (this_00->Transform).Translation.XY.m128d_f64[0];
    local_28._s_0.Y = (this_00->Transform).Translation.XY.m128d_f64[1];
    local_28._s_0.Z = (this_00->Transform).Translation.ZW.m128d_f64[0];
    bVar1 = FDS_ISKM_BoidState::WN_Boid_SetDestPos
                      (local_res18,(TVector<double> *)&local_28._s_0,param_2,
                       (float *)((longlong)&this->_padding_ + 4),(float *)&this->_padding_,
                       (float *)&this->_padding_);
    this->bFindRoute = bVar1;
    if (bVar1) {
      FWN_ISKM_BoidInfo::PlayAnimation
                (this_00,*(FName *)((longlong)&this->_padding_ + 4),__real_3e4ccccd,__real_3f800000)
      ;
      param_2->bIgnoreAngleLimit = false;
      uVar2 = 0;
    }
    else {
      if ((param_2->bIgnoreAngleLimit != false) &&
         (param_2->LimitFindRouteCount <= param_2->FailedToFindRouteCount + 1)) {
        this->bShouldReturn = true;
      }
      uVar2 = param_2->FailedToFindRouteCount;
      if (param_2->LimitFindRouteCount <= uVar2) {
        param_2->IgnoreAngleFindRouteCount = param_2->IgnoreAngleFindRouteCount + 1;
        uVar2 = 0;
        param_2->FailedToFindRouteCount = 0;
        param_2->bIgnoreAngleLimit = true;
      }
      uVar2 = uVar2 + 1;
    }
    param_2->FailedToFindRouteCount = uVar2;
    param_2->MaxSpeed = *(float *)&this->_padding_;
    param_2->Acceleration = *(float *)((longlong)&this->_padding_ + 4);
    param_2->MoveDist = 0.0;
    if (this->LastCheckEscapeCount <= this->LastEscapeCount) {
      if (this->LimitIgnoreAngleFindRouteCount <= param_2->IgnoreAngleFindRouteCount) {
        this->bShouldReturn = true;
      }
      this->LastEscapeCount = 0;
      param_2->IgnoreAngleFindRouteCount = 0;
    }
  }
  return;
}

// OnPostLeaveState @ 14b88e790

void __thiscall
FDS_ISKM_BoidState_Escape::OnPostLeaveState
          (FDS_ISKM_BoidState_Escape *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

{
  this->bShouldIdle = false;
  this->bShouldReturn = false;
  this->bFindRoute = false;
  if (param_1 != FDS_ISKM_BoidState::sName_Escape) {
    param_2->FailedToFindRouteCount = 0;
    param_2->bIgnoreAngleLimit = false;
  }
  return;
}

// OnPostUpdateState @ 14b88e9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_ISKM_BoidState_Escape::OnPostUpdateState
          (FDS_ISKM_BoidState_Escape *this,float param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
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
  bool bVar8;
  FWN_BoidsNavSystem *this_01;
  ulonglong uVar9;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStackY_148 [32];
  double local_118;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_110;
  double local_100;
  double dStack_f8;
  double local_f0;
  TVector<double>_u_0 local_e8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  if ((((param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
       (local_68 = __security_cookie.value ^ (ulonglong)auStackY_148, this->bFindRoute != false)) &&
      (this->bShouldReturn != true)) &&
     (pFVar3 = param_2->BoidInfo, pFVar3 != (FWN_ISKM_BoidInfo *)0x0)) {
    FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_110);
    if (local_110.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4662123786479337560>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Escape.cpp"
                         ,0x58,"false");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar9 = (ulonglong)_tls_index;
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
      uVar2 = *(uint *)(lVar4 + 0x9b40);
      if ((uVar2 & 1) == 0) {
        *(uint *)(lVar4 + 0x9b40) = uVar2 | 1;
        __tlregdtor(`FDS_ISKM_BoidState_Escape::OnPostUpdateState'::__l2::
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
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
      pTVar10 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x9ad0);
      bVar8 = FWN_AsyncCollision::GetHitResults(this_00,pTVar10,true);
      if ((bVar8) && (0 < *(int *)(lVar4 + 0x9ad8))) {
        pFVar6 = (pTVar10->AllocatorInstance).Data;
        dVar12 = *(double *)(pFVar6 + 0x30);
        dVar1 = *(double *)(pFVar6 + 0x38);
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = *(double *)(pFVar6 + 0x28);
        (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = dVar12;
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = dVar1;
        (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = 0.0;
      }
      local_c8.Rotation.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0];
      local_c8.Rotation.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1];
      local_100 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[0];
      dStack_f8 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[1];
      local_c8.Rotation.XY.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
      local_c8.Rotation.XY.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1];
      local_f0 = (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
      local_c8.Translation.ZW.m128d_f64[1] =
           (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1];
      local_c8.Scale3D.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0];
      local_c8.Scale3D.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1];
      local_c8.Scale3D.XY.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0];
      local_c8.Scale3D.XY.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.XY.m128d_f64[0] = local_c8.Rotation.XY.m128d_f64[0];
      (pFVar3->Transform).Rotation.XY.m128d_f64[1] = local_c8.Rotation.XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[0] = local_c8.Rotation.ZW.m128d_f64[0];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[1] = local_c8.Rotation.ZW.m128d_f64[1];
      (pFVar3->Transform).Translation.XY.m128d_f64[0] = local_100;
      (pFVar3->Transform).Translation.XY.m128d_f64[1] = dStack_f8;
      (pFVar3->Transform).Translation.ZW.m128d_f64[0] = local_f0;
      (pFVar3->Transform).Translation.ZW.m128d_f64[1] = local_c8.Translation.ZW.m128d_f64[1];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
      local_c8.Translation.XY.m128d_f64[0] = local_100;
      local_c8.Translation.XY.m128d_f64[1] = dStack_f8;
      local_c8.Translation.ZW.m128d_f64[0] = local_f0;
      if ((local_110.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar14 = param_2->MaxSpeed;
      fVar11 = param_1 * param_2->Acceleration + param_2->Speed;
      if (fVar14 <= fVar11) {
        fVar11 = fVar14;
      }
      param_2->Speed = fVar11;
      pFVar3->_AnimSpeed = fVar11 / fVar14;
      fVar14 = param_1 * param_2->Speed + param_2->MoveDist;
      param_2->MoveDist = fVar14;
      this_01 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
      local_e8._s_0.X = (param_2->DestPos).field0_0x0._s_0.X;
      local_e8._s_0.Y = (param_2->DestPos).field0_0x0._s_0.Y;
      local_e8._s_0.Z = (param_2->DestPos).field0_0x0._s_0.Z;
      local_118 = (double)fVar14;
      FWN_BoidsNavSystem::GetTransformInRoute
                (this_01,&local_118,&local_c8,(TVector<double> *)&local_e8._s_0,true);
      (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0] = local_c8.Rotation.XY.m128d_f64[0];
      (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1] = local_c8.Rotation.XY.m128d_f64[1];
      (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0] = local_c8.Rotation.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1] = local_c8.Rotation.ZW.m128d_f64[1];
      (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] =
           local_c8.Translation.XY.m128d_f64[0];
      (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] =
           local_c8.Translation.XY.m128d_f64[1];
      (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] =
           local_c8.Translation.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] =
           local_c8.Translation.ZW.m128d_f64[1];
      (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
      (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
      (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
      (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
      dVar1 = (param_2->DestPos).field0_0x0._s_0.X;
      dVar12 = (param_2->DestPos).field0_0x0._s_0.Y;
      param_2->LastDeltaSeconds = param_1;
      dVar1 = local_100 - dVar1;
      dVar12 = dStack_f8 - dVar12;
      auVar13._0_8_ = dVar12 * dVar12 + dVar1 * dVar1;
      auVar13._8_8_ = 0;
      auVar13 = sqrtpd(auVar13,auVar13);
      if ((float)auVar13._0_8_ < __real_40a00000) {
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
              (local_110.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetInitialProperty @ 14b898c20

void __thiscall
FDS_ISKM_BoidState_Escape::SetInitialProperty
          (FDS_ISKM_BoidState_Escape *this,FDS_Boids_InitialProperty *param_1)

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

