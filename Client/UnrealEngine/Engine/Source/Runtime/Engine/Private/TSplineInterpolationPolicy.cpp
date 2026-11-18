// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InterpolateWithBasis @ 147a625b0

float __cdecl
UE::Geometry::Spline::TSplineInterpolationPolicy<float>::InterpolateWithBasis
          (TArrayView<float_const_*_const,int> *param_1,TArrayView<float_const_,int> *param_2)

{
  float *pfVar1;
  int iVar2;
  float **ppfVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  uVar9 = 0;
  iVar2 = param_1->ArrayNum;
  fVar10 = 0.0;
  iVar6 = param_2->ArrayNum;
  if (iVar2 < param_2->ArrayNum) {
    iVar6 = iVar2;
  }
  if (0 < (longlong)iVar6) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          fVar10 = (float)(*pcVar4)();
          return fVar10;
        }
      }
      ppfVar3 = param_1->DataPtr;
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          fVar10 = (float)(*pcVar4)();
          return fVar10;
        }
      }
      ppfVar3 = ppfVar3 + lVar8;
      uVar9 = uVar9 + 1;
      pfVar1 = param_2->DataPtr + lVar8;
      lVar8 = lVar8 + 1;
      fVar10 = fVar10 + **ppfVar3 * *pfVar1;
    } while (lVar8 < iVar6);
    return fVar10;
  }
  return 0.0;
}

// InterpolateWithBasis @ 147a62710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
UE::Geometry::Spline::TSplineInterpolationPolicy<UE::Math::TQuat<double>_>::InterpolateWithBasis
          (TQuat<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TQuat<double>_const_*_const,int> *param_1,
          TArrayView<float_const_,int> *param_2)

