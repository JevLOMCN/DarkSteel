// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// ShouldExitEarly @ 142baef60

bool __thiscall
UE::AssetRegistry::Impl::FInterruptionContext::ShouldExitEarly(FInterruptionContext *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  LARGE_INTEGER local_res8;
  
  if (*(void **)&this->EarlyExitCallback == (void *)0x0) {
LAB_142baefa3:
    if (this->TickStartTime <= 0.0) goto LAB_142baefe0;
    QueryPerformanceCounter(&local_res8);
    dVar6 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - this->TickStartTime;
    if (dVar6 < this->MaxRunningTime || dVar6 == this->MaxRunningTime) goto LAB_142baefe0;
  }
  else {
    Core::Private::Function::CheckCallable(*(void **)&this->EarlyExitCallback);
    plVar1 = *(longlong **)&(this->EarlyExitCallback).field_0x28;
    pcVar2 = *(code **)&this->EarlyExitCallback;
    plVar5 = (longlong *)&(this->EarlyExitCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    if (cVar3 == '\0') goto LAB_142baefa3;
  }
  this->OutInterrupted = true;
LAB_142baefe0:
  return this->OutInterrupted;
}

