// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463d2a70

UScriptStruct * __cdecl FAnimNode_PoseBlendNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseBlendNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseBlendNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode,(UObject *)pUVar1,
                         L"AnimNode_PoseBlendNode");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseBlendNode.OuterSingleton;
}

// FAnimNode_PoseBlendNode @ 146404950

FAnimNode_PoseBlendNode * __thiscall
FAnimNode_PoseBlendNode::FAnimNode_PoseBlendNode(FAnimNode_PoseBlendNode *this)

{
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = (longlong)&___7FAnimNode_PoseBlendNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->SourcePose = 0;
  *(undefined4 *)&(this->SourcePose).field_0x8 = 0xffffffff;
  (this->SourcePose).field_0xc = 0;
  (this->CustomCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->BulkCurves).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BulkCurves).Elements.ArrayNum = 0;
  (this->BulkCurves).Elements.ArrayMax = 0;
  (this->BulkCurves).bSorted = false;
  this->BlendOption = HermiteCubic;
  return this;
}

// CacheBones_AnyThread @ 146419a10

void __thiscall
FAnimNode_PoseBlendNode::CacheBones_AnyThread
          (FAnimNode_PoseBlendNode *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseBlendNode::CacheBones_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FAnimNode_PoseHandler::CacheBoneBlendWeights
            ((FAnimNode_PoseHandler *)this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_PoseBlendNode::Evaluate_AnyThread(FAnimNode_PoseBlendNode *this,FPoseContext *param_1)

{
  FCompactPose *pFVar1;
  undefined1 *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ForElementType<UE::Math::TTransform<double>_> _Src;
  int iVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate> FVar12;
  UPoseAsset *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate_WorkerThread> *this_03;
  LARGE_INTEGER LVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  LARGE_INTEGER local_res8;
  undefined1 local_1b8 [12];
  uint local_1ac;
  undefined1 local_198 [32];
  ForElementType<UE::Math::TTransform<double>_> local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 auStack_160 [24];
  undefined8 local_148;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_140;
  undefined8 local_138;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_130;
  undefined8 local_128;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_120
  ;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  bool local_100;
  undefined1 local_f8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_a0;
  undefined8 local_98;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_88;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  bool local_60;
  FAnimationPoseData local_58;
  FAnimationPoseData local_40;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseBlendNode::Evaluate_AnyThread");
  bVar8 = IsInGameThread();
  if (bVar8) {
    FVar12 = StatPtr_STAT_PoseBlendNodeEvaluate;
    if (StatPtr_STAT_PoseBlendNodeEvaluate ==
        (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate>)0x0) {
      pFVar11 = ::FName::FName((FName *)&local_res8.s,"STAT_PoseBlendNodeEvaluate");
      pwVar14 = L"PoseBlendNodeEvaluate";
      this_03 = (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate_WorkerThread> *)
                &StatPtr_STAT_PoseBlendNodeEvaluate;
      goto LAB_14643b7a4;
    }
  }
  else {
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate>)
             StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread;
    if (StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate_WorkerThread>)0x0) {
      pFVar11 = ::FName::FName((FName *)&local_res8.s,"STAT_PoseBlendNodeEvaluate_WorkerThread");
      pwVar14 = L"PoseBlendNodeEvaluate_WorkerThread";
      this_03 = &StatPtr_STAT_PoseBlendNodeEvaluate_WorkerThread;
LAB_14643b7a4:
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_PoseBlendNodeEvaluate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_03,*pFVar11,pwVar14,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  LVar13 = *(LARGE_INTEGER *)FVar12;
  bVar8 = false;
  bVar6 = false;
  if ((LVar13.s.LowPart == 0) && (LVar13.s.HighPart == 0)) {
LAB_14643b875:
    bVar5 = false;
    LVar13._0_4_ = 0;
    LVar13._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_PoseBlendNode.cpp"
                   ,0x2b);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14643b875;
    local_res8 = LVar13;
    FThreadStats::AddMessage((FName)LVar13.s,CycleScopeStart);
    bVar5 = true;
  }
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_198,(FAnimInstanceProxy *)param_1->_padding_,
             (FAnimationUpdateSharedContext *)0x0);
  local_100 = param_1->bExpectsAdditivePose != false;
  local_178.Data = (TTransform<double> *)0x0;
  local_170 = 0;
  local_168 = 0;
  auStack_160._0_8_ = (FCurveElement *)0x0;
  auStack_160._8_8_ = 0;
  auStack_160[0x10] = false;
  local_148 = 0;
  pTStack_140 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_138 = 0;
  local_130 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_128 = 0;
  local_120 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               *)0x0;
  local_118 = 0;
  local_110 = (void *)0x0;
  local_108 = 0;
  FPoseContext::InitializeImpl((FPoseContext *)local_198,(FAnimInstanceProxy *)param_1->_padding_);
  local_198._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
  local_198._24_4_ = (undefined4)param_1->_padding_;
  FPoseLink::Evaluate(&this->SourcePose,(FPoseContext *)local_198);
  bVar4 = false;
  this_00 = (UPoseAsset *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (((this_00 != (UPoseAsset *)0x0) && (0 < (int)this->_padding_)) && (this_00->_padding_ != 0)) {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_f8,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_60 = param_1->bExpectsAdditivePose != false;
    local_f8._32_8_ = 0;
    local_f8._40_8_ = 0;
    local_f8._48_8_ = 0;
    local_f8._56_8_ = 0;
    local_f8._64_8_ = 0;
    local_f8[0x48] = 0;
    local_f8._80_8_ = 0;
    pTStack_a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_98 = 0;
    local_90 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_88 = 0;
    local_80 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)0x0;
    local_78 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    FPoseContext::InitializeImpl((FPoseContext *)local_f8,(FAnimInstanceProxy *)param_1->_padding_);
    local_f8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_f8._24_4_ = (undefined4)param_1->_padding_;
    local_res8 = (LARGE_INTEGER)this;
    UE::Anim::FNamedValueArrayUtils::
    Intersection<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FNamedIndexElement,_UE::Anim::FCurveUtils::BulkGet<FBlendedCurve,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FNamedIndexElement>,_FAnimNode_PoseBlendNode::Evaluate_AnyThread_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)auStack_160,
               &this->BulkCurves,(<lambda_1> *)&local_res8);
    FAnimationPoseData::FAnimationPoseData((FAnimationPoseData *)local_1b8,(FPoseContext *)local_f8)
    ;
    bVar9 = UPoseAsset::GetAnimationPose
                      (this_00,(FAnimationPoseData *)local_1b8,
                       (FAnimExtractContext *)&this->_padding_);
    if (bVar9) {
      cVar10 = (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
      if (cVar10 == '\0') {
        FAnimationPoseData::FAnimationPoseData(&local_58,param_1);
        FAnimationPoseData::FAnimationPoseData(&local_40,(FPoseContext *)local_198);
        FAnimationRuntime::BlendTwoPosesTogetherPerBone
                  (&local_40,(FAnimationPoseData *)local_1b8,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_58);
      }
      else {
        FPoseContext::operator=(param_1,(FPoseContext *)local_198);
        FAnimationPoseData::FAnimationPoseData(&local_58,param_1);
        FAnimationRuntime::AccumulateAdditivePose
                  (&local_58,(FAnimationPoseData *)local_1b8,__real_3f800000,AAT_LocalSpaceBase);
      }
      bVar4 = true;
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_80,(int)local_78);
    if (local_80 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_80);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_90,(int)local_88);
    if (local_90 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_90);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_a0,(int)local_98);
    if (pTStack_a0 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTStack_a0);
    }
    if (bVar4) goto LAB_14643bbd2;
  }
  if ((FAnimInstanceProxy *)param_1->_padding_ != (FAnimInstanceProxy *)local_198._0_8_) {
    FPoseContext::InitializeImpl(param_1,(FAnimInstanceProxy *)param_1->_padding_);
  }
  _Src.Data = local_178.Data;
  pFVar1 = &param_1->Pose;
  if (pFVar1 != (FCompactPose *)&local_178) {
    iVar7 = (int)local_170;
    lVar15 = (longlong)(int)local_170;
    puVar2 = &(param_1->Pose).field_0xc;
    *(int *)&(param_1->Pose).field_0x8 = (int)local_170;
    if (((int)local_170 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,(int)local_170,*(int *)puVar2,
                 (ForElementType<UE::Math::TTransform<double>_> *)pFVar1,(int)local_170,
                 (int *)puVar2);
      if (iVar7 != 0) {
        memcpy(*(void **)pFVar1,_Src.Data,lVar15 * 0x60);
      }
    }
  }
  *(undefined8 *)&(param_1->Pose).field_0x10 = local_168;
  FBlendedCurve::operator=(&param_1->Curve,(FBlendedCurve *)auStack_160);
  UE::Anim::FStackAttributeContainer::operator=
            (&param_1->CustomAttributes,(FStackAttributeContainer *)&pTStack_140);
  param_1->bExpectsAdditivePose = local_100;
