// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// FDS_ISKM_BoidsFSM_ExecutionContext @ 14b8642f0

FDS_ISKM_BoidsFSM_ExecutionContext * __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::FDS_ISKM_BoidsFSM_ExecutionContext
          (FDS_ISKM_BoidsFSM_ExecutionContext *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined8 *)&this->field_0x18 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  (this->AsyncCollision_Move).Object = (FWN_AsyncCollision *)0x0;
  (this->AsyncCollision_Move).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AsyncCollision_FlyLanding).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncCollision_FlyLanding).ArrayNum = 0;
  (this->AsyncCollision_FlyLanding).ArrayMax = 0;
  (this->BoidsNavSystem).Object = (FWN_BoidsNavSystem *)0x0;
  (this->BoidsNavSystem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AsyncCollision_Obstacle).Object = (FWN_AsyncCollision *)0x0;
  (this->AsyncCollision_Obstacle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AsyncCollision_FollowObstacle).Object = (FWN_AsyncCollision *)0x0;
  (this->AsyncCollision_FollowObstacle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AsyncCollision_Cliff).Object = (FWN_AsyncCollision *)0x0;
  (this->AsyncCollision_Cliff).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AsyncCollision_FollowCliff).Object = (FWN_AsyncCollision *)0x0;
  (this->AsyncCollision_FollowCliff).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AsyncCollision_CheckCliff).Object = (FWN_AsyncCollision *)0x0;
  (this->AsyncCollision_CheckCliff).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TargetInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetInfoList).ArrayNum = 0;
  (this->TargetInfoList).ArrayMax = 0;
  (this->BoidStateList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoidStateList).ArrayNum = 0;
  (this->BoidStateList).ArrayMax = 0;
  *(undefined ***)this = &___7FDS_ISKM_BoidsFSM_ExecutionContext__6B_;
  this->StateTime = 0.0;
  this->BoidInfo = (FWN_ISKM_BoidInfo *)0x0;
  this->ContextIndex = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExpectedTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExpectedTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExpectedTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExpectedTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExpectedTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExpectedTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->LastState).ComparisonIndex = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastState).Number = 0;
  (this->InitialPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialPosition).field0_0x0._s_0.Y = (double)uVar9;
  (this->InitialPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DestPos).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DestPos).field0_0x0._s_0.Y = (double)uVar9;
  (this->DestPos).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RotateToAngle = 0.0;
  this->AngularSpeed = 30.0;
  this->Speed = 0.0;
  this->MaxSpeed = 0.0;
  this->Acceleration = 0.0;
  this->MoveDecision = true;
  this->LastDeltaSeconds = 0.0;
  this->StepHeight = 45.0;
  this->WalkableZ = 0.71;
  this->ObstacleIsRight = 0.0;
  this->IsBoidToDest = true;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->TurnToObstacle = false;
  (this->AvoidStartPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AvoidStartPosition).field0_0x0._s_0.Y = (double)uVar9;
  (this->AvoidStartPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EscapeAvoidVec).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->EscapeAvoidVec).field0_0x0._s_0.Y = (double)uVar9;
  (this->EscapeAvoidVec).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->AvoidDist = 0.0;
  this->DistFromObstacle = 0.0;
  this->TurnDistance = 0.0;
  this->MoveDist = 0.0;
  this->NavInfo = (FWN_NavInfo *)0x0;
  this->bIsFlying = false;
  *(undefined8 *)&(this->FollowTargetInfo).field_0xc = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetPos.field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetPos.field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetPos.field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetForward.field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetForward.field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetForward.field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetLeft.field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetRight.field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetRight.field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(this->FollowTargetInfo).TargetRight.field0_0x0._s_0.Z + 4) = 0;
  this->bIgnoreAngleLimit = false;
  (this->FollowTargetInfo).TargetActor.WeakPtr = (FWeakObjectPtr)0x0;
  (this->FollowTargetInfo).TargetType = None;
  this->IgnoreAngleFindRouteCount = 0;
  this->LimitFindRouteCount = 10;
  return this;
}

