// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// Run @ 1431f1860

uint __thiscall
TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
::Run(TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
      *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 1431f18d0

uint __thiscall
TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run
          (TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TSharedPtr<FBuildPatchAppManifest,1>,TUniqueFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 1432627b0

uint __thiscall
TAsyncRunnable<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
::Run(TAsyncRunnable<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
      *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>,TUniqueFunction<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 143262820

uint __thiscall
TAsyncRunnable<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>::Run
          (TAsyncRunnable<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>,TUniqueFunction<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 143262890

uint __thiscall
TAsyncRunnable<TTuple<FString,bool,FGuid>_>::Run(TAsyncRunnable<TTuple<FString,bool,FGuid>_> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TTuple<FString,bool,FGuid>,TUniqueFunction<TTuple<FString,bool,FGuid>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TTuple<FString,bool,FGuid>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 143262900

uint __thiscall
TAsyncRunnable<BuildPatchServices::FDataFileResult>::Run
          (TAsyncRunnable<BuildPatchServices::FDataFileResult> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<BuildPatchServices::FDataFileResult,TUniqueFunction<BuildPatchServices::FDataFileResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<BuildPatchServices::FDataFileResult>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 143262970

uint __thiscall
TAsyncRunnable<BuildPatchServices::FFileManifestList>::Run
          (TAsyncRunnable<BuildPatchServices::FFileManifestList> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<BuildPatchServices::FFileManifestList,TUniqueFunction<BuildPatchServices::FFileManifestList___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<BuildPatchServices::FFileManifestList>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 1432629e0

uint __thiscall
TAsyncRunnable<BuildPatchServices::FManifestResult>::Run
          (TAsyncRunnable<BuildPatchServices::FManifestResult> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<BuildPatchServices::FManifestResult,TUniqueFunction<BuildPatchServices::FManifestResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<BuildPatchServices::FManifestResult>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 143262a50

uint __thiscall
TAsyncRunnable<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::Run
          (TAsyncRunnable<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
           *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>,TUniqueFunction<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 143262ac0

uint __thiscall
TAsyncRunnable<TArray<FString,TSizedDefaultAllocator<32>_>_>::Run
          (TAsyncRunnable<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TArray<FString,TSizedDefaultAllocator<32>_>,TUniqueFunction<TArray<FString,TSizedDefaultAllocator<32>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TArray<FString,TSizedDefaultAllocator<32>_>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

