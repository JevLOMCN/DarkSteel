// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// ResolveChildSequenceID @ 1460e9cb0

FMovieSceneSequenceID __thiscall
UE::MovieScene::FSubSequencePath::ResolveChildSequenceID
          (FSubSequencePath *this,FMovieSceneSequenceID param_1)

{
  int iVar1;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar2;
  TArray<UE::MovieScene::FSubSequencePath::FSequenceIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  uint uVar5;
  uint uVar6;
  uint in_R8D;
  uint uVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PathToRoot).ArrayNum;
  pTVar3 = &this->PathToRoot;
  if (iVar1 != 0) {
    FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
      this = (FSubSequencePath *)FVar2;
    }
    FVar2 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
            ((longlong)this + (longlong)iVar1 * 8);
    while( true ) {
      if (pTVar3->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this == FVar2) break;
      uVar4 = (uint)*(ulonglong *)this;
      if (in_R8D == 0) {
        this = (FSubSequencePath *)((longlong)this + 8);
        in_R8D = uVar4;
      }
      else {
        uVar5 = in_R8D - uVar4 ^ (uint)(*(ulonglong *)this >> 0xd) & 0x7ffff;
        uVar7 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
        uVar6 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 0xd;
        uVar4 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xc;
        uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar4 << 0x10;
        uVar5 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 5;
        uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 3;
        uVar6 = (uVar7 - uVar4) - uVar5 ^ uVar4 << 10;
        in_R8D = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xf;
        this = (FSubSequencePath *)((longlong)this + 8);
      }
    }
    *(uint *)CONCAT44(in_register_00000014,param_1.Value) = in_R8D;
    return (FMovieSceneSequenceID)param_1.Value;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1.Value) = in_R8D;
  return (FMovieSceneSequenceID)param_1.Value;
}

// FSubSequencePath @ 1461825f0

FSubSequencePath * __thiscall
UE::MovieScene::FSubSequencePath::FSubSequencePath
          (FSubSequencePath *this,FMovieSceneSequenceID param_1,IMovieScenePlayer *param_2)

{
  longlong lVar1;
  FMovieSceneSequenceHierarchy *pFVar2;
  
  pFVar2 = (FMovieSceneSequenceHierarchy *)0x0;
  (this->PathToRoot).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0;
  (this->PathToRoot).ArrayNum = 0;
  (this->PathToRoot).ArrayMax = 8;
  lVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if (*(FSharedPlaybackState **)(lVar1 + 8) != (FSharedPlaybackState *)0x0) {
    pFVar2 = FSharedPlaybackState::GetHierarchy(*(FSharedPlaybackState **)(lVar1 + 8));
  }
  Reset(this,param_1,pFVar2);
  return this;
}

// FSubSequencePath @ 146182660

FSubSequencePath * __thiscall
UE::MovieScene::FSubSequencePath::FSubSequencePath
          (FSubSequencePath *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceHierarchy *param_2)

{
  (this->PathToRoot).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0;
  (this->PathToRoot).ArrayNum = 0;
  (this->PathToRoot).ArrayMax = 8;
  Reset(this,param_1,param_2);
  return this;
}

// FSubSequencePath @ 146182690

