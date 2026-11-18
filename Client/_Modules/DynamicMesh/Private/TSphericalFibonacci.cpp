// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FindIndex @ 14c8e6510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TSphericalFibonacci<double>::FindIndex
          (TSphericalFibonacci<double> *this,TVector<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined4 extraout_EAX;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined7 extraout_var;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar21;
  double dVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar22;
  undefined1 auVar25 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
    ::__l2::PHI = __real_3ff9e3779b97f4a8;
    _Init_thread_footer(&`public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar5 = atan2((param_1->field0_0x0)._s_0.Y,(param_1->field0_0x0)._s_0.X);
  dVar12 = __real_3ff0000000000000;
  uVar19 = SUB84(dVar5,0);
  uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  if (__real_400921fb54442d18 <= dVar5) {
    uVar19 = SUB84(__real_400921fb54442d18,0);
    uVar21 = (undefined4)((ulonglong)__real_400921fb54442d18 >> 0x20);
  }
  dVar5 = log((__real_3ff0000000000000 - dVar1 * dVar1) * (double)this->N * ___real_401c196908691da7
             );
  dVar20 = `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
           ::__l2::PHI;
  dVar22 = log(`public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
               ::__l2::PHI *
               `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
               ::__l2::PHI);
  dVar5 = dVar5 / dVar22;
  lVar18 = (longlong)dVar5;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar5)) {
    auVar6._8_4_ = SUB84(dVar5,0);
    auVar6._0_8_ = dVar5;
    auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar15 = movmskpd(extraout_EAX,auVar6);
    dVar5 = (double)(longlong)(lVar18 - (ulonglong)(uVar15 & 1));
  }
  if (dVar5 <= __real_4000000000000000) {
    dVar5 = __real_4000000000000000;
  }
  dVar5 = pow(dVar20,dVar5);
  dVar5 = dVar5 * ___real_3fdc9f25c5bfedd9;
  dVar20 = (double)round(SUB84(dVar5,0));
  uVar15 = round(SUB84(dVar5 * `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
                               ::__l2::PHI,0));
  dVar27 = `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
           ::__l2::PHI - dVar12;
  dVar5 = (dVar20 + dVar12) * dVar27;
  lVar18 = (longlong)dVar5;
  dVar22 = dVar5;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar5)) {
    auVar25._8_8_ = dVar5;
    auVar25._0_8_ = dVar5;
    uVar15 = movmskpd(uVar15,auVar25);
    uVar15 = uVar15 & 1;
    dVar22 = (double)(longlong)(lVar18 - (ulonglong)uVar15);
  }
  dVar10 = ((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) + dVar12) * dVar27;
  dVar22 = (dVar5 - dVar22) * __real_401921fb54442d18 - dVar27 * __real_401921fb54442d18;
  lVar18 = (longlong)dVar10;
  dVar5 = dVar10;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar10)) {
    auVar3._8_4_ = SUB84(dVar10,0);
    auVar3._0_8_ = dVar10;
    auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uVar15 = movmskpd(uVar15,auVar3);
    uVar15 = uVar15 & 1;
    dVar5 = (double)(longlong)(lVar18 - (ulonglong)uVar15);
  }
  dVar23 = dVar12 / (double)this->N;
  dVar5 = (dVar10 - dVar5) * __real_401921fb54442d18 - dVar27 * __real_401921fb54442d18;
  dVar27 = dVar20 * __real_c000000000000000 * dVar23;
  dVar23 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * __real_c000000000000000 * dVar23;
  dVar20 = dVar23 * dVar22 - dVar27 * dVar5;
  if ((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3cb0000000000000) {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8115802994596904539>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MatrixTypes.h"
                        ,0x1a5,"TMathUtil<RealType>::Abs(Det) >= TMathUtil<RealType>::Epsilon");
    uVar15 = (uint)CONCAT71(extraout_var,bVar14);
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      iVar16 = (*pcVar2)();
      return iVar16;
    }
  }
  dVar13 = __real_bff0000000000000;
  dVar10 = (double)this->N;
  dVar20 = dVar12 / dVar20;
  dVar29 = dVar12 - dVar12 / dVar10;
  dVar1 = dVar1 - dVar29;
  dVar5 = dVar20 * dVar23 * (double)CONCAT44(uVar21,uVar19) - dVar20 * dVar5 * dVar1;
  lVar18 = (longlong)dVar5;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar5)) {
    auVar11._8_4_ = SUB84(dVar5,0);
    auVar11._0_8_ = dVar5;
    auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar15 = movmskpd(uVar15,auVar11);
    uVar15 = uVar15 & 1;
    dVar5 = (double)(longlong)(lVar18 - (ulonglong)uVar15);
  }
  dVar1 = dVar20 * dVar22 * dVar1 - dVar20 * dVar27 * (double)CONCAT44(uVar21,uVar19);
  lVar18 = (longlong)dVar1;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar1)) {
    auVar9._8_4_ = SUB84(dVar1,0);
    auVar9._0_8_ = dVar1;
    auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uVar15 = movmskpd(uVar15,auVar9);
    dVar1 = (double)(longlong)(lVar18 - (ulonglong)(uVar15 & 1));
  }
  dVar22 = 0.0;
  uVar15 = 0;
  uVar19 = (undefined4)__real_7fefffffffffffff;
  uVar21 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar31 = `public:_int___cdecl_UE::Geometry::TSphericalFibonacci<double>::FindIndex(UE::Math::TVector<double>_const&___ptr64)___ptr64'
           ::__l2::PHI - dVar12;
  dVar20 = dVar10 * __real_3fe0000000000000;
  do {
    uVar17 = uVar15 & 1;
    dVar24 = ((double)(uVar15 >> 1) + dVar1) * dVar23 + ((double)uVar17 + dVar5) * dVar27 + dVar29;
    dVar8 = dVar13;
    if ((dVar13 <= dVar24) && (dVar8 = dVar24, dVar12 <= dVar24)) {
      dVar8 = dVar12;
    }
    dVar8 = dVar20 - ((dVar8 + dVar8) - dVar24) * dVar10 * __real_3fe0000000000000;
    lVar18 = (longlong)dVar8;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar8)) {
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      uVar17 = movmskpd(uVar17,auVar7);
      uVar17 = uVar17 & 1;
      dVar8 = (double)(longlong)(lVar18 - (ulonglong)uVar17);
    }
    dVar28 = dVar31 * dVar8;
    dVar24 = dVar12 - (dVar8 + dVar8 + dVar12) * (dVar12 / dVar10);
    dVar30 = SQRT(dVar12 - dVar24 * dVar24);
    if (((longlong)dVar28 != -0x8000000000000000) && ((double)(longlong)dVar28 != dVar28)) {
      auVar4._8_4_ = SUB84(dVar28,0);
      auVar4._0_8_ = dVar28;
      auVar4._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      movmskpd(uVar17,auVar4);
    }
    __libm_sse2_sincos_();
    auVar26._4_4_ = extraout_XMM0_Db_00;
    auVar26._0_4_ = extraout_XMM0_Da_00;
    auVar26._8_4_ = extraout_XMM0_Dc;
    auVar26._12_4_ = extraout_XMM0_Dd;
    dVar28 = (param_1->field0_0x0)._s_0.X - auVar26._8_8_ * dVar30;
    dVar24 = (param_1->field0_0x0)._s_0.Z - dVar24;
    dVar30 = (param_1->field0_0x0)._s_0.Y -
             (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar30;
    dVar24 = dVar30 * dVar30 + dVar28 * dVar28 + dVar24 * dVar24;
    if (dVar24 < (double)CONCAT44(uVar21,uVar19)) {
      dVar22 = dVar8;
    }
    if ((double)CONCAT44(uVar21,uVar19) <= dVar24) {
      dVar24 = (double)CONCAT44(uVar21,uVar19);
    }
    uVar15 = uVar15 + 1;
    uVar19 = SUB84(dVar24,0);
    uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
  } while ((int)uVar15 < 4);
  return (int)dVar22;
}

