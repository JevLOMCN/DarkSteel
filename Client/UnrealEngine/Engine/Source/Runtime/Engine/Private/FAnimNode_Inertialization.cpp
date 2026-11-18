// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticStruct @ 1474907f0

UScriptStruct * __cdecl FAnimNode_Inertialization::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Inertialization,(UObject *)pUVar1,
                         L"AnimNode_Inertialization");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.OuterSingleton;
}

// RequestInertialization @ 147490940

void __thiscall
FAnimNode_Inertialization::RequestInertialization
          (FAnimNode_Inertialization *this,float param_1,UBlendProfile *param_2)

{
  FInertializationRequest local_68;
  
  if (0.0 <= param_1) {
    local_68.Duration = param_1;
    local_68.BlendProfile.field0_0x0 = (TObjectPtr<UBlendProfile_const_>_u_0)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_68.bUseBlendMode = false;
    local_68.BlendMode = Linear;
    local_68.CustomBlendCurve.field0_0x0.DebugPtr = (TObjectPtr<UCurveFloat>_u_0)0x0;
    local_68.Tag.ComparisonIndex.Value = 0;
    local_68.Tag.Number = 0;
    FText::FText(&local_68.Description_DEPRECATED);
    local_68.DescriptionString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.DescriptionString.Data.ArrayNum = 0;
    local_68.DescriptionString.Data.ArrayMax = 0;
    local_68.NodeId = -1;
    local_68.AnimInstance.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    TArray<FInertializationRequest,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FInertializationRequest>(&this->RequestQueue,&local_68);
    if (local_68.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.DescriptionString.Data.AllocatorInstance.Data);
    }
    if (local_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Description_DEPRECATED.TextData.Reference + 0x10))();
    }
  }
  return;
}

// RequestInertialization @ 147490a00

void __thiscall
FAnimNode_Inertialization::RequestInertialization
          (FAnimNode_Inertialization *this,FInertializationRequest *param_1)

{
  if (0.0 < param_1->Duration || param_1->Duration == 0.0) {
    TArray<FInertializationRequest,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FInertializationRequest_const_&>(&this->RequestQueue,param_1);
    return;
  }
  return;
}

// Initialize_AnyThread @ 147490a20

void __thiscall
FAnimNode_Inertialization::Initialize_AnyThread
          (FAnimNode_Inertialization *this,FAnimationInitializeContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  FCompactPoseBoneIndex local_res8 [2];
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Inertialization::Initialize_AnyThread");
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  piVar2 = (int *)((longlong)&(this->CurveFilter)._padding_ + 4);
  iVar3 = *piVar2;
  *(undefined4 *)&(this->CurveFilter)._padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->CurveFilter,0,piVar2);
  }
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = DisallowFiltered;
  pFVar4 = (FName *)(this->FilteredCurves).AllocatorInstance.Data;
  iVar3 = (this->FilteredCurves).ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar3;
  local_18.DataPtr = pFVar4;
  UE::Anim::FCurveFilter::AppendNames(&this->CurveFilter,&local_18);
  local_res8[0] = (FCompactPoseBoneIndex)0xffffffff;
  TArray<FCompactPoseBoneIndex,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Init
            (&this->BoneFilter,local_res8,(this->FilteredBones).ArrayNum);
  FInertializationSparsePose::Empty(&this->PrevPoseSnapshot);
  FInertializationSparsePose::Empty(&this->CurrPoseSnapshot);
  if ((this->RequestQueue).ArrayMax < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,8,&(this->RequestQueue).AllocatorInstance,(this->RequestQueue).ArrayNum,
               &(this->RequestQueue).ArrayMax);
  }
  piVar2 = &(this->BoneIndices).ArrayMax;
  (this->BoneIndices).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneIndices).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneTranslationDiffDirection).ArrayMax;
  (this->BoneTranslationDiffDirection).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneTranslationDiffDirection).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneTranslationDiffMagnitude).ArrayMax;
  (this->BoneTranslationDiffMagnitude).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneTranslationDiffMagnitude).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneTranslationDiffSpeed).ArrayMax;
  (this->BoneTranslationDiffSpeed).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneTranslationDiffSpeed).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotationDiffAxis).ArrayMax;
  (this->BoneRotationDiffAxis).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneRotationDiffAxis).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotationDiffAngle).ArrayMax;
  (this->BoneRotationDiffAngle).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneRotationDiffAngle).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneRotationDiffSpeed).ArrayMax;
  (this->BoneRotationDiffSpeed).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneRotationDiffSpeed).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneScaleDiffAxis).ArrayMax;
  (this->BoneScaleDiffAxis).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneScaleDiffAxis).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneScaleDiffMagnitude).ArrayMax;
  (this->BoneScaleDiffMagnitude).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneScaleDiffMagnitude).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->BoneScaleDiffSpeed).ArrayMax;
  (this->BoneScaleDiffSpeed).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneScaleDiffSpeed).AllocatorInstance,0,piVar2);
  }
  piVar2 = (int *)((longlong)&(this->CurveDiffs)._padding_ + 4);
  iVar3 = *piVar2;
  *(undefined4 *)&(this->CurveDiffs)._padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->CurveDiffs,0,piVar2);
  }
  *(undefined1 *)&(this->CurveDiffs)._padding_ = 0;
  this->DeltaTime = 0.0;
  puVar1 = &(this->InertializationDurationPerBone).field_0xc;
  this->InertializationState = Inactive;
  this->InertializationElapsedTime = 0.0;
  this->InertializationDuration = 0.0;
  *(undefined4 *)&(this->InertializationDurationPerBone).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InertializationDurationPerBone,0,(int *)puVar1);
  }
  this->InertializationMaxDuration = 0.0;
  this->InertializationDeficit = 0.0;
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 147490db0

