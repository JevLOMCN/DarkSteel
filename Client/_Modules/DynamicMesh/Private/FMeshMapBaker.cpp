// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 32

// EvaluateFilter<1> @ 14c86bc90

float __cdecl UE::Geometry::FMeshMapBaker::EvaluateFilter<1>(TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (((((double)(BoxFilter.Radius ^ __xmm_80000000800000008000000080000000) <= dVar1) &&
       (dVar1 < (double)BoxFilter.Radius)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y,
      (double)(BoxFilter.Radius ^ __xmm_80000000800000008000000080000000) <= dVar1)) &&
     (dVar1 < (double)BoxFilter.Radius)) {
    return __real_3f800000;
  }
  return 0.0;
}

// EvaluateFilter<2> @ 14c86bce0

float __cdecl UE::Geometry::FMeshMapBaker::EvaluateFilter<2>(TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = (float)((uint)((float)(param_1->field0_0x0)._s_0.X * BSplineFilter.InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 * fVar3;
  if (__real_3f800000 <= fVar3) {
    if (fVar3 < __real_40000000) {
      fVar2 = fVar4 * fVar3 * BSplineFilter.Coeff2[0] + fVar4 * BSplineFilter.Coeff2[1] +
              fVar3 * BSplineFilter.Coeff2[2] + BSplineFilter.Coeff2[3];
    }
  }
  else {
    fVar2 = fVar4 * fVar3 * BSplineFilter.Coeff1[0] + fVar4 * BSplineFilter.Coeff1[1] +
            BSplineFilter.Coeff1[2];
  }
  fVar4 = (float)((uint)((float)(param_1->field0_0x0)._s_0.Y * BSplineFilter.InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = fVar4 * fVar4;
  if (fVar4 < __real_3f800000) {
    return (fVar3 * fVar4 * BSplineFilter.Coeff1[0] + fVar3 * BSplineFilter.Coeff1[1] +
           BSplineFilter.Coeff1[2]) * fVar2;
  }
  if (fVar4 < __real_40000000) {
    fVar1 = fVar3 * fVar4 * BSplineFilter.Coeff2[0] + fVar3 * BSplineFilter.Coeff2[1] +
            fVar4 * BSplineFilter.Coeff2[2] + BSplineFilter.Coeff2[3];
  }
  return fVar1 * fVar2;
}

// EvaluateFilter<3> @ 14c86be00

float __cdecl UE::Geometry::FMeshMapBaker::EvaluateFilter<3>(TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = (float)((uint)((float)(param_1->field0_0x0)._s_0.X * MitchellNetravaliFilter.InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 * fVar3;
  if (__real_3f800000 <= fVar3) {
    if (fVar3 < __real_40000000) {
      fVar2 = fVar4 * fVar3 * MitchellNetravaliFilter.Coeff2[0] +
              fVar4 * MitchellNetravaliFilter.Coeff2[1] + fVar3 * MitchellNetravaliFilter.Coeff2[2]
              + MitchellNetravaliFilter.Coeff2[3];
    }
  }
  else {
    fVar2 = fVar4 * fVar3 * MitchellNetravaliFilter.Coeff1[0] +
            fVar4 * MitchellNetravaliFilter.Coeff1[1] + MitchellNetravaliFilter.Coeff1[2];
  }
  fVar4 = (float)((uint)((float)(param_1->field0_0x0)._s_0.Y * MitchellNetravaliFilter.InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = fVar4 * fVar4;
  if (fVar4 < __real_3f800000) {
    return (fVar3 * fVar4 * MitchellNetravaliFilter.Coeff1[0] +
            fVar3 * MitchellNetravaliFilter.Coeff1[1] + MitchellNetravaliFilter.Coeff1[2]) * fVar2;
  }
  if (fVar4 < __real_40000000) {
    fVar1 = fVar3 * fVar4 * MitchellNetravaliFilter.Coeff2[0] +
            fVar3 * MitchellNetravaliFilter.Coeff2[1] + fVar4 * MitchellNetravaliFilter.Coeff2[2] +
            MitchellNetravaliFilter.Coeff2[3];
  }
  return fVar1 * fVar2;
}

// EvaluateFilter<0> @ 14c86bf20

float __cdecl UE::Geometry::FMeshMapBaker::EvaluateFilter<0>(TVector2<double> *param_1)

{
  return __real_3f800000;
}

// EvaluateIsInFilterRegion<1> @ 14c86bf30

bool __cdecl UE::Geometry::FMeshMapBaker::EvaluateIsInFilterRegion<1>(TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (((((double)(BoxFilter.Radius ^ __xmm_80000000800000008000000080000000) <= dVar1) &&
       (dVar1 < (double)BoxFilter.Radius)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y,
      (double)(BoxFilter.Radius ^ __xmm_80000000800000008000000080000000) <= dVar1)) &&
     (dVar1 < (double)BoxFilter.Radius)) {
    return true;
  }
  return false;
}

// EvaluateIsInFilterRegion<2> @ 14c86bf80

bool __cdecl UE::Geometry::FMeshMapBaker::EvaluateIsInFilterRegion<2>(TVector2<double> *param_1)

{
  if (((float)((uint)((float)(param_1->field0_0x0)._s_0.X * BSplineFilter.InvRadius) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000) &&
     ((float)((uint)((float)(param_1->field0_0x0)._s_0.Y * BSplineFilter.InvRadius) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000)) {
    return true;
  }
  return false;
}

// EvaluateIsInFilterRegion<3> @ 14c86bfd0

bool __cdecl UE::Geometry::FMeshMapBaker::EvaluateIsInFilterRegion<3>(TVector2<double> *param_1)

{
  if (((float)((uint)((float)(param_1->field0_0x0)._s_0.X * MitchellNetravaliFilter.InvRadius) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000) &&
     ((float)((uint)((float)(param_1->field0_0x0)._s_0.Y * MitchellNetravaliFilter.InvRadius) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000)) {
    return true;
  }
  return false;
}

// EvaluateIsInFilterRegion<0> @ 14c86c020

bool __cdecl UE::Geometry::FMeshMapBaker::EvaluateIsInFilterRegion<0>(TVector2<double> *param_1)

{
  return true;
}

// operator() @ 14c89ea30

void __thiscall
`UE::Geometry::FMeshMapBaker::BakeSample'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auVar8 [12];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
  uint uVar37;
  int iVar38;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined8 uVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 local_d8 [4];
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  FScriptContainerElement *local_a8;
  longlong local_a0;
  longlong local_98;
  double local_90;
  double local_88;
  
  dVar16 = __real_3fe0000000000000;
  lVar4 = *(longlong *)this;
  iVar22 = *(int *)(lVar4 + 0x46c);
  iVar35 = *(int *)(lVar4 + 0x454);
  iVar38 = *(int *)(lVar4 + 0x450);
  iVar3 = **(int **)((longlong)this + 8);
  iVar21 = (*(int **)((longlong)this + 8))[1];
  iVar19 = iVar21 - iVar22;
  iVar7 = iVar35;
  if (iVar19 < iVar35) {
    iVar7 = iVar19;
  }
  iVar20 = iVar3 - iVar22;
  iVar19 = iVar38;
  if (iVar20 < iVar38) {
    iVar19 = iVar20;
  }
  local_cc = 0;
  if (0 < iVar19) {
    local_cc = iVar19;
  }
  local_c8 = 0;
  if (0 < iVar7) {
    local_c8 = iVar7;
  }
  iVar21 = iVar22 + 1 + iVar21;
  if (iVar21 < iVar35) {
    iVar35 = iVar21;
  }
  iVar22 = iVar3 + 1 + iVar22;
  if (iVar22 < iVar38) {
    iVar38 = iVar22;
  }
  iVar22 = 0;
  if (0 < iVar38) {
    iVar22 = iVar38;
  }
  iVar38 = 0;
  if (0 < iVar35) {
    iVar38 = iVar35;
  }
  local_a0 = (longlong)((iVar38 - local_c8) * (iVar22 - local_cc));
  local_b8 = 0;
  if (0 < local_a0) {
    local_98 = (longlong)(iVar22 - local_cc);
    do {
      uVar42 = in_XMM1._8_8_;
      lVar4 = *(longlong *)((longlong)this + 0x28);
      iVar35 = local_c8 + (int)(local_b8 / local_98);
      iVar38 = local_cc + (int)(local_b8 % local_98);
      iVar22 = ((iVar35 - *(int *)(lVar4 + 0xc)) * *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 8)) +
               iVar38;
      uVar29 = 0;
      if ((longlong)iVar22 < *(longlong *)(lVar4 + 0x90)) {
        uVar29 = (uint)(iVar22 >> 0x1f) >> 0x1f ^ 1;
      }
      if (uVar29 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar42 = in_XMM1._8_8_;
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      piVar5 = *(int **)((longlong)this + 0x18);
      lVar26 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x20);
      lVar32 = (longlong)(((iVar35 - piVar5[1]) * piVar5[4] - *piVar5) + iVar38) *
               (longlong)*(int *)(*(longlong *)((longlong)this + 0x20) + 0x18);
      iVar22 = *(int *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar22 * 4);
      iVar3 = *(int *)((longlong)this + 0x30);
      lVar4 = lVar26 + (lVar32 + 1) * 4;
      auVar40 = **(undefined1 (**) [16])((longlong)this + 0x10);
      lVar36 = *(longlong *)this;
      auVar8._4_8_ = uVar42;
      auVar8._0_4_ = auVar40._4_4_;
      auVar39._0_8_ = auVar8._0_8_ << 0x20;
      auVar39._8_4_ = auVar40._8_4_;
      auVar39._12_4_ = auVar40._12_4_;
      local_90 = (((double)iVar38 + dVar16) / (double)*(int *)(lVar36 + 0x450) - auVar40._0_8_) *
                 (double)*(int *)(lVar36 + 0x450);
      local_88 = (double)*(int *)(lVar36 + 0x454) *
                 (((double)iVar35 + dVar16) / (double)*(int *)(lVar36 + 0x454) - auVar39._8_8_);
      (**(code **)(lVar36 + 0x478))(&local_90);
      fVar43 = extraout_XMM0_Da * (float)(iVar3 == iVar22) * param_3;
      auVar40._4_4_ = extraout_XMM0_Db;
      auVar40._0_4_ = fVar43;
      auVar40._8_4_ = extraout_XMM0_Dc;
      auVar40._12_4_ = extraout_XMM0_Dd;
      in_XMM1._4_12_ = auVar40._4_12_;
      in_XMM1._0_4_ = fVar43 + *(float *)(lVar26 + lVar32 * 4);
      *(float *)(lVar26 + lVar32 * 4) = in_XMM1._0_4_;
      local_d0 = param_1->ArrayNum;
      uVar25 = (ulonglong)(int)local_d0;
      pFVar30 = (param_1->AllocatorInstance).Data;
      local_a8 = pFVar30 + uVar25 * 4;
      while( true ) {
        pFVar17 = local_a8;
        local_c0 = pFVar30;
        if (param_1->ArrayNum != (int)uVar25) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_d8);
        }
        if (pFVar30 == pFVar17) break;
        uVar29 = *(uint *)pFVar30;
        lVar26 = *(longlong *)this;
        uVar37 = 0;
        if ((int)uVar29 < *(int *)(lVar26 + 0x4a8)) {
          uVar37 = ~uVar29 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_b0 = *(longlong *)(lVar26 + 0x4a0);
        lVar26 = *(longlong *)this;
        lVar36 = (longlong)(int)uVar29 * 0x40;
        lVar32 = (longlong)*(int *)(lVar36 + 0x38 + local_b0);
        uVar37 = 0;
        if ((int)uVar29 < *(int *)(lVar26 + 0x4e8)) {
          uVar37 = ~uVar29 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar31 = 0;
        uVar37 = 0;
        local_d4 = *(int *)(*(longlong *)(lVar26 + 0x4e0) + (longlong)(int)uVar29 * 4);
        if (0 < lVar32) {
          do {
            lVar23 = (longlong)local_d4;
            lVar26 = *(longlong *)this;
            uVar29 = 0;
            if ((int)(uVar37 + local_d4) < *(int *)(lVar26 + 0x4f8)) {
              uVar29 = ~(uVar37 + local_d4) >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar27 = local_b0;
            uVar29 = *(uint *)(*(longlong *)(lVar26 + 0x4f0) + lVar31 * 4 + lVar23 * 4);
            uVar25 = (ulonglong)(int)uVar29;
            uVar33 = 0;
            if ((int)uVar37 < *(int *)(lVar36 + 0x38 + local_b0)) {
              uVar33 = ~uVar37 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar33 = *(uint *)(*(longlong *)(lVar36 + 0x30 + lVar27) + lVar31 * 4);
            iVar22 = uVar33 + uVar29;
            if (((int)uVar29 < iVar22) && (0xf < uVar33)) {
              if ((param_2 + (iVar22 + -1) < (float *)(lVar4 + uVar25 * 4)) ||
                 ((float *)(lVar4 + (longlong)(iVar22 + -1) * 4) < param_2 + uVar25)) {
                uVar33 = uVar33 & 0x8000000f;
                if ((int)uVar33 < 0) {
                  uVar33 = (uVar33 - 1 | 0xfffffff0) + 1;
                }
                lVar26 = (longlong)param_2 - lVar4;
                pfVar24 = (float *)(lVar4 + (uVar25 + 4) * 4);
                uVar34 = uVar25;
                do {
                  uVar29 = (int)uVar25 + 0x10;
                  uVar25 = (ulonglong)uVar29;
                  uVar34 = uVar34 + 0x10;
                  pfVar2 = (float *)((longlong)pfVar24 + lVar26 + -0x10);
                  fVar9 = pfVar2[1];
                  fVar10 = pfVar2[2];
                  fVar11 = pfVar2[3];
                  pfVar1 = (float *)((longlong)pfVar24 + lVar26);
                  fVar12 = *pfVar1;
                  fVar13 = pfVar1[1];
                  fVar14 = pfVar1[2];
                  fVar15 = pfVar1[3];
                  pfVar24[-4] = *pfVar2 * fVar43 + pfVar24[-4];
                  pfVar24[-3] = fVar9 * fVar43 + pfVar24[-3];
                  pfVar24[-2] = fVar10 * fVar43 + pfVar24[-2];
                  pfVar24[-1] = fVar11 * fVar43 + pfVar24[-1];
                  *pfVar24 = fVar43 * fVar12 + *pfVar24;
                  pfVar24[1] = fVar43 * fVar13 + pfVar24[1];
                  pfVar24[2] = fVar43 * fVar14 + pfVar24[2];
                  pfVar24[3] = fVar43 * fVar15 + pfVar24[3];
                  pfVar1 = (float *)((longlong)pfVar24 + lVar26 + 0x10);
                  fVar9 = pfVar1[1];
                  fVar10 = pfVar1[2];
                  fVar11 = pfVar1[3];
                  pfVar24[4] = *pfVar1 * fVar43 + pfVar24[4];
                  pfVar24[5] = fVar9 * fVar43 + pfVar24[5];
                  pfVar24[6] = fVar10 * fVar43 + pfVar24[6];
                  pfVar24[7] = fVar11 * fVar43 + pfVar24[7];
                  pfVar1 = (float *)((longlong)pfVar24 + lVar26 + 0x20);
                  in_XMM1._0_4_ = *pfVar1 * fVar43 + pfVar24[8];
                  in_XMM1._4_4_ = pfVar1[1] * fVar43 + pfVar24[9];
                  in_XMM1._8_4_ = pfVar1[2] * fVar43 + pfVar24[10];
                  in_XMM1._12_4_ = pfVar1[3] * fVar43 + pfVar24[0xb];
                  *(undefined1 (*) [16])(pfVar24 + 8) = in_XMM1;
                  pfVar24 = pfVar24 + 0x10;
                } while ((longlong)uVar34 < (longlong)(int)(iVar22 - uVar33));
              }
            }
            lVar26 = (longlong)(int)uVar29;
            lVar23 = (longlong)iVar22;
            if (lVar26 < lVar23) {
              if (3 < lVar23 - lVar26) {
                pfVar24 = (float *)(lVar4 + (lVar26 + 1) * 4);
                lVar28 = (longlong)param_2 - lVar4;
                lVar27 = ((lVar23 - lVar26) - 4U >> 2) + 1;
                lVar26 = lVar26 + lVar27 * 4;
                do {
                  pfVar24[-1] = fVar43 * *(float *)((longlong)pfVar24 + lVar28 + -4) + pfVar24[-1];
                  *pfVar24 = fVar43 * *(float *)((longlong)pfVar24 + lVar28) + *pfVar24;
                  auVar41._4_4_ = extraout_XMM0_Db;
                  auVar41._0_4_ = fVar43;
                  auVar41._8_4_ = extraout_XMM0_Dc;
                  auVar41._12_4_ = extraout_XMM0_Dd;
                  pfVar24[1] = fVar43 * *(float *)((longlong)pfVar24 + lVar28 + 4) + pfVar24[1];
                  in_XMM1._4_12_ = auVar41._4_12_;
                  in_XMM1._0_4_ = fVar43 * *(float *)((longlong)pfVar24 + lVar28 + 8) + pfVar24[2];
                  pfVar24[2] = in_XMM1._0_4_;
                  pfVar24 = pfVar24 + 4;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
              }
              if (lVar26 < lVar23) {
                pfVar24 = (float *)(lVar4 + lVar26 * 4);
                lVar23 = lVar23 - lVar26;
                do {
                  *pfVar24 = fVar43 * *(float *)(((longlong)param_2 - lVar4) + (longlong)pfVar24) +
                             *pfVar24;
                  pfVar24 = pfVar24 + 1;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
            }
            uVar37 = uVar37 + 1;
            lVar31 = lVar31 + 1;
          } while (lVar31 < lVar32);
        }
        uVar25 = (ulonglong)local_d0;
        pFVar30 = local_c0 + 4;
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 < local_a0);
  }
  return;
}

// operator() @ 14c8ab5d0

void __thiscall
`UE::Geometry::FMeshMapBaker::BakeSample'::__l2::<lambda_2>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  float *_Dst;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 local_res20 [8];
  
  piVar5 = *(int **)((longlong)this + 0x10);
  uVar3 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)uVar3;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar14 + uVar9 * 4;
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x20) + 4 +
          (longlong)
          ((((*(int **)((longlong)this + 8))[1] - piVar5[1]) * piVar5[4] - *piVar5) +
          **(int **)((longlong)this + 8)) *
          (longlong)*(int *)(*(longlong *)((longlong)this + 0x18) + 0x18) * 4;
  do {
    if (param_1->ArrayNum != (int)uVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    uVar4 = *(uint *)pFVar14;
    lVar6 = *(longlong *)this;
    uVar16 = 0;
    if ((int)uVar4 < *(int *)(lVar6 + 0x4a8)) {
      uVar16 = ~uVar4 >> 0x1f;
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
    lVar6 = *(longlong *)(lVar6 + 0x4a0);
    lVar20 = *(longlong *)this;
    lVar21 = (longlong)(int)uVar4 * 0x40;
    lVar22 = (longlong)*(int *)(lVar6 + 0x38 + lVar21);
    uVar16 = 0;
    if ((int)uVar4 < *(int *)(lVar20 + 0x4e8)) {
      uVar16 = ~uVar4 >> 0x1f;
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
    uVar16 = 0;
    lVar15 = 0;
    uVar4 = *(uint *)(*(longlong *)(lVar20 + 0x4e0) + (longlong)(int)uVar4 * 4);
    uVar9 = (longlong)(int)uVar4;
    if (0 < lVar22) {
      do {
        lVar20 = *(longlong *)this;
        uVar11 = uVar16 + (int)uVar9;
        uVar13 = 0;
        if ((int)uVar11 < *(int *)(lVar20 + 0x4f8)) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar13 = *(uint *)(lVar15 * 4 + (longlong)(int)uVar4 * 4 + *(longlong *)(lVar20 + 0x4f0));
        uVar9 = (ulonglong)(int)uVar13;
        uVar11 = 0;
        if ((int)uVar16 < *(int *)(lVar6 + 0x38 + lVar21)) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar11 = *(uint *)(lVar15 * 4 + *(longlong *)(lVar6 + 0x30 + lVar21));
        iVar17 = uVar11 + uVar13;
        if (((int)uVar13 < iVar17) && (3 < uVar11)) {
          _Dst = (float *)(lVar2 + uVar9 * 4);
          if ((param_2 + (iVar17 + -1) < _Dst) ||
             ((float *)(lVar2 + (longlong)(iVar17 + -1) * 4) < param_2 + uVar9)) {
            memcpy(_Dst,param_2 + uVar9,(longlong)(int)uVar11 << 2);
            do {
              uVar13 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar13;
            } while ((int)uVar13 < iVar17);
          }
        }
        lVar20 = (longlong)(int)uVar13;
        lVar12 = (longlong)iVar17;
        if (lVar20 < lVar12) {
          if (3 < lVar12 - lVar20) {
            puVar10 = (undefined4 *)(lVar2 + 4 + lVar20 * 4);
            lVar18 = (longlong)param_2 - lVar2;
            lVar19 = ((lVar12 - lVar20) - 4U >> 2) + 1;
            lVar20 = lVar20 + lVar19 * 4;
            do {
              puVar10[-1] = *(undefined4 *)(lVar18 + -4 + (longlong)puVar10);
              *puVar10 = *(undefined4 *)(lVar18 + (longlong)puVar10);
              puVar10[1] = *(undefined4 *)(lVar18 + 4 + (longlong)puVar10);
              puVar10[2] = *(undefined4 *)(lVar18 + 8 + (longlong)puVar10);
              puVar10 = puVar10 + 4;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          if (lVar20 < lVar12) {
            puVar10 = (undefined4 *)(lVar2 + lVar20 * 4);
            lVar12 = lVar12 - lVar20;
            do {
              *puVar10 = *(undefined4 *)(((longlong)param_2 - lVar2) + (longlong)puVar10);
              puVar10 = puVar10 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 1;
        uVar9 = (ulonglong)uVar4;
      } while (lVar15 < lVar22);
    }
    pFVar14 = pFVar14 + 4;
    uVar9 = (ulonglong)uVar3;
  } while( true );
}

// operator() @ 14c8b1a10

void __thiscall
`UE::Geometry::FMeshMapBaker::Bake'::__l2::<lambda_4>::operator()
          (void *this,FMeshMapBakerQueue *param_1)

{
  atomic<long> aVar1;
  longlong lVar2;
  void *this_00;
  code *pcVar3;
  bool bVar4;
  atomic<void_*> aVar5;
  ulong64 uVar6;
  <lambda_1> local_res10 [8];
  
  local_res10[0] = (<lambda_1>)0x0;
  if ((param_1->Current < param_1->NumSlots) &&
     (param_1->Slots[param_1->Current].Ptr != (atomic<void_*>)0x0)) {
    LOCK();
    aVar1 = (param_1->Acquired)._Storage;
    (param_1->Acquired)._Storage = (atomic<long>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<long>)0x0) {
      if ((param_1->Current < param_1->NumSlots) &&
         (aVar5 = param_1->Slots[param_1->Current].Ptr, aVar5 != (atomic<void_*>)0x0)) {
        uVar6 = param_1->Current;
        while( true ) {
          param_1->Current = uVar6 + 1;
          param_1->Slots[uVar6].Ptr = (atomic<void_*>)0x0;
          lVar2 = *(longlong *)this;
          this_00 = *(void **)((longlong)this + 8);
          if ((*(int *)(lVar2 + 0x4b8) < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          __l2::<lambda_3>::
          operator()<__UE::Geometry::FMeshMapBaker::Bake_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_const_&,__UE::Geometry::FMeshMapBaker::Bake_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_const_&>
                    (this_00,(FMeshMapTileBuffer *)aVar5,(FImageTile *)aVar5,
                     *(TArray<int,TSizedDefaultAllocator<32>_> **)(lVar2 + 0x4b0),local_res10,
                     local_res10);
          FMemory::Free(*(void **)((longlong)aVar5 + 0x20));
          ::operator_delete((void *)aVar5,0x28);
          if ((param_1->NumSlots <= param_1->Current) ||
             (aVar5 = param_1->Slots[param_1->Current].Ptr, aVar5 == (atomic<void_*>)0x0)) break;
          uVar6 = param_1->Current;
        }
      }
      (param_1->Acquired)._Storage = (atomic<long>)0x0;
    }
  }
  return;
}

// operator() @ 14c8b2510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FMeshMapBaker::Bake'::__l2::<lambda_5>::operator()(void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  FImageTiling *this_00;
  <lambda_1> <Var4;
  undefined8 *puVar5;
  void *this_01;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType _Src;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  FVector2i_u_0 *pFVar18;
  FVector2i_u_0 FVar19;
  undefined8 uVar20;
  longlong lVar21;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_478 [32];
  char local_430 [8];
  <lambda_2> local_428;
  <lambda_3> local_427 [3];
  int local_424;
  int local_420;
  FVector2i_u_0 *local_418;
  int local_410;
  int local_40c;
  int local_408;
  FVector2i_u_0 local_400;
  FVector2i_u_0 local_3f8;
  int iStack_3f0;
  int iStack_3ec;
  int local_3e8;
  int iStack_3e4;
  int local_3e0;
  longlong *local_3d8;
  longlong local_3d0;
  TVector2<double>_u_0 local_3c8;
  undefined1 local_3b8 [32];
  int local_398;
  ForAnyElementType local_390;
  longlong local_388;
  long64 lStack_380;
  ForAnyElementType local_378;
  longlong lStack_370;
  long64 local_368;
  ForAnyElementType FStack_360;
  longlong local_358;
  long64 lStack_350;
  ForAnyElementType local_348;
  longlong lStack_340;
  long64 local_338;
  ForAnyElementType FStack_330;
  long64 local_328;
  long64 lStack_320;
  ForAnyElementType local_318;
  FScriptContainerElement *pFStack_310;
  long64 local_308;
  ForAnyElementType FStack_300;
  FScriptContainerElement *local_2f8;
  long64 lStack_2f0;
  TGridSampler<double> local_2e8;
  bool local_2e4;
  FVector2i_u_0 local_2d8;
  FVector2i_u_0 FStack_2d0;
  FVector2i_u_0 local_2c8;
  double local_2c0;
  double local_2b8;
  FVector2i_u_0 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  TVector<double>_u_0 local_288;
  undefined1 local_268 [24];
  double dStack_250;
  double local_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  TVector<double>_u_0 local_1b8;
  FCorrespondenceSample local_198;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_478;
  bVar33 = -1 < CpuChannel->Enabled;
  local_408 = param_1;
  local_3d8 = this;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId452,"FMeshMapBaker::Bake_EvalTile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
               ,0x1c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
  }
  lVar29 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar29 + 0x40));
  pcVar3 = *(code **)(lVar29 + 0x40);
  plVar26 = (longlong *)(lVar29 + 0x50);
  if (*(longlong **)(lVar29 + 0x68) != (longlong *)0x0) {
    plVar26 = *(longlong **)(lVar29 + 0x68);
  }
  uVar17 = (**(code **)(*plVar26 + 8))();
  cVar10 = (*pcVar3)(uVar17);
  if (cVar10 == '\0') {
    this_00 = *(FImageTiling **)((longlong)this + 8);
    iVar15 = (this_00->Dimensions).Width;
    iVar14 = this_00->TileWidth;
    iVar25 = (this_00->Dimensions).Height;
    iVar23 = (uint)(iVar15 % iVar14 != 0) + iVar15 / iVar14;
    iVar13 = param_1 / iVar23;
    iVar23 = param_1 % iVar23;
    iVar24 = iVar23 * iVar14;
    iVar31 = iVar15;
    if (iVar24 < iVar15) {
      iVar31 = iVar24;
    }
    local_3f8._s_0.X = 0;
    if (0 < iVar31) {
      local_3f8._s_0.X = iVar31;
    }
    iVar24 = iVar13 * this_00->TileHeight;
    iVar31 = iVar25;
    if (iVar24 < iVar25) {
      iVar31 = iVar24;
    }
    local_3f8._s_0.Y = 0;
    if (0 < iVar31) {
      local_3f8._s_0.Y = iVar31;
    }
    iVar14 = (iVar23 + 1) * iVar14;
    lVar29 = *(longlong *)this;
    if (iVar14 < iVar15) {
      iVar15 = iVar14;
    }
    iStack_3f0 = 0;
    if (0 < iVar15) {
      iStack_3f0 = iVar15;
    }
    iVar15 = (iVar13 + 1) * this_00->TileHeight;
    if (iVar15 < iVar25) {
      iVar25 = iVar15;
    }
    iStack_3ec = 0;
    if (0 < iVar25) {
      iStack_3ec = iVar25;
    }
    local_3e8 = iStack_3f0 - local_3f8._s_0.X;
    iStack_3e4 = iStack_3ec - local_3f8._s_0.Y;
    UE::Geometry::FImageTiling::GetTile
              (this_00,(FImageTile *)&local_2d8._s_0,param_1,*(int *)(lVar29 + 0x468));
    local_390.Data = (FScriptContainerElement *)0x0;
    local_388 = 0;
    lStack_380 = 0;
    local_378.Data = (FScriptContainerElement *)0x0;
    lStack_370 = 0;
    local_368 = 0;
    FStack_360.Data = (FScriptContainerElement *)0x0;
    local_358 = 0;
    lStack_350 = 0;
    local_348.Data = (FScriptContainerElement *)0x0;
    lStack_340 = 0;
    local_338 = 0;
    FStack_330.Data = (FScriptContainerElement *)0x0;
    local_328 = 0;
    lStack_320 = 0;
    local_318.Data = (FScriptContainerElement *)0x0;
    pFStack_310 = (FScriptContainerElement *)0x0;
    local_308 = 0;
    FStack_300.Data = (FScriptContainerElement *)0x0;
    local_2f8 = (FScriptContainerElement *)0x0;
    lStack_2f0 = 0;
    local_2e4 = true;
    local_398 = *(int *)(lVar29 + 0x45c);
    iVar15 = *(int *)(lVar29 + 0x460);
    local_3b8._0_8_ = *(FImageDimensions *)(lVar29 + 0x450);
    if (((int)local_3b8._0_8_ != SUB84(local_3b8._0_8_,4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DimensionsIn.IsSquare()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageOccupancyMap.h"
                            ,0x6c,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_3b8._24_8_ = local_2c8;
    local_3b8._8_8_ = local_2d8;
    local_3b8._16_8_ = FStack_2d0;
    fVar34 = __real_3f800000;
    if (0 < iVar15) {
      fVar34 = (float)iVar15;
    }
    fVar35 = SQRT(fVar34);
    fVar36 = __real_3f800000;
    if ((__real_3f800000 <= fVar35) && (fVar36 = fVar35, fVar34 <= fVar35)) {
      fVar36 = fVar34;
    }
    <Var4.__this = *(FMeshMapBaker **)this;
    local_2e8.Size = (int)ROUND((fVar36 + fVar36) - __real_3f000000) >> 1;
    UE::Geometry::FImageOccupancyMap::
    ClassifySamplesFromUVSpaceMesh<UE::Geometry::FDynamicMesh3,__UE::Geometry::FMeshMapBaker::Bake_::__l2::<lambda_5>::operator()_::__l2::<lambda_1>_>
              ((FImageOccupancyMap *)local_3b8,&(<Var4.__this)->FlatMesh,
               *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x40),<Var4,
               (<Var4.__this)->TargetMeshUVCharts);
    lVar29 = *(longlong *)this;
    local_2a8._s_0.Y = local_3f8._s_0.Y;
    local_2a8._s_0.X = local_3f8._s_0.X;
    uStack_2a0 = CONCAT44(iStack_3ec,iStack_3f0);
    local_298 = CONCAT44(iStack_3e4,local_3e8);
    ::`anonymous_namespace'::ComputeGutterTexelsUsingFilterKernelCoverage
              ((FImageOccupancyMap *)local_3b8,(FImageTile *)&local_2a8._s_0,
               *(FImageDimensions *)(lVar29 + 0x450),*(int *)(lVar29 + 0x46c),
               *(_func___cdecl_bool_TVector2<double>_ptr **)(lVar29 + 0x480));
    plVar26 = *(longlong **)((longlong)this + 0x10);
    uVar16 = 0;
    if (param_1 < (int)plVar26[1]) {
      uVar16 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = pFStack_310;
    pFVar2 = (ForAnyElementType *)(*plVar26 + (longlong)param_1 * 0x18);
    if (pFVar2 != &local_318) {
      pFVar1 = pFVar2 + 2;
      local_418 = (FVector2i_u_0 *)local_318.Data;
      pFVar2[1].Data = pFStack_310;
      if ((pFStack_310 == (FScriptContainerElement *)0x0) &&
         (pFVar1->Data == (FScriptContainerElement *)0x0)) {
        pFVar1->Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (0x10,8,(long64)pFStack_310,(long64)pFVar1->Data,pFVar2,(long64)pFStack_310,
                   (long64 *)pFVar1);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          memcpy(pFVar2->Data,local_418,(longlong)pFVar9 << 4);
        }
      }
    }
    plVar26 = *(longlong **)((longlong)this + 0x18);
    uVar16 = 0;
    if (param_1 < (int)plVar26[1]) {
      uVar16 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = local_2f8;
    _Src.Data = FStack_300.Data;
    pFVar2 = (ForAnyElementType *)(*plVar26 + (longlong)param_1 * 0x18);
    if (pFVar2 != &FStack_300) {
      pFVar1 = pFVar2 + 2;
      pFVar2[1].Data = local_2f8;
      if ((local_2f8 == (FScriptContainerElement *)0x0) &&
         (pFVar1->Data == (FScriptContainerElement *)0x0)) {
        pFVar1->Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (0x10,8,(long64)local_2f8,(long64)pFVar1->Data,pFVar2,(long64)local_2f8,
                   (long64 *)pFVar1);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          memcpy(pFVar2->Data,_Src.Data,(longlong)pFVar9 << 4);
        }
      }
    }
    lVar29 = 0;
    iVar15 = iStack_3e4 * local_3e8;
    if (0 < iVar15) {
      do {
        iVar14 = (((local_3f8._s_0.Y - local_3b8._12_4_) + (int)(lVar29 / (longlong)local_3e8)) *
                  local_3b8._24_4_ - local_3b8._8_4_) + local_3f8._s_0.X +
                 (int)(lVar29 % (longlong)local_3e8);
        uVar16 = 0;
        if (iVar14 < lStack_370) {
          uVar16 = (uint)(iVar14 >> 0x1f) >> 0x1f ^ 1;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        *(longlong *)(*(longlong *)this + 0x118) =
             *(longlong *)(*(longlong *)this + 0x118) +
             (longlong)*(int *)(local_378.Data + (longlong)iVar14 * 4);
        UNLOCK();
        lVar29 = lVar29 + 1;
      } while (lVar29 < iVar15);
    }
    pFVar18 = ::operator_new(0x28);
    if (pFVar18 == (FVector2i_u_0 *)0x0) {
      local_418 = (FVector2i_u_0 *)0x0;
    }
    else {
      iVar15 = *(int *)(*(longlong *)this + 0x488) + 1;
      *pFVar18 = local_2d8;
      pFVar18[1] = FStack_2d0;
      pFVar18[3]._s_0.X = iVar15;
      pFVar18[2] = local_2c8;
      local_418 = pFVar18;
      FVar19 = (FVector2i_u_0)
               FMemory::MallocZeroed
                         ((longlong)(*(int *)((longlong)pFVar18 + 0x14) * pFVar18[2]._s_0.X) *
                          (longlong)iVar15 * 4,0);
      pFVar18[4] = FVar19;
    }
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId484,"FMeshMapBaker::Bake_EvalTileSamples",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
                 ,0x1e4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId484);
    }
    dVar8 = __real_3fe0000000000000;
    uVar7 = _UNK_15060db28;
    uVar17 = ___xmm_ffffffffffffffffffffffffffffffff;
    dVar6 = __real_3ff0000000000000;
    iVar15 = local_2e8.Size * local_2e8.Size;
    local_3e0 = local_3e8;
    local_40c = iStack_3e4;
    local_420 = 0;
    local_410 = iVar15;
    if (0 < iStack_3e4) {
      local_3d0 = (longlong)iVar15;
      iVar14 = local_3e8;
      iVar25 = iStack_3e4;
      do {
        local_424 = 0;
        if (0 < iVar14) {
          do {
            iVar14 = local_424;
            lVar29 = *(longlong *)this;
            UE::Core::Private::Function::CheckCallable(*(void **)(lVar29 + 0x40));
            pcVar3 = *(code **)(lVar29 + 0x40);
            plVar26 = (longlong *)(lVar29 + 0x50);
            if (*(longlong **)(lVar29 + 0x68) != (longlong *)0x0) {
              plVar26 = *(longlong **)(lVar29 + 0x68);
            }
            uVar20 = (**(code **)(*plVar26 + 8))();
            cVar10 = (*pcVar3)(uVar20);
            pFVar18 = local_418;
            if (cVar10 != '\0') {
              if (local_418 != (FVector2i_u_0 *)0x0) {
                FMemory::Free((void *)local_418[4]);
                ::operator_delete(pFVar18,0x28);
              }
              if (bVar11) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              goto LAB_14c8b3252;
            }
            local_400._s_0.Y = local_420 + local_3f8._s_0.Y;
            local_400._s_0.X = local_3f8._s_0.X + iVar14;
            iVar25 = ((local_400._s_0.Y - local_3b8._12_4_) * local_3b8._24_4_ - local_3b8._8_4_) +
                     local_400._s_0.X;
            lVar29 = (longlong)iVar25;
            uVar16 = 0;
            if (lVar29 < lStack_370) {
              uVar16 = (uint)(iVar25 >> 0x1f) >> 0x1f ^ 1;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar26 = local_3d8;
            iVar25 = local_410;
            if ((*(int *)(local_378.Data + lVar29 * 4) != 0) &&
               (iVar31 = 0, iVar14 = local_424, 0 < iVar15)) {
              lVar29 = local_3d0 * lVar29;
              lVar32 = lVar29;
              do {
                uVar28 = (uint)((ulonglong)lVar29 >> 0x3f) ^ 1;
                uVar16 = 0;
                if (lVar29 < local_388) {
                  uVar16 = uVar28;
                }
                if ((uVar16 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (local_390.Data[lVar32] == (FScriptContainerElement)0x1) {
                  iVar15 = *(int *)(*plVar26 + 0x450);
                  lVar30 = (longlong)iVar15;
                  lVar21 = local_400._s_0.Y * lVar30 + (longlong)local_400._s_0.X;
                  local_3c8._s_0.X =
                       (((double)(iVar31 % local_2e8.Size) + dVar8) *
                        (dVar6 / (double)local_2e8.Size) + (double)(int)(lVar21 % lVar30)) /
                       (double)iVar15;
                  uVar16 = 0;
                  if (lVar32 < local_358) {
                    uVar16 = uVar28;
                  }
                  local_3c8._s_0.Y =
                       (((double)(iVar31 / local_2e8.Size) + dVar8) *
                        (dVar6 / (double)local_2e8.Size) + (double)(int)(lVar21 / lVar30)) /
                       (double)*(int *)(*plVar26 + 0x454);
                  if ((uVar16 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  local_2b8 = (double)*(float *)(FStack_360.Data + lVar32 * 8 + 4);
                  uStack_210 = 0xffffffffffffffff;
                  local_208 = 0xffffffff;
                  uVar16 = 0;
                  if (lVar32 < lStack_340) {
                    uVar16 = uVar28;
                  }
                  dStack_200 = 0.0;
                  local_1e8 = 0.0;
                  dStack_1e0 = 0.0;
                  local_1d8 = 0.0;
                  local_268._0_8_ = uVar17;
                  local_268._8_8_ = uVar7;
                  local_268._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  dStack_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  dStack_230 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_228 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  dStack_220 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_1b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  local_1b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_1b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  local_2c0 = (double)*(float *)(FStack_360.Data + lVar32 * 8);
                  dStack_240 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  dStack_238 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  local_1f8 = 0.0;
                  dStack_1f0 = 0.0;
                  dStack_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  if ((uVar16 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  cVar10 = (**(code **)(*(longlong *)(*plVar26 + 0x360) + 0x10))
                                     ((longlong *)(*plVar26 + 0x360),
                                      *(undefined4 *)(local_348.Data + lVar32 * 4),&local_2c0,
                                      local_268);
                  if (cVar10 != '\0') {
                    UE::Geometry::FMeshUVSampleInfo::FMeshUVSampleInfo(&local_198.BaseSample);
                    puVar5 = (undefined8 *)plVar26[7];
                    local_198.BaseNormal.field0_0x0._s_0.X =
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    local_198.BaseNormal.field0_0x0._s_0.Y =
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_198.DetailMesh = (void *)0x0;
                    local_198.DetailBaryCoords.field0_0x0._s_0.X =
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    local_198.DetailBaryCoords.field0_0x0._s_0.Y =
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_198.BaseNormal.field0_0x0._s_0.Z =
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    local_198.DetailTriID = -1;
                    local_198.DetailBaryCoords.field0_0x0._s_0.Z =
                         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
                              ((TDynamicMeshOverlay<float,3> *)puVar5[1],local_268._0_4_,&dStack_1d0
                               ,(double *)&local_198.BaseNormal);
                    UE::Geometry::Normalize<double>(&local_198.BaseNormal,0.0);
                    local_198.BaseSample._0_8_ = local_268._0_8_;
                    local_198.BaseSample.MeshVertices.field0_0x0._4_8_ = local_268._8_8_;
                    local_198.BaseSample.Triangle3D.V[0].field0_0x0._s_0.X =
                         (double)local_268._16_8_;
                    local_198.BaseSample.Triangle3D.V[0].field0_0x0._s_0.Y = dStack_250;
                    local_198.BaseSample.Triangle3D.V[0].field0_0x0._s_0.Z = local_248;
                    local_198.BaseSample.Triangle3D.V[1].field0_0x0._s_0.X = dStack_240;
                    local_198.BaseSample.Triangle3D.V[1].field0_0x0._s_0.Y = dStack_238;
                    local_198.BaseSample.Triangle3D.V[1].field0_0x0._s_0.Z = dStack_230;
                    local_198.BaseSample.Triangle3D.V[2].field0_0x0._s_0.X = local_228;
                    local_198.BaseSample.Triangle3D.V[2].field0_0x0._s_0.Y = dStack_220;
                    local_198.BaseSample._100_4_ = uStack_204;
                    local_198.BaseSample.UVVertices.field0_0x0._s_0.C = local_208;
                    local_198.BaseSample.Triangle3D.V[2].field0_0x0._s_0.Z = local_218;
                    local_198.BaseSample.UVVertices.field0_0x0._0_8_ = uStack_210;
                    local_198.BaseSample.TriangleUV.V[0].field0_0x0._s_0.X = dStack_200;
                    local_198.BaseSample.TriangleUV.V[0].field0_0x0._s_0.Y = local_1f8;
                    local_198.BaseSample.TriangleUV.V[1].field0_0x0._s_0.X = dStack_1f0;
                    local_198.BaseSample.TriangleUV.V[1].field0_0x0._s_0.Y = local_1e8;
                    local_198.BaseSample.TriangleUV.V[2].field0_0x0._s_0.X = dStack_1e0;
                    local_198.BaseSample.TriangleUV.V[2].field0_0x0._s_0.Y = local_1d8;
                    local_198.BaseSample.BaryCoords.field0_0x0._s_0.X = dStack_1d0;
                    local_198.BaseSample.BaryCoords.field0_0x0._s_0.Y = dStack_1c8;
                    local_198.BaseSample.BaryCoords.field0_0x0._s_0.Z = dStack_1c0;
                    local_198.BaseSample.SurfacePoint.field0_0x0._s_0.X = local_1b8._s_0.X;
                    local_198.BaseSample.SurfacePoint.field0_0x0._s_0.Y = local_1b8._s_0.Y;
                    local_198.BaseSample.SurfacePoint.field0_0x0._s_0.Z = local_1b8._s_0.Z;
                    local_198.DetailMesh = (void *)0x0;
                    local_198.DetailTriID = -1;
                    if ((*(int *)(puVar5 + 2) == 3) &&
                       (cVar10 = (**(code **)(**(longlong **)(puVar5[3] + 0x38) + 0x40))(),
                       cVar10 != '\0')) {
                      local_198.DetailMesh = (void *)*puVar5;
                      local_198.DetailTriID = local_268._0_4_;
                      local_198.DetailBaryCoords.field0_0x0._s_0.X = dStack_1d0;
                      local_198.DetailBaryCoords.field0_0x0._s_0.Y = dStack_1c8;
                      local_198.DetailBaryCoords.field0_0x0._s_0.Z = dStack_1c0;
                    }
                    else if ((*(int *)(puVar5 + 2) == 1) &&
                            (cVar10 = (**(code **)(**(longlong **)(puVar5[3] + 0x38) + 0x48))(),
                            cVar10 != '\0')) {
                      local_198.DetailMesh =
                           UE::Geometry::GetDetailMeshTrianglePoint_Nearest
                                     (*(IMeshBakerDetailSampler **)(puVar5[3] + 0x38),
                                      (TVector<double> *)&local_1b8._s_0,&local_198.DetailTriID,
                                      &local_198.DetailBaryCoords);
                    }
                    else if ((*(int *)(puVar5 + 2) == 4) &&
                            (cVar10 = (**(code **)(**(longlong **)(puVar5[3] + 0x38) + 0x58))(),
                            cVar10 != '\0')) {
                      local_198.DetailMesh =
                           (void *)(**(code **)(**(longlong **)(puVar5[3] + 0x38) + 0x60))
                                             (*(longlong **)(puVar5[3] + 0x38),local_268,&local_198)
                      ;
                    }
                    else {
                      local_288._s_0.Z = local_198.BaseNormal.field0_0x0._s_0.Z;
                      local_288._s_0.X = local_198.BaseNormal.field0_0x0._s_0.X;
                      local_288._s_0.Y = local_198.BaseNormal.field0_0x0._s_0.Y;
                      local_198.DetailMesh =
                           UE::Geometry::GetDetailMeshTrianglePoint_Raycast
                                     (*(IMeshBakerDetailSampler **)(puVar5[3] + 0x38),
                                      (TVector<double> *)&local_1b8._s_0,
                                      (TVector<double> *)&local_288._s_0,&local_198.DetailTriID,
                                      &local_198.DetailBaryCoords,*(double *)(puVar5[3] + 0x28),
                                      *(int *)(puVar5 + 2) == 2);
                    }
                    cVar10 = (**(code **)(**(longlong **)(puVar5[3] + 0x38) + 0x68))
                                       (*(longlong **)(puVar5[3] + 0x38),&local_198);
                    if (cVar10 != '\0') {
                      UE::Geometry::FMeshMapBaker::BakeSample
                                ((FMeshMapBaker *)*plVar26,(FMeshMapTileBuffer *)&local_418->_s_0,
                                 &local_198,(TVector2<double> *)&local_3c8._s_0,
                                 (FVector2i *)&local_400._s_0,(FImageOccupancyMap *)local_3b8);
                    }
                    lVar21 = *plVar26;
                    local_430[0] = cVar10;
                    UE::Core::Private::Function::CheckCallable(*(void **)(lVar21 + 0xa0));
                    pcVar3 = *(code **)(lVar21 + 0xa0);
                    plVar27 = (longlong *)(lVar21 + 0xb0);
                    if (*(longlong **)(lVar21 + 200) != (longlong *)0x0) {
                      plVar27 = *(longlong **)(lVar21 + 200);
                    }
                    uVar20 = (**(code **)(*plVar27 + 8))();
                    (*pcVar3)(uVar20,local_430,&local_198,&local_3c8);
                  }
                }
                iVar31 = iVar31 + 1;
                lVar29 = lVar29 + 1;
                lVar32 = lVar32 + 1;
                this = local_3d8;
                iVar15 = local_410;
                iVar14 = local_424;
              } while (iVar31 < iVar25);
            }
            local_424 = iVar14 + 1;
            iVar14 = local_3e0;
            iVar25 = local_40c;
          } while (local_424 < local_3e0);
        }
        local_420 = local_420 + 1;
      } while (local_420 < iVar25);
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    this_01 = *(void **)((longlong)this + 0x28);
    pTVar22 = UE::Geometry::FMeshMapBaker::EvaluatorIdsForMode(*(FMeshMapBaker **)this,Overwrite);
    pFVar18 = local_418;
    __l2::<lambda_3>::
    operator()<__UE::Geometry::FMeshMapBaker::Bake_::__l2::<lambda_5>::operator()_::__l2::<lambda_3>_const_&,__UE::Geometry::FMeshMapBaker::Bake_::__l2::<lambda_5>::operator()_::__l2::<lambda_2>_const_&>
              (this_01,(FMeshMapTileBuffer *)&local_418->_s_0,(FImageTile *)&local_3f8._s_0,pTVar22,
               local_427,&local_428);
    *(FVector2i_u_0 **)
     ((longlong)local_408 * 0x40 + *(longlong *)(*(longlong *)((longlong)this + 0x20) + 8)) =
         pFVar18;
    __l2::<lambda_4>::operator()
              (*(void **)((longlong)this + 0x30),*(FMeshMapBakerQueue **)((longlong)this + 0x20));
LAB_14c8b3252:
    if (FStack_300.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_300.Data);
    }
    if ((FVector2i_u_0 *)local_318.Data != (FVector2i_u_0 *)0x0) {
      FMemory::Free(local_318.Data);
    }
    if (FStack_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_330.Data);
    }
    if (local_348.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data);
    }
    if (FStack_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_360.Data);
    }
    if (local_378.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data);
    }
    if (local_390.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data);
    }
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14c8b3f00

void __thiscall
`UE::Geometry::FMeshMapBaker::Bake'::__l29::<lambda_6>::operator()(void *this,int param_1)

{
  float fVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  longlong local_res18;
  longlong local_res20;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId617,"FMeshMapBaker::Bake_WriteToImageBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
               ,0x269);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId617);
  }
  fVar7 = __real_3f800000;
  piVar2 = *(int **)((longlong)this + 8);
  iVar12 = *piVar2;
  iVar11 = piVar2[2];
  iVar14 = (uint)(iVar12 % iVar11 != 0) + iVar12 / iVar11;
  iVar18 = param_1 / iVar14;
  iVar14 = param_1 % iVar14;
  iVar15 = iVar11 * iVar14;
  iVar19 = iVar12;
  if (iVar15 < iVar12) {
    iVar19 = iVar15;
  }
  iVar15 = 0;
  if (0 < iVar19) {
    iVar15 = iVar19;
  }
  iVar19 = piVar2[1];
  iVar10 = piVar2[3] * iVar18;
  iVar6 = iVar19;
  if (iVar10 < iVar19) {
    iVar6 = iVar10;
  }
  iVar10 = 0;
  if (0 < iVar6) {
    iVar10 = iVar6;
  }
  iVar11 = (iVar14 + 1) * iVar11;
  if (iVar11 < iVar12) {
    iVar12 = iVar11;
  }
  iVar11 = (iVar18 + 1) * piVar2[3];
  if (iVar11 < iVar19) {
    iVar19 = iVar11;
  }
  iVar11 = 0;
  if (0 < iVar12) {
    iVar11 = iVar12;
  }
  iVar12 = 0;
  if (0 < iVar19) {
    iVar12 = iVar19;
  }
  iVar19 = 0;
  if (0 < iVar12 - iVar10) {
    do {
      iVar14 = 0;
      if (0 < iVar11 - iVar15) {
        do {
          lVar3 = *(longlong *)this;
          UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x40));
          pcVar4 = *(code **)(lVar3 + 0x40);
          plVar16 = (longlong *)(lVar3 + 0x50);
          if (*(longlong **)(lVar3 + 0x68) != (longlong *)0x0) {
            plVar16 = *(longlong **)(lVar3 + 0x68);
          }
          uVar13 = (**(code **)(*plVar16 + 8))();
          cVar8 = (*pcVar4)(uVar13);
          if (cVar8 != '\0') goto LAB_14c8b41e6;
          lVar3 = *(longlong *)this;
          local_res20 = (longlong)(iVar10 + iVar19) * (longlong)*(int *)(lVar3 + 0x450) +
                        (longlong)(iVar14 + iVar15);
          lVar5 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x20);
          lVar17 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x18) * local_res20;
          local_res18 = lVar5 + 4 + lVar17 * 4;
          local_90 = &local_res18;
          fVar1 = *(float *)(lVar5 + lVar17 * 4);
          local_88 = &local_res20;
          local_98 = lVar3;
          if (0.0 < fVar1) {
            if ((*(int *)(lVar3 + 0x4b8) < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ``UE::Geometry::FMeshMapBaker::Bake'::__l29::<lambda_6>::operator()'::__l7::<lambda_1>::
            operator()(&local_98,*(TArray<int,TSizedDefaultAllocator<32>_> **)(lVar3 + 0x4b0),
                       fVar7 / fVar1);
          }
          lVar3 = *(longlong *)this;
          if ((*(int *)(lVar3 + 0x4b8) < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ``UE::Geometry::FMeshMapBaker::Bake'::__l29::<lambda_6>::operator()'::__l7::<lambda_1>::
          operator()(&local_98,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)(lVar3 + 0x4b0) + 0x10),fVar7);
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar11 - iVar15);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar12 - iVar10);
  }
LAB_14c8b41e6:
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14c8b4240

void __thiscall
`UE::Geometry::FMeshMapBaker::Bake'::__l38::<lambda_7>::operator()(void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  long64 lVar6;
  long64 lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  TVector4<float> *pTVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  longlong *plVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 local_res20 [8];
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId694,"FMeshMapBaker::Bake_WriteGutterPixels",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
               ,0x2b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId694);
  }
  lVar3 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x40));
  pcVar4 = *(code **)(lVar3 + 0x40);
  plVar24 = (longlong *)(lVar3 + 0x50);
  if (*(longlong **)(lVar3 + 0x68) != (longlong *)0x0) {
    plVar24 = *(longlong **)(lVar3 + 0x68);
  }
  uVar15 = (**(code **)(*plVar24 + 8))();
  cVar11 = (*pcVar4)(uVar15);
  if (cVar11 == '\0') {
    plVar24 = *(longlong **)((longlong)this + 0x18);
    uVar26 = (uint)~param_1 >> 0x1f;
    uVar21 = 0;
    if (param_1 < (int)plVar24[1]) {
      uVar21 = uVar26;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar20 = 0;
    lVar3 = (longlong)param_1 * 0x18;
    lVar5 = *(longlong *)(*plVar24 + 8 + lVar3);
    if (0 < lVar5) {
      lVar25 = 0;
      do {
        plVar24 = *(longlong **)((longlong)this + 0x18);
        uVar21 = 0;
        if (param_1 < (int)plVar24[1]) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar27 = *plVar24;
        if ((*(longlong *)(lVar27 + 8 + lVar3) <= lVar20) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar27 = *(longlong *)(lVar27 + lVar3);
        uVar21 = 0;
        lVar6 = *(long64 *)(lVar27 + lVar25);
        lVar7 = *(long64 *)(lVar27 + 8 + lVar25);
        if (0 < **(int **)((longlong)this + 8)) {
          lVar27 = 0;
          do {
            lVar22 = *(longlong *)this;
            uVar13 = 0;
            if ((int)uVar21 < *(int *)(lVar22 + 0x508)) {
              uVar13 = ~uVar21 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar22 = *(longlong *)(lVar27 + *(longlong *)(lVar22 + 0x500));
            pTVar16 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar22 + 8),lVar7);
            uVar15 = *(undefined8 *)&pTVar16->field0_0x0;
            uVar10 = *(undefined8 *)((longlong)&pTVar16->field0_0x0 + 8);
            pTVar16 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar22 + 8),lVar6);
            uVar21 = uVar21 + 1;
            lVar27 = lVar27 + 8;
            *(undefined8 *)&pTVar16->field0_0x0 = uVar15;
            *(undefined8 *)((longlong)&pTVar16->field0_0x0 + 8) = uVar10;
          } while ((int)uVar21 < **(int **)((longlong)this + 8));
        }
        lVar20 = lVar20 + 1;
        lVar25 = lVar25 + 0x10;
      } while (lVar20 < lVar5);
    }
    plVar24 = *(longlong **)((longlong)this + 0x10);
    uVar21 = 0;
    if (param_1 < (int)plVar24[1]) {
      uVar21 = uVar26;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar20 = *(longlong *)(lVar3 + 8 + *plVar24);
    pTVar17 = UE::Geometry::FMeshMapBaker::EvaluatorIdsForMode(*(FMeshMapBaker **)this,Overwrite);
    uVar21 = pTVar17->ArrayNum;
    uVar18 = (ulonglong)(int)uVar21;
    pFVar23 = (pTVar17->AllocatorInstance).Data;
    pFVar1 = pFVar23 + uVar18 * 4;
    while( true ) {
      if (pTVar17->ArrayNum != (int)uVar18) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar23 == pFVar1) break;
      uVar13 = *(uint *)pFVar23;
      lVar25 = *(longlong *)this;
      uVar14 = 0;
      if ((int)uVar13 < *(int *)(lVar25 + 0x4a8)) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar27 = *(longlong *)this;
      iVar2 = *(int *)((longlong)(int)uVar13 * 0x40 + 0x38 + *(longlong *)(lVar25 + 0x4a0));
      lVar25 = (longlong)iVar2;
      uVar14 = 0;
      if ((int)uVar13 < *(int *)(lVar27 + 0x4e8)) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = (ulonglong)*(int *)(*(longlong *)(lVar27 + 0x4e0) + (longlong)(int)uVar13 * 4);
      if (0 < iVar2) {
        lVar27 = uVar18 * 8;
        do {
          lVar22 = 0;
          uVar13 = (uint)uVar18;
          if (0 < lVar20) {
            lVar19 = 0;
            do {
              plVar24 = *(longlong **)((longlong)this + 0x10);
              uVar14 = 0;
              if (param_1 < (int)plVar24[1]) {
                uVar14 = uVar26;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              plVar24 = (longlong *)(lVar3 + *plVar24);
              if ((plVar24[1] <= lVar22) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar8 = *plVar24;
              lVar9 = *(longlong *)this;
              lVar6 = *(long64 *)(lVar19 + lVar8);
              lVar7 = *(long64 *)(lVar19 + 8 + lVar8);
              uVar14 = 0;
              if ((int)uVar13 < *(int *)(lVar9 + 0x508)) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar8 = *(longlong *)(lVar27 + *(longlong *)(lVar9 + 0x500));
              pTVar16 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                  ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar8 + 8),lVar7);
              uVar15 = *(undefined8 *)&pTVar16->field0_0x0;
              uVar10 = *(undefined8 *)((longlong)&pTVar16->field0_0x0 + 8);
              pTVar16 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                  ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar8 + 8),lVar6);
              lVar22 = lVar22 + 1;
              lVar19 = lVar19 + 0x10;
              *(undefined8 *)&pTVar16->field0_0x0 = uVar15;
              *(undefined8 *)((longlong)&pTVar16->field0_0x0 + 8) = uVar10;
            } while (lVar22 < lVar20);
          }
          lVar27 = lVar27 + 8;
          uVar18 = (ulonglong)(uVar13 + 1);
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      pFVar23 = pFVar23 + 4;
      uVar18 = (ulonglong)uVar21;
    }
    LOCK();
    *(longlong *)(*(longlong *)this + 0x120) = *(longlong *)(*(longlong *)this + 0x120) + lVar5;
    UNLOCK();
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddEvaluator @ 14c8b7190

int __thiscall
UE::Geometry::FMeshMapBaker::AddEvaluator
          (FMeshMapBaker *this,TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Geometry::FMeshMapEvaluator,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = &this->Bakers;
  pTVar3 = (TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Bakers).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->Bakers).ArrayNum;
  piVar1 = &(this->Bakers).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Bakers).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FMeshMapEvaluator **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar7;
}

// Bake @ 14c8bd890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshMapBaker::Bake(FMeshMapBaker *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong lVar7;
  atomic<void_*> aVar8;
  void *pvVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  FDynamicMeshAttributeSet *pFVar18;
  FDynamicMesh3 *pFVar19;
  ulong64 uVar20;
  FSlotData *pFVar21;
  undefined8 uVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  FDynamicMeshAttributeSet *pFVar34;
  longlong *plVar35;
  bool bVar36;
  undefined1 auStackY_6d8 [32];
  <lambda_1> local_698 [8];
  FMeshMapBakerQueue local_690;
  int local_670 [2];
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  local_668;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  local_658;
  int local_648 [2];
  undefined8 local_640;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_638;
  undefined8 local_630;
  int local_628;
  int iStack_624;
  FIndex3i_u_0 local_620;
  FImageDimensions local_610;
  int local_608;
  int local_604;
  FDynamicMesh3 *local_600;
  longlong local_5f8;
  FMeshMapBaker *local_5f0;
  LARGE_INTEGER local_5e8;
  LARGE_INTEGER local_5e0;
  LARGE_INTEGER local_5d8;
  LARGE_INTEGER local_5d0;
  LARGE_INTEGER local_5c8;
  FMeshMapBaker *local_5c0;
  undefined8 *local_5b8;
  FMeshMapBaker *local_5b0;
  FMeshMapBaker **local_5a8;
  LARGE_INTEGER local_5a0;
  undefined8 local_598;
  FImageDimensions local_590;
  int local_588;
  int local_584;
  int local_580;
  void *local_578;
  TArrayView<std::nullptr_t,int> local_570;
  code *local_560;
  FMeshMapBaker **local_558;
  TArrayView<std::nullptr_t,int> local_550;
  code *local_540;
  FMeshMapBaker **local_538;
  code *local_530;
  FMeshMapBaker **local_528;
  code *local_520;
  FMeshMapBaker **local_518;
  TVector<double>_u_0 local_510;
  undefined8 local_4f8;
  float local_4f0;
  undefined8 local_4ec;
  float local_4e4;
  TVector2<float>_u_0 local_4e0;
  undefined2 local_4d8;
  undefined1 local_4d6;
  TVector<double>_u_0 local_4d0;
  undefined8 local_4b8;
  float local_4b0;
  undefined8 local_4ac;
  float local_4a4;
  TVector2<float>_u_0 local_4a0;
  undefined2 local_498;
  undefined1 local_496;
  TVector<double>_u_0 local_490;
  undefined8 local_478;
  float local_470;
  undefined8 local_46c;
  float local_464;
  TVector2<float>_u_0 local_460;
  undefined2 local_458;
  undefined1 local_456;
  FMeshMapBaker *local_450;
  FImageDimensions *local_448;
  undefined8 *local_440;
  FMeshMapBaker *local_438;
  longlong local_430;
  <lambda_1> *local_428;
  int *local_420;
  longlong local_418;
  undefined8 local_410;
  int local_408;
  FMeshMapBaker *local_400;
  FMeshMapBaker *local_3f8;
  int *local_3f0;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  *local_3e8;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  *local_3e0;
  FMeshMapBaker *local_3d8;
  FImageDimensions *local_3d0;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  *local_3c8;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  *local_3c0;
  FMeshMapBakerQueue *local_3b8;
  FMeshMapBaker **local_3b0;
  FMeshMapBaker **local_3a8;
  longlong *local_3a0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_398;
  FDynamicMesh3 local_388;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_158;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  bVar36 = -1 < CpuChannel->Enabled;
  local_5f0 = this;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId261,"FMeshMapBaker::Bake",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
               ,0x105);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId261);
  }
  pFVar34 = (FDynamicMeshAttributeSet *)0x0;
  (this->BakeAnalytics).TotalBakeDuration = 0.0;
  (this->BakeAnalytics).WriteToImageDuration = 0.0;
  (this->BakeAnalytics).WriteToGutterDuration = 0.0;
  LOCK();
  (this->BakeAnalytics).NumSamplePixels = (atomic<__int64>)0x0;
  UNLOCK();
  LOCK();
  (this->BakeAnalytics).NumGutterPixels = (atomic<__int64>)0x0;
  UNLOCK();
  QueryPerformanceCounter(&local_5a0);
  dVar13 = (double)local_5a0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (((this->Bakers).ArrayNum != 0) && (*(longlong *)&this->field_0x8 != 0)) {
    InitBake(this);
    lVar27 = *(longlong *)&this->field_0x8;
    local_5f8 = lVar27;
    if (((lVar27 == 0) ||
        ((*(longlong **)(lVar27 + 0x208) == (longlong *)0x0 ||
         (iVar32 = *(int *)&this->field_0x20,
         iVar17 = (**(code **)(**(longlong **)(lVar27 + 0x208) + 0xa8))(), iVar17 <= iVar32)))) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TargetMesh && TargetMesh->HasAttributes() && TargetMeshUVLayer < TargetMesh->Attributes()->NumUVLayers()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshBaseBaker.h"
                            ,0x4b,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar6 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->field_0x8 + 0x208);
    pFVar18 = pFVar34;
    if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar18 = pFVar6;
    }
    local_638 = FDynamicMeshAttributeSet::GetUVLayer(pFVar18,*(int *)&this->field_0x20);
    if (((*(longlong *)&this->field_0x8 == 0) ||
        (*(longlong *)(*(longlong *)&this->field_0x8 + 0x208) == 0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TargetMesh && TargetMesh->HasAttributes()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshBaseBaker.h"
                            ,0x54,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar6 = *(FDynamicMeshAttributeSet **)(*(longlong *)&this->field_0x8 + 0x208);
    pFVar18 = pFVar34;
    if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar18 = pFVar6;
    }
    if ((pFVar18->NormalLayers).Array.ArrayNum < 1) {
      local_640 = 0;
    }
    else {
      local_640 = *(undefined8 *)(pFVar18->NormalLayers).Array.AllocatorInstance.Data;
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId279,"FMeshMapBaker::Bake_CreateUVMesh",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
                 ,0x117);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId279);
    }
    local_600 = &this->FlatMesh;
    pFVar19 = FDynamicMesh3::FDynamicMesh3(&local_388,FaceGroups);
    FDynamicMesh3::operator=(&this->FlatMesh,pFVar19);
    FDynamicMesh3::~FDynamicMesh3(&local_388);
    pFVar19 = local_600;
    pTVar14 = local_638;
    uVar31 = *(int *)(lVar27 + 0x140) * 0x200 + *(int *)(lVar27 + 0x144);
    if (((uVar31 != 0) &&
        (pFVar34 = (FDynamicMeshAttributeSet *)0x0,
        0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar27 + 0x148) - 1U))) &&
       (pFVar34 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < (int)uVar31)) {
      do {
        uVar26 = (ulonglong)((uint)pFVar34 & 0x1ff);
        lVar7 = (*(undefined8 **)(lVar27 + 0x148))[(ulonglong)pFVar34 >> 9];
        if ((*(short *)(lVar7 + uVar26 * 2) != 0) && (*(short *)(lVar7 + uVar26 * 2) != -1)) break;
        uVar33 = (uint)pFVar34 + 1;
        pFVar34 = (FDynamicMeshAttributeSet *)(ulonglong)uVar33;
      } while ((int)uVar33 < (int)uVar31);
    }
    uVar33 = (uint)pFVar34;
joined_r0x00014c8bdb65:
    if (uVar33 != uVar31) {
      while( true ) {
        iVar32 = (int)pFVar34;
        uVar5 = iVar32 * 3;
        uVar33 = *(uint *)(*(longlong *)
                            (*(longlong *)&pTVar14->field_0x78 + (ulonglong)(uVar5 >> 9) * 8) +
                          (ulonglong)(uVar5 & 0x1ff) * 4);
        if (-1 < (int)uVar33) {
          lVar27 = *(longlong *)&pTVar14->field_0x48;
          local_510._s_0.Z = 0.0;
          local_4f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_4ec = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_4d8 = 0;
          local_4d6 = 0;
          uVar5 = *(uint *)(*(longlong *)
                             (*(longlong *)&pTVar14->field_0x78 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                           (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
          fVar1 = *(float *)(*(longlong *)(lVar27 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
          fVar2 = *(float *)(*(longlong *)(lVar27 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
          uVar5 = iVar32 * 3 + 2;
          uVar5 = *(uint *)(*(longlong *)
                             (*(longlong *)&pTVar14->field_0x78 + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 4);
          fVar3 = *(float *)(*(longlong *)(lVar27 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
          fVar4 = *(float *)(*(longlong *)(lVar27 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
          local_510._s_0.X =
               (double)*(float *)(*(longlong *)
                                   (lVar27 + (ulonglong)((uVar33 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar33 * 2 & 0x1ff) * 4);
          local_510._s_0.Y =
               (double)*(float *)(*(longlong *)
                                   (lVar27 + (ulonglong)((uVar33 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar33 * 2 + 1 & 0x1ff) * 4);
          local_4f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_4e4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_4e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          iVar17 = FDynamicMesh3::AppendVertex(pFVar19,(FVertexInfo *)&local_510._s_0);
          local_4d0._s_0.X = (double)fVar1;
          local_4d0._s_0.Y = (double)fVar2;
          local_4d0._s_0.Z = 0.0;
          local_4b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_4a4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_4b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_4ac = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_4a0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_498 = 0;
          local_496 = 0;
          local_620._s_0.B = FDynamicMesh3::AppendVertex(pFVar19,(FVertexInfo *)&local_4d0._s_0);
          local_490._s_0.X = (double)fVar3;
          local_470 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_464 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_460 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_458 = 0;
          local_490._s_0.Y = (double)fVar4;
          local_456 = 0;
          local_478 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_46c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_490._s_0.Z = 0.0;
          local_620._s_0.A = iVar17;
          local_620._s_0.C = FDynamicMesh3::AppendVertex(pFVar19,(FVertexInfo *)&local_490._s_0);
          FDynamicMesh3::AppendTriangle(pFVar19,(FIndex3i *)&local_620._s_0,iVar32);
          lVar27 = local_5f8;
        }
        uVar33 = iVar32 + 1;
        pFVar34 = (FDynamicMeshAttributeSet *)(ulonglong)uVar33;
        this = local_5f0;
        if ((int)uVar31 <= (int)uVar33) break;
        while( true ) {
          uVar26 = (ulonglong)((uint)pFVar34 & 0x1ff);
          lVar7 = *(longlong *)(*(longlong *)(lVar27 + 0x148) + ((ulonglong)pFVar34 >> 9) * 8);
          if ((*(short *)(lVar7 + uVar26 * 2) != 0) && (*(short *)(lVar7 + uVar26 * 2) != -1))
          break;
          uVar33 = (uint)pFVar34 + 1;
          pFVar34 = (FDynamicMeshAttributeSet *)(ulonglong)uVar33;
          if ((int)uVar31 <= (int)uVar33) goto joined_r0x00014c8bdb65;
        }
      }
      goto joined_r0x00014c8bdb65;
    }
    uVar26 = 0;
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              (&local_158,&this->FlatMesh,true);
    local_428 = local_698;
    iVar32 = *(int *)&this->field_0x30;
    local_518 = &local_438;
    local_420 = local_670;
    local_698[0] = (<lambda_1>)0x1;
    local_670[0] = 0;
    local_520 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshMapBaker::Bake'::__l2::<lambda_1>,void,void_const_*>
                ::Call;
    local_438 = this;
    local_430 = lVar27;
    (**(code **)(**(longlong **)&this->field_0x38 + 8))();
    if ((iVar32 == 3) && ((local_698[0] == (<lambda_1>)0x0 || (local_670[0] != 1)))) {
      bVar15 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8372898551524490954>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
                          ,0x136,"bIsIdentity && NumDetailMeshes == 1");
      if (bVar15) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar32 = 1;
    }
    local_410 = local_640;
    local_418 = lVar27;
    local_408 = iVar32;
    local_400 = this;
    (**(code **)((this->MeshUVSampler)._padding_ + 8))(&this->MeshUVSampler,lVar27,local_638,1);
    local_628 = (this->Dimensions).Width;
    iStack_624 = (this->Dimensions).Height;
    local_590 = this->Dimensions;
    local_630 = 0;
    local_598 = 0;
    local_580 = this->BakeSampleBufferSize + 1;
    local_588 = local_628;
    local_584 = iStack_624;
    local_578 = FMemory::MallocZeroed
                          ((longlong)(iStack_624 * local_628) * (longlong)local_580 * 4,0);
    local_610 = this->Dimensions;
    iVar32 = this->TileSize;
    iVar30 = local_610.Width;
    iVar28 = local_610.Height;
    local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar17 = iVar30;
    if (iVar30 < 1) {
      iVar17 = 1;
    }
    if (iVar32 < iVar17) {
      iVar17 = iVar32;
    }
    local_608 = 1;
    if (1 < iVar17) {
      local_608 = iVar17;
    }
    iVar17 = iVar28;
    if (iVar28 < 1) {
      iVar17 = 1;
    }
    if (iVar32 < iVar17) {
      iVar17 = iVar32;
    }
    local_604 = 1;
    if (1 < iVar17) {
      local_604 = iVar17;
    }
    uVar25 = (ulonglong)(uint)(iVar28 >> 0x1f) << 0x20 | (ulonglong)local_610 >> 0x20;
    uVar29 = (ulonglong)(uint)(iVar30 >> 0x1f) << 0x20 | (ulonglong)local_610 & 0xffffffff;
    iVar32 = ((uint)((int)((longlong)uVar29 % (longlong)local_608) != 0) +
             (int)((longlong)uVar29 / (longlong)local_608)) *
             ((uint)((int)((longlong)uVar25 % (longlong)local_604) != 0) +
             (int)((longlong)uVar25 / (longlong)local_604));
    local_658.ArrayNum = 0;
    local_658.ArrayMax = 0;
    local_668.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_668.ArrayNum = 0;
    local_668.ArrayMax = 0;
    TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(&local_658,iVar32,Default);
    TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(&local_668,iVar32,Default);
    local_5b8 = &local_598;
    uVar25 = (ulonglong)iVar32;
    local_5a8 = &local_5c0;
    local_690.Acquired._Storage = (atomic<long>)0x0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar25;
    uVar20 = SUB168(ZEXT816(0x40) * auVar11,0);
    if (SUB168(ZEXT816(0x40) * auVar11,8) != 0) {
      uVar20 = 0xffffffffffffffff;
    }
    local_690.Current = 0;
    local_690.NumSlots = uVar25;
    local_5c0 = this;
    local_5b0 = this;
    local_690.Slots = operator_new__(uVar20,0x40);
    if (local_690.Slots == (FSlotData *)0x0) {
      local_690.Slots = (FSlotData *)0x0;
    }
    else {
      pFVar21 = local_690.Slots;
      if (iVar32 != 0) {
        do {
          pFVar21->Ptr = (atomic<void_*>)0x0;
          pFVar21 = pFVar21 + 1;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    uVar25 = uVar26;
    uVar29 = uVar26;
    if (local_690.NumSlots != 0) {
      do {
        uVar29 = uVar29 + 1;
        LOCK();
        *(undefined8 *)((longlong)&((local_690.Slots)->Ptr).field_0x0 + uVar25) = 0;
        UNLOCK();
        uVar25 = uVar25 + 0x40;
      } while (uVar29 < local_690.NumSlots);
    }
    local_3d0 = &local_610;
    local_3c8 = &local_658;
    local_3c0 = &local_668;
    local_3b8 = &local_690;
    local_570.DataPtr = (void **)0x0;
    local_3b0 = &local_5c0;
    local_570.ArrayNum = 0;
    local_3a8 = &local_5b0;
    local_3a0 = &local_418;
    local_398 = &local_158;
    local_560 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshMapBaker::Bake'::__l2::<lambda_5>,void,int>::
                Call;
    local_558 = &local_3d8;
    local_3d8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar32,1,(TFunctionRef<void___cdecl(int)> *)&local_560,
               local_698[0],(uint)(this->bParallel == false),&local_570);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar24 = *(longlong **)&(this->CancelF).field_0x28;
    plVar35 = (longlong *)&(this->CancelF).field_0x10;
    pcVar10 = *(code **)&this->CancelF;
    plVar23 = plVar35;
    if (plVar24 != (longlong *)0x0) {
      plVar23 = plVar24;
    }
    uVar22 = (**(code **)(*plVar23 + 8))();
    cVar16 = (*pcVar10)(uVar22);
    if (cVar16 == '\0') {
      `UE::Geometry::FMeshMapBaker::Bake'::__l2::<lambda_4>::operator()(&local_5b0,&local_690);
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar24 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar10 = *(code **)&this->CancelF;
      plVar23 = plVar35;
      if (plVar24 != (longlong *)0x0) {
        plVar23 = plVar24;
      }
      uVar22 = (**(code **)(*plVar23 + 8))();
      cVar16 = (*pcVar10)(uVar22);
      if (cVar16 == '\0') {
        QueryPerformanceCounter(&local_5e8);
        local_448 = &local_610;
        local_440 = &local_598;
        local_550.DataPtr = (void **)0x0;
        local_550.ArrayNum = 0;
        local_540 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FMeshMapBaker::Bake'::__l29::<lambda_6>,void,int>
                    ::Call;
        dVar12 = (double)local_5e8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
        local_538 = &local_450;
        local_450 = this;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",iVar32,1,(TFunctionRef<void___cdecl(int)> *)&local_540,
                   local_698[0],(uint)(this->bParallel == false),&local_550);
        QueryPerformanceCounter(&local_5e0);
        pvVar9 = *(void **)&this->CancelF;
        (this->BakeAnalytics).WriteToImageDuration =
             ((double)local_5e0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar12) +
             (this->BakeAnalytics).WriteToImageDuration;
        Core::Private::Function::CheckCallable(pvVar9);
        plVar24 = *(longlong **)&(this->CancelF).field_0x28;
        pcVar10 = *(code **)&this->CancelF;
        if (plVar24 != (longlong *)0x0) {
          plVar35 = plVar24;
        }
        uVar22 = (**(code **)(*plVar35 + 8))(plVar35);
        cVar16 = (*pcVar10)(uVar22);
        if (cVar16 == '\0') {
          Core::Private::Function::CheckCallable(*(void **)&this->PostWriteToImageCallback);
          pcVar10 = *(code **)&this->PostWriteToImageCallback;
          plVar35 = *(longlong **)&(this->PostWriteToImageCallback).field_0x28;
          plVar24 = (longlong *)&(this->PostWriteToImageCallback).field_0x10;
          if (plVar35 != (longlong *)0x0) {
            plVar24 = plVar35;
          }
          uVar22 = (**(code **)(*plVar24 + 8))();
          (*pcVar10)(uVar22);
          bVar15 = Core::Private::Function::
                   TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                   ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                 *)&this->CancelF);
          if ((!bVar15) && (this->bGutterEnabled != false)) {
            QueryPerformanceCounter(&local_5d8);
            local_648[0] = (this->BakeResults).ArrayNum;
            local_3f0 = local_648;
            local_3e8 = &local_658;
            dVar12 = (double)local_5d8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
            local_3e0 = &local_668;
            local_528 = &local_3f8;
            local_530 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FMeshMapBaker::Bake'::__l38::<lambda_7>,void,int>
                        ::Call;
            local_3f8 = this;
            ParallelFor(iVar32,(TFunctionRef<void___cdecl(int)> *)&local_530,
                        (uint)(this->bParallel == false));
            QueryPerformanceCounter(&local_5d0);
            (this->BakeAnalytics).WriteToGutterDuration =
                 ((double)local_5d0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar12) +
                 (this->BakeAnalytics).WriteToGutterDuration;
          }
        }
      }
    }
    else if (local_690.Current < local_690.NumSlots) {
      do {
        aVar8 = local_690.Slots[local_690.Current].Ptr;
        if (aVar8 == (atomic<void_*>)0x0) {
          local_690.Current = local_690.Current + 1;
        }
        else {
          local_690.Slots[local_690.Current].Ptr = (atomic<void_*>)0x0;
          local_690.Current = local_690.Current + 1;
          FMemory::Free(*(void **)((longlong)aVar8 + 0x20));
          ::operator_delete((void *)aVar8,0x28);
        }
      } while (local_690.Current < local_690.NumSlots);
    }
    uVar25 = uVar26;
    if (local_690.NumSlots != 0) {
      do {
        if ((*(longlong *)((longlong)&((local_690.Slots)->Ptr).field_0x0 + uVar26) != 0) &&
           (bVar15 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<98302863578497087>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshMapBakerQueue.h"
                                ,0x3f,"Slots[Idx].Ptr.load(std::memory_order_acquire) == nullptr"),
           bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar25 = uVar25 + 1;
        uVar26 = uVar26 + 0x40;
      } while (uVar25 < local_690.NumSlots);
    }
    operator_delete__(local_690.Slots,0x40);
    if ((local_690.Current != local_690.NumSlots) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<98302863578497090>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshMapBakerQueue.h"
                            ,0x42,"Current == NumSlots"), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    DestructItems<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,int>
              ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)
               local_668.AllocatorInstance.Data,local_668.ArrayNum);
    if ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)
        local_668.AllocatorInstance.Data !=
        (TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)0x0) {
      FMemory::Free(local_668.AllocatorInstance.Data);
    }
    DestructItems<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,int>
              ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)
               local_658.AllocatorInstance.Data,local_658.ArrayNum);
    if ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)
        local_658.AllocatorInstance.Data !=
        (TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)0x0) {
      FMemory::Free(local_658.AllocatorInstance.Data);
    }
    FMemory::Free(local_578);
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              (&local_158);
  }
  QueryPerformanceCounter(&local_5c8);
  (this->BakeAnalytics).TotalBakeDuration =
       ((double)local_5c8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar13) +
       (this->BakeAnalytics).TotalBakeDuration;
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BakeSample @ 14c8c0f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
UE::Geometry::FMeshMapBaker::BakeSample
          (FMeshMapBaker *this,FMeshMapTileBuffer *param_1,FCorrespondenceSample *param_2,
          TVector2<double> *param_3,FVector2i *param_4,FImageOccupancyMap *param_5)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  code *pcVar4;
  float fVar5;
  TVector2<double> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStack_128 [48];
  int local_f8 [2];
  FScriptContainerElement *local_f0;
  FCorrespondenceSample *local_e8;
  FScriptContainerElement *local_e0;
  code *local_d8;
  TVector2<double> *local_d0;
  FMeshMapTileBuffer *local_c8;
  FMeshMapBaker *local_c0;
  FVector2i *local_b8;
  TVector2<double> *local_b0;
  FMeshMapTileBuffer *local_a8;
  FMeshMapTileBuffer *local_a0;
  FImageOccupancyMap *local_98;
  undefined4 local_90;
  FMeshMapBaker *local_88;
  FVector2i *local_80;
  FMeshMapTileBuffer *local_78;
  FMeshMapTileBuffer *local_70;
  ulonglong local_68;
  
  puVar17 = auStack_128;
  local_68 = __security_cookie.value ^ (ulonglong)local_f8;
  pFVar16 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)this->BakeSampleBufferSize * 4;
  local_f0 = pFVar16;
  if (lVar10 != 0) {
    uVar13 = lVar10 + 0x1e;
    if (uVar13 <= lVar10 + 0xfU) {
      uVar13 = 0xffffffffffffff0;
    }
    puVar17 = auStack_128 + -(uVar13 & 0xfffffffffffffff0);
    local_f0 = (FScriptContainerElement *)((longlong)&local_f0 + -(uVar13 & 0xfffffffffffffff0));
  }
  lVar10 = (longlong)(this->Bakers).ArrayNum;
  pFVar18 = pFVar16;
  local_e8 = param_2;
  local_e0 = local_f0;
  local_d0 = param_3;
  local_c8 = param_1;
  if (0 < lVar10) {
    do {
      iVar9 = (this->BakeContexts).ArrayNum;
      uVar15 = (uint)pFVar16;
      uVar8 = 0;
      if ((int)uVar15 < iVar9) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if (uVar8 == 0) {
        *(longlong *)(puVar17 + 0x28) = (longlong)iVar9;
        *(longlong *)(puVar17 + 0x20) = (longlong)(int)uVar15;
        *(undefined8 *)(puVar17 + -8) = 0x14c8c101a;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = (this->BakeContexts).ArrayNum;
      local_d8 = *(code **)(pFVar18 + (longlong)(this->BakeContexts).AllocatorInstance.Data);
      uVar8 = 0;
      if ((int)uVar15 < iVar9) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if (uVar8 == 0) {
        *(longlong *)(puVar17 + 0x28) = (longlong)iVar9;
        *(longlong *)(puVar17 + 0x20) = (longlong)(int)uVar15;
        *(undefined8 *)(puVar17 + -8) = 0x14c8c1072;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pcVar4 = local_d8;
      uVar11 = *(undefined8 *)
                (pFVar18 + (longlong)((this->BakeContexts).AllocatorInstance.Data + 0x20));
      *(undefined8 *)(puVar17 + -8) = 0x14c8c108e;
      (*pcVar4)(&local_e0,param_2,uVar11);
      pFVar16 = (FScriptContainerElement *)(ulonglong)(uVar15 + 1);
      lVar10 = lVar10 + -1;
      pFVar18 = pFVar18 + 0x40;
    } while (lVar10 != 0);
  }
  pFVar16 = local_f0;
  lVar10 = (param_5->TexelQueryUVChart).ArrayNum;
  iVar9 = (((param_4->field0_0x0)._s_0.Y - (param_5->Tile).Start.field0_0x0._s_0.Y) *
           (param_5->Tile).Width - (param_5->Tile).Start.field0_0x0._s_0.X) +
          (param_4->field0_0x0)._s_0.X;
  lVar19 = (longlong)iVar9;
  uVar8 = 0;
  if (lVar19 < lVar10) {
    uVar8 = (uint)(iVar9 >> 0x1f) >> 0x1f ^ 1;
  }
  if (uVar8 == 0) {
    *(longlong *)(puVar17 + 0x28) = lVar10;
    *(longlong *)(puVar17 + 0x20) = lVar19;
    *(undefined8 *)(puVar17 + -8) = 0x14c8c1109;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = local_d0;
  local_b8 = param_4;
  local_90 = *(undefined4 *)((param_5->TexelQueryUVChart).AllocatorInstance.Data + lVar19 * 4);
  pvVar1 = *(void **)&this->SampleFilterF;
  local_b0 = local_d0;
  local_a8 = local_c8;
  local_a0 = local_c8;
  local_98 = param_5;
  local_80 = param_4;
  local_78 = local_c8;
  local_70 = local_c8;
  local_c0 = this;
  local_88 = this;
  if (pvVar1 == (void *)0x0) {
    *(undefined8 *)(puVar17 + -8) = 0x14c8c1216;
    pTVar12 = EvaluatorIdsForMode(this,Add);
    *(undefined8 *)(puVar17 + -8) = 0x14c8c122d;
    `UE::Geometry::FMeshMapBaker::BakeSample'::__l2::<lambda_1>::operator()
              (&local_c0,pTVar12,(float *)pFVar16,__real_3f800000);
  }
  else {
    local_f8[0] = (local_e8->BaseSample).TriangleIndex;
    *(undefined8 *)(puVar17 + -8) = 0x14c8c1171;
    Core::Private::Function::CheckCallable(pvVar1);
    pcVar4 = *(code **)&this->SampleFilterF;
    plVar2 = *(longlong **)&(this->SampleFilterF).field_0x28;
    plVar14 = (longlong *)&(this->SampleFilterF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar14 = plVar2;
    }
    pcVar3 = *(code **)(*plVar14 + 8);
    *(undefined8 *)(puVar17 + -8) = 0x14c8c1190;
    uVar11 = (*pcVar3)();
    *(undefined8 *)(puVar17 + -8) = 0x14c8c119f;
    fVar20 = (float)(*pcVar4)(uVar11,param_4,pTVar6,local_f8);
    fVar5 = __real_3f800000;
    if (__real_3f800000 <= fVar20) {
      fVar20 = __real_3f800000;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14c8c11c2;
    pTVar12 = EvaluatorIdsForMode(this,Add);
    *(undefined8 *)(puVar17 + -8) = 0x14c8c11d5;
    `UE::Geometry::FMeshMapBaker::BakeSample'::__l2::<lambda_1>::operator()
              (&local_c0,pTVar12,(float *)pFVar16,fVar20);
    pFVar18 = (this->BakeDefaults).AllocatorInstance.Data;
    *(undefined8 *)(puVar17 + -8) = 0x14c8c11e6;
    pTVar12 = EvaluatorIdsForMode(this,Add);
    *(undefined8 *)(puVar17 + -8) = 0x14c8c11fd;
    `UE::Geometry::FMeshMapBaker::BakeSample'::__l2::<lambda_1>::operator()
              (&local_c0,pTVar12,(float *)pFVar18,fVar5 - fVar20);
    if (fVar20 == 0.0) {
      pFVar16 = (this->BakeDefaults).AllocatorInstance.Data;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x14c8c123a;
  pTVar12 = EvaluatorIdsForMode(this,Overwrite);
  *(undefined8 *)(puVar17 + -8) = 0x14c8c1249;
  `UE::Geometry::FMeshMapBaker::BakeSample'::__l2::<lambda_2>::operator()
            (&local_88,pTVar12,(float *)pFVar16);
  *(undefined8 *)(puVar17 + -8) = 0x14c8c1258;
  return;
}

// ComputeUVCharts @ 14c8ce900

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FMeshMapBaker::ComputeUVCharts
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  int iVar3;
  FDynamicMeshAttributeSet *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ulonglong local_res18;
  FMeshConnectedComponents local_88;
  code *local_68 [2];
  undefined **local_58;
  longlong local_50;
  undefined8 local_40;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,(param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    *(undefined4 *)pFVar11 = 0xffffffff;
    pFVar11 = pFVar11 + 4;
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    if ((pFVar4->UVLayers).Array.ArrayNum < 1) {
      local_50 = 0;
    }
    else {
      local_50 = *(longlong *)(pFVar4->UVLayers).Array.AllocatorInstance.Data;
    }
    if (local_50 != 0) {
      local_58 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Geometry::FMeshMapBaker::ComputeUVCharts'::`9'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FMeshMapBaker::ComputeUVCharts'::__l9::<lambda_1>,bool,int,int>
                    ::Call;
      local_88.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Components.Array.ArrayNum = 0;
      local_88.Components.Array.ArrayMax = 0;
      local_40 = 0;
      local_88.Mesh = param_1;
      FMeshConnectedComponents::FindConnectedTriangles
                (&local_88,(TFunction<bool___cdecl(int,int)> *)local_68);
      uVar10 = (ulonglong)local_88.Components.Array.ArrayNum;
      uVar13 = 0;
      local_res18 = uVar10;
      if (0 < local_88.Components.Array.ArrayNum) {
        lVar14 = 0;
        while( true ) {
          uVar8 = 0;
          if ((int)uVar13 < (int)uVar10) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar5 = *(undefined8 **)(local_88.Components.Array.AllocatorInstance.Data + lVar14 * 8);
          puVar12 = (uint *)*puVar5;
          iVar3 = *(int *)(puVar5 + 1);
          puVar2 = puVar12 + iVar3;
          while( true ) {
            if (*(int *)(puVar5 + 1) != iVar3) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if (puVar12 == puVar2) break;
            uVar8 = *puVar12;
            uVar9 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar12 = puVar12 + 1;
            *(uint *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = uVar13;
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 1;
          if ((longlong)local_res18 <= lVar14) break;
          uVar10 = local_88.Components.Array._8_8_ & 0xffffffff;
        }
      }
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_88.Components);
    }
  }
  return;
}

// EvaluatorIdsForMode @ 14c8e1c30

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshMapBaker::EvaluatorIdsForMode(FMeshMapBaker *this,EAccumulateMode param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->BakeAccumulateLists).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((this->BakeAccumulateLists).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// GetBakeResults @ 14c8f20e0

TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
* __thiscall
UE::Geometry::FMeshMapBaker::GetBakeResults
          (FMeshMapBaker *this,
          TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
          *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = 0;
  if (param_1 < (this->BakeOffsets).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar6 = *(uint *)((this->BakeOffsets).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar7 = param_1 + 1;
  uVar4 = 0;
  if ((int)uVar7 < (this->BakeOffsets).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar8 = *(int *)((this->BakeOffsets).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) - uVar6;
  uVar4 = 0;
  if ((int)uVar6 < (this->BakeResults).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (this->BakeResults).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar8;
  __return_storage_ptr__->DataPtr =
       (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
        *)(pFVar1 + (longlong)(int)uVar6 * 8);
  if (iVar8 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetEvaluator @ 14c8f44d0

FMeshMapEvaluator * __thiscall
UE::Geometry::FMeshMapBaker::GetEvaluator(FMeshMapBaker *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshMapEvaluator *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bakers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshMapEvaluator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FMeshMapEvaluator **)((this->Bakers).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// InitBake @ 14c8fa980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshMapBaker::InitBake(FMeshMapBaker *this)

{
  FImageDimensions *pFVar1;
  TArray<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>
  *this_01;
  EBakeFilterType EVar2;
  longlong *plVar3;
  FImageDimensions *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  code *pcVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  undefined8 *puVar20;
  FImageDimensions FVar21;
  ulong64 uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  uint local_res20;
  uint local_98 [2];
  int *local_90;
  int local_88;
  uint local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  FScriptContainerElement local_60 [32];
  
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId161,"FMeshMapBaker::InitBake",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
               ,0xa1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId161);
  }
  uVar28 = (this->Bakers).ArrayNum;
  this_00 = &this->BakeContexts;
  TArray<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,uVar28,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->BakeOffsets,uVar28 + 1,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->BakeAccumulateLists,2,Default);
  this->BakeSampleBufferSize = 0;
  local_res20 = 0;
  piVar15 = &(this->BakeOffsets).ArrayNum;
  local_98[0] = 0;
  local_90 = piVar15;
  if (0 < (int)uVar28) {
    do {
      uVar16 = local_98[0];
      uVar13 = 0;
      if ((int)local_98[0] < (this->Bakers).ArrayNum) {
        uVar13 = ~local_98[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar18 = (this->Bakers).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
      if ((*(longlong *)pFVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      plVar3 = *(longlong **)pFVar18;
      lVar19 = (longlong)(int)local_98[0];
      pcVar12 = *(code **)(*plVar3 + 8);
      uVar16 = 0;
      if ((int)local_98[0] < (this->BakeContexts).ArrayNum) {
        uVar16 = ~local_98[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (*pcVar12)(plVar3,this,(this_00->AllocatorInstance).Data + lVar19 * 0x40);
      lVar19 = (longlong)(int)local_98[0];
      uVar16 = 0;
      if ((int)local_98[0] < (this->BakeContexts).ArrayNum) {
        uVar16 = ~local_98[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar16 = 0;
      lVar14 = 0;
      iVar9 = *(int *)((this_00->AllocatorInstance).Data + lVar19 * 0x40 + 0x38);
      if (0 < iVar9) {
        do {
          uVar13 = local_98[0];
          uVar27 = 0;
          if ((int)local_98[0] < (this->BakeContexts).ArrayNum) {
            uVar27 = ~local_98[0] >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar18 = (this_00->AllocatorInstance).Data;
          uVar27 = 0;
          if ((int)uVar16 < *(int *)(pFVar18 + (longlong)(int)uVar13 * 0x40 + 0x38)) {
            uVar27 = ~uVar16 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar16 = uVar16 + 1;
          lVar19 = lVar14 * 4;
          lVar14 = lVar14 + 1;
          this->BakeSampleBufferSize =
               this->BakeSampleBufferSize +
               *(int *)(*(longlong *)(pFVar18 + (longlong)(int)uVar13 * 0x40 + 0x30) + lVar19);
        } while (lVar14 < iVar9);
      }
      lVar19 = (longlong)(int)local_98[0];
      uVar16 = 0;
      if ((int)local_98[0] < *piVar15) {
        uVar16 = ~local_98[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(uint *)((this->BakeOffsets).AllocatorInstance.Data + lVar19 * 4) = local_res20;
      local_res20 = local_res20 + iVar9;
      lVar19 = (longlong)(int)local_98[0];
      uVar16 = 0;
      if ((int)local_98[0] < (this->BakeContexts).ArrayNum) {
        uVar16 = ~local_98[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar16 = *(uint *)((this_00->AllocatorInstance).Data + lVar19 * 0x40 + 0x28);
      uVar13 = 0;
      if ((int)uVar16 < (this->BakeAccumulateLists).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar18 = (this->BakeAccumulateLists).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
      if (((*(uint **)&pFVar18->field_0x0 <= local_98) &&
          (local_98 < *(uint **)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar9 = *(int *)&pFVar18[8].field_0x0;
      if (iVar9 == *(int *)(pFVar18 + 0xc)) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
      }
      *(int *)&pFVar18[8].field_0x0 = iVar9 + 1;
      *(uint *)(*(longlong *)&pFVar18->field_0x0 + (longlong)iVar9 * 4) = local_98[0];
      local_98[0] = local_98[0] + 1;
    } while ((int)local_98[0] < (int)uVar28);
  }
  uVar16 = 0;
  if ((int)uVar28 < *local_90) {
    uVar16 = ~uVar28 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_01 = &this->BakeResults;
  local_68 = (longlong)(int)uVar28;
  piVar15 = &(this->BakeResults).ArrayNum;
  *(uint *)((this->BakeOffsets).AllocatorInstance.Data + local_68 * 4) = local_res20;
  iVar9 = *piVar15;
  if (iVar9 < (int)local_res20) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,local_res20 - iVar9,&this_01->AllocatorInstance,piVar15,
                        &(this->BakeResults).ArrayMax);
    memset((this_01->AllocatorInstance).Data + (longlong)iVar10 * 8,0,
           (longlong)(int)(local_res20 - iVar9) << 3);
  }
  else {
    if ((int)local_res20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res20);
    }
    if ((int)local_res20 < iVar9) {
      uVar16 = iVar9 - local_res20;
      if (((int)(uVar16 | local_res20) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar16 != 0) {
        TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_01,local_res20,uVar16);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_01->AllocatorInstance,(this->BakeResults).ArrayNum,
                   &(this->BakeResults).ArrayMax);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->BakeSampleOffsets,local_res20 + 1,Default);
  iVar9 = 0;
  local_88 = 0;
  local_84 = 0;
  if (0 < (int)uVar28) {
    local_90 = (int *)0x0;
    local_78 = 0;
    do {
      lVar19 = local_78;
      uVar28 = local_84;
      piVar15 = local_90;
      uVar13 = ~local_84 >> 0x1f;
      uVar16 = 0;
      if ((int)local_84 < (this->BakeContexts).ArrayNum) {
        uVar16 = uVar13;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar16 = 0;
      local_80 = 0;
      iVar10 = *(int *)((this->BakeContexts).AllocatorInstance.Data + lVar19 + 0x38);
      lVar14 = (longlong)iVar10;
      if (0 < iVar10) {
        do {
          local_70 = lVar14;
          puVar20 = (undefined8 *)0x0;
          uVar27 = 0;
          if ((int)uVar28 < (this->BakeOffsets).ArrayNum) {
            uVar27 = uVar13;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar27 = *(int *)((this->BakeOffsets).AllocatorInstance.Data + (longlong)piVar15 * 4) +
                   uVar16;
          puVar11 = ::operator_new(0x30);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar20 = puVar11;
          }
          uVar24 = ~uVar27 >> 0x1f;
          uVar28 = 0;
          if ((int)uVar27 < (this->BakeResults).ArrayNum) {
            uVar28 = uVar24;
          }
          if ((uVar28 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar18 = (this->BakeResults).AllocatorInstance.Data + (longlong)(int)uVar27 * 8;
          if (pFVar18 == local_60) {
            if (puVar20 != (undefined8 *)0x0) {
              puVar11 = puVar20;
              if ((void *)puVar20[1] != (void *)0x0) {
                FMemory::Free((void *)puVar20[1]);
              }
              goto LAB_14c8fb185;
            }
          }
          else {
            puVar11 = *(undefined8 **)pFVar18;
            *(undefined8 **)pFVar18 = puVar20;
            if (puVar11 != (undefined8 *)0x0) {
              if ((void *)puVar11[1] != (void *)0x0) {
                FMemory::Free((void *)puVar11[1]);
              }
LAB_14c8fb185:
              ::operator_delete(puVar11,0x30);
            }
          }
          uVar28 = 0;
          if ((int)uVar27 < (this->BakeResults).ArrayNum) {
            uVar28 = uVar24;
          }
          if ((uVar28 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar4 = *(FImageDimensions **)
                    ((this->BakeResults).AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
          FVar21 = (FImageDimensions)(longlong)(this->Dimensions).Width;
          *pFVar4 = this->Dimensions;
          pFVar1 = pFVar4 + 1;
          pFVar4[4] = FVar21;
          uVar22 = (longlong)FVar21 * (longlong)pFVar4->Height;
          pFVar4[5] = (FImageDimensions)(longlong)pFVar4->Height;
          FVar21 = pFVar4[2];
          if (uVar22 - (longlong)FVar21 == 0 || (longlong)uVar22 < (longlong)FVar21) {
            if ((longlong)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum(uVar22);
            }
            if ((longlong)uVar22 < (longlong)FVar21) {
              lVar19 = (longlong)FVar21 - uVar22;
              if (((((uint)((ulonglong)lVar19 >> 0x3f) ^ 1) & ((uint)(uVar22 >> 0x3f) ^ 1)) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar8)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (lVar19 != 0) {
                pFVar18 = (FScriptContainerElement *)(uVar22 * 0x10 + (longlong)*pFVar1);
                lVar14 = ((longlong)pFVar4[2] - uVar22) - lVar19;
                if (lVar14 != 0) {
                  memmove(pFVar18,pFVar18 + lVar19 * 0x10,lVar14 * 0x10);
                }
                FVar21 = pFVar4[2];
                pFVar4[2] = (FImageDimensions)((longlong)FVar21 - lVar19);
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                          (0x10,0x10,(ForAnyElementType *)pFVar1,(longlong)FVar21 - lVar19,
                           (long64 *)(pFVar4 + 3));
              }
            }
          }
          else {
            Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x10,0x10,uVar22 - (longlong)FVar21,(ForAnyElementType *)pFVar1,
                       (long64 *)(pFVar4 + 2),(long64 *)(pFVar4 + 3));
          }
          uVar28 = 0;
          if ((int)uVar27 < (this->BakeSampleOffsets).ArrayNum) {
            uVar28 = uVar24;
          }
          if ((uVar28 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar28 = local_84;
          iVar9 = local_88;
          piVar15 = local_90;
          *(int *)((this->BakeSampleOffsets).AllocatorInstance.Data + (longlong)(int)uVar27 * 4) =
               local_88;
          uVar27 = 0;
          if ((int)local_84 < (this->BakeContexts).ArrayNum) {
            uVar27 = uVar13;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar19 = local_78;
          pFVar18 = (this->BakeContexts).AllocatorInstance.Data;
          uVar27 = 0;
          if ((int)uVar16 < *(int *)(pFVar18 + local_78 + 0x38)) {
            uVar27 = ~uVar16 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar16 = uVar16 + 1;
          iVar9 = iVar9 + *(int *)(*(longlong *)(pFVar18 + lVar19 + 0x30) + local_80 * 4);
          local_80 = local_80 + 1;
          local_88 = iVar9;
          lVar14 = local_70;
        } while (local_80 < local_70);
      }
      local_84 = uVar28 + 1;
      local_90 = (int *)((longlong)piVar15 + 1);
      local_78 = lVar19 + 0x40;
    } while ((longlong)local_90 < local_68);
  }
  lVar19 = (longlong)(int)local_res20;
  uVar28 = 0;
  if ((int)local_res20 < (this->BakeSampleOffsets).ArrayNum) {
    uVar28 = ~local_res20 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  *(int *)((this->BakeSampleOffsets).AllocatorInstance.Data + lVar19 * 4) = iVar9;
  InitBakeDefaults(this);
  uVar28 = 0;
  if (0 < lVar19) {
    lVar14 = 0;
    lVar25 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar28 < (this->BakeResults).ArrayNum) {
        uVar16 = ~uVar28 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar5 = *(longlong *)((this->BakeResults).AllocatorInstance.Data + lVar14 * 8);
      uVar16 = 0;
      if ((int)uVar28 < (this->BakeDefaultColors).ArrayNum) {
        uVar16 = ~uVar28 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar23 = 0;
      lVar26 = *(longlong *)(lVar5 + 0x28) * *(longlong *)(lVar5 + 0x20);
      pFVar18 = (this->BakeDefaultColors).AllocatorInstance.Data + lVar25;
      uVar6 = *(undefined8 *)pFVar18;
      uVar7 = *(undefined8 *)(pFVar18 + 8);
      if (0 < lVar26) {
        lVar17 = 0;
        do {
          if ((*(longlong *)(lVar5 + 0x10) <= lVar23) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar23 = lVar23 + 1;
          puVar20 = (undefined8 *)(lVar17 + *(longlong *)(lVar5 + 8));
          *puVar20 = uVar6;
          puVar20[1] = uVar7;
          lVar17 = lVar17 + 0x10;
        } while (lVar23 < lVar26);
      }
      uVar28 = uVar28 + 1;
      lVar14 = lVar14 + 1;
      lVar25 = lVar25 + 0x10;
    } while (lVar14 < lVar19);
  }
  EVar2 = this->FilterType;
  this->FilterKernelSize = this->TilePadding;
  if (EVar2 == None) {
    this->FilterKernelSize = 0;
    this->TextureFilterEval = EvaluateFilter<0>;
    pcVar12 = EvaluateIsInFilterRegion<0>;
LAB_14c8fb699:
    this->IsInFilterRegionEval = pcVar12;
  }
  else {
    if (EVar2 == Box) {
      this->TextureFilterEval = EvaluateFilter<1>;
      pcVar12 = EvaluateIsInFilterRegion<1>;
      goto LAB_14c8fb699;
    }
    if (EVar2 == BSpline) {
      this->TextureFilterEval = EvaluateFilter<2>;
      pcVar12 = EvaluateIsInFilterRegion<2>;
      goto LAB_14c8fb699;
    }
    if (EVar2 == MitchellNetravali) {
      this->TextureFilterEval = EvaluateFilter<3>;
      pcVar12 = EvaluateIsInFilterRegion<3>;
      goto LAB_14c8fb699;
    }
  }
  if (this->TargetMeshUVCharts != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->TargetMeshUVCharts->ArrayNum == *(int *)(*(longlong *)&this->field_0x8 + 0x170))
    goto LAB_14c8fb702;
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8372898551524491043>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshMapBaker.cpp"
                       ,0xdd,"TargetMeshUVCharts->Num() == TargetMesh->TriangleCount()");
    if (bVar8) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  ComputeUVCharts(*(FDynamicMesh3 **)&this->field_0x8,&this->TargetMeshUVChartsLocal);
  this->TargetMeshUVCharts = &this->TargetMeshUVChartsLocal;
LAB_14c8fb702:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitBakeDefaults @ 14c8fb740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshMapBaker::InitBakeDefaults(FMeshMapBaker *this)

{
  int *piVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *local_res10;
  longlong local_res18;
  longlong local_res20;
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->BakeDefaults,this->BakeSampleBufferSize,Default);
  lVar13 = (longlong)(this->Bakers).ArrayNum;
  uVar11 = 0;
  pFVar7 = (this->BakeDefaults).AllocatorInstance.Data;
  local_res20 = lVar13;
  if (0 < lVar13) {
    lVar8 = 0;
    local_res10 = pFVar7;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->BakeContexts).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = *(code **)((this->BakeContexts).AllocatorInstance.Data + lVar8 + 8);
      uVar9 = 0;
      if ((int)uVar11 < (this->BakeContexts).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(&local_res10,
                *(undefined8 *)((this->BakeContexts).AllocatorInstance.Data + lVar8 + 0x20));
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x40;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar13 = local_res20;
  uVar11 = (this->BakeResults).ArrayNum;
  pTVar2 = &this->BakeDefaultColors;
  iVar6 = (this->BakeDefaultColors).ArrayNum;
  piVar1 = &(this->BakeDefaultColors).ArrayNum;
  if (iVar6 < (int)uVar11) {
    local_res10 = pFVar7;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar11 - iVar6,&pTVar2->AllocatorInstance,piVar1,
               &(this->BakeDefaultColors).ArrayMax);
  }
  else {
    if ((int)uVar11 < 0) {
      local_res10 = pFVar7;
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    local_res10 = pFVar7;
    if ((int)uVar11 < iVar6) {
      uVar9 = iVar6 - uVar11;
      if (((int)(uVar9 | uVar11) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar9 != 0) {
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
        iVar6 = (*piVar1 - uVar11) - uVar9;
        if (iVar6 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar9 * 0x10,(longlong)iVar6 << 4);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,&pTVar2->AllocatorInstance,*piVar1,&(this->BakeDefaultColors).ArrayMax)
        ;
      }
    }
  }
  uVar11 = 0;
  if (0 < lVar13) {
    lVar13 = 0;
    local_res18 = 0;
    do {
      lVar8 = local_res18;
      uVar9 = 0;
      if ((int)uVar11 < (this->BakeContexts).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (this->BakeContexts).AllocatorInstance.Data;
      iVar12 = 0;
      iVar6 = *(int *)(pFVar7 + lVar8 + 0x38);
      if (0 < iVar6) {
        do {
          uVar9 = 0;
          if ((int)uVar11 < (this->BakeOffsets).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = *(code **)(pFVar7 + lVar8 + 0x10);
          uVar3 = *(undefined8 *)(pFVar7 + lVar8 + 0x20);
          uVar10 = *(int *)((this->BakeOffsets).AllocatorInstance.Data + lVar13 * 4) + iVar12;
          uVar9 = 0;
          if ((int)uVar10 < (this->BakeDefaultColors).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*pcVar4)(iVar12,&local_res10,
                    (this->BakeDefaultColors).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10,
                    uVar3);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar6);
      }
      uVar11 = uVar11 + 1;
      local_res18 = local_res18 + 0x40;
      lVar13 = lVar13 + 1;
    } while (lVar13 < local_res20);
  }
  return;
}

// InitFilter @ 14c8fbb20

void __thiscall UE::Geometry::FMeshMapBaker::InitFilter(FMeshMapBaker *this)

{
  EBakeFilterType EVar1;
  
  EVar1 = this->FilterType;
  this->FilterKernelSize = this->TilePadding;
  if (EVar1 == None) {
    this->FilterKernelSize = 0;
    this->TextureFilterEval = EvaluateFilter<0>;
    this->IsInFilterRegionEval = EvaluateIsInFilterRegion<0>;
  }
  else {
    if (EVar1 == Box) {
      this->TextureFilterEval = EvaluateFilter<1>;
      this->IsInFilterRegionEval = EvaluateIsInFilterRegion<1>;
      return;
    }
    if (EVar1 == BSpline) {
      this->TextureFilterEval = EvaluateFilter<2>;
      this->IsInFilterRegionEval = EvaluateIsInFilterRegion<2>;
      return;
    }
    if (EVar1 == MitchellNetravali) {
      this->TextureFilterEval = EvaluateFilter<3>;
      this->IsInFilterRegionEval = EvaluateIsInFilterRegion<3>;
      return;
    }
  }
  return;
}

// NumEvaluators @ 14c90cb30

int __thiscall UE::Geometry::FMeshMapBaker::NumEvaluators(FMeshMapBaker *this)

{
  return (this->Bakers).ArrayNum;
}

// Reset @ 14c914780

void __thiscall UE::Geometry::FMeshMapBaker::Reset(FMeshMapBaker *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<UE::Geometry::FMeshMapEvaluator,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> *)(this->Bakers).AllocatorInstance.Data,
             (this->Bakers).ArrayNum);
  piVar1 = &(this->Bakers).ArrayMax;
  (this->Bakers).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Bakers).AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,int>
            ((TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
              *)(this->BakeResults).AllocatorInstance.Data,(this->BakeResults).ArrayNum);
  piVar1 = &(this->BakeResults).ArrayMax;
  (this->BakeResults).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BakeResults).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetDimensions @ 14c9169f0

void __thiscall
UE::Geometry::FMeshMapBaker::SetDimensions(FMeshMapBaker *this,FImageDimensions param_1)

{
  this->Dimensions = param_1;
  return;
}

// SetFilter @ 14c916bf0

void __thiscall UE::Geometry::FMeshMapBaker::SetFilter(FMeshMapBaker *this,EBakeFilterType param_1)

{
  this->FilterType = param_1;
  return;
}

// SetGutterEnabled @ 14c916ca0

void __thiscall UE::Geometry::FMeshMapBaker::SetGutterEnabled(FMeshMapBaker *this,bool param_1)

{
  this->bGutterEnabled = param_1;
  return;
}

// SetGutterSize @ 14c916cd0

void __thiscall UE::Geometry::FMeshMapBaker::SetGutterSize(FMeshMapBaker *this,int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  this->GutterSize = iVar1;
  return;
}

// SetSamplesPerPixel @ 14c9172b0

void __thiscall UE::Geometry::FMeshMapBaker::SetSamplesPerPixel(FMeshMapBaker *this,int param_1)

{
  this->SamplesPerPixel = param_1;
  return;
}

// SetTileSize @ 14c917310

void __thiscall UE::Geometry::FMeshMapBaker::SetTileSize(FMeshMapBaker *this,int param_1)

{
  this->TileSize = param_1;
  return;
}

