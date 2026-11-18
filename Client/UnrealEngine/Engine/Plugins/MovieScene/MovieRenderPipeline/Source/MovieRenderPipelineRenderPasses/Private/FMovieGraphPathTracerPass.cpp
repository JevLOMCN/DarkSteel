// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 5

// ApplyMovieGraphOverridesToSampleState @ 14ddd4e00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPathTracerPass::ApplyMovieGraphOverridesToSampleState
          (FMovieGraphPathTracerPass *this,FMovieGraphSampleState *param_1)

{
  (param_1->OverlappedSubpixelShift).field0_0x0._s_0.X = 0.5;
  (param_1->OverlappedSubpixelShift).field0_0x0._s_0.Y = 0.5;
  return;
}

// ApplyMovieGraphOverridesToSceneView @ 14ddd5000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPathTracerPass::ApplyMovieGraphOverridesToSceneView
          (FMovieGraphPathTracerPass *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FViewFamilyInitData *param_2,FCameraInfo *param_3)

{
  FSceneViewFamilyContext *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UClass *pUVar6;
  int iVar7;
  int iVar8;
  TSharedRef<FSceneViewFamilyContext,1> local_48;
  FSceneViewFamilyContext *local_38;
  TReferenceControllerBase<1> *local_30;
  
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieGraphImagePassBase::ApplyMovieGraphOverridesToSceneView
            ((FMovieGraphImagePassBase *)this,&local_48,param_2,param_3);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((*(uint *)&local_38->field_0x4c & 0x200) == 0) &&
     ((param_3->TilingParams).TileCount.field0_0x0._s_0.Y *
      (param_3->TilingParams).TileCount.field0_0x0._s_0.X < 2)) {
    iVar7 = (param_3->SamplingParams).SpatialSampleCount;
    iVar8 = iVar7 * (param_3->SamplingParams).TemporalSampleCount;
    iVar7 = iVar7 * (param_3->SamplingParams).TemporalSampleIndex +
            (param_3->SamplingParams).SpatialSampleIndex;
  }
  else {
    iVar8 = (param_3->SamplingParams).SpatialSampleCount;
    iVar7 = (param_3->SamplingParams).SpatialSampleIndex;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  pFVar1 = param_1->Object;
  if (*(int *)&pFVar1->field_0x10 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = **(longlong **)&pFVar1->field_0x8;
  *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x10;
  *(int *)(lVar2 + 0x1a5c) = iVar8;
  if (((*(uint *)&param_1->Object->field_0x4c & 0x200) == 0) &&
     ((param_3->TilingParams).TileCount.field0_0x0._s_0.X *
      (param_3->TilingParams).TileCount.field0_0x0._s_0.Y < 2)) {
    *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x80;
    *(uint *)(lVar2 + 0x1a64) = *(uint *)(lVar2 + 0x1a64) | 2;
  }
  lVar5 = (**(code **)(*(longlong *)this + 0xb8))
                    (this,(param_2->TimeData).EvaluatedConfig.field0_0x0.DebugPtr);
  if (lVar5 != 0) {
    pUVar6 = UMovieGraphPathTracerRenderPassNode::StaticClass();
    iVar8 = (int)pUVar6->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar6->_padding_)) {
      if ((*(byte *)(lVar5 + 0xf9) & 1) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x400;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x10f) << 4 ^ *(uint *)(lVar2 + 0x1a64)) & 0x10 ^
             *(uint *)(lVar2 + 0x1a64);
      }
      if ((*(byte *)(lVar5 + 0xf9) & 2) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x800;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x110) << 5 ^ *(uint *)(lVar2 + 0x1a64)) & 0x20 ^
             *(uint *)(lVar2 + 0x1a64);
      }
      if ((*(byte *)(lVar5 + 0xf9) & 4) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x1000;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x111) << 6 ^ *(uint *)(lVar2 + 0x1a64)) & 0x40 ^
             *(uint *)(lVar2 + 0x1a64);
      }
      if ((*(byte *)(lVar5 + 0xf9) & 8) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x2000;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x112) << 7 ^ *(uint *)(lVar2 + 0x1a64)) & 0x80 ^
             *(uint *)(lVar2 + 0x1a64);
      }
      if ((*(byte *)(lVar5 + 0xf9) & 0x10) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x4000;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x113) << 8 ^ *(uint *)(lVar2 + 0x1a64)) & 0x100 ^
             *(uint *)(lVar2 + 0x1a64);
      }
      if ((*(byte *)(lVar5 + 0xf9) & 0x20) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x8000;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x114) << 9 ^ *(uint *)(lVar2 + 0x1a64)) & 0x200 ^
             *(uint *)(lVar2 + 0x1a64);
      }
      if ((*(byte *)(lVar5 + 0xf9) & 0x40) != 0) {
        *(uint *)(lVar2 + 0x1350) = *(uint *)(lVar2 + 0x1350) | 0x10000;
        *(uint *)(lVar2 + 0x1a64) =
             ((uint)*(byte *)(lVar5 + 0x115) << 10 ^ *(uint *)(lVar2 + 0x1a64)) & 0x400 ^
             *(uint *)(lVar2 + 0x1a64);
      }
    }
  }
  *(bool *)(lVar2 + 0x11fb) = iVar7 == 0;
  *(int *)(lVar2 + 0x11fc) = (param_3->SamplingParams).SeedOffset;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetParentNode @ 14dde3330

