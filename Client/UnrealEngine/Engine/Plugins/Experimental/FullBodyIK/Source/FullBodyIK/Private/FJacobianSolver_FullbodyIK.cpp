// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// InitializeSolver @ 14df6d070

void __thiscall
FJacobianSolver_FullbodyIK::InitializeSolver
          (FJacobianSolver_FullbodyIK *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  return;
}

// PreSolve @ 14df6d080

void __thiscall
FJacobianSolver_FullbodyIK::PreSolve
          (FJacobianSolver_FullbodyIK *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  FScriptContainerElement *pFVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  longlong local_res10;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  
  iVar13 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar13) {
    uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
    uVar33 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
    uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
    uVar35 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
    uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
    uVar37 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
    local_res10 = 0;
    uVar18 = uVar16;
    uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    do {
      uVar15 = (uint)uVar16;
      uVar19 = ~uVar15 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar15 < iVar13) {
        uVar27 = uVar19;
      }
      if (uVar27 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
        uVar33 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
        uVar35 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
        uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar37 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
      }
      pFVar17 = (param_1->AllocatorInstance).Data;
      uVar27 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar27 = uVar19;
      }
      if (uVar27 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
        uVar33 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
        uVar35 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
        uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar37 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
      }
      lVar14 = uVar18 * 0x130;
      if (*(int *)((param_1->AllocatorInstance).Data + lVar14) == -1) {
        dVar9 = *(double *)(pFVar17 + local_res10 + 0x110);
        dVar10 = *(double *)(pFVar17 + local_res10 + 0x110 + 8);
        dVar7 = *(double *)(pFVar17 + local_res10 + 0x120);
        dVar8 = *(double *)(pFVar17 + local_res10 + 0x120 + 8);
      }
      else {
        uVar29 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar29 = uVar19;
        }
        if (uVar29 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
          uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
          uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar29 = *(uint *)((param_1->AllocatorInstance).Data + lVar14);
        uVar30 = 0;
        if ((int)uVar29 < param_1->ArrayNum) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if (uVar30 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
          uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
          uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        dVar8 = *(double *)(pFVar17 + local_res10 + 0x120);
        dVar24 = *(double *)(pFVar17 + local_res10 + 0x120 + 8);
        dVar21 = *(double *)(pFVar17 + local_res10 + 0x110);
        dVar22 = *(double *)(pFVar17 + local_res10 + 0x110 + 8);
        pFVar17 = pFVar3 + (longlong)(int)uVar29 * 0x130 + 0x10;
        dVar25 = *(double *)pFVar17;
        dVar23 = *(double *)(pFVar17 + 8);
        auVar2 = *(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar29 * 0x130 + 0x20);
        dVar31 = auVar2._0_8_;
        dVar26 = auVar2._8_8_;
        auVar20._8_4_ = auVar2._0_4_;
        auVar20._0_8_ = dVar31;
        auVar20._12_4_ = auVar2._4_4_;
        dVar9 = dVar25 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar21 * dVar26 +
                dVar8 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar31 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar10 = dVar25 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar22 * dVar26 +
                 dVar24 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar20._8_8_ * dVar21 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar7 = dVar25 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar8 * dVar26 +
                dVar21 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar31 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar8 = dVar25 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar24 * dVar26 +
                dVar22 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar31 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      }
      uVar27 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar27 = uVar19;
      }
      if (uVar27 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
        uVar33 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
        uVar35 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
        uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar37 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
      }
      uVar12 = 0;
      uVar27 = 0;
      if (*(int *)((param_1->AllocatorInstance).Data + lVar14 + 0x100) == 3) {
        uVar29 = uVar27;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar29 = uVar19;
        }
        dVar22 = dVar10 * (double)CONCAT44(uVar37,uVar36) - dVar7 * (double)CONCAT44(uVar35,uVar34);
        dVar22 = dVar22 + dVar22;
        dVar25 = dVar7 * (double)CONCAT44(uVar33,uVar32) - dVar9 * (double)CONCAT44(uVar37,uVar36);
        dVar25 = dVar25 + dVar25;
        dVar21 = dVar9 * (double)CONCAT44(uVar35,uVar34) - dVar10 * (double)CONCAT44(uVar33,uVar32);
        dVar21 = dVar21 + dVar21;
        dVar24 = (dVar22 * dVar7 - dVar21 * dVar9) +
                 dVar25 * dVar8 + (double)CONCAT44(uVar35,uVar34);
        if ((uVar29 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (param_1->AllocatorInstance).Data;
        if ((*(int *)(pFVar17 + lVar14 + 0x100) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("MotionBaseAxes.IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                                ,0xd8,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)(pFVar17 + lVar14 + 0x100) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pauVar4 = *(undefined1 (**) [16])(pFVar17 + lVar14 + 0xf8);
        auVar2._8_4_ = SUB84(dVar24,0);
        auVar2._0_8_ = (dVar21 * dVar10 - dVar25 * dVar7) +
                       dVar22 * dVar8 + (double)CONCAT44(uVar33,uVar32);
        auVar2._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        *pauVar4 = auVar2;
        *(double *)pauVar4[1] =
             (dVar25 * dVar9 - dVar22 * dVar10) + dVar21 * dVar8 + (double)CONCAT44(uVar37,uVar36);
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar27 = uVar19;
        }
        dVar26 = dVar10 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                 dVar7 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar26 = dVar26 + dVar26;
        dVar22 = dVar7 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                 dVar9 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar22 = dVar22 + dVar22;
        dVar25 = dVar9 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 dVar10 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar24 = dVar26 * dVar8 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar25 * dVar8 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar21 = dVar22 * dVar8 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (param_1->AllocatorInstance).Data;
        if ((*(int *)(pFVar17 + lVar14 + 0x100) < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("MotionBaseAxes.IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                                ,0xd8,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)(pFVar17 + lVar14 + 0x100) < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)(pFVar17 + lVar14 + 0xf8);
        *(double *)(lVar5 + 0x20) = (dVar25 * dVar10 - dVar22 * dVar7) + dVar24;
        *(double *)(lVar5 + 0x28) = (dVar26 * dVar7 - dVar25 * dVar9) + dVar21;
        *(double *)(lVar5 + 0x30) = (dVar22 * dVar9 - dVar26 * dVar10) + dVar23;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar12 = uVar19;
        }
        dVar23 = dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                 dVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar23 = dVar23 + dVar23;
        dVar21 = dVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar21 = dVar21 + dVar21;
        dVar22 = dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar24 = dVar23 * dVar8 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar22 = dVar22 + dVar22;
        dVar25 = dVar22 * dVar8 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar8 = dVar21 * dVar8 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (param_1->AllocatorInstance).Data;
        if ((*(int *)(pFVar17 + lVar14 + 0x100) < 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("MotionBaseAxes.IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                                ,0xd8,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)(pFVar17 + lVar14 + 0x100) < 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = *(longlong *)(pFVar17 + lVar14 + 0xf8);
        *(double *)(lVar14 + 0x40) = (dVar22 * dVar10 - dVar21 * dVar7) + dVar24;
        *(double *)(lVar14 + 0x48) = (dVar23 * dVar7 - dVar22 * dVar9) + dVar8;
        uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        *(double *)(lVar14 + 0x50) = (dVar21 * dVar9 - dVar23 * dVar10) + dVar25;
LAB_14df6e0ee:
        uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
        uVar33 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
        uVar35 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
        uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar37 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
      }
      else {
        uVar28 = uVar12;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar28 = uVar19;
        }
        if ((uVar28 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)((param_1->AllocatorInstance).Data + lVar14 + 0x100) != 0) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_311813362969214934>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\FBIKShared.cpp"
                                ,0x2a,"InOutLinkData[Index].GetNumMotionBases() == 0"), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar28 = uVar27;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar28 = uVar19;
        }
        if ((uVar28 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (param_1->AllocatorInstance).Data + lVar14 + 0xf8;
        iVar13 = *(int *)(pFVar17 + 0xc);
        *(undefined4 *)&pFVar17[8].field_0x0 = 0;
        if (iVar13 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)pFVar17,0,(int *)(pFVar17 + 0xc));
        }
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar27 = uVar19;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
        uVar35 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
        uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
        uVar37 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
        uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
        uVar33 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        dStack_118 = 5.26354424712089e-315;
        dVar22 = dVar10 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z -
                 dVar7 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        dVar22 = dVar22 + dVar22;
        dVar21 = dVar7 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X -
                 dVar9 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        dVar21 = dVar21 + dVar21;
        dVar24 = dVar9 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y -
                 dVar10 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        dVar24 = dVar24 + dVar24;
        local_130 = (dVar10 * dVar24 - dVar7 * dVar21) +
                    dVar8 * dVar22 + UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        dStack_128 = (dVar7 * dVar22 - dVar9 * dVar24) +
                     dVar8 * dVar21 + UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_120 = (dVar9 * dVar21 - dVar10 * dVar22) +
                    dVar8 * dVar24 + UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        if (((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)local_130 >> 0x20) & uVar30,
                               SUB84(local_130,0) & uVar29)) ||
            (uVar27 = SUB84(dStack_128,0) & uVar29,
            uVar28 = (uint)((ulonglong)dStack_128 >> 0x20) & uVar30,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar27) &&
            (double)CONCAT44(uVar28,uVar27) != __real_3f1a36e2e0000000)) ||
           (uVar29 = SUB84(local_120,0) & uVar29,
           uVar30 = (uint)((ulonglong)local_120 >> 0x20) & uVar30,
           __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar30,uVar29) &&
           (double)CONCAT44(uVar30,uVar29) != __real_3f1a36e2e0000000)) {
          pFVar17 = (param_1->AllocatorInstance).Data + lVar14 + 0xf8;
          if (((*(double **)&pFVar17->field_0x0 <= &local_130) &&
              (&local_130 < *(double **)&pFVar17->field_0x0 + (longlong)*(int *)(pFVar17 + 0xc) * 4)
              ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = *(int *)&pFVar17[8].field_0x0;
          if (iVar13 == *(int *)(pFVar17 + 0xc)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
          }
          *(int *)&pFVar17[8].field_0x0 = iVar13 + 1;
          lVar5 = *(longlong *)&pFVar17->field_0x0;
          pdVar1 = (double *)(lVar5 + (longlong)iVar13 * 0x20);
          *pdVar1 = local_130;
          pdVar1[1] = dStack_128;
          pdVar1 = (double *)(lVar5 + (longlong)iVar13 * 0x20 + 0x10);
          *pdVar1 = local_120;
          pdVar1[1] = dStack_118;
          uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
          uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
          uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        }
        uVar29 = uVar12;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar29 = uVar19;
        }
        if (uVar29 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
          uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
          uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
        }
        dStack_f8 = 5.26354424712089e-315;
        dVar24 = dVar10 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                 dVar7 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar24 = dVar24 + dVar24;
        dVar22 = dVar7 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                 dVar9 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar21 = dVar9 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 dVar10 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar22 = dVar22 + dVar22;
        dVar21 = dVar21 + dVar21;
        local_110 = (dVar10 * dVar21 - dVar7 * dVar22) +
                    dVar8 * dVar24 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dStack_108 = (dVar7 * dVar24 - dVar9 * dVar21) +
                     dVar8 * dVar22 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_100 = (dVar9 * dVar22 - dVar10 * dVar24) +
                    dVar8 * dVar21 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        if (((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)local_110 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_110,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
            || (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dStack_108 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dStack_108,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
               )) || (uVar29 = SUB84(local_100,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                     uVar30 = (uint)((ulonglong)local_100 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar30,uVar29) &&
                     (double)CONCAT44(uVar30,uVar29) != __real_3f1a36e2e0000000)) {
          pFVar17 = (param_1->AllocatorInstance).Data + lVar14 + 0xf8;
          if (((*(double **)&pFVar17->field_0x0 <= &local_110) &&
              (&local_110 < *(double **)&pFVar17->field_0x0 + (longlong)*(int *)(pFVar17 + 0xc) * 4)
              ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = *(int *)&pFVar17[8].field_0x0;
          if (iVar13 == *(int *)(pFVar17 + 0xc)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
          }
          *(int *)&pFVar17[8].field_0x0 = iVar13 + 1;
          lVar5 = *(longlong *)&pFVar17->field_0x0;
          pdVar1 = (double *)(lVar5 + (longlong)iVar13 * 0x20);
          *pdVar1 = local_110;
          pdVar1[1] = dStack_108;
          pdVar1 = (double *)(lVar5 + (longlong)iVar13 * 0x20 + 0x10);
          *pdVar1 = local_100;
          pdVar1[1] = dStack_f8;
          uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
          uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
          uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
        }
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar12 = uVar19;
        }
        if (uVar12 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar32 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_ >> 0x20);
          uVar34 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_ >> 0x20);
          uVar36 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        dStack_d8 = 5.26354424712089e-315;
        dVar24 = dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                 dVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar24 = dVar24 + dVar24;
        dVar22 = dVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar22 = dVar22 + dVar22;
        dVar21 = dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar21 = dVar21 + dVar21;
        local_f0 = (dVar10 * dVar21 - dVar7 * dVar22) +
                   dVar8 * dVar24 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dStack_e8 = (dVar7 * dVar24 - dVar9 * dVar21) +
                    dVar8 * dVar22 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        local_e0 = (dVar9 * dVar22 - dVar10 * dVar24) +
                   dVar8 * dVar21 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        if (((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)local_f0 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_f0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
            (uVar27 = SUB84(dStack_e8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar19 = (uint)((ulonglong)dStack_e8 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar19,uVar27) &&
            (double)CONCAT44(uVar19,uVar27) != __real_3f1a36e2e0000000)) ||
           (uVar27 = SUB84(local_e0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar19 = (uint)((ulonglong)local_e0 >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar19,uVar27) &&
           (double)CONCAT44(uVar19,uVar27) != __real_3f1a36e2e0000000)) {
          pFVar17 = (param_1->AllocatorInstance).Data + lVar14 + 0xf8;
          if (((*(double **)&pFVar17->field_0x0 <= &local_f0) &&
              (&local_f0 < *(double **)&pFVar17->field_0x0 + (longlong)*(int *)(pFVar17 + 0xc) * 4))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = *(int *)&pFVar17[8].field_0x0;
          if (iVar13 == *(int *)(pFVar17 + 0xc)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
          }
          *(int *)&pFVar17[8].field_0x0 = iVar13 + 1;
          lVar14 = *(longlong *)&pFVar17->field_0x0;
          pdVar1 = (double *)(lVar14 + (longlong)iVar13 * 0x20);
          *pdVar1 = local_f0;
          pdVar1[1] = dStack_e8;
          pdVar1 = (double *)(lVar14 + (longlong)iVar13 * 0x20 + 0x10);
          *pdVar1 = local_e0;
          pdVar1[1] = dStack_d8;
          goto LAB_14df6e0ee;
        }
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      iVar13 = param_1->ArrayNum;
      local_res10 = local_res10 + 0x130;
      uVar18 = uVar18 + 1;
    } while ((int)(uVar15 + 1) < iVar13);
  }
  return;
}

