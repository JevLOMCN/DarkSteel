// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 2

// Abandon @ 144554ac0

void __thiscall TAsyncQueuedWork<FIcmpEchoResult>::Abandon(TAsyncQueuedWork<FIcmpEchoResult> *this)

{
  return;
}

// DoThreadedWork @ 144556140

void __thiscall
TAsyncQueuedWork<FIcmpEchoResult>::DoThreadedWork(TAsyncQueuedWork<FIcmpEchoResult> *this)

{
  SetPromise<FIcmpEchoResult,TUniqueFunction<FIcmpEchoResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<FIcmpEchoResult> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014455616b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

