// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// GetActualDt @ 143fae6e0

float __thiscall
Chaos::FVariableMinimumWithCapTimestep::GetActualDt(FVariableMinimumWithCapTimestep *this)

{
  return this->ActualDt;
}

// GetCalculatedDt @ 143fafc50

float __thiscall
Chaos::FVariableMinimumWithCapTimestep::GetCalculatedDt(FVariableMinimumWithCapTimestep *this)

{
  return this->Dt;
}

// Reset @ 143fc5ec0

void __thiscall Chaos::FVariableMinimumWithCapTimestep::Reset(FVariableMinimumWithCapTimestep *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  this->CurrentTime = 0.0;
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->TargetDt = 0.016666668;
  this->Dt = 0.016666668;
  this->ActualDt = 0.016666668;
  this->LastTime = dVar1 + __real_4170000000000000;
  return;
}

// SetTarget @ 143fc97a0

void __thiscall
Chaos::FVariableMinimumWithCapTimestep::SetTarget
          (FVariableMinimumWithCapTimestep *this,float param_1)

{
  this->TargetDt = param_1;
  return;
}

// Update @ 143fccc40

void __thiscall
Chaos::FVariableMinimumWithCapTimestep::Update(FVariableMinimumWithCapTimestep *this)

{
  double dVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  QueryPerformanceCounter(&local_res8);
  dVar1 = __real_4170000000000000;
  dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  this->CurrentTime = dVar5;
  fVar6 = (float)(dVar5 - this->LastTime);
  this->ActualDt = fVar6;
  pTVar2 = CVarVariableTickCap.Ref;
  if (fVar6 < this->TargetDt) {
    FWindowsPlatformProcess::Sleep(this->TargetDt - fVar6);
    fVar6 = this->TargetDt;
  }
  else {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 4;
    }
    fVar6 = *(float *)((longlong)pTVar2->ShadowedValue + lVar4);
    if (this->ActualDt <= fVar6) {
      fVar6 = this->ActualDt;
    }
  }
  this->Dt = fVar6;
  QueryPerformanceCounter(&local_res10);
  this->LastTime = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar1;
  return;
}