// ~FDS_ISKM_BoidsFSM_ExecutionContext @ 14b865ad0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::~FDS_ISKM_BoidsFSM_ExecutionContext
          (FDS_ISKM_BoidsFSM_ExecutionContext *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FDS_ISKM_BoidsFSM_ExecutionContext__6B_;
  DestructItems<TSharedPtr<FDS_ISKM_BoidState,1>,int>
            ((TSharedPtr<FDS_ISKM_BoidState,1> *)(this->BoidStateList).AllocatorInstance.Data,
             (this->BoidStateList).ArrayNum);
  pFVar1 = (this->BoidStateList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
            ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(this->TargetInfoList).AllocatorInstance.Data
             ,(this->TargetInfoList).ArrayNum);
  pFVar1 = (this->TargetInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncCollision_CheckCliff).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncCollision_FollowCliff).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncCollision_Cliff).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncCollision_FollowObstacle).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncCollision_Obstacle).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoidsNavSystem).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FWN_AsyncCollision,1>,int>
            ((TSharedPtr<FWN_AsyncCollision,1> *)
             (this->AsyncCollision_FlyLanding).AllocatorInstance.Data,
             (this->AsyncCollision_FlyLanding).ArrayNum);
  pFVar1 = (this->AsyncCollision_FlyLanding).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncCollision_Move).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// AddState @ 14b868280

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::AddState
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,TSharedPtr<FDS_ISKM_BoidState,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FDS_ISKM_BoidState,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FDS_ISKM_BoidState,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_1->Object == (FDS_ISKM_BoidState *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1455516613628395447>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\ExecutionContext\\DS_ISKM_BoidsFSM_ExecutionContext.cpp"
                       ,0x49,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pTVar2 = &this->BoidStateList;
    pTVar3 = (TSharedPtr<FDS_ISKM_BoidState,1> *)(pTVar2->AllocatorInstance).Data;
    if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->BoidStateList).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->BoidStateList).ArrayNum;
    piVar1 = &(this->BoidStateList).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->BoidStateList).ArrayNum = iVar7 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(FDS_ISKM_BoidState **)pFVar8 = param_1->Object;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// AddTargetInfo @ 14b8684e0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::AddTargetInfo
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = &this->TargetInfoList;
  pTVar3 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->TargetInfoList).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->TargetInfoList).ArrayNum;
  piVar1 = &(this->TargetInfoList).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TargetInfoList).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FDS_ISKM_BoidsTargetInfo **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// CheckTransition @ 14b86a200

