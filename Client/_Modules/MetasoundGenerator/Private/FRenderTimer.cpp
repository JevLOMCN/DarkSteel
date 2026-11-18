// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// FRenderTimer @ 14b2a7290

FRenderTimer * __thiscall
Metasound::MetasoundGeneratorPrivate::FRenderTimer::FRenderTimer
          (FRenderTimer *this,FOperatorSettings *param_1,double param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = __real_3ff0000000000000;
  this->CPUCoreUtilization = -1.0;
  this->SmoothingAlpha = 1.0;
  this->AccumulatedCycles = 0;
  this->SecondsOfAudioProducedPerBlock = 0.0;
  iVar1 = param_1->NumFramesPerBlock;
  if (param_1->NumFramesPerBlock < 1) {
    iVar1 = 1;
  }
  dVar4 = (double)param_1->SampleRate * param_2;
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  dVar3 = dVar4 / (double)iVar1;
  if (dVar4 / (double)iVar1 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar3 = exp(__real_c00921fb60000000 / dVar3);
  dVar4 = dVar2 - dVar3;
  if (__real_3feffffffaa19c47 <= dVar2 - dVar3) {
    dVar4 = __real_3feffffffaa19c47;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  this->SmoothingAlpha = dVar4;
  dVar4 = (double)param_1->SampleRate;
  if ((double)param_1->SampleRate <= dVar2) {
    dVar4 = dVar2;
  }
  this->SecondsOfAudioProducedPerBlock = (double)param_1->NumFramesPerBlock / dVar4;
  return this;
}