FSubSequencePath * __thiscall
UE::MovieScene::FSubSequencePath::FSubSequencePath
          (FSubSequencePath *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  FMovieSceneSequenceHierarchy *pFVar1;
  
  (this->PathToRoot).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0;
  (this->PathToRoot).ArrayNum = 0;
  (this->PathToRoot).ArrayMax = 8;
  pFVar1 = FSharedPlaybackState::GetHierarchy(param_2->Object);
  Reset(this,param_1,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSubSequencePath @ 1461826f0

FSubSequencePath * __thiscall
UE::MovieScene::FSubSequencePath::FSubSequencePath(FSubSequencePath *this)

{
  (this->PathToRoot).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0;
  (this->PathToRoot).ArrayNum = 0;
  (this->PathToRoot).ArrayMax = 8;
  return this;
}

// Contains @ 146199250

bool __thiscall
UE::MovieScene::FSubSequencePath::Contains(FSubSequencePath *this,FMovieSceneSequenceID param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar3;
  undefined1 local_res10 [8];
  
  if (param_1.Value != 0) {
    FVar3 = (this->PathToRoot).AllocatorInstance.SecondaryData;
    piVar1 = &(this->PathToRoot).ArrayNum;
    iVar2 = *piVar1;
    if (FVar3 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
      this = (FSubSequencePath *)FVar3;
    }
    FVar3 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
            ((longlong)this + (longlong)iVar2 * 8);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this == FVar3) {
        return false;
      }
      if (*(uint *)((longlong)this + 4) == param_1.Value) break;
      this = (FSubSequencePath *)((longlong)this + 8);
    }
    if ((ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this ==
        (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
      return false;
    }
  }
  return true;
}

// FindCommonParent @ 1461a8060

FMovieSceneSequenceID __cdecl
UE::MovieScene::FSubSequencePath::FindCommonParent
          (FSubSequencePath *param_1,FSubSequencePath *param_2)

{
  int iVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar9;
  uint uVar10;
  int iVar11;
  longlong in_R8;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (param_2->PathToRoot).ArrayNum;
  if ((iVar1 == 0) || (iVar2 = *(int *)(in_R8 + 0x48), iVar2 == 0)) {
    (param_1->PathToRoot).AllocatorInstance.InlineData[0] = '\0';
    (param_1->PathToRoot).AllocatorInstance.InlineData[1] = '\0';
    (param_1->PathToRoot).AllocatorInstance.InlineData[2] = '\0';
    (param_1->PathToRoot).AllocatorInstance.InlineData[3] = '\0';
    return (FMovieSceneSequenceID)(uint)param_1;
  }
  uVar7 = iVar1 - 1;
  iVar11 = 0;
  if (-1 < (int)uVar7) {
    uVar10 = (iVar2 - iVar1) + uVar7;
    lVar13 = (longlong)(int)uVar7 * 8;
    lVar12 = (longlong)(iVar2 + -1) * 8;
    do {
      if ((int)uVar10 < 0) break;
      uVar6 = 0;
      if ((int)uVar7 < (param_2->PathToRoot).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (FMovieSceneSequenceID)uVar7;
      }
      FVar3 = (param_2->PathToRoot).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)param_2;
      if (FVar3 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar9 = FVar3;
      }
      iVar1 = *(int *)(lVar13 + 4 + (longlong)FVar9);
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(in_R8 + 0x48)) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (FMovieSceneSequenceID)uVar7;
      }
      lVar8 = in_R8;
      if (*(longlong *)(in_R8 + 0x40) != 0) {
        lVar8 = *(longlong *)(in_R8 + 0x40);
      }
      if (*(int *)(lVar12 + 4 + lVar8) != iVar1) break;
      uVar10 = uVar10 - 1;
      lVar13 = lVar13 + -8;
      lVar12 = lVar12 + -8;
      uVar7 = uVar7 - 1;
      iVar11 = iVar1;
    } while (-1 < (int)uVar7);
  }
  *(int *)(param_1->PathToRoot).AllocatorInstance.InlineData = iVar11;
  return (FMovieSceneSequenceID)(uint)param_1;
}

// MakeLocalSequenceID @ 1461be250

FMovieSceneSequenceID __thiscall
UE::MovieScene::FSubSequencePath::MakeLocalSequenceID
          (FSubSequencePath *this,FMovieSceneSequenceID param_1,FMovieSceneSequenceID param_2)

