// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// TArrayView<AActor_*_const,int><TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_> @ 14dc9ead0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<AActor_*_const,int> * __thiscall
TArrayView<AActor_*_const,int>::
TArrayView<AActor_*_const,int><TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<AActor_*_const,int> *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<AActor_*_const,int> *pTVar4;
  
  this->DataPtr = (AActor **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<AActor_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14dd0ea90

TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> * __thiscall
TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int>::operator[]
          (TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> *pTVar4;
  
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
      pTVar4 = (TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

