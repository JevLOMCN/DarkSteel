// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// ~FDS_ISKM_BoidState_Idle @ 14b865910

void __thiscall FDS_ISKM_BoidState_Idle::~FDS_ISKM_BoidState_Idle(FDS_ISKM_BoidState_Idle *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AnimationTimeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimationList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AddAnimationList @ 14b867bd0

void __thiscall
FDS_ISKM_BoidState_Idle::AddAnimationList
          (FDS_ISKM_BoidState_Idle *this,UWN_ISKM_Profile *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FWN_ISKM_AnimationInfo *pFVar9;
  float *pfVar10;
  FName *pFVar11;
  undefined1 local_res10 [8];
  
  if (param_1 != (UWN_ISKM_Profile *)0x0) {
    pFVar11 = (FName *)(param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar2 = pFVar11 + iVar3;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar11 == pFVar2) break;
      pFVar9 = UWN_ISKM_Profile::FindAnimationInfo(param_1,*pFVar11);
      if (pFVar9 == (FWN_ISKM_AnimationInfo *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9106528658452905757>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Idle.cpp"
                           ,0xe3,"false");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        pFVar4 = (FName *)(this->AnimationList).AllocatorInstance.Data;
        if (((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (this->AnimationList).ArrayMax)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (this->AnimationList).ArrayNum;
        piVar1 = &(this->AnimationList).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->AnimationList).AllocatorInstance,piVar1);
        }
        (this->AnimationList).ArrayNum = iVar8 + 1;
        pfVar10 = &pFVar9->TotalTime;
        *(FName *)((this->AnimationList).AllocatorInstance.Data + (longlong)iVar8 * 8) = *pFVar11;
        pFVar5 = (this->AnimationTimeList).AllocatorInstance.Data;
        if (((pFVar5 <= pfVar10) &&
            (pfVar10 < pFVar5 + (longlong)(this->AnimationTimeList).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (this->AnimationTimeList).ArrayNum;
        piVar1 = &(this->AnimationTimeList).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->AnimationTimeList).AllocatorInstance,piVar1);
        }
        (this->AnimationTimeList).ArrayNum = iVar8 + 1;
        *(float *)((this->AnimationTimeList).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             *pfVar10;
      }
      pFVar11 = pFVar11 + 1;
    }
  }
  return;
}

// OnCheckTransition @ 14b886ad0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FDS_ISKM_BoidState_Idle::OnCheckTransition
          (FDS_ISKM_BoidState_Idle *this,FName param_1,FName param_2,FName param_3,float param_4,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_5)

{
  FName *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FWeakObjectPtr local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  pFVar4 = (FName *)this->_padding_;
  pFVar1 = pFVar4 + (int)this->_padding_;
  for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 1) {
    if (*pFVar4 == param_3) {
      return false;
    }
  }
  if (FDS_ISKM_BoidState::sName_Idle == param_3) {
    return this->bShouldIdle;
  }
  if (FDS_ISKM_BoidState::sName_Escape == param_3) {
    return this->bShouldEscape;
  }
  if (FDS_ISKM_BoidState::sName_Roaming != param_3) {
    if (FDS_ISKM_BoidState::sName_Return == param_3) {
      return this->bShouldReturn;
    }
    if ((FDS_ISKM_BoidState::sName_Follow == param_3) && (this->bShouldFollow != false)) {
      local_98 = (param_5->FollowTargetInfo).TargetActor.WeakPtr;
      uStack_90 = *(undefined8 *)&(param_5->FollowTargetInfo).TargetType;
      local_88 = (param_5->FollowTargetInfo).TargetPos.field0_0x0._s_0.X;
      dStack_80 = (param_5->FollowTargetInfo).TargetPos.field0_0x0._s_0.Y;
      local_78 = (param_5->FollowTargetInfo).TargetPos.field0_0x0._s_0.Z;
      dStack_70 = (param_5->FollowTargetInfo).TargetForward.field0_0x0._s_0.X;
      local_68 = (param_5->FollowTargetInfo).TargetForward.field0_0x0._s_0.Y;
      dStack_60 = (param_5->FollowTargetInfo).TargetForward.field0_0x0._s_0.Z;
      local_58 = (param_5->FollowTargetInfo).TargetLeft.field0_0x0._s_0.X;
      dStack_50 = (param_5->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Y;
      local_48 = (param_5->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Z;
      dStack_40 = (param_5->FollowTargetInfo).TargetRight.field0_0x0._s_0.X;
      local_38 = (param_5->FollowTargetInfo).TargetRight.field0_0x0._s_0.Y;
      dStack_30 = (param_5->FollowTargetInfo).TargetRight.field0_0x0._s_0.Z;
      bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_98,(void *)0x0);
      if (bVar2) {
        uVar3 = this->bShouldFollow;
      }
      else {
        dStack_80 = (param_5->BoidInfo->Transform).Translation.XY.m128d_f64[1] - dStack_80;
        local_88 = (param_5->BoidInfo->Transform).Translation.XY.m128d_f64[0] - local_88;
        if ((this->bShouldFollow == false) ||
           ((float)SQRT(dStack_80 * dStack_80 + local_88 * local_88) <=
            *(float *)&this->_padding_ + __real_42c80000)) {
          uVar3 = 0;
          this->bShouldFollow = false;
        }
        else {
          uVar3 = 1;
          this->bShouldFollow = true;
        }
      }
      this->bShouldEscape = false;
      this->bShouldRomaing = false;
      this->bShouldReturn = false;
      return (bool)uVar3;
    }
    return false;
  }
  return this->bShouldRomaing;
}

