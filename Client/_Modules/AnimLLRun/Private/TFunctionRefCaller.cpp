// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimLLRun
// Functions: 3

// Call @ 14a733e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  FAnimationUpdateContext *pFVar7;
  UAnimSequenceBase *pUVar8;
  UClass *pUVar9;
  FStaticBasicLogRecord *pFVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float afStackX_8 [2];
  
  pFVar7 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (pFVar7 == (FAnimationUpdateContext *)0x0) {
    if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary)
    ;
    return;
  }
  fVar1 = pFVar7->DeltaTime;
  if (fVar1 <= 0.0) {
    return;
  }
  if (*(float *)((longlong)param_1 + 8) <= 0.0) {
    return;
  }
  pUVar8 = (UAnimSequenceBase *)(**(code **)(*(longlong *)param_2 + 0x170))(param_2);
  if (pUVar8 != (UAnimSequenceBase *)0x0) {
    pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar4 = (int)pUVar9->_padding_;
    if ((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar9->_padding_)) {
      fVar11 = (float)(**(code **)(*(longlong *)param_2 + 0x178))(param_2);
      fVar12 = (float)(**(code **)(*(longlong *)param_2 + 0xb8))(param_2);
      bVar5 = (bool)(**(code **)(*(longlong *)param_2 + 0xd0))(param_2);
      fVar13 = Anim::DistanceMatchingUtility::GetTimeAfterDistanceTraveled
                         (pUVar8,fVar11,*(float *)((longlong)param_1 + 8),
                          *(FName *)((longlong)param_1 + 0xc),bVar5);
      if (fVar13 < fVar11) {
        fVar13 = fVar13 + fVar12;
      }
      dVar2 = *(double *)((longlong)param_1 + 0x18);
      fVar13 = (fVar13 - fVar11) / fVar1;
      if ((0.0 <= dVar2) && (dVar3 = *(double *)((longlong)param_1 + 0x20), dVar2 < dVar3)) {
        dVar14 = (double)fVar13;
        if (dVar3 <= (double)fVar13) {
          dVar14 = dVar3;
        }
        if (dVar14 <= dVar2) {
          dVar14 = dVar2;
        }
        fVar13 = (float)dVar14;
      }
      afStackX_8[0] = fVar11;
      FAnimationRuntime::AdvanceTime(bVar5,fVar13 * fVar1,afStackX_8,fVar12);
      cVar6 = (**(code **)(*(longlong *)param_2 + 0x158))(param_2,afStackX_8[0]);
      if (cVar6 != '\0') {
        return;
      }
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return;
      }
      pFVar10 = &::LOG_Static;
      goto LAB_14a73373c;
    }
  }
  if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
    return;
  }
  pFVar10 = &::LOG_Static;
LAB_14a73373c:
  Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
  return;
}

// Call @ 14a733e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimDistanceMatchingLibrary::DistanceMatchToTarget'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  UAnimSequenceBase *pUVar4;
  UClass *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FAnimCurveBufferAccess aFStack_48 [2];
  
  pUVar4 = (UAnimSequenceBase *)(**(code **)(*(longlong *)param_2 + 0x170))(param_2);
  if (pUVar4 != (UAnimSequenceBase *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) {
      fVar10 = (float)(*(uint *)param_1 ^ __xmm_80000000800000008000000080000000);
      FAnimCurveBufferAccess::FAnimCurveBufferAccess
                (aFStack_48,pUVar4,*(FName *)((longlong)param_1 + 4));
      if ((aFStack_48[0].CompressedBuffer == (float *)0x0) &&
         (aFStack_48[0].RawCurve == (FFloatCurve *)0x0)) {
        fVar8 = 0.0;
      }
      else if (aFStack_48[0].NumSamples < 2) {
        fVar8 = 0.0;
      }
      else {
        iVar7 = 1;
        iVar3 = aFStack_48[0].NumSamples + -2;
        while (iVar1 = iVar3, 0 < iVar1) {
          iVar3 = iVar1 / 2;
          fVar9 = FAnimCurveBufferAccess::GetValue(aFStack_48,iVar3 + iVar7);
          if (fVar9 < fVar10) {
            iVar7 = iVar3 + iVar7 + 1;
            iVar3 = iVar1 + (-1 - iVar3);
          }
        }
        fVar9 = FAnimCurveBufferAccess::GetValue(aFStack_48,iVar7 + -1);
        fVar8 = FAnimCurveBufferAccess::GetValue(aFStack_48,iVar7);
        if ((float)((uint)(fVar8 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_322bcc77) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (fVar10 - fVar9) / (fVar8 - fVar9);
        }
        fVar8 = FAnimCurveBufferAccess::GetTime(aFStack_48,iVar7 + -1);
        fVar9 = FAnimCurveBufferAccess::GetTime(aFStack_48,iVar7);
        fVar8 = (fVar9 - fVar8) * fVar10 + fVar8;
      }
      cVar2 = (**(code **)(*(longlong *)param_2 + 0x158))(param_2,fVar8);
      if (cVar2 != '\0') {
        return;
      }
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return;
      }
      pFVar6 = &::LOG_Static;
      goto LAB_14a733952;
    }
  }
  if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
    return;
  }
  pFVar6 = &::LOG_Static;
