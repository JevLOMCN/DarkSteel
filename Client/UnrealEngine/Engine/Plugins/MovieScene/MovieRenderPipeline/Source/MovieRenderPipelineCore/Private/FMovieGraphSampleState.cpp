// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// ~FMovieGraphSampleState @ 14dd0d2d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::FMovieGraphSampleState::~FMovieGraphSampleState(FMovieGraphSampleState *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)(this->OutputTypeRestrictions).AllocatorInstance.Data,
             (this->OutputTypeRestrictions).ArrayNum);
  pFVar3 = (this->OutputTypeRestrictions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LayerNameOverride).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->AdditionalFileMetadata).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AdditionalFileMetadata).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalFileMetadata);
  pFVar3 = (this->FilenameFormatOverride).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Debug_OverrideFilename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TraversalContext).RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TraversalContext).RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data
  ;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TraversalContext).RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TraversalContext).RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7IImagePixelDataPayload__6B_;
  return;
}

// Copy @ 14dd18f40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> * __thiscall
UE::MovieGraph::FMovieGraphSampleState::Copy
          (FMovieGraphSampleState *this,
          TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *__return_storage_ptr__)

{
  TIntrusiveReferenceController<UE::MovieGraph::FMovieGraphSampleState,1> *pTVar1;
  
  pTVar1 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,UE::MovieGraph::FMovieGraphSampleState,UE::MovieGraph::FMovieGraphSampleState_const_&>
                     (this);
  TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>::
  TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>
            (__return_storage_ptr__,(FMovieGraphSampleState *)&pTVar1->ObjectStorage,
             (TReferenceControllerBase<1> *)pTVar1);
  return __return_storage_ptr__;
}