{
  double *pdVar1;
  TQuat<double> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  ulonglong uVar16;
  double *pdVar17;
  double *pdVar18;
  bool bVar19;
  TQuat<double> **ppTVar20;
  TQuat<double> *pTVar21;
  undefined1 (*pauVar22) [16];
  double *pdVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double in_XMM5_Qb;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double unaff_XMM7_Qb;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  TQuat<double> *local_1c8;
  double local_1c0 [4];
  double local_1a0 [7];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148 [4];
  double local_128 [2];
  double local_118 [14];
  ulonglong local_a8;
  double dVar42;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  iVar25 = param_2->ArrayNum;
  if (param_1->ArrayNum < param_2->ArrayNum) {
    iVar25 = param_1->ArrayNum;
  }
  if (iVar25 != 0) {
    local_1c8 = __return_storage_ptr__;
    ppTVar20 = TArrayView<UE::Math::TQuat<double>_const_*_const,int>::operator[](param_1,0);
    dVar42 = _UNK_15076c718;
    dVar38 = ___xmm_bff0000000000000bff0000000000000;
    dVar8 = __real_3f1a36e2e0000000;
    uVar27 = 0;
    dVar10 = 0.0;
    pTVar21 = *ppTVar20;
    local_128[0] = 0.0;
    local_128[1] = 0.0;
    local_118[0] = 0.0;
    local_118[1] = 0.0;
    local_118[2] = 0.0;
    local_118[3] = 0.0;
    local_118[4] = 0.0;
    local_118[5] = 0.0;
    local_118[6] = 0.0;
    local_118[7] = 0.0;
    local_118[8] = 0.0;
    local_118[9] = 0.0;
    local_118[10] = 0.0;
    local_118[0xb] = 0.0;
    local_118[0xc] = 0.0;
    local_118[0xd] = 0.0;
    dVar9 = 0.0;
    if (0 < iVar25) {
      lVar26 = 0;
      do {
        local_1d0 = (longlong)param_2->ArrayNum;
        uVar30 = 0;
        if ((int)uVar27 < param_2->ArrayNum) {
          uVar30 = ~uVar27 >> 0x1f;
        }
        if (uVar30 == 0) {
          local_1d8 = (longlong)(int)uVar27;
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar19) {
            pcVar3 = (code *)swi(3);
            pTVar21 = (TQuat<double> *)(*pcVar3)();
            return pTVar21;
          }
        }
        dVar9 = (double)param_2->DataPtr[lVar26];
        if (dVar8 < dVar9) {
          local_1d0 = (longlong)param_1->ArrayNum;
          uVar30 = 0;
          if ((int)uVar27 < param_1->ArrayNum) {
            uVar30 = ~uVar27 >> 0x1f;
          }
          if (uVar30 == 0) {
            local_1d8 = (longlong)(int)uVar27;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar19) {
              pcVar3 = (code *)swi(3);
              pTVar21 = (TQuat<double> *)(*pcVar3)();
              return pTVar21;
            }
          }
          pTVar2 = param_1->DataPtr[lVar26];
          auVar41._0_8_ = pTVar2->Z;
          auVar41._8_8_ = pTVar2->W;
          auVar46._0_8_ = pTVar2->X;
          auVar46._8_8_ = pTVar2->Y;
          auVar11._4_8_ = in_XMM5_Qb;
          auVar11._0_4_ = (int)((ulonglong)auVar41._0_8_ >> 0x20);
          auVar43._0_8_ = auVar11._0_8_ << 0x20;
          auVar43._8_4_ = (int)auVar41._8_8_;
          auVar43._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
          local_1c0[3] = auVar43._8_8_;
          auVar12._4_8_ = unaff_XMM7_Qb;
          auVar12._0_4_ = (int)((ulonglong)auVar46._0_8_ >> 0x20);
          auVar48._0_8_ = auVar12._0_8_ << 0x20;
          auVar48._8_4_ = (int)auVar46._8_8_;
          auVar48._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
          local_1c0[1] = auVar48._8_8_;
          in_XMM5_Qb = (double)auVar41._8_8_;
          unaff_XMM7_Qb = (double)auVar46._8_8_;
          local_168 = auVar46;
          local_158 = auVar41;
          if (local_1c0[3] * pTVar21->W + auVar41._0_8_ * pTVar21->Z +
              local_1c0[1] * pTVar21->Y + auVar46._0_8_ * pTVar21->X < 0.0) {
            auVar46._0_8_ = auVar46._0_8_ * dVar38;
            unaff_XMM7_Qb = (double)auVar46._8_8_ * dVar42;
            auVar41._0_8_ = dVar38 * auVar41._0_8_;
            in_XMM5_Qb = dVar42 * (double)auVar41._8_8_;
            uVar31 = (undefined4)((ulonglong)in_XMM5_Qb >> 0x20);
            auVar13._4_8_ = auVar46._8_8_;
            auVar13._0_4_ = (int)((ulonglong)auVar46._0_8_ >> 0x20);
            auVar49._0_8_ = auVar13._0_8_ << 0x20;
            auVar49._8_4_ = SUB84(unaff_XMM7_Qb,0);
            auVar49._12_4_ = (int)((ulonglong)unaff_XMM7_Qb >> 0x20);
            local_168._8_8_ = unaff_XMM7_Qb;
            local_168._0_8_ = auVar46._0_8_;
            auVar14._4_8_ = auVar41._8_8_;
            auVar14._0_4_ = (int)((ulonglong)auVar41._0_8_ >> 0x20);
            auVar44._0_8_ = auVar14._0_8_ << 0x20;
            auVar44._8_4_ = SUB84(in_XMM5_Qb,0);
            auVar44._12_4_ = uVar31;
            local_158._8_4_ = SUB84(in_XMM5_Qb,0);
            local_158._0_8_ = auVar41._0_8_;
            local_158._12_4_ = uVar31;
            local_1c0[3] = auVar44._8_8_;
            local_1c0[1] = auVar49._8_8_;
          }
          local_1c0[0] = auVar46._0_8_;
          pauVar22 = (undefined1 (*) [16])local_118;
          local_1c0[2] = auVar41._0_8_;
          lVar24 = 0;
          do {
            dVar7 = *(double *)(pauVar22[-1] + 8);
            dVar6 = dVar9 * local_1c0[lVar24];
            lVar24 = lVar24 + 1;
            auVar32._8_4_ = SUB84(dVar6,0);
            auVar32._0_8_ = dVar6;
            auVar32._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            *(double *)pauVar22[-1] = dVar6 * auVar46._0_8_ + *(double *)pauVar22[-1];
            *(double *)(pauVar22[-1] + 8) = auVar32._8_8_ * local_1c0[1] + dVar7;
            dVar7 = dVar6 * local_1c0[3] + *(double *)(*pauVar22 + 8);
            auVar5._8_4_ = SUB84(dVar7,0);
            auVar5._0_8_ = dVar6 * auVar41._0_8_ + *(double *)*pauVar22;
            auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            *pauVar22 = auVar5;
            pauVar22 = pauVar22 + 2;
          } while (lVar24 < 4);
          dVar10 = dVar10 + dVar9;
        }
        uVar27 = uVar27 + 1;
        lVar26 = lVar26 + 1;
        __return_storage_ptr__ = local_1c8;
        dVar9 = dVar10;
      } while (lVar26 < iVar25);
    }
    uVar27 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar30,uVar27) &&
        (double)CONCAT44(uVar30,uVar27) != __real_3e45798ee2308c3a) {
      lVar26 = 4;
      dVar9 = __real_3ff0000000000000 / dVar9;
      uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
      pdVar23 = local_118;
      do {
        auVar33._8_4_ = SUB84(dVar9,0);
        auVar33._0_8_ = dVar9;
        auVar33._12_4_ = uVar31;
        pdVar23[-2] = dVar9 * pdVar23[-2];
        pdVar23[-1] = auVar33._8_8_ * pdVar23[-1];
        auVar34._8_4_ = SUB84(dVar9,0);
        auVar34._0_8_ = dVar9;
        auVar34._12_4_ = uVar31;
        *pdVar23 = dVar9 * *pdVar23;
        pdVar23[1] = auVar34._8_8_ * pdVar23[1];
        lVar26 = lVar26 + -1;
        pdVar23 = pdVar23 + 4;
      } while (lVar26 != 0);
      local_148[0] = 0.0;
      local_148[1] = 0.0;
      iVar25 = 0;
      dVar9 = 0.0;
      local_148[2] = ___xmm_3ff00000000000000000000000000000;
      local_148[3] = _UNK_15061cbc8;
      while( true ) {
        pdVar23 = local_118;
        local_1a0[0] = 0.0;
        local_1a0[1] = 0.0;
        lVar26 = 0;
        local_1a0[2] = 0.0;
        local_1a0[3] = 0.0;
        do {
          dVar10 = *pdVar23;
          pdVar17 = pdVar23 + 1;
          pdVar1 = pdVar23 + -2;
          pdVar18 = pdVar23 + -1;
          pdVar23 = pdVar23 + 4;
          local_1a0[lVar26] =
               *pdVar1 * local_148[0] + local_148[2] * dVar10 +
               *pdVar18 * local_148[1] + local_148[3] * *pdVar17 + local_1a0[lVar26];
          lVar26 = lVar26 + 1;
        } while (lVar26 < 4);
        dVar10 = local_1a0[3] * local_1a0[3] + local_1a0[2] * local_1a0[2] +
                 local_1a0[0] * local_1a0[0] + local_1a0[1] * local_1a0[1];
        uVar27 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar30 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar30,uVar27) < __real_3e45798ee2308c3a ||
            (double)CONCAT44(uVar30,uVar27) == __real_3e45798ee2308c3a) break;
        pdVar23 = local_118;
        lVar26 = 0;
        local_148[3] = __real_3ff0000000000000 / SQRT(dVar10);
        auVar45._8_4_ = SUB84(local_148[3],0);
        auVar45._0_8_ = local_148[3];
        auVar45._12_4_ = (int)((ulonglong)local_148[3] >> 0x20);
        local_148[0] = local_148[3] * local_1a0[0];
        local_148[1] = auVar45._8_8_ * local_1a0[1];
        local_148[2] = local_148[3] * local_1a0[2];
        local_148[3] = local_148[3] * local_1a0[3];
        auVar40._0_12_ = ZEXT812(0);
        auVar40._12_4_ = 0;
        dVar10 = 0.0;
        dVar8 = 0.0;
        do {
          dVar38 = local_148[lVar26];
          lVar26 = lVar26 + 1;
          dVar42 = auVar40._8_8_;
          auVar40._0_8_ = auVar40._0_8_ + pdVar23[-2] * dVar38 * local_148[0];
          auVar40._8_8_ = dVar42 + pdVar23[-1] * dVar38 * local_148[1];
          dVar42 = *pdVar23;
          pdVar1 = pdVar23 + 1;
          pdVar23 = pdVar23 + 4;
          auVar41._0_8_ = dVar38 * *pdVar1 * local_148[3];
          dVar10 = dVar10 + dVar38 * dVar42 * local_148[2];
          dVar8 = dVar8 + auVar41._0_8_;
        } while (lVar26 < 4);
        dVar10 = dVar10 + auVar40._0_8_ + dVar8 + auVar40._8_8_;
        dVar9 = dVar10 - dVar9;
        uVar27 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar30 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (((double)CONCAT44(uVar30,uVar27) < __real_3e45798ee2308c3a ||
             (double)CONCAT44(uVar30,uVar27) == __real_3e45798ee2308c3a) ||
           (iVar25 = iVar25 + 1, dVar9 = dVar10, 0x1f < iVar25)) {
          auVar15._4_8_ = auVar41._0_8_;
          auVar15._0_4_ = (int)((ulonglong)local_148[0] >> 0x20);
          auVar35._0_8_ = auVar15._0_8_ << 0x20;
          auVar35._8_4_ = SUB84(local_148[1],0);
          auVar35._12_4_ = (int)((ulonglong)local_148[1] >> 0x20);
          dVar38 = auVar35._8_8_;
          dVar10 = local_148[2] * local_148[2] + local_148[0] * local_148[0];
          dVar8 = local_148[3] * local_148[3] + dVar38 * dVar38;
          dVar9 = dVar8 + dVar10;
          dVar10 = dVar10 + dVar8;
          auVar4._8_4_ = SUB84(dVar10,0);
          auVar4._0_8_ = dVar9;
          auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar41 = sqrtpd(auVar40,auVar4);
          uVar28 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
          uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
          uVar27 = (uint)(uVar28 >> 0x20);
          uVar30 = (uint)(uVar29 >> 0x20);
          auVar36._0_4_ =
               ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar36._4_4_ =
               ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar36._8_4_ =
               ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar36._12_4_ =
               ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar47._0_8_ = uVar28 & (ulonglong)(auVar46._0_8_ * local_148[0]);
          uVar16 = uVar29 & (ulonglong)(auVar46._8_8_ * dVar38);
          auVar47._8_4_ = (undefined4)uVar16;
          auVar47._12_4_ = (undefined4)(uVar16 >> 0x20);
          auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
          auVar39._0_4_ =
               ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar39._4_4_ =
               ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar39._8_4_ =
               ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar39._12_4_ =
               ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          __return_storage_ptr__->X = (double)SUB168(auVar47 | auVar36,0);
          __return_storage_ptr__->Y = (double)SUB168(auVar47 | auVar36,8);
          auVar37._0_8_ = (ulonglong)(auVar41._0_8_ * local_148[2]) & uVar28;
          uVar29 = (ulonglong)(auVar41._8_8_ * local_148[3]) & uVar29;
          auVar37._8_4_ = (undefined4)uVar29;
          auVar37._12_4_ = (undefined4)(uVar29 >> 0x20);
          __return_storage_ptr__->Z = (double)SUB168(auVar39 | auVar37,0);
          __return_storage_ptr__->W = (double)SUB168(auVar39 | auVar37,8);
          return __return_storage_ptr__;
        }
      }
    }
  }
  dVar9 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar9;
  dVar9 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar9;
  return __return_storage_ptr__;
}

