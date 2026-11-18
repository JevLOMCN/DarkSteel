// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// FindRootsInRange @ 143593be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Math::TPolynomialRootSolver<double,5>::FindRootsInRange
          (TPolynomialRootSolver<double,5> *this,TArrayView<double_const_,int> *param_1,
          double param_2,double param_3,double param_4,int param_5,double param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ForElementType<double> FVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  double *pdVar14;
  longlong lVar15;
  ForElementType<double> FVar16;
  ForElementType<double> *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForElementType<double> FVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  ForElementType<double> FVar28;
  undefined1 auVar29 [16];
  ForElementType<double> FVar30;
  ForElementType<double> FVar31;
  double dVar32;
  undefined4 uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar37;
  ForElementType<double> FVar38;
  ForElementType<double> FVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_1d8 [32];
  int local_188;
  ForElementType<double> local_180 [6];
  double local_150;
  double local_148;
  ForElementType<double> local_140 [5];
  ForElementType<double> local_118 [6];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  (this->Roots).ArrayNum = 0;
  local_180[0] = (ForElementType<double>)param_2;
  local_180[1] = (ForElementType<double>)param_3;
  if ((this->Roots).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
              (8,8,0,(ForElementType<double> *)this,0,&(this->Roots).ArrayMax);
  }
  if (param_1->ArrayNum < 6) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4323613697072169018>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\PolynomialRootSolver.h"
                        ,0x3a,"PolyCoeffs.Num() >= PolynomialDegree + 1");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
    iVar11 = 0;
  }
  else {
    uVar23 = 0;
    pdVar14 = TArrayView<double_const_,int>::operator[](param_1,3);
    dVar32 = *pdVar14;
    local_180[2] = (ForElementType<double>)dVar32;
    pdVar14 = TArrayView<double_const_,int>::operator[](param_1,4);
    dVar27 = *pdVar14;
    dVar4 = dVar27 * __real_4010000000000000;
    local_180[3] = (ForElementType<double>)dVar4;
    pdVar14 = TArrayView<double_const_,int>::operator[](param_1,5);
    uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = __real_3fe0000000000000;
    local_180[4] = (ForElementType<double>)(*pdVar14 * __real_4024000000000000);
    auVar29._0_8_ = dVar32 * __real_4010000000000000 * (double)local_180[4];
    auVar29._8_8_ = 0;
    dVar27 = dVar27 * dVar27 * __real_4030000000000000 - auVar29._0_8_;
    uVar20 = uVar23;
    if (0.0 <= dVar27) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar27;
      auVar29 = sqrtpd(auVar29,auVar5);
      dVar27 = auVar29._0_8_;
      if (dVar4 < 0.0) {
        dVar27 = (double)CONCAT44(auVar29._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                                  auVar29._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
      }
      dVar27 = dVar4 * __real_bfe0000000000000 - dVar27 * __real_3fe0000000000000;
      if (((dVar27 != 0.0) &&
          (FVar21 = (ForElementType<double>)(dVar32 / dVar27), param_2 < (double)FVar21)) &&
         ((double)FVar21 < param_3)) {
        local_118[0] = FVar21;
        uVar23 = 1;
      }
      uVar20 = uVar23;
      if ((((double)local_180[4] != 0.0) &&
          (FVar21 = (ForElementType<double>)(dVar27 / (double)local_180[4]),
          param_2 < (double)FVar21)) && ((double)FVar21 < param_3)) {
        uVar22 = (int)uVar23 + 1;
        uVar20 = (ulonglong)uVar22;
        local_118[uVar23] = FVar21;
        FVar21 = local_118[0];
        if (uVar22 == 2) {
          if ((double)local_118[0] <= (double)local_118[1]) {
            if ((double)local_118[0] == (double)local_118[1]) {
              uVar20 = 1;
            }
          }
          else {
            local_118[0] = local_118[1];
            local_118[1] = FVar21;
          }
        }
      }
    }
    uVar23 = 3;
    uVar22 = 3;
    uVar40 = (undefined4)__real_bff0000000000000;
    uVar42 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      local_118[uVar20] = (ForElementType<double>)param_3;
      lVar15 = 0;
      dVar32 = (double)(int)(6 - uVar22);
      if (0 < (longlong)uVar23) {
        if (3 < (longlong)uVar23) {
          do {
            local_180[lVar15 + 8] = (ForElementType<double>)((double)local_180[lVar15 + 2] * dVar32)
            ;
            local_180[lVar15 + 9] = (ForElementType<double>)((double)local_180[lVar15 + 3] * dVar32)
            ;
            local_180[lVar15 + 10] =
                 (ForElementType<double>)((double)local_180[lVar15 + 4] * dVar32);
            local_180[lVar15 + 0xb] =
                 (ForElementType<double>)((double)local_180[lVar15 + 5] * dVar32);
            lVar15 = lVar15 + 4;
          } while (lVar15 < (longlong)(uVar23 - 3));
          if ((longlong)uVar23 <= lVar15) goto LAB_143593ed7;
        }
        do {
          local_180[lVar15 + 8] = (ForElementType<double>)(dVar32 * (double)local_180[lVar15 + 2]);
          lVar15 = lVar15 + 1;
        } while (lVar15 < (longlong)uVar23);
      }
LAB_143593ed7:
      if (uVar22 < 5) {
        uVar26 = (ulonglong)uVar22;
        uVar24 = uVar22;
        if (uVar22 < 4) {
LAB_143593fa7:
          pFVar17 = local_180 + uVar26 + 2;
          do {
            uVar13 = uVar24 - 1;
            dVar32 = (double)(int)uVar24;
            uVar24 = uVar24 - 1;
            *pFVar17 = (ForElementType<double>)((double)local_180[(ulonglong)uVar13 + 8] / dVar32);
            pFVar17 = pFVar17 + -1;
          } while (0 < (int)uVar24);
        }
        else {
          pFVar17 = local_180 + uVar26;
          iVar11 = uVar22 - 2;
          uVar26 = uVar26 + (ulonglong)((uVar22 - 4 >> 2) + 1) * -4;
          uVar13 = uVar22;
          do {
            iVar12 = iVar11 + 1;
            iVar11 = iVar11 + -4;
            pFVar17[2] = (ForElementType<double>)
                         ((double)local_180[(ulonglong)(uVar13 - 1) + 8] / (double)(int)uVar13);
            uVar24 = uVar13 - 4;
            pFVar17[1] = (ForElementType<double>)
                         ((double)local_180[(ulonglong)(uVar13 - 2) + 8] / (double)iVar12);
            *pFVar17 = (ForElementType<double>)
                       ((double)local_180[(ulonglong)(uVar13 - 3) + 8] / (double)(int)(uVar13 - 2));
            pFVar17[-1] = (ForElementType<double>)
                          ((double)local_180[(ulonglong)(uVar13 - 4) + 8] /
                          (double)(int)(uVar13 - 3));
            pFVar17 = pFVar17 + -4;
            uVar13 = uVar24;
          } while (3 < (int)uVar24);
          if (0 < (int)uVar24) goto LAB_143593fa7;
        }
        uVar24 = 0;
        if ((int)(5 - uVar22) < param_1->ArrayNum) {
          uVar24 = ~(5 - uVar22) >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_180[2] = (ForElementType<double>)param_1->DataPtr[5 - uVar23];
      }
      else {
        if ((param_1->ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_180[2] = (ForElementType<double>)*param_1->DataPtr;
        if ((param_1->ArrayNum < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_180[3] = (ForElementType<double>)param_1->DataPtr[1];
        if ((param_1->ArrayNum < 3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_180[4] = (ForElementType<double>)param_1->DataPtr[2];
        if ((param_1->ArrayNum < 4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_180[5] = (ForElementType<double>)param_1->DataPtr[3];
        if ((param_1->ArrayNum < 5) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_150 = param_1->DataPtr[4];
        if ((param_1->ArrayNum < 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        local_148 = param_1->DataPtr[5];
      }
      FVar21 = local_180[uVar23 + 2];
      uVar26 = uVar23 - 1;
      FVar30 = FVar21;
      if (-1 < (longlong)uVar26) {
        uVar19 = uVar26;
        if (3 < (longlong)uVar23) {
          pFVar17 = local_180 + uVar26;
          uVar25 = uVar23 >> 2;
          uVar19 = uVar26 + uVar25 * -4;
          do {
            FVar30 = (ForElementType<double>)
                     (((((double)FVar30 * param_2 + (double)pFVar17[2]) * param_2 +
                       (double)pFVar17[1]) * param_2 + (double)*pFVar17) * param_2 +
                     (double)pFVar17[-1]);
            pFVar17 = pFVar17 + -4;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
          if ((longlong)uVar19 < 0) goto LAB_143594297;
        }
        do {
          FVar30 = (ForElementType<double>)
                   ((double)FVar30 * param_2 + (double)local_180[uVar19 + 2]);
          uVar19 = uVar19 - 1;
        } while (-1 < (longlong)uVar19);
      }
LAB_143594297:
      uVar19 = 0;
      iVar11 = (int)uVar20 + 1;
      local_188 = 0;
      uVar20 = uVar19;
      if (0 < iVar11) {
        lVar15 = 0;
        do {
          FVar16 = local_118[lVar15];
          uVar36 = 0;
          uVar37 = 0;
          FVar39 = FVar21;
          if (-1 < (longlong)uVar26) {
            uVar20 = uVar26;
            if (3 < (longlong)uVar23) {
              pFVar17 = local_180 + uVar26;
              uVar25 = uVar23 >> 2;
              uVar20 = uVar26 + uVar25 * -4;
              do {
                FVar39 = (ForElementType<double>)
                         (((((double)FVar39 * (double)FVar16 + (double)pFVar17[2]) * (double)FVar16
                           + (double)pFVar17[1]) * (double)FVar16 + (double)*pFVar17) *
                          (double)FVar16 + (double)pFVar17[-1]);
                pFVar17 = pFVar17 + -4;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
              if ((longlong)uVar20 < 0) goto LAB_143594332;
            }
            do {
              FVar39 = (ForElementType<double>)
                       ((double)FVar39 * (double)FVar16 + (double)local_180[uVar20 + 2]);
              uVar20 = uVar20 - 1;
            } while (-1 < (longlong)uVar20);
          }
LAB_143594332:
          if (0.0 <= (double)FVar39 * (double)FVar30) {
            if ((lVar15 != 0) && ((double)FVar30 <= param_6)) {
              local_118[uVar19] = (ForElementType<double>)param_2;
              goto LAB_1435944e7;
            }
          }
          else {
            uVar44 = (int)__real_3ff0000000000000;
            uVar45 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
            if (((double)FVar30 <= 0.0) && (uVar44 = uVar40, uVar45 = uVar42, 0.0 <= (double)FVar30)
               ) {
              uVar44 = 0;
              uVar45 = 0;
            }
            lVar1 = uVar23 - 2;
            FVar30 = local_180[uVar23 + 7];
            FVar38 = (ForElementType<double>)(((double)FVar16 + param_2) * dVar7);
            uVar40 = uVar36;
            uVar42 = uVar37;
            iVar12 = param_5;
            FVar6 = FVar16;
            do {
              FVar31 = FVar21;
              if (-1 < (longlong)uVar26) {
                uVar20 = uVar26;
                if (3 < (longlong)uVar23) {
                  pFVar17 = local_180 + uVar26;
                  uVar25 = uVar23 >> 2;
                  uVar20 = uVar26 + uVar25 * -4;
                  do {
                    FVar31 = (ForElementType<double>)
                             (((((double)FVar31 * (double)FVar38 + (double)pFVar17[2]) *
                                (double)FVar38 + (double)pFVar17[1]) * (double)FVar38 +
                              (double)*pFVar17) * (double)FVar38 + (double)pFVar17[-1]);
                    pFVar17 = pFVar17 + -4;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                  if ((longlong)uVar20 < 0) goto LAB_1435943f2;
                }
                do {
                  FVar31 = (ForElementType<double>)
                           ((double)FVar31 * (double)FVar38 + (double)local_180[uVar20 + 2]);
                  uVar20 = uVar20 - 1;
                } while (-1 < (longlong)uVar20);
              }
LAB_1435943f2:
              uVar41 = uVar36;
              uVar43 = uVar37;
              FVar28 = FVar38;
              if (0.0 < (double)CONCAT44(uVar45,uVar44) * (double)FVar31) {
                uVar41 = uVar40;
                uVar43 = uVar42;
                FVar28 = FVar6;
                param_2 = (double)FVar38;
              }
              FVar6 = FVar28;
              FVar28 = FVar30;
              if (-1 < lVar1) {
                lVar18 = lVar1;
                if (3 < (longlong)uVar26) {
                  pFVar17 = local_180 + uVar23 + 4;
                  uVar20 = uVar26 >> 2;
                  lVar18 = lVar1 + uVar20 * -4;
                  do {
                    FVar28 = (ForElementType<double>)
                             (((((double)FVar28 * (double)FVar38 + (double)pFVar17[2]) *
                                (double)FVar38 + (double)pFVar17[1]) * (double)FVar38 +
                              (double)*pFVar17) * (double)FVar38 + (double)pFVar17[-1]);
                    pFVar17 = pFVar17 + -4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                  if (lVar18 < 0) goto LAB_143594474;
                }
                do {
                  FVar28 = (ForElementType<double>)
                           ((double)FVar28 * (double)FVar38 + (double)local_180[lVar18 + 8]);
                  lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
              }
LAB_143594474:
              if ((double)FVar28 == 0.0) {
LAB_143594492:
                auVar35._8_4_ = uVar41;
                auVar35._0_8_ = FVar6;
                auVar35._12_4_ = uVar43;
                auVar34._8_8_ = auVar35._8_8_;
                auVar34._0_8_ = ((double)FVar6 + param_2) * dVar7;
              }
              else {
                auVar33._8_4_ = uVar36;
                auVar33._0_8_ = FVar38;
                auVar33._12_4_ = uVar37;
                auVar34._8_8_ = auVar33._8_8_;
                auVar34._0_8_ = (double)FVar38 - (double)FVar31 / (double)FVar28;
                if ((auVar34._0_8_ <= param_2) || ((double)FVar6 <= auVar34._0_8_))
                goto LAB_143594492;
              }
              FVar31 = auVar34._0_8_;
              uVar36 = auVar34._8_4_;
              uVar37 = auVar34._12_4_;
            } while ((param_4 < (double)CONCAT44((uint)((ulonglong)((double)FVar31 - (double)FVar38)
                                                       >> 0x20) & uVar9,
                                                 SUB84((double)FVar31 - (double)FVar38,0) & uVar8))
                    && (iVar12 = iVar12 + -1, FVar38 = FVar31, uVar40 = uVar41, uVar42 = uVar43,
                       0 < iVar12));
            uVar40 = (undefined4)__real_bff0000000000000;
            uVar42 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            local_118[uVar19] = FVar31;
LAB_1435944e7:
            uVar19 = (ulonglong)((int)uVar19 + 1);
          }
          lVar15 = lVar15 + 1;
          FVar30 = FVar39;
          param_2 = (double)FVar16;
        } while (lVar15 < iVar11);
        local_188 = (int)uVar19;
        uVar20 = uVar19;
        param_2 = (double)local_180[0];
      }
      uVar22 = uVar22 + 1;
      uVar23 = uVar23 + 1;
      iVar11 = (int)uVar20;
      param_3 = (double)local_180[1];
    } while ((int)uVar22 < 6);
    lVar15 = (longlong)iVar11;
    if (0 < iVar11) {
      FVar21 = (ForElementType<double>)local_118;
      do {
        FVar30 = (this->Roots).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<double>)this;
        if (FVar30 != (ForElementType<double>)0x0) {
          FVar16 = FVar30;
        }
        if ((ulonglong)FVar16 <= (ulonglong)FVar21) {
          FVar16 = (ForElementType<double>)this;
          if (FVar30 != (ForElementType<double>)0x0) {
            FVar16 = FVar30;
          }
          if (((ulonglong)FVar21 <
               (ulonglong)((longlong)FVar16 + (longlong)(this->Roots).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar3 = (code *)swi(3);
            iVar11 = (*pcVar3)();
            return iVar11;
          }
        }
        iVar11 = (this->Roots).ArrayNum;
        if (iVar11 == (this->Roots).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                             (0x808,(ForElementType<double> *)this,&(this->Roots).ArrayMax);
        }
        (this->Roots).ArrayNum = iVar11 + 1;
        FVar30 = (this->Roots).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<double>)this;
        if (FVar30 != (ForElementType<double>)0x0) {
          FVar16 = FVar30;
        }
        uVar2 = *(undefined8 *)FVar21;
        FVar21 = (ForElementType<double>)((longlong)FVar21 + 8);
        *(undefined8 *)((longlong)FVar16 + (longlong)iVar11 * 8) = uVar2;
        lVar15 = lVar15 + -1;
        iVar11 = local_188;
      } while (lVar15 != 0);
    }
  }
  return iVar11;
}

