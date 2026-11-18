// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 15

// StaticStruct @ 1463dad60

UScriptStruct * __cdecl FAnimNode_LayeredBoneBlend::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend,(UObject *)pUVar1,
                         L"AnimNode_LayeredBoneBlend");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton;
}

// Initialize_AnyThread @ 1463df410

void __thiscall
FAnimNode_LayeredBoneBlend::Initialize_AnyThread
          (FAnimNode_LayeredBoneBlend *this,FAnimationInitializeContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LayeredBoneBlend::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  iVar1 = (this->BlendPoses).ArrayNum;
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->BasePose,param_1);
  if (0 < iVar1) {
    uVar5 = 0;
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->BlendPoses).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPoseLinkBase::Initialize
                ((FPoseLinkBase *)((this->BlendPoses).AllocatorInstance.Data + lVar6),param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < iVar1);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463df500

void __thiscall
FAnimNode_LayeredBoneBlend::CacheBones_AnyThread
          (FAnimNode_LayeredBoneBlend *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  USkeleton *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LayeredBoneBlend::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->BasePose,param_1);
  iVar1 = (this->BlendPoses).ArrayNum;
  uVar6 = 0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->BlendPoses).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FPoseLinkBase::CacheBones
                ((FPoseLinkBase *)((this->BlendPoses).AllocatorInstance.Data + lVar7),param_1);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < iVar1);
  }
  lVar7 = *(longlong *)param_1;
  if ((*(longlong *)(lVar7 + 0x150) == 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2821110184175206029>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                         ,0x173,"Skeleton"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = *(USkeleton **)(lVar7 + 0x150);
  lVar7 = *(longlong *)param_1;
  if ((*(longlong *)(lVar7 + 0x660) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UpdateCachedBoneData(this,*(FBoneContainer **)(lVar7 + 0x660),pUVar2);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 1463df660

void __thiscall
FAnimNode_LayeredBoneBlend::Update_AnyThread
          (FAnimNode_LayeredBoneBlend *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  USkeleton *pUVar6;
  FScriptContainerElement *pFVar7;
  FPerBoneBlendWeight *pFVar8;
  FPerBoneBlendWeight *pFVar9;
  code *pcVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  FExposedValueHandler *this_00;
  FAnimationUpdateContext *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  TArrayView<float,int> local_118;
  TArrayView<FPerBoneBlendWeight,int> local_108;
  TArrayView<FPerBoneBlendWeight,int> local_f8;
  FAnimationUpdateContext local_e8;
  FAnimationUpdateContext local_b8 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LayeredBoneBlend::Update_AnyThread");
  fVar19 = __real_3f800000;
  uVar17 = 0xffffffff;
  fVar20 = 0.0;
  this->bHasRelevantPoses = false;
  fVar21 = fVar19;
  if (this->bBlendRootMotionBasedOnRootBone != false) {
    fVar21 = 0.0;
  }
  bVar12 = FAnimNode_Base::IsLODEnabled
                     ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  fVar11 = __real_3727c5ac;
  if (bVar12) {
    this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
    FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
    uVar15 = 0;
    if (0 < (this->BlendPoses).ArrayNum) {
      lVar16 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar15 < (this->BlendWeights).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar1 = *(float *)((this->BlendWeights).AllocatorInstance.Data + lVar16);
        if (fVar11 < fVar1) {
          if (this->bHasRelevantPoses == false) {
            lVar5 = param_1->_padding_;
            if ((*(longlong *)(lVar5 + 0x150) == 0) &&
               (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_2821110184175206029>,true,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                                    ,0x173,"Skeleton"), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pUVar6 = *(USkeleton **)(lVar5 + 0x150);
            lVar5 = param_1->_padding_;
            if ((*(longlong *)(lVar5 + 0x660) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            UpdateCachedBoneData(this,*(FBoneContainer **)(lVar5 + 0x660),pUVar6);
            pFVar7 = (this->BlendWeights).AllocatorInstance.Data;
            iVar2 = (this->BlendWeights).ArrayNum;
            if ((iVar2 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (FPerBoneBlendWeight *)(this->CurrentBoneBlendWeights).AllocatorInstance.Data;
            iVar3 = (this->CurrentBoneBlendWeights).ArrayNum;
            if ((iVar3 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar9 = (FPerBoneBlendWeight *)(this->DesiredBoneBlendWeights).AllocatorInstance.Data;
            iVar4 = (this->DesiredBoneBlendWeights).ArrayNum;
            if ((iVar4 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_118._12_4_ = uStack_13c;
            local_118.ArrayNum = iVar2;
            local_108._12_4_ = uStack_12c;
            local_108.ArrayNum = iVar3;
            local_f8._12_4_ = uStack_11c;
            local_f8.ArrayNum = iVar4;
            local_118.DataPtr = (float *)pFVar7;
            local_108.DataPtr = pFVar8;
            local_f8.DataPtr = pFVar9;
            FAnimationRuntime::UpdateDesiredBoneWeight(&local_f8,&local_108,&local_118);
            this->bHasRelevantPoses = true;
            if ((this->bBlendRootMotionBasedOnRootBone != false) &&
               (iVar2 = (this->CurrentBoneBlendWeights).ArrayNum, iVar2 != 0)) {
              if ((iVar2 < 1) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              fVar18 = *(float *)((this->CurrentBoneBlendWeights).AllocatorInstance.Data + 4);
              if (fVar11 < fVar18) {
                if (((this->CurrentBoneBlendWeights).ArrayNum < 1) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar17 = *(uint *)(this->CurrentBoneBlendWeights).AllocatorInstance.Data;
                fVar20 = fVar18;
              }
            }
          }
          fVar18 = fVar21;
          if (uVar15 == uVar17) {
            fVar18 = fVar20;
          }
          uVar13 = 0;
          if ((int)uVar15 < (this->BlendPoses).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_e8._padding_ = param_1->_padding_;
          local_e8._padding_ = param_1->_padding_;
          local_e8._padding_ = param_1->_padding_;
          local_e8._padding_ = param_1->_padding_;
          local_e8.DeltaTime = param_1->DeltaTime;
          local_e8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
          local_e8.RootMotionWeightModifier = fVar18 * param_1->RootMotionWeightModifier;
          local_e8.CurrentWeight = fVar1 * param_1->CurrentWeight;
          FPoseLinkBase::Update
                    ((FPoseLinkBase *)
                     ((this->BlendPoses).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10),
                     &local_e8);
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 4;
      } while ((int)uVar15 < (this->BlendPoses).ArrayNum);
    }
  }
  fVar19 = fVar19 - fVar20;
  pFVar14 = param_1;
  if (fVar19 < fVar11) {
    local_b8[0]._padding_ = param_1->_padding_;
    local_b8[0]._padding_ = param_1->_padding_;
    local_b8[0]._padding_ = param_1->_padding_;
    local_b8[0]._padding_ = param_1->_padding_;
    local_b8[0].DeltaTime = param_1->DeltaTime;
    local_b8[0]._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_b8[0].RootMotionWeightModifier = fVar19 * param_1->RootMotionWeightModifier;
    local_b8[0].CurrentWeight = param_1->CurrentWeight;
    pFVar14 = local_b8;
  }
  FPoseLinkBase::Update((FPoseLinkBase *)&this->BasePose,pFVar14);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Num Poses",(this->BlendPoses).ArrayNum);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1463dfbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_LayeredBoneBlend::Evaluate_AnyThread
          (FAnimNode_LayeredBoneBlend *this,FPoseContext *param_1)

{
  byte bVar1;
  code *pcVar2;
  <lambda_1> <Var3;
  bool bVar4;
  float fVar5;
  longlong lVar6;
  <lambda_1> <Var7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  EBlendPosesPerBoneFilterFlags EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph> FVar13;
  FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread> *this_00;
  undefined8 *puVar14;
  FName FVar15;
  EBlendPosesPerBoneFilterFlags EVar16;
  <lambda_2> <Var17;
  ForElementType<UE::Anim::FCurveElement> *pFVar18;
  ulonglong uVar19;
  EBlendPosesPerBoneFilterFlags EVar20;
  EBlendPosesPerBoneFilterFlags EVar21;
  wchar_t *pwVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  ForElementType<FBlendedCurve> local_2c8;
  int local_2c0 [2];
  ForElementType<UE::Anim::FStackAttributeContainer> local_2b8;
  int local_2b0 [2];
  ForElementType<FCompactPose> local_2a8;
  int local_2a0 [2];
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  FName local_278;
  FName local_270;
  undefined1 local_268 [88];
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_210;
  bool local_1d0;
  FName local_1c8;
  longlong local_1b8;
  undefined1 local_1a8 [48];
  FBoneContainer *local_178;
  undefined1 auStack_170 [24];
  undefined8 local_158;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_150;
  bool local_110;
  FPerBoneBlendWeight *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FStackAttributeContainer *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FBlendedCurve *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FCompactPose *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FName local_c8;
  FName local_c0;
  TArrayView<FPerBoneBlendWeight,int> local_b8;
  TArrayView<UE::Anim::FStackAttributeContainer,int> local_a8;
  TArrayView<FBlendedCurve_const_,int> local_98;
  TArrayView<FCompactPose_const_,int> local_88;
  FAnimationPoseData local_78 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LayeredBoneBlend::Evaluate_AnyThread");
  bVar8 = IsInGameThread();
  uVar19 = 0;
  EVar20 = None;
  EVar21 = None;
  if (bVar8) {
    FVar13 = StatPtr_STAT_BlendPosesInGraph;
    if (StatPtr_STAT_BlendPosesInGraph == (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)0x0)
    {
      pFVar12 = ::FName::FName(&local_c0,"STAT_BlendPosesInGraph");
      pwVar22 = L"BlendPosesInGraph";
      this_00 = (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread> *)
                &StatPtr_STAT_BlendPosesInGraph;
      goto LAB_1463dfcfd;
    }
  }
  else {
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)
             StatPtr_STAT_BlendPosesInGraph_WorkerThread;
    if (StatPtr_STAT_BlendPosesInGraph_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph_WorkerThread>)0x0) {
      pFVar12 = ::FName::FName(&local_c8,"STAT_BlendPosesInGraph_WorkerThread");
      pwVar22 = L"BlendPosesInGraph_WorkerThread";
      this_00 = &StatPtr_STAT_BlendPosesInGraph_WorkerThread;
LAB_1463dfcfd:
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_BlendPosesInGraph>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_00,*pFVar12,pwVar22,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar15 = *(FName *)FVar13;
  <Var3 = (<lambda_1>)0x0;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  bVar8 = false;
  <Var7 = (<lambda_1>)0x0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        local_278.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_278.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_278,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                   ,0xd2);
      }
      <Var3 = (<lambda_1>)0x1;
      <Var7 = (<lambda_1>)0x1;
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_270 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_1463dfdef;
    }
  }
  <Var3 = <Var7;
  bVar4 = false;
  local_270 = local_1c8;
  FVar15 = local_1c8;
LAB_1463dfdef:
  uVar24 = (this->BlendPoses).ArrayNum;
  local_res20 = uVar24;
  if ((uVar24 == 0) || (this->bHasRelevantPoses == false)) {
    FPoseLink::Evaluate(&this->BasePose,param_1);
  }
  else {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_1a8,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_110 = param_1->bExpectsAdditivePose != false;
    local_1a8._32_8_ = 0;
    local_1a8._40_8_ = 0;
    local_178 = (FBoneContainer *)0x0;
    auStack_170._0_8_ = (FCurveElement *)0x0;
    auStack_170._8_8_ = 0;
    auStack_170[0x10] = false;
    local_158 = 0;
    TStack_150.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_150.UniqueTypedBoneIndices.ArrayNum = 0;
    TStack_150.UniqueTypedBoneIndices.ArrayMax = 0;
    TStack_150.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_150.AttributeIdentifiers.ArrayNum = 0;
    TStack_150.AttributeIdentifiers.ArrayMax = 0;
    TStack_150.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_150.Values.ArrayNum = 0;
    TStack_150.Values.ArrayMax = 0;
    TStack_150.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_150.UniqueTypes.ArrayNum = 0;
    TStack_150.UniqueTypes.ArrayMax = 0;
    FPoseContext::InitializeImpl((FPoseContext *)local_1a8,(FAnimInstanceProxy *)param_1->_padding_)
    ;
    local_1a8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_1a8._24_4_ = (undefined4)param_1->_padding_;
    FPoseLink::Evaluate(&this->BasePose,(FPoseContext *)local_1a8);
    local_2a8.Data = (FCompactPose *)0x0;
    local_2a0[0] = 0;
    local_2a0[1] = 0;
    if ((int)uVar24 < 1) {
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
      local_2c8.Data = (FBlendedCurve *)0x0;
      local_2c0[0] = 0;
      local_2c0[1] = 0;
      local_2b8.Data = (FStackAttributeContainer *)0x0;
      local_2b0[0] = 0;
      local_2b0[1] = 0;
    }
    else {
      iVar10 = UE::Core::Private::
               ReallocGrow<0,TMemStackAllocator<0>::ForElementType<FCompactPose>_>
                         (0x18,8,uVar24,&local_2a8,local_2a0,local_2a0 + 1);
      DefaultConstructItems<FCompactPose,int>(local_2a8.Data + iVar10,uVar24);
      local_2c8.Data = (FBlendedCurve *)0x0;
      local_2c0[0] = 0;
      local_2c0[1] = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow<0,TMemStackAllocator<0>::ForElementType<FBlendedCurve>_>
                         (0x20,8,uVar24,&local_2c8,local_2c0,local_2c0 + 1);
      DefaultConstructItems<FBlendedCurve,int>(local_2c8.Data + iVar10,uVar24);
      local_2b8.Data = (FStackAttributeContainer *)0x0;
      local_2b0[0] = 0;
      local_2b0[1] = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FStackAttributeContainer>_>
                         (0x40,8,uVar24,&local_2b8,local_2b0,local_2b0 + 1);
      DefaultConstructItems<UE::Anim::FStackAttributeContainer,int>(local_2b8.Data + iVar10,uVar24);
    }
    fVar5 = __real_3727c5ac;
    local_1b8 = (longlong)(int)uVar24;
    if (0 < (int)uVar24) {
      local_280 = 0;
      local_298 = 0;
      local_288 = 0;
      local_290 = 0;
      uVar23 = uVar19;
      uVar25 = uVar19;
      do {
        lVar6 = local_280;
        uVar24 = (uint)uVar25;
        EVar16 = ~uVar24 >> 0x1f;
        EVar11 = EVar21;
        if ((int)uVar24 < (this->BlendWeights).ArrayNum) {
          EVar11 = EVar16;
        }
        if ((EVar11 == None) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(float *)((this->BlendWeights).AllocatorInstance.Data + uVar23 * 4) <= fVar5) {
          EVar11 = EVar20;
          if ((int)uVar24 < local_2a0[0]) {
            EVar11 = EVar16;
          }
          if ((EVar11 == None) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                    ((FBaseCompactPose<TMemStackAllocator<0>_> *)
                     (&(local_2a8.Data)->field_0x0 + local_298),local_178);
          EVar11 = EVar20;
          if ((int)uVar24 < local_2c0[0]) {
            EVar11 = EVar16;
          }
          if ((EVar11 == None) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar18 = (ForElementType<UE::Anim::FCurveElement> *)
                    (&(local_2c8.Data)->field_0x0 + lVar6);
          if (&param_1->Curve == (FBlendedCurve *)pFVar18) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4808592878626406918>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                               ,0x206,"&InCurveToInitFrom != this");
            if (bVar9) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            iVar10 = *(int *)((longlong)&pFVar18[1].Data + 4);
            *(undefined4 *)&pFVar18[1].Data = 0;
            if (iVar10 < 0) {
              UE::Core::Private::
              ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                        (0x10,4,0,pFVar18,0,(int *)((longlong)&pFVar18[1].Data + 4));
            }
            *(undefined1 *)&pFVar18[2].Data = 0;
            pFVar18[3].Data = *(FCurveElement **)&(param_1->Curve).field_0x18;
          }
        }
        else {
          FAnimationBaseContext::FAnimationBaseContext
                    ((FAnimationBaseContext *)local_268,(FAnimInstanceProxy *)param_1->_padding_,
                     (FAnimationUpdateSharedContext *)0x0);
          local_1d0 = param_1->bExpectsAdditivePose != false;
          local_268._32_8_ = 0;
          local_268._40_8_ = 0;
          local_268._48_8_ = 0;
          local_268._56_8_ = 0;
          local_268._64_8_ = 0;
          local_268[0x48] = 0;
          local_268._80_8_ = 0;
          TStack_210.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_210.UniqueTypedBoneIndices.ArrayNum = 0;
          TStack_210.UniqueTypedBoneIndices.ArrayMax = 0;
          TStack_210.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_210.AttributeIdentifiers.ArrayNum = 0;
          TStack_210.AttributeIdentifiers.ArrayMax = 0;
          TStack_210.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_210.Values.ArrayNum = 0;
          TStack_210.Values.ArrayMax = 0;
          TStack_210.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_210.UniqueTypes.ArrayNum = 0;
          TStack_210.UniqueTypes.ArrayMax = 0;
          FPoseContext::InitializeImpl
                    ((FPoseContext *)local_268,(FAnimInstanceProxy *)param_1->_padding_);
          local_268._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
          local_268._24_4_ = (undefined4)param_1->_padding_;
          EVar11 = EVar21;
          if ((int)uVar24 < (this->BlendPoses).ArrayNum) {
            EVar11 = EVar16;
          }
          if ((EVar11 == None) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FPoseLink::Evaluate((FPoseLink *)((this->BlendPoses).AllocatorInstance.Data + local_290),
                              (FPoseContext *)local_268);
          EVar11 = EVar21;
          if ((int)uVar24 < local_2a0[0]) {
            EVar11 = EVar16;
          }
          if ((EVar11 == None) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar14 = (undefined8 *)(&(local_2a8.Data)->field_0x0 + local_298);
          if (puVar14 != (undefined8 *)(local_268 + 0x20)) {
            *puVar14 = local_268._32_8_;
            local_268._32_8_ = 0;
            *(undefined4 *)(puVar14 + 1) = local_268._40_4_;
            *(undefined4 *)((longlong)puVar14 + 0xc) = local_268._44_4_;
            local_268._40_8_ = 0;
            puVar14[2] = local_268._48_8_;
            local_268._48_8_ = 0;
          }
          EVar11 = EVar20;
          if ((int)uVar24 < local_2c0[0]) {
            EVar11 = EVar16;
          }
          if ((EVar11 == None) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar14 = (undefined8 *)(&(local_2c8.Data)->field_0x0 + lVar6);
          if (puVar14 != (undefined8 *)(local_268 + 0x38)) {
            *puVar14 = local_268._56_8_;
            local_268._56_8_ = 0;
            *(undefined4 *)(puVar14 + 1) = local_268._64_4_;
            *(undefined4 *)((longlong)puVar14 + 0xc) = local_268._68_4_;
            local_268._64_8_ = 0;
          }
          *(undefined1 *)(puVar14 + 2) = local_268[0x48];
          local_268[0x48] = 0;
          EVar11 = EVar20;
          if ((int)uVar24 < local_2b0[0]) {
            EVar11 = EVar16;
          }
          if ((EVar11 == None) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::MoveFrom
                    ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                     (&(local_2b8.Data)->field_0x0 + local_288),&TStack_210);
          if (TStack_210.UniqueTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_210.UniqueTypes.AllocatorInstance.Data);
          }
          DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                      *)TStack_210.Values.AllocatorInstance.Data,TStack_210.Values.ArrayNum);
          if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               *)TStack_210.Values.AllocatorInstance.Data !=
              (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               *)0x0) {
            FMemory::Free(TStack_210.Values.AllocatorInstance.Data);
          }
          DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                     TStack_210.AttributeIdentifiers.AllocatorInstance.Data,
                     TStack_210.AttributeIdentifiers.ArrayNum);
          if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
              TStack_210.AttributeIdentifiers.AllocatorInstance.Data !=
              (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(TStack_210.AttributeIdentifiers.AllocatorInstance.Data);
          }
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)
                     TStack_210.UniqueTypedBoneIndices.AllocatorInstance.Data,
                     TStack_210.UniqueTypedBoneIndices.ArrayNum);
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)
              TStack_210.UniqueTypedBoneIndices.AllocatorInstance.Data !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(TStack_210.UniqueTypedBoneIndices.AllocatorInstance.Data);
          }
        }
        local_280 = local_280 + 0x20;
        uVar25 = (ulonglong)(uVar24 + 1);
        local_290 = local_290 + 0x10;
        uVar23 = uVar23 + 1;
        local_288 = local_288 + 0x40;
        local_298 = local_298 + 0x18;
        FVar15 = local_270;
        uVar24 = local_res20;
      } while ((longlong)uVar23 < local_1b8);
    }
    UE::Anim::FNamedValueArrayUtils::
    RemoveByPredicate<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FAnimNode_LayeredBoneBlend::Evaluate_AnyThread_::__l7::<lambda_1>_>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)auStack_170,
               (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
               &this->CurvePoseSourceIndices,<Var3);
    if (0 < (int)uVar24) {
      do {
        <Var17.ChildIndex = (int)uVar19;
        EVar21 = EVar20;
        if (<Var17.ChildIndex < local_2c0[0]) {
          EVar21 = (uint)~<Var17.ChildIndex >> 0x1f;
        }
        if ((EVar21 == None) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Anim::FNamedValueArrayUtils::
        RemoveByPredicate<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FAnimNode_LayeredBoneBlend::Evaluate_AnyThread_::__l16::<lambda_2>_>
                  ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                   (local_2c8.Data + uVar19),
                   (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
                   &this->CurvePoseSourceIndices,<Var17);
        uVar19 = (ulonglong)(<Var17.ChildIndex + 1U);
      } while ((int)(<Var17.ChildIndex + 1U) < (int)uVar24);
    }
    if ((this->bMeshSpaceRotationBlend != false) &&
       (EVar20 = MeshSpaceRotation, this->bRootSpaceRotationBlend != false)) {
      EVar20 = RootSpaceRotation|MeshSpaceRotation;
    }
    EVar21 = EVar20 | MeshSpaceScale;
    if (this->bMeshSpaceScaleBlend == false) {
      EVar21 = EVar20;
    }
    FAnimationPoseData::FAnimationPoseData(local_78,param_1);
    local_108 = (FPerBoneBlendWeight *)(this->CurrentBoneBlendWeights).AllocatorInstance.Data;
    iStack_100 = (this->CurrentBoneBlendWeights).ArrayNum;
    bVar1 = (this->CurveBlendOption).Value;
    if ((iStack_100 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = local_2b0[0];
    local_f8 = local_2b8.Data;
    if ((local_2b0[0] < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_f0 = iVar10;
    iVar10 = local_2c0[0];
    local_e8 = local_2c8.Data;
    if ((local_2c0[0] < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_e0 = iVar10;
    iVar10 = local_2a0[0];
    local_d8 = local_2a8.Data;
    if ((local_2a0[0] < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_b8._12_4_ = uStack_fc;
    local_b8.ArrayNum = iStack_100;
    local_a8._12_4_ = uStack_ec;
    local_a8.ArrayNum = iStack_f0;
    local_b8.DataPtr = local_108;
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = iStack_e0;
    local_a8.DataPtr = local_f8;
    iStack_d0 = iVar10;
    local_88._12_4_ = uStack_cc;
    local_88.ArrayNum = iVar10;
    local_98.DataPtr = local_e8;
    local_88.DataPtr = local_d8;
    FAnimationRuntime::BlendPosesPerBoneFilter
              ((FCompactPose *)(local_1a8 + 0x20),&local_88,(FBlendedCurve *)auStack_170,&local_98,
               (FStackAttributeContainer *)&TStack_150,&local_a8,local_78,&local_b8,EVar21,
               (uint)bVar1);
    DestructItems<UE::Anim::FStackAttributeContainer,int>(local_2b8.Data,local_2b0[0]);
    UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
    ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_150);
  }
  if ((bool)<Var3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463e0760

void __thiscall
FAnimNode_LayeredBoneBlend::GatherDebugData
          (FAnimNode_LayeredBoneBlend *this,FNodeDebugData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  UPackage *pUVar6;
  FNodeDebugData *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  FName local_res8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LayeredBoneBlend::GatherDebugData");
  iVar1 = (this->BlendPoses).ArrayNum;
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend,(UObject *)pUVar6,
                         L"AnimNode_LayeredBoneBlend");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)
                      ->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  ::FString::PrintfImpl(&local_88,L"%s<W:%.1f%%> %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_68,L"(Num Poses: %i)");
  iVar10 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  ::FString::AppendChars(&local_88,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar10);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_88.Data.AllocatorInstance.Data;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.ArrayNum == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_88.Data.ArrayNum,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_98,false);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar7 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_58);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->BasePose,pFVar7);
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < iVar1) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->BlendPoses).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar2 = (this->BlendPoses).AllocatorInstance.Data;
      local_48[0].Data.ArrayNum = 0;
      local_48[0].Data.ArrayMax = 0;
      uVar5 = 0;
      if ((int)uVar8 < (this->BlendWeights).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FNodeDebugData::BranchFlow
                         (param_1,*(float *)((this->BlendWeights).AllocatorInstance.Data +
                                            uVar11 * 4),local_48);
      FPoseLinkBase::GatherDebugData((FPoseLinkBase *)(pFVar2 + (longlong)(int)uVar8 * 0x10),pFVar7)
      ;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar1);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 1463e0a40

int __thiscall FAnimNode_LayeredBoneBlend::GetLODThreshold(FAnimNode_LayeredBoneBlend *this)

{
  return this->LODThreshold;
}

// FAnimNode_LayeredBoneBlend @ 146403e10

FAnimNode_LayeredBoneBlend * __thiscall
FAnimNode_LayeredBoneBlend::FAnimNode_LayeredBoneBlend(FAnimNode_LayeredBoneBlend *this)

{
  *(undefined4 *)&(this->BasePose).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_LayeredBoneBlend__6B_;
  *(undefined8 *)&this->BasePose = 0;
  (this->BasePose).field_0xc = 0;
  (this->BlendPoses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendPoses).ArrayNum = 0;
  (this->BlendPoses).ArrayMax = 0;
  this->BlendMode = BranchFilter;
  (this->BlendMasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendMasks).ArrayNum = 0;
  (this->BlendMasks).ArrayMax = 0;
  (this->LayerSetup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerSetup).ArrayNum = 0;
  (this->LayerSetup).ArrayMax = 0;
  (this->BlendWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendWeights).ArrayNum = 0;
  (this->BlendWeights).ArrayMax = 0;
  (this->DesiredBoneBlendWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DesiredBoneBlendWeights).ArrayNum = 0;
  (this->DesiredBoneBlendWeights).ArrayMax = 0;
  (this->CurrentBoneBlendWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentBoneBlendWeights).ArrayNum = 0;
  (this->CurrentBoneBlendWeights).ArrayMax = 0;
  (this->PerBoneBlendWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneBlendWeights).ArrayNum = 0;
  (this->PerBoneBlendWeights).ArrayMax = 0;
  (this->CurvePoseSourceIndices)._padding_ = 0;
  (this->CurvePoseSourceIndices)._padding_ = 0;
  *(undefined1 *)&(this->CurvePoseSourceIndices)._padding_ = 0;
  (this->CurvePoseSourceIndices).Filter = (FCurveFilter *)0x0;
  (this->SkeletonGuid).A = 0;
  (this->SkeletonGuid).B = 0;
  (this->SkeletonGuid).C = 0;
  (this->SkeletonGuid).D = 0;
  (this->VirtualBoneGuid).A = 0;
  (this->VirtualBoneGuid).B = 0;
  (this->VirtualBoneGuid).C = 0;
  (this->VirtualBoneGuid).D = 0;
  this->RequiredBonesSerialNumber = 0;
  this->LODThreshold = -1;
  this->bMeshSpaceRotationBlend = false;
  this->bRootSpaceRotationBlend = false;
  this->bMeshSpaceScaleBlend = false;
  this->CurveBlendOption = '\0';
  this->bBlendRootMotionBasedOnRootBone = true;
  this->bHasRelevantPoses = false;
  return this;
}

// ~FAnimNode_LayeredBoneBlend @ 146408990

void __thiscall
FAnimNode_LayeredBoneBlend::~FAnimNode_LayeredBoneBlend(FAnimNode_LayeredBoneBlend *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  pvVar1 = (void *)(this->CurvePoseSourceIndices)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->PerBoneBlendWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrentBoneBlendWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DesiredBoneBlendWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BlendWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FInputBlendPose,int>
            ((FInputBlendPose *)(this->LayerSetup).AllocatorInstance.Data,
             (this->LayerSetup).ArrayNum);
  pFVar2 = (this->LayerSetup).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BlendMasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BlendPoses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator() @ 14640fc40

void __thiscall
`FAnimNode_LayeredBoneBlend::UpdateCachedBoneData'::__l14::<lambda_1>::operator()
          (void *this,FName *param_1,FCurveMetaData *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FBoneReference *this_00;
  FBoneReference *pFVar8;
  longlong lVar9;
  undefined1 local_res18 [8];
  uint local_res20;
  
  iVar6 = (param_2->LinkedBones).ArrayNum;
  this_00 = (FBoneReference *)(param_2->LinkedBones).AllocatorInstance.Data;
  pFVar8 = this_00 + iVar6;
  do {
    if ((param_2->LinkedBones).ArrayNum != iVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (this_00 == pFVar8) {
      return;
    }
    FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)&local_res20);
    lVar9 = (longlong)(int)local_res20;
    if (local_res20 != 0xffffffff) {
      lVar7 = *(longlong *)this;
      uVar5 = 0;
      if ((int)local_res20 < *(int *)(lVar7 + 0x70)) {
        uVar5 = ~local_res20 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0.0 < *(float *)(*(longlong *)(lVar7 + 0x68) + 4 + lVar9 * 8)) {
        lVar9 = *(longlong *)this;
        uVar5 = 0;
        if ((int)local_res20 < *(int *)(lVar9 + 0x70)) {
          uVar5 = ~local_res20 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(lVar9 + 0xa0);
        lVar7 = *(longlong *)(lVar9 + 0x68);
        if (iVar6 == *(int *)(lVar9 + 0xa4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x414,(ForAnyElementType *)(lVar9 + 0x98),(int *)(lVar9 + 0xa4));
        }
        pFVar2 = ((ForAnyElementType *)(lVar9 + 0x98))->Data;
        *(int *)(lVar9 + 0xa0) = iVar6 + 1;
        uVar1 = *(undefined4 *)(lVar7 + (longlong)(int)local_res20 * 8);
        lVar7 = (longlong)iVar6;
        *(FName *)(pFVar2 + lVar7 * 0x14) = *param_1;
        *(undefined4 *)(pFVar2 + lVar7 * 0x14 + 8) = 0;
        pFVar2[lVar7 * 0x14 + 0xc] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar2 + lVar7 * 0x14 + 0x10) = uVar1;
        *(undefined1 *)(lVar9 + 0xa8) = 0;
        return;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// ArePerBoneBlendWeightsValid @ 146416350

bool __thiscall
FAnimNode_LayeredBoneBlend::ArePerBoneBlendWeightsValid
          (FAnimNode_LayeredBoneBlend *this,USkeleton *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_1 != (USkeleton *)0x0) &&
      (uVar1 = (param_1->Guid).A, uVar3 = (param_1->Guid).B, uVar2 = (param_1->Guid).C,
      uVar4 = (param_1->Guid).D,
      ((uVar3 == (this->SkeletonGuid).B && uVar4 == (this->SkeletonGuid).D) &&
      uVar2 == (this->SkeletonGuid).C) && uVar1 == (this->SkeletonGuid).A)) &&
     ((((param_1->VirtualBoneGuid).B == (this->VirtualBoneGuid).B &&
       (param_1->VirtualBoneGuid).D == (this->VirtualBoneGuid).D) &&
      (param_1->VirtualBoneGuid).C == (this->VirtualBoneGuid).C) &&
      (param_1->VirtualBoneGuid).A == (this->VirtualBoneGuid).A)) {
    return true;
  }
  return false;
}

// RebuildPerBoneBlendWeights @ 1464624c0

void __thiscall
FAnimNode_LayeredBoneBlend::RebuildPerBoneBlendWeights
          (FAnimNode_LayeredBoneBlend *this,USkeleton *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (USkeleton *)0x0) {
    if (this->BlendMode == BranchFilter) {
      FAnimationRuntime::CreateMaskWeights(&this->PerBoneBlendWeights,&this->LayerSetup,param_1);
    }
    else {
      FAnimationRuntime::CreateMaskWeights
                (&this->PerBoneBlendWeights,
                 (TArray<UBlendProfile_*,TSizedDefaultAllocator<32>_> *)&this->BlendMasks,param_1);
    }
    uVar1 = (param_1->Guid).B;
    uVar2 = (param_1->Guid).C;
    uVar3 = (param_1->Guid).D;
    (this->SkeletonGuid).A = (param_1->Guid).A;
    (this->SkeletonGuid).B = uVar1;
    (this->SkeletonGuid).C = uVar2;
    (this->SkeletonGuid).D = uVar3;
    uVar1 = (param_1->VirtualBoneGuid).B;
    uVar2 = (param_1->VirtualBoneGuid).C;
    uVar3 = (param_1->VirtualBoneGuid).D;
    (this->VirtualBoneGuid).A = (param_1->VirtualBoneGuid).A;
    (this->VirtualBoneGuid).B = uVar1;
    (this->VirtualBoneGuid).C = uVar2;
    (this->VirtualBoneGuid).D = uVar3;
  }
  return;
}

// SetBlendMask @ 146467da0

void __thiscall
FAnimNode_LayeredBoneBlend::SetBlendMask
          (FAnimNode_LayeredBoneBlend *this,int param_1,UBlendProfile *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (this->BlendMode != BlendMask) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendMode == ELayeredBoneBlendMode::BlendMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                       ,0x136,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 < 0) || ((this->BlendPoses).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendPoses.IsValidIndex(InPoseIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                       ,0x137,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (-1 < param_1) goto LAB_146467e1c;
  }
  else {
LAB_146467e1c:
    if (param_1 < (this->BlendMasks).ArrayNum) goto LAB_146467e47;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("BlendMasks.IsValidIndex(InPoseIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                     ,0x138,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146467e47:
  uVar4 = 0;
  if (param_1 < (this->BlendMasks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  pFVar1 = (this->BlendMasks).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UBlendProfile **)(pFVar1 + (longlong)param_1 * 8) = param_2;
  (this->SkeletonGuid).A = 0;
  (this->SkeletonGuid).B = 0;
  (this->SkeletonGuid).C = 0;
  (this->SkeletonGuid).D = 0;
  this->RequiredBonesSerialNumber = 0;
  (this->VirtualBoneGuid).A = 0;
  (this->VirtualBoneGuid).B = 0;
  (this->VirtualBoneGuid).C = 0;
  (this->VirtualBoneGuid).D = 0;
  return;
}

// SyncBlendMasksAndLayers @ 14646e920

void __thiscall
FAnimNode_LayeredBoneBlend::SyncBlendMasksAndLayers(FAnimNode_LayeredBoneBlend *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar1 = &(this->BlendMasks).ArrayNum;
  if (this->BlendMode == BlendMask) {
    uVar2 = (this->BlendPoses).ArrayNum;
    iVar7 = *piVar1;
    if (iVar7 < (int)uVar2) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar2 - iVar7,&(this->BlendMasks).AllocatorInstance,piVar1,
                         &(this->BlendMasks).ArrayMax);
      memset((this->BlendMasks).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
             (longlong)(int)(uVar2 - iVar7) << 3);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar7) {
        uVar8 = iVar7 - uVar2;
        if ((int)(uVar8 | uVar2) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar8 != 0) {
          pFVar3 = (this->BlendMasks).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
          iVar7 = (*piVar1 - uVar2) - uVar8;
          if (iVar7 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->BlendMasks).AllocatorInstance,*piVar1,&(this->BlendMasks).ArrayMax)
          ;
        }
      }
    }
    piVar1 = &(this->LayerSetup).ArrayMax;
    pFVar3 = (this->LayerSetup).AllocatorInstance.Data;
    iVar7 = (this->LayerSetup).ArrayNum;
    if ((this->LayerSetup).ArrayMax < 0) {
      DestructItems<FInputBlendPose,int>((FInputBlendPose *)pFVar3,iVar7);
      (this->LayerSetup).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->LayerSetup).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInputBlendPose,int>((FInputBlendPose *)pFVar3,iVar7);
      (this->LayerSetup).ArrayNum = 0;
    }
  }
  else {
    *piVar1 = 0;
    if ((this->BlendMasks).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->BlendMasks).AllocatorInstance,0,&(this->BlendMasks).ArrayMax);
    }
    iVar7 = (this->LayerSetup).ArrayNum;
    piVar1 = &(this->LayerSetup).ArrayNum;
    uVar2 = (this->BlendPoses).ArrayNum;
    if (iVar7 < (int)uVar2) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar2 - iVar7,&(this->LayerSetup).AllocatorInstance,piVar1,
                         &(this->LayerSetup).ArrayMax);
      DefaultConstructItems<FInputBlendPose,int>
                ((this->LayerSetup).AllocatorInstance.Data + (longlong)iVar6 * 0x10,uVar2 - iVar7);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar7) {
        uVar8 = iVar7 - uVar2;
        if ((int)(uVar8 | uVar2) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar8 != 0) {
          TArray<FInputBlendPose,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->LayerSetup,uVar2,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->LayerSetup).AllocatorInstance,*piVar1,
                     &(this->LayerSetup).ArrayMax);
        }
      }
    }
  }
  return;
}

// UpdateCachedBoneData @ 146472220

void __thiscall
FAnimNode_LayeredBoneBlend::UpdateCachedBoneData
          (FAnimNode_LayeredBoneBlend *this,FBoneContainer *param_1,USkeleton *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  FPerBoneBlendWeight *pFVar11;
  FPerBoneBlendWeight *pFVar12;
  code *pcVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  FAnimNode_LayeredBoneBlend *local_88;
  FBoneContainer *local_80;
  code *local_78;
  FAnimNode_LayeredBoneBlend **local_70;
  TArrayView<float,int> local_68;
  TArrayView<FPerBoneBlendWeight,int> local_58;
  TArrayView<FPerBoneBlendWeight,int> local_48;
  
  if (param_1->SerialNumber != this->RequiredBonesSerialNumber) {
    if ((param_2 != (USkeleton *)0x0) &&
       ((uVar5 = (param_2->Guid).A, uVar13 = (param_2->Guid).B, uVar6 = (param_2->Guid).C,
        uVar14 = (param_2->Guid).D,
        ((uVar13 != (this->SkeletonGuid).B || uVar14 != (this->SkeletonGuid).D) ||
        uVar6 != (this->SkeletonGuid).C) || uVar5 != (this->SkeletonGuid).A ||
        (uVar7 = (param_2->VirtualBoneGuid).C, uVar15 = (param_2->VirtualBoneGuid).D,
        uVar8 = (param_2->VirtualBoneGuid).A, uVar16 = (param_2->VirtualBoneGuid).B,
        ((uVar15 != (this->VirtualBoneGuid).D || uVar16 != (this->VirtualBoneGuid).B) ||
        uVar7 != (this->VirtualBoneGuid).C) || uVar8 != (this->VirtualBoneGuid).A)))) {
      if (this->BlendMode == BranchFilter) {
        FAnimationRuntime::CreateMaskWeights(&this->PerBoneBlendWeights,&this->LayerSetup,param_2);
      }
      else {
        FAnimationRuntime::CreateMaskWeights
                  (&this->PerBoneBlendWeights,
                   (TArray<UBlendProfile_*,TSizedDefaultAllocator<32>_> *)&this->BlendMasks,param_2)
        ;
      }
      uVar3 = (param_2->Guid).B;
      uVar23 = (param_2->Guid).C;
      uVar20 = (param_2->Guid).D;
      (this->SkeletonGuid).A = (param_2->Guid).A;
      (this->SkeletonGuid).B = uVar3;
      (this->SkeletonGuid).C = uVar23;
      (this->SkeletonGuid).D = uVar20;
      uVar3 = (param_2->VirtualBoneGuid).B;
      uVar23 = (param_2->VirtualBoneGuid).C;
      uVar20 = (param_2->VirtualBoneGuid).D;
      (this->VirtualBoneGuid).A = (param_2->VirtualBoneGuid).A;
      (this->VirtualBoneGuid).B = uVar3;
      (this->VirtualBoneGuid).C = uVar23;
      (this->VirtualBoneGuid).D = uVar20;
    }
    uVar3 = (param_1->BoneIndicesArray).ArrayNum;
    iVar19 = (this->DesiredBoneBlendWeights).ArrayNum;
    if (iVar19 < (int)uVar3) {
      TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_>::AddZeroed
                (&this->DesiredBoneBlendWeights,uVar3 - iVar19);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar19) {
        uVar23 = iVar19 - uVar3;
        if (((int)(uVar3 | uVar23) < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if (uVar23 != 0) {
          pFVar10 = (this->DesiredBoneBlendWeights).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 8;
          iVar19 = ((this->DesiredBoneBlendWeights).ArrayNum - uVar23) - uVar3;
          if (iVar19 != 0) {
            memmove(pFVar10,pFVar10 + (longlong)(int)uVar23 * 8,(longlong)iVar19 << 3);
          }
          piVar1 = &(this->DesiredBoneBlendWeights).ArrayNum;
          *piVar1 = *piVar1 - uVar23;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&(this->DesiredBoneBlendWeights).AllocatorInstance,
                     (this->DesiredBoneBlendWeights).ArrayNum,
                     &(this->DesiredBoneBlendWeights).ArrayMax);
        }
      }
    }
    uVar23 = 0;
    if (0 < (int)uVar3) {
      lVar24 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar23 < (param_1->CompactPoseToSkeletonIndex).ArrayNum) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        uVar20 = *(uint *)((param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar24 * 4
                          );
        if (uVar20 == 0xffffffff) {
          bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3597036154077053019>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                              ,0x5b,"SkeletonBoneIndex != INDEX_NONE");
          if (bVar18) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        else {
          uVar21 = 0;
          if ((int)uVar20 < (this->PerBoneBlendWeights).ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          uVar9 = *(undefined8 *)
                   ((this->PerBoneBlendWeights).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
          uVar20 = 0;
          if ((int)uVar23 < (this->DesiredBoneBlendWeights).ArrayNum) {
            uVar20 = ~uVar23 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          *(undefined8 *)((this->DesiredBoneBlendWeights).AllocatorInstance.Data + lVar24 * 8) =
               uVar9;
        }
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uVar3);
    }
    uVar3 = (this->DesiredBoneBlendWeights).ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(this->CurrentBoneBlendWeights).ArrayMax;
    piVar2 = &(this->CurrentBoneBlendWeights).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&(this->CurrentBoneBlendWeights).AllocatorInstance,0,piVar1);
    }
    iVar19 = (this->DesiredBoneBlendWeights).ArrayNum;
    iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar19,&(this->CurrentBoneBlendWeights).AllocatorInstance,piVar2,piVar1)
    ;
    memset((this->CurrentBoneBlendWeights).AllocatorInstance.Data + (longlong)iVar22 * 8,0,
           (longlong)iVar19 << 3);
    pFVar10 = (this->BlendWeights).AllocatorInstance.Data;
    iVar19 = (this->BlendWeights).ArrayNum;
    if ((iVar19 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar11 = (FPerBoneBlendWeight *)(this->CurrentBoneBlendWeights).AllocatorInstance.Data;
    iVar22 = *piVar2;
    if ((iVar22 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar12 = (FPerBoneBlendWeight *)(this->DesiredBoneBlendWeights).AllocatorInstance.Data;
    iVar4 = (this->DesiredBoneBlendWeights).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    local_68._12_4_ = uStack_ac;
    local_68.ArrayNum = iVar19;
    local_58._12_4_ = uStack_9c;
    local_58.ArrayNum = iVar22;
    local_48._12_4_ = uStack_8c;
    local_48.ArrayNum = iVar4;
    local_68.DataPtr = (float *)pFVar10;
    local_58.DataPtr = pFVar11;
    local_48.DataPtr = pFVar12;
    FAnimationRuntime::UpdateDesiredBoneWeight(&local_48,&local_58,&local_68);
    piVar1 = (int *)((longlong)&(this->CurvePoseSourceIndices)._padding_ + 4);
    iVar19 = *piVar1;
    *(undefined4 *)&(this->CurvePoseSourceIndices)._padding_ = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&this->CurvePoseSourceIndices,0,piVar1);
    }
    local_70 = &local_88;
    *(undefined1 *)&(this->CurvePoseSourceIndices)._padding_ = 0;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimNode_LayeredBoneBlend::UpdateCachedBoneData'::__l14::<lambda_1>,void,FName,FCurveMetaData_const_&>
               ::Call;
    local_88 = this;
    local_80 = param_1;
    USkeleton::ForEachCurveMetaData
              (param_2,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)&local_78);
    iVar22 = (int)(this->CurvePoseSourceIndices)._padding_;
    if ((iVar19 < iVar22) &&
       (*(int *)((longlong)&(this->CurvePoseSourceIndices)._padding_ + 4) != iVar22)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar22,(ForAnyElementType *)&this->CurvePoseSourceIndices,iVar22,piVar1);
    }
    this->RequiredBonesSerialNumber = param_1->SerialNumber;
  }
  return;
}

