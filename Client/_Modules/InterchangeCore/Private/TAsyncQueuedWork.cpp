// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 2

// Abandon @ 14e40ccd0

void __thiscall
TAsyncQueuedWork<unsigned___int64>::Abandon(TAsyncQueuedWork<unsigned___int64> *this)

{
  return;
}

// DoThreadedWork @ 14e42be10

void __thiscall
TAsyncQueuedWork<unsigned___int64>::DoThreadedWork(TAsyncQueuedWork<unsigned___int64> *this)

{
  SetPromise<unsigned___int64,TUniqueFunction<unsigned___int64___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<unsigned___int64> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e42be3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

