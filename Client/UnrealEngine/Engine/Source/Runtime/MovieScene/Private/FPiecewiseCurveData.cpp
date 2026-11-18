// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// GetDefaultValue @ 1460ca240

double __thiscall UE::MovieScene::FPiecewiseCurveData::GetDefaultValue(FPiecewiseCurveData *this)

{
  return 0.0;
}

// GetEndingValue @ 1460ca250

double __thiscall UE::MovieScene::FPiecewiseCurveData::GetEndingValue(FPiecewiseCurveData *this)

{
  int iVar1;
  int iVar2;
  FPiecewiseCurve *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double local_res10;
  
  pFVar3 = this->Channel;
  local_res10 = 0.0;
  iVar1 = (pFVar3->Values).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar9 = (double)(*pcVar5)();
      return dVar9;
    }
  }
  iVar1 = (pFVar3->Values).ArrayNum;
  pFVar4 = (pFVar3->Values).AllocatorInstance.Data;
  pFVar3 = this->Channel;
  iVar2 = (pFVar3->Values).ArrayNum;
  uVar8 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar2) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar9 = (double)(*pcVar5)();
      return dVar9;
    }
  }
  Interpolation::FCachedInterpolation::Evaluate
            ((FCachedInterpolation *)(pFVar4 + (longlong)(iVar1 + -1) * 0x60),
             (FFrameTime)
             (*(ulonglong *)
               ((pFVar3->Values).AllocatorInstance.Data +
               (longlong)(pFVar3->Values).ArrayNum * 0x60 + -8) >> 0x20),&local_res10);
  return local_res10;
}

// GetFiniteEnd @ 1460ca590

FFrameNumber __thiscall UE::MovieScene::FPiecewiseCurveData::GetFiniteEnd(FPiecewiseCurveData *this)

{
  FPiecewiseCurve *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_RDX;
  
  pFVar1 = this->Channel;
  iVar5 = (pFVar1->Values).ArrayNum;
  uVar6 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar5) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return (FFrameNumber)iVar5;
    }
  }
  *in_RDX = (int)((ulonglong)
                  *(undefined8 *)
                   ((pFVar1->Values).AllocatorInstance.Data +
                   (longlong)(pFVar1->Values).ArrayNum * 0x60 + -8) >> 0x20);
  return (FFrameNumber)(int)in_RDX;
}

// GetFiniteStart @ 1460ca7e0

FFrameNumber __thiscall
UE::MovieScene::FPiecewiseCurveData::GetFiniteStart(FPiecewiseCurveData *this)

{
  FPiecewiseCurve *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *in_RDX;
  
  pFVar1 = this->Channel;
  if ((pFVar1->Values).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FFrameNumber)iVar4;
    }
  }
  *in_RDX = *(undefined4 *)((pFVar1->Values).AllocatorInstance.Data + 0x58);
  return (FFrameNumber)(int)in_RDX;
}

// GetIndexOfPieceByTime @ 1460caa80

int __thiscall
UE::MovieScene::FPiecewiseCurveData::GetIndexOfPieceByTime
          (FPiecewiseCurveData *this,FFrameTime *param_1)

{
  uint uVar1;
  int iVar2;
  FPiecewiseCurve *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  pFVar3 = this->Channel;
  iVar9 = 0;
  uVar1 = (pFVar3->Values).ArrayNum;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar2 = (uVar10 >> 1) + iVar9;
      if (*(int *)((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar2 * 0x60 + 0x58) <=
          (param_1->FrameNumber).Value) {
        iVar9 = iVar2 + (uVar10 & 1);
      }
      uVar6 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar6 != 0);
  }
  iVar9 = iVar9 + -1;
  if ((-1 < iVar9) && (iVar9 < (int)uVar1)) {
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    uVar4 = *(undefined8 *)((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar9 * 0x60 + 0x58)
    ;
    iVar2 = (param_1->FrameNumber).Value;
    if ((int)uVar4 <= iVar2) {
      iVar8 = (int)((ulonglong)uVar4 >> 0x20);
      if (iVar2 < iVar8) {
        return iVar9;
      }
      if (iVar8 == 0x7fffffff) {
        return iVar9;
      }
    }
  }
  return -1;
}

// GetPieceByIndex @ 1460ced80

FCachedInterpolation * __thiscall
UE::MovieScene::FPiecewiseCurveData::GetPieceByIndex
          (FPiecewiseCurveData *this,FCachedInterpolation *__return_storage_ptr__,int param_1)

{
  FPiecewiseCurve *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  FCachedInterpolation *pFVar6;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  *pTVar7;
  
  pFVar1 = this->Channel;
  uVar5 = 0;
  if (param_1 < (pFVar1->Values).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCachedInterpolation *)(*pcVar2)();
      return pFVar6;
    }
  }
  pTVar7 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
            *)((pFVar1->Values).AllocatorInstance.Data + (longlong)param_1 * 0x60);
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  ::
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
            (&__return_storage_ptr__->Data,pTVar7);
  uVar3 = *(undefined4 *)((longlong)&pTVar7[1]._padding_ + 4);
  (__return_storage_ptr__->Range).Start = (FFrameNumber)*(undefined4 *)&pTVar7[1]._padding_;
  (__return_storage_ptr__->Range).End = (FFrameNumber)uVar3;
  return __return_storage_ptr__;
}