bool __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::CheckTransition
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FName param_1,FName param_2,FName param_3,
          float param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FDS_ISKM_BoidState,1> local_18;
  
  GetBoidState(this,&local_18,param_2);
  if (local_18.Object == (FDS_ISKM_BoidState *)0x0) {
    uVar3 = 0;
  }
  else {
    if (local_18.Object == (FDS_ISKM_BoidState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    uVar3 = (**(code **)((local_18.Object)->_padding_ + 8))
                      (local_18.Object,param_1,param_2,param_3,param_4,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// EnterState @ 14b86f2b0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::EnterState
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ISKM_BoidState,1> local_18;
  
  GetBoidState(this,&local_18,param_1);
  if (local_18.Object != (FDS_ISKM_BoidState *)0x0) {
    if (local_18.Object == (FDS_ISKM_BoidState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((local_18.Object)->_padding_ + 0x18))(local_18.Object,param_2,this);
    if ((this != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) &&
       (this->BoidInfo != (FWN_ISKM_BoidInfo *)0x0)) {
      if ((local_18.Object)->AnimationName == (FName)0x0) {
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
        this->StateTime = 0.0;
        (**(code **)((local_18.Object)->_padding_ + 0x20))(local_18.Object,param_2,this);
      }
    }
    this->LastState = param_1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// FailedToFindRoute @ 14b8758e0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::FailedToFindRoute(FDS_ISKM_BoidsFSM_ExecutionContext *this)

{
  uint uVar1;
  
  uVar1 = this->FailedToFindRouteCount;
  if (this->LimitFindRouteCount <= uVar1) {
    this->IgnoreAngleFindRouteCount = this->IgnoreAngleFindRouteCount + 1;
    uVar1 = 0;
    this->bIgnoreAngleLimit = true;
  }
  this->FailedToFindRouteCount = uVar1 + 1;
  return;
}

// Finalize @ 14b875910

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::Finalize
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FWN_AsyncCollision,1> *pTVar3;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar4;
  TSharedPtr<FDS_ISKM_BoidState,1> *pTVar5;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->BoidsNavSystem != (TSharedPtr<FWN_BoidsNavSystem,1> *)&local_28) {
    (this->BoidsNavSystem).Object = (FWN_BoidsNavSystem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BoidsNavSystem).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  piVar1 = &(this->AsyncCollision_FlyLanding).ArrayMax;
  pTVar3 = (TSharedPtr<FWN_AsyncCollision,1> *)
           (this->AsyncCollision_FlyLanding).AllocatorInstance.Data;
  iVar2 = (this->AsyncCollision_FlyLanding).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FWN_AsyncCollision,1>,int>(pTVar3,iVar2);
    (this->AsyncCollision_FlyLanding).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->AsyncCollision_FlyLanding).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FWN_AsyncCollision,1>,int>(pTVar3,iVar2);
    (this->AsyncCollision_FlyLanding).ArrayNum = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AsyncCollision_Move != (TSharedPtr<FWN_AsyncCollision,1> *)&local_18) {
    (this->AsyncCollision_Move).Object = (FWN_AsyncCollision *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncCollision_Move).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  piVar1 = &(this->TargetInfoList).ArrayMax;
  pTVar4 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(this->TargetInfoList).AllocatorInstance.Data;
  iVar2 = (this->TargetInfoList).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>(pTVar4,iVar2);
    (this->TargetInfoList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->TargetInfoList).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>(pTVar4,iVar2);
    (this->TargetInfoList).ArrayNum = 0;
  }
  piVar1 = &(this->BoidStateList).ArrayMax;
  pTVar5 = (TSharedPtr<FDS_ISKM_BoidState,1> *)(this->BoidStateList).AllocatorInstance.Data;
  iVar2 = (this->BoidStateList).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FDS_ISKM_BoidState,1>,int>(pTVar5,iVar2);
    (this->BoidStateList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->BoidStateList).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ISKM_BoidState,1>,int>(pTVar5,iVar2);
    (this->BoidStateList).ArrayNum = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b875a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x50))(this,param_2);
  return;
}

// GetBoidState @ 14b8765a0

TSharedPtr<FDS_ISKM_BoidState,1> * __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::GetBoidState
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,
          TSharedPtr<FDS_ISKM_BoidState,1> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ISKM_BoidState *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FDS_ISKM_BoidState,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BoidStateList).ArrayNum;
  pFVar7 = (this->BoidStateList).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BoidStateList).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      __return_storage_ptr__->Object = (FDS_ISKM_BoidState *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    pFVar3 = *(FDS_ISKM_BoidState **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FDS_ISKM_BoidState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    if (pFVar3->StateName == param_1) {
      __return_storage_ptr__->Object = pFVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  pcVar4 = (code *)swi(3);
  pTVar6 = (TSharedPtr<FDS_ISKM_BoidState,1> *)(*pcVar4)();
  return pTVar6;
}

// GetMainPlayerInfo @ 14b877f60

TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> * __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,
          TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ISKM_BoidsTargetInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TargetInfoList).ArrayNum;
  pFVar4 = (this->TargetInfoList).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->TargetInfoList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      __return_storage_ptr__->Object = (FDS_ISKM_BoidsTargetInfo *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    pFVar3 = *(FDS_ISKM_BoidsTargetInfo **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 != (FDS_ISKM_BoidsTargetInfo *)0x0) && (pFVar3->TargetType == MainPlayer)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTargetInfo @ 14b879550

TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::GetTargetInfo
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,
          TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_ISKM_BoidsTargetType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  uint local_res10;
  EDS_ISKM_BoidsTargetType local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = (this->TargetInfoList).ArrayNum;
  uVar5 = (ulonglong)(int)local_res10;
  pFVar6 = (this->TargetInfoList).AllocatorInstance.Data;
  pFVar7 = pFVar6 + uVar5 * 0x10;
  local_res18 = param_1;
  while( true ) {
    if ((this->TargetInfoList).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    lVar2 = *(longlong *)pFVar6;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar2 != 0) && (*(EDS_ISKM_BoidsTargetType *)(lVar2 + 8) == local_res18)) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(longlong *)(pFVar3 + (longlong)iVar4 * 0x10) = lVar2;
      *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar4 * 0x10 + 8) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    uVar5 = (ulonglong)local_res10;
    pFVar6 = pFVar6 + 0x10;
  }
  return __return_storage_ptr__;
}

