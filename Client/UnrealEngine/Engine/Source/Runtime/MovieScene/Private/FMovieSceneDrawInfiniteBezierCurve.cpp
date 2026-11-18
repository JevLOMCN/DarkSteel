// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double> @ 14608d570

FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double> *
__thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
           *this,FMovieSceneDoubleChannel *param_1,FFrameRate *param_2,double *param_3,
          double *param_4,double *param_5,double *param_6,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_7)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  ERichCurveExtrapolation EVar4;
  ERichCurveExtrapolation EVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
  *pFVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> local_78 [3];
  
  this->Channel = param_1;
  this->TickResolution = *param_2;
  this->TimeThreshold = *param_3;
  this->ValueThreshold = *param_4;
  this->StartTimeSeconds = *param_5;
  dVar19 = *param_6;
  this->PreInfinityExtrapolation = RCCE_None;
  this->PostInfinityExtrapolation = RCCE_None;
  this->EndTimeSeconds = dVar19;
  this->bComplexPreInfinityExtrapolation = false;
  this->bComplexPostInfinityExtrapolation = false;
  this->CurveStartSeconds = 0.0;
  this->CurveEndSeconds = 0.0;
  this->CurveDurationSeconds = 0.0;
  this->VisibleCurveStartSeconds = 0.0;
  this->VisibleCurveEndSeconds = 0.0;
  this->PreInfinityDuration = 0.0;
  this->PostInfinityDuration = 0.0;
  this->bPreInfinityVisible = false;
  this->bPostInfinityVisible = false;
  this->bPreInfinityOscillates = false;
  this->bPostInfinityOscillates = false;
  this->PreInfinityExtrapolation = (uint)(param_1->PreInfinityExtrap).Value;
  this->PostInfinityExtrapolation = (uint)(param_1->PostInfinityExtrap).Value;
  iVar13 = (param_1->Times).ArrayNum;
  pFVar6 = (param_1->Times).AllocatorInstance.Data;
  if ((iVar13 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
               *)(*pcVar8)();
    return pFVar14;
  }
  iVar3 = (param_1->Values).ArrayNum;
  pFVar7 = (param_1->Values).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
               *)(*pcVar8)();
    return pFVar14;
  }
  if ((this->PreInfinityExtrapolation == RCCE_Cycle) ||
     (this->PreInfinityExtrapolation - RCCE_CycleWithOffset < 2)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  this->bComplexPreInfinityExtrapolation = bVar10;
  if ((this->PostInfinityExtrapolation == RCCE_Cycle) ||
     (this->PostInfinityExtrapolation - RCCE_CycleWithOffset < 2)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  this->bComplexPostInfinityExtrapolation = bVar11;
  if ((((bVar10 == false) && (bVar11 == false)) || (iVar13 < 2)) || (iVar3 < 2)) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7113705412687298839>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneDrawBezierCurve.h"
                        ,0x117,"bDrawComplexPrePostInfinityExtrapolation");
    if (!bVar10) {
      PopulateCurvePoints<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                (param_1,param_2,*param_3,*param_4,*param_5,*param_6,param_7);
      return this;
    }
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
               *)(*pcVar8)();
    return pFVar14;
  }
  iVar12 = (this->TickResolution).Denominator;
  uVar15 = 0;
  if ((int)(iVar13 - 1U) < iVar13) {
    uVar15 = ~(iVar13 - 1U) >> 0x1f;
  }
  iVar9 = (this->TickResolution).Numerator;
  this->CurveStartSeconds =
       ((double)((longlong)iVar12 * (longlong)*(int *)pFVar6) + (double)iVar12 * 0.0) /
       (double)iVar9;
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
               *)(*pcVar8)();
    return pFVar14;
  }
  iVar13 = *(int *)(pFVar6 + ((longlong)iVar13 + -1) * 4);
  dVar19 = this->CurveStartSeconds;
  dVar1 = this->EndTimeSeconds;
  dVar23 = dVar19 - this->StartTimeSeconds;
  EVar4 = this->PostInfinityExtrapolation;
  dVar21 = this->StartTimeSeconds;
  if (this->StartTimeSeconds <= dVar19) {
    dVar21 = dVar19;
  }
  this->VisibleCurveStartSeconds = dVar21;
  this->PreInfinityDuration = dVar23;
  EVar5 = this->PreInfinityExtrapolation;
  dVar18 = ((double)((longlong)iVar12 * (longlong)iVar13) + (double)iVar12 * 0.0) / (double)iVar9;
  this->CurveEndSeconds = dVar18;
  dVar22 = dVar1 - dVar18;
  if (dVar18 <= dVar1) {
    dVar1 = dVar18;
  }
  this->CurveDurationSeconds = dVar18 - dVar19;
  this->VisibleCurveEndSeconds = dVar1;
  this->PostInfinityDuration = dVar22;
  this->bPreInfinityVisible = 0.0 < dVar23;
  bVar10 = 0.0 < dVar22;
  this->bPostInfinityVisible = bVar10;
  this->bPreInfinityOscillates = EVar5 == RCCE_Oscillate;
  this->bPostInfinityOscillates = EVar4 == RCCE_Oscillate;
  dVar20 = dVar18;
  if ((dVar23 <= 0.0) || (this->bComplexPreInfinityExtrapolation == false)) {
    dVar17 = dVar21;
    dVar20 = dVar1;
    if ((0.0 < dVar23) &&
       (((this->bComplexPreInfinityExtrapolation != false &&
         (dVar20 = dVar18, EVar5 == RCCE_Oscillate)) &&
        (dVar20 = dVar19 + dVar23, dVar18 <= dVar19 + dVar23)))) {
      dVar20 = dVar18;
    }
  }
  else {
    dVar17 = dVar19;
    if (EVar5 == RCCE_Oscillate) {
      dVar20 = dVar19 + dVar23;
      if (dVar18 <= dVar19 + dVar23) {
        dVar20 = dVar18;
      }
    }
    else {
      dVar17 = dVar18 - dVar23;
      if (dVar18 - dVar23 <= dVar19) {
        dVar17 = dVar19;
      }
    }
  }
  if ((bVar10) && (this->bComplexPostInfinityExtrapolation != false)) {
    dVar23 = this->CurveStartSeconds;
    dVar19 = dVar23;
    if ((EVar4 == RCCE_Oscillate) && (dVar19 = dVar18 - dVar22, dVar18 - dVar22 <= dVar23)) {
      dVar19 = dVar23;
    }
  }
  else {
    dVar19 = dVar21;
    dVar23 = dVar1;
    if ((!bVar10) || (this->bComplexPostInfinityExtrapolation == false)) goto LAB_14608d8f5;
  }
  dVar18 = this->CurveEndSeconds;
  dVar23 = dVar18;
  if ((EVar4 != RCCE_Oscillate) && (dVar23 = dVar22 + this->CurveStartSeconds, dVar18 <= dVar23)) {
    dVar23 = dVar18;
  }
