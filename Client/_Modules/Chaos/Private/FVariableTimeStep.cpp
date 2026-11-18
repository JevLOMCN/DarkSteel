// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// GetCalculatedDt @ 143fafc60

float __thiscall Chaos::FVariableTimeStep::GetCalculatedDt(FVariableTimeStep *this)

{
  return this->Dt;
}

// Reset @ 143fc5f20

void __thiscall Chaos::FVariableTimeStep::Reset(FVariableTimeStep *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->Dt = 0.016666668;
  this->LastTime = dVar1 + __real_4170000000000000;
  return;
}

// Update @ 143fccd20

void __thiscall Chaos::FVariableTimeStep::Update(FVariableTimeStep *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar2 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  QueryPerformanceCounter(local_res8);
  dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = this->LastTime;
  this->LastTime = dVar2;
  this->Dt = (float)(dVar3 - dVar1);
  return;
}

