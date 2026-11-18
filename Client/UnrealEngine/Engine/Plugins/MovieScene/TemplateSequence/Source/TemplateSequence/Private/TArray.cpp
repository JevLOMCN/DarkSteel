// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// Remove @ 14ac7e6e0

int __thiscall
TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
::Remove(TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
         *this,FMovieSceneEntityID *param_1)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)this;
  if (FVar1 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)this;
    if (FVar1 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (FMovieSceneEntityID *)((longlong)FVar5 + (longlong)this->ArrayMax * 2)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar6 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)this;
  if (FVar1 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
    FVar5 = FVar1;
  }
  iVar10 = 0;
  bVar3 = *(ushort *)FVar5 != param_1->Value;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar3 != (*(ushort *)((longlong)FVar5 + lVar7 * 2) != param_1->Value)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar3 != false) {
      if (iVar10 != iVar8) {
        memmove((short *)((longlong)FVar5 + (longlong)iVar10 * 2),
                (short *)((longlong)FVar5 + (longlong)iVar8 * 2),(longlong)(iVar9 - iVar8) * 2);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar4 - iVar10;
    }
  } while( true );
}