// Initialize @ 14b87cc40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::Initialize
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FWN_AsyncCollision,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FSharedReferencer<1> FVar12;
  FWN_BoidsNavSystem *pFVar13;
  FWN_BoidsNavSystem *local_88;
  FSharedReferencer<1> FStack_80;
  FWN_BoidsNavSystem *local_78;
  FSharedReferencer<1> FStack_70;
  FWN_AsyncCollision *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<FWN_AsyncCollision,1> local_58;
  double local_48;
  double dStack_40;
  double local_38;
  
  if (param_2 == (FWN_ISKM_BoidInfo *)0x0) {
    return;
  }
  this->ContextIndex = param_1;
  dVar4 = (param_2->Transform).Rotation.XY.m128d_f64[1];
  (this->ExpectedTransform).Rotation.XY.m128d_f64[0] = (param_2->Transform).Rotation.XY.m128d_f64[0]
  ;
  (this->ExpectedTransform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  (this->ExpectedTransform).Rotation.ZW.m128d_f64[0] = (param_2->Transform).Rotation.ZW.m128d_f64[0]
  ;
  (this->ExpectedTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_2->Transform).Translation.XY.m128d_f64[1];
  (this->ExpectedTransform).Translation.XY.m128d_f64[0] =
       (param_2->Transform).Translation.XY.m128d_f64[0];
  (this->ExpectedTransform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_2->Transform).Translation.ZW.m128d_f64[1];
  (this->ExpectedTransform).Translation.ZW.m128d_f64[0] =
       (param_2->Transform).Translation.ZW.m128d_f64[0];
  (this->ExpectedTransform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  (this->ExpectedTransform).Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  (this->ExpectedTransform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  (this->ExpectedTransform).Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  (this->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  local_48 = (param_2->Transform).Translation.XY.m128d_f64[0];
  dStack_40 = (param_2->Transform).Translation.XY.m128d_f64[1];
  local_38 = (param_2->Transform).Translation.ZW.m128d_f64[0];
  (this->InitialPosition).field0_0x0._s_0.X = local_48;
  (this->InitialPosition).field0_0x0._s_0.Y = dStack_40;
  (this->InitialPosition).field0_0x0._s_0.Z = local_38;
  pTVar7 = ::operator_new(0x30);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_78 = ___xmm_00000000000000000000000000000010;
    pFVar13 = (FWN_BoidsNavSystem *)&DAT_00000010;
    FStack_70.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWN_BoidsNavSystem___00_SharedPointerInternals__6B_;
    FWN_BoidsNavSystem::FWN_BoidsNavSystem((FWN_BoidsNavSystem *)(pTVar7 + 1));
    pFVar13 = (FWN_BoidsNavSystem *)(pTVar7 + 1);
    if ((pFVar13 == (FWN_BoidsNavSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FStack_70.ReferenceController = pTVar7;
    pTVar9 = pTVar7;
    local_78 = pFVar13;
  }
  if (&this->BoidsNavSystem != (TSharedPtr<FWN_BoidsNavSystem,1> *)&local_78) {
    (this->BoidsNavSystem).Object = pFVar13;
    local_78 = (FWN_BoidsNavSystem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BoidsNavSystem).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar8 = MakeShared<FWN_AsyncCollision,1>(&local_58);
  local_60.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_68 = pTVar8->Object;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->AsyncCollision_Move != (TSharedPtr<FWN_AsyncCollision,1> *)&local_68) {
    (this->AsyncCollision_Move).Object = local_68;
    local_68 = (FWN_AsyncCollision *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AsyncCollision_Move).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  iVar11 = (this->AsyncCollision_FlyLanding).ArrayNum;
  piVar1 = &(this->AsyncCollision_FlyLanding).ArrayNum;
  if (iVar11 < 3) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,3 - iVar11,&(this->AsyncCollision_FlyLanding).AllocatorInstance,piVar1
                       ,&(this->AsyncCollision_FlyLanding).ArrayMax);
    memset((this->AsyncCollision_FlyLanding).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)(3 - iVar11) << 4);
  }
  else if (3 < iVar11) {
    iVar11 = iVar11 + -3;
    if (iVar11 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar11 == 0) goto LAB_14b87ced6;
    TArray<TSharedPtr<FWN_AsyncCollision,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->AsyncCollision_FlyLanding,3,iVar11);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->AsyncCollision_FlyLanding).AllocatorInstance,*piVar1,
               &(this->AsyncCollision_FlyLanding).ArrayMax);
  }
LAB_14b87ced6:
  pTVar9 = ::operator_new(0x98);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    FVar12.ReferenceController = _UNK_150651568;
    pFVar13 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWN_AsyncCollision___00_SharedPointerInternals__6B_;
    FWN_AsyncCollision::FWN_AsyncCollision((FWN_AsyncCollision *)(pTVar9 + 1));
    if (((FWN_BoidsNavSystem *)(pTVar9 + 1) == (FWN_BoidsNavSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FVar12.ReferenceController = pTVar9;
    pFVar13 = (FWN_BoidsNavSystem *)(pTVar9 + 1);
  }
  local_88 = pFVar13;
  FStack_80.ReferenceController = FVar12.ReferenceController;
  if ((*piVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->AsyncCollision_FlyLanding).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)&local_88) {
    *(FWN_BoidsNavSystem **)pFVar2 = pFVar13;
    local_88 = (FWN_BoidsNavSystem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar2 + 8),&FStack_80);
    FVar12.ReferenceController = FStack_80.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = ::operator_new(0x98);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    FVar12.ReferenceController = _UNK_150651568;
    pFVar13 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWN_AsyncCollision___00_SharedPointerInternals__6B_;
    FWN_AsyncCollision::FWN_AsyncCollision((FWN_AsyncCollision *)(pTVar9 + 1));
    if (((FWN_BoidsNavSystem *)(pTVar9 + 1) == (FWN_BoidsNavSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FVar12.ReferenceController = pTVar9;
    pFVar13 = (FWN_BoidsNavSystem *)(pTVar9 + 1);
  }
  local_88 = pFVar13;
  FStack_80.ReferenceController = FVar12.ReferenceController;
  if ((*piVar1 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->AsyncCollision_FlyLanding).AllocatorInstance.Data;
  pFVar10 = pFVar2 + 0x10;
  if (pFVar10 != (FScriptContainerElement *)&local_88) {
    *(FWN_BoidsNavSystem **)pFVar10 = pFVar13;
    local_88 = (FWN_BoidsNavSystem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar2 + 0x18),&FStack_80);
    FVar12.ReferenceController = FStack_80.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = ::operator_new(0x98);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = ___xmm_00000000000000000000000000000010;
    FVar12.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWN_AsyncCollision___00_SharedPointerInternals__6B_;
    FWN_AsyncCollision::FWN_AsyncCollision((FWN_AsyncCollision *)(pTVar9 + 1));
    if (((FWN_BoidsNavSystem *)(pTVar9 + 1) == (FWN_BoidsNavSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pFVar13 = (FWN_BoidsNavSystem *)(pTVar9 + 1);
    FVar12.ReferenceController = pTVar9;
  }
  local_88 = pFVar13;
  FStack_80.ReferenceController = FVar12.ReferenceController;
  if ((*piVar1 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->AsyncCollision_FlyLanding).AllocatorInstance.Data;
  pFVar10 = pFVar2 + 0x20;
  if (pFVar10 != (FScriptContainerElement *)&local_88) {
    *(FWN_BoidsNavSystem **)pFVar10 = pFVar13;
    local_88 = (FWN_BoidsNavSystem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar2 + 0x28),&FStack_80);
    FVar12.ReferenceController = FStack_80.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  this->BoidInfo = param_2;
  (**(code **)(*(longlong *)this + 0x48))(this,param_2);
  return;
}

// LeaveState @ 14b87ed80

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::LeaveState
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ISKM_BoidState,1> local_18;
  
  GetBoidState(this,&local_18,param_1);
  if (local_18.Object != (FDS_ISKM_BoidState *)0x0) {
    if (local_18.Object == (FDS_ISKM_BoidState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((local_18.Object)->_padding_ + 0x28))(local_18.Object,param_2,this);
    (**(code **)((local_18.Object)->_padding_ + 0x30))(local_18.Object,param_2,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnFinalize @ 14b889260

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::OnFinalize
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FWN_ISKM_BoidInfo *param_1)

{
  return;
}

// OnInitialize @ 14b88a130

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::OnInitialize
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FWN_ISKM_BoidInfo *param_1)

{
  return;
}

// PostExecute @ 14b895240

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::PostExecute
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,float param_1)

{
  return;
}

// PreExecute @ 14b895750

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::PreExecute
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,float param_1)

{
  return;
}

// SetBoidInfo @ 14b898810

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SetBoidInfo
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FWN_ISKM_BoidInfo *param_1)

{
  if (param_1 != (FWN_ISKM_BoidInfo *)0x0) {
    this->BoidInfo = param_1;
  }
  return;
}

// SetExpectedRotation @ 14b898830

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SetExpectedRotation
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  dVar3 = param_1->W;
  (this->ExpectedTransform).Rotation.XY.m128d_f64[0] = param_1->X;
  (this->ExpectedTransform).Rotation.XY.m128d_f64[1] = dVar1;
  (this->ExpectedTransform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->ExpectedTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  return;
}

// SetFollowTargetInfo @ 14b8989e0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SetFollowTargetInfo
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(local_res10);
  dVar4 = __real_3ff0000000000000;
  if (bVar5) {
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    (this->FollowTargetInfo).TargetActor.WeakPtr = local_res10[0];
    (this->FollowTargetInfo).TargetType = FollowObject;
    dVar2 = (param_2->Translation).XY.m128d_f64[1];
    dVar1 = (param_2->Translation).ZW.m128d_f64[0];
    (this->FollowTargetInfo).TargetPos.field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    (this->FollowTargetInfo).TargetPos.field0_0x0._s_0.Y = dVar2;
    (this->FollowTargetInfo).TargetPos.field0_0x0._s_0.Z = dVar1;
    dVar1 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar3 = (param_2->Rotation).XY.m128d_f64[0];
    dVar11 = (param_2->Rotation).XY.m128d_f64[1];
    dVar9 = dVar1 + dVar1;
    dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar11 + dVar11) >> 0x20) ^ uVar13,
                             SUB84(dVar11 + dVar11,0) ^ uVar12);
    (this->FollowTargetInfo).TargetForward.field0_0x0._s_0.X =
         (dVar11 * dVar8 - dVar1 * dVar9) + dVar4;
    dVar10 = dVar3 + dVar3;
    (this->FollowTargetInfo).TargetForward.field0_0x0._s_0.Y = dVar2 * dVar9 - dVar3 * dVar8;
    (this->FollowTargetInfo).TargetForward.field0_0x0._s_0.Z = dVar3 * dVar9 + dVar2 * dVar8;
    uVar6 = SUB84(dVar1 + dVar1,0) ^ uVar12;
    uVar7 = (uint)((ulonglong)(dVar1 + dVar1) >> 0x20) ^ uVar13;
    dVar1 = (double)CONCAT44(uVar7,uVar6) * dVar1;
    dVar8 = (double)CONCAT44(uVar7,uVar6) * dVar11;
    dVar11 = dVar10 * dVar11 + (double)CONCAT44(uVar7,uVar6) * dVar2;
    *(double *)&(this->FollowTargetInfo).TargetRight.field0_0x0 = dVar11;
    (this->FollowTargetInfo).TargetRight.field0_0x0._s_0.Y = (dVar1 - dVar10 * dVar3) + dVar4;
    (this->FollowTargetInfo).TargetRight.field0_0x0._s_0.Z = dVar2 * dVar10 - dVar8;
    (this->FollowTargetInfo).TargetLeft.field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar13,SUB84(dVar11,0) ^ uVar12);
    (this->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Y = (dVar10 * dVar3 - dVar1) - dVar4;
    (this->FollowTargetInfo).TargetLeft.field0_0x0._s_0.Z = dVar8 - dVar2 * dVar10;
  }
  return;
}

// SetInitialProperty @ 14b898ee0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SetInitialProperty
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FDS_Boids_InitialProperty *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->StepHeight = param_1->StepHeight;
  this->WalkableZ = param_1->WalkableZ;
  iVar1 = (this->BoidStateList).ArrayNum;
  pFVar4 = (this->BoidStateList).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BoidStateList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ISKM_BoidState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    plVar3 = *(longlong **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// SetRotateToAngle @ 14b899070

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SetRotateToAngle
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = _isnan((double)param_1);
  if (iVar3 == 0) {
    this->RotateToAngle = param_1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1455516613628395404>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\ExecutionContext\\DS_ISKM_BoidsFSM_ExecutionContext.cpp"
                       ,0x74,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetTargetInfoList @ 14b899a50

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SetTargetInfoList
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,
          TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *pTVar4;
  
  pTVar2 = &this->TargetInfoList;
  if (pTVar2 != param_1) {
    DestructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              ((TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(pTVar2->AllocatorInstance).Data,
               (this->TargetInfoList).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->TargetInfoList).ArrayMax;
    pTVar4 = (TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> *)(param_1->AllocatorInstance).Data;
    (this->TargetInfoList).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,TSharedPtr<FDS_ISKM_BoidsTargetInfo,1>,int>
              ((pTVar2->AllocatorInstance).Data,pTVar4,iVar3);
  }
  return;
}

// SuccessToFindRoute @ 14b89b410

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::SuccessToFindRoute(FDS_ISKM_BoidsFSM_ExecutionContext *this)

{
  this->FailedToFindRouteCount = 0;
  this->bIgnoreAngleLimit = false;
  return;
}

// UpdateState @ 14b8a38a0

void __thiscall
FDS_ISKM_BoidsFSM_ExecutionContext::UpdateState
          (FDS_ISKM_BoidsFSM_ExecutionContext *this,FName param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ISKM_BoidState,1> local_28 [2];
  
  GetBoidState(this,local_28,param_1);
  if (local_28[0].Object != (FDS_ISKM_BoidState *)0x0) {
    if (local_28[0].Object == (FDS_ISKM_BoidState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
      this->StateTime = param_2 + this->StateTime;
      (**(code **)((local_28[0].Object)->_padding_ + 0x38))(local_28[0].Object,param_2,this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