// GetPieceByTime @ 1460cee20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedInterpolation * __thiscall
UE::MovieScene::FPiecewiseCurveData::GetPieceByTime
          (FPiecewiseCurveData *this,FCachedInterpolation *__return_storage_ptr__,
          FFrameTime *param_1)

{
  uint uVar1;
  int iVar2;
  FPiecewiseCurve *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  FCachedInterpolation *pFVar10;
  int iVar11;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  *pTVar12;
  uint uVar13;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  local_f8;
  longlong local_a0;
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  local_98;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar3 = this->Channel;
  iVar11 = 0;
  uVar1 = (pFVar3->Values).ArrayNum;
  if (0 < (int)uVar1) {
    uVar13 = uVar1;
    do {
      iVar2 = (uVar13 >> 1) + iVar11;
      if (*(int *)((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar2 * 0x60 + 0x58) <=
          (param_1->FrameNumber).Value) {
        iVar11 = iVar2 + (uVar13 & 1);
      }
      uVar6 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar6 != 0);
  }
  iVar11 = iVar11 + -1;
  if ((iVar11 < 0) || ((int)uVar1 <= iVar11)) {
LAB_1460cef0b:
    iVar11 = -1;
  }
  else {
    if (iVar11 < 0) {
      local_108 = (longlong)iVar11;
      local_100 = (longlong)(int)uVar1;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FCachedInterpolation *)(*pcVar5)();
        return pFVar10;
      }
    }
    uVar4 = *(undefined8 *)
             ((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar11 * 0x60 + 0x58);
    iVar2 = (param_1->FrameNumber).Value;
    if ((iVar2 < (int)uVar4) ||
       ((iVar9 = (int)((ulonglong)uVar4 >> 0x20), iVar9 <= iVar2 && (iVar9 != 0x7fffffff))))
    goto LAB_1460cef0b;
  }
  if (-1 < iVar11) {
    pFVar3 = this->Channel;
    iVar2 = (pFVar3->Values).ArrayNum;
    if (iVar11 < iVar2) {
      if (iVar11 < 0) {
        local_108 = (longlong)iVar11;
        local_100 = (longlong)iVar2;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FCachedInterpolation *)(*pcVar5)();
          return pFVar10;
        }
      }
      pTVar12 = (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                 *)((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar11 * 0x60);
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
      ::
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                (&local_f8,pTVar12);
      local_a0 = pTVar12[1]._padding_;
      pTVar12 = &local_f8;
      goto LAB_1460cefaf;
    }
  }
  local_98.TypeIndex = '\0';
  local_40 = 0xffffffff00000000;
  pTVar12 = &local_98;
LAB_1460cefaf:
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
  ::
  TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
            (&__return_storage_ptr__->Data,pTVar12);
  uVar7 = *(undefined4 *)((longlong)&pTVar12[1]._padding_ + 4);
  (__return_storage_ptr__->Range).Start = (FFrameNumber)*(undefined4 *)&pTVar12[1]._padding_;
  (__return_storage_ptr__->Range).End = (FFrameNumber)uVar7;
  return __return_storage_ptr__;
}

// GetPostExtrapolation @ 1460cf000

ERichCurveExtrapolation __thiscall
UE::MovieScene::FPiecewiseCurveData::GetPostExtrapolation(FPiecewiseCurveData *this)

{
  return RCCE_None;
}

// GetPreExtrapolation @ 1460cf010

ERichCurveExtrapolation __thiscall
UE::MovieScene::FPiecewiseCurveData::GetPreExtrapolation(FPiecewiseCurveData *this)

{
  return RCCE_None;
}

// GetStartingValue @ 1460d02c0

double __thiscall UE::MovieScene::FPiecewiseCurveData::GetStartingValue(FPiecewiseCurveData *this)

{
  FPiecewiseCurve *pFVar1;
  FPiecewiseCurve *pFVar2;
  FCachedInterpolation *this_00;
  code *pcVar3;
  FFrameTime FVar4;
  bool bVar5;
  double dVar6;
  double local_res10;
  
  pFVar1 = this->Channel;
  local_res10 = 0.0;
  if ((pFVar1->Values).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  pFVar2 = this->Channel;
  this_00 = (FCachedInterpolation *)(pFVar1->Values).AllocatorInstance.Data;
  if ((pFVar2->Values).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  FVar4.SubFrame = 0.0;
  FVar4.FrameNumber.Value = *(uint *)((pFVar2->Values).AllocatorInstance.Data + 0x58);
  Interpolation::FCachedInterpolation::Evaluate(this_00,FVar4,&local_res10);
  return local_res10;
}

// HasDefaultValue @ 1460d1510

bool __thiscall UE::MovieScene::FPiecewiseCurveData::HasDefaultValue(FPiecewiseCurveData *this)

{
  return false;
}

// NumPieces @ 1460da800

int __thiscall UE::MovieScene::FPiecewiseCurveData::NumPieces(FPiecewiseCurveData *this)

{
  return (this->Channel->Values).ArrayNum;
}

// PostExtrapolate @ 1460e0b10

double __thiscall
UE::MovieScene::FPiecewiseCurveData::PostExtrapolate(FPiecewiseCurveData *this,FFrameTime *param_1)

{
  return 0.0;
}

// PreExtrapolate @ 1460e0e20

double __thiscall
UE::MovieScene::FPiecewiseCurveData::PreExtrapolate(FPiecewiseCurveData *this,FFrameTime *param_1)

{
  return 0.0;
}