{
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  int in_R9D;
  longlong lVar13;
  
  piVar10 = (int *)CONCAT44(in_register_00000014,param_1.Value);
  *piVar10 = 0;
  iVar8 = (this->PathToRoot).ArrayNum;
  uVar5 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar5 < iVar8) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (FMovieSceneSequenceID)uVar5;
      }
      FVar1 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar1 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar7 = FVar1;
      }
      if (in_R9D == *(int *)(lVar13 + 4 + (longlong)FVar7)) break;
      iVar8 = (this->PathToRoot).ArrayNum;
      uVar5 = uVar5 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar5 < iVar8);
  }
  iVar8 = (this->PathToRoot).ArrayNum;
  if ((int)uVar5 < iVar8) {
    lVar13 = (longlong)(int)uVar5 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar5 < iVar8) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (FMovieSceneSequenceID)uVar5;
      }
      FVar1 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar1 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar7 = FVar1;
      }
      uVar2 = *(ulonglong *)(lVar13 + (longlong)FVar7);
      uVar11 = uVar2;
      if (*piVar10 != 0) {
        iVar8 = (int)uVar2;
        uVar12 = *piVar10 - iVar8 ^ (uint)(uVar2 >> 0xd) & 0x7ffff;
        uVar6 = (-0x61c88647 - uVar12) - iVar8 ^ uVar12 << 8;
        uVar9 = (iVar8 - uVar6) - uVar12 ^ uVar6 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar6 ^ uVar9 >> 0xc;
        uVar6 = (uVar6 - uVar9) - uVar12 ^ uVar12 << 0x10;
        uVar9 = (uVar9 - uVar6) - uVar12 ^ uVar6 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar6 ^ uVar9 >> 3;
        uVar6 = (uVar6 - uVar12) - uVar9 ^ uVar12 << 10;
        uVar11 = (ulonglong)((uVar9 - uVar6) - uVar12 ^ uVar6 >> 0xf);
      }
      *piVar10 = (int)uVar11;
      if ((uint)(uVar2 >> 0x20) == param_2.Value) {
        return (FMovieSceneSequenceID)param_1.Value;
      }
      iVar8 = (this->PathToRoot).ArrayNum;
      uVar5 = uVar5 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar5 < iVar8);
  }
  return (FMovieSceneSequenceID)param_1.Value;
}

// MakeLocalSequenceID @ 1461be440

FMovieSceneSequenceID __thiscall
UE::MovieScene::FSubSequencePath::MakeLocalSequenceID
          (FSubSequencePath *this,FMovieSceneSequenceID param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  int *piVar8;
  int in_R8D;
  uint uVar9;
  undefined1 local_res8 [8];
  
  piVar8 = (int *)CONCAT44(in_register_00000014,param_1.Value);
  *piVar8 = 0;
  FVar3 = (this->PathToRoot).AllocatorInstance.SecondaryData;
  piVar1 = &(this->PathToRoot).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    this = (FSubSequencePath *)FVar3;
  }
  FVar3 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
          ((longlong)this + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this == FVar3) ||
       (uVar6 = *(ulonglong *)this, (int)(uVar6 >> 0x20) == in_R8D)) break;
    if (*piVar8 != 0) {
      iVar4 = (int)uVar6;
      uVar9 = *piVar8 - iVar4 ^ (uint)(uVar6 >> 0xd) & 0x7ffff;
      uVar7 = (-0x61c88647 - uVar9) - iVar4 ^ uVar9 << 8;
      uVar5 = (iVar4 - uVar7) - uVar9 ^ uVar7 >> 0xd;
      uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 0xc;
      uVar7 = (uVar7 - uVar5) - uVar9 ^ uVar9 << 0x10;
      uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
      uVar9 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 3;
      uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
      uVar6 = (ulonglong)((uVar5 - uVar7) - uVar9 ^ uVar7 >> 0xf);
    }
    *piVar8 = (int)uVar6;
    this = (FSubSequencePath *)((longlong)this + 8);
  }
  return (FMovieSceneSequenceID)param_1.Value;
}

// NumGenerationsFromLeaf @ 1461bef50

