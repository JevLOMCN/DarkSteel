// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// RemoveCurrent @ 14614f3d0

void __thiscall
TIndexedContainerIterator<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int>
::RemoveCurrent(TIndexedContainerIterator<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int>
                *this)

{
  void *_Dst;
  uint uVar1;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar7;
  
  uVar1 = this->Index;
  FVar2 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
           )this->Container;
  uVar5 = 0;
  if ((int)uVar1 <
      *(int *)((ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                *)((longlong)FVar2 + 200))->InlineData) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = *(ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
            *)((longlong)FVar2 + 0xc0);
  if (*(ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
        *)((longlong)FVar2 + 0xc0) ==
      (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
       )0x0) {
    FVar7 = FVar2;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)(int)uVar1 * 0x18);
  iVar6 = *(int *)((longlong)FVar2 + 200) + ~uVar1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  *(int *)((longlong)FVar2 + 200) = *(int *)((longlong)FVar2 + 200) + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>_>
            (0x18,4,(ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                     *)FVar2,*(int *)((longlong)FVar2 + 200),(int *)((longlong)FVar2 + 0xcc));
  this->Index = this->Index + -1;
  return;
}