UMovieGraphImagePassBaseNode * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPathTracerPass::GetParentNode
          (FMovieGraphPathTracerPass *this,UMovieGraphEvaluatedConfig *param_1)

{
  int iVar1;
  FName FVar2;
  UMovieGraphImagePassBaseNode *pUVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar5 = (FName *)(**(code **)(*(longlong *)this + 0x30))(this,local_res18);
  FVar2 = *pFVar5;
  pUVar6 = UMovieGraphPathTracerRenderPassNode::StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(param_1,&local_18,pUVar6,FVar2,true,false);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = *(UMovieGraphImagePassBaseNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar3 != (UMovieGraphImagePassBaseNode *)0x0) {
      pUVar6 = UMovieGraphPathTracerRenderPassNode::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return pUVar3;
      }
    }
  }
  bVar4 = `UE::MovieGraph::Rendering::FMovieGraphPathTracerPass::GetParentNode'::__l3::<lambda_1>::
          operator()(local_res8);
  if (bVar4) {
    return (UMovieGraphImagePassBaseNode *)0x0;
  }
  return (UMovieGraphImagePassBaseNode *)0x0;
}

// ShouldDiscardOutput @ 14ddff0f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::MovieGraph::Rendering::FMovieGraphPathTracerPass::ShouldDiscardOutput
          (FMovieGraphPathTracerPass *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FCameraInfo *param_2)

{
  FSceneViewFamilyContext *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  int iVar4;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((*(uint *)&pFVar1->field_0x4c & 0x200) == 0) &&
     ((param_2->TilingParams).TileCount.field0_0x0._s_0.Y *
      (param_2->TilingParams).TileCount.field0_0x0._s_0.X < 2)) {
    iVar3 = (param_2->SamplingParams).SpatialSampleCount;
    iVar4 = iVar3 * (param_2->SamplingParams).TemporalSampleCount;
    iVar3 = iVar3 * (param_2->SamplingParams).TemporalSampleIndex +
            (param_2->SamplingParams).SpatialSampleIndex;
  }
  else {
    iVar4 = (param_2->SamplingParams).SpatialSampleCount;
    iVar3 = (param_2->SamplingParams).SpatialSampleIndex;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return iVar3 != iVar4 + -1;
}

// operator() @ 15058f8a0

bool __thiscall
`UE::MovieGraph::Rendering::FMovieGraphPathTracerPass::GetParentNode'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3603386778620264464>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3603386778620264464>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

