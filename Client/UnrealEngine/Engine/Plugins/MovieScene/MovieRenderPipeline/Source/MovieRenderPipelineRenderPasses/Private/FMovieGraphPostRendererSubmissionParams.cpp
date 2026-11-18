// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 3

// FMovieGraphPostRendererSubmissionParams @ 14ddc5be0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieGraphPostRendererSubmissionParams * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams::
FMovieGraphPostRendererSubmissionParams(FMovieGraphPostRendererSubmissionParams *this)

{
  FMovieGraphSampleState::FMovieGraphSampleState(&this->SampleState);
  (this->RenderTargetInitParams).Size.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->RenderTargetInitParams).TargetGamma = 0.0;
  (this->RenderTargetInitParams).bForceLinearGamma = false;
  (this->RenderTargetInitParams).PixelFormat = PF_Unknown;
  (this->RenderTargetInitParams).bIncludeInPreviewWindow = true;
  FMinimalViewInfo::FMinimalViewInfo(&(this->CameraInfo).ViewInfo);
  (this->CameraInfo).ViewActor = (AActor *)0x0;
  (this->CameraInfo).CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraInfo).CameraName.Data.ArrayNum = 0;
  (this->CameraInfo).CameraName.Data.ArrayMax = 0;
  (this->CameraInfo).bAllowCameraAspectRatio = true;
  (this->CameraInfo).DoFSensorScale = 1.0;
  (this->CameraInfo).bUseCameraManagerPostProcess = true;
  return this;
}

// ~FMovieGraphPostRendererSubmissionParams @ 14ddcb260

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams::
~FMovieGraphPostRendererSubmissionParams(FMovieGraphPostRendererSubmissionParams *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraInfo).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraInfo).ViewInfo.PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieGraphSampleState::~FMovieGraphSampleState(&this->SampleState);
  return;
}

// operator= @ 14ddcc250

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieGraphPostRendererSubmissionParams * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams::operator=
          (FMovieGraphPostRendererSubmissionParams *this,
          FMovieGraphPostRendererSubmissionParams *param_1)

{
  float fVar1;
  bool bVar2;
  EPixelFormat EVar3;
  bool bVar4;
  undefined1 uVar5;
  
  FMovieGraphSampleState::operator=(&this->SampleState,&param_1->SampleState);
  fVar1 = (param_1->RenderTargetInitParams).TargetGamma;
  bVar2 = (param_1->RenderTargetInitParams).bForceLinearGamma;
  EVar3 = (param_1->RenderTargetInitParams).PixelFormat;
  bVar4 = (param_1->RenderTargetInitParams).bIncludeInPreviewWindow;
  uVar5 = (param_1->RenderTargetInitParams).field_0xf;
  (this->RenderTargetInitParams).Size.field0_0x0 = (param_1->RenderTargetInitParams).Size.field0_0x0
  ;
  (this->RenderTargetInitParams).TargetGamma = fVar1;
  (this->RenderTargetInitParams).bForceLinearGamma = bVar2;
  (this->RenderTargetInitParams).PixelFormat = EVar3;
  (this->RenderTargetInitParams).bIncludeInPreviewWindow = bVar4;
  (this->RenderTargetInitParams).field_0xf = uVar5;
  DefaultRenderer::FCameraInfo::operator=(&this->CameraInfo,&param_1->CameraInfo);
  return this;
}