LAB_14608d8f5:
  if (dVar20 <= dVar1) {
    dVar20 = dVar1;
  }
  local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (dVar17 <= dVar21) {
    dVar21 = dVar17;
  }
  local_78[0].ArrayNum = 0;
  local_78[0].ArrayMax = 0;
  if (dVar20 <= dVar23) {
    dVar20 = dVar23;
  }
  if (dVar19 <= dVar21) {
    dVar21 = dVar19;
  }
  PopulateCurvePoints<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
            (param_1,&this->TickResolution,this->TimeThreshold,this->ValueThreshold,dVar21,dVar20,
             local_78);
  if (local_78[0].ArrayNum != 0) {
    if ((local_78[0].ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                 *)(*pcVar8)();
      return pFVar14;
    }
    dVar19 = this->CurveStartSeconds;
    if (*(double *)local_78[0].AllocatorInstance.Data <= dVar19 &&
        dVar19 != *(double *)local_78[0].AllocatorInstance.Data) {
      dVar1 = *(double *)pFVar7;
      if ((local_78[0].ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                   *)(*pcVar8)();
        return pFVar14;
      }
      *(double *)local_78[0].AllocatorInstance.Data = dVar19;
      *(double *)(local_78[0].AllocatorInstance.Data + 8) = dVar1;
    }
    uVar15 = 0;
    if ((int)(local_78[0].ArrayNum - 1U) < local_78[0].ArrayNum) {
      uVar15 = ~(local_78[0].ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                 *)(*pcVar8)();
      return pFVar14;
    }
    if (this->CurveEndSeconds <
        *(double *)
         (local_78[0].AllocatorInstance.Data + (longlong)(local_78[0].ArrayNum + -1) * 0x10)) {
      uVar15 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar15 = ~(iVar3 - 1U) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                   *)(*pcVar8)();
        return pFVar14;
      }
      dVar19 = this->CurveEndSeconds;
      uVar2 = *(undefined8 *)(pFVar7 + ((longlong)iVar3 * 4 + -4) * 8);
      uVar15 = 0;
      if ((int)(local_78[0].ArrayNum - 1U) < local_78[0].ArrayNum) {
        uVar15 = ~(local_78[0].ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                   *)(*pcVar8)();
        return pFVar14;
      }
      *(double *)(local_78[0].AllocatorInstance.Data + (longlong)(local_78[0].ArrayNum + -1) * 0x10)
           = dVar19;
      *(undefined8 *)
       (local_78[0].AllocatorInstance.Data + (longlong)(local_78[0].ArrayNum + -1) * 0x10 + 8) =
           uVar2;
    }
  }
  if (this->bPreInfinityVisible != false) {
    if (this->bComplexPreInfinityExtrapolation == false) {
      DrawPreInfinityExtrapolationLine(this,local_78,param_7);
    }
    else {
      DrawPreInfinityExtrapolationComplex(this,local_78,param_7);
    }
  }
  if ((param_7 == local_78) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
               *)(*pcVar8)();
    return pFVar14;
  }
  lVar16 = (longlong)local_78[0].ArrayNum;
  if (local_78[0].ArrayNum != 0) {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,local_78[0].ArrayNum,&param_7->AllocatorInstance,&param_7->ArrayNum,
                        &param_7->ArrayMax);
    memcpy((param_7->AllocatorInstance).Data + (longlong)iVar13 * 0x10,
           local_78[0].AllocatorInstance.Data,lVar16 << 4);
  }
  if (this->bPostInfinityVisible != false) {
    if (this->bComplexPostInfinityExtrapolation == false) {
      DrawPostInfinityExtrapolationLine(this,local_78,param_7);
    }
    else {
      DrawPostInfinityExtrapolationComplex(this,local_78,param_7);
    }
  }
  if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].AllocatorInstance.Data);
  }
  return this;
}

// FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float> @ 14608dc80

FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float> * __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
           *this,FMovieSceneFloatChannel *param_1,FFrameRate *param_2,double *param_3,
          double *param_4,double *param_5,double *param_6,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  ERichCurveExtrapolation EVar4;
  ERichCurveExtrapolation EVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float> *pFVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> local_78 [3];
  
  this->Channel = param_1;
  this->TickResolution = *param_2;
  this->TimeThreshold = *param_3;
  this->ValueThreshold = *param_4;
  this->StartTimeSeconds = *param_5;
  dVar19 = *param_6;
  this->PreInfinityExtrapolation = RCCE_None;
  this->PostInfinityExtrapolation = RCCE_None;
  this->EndTimeSeconds = dVar19;
  this->bComplexPreInfinityExtrapolation = false;
  this->bComplexPostInfinityExtrapolation = false;
  this->CurveStartSeconds = 0.0;
  this->CurveEndSeconds = 0.0;
  this->CurveDurationSeconds = 0.0;
  this->VisibleCurveStartSeconds = 0.0;
  this->VisibleCurveEndSeconds = 0.0;
  this->PreInfinityDuration = 0.0;
  this->PostInfinityDuration = 0.0;
  this->bPreInfinityVisible = false;
  this->bPostInfinityVisible = false;
  this->bPreInfinityOscillates = false;
  this->bPostInfinityOscillates = false;
  this->PreInfinityExtrapolation = (uint)(param_1->PreInfinityExtrap).Value;
  this->PostInfinityExtrapolation = (uint)(param_1->PostInfinityExtrap).Value;
  iVar13 = (param_1->Times).ArrayNum;
  pFVar6 = (param_1->Times).AllocatorInstance.Data;
  if ((iVar13 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
               *)(*pcVar8)();
    return pFVar14;
  }
  iVar3 = (param_1->Values).ArrayNum;
  pFVar7 = (param_1->Values).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
               *)(*pcVar8)();
    return pFVar14;
  }
  if ((this->PreInfinityExtrapolation == RCCE_Cycle) ||
     (this->PreInfinityExtrapolation - RCCE_CycleWithOffset < 2)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  this->bComplexPreInfinityExtrapolation = bVar10;
  if ((this->PostInfinityExtrapolation == RCCE_Cycle) ||
     (this->PostInfinityExtrapolation - RCCE_CycleWithOffset < 2)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  this->bComplexPostInfinityExtrapolation = bVar11;
  if ((((bVar10 == false) && (bVar11 == false)) || (iVar13 < 2)) || (iVar3 < 2)) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7113705412687298839>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneDrawBezierCurve.h"
                        ,0x117,"bDrawComplexPrePostInfinityExtrapolation");
    if (!bVar10) {
      PopulateCurvePoints<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                (param_1,param_2,*param_3,(float)*param_4,*param_5,*param_6,param_7);
      return this;
    }
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
               *)(*pcVar8)();
    return pFVar14;
  }
  iVar12 = (this->TickResolution).Denominator;
  uVar15 = 0;
  if ((int)(iVar13 - 1U) < iVar13) {
    uVar15 = ~(iVar13 - 1U) >> 0x1f;
  }
  iVar9 = (this->TickResolution).Numerator;
  this->CurveStartSeconds =
       ((double)((longlong)iVar12 * (longlong)*(int *)pFVar6) + (double)iVar12 * 0.0) /
       (double)iVar9;
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
               *)(*pcVar8)();
    return pFVar14;
  }
  iVar13 = *(int *)(pFVar6 + ((longlong)iVar13 + -1) * 4);
  dVar19 = this->CurveStartSeconds;
  dVar2 = this->EndTimeSeconds;
  dVar21 = dVar19 - this->StartTimeSeconds;
  EVar4 = this->PostInfinityExtrapolation;
  dVar23 = this->StartTimeSeconds;
  if (this->StartTimeSeconds <= dVar19) {
    dVar23 = dVar19;
  }
  this->VisibleCurveStartSeconds = dVar23;
  this->PreInfinityDuration = dVar21;
  EVar5 = this->PreInfinityExtrapolation;
  dVar18 = ((double)((longlong)iVar12 * (longlong)iVar13) + (double)iVar12 * 0.0) / (double)iVar9;
  this->CurveEndSeconds = dVar18;
  dVar20 = dVar2 - dVar18;
  if (dVar18 <= dVar2) {
    dVar2 = dVar18;
  }
  this->CurveDurationSeconds = dVar18 - dVar19;
  this->VisibleCurveEndSeconds = dVar2;
  this->PostInfinityDuration = dVar20;
  this->bPreInfinityVisible = 0.0 < dVar21;
  bVar10 = 0.0 < dVar20;
  this->bPostInfinityVisible = bVar10;
  this->bPreInfinityOscillates = EVar5 == RCCE_Oscillate;
  this->bPostInfinityOscillates = EVar4 == RCCE_Oscillate;
  dVar22 = dVar18;
  if ((dVar21 <= 0.0) || (this->bComplexPreInfinityExtrapolation == false)) {
    dVar17 = dVar23;
    dVar22 = dVar2;
    if ((0.0 < dVar21) &&
       (((this->bComplexPreInfinityExtrapolation != false &&
         (dVar22 = dVar18, EVar5 == RCCE_Oscillate)) &&
        (dVar22 = dVar19 + dVar21, dVar18 <= dVar19 + dVar21)))) {
      dVar22 = dVar18;
    }
  }
  else {
    dVar17 = dVar19;
    if (EVar5 == RCCE_Oscillate) {
      dVar22 = dVar19 + dVar21;
      if (dVar18 <= dVar19 + dVar21) {
        dVar22 = dVar18;
      }
    }
    else {
      dVar17 = dVar18 - dVar21;
      if (dVar18 - dVar21 <= dVar19) {
        dVar17 = dVar19;
      }
    }
  }
  if ((bVar10) && (this->bComplexPostInfinityExtrapolation != false)) {
    dVar21 = this->CurveStartSeconds;
    dVar19 = dVar21;
    if ((EVar4 == RCCE_Oscillate) && (dVar19 = dVar18 - dVar20, dVar18 - dVar20 <= dVar21)) {
      dVar19 = dVar21;
    }
  }
  else {
    dVar19 = dVar23;
    dVar21 = dVar2;
    if ((!bVar10) || (this->bComplexPostInfinityExtrapolation == false)) goto LAB_14608e005;
  }
  dVar18 = this->CurveEndSeconds;
  dVar21 = dVar18;
  if ((EVar4 != RCCE_Oscillate) && (dVar21 = dVar20 + this->CurveStartSeconds, dVar18 <= dVar21)) {
    dVar21 = dVar18;
  }