void __thiscall
FAnimNode_Inertialization::CacheBones_AnyThread
          (FAnimNode_Inertialization *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FCompactPoseBoneIndex> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCompactPoseBoneIndex FVar7;
  undefined4 extraout_var;
  ForElementType<FCompactPoseBoneIndex> FVar8;
  uint uVar9;
  uint uVar10;
  FCompactPoseBoneIndex local_res8 [2];
  FAnimationCacheBonesContext *local_res10;
  longlong local_res20;
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Inertialization::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  if ((*(longlong *)(*(longlong *)param_1 + 0x660) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8[0] = (FCompactPoseBoneIndex)0xffffffff;
  TArray<FCompactPoseBoneIndex,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Init
            (&this->BoneFilter,local_res8,(this->FilteredBones).ArrayNum);
  uVar9 = 0;
  if (0 < (this->FilteredBones).ArrayNum) {
    local_res20 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->FilteredBones).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = *(longlong *)param_1;
      pFVar2 = (this->FilteredBones).AllocatorInstance.Data;
      if ((*(longlong *)(lVar1 + 0x150) == 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2821110184175206029>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                             ,0x173,"Skeleton"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)(pFVar2 + (longlong)(int)uVar9 * 0x10),
                 *(USkeleton **)(lVar1 + 0x150));
      uVar6 = 0;
      if ((int)uVar9 < (this->FilteredBones).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7 = FBoneReference::GetCompactPoseIndex
                        ((FBoneReference *)
                         ((this->FilteredBones).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10
                         ),(FBoneContainer *)&stack0x00000018);
      uVar6 = 0;
      if ((int)uVar9 < (this->BoneFilter).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->BoneFilter).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FCompactPoseBoneIndex>)&this->BoneFilter;
      if (FVar3 != (ForElementType<FCompactPoseBoneIndex>)0x0) {
        FVar8 = FVar3;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(local_res20 + (longlong)FVar8) = *(undefined4 *)CONCAT44(extraout_var,FVar7);
      local_res20 = local_res20 + 4;
      param_1 = local_res10;
    } while ((int)uVar9 < (this->FilteredBones).ArrayNum);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 147491030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_Inertialization::Update_AnyThread
          (FAnimNode_Inertialization *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  FInertializationRequest *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  short sVar8;
  TReferenceControllerBase<1> *pTVar9;
  short sVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName FVar12;
  FScopedGraphMessage local_b8;
  FScopedGraphMessage local_a8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_98;
  TSharedRef<UE::Anim::IGraphMessage,1> local_88;
  FAnimNode_Inertialization *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Inertialization::Update_AnyThread");
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar10 = (this->UpdateCounter).Counter, sVar10 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar10 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar8 = (this->UpdateCounter).Counter + 1;
    sVar10 = 0;
    if (sVar8 != -1) {
      sVar10 = sVar8;
    }
    if (((sVar10 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar10 != *(short *)(param_1->_padding_ + 0x5b0))) {
      piVar1 = &(this->RequestQueue).ArrayMax;
      pFVar3 = (FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data;
      iVar2 = (this->RequestQueue).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FInertializationRequest,int>(pFVar3,iVar2);
        (this->RequestQueue).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,0,&(this->RequestQueue).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FInertializationRequest,int>(pFVar3,iVar2);
        (this->RequestQueue).ArrayNum = 0;
      }
      Deactivate(this);
      FInertializationSparsePose::Empty(&this->PrevPoseSnapshot);
      FInertializationSparsePose::Empty(&this->CurrPoseSnapshot);
    }
  }
  lVar4 = param_1->_padding_;
  local_a8.MessageType.ComparisonIndex.Value = 0;
  local_a8.MessageType.Number = 0;
  (this->UpdateCounter).Counter = *(short *)(lVar4 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar4 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar4 + 0x5b2);
  local_a8.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
  local_98.SharedReferenceCount.ReferenceController = ::operator_new(0x30);
  if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_98.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
    local_98.SharedReferenceCount.ReferenceController = _UNK_150651568;
    FVar12 = UE::Anim::IInertializationRequester::TypeName;
    pTVar9 = pTVar11;
  }
  else {
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_98.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_98.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInertializationRequester_Anim_UE___00_SharedPointerInternals__6B_
    ;
    local_98.SharedReferenceCount.ReferenceController[1]._padding_ =
         (longlong)&___7FInertializationRequester_Anim_UE__6B_;
    *(FAnimNode_Inertialization **)
     &local_98.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = this;
    *(undefined4 *)&local_98.SharedReferenceCount.ReferenceController[2]._padding_ =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_98.SharedReferenceCount.ReferenceController[2].SharedReferenceCount =
         (atomic<int>)*(undefined4 *)&param_1->_padding_;
    local_98.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)uVar6;
    if (local_98.SharedReferenceCount.ReferenceController + 1 == (TReferenceControllerBase<1> *)0x0)
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar12 = UE::Anim::IInertializationRequester::TypeName;
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = local_98.SharedReferenceCount.ReferenceController;
    local_98.Object = (IGraphMessage *)(local_98.SharedReferenceCount.ReferenceController + 1);
  }
  UE::Anim::FScopedGraphMessage::PushMessage
            (&local_a8,(FAnimationBaseContext *)param_1,&local_98,FVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (this->bForwardRequestsThroughSkippedCachedPoseNodes == false) {
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  }
  else {
    uStack_70 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_68 = param_1->_padding_;
    local_b8.SharedContext = (FAnimationUpdateSharedContext *)param_1->_padding_;
    local_b8.MessageType.ComparisonIndex.Value = 0;
    local_b8.MessageType.Number = 0;
    local_78 = this;
    pTVar9 = ::operator_new(0x50);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_88.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar12 = UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      local_58[0] = (code *)0x0;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCachedPoseSkippedUpdateHandler_Anim_UE___00_SharedPointerInternals__6B_
      ;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FAnimNode_Inertialization::Update_AnyThread'::`8'::<lambda_1>,1,1>
                   ::_vftable_;
      local_30[1] = local_78;
      local_30[2] = CONCAT44(uStack_6c,uStack_70);
      local_30[3] = local_68;
      if (local_30 + 1 != (undefined8 *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>,void,TArrayView<UE::Anim::FMessageStack_const_,int>_>
                      ::Call;
      }
      UE::Anim::FCachedPoseSkippedUpdateHandler::FCachedPoseSkippedUpdateHandler
                ((FCachedPoseSkippedUpdateHandler *)(pTVar9 + 1),
                 (TUniqueFunction<void___cdecl(TArrayView<UE::Anim::FMessageStack_const_,int>)> *)
                 local_58);
      local_88.Object = (IGraphMessage *)(pTVar9 + 1);
      if ((TReferenceControllerBase<1> *)local_88.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar12 = UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName;
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = pTVar9;
      local_88.SharedReferenceCount.ReferenceController = pTVar9;
    }
    UE::Anim::FScopedGraphMessage::PushMessage
              (&local_b8,(FAnimationBaseContext *)param_1,&local_88,FVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
    UE::Anim::FScopedGraphMessage::PopMessage(&local_b8);
  }
  this->DeltaTime = param_1->DeltaTime + this->DeltaTime;
  UE::Anim::FScopedGraphMessage::PopMessage(&local_a8);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1474913d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FAnimNode_Inertialization::Evaluate_AnyThread(FAnimNode_Inertialization *this,FPoseContext *param_1)

{
  TArray<FInertializationRequest,TSizedDefaultAllocator<32>_> *this_00;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FInertializationRequest *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  undefined7 uVar16;
  TConsoleVariableData<int> *pTVar17;
  double *pdVar18;
  bool bVar19;
  UObject *pUVar20;
  TTransform<double> *pTVar21;
  AActor *pAVar22;
  FInertializationSparsePose *pFVar23;
  FInertializationSparsePose *pFVar24;
  UPackage *pUVar25;
  UEnum *this_01;
  FInertializationSparsePose *pFVar26;
  double *pdVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  float *pfVar31;
  FName FVar32;
  ForAnyElementType FVar33;
  wchar_t *pwVar34;
  uint uVar35;
  float *pfVar36;
  int iVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  undefined1 auStackY_398 [32];
  FInertializationSparsePose *pFVar77;
  undefined1 local_358 [4];
  uint local_354;
  FCompactPoseBoneIndex local_350 [2];
  longlong local_348;
  longlong local_340;
  FPoseContext *local_338;
  FName local_330;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TMemStackAllocator<0>_>_> local_328;
  FName local_318;
  FString local_310;
  FAnimNode_Inertialization *local_300;
  int local_2f8;
  UObject *local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined1 local_298 [16];
  double local_278 [42];
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_338 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Inertialization::Evaluate_AnyThread");
  FPoseLink::Evaluate(&this->Source,param_1);
  pTVar17 = CVarAnimInertializationEnable.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_147491442:
    lVar38 = 0;
  }
  else {
    bVar19 = IsInGameThread();
    lVar38 = 4;
    if (bVar19) goto LAB_147491442;
  }
  this_00 = &this->RequestQueue;
  iVar4 = (this->RequestQueue).ArrayNum;
  if (*(int *)((longlong)pTVar17->ShadowedValue + lVar38) == 0) {
    piVar3 = &(this->RequestQueue).ArrayMax;
    pFVar6 = (FInertializationRequest *)(this_00->AllocatorInstance).Data;
    if (*piVar3 < 0) {
      DestructItems<FInertializationRequest,int>(pFVar6,iVar4);
      (this->RequestQueue).ArrayNum = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&this_00->AllocatorInstance,0,piVar3);
      }
    }
    else {
      DestructItems<FInertializationRequest,int>(pFVar6,iVar4);
      (this->RequestQueue).ArrayNum = 0;
    }
    Deactivate(this);
    FInertializationSparsePose::Empty(&this->PrevPoseSnapshot);
    FInertializationSparsePose::Empty(&this->CurrPoseSnapshot);
    this->DeltaTime = 0.0;
    goto LAB_1474928db;
  }
  uVar28 = iVar4 - 1;
  if (-1 < (int)uVar28) {
    lVar38 = (longlong)(int)uVar28 * 0x58;
    do {
      uVar29 = 0;
      if ((int)uVar28 < (this->RequestQueue).ArrayNum) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar32 = *(FName *)((this_00->AllocatorInstance).Data + lVar38 + 0x20);
      if ((FVar32 != (FName)0x0) && (FVar32 != this->Tag)) {
        uVar29 = 0;
        if ((int)uVar28 < (this->RequestQueue).ArrayNum) {
          uVar29 = ~uVar28 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TArray<FInertializationRequest,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar28);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&this_00->AllocatorInstance,(this->RequestQueue).ArrayNum,
                   &(this->RequestQueue).ArrayMax);
      }
      lVar38 = lVar38 + -0x58;
      uVar28 = uVar28 - 1;
      param_1 = local_338;
    } while (-1 < (int)uVar28);
  }
  pTVar17 = CVarAnimInertializationIgnoreDeficit.Ref;
  iVar4 = (this->RequestQueue).ArrayNum;
  fVar76 = 0.0;
  if ((0 < iVar4) && ((this->CurrPoseSnapshot).BoneIndices.ArrayNum != 0)) {
    fVar69 = 0.0;
    if (this->InertializationState == Active) {
      if (0.0 < this->InertializationDeficit) {
        bVar19 = IsInParallelGameThread();
        if (bVar19) {
LAB_14749165a:
          lVar38 = 0;
        }
        else {
          bVar19 = IsInGameThread();
          lVar38 = 4;
          if (bVar19) goto LAB_14749165a;
        }
        if (*(int *)((longlong)pTVar17->ShadowedValue + lVar38) == 0) {
          fVar69 = this->InertializationDuration - this->InertializationElapsedTime;
          this->InertializationDeficit = fVar69;
          goto LAB_14749169b;
        }
      }
      this->InertializationDeficit =
           this->InertializationDuration - this->InertializationElapsedTime;
    }
LAB_14749169b:
    this->InertializationState = Pending;
    this->InertializationElapsedTime = 0.0;
    lVar38 = param_1->_padding_;
    if ((*(longlong *)(lVar38 + 0x660) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar38 + 0x660) + 0x40));
    if ((pUVar20 == (UObject *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("SkeletonAsset",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                            ,0x57,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar5 = *(int *)&pUVar20[2].field_0x20;
    lVar39 = (longlong)iVar5;
    lVar38 = param_1->_padding_;
    if ((*(longlong *)(lVar38 + 0x660) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_300 = this;
    local_2f8 = iVar5;
    local_2f0 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar38 + 0x660) + 0x40));
    if (((this->RequestQueue).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar41 = *(float *)(this_00->AllocatorInstance).Data - fVar69;
    if (fVar41 <= 0.0) {
      fVar41 = 0.0;
    }
    this->InertializationDuration = fVar41;
    if (((this->RequestQueue).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar7 = (this_00->AllocatorInstance).Data;
    iVar5 = *(int *)(pFVar7 + 0x40);
    iVar37 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar37 = 0;
    }
    ::FString::AssignRange
              (&this->InertializationRequestDescription,*(wchar_t **)(pFVar7 + 0x38),iVar37);
    if (((this->RequestQueue).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this->InertializationRequestNodeId = *(int *)((this_00->AllocatorInstance).Data + 0x48);
    if (((this->RequestQueue).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar7 = (this_00->AllocatorInstance).Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = *(UObject **)(pFVar7 + 0x50), pUVar20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar20);
    }
    (this->InertializationRequestAnimInstance).field0_0x0 =
         *(TObjectPtr<UObject>_u_0 *)(pFVar7 + 0x50);
    if (((this->RequestQueue).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar1 = &this->InertializationDurationPerBone;
    `FAnimNode_Inertialization::Evaluate_AnyThread'::__l13::<lambda_1>::
    operator()<UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (&local_300,pTVar1,this->InertializationDuration,
               *(UBlendProfile **)((this_00->AllocatorInstance).Data + 8));
    if (1 < iVar4) {
      local_328._0_8_ = 0;
      local_328._8_8_ = 0;
      local_354 = 1;
      if (1 < (longlong)iVar4) {
        local_340 = (longlong)iVar4 + -1;
        local_348 = 0x58;
        do {
          lVar38 = local_348;
          uVar30 = 0;
          uVar28 = 0;
          if ((int)local_354 < (this->RequestQueue).ArrayNum) {
            uVar28 = ~local_354 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar7 = (this->RequestQueue).AllocatorInstance.Data;
          fVar41 = *(float *)(pFVar7 + lVar38) - fVar69;
          if (fVar41 <= 0.0) {
            fVar41 = 0.0;
          }
          if (fVar41 < this->InertializationDuration) {
            this->InertializationDuration = fVar41;
            ::FString::operator=
                      (&this->InertializationRequestDescription,(FString *)(pFVar7 + lVar38 + 0x38))
            ;
            this->InertializationRequestNodeId = *(int *)(pFVar7 + lVar38 + 0x48);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)(pFVar7 + lVar38 + 0x50) != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)(pFVar7 + lVar38 + 0x50));
            }
            (this->InertializationRequestAnimInstance).field0_0x0 =
                 *(TObjectPtr<UObject>_u_0 *)(pFVar7 + lVar38 + 0x50);
          }
          if (*(UBlendProfile **)(pFVar7 + lVar38 + 8) == (UBlendProfile *)0x0) {
            uVar40 = uVar30;
            if (0 < lVar39) {
              do {
                uVar29 = (uint)uVar30;
                uVar28 = 0;
                if ((int)uVar29 < *(int *)&(this->InertializationDurationPerBone).field_0x8) {
                  uVar28 = ~uVar29 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                fVar42 = *(float *)(*(longlong *)pTVar1 + uVar40 * 4);
                uVar28 = 0;
                if ((int)uVar29 < *(int *)&(this->InertializationDurationPerBone).field_0x8) {
                  uVar28 = ~uVar29 >> 0x1f;
                }
                if (fVar41 <= fVar42) {
                  fVar42 = fVar41;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar30 = (ulonglong)(uVar29 + 1);
                *(float *)(*(longlong *)pTVar1 + uVar40 * 4) = fVar42;
                uVar40 = uVar40 + 1;
              } while ((longlong)uVar40 < lVar39);
            }
          }
          else {
            `FAnimNode_Inertialization::Evaluate_AnyThread'::__l13::<lambda_1>::
            operator()<UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TMemStackAllocator<0>_>_>_>
                      (&local_300,&local_328,fVar41,*(UBlendProfile **)(pFVar7 + lVar38 + 8));
            uVar40 = uVar30;
            if (0 < lVar39) {
              do {
                uVar29 = (uint)uVar30;
                uVar35 = ~uVar29 >> 0x1f;
                uVar28 = 0;
                if ((int)uVar29 < (int)local_328._8_4_) {
                  uVar28 = uVar35;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                fVar41 = *(float *)(local_328._0_8_ + uVar40 * 4);
                uVar28 = 0;
                if ((int)uVar29 < *(int *)&(this->InertializationDurationPerBone).field_0x8) {
                  uVar28 = uVar35;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                fVar42 = *(float *)(*(longlong *)pTVar1 + uVar40 * 4);
                uVar28 = 0;
                if ((int)uVar29 < *(int *)&(this->InertializationDurationPerBone).field_0x8) {
                  uVar28 = uVar35;
                }
                if (fVar41 <= fVar42) {
                  fVar42 = fVar41;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar30 = (ulonglong)(uVar29 + 1);
                *(float *)(*(longlong *)pTVar1 + uVar40 * 4) = fVar42;
                uVar40 = uVar40 + 1;
              } while ((longlong)uVar40 < lVar39);
            }
          }
          local_354 = local_354 + 1;
          local_348 = local_348 + 0x58;
          local_340 = local_340 + -1;
        } while (local_340 != 0);
        local_340 = 0;
        param_1 = local_338;
      }
    }
    pfVar31 = *(float **)pTVar1;
    pfVar36 = (float *)0x0;
    iVar4 = *(int *)&(this->InertializationDurationPerBone).field_0x8;
    pfVar2 = pfVar31 + iVar4;
    while( true ) {
      if (*(int *)&(this->InertializationDurationPerBone).field_0x8 != iVar4) {
        local_358[0] = 0;
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_358);
      }
      if (pfVar31 == pfVar2) break;
      if ((pfVar36 == (float *)0x0) || (*pfVar36 <= *pfVar31 && *pfVar31 != *pfVar36)) {
        pfVar36 = pfVar31;
      }
      pfVar31 = pfVar31 + 1;
    }
    fVar69 = this->InertializationDuration;
    if (this->InertializationDuration <= *pfVar36) {
      fVar69 = *pfVar36;
    }
    this->InertializationMaxDuration = fVar69;
  }
  piVar3 = &(this->RequestQueue).ArrayMax;
  pFVar6 = (FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data;
  iVar4 = (this->RequestQueue).ArrayNum;
  if ((this->RequestQueue).ArrayMax < 0) {
    DestructItems<FInertializationRequest,int>(pFVar6,iVar4);
    (this->RequestQueue).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&(this->RequestQueue).AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<FInertializationRequest,int>(pFVar6,iVar4);
    (this->RequestQueue).ArrayNum = 0;
  }
  if (this->InertializationState != Inactive) {
    fVar69 = this->DeltaTime;
    fVar41 = fVar69 + this->InertializationElapsedTime;
    this->InertializationElapsedTime = fVar41;
    if (fVar41 < this->InertializationDuration) {
      fVar42 = this->InertializationDeficit;
      if (fVar42 <= fVar69) {
        fVar69 = fVar42;
      }
      fVar42 = fVar42 - fVar69;
    }
    else {
      fVar42 = 0.0;
    }
    this->InertializationDeficit = fVar42;
    if (this->InertializationMaxDuration <= fVar41) {
      Deactivate(this);
    }
  }
  lVar38 = param_1->_padding_;
  local_128.Rotation.XY.m128d_f64[0] = *(double *)(lVar38 + 0x20);
  local_128.Rotation.XY.m128d_f64[1] = *(double *)(lVar38 + 0x28);
  local_128.Rotation.ZW.m128d_f64[0] = *(double *)(lVar38 + 0x30);
  local_128.Rotation.ZW.m128d_f64[1] = *(double *)(lVar38 + 0x38);
  local_128.Translation.XY.m128d_f64[0] = *(double *)(lVar38 + 0x40);
  local_128.Translation.XY.m128d_f64[1] = *(double *)(lVar38 + 0x48);
  local_128.Translation.ZW.m128d_f64[0] = *(double *)(lVar38 + 0x50);
  local_128.Translation.ZW.m128d_f64[1] = *(double *)(lVar38 + 0x58);
  local_128.Scale3D.XY.m128d_f64[0] = *(double *)(lVar38 + 0x60);
  local_128.Scale3D.XY.m128d_f64[1] = *(double *)(lVar38 + 0x68);
  local_128.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar38 + 0x70);
  local_128.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar38 + 0x78);
  if ((*(longlong *)(lVar38 + 0x158) == 0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar69 = USkeletalMeshComponent::GetTeleportDistanceThreshold
                     (*(USkeletalMeshComponent **)(lVar38 + 0x158));
  if (((this->CurrPoseSnapshot).BoneIndices.ArrayNum != 0) && (0.0 < fVar69)) {
    local_350[0] = (FCompactPoseBoneIndex)0x0;
    pTVar21 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                        ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)&param_1->Pose,
                         local_350);
    auVar58._8_8_ = local_128.Rotation.ZW.m128d_f64[1];
    auVar58._0_8_ = local_128.Rotation.ZW.m128d_f64[0];
    auVar66._8_8_ = local_128.Rotation.XY.m128d_f64[1];
    auVar66._0_8_ = local_128.Rotation.XY.m128d_f64[0];
    local_2c0 = (pTVar21->Translation).ZW.m128d_f64[0];
    local_2d0 = (pTVar21->Translation).XY.m128d_f64[0];
    dStack_2c8 = (pTVar21->Translation).XY.m128d_f64[1];
    dVar13 = local_2c0 * local_128.Scale3D.ZW.m128d_f64[0];
    dVar14 = local_128.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar43._8_4_ = SUB84(local_128.Rotation.ZW.m128d_f64[0],0);
    auVar43._0_8_ = local_128.Rotation.XY.m128d_f64[1];
    auVar43._12_4_ = (int)((ulonglong)local_128.Rotation.ZW.m128d_f64[0] >> 0x20);
    dVar12 = local_128.Scale3D.XY.m128d_f64[0] * local_2d0;
    dVar65 = local_128.Scale3D.XY.m128d_f64[1] * dStack_2c8;
    uVar63 = (undefined4)((ulonglong)dVar65 >> 0x20);
    auVar73._8_4_ = SUB84(dVar65,0);
    auVar73._0_8_ = dVar12;
    auVar73._12_4_ = uVar63;
    auVar51._8_4_ = SUB84(dVar65,0);
    auVar51._0_8_ = dVar12;
    auVar51._12_4_ = uVar63;
    auVar52._8_4_ = SUB84(dVar14,0);
    auVar52._0_8_ = dVar13;
    auVar52._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar52 = blendpd(auVar51,auVar52,2);
    auVar74._0_8_ =
         auVar73._8_8_ * local_128.Rotation.XY.m128d_f64[0] -
         local_128.Rotation.XY.m128d_f64[1] * dVar12;
    auVar74._8_8_ = dVar13 * local_128.Rotation.XY.m128d_f64[1] - auVar43._8_8_ * dVar65;
    auVar66 = blendpd(auVar66,auVar58,2);
    auVar53._0_8_ = auVar52._0_8_ * local_128.Rotation.ZW.m128d_f64[0] - auVar66._0_8_ * dVar13;
    auVar53._8_8_ = auVar52._8_8_ * local_128.Rotation.ZW.m128d_f64[1] - auVar66._8_8_ * dVar14;
    auVar52 = blendpd(auVar74,auVar53,2);
    auVar75._0_8_ = auVar52._0_8_ + auVar52._0_8_;
    auVar75._8_8_ = auVar52._8_8_ + auVar52._8_8_;
    dVar14 = auVar74._8_8_ + auVar74._8_8_;
    dVar10 = auVar53._0_8_ + auVar53._0_8_;
    uVar63 = SUB84(dVar10,0);
    uVar64 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar56._8_4_ = uVar63;
    auVar56._0_8_ = dVar14;
    auVar56._12_4_ = uVar64;
    auVar44._8_4_ = uVar63;
    auVar44._0_8_ = dVar14;
    auVar44._12_4_ = uVar64;
    auVar54._8_4_ = uVar63;
    auVar54._0_8_ = dVar14;
    auVar54._12_4_ = uVar64;
    auVar52 = blendpd(auVar54,auVar75,2);
    auVar57._0_8_ =
         auVar56._8_8_ * local_128.Rotation.XY.m128d_f64[0] -
         dVar14 * local_128.Rotation.XY.m128d_f64[1];
    auVar57._8_8_ =
         auVar75._0_8_ * local_128.Rotation.XY.m128d_f64[1] -
         auVar44._8_8_ * local_128.Rotation.ZW.m128d_f64[0];
    auVar45._8_4_ = SUB84(auVar75._8_8_,0);
    auVar45._0_8_ = auVar75._0_8_;
    auVar45._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
    auVar55._0_8_ =
         auVar52._0_8_ * local_128.Rotation.ZW.m128d_f64[0] - auVar75._0_8_ * auVar66._0_8_;
    auVar55._8_8_ =
         auVar52._8_8_ * local_128.Rotation.ZW.m128d_f64[1] - auVar45._8_8_ * auVar66._8_8_;
    auVar46._8_4_ = SUB84(auVar57._8_8_,0);
    auVar46._0_8_ = auVar57._0_8_;
    auVar46._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar52 = blendpd(auVar57,auVar55,2);
    local_2d8 = auVar75._0_8_ * local_128.Rotation.ZW.m128d_f64[1] + dVar13 + auVar52._0_8_ +
                local_128.Translation.ZW.m128d_f64[0];
    dVar10 = dVar10 * local_128.Rotation.ZW.m128d_f64[1] + dVar65 + auVar55._0_8_ +
             local_128.Translation.XY.m128d_f64[1];
    local_2e8._8_4_ = SUB84(dVar10,0);
    local_2e8._0_8_ =
         dVar14 * local_128.Rotation.ZW.m128d_f64[1] + dVar12 + auVar46._8_8_ +
         local_128.Translation.XY.m128d_f64[0];
    local_2e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    if (((this->CurrPoseSnapshot).BoneIndices.ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar28 = *(uint *)(this->CurrPoseSnapshot).BoneIndices.AllocatorInstance.Data;
    if (uVar28 != 0xffffffff) {
      uVar29 = 0;
      if ((int)uVar28 < (this->CurrPoseSnapshot).BoneTranslations.ArrayNum) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      auVar52 = *(undefined1 (*) [16])
                 (this->CurrPoseSnapshot).ComponentTransform.Rotation.ZW.m128d_f64;
      dVar50 = auVar52._0_8_;
      pFVar8 = (this->CurrPoseSnapshot).BoneTranslations.AllocatorInstance.Data;
      dVar13 = (this->CurrPoseSnapshot).ComponentTransform.Rotation.ZW.m128d_f64[1];
      pFVar7 = pFVar8 + (longlong)(int)uVar28 * 0x18;
      dVar12 = *(double *)(pFVar8 + (longlong)(int)uVar28 * 0x18 + 0x10) *
               (this->CurrPoseSnapshot).ComponentTransform.Scale3D.ZW.m128d_f64[0];
      dVar65 = (this->CurrPoseSnapshot).ComponentTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar14 = (this->CurrPoseSnapshot).ComponentTransform.Scale3D.XY.m128d_f64[0] *
               *(double *)pFVar7;
      dVar10 = (this->CurrPoseSnapshot).ComponentTransform.Scale3D.XY.m128d_f64[1] *
               *(double *)(pFVar7 + 8);
      uVar63 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_298 = *(undefined1 (*) [16])
                   (this->CurrPoseSnapshot).ComponentTransform.Rotation.XY.m128d_f64;
      auVar58 = blendpd(local_298,auVar52,2);
      auVar70._8_4_ = SUB84(dVar10,0);
      auVar70._0_8_ = dVar14;
      auVar70._12_4_ = uVar63;
      auVar71._0_8_ = auVar70._8_8_ * local_298._0_8_ - local_298._8_8_ * dVar14;
      auVar71._8_8_ = dVar12 * local_298._8_8_ - dVar50 * dVar10;
      auVar47._8_4_ = SUB84(dVar10,0);
      auVar47._0_8_ = dVar14;
      auVar47._12_4_ = uVar63;
      auVar11._8_4_ = SUB84(dVar65,0);
      auVar11._0_8_ = dVar12;
      auVar11._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      auVar66 = blendpd(auVar47,auVar11,2);
      auVar67._8_4_ = SUB84(auVar71._8_8_,0);
      auVar67._0_8_ = auVar71._0_8_;
      auVar67._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      auVar48._0_8_ = auVar66._0_8_ * dVar50 - auVar58._0_8_ * dVar12;
      auVar48._8_8_ = auVar66._8_8_ * auVar52._8_8_ - auVar58._8_8_ * dVar65;
      auVar66 = *(undefined1 (*) [16])
                 (this->CurrPoseSnapshot).ComponentTransform.Rotation.XY.m128d_f64;
      auVar58 = blendpd(auVar71,auVar48,2);
      dVar65 = auVar67._8_8_ + auVar67._8_8_;
      dVar68 = auVar48._0_8_ + auVar48._0_8_;
      auVar72._0_8_ = auVar58._0_8_ + auVar58._0_8_;
      auVar72._8_8_ = auVar58._8_8_ + auVar58._8_8_;
      auVar61._8_4_ = SUB84(dVar68,0);
      auVar61._0_8_ = dVar65;
      uVar63 = (undefined4)((ulonglong)dVar68 >> 0x20);
      auVar61._12_4_ = uVar63;
      auVar59._8_4_ = SUB84(dVar68,0);
      auVar59._0_8_ = dVar65;
      auVar59._12_4_ = uVar63;
      auVar58 = blendpd(auVar59,auVar72,2);
      auVar62._0_8_ = auVar61._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar65;
      auVar62._8_8_ = auVar72._0_8_ * auVar66._8_8_ - dVar50 * dVar68;
      auVar66 = blendpd(auVar66,auVar52,2);
      auVar49._8_4_ = SUB84(auVar62._8_8_,0);
      auVar49._0_8_ = auVar62._0_8_;
      auVar49._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar60._0_8_ = auVar58._0_8_ * dVar50 - auVar66._0_8_ * auVar72._0_8_;
      auVar60._8_8_ = auVar58._8_8_ * auVar52._8_8_ - auVar66._8_8_ * auVar72._8_8_;
      auVar52 = blendpd(auVar62,auVar60,2);
      local_2b8 = dVar65 * dVar13 + dVar14 + auVar49._8_8_ +
                  (this->CurrPoseSnapshot).ComponentTransform.Translation.XY.m128d_f64[0];
      dStack_2b0 = dVar68 * dVar13 + dVar10 + auVar60._0_8_ +
                   (this->CurrPoseSnapshot).ComponentTransform.Translation.XY.m128d_f64[1];
      local_2a8 = auVar72._0_8_ * dVar13 + dVar12 + auVar52._0_8_ +
                  (this->CurrPoseSnapshot).ComponentTransform.Translation.ZW.m128d_f64[0];
      if ((double)(fVar69 * fVar69) <
          (dStack_2b0 - (double)local_2e8._8_8_) * (dStack_2b0 - (double)local_2e8._8_8_) +
          (local_2b8 - (double)local_2e8._0_8_) * (local_2b8 - (double)local_2e8._0_8_) +
          (local_2a8 - local_2d8) * (local_2a8 - local_2d8)) {
        if (this->InertializationState == Pending) {
          Deactivate(this);
        }
        this->DeltaTime = 0.0;
      }
    }
  }
  pTVar17 = CVarAnimInertializationIgnoreVelocity.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_1474921c8:
    lVar38 = 0;
  }
  else {
    bVar19 = IsInGameThread();
    lVar38 = 4;
    if (bVar19) goto LAB_1474921c8;
  }
  if (*(int *)((longlong)pTVar17->ShadowedValue + lVar38) != 0) {
    this->DeltaTime = 0.0;
  }
  lVar38 = param_1->_padding_;
  local_330.ComparisonIndex.Value = 0;
  local_330.Number = 0;
  if ((*(longlong *)(lVar38 + 0x158) == 0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pAVar22 = *(AActor **)(*(longlong *)(lVar38 + 0x158) + 0xa8);
  FVar32 = local_330;
  if ((pAVar22 != (AActor *)0x0) &&
     (pAVar22 = AActor::GetAttachParentActor(pAVar22), FVar32 = local_330, pAVar22 != (AActor *)0x0)
     ) {
    FVar32 = (FName)pAVar22->_padding_;
  }
  if (this->InertializationState == Pending) {
    pFVar77 = &this->PrevPoseSnapshot;
    if ((((this->PrevPoseSnapshot).BoneIndices.ArrayNum == 0) ||
        ((this->CurrPoseSnapshot).BoneIndices.ArrayNum == 0)) &&
       (pFVar77 = &this->CurrPoseSnapshot, (this->CurrPoseSnapshot).BoneIndices.ArrayNum == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                          ,0x2a5,L"");
      if (bVar19) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this->InertializationState = Active;
    }
    else {
      InitFrom(this,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes,&local_128,FVar32,
               &this->CurrPoseSnapshot,pFVar77);
      this->InertializationState = Active;
    }
LAB_1474922f4:
    ApplyTo(this,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes);
  }
  else if (this->InertializationState == Active) goto LAB_1474922f4;
  if ((this->CurrPoseSnapshot).BoneIndices.ArrayNum != 0) {
    lVar38 = 2;
    lVar39 = 2;
    pFVar77 = &this->PrevPoseSnapshot;
    pdVar18 = local_278;
    do {
      pdVar27 = pdVar18;
      pFVar24 = pFVar77;
      dVar14 = (pFVar24->ComponentTransform).Rotation.XY.m128d_f64[1];
      dVar10 = (pFVar24->ComponentTransform).Rotation.ZW.m128d_f64[0];
      dVar12 = (pFVar24->ComponentTransform).Rotation.ZW.m128d_f64[1];
      pFVar77 = (FInertializationSparsePose *)&(pFVar24->RootMotionDelta).Rotation.ZW;
      *pdVar27 = (pFVar24->ComponentTransform).Rotation.XY.m128d_f64[0];
      pdVar27[1] = dVar14;
      dVar14 = (pFVar24->ComponentTransform).Translation.XY.m128d_f64[0];
      dVar65 = (pFVar24->ComponentTransform).Translation.XY.m128d_f64[1];
      pdVar27[2] = dVar10;
      pdVar27[3] = dVar12;
      dVar10 = (pFVar24->ComponentTransform).Translation.ZW.m128d_f64[0];
      dVar12 = (pFVar24->ComponentTransform).Translation.ZW.m128d_f64[1];
      pdVar27[4] = dVar14;
      pdVar27[5] = dVar65;
      dVar14 = (pFVar24->ComponentTransform).Scale3D.XY.m128d_f64[0];
      dVar65 = (pFVar24->ComponentTransform).Scale3D.XY.m128d_f64[1];
      pdVar27[6] = dVar10;
      pdVar27[7] = dVar12;
      dVar10 = (pFVar24->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar12 = (pFVar24->ComponentTransform).Scale3D.ZW.m128d_f64[1];
      pdVar27[8] = dVar14;
      pdVar27[9] = dVar65;
      dVar14 = *(double *)&pFVar24->bHasRootMotion;
      dVar65 = (double)pFVar24->_padding_;
      pdVar27[10] = dVar10;
      pdVar27[0xb] = dVar12;
      dVar10 = (pFVar24->RootMotionDelta).Rotation.XY.m128d_f64[0];
      dVar12 = (pFVar24->RootMotionDelta).Rotation.XY.m128d_f64[1];
      pdVar27[0xc] = dVar14;
      pdVar27[0xd] = dVar65;
      pdVar27[0xe] = dVar10;
      pdVar27[0xf] = dVar12;
      lVar39 = lVar39 + -1;
      pdVar18 = pdVar27 + 0x10;
    } while (lVar39 != 0);
    dVar14 = (pFVar24->RootMotionDelta).Rotation.ZW.m128d_f64[1];
    dVar10 = (pFVar24->RootMotionDelta).Translation.XY.m128d_f64[0];
    dVar12 = (pFVar24->RootMotionDelta).Translation.XY.m128d_f64[1];
    pdVar27[0x10] = ((__m128d *)pFVar77)->m128d_f64[0];
    pdVar27[0x11] = dVar14;
    dVar14 = (pFVar24->RootMotionDelta).Translation.ZW.m128d_f64[0];
    dVar65 = (pFVar24->RootMotionDelta).Translation.ZW.m128d_f64[1];
    pdVar27[0x12] = dVar10;
    pdVar27[0x13] = dVar12;
    dVar10 = (pFVar24->RootMotionDelta).Scale3D.XY.m128d_f64[0];
    dVar12 = (pFVar24->RootMotionDelta).Scale3D.XY.m128d_f64[1];
    pdVar27[0x14] = dVar14;
    pdVar27[0x15] = dVar65;
    dVar14 = (pFVar24->RootMotionDelta).Scale3D.ZW.m128d_f64[0];
    dVar65 = (pFVar24->RootMotionDelta).Scale3D.ZW.m128d_f64[1];
    pdVar27[0x16] = dVar10;
    pdVar27[0x17] = dVar12;
    pdVar27[0x18] = dVar14;
    pdVar27[0x19] = dVar65;
    lVar39 = 2;
    pFVar77 = &this->PrevPoseSnapshot;
    pFVar24 = &this->CurrPoseSnapshot;
    do {
      pFVar26 = pFVar24;
      pFVar23 = pFVar77;
      pFVar77 = (FInertializationSparsePose *)&(pFVar23->RootMotionDelta).Rotation.ZW;
      dVar14 = (pFVar26->ComponentTransform).Rotation.XY.m128d_f64[1];
      pFVar24 = (FInertializationSparsePose *)&(pFVar26->RootMotionDelta).Rotation.ZW;
      (pFVar23->ComponentTransform).Rotation.XY.m128d_f64[0] =
           (pFVar26->ComponentTransform).Rotation.XY.m128d_f64[0];
      (pFVar23->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar26->ComponentTransform).Rotation.ZW.m128d_f64[1];
      (pFVar23->ComponentTransform).Rotation.ZW.m128d_f64[0] =
           (pFVar26->ComponentTransform).Rotation.ZW.m128d_f64[0];
      (pFVar23->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pFVar26->ComponentTransform).Translation.XY.m128d_f64[1];
      (pFVar23->ComponentTransform).Translation.XY.m128d_f64[0] =
           (pFVar26->ComponentTransform).Translation.XY.m128d_f64[0];
      (pFVar23->ComponentTransform).Translation.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar26->ComponentTransform).Translation.ZW.m128d_f64[1];
      (pFVar23->ComponentTransform).Translation.ZW.m128d_f64[0] =
           (pFVar26->ComponentTransform).Translation.ZW.m128d_f64[0];
      (pFVar23->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (pFVar26->ComponentTransform).Scale3D.XY.m128d_f64[1];
      (pFVar23->ComponentTransform).Scale3D.XY.m128d_f64[0] =
           (pFVar26->ComponentTransform).Scale3D.XY.m128d_f64[0];
      (pFVar23->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar14;
      dVar14 = (pFVar26->ComponentTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar23->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
           (pFVar26->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      (pFVar23->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar14;
      uVar16 = *(undefined7 *)&pFVar26->field_0x61;
      lVar15 = pFVar26->_padding_;
      pFVar23->bHasRootMotion = pFVar26->bHasRootMotion;
      *(undefined7 *)&pFVar23->field_0x61 = uVar16;
      pFVar23->_padding_ = lVar15;
      dVar14 = (pFVar26->RootMotionDelta).Rotation.XY.m128d_f64[1];
      (pFVar23->RootMotionDelta).Rotation.XY.m128d_f64[0] =
           (pFVar26->RootMotionDelta).Rotation.XY.m128d_f64[0];
      (pFVar23->RootMotionDelta).Rotation.XY.m128d_f64[1] = dVar14;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    dVar14 = (pFVar26->RootMotionDelta).Rotation.ZW.m128d_f64[1];
    ((__m128d *)pFVar77)->m128d_f64[0] = ((__m128d *)pFVar24)->m128d_f64[0];
    (pFVar23->RootMotionDelta).Rotation.ZW.m128d_f64[1] = dVar14;
    dVar14 = (pFVar26->RootMotionDelta).Translation.XY.m128d_f64[1];
    (pFVar23->RootMotionDelta).Translation.XY.m128d_f64[0] =
         (pFVar26->RootMotionDelta).Translation.XY.m128d_f64[0];
    (pFVar23->RootMotionDelta).Translation.XY.m128d_f64[1] = dVar14;
    dVar14 = (pFVar26->RootMotionDelta).Translation.ZW.m128d_f64[1];
    (pFVar23->RootMotionDelta).Translation.ZW.m128d_f64[0] =
         (pFVar26->RootMotionDelta).Translation.ZW.m128d_f64[0];
    (pFVar23->RootMotionDelta).Translation.ZW.m128d_f64[1] = dVar14;
    dVar14 = (pFVar26->RootMotionDelta).Scale3D.XY.m128d_f64[1];
    (pFVar23->RootMotionDelta).Scale3D.XY.m128d_f64[0] =
         (pFVar26->RootMotionDelta).Scale3D.XY.m128d_f64[0];
    (pFVar23->RootMotionDelta).Scale3D.XY.m128d_f64[1] = dVar14;
    dVar14 = (pFVar26->RootMotionDelta).Scale3D.ZW.m128d_f64[1];
    (pFVar23->RootMotionDelta).Scale3D.ZW.m128d_f64[0] =
         (pFVar26->RootMotionDelta).Scale3D.ZW.m128d_f64[0];
    (pFVar23->RootMotionDelta).Scale3D.ZW.m128d_f64[1] = dVar14;
    pFVar77 = &this->CurrPoseSnapshot;
    pdVar18 = local_278;
    do {
      pdVar27 = pdVar18;
      pFVar24 = pFVar77;
      pFVar77 = (FInertializationSparsePose *)&(pFVar24->RootMotionDelta).Rotation.ZW;
      dVar14 = pdVar27[1];
      dVar10 = pdVar27[2];
      dVar12 = pdVar27[3];
      (pFVar24->ComponentTransform).Rotation.XY.m128d_f64[0] = *pdVar27;
      (pFVar24->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = pdVar27[4];
      dVar65 = pdVar27[5];
      (pFVar24->ComponentTransform).Rotation.ZW.m128d_f64[0] = dVar10;
      (pFVar24->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar12;
      dVar10 = pdVar27[6];
      dVar12 = pdVar27[7];
      (pFVar24->ComponentTransform).Translation.XY.m128d_f64[0] = dVar14;
      (pFVar24->ComponentTransform).Translation.XY.m128d_f64[1] = dVar65;
      dVar14 = pdVar27[8];
      dVar65 = pdVar27[9];
      (pFVar24->ComponentTransform).Translation.ZW.m128d_f64[0] = dVar10;
      (pFVar24->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar12;
      dVar10 = pdVar27[10];
      dVar12 = pdVar27[0xb];
      (pFVar24->ComponentTransform).Scale3D.XY.m128d_f64[0] = dVar14;
      (pFVar24->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar65;
      dVar14 = pdVar27[0xc];
      dVar65 = pdVar27[0xd];
      (pFVar24->ComponentTransform).Scale3D.ZW.m128d_f64[0] = dVar10;
      (pFVar24->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar12;
      dVar10 = pdVar27[0xe];
      dVar12 = pdVar27[0xf];
      *(double *)&pFVar24->bHasRootMotion = dVar14;
      pFVar24->_padding_ = (longlong)dVar65;
      (pFVar24->RootMotionDelta).Rotation.XY.m128d_f64[0] = dVar10;
      (pFVar24->RootMotionDelta).Rotation.XY.m128d_f64[1] = dVar12;
      lVar38 = lVar38 + -1;
      pdVar18 = pdVar27 + 0x10;
    } while (lVar38 != 0);
    dVar14 = pdVar27[0x11];
    dVar10 = pdVar27[0x12];
    dVar12 = pdVar27[0x13];
    ((__m128d *)pFVar77)->m128d_f64[0] = pdVar27[0x10];
    (pFVar24->RootMotionDelta).Rotation.ZW.m128d_f64[1] = dVar14;
    dVar14 = pdVar27[0x14];
    dVar65 = pdVar27[0x15];
    (pFVar24->RootMotionDelta).Translation.XY.m128d_f64[0] = dVar10;
    (pFVar24->RootMotionDelta).Translation.XY.m128d_f64[1] = dVar12;
    dVar10 = pdVar27[0x16];
    dVar12 = pdVar27[0x17];
    (pFVar24->RootMotionDelta).Translation.ZW.m128d_f64[0] = dVar14;
    (pFVar24->RootMotionDelta).Translation.ZW.m128d_f64[1] = dVar65;
    dVar14 = pdVar27[0x18];
    dVar65 = pdVar27[0x19];
    (pFVar24->RootMotionDelta).Scale3D.XY.m128d_f64[0] = dVar10;
    (pFVar24->RootMotionDelta).Scale3D.XY.m128d_f64[1] = dVar12;
    (pFVar24->RootMotionDelta).Scale3D.ZW.m128d_f64[0] = dVar14;
    (pFVar24->RootMotionDelta).Scale3D.ZW.m128d_f64[1] = dVar65;
  }
  FInertializationSparsePose::InitFrom
            (&this->CurrPoseSnapshot,&param_1->Pose,&param_1->Curve,&param_1->CustomAttributes,
             &local_128,FVar32,this->DeltaTime);
  fVar69 = __real_38d1b717;
  this->DeltaTime = 0.0;
  if (this->InertializationDuration <= fVar69) {
    fVar41 = 0.0;
  }
  else {
    fVar41 = this->InertializationElapsedTime / this->InertializationDuration;
  }
  if (this->InertializationState == Active) {
    fVar41 = __real_3f800000 - fVar41;
  }
  else {
    fVar41 = 0.0;
  }
  this_01 = Z_Registration_Info_UEnum_EInertializationState.OuterSingleton;
  if (Z_Registration_Info_UEnum_EInertializationState.OuterSingleton == (UEnum *)0x0) {
    pUVar25 = Z_Construct_UPackage__Script_Engine();
    this_01 = GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState,(UObject *)pUVar25,
                            L"EInertializationState");
    Z_Registration_Info_UEnum_EInertializationState.OuterSingleton = this_01;
    if ((this_01 == (UEnum *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumClass != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xca4,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  UEnum::GetNameByValue(this_01,(long64)&local_318);
  ::FName::ToString(&local_318,&local_310);
  FVar33.Data = (FScriptContainerElement *)L"";
  if (local_310.Data.ArrayNum != 0) {
    FVar33.Data = local_310.Data.AllocatorInstance.Data;
  }
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),L"State",
             (wchar_t *)FVar33.Data);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  fVar42 = this->InertializationElapsedTime;
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),L"Elapsed Time",
             fVar42);
  fVar42 = this->InertializationDuration;
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),L"Duration",fVar42);
  fVar42 = this->InertializationMaxDuration;
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),L"Max Duration",
             fVar42);
  if (fVar69 < this->InertializationDuration) {
    fVar76 = this->InertializationElapsedTime / this->InertializationDuration;
  }
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),L"Normalized Time",
             fVar76);
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),
             L"Inertialization Weight",fVar41);
  if ((this->InertializationRequestDescription).Data.ArrayNum == 0) {
    pwVar34 = L"";
  }
  else {
    pwVar34 = (wchar_t *)(this->InertializationRequestDescription).Data.AllocatorInstance.Data;
  }
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),
             L"Request Description",pwVar34);
  pUVar20 = (this->InertializationRequestAnimInstance).field0_0x0.DebugPtr;
  iVar4 = this->InertializationRequestNodeId;
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputAnimNodeValueAnimNode
            ((FAnimationBaseContext *)param_1,*(uint *)(this->_padding_ + 0x20),L"Request Node",
             iVar4,pUVar20);
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0x3c7,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FAnimTrace::OutputInertialization
            ((FAnimInstanceProxy *)param_1->_padding_,*(int *)(this->_padding_ + 0x20),fVar41,
             Inertialization);
LAB_1474928db:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 147492910

void __thiscall
FAnimNode_Inertialization::GatherDebugData(FAnimNode_Inertialization *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  int iVar3;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68 [5];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Inertialization::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Inertialization,(UObject *)pUVar2,
                         L"AnimNode_Inertialization");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_88);
  ::FString::PrintfImpl(&local_78,L"%s<W:%.1f%%> %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  if (this->InertializationDuration <= __real_38d1b717) {
    UEnum::GetValueAsString<enum_EInertializationState>(local_68,this->InertializationState);
    ::FString::PrintfImpl(&local_88,L"(\'%s\' Time: %.3f / %.3f [%.3f])");
  }
  else {
    UEnum::GetValueAsString<enum_EInertializationState>(local_68,this->InertializationState);
    ::FString::PrintfImpl(&local_88,L"(\'%s\' Time: %.3f / %.3f (%.0f%%) [%.3f])");
  }
  iVar3 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar3);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_88,false);
  plVar1 = *(longlong **)&this->Source;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// NeedsDynamicReset @ 147492bc0

bool __thiscall FAnimNode_Inertialization::NeedsDynamicReset(FAnimNode_Inertialization *this)

{
  return true;
}

// ResetDynamics @ 147492bd0

void __thiscall
FAnimNode_Inertialization::ResetDynamics(FAnimNode_Inertialization *this,ETeleportType param_1)

{
  return;
}

// StartInertialization @ 147492c30

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
FAnimNode_Inertialization::StartInertialization
          (FAnimNode_Inertialization *this,FPoseContext *param_1,FInertializationPose *param_2,
          FInertializationPose *param_3,float param_4,TArrayView<float_const_,int> *param_5,
          FInertializationPoseDiff *param_6)

{
  FCurveFilter *this_00;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  AActor *pAVar5;
  TArrayView<FName_const_,int> *pTVar6;
  FName local_res8;
  TArrayView<FName_const_,int> local_38;
  TArrayView<FName_const_,int> local_28;
  
  lVar2 = param_1->_padding_;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if (*(longlong *)(lVar2 + 0x158) == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2821110184175206020>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                       ,0x17c,"SkeletalMeshComponent");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pAVar5 = *(AActor **)(*(longlong *)(lVar2 + 0x158) + 0xa8);
  if (pAVar5 != (AActor *)0x0) {
    pAVar5 = AActor::GetAttachParentActor(pAVar5);
    if (pAVar5 != (AActor *)0x0) {
      local_res8 = (FName)pAVar5->_padding_;
    }
  }
  this_00 = &this->CurveFilter;
  if ((this->FilteredCurves).ArrayNum != (int)(this->CurveFilter)._padding_) {
    iVar1 = *(int *)((longlong)&(this->CurveFilter)._padding_ + 4);
    *(undefined4 *)&(this->CurveFilter)._padding_ = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,
                 (int *)((longlong)&(this->CurveFilter)._padding_ + 4));
    }
    *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
    (this->CurveFilter).FilterMode = DisallowFiltered;
    pTVar6 = TArrayView<FName_const_,int>::
             TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                       (&local_28,&this->FilteredCurves);
    local_38.DataPtr = pTVar6->DataPtr;
    local_38.ArrayNum = pTVar6->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    UE::Anim::FCurveFilter::AppendNames(this_00,&local_38);
  }
  FInertializationPoseDiff::InitFrom
            (param_6,&param_1->Pose,&param_1->Curve,
             (TTransform<double> *)(param_1->_padding_ + 0x20),&local_res8,param_2,param_3,this_00);
  return;
}

// ApplyInertialization @ 147492d90

void __thiscall
FAnimNode_Inertialization::ApplyInertialization
          (FAnimNode_Inertialization *this,FPoseContext *param_1,FInertializationPoseDiff *param_2,
          float param_3,float param_4,TArrayView<float_const_,int> *param_5)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_5->DataPtr;
  local_18.ArrayNum = param_5->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_5->field_0xc;
  FInertializationPoseDiff::ApplyTo
            (param_2,&param_1->Pose,&param_1->Curve,param_3,param_4,&local_18);
  return;
}

// GetSkeleton @ 147494040

USkeleton * __thiscall
FAnimNode_Inertialization::GetSkeleton
          (FAnimNode_Inertialization *this,bool *param_1,IPropertyHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeleton *pUVar3;
  IAnimClassInterface *pIVar4;
  
  *param_1 = false;
  if (this[-1].InertializationRequestAnimInstance.field0_0x0.DebugPtr == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeleton *)(*pcVar1)();
      return pUVar3;
    }
  }
  pIVar4 = FAnimNodeData::GetAnimClassInterface
                     ((FAnimNodeData *)
                      this[-1].InertializationRequestAnimInstance.field0_0x0.DebugPtr);
  if (pIVar4 != (IAnimClassInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147494099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (USkeleton *)
             (**(code **)((longlong)*pIVar4 + 0x98))(pIVar4,*(code **)((longlong)*pIVar4 + 0x98));
    return pUVar3;
  }
  return (USkeleton *)0x0;
}

// operator()<UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TMemStackAllocator<0>_>_>_> @ 1474a2910

void __thiscall
`FAnimNode_Inertialization::Evaluate_AnyThread'::__l13::<lambda_1>::
operator()<UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TMemStackAllocator<0>_>_>_>
          (void *this,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TMemStackAllocator<0>_>_> *param_1,
          float param_2,UBlendProfile *param_3)

{
  undefined1 *puVar1;
  void *_Dst;
  uint uVar2;
  undefined8 uVar3;
  USkeleton *pUVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  float local_res18 [2];
  undefined4 uStack_3c;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_38 [2];
  
  if (param_3 == (UBlendProfile *)0x0) {
    param_3 = *(UBlendProfile **)(*(longlong *)this + 0x28);
  }
  uVar2 = *(uint *)((longlong)this + 8);
  uVar11 = (ulonglong)uVar2;
  local_res18[0] = param_2;
  if (param_3 == (UBlendProfile *)0x0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    puVar1 = &param_1->field_0xc;
    *(undefined4 *)&param_1->field_0x8 = 0;
    if (*(uint *)puVar1 != uVar2) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<float>_>
                (4,4,uVar2,(ForElementType<float> *)param_1,0,(int *)puVar1);
    }
    if (0 < (int)uVar2) {
      do {
        if (((*(float **)param_1 <= local_res18) &&
            (local_res18 < *(float **)param_1 + *(int *)puVar1)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)&param_1->field_0x8;
        if (iVar9 == *(int *)puVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<float>_>
                            (0x404,(ForElementType<float> *)param_1,(int *)puVar1);
        }
        *(int *)&param_1->field_0x8 = iVar9 + 1;
        *(float *)(*(longlong *)param_1 + (longlong)iVar9 * 4) = local_res18[0];
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    iVar9 = *(int *)&param_1->field_0x8;
    puVar1 = &param_1->field_0x8;
    if (iVar9 < (int)uVar2) {
      iVar8 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                        (4,4,uVar2 - iVar9,(ForElementType<float> *)param_1,(int *)puVar1,
                         (int *)&param_1->field_0xc);
      memset((void *)(*(longlong *)param_1 + (longlong)iVar8 * 4),0,
             (longlong)(int)(uVar2 - iVar9) << 2);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar11);
      }
      if ((int)uVar2 < iVar9) {
        uVar10 = iVar9 - uVar2;
        if (((int)(uVar10 | uVar2) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          _Dst = (void *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 4);
          iVar9 = (*(int *)puVar1 - uVar2) - uVar10;
          if (iVar9 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar10 * 4),(longlong)iVar9 << 2);
          }
          *(uint *)puVar1 = *(int *)puVar1 - uVar10;
          UE::Core::Private::ReallocShrink<0,TMemStackAllocator<0>::ForElementType<float>_>
                    (4,4,(ForElementType<float> *)param_1,*(int *)puVar1,(int *)&param_1->field_0xc)
          ;
        }
      }
    }
    fVar6 = local_res18[0];
    uVar3 = *(undefined8 *)param_1;
    iVar9 = *(int *)puVar1;
    pUVar4 = *(USkeleton **)((longlong)this + 0x10);
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_38[0]._12_4_ = uStack_3c;
    local_38[0]._8_4_ = iVar9;
    local_38[0]._0_8_ = uVar3;
    UBlendProfile::FillSkeletonBoneDurationsArray(param_3,local_38,fVar6,pUVar4);
  }
  return;
}

// operator()<UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 1474a2be0

void __thiscall
`FAnimNode_Inertialization::Evaluate_AnyThread'::__l13::<lambda_1>::
operator()<UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>
          *param_1,float param_2,UBlendProfile *param_3)

{
  undefined1 *puVar1;
  void *_Dst;
  uint uVar2;
  USkeleton *pUVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *pTVar9;
  uint uVar10;
  float local_res18 [2];
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_48;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_38 [2];
  
  if (param_3 == (UBlendProfile *)0x0) {
    param_3 = *(UBlendProfile **)(*(longlong *)this + 0x28);
  }
  uVar2 = *(uint *)((longlong)this + 8);
  local_res18[0] = param_2;
  if (param_3 == (UBlendProfile *)0x0) {
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1,local_res18,uVar2);
    return;
  }
  iVar8 = *(int *)&param_1->field_0x8;
  puVar1 = &param_1->field_0x8;
  if (iVar8 < (int)uVar2) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar2 - iVar8,(ForAnyElementType *)param_1,(int *)puVar1,
                       (int *)&param_1->field_0xc);
    memset((void *)(*(longlong *)param_1 + (longlong)iVar7 * 4),0,
           (longlong)(int)(uVar2 - iVar8) << 2);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar8) {
      uVar10 = iVar8 - uVar2;
      if (((int)(uVar10 | uVar2) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (void *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 4);
        iVar8 = (*(int *)puVar1 - uVar2) - uVar10;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar10 * 4),(longlong)iVar8 << 2);
        }
        *(uint *)puVar1 = *(int *)puVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)param_1,*(int *)puVar1,(int *)&param_1->field_0xc);
      }
    }
  }
  fVar5 = local_res18[0];
  pUVar3 = *(USkeleton **)((longlong)this + 0x10);
  pTVar9 = UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_>::
           TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_><UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_&>
                     (local_38,param_1);
  local_48._0_8_ = *(undefined8 *)pTVar9;
  local_48._8_8_ = *(undefined8 *)&pTVar9->field_0x8;
  UBlendProfile::FillSkeletonBoneDurationsArray(param_3,&local_48,fVar5,pUVar3);
  return;
}

