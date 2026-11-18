// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetActualDt @ 143fae6f0

float __thiscall Chaos::FVariableWithCapTimestep::GetActualDt(FVariableWithCapTimestep *this)

{
  return this->ActualDt;
}

// GetCalculatedDt @ 143fafc70

float __thiscall Chaos::FVariableWithCapTimestep::GetCalculatedDt(FVariableWithCapTimestep *this)

{
  return this->Dt;
}

// Reset @ 143fc5f70

void __thiscall Chaos::FVariableWithCapTimestep::Reset(FVariableWithCapTimestep *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  this->CurrentTime = 0.0;
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->Dt = 0.016666668;
  this->ActualDt = 0.016666668;
  this->LastTime = dVar1 + __real_4170000000000000;
  return;
}

// Update @ 143fccda0

void __thiscall Chaos::FVariableWithCapTimestep::Update(FVariableWithCapTimestep *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  this->CurrentTime = dVar5;
  this->ActualDt = (float)(dVar5 - this->LastTime);
  pTVar2 = CVarVariableTickCap.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 4;
      goto LAB_143fcce07;
    }
  }
  lVar4 = 0;
LAB_143fcce07:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar4);
  if (this->ActualDt <= fVar1) {
    fVar1 = this->ActualDt;
  }
  this->Dt = fVar1;
  QueryPerformanceCounter(&local_res8);
  this->LastTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  return;
}

