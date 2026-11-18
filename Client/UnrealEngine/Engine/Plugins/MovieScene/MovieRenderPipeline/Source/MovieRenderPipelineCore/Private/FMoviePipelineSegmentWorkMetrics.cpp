// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// operator= @ 14dd0e980

FMoviePipelineSegmentWorkMetrics * __thiscall
FMoviePipelineSegmentWorkMetrics::operator=
          (FMoviePipelineSegmentWorkMetrics *this,FMoviePipelineSegmentWorkMetrics *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->SegmentName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->SegmentName).Data.AllocatorInstance.Data =
         (param_1->SegmentName).Data.AllocatorInstance.Data;
    (param_1->SegmentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SegmentName).Data.ArrayNum = (param_1->SegmentName).Data.ArrayNum;
    (this->SegmentName).Data.ArrayMax = (param_1->SegmentName).Data.ArrayMax;
    (param_1->SegmentName).Data.ArrayNum = 0;
    (param_1->SegmentName).Data.ArrayMax = 0;
  }
  this->OutputFrameIndex = param_1->OutputFrameIndex;
  this->TotalOutputFrameCount = param_1->TotalOutputFrameCount;
  this->OutputSubSampleIndex = param_1->OutputSubSampleIndex;
  this->TotalSubSampleCount = param_1->TotalSubSampleCount;
  this->EngineWarmUpFrameIndex = param_1->EngineWarmUpFrameIndex;
  this->TotalEngineWarmUpFrameCount = param_1->TotalEngineWarmUpFrameCount;
  return this;
}

// StaticStruct @ 14dd5e2c0

UScriptStruct * __cdecl FMoviePipelineSegmentWorkMetrics::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics,
                         (UObject *)pUVar1,L"MoviePipelineSegmentWorkMetrics");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineSegmentWorkMetrics.OuterSingleton;
}

