// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Update @ 14507f530

bool __thiscall
Nanite::FFeedbackManager::FBufferState::Update(FBufferState *this,uint param_1,uint param_2)

{
  bool bVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  bVar1 = false;
  if (param_2 < param_1) {
    QueryPerformanceCounter(&local_res8);
    bVar1 = this->HighWaterMark < param_1;
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->LatestOverflowPeak = param_1;
    this->LatestOverflowTime = dVar2 + __real_4170000000000000;
  }
  if (param_1 < this->HighWaterMark) {
    param_1 = this->HighWaterMark;
  }
  this->HighWaterMark = param_1;
  return bVar1;
}