// OnPostEnterState @ 14b88e590

void __thiscall
FDS_ISKM_BoidState_Idle::OnPostEnterState
          (FDS_ISKM_BoidState_Idle *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  FWN_ISKM_BoidInfo::PlayAnimation
            (param_2->BoidInfo,*(FName *)((longlong)&this->_padding_ + 4),0.0,__real_3f800000);
  return;
}

// OnPostLeaveState @ 14b88e890

void __thiscall
FDS_ISKM_BoidState_Idle::OnPostLeaveState
          (FDS_ISKM_BoidState_Idle *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  this->bShouldIdle = false;
  this->bShouldReturn = false;
  this->bShouldEscape = false;
  this->bShouldRomaing = false;
  this->bShouldFollow = false;
  return;
}

// OnPostUpdateState @ 14b8907a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDS_ISKM_BoidState_Idle::OnPostUpdateState
          (FDS_ISKM_BoidState_Idle *this,float param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  float *pfVar1;
  FWN_ISKM_BoidInfo *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWN_AsyncCollision *this_00;
  FScriptContainerElement *pFVar5;
  AWN_ISKM_BoidsActor *this_01;
  FWN_NavInfo *pFVar6;
  FDS_ISKM_BoidState *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  TSharedPtr<FDS_ISKM_BoidState,1> *pTVar16;
  FWN_BoidsNavSystem *this_02;
  float fVar17;
  double dVar18;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar20 [16];
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_148;
  double local_138;
  double dStack_130;
  double local_128;
  TSharedPtr<FDS_ISKM_BoidState,1> local_120;
  TSharedPtr<FDS_ISKM_BoidState,1> local_110;
  FWeakObjectPtr local_f8;
  undefined8 uStack_f0;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  
  if ((param_2 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
     (pFVar2 = param_2->BoidInfo, pFVar2 != (FWN_ISKM_BoidInfo *)0x0)) {
    local_138 = (pFVar2->Transform).Translation.XY.m128d_f64[0];
    dStack_130 = (pFVar2->Transform).Translation.XY.m128d_f64[1];
    local_128 = (pFVar2->Transform).Translation.ZW.m128d_f64[0];
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar3 + 0x9b50) & 1) == 0) {
      *(uint *)(lVar3 + 0x9b50) = *(uint *)(lVar3 + 0x9b50) | 1;
      __tlregdtor(`FDS_ISKM_BoidState_Idle::OnPostUpdateState'::__l2::
                  _dynamic_atexit_destructor_for__hitResults__);
    }
    pTVar4 = (param_2->AsyncCollision_Move).SharedReferenceCount.ReferenceController;
    this_00 = (param_2->AsyncCollision_Move).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FWN_AsyncCollision *)0x0) {
      FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_148);
      if (local_148.Object != (FDS_ISKM_BoidsTargetInfo *)0x0) {
        bVar14 = FWN_AsyncCollision::GetHitResults
                           (this_00,(TArray<FHitResult,TSizedDefaultAllocator<32>_> *)
                                    (lVar3 + 0x9b10),true);
        if (((bVar14) && (0 < *(int *)(lVar3 + 0x9b18))) &&
           (pFVar5 = (((TArray<FHitResult,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x9b10))->
                     AllocatorInstance).Data,
           (float)(*(double *)(pFVar5 + 0x38) - local_128) < param_2->StepHeight ||
           (float)(*(double *)(pFVar5 + 0x38) - local_128) == param_2->StepHeight)) {
          dVar10 = *(double *)(pFVar5 + 0x30);
          dVar18 = *(double *)(pFVar5 + 0x38);
          (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = *(double *)(pFVar5 + 0x28);
          (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = dVar10;
          (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = dVar18;
          (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = 0.0;
          this_01 = pFVar2->_Actor;
          dVar18 = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1];
          (pFVar2->Transform).Rotation.XY.m128d_f64[0] =
               (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
          (pFVar2->Transform).Rotation.XY.m128d_f64[1] = dVar18;
          dVar18 = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1];
          (pFVar2->Transform).Rotation.ZW.m128d_f64[0] =
               (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0];
          (pFVar2->Transform).Rotation.ZW.m128d_f64[1] = dVar18;
          dVar18 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[1];
          (pFVar2->Transform).Translation.XY.m128d_f64[0] =
               (param_2->ExpectedTransform).Translation.XY.m128d_f64[0];
          (pFVar2->Transform).Translation.XY.m128d_f64[1] = dVar18;
          dVar18 = (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1];
          (pFVar2->Transform).Translation.ZW.m128d_f64[0] =
               (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
          (pFVar2->Transform).Translation.ZW.m128d_f64[1] = dVar18;
          dVar18 = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1];
          (pFVar2->Transform).Scale3D.XY.m128d_f64[0] =
               (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0];
          (pFVar2->Transform).Scale3D.XY.m128d_f64[1] = dVar18;
          dVar18 = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1];
          (pFVar2->Transform).Scale3D.ZW.m128d_f64[0] =
               (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0];
          (pFVar2->Transform).Scale3D.ZW.m128d_f64[1] = dVar18;
          AActor::GetWorld((AActor *)this_01);
          pFVar6 = param_2->NavInfo;
          if ((pFVar6 != (FWN_NavInfo *)0x0) && ((pFVar6->TileGraph).ArrayNum != 0)) {
            if ((local_148.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar12 = dStack_130;
            dVar13 = local_138;
            dVar10 = local_138 - ((local_148.Object)->TargetPos).field0_0x0._s_0.X;
            dVar18 = dStack_130 - ((local_148.Object)->TargetPos).field0_0x0._s_0.Y;
            pTVar16 = FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
                                (param_2,&local_120,FDS_ISKM_BoidState::sName_Escape);
            if ((pTVar16->Object == (FDS_ISKM_BoidState *)0x0) ||
               (auVar19._8_8_ = 0, auVar19._0_8_ = dVar18 * dVar18 + dVar10 * dVar10,
               auVar19 = sqrtpd(extraout_XMM0,auVar19),
               *(float *)((longlong)&this->_padding_ + 4) <= (float)auVar19._0_8_)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_120.SharedReferenceCount.ReferenceController);
            }
            else {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_120.SharedReferenceCount.ReferenceController);
              this->bShouldEscape = true;
            }
            pTVar16 = FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
                                (param_2,&local_110,FDS_ISKM_BoidState::sName_Follow);
            pFVar7 = pTVar16->Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_110.SharedReferenceCount.ReferenceController);
            if (pFVar7 != (FDS_ISKM_BoidState *)0x0) {
              local_f8 = (param_2->FollowTargetInfo).TargetActor.WeakPtr;
              uStack_f0 = *(undefined8 *)&(param_2->FollowTargetInfo).TargetType;
              local_e8._s_0.X = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.X;
              local_e8._s_0.Y = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.Y;
              local_e8._s_0.Z = (param_2->FollowTargetInfo).TargetPos.field0_0x0._s_0.Z;
              dStack_d0 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.X;
              local_c8 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.Y;
              dStack_c0 = (param_2->FollowTargetInfo).TargetForward.field0_0x0._s_0.Z;
              local_b8 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.X;
              dStack_b0 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Y;
              local_a8 = (param_2->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Z;
              dStack_a0 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.X;
              local_98 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.Y;
              dStack_90 = (param_2->FollowTargetInfo).TargetRight.field0_0x0._s_0.Z;
              bVar14 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                                 ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_f8,(void *)0x0);
              if (!bVar14) {
                dVar10 = dVar13 - local_e8._s_0.X;
                dVar18 = dVar12 - local_e8._s_0.Y;
                this_02 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
                bVar14 = FWN_BoidsNavSystem::PointInNavInfo
                                   (this_02,pFVar6,(TVector<double> *)&local_e8._s_0);
                auVar9._8_8_ = 0;
                auVar9._0_8_ = dVar18 * dVar18 + dVar10 * dVar10;
                auVar19 = sqrtpd(extraout_XMM0_00,auVar9);
                if ((*(float *)((longlong)&this->_padding_ + 4) <= (float)auVar19._0_8_) ||
                   (!bVar14)) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                this->bShouldFollow = bVar14;
              }
            }
            fVar17 = pFVar2->_AnimSpeed * param_2->StateTime;
            pfVar1 = (float *)((longlong)&this->_padding_ + 4);
            if (*pfVar1 <= fVar17 && fVar17 != *pfVar1) {
              if ((this->bShouldRomaing == false) && (this->bShouldIdle == false)) {
                iVar15 = FMath::RandRange(1,100);
                if (iVar15 < 0x32) {
                  this->bShouldRomaing = true;
                }
                else {
                  this->bShouldIdle = true;
                }
              }
              dVar12 = dVar12 - (param_2->InitialPosition).field0_0x0._s_0.Y;
              dVar18 = local_128 - (param_2->InitialPosition).field0_0x0._s_0.Z;
              dVar13 = dVar13 - (param_2->InitialPosition).field0_0x0._s_0.X;
              auVar20._0_8_ = dVar18 * dVar18;
              auVar20._8_8_ = 0;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = dVar12 * dVar12 + dVar13 * dVar13 + auVar20._0_8_;
              auVar19 = sqrtpd(auVar20,auVar11);
              if (*(float *)&this->_padding_ <= (float)auVar19._0_8_ &&
                  (float)auVar19._0_8_ != *(float *)&this->_padding_) {
                this->bShouldReturn = true;
              }
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// OnPreEnterState @ 14b891570

void __thiscall
FDS_ISKM_BoidState_Idle::OnPreEnterState
          (FDS_ISKM_BoidState_Idle *this,FName param_1,FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = (this->AnimationList).ArrayNum;
  if (iVar1 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9106528658452905970>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Idle.cpp"
                       ,0xe,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1 == FDS_ISKM_BoidState::sName_Idle) {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)((longlong)&this->_padding_ + 4) !=
        *(longlong *)(this->AnimationList).AllocatorInstance.Data) {
      if (((this->AnimationTimeList).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AnimationTimeList).AllocatorInstance.Data;
      if (((this->AnimationList).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)((longlong)&this->_padding_ + 4) =
           *(undefined8 *)(this->AnimationList).AllocatorInstance.Data;
      uVar7 = *(undefined4 *)pFVar2;
      goto LAB_14b891773;
    }
  }
  uVar5 = FMath::RandRange(0,(this->AnimationList).ArrayNum + -1);
  uVar6 = 0;
  if ((int)uVar5 < (this->AnimationTimeList).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->AnimationTimeList).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar5 < (this->AnimationList).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((this->AnimationList).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  uVar7 = *(undefined4 *)(pFVar2 + (longlong)(int)uVar5 * 4);
LAB_14b891773:
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar7;
  param_2->MoveDist = 0.0;
  return;
}

