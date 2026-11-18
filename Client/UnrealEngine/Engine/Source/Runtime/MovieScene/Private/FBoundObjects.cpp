// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FBoundObjects @ 14617e7b0

FBoundObjects * __thiscall
FMovieSceneObjectCache::FBoundObjects::FBoundObjects(FBoundObjects *this,FBoundObjects *param_1)

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar1;
  
  this->bUpToDate = param_1->bUpToDate;
  (this->Objects).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  if ((param_1->Objects).AllocatorInstance.SecondaryData ==
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    *(undefined8 *)(this->Objects).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->Objects).AllocatorInstance.InlineData;
  }
  FVar1 = (this->Objects).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Objects).AllocatorInstance.SecondaryData =
       (param_1->Objects).AllocatorInstance.SecondaryData;
  (param_1->Objects).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  (this->Objects).ArrayNum = (param_1->Objects).ArrayNum;
  (this->Objects).ArrayMax = (param_1->Objects).ArrayMax;
  (param_1->Objects).ArrayNum = 0;
  (param_1->Objects).ArrayMax = 1;
  return this;
}

