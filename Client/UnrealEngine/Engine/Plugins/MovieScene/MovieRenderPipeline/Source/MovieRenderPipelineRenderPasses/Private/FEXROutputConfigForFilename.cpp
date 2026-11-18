// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// FEXROutputConfigForFilename @ 14ddc50f0

FEXROutputConfigForFilename * __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename::
FEXROutputConfigForFilename(FEXROutputConfigForFilename *this,FEXROutputConfigForFilename *param_1)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  
  (this->RenderIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderIDs).AllocatorInstance.Data = (param_1->RenderIDs).AllocatorInstance.Data;
  (param_1->RenderIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderIDs).ArrayNum = (param_1->RenderIDs).ArrayNum;
  (this->RenderIDs).ArrayMax = (param_1->RenderIDs).ArrayMax;
  (param_1->RenderIDs).ArrayNum = 0;
  (param_1->RenderIDs).ArrayMax = 0;
  *(undefined8 *)&(this->ResolveArgs).FilenameArguments = 0;
  *(undefined8 *)&(this->ResolveArgs).FilenameArguments.field_0x8 = 0;
  *(undefined8 *)&(this->ResolveArgs).FilenameArguments.field_0x20 = 0;
  *(undefined4 *)&(this->ResolveArgs).FilenameArguments.field_0x28 = 0;
  *(undefined4 *)&(this->ResolveArgs).FilenameArguments.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolveArgs).FilenameArguments.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolveArgs).FilenameArguments.field_0x34 = 0;
  *(undefined8 *)&(this->ResolveArgs).FilenameArguments.field_0x40 = 0;
  *(undefined4 *)&(this->ResolveArgs).FilenameArguments.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->ResolveArgs,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->ResolveArgs);
  pTVar1 = &(this->ResolveArgs).FileMetadata;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->ResolveArgs).FileMetadata.field_0x8 = 0;
  *(undefined8 *)&(this->ResolveArgs).FileMetadata.field_0x20 = 0;
  *(undefined4 *)&(this->ResolveArgs).FileMetadata.field_0x28 = 0;
  *(undefined4 *)&(this->ResolveArgs).FileMetadata.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolveArgs).FileMetadata.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolveArgs).FileMetadata.field_0x34 = 0;
  *(undefined8 *)&(this->ResolveArgs).FileMetadata.field_0x40 = 0;
  *(undefined4 *)&(this->ResolveArgs).FileMetadata.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar1,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&(param_1->ResolveArgs).FileMetadata);
  (this->FrameTemplatedFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTemplatedFilename).Data.AllocatorInstance.Data =
       (param_1->FrameTemplatedFilename).Data.AllocatorInstance.Data;
  (param_1->FrameTemplatedFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTemplatedFilename).Data.ArrayNum = (param_1->FrameTemplatedFilename).Data.ArrayNum;
  (this->FrameTemplatedFilename).Data.ArrayMax = (param_1->FrameTemplatedFilename).Data.ArrayMax;
  (param_1->FrameTemplatedFilename).Data.ArrayNum = 0;
  (param_1->FrameTemplatedFilename).Data.ArrayMax = 0;
  (this->MaximumResolution).field0_0x0 = (param_1->MaximumResolution).field0_0x0;
  return this;
}

// ~FEXROutputConfigForFilename @ 14ddcacc0

void __thiscall
UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename::
~FEXROutputConfigForFilename(FEXROutputConfigForFilename *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->FrameTemplatedFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ResolveArgs).FileMetadata.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ResolveArgs).FileMetadata.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ResolveArgs).FileMetadata);
  *(undefined4 *)&(this->ResolveArgs).FilenameArguments.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ResolveArgs).FilenameArguments.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResolveArgs);
  DestructItems<FMovieGraphRenderDataIdentifier,int>
            ((FMovieGraphRenderDataIdentifier *)(this->RenderIDs).AllocatorInstance.Data,
             (this->RenderIDs).ArrayNum);
  pFVar1 = (this->RenderIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

