// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FCounter @ 141a9cdd0

void __thiscall
WindowsPlatformPerfCountersImpl::FPerfCountersThread::FCounter::~FCounter(FCounter *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Setter != 0) {
    plVar1 = *(longlong **)&(this->Setter).field_0x28;
    plVar2 = (longlong *)&(this->Setter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141a9cde9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

