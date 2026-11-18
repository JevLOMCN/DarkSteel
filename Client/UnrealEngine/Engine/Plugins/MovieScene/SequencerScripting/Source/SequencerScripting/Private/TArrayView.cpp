// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 3

// operator[] @ 14c676000

FMovieSceneActorReferenceKey * __thiscall
TArrayView<FMovieSceneActorReferenceKey,int>::operator[]
          (TArrayView<FMovieSceneActorReferenceKey,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneActorReferenceKey *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneActorReferenceKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14c6848d0

FMovieSceneEvent * __thiscall
TArrayView<FMovieSceneEvent,int>::operator[](TArrayView<FMovieSceneEvent,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneEvent *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneEvent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_> @ 14c696120

TArrayView<UMovieSceneTrack_*_const,int> * __thiscall
TArrayView<UMovieSceneTrack_*_const,int>::
TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UMovieSceneTrack_*_const,int> *this,
          TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar4;
  
  this->DataPtr = (UMovieSceneTrack **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMovieSceneTrack_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

