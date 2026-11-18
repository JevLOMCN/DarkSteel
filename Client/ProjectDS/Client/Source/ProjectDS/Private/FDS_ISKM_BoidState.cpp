// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// ~FDS_ISKM_BoidState @ 14b865850

void __thiscall FDS_ISKM_BoidState::~FDS_ISKM_BoidState(FDS_ISKM_BoidState *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->NonTransitionStateList).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddNonTransitionState @ 14b868270

void __thiscall FDS_ISKM_BoidState::AddNonTransitionState(FDS_ISKM_BoidState *this,FName *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->NonTransitionStateList,param_1);
  return;
}

// AsyncCollision_MoveDecision @ 14b8687e0

bool __cdecl
FDS_ISKM_BoidState::AsyncCollision_MoveDecision
          (TTransform<double> *param_1,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  TReferenceControllerBase<1> *pTVar3;
  FWN_AsyncCollision *this;
  FWN_ISKM_BoidInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWN_AsyncCollision *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FWN_AsyncCollision *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  
  pTVar3 = (param_3->AsyncCollision_Move).SharedReferenceCount.ReferenceController;
  this = (param_3->AsyncCollision_Move).Object;
  pFVar4 = param_3->BoidInfo;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (param_3->AsyncCollision_Obstacle).SharedReferenceCount.ReferenceController;
  pFVar6 = (param_3->AsyncCollision_Obstacle).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (param_3->AsyncCollision_Cliff).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_3->AsyncCollision_Cliff).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  dVar11 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
  (pFVar4->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (pFVar4->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  (pFVar4->Transform).Rotation.ZW.m128d_f64[0] = dVar11;
  (pFVar4->Transform).Rotation.ZW.m128d_f64[1] = dVar12;
  if ((pFVar6 != (FWN_AsyncCollision *)0x0) && (pFVar8 != (FWN_AsyncCollision *)0x0)) {
    local_58._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_58._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_58._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar13 = AsyncCollision_MoveDecision_Obstacle(param_2,(TVector<double> *)&local_58._s_0,param_3)
    ;
    if ((bVar13) ||
       (bVar13 = AsyncCollision_MoveDecision_Cliff
                           (param_2,(TVector<double> *)&local_58._s_0,param_3), bVar13)) {
      GetNewDirection(&pFVar4->Transform,(TVector<double> *)&local_58._s_0,param_3,false);
      dVar1 = (pFVar4->Transform).Rotation.XY.m128d_f64[1];
      (param_1->Rotation).XY.m128d_f64[0] = (pFVar4->Transform).Rotation.XY.m128d_f64[0];
      (param_1->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar4->Transform).Rotation.ZW.m128d_f64[1];
      (param_1->Rotation).ZW.m128d_f64[0] = (pFVar4->Transform).Rotation.ZW.m128d_f64[0];
      (param_1->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar4->Transform).Translation.XY.m128d_f64[1];
      (param_1->Translation).XY.m128d_f64[0] = (pFVar4->Transform).Translation.XY.m128d_f64[0];
      (param_1->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar4->Transform).Translation.ZW.m128d_f64[1];
      (param_1->Translation).ZW.m128d_f64[0] = (pFVar4->Transform).Translation.ZW.m128d_f64[0];
      (param_1->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (pFVar4->Transform).Scale3D.XY.m128d_f64[1];
      (param_1->Scale3D).XY.m128d_f64[0] = (pFVar4->Transform).Scale3D.XY.m128d_f64[0];
      (param_1->Scale3D).XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar4->Transform).Scale3D.ZW.m128d_f64[1];
      (param_1->Scale3D).ZW.m128d_f64[0] = (pFVar4->Transform).Scale3D.ZW.m128d_f64[0];
      (param_1->Scale3D).ZW.m128d_f64[1] = dVar1;
    }
    else if (this != (FWN_AsyncCollision *)0x0) {
      bVar13 = FWN_AsyncCollision::GetHitResults(this,param_2,true);
      if ((bVar13) && (0 < param_2->ArrayNum)) {
        local_40 = (pFVar4->Transform).Translation.XY.m128d_f64[0];
        dStack_38 = (pFVar4->Transform).Translation.XY.m128d_f64[1];
        auVar2 = *(undefined1 (*) [16])(pFVar4->Transform).Translation.ZW.m128d_f64;
        uVar16 = auVar2._0_4_;
        uVar17 = auVar2._4_4_;
        uVar18 = auVar2._8_4_;
        uVar19 = auVar2._12_4_;
        pFVar9 = (param_2->AllocatorInstance).Data;
        local_30 = auVar2._0_8_;
        fVar15 = (float)((uint)(float)(*(double *)(pFVar9 + 0x38) - local_30) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff);
        if ((fVar15 < param_3->StepHeight || fVar15 == param_3->StepHeight) &&
           (pFVar9 = pFVar9 + 0x68,
           (double)param_3->WalkableZ < *(double *)pFVar9 ||
           (double)param_3->WalkableZ == *(double *)pFVar9)) {
          if ((param_2->ArrayNum < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          dVar11 = *(double *)(pFVar9 + 0x30);
          dVar1 = *(double *)(pFVar9 + 0x38);
          (param_1->Translation).XY.m128d_f64[0] = *(double *)(pFVar9 + 0x28);
          (param_1->Translation).XY.m128d_f64[1] = dVar11;
          (param_1->Translation).ZW.m128d_f64[0] = dVar1;
          (param_1->Translation).ZW.m128d_f64[1] = 0.0;
          dVar1 = (param_1->Rotation).XY.m128d_f64[1];
          (pFVar4->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
          (pFVar4->Transform).Rotation.XY.m128d_f64[1] = dVar1;
          dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
          (pFVar4->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
          (pFVar4->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
          dVar1 = (param_1->Translation).XY.m128d_f64[1];
          (pFVar4->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
          (pFVar4->Transform).Translation.XY.m128d_f64[1] = dVar1;
          dVar1 = (param_1->Translation).ZW.m128d_f64[1];
          (pFVar4->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
          (pFVar4->Transform).Translation.ZW.m128d_f64[1] = dVar1;
          dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
          (pFVar4->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
          (pFVar4->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
          dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
          bVar13 = true;
          (pFVar4->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
          (pFVar4->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
          goto LAB_14b868a25;
        }
      }
      else {
        dVar1 = (pFVar4->Transform).Translation.ZW.m128d_f64[0];
        uVar16 = SUB84(dVar1,0);
        uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
        uVar18 = 0;
        uVar19 = 0;
      }
      dVar1 = (pFVar4->Transform).Translation.XY.m128d_f64[1];
      (param_1->Translation).XY.m128d_f64[0] = (pFVar4->Transform).Translation.XY.m128d_f64[0];
      (param_1->Translation).XY.m128d_f64[1] = dVar1;
      *(undefined4 *)(param_1->Translation).ZW.m128d_f64 = uVar16;
      *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4) = uVar17;
      *(undefined4 *)((param_1->Translation).ZW.m128d_f64 + 1) = uVar18;
      *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 0xc) = uVar19;
    }
  }
  bVar13 = false;
LAB_14b868a25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar13;
}

// AsyncCollision_MoveDecision_Cliff @ 14b868a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FDS_ISKM_BoidState::AsyncCollision_MoveDecision_Cliff
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3)

{
  int *piVar1;
  FWN_ISKM_BoidInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWN_AsyncCollision *this;
  TReferenceControllerBase<1> *pTVar4;
  FWN_AsyncCollision *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dStack_c0;
  undefined8 local_b8;
  TVector<double>_u_0 local_98;
  TQuat<double> local_78;
  TVector<double> local_58 [2];
  
  pFVar2 = param_3->BoidInfo;
  dVar8 = (pFVar2->Transform).Translation.XY.m128d_f64[0];
  dVar11 = (pFVar2->Transform).Translation.XY.m128d_f64[1];
  dVar17 = (pFVar2->Transform).Translation.ZW.m128d_f64[0];
  local_78.Z = (pFVar2->Transform).Rotation.ZW.m128d_f64[0];
  local_78.W = (pFVar2->Transform).Rotation.ZW.m128d_f64[1];
  local_78.X = (pFVar2->Transform).Rotation.XY.m128d_f64[0];
  local_78.Y = (pFVar2->Transform).Rotation.XY.m128d_f64[1];
  local_98._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_98._s_0.Y = _UNK_150689518;
  local_98._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector(&local_78,local_58,(TVector<double> *)&local_98._s_0);
  pTVar3 = (param_3->AsyncCollision_Move).SharedReferenceCount.ReferenceController;
  this = (param_3->AsyncCollision_Move).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_3->AsyncCollision_Cliff).SharedReferenceCount.ReferenceController;
  this_00 = (param_3->AsyncCollision_Cliff).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FWN_AsyncCollision *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  bVar9 = FWN_AsyncCollision::GetHitResults(this,param_1,true);
  piVar1 = &param_1->ArrayNum;
  if (((!bVar9) || (*piVar1 < 1)) ||
     ((float)(*(double *)((param_1->AllocatorInstance).Data + 0x38) - dVar17) <
      (float)((uint)param_3->StepHeight ^ __xmm_80000000800000008000000080000000))) {
    if (this_00 == (FWN_AsyncCollision *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
    }
    bVar9 = FWN_AsyncCollision::GetHitResults(this_00,param_1,true);
    if ((bVar9) && (0 < *piVar1)) {
      pFVar5 = (param_1->AllocatorInstance).Data;
      dVar17 = *(double *)(pFVar5 + 0x58);
      dStack_c0 = *(double *)(pFVar5 + 0x60);
      dVar7 = dStack_c0 * dStack_c0 + dVar17 * dVar17;
      if (dVar7 == __real_3ff0000000000000) {
        if (*(double *)(pFVar5 + 0x68) == 0.0) {
          dStack_c0 = *(double *)(pFVar5 + 0x60);
          local_b8 = *(undefined8 *)(pFVar5 + 0x68);
          uVar13 = *(uint *)(pFVar5 + 0x58);
          uVar14 = *(uint *)(pFVar5 + 0x5c);
        }
        else {
LAB_14b868c61:
          local_b8 = 0;
          uVar13 = SUB84(dVar17,0);
          uVar14 = (uint)((ulonglong)dVar17 >> 0x20);
        }
      }
      else {
        if (__real_3e45798ee0000000 <= dVar7) {
          dStack_c0 = dStack_c0 * (__real_3ff0000000000000 / SQRT(dVar7));
          dVar17 = dVar17 * (__real_3ff0000000000000 / SQRT(dVar7));
          goto LAB_14b868c61;
        }
        dStack_c0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      }
      uVar15 = (uint)__xmm_80000000000000008000000000000000;
      uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      (param_2->field0_0x0)._s_0.X = (double)CONCAT44(uVar14 ^ uVar16,uVar13 ^ uVar15);
      (param_2->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dStack_c0 >> 0x20) ^ uVar16,
                            SUB84(dStack_c0,0) ^ uVar15);
      (param_2->field0_0x0)._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) ^ uVar16,(uint)local_b8 ^ uVar15);
      if (*piVar1 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      bVar9 = true;
      dVar11 = dVar11 - *(double *)(pFVar5 + 0x30);
      dVar8 = dVar8 - *(double *)(pFVar5 + 0x28);
      auVar12._0_8_ = dVar11 * dVar11 + dVar8 * dVar8;
      auVar12._8_8_ = 0;
      auVar12 = sqrtpd(auVar12,auVar12);
      param_3->DistFromObstacle = (float)auVar12._0_8_;
      goto LAB_14b868d17;
    }
  }
  bVar9 = false;
LAB_14b868d17:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar9;
}

// AsyncCollision_MoveDecision_FollowCliff @ 14b868d60

bool __cdecl
FDS_ISKM_BoidState::AsyncCollision_MoveDecision_FollowCliff
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3)

{
  FWN_ISKM_BoidInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWN_AsyncCollision *this;
  TReferenceControllerBase<1> *pTVar3;
  FWN_AsyncCollision *this_00;
  code *pcVar4;
  double dVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_68;
  uint local_58;
  uint uStack_54;
  double dStack_50;
  undefined8 local_48;
  double local_40;
  double dStack_38;
  double local_30;
  
  pFVar1 = param_3->BoidInfo;
  pTVar2 = (param_3->AsyncCollision_FollowCliff).SharedReferenceCount.ReferenceController;
  this = (param_3->AsyncCollision_FollowCliff).Object;
  local_40 = (pFVar1->Transform).Translation.XY.m128d_f64[0];
  dStack_38 = (pFVar1->Transform).Translation.XY.m128d_f64[1];
  local_30 = (pFVar1->Transform).Translation.ZW.m128d_f64[0];
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_3->AsyncCollision_CheckCliff).SharedReferenceCount.ReferenceController;
  this_00 = (param_3->AsyncCollision_CheckCliff).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if (this_00 == (FWN_AsyncCollision *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  bVar8 = FWN_AsyncCollision::GetHitResults(this_00,&local_68,true);
  if (((!bVar8) || (local_68.ArrayNum < 1)) ||
     ((float)(*(double *)(local_68.AllocatorInstance.Data + 0x38) - local_30) <
      (float)((uint)param_3->StepHeight ^ __xmm_80000000800000008000000080000000))) {
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    bVar8 = FWN_AsyncCollision::GetHitResults(this,&local_68,true);
    FVar6.Data = local_68.AllocatorInstance.Data;
    if ((bVar8) && (iVar7 = local_68.ArrayNum, 0 < local_68.ArrayNum)) {
      dVar15 = *(double *)(local_68.AllocatorInstance.Data + 0x58);
      dStack_50 = *(double *)(local_68.AllocatorInstance.Data + 0x60);
      dVar5 = dStack_50 * dStack_50 + dVar15 * dVar15;
      if (dVar5 == __real_3ff0000000000000) {
        if (*(double *)(local_68.AllocatorInstance.Data + 0x68) == 0.0) {
          local_58 = *(uint *)(local_68.AllocatorInstance.Data + 0x58);
          uStack_54 = *(uint *)(local_68.AllocatorInstance.Data + 0x5c);
          dStack_50 = *(double *)(local_68.AllocatorInstance.Data + 0x60);
          local_48 = *(undefined8 *)(local_68.AllocatorInstance.Data + 0x68);
          uVar11 = local_58;
          uVar12 = uStack_54;
        }
        else {
LAB_14b868f24:
          local_48 = 0;
          uVar11 = SUB84(dVar15,0);
          uVar12 = (uint)((ulonglong)dVar15 >> 0x20);
        }
      }
      else {
        if (__real_3e45798ee0000000 <= dVar5) {
          dStack_50 = dStack_50 * (__real_3ff0000000000000 / SQRT(dVar5));
          dVar15 = dVar15 * (__real_3ff0000000000000 / SQRT(dVar5));
          goto LAB_14b868f24;
        }
        local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        dStack_50 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      }
      uVar13 = (uint)__xmm_80000000000000008000000000000000;
      uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      (param_2->field0_0x0)._s_0.X = (double)CONCAT44(uVar12 ^ uVar14,uVar11 ^ uVar13);
      (param_2->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dStack_50 >> 0x20) ^ uVar14,
                            SUB84(dStack_50,0) ^ uVar13);
      (param_2->field0_0x0)._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)local_48 >> 0x20) ^ uVar14,(uint)local_48 ^ uVar13);
      if (param_1 != &local_68) {
        param_1->ArrayNum = local_68.ArrayNum;
        if ((local_68.ArrayNum == 0) && (param_1->ArrayMax == 0)) {
          param_1->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,local_68.ArrayNum,param_1->ArrayMax,&param_1->AllocatorInstance,
                     local_68.ArrayNum,&param_1->ArrayMax);
          ConstructItems<FHitResult,FHitResult,int>
                    ((param_1->AllocatorInstance).Data,(FHitResult *)FVar6.Data,iVar7);
        }
      }
      if (local_68.ArrayNum < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      bVar8 = true;
      auVar10._0_8_ =
           (dStack_38 - *(double *)(local_68.AllocatorInstance.Data + 0x30)) *
           (dStack_38 - *(double *)(local_68.AllocatorInstance.Data + 0x30)) +
           (local_40 - *(double *)(local_68.AllocatorInstance.Data + 0x28)) *
           (local_40 - *(double *)(local_68.AllocatorInstance.Data + 0x28));
      auVar10._8_8_ = 0;
      auVar10 = sqrtpd(auVar10,auVar10);
      param_3->DistFromObstacle = (float)auVar10._0_8_;
      goto LAB_14b869030;
    }
  }
  bVar8 = false;
LAB_14b869030:
  if ((FHitResult *)local_68.AllocatorInstance.Data != (FHitResult *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar8;
}

// AsyncCollision_MoveDecision_FollowObstacle @ 14b869080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FDS_ISKM_BoidState::AsyncCollision_MoveDecision_FollowObstacle
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3)

{
  FWN_ISKM_BoidInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWN_AsyncCollision *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double local_a8;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68;
  TVector<double> local_48 [2];
  
  pFVar1 = param_3->BoidInfo;
  dVar6 = (pFVar1->Transform).Translation.XY.m128d_f64[0];
  dVar9 = (pFVar1->Transform).Translation.XY.m128d_f64[1];
  local_68.Z = (pFVar1->Transform).Rotation.ZW.m128d_f64[0];
  local_68.W = (pFVar1->Transform).Rotation.ZW.m128d_f64[1];
  local_68.X = (pFVar1->Transform).Rotation.XY.m128d_f64[0];
  local_68.Y = (pFVar1->Transform).Rotation.XY.m128d_f64[1];
  local_88._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_88._s_0.Y = _UNK_15061cbc8;
  local_88._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector(&local_68,local_48,(TVector<double> *)&local_88._s_0);
  pTVar2 = (param_3->AsyncCollision_FollowObstacle).SharedReferenceCount.ReferenceController;
  this = (param_3->AsyncCollision_FollowObstacle).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FWN_AsyncCollision *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  bVar7 = FWN_AsyncCollision::GetHitResults(this,param_1,true);
  if ((!bVar7) || (param_1->ArrayNum < 1)) {
    bVar7 = false;
    goto LAB_14b869272;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  dVar15 = *(double *)(pFVar3 + 0x58);
  dVar16 = *(double *)(pFVar3 + 0x60);
  dVar5 = dVar16 * dVar16 + dVar15 * dVar15;
  if (dVar5 == __real_3ff0000000000000) {
    if (*(double *)(pFVar3 + 0x68) == 0.0) {
      local_a8 = *(double *)(pFVar3 + 0x68);
      uVar11 = *(undefined4 *)(pFVar3 + 0x58);
      uVar12 = *(undefined4 *)(pFVar3 + 0x5c);
      uVar13 = *(undefined4 *)(pFVar3 + 0x60);
      uVar14 = *(undefined4 *)(pFVar3 + 100);
    }
    else {
LAB_14b8691d9:
      local_a8 = 0.0;
      uVar11 = SUB84(dVar15,0);
      uVar12 = (int)((ulonglong)dVar15 >> 0x20);
      uVar13 = SUB84(dVar16,0);
      uVar14 = (int)((ulonglong)dVar16 >> 0x20);
    }
  }
  else {
    if (__real_3e45798ee0000000 <= dVar5) {
      dVar15 = dVar15 * (__real_3ff0000000000000 / SQRT(dVar5));
      dVar16 = dVar16 * (__real_3ff0000000000000 / SQRT(dVar5));
      goto LAB_14b8691d9;
    }
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  *(undefined4 *)&param_2->field0_0x0 = uVar11;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uVar12;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 8) = uVar13;
  *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uVar14;
  (param_2->field0_0x0)._s_0.Z = local_a8;
  if (param_1->ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  bVar7 = true;
  dVar9 = dVar9 - *(double *)(pFVar3 + 0x30);
  dVar6 = dVar6 - *(double *)(pFVar3 + 0x28);
  auVar10._0_8_ = dVar9 * dVar9 + dVar6 * dVar6;
  auVar10._8_8_ = 0;
  auVar10 = sqrtpd(auVar10,auVar10);
  param_3->DistFromObstacle = (float)auVar10._0_8_;
LAB_14b869272:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar7;
}

// AsyncCollision_MoveDecision_Obstacle @ 14b8692a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FDS_ISKM_BoidState::AsyncCollision_MoveDecision_Obstacle
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3)

{
  FWN_ISKM_BoidInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWN_AsyncCollision *this;
  TReferenceControllerBase<1> *pTVar3;
  FWN_AsyncCollision *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar12;
  double dVar10;
  uint uVar13;
  uint uVar14;
  undefined1 auVar11 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double local_b8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TQuat<double> local_58;
  
  pFVar1 = param_3->BoidInfo;
  local_78._s_0.Z = 0.0;
  dVar7 = (pFVar1->Transform).Translation.XY.m128d_f64[0];
  dVar10 = (pFVar1->Transform).Translation.XY.m128d_f64[1];
  local_58.Z = (pFVar1->Transform).Rotation.ZW.m128d_f64[0];
  local_58.W = (pFVar1->Transform).Rotation.ZW.m128d_f64[1];
  local_58.X = (pFVar1->Transform).Rotation.XY.m128d_f64[0];
  local_58.Y = (pFVar1->Transform).Rotation.XY.m128d_f64[1];
  local_78._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_78._s_0.Y = _UNK_150689518;
  UE::Math::TQuat<double>::RotateVector
            (&local_58,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0);
  pTVar2 = (param_3->AsyncCollision_Obstacle).SharedReferenceCount.ReferenceController;
  this = (param_3->AsyncCollision_Obstacle).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_3->AsyncCollision_Move).SharedReferenceCount.ReferenceController;
  this_00 = (param_3->AsyncCollision_Move).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FWN_AsyncCollision *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  bVar8 = FWN_AsyncCollision::GetHitResults(this,param_1,true);
  if ((bVar8) && (0 < param_1->ArrayNum)) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    dVar21 = *(double *)(pFVar4 + 0x58);
    dVar22 = *(double *)(pFVar4 + 0x60);
    dVar6 = dVar22 * dVar22 + dVar21 * dVar21;
    if (dVar6 == __real_3ff0000000000000) {
      if (*(double *)(pFVar4 + 0x68) == 0.0) {
        local_b8 = *(double *)(pFVar4 + 0x68);
        uVar15 = *(undefined4 *)(pFVar4 + 0x58);
        uVar16 = *(undefined4 *)(pFVar4 + 0x5c);
        uVar17 = *(undefined4 *)(pFVar4 + 0x60);
        uVar18 = *(undefined4 *)(pFVar4 + 100);
      }
      else {
LAB_14b86940b:
        local_b8 = 0.0;
        uVar15 = SUB84(dVar21,0);
        uVar16 = (int)((ulonglong)dVar21 >> 0x20);
        uVar17 = SUB84(dVar22,0);
        uVar18 = (int)((ulonglong)dVar22 >> 0x20);
      }
    }
    else {
      if (__real_3e45798ee0000000 <= dVar6) {
        dVar21 = dVar21 * (__real_3ff0000000000000 / SQRT(dVar6));
        dVar22 = dVar22 * (__real_3ff0000000000000 / SQRT(dVar6));
        goto LAB_14b86940b;
      }
      local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    *(undefined4 *)&param_2->field0_0x0 = uVar15;
    *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uVar16;
    *(undefined4 *)((longlong)&param_2->field0_0x0 + 8) = uVar17;
    *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uVar18;
    (param_2->field0_0x0)._s_0.Z = local_b8;
  }
  else {
    if (this_00 == (FWN_AsyncCollision *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    bVar8 = FWN_AsyncCollision::GetHitResults(this_00,param_1,true);
    if (((!bVar8) || (param_1->ArrayNum < 1)) ||
       (pFVar4 = (param_1->AllocatorInstance).Data + 0x68,
       (double)param_3->WalkableZ < *(double *)pFVar4 ||
       (double)param_3->WalkableZ == *(double *)pFVar4)) {
      bVar8 = false;
      goto LAB_14b869526;
    }
    uVar12 = local_98._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar13 = local_98._8_4_ ^ _UNK_15066df78;
    uVar14 = local_98._12_4_ ^ _UNK_15066df7c;
    uVar19 = SUB84(local_98._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar20 = (uint)((ulonglong)local_98._16_8_ >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&param_2->field0_0x0 = local_98._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_2->field0_0x0 + 4) = uVar12;
    *(uint *)((longlong)&param_2->field0_0x0 + 8) = uVar13;
    *(uint *)((longlong)&param_2->field0_0x0 + 0xc) = uVar14;
    (param_2->field0_0x0)._s_0.Z = (double)CONCAT44(uVar20,uVar19);
  }
  if (param_1->ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  bVar8 = true;
  dVar10 = dVar10 - *(double *)(pFVar4 + 0x30);
  dVar7 = dVar7 - *(double *)(pFVar4 + 0x28);
  auVar11._0_8_ = dVar10 * dVar10 + dVar7 * dVar7;
  auVar11._8_8_ = 0;
  auVar11 = sqrtpd(auVar11,auVar11);
  param_3->DistFromObstacle = (float)auVar11._0_8_;
LAB_14b869526:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar8;
}

// AvoidMovement @ 14b869570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ISKM_BoidState::AvoidMovement
          (TTransform<double> *param_1,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3,FDS_ISKM_BoidsFSM_ExecutionContext *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  double local_140;
  double dStack_138;
  double local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88;
  TQuat<double> local_68;
  TQuat<double> local_48;
  
  local_140 = (param_1->Translation).XY.m128d_f64[0];
  dStack_138 = (param_1->Translation).XY.m128d_f64[1];
  local_130 = (param_1->Translation).ZW.m128d_f64[0];
  local_88.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_88.W = (param_1->Rotation).ZW.m128d_f64[1];
  local_88.X = (param_1->Rotation).XY.m128d_f64[0];
  local_88.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_128._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_128._s_0.Y = _UNK_15061cbc8;
  local_128._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_88,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_128._s_0);
  local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar3 = AsyncCollision_MoveDecision_FollowObstacle
                    (param_2,(TVector<double> *)&local_188._s_0,param_4);
  bVar4 = AsyncCollision_MoveDecision_FollowCliff
                    (param_2,(TVector<double> *)&local_188._s_0,param_4);
  if ((bVar3) || (bVar4)) {
    GetFollowObstacleDir(param_1,(TVector<double> *)&local_188._s_0,param_4);
    local_48.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_48.W = (param_1->Rotation).ZW.m128d_f64[1];
    local_48.X = (param_1->Rotation).XY.m128d_f64[0];
    local_48.Y = (param_1->Rotation).XY.m128d_f64[1];
    local_c8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_c8._s_0.Y = _UNK_150689518;
    local_c8._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_48,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0);
    (param_3->field0_0x0)._s_0.X = local_a8._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_a8._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_a8._s_0.Z;
    if (param_2->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    dStack_138 = dStack_138 - *(double *)(pFVar1 + 0x30);
    local_140 = local_140 - *(double *)(pFVar1 + 0x28);
    param_4->TurnToObstacle = true;
    param_4->TurnDistance = 0.0;
    auVar6._0_8_ = dStack_138 * dStack_138 + local_140 * local_140;
    auVar6._8_8_ = 0;
    auVar6 = sqrtpd(auVar6,auVar6);
    param_4->DistFromObstacle = (float)auVar6._0_8_;
  }
  else if (param_4->TurnToObstacle == true) {
    dVar8 = (double)param_4->ObstacleIsRight;
    local_158._s_0.X = local_170._s_0.X * dVar8;
    local_158._s_0.Y = local_170._s_0.Y * dVar8;
    local_158._s_0.Z = dVar8 * local_170._s_0.Z;
    WN_Boid_RotateToDir(param_1,(TVector<double> *)&local_158._s_0,(TRotator<double> *)0x0,
                        (TQuat<double> *)0x0);
    local_68.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_68.W = (param_1->Rotation).ZW.m128d_f64[1];
    local_68.X = (param_1->Rotation).XY.m128d_f64[0];
    local_68.Y = (param_1->Rotation).XY.m128d_f64[1];
    local_108._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_108._s_0.Y = _UNK_150689518;
    local_108._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_68,(TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_108._s_0);
    (param_3->field0_0x0)._s_0.X = local_e8._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_e8._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_e8._s_0.Z;
    param_4->TurnToObstacle = false;
  }
  else {
    fVar5 = param_4->DistFromObstacle + __real_41200000;
    fVar7 = param_4->LastDeltaSeconds * param_4->Speed + param_4->TurnDistance;
    param_4->TurnDistance = fVar7;
    if (fVar5 < fVar7) {
      param_4->IsBoidToDest = true;
      param_4->ObstacleIsRight = 0.0;
    }
  }
  return;
}

// CheckNonTransition @ 14b86a1d0

bool __thiscall FDS_ISKM_BoidState::CheckNonTransition(FDS_ISKM_BoidState *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->NonTransitionStateList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->NonTransitionStateList).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return true;
}

// GetFollowObstacleDir @ 14b877710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ISKM_BoidState::GetFollowObstacleDir
          (TTransform<double> *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88 [4];
  
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar9 = __real_3ff0000000000000;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
          dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar5 = dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
          dVar3 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar6 = dVar3 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
          dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar1 = dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar1 == __real_3ff0000000000000) {
    uVar7 = dVar4;
    uVar8 = dVar5;
    if ((double)uVar6 != 0.0) {
LAB_14b87780b:
      uVar7 = dVar4;
      uVar8 = dVar5;
      uVar6 = 0.0;
    }
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar1) {
      dVar5 = dVar5 * (__real_3ff0000000000000 / SQRT(dVar1));
      dVar4 = dVar4 * (__real_3ff0000000000000 / SQRT(dVar1));
      goto LAB_14b87780b;
    }
  }
  local_88[0].Z = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[0];
  local_88[0].W = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[1];
  local_88[0].X = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[0];
  local_88[0].Y = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[1];
  local_a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_a8._s_0.Y = _UNK_150689518;
  local_a8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (local_88,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
  dVar1 = dVar9;
  if ((float)(local_c8._s_0.Y * (double)uVar7 + local_c8._s_0.X * (double)uVar8 +
             local_c8._s_0.Z * (double)uVar6) < 0.0) {
    dVar1 = __real_bff0000000000000;
  }
  local_c8._s_0.Y = (double)uVar7 * dVar1;
  local_c8._s_0.X = (double)uVar8 * dVar1;
  local_c8._s_0.Z = (double)uVar6 * dVar1;
  dVar1 = local_c8._s_0.Y * local_c8._s_0.Y + local_c8._s_0.X * local_c8._s_0.X;
  if (dVar1 == dVar9) {
    if (local_c8._s_0.Z == 0.0) goto LAB_14b877911;
  }
  else {
    if (dVar1 < __real_3e45798ee0000000) {
      local_c8._s_0.Z = (double)uVar10;
      local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      goto LAB_14b877911;
    }
    local_c8._s_0.Y = local_c8._s_0.Y * (dVar9 / SQRT(dVar1));
    local_c8._s_0.X = (dVar9 / SQRT(dVar1)) * local_c8._s_0.X;
  }
  local_c8._s_0.Z = 0.0;
LAB_14b877911:
  WN_Boid_RotateToDir(param_1,(TVector<double> *)&local_c8._s_0,(TRotator<double> *)0x0,
                      (TQuat<double> *)0x0);
  return;
}

// GetNewDirection @ 14b878820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ISKM_BoidState::GetNewDirection
          (TTransform<double> *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3,bool param_4)

{
  double dVar1;
  FWN_ISKM_BoidInfo *pFVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  TQuat<double> local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8 [2];
  double local_c8;
  
  dVar8 = __real_3ff0000000000000;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar14 = (param_2->field0_0x0)._s_0.X;
  pFVar2 = param_3->BoidInfo;
  uVar15 = dVar14 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
           dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar13 = (param_2->field0_0x0)._s_0.Y;
  uVar4 = dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
          dVar13 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar5 = dVar13 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
          dVar14 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar1 = (double)uVar15 * (double)uVar15 + (double)uVar4 * (double)uVar4;
  if (dVar1 == __real_3ff0000000000000) {
    if ((double)uVar5 != 0.0) {
LAB_14b878955:
      uVar5 = 0.0;
    }
  }
  else {
    if (__real_3e45798ee0000000 <= dVar1) {
      uVar4 = (double)uVar4 * (__real_3ff0000000000000 / SQRT(dVar1));
      uVar15 = (double)uVar15 * (__real_3ff0000000000000 / SQRT(dVar1));
      goto LAB_14b878955;
    }
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_138.Z = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[0];
  local_138.W = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[1];
  local_138.X = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[0];
  local_138.Y = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[1];
  local_f8[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_f8[0]._s_0.Y = _UNK_15061cbc8;
  local_f8[0]._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_138,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_f8[0]._s_0);
  local_138.Z = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[0];
  local_138.W = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[1];
  local_138.X = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[0];
  local_138.Y = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[1];
  local_158 = ___xmm_00000000000000003ff0000000000000;
  dStack_150 = _UNK_150689518;
  local_148 = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_138,(TVector<double> *)&local_f8[0]._s_0,(TVector<double> *)&local_158);
  fVar21 = __real_3f800000;
  dVar14 = (pFVar2->Transform).Translation.XY.m128d_f64[0];
  dVar1 = (pFVar2->Transform).Translation.XY.m128d_f64[1];
  local_138.Z = (pFVar2->Transform).Translation.ZW.m128d_f64[0];
  fVar12 = __real_3f800000;
  if ((float)((double)local_f8[0]._8_8_ * (double)uVar15 + (double)local_f8[0]._0_8_ * (double)uVar4
             + (double)local_f8[0]._16_8_ * (double)uVar5) < __real_b8d1b717) {
    fVar12 = __real_bf800000;
  }
  dVar13 = (double)param_3->ObstacleIsRight;
  if ((param_3->ObstacleIsRight != 0.0) &&
     (fVar12 = __real_3f800000,
     0.0 <= dVar13 * local_118._s_0.X * (double)uVar4 + dVar13 * local_118._s_0.Y * (double)uVar15 +
            dVar13 * local_118._s_0.Z * (double)uVar5)) {
    fVar12 = __real_bf800000;
  }
  dVar16 = (double)fVar12;
  local_c8 = dVar16 * (double)uVar5;
  local_158 = dVar16 * (double)uVar4;
  dVar16 = dVar16 * (double)uVar15;
  if (0.0 < dVar13 * local_118._s_0.Y * dVar16 + dVar13 * local_118._s_0.X * local_158 +
            dVar13 * local_118._s_0.Z * local_c8) {
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar11,SUB84(dVar16,0) ^ uVar10);
    local_158 = (double)CONCAT44((uint)((ulonglong)local_158 >> 0x20) ^ uVar11,
                                 SUB84(local_158,0) ^ uVar10);
    local_c8 = (double)CONCAT44((uint)((ulonglong)local_c8 >> 0x20) ^ uVar11,
                                SUB84(local_c8,0) ^ uVar10);
  }
  uVar17 = SUB84(local_c8,0);
  uVar18 = (undefined4)((ulonglong)local_c8 >> 0x20);
  if (param_3->IsBoidToDest == true) {
    dVar13 = local_118._s_0.X * local_158 + local_118._s_0.Y * dVar16 + local_118._s_0.Z * local_c8;
    auVar3._8_4_ = SUB84(local_118._s_0.Y * dVar13,0);
    auVar3._0_8_ = local_118._s_0.X * dVar13;
    auVar3._12_4_ = (int)((ulonglong)(local_118._s_0.Y * dVar13) >> 0x20);
    *(undefined1 (*) [16])&(param_3->EscapeAvoidVec).field0_0x0 = auVar3;
    (param_3->EscapeAvoidVec).field0_0x0._s_0.Z = dVar13 * local_118._s_0.Z;
    dVar9 = __real_3e45798ee0000000;
    dVar6 = (param_1->Translation).XY.m128d_f64[1];
    dVar13 = (param_1->Translation).ZW.m128d_f64[0];
    uVar19 = SUB84(__real_3e45798ee0000000,0);
    uVar20 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    (param_3->AvoidStartPosition).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    (param_3->AvoidStartPosition).field0_0x0._s_0.Y = dVar6;
    dVar6 = (param_3->DestPos).field0_0x0._s_0.X;
    dVar7 = (param_3->DestPos).field0_0x0._s_0.Y;
    (param_3->AvoidStartPosition).field0_0x0._s_0.Z = dVar13;
    dVar14 = dVar14 - dVar6;
    dVar13 = local_138.Z - (param_3->DestPos).field0_0x0._s_0.Z;
    dVar1 = dVar1 - dVar7;
    param_3->AvoidDist = (float)SQRT(dVar1 * dVar1 + dVar14 * dVar14 + dVar13 * dVar13);
    dVar1 = dVar16 * dVar16 + local_158 * local_158;
    if (dVar1 == dVar8) {
      uVar15 = local_158;
      uVar4 = dVar16;
      if (local_c8 != 0.0) {
LAB_14b878c6f:
        uVar17 = 0;
        uVar18 = 0;
      }
    }
    else {
      if (dVar9 <= dVar1) {
        uVar15 = (dVar8 / SQRT(dVar1)) * local_158;
        uVar4 = dVar16 * (dVar8 / SQRT(dVar1));
        goto LAB_14b878c6f;
      }
      uVar17 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar18 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    if (((double)CONCAT44(uVar18,uVar17) * (double)local_f8[0]._0_8_ -
        (double)local_f8[0]._16_8_ * (double)uVar15) *
        UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
        ((double)uVar4 * (double)local_f8[0]._16_8_ -
        (double)CONCAT44(uVar18,uVar17) * (double)local_f8[0]._8_8_) *
        UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
        ((double)local_f8[0]._8_8_ * (double)uVar15 - (double)uVar4 * (double)local_f8[0]._0_8_) *
        UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z < 0.0) {
      fVar21 = __real_bf800000;
    }
    param_3->ObstacleIsRight = fVar21;
  }
  else {
    uVar19 = SUB84(__real_3e45798ee0000000,0);
    uVar20 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  }
  param_3->IsBoidToDest = false;
  dVar1 = dVar16 * dVar16 + local_158 * local_158;
  if (dVar1 == dVar8) {
    if (local_c8 == 0.0) {
      unique0x100005ab = SUB84(dVar16,0);
      unique0x100005af = (int)((ulonglong)dVar16 >> 0x20);
      local_148 = local_c8;
      goto LAB_14b878d82;
    }
  }
  else {
    if (dVar1 < (double)CONCAT44(uVar20,uVar19)) {
      dStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14b878d82;
    }
    local_158 = local_158 * (dVar8 / SQRT(dVar1));
    dVar16 = dVar16 * (dVar8 / SQRT(dVar1));
  }
  local_148 = 0.0;
  dStack_150 = dVar16;
LAB_14b878d82:
  WN_Boid_RotateToDir(param_1,(TVector<double> *)&local_158,(TRotator<double> *)0x0,
                      (TQuat<double> *)0x0);
  return;
}

// OnCheckTransition @ 14b886920

bool __thiscall
FDS_ISKM_BoidState::OnCheckTransition
          (FDS_ISKM_BoidState *this,FName param_1,FName param_2,FName param_3,float param_4,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_5)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->NonTransitionStateList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->NonTransitionStateList).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return true;
    }
    if (*pFVar2 == param_3) break;
    pFVar2 = pFVar2 + 1;
  }
  return false;
}

// OnEnterState @ 14b889150

void __thiscall
FDS_ISKM_BoidState::OnEnterState
          (FDS_ISKM_BoidState *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  (**(code **)(this->_padding_ + 0x18))();
  if ((param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
     (param_2->BoidInfo != (FWN_ISKM_BoidInfo *)0x0)) {
    if (this->AnimationName == (FName)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7391499980382405107>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState.cpp"
                         ,499,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      param_2->StateTime = 0.0;
      (**(code **)(this->_padding_ + 0x20))(this,param_1,param_2);
    }
  }
  return;
}

// OnLeaveState @ 14b88a1a0

void __thiscall
FDS_ISKM_BoidState::OnLeaveState
          (FDS_ISKM_BoidState *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  (**(code **)(this->_padding_ + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x00014b88a1d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))(this,param_1,param_2);
  return;
}

// OnPostEnterState @ 14b88d750

void __thiscall
FDS_ISKM_BoidState::OnPostEnterState
          (FDS_ISKM_BoidState *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  return;
}

// OnPostLeaveState @ 14b88e780

void __thiscall
FDS_ISKM_BoidState::OnPostLeaveState
          (FDS_ISKM_BoidState *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  return;
}

// OnPostUpdateState @ 14b88e9d0

void __thiscall
FDS_ISKM_BoidState::OnPostUpdateState
          (FDS_ISKM_BoidState *this,float param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  return;
}

// OnPreEnterState @ 14b891520

void __thiscall
FDS_ISKM_BoidState::OnPreEnterState
          (FDS_ISKM_BoidState *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  return;
}

// OnPreLeaveState @ 14b8917a0

void __thiscall
FDS_ISKM_BoidState::OnPreLeaveState
          (FDS_ISKM_BoidState *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  return;
}

// OnUpdateState @ 14b8951f0

void __thiscall
FDS_ISKM_BoidState::OnUpdateState
          (FDS_ISKM_BoidState *this,float param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  longlong lVar1;
  
  if (param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    lVar1 = this->_padding_;
    param_2->StateTime = param_1 + param_2->StateTime;
                    /* WARNING: Could not recover jumptable at 0x00014b89520d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  return;
}

// SetAnimation @ 14b8987f0

void __thiscall
FDS_ISKM_BoidState::SetAnimation(FDS_ISKM_BoidState *this,FName *param_1,float *param_2)

{
  this->AnimationName = *param_1;
  this->AnimationTotalTime = *param_2;
  return;
}

// SetInitialProperty @ 14b898be0

void __thiscall
FDS_ISKM_BoidState::SetInitialProperty(FDS_ISKM_BoidState *this,FDS_Boids_InitialProperty *param_1)

{
  this->ComebackDist = param_1->ComebackDist;
  this->ChaseApproachRange = param_1->ChaseApproachRange;
  this->ChaseRange = param_1->ChaseRange;
  this->RunAwayRange = param_1->RunAwayRange;
  this->RunAwayMinRange = param_1->RunAwayMinRange;
  this->RunAwayMaxRange = param_1->RunAwayMaxRange;
  this->RunAwayExceptedAngle = param_1->RunAwayExceptAngle;
  this->ProwlMinRange = param_1->ProwlMinRange;
  this->ProwlMaxRange = param_1->ProwlMaxRange;
  return;
}

// WN_Boid_Rotate @ 14b8a44b0

void __cdecl
FDS_ISKM_BoidState::WN_Boid_Rotate
          (TTransform<double> *param_1,float param_2,TRotator<double> *param_3,
          TQuat<double> *param_4)

{
  TRotator<double> local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  local_58.X = (param_1->Rotation).XY.m128d_f64[0];
  local_58.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_58.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_58.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_58,&local_78);
  local_78.Yaw = local_78.Yaw + (double)param_2;
  UE::Math::TRotator<double>::Quaternion(&local_78,&local_38);
  (param_1->Rotation).XY.m128d_f64[0] = local_38.X;
  (param_1->Rotation).XY.m128d_f64[1] = local_38.Y;
  (param_1->Rotation).ZW.m128d_f64[0] = local_38.Z;
  (param_1->Rotation).ZW.m128d_f64[1] = local_38.W;
  if (param_3 != (TRotator<double> *)0x0) {
    param_3->Pitch = local_78.Pitch;
    param_3->Yaw = local_78.Yaw;
    param_3->Roll = local_78.Roll;
  }
  if (param_4 != (TQuat<double> *)0x0) {
    param_4->X = local_38.X;
    param_4->Y = local_38.Y;
    param_4->Z = local_38.Z;
    param_4->W = local_38.W;
  }
  return;
}

// WN_Boid_RotateToAngle @ 14b8a4570

void __cdecl
FDS_ISKM_BoidState::WN_Boid_RotateToAngle
          (TTransform<double> *param_1,float param_2,TRotator<double> *param_3,
          TQuat<double> *param_4)

{
  TRotator<double> local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  local_58.X = (param_1->Rotation).XY.m128d_f64[0];
  local_58.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_58.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_58.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_58,&local_78);
  local_78.Yaw = (double)param_2;
  UE::Math::TRotator<double>::Quaternion(&local_78,&local_38);
  (param_1->Rotation).XY.m128d_f64[0] = local_38.X;
  (param_1->Rotation).XY.m128d_f64[1] = local_38.Y;
  (param_1->Rotation).ZW.m128d_f64[0] = local_38.Z;
  (param_1->Rotation).ZW.m128d_f64[1] = local_38.W;
  if (param_3 != (TRotator<double> *)0x0) {
    param_3->Pitch = local_78.Pitch;
    param_3->Yaw = local_78.Yaw;
    param_3->Roll = local_78.Roll;
  }
  if (param_4 != (TQuat<double> *)0x0) {
    param_4->X = local_38.X;
    param_4->Y = local_38.Y;
    param_4->Z = local_38.Z;
    param_4->W = local_38.W;
  }
  return;
}

// WN_Boid_RotateToAngle_Interp @ 14b8a4620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ISKM_BoidState::WN_Boid_RotateToAngle_Interp
          (TTransform<double> *param_1,float param_2,float param_3,float param_4,
          TRotator<double> *param_5,TQuat<double> *param_6)

{
  TQuat<double> *this;
  double dVar1;
  float fVar2;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  TVector<double>_u_0 local_a8;
  double dStack_90;
  TRotator<double> local_88;
  TQuat<double> local_68 [3];
  
  local_a8._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_a8._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_a8._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_a8._s_0,&local_88);
  local_a8._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Rotation).ZW.m128d_f64[1];
  local_a8._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_a8._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_c8._s_0.Z = 0.0;
  local_c8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_c8._s_0.Y = _UNK_150689518;
  local_88.Yaw = (double)param_2;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)&local_a8._s_0,(TVector<double> *)&local_e8._s_0,
             (TVector<double> *)&local_c8._s_0);
  this = UE::Math::TRotator<double>::Quaternion(&local_88,local_68);
  local_a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_a8._s_0.Y = _UNK_150689518;
  local_a8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (this,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_a8._s_0);
  fVar2 = param_4;
  if ((local_e8._s_0.Z * local_c8._s_0.X - local_c8._s_0.Z * local_e8._s_0.X) *
      UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
      (local_c8._s_0.Z * local_e8._s_0.Y - local_e8._s_0.Z * local_c8._s_0.Y) *
      UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
      (local_e8._s_0.X * local_c8._s_0.Y - local_e8._s_0.Y * local_c8._s_0.X) *
      UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z <= 0.0) {
    fVar2 = (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000);
  }
  dVar1 = acos(local_c8._s_0.Y * local_e8._s_0.Y + local_e8._s_0.X * local_c8._s_0.X +
               local_e8._s_0.Z * local_c8._s_0.Z);
  local_a8._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_a8._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_a8._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_90 = (param_1->Rotation).ZW.m128d_f64[1];
  if ((double)(param_4 * __real_3c8efa35 * param_3) <= dVar1) {
    UE::Math::TQuat<double>::Rotator
              ((TQuat<double> *)&local_a8._s_0,(TRotator<double> *)&local_e8._s_0);
    local_e8._s_0.Y = local_e8._s_0.Y + (double)(fVar2 * param_3);
  }
  else {
    UE::Math::TQuat<double>::Rotator
              ((TQuat<double> *)&local_a8._s_0,(TRotator<double> *)&local_e8._s_0);
    local_e8._s_0.Y = (double)param_2;
  }
  UE::Math::TRotator<double>::Quaternion
            ((TRotator<double> *)&local_e8._s_0,(TQuat<double> *)&local_c8._s_0);
  (param_1->Rotation).XY.m128d_f64[0] = local_c8._s_0.X;
  (param_1->Rotation).XY.m128d_f64[1] = local_c8._s_0.Y;
  (param_1->Rotation).ZW.m128d_f64[0] = local_c8._s_0.Z;
  (param_1->Rotation).ZW.m128d_f64[1] = dStack_b0;
  if (param_5 != (TRotator<double> *)0x0) {
    param_5->Pitch = local_e8._s_0.X;
    param_5->Yaw = local_e8._s_0.Y;
    param_5->Roll = local_e8._s_0.Z;
  }
  if (param_6 != (TQuat<double> *)0x0) {
    param_6->X = local_c8._s_0.X;
    param_6->Y = local_c8._s_0.Y;
    param_6->Z = local_c8._s_0.Z;
    param_6->W = dStack_b0;
  }
  return;
}

// WN_Boid_RotateToDir @ 14b8a4860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ISKM_BoidState::WN_Boid_RotateToDir
          (TTransform<double> *param_1,TVector<double> *param_2,TRotator<double> *param_3,
          TQuat<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TVector<double>_u_0 local_b8;
  TRotator<double> local_a0;
  TQuat<double> local_88;
  TVector<double>_u_0 local_68;
  TQuat<double> local_48 [2];
  
  local_88.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_88.W = (param_1->Rotation).ZW.m128d_f64[1];
  local_88.X = (param_1->Rotation).XY.m128d_f64[0];
  local_88.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_68._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689518;
  local_68._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_88,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_68._s_0);
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar6 = __real_c2652ee0;
  if (0.0 < (dVar2 * local_b8._s_0.Z - dVar1 * local_b8._s_0.X) *
            UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
            (dVar1 * local_b8._s_0.Y - dVar3 * local_b8._s_0.Z) *
            UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
            (dVar3 * local_b8._s_0.X - dVar2 * local_b8._s_0.Y) *
            UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z) {
    fVar6 = __real_42652ee0;
  }
  fVar4 = (float)(dVar2 * local_b8._s_0.X + dVar3 * local_b8._s_0.Y + dVar1 * local_b8._s_0.Z);
  fVar5 = __real_bf800000;
  if ((__real_bf800000 <= fVar4) && (fVar5 = fVar4, __real_3f800000 <= fVar4)) {
    fVar5 = __real_3f800000;
  }
  local_88.X = (param_1->Rotation).XY.m128d_f64[0];
  local_88.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_88.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_88.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_88,&local_a0);
  fVar5 = acosf(fVar5);
  local_a0.Yaw = local_a0.Yaw + (double)(fVar5 * fVar6);
  UE::Math::TRotator<double>::Quaternion(&local_a0,local_48);
  (param_1->Rotation).XY.m128d_f64[0] = local_48[0].X;
  (param_1->Rotation).XY.m128d_f64[1] = local_48[0].Y;
  (param_1->Rotation).ZW.m128d_f64[0] = local_48[0].Z;
  (param_1->Rotation).ZW.m128d_f64[1] = local_48[0].W;
  if (param_3 != (TRotator<double> *)0x0) {
    param_3->Pitch = local_a0.Pitch;
    param_3->Yaw = local_a0.Yaw;
    param_3->Roll = local_a0.Roll;
  }
  if (param_4 != (TQuat<double> *)0x0) {
    param_4->X = local_48[0].X;
    param_4->Y = local_48[0].Y;
    param_4->Z = local_48[0].Z;
    param_4->W = local_48[0].W;
  }
  return;
}

// WN_Boid_RotateToDir_Interp @ 14b8a4a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ISKM_BoidState::WN_Boid_RotateToDir_Interp
          (TTransform<double> *param_1,TVector<double> *param_2,float param_3,float param_4,
          TRotator<double> *param_5,TQuat<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  double dStack_60;
  TQuat<double> local_58 [2];
  
  local_58[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_58[0].W = (param_1->Rotation).ZW.m128d_f64[1];
  local_58[0].X = (param_1->Rotation).XY.m128d_f64[0];
  local_58[0].Y = (param_1->Rotation).XY.m128d_f64[1];
  local_78._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_78._s_0.Y = _UNK_150689518;
  local_78._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (local_58,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0);
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar5 = param_4;
  if ((dVar2 * local_98._s_0.Z - dVar1 * local_98._s_0.X) *
      UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
      (dVar1 * local_98._s_0.Y - dVar3 * local_98._s_0.Z) *
      UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
      (dVar3 * local_98._s_0.X - dVar2 * local_98._s_0.Y) *
      UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z <= 0.0) {
    fVar5 = (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000);
  }
  fVar4 = acosf((float)(dVar2 * local_98._s_0.X + dVar3 * local_98._s_0.Y + dVar1 * local_98._s_0.Z)
               );
  if (param_4 * __real_3c8efa35 * param_3 <= fVar4) {
    local_58[0].X = (param_1->Rotation).XY.m128d_f64[0];
    local_58[0].Y = (param_1->Rotation).XY.m128d_f64[1];
    local_58[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_58[0].W = (param_1->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(local_58,(TRotator<double> *)&local_98._s_0);
    local_98._s_0.Y = local_98._s_0.Y + (double)(fVar5 * param_3);
    UE::Math::TRotator<double>::Quaternion
              ((TRotator<double> *)&local_98._s_0,(TQuat<double> *)&local_78._s_0);
    (param_1->Rotation).XY.m128d_f64[0] = local_78._s_0.X;
    (param_1->Rotation).XY.m128d_f64[1] = local_78._s_0.Y;
    (param_1->Rotation).ZW.m128d_f64[0] = local_78._s_0.Z;
    (param_1->Rotation).ZW.m128d_f64[1] = dStack_60;
    if (param_5 != (TRotator<double> *)0x0) {
      param_5->Pitch = local_98._s_0.X;
      param_5->Yaw = local_98._s_0.Y;
      param_5->Roll = local_98._s_0.Z;
    }
    if (param_6 != (TQuat<double> *)0x0) {
      param_6->X = local_78._s_0.X;
      param_6->Y = local_78._s_0.Y;
      param_6->Z = local_78._s_0.Z;
      param_6->W = dStack_60;
    }
  }
  else {
    WN_Boid_RotateToDir(param_1,param_2,param_5,param_6);
  }
  return;
}

// WN_Boid_Rotate_Interp @ 14b8a4c30

void __cdecl
FDS_ISKM_BoidState::WN_Boid_Rotate_Interp
          (TTransform<double> *param_1,float param_2,float param_3,float param_4,
          TRotator<double> *param_5,TQuat<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  TRotator<double> local_98;
  TQuat<double> local_78;
  TQuat<double> local_58 [2];
  
  fVar5 = __real_bf800000;
  if (0.0 < param_2) {
    fVar5 = __real_3f800000;
  }
  dVar1 = (param_1->Rotation).XY.m128d_f64[0];
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  if (param_3 * param_4 <= (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_58[0].X = dVar1;
    local_58[0].Y = dVar2;
    local_58[0].Z = dVar3;
    local_58[0].W = dVar4;
    UE::Math::TQuat<double>::Rotator(local_58,&local_98);
    local_98.Yaw = local_98.Yaw + (double)(param_3 * param_4 * fVar5);
    UE::Math::TRotator<double>::Quaternion(&local_98,&local_78);
    local_58[0].Z._0_4_ = local_78.Z._0_4_;
    local_58[0].Z._4_4_ = local_78.Z._4_4_;
    local_58[0].W._0_4_ = local_78.W._0_4_;
    local_58[0].W._4_4_ = local_78.W._4_4_;
    local_58[0].X._0_4_ = local_78.X._0_4_;
    local_58[0].X._4_4_ = local_78.X._4_4_;
    local_58[0].Y._0_4_ = local_78.Y._0_4_;
    local_58[0].Y._4_4_ = local_78.Y._4_4_;
  }
  else {
    local_78.X = dVar1;
    local_78.Y = dVar2;
    local_78.Z = dVar3;
    local_78.W = dVar4;
    UE::Math::TQuat<double>::Rotator(&local_78,&local_98);
    local_98.Yaw = local_98.Yaw + (double)param_2;
    UE::Math::TRotator<double>::Quaternion(&local_98,local_58);
  }
  *(undefined4 *)(param_1->Rotation).XY.m128d_f64 = local_58[0].X._0_4_;
  *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 4) = local_58[0].X._4_4_;
  *(undefined4 *)((param_1->Rotation).XY.m128d_f64 + 1) = local_58[0].Y._0_4_;
  *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc) = local_58[0].Y._4_4_;
  *(undefined4 *)(param_1->Rotation).ZW.m128d_f64 = local_58[0].Z._0_4_;
  *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 4) = local_58[0].Z._4_4_;
  *(undefined4 *)((param_1->Rotation).ZW.m128d_f64 + 1) = local_58[0].W._0_4_;
  *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc) = local_58[0].W._4_4_;
  if (param_5 != (TRotator<double> *)0x0) {
    param_5->Pitch = local_98.Pitch;
    param_5->Yaw = local_98.Yaw;
    param_5->Roll = local_98.Roll;
  }
  if (param_6 != (TQuat<double> *)0x0) {
    *(undefined4 *)&param_6->X = local_58[0].X._0_4_;
    *(undefined4 *)((longlong)&param_6->X + 4) = local_58[0].X._4_4_;
    *(undefined4 *)&param_6->Y = local_58[0].Y._0_4_;
    *(undefined4 *)((longlong)&param_6->Y + 4) = local_58[0].Y._4_4_;
    *(undefined4 *)&param_6->Z = local_58[0].Z._0_4_;
    *(undefined4 *)((longlong)&param_6->Z + 4) = local_58[0].Z._4_4_;
    *(undefined4 *)&param_6->W = local_58[0].W._0_4_;
    *(undefined4 *)((longlong)&param_6->W + 4) = local_58[0].W._4_4_;
  }
  return;
}

// WN_Boid_SetDestPos @ 14b8a4d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FDS_ISKM_BoidState::WN_Boid_SetDestPos
          (EDS_ISKM_BoidsTargetType *param_1,TVector<double> *param_2,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  double dVar2;
  EDS_ISKM_BoidsTargetType EVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  double local_e0;
  TVector<double>_u_0 local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  
  local_b8 = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[0];
  dStack_b0 = (param_3->ExpectedTransform).Rotation.XY.m128d_f64[1];
  local_a8 = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[0];
  dStack_a0 = (param_3->ExpectedTransform).Rotation.ZW.m128d_f64[1];
  local_150._s_0.X = (param_3->ExpectedTransform).Translation.XY.m128d_f64[0];
  local_150._s_0.Y = (param_3->ExpectedTransform).Translation.XY.m128d_f64[1];
  local_150._s_0.Z = (param_3->ExpectedTransform).Translation.ZW.m128d_f64[0];
  EVar3 = *param_1;
  local_78 = (param_3->ExpectedTransform).Scale3D.XY.m128d_f64[0];
  dStack_70 = (param_3->ExpectedTransform).Scale3D.XY.m128d_f64[1];
  local_68 = (param_3->ExpectedTransform).Scale3D.ZW.m128d_f64[0];
  dStack_60 = (param_3->ExpectedTransform).Scale3D.ZW.m128d_f64[1];
  if (EVar3 == None) {
    local_168._s_0.X = local_150._s_0.X - (param_2->field0_0x0)._s_0.X;
    local_168._s_0.Z = local_150._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    local_168._s_0.Y = local_150._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar10 = local_168._s_0.Y * local_168._s_0.Y + local_168._s_0.X * local_168._s_0.X;
    if (dVar10 == __real_3ff0000000000000) {
      if (local_168._s_0.Z != 0.0) goto LAB_14b8a52e8;
    }
    else {
      if (__real_3f1a36e2e0000000 <= dVar10) {
        local_e0 = __real_3ff0000000000000 / SQRT(dVar10);
        local_168._s_0.X = local_168._s_0.X * local_e0;
        local_168._s_0.Y = local_168._s_0.Y * local_e0;
      }
      else {
        local_168._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_168._s_0.Y = _UNK_150689518;
      }
LAB_14b8a52e8:
      local_168._s_0.Z = 0.0;
    }
    fVar9 = *param_6;
    uVar8 = rand();
    UE::Math::TVector<double>::RotateAngleAxis
              ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_f8._s_0,
               (double)((float)(uVar8 & 0x7fff) * ((__real_43b40000 - fVar9) - fVar9) *
                        __real_38000100 + fVar9),&UE::Math::TVector<double>::UpVector);
    fVar1 = *param_4;
    fVar9 = *param_5;
    uVar8 = rand();
    fVar9 = (float)(uVar8 & 0x7fff) * (fVar1 - fVar9) * __real_38000100 + fVar9;
    local_128._s_0.Y = local_f8._s_0.Y;
    local_128._s_0.X = local_f8._s_0.X;
    local_128._s_0.Z = local_f8._s_0.Z;
  }
  else {
    if (EVar3 == MainPlayer) {
      FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_3,&local_138);
      if (local_138.Object != (FDS_ISKM_BoidsTargetInfo *)0x0) {
        local_180._s_0.X = ((local_138.Object)->TargetPos).field0_0x0._s_0.X - local_150._s_0.X;
        local_180._s_0.Y = ((local_138.Object)->TargetPos).field0_0x0._s_0.Y - local_150._s_0.Y;
        local_180._s_0.Z = ((local_138.Object)->TargetPos).field0_0x0._s_0.Z - local_150._s_0.Z;
        dVar10 = local_180._s_0.Y * local_180._s_0.Y + local_180._s_0.X * local_180._s_0.X;
        if (dVar10 == __real_3ff0000000000000) {
          if (local_180._s_0.Z != 0.0) {
LAB_14b8a5025:
            local_180._s_0.Z = 0.0;
          }
        }
        else {
          if (__real_3e45798ee0000000 <= dVar10) {
            local_180._s_0.X = local_180._s_0.X * (__real_3ff0000000000000 / SQRT(dVar10));
            local_180._s_0.Y = local_180._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar10));
            goto LAB_14b8a5025;
          }
          local_180._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
          local_180._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
          local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        dVar10 = ((local_138.Object)->TargetForward).field0_0x0._s_0.Z;
        dVar2 = ((local_138.Object)->TargetForward).field0_0x0._s_0.X;
        uVar8 = (uint)__xmm_80000000000000008000000000000000;
        uVar14 = SUB84(local_180._s_0.Y,0) ^ uVar8;
        uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar15 = (uint)((ulonglong)local_180._8_8_ >> 0x20) ^ uVar16;
        dVar11 = ((local_138.Object)->TargetForward).field0_0x0._s_0.Y;
        uVar12 = SUB84(local_180._s_0.X,0) ^ uVar8;
        uVar13 = (uint)((ulonglong)local_180._0_8_ >> 0x20) ^ uVar16;
        uVar8 = SUB84(local_180._s_0.Z,0) ^ uVar8;
        uVar16 = (uint)((ulonglong)local_180._s_0.Z >> 0x20) ^ uVar16;
        fVar9 = *param_6;
        if ((float)((dVar2 * (double)CONCAT44(uVar16,uVar8) -
                    dVar10 * (double)CONCAT44(uVar13,uVar12)) *
                    UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                    (dVar10 * (double)CONCAT44(uVar15,uVar14) -
                    dVar11 * (double)CONCAT44(uVar16,uVar8)) *
                    UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
                   (dVar11 * (double)CONCAT44(uVar13,uVar12) -
                   dVar2 * (double)CONCAT44(uVar15,uVar14)) *
                   UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) <= 0.0) {
          if (param_3->bIgnoreAngleLimit == false) {
            uVar8 = rand();
            fVar9 = (float)(uVar8 & 0x7fff) * (__real_43340000 - fVar9) * __real_38000100 + fVar9;
          }
          else {
            uVar8 = rand();
            fVar9 = (float)(uVar8 & 0x7fff) * (fVar9 + __real_43340000) * __real_38000100 +
                    __real_43340000;
          }
        }
        else if (param_3->bIgnoreAngleLimit == false) {
          uVar8 = rand();
          fVar9 = (float)(uVar8 & 0x7fff) * (__real_43340000 - fVar9) * __real_38000100 +
                  __real_43340000;
        }
        else {
          uVar8 = rand();
          fVar9 = (float)(uVar8 & 0x7fff) * (fVar9 + __real_43340000) * __real_38000100 - fVar9;
        }
        fVar5 = __real_38000100;
        UE::Math::TVector<double>::RotateAngleAxis
                  ((TVector<double> *)&local_180._s_0,(TVector<double> *)&local_110._s_0,
                   (double)fVar9,&UE::Math::TVector<double>::UpVector);
        fVar9 = *param_4;
        fVar1 = *param_5;
        uVar8 = rand();
        dVar11 = (double)((float)(uVar8 & 0x7fff) * (fVar9 - fVar1) * fVar5 + fVar1);
        dVar10 = (param_2->field0_0x0)._s_0.Y;
        dVar2 = (param_2->field0_0x0)._s_0.Z;
        (param_3->DestPos).field0_0x0._s_0.X =
             local_110._s_0.X * dVar11 + (param_2->field0_0x0)._s_0.X;
        (param_3->DestPos).field0_0x0._s_0.Y = local_110._s_0.Y * dVar11 + dVar10;
        (param_3->DestPos).field0_0x0._s_0.Z = local_110._s_0.Z * dVar11 + dVar2;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      goto LAB_14b8a53bc;
    }
    if (EVar3 != FollowObject) goto LAB_14b8a53bc;
    local_198._s_0.X = local_150._s_0.X - (param_2->field0_0x0)._s_0.X;
    local_198._s_0.Z = local_150._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    local_198._s_0.Y = local_150._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar10 = local_198._s_0.Y * local_198._s_0.Y + local_198._s_0.X * local_198._s_0.X;
    if (dVar10 == __real_3ff0000000000000) {
      if (local_198._s_0.Z != 0.0) goto LAB_14b8a4eaa;
    }
    else {
      if (__real_3f1a36e2e0000000 <= dVar10) {
        local_198._s_0.X = local_198._s_0.X * (__real_3ff0000000000000 / SQRT(dVar10));
        local_198._s_0.Y = local_198._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar10));
      }
      else {
        local_198._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_198._s_0.Y = _UNK_150689518;
      }
LAB_14b8a4eaa:
      local_198._s_0.Z = 0.0;
    }
    fVar9 = *param_6;
    uVar8 = rand();
    UE::Math::TVector<double>::RotateAngleAxis
              ((TVector<double> *)&local_198._s_0,(TVector<double> *)&local_128._s_0,
               (double)((float)(uVar8 & 0x7fff) * ((__real_43b40000 - fVar9) - fVar9) *
                        __real_38000100 + fVar9),&UE::Math::TVector<double>::UpVector);
    fVar1 = *param_4;
    fVar9 = *param_5;
    uVar8 = rand();
    fVar9 = (float)(uVar8 & 0x7fff) * (fVar1 - fVar9) * __real_38000100 + fVar9;
  }
  dVar11 = (double)fVar9;
  dVar10 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  (param_3->DestPos).field0_0x0._s_0.X = local_128._s_0.X * dVar11 + (param_2->field0_0x0)._s_0.X;
  (param_3->DestPos).field0_0x0._s_0.Y = local_128._s_0.Y * dVar11 + dVar10;
  (param_3->DestPos).field0_0x0._s_0.Z = local_128._s_0.Z * dVar11 + dVar2;
LAB_14b8a53bc:
  if (((param_3->BoidsNavSystem).Object == (FWN_BoidsNavSystem *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_d8._s_0.X = (param_3->DestPos).field0_0x0._s_0.X;
  local_d8._s_0.Y = (param_3->DestPos).field0_0x0._s_0.Y;
  local_d8._s_0.Z = (param_3->DestPos).field0_0x0._s_0.Z;
  bVar6 = FWN_BoidsNavSystem::FindRoute
                    ((param_3->BoidsNavSystem).Object,param_3->NavInfo,
                     (TVector<double> *)&local_150._s_0,(TVector<double> *)&local_d8._s_0);
  return bVar6;
}

