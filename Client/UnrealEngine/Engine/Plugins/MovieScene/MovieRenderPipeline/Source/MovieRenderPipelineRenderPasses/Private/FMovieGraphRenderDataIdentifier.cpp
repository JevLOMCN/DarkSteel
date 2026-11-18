// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// FMovieGraphRenderDataIdentifier @ 14ddc5c70

FMovieGraphRenderDataIdentifier * __thiscall
FMovieGraphRenderDataIdentifier::FMovieGraphRenderDataIdentifier
          (FMovieGraphRenderDataIdentifier *this,FMovieGraphRenderDataIdentifier *param_1)

{
  this->RootBranchName = param_1->RootBranchName;
  ::FString::FString(&this->LayerName,&param_1->LayerName);
  ::FString::FString(&this->RendererName,&param_1->RendererName);
  ::FString::FString(&this->SubResourceName,&param_1->SubResourceName);
  ::FString::FString(&this->CameraName,&param_1->CameraName);
  return this;
}

// operator= @ 14ddcc2a0

FMovieGraphRenderDataIdentifier * __thiscall
FMovieGraphRenderDataIdentifier::operator=
          (FMovieGraphRenderDataIdentifier *this,FMovieGraphRenderDataIdentifier *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->LayerName;
  pFVar2 = &this->LayerName;
  this->RootBranchName = param_1->RootBranchName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LayerName).Data.ArrayNum = (param_1->LayerName).Data.ArrayNum;
    (this->LayerName).Data.ArrayMax = (param_1->LayerName).Data.ArrayMax;
    (param_1->LayerName).Data.ArrayNum = 0;
    (param_1->LayerName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->RendererName;
  pFVar2 = &this->RendererName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RendererName).Data.ArrayNum = (param_1->RendererName).Data.ArrayNum;
    (this->RendererName).Data.ArrayMax = (param_1->RendererName).Data.ArrayMax;
    (param_1->RendererName).Data.ArrayNum = 0;
    (param_1->RendererName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->SubResourceName;
  pFVar2 = &this->SubResourceName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SubResourceName).Data.ArrayNum = (param_1->SubResourceName).Data.ArrayNum;
    (this->SubResourceName).Data.ArrayMax = (param_1->SubResourceName).Data.ArrayMax;
    (param_1->SubResourceName).Data.ArrayNum = 0;
    (param_1->SubResourceName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CameraName;
  pFVar2 = &this->CameraName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CameraName).Data.ArrayNum = (param_1->CameraName).Data.ArrayNum;
    (this->CameraName).Data.ArrayMax = (param_1->CameraName).Data.ArrayMax;
    (param_1->CameraName).Data.ArrayNum = 0;
    (param_1->CameraName).Data.ArrayMax = 0;
  }
  return this;
}

