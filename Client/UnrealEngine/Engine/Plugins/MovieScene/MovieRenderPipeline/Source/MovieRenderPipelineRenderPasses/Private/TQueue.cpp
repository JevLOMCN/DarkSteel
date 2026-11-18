// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1> @ 14ddc9ba0

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
TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1>::
~TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1>
          (TQueue<UE::MovieGraph::Rendering::FMovieGraphPostRendererSubmissionParams,1> *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).CameraInfo.CameraName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pTVar1->Item).CameraInfo.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
             AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    UE::MovieGraph::FMovieGraphSampleState::~FMovieGraphSampleState(&(pTVar1->Item).SampleState);
    ::operator_delete(pTVar1,0xb70);
    pTVar1 = this->Tail;
  }
  return;
}

