// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// GetActualDt @ 143fae6d0

float __thiscall Chaos::FFixedTimeStep::GetActualDt(FFixedTimeStep *this)

{
  return this->ActualDt;
}

// GetCalculatedDt @ 143fafc40

float __thiscall Chaos::FFixedTimeStep::GetCalculatedDt(FFixedTimeStep *this)

{
  return this->TargetDt;
}

// GetTarget @ 143fb33b0

float __thiscall Chaos::FFixedTimeStep::GetTarget(FFixedTimeStep *this)

{
  return this->TargetDt;
}

// Reset @ 143fc5e60

void __thiscall Chaos::FFixedTimeStep::Reset(FFixedTimeStep *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  this->CurrentTime = 0.0;
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->TargetDt = 0.016666668;
  this->ActualDt = 0.016666668;
  this->LastTime = dVar1 + __real_4170000000000000;
  return;
}

// SetTarget @ 143fc9790

void __thiscall Chaos::FFixedTimeStep::SetTarget(FFixedTimeStep *this,float param_1)

{
  this->TargetDt = param_1;
  return;
}

// Update @ 143fccb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FFixedTimeStep::Update(FFixedTimeStep *this)

{
  double dVar1;
  float fVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  this->CurrentTime = dVar1;
  fVar2 = (float)(dVar1 - this->LastTime);
  this->ActualDt = fVar2;
  if (fVar2 <= this->TargetDt) {
    if (5 < (byte)LogChaosDebug._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDebug);
    }
    FWindowsPlatformProcess::Sleep(this->TargetDt - this->ActualDt);
  }
  else if (5 < (byte)LogChaosDebug._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDebug);
  }
  QueryPerformanceCounter(local_res8);
  this->LastTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

