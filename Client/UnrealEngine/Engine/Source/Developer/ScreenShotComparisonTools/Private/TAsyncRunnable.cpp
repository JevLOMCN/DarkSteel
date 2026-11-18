// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 2

// Run @ 148c4a010

uint __thiscall
TAsyncRunnable<FImageComparisonResult>::Run(TAsyncRunnable<FImageComparisonResult> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<FImageComparisonResult>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 148c4a080

uint __thiscall
TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run
          (TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
           *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

