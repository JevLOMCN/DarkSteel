// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 2

// Abandon @ 145edc680

void __thiscall
TAsyncQueuedWork<UProceduralFoliageTile_*>::Abandon
          (TAsyncQueuedWork<UProceduralFoliageTile_*> *this)

{
  return;
}

// DoThreadedWork @ 145ee0040

void __thiscall
TAsyncQueuedWork<UProceduralFoliageTile_*>::DoThreadedWork
          (TAsyncQueuedWork<UProceduralFoliageTile_*> *this)

{
  SetPromise<UProceduralFoliageTile_*,TUniqueFunction<UProceduralFoliageTile_*___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<UProceduralFoliageTile_*> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee006b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

