// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// ~FDS_ISKM_BoidState_Return @ 14b865960

void __thiscall
FDS_ISKM_BoidState_Return::~FDS_ISKM_BoidState_Return(FDS_ISKM_BoidState_Return *this)

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

// OnCheckTransition @ 14b886c80

bool __thiscall
FDS_ISKM_BoidState_Return::OnCheckTransition
          (FDS_ISKM_BoidState_Return *this,FName param_1,FName param_2,FName param_3,float param_4,
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

// OnPostEnterState @ 14b88e5c0

void __thiscall
FDS_ISKM_BoidState_Return::OnPostEnterState
          (FDS_ISKM_BoidState_Return *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float local_res18 [2];
  float local_res20 [2];
  float local_28;
  float local_24;
  TVector<double>_u_0 local_20;
  
  if (param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0.0;
    local_28 = 0.0;
    if (param_1 == FDS_ISKM_BoidState::sName_Escape) {
      local_20._0_4_ = *(undefined4 *)&(this->CombackCenterPoint).field0_0x0;
      local_20._4_4_ = *(undefined4 *)((longlong)&(this->CombackCenterPoint).field0_0x0 + 4);
      local_20._8_4_ = *(undefined4 *)((longlong)&(this->CombackCenterPoint).field0_0x0 + 8);
      local_20._12_4_ = *(undefined4 *)((longlong)&(this->CombackCenterPoint).field0_0x0 + 0xc);
      pfVar3 = &this->CombackCenterPointRange;
      local_20._s_0.Z = (this->CombackCenterPoint).field0_0x0._s_0.Z;
      pfVar2 = &local_28;
    }
    else {
      local_20._0_4_ = *(undefined4 *)&(param_2->InitialPosition).field0_0x0;
      local_20._4_4_ = *(undefined4 *)((longlong)&(param_2->InitialPosition).field0_0x0 + 4);
      local_20._8_4_ = *(undefined4 *)((longlong)&(param_2->InitialPosition).field0_0x0 + 8);
      local_20._12_4_ = *(undefined4 *)((longlong)&(param_2->InitialPosition).field0_0x0 + 0xc);
      pfVar3 = &local_28;
      local_24 = 0.0;
      local_20._s_0.Z = (param_2->InitialPosition).field0_0x0._s_0.Z;
      pfVar2 = &local_24;
    }
    bVar1 = FDS_ISKM_BoidState::WN_Boid_SetDestPos
                      ((EDS_ISKM_BoidsTargetType *)pfVar2,(TVector<double> *)&local_20._s_0,param_2,
                       pfVar3,local_res20,local_res18);
    this->bShouldIdle = !bVar1;
    if (bVar1) {
      FWN_ISKM_BoidInfo::PlayAnimation
                (param_2->BoidInfo,*(FName *)((longlong)&this->_padding_ + 4),__real_3e4ccccd,
                 __real_3f800000);
    }
    param_2->MaxSpeed = *(float *)&this->_padding_;
    param_2->Acceleration = *(float *)((longlong)&this->_padding_ + 4);
    param_2->MoveDist = 0.0;
  }
  return;
}

// OnPostLeaveState @ 14b88e8b0

void __thiscall
FDS_ISKM_BoidState_Return::OnPostLeaveState
          (FDS_ISKM_BoidState_Return *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
          )

{
  this->bShouldIdle = false;
  return;
}

// OnPostUpdateState @ 14b890bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_ISKM_BoidState_Return::OnPostUpdateState
          (FDS_ISKM_BoidState_Return *this,float param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2
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
  bool bVar9;
  FWN_BoidsNavSystem *this_01;
  ulonglong uVar10;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_158 [32];
  double local_128;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_120;
  TVector<double>_u_0 local_110 [2];
  TTransform<double> local_d8;
  ulonglong local_78;
  
  if (((param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
      (local_78 = __security_cookie.value ^ (ulonglong)auStackY_158, this->bShouldIdle == false)) &&
     (pFVar3 = param_2->BoidInfo, pFVar3 != (FWN_ISKM_BoidInfo *)0x0)) {
    if ((param_2->BoidsNavSystem).Object == (FWN_BoidsNavSystem *)0x0) {
      this->bShouldIdle = true;
    }
    else {
      FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_120);
      if (local_120.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3483691194041499575>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Return.cpp"
                           ,0x49,"false");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        uVar10 = (ulonglong)_tls_index;
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
        uVar2 = *(uint *)(lVar4 + 0x9b54);
        if ((uVar2 & 1) == 0) {
          *(uint *)(lVar4 + 0x9b54) = uVar2 | 1;
          __tlregdtor(`FDS_ISKM_BoidState_Return::OnPostUpdateState'::__l2::
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
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8);
        pTVar11 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x9b20);
        bVar9 = FWN_AsyncCollision::GetHitResults(this_00,pTVar11,true);
        if ((bVar9) && (0 < *(int *)(lVar4 + 0x9b28))) {
          pFVar6 = (pTVar11->AllocatorInstance).Data;
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
        dVar8 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[1];
        local_d8.Rotation.XY.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
        local_d8.Rotation.XY.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1];
        local_d8.Translation.ZW.m128d_f64[0] =
             (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
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
        (pFVar3->Transform).Translation.XY.m128d_f64[0] = dVar1;
        (pFVar3->Transform).Translation.XY.m128d_f64[1] = dVar8;
        (pFVar3->Transform).Translation.ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
        (pFVar3->Transform).Translation.ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
        (pFVar3->Transform).Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
        (pFVar3->Transform).Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
        (pFVar3->Transform).Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
        (pFVar3->Transform).Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
        fVar13 = param_2->MaxSpeed;
        fVar12 = param_1 * param_2->Acceleration + param_2->Speed;
        if (fVar13 <= fVar12) {
          fVar12 = fVar13;
        }
        param_2->Speed = fVar12;
        pFVar3->_AnimSpeed = fVar12 / fVar13;
        fVar13 = param_1 * param_2->Speed + param_2->MoveDist;
        param_2->MoveDist = fVar13;
        local_d8.Translation.XY.m128d_f64[0] = dVar1;
        local_d8.Translation.XY.m128d_f64[1] = dVar8;
        this_01 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
        local_110[0]._0_8_ = (param_2->DestPos).field0_0x0._s_0.X;
        local_110[0]._8_8_ = (param_2->DestPos).field0_0x0._s_0.Y;
        local_110[0]._16_8_ = (param_2->DestPos).field0_0x0._s_0.Z;
        local_128 = (double)fVar13;
        FWN_BoidsNavSystem::GetTransformInRoute
                  (this_01,&local_128,&local_d8,(TVector<double> *)&local_110[0]._s_0,true);
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
        dVar8 = dVar8 - (param_2->DestPos).field0_0x0._s_0.Y;
        if ((float)SQRT(dVar8 * dVar8 + dVar1 * dVar1) < __real_40a00000) {
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
                (local_120.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SetInitialProperty @ 14b898d60

void __thiscall
FDS_ISKM_BoidState_Return::SetInitialProperty
          (FDS_ISKM_BoidState_Return *this,FDS_Boids_InitialProperty *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(float *)&this->_padding_ = param_1->ComebackDist;
  *(float *)&this->_padding_ = param_1->ChaseApproachRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ChaseRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayRange;
  *(float *)&this->_padding_ = param_1->RunAwayMinRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayMaxRange;
  *(float *)&this->_padding_ = param_1->RunAwayExceptAngle;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ProwlMinRange;
  *(float *)&this->_padding_ = param_1->ProwlMaxRange;
  *(float *)&this->_padding_ = param_1->ComebackMaxSpeed;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ComebackAcceleration;
  pUVar2 = FWeakObjectPtr::Get(&(param_1->CombackNaviInfoVolume).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    lVar1 = *(longlong *)(pUVar2 + 0xb);
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar1 != 0) {
      uVar3 = *(undefined4 *)(lVar1 + 0x210);
      uVar4 = *(undefined4 *)(lVar1 + 0x214);
      uVar5 = *(undefined4 *)(lVar1 + 0x218);
      uVar6 = *(undefined4 *)(lVar1 + 0x21c);
      uVar7 = *(double *)(lVar1 + 0x220);
    }
    *(undefined4 *)&(this->CombackCenterPoint).field0_0x0 = uVar3;
    *(undefined4 *)((longlong)&(this->CombackCenterPoint).field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(this->CombackCenterPoint).field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(this->CombackCenterPoint).field0_0x0 + 0xc) = uVar6;
    (this->CombackCenterPoint).field0_0x0._s_0.Z = (double)uVar7;
    this->CombackCenterPointRange = param_1->CombackCenterPointRage;
  }
  return;
}

