// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// FEncoderParams @ 14dd097e0

FEncoderParams * __thiscall
UMovieGraphCommandLineEncoderNode::FEncoderParams::FEncoderParams
          (FEncoderParams *this,FEncoderParams *param_1)

{
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                      *)param_1);
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->FilesByExtensionType,
             (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->FilesByExtensionType);
  (this->Shot).WeakPtr = (param_1->Shot).WeakPtr;
  (this->RenderDataIdentifier).RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum;
  (this->RenderDataIdentifier).LayerName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum;
  (this->RenderDataIdentifier).RendererName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum;
  (this->RenderDataIdentifier).CameraName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  return this;
}

// ~FEncoderParams @ 14dd0d1c0

void __thiscall
UMovieGraphCommandLineEncoderNode::FEncoderParams::~FEncoderParams(FEncoderParams *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FilesByExtensionType).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FilesByExtensionType).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilesByExtensionType);
  *(undefined4 *)&(this->NamedArguments).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NamedArguments).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