LAB_14608e005:
  if (dVar22 <= dVar2) {
    dVar22 = dVar2;
  }
  if (dVar17 <= dVar23) {
    dVar23 = dVar17;
  }
  local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78[0].ArrayNum = 0;
  local_78[0].ArrayMax = 0;
  if (dVar22 <= dVar21) {
    dVar22 = dVar21;
  }
  if (dVar19 <= dVar23) {
    dVar23 = dVar19;
  }
  PopulateCurvePoints<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
            (param_1,&this->TickResolution,this->TimeThreshold,(float)this->ValueThreshold,dVar23,
             dVar22,local_78);
  if (local_78[0].ArrayNum != 0) {
    if ((local_78[0].ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                 *)(*pcVar8)();
      return pFVar14;
    }
    dVar19 = this->CurveStartSeconds;
    if (*(double *)local_78[0].AllocatorInstance.Data <= dVar19 &&
        dVar19 != *(double *)local_78[0].AllocatorInstance.Data) {
      fVar1 = *(float *)pFVar7;
      if ((local_78[0].ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                   *)(*pcVar8)();
        return pFVar14;
      }
      *(double *)local_78[0].AllocatorInstance.Data = dVar19;
      *(double *)(local_78[0].AllocatorInstance.Data + 8) = (double)fVar1;
    }
    uVar15 = 0;
    if ((int)(local_78[0].ArrayNum - 1U) < local_78[0].ArrayNum) {
      uVar15 = ~(local_78[0].ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                 *)(*pcVar8)();
      return pFVar14;
    }
    if (this->CurveEndSeconds <
        *(double *)
         (local_78[0].AllocatorInstance.Data + (longlong)(local_78[0].ArrayNum + -1) * 0x10)) {
      uVar15 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar15 = ~(iVar3 - 1U) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                   *)(*pcVar8)();
        return pFVar14;
      }
      dVar19 = this->CurveEndSeconds;
      fVar1 = *(float *)(pFVar7 + ((longlong)iVar3 * 7 + -7) * 4);
      uVar15 = 0;
      if ((int)(local_78[0].ArrayNum - 1U) < local_78[0].ArrayNum) {
        uVar15 = ~(local_78[0].ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                   *)(*pcVar8)();
        return pFVar14;
      }
      *(double *)(local_78[0].AllocatorInstance.Data + (longlong)(local_78[0].ArrayNum + -1) * 0x10)
           = dVar19;
      *(double *)
       (local_78[0].AllocatorInstance.Data + (longlong)(local_78[0].ArrayNum + -1) * 0x10 + 8) =
           (double)fVar1;
    }
  }
  if (this->bPreInfinityVisible != false) {
    if (this->bComplexPreInfinityExtrapolation == false) {
      DrawPreInfinityExtrapolationLine(this,local_78,param_7);
    }
    else {
      DrawPreInfinityExtrapolationComplex(this,local_78,param_7);
    }
  }
  if ((param_7 == local_78) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
               *)(*pcVar8)();
    return pFVar14;
  }
  lVar16 = (longlong)local_78[0].ArrayNum;
  if (local_78[0].ArrayNum != 0) {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,local_78[0].ArrayNum,&param_7->AllocatorInstance,&param_7->ArrayNum,
                        &param_7->ArrayMax);
    memcpy((param_7->AllocatorInstance).Data + (longlong)iVar13 * 0x10,
           local_78[0].AllocatorInstance.Data,lVar16 << 4);
  }
  if (this->bPostInfinityVisible != false) {
    if (this->bComplexPostInfinityExtrapolation == false) {
      DrawPostInfinityExtrapolationLine(this,local_78,param_7);
    }
    else {
      DrawPostInfinityExtrapolationComplex(this,local_78,param_7);
    }
  }
  if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].AllocatorInstance.Data);
  }
  return this;
}

// DrawPostInfinityExtrapolationComplex @ 1460be4a0

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
DrawPostInfinityExtrapolationComplex
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  uint local_b8;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar1 = *(double *)((param_1->AllocatorInstance).Data + 8);
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = param_1->ArrayNum - 1;
  dVar2 = *(double *)(param_1->AllocatorInstance).Data;
  uVar14 = 0;
  if ((int)uVar12 < param_1->ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = param_1->ArrayNum;
  dVar3 = *(double *)((param_1->AllocatorInstance).Data + ((longlong)iVar9 + -1) * 0x10 + 8);
  uVar14 = 0;
  if ((int)(iVar9 - 1U) < iVar9) {
    uVar14 = ~(iVar9 - 1U) >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar4 = this->CurveDurationSeconds;
  dVar5 = *(double *)
           ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x10 + -0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (this->PostInfinityExtrapolation == RCCE_CycleWithOffset) {
      dVar3 = dVar3 - dVar1;
    }
    else {
      dVar3 = 0.0;
    }
    local_b8 = 1;
    iVar9 = (int)((this->EndTimeSeconds - dVar5) / dVar4) + 1;
    if (0 < iVar9) {
      do {
        if ((this->PostInfinityExtrapolation == RCCE_Oscillate) && ((local_b8 & 1) != 0)) {
          uVar14 = param_1->ArrayNum - 1;
          if (-1 < (int)uVar14) {
            lVar13 = (longlong)(int)uVar14 << 4;
            do {
              uVar12 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar1 = this->CurveDurationSeconds;
              dVar4 = *(double *)((param_1->AllocatorInstance).Data + lVar13);
              uVar12 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar5 = *(double *)((param_1->AllocatorInstance).Data + lVar13 + 8);
              iVar10 = param_2->ArrayNum;
              if (iVar10 == param_2->ArrayMax) {
                iVar10 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar10 + 1;
              lVar13 = lVar13 + -0x10;
              pFVar16 = (param_2->AllocatorInstance).Data;
              uVar14 = uVar14 - 1;
              *(double *)(pFVar16 + (longlong)iVar10 * 0x10) =
                   ((dVar2 + dVar2 + dVar1) - dVar4) + dVar1 * (double)(int)local_b8;
              *(double *)(pFVar16 + (longlong)iVar10 * 0x10 + 8) =
                   dVar5 - dVar3 * (double)(int)local_b8;
            } while (-1 < (int)uVar14);
          }
        }
        else {
          iVar10 = param_1->ArrayNum;
          pFVar16 = (param_1->AllocatorInstance).Data;
          pFVar15 = pFVar16 + (longlong)iVar10 * 0x10;
          while( true ) {
            if (param_1->ArrayNum != iVar10) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<TTuple<double,double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar16 == pFVar15) break;
            iVar11 = param_2->ArrayNum;
            dVar1 = this->CurveDurationSeconds;
            dVar4 = *(double *)(pFVar16 + 8);
            dVar5 = *(double *)pFVar16;
            if (iVar11 == param_2->ArrayMax) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar11 + 1;
            pFVar6 = (param_2->AllocatorInstance).Data;
            pFVar16 = pFVar16 + 0x10;
            *(double *)(pFVar6 + (longlong)iVar11 * 0x10) = (double)(int)local_b8 * dVar1 + dVar5;
            *(double *)(pFVar6 + (longlong)iVar11 * 0x10 + 8) =
                 (double)(int)local_b8 * dVar3 + dVar4;
          }
        }
        local_b8 = local_b8 + 1;
      } while ((int)local_b8 <= iVar9);
    }
  }
  else {
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar16 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10) = dVar5;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10 + 8) = dVar3;
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar16 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10) = this->EndTimeSeconds;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10 + 8) = dVar3;
  }
  return;
}

