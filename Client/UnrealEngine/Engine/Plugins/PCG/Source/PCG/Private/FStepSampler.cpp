// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FStepSampler @ 149c4abd0

FStepSampler * __thiscall
PCGSplineSamplerHelpers::FStepSampler::FStepSampler
          (FStepSampler *this,UPCGPolyLineData *param_1,FPCGSplineSamplerParams *param_2,int param_3
          )

{
  code *pcVar1;
  bool bVar2;
  FStepSampler *pFVar3;
  
  this->LineData = param_1;
  this->_padding_ = (longlong)&___7FStepSampler_PCGSplineSamplerHelpers__6B_;
  this->SampleIndex = 0;
  this->CurrentSegmentIndex = 0;
  this->DistanceToCurrentSegment = 0.0;
  this->Seed = param_3;
  this->bComputeCurvature = param_2->bComputeCurvature;
  this->bComputeTangents = param_2->bComputeTangents;
  this->bComputeAlpha = param_2->bComputeAlpha;
  this->bComputeDistance = param_2->bComputeDistance;
  if (param_1 != (UPCGPolyLineData *)0x0) {
    this->CurrentSegmentIndex = 0;
    return this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("LineData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                     ,399,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStepSampler *)(*pcVar1)();
    return pFVar3;
  }
  this->CurrentSegmentIndex = 0;
  return this;
}

