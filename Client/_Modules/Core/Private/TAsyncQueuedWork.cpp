// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// Abandon @ 1419242d0

void __thiscall TAsyncQueuedWork<void>::Abandon(TAsyncQueuedWork<void> *this)

{
  return;
}

// DoThreadedWork @ 141934a50

void __thiscall TAsyncQueuedWork<void>::DoThreadedWork(TAsyncQueuedWork<void> *this)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>(&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<void> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141934a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// Abandon @ 141b37d80

void __thiscall TAsyncQueuedWork<int>::Abandon(TAsyncQueuedWork<int> *this)

{
  return;
}

// DoThreadedWork @ 141b3e7f0

void __thiscall TAsyncQueuedWork<int>::DoThreadedWork(TAsyncQueuedWork<int> *this)

{
  SetPromise<int,TUniqueFunction<int___cdecl(void)>_&>(&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141b3e81b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// Abandon @ 141cf8c00

void __thiscall
TAsyncQueuedWork<TTwoSmoothies<1>_>::Abandon(TAsyncQueuedWork<TTwoSmoothies<1>_> *this)

{
  return;
}

// Abandon @ 141cf8c10

void __thiscall TAsyncQueuedWork<bool>::Abandon(TAsyncQueuedWork<bool> *this)

{
  return;
}

// DoThreadedWork @ 141cfbfa0

void __thiscall
TAsyncQueuedWork<TTwoSmoothies<1>_>::DoThreadedWork(TAsyncQueuedWork<TTwoSmoothies<1>_> *this)

{
  SetPromise<TTwoSmoothies<1>,TUniqueFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TTwoSmoothies<1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 141cfbfe0

void __thiscall TAsyncQueuedWork<bool>::DoThreadedWork(TAsyncQueuedWork<bool> *this)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>(&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<bool> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfc00b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