// DrawPostInfinityExtrapolationComplex @ 1460be980

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
DrawPostInfinityExtrapolationComplex
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  uint local_b8;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar1 = *(double *)((param_1->AllocatorInstance).Data + 8);
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = param_1->ArrayNum - 1;
  dVar2 = *(double *)(param_1->AllocatorInstance).Data;
  uVar14 = 0;
  if ((int)uVar12 < param_1->ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = param_1->ArrayNum;
  dVar3 = *(double *)((param_1->AllocatorInstance).Data + ((longlong)iVar9 + -1) * 0x10 + 8);
  uVar14 = 0;
  if ((int)(iVar9 - 1U) < iVar9) {
    uVar14 = ~(iVar9 - 1U) >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar4 = this->CurveDurationSeconds;
  dVar5 = *(double *)
           ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x10 + -0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (this->PostInfinityExtrapolation == RCCE_CycleWithOffset) {
      dVar3 = dVar3 - dVar1;
    }
    else {
      dVar3 = 0.0;
    }
    local_b8 = 1;
    iVar9 = (int)((this->EndTimeSeconds - dVar5) / dVar4) + 1;
    if (0 < iVar9) {
      do {
        if ((this->PostInfinityExtrapolation == RCCE_Oscillate) && ((local_b8 & 1) != 0)) {
          uVar14 = param_1->ArrayNum - 1;
          if (-1 < (int)uVar14) {
            lVar13 = (longlong)(int)uVar14 << 4;
            do {
              uVar12 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar1 = this->CurveDurationSeconds;
              dVar4 = *(double *)((param_1->AllocatorInstance).Data + lVar13);
              uVar12 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar5 = *(double *)((param_1->AllocatorInstance).Data + lVar13 + 8);
              iVar10 = param_2->ArrayNum;
              if (iVar10 == param_2->ArrayMax) {
                iVar10 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar10 + 1;
              lVar13 = lVar13 + -0x10;
              pFVar16 = (param_2->AllocatorInstance).Data;
              uVar14 = uVar14 - 1;
              *(double *)(pFVar16 + (longlong)iVar10 * 0x10) =
                   ((dVar2 + dVar2 + dVar1) - dVar4) + dVar1 * (double)(int)local_b8;
              *(double *)(pFVar16 + (longlong)iVar10 * 0x10 + 8) =
                   dVar5 - dVar3 * (double)(int)local_b8;
            } while (-1 < (int)uVar14);
          }
        }
        else {
          iVar10 = param_1->ArrayNum;
          pFVar16 = (param_1->AllocatorInstance).Data;
          pFVar15 = pFVar16 + (longlong)iVar10 * 0x10;
          while( true ) {
            if (param_1->ArrayNum != iVar10) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<TTuple<double,double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar16 == pFVar15) break;
            iVar11 = param_2->ArrayNum;
            dVar1 = this->CurveDurationSeconds;
            dVar4 = *(double *)(pFVar16 + 8);
            dVar5 = *(double *)pFVar16;
            if (iVar11 == param_2->ArrayMax) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar11 + 1;
            pFVar6 = (param_2->AllocatorInstance).Data;
            pFVar16 = pFVar16 + 0x10;
            *(double *)(pFVar6 + (longlong)iVar11 * 0x10) = (double)(int)local_b8 * dVar1 + dVar5;
            *(double *)(pFVar6 + (longlong)iVar11 * 0x10 + 8) =
                 (double)(int)local_b8 * dVar3 + dVar4;
          }
        }
        local_b8 = local_b8 + 1;
      } while ((int)local_b8 <= iVar9);
    }
  }
  else {
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar16 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10) = dVar5;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10 + 8) = dVar3;
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar16 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10) = this->EndTimeSeconds;
    *(double *)(pFVar16 + (longlong)iVar9 * 0x10 + 8) = dVar3;
  }
  return;
}

