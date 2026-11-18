// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 4

// InitTrajectorySamples @ 14a94ba80

void __cdecl
FMotionTrajectoryLibrary::InitTrajectorySamples
          (FTransformTrajectory *param_1,FTrajectorySamplingData *param_2,TVector<double> *param_3,
          TQuat<double> *param_4)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  piVar1 = &(param_1->Samples).ArrayNum;
  uVar12 = param_2->NumHistorySamples + 1 + param_2->NumPredictionSamples;
  iVar10 = *piVar1;
  if (iVar10 < (int)uVar12) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar12 - iVar10,(ForAnyElementType *)param_1,piVar1,
               &(param_1->Samples).ArrayMax);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar10) {
      uVar15 = iVar10 - uVar12;
      if ((int)(uVar15 | uVar12) < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar11 = (param_1->Samples).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x40;
        iVar10 = (*piVar1 - uVar15) - uVar12;
        if (iVar10 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar15 * 0x40,(longlong)iVar10 << 6);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,(ForAnyElementType *)param_1,*piVar1,&(param_1->Samples).ArrayMax);
      }
    }
  }
  uVar12 = param_2->NumHistorySamples;
  uVar15 = 0;
  if (0 < (int)uVar12) {
    lVar14 = 0;
    do {
      dVar6 = (param_3->field0_0x0)._s_0.X;
      dVar7 = (param_3->field0_0x0)._s_0.Y;
      dVar3 = (param_3->field0_0x0)._s_0.Z;
      uVar13 = ~uVar15 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar12 = uVar13;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (param_1->Samples).AllocatorInstance.Data;
      pFVar11 = pFVar4 + lVar14 + 0x20;
      *(double *)pFVar11 = dVar6;
      *(double *)(pFVar11 + 8) = dVar7;
      *(double *)(pFVar4 + lVar14 + 0x30) = dVar3;
      dVar3 = param_4->X;
      dVar6 = param_4->Y;
      dVar7 = param_4->Z;
      dVar8 = param_4->W;
      uVar12 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar12 = uVar13;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (param_1->Samples).AllocatorInstance.Data;
      pFVar11 = pFVar4 + lVar14;
      *(double *)pFVar11 = dVar3;
      *(double *)(pFVar11 + 8) = dVar6;
      pFVar4 = pFVar4 + lVar14 + 0x10;
      *(double *)pFVar4 = dVar7;
      *(double *)(pFVar4 + 8) = dVar8;
      iVar10 = uVar15 - param_2->NumHistorySamples;
      uVar12 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar12 = uVar13;
      }
      fVar2 = param_2->SecondsPerHistorySample;
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar15 = uVar15 + 1;
      *(float *)((param_1->Samples).AllocatorInstance.Data + lVar14 + 0x38) = (float)iVar10 * fVar2;
      lVar14 = lVar14 + 0x40;
      uVar12 = param_2->NumHistorySamples;
    } while ((int)uVar15 < (int)uVar12);
  }
  iVar10 = *piVar1;
  if ((int)uVar12 < iVar10) {
    lVar14 = (longlong)(int)uVar12 << 6;
    do {
      dVar6 = (param_3->field0_0x0)._s_0.X;
      dVar7 = (param_3->field0_0x0)._s_0.Y;
      dVar3 = (param_3->field0_0x0)._s_0.Z;
      uVar13 = ~uVar12 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar12 < iVar10) {
        uVar15 = uVar13;
      }
      if (uVar15 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (param_1->Samples).AllocatorInstance.Data;
      pFVar11 = pFVar4 + lVar14 + 0x20;
      *(double *)pFVar11 = dVar6;
      *(double *)(pFVar11 + 8) = dVar7;
      *(double *)(pFVar4 + lVar14 + 0x30) = dVar3;
      dVar3 = param_4->X;
      dVar6 = param_4->Y;
      dVar7 = param_4->Z;
      dVar8 = param_4->W;
      uVar15 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar15 = uVar13;
      }
      if (uVar15 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (param_1->Samples).AllocatorInstance.Data;
      pFVar11 = pFVar4 + lVar14;
      *(double *)pFVar11 = dVar3;
      *(double *)(pFVar11 + 8) = dVar6;
      pFVar4 = pFVar4 + lVar14 + 0x10;
      *(double *)pFVar4 = dVar7;
      *(double *)(pFVar4 + 8) = dVar8;
      iVar10 = uVar12 - param_2->NumHistorySamples;
      uVar15 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar15 = uVar13;
      }
      fVar2 = param_2->SecondsPerPredictionSample;
      if (uVar15 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar12 = uVar12 + 1;
      *(float *)((param_1->Samples).AllocatorInstance.Data + lVar14 + 0x38) = (float)iVar10 * fVar2;
      lVar14 = lVar14 + 0x40;
      iVar10 = *piVar1;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// RemapVectorMagnitudeWithCurve @ 14a94c2e0

TVector<double> * __cdecl
FMotionTrajectoryLibrary::RemapVectorMagnitudeWithCurve
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,bool param_2,
          FRuntimeFloatCurve *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FRichCurve *this;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  
  if (param_2) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar7 = (param_1->field0_0x0)._s_0.Z;
    auVar5._0_8_ = dVar1 * dVar1;
    auVar5._8_8_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_ + dVar7 * dVar7;
    auVar6 = sqrtpd(auVar5,auVar6);
    fVar8 = (float)auVar6._0_8_;
    if (__real_38d1b717 < fVar8) {
      this = FRuntimeFloatCurve::GetRichCurveConst(param_3);
      fVar4 = FRichCurve::Eval(this,fVar8,0.0);
      dVar7 = (double)(fVar4 / fVar8);
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar1 = dVar7 * (param_1->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7 * (param_1->field0_0x0)._s_0.Z;
      auVar3._8_4_ = SUB84(dVar1,0);
      auVar3._0_8_ = dVar7 * dVar2;
      auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// UpdateHistory_TransformHistory @ 14a94ce70

void __cdecl
FMotionTrajectoryLibrary::UpdateHistory_TransformHistory
          (FTransformTrajectory *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FCharacterTrajectoryData *param_3,FTrajectorySamplingData *param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  bool bVar19;
  TVector<double> *pTVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong local_res10;
  
  fVar18 = param_5;
  if (((param_1->Samples).ArrayNum < param_4->NumHistorySamples) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SamplingData.NumHistorySamples <= Trajectory.Samples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                          ,0xb6,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_2->ArrayNum != param_4->NumHistorySamples) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("TranslationHistory.Num() == SamplingData.NumHistorySamples",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                          ,0xb7,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar11 = (double)param_5;
  dVar12 = dVar11 * (param_3->Velocity).field0_0x0._s_0.Z;
  dVar13 = dVar11 * (param_3->Velocity).field0_0x0._s_0.X;
  dVar11 = dVar11 * (param_3->Velocity).field0_0x0._s_0.Y;
  if (0 < param_4->NumHistorySamples) {
    uVar22 = param_4->NumHistorySamples - 1;
    uVar23 = 0;
    if ((int)uVar22 < (param_1->Samples).ArrayNum) {
      uVar23 = ~uVar22 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar21 = param_4->NumHistorySamples;
    if ((float)(*(uint *)((param_1->Samples).AllocatorInstance.Data +
                         (longlong)(int)uVar22 * 0x40 + 0x38) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) < param_4->SecondsPerHistorySample) {
      uVar23 = 0;
      if (0 < iVar21) {
        lVar27 = 0;
        do {
          uVar22 = 0;
          if ((int)uVar23 < param_2->ArrayNum) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar20 = param_2->DataPtr;
          uVar23 = uVar23 + 1;
          *(double *)((longlong)&pTVar20->field0_0x0 + lVar27) =
               dVar13 + *(double *)((longlong)&pTVar20->field0_0x0 + lVar27);
          *(double *)((longlong)&pTVar20->field0_0x0 + lVar27 + 8) =
               dVar11 + *(double *)((longlong)&pTVar20->field0_0x0 + lVar27 + 8);
          *(double *)((longlong)&pTVar20->field0_0x0 + lVar27 + 0x10) =
               dVar12 + *(double *)((longlong)&pTVar20->field0_0x0 + lVar27 + 0x10);
          lVar27 = lVar27 + 0x18;
        } while ((int)uVar23 < param_4->NumHistorySamples);
      }
    }
    else {
      if (0 < iVar21 + -1) {
        local_res10 = 0;
        lVar27 = 0;
        param_5 = 1.4013e-45;
        uVar23 = 0;
        do {
          uVar24 = uVar23 + 1;
          uVar26 = ~uVar24 >> 0x1f;
          uVar22 = 0;
          if ((int)param_5 < (param_1->Samples).ArrayNum) {
            uVar22 = uVar26;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar25 = ~uVar23 >> 0x1f;
          uVar3 = *(undefined4 *)((param_1->Samples).AllocatorInstance.Data + local_res10 + 0x78);
          uVar22 = 0;
          if ((int)uVar23 < (param_1->Samples).ArrayNum) {
            uVar22 = uVar25;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar21 = param_2->ArrayNum;
          *(undefined4 *)((param_1->Samples).AllocatorInstance.Data + local_res10 + 0x38) = uVar3;
          uVar22 = 0;
          if ((int)uVar24 < iVar21) {
            uVar22 = uVar26;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar20 = param_2->DataPtr;
          dVar4 = *(double *)((longlong)&pTVar20[1].field0_0x0 + lVar27);
          dVar5 = *(double *)((longlong)&pTVar20[1].field0_0x0 + lVar27 + 8);
          dVar6 = *(double *)((longlong)&pTVar20[1].field0_0x0 + lVar27 + 0x10);
          uVar22 = 0;
          if ((int)uVar23 < param_2->ArrayNum) {
            uVar22 = uVar25;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar20 = param_2->DataPtr;
          *(double *)((longlong)&pTVar20->field0_0x0 + lVar27) = dVar13 + dVar4;
          *(double *)((longlong)&pTVar20->field0_0x0 + lVar27 + 8) = dVar11 + dVar5;
          *(double *)((longlong)&pTVar20->field0_0x0 + lVar27 + 0x10) = dVar12 + dVar6;
          uVar22 = 0;
          if ((int)uVar24 < (param_1->Samples).ArrayNum) {
            uVar22 = uVar26;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_1->Samples).AllocatorInstance.Data;
          pFVar1 = pFVar7 + local_res10 + 0x40;
          uVar14 = *(undefined8 *)pFVar1;
          uVar15 = *(undefined8 *)(pFVar1 + 8);
          pFVar7 = pFVar7 + local_res10 + 0x50;
          uVar16 = *(undefined8 *)pFVar7;
          uVar17 = *(undefined8 *)(pFVar7 + 8);
          uVar22 = 0;
          if ((int)uVar23 < (param_1->Samples).ArrayNum) {
            uVar22 = uVar25;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_1->Samples).AllocatorInstance.Data;
          lVar27 = lVar27 + 0x18;
          param_5 = (float)((int)param_5 + 1);
          pFVar1 = pFVar7 + local_res10;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          pFVar7 = pFVar7 + local_res10 + 0x10;
          *(undefined8 *)pFVar7 = uVar16;
          *(undefined8 *)(pFVar7 + 8) = uVar17;
          iVar21 = param_4->NumHistorySamples;
          uVar23 = uVar24;
          local_res10 = local_res10 + 0x40;
        } while ((int)uVar24 < iVar21 + -1);
      }
      uVar23 = iVar21 - 1;
      uVar22 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)
       ((param_1->Samples).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x40 + 0x38) = 0;
      pTVar20 = TArrayView<UE::Math::TVector<double>,int>::operator[]
                          (param_2,param_4->NumHistorySamples + -1);
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar13;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])&pTVar20->field0_0x0 = auVar9;
      (pTVar20->field0_0x0)._s_0.Z = dVar12;
      uVar22 = param_4->NumHistorySamples - 1;
      dVar11 = (param_3->Facing).X;
      dVar12 = (param_3->Facing).Y;
      dVar13 = (param_3->Facing).Z;
      dVar4 = (param_3->Facing).W;
      uVar23 = 0;
      if ((int)uVar22 < (param_1->Samples).ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->Samples).AllocatorInstance.Data;
      pFVar1 = pFVar7 + (longlong)(int)uVar22 * 0x40;
      *(double *)pFVar1 = dVar11;
      *(double *)(pFVar1 + 8) = dVar12;
      pFVar7 = pFVar7 + (longlong)(int)uVar22 * 0x40 + 0x10;
      *(double *)pFVar7 = dVar13;
      *(double *)(pFVar7 + 8) = dVar4;
    }
  }
  uVar23 = 0;
  if (0 < param_4->NumHistorySamples) {
    lVar27 = 0;
    lVar28 = 0;
    do {
      uVar24 = ~uVar23 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      iVar21 = param_2->ArrayNum;
      *(float *)(pFVar1 + lVar27 + 0x38) = *(float *)(pFVar1 + lVar27 + 0x38) - fVar18;
      uVar22 = 0;
      if ((int)uVar23 < iVar21) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pdVar2 = (double *)((longlong)&param_2->DataPtr->field0_0x0 + lVar28 + 8);
      dVar4 = *pdVar2;
      dVar11 = (param_3->Position).field0_0x0._s_0.X;
      dVar12 = *(double *)((longlong)&param_2->DataPtr->field0_0x0 + lVar28);
      dVar5 = (param_3->Position).field0_0x0._s_0.Y;
      dVar13 = (param_3->Position).field0_0x0._s_0.Z - pdVar2[1];
      uVar22 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      uVar23 = uVar23 + 1;
      lVar28 = lVar28 + 0x18;
      *(double *)(pFVar1 + lVar27 + 0x20) = dVar11 - dVar12;
      auVar10._8_4_ = SUB84(dVar13,0);
      auVar10._0_8_ = dVar5 - dVar4;
      auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar27 + 0x28) = auVar10;
      lVar27 = lVar27 + 0x40;
    } while ((int)uVar23 < param_4->NumHistorySamples);
  }
  return;
}

// UpdatePrediction_SimulateCharacterMovement @ 14a94d600

void __cdecl
FMotionTrajectoryLibrary::UpdatePrediction_SimulateCharacterMovement
          (FTransformTrajectory *param_1,FCharacterTrajectoryData *param_2,
          FTrajectorySamplingData *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FRichCurve *pFVar21;
  TQuat<double> *pTVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  double local_278;
  double dStack_270;
  undefined8 local_268;
  TVector<double>_u_0 local_260;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  TVector<double>_u_0 local_228;
  double dStack_210;
  double local_208;
  double local_1f8;
  double local_1e8;
  double local_1e0;
  TVector<double>_u_0 local_1d8;
  double local_1b0;
  double local_1a8;
  undefined1 local_198 [16];
  TVector<double>_u_0 local_188;
  TQuat<double> local_168;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  TQuat<double> local_128;
  TQuat<double> local_108 [6];
  
  uVar37 = *(undefined4 *)&(param_2->Position).field0_0x0;
  uVar38 = *(undefined4 *)((longlong)&(param_2->Position).field0_0x0 + 4);
  uVar50 = *(undefined4 *)((longlong)&(param_2->Position).field0_0x0 + 8);
  uVar51 = *(undefined4 *)((longlong)&(param_2->Position).field0_0x0 + 0xc);
  local_1b0 = *(double *)((longlong)&(param_2->Position).field0_0x0 + 0x10);
  uVar54 = SUB84(local_1b0,0);
  uVar55 = (undefined4)((ulonglong)local_1b0 >> 0x20);
  RemapVectorMagnitudeWithCurve
            ((TVector<double> *)&local_278,&param_2->Velocity,param_2->bUseSpeedRemappingCurve,
             &param_2->SpeedRemappingCurve);
  RemapVectorMagnitudeWithCurve
            ((TVector<double> *)&local_260._s_0,&param_2->Acceleration,
             param_2->bUseAccelerationRemappingCurve,&param_2->AccelerationRemappingCurve);
  uVar9 = local_260._s_0.Z;
  uVar11 = local_260._s_0.Y;
  uVar10 = local_260._s_0.X;
  if ((__real_38d1b717 < param_2->BendVelocityTowardsAcceleration) &&
     (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_260._0_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_260._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
       || (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)local_260._8_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_260._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           ))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_260._16_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_260._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))
     ) {
    auVar33._0_8_ = dStack_270 * dStack_270;
    auVar33._8_8_ = 0;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = local_278 * local_278 + auVar33._0_8_ + (double)local_268 * (double)local_268;
    auVar31 = sqrtpd(auVar33,auVar31);
    dVar47 = (double)(float)auVar31._0_8_;
    local_1a8 = __real_3ff0000000000000 /
                SQRT(local_260._s_0.Y * local_260._s_0.Y + local_260._s_0.X * local_260._s_0.X +
                     local_260._s_0.Z * local_260._s_0.Z);
    dVar39 = local_260._s_0.X * local_1a8 * dVar47;
    dVar44 = local_260._s_0.Y * local_1a8 * dVar47;
    dVar47 = local_260._s_0.Z * local_1a8 * dVar47;
    if (param_2->BendVelocityTowardsAcceleration < __real_3f7ff972) {
      dVar30 = (double)param_2->BendVelocityTowardsAcceleration;
      local_268 = (dVar47 - (double)local_268) * dVar30 + (double)local_268;
      local_278 = (dVar39 - local_278) * dVar30 + local_278;
      dStack_270 = (dVar44 - dStack_270) * dVar30 + dStack_270;
      auVar32._0_8_ = local_278 * local_278;
      auVar32._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dStack_270 * dStack_270 + auVar32._0_8_ + (double)local_268 * (double)local_268
      ;
      auVar33 = sqrtpd(auVar32,auVar4);
      if ((float)auVar33._0_8_ <= __real_38d1b717) goto LAB_14a94d865;
      dVar47 = (double)((float)auVar31._0_8_ / (float)auVar33._0_8_);
      dVar39 = local_278 * dVar47;
      dVar44 = dStack_270 * dVar47;
      dVar47 = (double)local_268 * dVar47;
    }
    dStack_270 = dVar44;
    local_278 = dVar39;
    local_268 = dVar47;
  }
LAB_14a94d865:
  local_248._0_8_ = (param_2->Facing).X;
  local_248._8_8_ = (param_2->Facing).Y;
  local_238._0_8_ = (param_2->Facing).Z;
  local_238._8_8_ = (param_2->Facing).W;
  local_228._s_0.X = (param_2->MeshCompRelativeRotation).X;
  local_228._s_0.Y = (param_2->MeshCompRelativeRotation).Y;
  local_228._s_0.Z = (param_2->MeshCompRelativeRotation).Z;
  dStack_210 = (param_2->MeshCompRelativeRotation).W;
  local_188._s_0.X = 0.0;
  local_188._s_0.Y = 0.0;
  local_188._s_0.Z =
       (double)(param_2->ControllerYawRateClamped * param_3->SecondsPerPredictionSample);
  UE::Math::TQuat<double>::MakeFromEuler(&local_168,(TVector<double> *)&local_188._s_0);
  dVar47 = dStack_210;
  uVar17 = local_228._s_0.Y;
  fVar56 = 0.0;
  uVar24 = (ulonglong)param_3->NumHistorySamples;
  iVar19 = (param_1->Samples).ArrayNum + -1;
  if (param_3->NumHistorySamples <= iVar19) {
    uVar57 = SUB84(local_1b0,0);
    uVar58 = (undefined4)((ulonglong)local_1b0 >> 0x20);
    local_208 = local_228._s_0.Z;
    local_1f8 = local_228._s_0.X;
    lVar25 = uVar24 << 6;
    uVar27 = uVar24;
    uVar52 = uVar50;
    uVar53 = uVar51;
    while( true ) {
      uVar23 = (uint)uVar24;
      uVar26 = ~uVar23 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->Samples).AllocatorInstance.Data;
      pFVar1 = pFVar2 + lVar25 + 0x20;
      *(undefined4 *)pFVar1 = uVar37;
      *(undefined4 *)(pFVar1 + 4) = uVar38;
      *(undefined4 *)(pFVar1 + 8) = uVar50;
      *(undefined4 *)(pFVar1 + 0xc) = uVar51;
      *(ulonglong *)(pFVar2 + lVar25 + 0x30) = CONCAT44(uVar55,uVar54);
      uVar13 = local_248._0_8_;
      uVar14 = local_248._8_8_;
      uVar15 = local_238._0_8_;
      uVar16 = local_238._8_8_;
      uVar20 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->Samples).AllocatorInstance.Data;
      pFVar1 = pFVar2 + lVar25;
      *(undefined8 *)pFVar1 = uVar13;
      *(undefined8 *)(pFVar1 + 8) = uVar14;
      pFVar2 = pFVar2 + lVar25 + 0x10;
      *(undefined8 *)pFVar2 = uVar15;
      *(undefined8 *)(pFVar2 + 8) = uVar16;
      uVar20 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)((param_1->Samples).AllocatorInstance.Data + lVar25 + 0x38) = fVar56;
      fVar29 = __real_38d1b717;
      if (uVar27 == (longlong)iVar19) break;
      dVar39 = (double)param_3->SecondsPerPredictionSample;
      fVar56 = fVar56 + param_3->SecondsPerPredictionSample;
      local_1e8 = (double)CONCAT44(uVar38,uVar37) + dVar39 * local_278;
      local_1e0 = (double)CONCAT44(uVar58,uVar57) + dVar39 * (double)local_268;
      dVar7 = local_168.X;
      dVar44 = local_168.Y;
      dVar30 = dVar7 * (double)local_248._8_8_;
      dVar6 = dVar7 * (double)local_248._0_8_;
      local_198._8_4_ = uVar52;
      local_198._0_8_ = (double)CONCAT44(uVar51,uVar50) + dVar39 * dStack_270;
      local_198._12_4_ = uVar53;
      dVar41 = dVar44 * (double)local_248._0_8_;
      dVar43 = dVar44 * (double)local_248._8_8_;
      dVar8 = local_168.W;
      dVar40 = local_168.Z;
      auVar34._8_4_ = local_168.W._0_4_;
      auVar34._0_8_ = dVar8;
      auVar34._12_4_ = local_168.W._4_4_;
      auVar35._8_4_ = local_168.Z._0_4_;
      auVar35._0_8_ = dVar40;
      auVar35._12_4_ = local_168.Z._4_4_;
      auVar12._4_8_ = local_248._8_8_;
      auVar12._0_4_ = local_168.X._4_4_;
      auVar48._0_8_ = auVar12._0_8_ << 0x20;
      auVar48._8_4_ = local_168.Y._0_4_;
      auVar48._12_4_ = local_168.Y._4_4_;
      dVar49 = auVar48._8_8_;
      dVar39 = dVar7 * (double)local_238._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar8 * (double)local_248._0_8_ +
               dVar44 * (double)local_238._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar40 * (double)local_248._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar44 = dVar7 * (double)local_238._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar34._8_8_ * (double)local_248._8_8_ +
               dVar44 * (double)local_238._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar35._8_8_ * (double)local_248._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar37 = SUB84(dVar44,0);
      uVar38 = (undefined4)((ulonglong)dVar44 >> 0x20);
      dVar44 = dVar49 * (double)uVar9 - dVar40 * (double)uVar11;
      local_148._8_4_ = uVar37;
      local_148._0_8_ = dVar39;
      local_148._12_4_ = uVar38;
      local_248._8_4_ = uVar37;
      local_248._0_8_ = dVar39;
      local_248._12_4_ = uVar38;
      dVar44 = dVar44 + dVar44;
      dVar45 = dVar40 * (double)uVar10 - dVar7 * (double)uVar9;
      dVar45 = dVar45 + dVar45;
      dVar42 = dVar7 * (double)uVar11 - dVar49 * (double)uVar10;
      dVar39 = dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar8 * (double)local_238._0_8_ +
               dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar40 * (double)local_238._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar30 = dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar8 * (double)local_238._8_8_ +
               dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar40 * (double)local_238._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar37 = SUB84(dVar30,0);
      uVar38 = (undefined4)((ulonglong)dVar30 >> 0x20);
      dVar42 = dVar42 + dVar42;
      local_138._8_4_ = uVar37;
      local_138._0_8_ = dVar39;
      local_138._12_4_ = uVar38;
      local_238._8_4_ = uVar37;
      local_238._0_8_ = dVar39;
      local_238._12_4_ = uVar38;
      uVar10 = (dVar42 * dVar49 - dVar45 * dVar40) + dVar44 * dVar8 + (double)uVar10;
      uVar9 = (dVar45 * dVar7 - dVar44 * dVar49) + dVar42 * dVar8 + (double)uVar9;
      uVar11 = (dVar44 * dVar40 - dVar42 * dVar7) + dVar45 * dVar8 + (double)uVar11;
      local_1b0 = local_1e0;
      if ((param_2->bUseAccelerationRemappingCurve != false) &&
         (fVar46 = (float)SQRT((double)uVar10 * (double)uVar10 + (double)uVar11 * (double)uVar11 +
                               (double)uVar9 * (double)uVar9), __real_38d1b717 < fVar46)) {
        pFVar21 = FRuntimeFloatCurve::GetRichCurveConst(&param_2->AccelerationRemappingCurve);
        fVar28 = FRichCurve::Eval(pFVar21,fVar46,0.0);
        dVar39 = (double)(fVar28 / fVar46);
        uVar9 = (double)uVar9 * dVar39;
        uVar11 = dVar39 * (double)uVar11;
        uVar10 = dVar39 * (double)uVar10;
      }
      local_260._0_8_ = uVar10;
      local_260._8_8_ = uVar11;
      local_260._16_8_ = uVar9;
      FCharacterTrajectoryData::StepCharacterMovementGroundPrediction
                (param_2,(TVector<double> *)&local_1d8._s_0,param_3->SecondsPerPredictionSample,
                 (TVector<double> *)&local_278,(TVector<double> *)&local_260._s_0);
      uVar15 = local_1d8._s_0.Z;
      uVar13 = local_1d8._s_0.Y;
      uVar14 = local_1d8._s_0.X;
      if (param_2->bUseSpeedRemappingCurve != false) {
        auVar36._0_8_ = local_1d8._s_0.Y * local_1d8._s_0.Y;
        auVar36._8_8_ = 0;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_1d8._s_0.X * local_1d8._s_0.X + auVar36._0_8_ +
                       local_1d8._s_0.Z * local_1d8._s_0.Z;
        auVar31 = sqrtpd(auVar36,auVar5);
        fVar46 = (float)auVar31._0_8_;
        if (fVar29 < fVar46) {
          pFVar21 = FRuntimeFloatCurve::GetRichCurveConst(&param_2->SpeedRemappingCurve);
          fVar29 = FRichCurve::Eval(pFVar21,fVar46,0.0);
          dVar39 = (double)(fVar29 / fVar46);
          local_1d8._s_0.Z = (double)uVar15 * dVar39;
          uVar13 = (double)uVar13 * dVar39;
          uVar14 = (double)uVar14 * dVar39;
        }
      }
      unique0x1000021a = (int)uVar13;
      local_278 = (double)uVar14;
      unique0x1000021e = (int)((ulonglong)uVar13 >> 0x20);
      local_268 = local_1d8._s_0.Z;
      if ((param_2->bOrientRotationToMovement != false) &&
         (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)uVar10 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar10 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)uVar11 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar11 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)uVar9 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
        fVar29 = param_3->SecondsPerPredictionSample;
        dVar39 = (double)uVar17 * (double)uVar9 - local_208 * (double)uVar11;
        dVar39 = dVar39 + dVar39;
        dVar30 = local_208 * (double)uVar10 - local_1f8 * (double)uVar9;
        dVar30 = dVar30 + dVar30;
        dVar44 = local_1f8 * (double)uVar11 - (double)uVar17 * (double)uVar10;
        dVar44 = dVar44 + dVar44;
        local_228._s_0.X =
             ((double)uVar17 * dVar44 - local_208 * dVar30) + dVar47 * dVar39 + (double)uVar10;
        fVar46 = param_2->RotateTowardsMovementSpeed;
        local_228._s_0.Y =
             (local_208 * dVar39 - local_1f8 * dVar44) + dVar47 * dVar30 + (double)uVar11;
        local_228._s_0.Z =
             (local_1f8 * dVar30 - (double)uVar17 * dVar39) + dVar47 * dVar44 + (double)uVar9;
        pTVar22 = UE::Math::TVector<double>::ToOrientationQuat
                            ((TVector<double> *)&local_228._s_0,&local_128);
        pTVar22 = FMath::QInterpConstantTo<double>
                            (local_108,(TQuat<double> *)local_248,pTVar22,fVar29,fVar46);
        local_248._0_8_ = pTVar22->X;
        local_248._8_8_ = pTVar22->Y;
        local_238._0_8_ = pTVar22->Z;
        local_238._8_8_ = pTVar22->W;
      }
      uVar37 = SUB84(local_1e8,0);
      uVar38 = (undefined4)((ulonglong)local_1e8 >> 0x20);
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar54 = SUB84(local_1b0,0);
      uVar55 = (undefined4)((ulonglong)local_1b0 >> 0x20);
      uVar27 = uVar27 + 1;
      lVar25 = lVar25 + 0x40;
      uVar57 = SUB84(local_1e0,0);
      uVar58 = (undefined4)((ulonglong)local_1e0 >> 0x20);
      uVar50 = local_198._0_4_;
      uVar51 = local_198._4_4_;
      uVar52 = local_198._8_4_;
      uVar53 = local_198._12_4_;
    }
  }
  return;
}

