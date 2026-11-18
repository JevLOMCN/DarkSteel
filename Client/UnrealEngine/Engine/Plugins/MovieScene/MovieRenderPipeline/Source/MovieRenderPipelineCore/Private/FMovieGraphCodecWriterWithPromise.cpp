// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FMovieGraphCodecWriterWithPromise @ 14dd09a10

FMovieGraphCodecWriterWithPromise * __thiscall
UMovieGraphVideoOutputNode::FMovieGraphCodecWriterWithPromise::FMovieGraphCodecWriterWithPromise
          (FMovieGraphCodecWriterWithPromise *this,
          TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
          *param_1,TPromise<bool> *param_2,UClass *param_3)

{
  (this->CodecWriter).Ptr = param_1->Ptr;
  param_1->Ptr = (IVideoCodecWriter *)0x0;
  (this->Promise).State.Object = (param_2->State).Object;
  (this->Promise).State.SharedReferenceCount.ReferenceController =
       (param_2->State).SharedReferenceCount.ReferenceController;
  (param_2->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->State).Object = (TFutureState<bool> *)0x0;
  (this->Promise).bFutureRetrieved = param_2->bFutureRetrieved;
  this->NodeType = param_3;
  return this;
}