LAB_14a733952:
  Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
  return;
}

// Call @ 14a733e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  UAnimSequence *this;
  UClass *pUVar5;
  TTransform<double> *pTVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStackY_158 [32];
  FName FStack_128;
  undefined4 uStack_120;
  FString FStack_118;
  double dStack_108;
  FAnimExtractContext FStack_100;
  TTransform<double> TStack_b8;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = (UAnimSequence *)(**(code **)(param_2->_padding_ + 0x148))(param_2);
  if (this != (UAnimSequence *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar5->_padding_)) {
      uVar8 = (**(code **)(this->_padding_ + 0x2c0))(this);
      fVar7 = (float)uVar8;
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
        if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
          return;
        }
        FStack_128 = (FName)this->_padding_;
        ::FName::ToString(&FStack_128,&FStack_118);
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
        if (FStack_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
        return;
      }
      FStack_128.ComparisonIndex.Value = 0;
      FStack_128.Number = 0;
      uStack_120 = 0;
      FStack_100.bExtractRootMotion = false;
      FStack_100.DeltaTimeRecord.bPreviousIsValid = false;
      FStack_100.DeltaTimeRecord._9_2_ = 0;
      FStack_100.DeltaTimeRecord._11_1_ = 0;
      FStack_100.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_100.PoseCurves.ArrayNum = 0;
      FStack_100.PoseCurves.ArrayMax = 0;
      FStack_100.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_100.BonesRequired.ArrayNum = 0;
      FStack_100.BonesRequired.ArrayMax = 0;
      FStack_100.InterpolationOverride.bIsSet = false;
      FStack_100.bLooping = false;
      FStack_100.CurrentTime = 0.0;
      FStack_100.DeltaTimeRecord.Delta = 0.0;
      FStack_100.DeltaTimeRecord.Previous = 0.0;
      pTVar6 = UAnimSequence::ExtractRootMotionFromRange
                         (this,&TStack_b8,0.0,(double)fVar7,&FStack_100);
      dStack_108 = (pTVar6->Translation).ZW.m128d_f64[0];
      dVar1 = (pTVar6->Translation).XY.m128d_f64[0];
      dVar2 = (pTVar6->Translation).XY.m128d_f64[1];
      if (FStack_100.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.BonesRequired.AllocatorInstance.Data);
      }
      if (FStack_100.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.PoseCurves.AllocatorInstance.Data);
      }
      fVar10 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2);
      if (__real_322bcc77 < fVar10) {
        fVar10 = (fVar7 * *(float *)param_1) / fVar10;
        dVar1 = *(double *)((longlong)param_1 + 8);
        if ((0.0 <= dVar1) && (dVar2 = *(double *)((longlong)param_1 + 0x10), dVar1 < dVar2)) {
          dVar9 = (double)fVar10;
          if (dVar2 <= (double)fVar10) {
            dVar9 = dVar2;
          }
          if (dVar9 <= dVar1) {
            dVar9 = dVar1;
          }
          fVar10 = (float)dVar9;
          uVar11 = 0;
        }
        cVar4 = (**(code **)(param_2->_padding_ + 0x198))(param_2,CONCAT44(uVar11,fVar10));
        if (cVar4 != '\0') {
          return;
        }
        if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
          return;
        }
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
        return;
      }
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return;
      }
      FStack_128 = (FName)this->_padding_;
      ::FName::ToString(&FStack_128,&FStack_118);
      Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
      if (FStack_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
      return;
    }
  }
  if (2 < (byte)LogAnimDistanceMatchingLibrary._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary)
    ;
  }
  return;
}

