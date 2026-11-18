// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// StaticStruct @ 14dc69390

UScriptStruct * __cdecl FMovieGraphRenderLayerOutputData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphRenderLayerOutputData,
                         (UObject *)pUVar1,L"MovieGraphRenderLayerOutputData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.OuterSingleton;
}

// ~FMovieGraphRenderLayerOutputData @ 14dc742e0

void __thiscall
FMovieGraphRenderLayerOutputData::~FMovieGraphRenderLayerOutputData
          (FMovieGraphRenderLayerOutputData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->NodeTypeToFilePaths).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeTypeToFilePaths).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeTypeToFilePaths);
  DestructItems<FString,int>
            ((FString *)(this->FrameTemplatedFilePaths).AllocatorInstance.Data,
             (this->FrameTemplatedFilePaths).ArrayNum);
  pFVar2 = (this->FrameTemplatedFilePaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->FilePaths).AllocatorInstance.Data,(this->FilePaths).ArrayNum);
  pFVar2 = (this->FilePaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FMovieGraphRenderLayerOutputData @ 14dcae410

FMovieGraphRenderLayerOutputData * __thiscall
FMovieGraphRenderLayerOutputData::FMovieGraphRenderLayerOutputData
          (FMovieGraphRenderLayerOutputData *this,FMovieGraphRenderLayerOutputData *param_1)

{
  (this->FilePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePaths).AllocatorInstance.Data = (param_1->FilePaths).AllocatorInstance.Data;
  (param_1->FilePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePaths).ArrayNum = (param_1->FilePaths).ArrayNum;
  (this->FilePaths).ArrayMax = (param_1->FilePaths).ArrayMax;
  (param_1->FilePaths).ArrayNum = 0;
  (param_1->FilePaths).ArrayMax = 0;
  (this->FrameTemplatedFilePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTemplatedFilePaths).AllocatorInstance.Data =
       (param_1->FrameTemplatedFilePaths).AllocatorInstance.Data;
  (param_1->FrameTemplatedFilePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTemplatedFilePaths).ArrayNum = (param_1->FrameTemplatedFilePaths).ArrayNum;
  (this->FrameTemplatedFilePaths).ArrayMax = (param_1->FrameTemplatedFilePaths).ArrayMax;
  (param_1->FrameTemplatedFilePaths).ArrayNum = 0;
  (param_1->FrameTemplatedFilePaths).ArrayMax = 0;
  TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
              *)&this->NodeTypeToFilePaths,
             (TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
              *)&param_1->NodeTypeToFilePaths);
  this->RenderLayerIndex = param_1->RenderLayerIndex;
  return this;
}