int __thiscall
UE::MovieScene::FSubSequencePath::NumGenerationsFromLeaf
          (FSubSequencePath *this,FMovieSceneSequenceID param_1)

{
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  uVar8 = 0;
  iVar5 = (this->PathToRoot).ArrayNum;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar5) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar1 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar6 = FVar1;
      }
      if (*(uint *)((uchar *)((longlong)FVar6 + 4) + lVar7) == param_1.Value) {
        return uVar8;
      }
      iVar5 = (this->PathToRoot).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < iVar5);
  }
  if (param_1.Value != 0) {
    `UE::MovieScene::FSubSequencePath::NumGenerationsFromLeaf'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  return uVar8;
}

// NumGenerationsFromRoot @ 1461bf010

int __thiscall
UE::MovieScene::FSubSequencePath::NumGenerationsFromRoot
          (FSubSequencePath *this,FMovieSceneSequenceID param_1)

{
  int iVar1;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar7;
  FMovieSceneSequenceID *pFVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  uVar11 = (this->PathToRoot).ArrayNum;
  lVar12 = (longlong)(int)uVar11;
  iVar6 = 0;
  if (0 < (int)uVar11) {
    lVar10 = 0;
    lVar9 = lVar12 * 8;
    do {
      uVar11 = uVar11 - 1;
      lVar9 = lVar9 + -8;
      uVar5 = 0;
      if ((int)uVar11 < (this->PathToRoot).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar7 = FVar2;
      }
      if (*(uint *)((uchar *)((longlong)FVar7 + 4) + lVar9) == param_1.Value) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar12);
  }
  iVar1 = (this->PathToRoot).ArrayNum;
  if (iVar1 == 0) {
    pFVar8 = &MovieSceneSequenceID::Root;
  }
  else {
    uVar11 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar11 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
    if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
      FVar7 = FVar2;
    }
    pFVar8 = (FMovieSceneSequenceID *)
             ((longlong)((this->PathToRoot).ArrayNum + -1) * 8 + 4 + (longlong)FVar7);
  }
  if (pFVar8->Value != param_1.Value) {
    `UE::MovieScene::FSubSequencePath::NumGenerationsFromRoot'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  return iVar6;
}

// PopGenerations @ 1461c3580

void __thiscall UE::MovieScene::FSubSequencePath::PopGenerations(FSubSequencePath *this,int param_1)

