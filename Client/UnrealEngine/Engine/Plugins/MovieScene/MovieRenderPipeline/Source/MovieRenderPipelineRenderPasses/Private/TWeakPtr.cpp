// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// operator=<UE::MovieGraph::IMovieGraphOutputMerger> @ 14ddbbc20

TWeakPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> * __thiscall
TWeakPtr<UE::MovieGraph::IMovieGraphOutputMerger,1>::
operator=<UE::MovieGraph::IMovieGraphOutputMerger>
          (TWeakPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> *this,
          TSharedPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// ~TWeakPtr<FImageOverlappedAccumulator,1> @ 14ddca960

void __thiscall
TWeakPtr<FImageOverlappedAccumulator,1>::~TWeakPtr<FImageOverlappedAccumulator,1>
          (TWeakPtr<FImageOverlappedAccumulator,1> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ddca980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

