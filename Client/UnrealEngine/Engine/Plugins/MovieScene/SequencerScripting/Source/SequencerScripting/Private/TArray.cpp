// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 1

// TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_><UMovieSceneFolder_*_const,int> @ 14c696190

TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_>::
TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_><UMovieSceneFolder_*_const,int>
          (TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UMovieSceneFolder_*_const,int> *param_1)

{
  int iVar1;
  UMovieSceneFolder **_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