{
  int *piVar1;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint local_res10 [2];
  uint *local_18;
  FSubSequencePath *local_10;
  
  if (param_1 != 0) {
    piVar1 = &(this->PathToRoot).ArrayNum;
    local_res10[0] = param_1;
    if (*piVar1 < param_1) {
      local_18 = local_res10;
      local_10 = this;
      bVar5 = `UE::MovieScene::FSubSequencePath::PopGenerations'::__l6::<lambda_1>::operator()
                        (&local_18);
      if (!bVar5) {
        local_res10[0] = *piVar1;
      }
    }
    uVar4 = local_res10[0];
    uVar6 = 0;
    if ((int)local_res10[0] <= *piVar1) {
      uVar6 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar4 != 0) {
      FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        this = (FSubSequencePath *)FVar2;
      }
      if (*piVar1 - uVar4 != 0) {
        memmove(this,(void *)((longlong)this + (longlong)(int)uVar4 * 8),
                (longlong)(int)(*piVar1 - uVar4) << 3);
      }
      *piVar1 = *piVar1 - uVar4;
    }
  }
  return;
}

// PopTo @ 1461c3670

void __thiscall
UE::MovieScene::FSubSequencePath::PopTo(FSubSequencePath *this,FMovieSceneSequenceID param_1)

{
  int *piVar1;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  uint *local_28;
  FSubSequencePath *local_20;
  
  piVar1 = &(this->PathToRoot).ArrayNum;
  iVar7 = *piVar1;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar6 = FVar2;
      }
      if (*(uint *)((uchar *)((longlong)FVar6 + 4) + lVar8) == param_1.Value) goto LAB_1461c371c;
      iVar7 = *piVar1;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar9 < iVar7);
  }
  if (param_1.Value != 0) {
    local_res8[0] = 0;
    `UE::MovieScene::FSubSequencePath::NumGenerationsFromLeaf'::__l2::<lambda_1>::operator()
              (local_res8);
  }
LAB_1461c371c:
  if (uVar9 != 0) {
    local_res18[0] = uVar9;
    if (*piVar1 < (int)uVar9) {
      local_28 = local_res18;
      local_20 = this;
      bVar4 = `UE::MovieScene::FSubSequencePath::PopGenerations'::__l6::<lambda_1>::operator()
                        (&local_28);
      if (!bVar4) {
        local_res18[0] = *piVar1;
      }
    }
    uVar9 = local_res18[0];
    uVar5 = 0;
    if ((int)local_res18[0] <= *piVar1) {
      uVar5 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar9 != 0) {
      FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        this = (FSubSequencePath *)FVar2;
      }
      if (*piVar1 - uVar9 != 0) {
        memmove(this,(void *)((longlong)this + (longlong)(int)uVar9 * 8),
                (longlong)(int)(*piVar1 - uVar9) << 3);
      }
      *piVar1 = *piVar1 - uVar9;
    }
  }
  return;
}

// PushGeneration @ 1461c3ed0

void __thiscall
UE::MovieScene::FSubSequencePath::PushGeneration
          (FSubSequencePath *this,FMovieSceneSequenceID param_1,FMovieSceneSequenceID param_2)

{
  int *piVar1;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar6;
  uint local_18;
  uint uStack_14;
  
  FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FVar6 = FVar2;
  }
  local_18 = param_2.Value;
  uStack_14 = param_1.Value;
  if ((ulonglong)FVar6 <= &local_18) {
    FVar6 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
    if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
      FVar6 = FVar2;
    }
    if ((&local_18 < (uint *)((longlong)FVar6 + (longlong)(this->PathToRoot).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->PathToRoot).ArrayNum;
  piVar1 = &(this->PathToRoot).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>_>
                      (0x408,(ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> *)
                             this,piVar1);
  }
  (this->PathToRoot).ArrayNum = iVar5 + 1;
  FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FVar6 = FVar2;
  }
  memmove((uchar *)((longlong)FVar6 + 8),(void *)FVar6,(longlong)iVar5 << 3);
  FVar2 = (this->PathToRoot).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    this = (FSubSequencePath *)FVar2;
  }
  *(ulonglong *)this = CONCAT44(uStack_14,local_18);
  return;
}

// Reset @ 1461cd450

void __thiscall
UE::MovieScene::FSubSequencePath::Reset
          (FSubSequencePath *this,FMovieSceneSequenceID param_1,
          FMovieSceneSequenceHierarchy *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 local_res10 [8];
  uint local_38;
  uint uStack_34;
  
  if ((param_1.Value == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LeafID != MovieSceneSequenceID::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneRootOverridePath.cpp"
                         ,0x45,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar1 = &(this->PathToRoot).ArrayMax;
  puVar12 = (uint *)0x0;
  (this->PathToRoot).ArrayNum = 0;
  if ((this->PathToRoot).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>_>
              (8,4,0,(ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> *)this,0,
               piVar1);
  }
  if (param_1.Value != 0) {
    if ((param_2 == (FMovieSceneSequenceHierarchy *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LeafID == MovieSceneSequenceID::Root || RootHierarchy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneRootOverridePath.cpp"
                           ,0x4b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    do {
      puVar8 = puVar12;
      if (*(int *)&(param_2->Hierarchy).field_0x8 != *(int *)&(param_2->Hierarchy).field_0x34) {
        puVar2 = *(undefined1 **)&(param_2->Hierarchy).field_0x40;
        puVar10 = &(param_2->Hierarchy).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar10 = puVar2;
        }
        uVar6 = *(uint *)(puVar10 +
                         (ulonglong)(*(int *)&(param_2->Hierarchy).field_0x48 - 1U & param_1.Value)
                         * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar8 = (uint *)(*(longlong *)&param_2->Hierarchy + (longlong)(int)uVar6 * 0x28);
            if (*(uint *)(*(longlong *)&param_2->Hierarchy + (longlong)(int)uVar6 * 0x28) ==
                param_1.Value) break;
            uVar6 = puVar8[8];
            puVar8 = puVar12;
          } while (uVar6 != 0xffffffff);
        }
      }
      puVar13 = puVar8 + 2;
      if (puVar8 == (uint *)0x0) {
        puVar13 = puVar12;
      }
      puVar8 = puVar12;
      if (*(int *)&(param_2->SubSequences).field_0x8 != *(int *)&(param_2->SubSequences).field_0x34)
      {
        puVar2 = *(undefined1 **)&(param_2->SubSequences).field_0x40;
        puVar10 = &(param_2->SubSequences).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar10 = puVar2;
        }
        uVar6 = *(uint *)(puVar10 +
                         (ulonglong)
                         (*(int *)&(param_2->SubSequences).field_0x48 - 1U & param_1.Value) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar8 = (uint *)((longlong)(int)uVar6 * 0x120 + *(longlong *)&param_2->SubSequences);
            if (*puVar8 == param_1.Value) break;
            uVar6 = puVar8[0x46];
            puVar8 = puVar12;
          } while (uVar6 != 0xffffffff);
        }
      }
      puVar11 = puVar8 + 2;
      if (puVar8 == (uint *)0x0) {
        puVar11 = puVar12;
      }
      if ((puVar13 == (uint *)0x0) || (puVar11 == (uint *)0x0)) {
        local_res10[0] = 0;
        bVar5 = `UE::MovieScene::FSubSequencePath::Reset'::__l19::<lambda_1>::operator()
                          (local_res10);
        if (!bVar5) {
          return;
        }
      }
      FVar3 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      local_38 = puVar11[0x1a];
      FVar9 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar3 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar9 = FVar3;
      }
      uStack_34 = param_1.Value;
      if ((ulonglong)FVar9 <= &local_38) {
        FVar9 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
        if (FVar3 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
          FVar9 = FVar3;
        }
        if ((&local_38 < (uint *)((longlong)FVar9 + (longlong)*piVar1 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->PathToRoot).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>_>
                          (0x408,(ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>
                                  *)this,piVar1);
      }
      (this->PathToRoot).ArrayNum = iVar7 + 1;
      FVar3 = (this->PathToRoot).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)this;
      if (FVar3 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar9 = FVar3;
      }
      *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) = CONCAT44(uStack_34,local_38);
      param_1.Value = *puVar13;
    } while (param_1.Value != 0);
  }
  return;
}

// Reset @ 1461cd700

void __thiscall UE::MovieScene::FSubSequencePath::Reset(FSubSequencePath *this)

{
  (this->PathToRoot).ArrayNum = 0;
  if ((this->PathToRoot).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>_>
              (8,4,0,(ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> *)this,0,
               &(this->PathToRoot).ArrayMax);
  }
  return;
}

// operator() @ 1504e60e0

bool __thiscall
`UE::MovieScene::FSubSequencePath::NumGenerationsFromLeaf'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5797320991847743378>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5797320991847743378>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6120

bool __thiscall
`UE::MovieScene::FSubSequencePath::NumGenerationsFromRoot'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5797320991847743357>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5797320991847743357>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e62a0

bool __thiscall
`UE::MovieScene::FSubSequencePath::PopGenerations'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5797320991847743297>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5797320991847743297>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6330

bool __thiscall `UE::MovieScene::FSubSequencePath::Reset'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5797320991847743407>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5797320991847743407>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