// FAnimNode_Inertialization @ 1474b14b0

FAnimNode_Inertialization * __thiscall
FAnimNode_Inertialization::FAnimNode_Inertialization(FAnimNode_Inertialization *this)

{
  this->bResetOnBecomingRelevant = false;
  this->bForwardRequestsThroughSkippedCachedPoseNodes = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FAnimNode_Base__;
  *(undefined8 *)&this->Source = 0;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  (this->Source).field_0xc = 0;
  (this->DefaultBlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->FilteredCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredCurves).ArrayNum = 0;
  (this->FilteredCurves).ArrayMax = 0;
  (this->FilteredBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredBones).ArrayNum = 0;
  (this->FilteredBones).ArrayMax = 0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  FInertializationSparsePose::FInertializationSparsePose(&this->PrevPoseSnapshot);
  FInertializationSparsePose::FInertializationSparsePose(&this->CurrPoseSnapshot);
  (this->RequestQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).ArrayNum = 0;
  (this->RequestQueue).ArrayMax = 0;
  *(undefined8 *)&this->InertializationDurationPerBone = 0;
  *(undefined8 *)&(this->InertializationDurationPerBone).field_0x8 = 0;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  (this->BoneTranslationDiffDirection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslationDiffDirection).ArrayNum = 0;
  (this->BoneTranslationDiffDirection).ArrayMax = 0;
  (this->BoneTranslationDiffMagnitude).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslationDiffMagnitude).ArrayNum = 0;
  (this->BoneTranslationDiffMagnitude).ArrayMax = 0;
  (this->BoneTranslationDiffSpeed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTranslationDiffSpeed).ArrayNum = 0;
  (this->BoneTranslationDiffSpeed).ArrayMax = 0;
  (this->BoneRotationDiffAxis).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotationDiffAxis).ArrayNum = 0;
  (this->BoneRotationDiffAxis).ArrayMax = 0;
  (this->BoneRotationDiffAngle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotationDiffAngle).ArrayNum = 0;
  (this->BoneRotationDiffAngle).ArrayMax = 0;
  (this->BoneRotationDiffSpeed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneRotationDiffSpeed).ArrayNum = 0;
  (this->BoneRotationDiffSpeed).ArrayMax = 0;
  (this->BoneScaleDiffAxis).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScaleDiffAxis).ArrayNum = 0;
  (this->BoneScaleDiffAxis).ArrayMax = 0;
  (this->BoneScaleDiffMagnitude).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScaleDiffMagnitude).ArrayNum = 0;
  (this->BoneScaleDiffMagnitude).ArrayMax = 0;
  (this->BoneScaleDiffSpeed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneScaleDiffSpeed).ArrayNum = 0;
  (this->BoneScaleDiffSpeed).ArrayMax = 0;
  (this->CurveDiffs)._padding_ = 0;
  (this->CurveDiffs)._padding_ = 0;
  *(undefined1 *)&(this->CurveDiffs)._padding_ = 0;
  (this->CurveDiffs).Filter = (FCurveFilter *)0x0;
  (this->PoseCurveData)._padding_ = 0;
  this->DeltaTime = 0.0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  this->InertializationState = Inactive;
  this->InertializationElapsedTime = 0.0;
  this->InertializationDuration = 0.0;
  this->InertializationMaxDuration = 0.0;
  this->InertializationDeficit = 0.0;
  *(undefined4 *)&(this->PoseCurveData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->PoseCurveData)._padding_ + 4) = 8;
  *(undefined1 *)&(this->PoseCurveData)._padding_ = 0;
  (this->PoseCurveData).Filter = (FCurveFilter *)0x0;
  (this->CurveFilter)._padding_ = 0;
  (this->CurveFilter)._padding_ = 0;
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = None;
  (this->BoneFilter).AllocatorInstance.SecondaryData = (ForElementType<FCompactPoseBoneIndex>)0x0;
  (this->BoneFilter).ArrayNum = 0;
  (this->BoneFilter).ArrayMax = 8;
  (this->InertializationRequestDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InertializationRequestDescription).Data.ArrayNum = 0;
  (this->InertializationRequestDescription).Data.ArrayMax = 0;
  (this->InertializationRequestAnimInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  this->InertializationRequestNodeId = -1;
  return this;
}

