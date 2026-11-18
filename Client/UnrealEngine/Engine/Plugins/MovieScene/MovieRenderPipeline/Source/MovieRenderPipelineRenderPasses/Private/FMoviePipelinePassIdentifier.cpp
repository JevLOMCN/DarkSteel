// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~FMoviePipelinePassIdentifier @ 14ddcb4b0

void __thiscall
FMoviePipelinePassIdentifier::~FMoviePipelinePassIdentifier(FMoviePipelinePassIdentifier *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14ddcc640

FMoviePipelinePassIdentifier * __thiscall
FMoviePipelinePassIdentifier::operator=
          (FMoviePipelinePassIdentifier *this,FMoviePipelinePassIdentifier *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (this != param_1) {
    pFVar2 = (this->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
    (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
    (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
    (param_1->Name).Data.ArrayNum = 0;
    (param_1->Name).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->CameraName;
  pFVar1 = &this->CameraName;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CameraName).Data.ArrayNum = (param_1->CameraName).Data.ArrayNum;
    (this->CameraName).Data.ArrayMax = (param_1->CameraName).Data.ArrayMax;
    (param_1->CameraName).Data.ArrayNum = 0;
    (param_1->CameraName).Data.ArrayMax = 0;
  }
  return this;
}