// DrawPostInfinityExtrapolationLine @ 1460bee60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
DrawPostInfinityExtrapolationLine
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ERichCurveExtrapolation EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FFrameTime FVar6;
  bool bVar7;
  int iVar8;
  FFrameTime FVar9;
  FCachedInterpolation *this_00;
  uint uVar10;
  FFrameRate FVar11;
  uint uVar12;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 in_XMM0_Db;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  FFrameNumber local_c0;
  float fStack_bc;
  double local_b8 [2];
  FCachedInterpolation local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar8 = param_1->ArrayNum;
  uVar12 = iVar8 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar8) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  FVar11 = (FFrameRate)param_1;
  if (uVar10 == 0) {
    local_d8 = (longlong)(int)uVar12;
    FVar11.Numerator = 0x506109c0;
    FVar11.Denominator = 1;
    local_d0 = (longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Da = extraout_XMM0_Da;
    in_XMM0_Db = extraout_XMM0_Db;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = param_1->ArrayNum;
  lVar1 = (longlong)iVar8 + -1;
  uVar2 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar1 * 0x10 + 8);
  uVar13 = (undefined4)uVar2;
  uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar10 = 0;
  if ((int)(iVar8 - 1U) < iVar8) {
    uVar10 = ~(iVar8 - 1U) >> 0x1f;
  }
  if (uVar10 == 0) {
    FVar11.Numerator = 0x506109c0;
    FVar11.Denominator = 1;
    local_d8 = lVar1;
    local_d0 = (longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Da = extraout_XMM0_Da_00;
    in_XMM0_Db = extraout_XMM0_Db_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar3 = this->PostInfinityExtrapolation;
  if ((EVar3 == RCCE_None) || (EVar3 == RCCE_Constant)) {
    iVar8 = param_2->ArrayNum;
  }
  else {
    if (EVar3 != RCCE_Linear) {
      `UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
      DrawPostInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(local_c8);
      return;
    }
    FVar9 = ::operator*((double)CONCAT44(in_XMM0_Db,in_XMM0_Da),FVar11);
    local_c0.Value = *(int *)FVar9;
    if (*(float *)((longlong)FVar9 + 4) != 0.0) {
      local_c0.Value = local_c0.Value + 1;
    }
    fStack_bc = 0.0;
    FVar9.SubFrame = 0.0;
    FVar9.FrameNumber.Value = local_c0.Value;
    local_b8[0] = 0.0;
    this_00 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                        (&local_a8,this->Channel,(FTimeEvaluationCache *)0x0,FVar9);
    FVar6.SubFrame = fStack_bc;
    FVar6.FrameNumber.Value = local_c0.Value;
    bVar7 = Interpolation::FCachedInterpolation::Evaluate(this_00,FVar6,local_b8);
    iVar8 = param_2->ArrayNum;
    if (bVar7) {
      uVar13 = SUB84(local_b8[0],0);
      uVar14 = (undefined4)((ulonglong)local_b8[0] >> 0x20);
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar8;
      }
      goto LAB_1460bf003;
    }
  }
  if (iVar8 == param_2->ArrayMax) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
LAB_1460bf003:
  param_2->ArrayNum = iVar8 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x10) = this->EndTimeSeconds;
  *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = CONCAT44(uVar14,uVar13);
  return;
}

// DrawPostInfinityExtrapolationLine @ 1460bf050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
DrawPostInfinityExtrapolationLine
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ERichCurveExtrapolation EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FFrameTime FVar6;
  bool bVar7;
  int iVar8;
  FFrameTime FVar9;
  FCachedInterpolation *this_00;
  uint uVar10;
  FFrameRate FVar11;
  uint uVar12;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  float fVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  FFrameNumber local_c0;
  float fStack_bc;
  double local_b8 [2];
  FCachedInterpolation local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar8 = param_1->ArrayNum;
  uVar12 = iVar8 - 1;
  uVar10 = 0;
  if ((int)uVar12 < iVar8) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  FVar11 = (FFrameRate)param_1;
  if (uVar10 == 0) {
    local_d8 = (longlong)(int)uVar12;
    FVar11.Numerator = 0x506109c0;
    FVar11.Denominator = 1;
    local_d0 = (longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Qa = extraout_XMM0_Qa;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = param_1->ArrayNum;
  lVar1 = (longlong)iVar8 + -1;
  uVar2 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar1 * 0x10 + 8);
  uVar10 = 0;
  if ((int)(iVar8 - 1U) < iVar8) {
    uVar10 = ~(iVar8 - 1U) >> 0x1f;
  }
  if (uVar10 == 0) {
    FVar11.Numerator = 0x506109c0;
    FVar11.Denominator = 1;
    local_d8 = lVar1;
    local_d0 = (longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Qa = extraout_XMM0_Qa_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar3 = this->PostInfinityExtrapolation;
  if ((EVar3 == RCCE_None) || (EVar3 == RCCE_Constant)) {
    iVar8 = param_2->ArrayNum;
  }
  else {
    if (EVar3 != RCCE_Linear) {
      `UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
      DrawPostInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(local_c8);
      return;
    }
    FVar9 = ::operator*(in_XMM0_Qa,FVar11);
    local_c0.Value = *(int *)FVar9;
    if (*(float *)((longlong)FVar9 + 4) != 0.0) {
      local_c0.Value = local_c0.Value + 1;
    }
    fStack_bc = 0.0;
    FVar9.SubFrame = 0.0;
    FVar9.FrameNumber.Value = local_c0.Value;
    local_b8[0] = 0.0;
    this_00 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
                        (&local_a8,this->Channel,(FTimeEvaluationCache *)0x0,FVar9);
    FVar6.SubFrame = fStack_bc;
    FVar6.FrameNumber.Value = local_c0.Value;
    bVar7 = Interpolation::FCachedInterpolation::Evaluate(this_00,FVar6,local_b8);
    iVar8 = param_2->ArrayNum;
    if (bVar7) {
      fVar13 = (float)local_b8[0];
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar8;
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data;
      *(double *)(pFVar4 + (longlong)iVar8 * 0x10) = this->EndTimeSeconds;
      *(double *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = (double)fVar13;
      return;
    }
  }
  if (iVar8 == param_2->ArrayMax) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar8 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x10) = this->EndTimeSeconds;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = uVar2;
  return;
}

// DrawPreInfinityExtrapolationComplex @ 1460bf260

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
DrawPreInfinityExtrapolationComplex
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar1 = *(double *)((param_1->AllocatorInstance).Data + 8);
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = param_1->ArrayNum - 1;
  dVar2 = *(double *)(param_1->AllocatorInstance).Data;
  uVar16 = 0;
  if ((int)uVar12 < param_1->ArrayNum) {
    uVar16 = ~uVar12 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = param_1->ArrayNum;
  dVar3 = *(double *)((param_1->AllocatorInstance).Data + ((longlong)iVar9 + -1) * 0x10 + 8);
  uVar16 = 0;
  if ((int)(iVar9 - 1U) < iVar9) {
    uVar16 = ~(iVar9 - 1U) >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar4 = this->CurveDurationSeconds;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (this->PreInfinityExtrapolation == RCCE_CycleWithOffset) {
      dVar3 = dVar3 - dVar1;
    }
    else {
      dVar3 = 0.0;
    }
    for (uVar16 = (int)((dVar2 - this->StartTimeSeconds) / dVar4) + 1; 0 < (int)uVar16;
        uVar16 = uVar16 - 1) {
      if ((this->PreInfinityExtrapolation == RCCE_Oscillate) && ((uVar16 & 1) != 0)) {
        uVar12 = param_1->ArrayNum - 1;
        if (-1 < (int)uVar12) {
          lVar13 = (longlong)(int)uVar12 << 4;
          do {
            uVar10 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar1 = this->CurveDurationSeconds;
            dVar4 = *(double *)((param_1->AllocatorInstance).Data + lVar13);
            uVar10 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar5 = *(double *)((param_1->AllocatorInstance).Data + lVar13 + 8);
            iVar9 = param_2->ArrayNum;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar9 + 1;
            lVar13 = lVar13 + -0x10;
            pFVar15 = (param_2->AllocatorInstance).Data;
            uVar12 = uVar12 - 1;
            *(double *)(pFVar15 + (longlong)iVar9 * 0x10) =
                 ((dVar2 + dVar2 + dVar1) - dVar4) - dVar1 * (double)(int)uVar16;
            *(double *)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = dVar5 - dVar3 * (double)(int)uVar16;
          } while (-1 < (int)uVar12);
        }
      }
      else {
        iVar9 = param_1->ArrayNum;
        pFVar15 = (param_1->AllocatorInstance).Data;
        pFVar14 = pFVar15 + (longlong)iVar9 * 0x10;
        while( true ) {
          if (param_1->ArrayNum != iVar9) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TTuple<double,double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar15 == pFVar14) break;
          dVar1 = *(double *)pFVar15;
          dVar4 = *(double *)(pFVar15 + 8);
          iVar11 = param_2->ArrayNum;
          dVar5 = this->CurveDurationSeconds;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          pFVar6 = (param_2->AllocatorInstance).Data;
          pFVar15 = pFVar15 + 0x10;
          *(double *)(pFVar6 + (longlong)iVar11 * 0x10) = dVar1 - (double)(int)uVar16 * dVar5;
          *(double *)(pFVar6 + (longlong)iVar11 * 0x10 + 8) = dVar4 - (double)(int)uVar16 * dVar3;
        }
      }
    }
  }
  else {
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar15 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10) = this->StartTimeSeconds;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = dVar1;
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar15 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10) = dVar2;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = dVar1;
  }
  return;
}

