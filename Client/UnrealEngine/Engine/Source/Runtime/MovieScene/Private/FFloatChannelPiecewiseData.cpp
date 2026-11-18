// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// GetFiniteEnd @ 1460ca4e0

FFrameNumber __thiscall
UE::MovieScene::Interpolation::FFloatChannelPiecewiseData::GetFiniteEnd
          (FFloatChannelPiecewiseData *this)

{
  FMovieSceneFloatChannel *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFrameNumber *pFVar5;
  int *in_RDX;
  TArrayView<FFrameNumber_const_,int> local_18;
  
  pFVar1 = this->Channel;
  if ((&pFVar1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pFVar1 == (FMovieSceneFloatChannel *)0xffffffffffffff80)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x2f3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FFrameNumber)iVar4;
    }
  }
  local_18.DataPtr = (FFrameNumber *)(pFVar1->Times).AllocatorInstance.Data;
  iVar4 = (pFVar1->Times).ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FFrameNumber)iVar4;
    }
  }
  local_18.ArrayNum = iVar4;
  pFVar5 = TArrayView<FFrameNumber_const_,int>::Last(&local_18,0);
  *in_RDX = pFVar5->Value;
  return (FFrameNumber)(int)in_RDX;
}

// GetFiniteStart @ 1460ca700

FFrameNumber __thiscall
UE::MovieScene::Interpolation::FFloatChannelPiecewiseData::GetFiniteStart
          (FFloatChannelPiecewiseData *this)

{
  FMovieSceneFloatChannel *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 *in_RDX;
  
  pFVar1 = this->Channel;
  if ((&pFVar1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pFVar1 == (FMovieSceneFloatChannel *)0xffffffffffffff80)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x2f3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FFrameNumber)iVar5;
    }
  }
  pFVar2 = (pFVar1->Times).AllocatorInstance.Data;
  iVar5 = (pFVar1->Times).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FFrameNumber)iVar5;
    }
  }
  else if (0 < iVar5) goto LAB_1460ca7b6;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return (FFrameNumber)iVar5;
  }
LAB_1460ca7b6:
  *in_RDX = *(undefined4 *)pFVar2;
  return (FFrameNumber)(int)in_RDX;
}

// NumPieces @ 1460da770

int __thiscall
UE::MovieScene::Interpolation::FFloatChannelPiecewiseData::NumPieces
          (FFloatChannelPiecewiseData *this)

{
  FMovieSceneFloatChannel *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pFVar1 = this->Channel;
  if ((pFVar1 == (FMovieSceneFloatChannel *)0xffffffffffffff90) ||
     (pFVar1 == (FMovieSceneFloatChannel *)0xffffffffffffff80)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x2f3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = (pFVar1->Values).ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  return iVar4;
}

// PostExtrapolate @ 1460e0a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::MovieScene::Interpolation::FFloatChannelPiecewiseData::PostExtrapolate
          (FFloatChannelPiecewiseData *this,FFrameTime *param_1)

{
  FFrameTime FVar1;
  bool bVar2;
  FCachedInterpolation *this_00;
  float fVar3;
  undefined1 auStack_a8 [32];
  double local_88;
  FCachedInterpolation local_80;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FVar1 = *param_1;
  local_88 = 0.0;
  this_00 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
                      (&local_80,this->Channel,(FTimeEvaluationCache *)0x0,FVar1);
  bVar2 = FCachedInterpolation::Evaluate(this_00,FVar1,&local_88);
  if (bVar2) {
    fVar3 = (float)local_88;
  }
  else {
    fVar3 = 0.0;
  }
  return (double)fVar3;
}

// PreExtrapolate @ 1460e0d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::MovieScene::Interpolation::FFloatChannelPiecewiseData::PreExtrapolate
          (FFloatChannelPiecewiseData *this,FFrameTime *param_1)

{
  FFrameTime FVar1;
  bool bVar2;
  FCachedInterpolation *this_00;
  float fVar3;
  undefined1 auStack_a8 [32];
  double local_88;
  FCachedInterpolation local_80;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FVar1 = *param_1;
  local_88 = 0.0;
  this_00 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
                      (&local_80,this->Channel,(FTimeEvaluationCache *)0x0,FVar1);
  bVar2 = FCachedInterpolation::Evaluate(this_00,FVar1,&local_88);
  if (bVar2) {
    fVar3 = (float)local_88;
  }
  else {
    fVar3 = 0.0;
  }
  return (double)fVar3;
}