LAB_14643bbd2:
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_120,(int)local_118);
  if (local_120 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_120);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_130,(int)local_128);
  if (local_130 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_130);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_140,(int)local_138);
  if (pTStack_140 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTStack_140);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && ((FName)LVar13.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_1b8._8_4_ = LVar13.s.LowPart;
      local_1ac = LVar13.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_1b8._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_1b8);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146445070

void __thiscall
FAnimNode_PoseBlendNode::GatherDebugData(FAnimNode_PoseBlendNode *this,FNodeDebugData *param_1)

{
  FNodeDebugData *pFVar1;
  FString local_18;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseBlendNode::GatherDebugData");
  FAnimNode_PoseHandler::GatherDebugData((FAnimNode_PoseHandler *)this,param_1);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pFVar1 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_18);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->SourcePose,pFVar1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 146459d20

void __thiscall
FAnimNode_PoseBlendNode::Initialize_AnyThread
          (FAnimNode_PoseBlendNode *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseBlendNode::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_PoseHandler::Initialize_AnyThread");
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  FAnimNode_PoseHandler::UpdatePoseAssetProperty
            ((FAnimNode_PoseHandler *)this,*(FAnimInstanceProxy **)param_1);
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// RebuildPoseList @ 146462530

void __thiscall
FAnimNode_PoseBlendNode::RebuildPoseList
          (FAnimNode_PoseBlendNode *this,FBoneContainer *param_1,UPoseAsset *param_2)

{
  int *piVar1;
  TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FNamedIndexElement> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  FAnimNode_PoseHandler::RebuildPoseList((FAnimNode_PoseHandler *)this,param_1,param_2);
  pTVar2 = &this->BulkCurves;
  iVar9 = (this->BulkCurves).Elements.ArrayMax;
  piVar1 = &(this->BulkCurves).Elements.ArrayMax;
  (this->BulkCurves).Elements.ArrayNum = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)pTVar2,0,piVar1);
  }
  (this->BulkCurves).bSorted = false;
  uVar10 = 0;
  iVar9 = (int)this->_padding_;
  if (0 < iVar9) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar9) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->BulkCurves).Elements.ArrayNum;
      lVar4 = this->_padding_;
      iVar8 = iVar9;
      if (iVar9 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)pTVar2,piVar1);
      }
      uVar10 = uVar10 + 1;
      (this->BulkCurves).Elements.ArrayNum = iVar8 + 1;
      pFVar3 = (pTVar2->Elements).AllocatorInstance.Data + (longlong)iVar8 * 0xc;
      *(undefined8 *)pFVar3 = *(undefined8 *)(lVar4 + lVar11);
      lVar11 = lVar11 + 0x10;
      *(int *)(pFVar3 + 8) = iVar9;
      (this->BulkCurves).bSorted = false;
      iVar9 = (int)this->_padding_;
    } while ((int)uVar10 < iVar9);
  }
  return;
}

// UpdateAssetPlayer @ 146471bb0

void __thiscall
FAnimNode_PoseBlendNode::UpdateAssetPlayer
          (FAnimNode_PoseBlendNode *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_PoseHandler::UpdateAssetPlayer((FAnimNode_PoseHandler *)this,param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->SourcePose,param_1);
  return;
}

