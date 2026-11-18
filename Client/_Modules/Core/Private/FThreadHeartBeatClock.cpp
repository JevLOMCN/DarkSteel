// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FThreadHeartBeatClock @ 1416d75d0

FThreadHeartBeatClock * __thiscall
FThreadHeartBeatClock::FThreadHeartBeatClock(FThreadHeartBeatClock *this,double param_1)

{
  longlong lVar1;
  double dVar2;
  LARGE_INTEGER local_res8 [4];
  
  dVar2 = param_1 / FGenericPlatformTime::SecondsPerCycle64;
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  this->MaxTimeStepCycles = (longlong)dVar2 + lVar1;
  QueryPerformanceCounter(local_res8);
  this->CurrentCycles = (ulong64)local_res8[0];
  this->LastRealTickCycles = (ulong64)local_res8[0];
  return this;
}

// Seconds @ 14170fdc0

double __thiscall FThreadHeartBeatClock::Seconds(FThreadHeartBeatClock *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar3 = local_res8[0].QuadPart - this->LastRealTickCycles;
  dVar6 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
  uVar5 = this->MaxTimeStepCycles;
  if (uVar3 < this->MaxTimeStepCycles) {
    uVar5 = uVar3;
  }
  lVar4 = 0;
  uVar5 = uVar5 + this->CurrentCycles;
  if ((__real_43e0000000000000 <= dVar6) &&
     (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
    lVar4 = -0x8000000000000000;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)dVar6 + lVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  uVar5 = uVar5 / (ulonglong)((longlong)dVar6 + lVar4);
  uVar3 = SUB168(auVar2 % auVar1,0);
  if ((longlong)uVar3 < 0) {
    dVar6 = (double)(uVar3 >> 1 | (ulonglong)(SUB164(auVar2 % auVar1,0) & 1));
    dVar6 = dVar6 + dVar6;
  }
  else {
    dVar6 = (double)(longlong)uVar3;
  }
  if (-1 < (longlong)uVar5) {
    return dVar6 * FGenericPlatformTime::SecondsPerCycle64 + (double)(longlong)uVar5;
  }
  return dVar6 * FGenericPlatformTime::SecondsPerCycle64 + (double)uVar5;
}

// Tick @ 1417151e0

void __thiscall FThreadHeartBeatClock::Tick(FThreadHeartBeatClock *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar2 = local_res8[0].QuadPart - this->LastRealTickCycles;
  this->LastRealTickCycles = (ulong64)local_res8[0];
  uVar1 = this->MaxTimeStepCycles;
  if (uVar2 < this->MaxTimeStepCycles) {
    uVar1 = uVar2;
  }
  this->CurrentCycles = this->CurrentCycles + uVar1;
  return;
}