// ~FAnimNode_Inertialization @ 1474b4d20

void __thiscall
FAnimNode_Inertialization::~FAnimNode_Inertialization(FAnimNode_Inertialization *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FCompactPoseBoneIndex> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->InertializationRequestDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->BoneFilter).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FCompactPoseBoneIndex>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pvVar3 = (void *)(this->CurveFilter)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = (void *)(this->PoseCurveData)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = (void *)(this->CurveDiffs)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar1 = (this->BoneScaleDiffSpeed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneScaleDiffMagnitude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneScaleDiffAxis).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotationDiffSpeed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotationDiffAngle).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneRotationDiffAxis).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslationDiffSpeed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslationDiffMagnitude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTranslationDiffDirection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->InertializationDurationPerBone != (void *)0x0) {
    FMemory::Free(*(void **)&this->InertializationDurationPerBone);
  }
  DestructItems<FInertializationRequest,int>
            ((FInertializationRequest *)(this->RequestQueue).AllocatorInstance.Data,
             (this->RequestQueue).ArrayNum);
  pFVar1 = (this->RequestQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInertializationSparsePose::~FInertializationSparsePose(&this->CurrPoseSnapshot);
  FInertializationSparsePose::~FInertializationSparsePose(&this->PrevPoseSnapshot);
  pFVar1 = (this->FilteredBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilteredCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator() @ 1474b7190

void __thiscall
`FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>::operator()
          (void *this,TArrayView<UE::Anim::FMessageStack_const_,int> *param_1)

{
  FMessageStack *this_00;
  FMessageStack *pFVar1;
  code **local_res8;
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  if (0 < *(int *)(*(longlong *)this + 0x310)) {
    this_00 = param_1->DataPtr;
    pFVar1 = this_00 + param_1->ArrayNum;
    if (this_00 != pFVar1) {
      local_30 = &local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Anim::FMessageStack::ForEachMessage<UE::Anim::IInertializationRequester>'::__l2::<lambda_1>,enum_UE::Anim::FMessageStack::EEnumerate,UE::Anim::IGraphMessage_&>
                 ::Call;
      do {
        local_28 = *(undefined8 *)this;
        local_20 = *(undefined4 *)((longlong)this + 8);
        local_18 = *(undefined8 *)((longlong)this + 0x10);
        local_40 = &local_28;
        local_res8 = &local_48;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>::operator()'::__l9::<lambda_1>,enum_UE::Anim::FMessageStack::EEnumerate,UE::Anim::IInertializationRequester_&>
                   ::Call;
        UE::Anim::FMessageStack::ForEachMessage
                  (this_00,UE::Anim::IInertializationRequester::TypeName,
                   (TFunctionRef<UE::Anim::FMessageStack::EEnumerate___cdecl(UE::Anim::IGraphMessage_&)>
                    *)&local_38);
        this_00 = this_00 + 1;
      } while (this_00 != pFVar1);
    }
  }
  return;
}

// ApplyTo @ 1474bf380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_Inertialization::ApplyTo
          (FAnimNode_Inertialization *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FStackAttributeContainer *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FCompactPoseBoneIndex> FVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *pTVar30;
  FStackAttributeContainer *pFVar31;
  bool bVar32;
  char cVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  IAnimRootMotionProvider *pIVar37;
  ForElementType<FCompactPoseBoneIndex> FVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  float fVar44;
  undefined4 extraout_XMM0_Da;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong local_270;
  uint local_268;
  uint local_264;
  FCompactPose *local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_238;
  FStackAttributeContainer *local_230;
  double local_228;
  double dStack_220;
  double local_218;
  TQuat<double> local_208;
  TQuat<double> local_1e8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  ulonglong local_e8;
  
  dVar13 = __real_3fe0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_298;
  uVar39 = 0;
  uVar6 = *(uint *)&param_1->field_0x8;
  lVar42 = *(longlong *)&param_1->field_0x10;
  local_260 = param_1;
  local_240 = lVar42;
  local_238 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2;
  local_230 = param_3;
  if (uVar6 != 0) {
    local_258 = 0;
    local_248 = 0;
    do {
      lVar40 = local_248;
      lVar43 = local_258;
      local_264 = ~uVar39 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar39 < *(int *)(lVar42 + 0x78)) {
        uVar34 = local_264;
      }
      if (uVar34 == 0) {
        local_278 = (longlong)(int)uVar39;
        local_270 = (longlong)*(int *)(lVar42 + 0x78);
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar32) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar34 = *(uint *)(*(longlong *)(lVar42 + 0x70) + lVar43 * 4);
      lVar43 = (longlong)(int)uVar34;
      if (uVar34 != 0xffffffff) {
        iVar7 = (this->BoneIndices).ArrayNum;
        local_268 = ~uVar34 >> 0x1f;
        uVar35 = 0;
        if ((int)uVar34 < iVar7) {
          uVar35 = local_268;
        }
        if ((uVar35 == 0) &&
           (local_278 = lVar43, local_270 = (longlong)iVar7,
           bVar32 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar32)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar42 = local_240;
        if (*(int *)((this->BoneIndices).AllocatorInstance.Data + lVar43 * 4) != -1) {
          FVar8 = (this->BoneFilter).AllocatorInstance.SecondaryData;
          FVar38 = (ForElementType<FCompactPoseBoneIndex>)&this->BoneFilter;
          if (FVar8 != (ForElementType<FCompactPoseBoneIndex>)0x0) {
            FVar38 = FVar8;
          }
          FVar8 = (ForElementType<FCompactPoseBoneIndex>)
                  ((longlong)FVar38 + (longlong)(this->BoneFilter).ArrayNum * 4);
          for (; FVar38 != FVar8;
              FVar38 = (ForElementType<FCompactPoseBoneIndex>)((longlong)FVar38 + 4)) {
            if (*(uint *)FVar38 == uVar39) goto LAB_1474bfcf9;
          }
          iVar7 = (this->BoneIndices).ArrayNum;
          uVar35 = 0;
          if ((int)uVar34 < iVar7) {
            uVar35 = local_268;
          }
          if ((uVar35 == 0) &&
             (local_278 = lVar43, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar35 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar43 * 4);
          lVar42 = (longlong)(int)uVar35;
          if ((uVar35 == 0xffffffff) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InertializationBoneIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                                  ,0x437,L""), bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar7 = *(int *)&(this->InertializationDurationPerBone).field_0x8;
          uVar41 = 0;
          if ((int)uVar34 < iVar7) {
            uVar41 = local_268;
          }
          if ((uVar41 == 0) &&
             (local_278 = lVar43, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar7 = (this->BoneTranslationDiffDirection).ArrayNum;
          uVar41 = ~uVar35 >> 0x1f;
          fVar45 = *(float *)(*(longlong *)&this->InertializationDurationPerBone + lVar43 * 4);
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar9 = (this->BoneTranslationDiffDirection).AllocatorInstance.Data;
          fVar44 = this->InertializationElapsedTime;
          fVar3 = *(float *)(pFVar9 + lVar42 * 0xc);
          fVar47 = *(float *)(pFVar9 + lVar42 * 0xc + 4);
          fVar46 = *(float *)(pFVar9 + lVar42 * 0xc + 8);
          iVar7 = (this->BoneTranslationDiffSpeed).ArrayNum;
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar7 = (this->BoneTranslationDiffMagnitude).ArrayNum;
          fVar4 = *(float *)((this->BoneTranslationDiffSpeed).AllocatorInstance.Data + lVar42 * 4);
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar44 = UE::Anim::Inertialization::Private::CalcInertialFloat
                             (*(float *)((this->BoneTranslationDiffMagnitude).AllocatorInstance.Data
                                        + lVar42 * 4),fVar4,fVar44,fVar45);
          local_218 = (double)fVar44;
          uVar34 = 0;
          if ((int)uVar39 < *(int *)&local_260->field_0x8) {
            uVar34 = local_264;
          }
          local_228 = local_218 * (double)fVar3;
          dStack_220 = local_218 * (double)fVar47;
          local_218 = local_218 * (double)fVar46;
          if (uVar34 == 0) {
            local_278 = (longlong)(int)uVar39;
            local_270 = (longlong)*(int *)&local_260->field_0x8;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar32) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          lVar43 = *(longlong *)local_260;
          pdVar1 = (double *)(lVar40 + 0x20 + lVar43);
          pdVar2 = (double *)(lVar40 + 0x30 + lVar43);
          dVar15 = pdVar2[1] + 0.0;
          dVar18 = pdVar1[1] + dStack_220;
          auVar16._8_4_ = SUB84(dVar18,0);
          auVar16._0_8_ = *pdVar1 + local_228;
          auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x20 + lVar43) = auVar16;
          auVar14._8_4_ = SUB84(dVar15,0);
          auVar14._0_8_ = local_218 + *pdVar2;
          auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x30 + lVar43) = auVar14;
          iVar7 = (this->BoneRotationDiffSpeed).ArrayNum;
          fVar44 = this->InertializationElapsedTime;
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar7 = (this->BoneRotationDiffAngle).ArrayNum;
          fVar3 = *(float *)((this->BoneRotationDiffSpeed).AllocatorInstance.Data + lVar42 * 4);
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::Anim::Inertialization::Private::CalcInertialFloat
                    (*(float *)((this->BoneRotationDiffAngle).AllocatorInstance.Data + lVar42 * 4),
                     fVar3,fVar44,fVar45);
          iVar7 = (this->BoneRotationDiffAxis).ArrayNum;
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar9 = (this->BoneRotationDiffAxis).AllocatorInstance.Data;
          __libm_sse2_sincos_();
          uVar34 = local_264;
          uVar36 = 0;
          if ((int)uVar39 < *(int *)&local_260->field_0x8) {
            uVar36 = local_264;
          }
          dVar24 = (double)*(float *)(pFVar9 + lVar42 * 0xc) *
                   (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          dVar25 = (double)*(float *)(pFVar9 + lVar42 * 0xc + 4) *
                   (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          dVar18 = (double)*(float *)(pFVar9 + lVar42 * 0xc + 8) *
                   (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          dVar15 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          if (uVar36 == 0) {
            local_278 = local_258;
            local_270 = (longlong)*(int *)&local_260->field_0x8;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar32) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          local_250 = *(longlong *)local_260;
          uVar36 = 0;
          if ((int)uVar39 < *(int *)&local_260->field_0x8) {
            uVar36 = uVar34;
          }
          if (uVar36 == 0) {
            local_278 = local_258;
            local_270 = (longlong)*(int *)&local_260->field_0x8;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar32) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          lVar40 = local_248;
          pdVar1 = (double *)(local_248 + *(longlong *)local_260);
          dVar26 = *pdVar1;
          dVar27 = pdVar1[1];
          pdVar1 = (double *)(local_248 + 0x10 + *(longlong *)local_260);
          dVar28 = *pdVar1;
          dVar29 = pdVar1[1];
          dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar21 = dVar24 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar15 * dVar27 +
                   dVar25 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar18 * dVar26 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar19 = dVar24 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar15 * dVar29 +
                   dVar25 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar18 * dVar28 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar20._8_4_ = SUB84(dVar21,0);
          auVar20._0_8_ =
               dVar24 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar15 * dVar26 +
               dVar25 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar18 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          *(undefined1 (*) [16])(local_248 + local_250) = auVar20;
          auVar17._8_4_ = SUB84(dVar19,0);
          auVar17._0_8_ =
               dVar24 * dVar27 * dVar22 + dVar15 * dVar28 + dVar25 * dVar26 * dVar23 +
               dVar18 * dVar29 * dVar11;
          auVar17._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])(local_248 + 0x10 + local_250) = auVar17;
          iVar7 = (this->BoneScaleDiffAxis).ArrayNum;
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar9 = (this->BoneScaleDiffAxis).AllocatorInstance.Data;
          fVar44 = this->InertializationElapsedTime;
          fVar3 = *(float *)(pFVar9 + lVar42 * 0xc);
          fVar47 = *(float *)(pFVar9 + lVar42 * 0xc + 4);
          fVar46 = *(float *)(pFVar9 + lVar42 * 0xc + 8);
          iVar7 = (this->BoneScaleDiffSpeed).ArrayNum;
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar7 = (this->BoneScaleDiffMagnitude).ArrayNum;
          fVar4 = *(float *)((this->BoneScaleDiffSpeed).AllocatorInstance.Data + lVar42 * 4);
          uVar34 = 0;
          if ((int)uVar35 < iVar7) {
            uVar34 = uVar41;
          }
          if ((uVar34 == 0) &&
             (local_278 = lVar42, local_270 = (longlong)iVar7,
             bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar45 = UE::Anim::Inertialization::Private::CalcInertialFloat
                             (*(float *)((this->BoneScaleDiffMagnitude).AllocatorInstance.Data +
                                        lVar42 * 4),fVar4,fVar44,fVar45);
          lVar42 = local_258;
          param_1 = local_260;
          uVar34 = local_264;
          dVar15 = (double)fVar45;
          uVar35 = 0;
          if ((int)uVar39 < *(int *)&local_260->field_0x8) {
            uVar35 = local_264;
          }
          if (uVar35 == 0) {
            local_278 = local_258;
            local_270 = (longlong)*(int *)&local_260->field_0x8;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar32) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          local_248 = *(longlong *)param_1;
          uVar35 = 0;
          if ((int)uVar39 < *(int *)&param_1->field_0x8) {
            uVar35 = uVar34;
          }
          if (uVar35 == 0) {
            local_278 = lVar42;
            local_270 = (longlong)*(int *)&param_1->field_0x8;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar32) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          pdVar1 = (double *)(lVar40 + 0x40 + *(longlong *)param_1);
          local_1c8 = *pdVar1;
          dStack_1c0 = pdVar1[1];
          local_1b8 = *(double *)(lVar40 + 0x50 + *(longlong *)param_1);
          dVar18 = dVar15 * (double)fVar3 + local_1c8;
          local_1a0 = dVar15 * (double)fVar46 + local_1b8;
          dVar15 = dVar15 * (double)fVar47 + dStack_1c0;
          uVar48 = SUB84(dVar15,0);
          uVar49 = (undefined4)((ulonglong)dVar15 >> 0x20);
          local_1b0._8_4_ = uVar48;
          local_1b0._0_8_ = dVar18;
          local_1b0._12_4_ = uVar49;
          auVar12._8_4_ = uVar48;
          auVar12._0_8_ = dVar18;
          auVar12._12_4_ = uVar49;
          *(undefined1 (*) [16])(lVar40 + 0x40 + local_248) = auVar12;
          pdVar1 = (double *)(lVar40 + 0x50 + local_248);
          *pdVar1 = local_1a0;
          pdVar1[1] = 0.0;
          lVar42 = local_240;
        }
      }
LAB_1474bfcf9:
      local_248 = lVar40 + 0x60;
      local_258 = local_258 + 1;
      uVar39 = uVar39 + 1;
    } while (uVar39 != uVar6);
  }
  pFVar31 = local_230;
  pTVar30 = local_238;
  FCompactPose::NormalizeRotations(param_1);
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
  ::CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>(&this->PoseCurveData,pTVar30);
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_Inertialization::ApplyTo_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar30,
             (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
              *)&this->PoseCurveData,
             (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)
             &this->CurveDiffs,(<lambda_1>)this);
  pIVar37 = UE::Anim::IAnimRootMotionProvider::Get();
  if (pIVar37 != (IAnimRootMotionProvider *)0x0) {
    local_148[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_148[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_138[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_138[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_128[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_128[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_118[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_118[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_108[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_108[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    cVar33 = (**(code **)((longlong)*pIVar37 + 0x20))(pIVar37,pFVar31,local_148);
    if (cVar33 != '\0') {
      iVar7 = *(int *)&(this->InertializationDurationPerBone).field_0x8;
      if (iVar7 < 1) {
        local_278 = 0;
        local_270 = (longlong)iVar7;
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar32) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      fVar45 = (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.X;
      fVar44 = (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.Y;
      fVar3 = (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.Z;
      dVar15 = (double)this->DeltaTime;
      fVar47 = **(float **)&this->InertializationDurationPerBone;
      fVar46 = UE::Anim::Inertialization::Private::CalcInertialFloat
                         (this->RootTranslationVelocityDiffMagnitude,0.0,
                          this->InertializationElapsedTime,fVar47);
      dVar25 = (double)fVar46;
      fVar46 = (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.X;
      fVar4 = (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.Y;
      fVar5 = (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.Z;
      dVar24 = local_128[1] + dVar25 * (double)fVar44 * dVar15;
      dVar18 = local_118[1] + 0.0;
      local_128[1]._0_4_ = SUB84(dVar24,0);
      local_128[0] = local_128[0] + dVar25 * (double)fVar45 * dVar15;
      local_128[1]._4_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_118[1]._0_4_ = SUB84(dVar18,0);
      local_118[0] = local_118[0] + dVar25 * (double)fVar3 * dVar15;
      local_118[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
      dVar18 = (double)this->DeltaTime;
      fVar45 = UE::Anim::Inertialization::Private::CalcInertialFloat
                         (this->RootRotationVelocityDiffMagnitude,0.0,
                          this->InertializationElapsedTime,fVar47);
      dVar15 = (double)fVar45;
      local_208.X = dVar18 * (double)fVar46 * dVar15 * dVar13;
      local_208.Y = dVar18 * (double)fVar4 * dVar15 * dVar13;
      local_208.Z = dVar18 * (double)fVar5 * dVar15 * dVar13;
      local_208.W = 0.0;
      UE::Math::TQuat<double>::Exp(&local_208,&local_1e8);
      dVar18 = local_1e8.X * local_148[1];
      dVar24 = local_1e8.X * local_148[0];
      fVar45 = (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.X;
      dVar23 = local_1e8.Z * local_138[1];
      fVar44 = (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.Y;
      dVar13 = local_1e8.Z * local_148[1];
      dVar25 = local_148[0] * local_1e8.Y;
      dVar22 = local_148[1] * local_1e8.Y;
      dVar15 = local_1e8.X * local_138[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               local_148[1] * local_1e8.W +
               local_138[1] * local_1e8.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_1e8.Z * local_148[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_148[1]._0_4_ = SUB84(dVar15,0);
      local_148[0] = local_1e8.X * local_138[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_148[0] * local_1e8.W +
                     local_138[0] * local_1e8.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_148[1]._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
      dVar13 = dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               local_138[1] * local_1e8.W +
               dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               local_1e8.Z * local_138[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar15 = (double)this->DeltaTime;
      local_138[1]._0_4_ = SUB84(dVar13,0);
      local_138[0] = dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     local_138[0] * local_1e8.W +
                     dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_138[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
      fVar3 = (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.Z;
      fVar47 = UE::Anim::Inertialization::Private::CalcInertialFloat
                         (this->RootScaleVelocityDiffMagnitude,0.0,this->InertializationElapsedTime,
                          fVar47);
      dVar18 = (double)fVar47;
      dVar13 = dVar18 * (double)fVar44 * dVar15 + local_108[1];
      local_f8[1] = 0.0;
      local_f8[0] = dVar18 * (double)fVar3 * dVar15 + local_f8[0];
      local_108[1]._0_4_ = SUB84(dVar13,0);
      local_108[0] = dVar18 * (double)fVar45 * dVar15 + local_108[0];
      local_108[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
      (**(code **)((longlong)*pIVar37 + 0x18))(pIVar37,local_148,pFVar31);
    }
  }
  return;
}

// Deactivate @ 1474cb1a0

void __thiscall FAnimNode_Inertialization::Deactivate(FAnimNode_Inertialization *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  this->InertializationState = Inactive;
  piVar1 = &(this->BoneIndices).ArrayMax;
  (this->BoneIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslationDiffDirection).ArrayMax;
  (this->BoneTranslationDiffDirection).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneTranslationDiffDirection).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslationDiffMagnitude).ArrayMax;
  (this->BoneTranslationDiffMagnitude).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneTranslationDiffMagnitude).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneTranslationDiffSpeed).ArrayMax;
  (this->BoneTranslationDiffSpeed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneTranslationDiffSpeed).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotationDiffAxis).ArrayMax;
  (this->BoneRotationDiffAxis).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneRotationDiffAxis).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotationDiffAngle).ArrayMax;
  (this->BoneRotationDiffAngle).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneRotationDiffAngle).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneRotationDiffSpeed).ArrayMax;
  (this->BoneRotationDiffSpeed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneRotationDiffSpeed).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScaleDiffAxis).ArrayMax;
  (this->BoneScaleDiffAxis).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BoneScaleDiffAxis).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScaleDiffMagnitude).ArrayMax;
  (this->BoneScaleDiffMagnitude).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneScaleDiffMagnitude).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoneScaleDiffSpeed).ArrayMax;
  (this->BoneScaleDiffSpeed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneScaleDiffSpeed).AllocatorInstance,0,piVar1);
  }
  piVar1 = (int *)((longlong)&(this->CurveDiffs)._padding_ + 4);
  iVar3 = *piVar1;
  *(undefined4 *)&(this->CurveDiffs)._padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->CurveDiffs,0,piVar1);
  }
  *(undefined1 *)&(this->CurveDiffs)._padding_ = 0;
  puVar2 = &(this->InertializationDurationPerBone).field_0xc;
  *(undefined4 *)&(this->InertializationDurationPerBone).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InertializationDurationPerBone,0,(int *)puVar2);
  }
  this->InertializationElapsedTime = 0.0;
  this->InertializationDuration = 0.0;
  this->InertializationMaxDuration = 0.0;
  this->InertializationDeficit = 0.0;
  return;
}

// InitFrom @ 1474e3b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_Inertialization::InitFrom
          (FAnimNode_Inertialization *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FStackAttributeContainer *param_3,TTransform<double> *param_4,FName param_5,
          FInertializationSparsePose *param_6,FInertializationSparsePose *param_7)

{
  undefined4 *puVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *pTVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  ulonglong uVar28;
  undefined1 auVar29 [12];
  double dVar30;
  double dVar31;
  FCompactPose *pFVar32;
  FBlendedCurve *pFVar33;
  bool bVar34;
  char cVar35;
  uint uVar36;
  TQuat<double> *pTVar37;
  UObject *pUVar38;
  TTransform<double> *pTVar39;
  IAnimRootMotionProvider *pIVar40;
  longlong lVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  double dVar53;
  double extraout_XMM0_Qb;
  undefined1 auVar54 [16];
  double dVar68;
  double dVar69;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  uint uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar78;
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  double dVar89;
  double dVar93;
  double dVar94;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  double dVar96;
  double dVar100;
  double dVar104;
  undefined1 auVar101 [16];
  double dVar97;
  undefined8 uVar98;
  double dVar99;
  double dVar105;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined4 uVar106;
  float fVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined4 uVar115;
  float fVar116;
  undefined4 uVar117;
  undefined1 auStackY_6a8 [32];
  <lambda_1> local_678;
  longlong local_668;
  int local_640;
  float local_63c;
  float local_638;
  float local_634;
  float local_630;
  float local_62c;
  float local_628 [2];
  FCompactPose *local_620;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_618;
  TArray<float,TSizedDefaultAllocator<32>_> *local_610;
  TArray<float,TSizedDefaultAllocator<32>_> *local_608;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_600;
  TArray<float,TSizedDefaultAllocator<32>_> *local_5f8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_5f0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_5e8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_5e0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_5d8;
  double local_5d0 [2];
  double local_5b8;
  double dStack_5b0;
  TVector<double>_u_0 local_5a8;
  TTransform<double> *local_590;
  FBlendedCurve *local_588;
  FStackAttributeContainer *local_580;
  double local_578;
  double dStack_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  double local_558;
  double dStack_550;
  double local_548;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 local_528;
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  TQuat<double> local_4a8;
  TQuat<double> local_488;
  TQuat<double> local_468;
  TQuat<double> local_448;
  TQuat<double> local_428;
  TQuat<double> local_408;
  double local_3e8 [2];
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  double local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  undefined1 local_3a0 [16];
  double local_390;
  undefined1 local_388 [16];
  double local_378;
  undefined1 local_370 [16];
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  TQuat<double> local_2f8;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  double local_218 [2];
  double local_208 [2];
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8 [2];
  double local_1c8 [2];
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  undefined8 uVar70;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_590 = param_4;
  local_620 = param_1;
  local_588 = param_2;
  local_580 = param_3;
  if ((((param_6->BoneIndices).ArrayNum == 0) || ((param_7->BoneIndices).ArrayNum == 0)) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Prev1.IsEmpty() && !Prev2.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                          ,0x324,L""), bVar34)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  dVar94 = __real_3feff7cee0000000;
  dVar100 = (param_4->Rotation).XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar97 = (param_4->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_678 = (<lambda_1>)0x0;
  dVar93 = (param_4->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar89 = (param_4->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_518._8_4_ = SUB84(dVar97,0);
  local_518._0_8_ = dVar100;
  local_518._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
  local_508._8_4_ = SUB84(dVar89,0);
  local_508._0_8_ = dVar93;
  local_508._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
  if ((param_5 == param_6->AttachParentName) && (param_5 == param_7->AttachParentName)) {
    if (param_5 == (FName)0x0) {
      dVar93 = dVar100 * (param_6->ComponentTransform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               (param_6->ComponentTransform).Rotation.ZW.m128d_f64[1] * dVar89 +
               (param_6->ComponentTransform).Rotation.XY.m128d_f64[1] * dVar97 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar93 * (param_6->ComponentTransform).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      if (__real_3feff7cee0000000 <=
          (double)CONCAT44((uint)((ulonglong)dVar93 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar93,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        local_448.X = (param_7->ComponentTransform).Rotation.XY.m128d_f64[0];
        local_448.Y = (param_7->ComponentTransform).Rotation.XY.m128d_f64[1];
        local_448.Z = (param_7->ComponentTransform).Rotation.ZW.m128d_f64[0];
        local_448.W = (param_7->ComponentTransform).Rotation.ZW.m128d_f64[1];
        pTVar37 = UE::Math::TQuat<double>::operator*
                            (&local_448,&local_2f8,(TQuat<double> *)local_518);
        if (dVar94 <= (double)CONCAT44((uint)((ulonglong)pTVar37->W >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(pTVar37->W,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))
        goto LAB_1474e3d4f;
      }
      local_678 = (<lambda_1>)0x2;
    }
  }
  else {
    local_678 = (<lambda_1>)0x1;
  }
LAB_1474e3d4f:
  lVar6 = *(longlong *)&param_1->field_0x10;
  pUVar38 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar6 + 0x40));
  if ((pUVar38 == (UObject *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkeletonAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                          ,0x57,L""), bVar34)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_640 = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&this->BoneIndices,&local_640,*(int *)&pUVar38[2].field_0x20);
  uVar5 = *(uint *)&param_1->field_0x8;
  iVar45 = 0;
  uVar42 = 0;
  iVar47 = 0;
  if (uVar5 != 0) {
    lVar44 = 0;
    do {
      uVar71 = 0;
      if ((int)uVar42 < *(int *)(lVar6 + 0x78)) {
        uVar71 = ~uVar42 >> 0x1f;
      }
      if ((uVar71 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar71 = *(uint *)(lVar44 + *(longlong *)(lVar6 + 0x70));
      lVar43 = (longlong)(int)uVar71;
      if (uVar71 != 0xffffffff) {
        uVar46 = ~uVar71 >> 0x1f;
        uVar36 = 0;
        if ((int)uVar71 < (param_6->BoneIndices).ArrayNum) {
          uVar36 = uVar46;
        }
        if ((uVar36 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar45 = iVar47;
        if (*(int *)((param_6->BoneIndices).AllocatorInstance.Data + lVar43 * 4) != -1) {
          uVar36 = 0;
          if ((int)uVar71 < (param_7->BoneIndices).ArrayNum) {
            uVar36 = uVar46;
          }
          if ((uVar36 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)((param_7->BoneIndices).AllocatorInstance.Data + lVar43 * 4) != -1) {
            uVar36 = 0;
            if ((int)uVar71 < (this->BoneIndices).ArrayNum) {
              uVar36 = uVar46;
            }
            if ((uVar36 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(int *)((this->BoneIndices).AllocatorInstance.Data + lVar43 * 4) = iVar47;
            iVar47 = iVar47 + 1;
            iVar45 = iVar47;
          }
        }
      }
      uVar42 = uVar42 + 1;
      lVar44 = lVar44 + 4;
    } while (uVar42 != uVar5);
  }
  local_618 = &this->BoneTranslationDiffDirection;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (local_618,&UE::Math::TVector<float>::ZeroVector,iVar45);
  local_610 = &this->BoneTranslationDiffMagnitude;
  local_63c = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_610,&local_63c,iVar45);
  local_608 = &this->BoneTranslationDiffSpeed;
  local_638 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_608,&local_638,iVar45);
  local_600 = &this->BoneRotationDiffAxis;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (local_600,&UE::Math::TVector<float>::ZeroVector,iVar45);
  local_5f8 = &this->BoneRotationDiffAngle;
  local_634 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_5f8,&local_634,iVar45);
  local_5f0 = &this->BoneRotationDiffSpeed;
  local_630 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_5f0,&local_630,iVar45);
  local_5e8 = &this->BoneScaleDiffAxis;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (local_5e8,&UE::Math::TVector<float>::ZeroVector,iVar45);
  local_5e0 = &this->BoneScaleDiffMagnitude;
  local_62c = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_5e0,&local_62c,iVar45);
  local_5d8 = &this->BoneScaleDiffSpeed;
  local_628[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_5d8,local_628,iVar45);
  uVar42 = 0;
  uVar106 = SUB84(__real_3ff0000000000000,0);
  uVar108 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar5 = *(uint *)&local_620->field_0x8;
  fVar114 = __real_38d1b717;
  if (uVar5 != 0) {
    local_668 = 0;
    fVar113 = __real_c0490fdb;
    fVar88 = __real_40490fdb;
    do {
      dVar93 = 0.0;
      uVar71 = 0;
      if ((int)uVar42 < *(int *)(lVar6 + 0x78)) {
        uVar71 = ~uVar42 >> 0x1f;
      }
      if ((uVar71 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar71 = *(uint *)(*(longlong *)(lVar6 + 0x70) + local_668 * 4);
      lVar44 = (longlong)(int)uVar71;
      if (uVar71 != 0xffffffff) {
        uVar46 = ~uVar71 >> 0x1f;
        uVar36 = 0;
        if ((int)uVar71 < (param_6->BoneIndices).ArrayNum) {
          uVar36 = uVar46;
        }
        if ((uVar36 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(int *)((param_6->BoneIndices).AllocatorInstance.Data + lVar44 * 4) != -1) {
          uVar36 = 0;
          if ((int)uVar71 < (param_7->BoneIndices).ArrayNum) {
            uVar36 = uVar46;
          }
          if ((uVar36 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)((param_7->BoneIndices).AllocatorInstance.Data + lVar44 * 4) != -1) {
            uVar36 = 0;
            if ((int)uVar71 < (this->BoneIndices).ArrayNum) {
              uVar36 = uVar46;
            }
            if ((uVar36 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar36 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar44 * 4);
            lVar43 = (longlong)(int)uVar36;
            uVar49 = 0;
            if ((int)uVar71 < (param_6->BoneIndices).ArrayNum) {
              uVar49 = uVar46;
            }
            if ((uVar49 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar49 = *(uint *)((param_6->BoneIndices).AllocatorInstance.Data + lVar44 * 4);
            uVar48 = 0;
            if ((int)uVar71 < (param_7->BoneIndices).ArrayNum) {
              uVar48 = uVar46;
            }
            if ((uVar48 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar71 = *(uint *)((param_7->BoneIndices).AllocatorInstance.Data + lVar44 * 4);
            if ((uVar36 == 0xffffffff) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InertializationBoneIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                                    ,0x375,L""), bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar44 = (longlong)(int)uVar49;
            if ((uVar49 == 0xffffffff) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Prev1PoseBoneIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                                    ,0x376,L""), bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((uVar71 == 0xffffffff) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Prev2PoseBoneIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                                    ,0x377,L""), bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar32 = local_620;
            uVar46 = 0;
            if ((int)uVar42 < *(int *)&local_620->field_0x8) {
              uVar46 = ~uVar42 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar7 = *(longlong *)pFVar32;
            lVar41 = local_668 * 0x60;
            uVar48 = ~uVar49 >> 0x1f;
            local_578 = *(double *)(lVar41 + lVar7);
            dStack_570 = ((double *)(lVar41 + lVar7))[1];
            puVar1 = (undefined4 *)(lVar41 + 0x20 + lVar7);
            uVar106 = *puVar1;
            uVar108 = puVar1[1];
            uVar109 = puVar1[2];
            uVar110 = puVar1[3];
            puVar1 = (undefined4 *)(lVar41 + 0x30 + lVar7);
            uVar115 = *puVar1;
            uVar117 = puVar1[1];
            uStack_560 = puVar1[2];
            uStack_55c = puVar1[3];
            pdVar2 = (double *)(lVar41 + 0x50 + lVar7);
            local_4d8 = *pdVar2;
            dStack_4d0 = pdVar2[1];
            pdVar2 = (double *)(lVar41 + 0x10 + lVar7);
            local_5b8 = *pdVar2;
            dStack_5b0 = pdVar2[1];
            pdVar2 = (double *)(lVar41 + 0x40 + lVar7);
            local_4e8 = *pdVar2;
            dStack_4e0 = pdVar2[1];
            uVar46 = 0;
            if ((int)uVar49 < (param_6->BoneScales).ArrayNum) {
              uVar46 = uVar48;
            }
            local_568 = uVar115;
            uStack_564 = uVar117;
            local_4f8 = uVar106;
            uStack_4f4 = uVar108;
            uStack_4f0 = uVar109;
            uStack_4ec = uVar110;
            if ((uVar46 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_5d0[0] = (double)(param_6->BoneScales).AllocatorInstance.Data;
            uVar46 = 0;
            if ((int)uVar49 < (param_6->BoneTranslations).ArrayNum) {
              uVar46 = uVar48;
            }
            if ((uVar46 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = (param_6->BoneTranslations).AllocatorInstance.Data;
            uVar46 = 0;
            if ((int)uVar49 < (param_6->BoneRotations).ArrayNum) {
              uVar46 = uVar48;
            }
            if ((uVar46 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = (param_6->BoneRotations).AllocatorInstance.Data;
            pFVar3 = pFVar9 + lVar44 * 0x20 + 0x10;
            local_2d8.Rotation.ZW.m128d_f64[0] = *(double *)pFVar3;
            local_2d8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + 8);
            local_2d8.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar9 + lVar44 * 0x20);
            local_2d8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar8 + lVar44 * 0x18 + 0x10);
            local_2d8.Translation.XY.m128d_f64[0] = *(double *)(pFVar8 + lVar44 * 0x18);
            local_2d8.Translation.XY.m128d_f64[1] = *(double *)(pFVar8 + lVar44 * 0x18 + 8);
            local_2d8.Translation.ZW.m128d_f64[1] = 0.0;
            uVar49 = ~uVar71 >> 0x1f;
            local_2d8.Scale3D.ZW.m128d_f64[0] =
                 *(double *)((longlong)local_5d0[0] + 0x10 + lVar44 * 0x18);
            pdVar2 = (double *)((longlong)local_5d0[0] + lVar44 * 0x18);
            local_2d8.Scale3D.XY.m128d_f64[0] = *pdVar2;
            local_2d8.Scale3D.XY.m128d_f64[1] = pdVar2[1];
            uVar46 = 0;
            if ((int)uVar71 < (param_7->BoneScales).ArrayNum) {
              uVar46 = uVar49;
            }
            local_2d8.Scale3D.ZW.m128d_f64[1] = 0.0;
            if ((uVar46 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_5d0[0] = (double)((longlong)(int)uVar71 * 3);
            pFVar8 = (param_7->BoneScales).AllocatorInstance.Data;
            uVar46 = 0;
            if ((int)uVar71 < (param_7->BoneTranslations).ArrayNum) {
              uVar46 = uVar49;
            }
            if ((uVar46 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar3 = (param_7->BoneTranslations).AllocatorInstance.Data;
            uVar46 = 0;
            if ((int)uVar71 < (param_7->BoneRotations).ArrayNum) {
              uVar46 = uVar49;
            }
            if (uVar46 == 0) {
              bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar34) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar10 = (param_7->BoneRotations).AllocatorInstance.Data;
            lVar44 = (longlong)(int)uVar71 * 0x20;
            pFVar9 = pFVar10 + lVar44;
            local_558 = *(double *)pFVar9;
            dStack_550 = *(double *)(pFVar9 + 8);
            pFVar10 = pFVar10 + lVar44 + 0x10;
            local_278.Rotation.ZW.m128d_f64 = *(double (*) [2])pFVar10;
            auVar24 = *(undefined1 (*) [12])&pFVar10->field_0x0;
            local_278.Translation.ZW.m128d_f64[0]._0_4_ =
                 *(undefined4 *)(pFVar3 + (longlong)local_5d0[0] * 8 + 0x10);
            local_278.Translation.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)(pFVar3 + (longlong)local_5d0[0] * 8 + 0x10 + 4);
            local_278.Translation.ZW.m128d_f64[1]._0_4_ = 0;
            local_278.Translation.ZW.m128d_f64[1]._4_4_ = 0;
            local_278.Translation.XY.m128d_f64[1] =
                 *(double *)(pFVar3 + (longlong)local_5d0[0] * 8 + 8);
            local_278.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + (longlong)local_5d0[0] * 8)
            ;
            local_278.Scale3D.ZW.m128d_f64[0] =
                 *(double *)(pFVar8 + (longlong)local_5d0[0] * 8 + 0x10);
            local_538 = (undefined4)*(undefined8 *)&pFVar10->field_0x0;
            uStack_534 = (undefined4)((ulonglong)*(undefined8 *)&pFVar10->field_0x0 >> 0x20);
            uStack_530 = (undefined4)*(undefined8 *)(pFVar10 + 8);
            uStack_52c = (undefined4)((ulonglong)*(undefined8 *)(pFVar10 + 8) >> 0x20);
            pFVar8 = pFVar8 + (longlong)local_5d0[0] * 8;
            local_278.Scale3D.XY.m128d_f64[0] = *(double *)pFVar8;
            local_278.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar8 + 8);
            local_278.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_5d0 = local_278.Translation.XY.m128d_f64;
            local_278.Rotation.XY.m128d_f64[0] = local_558;
            local_278.Rotation.XY.m128d_f64[1] = dStack_550;
            if (uVar42 == 0) {
              if (local_678 == (<lambda_1>)0x1) {
                pTVar39 = UE::Math::TTransform<double>::GetRelativeTransform
                                    (&param_6->ComponentTransform,&local_1b8,local_590);
                UE::Math::TTransform<double>::Multiply(&local_2d8,&local_2d8,pTVar39);
                pTVar39 = UE::Math::TTransform<double>::GetRelativeTransform
                                    (&param_7->ComponentTransform,&local_158,local_590);
                UE::Math::TTransform<double>::Multiply(&local_278,&local_278,pTVar39);
                dVar93 = extraout_XMM0_Qb;
              }
              else if (local_678 == (<lambda_1>)0x2) {
                dVar14 = (param_6->ComponentTransform).Rotation.ZW.m128d_f64[0];
                dVar15 = (param_6->ComponentTransform).Rotation.ZW.m128d_f64[1];
                dVar17 = (param_6->ComponentTransform).Rotation.XY.m128d_f64[0];
                dVar69 = (param_6->ComponentTransform).Rotation.XY.m128d_f64[1];
                dVar21 = local_508._8_8_;
                dVar89 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
                dVar99 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
                dVar100 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                dVar105 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                dVar97 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
                dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
                dVar94 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                dVar20 = local_508._0_8_;
                dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                auVar102._8_4_ = local_508._0_4_;
                auVar102._0_8_ = dVar20;
                auVar102._12_4_ = local_508._4_4_;
                dVar16 = (double)local_518._0_8_ * dVar69 * dVar100 + dVar14 * dVar21 +
                         dVar17 * (double)local_518._8_8_ * dVar94 + dVar15 * dVar20 * dVar22;
                dVar53 = (double)local_518._0_8_ * dVar17 * dVar105 + dVar15 * dVar21 +
                         dVar69 * (double)local_518._8_8_ * dVar13 + dVar14 * dVar20 * dVar23;
                dVar78 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                dVar93 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                dVar18 = dVar15 * (double)local_518._0_8_ * dVar89 + dVar17 * dVar21 +
                         dVar14 * (double)local_518._8_8_ * dVar97 + dVar20 * dVar69 * dVar78;
                dVar69 = dVar14 * (double)local_518._0_8_ * dVar99 + dVar69 * dVar21 +
                         dVar15 * (double)local_518._8_8_ * dVar12 +
                         auVar102._8_8_ * dVar17 * dVar93;
                auVar79._8_4_ = SUB84(dVar18,0);
                auVar79._0_8_ = dVar18;
                auVar79._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                dVar14 = dVar18 * local_2d8.Rotation.ZW.m128d_f64[1];
                dVar15 = dVar18 * local_2d8.Rotation.ZW.m128d_f64[0];
                auVar54._8_4_ = SUB84(dVar16,0);
                auVar54._0_8_ = dVar16;
                auVar54._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                dVar68 = auVar54._8_8_ * local_2d8.Rotation.ZW.m128d_f64[0];
                dVar30 = (param_7->ComponentTransform).Rotation.ZW.m128d_f64[0];
                dVar31 = (param_7->ComponentTransform).Rotation.ZW.m128d_f64[1];
                auVar91 = *(undefined1 (*) [16])(param_7->ComponentTransform).Rotation.XY.m128d_f64;
                dVar96 = local_2d8.Rotation.ZW.m128d_f64[0] * dVar69;
                dVar104 = local_2d8.Rotation.ZW.m128d_f64[1] * dVar69;
                dVar17 = dVar16 * local_2d8.Rotation.XY.m128d_f64[1];
                local_2d8.Rotation.ZW.m128d_f64[0] =
                     dVar18 * local_2d8.Rotation.XY.m128d_f64[1] * dVar100 +
                     local_2d8.Rotation.ZW.m128d_f64[0] * dVar53 +
                     local_2d8.Rotation.XY.m128d_f64[0] * dVar69 * dVar94 +
                     dVar16 * local_2d8.Rotation.ZW.m128d_f64[1] * dVar22;
                local_2d8.Rotation.ZW.m128d_f64[1] =
                     auVar79._8_8_ * local_2d8.Rotation.XY.m128d_f64[0] * dVar105 +
                     local_2d8.Rotation.ZW.m128d_f64[1] * dVar53 +
                     local_2d8.Rotation.XY.m128d_f64[1] * dVar69 * dVar13 + dVar68 * dVar23;
                dVar15 = dVar15 * dVar99 + local_2d8.Rotation.XY.m128d_f64[1] * dVar53 +
                         dVar104 * dVar12 + dVar16 * local_2d8.Rotation.XY.m128d_f64[0] * dVar93;
                local_2d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
                local_2d8.Rotation.XY.m128d_f64[0] =
                     dVar14 * dVar89 + local_2d8.Rotation.XY.m128d_f64[0] * dVar53 + dVar96 * dVar97
                     + dVar17 * dVar78;
                local_2d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
                dVar53 = auVar91._0_8_;
                dVar69 = auVar91._8_8_;
                auVar55._8_4_ = auVar91._0_4_;
                auVar55._0_8_ = dVar69;
                auVar55._12_4_ = auVar91._4_4_;
                auVar91._12_4_ = uStack_52c;
                auVar91._0_12_ = auVar24;
                dVar15 = dVar31 * (double)local_518._0_8_ * dVar89 + dVar53 * dVar21 +
                         dVar30 * (double)local_518._8_8_ * dVar97 + dVar69 * dVar20 * dVar78;
                dVar16 = dVar30 * (double)local_518._0_8_ * dVar99 + dVar69 * dVar21 +
                         dVar31 * (double)local_518._8_8_ * dVar12 + auVar55._8_8_ * dVar20 * dVar93
                ;
                dVar18 = auVar24._0_8_;
                dVar14 = auVar91._8_8_;
                dVar17 = dVar69 * (double)local_518._0_8_ * dVar100 + dVar30 * dVar21 +
                         dVar53 * (double)local_518._8_8_ * dVar94 + dVar31 * dVar20 * dVar22;
                dVar53 = dVar53 * (double)local_518._0_8_ * dVar105 + dVar31 * dVar21 +
                         dVar69 * (double)local_518._8_8_ * dVar13 + dVar30 * dVar20 * dVar23;
                uVar106 = (undefined4)((ulonglong)dVar53 >> 0x20);
                auVar80._8_4_ = auVar24._0_4_;
                auVar80._0_8_ = dVar14;
                auVar80._12_4_ = auVar24._4_4_;
                auVar101._8_4_ = SUB84(dVar53,0);
                auVar101._0_8_ = dVar17;
                auVar101._12_4_ = uVar106;
                auVar72._8_4_ = SUB84(dVar16,0);
                auVar72._0_8_ = dVar16;
                auVar72._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                dVar69 = auVar101._8_8_;
                auVar56._8_4_ = SUB84(dVar53,0);
                auVar56._0_8_ = dVar69;
                auVar56._12_4_ = uVar106;
                auVar57._8_4_ = SUB84(local_558,0);
                auVar57._0_8_ = dStack_550;
                auVar57._12_4_ = (int)((ulonglong)local_558 >> 0x20);
                dVar105 = local_558 * dVar15 * dVar105 + dVar53 * dVar14 +
                          dVar16 * dStack_550 * dVar13 + dVar18 * dVar17 * dVar23;
                dVar93 = auVar57._8_8_ * dVar17 * dVar93;
                local_278.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar105,0);
                local_278.Rotation.ZW.m128d_f64[0] =
                     dStack_550 * dVar15 * dVar100 + dVar69 * dVar18 + dVar16 * local_558 * dVar94 +
                     dVar14 * dVar17 * dVar22;
                local_278.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar105 >> 0x20);
                local_278.Rotation.XY.m128d_f64[0] =
                     dVar14 * dVar15 * dVar89 + dVar69 * local_558 + dVar16 * dVar18 * dVar97 +
                     dStack_550 * dVar17 * dVar78;
                local_278.Rotation.XY.m128d_f64[1] =
                     auVar80._8_8_ * dVar15 * dVar99 + auVar56._8_8_ * dStack_550 +
                     auVar72._8_8_ * dVar14 * dVar12 + dVar93;
                uVar106 = local_4f8;
                uVar108 = uStack_4f4;
                uVar109 = uStack_4f0;
                uVar110 = uStack_4ec;
                fVar113 = __real_c0490fdb;
                fVar88 = __real_40490fdb;
                uVar115 = local_568;
                uVar117 = uStack_564;
              }
            }
            fVar114 = __real_38d1b717;
            auVar24._4_8_ = dVar93;
            auVar24._0_4_ = uVar108;
            auVar58._0_8_ = auVar24._0_8_ << 0x20;
            auVar58._8_4_ = uVar109;
            auVar58._12_4_ = uVar110;
            dVar100 = local_2d8.Translation.XY.m128d_f64[0] - (double)CONCAT44(uVar108,uVar106);
            fVar112 = 0.0;
            local_558 = local_2d8.Translation.XY.m128d_f64[0];
            dStack_550 = local_2d8.Translation.XY.m128d_f64[1];
            dVar93 = local_2d8.Translation.XY.m128d_f64[1] - auVar58._8_8_;
            local_548 = local_2d8.Translation.ZW.m128d_f64[0];
            dVar89 = local_2d8.Translation.ZW.m128d_f64[0] - (double)CONCAT44(uVar117,uVar115);
            local_528 = CONCAT44(uVar117,uVar115);
            auVar73._8_4_ = SUB84(local_2d8.Translation.ZW.m128d_f64[1],0);
            auVar73._0_8_ = dVar89;
            auVar73._12_4_ = (int)((ulonglong)local_2d8.Translation.ZW.m128d_f64[1] >> 0x20);
            fVar116 = (float)SQRT(dVar93 * dVar93 + dVar100 * dVar100 + dVar89 * dVar89);
            uVar98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            if (__real_38d1b717 < fVar116) {
              dVar97 = __real_3ff0000000000000 / (double)fVar116;
              uVar70 = dVar97 * dVar100;
              uVar19 = dVar97 * dVar93;
              uVar98 = dVar97 * dVar89;
            }
            if ((__real_38d1b717 < param_6->DeltaTime) && (__real_38d1b717 < fVar116)) {
              auVar25._4_8_ = auVar73._8_8_;
              auVar25._0_4_ = local_278.Translation.XY.m128d_f64[0]._4_4_;
              auVar74._0_8_ = auVar25._0_8_ << 0x20;
              auVar74._8_4_ = local_278.Translation.XY.m128d_f64[1]._0_4_;
              auVar74._12_4_ = local_278.Translation.XY.m128d_f64[1]._4_4_;
              local_3d8 = CONCAT44(local_278.Translation.ZW.m128d_f64[0]._4_4_,
                                   local_278.Translation.ZW.m128d_f64[0]._0_4_);
              auVar29._4_4_ = uVar109;
              auVar29._0_4_ = uVar108;
              auVar29._8_4_ = uVar110;
              local_3c0 = (double)CONCAT44(uStack_564,local_568);
              fVar112 = (fVar116 -
                        (float)((auVar74._8_8_ - auVar29._4_8_) * (double)uVar19 +
                                (local_278.Translation.XY.m128d_f64[0] -
                                (double)CONCAT44(uVar108,uVar106)) * (double)uVar70 +
                               ((double)CONCAT44(local_278.Translation.ZW.m128d_f64[0]._4_4_,
                                                 local_278.Translation.ZW.m128d_f64[0]._0_4_) -
                               local_3c0) * (double)uVar98)) / param_6->DeltaTime;
              local_3e8 = local_278.Translation.XY.m128d_f64;
              local_3d0 = uVar106;
              uStack_3cc = uVar108;
              uStack_3c8 = uVar109;
              uStack_3c4 = uVar110;
            }
            uVar46 = ~uVar36 >> 0x1f;
            uVar71 = 0;
            if ((int)uVar36 < local_618->ArrayNum) {
              uVar71 = uVar46;
            }
            local_538 = uVar106;
            uStack_534 = uVar108;
            uStack_530 = uVar109;
            uStack_52c = uVar110;
            if ((uVar71 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = (local_618->AllocatorInstance).Data;
            *(float *)(pFVar8 + lVar43 * 0xc) = (float)(double)uVar70;
            *(float *)(pFVar8 + lVar43 * 0xc + 4) = (float)(double)uVar19;
            *(float *)(pFVar8 + lVar43 * 0xc + 8) = (float)(double)uVar98;
            uVar71 = 0;
            if ((int)uVar36 < local_610->ArrayNum) {
              uVar71 = uVar46;
            }
            if ((uVar71 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)((local_610->AllocatorInstance).Data + lVar43 * 4) = fVar116;
            uVar71 = 0;
            if ((int)uVar36 < local_608->ArrayNum) {
              uVar71 = uVar46;
            }
            if ((uVar71 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar116 = 0.0;
            *(float *)((local_608->AllocatorInstance).Data + lVar43 * 4) = fVar112;
            dVar99 = local_5b8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar105 = dStack_5b0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar93 = local_578 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar89 = dStack_570 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar78 = local_2d8.Rotation.XY.m128d_f64[0];
            dVar94 = local_2d8.Rotation.XY.m128d_f64[1];
            auVar59._8_4_ = SUB84(local_2d8.Rotation.ZW.m128d_f64[1],0);
            auVar59._0_8_ = local_2d8.Rotation.ZW.m128d_f64[1];
            auVar59._12_4_ = (int)((ulonglong)local_2d8.Rotation.ZW.m128d_f64[1] >> 0x20);
            auVar81._8_4_ = SUB84(dVar89,0);
            auVar81._0_8_ = dVar93;
            auVar81._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
            auVar75._8_4_ = local_2d8.Rotation.XY.m128d_f64[1]._0_4_;
            auVar75._0_8_ = dVar94;
            auVar75._12_4_ = local_2d8.Rotation.XY.m128d_f64[1]._4_4_;
            auVar60._8_4_ = SUB84(local_2d8.Rotation.ZW.m128d_f64[0],0);
            auVar60._0_8_ = local_2d8.Rotation.ZW.m128d_f64[0];
            auVar60._12_4_ = (int)((ulonglong)local_2d8.Rotation.ZW.m128d_f64[0] >> 0x20);
            auVar90._0_8_ =
                 dVar94 * dVar93 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
            auVar90._8_8_ =
                 dVar94 * dVar89 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
            dVar100 = dVar78 * auVar81._8_8_ *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                      local_2d8.Rotation.ZW.m128d_f64[1] * dVar99 + auVar90._0_8_ +
                      local_2d8.Rotation.ZW.m128d_f64[0] * dVar105 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar97 = dVar78 * dVar93 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_2d8.Rotation.ZW.m128d_f64[1] * dVar105 + auVar90._8_8_ +
                     local_2d8.Rotation.ZW.m128d_f64[0] * dVar99 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            dVar94 = dVar78 * dVar105 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_2d8.Rotation.ZW.m128d_f64[1] * dVar93 +
                     dVar94 * dVar99 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     local_2d8.Rotation.ZW.m128d_f64[0] * auVar81._8_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar93 = dVar78 * dVar99 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     auVar59._8_8_ * dVar89 +
                     auVar75._8_8_ * dVar105 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar60._8_8_ * dVar93 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar89 = __real_bff0000000000000;
            if ((__real_bff0000000000000 <= dVar97) &&
               (dVar89 = dVar97, __real_3ff0000000000000 <= dVar97)) {
              dVar89 = __real_3ff0000000000000;
            }
            auVar76._8_4_ = SUB84(dVar93,0);
            auVar76._0_8_ = dVar94;
            auVar76._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
            dVar97 = dVar94 * dVar94 + dVar100 * dVar100;
            dVar78 = auVar76._8_8_ * dVar93 + 0.0;
            auVar61._8_4_ = SUB84(dVar78,0);
            auVar61._0_8_ = dVar97;
            auVar61._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
            auVar62._0_8_ = auVar61._8_8_ + dVar97;
            auVar62._8_8_ = dVar97 + dVar78;
            auVar91 = sqrtpd(auVar90,auVar62);
            uVar50 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar62._0_8_);
            uVar52 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar62._8_8_);
            auVar102 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar91
                            );
            uVar51 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar62._0_8_);
            auVar103._0_8_ = uVar50 & (ulonglong)(auVar102._0_8_ * dVar94);
            uVar28 = uVar52 & (ulonglong)(auVar102._8_8_ * dVar93);
            auVar103._8_4_ = (undefined4)uVar28;
            auVar103._12_4_ = (undefined4)(uVar28 >> 0x20);
            auVar82._0_4_ =
                 ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
            auVar82._4_4_ =
                 ~(uint)(uVar50 >> 0x20) &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
            auVar82._8_4_ =
                 ~(uint)uVar52 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
            auVar82._12_4_ =
                 ~(uint)(uVar52 >> 0x20) &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
            auVar103 = auVar103 | auVar82;
            auVar91 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar91)
            ;
            local_5a8._s_0.Z =
                 (double)(CONCAT44(~(uint)(uVar51 >> 0x20) &
                                   (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                         0x20),
                                   ~(uint)uVar51 &
                                   SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                         uVar51 & (ulonglong)(auVar91._0_8_ * dVar100));
            local_5a8._0_16_ = auVar103;
            local_4c8 = auVar103;
            local_4b8 = local_5a8._s_0.Z;
            dVar93 = acos(dVar89);
            fVar107 = __real_c0c90fdb;
            fVar95 = __real_40c90fdb;
            for (fVar112 = (float)(dVar93 + dVar93); fVar88 < fVar112;
                fVar112 = fVar112 + __real_c0c90fdb) {
            }
            for (; fVar112 < fVar113; fVar112 = fVar112 + __real_40c90fdb) {
            }
            uVar70 = extraout_XMM0_Qb_00;
            if (fVar112 < __real_00000000) {
              fVar112 = (float)((uint)fVar112 ^ __xmm_80000000800000008000000080000000);
              uVar71 = (uint)__xmm_80000000000000008000000000000000;
              uVar49 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
              local_5a8._4_4_ = auVar103._4_4_ ^ uVar49;
              local_5a8._0_4_ = auVar103._0_4_ ^ uVar71;
              local_5a8._s_0.Z =
                   (double)CONCAT44((uint)((ulonglong)local_4b8 >> 0x20) ^ uVar49,
                                    SUB84(local_4b8,0) ^ uVar71);
              uVar70 = 0;
              local_5a8._12_4_ = auVar103._12_4_ ^ uVar49;
              local_5a8._8_4_ = auVar103._8_4_ ^ uVar71;
            }
            if ((fVar114 < param_6->DeltaTime) && (fVar114 < fVar112)) {
              local_5b8 = local_5b8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dStack_5b0 = dStack_5b0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
              ;
              dVar100 = local_578 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar97 = dStack_570 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              auVar83._8_4_ = SUB84(local_278.Rotation.XY.m128d_f64[0],0);
              auVar83._0_8_ = local_278.Rotation.XY.m128d_f64[0];
              auVar83._12_4_ = (int)((ulonglong)local_278.Rotation.XY.m128d_f64[0] >> 0x20);
              auVar92._8_4_ = SUB84(dVar97,0);
              auVar92._0_8_ = dVar100;
              auVar92._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
              dVar89 = local_278.Rotation.ZW.m128d_f64[1];
              auVar63._8_4_ = local_278.Rotation.ZW.m128d_f64[1]._0_4_;
              auVar63._0_8_ = dVar89;
              auVar63._12_4_ = local_278.Rotation.ZW.m128d_f64[1]._4_4_;
              auVar77._8_4_ = SUB84(local_278.Rotation.XY.m128d_f64[1],0);
              auVar77._0_8_ = local_278.Rotation.XY.m128d_f64[1];
              auVar77._12_4_ = (int)((ulonglong)local_278.Rotation.XY.m128d_f64[1] >> 0x20);
              dVar93 = local_278.Rotation.ZW.m128d_f64[0];
              auVar64._8_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
              auVar64._0_8_ = dVar93;
              auVar64._12_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
              local_428.X = local_278.Rotation.XY.m128d_f64[0] * dStack_5b0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                            dVar89 * dVar100 +
                            local_278.Rotation.XY.m128d_f64[1] * local_5b8 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                            dVar93 * auVar92._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              local_428.Y = auVar83._8_8_ * local_5b8 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                            auVar63._8_8_ * dVar97 +
                            auVar77._8_8_ * dStack_5b0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                            auVar64._8_8_ * dVar100 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              local_428.Z = local_278.Rotation.XY.m128d_f64[0] * auVar92._8_8_ *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                            dVar89 * local_5b8 +
                            local_278.Rotation.XY.m128d_f64[1] * dVar100 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                            dVar93 * dStack_5b0 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              local_428.W = local_278.Rotation.XY.m128d_f64[0] * dVar100 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            dVar89 * dStack_5b0 +
                            local_278.Rotation.XY.m128d_f64[1] * dVar97 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            dVar93 * local_5b8 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              dVar93 = UE::Math::TQuat<double>::GetTwistAngle
                                 (&local_428,(TVector<double> *)&local_5a8._s_0);
              for (fVar116 = fVar112 - (float)dVar93; fVar88 < fVar116; fVar116 = fVar116 + fVar107)
              {
              }
              for (; fVar116 < fVar113; fVar116 = fVar116 + fVar95) {
              }
              fVar116 = fVar116 / param_6->DeltaTime;
              uVar70 = extraout_XMM0_Qb_01;
            }
            fVar95 = (float)local_5a8._s_0.X;
            uVar71 = 0;
            if ((int)uVar36 < local_600->ArrayNum) {
              uVar71 = uVar46;
            }
            fVar107 = (float)local_5a8._s_0.Y;
            fVar111 = (float)local_5a8._s_0.Z;
            if (uVar71 == 0) {
              bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar70 = extraout_XMM0._8_8_;
              if (bVar34) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar8 = (local_600->AllocatorInstance).Data;
            *(float *)(pFVar8 + lVar43 * 0xc) = fVar95;
            *(float *)(pFVar8 + lVar43 * 0xc + 4) = fVar107;
            *(float *)(pFVar8 + lVar43 * 0xc + 8) = fVar111;
            uVar71 = 0;
            if ((int)uVar36 < local_5f8->ArrayNum) {
              uVar71 = uVar46;
            }
            if (uVar71 == 0) {
              bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar70 = extraout_XMM0_00._8_8_;
              if (bVar34) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            *(float *)((local_5f8->AllocatorInstance).Data + lVar43 * 4) = fVar112;
            uVar71 = 0;
            if ((int)uVar36 < local_5f0->ArrayNum) {
              uVar71 = uVar46;
            }
            if (uVar71 == 0) {
              bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar70 = extraout_XMM0_01._8_8_;
              if (bVar34) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            fVar112 = 0.0;
            *(float *)((local_5f0->AllocatorInstance).Data + lVar43 * 4) = fVar116;
            local_3b8._8_8_ = local_2d8.Scale3D.XY.m128d_f64[1];
            local_3b8._0_8_ = local_2d8.Scale3D.XY.m128d_f64[0];
            local_3a0._8_8_ = dStack_4e0;
            local_3a0._0_8_ = local_4e8;
            auVar26._4_8_ = uVar70;
            auVar26._0_4_ = (int)((ulonglong)local_4e8 >> 0x20);
            auVar65._0_8_ = auVar26._0_8_ << 0x20;
            auVar65._8_4_ = SUB84(dStack_4e0,0);
            auVar65._12_4_ = (int)((ulonglong)dStack_4e0 >> 0x20);
            dVar93 = local_2d8.Scale3D.XY.m128d_f64[1] - auVar65._8_8_;
            local_3a8 = local_2d8.Scale3D.ZW.m128d_f64[0];
            dVar100 = local_2d8.Scale3D.ZW.m128d_f64[0] - local_4d8;
            local_390 = local_4d8;
            dVar89 = local_2d8.Scale3D.XY.m128d_f64[0] - local_4e8;
            auVar84._8_4_ = SUB84(local_2d8.Scale3D.XY.m128d_f64[1],0);
            auVar84._0_8_ = dVar89;
            auVar84._12_4_ = (int)((ulonglong)local_2d8.Scale3D.XY.m128d_f64[1] >> 0x20);
            fVar116 = (float)SQRT(dVar89 * dVar89 + dVar93 * dVar93 + dVar100 * dVar100);
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            if (fVar114 < fVar116) {
              dVar97 = __real_3ff0000000000000 / (double)fVar116;
              uVar19 = dVar97 * dVar89;
              uVar98 = dVar97 * dVar93;
              uVar70 = dVar97 * dVar100;
            }
            if ((fVar114 < param_6->DeltaTime) && (fVar114 < fVar116)) {
              local_388._8_8_ = local_278.Scale3D.XY.m128d_f64[1];
              local_388._0_8_ = local_278.Scale3D.XY.m128d_f64[0];
              auVar27._4_8_ = auVar84._8_8_;
              auVar27._0_4_ = (int)((ulonglong)local_278.Scale3D.XY.m128d_f64[0] >> 0x20);
              auVar85._0_8_ = auVar27._0_8_ << 0x20;
              auVar85._8_4_ = SUB84(local_278.Scale3D.XY.m128d_f64[1],0);
              auVar85._12_4_ = (int)((ulonglong)local_278.Scale3D.XY.m128d_f64[1] >> 0x20);
              local_378 = local_278.Scale3D.ZW.m128d_f64[0];
              local_360 = local_4d8;
              fVar112 = (fVar116 -
                        (float)((auVar85._8_8_ - dStack_4e0) * (double)uVar98 +
                                (local_278.Scale3D.XY.m128d_f64[0] - local_4e8) * (double)uVar19 +
                               (local_278.Scale3D.ZW.m128d_f64[0] - local_4d8) * (double)uVar70)) /
                        param_6->DeltaTime;
              local_370 = local_3a0;
            }
            uVar71 = 0;
            if ((int)uVar36 < local_5e8->ArrayNum) {
              uVar71 = uVar46;
            }
            if ((uVar71 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = (local_5e8->AllocatorInstance).Data;
            *(float *)(pFVar8 + lVar43 * 0xc) = (float)(double)uVar19;
            *(float *)(pFVar8 + lVar43 * 0xc + 4) = (float)(double)uVar98;
            *(float *)(pFVar8 + lVar43 * 0xc + 8) = (float)(double)uVar70;
            uVar71 = 0;
            if ((int)uVar36 < local_5e0->ArrayNum) {
              uVar71 = uVar46;
            }
            if ((uVar71 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)((local_5e0->AllocatorInstance).Data + lVar43 * 4) = fVar116;
            uVar71 = 0;
            if ((int)uVar36 < local_5d8->ArrayNum) {
              uVar71 = uVar46;
            }
            if ((uVar71 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(float *)((local_5d8->AllocatorInstance).Data + lVar43 * 4) = fVar112;
          }
        }
      }
      uVar42 = uVar42 + 1;
      local_668 = local_668 + 1;
    } while (uVar42 != uVar5);
    uVar106 = SUB84(__real_3ff0000000000000,0);
    uVar108 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  pTVar4 = &this->CurveDiffs;
  iVar47 = *(int *)((longlong)&(this->CurveDiffs)._padding_ + 4);
  *(undefined4 *)&(this->CurveDiffs)._padding_ = 0;
  if (iVar47 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)pTVar4,0,
               (int *)((longlong)&(this->CurveDiffs)._padding_ + 4));
  }
  pFVar33 = local_588;
  UE::Anim::FNamedValueArrayUtils::
  Union<_TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l3::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)pTVar4
             ,(TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_588,
             (<lambda_1>)local_678);
  *(undefined1 *)&(this->CurveDiffs)._padding_ = pFVar33->field_0x10;
  UE::Anim::FNamedValueArrayUtils::
  Union<_FAnimNode_Inertialization::InitFrom_::__l2::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)pTVar4
             ,(TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
              &param_6->Curves,local_678);
  if (fVar114 < param_6->DeltaTime) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_FAnimNode_Inertialization::InitFrom_::__l88::<lambda_2>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)
               pTVar4,(TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
                      &param_7->Curves,(<lambda_2>)param_6->DeltaTime);
  }
  if (0 < (int)(this->CurveFilter)._padding_) {
    UE::Anim::FCurveUtils::Filter<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
              (pTVar4,&this->CurveFilter);
  }
  *(undefined8 *)&(this->RootTranslationVelocityDiffDirection).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->RootTranslationVelocityDiffMagnitude = 0.0;
  *(undefined8 *)&(this->RootRotationVelocityDiffDirection).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->RootRotationVelocityDiffMagnitude = 0.0;
  *(undefined8 *)&(this->RootScaleVelocityDiffDirection).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->RootScaleVelocityDiffMagnitude = 0.0;
  pIVar40 = UE::Anim::IAnimRootMotionProvider::Get();
  if (pIVar40 != (IAnimRootMotionProvider *)0x0) {
    local_218[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_218[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_208[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_208[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_1f8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_1f8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_1e8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_1e8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_1d8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_1d8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_1c8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_1c8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    cVar35 = (**(code **)((longlong)*pIVar40 + 0x20))(pIVar40,local_580,local_218);
    fVar113 = __real_3f800000;
    if ((((cVar35 != '\0') && (param_6->bHasRootMotion != false)) && (fVar114 < param_6->DeltaTime))
       && (fVar114 < this->DeltaTime)) {
      local_358 = (param_6->RootMotionDelta).Translation.XY.m128d_f64[0];
      dStack_350 = (param_6->RootMotionDelta).Translation.XY.m128d_f64[1];
      local_348 = (param_6->RootMotionDelta).Translation.ZW.m128d_f64[0];
      dVar97 = (double)CONCAT44(uVar108,uVar106) / (double)param_6->DeltaTime;
      local_330 = local_1e8[0];
      dVar93 = (double)CONCAT44(uVar108,uVar106) / (double)this->DeltaTime;
      local_340 = local_1f8[0];
      dStack_338 = local_1f8[1];
      dVar89 = dVar97 * local_358 - dVar93 * local_1f8[0];
      dVar100 = dVar97 * dStack_350 - dVar93 * local_1f8[1];
      auVar66._0_8_ = dVar89 * dVar89;
      auVar66._8_8_ = 0;
      dVar93 = dVar97 * local_348 - dVar93 * local_1e8[0];
      auVar86._0_8_ = dVar100 * dVar100 + auVar66._0_8_ + dVar93 * dVar93;
      auVar86._8_8_ = 0;
      auVar91 = sqrtpd(auVar66,auVar86);
      fVar88 = (float)auVar91._0_8_;
      this->RootTranslationVelocityDiffMagnitude = fVar88;
      if (fVar114 < fVar88) {
        fVar88 = fVar113 / fVar88;
        (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.X = (float)dVar89 * fVar88;
        (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.Y = (float)dVar100 * fVar88;
        (this->RootTranslationVelocityDiffDirection).field0_0x0._s_0.Z = (float)dVar93 * fVar88;
      }
      local_468.X = (param_6->RootMotionDelta).Rotation.XY.m128d_f64[0];
      local_468.Y = (param_6->RootMotionDelta).Rotation.XY.m128d_f64[1];
      local_468.Z = (param_6->RootMotionDelta).Rotation.ZW.m128d_f64[0];
      local_468.W = (param_6->RootMotionDelta).Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Log(&local_468,&local_4a8);
      dVar94 = __real_4000000000000000;
      dVar89 = local_4a8.X * __real_4000000000000000;
      dVar78 = (double)CONCAT44(uVar108,uVar106) / (double)param_6->DeltaTime;
      dVar100 = local_4a8.Y * __real_4000000000000000;
      dVar97 = local_4a8.Z * __real_4000000000000000;
      local_408.Z = local_208[0];
      local_408.W = local_208[1];
      local_408.X = local_218[0];
      local_408.Y = local_218[1];
      UE::Math::TQuat<double>::Log(&local_408,&local_488);
      dVar93 = (double)CONCAT44(uVar108,uVar106) / (double)this->DeltaTime;
      dVar89 = dVar89 * dVar78 - local_488.X * dVar94 * dVar93;
      dVar100 = dVar100 * dVar78 - local_488.Y * dVar94 * dVar93;
      dVar97 = dVar97 * dVar78 - local_488.Z * dVar94 * dVar93;
      auVar67._0_8_ = dVar89 * dVar89;
      auVar67._8_8_ = 0;
      auVar87._0_8_ = dVar100 * dVar100 + auVar67._0_8_ + dVar97 * dVar97;
      auVar87._8_8_ = 0;
      auVar91 = sqrtpd(auVar67,auVar87);
      fVar88 = (float)auVar91._0_8_;
      this->RootRotationVelocityDiffMagnitude = fVar88;
      if (fVar114 < fVar88) {
        fVar88 = fVar113 / fVar88;
        (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.X = (float)dVar89 * fVar88;
        (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.Y = (float)dVar100 * fVar88;
        (this->RootRotationVelocityDiffDirection).field0_0x0._s_0.Z = (float)dVar97 * fVar88;
      }
      dVar89 = (double)CONCAT44(uVar108,uVar106) / (double)param_6->DeltaTime;
      dVar97 = (param_6->RootMotionDelta).Scale3D.XY.m128d_f64[0] * dVar89 - local_1d8[0] * dVar93;
      dVar100 = (param_6->RootMotionDelta).Scale3D.XY.m128d_f64[1] * dVar89 - local_1d8[1] * dVar93;
      dVar93 = (param_6->RootMotionDelta).Scale3D.ZW.m128d_f64[0] * dVar89 - local_1c8[0] * dVar93;
      fVar88 = (float)SQRT(dVar100 * dVar100 + dVar97 * dVar97 + dVar93 * dVar93);
      this->RootScaleVelocityDiffMagnitude = fVar88;
      if (fVar114 < fVar88) {
        fVar113 = fVar113 / fVar88;
        (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.X = (float)dVar97 * fVar113;
        (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.Y = (float)dVar100 * fVar113;
        (this->RootScaleVelocityDiffDirection).field0_0x0._s_0.Z = (float)dVar93 * fVar113;
      }
    }
  }
  return;
}

// LogRequestError @ 1474eb6e0

void __cdecl
FAnimNode_Inertialization::LogRequestError(FAnimationUpdateContext *param_1,FPoseLinkBase *param_2)

{
  return;
}

// LogRequestError @ 1474eb6f0

void __cdecl
FAnimNode_Inertialization::LogRequestError(FAnimationUpdateContext *param_1,int param_2)

{
  return;
}