// DrawPreInfinityExtrapolationComplex @ 1460bf730

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
DrawPreInfinityExtrapolationComplex
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar1 = *(double *)((param_1->AllocatorInstance).Data + 8);
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = param_1->ArrayNum - 1;
  dVar2 = *(double *)(param_1->AllocatorInstance).Data;
  uVar16 = 0;
  if ((int)uVar12 < param_1->ArrayNum) {
    uVar16 = ~uVar12 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = param_1->ArrayNum;
  dVar3 = *(double *)((param_1->AllocatorInstance).Data + ((longlong)iVar9 + -1) * 0x10 + 8);
  uVar16 = 0;
  if ((int)(iVar9 - 1U) < iVar9) {
    uVar16 = ~(iVar9 - 1U) >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar4 = this->CurveDurationSeconds;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (this->PreInfinityExtrapolation == RCCE_CycleWithOffset) {
      dVar3 = dVar3 - dVar1;
    }
    else {
      dVar3 = 0.0;
    }
    for (uVar16 = (int)((dVar2 - this->StartTimeSeconds) / dVar4) + 1; 0 < (int)uVar16;
        uVar16 = uVar16 - 1) {
      if ((this->PreInfinityExtrapolation == RCCE_Oscillate) && ((uVar16 & 1) != 0)) {
        uVar12 = param_1->ArrayNum - 1;
        if (-1 < (int)uVar12) {
          lVar13 = (longlong)(int)uVar12 << 4;
          do {
            uVar10 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar1 = this->CurveDurationSeconds;
            dVar4 = *(double *)((param_1->AllocatorInstance).Data + lVar13);
            uVar10 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar5 = *(double *)((param_1->AllocatorInstance).Data + lVar13 + 8);
            iVar9 = param_2->ArrayNum;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar9 + 1;
            lVar13 = lVar13 + -0x10;
            pFVar15 = (param_2->AllocatorInstance).Data;
            uVar12 = uVar12 - 1;
            *(double *)(pFVar15 + (longlong)iVar9 * 0x10) =
                 ((dVar2 + dVar2 + dVar1) - dVar4) - dVar1 * (double)(int)uVar16;
            *(double *)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = dVar5 - dVar3 * (double)(int)uVar16;
          } while (-1 < (int)uVar12);
        }
      }
      else {
        iVar9 = param_1->ArrayNum;
        pFVar15 = (param_1->AllocatorInstance).Data;
        pFVar14 = pFVar15 + (longlong)iVar9 * 0x10;
        while( true ) {
          if (param_1->ArrayNum != iVar9) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TTuple<double,double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar15 == pFVar14) break;
          dVar1 = *(double *)pFVar15;
          dVar4 = *(double *)(pFVar15 + 8);
          iVar11 = param_2->ArrayNum;
          dVar5 = this->CurveDurationSeconds;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          pFVar6 = (param_2->AllocatorInstance).Data;
          pFVar15 = pFVar15 + 0x10;
          *(double *)(pFVar6 + (longlong)iVar11 * 0x10) = dVar1 - (double)(int)uVar16 * dVar5;
          *(double *)(pFVar6 + (longlong)iVar11 * 0x10 + 8) = dVar4 - (double)(int)uVar16 * dVar3;
        }
      }
    }
  }
  else {
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar15 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10) = this->StartTimeSeconds;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = dVar1;
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar15 = (param_2->AllocatorInstance).Data;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10) = dVar2;
    *(double *)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = dVar1;
  }
  return;
}

