// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 4

// Abandon @ 148c409a0

void __thiscall
TAsyncQueuedWork<FImageComparisonResult>::Abandon(TAsyncQueuedWork<FImageComparisonResult> *this)

{
  return;
}

// Abandon @ 148c409b0

void __thiscall
TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Abandon
          (TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
           *this)

{
  return;
}

// DoThreadedWork @ 148c46b20

void __thiscall
TAsyncQueuedWork<FImageComparisonResult>::DoThreadedWork
          (TAsyncQueuedWork<FImageComparisonResult> *this)

{
  SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<FImageComparisonResult> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c46b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 148c46b60

void __thiscall
TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::
DoThreadedWork(TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
               *this)

{
  SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
               *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c46b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

