// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// AddReferencedObjects @ 14618f0c0

void __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::FDirectorInstanceCache::AddReferencedObjects
          (FDirectorInstanceCache *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DirectorInstances).Pairs.ArrayNum;
  pFVar2 = (this->DirectorInstances).Pairs.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->DirectorInstances).Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2 + 8,0,0);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetReferencerName @ 1461b33f0

FString * __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::FDirectorInstanceCache::GetReferencerName
          (FDirectorInstanceCache *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSequenceDirectorPlaybackCapability");
  return __return_storage_ptr__;
}

