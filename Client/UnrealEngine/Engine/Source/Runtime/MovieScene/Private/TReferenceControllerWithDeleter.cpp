// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// DestroyObject @ 14619e570

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTrackInstancePropertyBindings,SharedPointerInternals::DefaultDeleter<FTrackInstancePropertyBindings>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTrackInstancePropertyBindings,SharedPointerInternals::DefaultDeleter<FTrackInstancePropertyBindings>,1>
                *this)

{
  FTrackInstancePropertyBindings *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this_00 = this->Object;
  if (this_00 != (FTrackInstancePropertyBindings *)0x0) {
    pFVar1 = (this_00->PropertyPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(this_00->RuntimeObjectToFunctionMap).field_0x48 = 0;
    pvVar2 = *(void **)&(this_00->RuntimeObjectToFunctionMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x70);
    return;
  }
  return;
}

// DestroyObject @ 1461e9300

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMovieSceneModule,`FMovieSceneModule::StartupModule'::__l2::FNoopDefaultDeleter,1>
::DestroyObject(void *this)

{
  return;
}

