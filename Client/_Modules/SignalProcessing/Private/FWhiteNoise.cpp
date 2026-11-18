// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// FWhiteNoise @ 1444f3040

FWhiteNoise * __thiscall Audio::FWhiteNoise::FWhiteNoise(FWhiteNoise *this,int param_1)

{
  (this->RandomStream).InitialSeed = param_1;
  (this->RandomStream).Seed = param_1;
  return this;
}

// FWhiteNoise @ 1444f3050

FWhiteNoise * __thiscall Audio::FWhiteNoise::FWhiteNoise(FWhiteNoise *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  (this->RandomStream).InitialSeed = local_res8[0].s.LowPart;
  (this->RandomStream).Seed = local_res8[0].s.LowPart;
  return this;
}

