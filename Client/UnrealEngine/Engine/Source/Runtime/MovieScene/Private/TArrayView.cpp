// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// TArrayView<FFrameNumber_const_,int><TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_const_&,TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 146068010

TArrayView<FFrameNumber_const_,int> * __thiscall
TArrayView<FFrameNumber_const_,int>::
TArrayView<FFrameNumber_const_,int><TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_const_&,TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FFrameNumber_const_,int> *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFrameNumber_const_,int> *pTVar4;
  
  this->DataPtr = (FFrameNumber *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FFrameNumber_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14609b250

FFrameNumber * __thiscall
TArrayView<FFrameNumber_const_,int>::operator[]
          (TArrayView<FFrameNumber_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrameNumber *pFVar4;
  
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
      pFVar4 = (FFrameNumber *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14609b2d0

FMovieSceneDoubleValue * __thiscall
TArrayView<FMovieSceneDoubleValue,int>::operator[]
          (TArrayView<FMovieSceneDoubleValue,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneDoubleValue *pFVar4;
  
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
      pFVar4 = (FMovieSceneDoubleValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14609b350

FMovieSceneFloatValue * __thiscall
TArrayView<FMovieSceneFloatValue,int>::operator[]
          (TArrayView<FMovieSceneFloatValue,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneFloatValue *pFVar4;
  
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
      pFVar4 = (FMovieSceneFloatValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 1460d93c0

FFrameNumber * __thiscall
TArrayView<FFrameNumber_const_,int>::Last(TArrayView<FFrameNumber_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrameNumber *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFrameNumber *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// Last @ 1460d9450

FMovieSceneDoubleValue * __thiscall
TArrayView<FMovieSceneDoubleValue_const_,int>::Last
          (TArrayView<FMovieSceneDoubleValue_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneDoubleValue *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneDoubleValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// Last @ 1460d94e0

FMovieSceneFloatValue * __thiscall
TArrayView<FMovieSceneFloatValue_const_,int>::Last
          (TArrayView<FMovieSceneFloatValue_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneFloatValue *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneFloatValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// TArrayView<FMovieSceneDeterminismFence_const_,int><TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_const_&,TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_> @ 146101fe0

TArrayView<FMovieSceneDeterminismFence_const_,int> * __thiscall
TArrayView<FMovieSceneDeterminismFence_const_,int>::
TArrayView<FMovieSceneDeterminismFence_const_,int><TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_const_&,TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMovieSceneDeterminismFence_const_,int> *this,
          TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMovieSceneDeterminismFence_const_,int> *pTVar4;
  
  this->DataPtr = (FMovieSceneDeterminismFence *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FMovieSceneDeterminismFence_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14611f410

FMovieSceneEntityID * __thiscall
TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
          (TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneEntityID *pFVar4;
  
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
      pFVar4 = (FMovieSceneEntityID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1461876d0

FMovieSceneEvaluationTreeNode * __thiscall
TArrayView<FMovieSceneEvaluationTreeNode_const_,int>::operator[]
          (TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneEvaluationTreeNode *pFVar4;
  
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
      pFVar4 = (FMovieSceneEvaluationTreeNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 146187750

FMovieSceneEvaluationTreeNode * __thiscall
TArrayView<FMovieSceneEvaluationTreeNode,int>::operator[]
          (TArrayView<FMovieSceneEvaluationTreeNode,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneEvaluationTreeNode *pFVar4;
  
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
      pFVar4 = (FMovieSceneEvaluationTreeNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 1461bc530

FFrameTime * __thiscall
TArrayView<FFrameTime_const_,int>::Last(TArrayView<FFrameTime_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrameTime *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFrameTime *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// operator[] @ 146200690

UMovieSceneSection ** __thiscall
TArrayView<UMovieSceneSection_*_const,int>::operator[]
          (TArrayView<UMovieSceneSection_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMovieSceneSection **ppUVar4;
  
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
      ppUVar4 = (UMovieSceneSection **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + param_1;
}

