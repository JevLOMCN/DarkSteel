// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 20

// Abandon @ 1431c2860

void __thiscall
TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
::Abandon(TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          *this)

{
  return;
}

// Abandon @ 1431c2870

void __thiscall
TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_>::Abandon
          (TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_> *this)

{
  return;
}

// DoThreadedWork @ 1431d9ab0

void __thiscall
TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
::DoThreadedWork(TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *this)

{
  SetPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
               *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d9adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 1431d9af0

void __thiscall
TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_>::DoThreadedWork
          (TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_> *this)

{
  SetPromise<TSharedPtr<FBuildPatchAppManifest,1>,TUniqueFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d9b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// Abandon @ 143232160

void __thiscall
TAsyncQueuedWork<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
::Abandon(TAsyncQueuedWork<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
          *this)

{
  return;
}

// Abandon @ 143232170

void __thiscall
TAsyncQueuedWork<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>::Abandon
          (TAsyncQueuedWork<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *this)

{
  return;
}

// Abandon @ 143232180

void __thiscall
TAsyncQueuedWork<TTuple<FString,bool,FGuid>_>::Abandon
          (TAsyncQueuedWork<TTuple<FString,bool,FGuid>_> *this)

{
  return;
}

// Abandon @ 143232190

void __thiscall
TAsyncQueuedWork<BuildPatchServices::FDataFileResult>::Abandon
          (TAsyncQueuedWork<BuildPatchServices::FDataFileResult> *this)

{
  return;
}

// Abandon @ 1432321a0

void __thiscall
TAsyncQueuedWork<BuildPatchServices::FFileManifestList>::Abandon
          (TAsyncQueuedWork<BuildPatchServices::FFileManifestList> *this)

{
  return;
}

// Abandon @ 1432321b0

void __thiscall
TAsyncQueuedWork<BuildPatchServices::FManifestResult>::Abandon
          (TAsyncQueuedWork<BuildPatchServices::FManifestResult> *this)

{
  return;
}

// Abandon @ 1432321c0

void __thiscall
TAsyncQueuedWork<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::Abandon
          (TAsyncQueuedWork<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
           *this)

{
  return;
}

// Abandon @ 1432321d0

void __thiscall
TAsyncQueuedWork<TArray<FString,TSizedDefaultAllocator<32>_>_>::Abandon
          (TAsyncQueuedWork<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  return;
}

// DoThreadedWork @ 14324a8c0

void __thiscall
TAsyncQueuedWork<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
::DoThreadedWork(TAsyncQueuedWork<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
                 *this)

{
  SetPromise<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>,TUniqueFunction<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
               *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a8eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324a900

void __thiscall
TAsyncQueuedWork<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>::DoThreadedWork
          (TAsyncQueuedWork<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *this)

{
  SetPromise<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>,TUniqueFunction<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a92b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324a940

void __thiscall
TAsyncQueuedWork<TTuple<FString,bool,FGuid>_>::DoThreadedWork
          (TAsyncQueuedWork<TTuple<FString,bool,FGuid>_> *this)

{
  SetPromise<TTuple<FString,bool,FGuid>,TUniqueFunction<TTuple<FString,bool,FGuid>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TTuple<FString,bool,FGuid>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a96b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324a980

void __thiscall
TAsyncQueuedWork<BuildPatchServices::FDataFileResult>::DoThreadedWork
          (TAsyncQueuedWork<BuildPatchServices::FDataFileResult> *this)

{
  SetPromise<BuildPatchServices::FDataFileResult,TUniqueFunction<BuildPatchServices::FDataFileResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<BuildPatchServices::FDataFileResult> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324a9c0

void __thiscall
TAsyncQueuedWork<BuildPatchServices::FFileManifestList>::DoThreadedWork
          (TAsyncQueuedWork<BuildPatchServices::FFileManifestList> *this)

{
  SetPromise<BuildPatchServices::FFileManifestList,TUniqueFunction<BuildPatchServices::FFileManifestList___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<BuildPatchServices::FFileManifestList> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a9eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324aa00

void __thiscall
TAsyncQueuedWork<BuildPatchServices::FManifestResult>::DoThreadedWork
          (TAsyncQueuedWork<BuildPatchServices::FManifestResult> *this)

{
  SetPromise<BuildPatchServices::FManifestResult,TUniqueFunction<BuildPatchServices::FManifestResult___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<BuildPatchServices::FManifestResult> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324aa2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324aa40

void __thiscall
TAsyncQueuedWork<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::
DoThreadedWork(TAsyncQueuedWork<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
               *this)

{
  SetPromise<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>,TUniqueFunction<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324aa6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

// DoThreadedWork @ 14324aa80

void __thiscall
TAsyncQueuedWork<TArray<FString,TSizedDefaultAllocator<32>_>_>::DoThreadedWork
          (TAsyncQueuedWork<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  SetPromise<TArray<FString,TSizedDefaultAllocator<32>_>,TUniqueFunction<TArray<FString,TSizedDefaultAllocator<32>_>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  if (this != (TAsyncQueuedWork<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324aaab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x28))(this,1);
    return;
  }
  return;
}