// DrawPreInfinityExtrapolationLine @ 1460bfc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
DrawPreInfinityExtrapolationLine
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  ERichCurveExtrapolation EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  int iVar7;
  FFrameTime FVar8;
  FCachedInterpolation *this_00;
  FFrameRate FVar9;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  FFrameNumber local_b0;
  float fStack_ac;
  double local_a8 [2];
  FCachedInterpolation local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar9 = (FFrameRate)param_1;
  if (param_1->ArrayNum < 1) {
    local_c8 = 0;
    FVar9.Numerator = 0x506109c0;
    FVar9.Denominator = 1;
    local_c0 = (longlong)param_1->ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Qa = extraout_XMM0_Qa;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(undefined8 *)((param_1->AllocatorInstance).Data + 8);
  uVar10 = (undefined4)uVar1;
  uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (param_1->ArrayNum < 1) {
    local_c8 = 0;
    FVar9.Numerator = 0x506109c0;
    FVar9.Denominator = 1;
    local_c0 = (longlong)param_1->ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Qa = extraout_XMM0_Qa_00;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreInfinityExtrapolation;
  if ((EVar2 == RCCE_None) || (EVar2 == RCCE_Constant)) {
    iVar7 = param_2->ArrayNum;
  }
  else {
    if (EVar2 != RCCE_Linear) {
      `UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
      DrawPreInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(local_b8);
      return;
    }
    FVar8 = ::operator*(in_XMM0_Qa,FVar9);
    fStack_ac = 0.0;
    local_a8[0] = 0.0;
    local_b0.Value = *(int *)FVar8;
    FVar8.SubFrame = 0.0;
    FVar8.FrameNumber.Value = local_b0.Value;
    this_00 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                        (&local_98,this->Channel,(FTimeEvaluationCache *)0x0,FVar8);
    FVar5.SubFrame = fStack_ac;
    FVar5.FrameNumber.Value = local_b0.Value;
    bVar6 = Interpolation::FCachedInterpolation::Evaluate(this_00,FVar5,local_a8);
    iVar7 = param_2->ArrayNum;
    if (bVar6) {
      uVar10 = SUB84(local_a8[0],0);
      uVar11 = (undefined4)((ulonglong)local_a8[0] >> 0x20);
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar7;
      }
      goto LAB_1460bfd66;
    }
  }
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
LAB_1460bfd66:
  param_2->ArrayNum = iVar7 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar3 + (longlong)iVar7 * 0x10) = this->StartTimeSeconds;
  *(ulonglong *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uVar11,uVar10);
  return;
}

// DrawPreInfinityExtrapolationLine @ 1460bfdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
DrawPreInfinityExtrapolationLine
          (FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
           *this,TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  ERichCurveExtrapolation EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  int iVar7;
  FFrameTime FVar8;
  FCachedInterpolation *this_00;
  FFrameRate FVar9;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  float fVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  FFrameNumber local_b0;
  float fStack_ac;
  double local_a8 [2];
  FCachedInterpolation local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar9 = (FFrameRate)param_1;
  if (param_1->ArrayNum < 1) {
    local_c8 = 0;
    FVar9.Numerator = 0x506109c0;
    FVar9.Denominator = 1;
    local_c0 = (longlong)param_1->ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Qa = extraout_XMM0_Qa;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(undefined8 *)((param_1->AllocatorInstance).Data + 8);
  if (param_1->ArrayNum < 1) {
    local_c8 = 0;
    FVar9.Numerator = 0x506109c0;
    FVar9.Denominator = 1;
    local_c0 = (longlong)param_1->ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0_Qa = extraout_XMM0_Qa_00;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = this->PreInfinityExtrapolation;
  if ((EVar2 == RCCE_None) || (EVar2 == RCCE_Constant)) {
    iVar7 = param_2->ArrayNum;
  }
  else {
    if (EVar2 != RCCE_Linear) {
      `UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
      DrawPreInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(local_b8);
      return;
    }
    FVar8 = ::operator*(in_XMM0_Qa,FVar9);
    fStack_ac = 0.0;
    local_a8[0] = 0.0;
    local_b0.Value = *(int *)FVar8;
    FVar8.SubFrame = 0.0;
    FVar8.FrameNumber.Value = local_b0.Value;
    this_00 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
                        (&local_98,this->Channel,(FTimeEvaluationCache *)0x0,FVar8);
    FVar5.SubFrame = fStack_ac;
    FVar5.FrameNumber.Value = local_b0.Value;
    bVar6 = Interpolation::FCachedInterpolation::Evaluate(this_00,FVar5,local_a8);
    iVar7 = param_2->ArrayNum;
    if (bVar6) {
      fVar10 = (float)local_a8[0];
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar7;
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar3 = (param_2->AllocatorInstance).Data;
      *(double *)(pFVar3 + (longlong)iVar7 * 0x10) = this->StartTimeSeconds;
      *(double *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = (double)fVar10;
      return;
    }
  }
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar3 + (longlong)iVar7 * 0x10) = this->StartTimeSeconds;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar1;
  return;
}

// operator() @ 1504e2ca0

bool __thiscall
`UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
DrawPostInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7113705412687299173>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7113705412687299173>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::Private::FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::DrawPostInfinityExtrapolationLine(TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TTuple<double,double>,class_TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2ce0

bool __thiscall
`UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
DrawPostInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7113705412687299173>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7113705412687299173>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::Private::FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::DrawPostInfinityExtrapolationLine(TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TTuple<double,double>,class_TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2d20

bool __thiscall
`UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
DrawPreInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7113705412687299086>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7113705412687299086>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::Private::FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::DrawPreInfinityExtrapolationLine(TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TTuple<double,double>,class_TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2d60

bool __thiscall
`UE::MovieScene::Private::
FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
DrawPreInfinityExtrapolationLine'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7113705412687299086>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7113705412687299086>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::Private::FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::DrawPreInfinityExtrapolationLine(TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_TTuple<double,double>,class_TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

